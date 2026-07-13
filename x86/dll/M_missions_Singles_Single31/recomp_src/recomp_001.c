#include "recomp.h"

/* FUN_10005ab0 @ 0x114c5ab0 (47 bytes, 22 insns) */
void f_114c5ab0(void) {
  FTRACE(0x114c5ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5ab1 mov ebp, esp */
  EBP = (ESP);
  /* 114c5ab3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5ab7 push esi */
  push32((uint32_t)(ESI));
  /* 114c5ab8 push edi */
  push32((uint32_t)(EDI));
  /* 114c5ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5aba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5abd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5ac9 pop ecx */
  ECX = (pop32());
  /* 114c5aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5ad0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5ad3 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 114c5ad6 pop edi */
  EDI = (pop32());
  /* 114c5ad7 pop esi */
  ESI = (pop32());
  /* 114c5ad8 pop ebx */
  EBX = (pop32());
  /* 114c5ad9 mov esp, ebp */
  ESP = (EBP);
  /* 114c5adb pop ebp */
  EBP = (pop32());
  /* 114c5adc ret 4 */
  ESPCHK(0x114c5ab0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005af0 @ 0x114c5af0 (94 bytes, 39 insns) */
void f_114c5af0(void) {
  FTRACE(0x114c5af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5af0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5af1 mov ebp, esp */
  EBP = (ESP);
  /* 114c5af3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5af6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5af7 push esi */
  push32((uint32_t)(ESI));
  /* 114c5af8 push edi */
  push32((uint32_t)(EDI));
  /* 114c5af9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5afa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5afd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5b09 pop ecx */
  ECX = (pop32());
  /* 114c5b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5b0d mov esi, esp */
  ESI = (ESP);
  /* 114c5b0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5b12 push eax */
  push32((uint32_t)(EAX));
  /* 114c5b13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5b16 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5b17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5b1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114c5b1d push eax */
  push32((uint32_t)(EAX));
  /* 114c5b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5b21 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5b24 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5b25 call dword ptr [0x115014f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014f0))), 0x114c5b2bu);
  /* 114c5b2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5b30 call 0x114c9460 */
  push32(0x114c5b35u); f_114c9460();
  /* 114c5b35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5b38 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5b3b pop edi */
  EDI = (pop32());
  /* 114c5b3c pop esi */
  ESI = (pop32());
  /* 114c5b3d pop ebx */
  EBX = (pop32());
  /* 114c5b3e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5b41 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5b43 call 0x114c9460 */
  push32(0x114c5b48u); f_114c9460();
  /* 114c5b48 mov esp, ebp */
  ESP = (EBP);
  /* 114c5b4a pop ebp */
  EBP = (pop32());
  /* 114c5b4b ret 4 */
  ESPCHK(0x114c5af0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005b70 @ 0x114c5b70 (221 bytes, 81 insns) */
void f_114c5b70(void) {
  FTRACE(0x114c5b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5b70 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5b71 mov ebp, esp */
  EBP = (ESP);
  /* 114c5b73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5b76 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5b77 push esi */
  push32((uint32_t)(ESI));
  /* 114c5b78 push edi */
  push32((uint32_t)(EDI));
  /* 114c5b79 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5b7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c5b7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c5b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5b89 pop ecx */
  ECX = (pop32());
  /* 114c5b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5b8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5b90 call 0x114c1172 */
  push32(0x114c5b95u); f_114c1172();
  /* 114c5b95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c5b97 jne 0x114c5c3a */
  if (!C.zf) goto L_114c5c3a;
  /* 114c5b9d mov esi, esp */
  ESI = (ESP);
  /* 114c5b9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5ba2 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 114c5ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5ba6 call dword ptr [0x1150153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150153c))), 0x114c5bacu);
  /* 114c5bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5baf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5bb1 call 0x114c9460 */
  push32(0x114c5bb6u); f_114c9460();
  /* 114c5bb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c5bbd jmp 0x114c5bc8 */
  goto L_114c5bc8;
L_114c5bbf:;
  /* 114c5bbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c5bc2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5bc5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114c5bc8:;
  /* 114c5bc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c5bcb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5bce jge 0x114c5c1b */
  if ((C.sf==C.of)) goto L_114c5c1b;
  /* 114c5bd0 mov esi, esp */
  ESI = (ESP);
  /* 114c5bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c5bd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5bdb mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 114c5bde push eax */
  push32((uint32_t)(EAX));
  /* 114c5bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5be2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114c5be5 push edx */
  push32((uint32_t)(EDX));
  /* 114c5be6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5be9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c5bec push ecx */
  push32((uint32_t)(ECX));
  /* 114c5bed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5bf0 push edx */
  push32((uint32_t)(EDX));
  /* 114c5bf1 call dword ptr [0x11501550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501550))), 0x114c5bf7u);
  /* 114c5bf7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5bfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5bfc call 0x114c9460 */
  push32(0x114c5c01u); f_114c9460();
  /* 114c5c01 mov esi, esp */
  ESI = (ESP);
  /* 114c5c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 114c5c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5c08 push eax */
  push32((uint32_t)(EAX));
  /* 114c5c09 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c5c0fu);
  /* 114c5c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5c14 call 0x114c9460 */
  push32(0x114c5c19u); f_114c9460();
  /* 114c5c19 jmp 0x114c5bbf */
  goto L_114c5bbf;
L_114c5c1b:;
  /* 114c5c1b mov esi, esp */
  ESI = (ESP);
  /* 114c5c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c5c1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5c22 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5c26 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 114c5c29 push eax */
  push32((uint32_t)(EAX));
  /* 114c5c2a call dword ptr [0x11501594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501594))), 0x114c5c30u);
  /* 114c5c30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5c35 call 0x114c9460 */
  push32(0x114c5c3au); f_114c9460();
L_114c5c3a:;
  /* 114c5c3a pop edi */
  EDI = (pop32());
  /* 114c5c3b pop esi */
  ESI = (pop32());
  /* 114c5c3c pop ebx */
  EBX = (pop32());
  /* 114c5c3d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5c40 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5c42 call 0x114c9460 */
  push32(0x114c5c47u); f_114c9460();
  /* 114c5c47 mov esp, ebp */
  ESP = (EBP);
  /* 114c5c49 pop ebp */
  EBP = (pop32());
  /* 114c5c4a ret 8 */
  ESPCHK(0x114c5b70u, _esp0);
  ESP += 12; return;
}

/* FUN_10005c90 @ 0x114c5c90 (47 bytes, 22 insns) */
void f_114c5c90(void) {
  FTRACE(0x114c5c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5c90 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5c91 mov ebp, esp */
  EBP = (ESP);
  /* 114c5c93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5c96 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5c97 push esi */
  push32((uint32_t)(ESI));
  /* 114c5c98 push edi */
  push32((uint32_t)(EDI));
  /* 114c5c99 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5c9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5c9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5ca9 pop ecx */
  ECX = (pop32());
  /* 114c5caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5cb3 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 114c5cb6 pop edi */
  EDI = (pop32());
  /* 114c5cb7 pop esi */
  ESI = (pop32());
  /* 114c5cb8 pop ebx */
  EBX = (pop32());
  /* 114c5cb9 mov esp, ebp */
  ESP = (EBP);
  /* 114c5cbb pop ebp */
  EBP = (pop32());
  /* 114c5cbc ret 4 */
  ESPCHK(0x114c5c90u, _esp0);
  ESP += 8; return;
}

/* FUN_10005cd0 @ 0x114c5cd0 (47 bytes, 22 insns) */
void f_114c5cd0(void) {
  FTRACE(0x114c5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 114c5cd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5cd7 push esi */
  push32((uint32_t)(ESI));
  /* 114c5cd8 push edi */
  push32((uint32_t)(EDI));
  /* 114c5cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5cda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5cdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5ce2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5ce7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5ce9 pop ecx */
  ECX = (pop32());
  /* 114c5cea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5cf3 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 114c5cf6 pop edi */
  EDI = (pop32());
  /* 114c5cf7 pop esi */
  ESI = (pop32());
  /* 114c5cf8 pop ebx */
  EBX = (pop32());
  /* 114c5cf9 mov esp, ebp */
  ESP = (EBP);
  /* 114c5cfb pop ebp */
  EBP = (pop32());
  /* 114c5cfc ret 4 */
  ESPCHK(0x114c5cd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d10 @ 0x114c5d10 (131 bytes, 48 insns) */
void f_114c5d10(void) {
  FTRACE(0x114c5d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5d10 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5d11 mov ebp, esp */
  EBP = (ESP);
  /* 114c5d13 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5d16 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5d17 push esi */
  push32((uint32_t)(ESI));
  /* 114c5d18 push edi */
  push32((uint32_t)(EDI));
  /* 114c5d19 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5d1a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 114c5d1d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 114c5d22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5d27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5d29 pop ecx */
  ECX = (pop32());
  /* 114c5d2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5d2d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c5d34 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114c5d3b jmp 0x114c5d46 */
  goto L_114c5d46;
L_114c5d3d:;
  /* 114c5d3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114c5d40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5d43 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114c5d46:;
  /* 114c5d46 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5d4a jge 0x114c5d79 */
  if ((C.sf==C.of)) goto L_114c5d79;
  /* 114c5d4c mov esi, esp */
  ESI = (ESP);
  /* 114c5d4e mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 114c5d51 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5d52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5d55 push edx */
  push32((uint32_t)(EDX));
  /* 114c5d56 call dword ptr [0x115014fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014fc))), 0x114c5d5cu);
  /* 114c5d5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5d5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5d61 call 0x114c9460 */
  push32(0x114c5d66u); f_114c9460();
  /* 114c5d66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c5d68 jle 0x114c5d77 */
  if ((C.zf||C.sf!=C.of)) goto L_114c5d77;
  /* 114c5d6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114c5d6d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114c5d70 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_114c5d77:;
  /* 114c5d77 jmp 0x114c5d3d */
  goto L_114c5d3d;
L_114c5d79:;
  /* 114c5d79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5d7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c5d7f mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 114c5d82 pop edi */
  EDI = (pop32());
  /* 114c5d83 pop esi */
  ESI = (pop32());
  /* 114c5d84 pop ebx */
  EBX = (pop32());
  /* 114c5d85 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5d88 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5d8a call 0x114c9460 */
  push32(0x114c5d8fu); f_114c9460();
  /* 114c5d8f mov esp, ebp */
  ESP = (EBP);
  /* 114c5d91 pop ebp */
  EBP = (pop32());
  /* 114c5d92 ret  */
  ESPCHK(0x114c5d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x114c5dc0 (47 bytes, 22 insns) */
void f_114c5dc0(void) {
  FTRACE(0x114c5dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5dc1 mov ebp, esp */
  EBP = (ESP);
  /* 114c5dc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5dc7 push esi */
  push32((uint32_t)(ESI));
  /* 114c5dc8 push edi */
  push32((uint32_t)(EDI));
  /* 114c5dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5dca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5dcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5dd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5dd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5dd9 pop ecx */
  ECX = (pop32());
  /* 114c5dda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5de3 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 114c5de6 pop edi */
  EDI = (pop32());
  /* 114c5de7 pop esi */
  ESI = (pop32());
  /* 114c5de8 pop ebx */
  EBX = (pop32());
  /* 114c5de9 mov esp, ebp */
  ESP = (EBP);
  /* 114c5deb pop ebp */
  EBP = (pop32());
  /* 114c5dec ret 4 */
  ESPCHK(0x114c5dc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005e00 @ 0x114c5e00 (65 bytes, 28 insns) */
void f_114c5e00(void) {
  FTRACE(0x114c5e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5e00 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5e01 mov ebp, esp */
  EBP = (ESP);
  /* 114c5e03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5e06 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5e07 push esi */
  push32((uint32_t)(ESI));
  /* 114c5e08 push edi */
  push32((uint32_t)(EDI));
  /* 114c5e09 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5e0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5e0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5e19 pop ecx */
  ECX = (pop32());
  /* 114c5e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5e20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c5e23 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 114c5e26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5e29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c5e2c mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 114c5e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5e32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c5e35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 114c5e38 pop edi */
  EDI = (pop32());
  /* 114c5e39 pop esi */
  ESI = (pop32());
  /* 114c5e3a pop ebx */
  EBX = (pop32());
  /* 114c5e3b mov esp, ebp */
  ESP = (EBP);
  /* 114c5e3d pop ebp */
  EBP = (pop32());
  /* 114c5e3e ret 0xc */
  ESPCHK(0x114c5e00u, _esp0);
  ESP += 16; return;
}

/* FUN_10005e60 @ 0x114c5e60 (166 bytes, 58 insns) */
void f_114c5e60(void) {
  FTRACE(0x114c5e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5e60 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5e61 mov ebp, esp */
  EBP = (ESP);
  /* 114c5e63 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5e66 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5e67 push esi */
  push32((uint32_t)(ESI));
  /* 114c5e68 push edi */
  push32((uint32_t)(EDI));
  /* 114c5e69 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5e6a lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 114c5e6d mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 114c5e72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5e77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5e79 pop ecx */
  ECX = (pop32());
  /* 114c5e7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5e7d mov esi, esp */
  ESI = (ESP);
  /* 114c5e7f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c5e82 push eax */
  push32((uint32_t)(EAX));
  /* 114c5e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c5e85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5e88 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5e89 call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c5e8fu);
  /* 114c5e8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5e94 call 0x114c9460 */
  push32(0x114c5e99u); f_114c9460();
  /* 114c5e99 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114c5e9c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114c5ea2 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5ea5 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 114c5ea8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c5ead cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5eaf jge 0x114c5ebd */
  if ((C.sf==C.of)) goto L_114c5ebd;
  /* 114c5eb1 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 114c5eb5 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 114c5eb9 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_114c5ebd:;
  /* 114c5ebd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114c5ec0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114c5ec6 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5ec9 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 114c5ecc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c5ed1 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5ed3 jl 0x114c5edd */
  if ((C.sf!=C.of)) goto L_114c5edd;
  /* 114c5ed5 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 114c5ed9 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_114c5edd:;
  /* 114c5edd mov esi, esp */
  ESI = (ESP);
  /* 114c5edf lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 114c5ee2 push edx */
  push32((uint32_t)(EDX));
  /* 114c5ee3 call dword ptr [0x115014ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014ec))), 0x114c5ee9u);
  /* 114c5ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5eee call 0x114c9460 */
  push32(0x114c5ef3u); f_114c9460();
  /* 114c5ef3 pop edi */
  EDI = (pop32());
  /* 114c5ef4 pop esi */
  ESI = (pop32());
  /* 114c5ef5 pop ebx */
  EBX = (pop32());
  /* 114c5ef6 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5ef9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5efb call 0x114c9460 */
  push32(0x114c5f00u); f_114c9460();
  /* 114c5f00 mov esp, ebp */
  ESP = (EBP);
  /* 114c5f02 pop ebp */
  EBP = (pop32());
  /* 114c5f03 ret 4 */
  ESPCHK(0x114c5e60u, _esp0);
  ESP += 8; return;
}

/* FUN_10005f30 @ 0x114c5f30 (114 bytes, 42 insns) */
void f_114c5f30(void) {
  FTRACE(0x114c5f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5f30 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5f31 mov ebp, esp */
  EBP = (ESP);
  /* 114c5f33 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5f36 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5f37 push esi */
  push32((uint32_t)(ESI));
  /* 114c5f38 push edi */
  push32((uint32_t)(EDI));
  /* 114c5f39 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5f3a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 114c5f3d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 114c5f42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5f47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5f49 pop ecx */
  ECX = (pop32());
  /* 114c5f4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5f4d mov esi, esp */
  ESI = (ESP);
  /* 114c5f4f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c5f52 push eax */
  push32((uint32_t)(EAX));
  /* 114c5f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c5f55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5f58 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5f59 call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c5f5fu);
  /* 114c5f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5f64 call 0x114c9460 */
  push32(0x114c5f69u); f_114c9460();
  /* 114c5f69 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114c5f6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114c5f72 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 114c5f75 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 114c5f78 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 114c5f7b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c5f80 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 114c5f83 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 114c5f86 fmul dword ptr [0x114f9050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x114f9050)));
  /* 114c5f8c call 0x114c974c */
  push32(0x114c5f91u); f_114c974c();
  /* 114c5f91 pop edi */
  EDI = (pop32());
  /* 114c5f92 pop esi */
  ESI = (pop32());
  /* 114c5f93 pop ebx */
  EBX = (pop32());
  /* 114c5f94 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5f97 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5f99 call 0x114c9460 */
  push32(0x114c5f9eu); f_114c9460();
  /* 114c5f9e mov esp, ebp */
  ESP = (EBP);
  /* 114c5fa0 pop ebp */
  EBP = (pop32());
  /* 114c5fa1 ret  */
  ESPCHK(0x114c5f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x114c5fc0 (94 bytes, 37 insns) */
void f_114c5fc0(void) {
  FTRACE(0x114c5fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c5fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c5fc1 mov ebp, esp */
  EBP = (ESP);
  /* 114c5fc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c5fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c5fc7 push esi */
  push32((uint32_t)(ESI));
  /* 114c5fc8 push edi */
  push32((uint32_t)(EDI));
  /* 114c5fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c5fca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c5fcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c5fd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c5fd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c5fd9 pop ecx */
  ECX = (pop32());
  /* 114c5fda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c5fdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5fe0 call 0x114c1168 */
  push32(0x114c5fe5u); f_114c1168();
  /* 114c5fe5 mov esi, esp */
  ESI = (ESP);
  /* 114c5fe7 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 114c5fea push eax */
  push32((uint32_t)(EAX));
  /* 114c5feb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c5fee mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 114c5ff1 push edx */
  push32((uint32_t)(EDX));
  /* 114c5ff2 call dword ptr [0x115014dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014dc))), 0x114c5ff8u);
  /* 114c5ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c5ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c5ffd call 0x114c9460 */
  push32(0x114c6002u); f_114c9460();
  /* 114c6002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6005 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6008 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 114c600b pop edi */
  EDI = (pop32());
  /* 114c600c pop esi */
  ESI = (pop32());
  /* 114c600d pop ebx */
  EBX = (pop32());
  /* 114c600e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6011 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6013 call 0x114c9460 */
  push32(0x114c6018u); f_114c9460();
  /* 114c6018 mov esp, ebp */
  ESP = (EBP);
  /* 114c601a pop ebp */
  EBP = (pop32());
  /* 114c601b ret 4 */
  ESPCHK(0x114c5fc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006040 @ 0x114c6040 (39 bytes, 20 insns) */
void f_114c6040(void) {
  FTRACE(0x114c6040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6040 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6041 mov ebp, esp */
  EBP = (ESP);
  /* 114c6043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6046 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6047 push esi */
  push32((uint32_t)(ESI));
  /* 114c6048 push edi */
  push32((uint32_t)(EDI));
  /* 114c6049 push ecx */
  push32((uint32_t)(ECX));
  /* 114c604a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c604d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6059 pop ecx */
  ECX = (pop32());
  /* 114c605a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c605d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6060 pop edi */
  EDI = (pop32());
  /* 114c6061 pop esi */
  ESI = (pop32());
  /* 114c6062 pop ebx */
  EBX = (pop32());
  /* 114c6063 mov esp, ebp */
  ESP = (EBP);
  /* 114c6065 pop ebp */
  EBP = (pop32());
  /* 114c6066 ret  */
  ESPCHK(0x114c6040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x114c6070 (98 bytes, 39 insns) */
void f_114c6070(void) {
  FTRACE(0x114c6070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6070 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6071 mov ebp, esp */
  EBP = (ESP);
  /* 114c6073 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6076 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6077 push esi */
  push32((uint32_t)(ESI));
  /* 114c6078 push edi */
  push32((uint32_t)(EDI));
  /* 114c6079 push ecx */
  push32((uint32_t)(ECX));
  /* 114c607a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c607d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6082 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6087 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6089 pop ecx */
  ECX = (pop32());
  /* 114c608a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c608d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6090 call 0x114c1168 */
  push32(0x114c6095u); f_114c1168();
  /* 114c6095 mov esi, esp */
  ESI = (ESP);
  /* 114c6097 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6099 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c609b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c609e push eax */
  push32((uint32_t)(EAX));
  /* 114c609f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c60a2 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 114c60a5 push edx */
  push32((uint32_t)(EDX));
  /* 114c60a6 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c60acu);
  /* 114c60ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c60af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c60b1 call 0x114c9460 */
  push32(0x114c60b6u); f_114c9460();
  /* 114c60b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c60b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c60bc mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 114c60bf pop edi */
  EDI = (pop32());
  /* 114c60c0 pop esi */
  ESI = (pop32());
  /* 114c60c1 pop ebx */
  EBX = (pop32());
  /* 114c60c2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c60c5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c60c7 call 0x114c9460 */
  push32(0x114c60ccu); f_114c9460();
  /* 114c60cc mov esp, ebp */
  ESP = (EBP);
  /* 114c60ce pop ebp */
  EBP = (pop32());
  /* 114c60cf ret 4 */
  ESPCHK(0x114c6070u, _esp0);
  ESP += 8; return;
}

/* FUN_100060f0 @ 0x114c60f0 (87 bytes, 35 insns) */
void f_114c60f0(void) {
  FTRACE(0x114c60f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c60f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c60f1 mov ebp, esp */
  EBP = (ESP);
  /* 114c60f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c60f6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c60f7 push esi */
  push32((uint32_t)(ESI));
  /* 114c60f8 push edi */
  push32((uint32_t)(EDI));
  /* 114c60f9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c60fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c60fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6102 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6107 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6109 pop ecx */
  ECX = (pop32());
  /* 114c610a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c610d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6110 call 0x114c1168 */
  push32(0x114c6115u); f_114c1168();
  /* 114c6115 mov esi, esp */
  ESI = (ESP);
  /* 114c6117 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c611c push eax */
  push32((uint32_t)(EAX));
  /* 114c611d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6120 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 114c6123 push edx */
  push32((uint32_t)(EDX));
  /* 114c6124 call dword ptr [0x115014e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014e4))), 0x114c612au);
  /* 114c612a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c612d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c612f call 0x114c9460 */
  push32(0x114c6134u); f_114c9460();
  /* 114c6134 pop edi */
  EDI = (pop32());
  /* 114c6135 pop esi */
  ESI = (pop32());
  /* 114c6136 pop ebx */
  EBX = (pop32());
  /* 114c6137 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c613a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c613c call 0x114c9460 */
  push32(0x114c6141u); f_114c9460();
  /* 114c6141 mov esp, ebp */
  ESP = (EBP);
  /* 114c6143 pop ebp */
  EBP = (pop32());
  /* 114c6144 ret 4 */
  ESPCHK(0x114c60f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006160 @ 0x114c6160 (90 bytes, 37 insns) */
void f_114c6160(void) {
  FTRACE(0x114c6160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6160 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6161 mov ebp, esp */
  EBP = (ESP);
  /* 114c6163 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6166 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6167 push esi */
  push32((uint32_t)(ESI));
  /* 114c6168 push edi */
  push32((uint32_t)(EDI));
  /* 114c6169 push ecx */
  push32((uint32_t)(ECX));
  /* 114c616a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c616d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c6172 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6177 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6179 pop ecx */
  ECX = (pop32());
  /* 114c617a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c617d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c6181 mov esi, esp */
  ESI = (ESP);
  /* 114c6183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6186 push eax */
  push32((uint32_t)(EAX));
  /* 114c6187 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c618a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 114c618d push edx */
  push32((uint32_t)(EDX));
  /* 114c618e call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c6194u);
  /* 114c6194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6199 call 0x114c9460 */
  push32(0x114c619eu); f_114c9460();
  /* 114c619e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c61a0 jle 0x114c61a6 */
  if ((C.zf||C.sf!=C.of)) goto L_114c61a6;
  /* 114c61a2 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c61a6:;
  /* 114c61a6 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c61a9 pop edi */
  EDI = (pop32());
  /* 114c61aa pop esi */
  ESI = (pop32());
  /* 114c61ab pop ebx */
  EBX = (pop32());
  /* 114c61ac add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c61af cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c61b1 call 0x114c9460 */
  push32(0x114c61b6u); f_114c9460();
  /* 114c61b6 mov esp, ebp */
  ESP = (EBP);
  /* 114c61b8 pop ebp */
  EBP = (pop32());
  /* 114c61b9 ret  */
  ESPCHK(0x114c6160u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x114c61d0 (89 bytes, 36 insns) */
void f_114c61d0(void) {
  FTRACE(0x114c61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c61d1 mov ebp, esp */
  EBP = (ESP);
  /* 114c61d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c61d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c61d7 push esi */
  push32((uint32_t)(ESI));
  /* 114c61d8 push edi */
  push32((uint32_t)(EDI));
  /* 114c61d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c61da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c61dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c61e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c61e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c61e9 pop ecx */
  ECX = (pop32());
  /* 114c61ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c61ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c61f1 mov esi, esp */
  ESI = (ESP);
  /* 114c61f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c61f6 push eax */
  push32((uint32_t)(EAX));
  /* 114c61f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c61fa push ecx */
  push32((uint32_t)(ECX));
  /* 114c61fb call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c6201u);
  /* 114c6201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6206 call 0x114c9460 */
  push32(0x114c620bu); f_114c9460();
  /* 114c620b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c620d jle 0x114c6213 */
  if ((C.zf||C.sf!=C.of)) goto L_114c6213;
  /* 114c620f mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c6213:;
  /* 114c6213 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c6216 pop edi */
  EDI = (pop32());
  /* 114c6217 pop esi */
  ESI = (pop32());
  /* 114c6218 pop ebx */
  EBX = (pop32());
  /* 114c6219 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c621c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c621e call 0x114c9460 */
  push32(0x114c6223u); f_114c9460();
  /* 114c6223 mov esp, ebp */
  ESP = (EBP);
  /* 114c6225 pop ebp */
  EBP = (pop32());
  /* 114c6226 ret 4 */
  ESPCHK(0x114c61d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006240 @ 0x114c6240 (47 bytes, 22 insns) */
void f_114c6240(void) {
  FTRACE(0x114c6240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6240 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6241 mov ebp, esp */
  EBP = (ESP);
  /* 114c6243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6246 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6247 push esi */
  push32((uint32_t)(ESI));
  /* 114c6248 push edi */
  push32((uint32_t)(EDI));
  /* 114c6249 push ecx */
  push32((uint32_t)(ECX));
  /* 114c624a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c624d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6259 pop ecx */
  ECX = (pop32());
  /* 114c625a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c625d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6263 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 114c6266 pop edi */
  EDI = (pop32());
  /* 114c6267 pop esi */
  ESI = (pop32());
  /* 114c6268 pop ebx */
  EBX = (pop32());
  /* 114c6269 mov esp, ebp */
  ESP = (EBP);
  /* 114c626b pop ebp */
  EBP = (pop32());
  /* 114c626c ret 4 */
  ESPCHK(0x114c6240u, _esp0);
  ESP += 8; return;
}

/* FUN_10006280 @ 0x114c6280 (81 bytes, 33 insns) */
void f_114c6280(void) {
  FTRACE(0x114c6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6280 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6281 mov ebp, esp */
  EBP = (ESP);
  /* 114c6283 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6286 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6287 push esi */
  push32((uint32_t)(ESI));
  /* 114c6288 push edi */
  push32((uint32_t)(EDI));
  /* 114c6289 push ecx */
  push32((uint32_t)(ECX));
  /* 114c628a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c628d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6292 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6297 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6299 pop ecx */
  ECX = (pop32());
  /* 114c629a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c629d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c62a0 call 0x114c1168 */
  push32(0x114c62a5u); f_114c1168();
  /* 114c62a5 mov esi, esp */
  ESI = (ESP);
  /* 114c62a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114c62a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c62ac mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 114c62af push ecx */
  push32((uint32_t)(ECX));
  /* 114c62b0 call dword ptr [0x11501574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501574))), 0x114c62b6u);
  /* 114c62b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c62b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c62bb call 0x114c9460 */
  push32(0x114c62c0u); f_114c9460();
  /* 114c62c0 pop edi */
  EDI = (pop32());
  /* 114c62c1 pop esi */
  ESI = (pop32());
  /* 114c62c2 pop ebx */
  EBX = (pop32());
  /* 114c62c3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c62c6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c62c8 call 0x114c9460 */
  push32(0x114c62cdu); f_114c9460();
  /* 114c62cd mov esp, ebp */
  ESP = (EBP);
  /* 114c62cf pop ebp */
  EBP = (pop32());
  /* 114c62d0 ret  */
  ESPCHK(0x114c6280u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x114c62f0 (99 bytes, 38 insns) */
void f_114c62f0(void) {
  FTRACE(0x114c62f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c62f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c62f1 mov ebp, esp */
  EBP = (ESP);
  /* 114c62f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c62f6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c62f7 push esi */
  push32((uint32_t)(ESI));
  /* 114c62f8 push edi */
  push32((uint32_t)(EDI));
  /* 114c62f9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c62fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c62fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6302 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6307 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6309 pop ecx */
  ECX = (pop32());
  /* 114c630a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c630d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6310 call 0x114c1028 */
  push32(0x114c6315u); f_114c1028();
  /* 114c6315 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c631a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c631c je 0x114c6342 */
  if (C.zf) goto L_114c6342;
  /* 114c631e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6321 call 0x114c1230 */
  push32(0x114c6326u); f_114c1230();
  /* 114c6326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6329 call 0x114c1091 */
  push32(0x114c632eu); f_114c1091();
  /* 114c632e cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6331 jge 0x114c6342 */
  if ((C.sf==C.of)) goto L_114c6342;
  /* 114c6333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6336 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 114c6339 push ecx */
  push32((uint32_t)(ECX));
  /* 114c633a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c633d call 0x114c11e0 */
  push32(0x114c6342u); f_114c11e0();
L_114c6342:;
  /* 114c6342 pop edi */
  EDI = (pop32());
  /* 114c6343 pop esi */
  ESI = (pop32());
  /* 114c6344 pop ebx */
  EBX = (pop32());
  /* 114c6345 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6348 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c634a call 0x114c9460 */
  push32(0x114c634fu); f_114c9460();
  /* 114c634f mov esp, ebp */
  ESP = (EBP);
  /* 114c6351 pop ebp */
  EBP = (pop32());
  /* 114c6352 ret  */
  ESPCHK(0x114c62f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x114c6370 (76 bytes, 32 insns) */
void f_114c6370(void) {
  FTRACE(0x114c6370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6370 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6371 mov ebp, esp */
  EBP = (ESP);
  /* 114c6373 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6376 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6377 push esi */
  push32((uint32_t)(ESI));
  /* 114c6378 push edi */
  push32((uint32_t)(EDI));
  /* 114c6379 push ecx */
  push32((uint32_t)(ECX));
  /* 114c637a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c637d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6382 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6387 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6389 pop ecx */
  ECX = (pop32());
  /* 114c638a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c638d mov esi, esp */
  ESI = (ESP);
  /* 114c638f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6394 push eax */
  push32((uint32_t)(EAX));
  /* 114c6395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6398 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6399 call dword ptr [0x1150157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150157c))), 0x114c639fu);
  /* 114c639f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c63a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c63a4 call 0x114c9460 */
  push32(0x114c63a9u); f_114c9460();
  /* 114c63a9 pop edi */
  EDI = (pop32());
  /* 114c63aa pop esi */
  ESI = (pop32());
  /* 114c63ab pop ebx */
  EBX = (pop32());
  /* 114c63ac add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c63af cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c63b1 call 0x114c9460 */
  push32(0x114c63b6u); f_114c9460();
  /* 114c63b6 mov esp, ebp */
  ESP = (EBP);
  /* 114c63b8 pop ebp */
  EBP = (pop32());
  /* 114c63b9 ret 4 */
  ESPCHK(0x114c6370u, _esp0);
  ESP += 8; return;
}

/* FUN_100063d0 @ 0x114c63d0 (95 bytes, 37 insns) */
void f_114c63d0(void) {
  FTRACE(0x114c63d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c63d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c63d1 mov ebp, esp */
  EBP = (ESP);
  /* 114c63d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c63d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c63d7 push esi */
  push32((uint32_t)(ESI));
  /* 114c63d8 push edi */
  push32((uint32_t)(EDI));
  /* 114c63d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c63da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c63dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c63e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c63e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c63e9 pop ecx */
  ECX = (pop32());
  /* 114c63ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c63ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c63f1 mov esi, esp */
  ESI = (ESP);
  /* 114c63f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c63f5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 114c63fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c63fd call 0x114c1271 */
  push32(0x114c6402u); f_114c1271();
  /* 114c6402 push eax */
  push32((uint32_t)(EAX));
  /* 114c6403 call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c6409u);
  /* 114c6409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c640c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c640e call 0x114c9460 */
  push32(0x114c6413u); f_114c9460();
  /* 114c6413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c6415 jle 0x114c641b */
  if ((C.zf||C.sf!=C.of)) goto L_114c641b;
  /* 114c6417 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c641b:;
  /* 114c641b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c641e pop edi */
  EDI = (pop32());
  /* 114c641f pop esi */
  ESI = (pop32());
  /* 114c6420 pop ebx */
  EBX = (pop32());
  /* 114c6421 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6424 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6426 call 0x114c9460 */
  push32(0x114c642bu); f_114c9460();
  /* 114c642b mov esp, ebp */
  ESP = (EBP);
  /* 114c642d pop ebp */
  EBP = (pop32());
  /* 114c642e ret  */
  ESPCHK(0x114c63d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x114c6450 (47 bytes, 22 insns) */
void f_114c6450(void) {
  FTRACE(0x114c6450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6450 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6451 mov ebp, esp */
  EBP = (ESP);
  /* 114c6453 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6456 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6457 push esi */
  push32((uint32_t)(ESI));
  /* 114c6458 push edi */
  push32((uint32_t)(EDI));
  /* 114c6459 push ecx */
  push32((uint32_t)(ECX));
  /* 114c645a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c645d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6462 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6467 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6469 pop ecx */
  ECX = (pop32());
  /* 114c646a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c646d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6473 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 114c6476 pop edi */
  EDI = (pop32());
  /* 114c6477 pop esi */
  ESI = (pop32());
  /* 114c6478 pop ebx */
  EBX = (pop32());
  /* 114c6479 mov esp, ebp */
  ESP = (EBP);
  /* 114c647b pop ebp */
  EBP = (pop32());
  /* 114c647c ret 4 */
  ESPCHK(0x114c6450u, _esp0);
  ESP += 8; return;
}

/* FUN_10006490 @ 0x114c6490 (64 bytes, 27 insns) */
void f_114c6490(void) {
  FTRACE(0x114c6490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6490 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6491 mov ebp, esp */
  EBP = (ESP);
  /* 114c6493 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6496 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6497 push esi */
  push32((uint32_t)(ESI));
  /* 114c6498 push edi */
  push32((uint32_t)(EDI));
  /* 114c6499 push ecx */
  push32((uint32_t)(ECX));
  /* 114c649a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c649d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c64a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c64a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c64a9 pop ecx */
  ECX = (pop32());
  /* 114c64aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c64ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c64b0 call 0x114c11b8 */
  push32(0x114c64b5u); f_114c11b8();
  /* 114c64b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c64b8 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 114c64bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c64bf pop edi */
  EDI = (pop32());
  /* 114c64c0 pop esi */
  ESI = (pop32());
  /* 114c64c1 pop ebx */
  EBX = (pop32());
  /* 114c64c2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c64c5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c64c7 call 0x114c9460 */
  push32(0x114c64ccu); f_114c9460();
  /* 114c64cc mov esp, ebp */
  ESP = (EBP);
  /* 114c64ce pop ebp */
  EBP = (pop32());
  /* 114c64cf ret  */
  ESPCHK(0x114c6490u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x114c64e0 (57 bytes, 25 insns) */
void f_114c64e0(void) {
  FTRACE(0x114c64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c64e1 mov ebp, esp */
  EBP = (ESP);
  /* 114c64e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c64e6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c64e7 push esi */
  push32((uint32_t)(ESI));
  /* 114c64e8 push edi */
  push32((uint32_t)(EDI));
  /* 114c64e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c64ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c64ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c64f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c64f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c64f9 pop ecx */
  ECX = (pop32());
  /* 114c64fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c64fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6500 call 0x114c123a */
  push32(0x114c6505u); f_114c123a();
  /* 114c6505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6508 pop edi */
  EDI = (pop32());
  /* 114c6509 pop esi */
  ESI = (pop32());
  /* 114c650a pop ebx */
  EBX = (pop32());
  /* 114c650b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c650e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6510 call 0x114c9460 */
  push32(0x114c6515u); f_114c9460();
  /* 114c6515 mov esp, ebp */
  ESP = (EBP);
  /* 114c6517 pop ebp */
  EBP = (pop32());
  /* 114c6518 ret  */
  ESPCHK(0x114c64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006530 @ 0x114c6530 (56 bytes, 25 insns) */
void f_114c6530(void) {
  FTRACE(0x114c6530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6530 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6531 mov ebp, esp */
  EBP = (ESP);
  /* 114c6533 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6536 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6537 push esi */
  push32((uint32_t)(ESI));
  /* 114c6538 push edi */
  push32((uint32_t)(EDI));
  /* 114c6539 push ecx */
  push32((uint32_t)(ECX));
  /* 114c653a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c653d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6542 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6547 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6549 pop ecx */
  ECX = (pop32());
  /* 114c654a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c654d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6553 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 114c6556 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c655c mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 114c655f pop edi */
  EDI = (pop32());
  /* 114c6560 pop esi */
  ESI = (pop32());
  /* 114c6561 pop ebx */
  EBX = (pop32());
  /* 114c6562 mov esp, ebp */
  ESP = (EBP);
  /* 114c6564 pop ebp */
  EBP = (pop32());
  /* 114c6565 ret 8 */
  ESPCHK(0x114c6530u, _esp0);
  ESP += 12; return;
}

/* FUN_10006580 @ 0x114c6580 (566 bytes, 177 insns) [1 switch table(s)] */
void f_114c6580(void) {
  FTRACE(0x114c6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6580 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6581 mov ebp, esp */
  EBP = (ESP);
  /* 114c6583 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6586 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6587 push esi */
  push32((uint32_t)(ESI));
  /* 114c6588 push edi */
  push32((uint32_t)(EDI));
  /* 114c6589 push ecx */
  push32((uint32_t)(ECX));
  /* 114c658a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 114c658d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 114c6592 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6597 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6599 pop ecx */
  ECX = (pop32());
  /* 114c659a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c659d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c65a2 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 114c65a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114c65a7 je 0x114c67a5 */
  if (C.zf) goto L_114c67a5;
  /* 114c65ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65b0 call 0x114c1028 */
  push32(0x114c65b5u); f_114c1028();
  /* 114c65b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c65ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c65bc je 0x114c67a5 */
  if (C.zf) goto L_114c67a5;
  /* 114c65c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65c5 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c65c9 je 0x114c67a5 */
  if (C.zf) goto L_114c67a5;
  /* 114c65cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65d2 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c65d6 je 0x114c661d */
  if (C.zf) goto L_114c661d;
  /* 114c65d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65db call 0x114c1091 */
  push32(0x114c65e0u); f_114c1091();
  /* 114c65e0 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c65e3 jge 0x114c65ed */
  if ((C.sf==C.of)) goto L_114c65ed;
  /* 114c65e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65e8 call 0x114c1244 */
  push32(0x114c65edu); f_114c1244();
L_114c65ed:;
  /* 114c65ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c65f0 call 0x114c1249 */
  push32(0x114c65f5u); f_114c1249();
  /* 114c65f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c65fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c65fc je 0x114c6618 */
  if (C.zf) goto L_114c6618;
  /* 114c65fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6601 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6605 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 114c6608 push eax */
  push32((uint32_t)(EAX));
  /* 114c6609 call 0x114c126c */
  push32(0x114c660eu); f_114c126c();
  /* 114c660e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6611 mov ecx, eax */
  ECX = (EAX);
  /* 114c6613 call 0x114c11b3 */
  push32(0x114c6618u); f_114c11b3();
L_114c6618:;
  /* 114c6618 jmp 0x114c67a5 */
  goto L_114c67a5;
L_114c661d:;
  /* 114c661d mov esi, esp */
  ESI = (ESP);
  /* 114c661f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6621 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 114c6626 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6629 call 0x114c1271 */
  push32(0x114c662eu); f_114c1271();
  /* 114c662e push eax */
  push32((uint32_t)(EAX));
  /* 114c662f call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c6635u);
  /* 114c6635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c663a call 0x114c9460 */
  push32(0x114c663fu); f_114c9460();
  /* 114c663f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c6641 jle 0x114c67a5 */
  if ((C.zf||C.sf!=C.of)) goto L_114c67a5;
  /* 114c6647 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c664a cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c664e je 0x114c67a5 */
  if (C.zf) goto L_114c67a5;
  /* 114c6654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6657 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 114c665a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114c665d cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6661 ja 0x114c6732 */
  if ((!C.cf&&!C.zf)) goto L_114c6732;
  /* 114c6667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c666a jmp dword ptr [ecx*4 + 0x114c67b6] */
  switch (ECX) {
    case 0: goto L_114c6671;
    case 1: goto L_114c6694;
    case 2: goto L_114c66b4;
    case 3: goto L_114c66d4;
    case 4: goto L_114c66f4;
    case 5: goto L_114c6714;
    default: x86_unimpl("switch@0x114c666a out of table"); return;
  }
L_114c6671:;
  /* 114c6671 mov esi, esp */
  ESI = (ESP);
  /* 114c6673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6676 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 114c6679 push eax */
  push32((uint32_t)(EAX));
  /* 114c667a push 0x114f9308 */
  push32((uint32_t)(0x114f9308u));
  /* 114c667f call dword ptr [0x115014d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d8))), 0x114c6685u);
  /* 114c6685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c668a call 0x114c9460 */
  push32(0x114c668fu); f_114c9460();
  /* 114c668f jmp 0x114c6732 */
  goto L_114c6732;
L_114c6694:;
  /* 114c6694 mov esi, esp */
  ESI = (ESP);
  /* 114c6696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6699 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 114c669c push edx */
  push32((uint32_t)(EDX));
  /* 114c669d push 0x114f92fc */
  push32((uint32_t)(0x114f92fcu));
  /* 114c66a2 call dword ptr [0x115014d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d8))), 0x114c66a8u);
  /* 114c66a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c66ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c66ad call 0x114c9460 */
  push32(0x114c66b2u); f_114c9460();
  /* 114c66b2 jmp 0x114c6732 */
  goto L_114c6732;
L_114c66b4:;
  /* 114c66b4 mov esi, esp */
  ESI = (ESP);
  /* 114c66b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c66b9 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 114c66bc push ecx */
  push32((uint32_t)(ECX));
  /* 114c66bd push 0x114f92f0 */
  push32((uint32_t)(0x114f92f0u));
  /* 114c66c2 call dword ptr [0x115014d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d8))), 0x114c66c8u);
  /* 114c66c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c66cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c66cd call 0x114c9460 */
  push32(0x114c66d2u); f_114c9460();
  /* 114c66d2 jmp 0x114c6732 */
  goto L_114c6732;
L_114c66d4:;
  /* 114c66d4 mov esi, esp */
  ESI = (ESP);
  /* 114c66d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c66d9 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 114c66dc push eax */
  push32((uint32_t)(EAX));
  /* 114c66dd push 0x114f92e4 */
  push32((uint32_t)(0x114f92e4u));
  /* 114c66e2 call dword ptr [0x115014d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d8))), 0x114c66e8u);
  /* 114c66e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c66eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c66ed call 0x114c9460 */
  push32(0x114c66f2u); f_114c9460();
  /* 114c66f2 jmp 0x114c6732 */
  goto L_114c6732;
L_114c66f4:;
  /* 114c66f4 mov esi, esp */
  ESI = (ESP);
  /* 114c66f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c66f9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 114c66fc push edx */
  push32((uint32_t)(EDX));
  /* 114c66fd push 0x114f92d8 */
  push32((uint32_t)(0x114f92d8u));
  /* 114c6702 call dword ptr [0x115014d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d8))), 0x114c6708u);
  /* 114c6708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c670b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c670d call 0x114c9460 */
  push32(0x114c6712u); f_114c9460();
  /* 114c6712 jmp 0x114c6732 */
  goto L_114c6732;
L_114c6714:;
  /* 114c6714 mov esi, esp */
  ESI = (ESP);
  /* 114c6716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6719 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 114c671c push ecx */
  push32((uint32_t)(ECX));
  /* 114c671d push 0x114f92cc */
  push32((uint32_t)(0x114f92ccu));
  /* 114c6722 call dword ptr [0x115014d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d8))), 0x114c6728u);
  /* 114c6728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c672b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c672d call 0x114c9460 */
  push32(0x114c6732u); f_114c9460();
L_114c6732:;
  /* 114c6732 mov esi, esp */
  ESI = (ESP);
  /* 114c6734 push 0x114f92bc */
  push32((uint32_t)(0x114f92bcu));
  /* 114c6739 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c673b push 0x114f92b4 */
  push32((uint32_t)(0x114f92b4u));
  /* 114c6740 push 7 */
  push32((uint32_t)(0x7u));
  /* 114c6742 call dword ptr [0x115014d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d0))), 0x114c6748u);
  /* 114c6748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c674b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c674d call 0x114c9460 */
  push32(0x114c6752u); f_114c9460();
  /* 114c6752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114c6755 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6759 je 0x114c6763 */
  if (C.zf) goto L_114c6763;
  /* 114c675b cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c675f je 0x114c676f */
  if (C.zf) goto L_114c676f;
  /* 114c6761 jmp 0x114c6777 */
  goto L_114c6777;
L_114c6763:;
  /* 114c6763 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6765 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6768 call 0x114c10ff */
  push32(0x114c676du); f_114c10ff();
  /* 114c676d jmp 0x114c6777 */
  goto L_114c6777;
L_114c676f:;
  /* 114c676f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6772 call 0x114c112c */
  push32(0x114c6777u); f_114c112c();
L_114c6777:;
  /* 114c6777 mov esi, esp */
  ESI = (ESP);
  /* 114c6779 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c677c mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 114c677f push eax */
  push32((uint32_t)(EAX));
  /* 114c6780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6783 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 114c6786 push edx */
  push32((uint32_t)(EDX));
  /* 114c6787 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6789 call dword ptr [0x115014e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014e0))), 0x114c678fu);
  /* 114c678f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6794 call 0x114c9460 */
  push32(0x114c6799u); f_114c9460();
  /* 114c6799 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c679b push 0 */
  push32((uint32_t)(0x0u));
  /* 114c679d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c67a0 call 0x114c1195 */
  push32(0x114c67a5u); f_114c1195();
L_114c67a5:;
  /* 114c67a5 pop edi */
  EDI = (pop32());
  /* 114c67a6 pop esi */
  ESI = (pop32());
  /* 114c67a7 pop ebx */
  EBX = (pop32());
  /* 114c67a8 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c67ab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c67ad call 0x114c9460 */
  push32(0x114c67b2u); f_114c9460();
  /* 114c67b2 mov esp, ebp */
  ESP = (EBP);
  /* 114c67b4 pop ebp */
  EBP = (pop32());
  /* 114c67b5 ret  */
  ESPCHK(0x114c6580u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x114c6870 (112 bytes, 43 insns) */
void f_114c6870(void) {
  FTRACE(0x114c6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6870 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6871 mov ebp, esp */
  EBP = (ESP);
  /* 114c6873 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6876 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6877 push esi */
  push32((uint32_t)(ESI));
  /* 114c6878 push edi */
  push32((uint32_t)(EDI));
  /* 114c6879 push ecx */
  push32((uint32_t)(ECX));
  /* 114c687a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c687d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6882 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6887 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6889 pop ecx */
  ECX = (pop32());
  /* 114c688a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c688d push 6 */
  push32((uint32_t)(0x6u));
  /* 114c688f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6892 call 0x114c10ff */
  push32(0x114c6897u); f_114c10ff();
  /* 114c6897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c689a call 0x114c1168 */
  push32(0x114c689fu); f_114c1168();
  /* 114c689f mov esi, esp */
  ESI = (ESP);
  /* 114c68a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c68a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c68a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 114c68a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c68aa call 0x114c1271 */
  push32(0x114c68afu); f_114c1271();
  /* 114c68af push eax */
  push32((uint32_t)(EAX));
  /* 114c68b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c68b3 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 114c68b6 push ecx */
  push32((uint32_t)(ECX));
  /* 114c68b7 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c68bdu);
  /* 114c68bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c68c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c68c2 call 0x114c9460 */
  push32(0x114c68c7u); f_114c9460();
  /* 114c68c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c68ca call 0x114c1262 */
  push32(0x114c68cfu); f_114c1262();
  /* 114c68cf pop edi */
  EDI = (pop32());
  /* 114c68d0 pop esi */
  ESI = (pop32());
  /* 114c68d1 pop ebx */
  EBX = (pop32());
  /* 114c68d2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c68d5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c68d7 call 0x114c9460 */
  push32(0x114c68dcu); f_114c9460();
  /* 114c68dc mov esp, ebp */
  ESP = (EBP);
  /* 114c68de pop ebp */
  EBP = (pop32());
  /* 114c68df ret  */
  ESPCHK(0x114c6870u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x114c6900 (75 bytes, 32 insns) */
void f_114c6900(void) {
  FTRACE(0x114c6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6900 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6901 mov ebp, esp */
  EBP = (ESP);
  /* 114c6903 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6906 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6907 push esi */
  push32((uint32_t)(ESI));
  /* 114c6908 push edi */
  push32((uint32_t)(EDI));
  /* 114c6909 push ecx */
  push32((uint32_t)(ECX));
  /* 114c690a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c690d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6912 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6917 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6919 pop ecx */
  ECX = (pop32());
  /* 114c691a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c691d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c6920 push eax */
  push32((uint32_t)(EAX));
  /* 114c6921 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c6924 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6928 push edx */
  push32((uint32_t)(EDX));
  /* 114c6929 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c692c call 0x114c101e */
  push32(0x114c6931u); f_114c101e();
  /* 114c6931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6934 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 114c6938 pop edi */
  EDI = (pop32());
  /* 114c6939 pop esi */
  ESI = (pop32());
  /* 114c693a pop ebx */
  EBX = (pop32());
  /* 114c693b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c693e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6940 call 0x114c9460 */
  push32(0x114c6945u); f_114c9460();
  /* 114c6945 mov esp, ebp */
  ESP = (EBP);
  /* 114c6947 pop ebp */
  EBP = (pop32());
  /* 114c6948 ret 0xc */
  ESPCHK(0x114c6900u, _esp0);
  ESP += 16; return;
}

/* FUN_10006960 @ 0x114c6960 (95 bytes, 37 insns) */
void f_114c6960(void) {
  FTRACE(0x114c6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6960 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6961 mov ebp, esp */
  EBP = (ESP);
  /* 114c6963 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6966 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6967 push esi */
  push32((uint32_t)(ESI));
  /* 114c6968 push edi */
  push32((uint32_t)(EDI));
  /* 114c6969 push ecx */
  push32((uint32_t)(ECX));
  /* 114c696a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c696d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c6972 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6977 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6979 pop ecx */
  ECX = (pop32());
  /* 114c697a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c697d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c6981 mov esi, esp */
  ESI = (ESP);
  /* 114c6983 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6985 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 114c698a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c698d call 0x114c1271 */
  push32(0x114c6992u); f_114c1271();
  /* 114c6992 push eax */
  push32((uint32_t)(EAX));
  /* 114c6993 call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c6999u);
  /* 114c6999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c699c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c699e call 0x114c9460 */
  push32(0x114c69a3u); f_114c9460();
  /* 114c69a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c69a5 jle 0x114c69ab */
  if ((C.zf||C.sf!=C.of)) goto L_114c69ab;
  /* 114c69a7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c69ab:;
  /* 114c69ab mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c69ae pop edi */
  EDI = (pop32());
  /* 114c69af pop esi */
  ESI = (pop32());
  /* 114c69b0 pop ebx */
  EBX = (pop32());
  /* 114c69b1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c69b4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c69b6 call 0x114c9460 */
  push32(0x114c69bbu); f_114c9460();
  /* 114c69bb mov esp, ebp */
  ESP = (EBP);
  /* 114c69bd pop ebp */
  EBP = (pop32());
  /* 114c69be ret  */
  ESPCHK(0x114c6960u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e0 @ 0x114c69e0 (78 bytes, 28 insns) */
void f_114c69e0(void) {
  FTRACE(0x114c69e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c69e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c69e1 mov ebp, esp */
  EBP = (ESP);
  /* 114c69e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c69e6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c69e7 push esi */
  push32((uint32_t)(ESI));
  /* 114c69e8 push edi */
  push32((uint32_t)(EDI));
  /* 114c69e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c69ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c69ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c69f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c69f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c69f9 pop ecx */
  ECX = (pop32());
  /* 114c69fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c69fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6a00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6a03 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114c6a06 mov edx, dword ptr [0x114ff0c8] */
  EDX = (r32((uint32_t)(0x114ff0c8)));
  /* 114c6a0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6a0f mov dword ptr [edx*4 + 0x114ff078], eax */
  w32((uint32_t)(EDX*4 + 0x114ff078), (EAX));
  /* 114c6a16 mov ecx, dword ptr [0x114ff0c8] */
  ECX = (r32((uint32_t)(0x114ff0c8)));
  /* 114c6a1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6a1f mov dword ptr [0x114ff0c8], ecx */
  w32((uint32_t)(0x114ff0c8), (ECX));
  /* 114c6a25 pop edi */
  EDI = (pop32());
  /* 114c6a26 pop esi */
  ESI = (pop32());
  /* 114c6a27 pop ebx */
  EBX = (pop32());
  /* 114c6a28 mov esp, ebp */
  ESP = (EBP);
  /* 114c6a2a pop ebp */
  EBP = (pop32());
  /* 114c6a2b ret 4 */
  ESPCHK(0x114c69e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006a50 @ 0x114c6a50 (128 bytes, 44 insns) */
void f_114c6a50(void) {
  FTRACE(0x114c6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6a51 mov ebp, esp */
  EBP = (ESP);
  /* 114c6a53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6a56 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6a57 push esi */
  push32((uint32_t)(ESI));
  /* 114c6a58 push edi */
  push32((uint32_t)(EDI));
  /* 114c6a59 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c6a5c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c6a61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6a66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6a68 mov eax, dword ptr [0x114ff078] */
  EAX = (r32((uint32_t)(0x114ff078)));
  /* 114c6a6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114c6a70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c6a77 jmp 0x114c6a82 */
  goto L_114c6a82;
L_114c6a79:;
  /* 114c6a79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c6a7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6a7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114c6a82:;
  /* 114c6a82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c6a85 cmp edx, dword ptr [0x114ff0c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114ff0c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6a8b jge 0x114c6abc */
  if ((C.sf==C.of)) goto L_114c6abc;
  /* 114c6a8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c6a90 mov ecx, dword ptr [eax*4 + 0x114ff078] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114ff078)));
  /* 114c6a97 call 0x114c110e */
  push32(0x114c6a9cu); f_114c110e();
  /* 114c6a9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c6a9e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114c6aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c6aa6 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114c6aa9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6aab jne 0x114c6aba */
  if (!C.zf) goto L_114c6aba;
  /* 114c6aad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c6ab0 mov edx, dword ptr [ecx*4 + 0x114ff078] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114ff078)));
  /* 114c6ab7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114c6aba:;
  /* 114c6aba jmp 0x114c6a79 */
  goto L_114c6a79;
L_114c6abc:;
  /* 114c6abc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6abf pop edi */
  EDI = (pop32());
  /* 114c6ac0 pop esi */
  ESI = (pop32());
  /* 114c6ac1 pop ebx */
  EBX = (pop32());
  /* 114c6ac2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6ac5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6ac7 call 0x114c9460 */
  push32(0x114c6accu); f_114c9460();
  /* 114c6acc mov esp, ebp */
  ESP = (EBP);
  /* 114c6ace pop ebp */
  EBP = (pop32());
  /* 114c6acf ret  */
  ESPCHK(0x114c6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x114c6af0 (47 bytes, 22 insns) */
void f_114c6af0(void) {
  FTRACE(0x114c6af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6af0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6af1 mov ebp, esp */
  EBP = (ESP);
  /* 114c6af3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6af6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6af7 push esi */
  push32((uint32_t)(ESI));
  /* 114c6af8 push edi */
  push32((uint32_t)(EDI));
  /* 114c6af9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6afa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6afd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6b09 pop ecx */
  ECX = (pop32());
  /* 114c6b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6b10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6b13 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 114c6b16 pop edi */
  EDI = (pop32());
  /* 114c6b17 pop esi */
  ESI = (pop32());
  /* 114c6b18 pop ebx */
  EBX = (pop32());
  /* 114c6b19 mov esp, ebp */
  ESP = (EBP);
  /* 114c6b1b pop ebp */
  EBP = (pop32());
  /* 114c6b1c ret 4 */
  ESPCHK(0x114c6af0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b30 @ 0x114c6b30 (47 bytes, 22 insns) */
void f_114c6b30(void) {
  FTRACE(0x114c6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6b31 mov ebp, esp */
  EBP = (ESP);
  /* 114c6b33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6b36 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6b37 push esi */
  push32((uint32_t)(ESI));
  /* 114c6b38 push edi */
  push32((uint32_t)(EDI));
  /* 114c6b39 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6b3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6b3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6b42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6b47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6b49 pop ecx */
  ECX = (pop32());
  /* 114c6b4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6b4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6b50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6b53 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 114c6b56 pop edi */
  EDI = (pop32());
  /* 114c6b57 pop esi */
  ESI = (pop32());
  /* 114c6b58 pop ebx */
  EBX = (pop32());
  /* 114c6b59 mov esp, ebp */
  ESP = (EBP);
  /* 114c6b5b pop ebp */
  EBP = (pop32());
  /* 114c6b5c ret 4 */
  ESPCHK(0x114c6b30u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b70 @ 0x114c6b70 (47 bytes, 22 insns) */
void f_114c6b70(void) {
  FTRACE(0x114c6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6b70 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6b71 mov ebp, esp */
  EBP = (ESP);
  /* 114c6b73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6b76 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6b77 push esi */
  push32((uint32_t)(ESI));
  /* 114c6b78 push edi */
  push32((uint32_t)(EDI));
  /* 114c6b79 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6b7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6b7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6b89 pop ecx */
  ECX = (pop32());
  /* 114c6b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6b90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6b93 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 114c6b96 pop edi */
  EDI = (pop32());
  /* 114c6b97 pop esi */
  ESI = (pop32());
  /* 114c6b98 pop ebx */
  EBX = (pop32());
  /* 114c6b99 mov esp, ebp */
  ESP = (EBP);
  /* 114c6b9b pop ebp */
  EBP = (pop32());
  /* 114c6b9c ret 4 */
  ESPCHK(0x114c6b70u, _esp0);
  ESP += 8; return;
}

/* FUN_10006bb0 @ 0x114c6bb0 (85 bytes, 35 insns) */
void f_114c6bb0(void) {
  FTRACE(0x114c6bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6bb1 mov ebp, esp */
  EBP = (ESP);
  /* 114c6bb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6bb7 push esi */
  push32((uint32_t)(ESI));
  /* 114c6bb8 push edi */
  push32((uint32_t)(EDI));
  /* 114c6bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6bba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6bbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6bc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6bc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6bc9 pop ecx */
  ECX = (pop32());
  /* 114c6bca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6bd0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114c6bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6bd7 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114c6bda push eax */
  push32((uint32_t)(EAX));
  /* 114c6bdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6bde call 0x114c1195 */
  push32(0x114c6be3u); f_114c1195();
  /* 114c6be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6be6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114c6be9 push edx */
  push32((uint32_t)(EDX));
  /* 114c6bea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6bed call 0x114c11e0 */
  push32(0x114c6bf2u); f_114c11e0();
  /* 114c6bf2 pop edi */
  EDI = (pop32());
  /* 114c6bf3 pop esi */
  ESI = (pop32());
  /* 114c6bf4 pop ebx */
  EBX = (pop32());
  /* 114c6bf5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6bf8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6bfa call 0x114c9460 */
  push32(0x114c6bffu); f_114c9460();
  /* 114c6bff mov esp, ebp */
  ESP = (EBP);
  /* 114c6c01 pop ebp */
  EBP = (pop32());
  /* 114c6c02 ret 4 */
  ESPCHK(0x114c6bb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006c20 @ 0x114c6c20 (42 bytes, 21 insns) */
void f_114c6c20(void) {
  FTRACE(0x114c6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6c20 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6c21 mov ebp, esp */
  EBP = (ESP);
  /* 114c6c23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6c26 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6c27 push esi */
  push32((uint32_t)(ESI));
  /* 114c6c28 push edi */
  push32((uint32_t)(EDI));
  /* 114c6c29 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6c2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6c2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6c32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6c37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6c39 pop ecx */
  ECX = (pop32());
  /* 114c6c3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6c40 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c6c43 pop edi */
  EDI = (pop32());
  /* 114c6c44 pop esi */
  ESI = (pop32());
  /* 114c6c45 pop ebx */
  EBX = (pop32());
  /* 114c6c46 mov esp, ebp */
  ESP = (EBP);
  /* 114c6c48 pop ebp */
  EBP = (pop32());
  /* 114c6c49 ret  */
  ESPCHK(0x114c6c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c60 @ 0x114c6c60 (39 bytes, 20 insns) */
void f_114c6c60(void) {
  FTRACE(0x114c6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6c61 mov ebp, esp */
  EBP = (ESP);
  /* 114c6c63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6c66 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6c67 push esi */
  push32((uint32_t)(ESI));
  /* 114c6c68 push edi */
  push32((uint32_t)(EDI));
  /* 114c6c69 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6c6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6c6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6c72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6c77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6c79 pop ecx */
  ECX = (pop32());
  /* 114c6c7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6c80 pop edi */
  EDI = (pop32());
  /* 114c6c81 pop esi */
  ESI = (pop32());
  /* 114c6c82 pop ebx */
  EBX = (pop32());
  /* 114c6c83 mov esp, ebp */
  ESP = (EBP);
  /* 114c6c85 pop ebp */
  EBP = (pop32());
  /* 114c6c86 ret  */
  ESPCHK(0x114c6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x114c6c90 (518 bytes, 176 insns) */
void f_114c6c90(void) {
  FTRACE(0x114c6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6c91 mov ebp, esp */
  EBP = (ESP);
  /* 114c6c93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6c96 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6c97 push esi */
  push32((uint32_t)(ESI));
  /* 114c6c98 push edi */
  push32((uint32_t)(EDI));
  /* 114c6c99 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6c9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6c9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6ca9 pop ecx */
  ECX = (pop32());
  /* 114c6caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cb0 call 0x114c1181 */
  push32(0x114c6cb5u); f_114c1181();
  /* 114c6cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c6cb7 jle 0x114c6e85 */
  if ((C.zf||C.sf!=C.of)) goto L_114c6e85;
  /* 114c6cbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cc0 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c6cc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6cc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cc9 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6ccc jge 0x114c6e85 */
  if ((C.sf==C.of)) goto L_114c6e85;
  /* 114c6cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cd5 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c6cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cdb cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6ce0 jne 0x114c6da9 */
  if (!C.zf) goto L_114c6da9;
  /* 114c6ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6ce9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c6cec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cef mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 114c6cf3 push eax */
  push32((uint32_t)(EAX));
  /* 114c6cf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6cf7 call 0x114c10af */
  push32(0x114c6cfcu); f_114c10af();
  /* 114c6cfc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c6d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c6d03 je 0x114c6d30 */
  if (C.zf) goto L_114c6d30;
  /* 114c6d05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d08 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114c6d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d0e mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 114c6d12 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d16 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114c6d19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d1c mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 114c6d20 push edx */
  push32((uint32_t)(EDX));
  /* 114c6d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d24 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6d27 push eax */
  push32((uint32_t)(EAX));
  /* 114c6d28 call 0x114c105f */
  push32(0x114c6d2du); f_114c105f();
  /* 114c6d2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114c6d30:;
  /* 114c6d30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d33 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114c6d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d39 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 114c6d3d push ecx */
  push32((uint32_t)(ECX));
  /* 114c6d3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d41 call 0x114c10af */
  push32(0x114c6d46u); f_114c10af();
  /* 114c6d46 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c6d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c6d4d je 0x114c6da4 */
  if (C.zf) goto L_114c6da4;
  /* 114c6d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d52 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114c6d55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6d58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d5b mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 114c6d5e mov esi, esp */
  ESI = (ESP);
  /* 114c6d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d65 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6d68 push edx */
  push32((uint32_t)(EDX));
  /* 114c6d69 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c6d6fu);
  /* 114c6d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6d74 call 0x114c9460 */
  push32(0x114c6d79u); f_114c9460();
  /* 114c6d79 mov esi, esp */
  ESI = (ESP);
  /* 114c6d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6d7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d82 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c6d85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d88 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 114c6d8c push eax */
  push32((uint32_t)(EAX));
  /* 114c6d8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6d90 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 114c6d93 push edx */
  push32((uint32_t)(EDX));
  /* 114c6d94 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c6d9au);
  /* 114c6d9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6d9f call 0x114c9460 */
  push32(0x114c6da4u); f_114c9460();
L_114c6da4:;
  /* 114c6da4 jmp 0x114c6e85 */
  goto L_114c6e85;
L_114c6da9:;
  /* 114c6da9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6dac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c6daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6db2 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6db7 je 0x114c6dc9 */
  if (C.zf) goto L_114c6dc9;
  /* 114c6db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6dbc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c6dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6dc2 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6dc7 jne 0x114c6e20 */
  if (!C.zf) goto L_114c6e20;
L_114c6dc9:;
  /* 114c6dc9 mov esi, esp */
  ESI = (ESP);
  /* 114c6dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6dd0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6dd3 push eax */
  push32((uint32_t)(EAX));
  /* 114c6dd4 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c6ddau);
  /* 114c6dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6ddd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6ddf call 0x114c9460 */
  push32(0x114c6de4u); f_114c9460();
  /* 114c6de4 mov esi, esp */
  ESI = (ESP);
  /* 114c6de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c6de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6ded mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114c6df0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6df3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6df6 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 114c6df9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6dfc mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114c6dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e02 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 114c6e06 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6e07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e0a mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 114c6e0d push eax */
  push32((uint32_t)(EAX));
  /* 114c6e0e call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c6e14u);
  /* 114c6e14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6e19 call 0x114c9460 */
  push32(0x114c6e1eu); f_114c9460();
  /* 114c6e1e jmp 0x114c6e85 */
  goto L_114c6e85;
L_114c6e20:;
  /* 114c6e20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e23 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114c6e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e29 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6e2e jne 0x114c6e85 */
  if (!C.zf) goto L_114c6e85;
  /* 114c6e30 mov esi, esp */
  ESI = (ESP);
  /* 114c6e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6e34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e37 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6e3a push ecx */
  push32((uint32_t)(ECX));
  /* 114c6e3b call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c6e41u);
  /* 114c6e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6e46 call 0x114c9460 */
  push32(0x114c6e4bu); f_114c9460();
  /* 114c6e4b mov esi, esp */
  ESI = (ESP);
  /* 114c6e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c6e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e54 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114c6e57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e5d mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 114c6e60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e63 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114c6e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e69 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 114c6e6d push edx */
  push32((uint32_t)(EDX));
  /* 114c6e6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6e71 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 114c6e74 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6e75 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c6e7bu);
  /* 114c6e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6e80 call 0x114c9460 */
  push32(0x114c6e85u); f_114c9460();
L_114c6e85:;
  /* 114c6e85 pop edi */
  EDI = (pop32());
  /* 114c6e86 pop esi */
  ESI = (pop32());
  /* 114c6e87 pop ebx */
  EBX = (pop32());
  /* 114c6e88 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6e8b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c6e8d call 0x114c9460 */
  push32(0x114c6e92u); f_114c9460();
  /* 114c6e92 mov esp, ebp */
  ESP = (EBP);
  /* 114c6e94 pop ebp */
  EBP = (pop32());
  /* 114c6e95 ret  */
  ESPCHK(0x114c6c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f20 @ 0x114c6f20 (38 bytes, 20 insns) */
void f_114c6f20(void) {
  FTRACE(0x114c6f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6f20 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6f21 mov ebp, esp */
  EBP = (ESP);
  /* 114c6f23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6f26 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6f27 push esi */
  push32((uint32_t)(ESI));
  /* 114c6f28 push edi */
  push32((uint32_t)(EDI));
  /* 114c6f29 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6f2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6f2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6f32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6f37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6f39 pop ecx */
  ECX = (pop32());
  /* 114c6f3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c6f3f pop edi */
  EDI = (pop32());
  /* 114c6f40 pop esi */
  ESI = (pop32());
  /* 114c6f41 pop ebx */
  EBX = (pop32());
  /* 114c6f42 mov esp, ebp */
  ESP = (EBP);
  /* 114c6f44 pop ebp */
  EBP = (pop32());
  /* 114c6f45 ret  */
  ESPCHK(0x114c6f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x114c6f50 (85 bytes, 34 insns) */
void f_114c6f50(void) {
  FTRACE(0x114c6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6f50 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6f51 mov ebp, esp */
  EBP = (ESP);
  /* 114c6f53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6f56 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6f57 push esi */
  push32((uint32_t)(ESI));
  /* 114c6f58 push edi */
  push32((uint32_t)(EDI));
  /* 114c6f59 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6f5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6f5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6f62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6f67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6f69 pop ecx */
  ECX = (pop32());
  /* 114c6f6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6f70 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 114c6f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6f79 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 114c6f7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6f80 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 114c6f83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6f86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c6f89 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 114c6f8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6f90 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 114c6f93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c6f96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6f99 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 114c6f9c pop edi */
  EDI = (pop32());
  /* 114c6f9d pop esi */
  ESI = (pop32());
  /* 114c6f9e pop ebx */
  EBX = (pop32());
  /* 114c6f9f mov esp, ebp */
  ESP = (EBP);
  /* 114c6fa1 pop ebp */
  EBP = (pop32());
  /* 114c6fa2 ret 8 */
  ESPCHK(0x114c6f50u, _esp0);
  ESP += 12; return;
}

/* FUN_10006fc0 @ 0x114c6fc0 (86 bytes, 33 insns) */
void f_114c6fc0(void) {
  FTRACE(0x114c6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 114c6fc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c6fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c6fc7 push esi */
  push32((uint32_t)(ESI));
  /* 114c6fc8 push edi */
  push32((uint32_t)(EDI));
  /* 114c6fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c6fca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c6fcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c6fd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c6fd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c6fd9 pop ecx */
  ECX = (pop32());
  /* 114c6fda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c6fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6fe0 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 114c6fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c6fe9 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 114c6fed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6ff0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 114c6ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c6ff6 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 114c6ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7001 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 114c7004 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c700a mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 114c700d pop edi */
  EDI = (pop32());
  /* 114c700e pop esi */
  ESI = (pop32());
  /* 114c700f pop ebx */
  EBX = (pop32());
  /* 114c7010 mov esp, ebp */
  ESP = (EBP);
  /* 114c7012 pop ebp */
  EBP = (pop32());
  /* 114c7013 ret 4 */
  ESPCHK(0x114c6fc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007030 @ 0x114c7030 (119 bytes, 43 insns) */
void f_114c7030(void) {
  FTRACE(0x114c7030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7030 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7031 mov ebp, esp */
  EBP = (ESP);
  /* 114c7033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7036 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7037 push esi */
  push32((uint32_t)(ESI));
  /* 114c7038 push edi */
  push32((uint32_t)(EDI));
  /* 114c7039 push ecx */
  push32((uint32_t)(ECX));
  /* 114c703a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c703d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7042 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7047 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7049 pop ecx */
  ECX = (pop32());
  /* 114c704a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c704d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7050 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7053 mov esi, esp */
  ESI = (ESP);
  /* 114c7055 push eax */
  push32((uint32_t)(EAX));
  /* 114c7056 call dword ptr [0x1150158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150158c))), 0x114c705cu);
  /* 114c705c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c705f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7061 call 0x114c9460 */
  push32(0x114c7066u); f_114c9460();
  /* 114c7066 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7069 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c706c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114c706e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7071 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c7074 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114c7077 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c707a mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 114c7081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7084 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 114c708b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c708e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c7091 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 114c7094 pop edi */
  EDI = (pop32());
  /* 114c7095 pop esi */
  ESI = (pop32());
  /* 114c7096 pop ebx */
  EBX = (pop32());
  /* 114c7097 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c709a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c709c call 0x114c9460 */
  push32(0x114c70a1u); f_114c9460();
  /* 114c70a1 mov esp, ebp */
  ESP = (EBP);
  /* 114c70a3 pop ebp */
  EBP = (pop32());
  /* 114c70a4 ret 0xc */
  ESPCHK(0x114c7030u, _esp0);
  ESP += 16; return;
}

/* FUN_100070d0 @ 0x114c70d0 (263 bytes, 93 insns) */
void f_114c70d0(void) {
  FTRACE(0x114c70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c70d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c70d1 mov ebp, esp */
  EBP = (ESP);
  /* 114c70d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c70d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c70d7 push esi */
  push32((uint32_t)(ESI));
  /* 114c70d8 push edi */
  push32((uint32_t)(EDI));
  /* 114c70d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c70da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c70dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c70e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c70e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c70e9 pop ecx */
  ECX = (pop32());
  /* 114c70ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c70ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c70f0 call 0x114c1181 */
  push32(0x114c70f5u); f_114c1181();
  /* 114c70f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c70f7 jne 0x114c71c4 */
  if (!C.zf) goto L_114c71c4;
  /* 114c70fd mov esi, esp */
  ESI = (ESP);
  /* 114c70ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7102 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 114c7105 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7106 call dword ptr [0x1150153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150153c))), 0x114c710cu);
  /* 114c710c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c710f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7111 call 0x114c9460 */
  push32(0x114c7116u); f_114c9460();
  /* 114c7116 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c711d jmp 0x114c7128 */
  goto L_114c7128;
L_114c711f:;
  /* 114c711f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c7122 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7125 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114c7128:;
  /* 114c7128 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c712b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c712e jge 0x114c7180 */
  if ((C.sf==C.of)) goto L_114c7180;
  /* 114c7130 mov esi, esp */
  ESI = (ESP);
  /* 114c7132 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7137 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c713b mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 114c713e push eax */
  push32((uint32_t)(EAX));
  /* 114c713f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7142 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114c7144 push edx */
  push32((uint32_t)(EDX));
  /* 114c7145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7148 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c714b push ecx */
  push32((uint32_t)(ECX));
  /* 114c714c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c714f add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7152 push edx */
  push32((uint32_t)(EDX));
  /* 114c7153 call dword ptr [0x11501550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501550))), 0x114c7159u);
  /* 114c7159 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c715c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c715e call 0x114c9460 */
  push32(0x114c7163u); f_114c9460();
  /* 114c7163 mov esi, esp */
  ESI = (ESP);
  /* 114c7165 push 1 */
  push32((uint32_t)(0x1u));
  /* 114c7167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c716a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c716d push eax */
  push32((uint32_t)(EAX));
  /* 114c716e call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7174u);
  /* 114c7174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7177 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7179 call 0x114c9460 */
  push32(0x114c717eu); f_114c9460();
  /* 114c717e jmp 0x114c711f */
  goto L_114c711f;
L_114c7180:;
  /* 114c7180 mov esi, esp */
  ESI = (ESP);
  /* 114c7182 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7187 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c718a push ecx */
  push32((uint32_t)(ECX));
  /* 114c718b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c718e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 114c7191 push eax */
  push32((uint32_t)(EAX));
  /* 114c7192 call dword ptr [0x11501594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501594))), 0x114c7198u);
  /* 114c7198 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c719b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c719d call 0x114c9460 */
  push32(0x114c71a2u); f_114c9460();
  /* 114c71a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c71a5 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 114c71ac push 0 */
  push32((uint32_t)(0x0u));
  /* 114c71ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c71b1 push edx */
  push32((uint32_t)(EDX));
  /* 114c71b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c71b5 call 0x114c1055 */
  push32(0x114c71bau); f_114c1055();
  /* 114c71ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c71bd mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_114c71c4:;
  /* 114c71c4 pop edi */
  EDI = (pop32());
  /* 114c71c5 pop esi */
  ESI = (pop32());
  /* 114c71c6 pop ebx */
  EBX = (pop32());
  /* 114c71c7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c71ca cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c71cc call 0x114c9460 */
  push32(0x114c71d1u); f_114c9460();
  /* 114c71d1 mov esp, ebp */
  ESP = (EBP);
  /* 114c71d3 pop ebp */
  EBP = (pop32());
  /* 114c71d4 ret 8 */
  ESPCHK(0x114c70d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007220 @ 0x114c7220 (42 bytes, 21 insns) */
void f_114c7220(void) {
  FTRACE(0x114c7220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7220 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7221 mov ebp, esp */
  EBP = (ESP);
  /* 114c7223 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7226 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7227 push esi */
  push32((uint32_t)(ESI));
  /* 114c7228 push edi */
  push32((uint32_t)(EDI));
  /* 114c7229 push ecx */
  push32((uint32_t)(ECX));
  /* 114c722a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c722d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7232 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7239 pop ecx */
  ECX = (pop32());
  /* 114c723a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c723d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7240 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7243 pop edi */
  EDI = (pop32());
  /* 114c7244 pop esi */
  ESI = (pop32());
  /* 114c7245 pop ebx */
  EBX = (pop32());
  /* 114c7246 mov esp, ebp */
  ESP = (EBP);
  /* 114c7248 pop ebp */
  EBP = (pop32());
  /* 114c7249 ret  */
  ESPCHK(0x114c7220u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x114c7260 (78 bytes, 33 insns) */
void f_114c7260(void) {
  FTRACE(0x114c7260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7260 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7261 mov ebp, esp */
  EBP = (ESP);
  /* 114c7263 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7266 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7267 push esi */
  push32((uint32_t)(ESI));
  /* 114c7268 push edi */
  push32((uint32_t)(EDI));
  /* 114c7269 push ecx */
  push32((uint32_t)(ECX));
  /* 114c726a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c726d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7272 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7277 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7279 pop ecx */
  ECX = (pop32());
  /* 114c727a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c727d mov esi, esp */
  ESI = (ESP);
  /* 114c727f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7282 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 114c7285 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7289 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c728c push edx */
  push32((uint32_t)(EDX));
  /* 114c728d call dword ptr [0x115014fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014fc))), 0x114c7293u);
  /* 114c7293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7298 call 0x114c9460 */
  push32(0x114c729du); f_114c9460();
  /* 114c729d pop edi */
  EDI = (pop32());
  /* 114c729e pop esi */
  ESI = (pop32());
  /* 114c729f pop ebx */
  EBX = (pop32());
  /* 114c72a0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c72a3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c72a5 call 0x114c9460 */
  push32(0x114c72aau); f_114c9460();
  /* 114c72aa mov esp, ebp */
  ESP = (EBP);
  /* 114c72ac pop ebp */
  EBP = (pop32());
  /* 114c72ad ret  */
  ESPCHK(0x114c7260u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x114c72d0 (102 bytes, 40 insns) */
void f_114c72d0(void) {
  FTRACE(0x114c72d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c72d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c72d1 mov ebp, esp */
  EBP = (ESP);
  /* 114c72d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c72d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c72d7 push esi */
  push32((uint32_t)(ESI));
  /* 114c72d8 push edi */
  push32((uint32_t)(EDI));
  /* 114c72d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c72da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c72dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c72e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c72e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c72e9 pop ecx */
  ECX = (pop32());
  /* 114c72ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c72ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c72f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c72f4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c72f7 mov esi, esp */
  ESI = (ESP);
  /* 114c72f9 push eax */
  push32((uint32_t)(EAX));
  /* 114c72fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c72fd push ecx */
  push32((uint32_t)(ECX));
  /* 114c72fe call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c7304u);
  /* 114c7304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7309 call 0x114c9460 */
  push32(0x114c730eu); f_114c9460();
  /* 114c730e mov esi, eax */
  ESI = (EAX);
  /* 114c7310 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7313 call 0x114c1181 */
  push32(0x114c7318u); f_114c1181();
  /* 114c7318 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c731a jne 0x114c7320 */
  if (!C.zf) goto L_114c7320;
  /* 114c731c mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c7320:;
  /* 114c7320 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c7323 pop edi */
  EDI = (pop32());
  /* 114c7324 pop esi */
  ESI = (pop32());
  /* 114c7325 pop ebx */
  EBX = (pop32());
  /* 114c7326 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7329 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c732b call 0x114c9460 */
  push32(0x114c7330u); f_114c9460();
  /* 114c7330 mov esp, ebp */
  ESP = (EBP);
  /* 114c7332 pop ebp */
  EBP = (pop32());
  /* 114c7333 ret 4 */
  ESPCHK(0x114c72d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007350 @ 0x114c7350 (117 bytes, 44 insns) */
void f_114c7350(void) {
  FTRACE(0x114c7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7350 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7351 mov ebp, esp */
  EBP = (ESP);
  /* 114c7353 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7356 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7357 push esi */
  push32((uint32_t)(ESI));
  /* 114c7358 push edi */
  push32((uint32_t)(EDI));
  /* 114c7359 push ecx */
  push32((uint32_t)(ECX));
  /* 114c735a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c735d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7362 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7367 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7369 pop ecx */
  ECX = (pop32());
  /* 114c736a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c736d mov esi, esp */
  ESI = (ESP);
  /* 114c736f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7372 push eax */
  push32((uint32_t)(EAX));
  /* 114c7373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7376 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7379 push ecx */
  push32((uint32_t)(ECX));
  /* 114c737a call dword ptr [0x11501568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501568))), 0x114c7380u);
  /* 114c7380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7385 call 0x114c9460 */
  push32(0x114c738au); f_114c9460();
  /* 114c738a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c738d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7390 push edx */
  push32((uint32_t)(EDX));
  /* 114c7391 call 0x114c104b */
  push32(0x114c7396u); f_114c104b();
  /* 114c7396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c739c mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 114c739f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c73a2 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 114c73a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c73ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c73af mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 114c73b2 pop edi */
  EDI = (pop32());
  /* 114c73b3 pop esi */
  ESI = (pop32());
  /* 114c73b4 pop ebx */
  EBX = (pop32());
  /* 114c73b5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c73b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c73ba call 0x114c9460 */
  push32(0x114c73bfu); f_114c9460();
  /* 114c73bf mov esp, ebp */
  ESP = (EBP);
  /* 114c73c1 pop ebp */
  EBP = (pop32());
  /* 114c73c2 ret 8 */
  ESPCHK(0x114c7350u, _esp0);
  ESP += 12; return;
}

/* FUN_100073f0 @ 0x114c73f0 (56 bytes, 25 insns) */
void f_114c73f0(void) {
  FTRACE(0x114c73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c73f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c73f1 mov ebp, esp */
  EBP = (ESP);
  /* 114c73f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c73f6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c73f7 push esi */
  push32((uint32_t)(ESI));
  /* 114c73f8 push edi */
  push32((uint32_t)(EDI));
  /* 114c73f9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c73fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c73fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c7402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7409 pop ecx */
  ECX = (pop32());
  /* 114c740a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c740d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c7411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7414 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7418 jne 0x114c741e */
  if (!C.zf) goto L_114c741e;
  /* 114c741a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c741e:;
  /* 114c741e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c7421 pop edi */
  EDI = (pop32());
  /* 114c7422 pop esi */
  ESI = (pop32());
  /* 114c7423 pop ebx */
  EBX = (pop32());
  /* 114c7424 mov esp, ebp */
  ESP = (EBP);
  /* 114c7426 pop ebp */
  EBP = (pop32());
  /* 114c7427 ret  */
  ESPCHK(0x114c73f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007440 @ 0x114c7440 (163 bytes, 60 insns) */
void f_114c7440(void) {
  FTRACE(0x114c7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7440 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7441 mov ebp, esp */
  EBP = (ESP);
  /* 114c7443 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7446 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7447 push esi */
  push32((uint32_t)(ESI));
  /* 114c7448 push edi */
  push32((uint32_t)(EDI));
  /* 114c7449 push ecx */
  push32((uint32_t)(ECX));
  /* 114c744a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c744d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7452 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7457 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7459 pop ecx */
  ECX = (pop32());
  /* 114c745a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c745d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7460 call 0x114c10c8 */
  push32(0x114c7465u); f_114c10c8();
  /* 114c7465 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c746a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c746c je 0x114c74d0 */
  if (C.zf) goto L_114c74d0;
  /* 114c746e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7474 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 114c7477 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c747a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c747d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114c747f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7482 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c7485 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 114c7488 mov esi, esp */
  ESI = (ESP);
  /* 114c748a push 0 */
  push32((uint32_t)(0x0u));
  /* 114c748c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c748f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7492 push eax */
  push32((uint32_t)(EAX));
  /* 114c7493 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7499u);
  /* 114c7499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c749c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c749e call 0x114c9460 */
  push32(0x114c74a3u); f_114c9460();
  /* 114c74a3 mov esi, esp */
  ESI = (ESP);
  /* 114c74a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c74a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c74a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c74ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114c74ae push edx */
  push32((uint32_t)(EDX));
  /* 114c74af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c74b2 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 114c74b5 push ecx */
  push32((uint32_t)(ECX));
  /* 114c74b6 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c74bcu);
  /* 114c74bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c74bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c74c1 call 0x114c9460 */
  push32(0x114c74c6u); f_114c9460();
  /* 114c74c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c74c9 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_114c74d0:;
  /* 114c74d0 pop edi */
  EDI = (pop32());
  /* 114c74d1 pop esi */
  ESI = (pop32());
  /* 114c74d2 pop ebx */
  EBX = (pop32());
  /* 114c74d3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c74d6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c74d8 call 0x114c9460 */
  push32(0x114c74ddu); f_114c9460();
  /* 114c74dd mov esp, ebp */
  ESP = (EBP);
  /* 114c74df pop ebp */
  EBP = (pop32());
  /* 114c74e0 ret 0xc */
  ESPCHK(0x114c7440u, _esp0);
  ESP += 16; return;
}

/* FUN_10007510 @ 0x114c7510 (140 bytes, 53 insns) */
void f_114c7510(void) {
  FTRACE(0x114c7510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7510 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7511 mov ebp, esp */
  EBP = (ESP);
  /* 114c7513 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7516 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7517 push esi */
  push32((uint32_t)(ESI));
  /* 114c7518 push edi */
  push32((uint32_t)(EDI));
  /* 114c7519 push ecx */
  push32((uint32_t)(ECX));
  /* 114c751a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c751d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c7522 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7527 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7529 pop ecx */
  ECX = (pop32());
  /* 114c752a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c752d mov esi, esp */
  ESI = (ESP);
  /* 114c752f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7534 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7537 push eax */
  push32((uint32_t)(EAX));
  /* 114c7538 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c753eu);
  /* 114c753e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7541 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7543 call 0x114c9460 */
  push32(0x114c7548u); f_114c9460();
  /* 114c7548 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c754c mov esi, esp */
  ESI = (ESP);
  /* 114c754e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7551 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114c7554 push edx */
  push32((uint32_t)(EDX));
  /* 114c7555 call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c755bu);
  /* 114c755b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c755e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7560 call 0x114c9460 */
  push32(0x114c7565u); f_114c9460();
  /* 114c7565 mov esi, eax */
  ESI = (EAX);
  /* 114c7567 mov edi, esp */
  EDI = (ESP);
  /* 114c7569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c756c mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 114c756f push ecx */
  push32((uint32_t)(ECX));
  /* 114c7570 call dword ptr [0x115014d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d4))), 0x114c7576u);
  /* 114c7576 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7579 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c757b call 0x114c9460 */
  push32(0x114c7580u); f_114c9460();
  /* 114c7580 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7582 jne 0x114c7588 */
  if (!C.zf) goto L_114c7588;
  /* 114c7584 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c7588:;
  /* 114c7588 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c758b pop edi */
  EDI = (pop32());
  /* 114c758c pop esi */
  ESI = (pop32());
  /* 114c758d pop ebx */
  EBX = (pop32());
  /* 114c758e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7591 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7593 call 0x114c9460 */
  push32(0x114c7598u); f_114c9460();
  /* 114c7598 mov esp, ebp */
  ESP = (EBP);
  /* 114c759a pop ebp */
  EBP = (pop32());
  /* 114c759b ret  */
  ESPCHK(0x114c7510u, _esp0);
  ESP += 4; return;
}

/* FUN_100075c0 @ 0x114c75c0 (125 bytes, 48 insns) */
void f_114c75c0(void) {
  FTRACE(0x114c75c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c75c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c75c1 mov ebp, esp */
  EBP = (ESP);
  /* 114c75c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c75c6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c75c7 push esi */
  push32((uint32_t)(ESI));
  /* 114c75c8 push edi */
  push32((uint32_t)(EDI));
  /* 114c75c9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c75ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c75cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c75d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c75d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c75d9 pop ecx */
  ECX = (pop32());
  /* 114c75da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c75dd mov esi, esp */
  ESI = (ESP);
  /* 114c75df push 0 */
  push32((uint32_t)(0x0u));
  /* 114c75e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c75e4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c75e7 push eax */
  push32((uint32_t)(EAX));
  /* 114c75e8 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c75eeu);
  /* 114c75ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c75f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c75f3 call 0x114c9460 */
  push32(0x114c75f8u); f_114c9460();
  /* 114c75f8 mov esi, esp */
  ESI = (ESP);
  /* 114c75fa push 1 */
  push32((uint32_t)(0x1u));
  /* 114c75fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c75ff mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114c7602 push edx */
  push32((uint32_t)(EDX));
  /* 114c7603 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7609u);
  /* 114c7609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c760c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c760e call 0x114c9460 */
  push32(0x114c7613u); f_114c9460();
  /* 114c7613 mov esi, esp */
  ESI = (ESP);
  /* 114c7615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7618 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 114c761b push ecx */
  push32((uint32_t)(ECX));
  /* 114c761c call dword ptr [0x115014c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014c4))), 0x114c7622u);
  /* 114c7622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7627 call 0x114c9460 */
  push32(0x114c762cu); f_114c9460();
  /* 114c762c pop edi */
  EDI = (pop32());
  /* 114c762d pop esi */
  ESI = (pop32());
  /* 114c762e pop ebx */
  EBX = (pop32());
  /* 114c762f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7632 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7634 call 0x114c9460 */
  push32(0x114c7639u); f_114c9460();
  /* 114c7639 mov esp, ebp */
  ESP = (EBP);
  /* 114c763b pop ebp */
  EBP = (pop32());
  /* 114c763c ret  */
  ESPCHK(0x114c75c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007660 @ 0x114c7660 (98 bytes, 39 insns) */
void f_114c7660(void) {
  FTRACE(0x114c7660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7660 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7661 mov ebp, esp */
  EBP = (ESP);
  /* 114c7663 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7666 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7667 push esi */
  push32((uint32_t)(ESI));
  /* 114c7668 push edi */
  push32((uint32_t)(EDI));
  /* 114c7669 push ecx */
  push32((uint32_t)(ECX));
  /* 114c766a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c766d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7672 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7677 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7679 pop ecx */
  ECX = (pop32());
  /* 114c767a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c767d mov esi, esp */
  ESI = (ESP);
  /* 114c767f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7684 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7687 push eax */
  push32((uint32_t)(EAX));
  /* 114c7688 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c768eu);
  /* 114c768e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7691 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7693 call 0x114c9460 */
  push32(0x114c7698u); f_114c9460();
  /* 114c7698 mov esi, esp */
  ESI = (ESP);
  /* 114c769a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c769d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 114c76a0 push edx */
  push32((uint32_t)(EDX));
  /* 114c76a1 call dword ptr [0x115014cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014cc))), 0x114c76a7u);
  /* 114c76a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c76aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c76ac call 0x114c9460 */
  push32(0x114c76b1u); f_114c9460();
  /* 114c76b1 pop edi */
  EDI = (pop32());
  /* 114c76b2 pop esi */
  ESI = (pop32());
  /* 114c76b3 pop ebx */
  EBX = (pop32());
  /* 114c76b4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c76b7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c76b9 call 0x114c9460 */
  push32(0x114c76beu); f_114c9460();
  /* 114c76be mov esp, ebp */
  ESP = (EBP);
  /* 114c76c0 pop ebp */
  EBP = (pop32());
  /* 114c76c1 ret  */
  ESPCHK(0x114c7660u, _esp0);
  ESP += 4; return;
}

/* FUN_100076e0 @ 0x114c76e0 (402 bytes, 129 insns) [1 switch table(s)] */
void f_114c76e0(void) {
  FTRACE(0x114c76e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c76e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c76e1 mov ebp, esp */
  EBP = (ESP);
  /* 114c76e3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c76e6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c76e7 push esi */
  push32((uint32_t)(ESI));
  /* 114c76e8 push edi */
  push32((uint32_t)(EDI));
  /* 114c76e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c76ea lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c76ed mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c76f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c76f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c76f9 pop ecx */
  ECX = (pop32());
  /* 114c76fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c76fd mov esi, esp */
  ESI = (ESP);
  /* 114c76ff push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7704 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7707 push eax */
  push32((uint32_t)(EAX));
  /* 114c7708 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c770eu);
  /* 114c770e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7713 call 0x114c9460 */
  push32(0x114c7718u); f_114c9460();
  /* 114c7718 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c771b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114c771e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114c7721 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c7724 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7727 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114c772a cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c772e ja 0x114c7861 */
  if ((!C.cf&&!C.zf)) goto L_114c7861;
  /* 114c7734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c7737 jmp dword ptr [ecx*4 + 0x114c7872] */
  switch (ECX) {
    case 0: goto L_114c773e;
    case 1: goto L_114c7777;
    case 2: goto L_114c77bb;
    case 3: goto L_114c77f1;
    case 4: goto L_114c7835;
    default: x86_unimpl("switch@0x114c7737 out of table"); return;
  }
L_114c773e:;
  /* 114c773e mov esi, esp */
  ESI = (ESP);
  /* 114c7740 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7743 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 114c7746 push eax */
  push32((uint32_t)(EAX));
  /* 114c7747 call dword ptr [0x115014c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014c8))), 0x114c774du);
  /* 114c774d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7752 call 0x114c9460 */
  push32(0x114c7757u); f_114c9460();
  /* 114c7757 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c775c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c775e je 0x114c7772 */
  if (C.zf) goto L_114c7772;
  /* 114c7760 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7763 call 0x114c11db */
  push32(0x114c7768u); f_114c11db();
  /* 114c7768 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c776b mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_114c7772:;
  /* 114c7772 jmp 0x114c7861 */
  goto L_114c7861;
L_114c7777:;
  /* 114c7777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c777a call 0x114c111d */
  push32(0x114c777fu); f_114c111d();
  /* 114c777f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7786 je 0x114c77b6 */
  if (C.zf) goto L_114c77b6;
  /* 114c7788 mov esi, esp */
  ESI = (ESP);
  /* 114c778a push 0 */
  push32((uint32_t)(0x0u));
  /* 114c778c push 0 */
  push32((uint32_t)(0x0u));
  /* 114c778e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7791 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114c7794 push eax */
  push32((uint32_t)(EAX));
  /* 114c7795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7798 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 114c779b push edx */
  push32((uint32_t)(EDX));
  /* 114c779c call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c77a2u);
  /* 114c77a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c77a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c77a7 call 0x114c9460 */
  push32(0x114c77acu); f_114c9460();
  /* 114c77ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c77af mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_114c77b6:;
  /* 114c77b6 jmp 0x114c7861 */
  goto L_114c7861;
L_114c77bb:;
  /* 114c77bb mov esi, esp */
  ESI = (ESP);
  /* 114c77bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c77c0 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 114c77c3 push edx */
  push32((uint32_t)(EDX));
  /* 114c77c4 call dword ptr [0x115014c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014c8))), 0x114c77cau);
  /* 114c77ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c77cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c77cf call 0x114c9460 */
  push32(0x114c77d4u); f_114c9460();
  /* 114c77d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c77d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c77db je 0x114c77ef */
  if (C.zf) goto L_114c77ef;
  /* 114c77dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c77e0 call 0x114c106e */
  push32(0x114c77e5u); f_114c106e();
  /* 114c77e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c77e8 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_114c77ef:;
  /* 114c77ef jmp 0x114c7861 */
  goto L_114c7861;
L_114c77f1:;
  /* 114c77f1 mov esi, esp */
  ESI = (ESP);
  /* 114c77f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c77f6 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 114c77f9 push edx */
  push32((uint32_t)(EDX));
  /* 114c77fa call dword ptr [0x115014d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014d4))), 0x114c7800u);
  /* 114c7800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7803 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7805 call 0x114c9460 */
  push32(0x114c780au); f_114c9460();
  /* 114c780a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c780c jne 0x114c7833 */
  if (!C.zf) goto L_114c7833;
  /* 114c780e mov esi, esp */
  ESI = (ESP);
  /* 114c7810 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 114c7812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7815 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 114c7818 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7819 call dword ptr [0x11501500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501500))), 0x114c781fu);
  /* 114c781f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7824 call 0x114c9460 */
  push32(0x114c7829u); f_114c9460();
  /* 114c7829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c782c mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_114c7833:;
  /* 114c7833 jmp 0x114c7861 */
  goto L_114c7861;
L_114c7835:;
  /* 114c7835 mov esi, esp */
  ESI = (ESP);
  /* 114c7837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c783a mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 114c783d push ecx */
  push32((uint32_t)(ECX));
  /* 114c783e call dword ptr [0x11501510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501510))), 0x114c7844u);
  /* 114c7844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7849 call 0x114c9460 */
  push32(0x114c784eu); f_114c9460();
  /* 114c784e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7855 je 0x114c7861 */
  if (C.zf) goto L_114c7861;
  /* 114c7857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c785a mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_114c7861:;
  /* 114c7861 pop edi */
  EDI = (pop32());
  /* 114c7862 pop esi */
  ESI = (pop32());
  /* 114c7863 pop ebx */
  EBX = (pop32());
  /* 114c7864 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7867 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7869 call 0x114c9460 */
  push32(0x114c786eu); f_114c9460();
  /* 114c786e mov esp, ebp */
  ESP = (EBP);
  /* 114c7870 pop ebp */
  EBP = (pop32());
  /* 114c7871 ret  */
  ESPCHK(0x114c76e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x114c78f0 (39 bytes, 18 insns) */
void f_114c78f0(void) {
  FTRACE(0x114c78f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c78f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c78f1 mov ebp, esp */
  EBP = (ESP);
  /* 114c78f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c78f6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c78f7 push esi */
  push32((uint32_t)(ESI));
  /* 114c78f8 push edi */
  push32((uint32_t)(EDI));
  /* 114c78f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 114c78fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 114c7901 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7906 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c790b mov dword ptr [0x114ff0cc], eax */
  w32((uint32_t)(0x114ff0cc), (EAX));
  /* 114c7910 pop edi */
  EDI = (pop32());
  /* 114c7911 pop esi */
  ESI = (pop32());
  /* 114c7912 pop ebx */
  EBX = (pop32());
  /* 114c7913 mov esp, ebp */
  ESP = (EBP);
  /* 114c7915 pop ebp */
  EBP = (pop32());
  /* 114c7916 ret  */
  ESPCHK(0x114c78f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x114c7920 (93 bytes, 34 insns) */
void f_114c7920(void) {
  FTRACE(0x114c7920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7920 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7921 mov ebp, esp */
  EBP = (ESP);
  /* 114c7923 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7926 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7927 push esi */
  push32((uint32_t)(ESI));
  /* 114c7928 push edi */
  push32((uint32_t)(EDI));
  /* 114c7929 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 114c792c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 114c7931 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7936 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7938 cmp dword ptr [0x114ff0cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff0cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c793f je 0x114c796c */
  if (C.zf) goto L_114c796c;
  /* 114c7941 mov ecx, dword ptr [0x114ff0cc] */
  ECX = (r32((uint32_t)(0x114ff0cc)));
  /* 114c7947 call 0x114c10c8 */
  push32(0x114c794cu); f_114c10c8();
  /* 114c794c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7953 je 0x114c796c */
  if (C.zf) goto L_114c796c;
  /* 114c7955 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c7958 push eax */
  push32((uint32_t)(EAX));
  /* 114c7959 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c795c push ecx */
  push32((uint32_t)(ECX));
  /* 114c795d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7960 push edx */
  push32((uint32_t)(EDX));
  /* 114c7961 mov ecx, dword ptr [0x114ff0cc] */
  ECX = (r32((uint32_t)(0x114ff0cc)));
  /* 114c7967 call 0x114c10fa */
  push32(0x114c796cu); f_114c10fa();
L_114c796c:;
  /* 114c796c pop edi */
  EDI = (pop32());
  /* 114c796d pop esi */
  ESI = (pop32());
  /* 114c796e pop ebx */
  EBX = (pop32());
  /* 114c796f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7972 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7974 call 0x114c9460 */
  push32(0x114c7979u); f_114c9460();
  /* 114c7979 mov esp, ebp */
  ESP = (EBP);
  /* 114c797b pop ebp */
  EBP = (pop32());
  /* 114c797c ret  */
  ESPCHK(0x114c7920u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x114c79a0 (437 bytes, 146 insns) */
void f_114c79a0(void) {
  FTRACE(0x114c79a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c79a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c79a1 mov ebp, esp */
  EBP = (ESP);
  /* 114c79a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c79a6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c79a7 push esi */
  push32((uint32_t)(ESI));
  /* 114c79a8 push edi */
  push32((uint32_t)(EDI));
  /* 114c79a9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c79aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c79ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c79b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c79b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c79b9 pop ecx */
  ECX = (pop32());
  /* 114c79ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c79bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c79c0 call 0x114c1050 */
  push32(0x114c79c5u); f_114c1050();
  /* 114c79c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c79ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c79cc je 0x114c7b44 */
  if (C.zf) goto L_114c7b44;
  /* 114c79d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c79d5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 114c79d8 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 114c79db cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114c79df je 0x114c7a99 */
  if (C.zf) goto L_114c7a99;
  /* 114c79e5 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114c79e9 je 0x114c79f0 */
  if (C.zf) goto L_114c79f0;
  /* 114c79eb jmp 0x114c7aef */
  goto L_114c7aef;
L_114c79f0:;
  /* 114c79f0 cmp dword ptr [0x114ff0d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff0d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c79f7 je 0x114c7a3f */
  if (C.zf) goto L_114c7a3f;
  /* 114c79f9 mov esi, esp */
  ESI = (ESP);
  /* 114c79fb push 3 */
  push32((uint32_t)(0x3u));
  /* 114c79fd mov edx, dword ptr [0x114ff0d4] */
  EDX = (r32((uint32_t)(0x114ff0d4)));
  /* 114c7a03 push edx */
  push32((uint32_t)(EDX));
  /* 114c7a04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a07 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a0a push eax */
  push32((uint32_t)(EAX));
  /* 114c7a0b call dword ptr [0x1150157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150157c))), 0x114c7a11u);
  /* 114c7a11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7a16 call 0x114c9460 */
  push32(0x114c7a1bu); f_114c9460();
  /* 114c7a1b mov esi, esp */
  ESI = (ESP);
  /* 114c7a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7a1f mov ecx, dword ptr [0x114ff0d4] */
  ECX = (r32((uint32_t)(0x114ff0d4)));
  /* 114c7a25 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7a26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a29 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a2c push edx */
  push32((uint32_t)(EDX));
  /* 114c7a2d call dword ptr [0x1150157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150157c))), 0x114c7a33u);
  /* 114c7a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7a38 call 0x114c9460 */
  push32(0x114c7a3du); f_114c9460();
  /* 114c7a3d jmp 0x114c7a94 */
  goto L_114c7a94;
L_114c7a3f:;
  /* 114c7a3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a42 call 0x114c108c */
  push32(0x114c7a47u); f_114c108c();
  /* 114c7a47 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7a4e jne 0x114c7a94 */
  if (!C.zf) goto L_114c7a94;
  /* 114c7a50 mov esi, esp */
  ESI = (ESP);
  /* 114c7a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a5a push eax */
  push32((uint32_t)(EAX));
  /* 114c7a5b call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7a61u);
  /* 114c7a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7a66 call 0x114c9460 */
  push32(0x114c7a6bu); f_114c9460();
  /* 114c7a6b mov esi, esp */
  ESI = (ESP);
  /* 114c7a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7a6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a72 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 114c7a75 push edx */
  push32((uint32_t)(EDX));
  /* 114c7a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a79 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a7c push eax */
  push32((uint32_t)(EAX));
  /* 114c7a7d mov cl, byte ptr [0x114ff0d0] */
  CL = (r8((uint32_t)(0x114ff0d0)));
  /* 114c7a83 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7a84 call dword ptr [0x1150156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150156c))), 0x114c7a8au);
  /* 114c7a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7a8f call 0x114c9460 */
  push32(0x114c7a94u); f_114c9460();
L_114c7a94:;
  /* 114c7a94 jmp 0x114c7b44 */
  goto L_114c7b44;
L_114c7a99:;
  /* 114c7a99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7a9c call 0x114c108c */
  push32(0x114c7aa1u); f_114c108c();
  /* 114c7aa1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7aa8 jne 0x114c7aed */
  if (!C.zf) goto L_114c7aed;
  /* 114c7aaa mov esi, esp */
  ESI = (ESP);
  /* 114c7aac push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7aae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7ab1 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7ab4 push edx */
  push32((uint32_t)(EDX));
  /* 114c7ab5 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7abbu);
  /* 114c7abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7ac0 call 0x114c9460 */
  push32(0x114c7ac5u); f_114c9460();
  /* 114c7ac5 mov esi, esp */
  ESI = (ESP);
  /* 114c7ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7acc mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 114c7acf push ecx */
  push32((uint32_t)(ECX));
  /* 114c7ad0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7ad3 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7ad6 push edx */
  push32((uint32_t)(EDX));
  /* 114c7ad7 mov al, byte ptr [0x114ff0d0] */
  AL = (r8((uint32_t)(0x114ff0d0)));
  /* 114c7adc push eax */
  push32((uint32_t)(EAX));
  /* 114c7add call dword ptr [0x1150156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150156c))), 0x114c7ae3u);
  /* 114c7ae3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7ae8 call 0x114c9460 */
  push32(0x114c7aedu); f_114c9460();
L_114c7aed:;
  /* 114c7aed jmp 0x114c7b44 */
  goto L_114c7b44;
L_114c7aef:;
  /* 114c7aef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7af2 call 0x114c108c */
  push32(0x114c7af7u); f_114c108c();
  /* 114c7af7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7afe jne 0x114c7b44 */
  if (!C.zf) goto L_114c7b44;
  /* 114c7b00 mov esi, esp */
  ESI = (ESP);
  /* 114c7b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7b07 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7b0a push ecx */
  push32((uint32_t)(ECX));
  /* 114c7b0b call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7b11u);
  /* 114c7b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7b14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7b16 call 0x114c9460 */
  push32(0x114c7b1bu); f_114c9460();
  /* 114c7b1b mov esi, esp */
  ESI = (ESP);
  /* 114c7b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7b1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7b22 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 114c7b25 push eax */
  push32((uint32_t)(EAX));
  /* 114c7b26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7b29 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7b2c push ecx */
  push32((uint32_t)(ECX));
  /* 114c7b2d mov dl, byte ptr [0x114ff0d0] */
  DL = (r8((uint32_t)(0x114ff0d0)));
  /* 114c7b33 push edx */
  push32((uint32_t)(EDX));
  /* 114c7b34 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c7b3au);
  /* 114c7b3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7b3f call 0x114c9460 */
  push32(0x114c7b44u); f_114c9460();
L_114c7b44:;
  /* 114c7b44 pop edi */
  EDI = (pop32());
  /* 114c7b45 pop esi */
  ESI = (pop32());
  /* 114c7b46 pop ebx */
  EBX = (pop32());
  /* 114c7b47 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7b4a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7b4c call 0x114c9460 */
  push32(0x114c7b51u); f_114c9460();
  /* 114c7b51 mov esp, ebp */
  ESP = (EBP);
  /* 114c7b53 pop ebp */
  EBP = (pop32());
  /* 114c7b54 ret  */
  ESPCHK(0x114c79a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bd0 @ 0x114c7bd0 (235 bytes, 78 insns) */
void f_114c7bd0(void) {
  FTRACE(0x114c7bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7bd1 mov ebp, esp */
  EBP = (ESP);
  /* 114c7bd3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7bd9 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7bda push esi */
  push32((uint32_t)(ESI));
  /* 114c7bdb push edi */
  push32((uint32_t)(EDI));
  /* 114c7bdc push ecx */
  push32((uint32_t)(ECX));
  /* 114c7bdd lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 114c7be3 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 114c7be8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7bed rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7bef pop ecx */
  ECX = (pop32());
  /* 114c7bf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c7bf3 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 114c7bfa mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 114c7c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7c04 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c07 mov esi, esp */
  ESI = (ESP);
  /* 114c7c09 push eax */
  push32((uint32_t)(EAX));
  /* 114c7c0a call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c7c10u);
  /* 114c7c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7c15 call 0x114c9460 */
  push32(0x114c7c1au); f_114c9460();
  /* 114c7c1a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 114c7c1d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7c21 jle 0x114c7c94 */
  if ((C.zf||C.sf!=C.of)) goto L_114c7c94;
  /* 114c7c23 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 114c7c2a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 114c7c31 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 114c7c38 jmp 0x114c7c43 */
  goto L_114c7c43;
L_114c7c3a:;
  /* 114c7c3a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114c7c3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c40 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_114c7c43:;
  /* 114c7c43 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 114c7c46 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7c49 jge 0x114c7c80 */
  if ((C.sf==C.of)) goto L_114c7c80;
  /* 114c7c4b mov esi, esp */
  ESI = (ESP);
  /* 114c7c4d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c7c50 push eax */
  push32((uint32_t)(EAX));
  /* 114c7c51 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114c7c54 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7c55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7c58 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c5b push edx */
  push32((uint32_t)(EDX));
  /* 114c7c5c call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c7c62u);
  /* 114c7c62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7c67 call 0x114c9460 */
  push32(0x114c7c6cu); f_114c9460();
  /* 114c7c6c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114c7c6f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c72 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 114c7c75 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 114c7c78 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7c7b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 114c7c7e jmp 0x114c7c3a */
  goto L_114c7c3a;
L_114c7c80:;
  /* 114c7c80 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114c7c83 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114c7c84 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114c7c87 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 114c7c8a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 114c7c8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114c7c8e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114c7c91 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_114c7c94:;
  /* 114c7c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7c97 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114c7c9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114c7c9c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114c7c9f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114c7ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7ca5 pop edi */
  EDI = (pop32());
  /* 114c7ca6 pop esi */
  ESI = (pop32());
  /* 114c7ca7 pop ebx */
  EBX = (pop32());
  /* 114c7ca8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7cae cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7cb0 call 0x114c9460 */
  push32(0x114c7cb5u); f_114c9460();
  /* 114c7cb5 mov esp, ebp */
  ESP = (EBP);
  /* 114c7cb7 pop ebp */
  EBP = (pop32());
  /* 114c7cb8 ret 4 */
  ESPCHK(0x114c7bd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007d00 @ 0x114c7d00 (120 bytes, 47 insns) */
void f_114c7d00(void) {
  FTRACE(0x114c7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7d01 mov ebp, esp */
  EBP = (ESP);
  /* 114c7d03 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7d06 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7d07 push esi */
  push32((uint32_t)(ESI));
  /* 114c7d08 push edi */
  push32((uint32_t)(EDI));
  /* 114c7d09 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7d0a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c7d0d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c7d12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7d17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7d19 pop ecx */
  ECX = (pop32());
  /* 114c7d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c7d1d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c7d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7d24 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7d27 mov esi, esp */
  ESI = (ESP);
  /* 114c7d29 push eax */
  push32((uint32_t)(EAX));
  /* 114c7d2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7d2d add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7d30 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7d31 call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c7d37u);
  /* 114c7d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7d3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7d3c call 0x114c9460 */
  push32(0x114c7d41u); f_114c9460();
  /* 114c7d41 mov esi, eax */
  ESI = (EAX);
  /* 114c7d43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7d46 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7d49 mov edi, esp */
  EDI = (ESP);
  /* 114c7d4b push edx */
  push32((uint32_t)(EDX));
  /* 114c7d4c call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c7d52u);
  /* 114c7d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7d55 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7d57 call 0x114c9460 */
  push32(0x114c7d5cu); f_114c9460();
  /* 114c7d5c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7d5e jne 0x114c7d64 */
  if (!C.zf) goto L_114c7d64;
  /* 114c7d60 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c7d64:;
  /* 114c7d64 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c7d67 pop edi */
  EDI = (pop32());
  /* 114c7d68 pop esi */
  ESI = (pop32());
  /* 114c7d69 pop ebx */
  EBX = (pop32());
  /* 114c7d6a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7d6d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7d6f call 0x114c9460 */
  push32(0x114c7d74u); f_114c9460();
  /* 114c7d74 mov esp, ebp */
  ESP = (EBP);
  /* 114c7d76 pop ebp */
  EBP = (pop32());
  /* 114c7d77 ret  */
  ESPCHK(0x114c7d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x114c7da0 (86 bytes, 35 insns) */
void f_114c7da0(void) {
  FTRACE(0x114c7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7da0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7da1 mov ebp, esp */
  EBP = (ESP);
  /* 114c7da3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7da6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7da7 push esi */
  push32((uint32_t)(ESI));
  /* 114c7da8 push edi */
  push32((uint32_t)(EDI));
  /* 114c7da9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7daa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c7dad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c7db2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7db7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7db9 pop ecx */
  ECX = (pop32());
  /* 114c7dba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c7dbd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c7dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7dc4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7dc7 mov esi, esp */
  ESI = (ESP);
  /* 114c7dc9 push eax */
  push32((uint32_t)(EAX));
  /* 114c7dca call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c7dd0u);
  /* 114c7dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7dd5 call 0x114c9460 */
  push32(0x114c7ddau); f_114c9460();
  /* 114c7dda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7ddc jle 0x114c7de2 */
  if ((C.zf||C.sf!=C.of)) goto L_114c7de2;
  /* 114c7dde mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c7de2:;
  /* 114c7de2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c7de5 pop edi */
  EDI = (pop32());
  /* 114c7de6 pop esi */
  ESI = (pop32());
  /* 114c7de7 pop ebx */
  EBX = (pop32());
  /* 114c7de8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7deb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7ded call 0x114c9460 */
  push32(0x114c7df2u); f_114c9460();
  /* 114c7df2 mov esp, ebp */
  ESP = (EBP);
  /* 114c7df4 pop ebp */
  EBP = (pop32());
  /* 114c7df5 ret  */
  ESPCHK(0x114c7da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x114c7e10 (42 bytes, 21 insns) */
void f_114c7e10(void) {
  FTRACE(0x114c7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7e10 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7e11 mov ebp, esp */
  EBP = (ESP);
  /* 114c7e13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7e16 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7e17 push esi */
  push32((uint32_t)(ESI));
  /* 114c7e18 push edi */
  push32((uint32_t)(EDI));
  /* 114c7e19 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7e1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c7e1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7e22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7e27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7e29 pop ecx */
  ECX = (pop32());
  /* 114c7e2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c7e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7e30 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7e33 pop edi */
  EDI = (pop32());
  /* 114c7e34 pop esi */
  ESI = (pop32());
  /* 114c7e35 pop ebx */
  EBX = (pop32());
  /* 114c7e36 mov esp, ebp */
  ESP = (EBP);
  /* 114c7e38 pop ebp */
  EBP = (pop32());
  /* 114c7e39 ret  */
  ESPCHK(0x114c7e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x114c7e50 (77 bytes, 32 insns) */
void f_114c7e50(void) {
  FTRACE(0x114c7e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7e50 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7e51 mov ebp, esp */
  EBP = (ESP);
  /* 114c7e53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7e56 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7e57 push esi */
  push32((uint32_t)(ESI));
  /* 114c7e58 push edi */
  push32((uint32_t)(EDI));
  /* 114c7e59 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7e5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c7e5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c7e62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7e67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7e69 pop ecx */
  ECX = (pop32());
  /* 114c7e6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c7e6d mov esi, esp */
  ESI = (ESP);
  /* 114c7e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c7e72 push eax */
  push32((uint32_t)(EAX));
  /* 114c7e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7e76 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7e79 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7e7a call dword ptr [0x11501568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501568))), 0x114c7e80u);
  /* 114c7e80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7e85 call 0x114c9460 */
  push32(0x114c7e8au); f_114c9460();
  /* 114c7e8a pop edi */
  EDI = (pop32());
  /* 114c7e8b pop esi */
  ESI = (pop32());
  /* 114c7e8c pop ebx */
  EBX = (pop32());
  /* 114c7e8d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7e90 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7e92 call 0x114c9460 */
  push32(0x114c7e97u); f_114c9460();
  /* 114c7e97 mov esp, ebp */
  ESP = (EBP);
  /* 114c7e99 pop ebp */
  EBP = (pop32());
  /* 114c7e9a ret 4 */
  ESPCHK(0x114c7e50u, _esp0);
  ESP += 8; return;
}

/* FUN_10007eb0 @ 0x114c7eb0 (413 bytes, 143 insns) */
void f_114c7eb0(void) {
  FTRACE(0x114c7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c7eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c7eb1 mov ebp, esp */
  EBP = (ESP);
  /* 114c7eb3 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c7eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c7eb7 push esi */
  push32((uint32_t)(ESI));
  /* 114c7eb8 push edi */
  push32((uint32_t)(EDI));
  /* 114c7eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7eba lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 114c7ebd mov ecx, 0x15 */
  ECX = (0x15u);
  /* 114c7ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c7ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c7ec9 pop ecx */
  ECX = (pop32());
  /* 114c7eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c7ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7ed0 call 0x114c10be */
  push32(0x114c7ed5u); f_114c10be();
  /* 114c7ed5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7edc je 0x114c803c */
  if (C.zf) goto L_114c803c;
  /* 114c7ee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7ee5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c7ee7 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 114c7eea cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7eed jne 0x114c7f98 */
  if (!C.zf) goto L_114c7f98;
  /* 114c7ef3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 114c7ef8 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114c7efb push edx */
  push32((uint32_t)(EDX));
  /* 114c7efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7eff call 0x114c10a5 */
  push32(0x114c7f04u); f_114c10a5();
  /* 114c7f04 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c7f07 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7f08 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 114c7f0a push edx */
  push32((uint32_t)(EDX));
  /* 114c7f0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f0e add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f11 push eax */
  push32((uint32_t)(EAX));
  /* 114c7f12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f15 call 0x114c1276 */
  push32(0x114c7f1au); f_114c1276();
  /* 114c7f1a mov esi, esp */
  ESI = (ESP);
  /* 114c7f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7f1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f21 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f24 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7f25 call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c7f2bu);
  /* 114c7f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7f30 call 0x114c9460 */
  push32(0x114c7f35u); f_114c9460();
  /* 114c7f35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7f38 jge 0x114c7f43 */
  if ((C.sf==C.of)) goto L_114c7f43;
  /* 114c7f3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f3d mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 114c7f41 jmp 0x114c7f98 */
  goto L_114c7f98;
L_114c7f43:;
  /* 114c7f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f46 call 0x114c1154 */
  push32(0x114c7f4bu); f_114c1154();
  /* 114c7f4b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c7f50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c7f52 jne 0x114c7f98 */
  if (!C.zf) goto L_114c7f98;
  /* 114c7f54 mov esi, esp */
  ESI = (ESP);
  /* 114c7f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f5b add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f5e push eax */
  push32((uint32_t)(EAX));
  /* 114c7f5f call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c7f65u);
  /* 114c7f65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7f6a call 0x114c9460 */
  push32(0x114c7f6fu); f_114c9460();
  /* 114c7f6f mov esi, esp */
  ESI = (ESP);
  /* 114c7f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f76 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 114c7f79 push edx */
  push32((uint32_t)(EDX));
  /* 114c7f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f7d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f80 push eax */
  push32((uint32_t)(EAX));
  /* 114c7f81 mov cl, byte ptr [0x114fcdb0] */
  CL = (r8((uint32_t)(0x114fcdb0)));
  /* 114c7f87 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7f88 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c7f8eu);
  /* 114c7f8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7f93 call 0x114c9460 */
  push32(0x114c7f98u); f_114c9460();
L_114c7f98:;
  /* 114c7f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c7f9d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 114c7fa0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7fa3 jne 0x114c803c */
  if (!C.zf) goto L_114c803c;
  /* 114c7fa9 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 114c7fae lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 114c7fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7fb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7fb5 call 0x114c10a5 */
  push32(0x114c7fbau); f_114c10a5();
  /* 114c7fba mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c7fbd push edx */
  push32((uint32_t)(EDX));
  /* 114c7fbe mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 114c7fc0 push eax */
  push32((uint32_t)(EAX));
  /* 114c7fc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7fc4 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 114c7fc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7fcb call 0x114c1276 */
  push32(0x114c7fd0u); f_114c1276();
  /* 114c7fd0 mov esi, esp */
  ESI = (ESP);
  /* 114c7fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7fd7 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7fda push edx */
  push32((uint32_t)(EDX));
  /* 114c7fdb call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c7fe1u);
  /* 114c7fe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7fe6 call 0x114c9460 */
  push32(0x114c7febu); f_114c9460();
  /* 114c7feb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c7fee jge 0x114c8035 */
  if ((C.sf==C.of)) goto L_114c8035;
  /* 114c7ff0 mov esi, esp */
  ESI = (ESP);
  /* 114c7ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c7ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c7ff7 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c7ffa push eax */
  push32((uint32_t)(EAX));
  /* 114c7ffb call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c8001u);
  /* 114c8001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8004 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8006 call 0x114c9460 */
  push32(0x114c800bu); f_114c9460();
  /* 114c800b mov esi, esp */
  ESI = (ESP);
  /* 114c800d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c800f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8012 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 114c8015 push edx */
  push32((uint32_t)(EDX));
  /* 114c8016 mov eax, dword ptr [0x114ff0d8] */
  EAX = (r32((uint32_t)(0x114ff0d8)));
  /* 114c801b push eax */
  push32((uint32_t)(EAX));
  /* 114c801c mov cl, byte ptr [0x114fcdb0] */
  CL = (r8((uint32_t)(0x114fcdb0)));
  /* 114c8022 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8023 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c8029u);
  /* 114c8029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c802c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c802e call 0x114c9460 */
  push32(0x114c8033u); f_114c9460();
  /* 114c8033 jmp 0x114c803c */
  goto L_114c803c;
L_114c8035:;
  /* 114c8035 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8038 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_114c803c:;
  /* 114c803c pop edi */
  EDI = (pop32());
  /* 114c803d pop esi */
  ESI = (pop32());
  /* 114c803e pop ebx */
  EBX = (pop32());
  /* 114c803f add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8042 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8044 call 0x114c9460 */
  push32(0x114c8049u); f_114c9460();
  /* 114c8049 mov esp, ebp */
  ESP = (EBP);
  /* 114c804b pop ebp */
  EBP = (pop32());
  /* 114c804c ret  */
  ESPCHK(0x114c7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x114c80c0 (311 bytes, 104 insns) */
void f_114c80c0(void) {
  FTRACE(0x114c80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c80c1 mov ebp, esp */
  EBP = (ESP);
  /* 114c80c3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c80c9 push ebx */
  push32((uint32_t)(EBX));
  /* 114c80ca push esi */
  push32((uint32_t)(ESI));
  /* 114c80cb push edi */
  push32((uint32_t)(EDI));
  /* 114c80cc push ecx */
  push32((uint32_t)(ECX));
  /* 114c80cd lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 114c80d3 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 114c80d8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c80dd rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c80df pop ecx */
  ECX = (pop32());
  /* 114c80e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c80e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c80e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114c80e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c80ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114c80ef lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 114c80f2 push edx */
  push32((uint32_t)(EDX));
  /* 114c80f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c80f6 call 0x114c10a5 */
  push32(0x114c80fbu); f_114c10a5();
  /* 114c80fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114c80fd mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c8100 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114c8103 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114c8106 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114c8109 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114c810c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114c810f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 114c8112 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114c8115 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8118 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 114c811b fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 114c811e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114c8121 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8124 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 114c8127 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 114c812a fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 114c812c sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c812f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 114c8132 call 0x114c9614 */
  push32(0x114c8137u); f_114c9614();
  /* 114c8137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c813a fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 114c813d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114c8140 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8143 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114c8145 jge 0x114c8153 */
  if ((C.sf==C.of)) goto L_114c8153;
  /* 114c8147 fld qword ptr [0x114f9040] */
  fpu_push(rf64((uint32_t)(0x114f9040)));
  /* 114c814d fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 114c8150 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_114c8153:;
  /* 114c8153 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 114c8156 fmul qword ptr [0x114f9030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x114f9030)));
  /* 114c815c fdiv qword ptr [0x114f9020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x114f9020)));
  /* 114c8162 call 0x114c974c */
  push32(0x114c8167u); f_114c974c();
  /* 114c8167 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114c816a fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 114c816d fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 114c8170 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114c8173 push edx */
  push32((uint32_t)(EDX));
  /* 114c8174 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c8177 push eax */
  push32((uint32_t)(EAX));
  /* 114c8178 call 0x114c9564 */
  push32(0x114c817du); f_114c9564();
  /* 114c817d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8180 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 114c8183 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 114c8186 call 0x114c974c */
  push32(0x114c818bu); f_114c974c();
  /* 114c818b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114c818e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 114c8191 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 114c8194 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114c8197 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8198 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114c819b push edx */
  push32((uint32_t)(EDX));
  /* 114c819c call 0x114c94b4 */
  push32(0x114c81a1u); f_114c94b4();
  /* 114c81a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c81a4 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 114c81a7 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 114c81aa call 0x114c974c */
  push32(0x114c81afu); f_114c974c();
  /* 114c81af mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114c81b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 114c81b4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114c81b7 push eax */
  push32((uint32_t)(EAX));
  /* 114c81b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114c81bb push ecx */
  push32((uint32_t)(ECX));
  /* 114c81bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c81bf add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c81c2 push edx */
  push32((uint32_t)(EDX));
  /* 114c81c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c81c6 call 0x114c1276 */
  push32(0x114c81cbu); f_114c1276();
  /* 114c81cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114c81ce add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c81d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c81d6 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 114c81d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c81dc call 0x114c11e5 */
  push32(0x114c81e1u); f_114c11e5();
  /* 114c81e1 pop edi */
  EDI = (pop32());
  /* 114c81e2 pop esi */
  ESI = (pop32());
  /* 114c81e3 pop ebx */
  EBX = (pop32());
  /* 114c81e4 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c81ea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c81ec call 0x114c9460 */
  push32(0x114c81f1u); f_114c9460();
  /* 114c81f1 mov esp, ebp */
  ESP = (EBP);
  /* 114c81f3 pop ebp */
  EBP = (pop32());
  /* 114c81f4 ret 0xc */
  ESPCHK(0x114c80c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10008250 @ 0x114c8250 (198 bytes, 71 insns) */
void f_114c8250(void) {
  FTRACE(0x114c8250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8250 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8251 mov ebp, esp */
  EBP = (ESP);
  /* 114c8253 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8256 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8257 push esi */
  push32((uint32_t)(ESI));
  /* 114c8258 push edi */
  push32((uint32_t)(EDI));
  /* 114c8259 push ecx */
  push32((uint32_t)(ECX));
  /* 114c825a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 114c825d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 114c8262 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8267 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8269 pop ecx */
  ECX = (pop32());
  /* 114c826a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c826d mov esi, esp */
  ESI = (ESP);
  /* 114c826f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c8272 push eax */
  push32((uint32_t)(EAX));
  /* 114c8273 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8275 mov ecx, dword ptr [0x114ff0dc] */
  ECX = (r32((uint32_t)(0x114ff0dc)));
  /* 114c827b push ecx */
  push32((uint32_t)(ECX));
  /* 114c827c call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c8282u);
  /* 114c8282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8287 call 0x114c9460 */
  push32(0x114c828cu); f_114c9460();
  /* 114c828c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114c828f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 114c8292 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114c8295 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 114c8298 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c829b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 114c829e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c82a1 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114c82a4 mov esi, esp */
  ESI = (ESP);
  /* 114c82a6 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c82a9 push eax */
  push32((uint32_t)(EAX));
  /* 114c82aa call dword ptr [0x115014ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014ec))), 0x114c82b0u);
  /* 114c82b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c82b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c82b5 call 0x114c9460 */
  push32(0x114c82bau); f_114c9460();
  /* 114c82ba mov esi, esp */
  ESI = (ESP);
  /* 114c82bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c82bf push ecx */
  push32((uint32_t)(ECX));
  /* 114c82c0 mov edx, dword ptr [0x114ff0dc] */
  EDX = (r32((uint32_t)(0x114ff0dc)));
  /* 114c82c6 push edx */
  push32((uint32_t)(EDX));
  /* 114c82c7 mov eax, dword ptr [0x114ff0d8] */
  EAX = (r32((uint32_t)(0x114ff0d8)));
  /* 114c82cc push eax */
  push32((uint32_t)(EAX));
  /* 114c82cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c82d0 push ecx */
  push32((uint32_t)(ECX));
  /* 114c82d1 call dword ptr [0x115014f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014f0))), 0x114c82d7u);
  /* 114c82d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c82da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c82dc call 0x114c9460 */
  push32(0x114c82e1u); f_114c9460();
  /* 114c82e1 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 114c82e4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114c82e7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114c82ea mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114c82ed mov esi, esp */
  ESI = (ESP);
  /* 114c82ef lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 114c82f2 push ecx */
  push32((uint32_t)(ECX));
  /* 114c82f3 call dword ptr [0x115014ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014ec))), 0x114c82f9u);
  /* 114c82f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c82fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c82fe call 0x114c9460 */
  push32(0x114c8303u); f_114c9460();
  /* 114c8303 pop edi */
  EDI = (pop32());
  /* 114c8304 pop esi */
  ESI = (pop32());
  /* 114c8305 pop ebx */
  EBX = (pop32());
  /* 114c8306 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8309 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c830b call 0x114c9460 */
  push32(0x114c8310u); f_114c9460();
  /* 114c8310 mov esp, ebp */
  ESP = (EBP);
  /* 114c8312 pop ebp */
  EBP = (pop32());
  /* 114c8313 ret 0x10 */
  ESPCHK(0x114c8250u, _esp0);
  ESP += 20; return;
}

/* FUN_10008350 @ 0x114c8350 (120 bytes, 47 insns) */
void f_114c8350(void) {
  FTRACE(0x114c8350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8350 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8351 mov ebp, esp */
  EBP = (ESP);
  /* 114c8353 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8356 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8357 push esi */
  push32((uint32_t)(ESI));
  /* 114c8358 push edi */
  push32((uint32_t)(EDI));
  /* 114c8359 push ecx */
  push32((uint32_t)(ECX));
  /* 114c835a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c835d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c8362 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8367 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8369 pop ecx */
  ECX = (pop32());
  /* 114c836a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c836d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c8371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8374 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8377 mov esi, esp */
  ESI = (ESP);
  /* 114c8379 push eax */
  push32((uint32_t)(EAX));
  /* 114c837a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c837d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8380 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8381 call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c8387u);
  /* 114c8387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c838a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c838c call 0x114c9460 */
  push32(0x114c8391u); f_114c9460();
  /* 114c8391 mov esi, eax */
  ESI = (EAX);
  /* 114c8393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8396 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8399 mov edi, esp */
  EDI = (ESP);
  /* 114c839b push edx */
  push32((uint32_t)(EDX));
  /* 114c839c call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c83a2u);
  /* 114c83a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c83a5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c83a7 call 0x114c9460 */
  push32(0x114c83acu); f_114c9460();
  /* 114c83ac cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c83ae jne 0x114c83b4 */
  if (!C.zf) goto L_114c83b4;
  /* 114c83b0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c83b4:;
  /* 114c83b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c83b7 pop edi */
  EDI = (pop32());
  /* 114c83b8 pop esi */
  ESI = (pop32());
  /* 114c83b9 pop ebx */
  EBX = (pop32());
  /* 114c83ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c83bd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c83bf call 0x114c9460 */
  push32(0x114c83c4u); f_114c9460();
  /* 114c83c4 mov esp, ebp */
  ESP = (EBP);
  /* 114c83c6 pop ebp */
  EBP = (pop32());
  /* 114c83c7 ret  */
  ESPCHK(0x114c8350u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x114c83f0 (86 bytes, 35 insns) */
void f_114c83f0(void) {
  FTRACE(0x114c83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c83f1 mov ebp, esp */
  EBP = (ESP);
  /* 114c83f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c83f6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c83f7 push esi */
  push32((uint32_t)(ESI));
  /* 114c83f8 push edi */
  push32((uint32_t)(EDI));
  /* 114c83f9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c83fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c83fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c8402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8409 pop ecx */
  ECX = (pop32());
  /* 114c840a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c840d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c8411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8414 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8417 mov esi, esp */
  ESI = (ESP);
  /* 114c8419 push eax */
  push32((uint32_t)(EAX));
  /* 114c841a call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c8420u);
  /* 114c8420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8425 call 0x114c9460 */
  push32(0x114c842au); f_114c9460();
  /* 114c842a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c842c jle 0x114c8432 */
  if ((C.zf||C.sf!=C.of)) goto L_114c8432;
  /* 114c842e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c8432:;
  /* 114c8432 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c8435 pop edi */
  EDI = (pop32());
  /* 114c8436 pop esi */
  ESI = (pop32());
  /* 114c8437 pop ebx */
  EBX = (pop32());
  /* 114c8438 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c843b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c843d call 0x114c9460 */
  push32(0x114c8442u); f_114c9460();
  /* 114c8442 mov esp, ebp */
  ESP = (EBP);
  /* 114c8444 pop ebp */
  EBP = (pop32());
  /* 114c8445 ret  */
  ESPCHK(0x114c83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x114c8460 (42 bytes, 21 insns) */
void f_114c8460(void) {
  FTRACE(0x114c8460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8460 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8461 mov ebp, esp */
  EBP = (ESP);
  /* 114c8463 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8466 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8467 push esi */
  push32((uint32_t)(ESI));
  /* 114c8468 push edi */
  push32((uint32_t)(EDI));
  /* 114c8469 push ecx */
  push32((uint32_t)(ECX));
  /* 114c846a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c846d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8472 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8477 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8479 pop ecx */
  ECX = (pop32());
  /* 114c847a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c847d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8480 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8483 pop edi */
  EDI = (pop32());
  /* 114c8484 pop esi */
  ESI = (pop32());
  /* 114c8485 pop ebx */
  EBX = (pop32());
  /* 114c8486 mov esp, ebp */
  ESP = (EBP);
  /* 114c8488 pop ebp */
  EBP = (pop32());
  /* 114c8489 ret  */
  ESPCHK(0x114c8460u, _esp0);
  ESP += 4; return;
}

/* FUN_100084a0 @ 0x114c84a0 (235 bytes, 78 insns) */
void f_114c84a0(void) {
  FTRACE(0x114c84a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c84a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c84a1 mov ebp, esp */
  EBP = (ESP);
  /* 114c84a3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c84a9 push ebx */
  push32((uint32_t)(EBX));
  /* 114c84aa push esi */
  push32((uint32_t)(ESI));
  /* 114c84ab push edi */
  push32((uint32_t)(EDI));
  /* 114c84ac push ecx */
  push32((uint32_t)(ECX));
  /* 114c84ad lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 114c84b3 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 114c84b8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c84bd rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c84bf pop ecx */
  ECX = (pop32());
  /* 114c84c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c84c3 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 114c84ca mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 114c84d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c84d4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c84d7 mov esi, esp */
  ESI = (ESP);
  /* 114c84d9 push eax */
  push32((uint32_t)(EAX));
  /* 114c84da call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c84e0u);
  /* 114c84e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c84e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c84e5 call 0x114c9460 */
  push32(0x114c84eau); f_114c9460();
  /* 114c84ea mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 114c84ed cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c84f1 jle 0x114c8564 */
  if ((C.zf||C.sf!=C.of)) goto L_114c8564;
  /* 114c84f3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 114c84fa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 114c8501 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 114c8508 jmp 0x114c8513 */
  goto L_114c8513;
L_114c850a:;
  /* 114c850a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114c850d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8510 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_114c8513:;
  /* 114c8513 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 114c8516 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8519 jge 0x114c8550 */
  if ((C.sf==C.of)) goto L_114c8550;
  /* 114c851b mov esi, esp */
  ESI = (ESP);
  /* 114c851d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c8520 push eax */
  push32((uint32_t)(EAX));
  /* 114c8521 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114c8524 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8525 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8528 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c852b push edx */
  push32((uint32_t)(EDX));
  /* 114c852c call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c8532u);
  /* 114c8532 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8537 call 0x114c9460 */
  push32(0x114c853cu); f_114c9460();
  /* 114c853c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114c853f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8542 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 114c8545 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 114c8548 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c854b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 114c854e jmp 0x114c850a */
  goto L_114c850a;
L_114c8550:;
  /* 114c8550 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114c8553 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114c8554 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114c8557 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 114c855a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 114c855d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114c855e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114c8561 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_114c8564:;
  /* 114c8564 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8567 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114c856a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114c856c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114c856f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114c8572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8575 pop edi */
  EDI = (pop32());
  /* 114c8576 pop esi */
  ESI = (pop32());
  /* 114c8577 pop ebx */
  EBX = (pop32());
  /* 114c8578 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c857e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8580 call 0x114c9460 */
  push32(0x114c8585u); f_114c9460();
  /* 114c8585 mov esp, ebp */
  ESP = (EBP);
  /* 114c8587 pop ebp */
  EBP = (pop32());
  /* 114c8588 ret 4 */
  ESPCHK(0x114c84a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100085d0 @ 0x114c85d0 (250 bytes, 89 insns) */
void f_114c85d0(void) {
  FTRACE(0x114c85d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c85d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c85d1 mov ebp, esp */
  EBP = (ESP);
  /* 114c85d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c85d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c85d7 push esi */
  push32((uint32_t)(ESI));
  /* 114c85d8 push edi */
  push32((uint32_t)(EDI));
  /* 114c85d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c85da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c85dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c85e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c85e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c85e9 pop ecx */
  ECX = (pop32());
  /* 114c85ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c85ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c85f0 call 0x114c10e6 */
  push32(0x114c85f5u); f_114c10e6();
  /* 114c85f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c85fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c85fc je 0x114c86b9 */
  if (C.zf) goto L_114c86b9;
  /* 114c8602 mov esi, esp */
  ESI = (ESP);
  /* 114c8604 mov eax, dword ptr [0x114fcdb4] */
  EAX = (r32((uint32_t)(0x114fcdb4)));
  /* 114c8609 push eax */
  push32((uint32_t)(EAX));
  /* 114c860a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c860d push ecx */
  push32((uint32_t)(ECX));
  /* 114c860e mov edx, dword ptr [0x114ff0e0] */
  EDX = (r32((uint32_t)(0x114ff0e0)));
  /* 114c8614 push edx */
  push32((uint32_t)(EDX));
  /* 114c8615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8618 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c861b push eax */
  push32((uint32_t)(EAX));
  /* 114c861c call dword ptr [0x115014f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014f0))), 0x114c8622u);
  /* 114c8622 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8627 call 0x114c9460 */
  push32(0x114c862cu); f_114c9460();
  /* 114c862c mov esi, esp */
  ESI = (ESP);
  /* 114c862e push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8630 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8633 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8636 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8637 call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c863du);
  /* 114c863d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8640 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8642 call 0x114c9460 */
  push32(0x114c8647u); f_114c9460();
  /* 114c8647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8649 jle 0x114c866c */
  if ((C.zf||C.sf!=C.of)) goto L_114c866c;
  /* 114c864b mov esi, esp */
  ESI = (ESP);
  /* 114c864d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c864f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8652 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8655 push edx */
  push32((uint32_t)(EDX));
  /* 114c8656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8659 push eax */
  push32((uint32_t)(EAX));
  /* 114c865a call dword ptr [0x1150157c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150157c))), 0x114c8660u);
  /* 114c8660 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8663 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8665 call 0x114c9460 */
  push32(0x114c866au); f_114c9460();
  /* 114c866a jmp 0x114c86b9 */
  goto L_114c86b9;
L_114c866c:;
  /* 114c866c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c866f call 0x114c11f4 */
  push32(0x114c8674u); f_114c11f4();
  /* 114c8674 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c8679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c867b jne 0x114c86b9 */
  if (!C.zf) goto L_114c86b9;
  /* 114c867d mov esi, esp */
  ESI = (ESP);
  /* 114c867f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8684 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8685 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c868bu);
  /* 114c868b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c868e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8690 call 0x114c9460 */
  push32(0x114c8695u); f_114c9460();
  /* 114c8695 mov esi, esp */
  ESI = (ESP);
  /* 114c8697 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8699 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c869b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c869e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114c86a1 push eax */
  push32((uint32_t)(EAX));
  /* 114c86a2 mov cl, byte ptr [0x114fcdb8] */
  CL = (r8((uint32_t)(0x114fcdb8)));
  /* 114c86a8 push ecx */
  push32((uint32_t)(ECX));
  /* 114c86a9 call dword ptr [0x1150156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150156c))), 0x114c86afu);
  /* 114c86af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c86b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c86b4 call 0x114c9460 */
  push32(0x114c86b9u); f_114c9460();
L_114c86b9:;
  /* 114c86b9 pop edi */
  EDI = (pop32());
  /* 114c86ba pop esi */
  ESI = (pop32());
  /* 114c86bb pop ebx */
  EBX = (pop32());
  /* 114c86bc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c86bf cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c86c1 call 0x114c9460 */
  push32(0x114c86c6u); f_114c9460();
  /* 114c86c6 mov esp, ebp */
  ESP = (EBP);
  /* 114c86c8 pop ebp */
  EBP = (pop32());
  /* 114c86c9 ret  */
  ESPCHK(0x114c85d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x114c8710 (74 bytes, 31 insns) */
void f_114c8710(void) {
  FTRACE(0x114c8710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8710 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8711 mov ebp, esp */
  EBP = (ESP);
  /* 114c8713 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8716 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8717 push esi */
  push32((uint32_t)(ESI));
  /* 114c8718 push edi */
  push32((uint32_t)(EDI));
  /* 114c8719 push ecx */
  push32((uint32_t)(ECX));
  /* 114c871a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c871d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8729 pop ecx */
  ECX = (pop32());
  /* 114c872a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c872d mov esi, esp */
  ESI = (ESP);
  /* 114c872f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8732 push eax */
  push32((uint32_t)(EAX));
  /* 114c8733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8736 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8737 call dword ptr [0x11501568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501568))), 0x114c873du);
  /* 114c873d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8742 call 0x114c9460 */
  push32(0x114c8747u); f_114c9460();
  /* 114c8747 pop edi */
  EDI = (pop32());
  /* 114c8748 pop esi */
  ESI = (pop32());
  /* 114c8749 pop ebx */
  EBX = (pop32());
  /* 114c874a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c874d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c874f call 0x114c9460 */
  push32(0x114c8754u); f_114c9460();
  /* 114c8754 mov esp, ebp */
  ESP = (EBP);
  /* 114c8756 pop ebp */
  EBP = (pop32());
  /* 114c8757 ret 4 */
  ESPCHK(0x114c8710u, _esp0);
  ESP += 8; return;
}

/* FUN_10008770 @ 0x114c8770 (114 bytes, 45 insns) */
void f_114c8770(void) {
  FTRACE(0x114c8770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8770 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8771 mov ebp, esp */
  EBP = (ESP);
  /* 114c8773 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8776 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8777 push esi */
  push32((uint32_t)(ESI));
  /* 114c8778 push edi */
  push32((uint32_t)(EDI));
  /* 114c8779 push ecx */
  push32((uint32_t)(ECX));
  /* 114c877a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c877d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c8782 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8787 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8789 pop ecx */
  ECX = (pop32());
  /* 114c878a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c878d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c8791 mov esi, esp */
  ESI = (ESP);
  /* 114c8793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8796 push eax */
  push32((uint32_t)(EAX));
  /* 114c8797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c879a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114c879d push edx */
  push32((uint32_t)(EDX));
  /* 114c879e call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c87a4u);
  /* 114c87a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c87a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c87a9 call 0x114c9460 */
  push32(0x114c87aeu); f_114c9460();
  /* 114c87ae mov esi, eax */
  ESI = (EAX);
  /* 114c87b0 mov edi, esp */
  EDI = (ESP);
  /* 114c87b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c87b5 push eax */
  push32((uint32_t)(EAX));
  /* 114c87b6 call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c87bcu);
  /* 114c87bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c87bf cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c87c1 call 0x114c9460 */
  push32(0x114c87c6u); f_114c9460();
  /* 114c87c6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c87c8 jne 0x114c87ce */
  if (!C.zf) goto L_114c87ce;
  /* 114c87ca mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c87ce:;
  /* 114c87ce mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c87d1 pop edi */
  EDI = (pop32());
  /* 114c87d2 pop esi */
  ESI = (pop32());
  /* 114c87d3 pop ebx */
  EBX = (pop32());
  /* 114c87d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c87d7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c87d9 call 0x114c9460 */
  push32(0x114c87deu); f_114c9460();
  /* 114c87de mov esp, ebp */
  ESP = (EBP);
  /* 114c87e0 pop ebp */
  EBP = (pop32());
  /* 114c87e1 ret  */
  ESPCHK(0x114c8770u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x114c8800 (83 bytes, 34 insns) */
void f_114c8800(void) {
  FTRACE(0x114c8800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8800 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8801 mov ebp, esp */
  EBP = (ESP);
  /* 114c8803 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8806 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8807 push esi */
  push32((uint32_t)(ESI));
  /* 114c8808 push edi */
  push32((uint32_t)(EDI));
  /* 114c8809 push ecx */
  push32((uint32_t)(ECX));
  /* 114c880a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c880d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c8812 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8817 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8819 pop ecx */
  ECX = (pop32());
  /* 114c881a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c881d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c8821 mov esi, esp */
  ESI = (ESP);
  /* 114c8823 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8826 push eax */
  push32((uint32_t)(EAX));
  /* 114c8827 call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c882du);
  /* 114c882d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8832 call 0x114c9460 */
  push32(0x114c8837u); f_114c9460();
  /* 114c8837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8839 jle 0x114c883f */
  if ((C.zf||C.sf!=C.of)) goto L_114c883f;
  /* 114c883b mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c883f:;
  /* 114c883f mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c8842 pop edi */
  EDI = (pop32());
  /* 114c8843 pop esi */
  ESI = (pop32());
  /* 114c8844 pop ebx */
  EBX = (pop32());
  /* 114c8845 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8848 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c884a call 0x114c9460 */
  push32(0x114c884fu); f_114c9460();
  /* 114c884f mov esp, ebp */
  ESP = (EBP);
  /* 114c8851 pop ebp */
  EBP = (pop32());
  /* 114c8852 ret  */
  ESPCHK(0x114c8800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008870 @ 0x114c8870 (126 bytes, 48 insns) */
void f_114c8870(void) {
  FTRACE(0x114c8870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8870 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8871 mov ebp, esp */
  EBP = (ESP);
  /* 114c8873 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8876 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8877 push esi */
  push32((uint32_t)(ESI));
  /* 114c8878 push edi */
  push32((uint32_t)(EDI));
  /* 114c8879 push ecx */
  push32((uint32_t)(ECX));
  /* 114c887a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c887d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8882 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8887 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8889 pop ecx */
  ECX = (pop32());
  /* 114c888a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c888d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8893 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 114c8896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c889c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 114c889f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c88a2 push ecx */
  push32((uint32_t)(ECX));
  /* 114c88a3 call 0x114c104b */
  push32(0x114c88a8u); f_114c104b();
  /* 114c88a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c88ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c88ae mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 114c88b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c88b4 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 114c88b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 114c88b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c88bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c88bf mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 114c88c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c88c5 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c88c8 mov esi, esp */
  ESI = (ESP);
  /* 114c88ca push ecx */
  push32((uint32_t)(ECX));
  /* 114c88cb call dword ptr [0x1150158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150158c))), 0x114c88d1u);
  /* 114c88d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c88d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c88d6 call 0x114c9460 */
  push32(0x114c88dbu); f_114c9460();
  /* 114c88db pop edi */
  EDI = (pop32());
  /* 114c88dc pop esi */
  ESI = (pop32());
  /* 114c88dd pop ebx */
  EBX = (pop32());
  /* 114c88de add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c88e1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c88e3 call 0x114c9460 */
  push32(0x114c88e8u); f_114c9460();
  /* 114c88e8 mov esp, ebp */
  ESP = (EBP);
  /* 114c88ea pop ebp */
  EBP = (pop32());
  /* 114c88eb ret 0x10 */
  ESPCHK(0x114c8870u, _esp0);
  ESP += 20; return;
}

/* FUN_10008910 @ 0x114c8910 (136 bytes, 54 insns) */
void f_114c8910(void) {
  FTRACE(0x114c8910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8910 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8911 mov ebp, esp */
  EBP = (ESP);
  /* 114c8913 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8916 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8917 push esi */
  push32((uint32_t)(ESI));
  /* 114c8918 push edi */
  push32((uint32_t)(EDI));
  /* 114c8919 push ecx */
  push32((uint32_t)(ECX));
  /* 114c891a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c891d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8922 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8927 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8929 pop ecx */
  ECX = (pop32());
  /* 114c892a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c892d mov esi, esp */
  ESI = (ESP);
  /* 114c892f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8932 push eax */
  push32((uint32_t)(EAX));
  /* 114c8933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8936 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8939 push ecx */
  push32((uint32_t)(ECX));
  /* 114c893a call dword ptr [0x11501568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501568))), 0x114c8940u);
  /* 114c8940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8945 call 0x114c9460 */
  push32(0x114c894au); f_114c9460();
  /* 114c894a mov esi, esp */
  ESI = (ESP);
  /* 114c894c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c894f push edx */
  push32((uint32_t)(EDX));
  /* 114c8950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8953 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8956 push eax */
  push32((uint32_t)(EAX));
  /* 114c8957 call dword ptr [0x11501558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501558))), 0x114c895du);
  /* 114c895d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8960 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8962 call 0x114c9460 */
  push32(0x114c8967u); f_114c9460();
  /* 114c8967 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c896a push ecx */
  push32((uint32_t)(ECX));
  /* 114c896b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 114c896e push edx */
  push32((uint32_t)(EDX));
  /* 114c896f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8972 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8975 push eax */
  push32((uint32_t)(EAX));
  /* 114c8976 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8979 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c897c push ecx */
  push32((uint32_t)(ECX));
  /* 114c897d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8980 call 0x114c1069 */
  push32(0x114c8985u); f_114c1069();
  /* 114c8985 pop edi */
  EDI = (pop32());
  /* 114c8986 pop esi */
  ESI = (pop32());
  /* 114c8987 pop ebx */
  EBX = (pop32());
  /* 114c8988 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c898b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c898d call 0x114c9460 */
  push32(0x114c8992u); f_114c9460();
  /* 114c8992 mov esp, ebp */
  ESP = (EBP);
  /* 114c8994 pop ebp */
  EBP = (pop32());
  /* 114c8995 ret 0x10 */
  ESPCHK(0x114c8910u, _esp0);
  ESP += 20; return;
}

/* FUN_100089c0 @ 0x114c89c0 (150 bytes, 58 insns) */
void f_114c89c0(void) {
  FTRACE(0x114c89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c89c1 mov ebp, esp */
  EBP = (ESP);
  /* 114c89c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c89c6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c89c7 push esi */
  push32((uint32_t)(ESI));
  /* 114c89c8 push edi */
  push32((uint32_t)(EDI));
  /* 114c89c9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c89ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c89cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c89d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c89d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c89d9 pop ecx */
  ECX = (pop32());
  /* 114c89da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c89dd mov esi, esp */
  ESI = (ESP);
  /* 114c89df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c89e2 push eax */
  push32((uint32_t)(EAX));
  /* 114c89e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c89e6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c89e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c89ea call dword ptr [0x11501568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501568))), 0x114c89f0u);
  /* 114c89f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c89f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c89f5 call 0x114c9460 */
  push32(0x114c89fau); f_114c9460();
  /* 114c89fa mov esi, esp */
  ESI = (ESP);
  /* 114c89fc push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 114c8a01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8a04 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8a07 push edx */
  push32((uint32_t)(EDX));
  /* 114c8a08 mov eax, dword ptr [0x114ff0e4] */
  EAX = (r32((uint32_t)(0x114ff0e4)));
  /* 114c8a0d push eax */
  push32((uint32_t)(EAX));
  /* 114c8a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8a11 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8a14 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8a15 call dword ptr [0x115014f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014f0))), 0x114c8a1bu);
  /* 114c8a1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8a1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8a20 call 0x114c9460 */
  push32(0x114c8a25u); f_114c9460();
  /* 114c8a25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c8a28 push edx */
  push32((uint32_t)(EDX));
  /* 114c8a29 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 114c8a2c push eax */
  push32((uint32_t)(EAX));
  /* 114c8a2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8a30 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8a33 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8a34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8a37 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8a3a push edx */
  push32((uint32_t)(EDX));
  /* 114c8a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8a3e call 0x114c1069 */
  push32(0x114c8a43u); f_114c1069();
  /* 114c8a43 pop edi */
  EDI = (pop32());
  /* 114c8a44 pop esi */
  ESI = (pop32());
  /* 114c8a45 pop ebx */
  EBX = (pop32());
  /* 114c8a46 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8a49 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8a4b call 0x114c9460 */
  push32(0x114c8a50u); f_114c9460();
  /* 114c8a50 mov esp, ebp */
  ESP = (EBP);
  /* 114c8a52 pop ebp */
  EBP = (pop32());
  /* 114c8a53 ret 0xc */
  ESPCHK(0x114c89c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10008a80 @ 0x114c8a80 (255 bytes, 92 insns) */
void f_114c8a80(void) {
  FTRACE(0x114c8a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8a80 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8a81 mov ebp, esp */
  EBP = (ESP);
  /* 114c8a83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8a86 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8a87 push esi */
  push32((uint32_t)(ESI));
  /* 114c8a88 push edi */
  push32((uint32_t)(EDI));
  /* 114c8a89 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8a8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c8a8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8a92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8a97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8a99 pop ecx */
  ECX = (pop32());
  /* 114c8a9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8a9d mov esi, esp */
  ESI = (ESP);
  /* 114c8a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8aa2 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 114c8aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8aa6 call dword ptr [0x11501524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501524))), 0x114c8aacu);
  /* 114c8aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8aaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ab1 call 0x114c9460 */
  push32(0x114c8ab6u); f_114c9460();
  /* 114c8ab6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c8abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8abd je 0x114c8b05 */
  if (C.zf) goto L_114c8b05;
  /* 114c8abf mov esi, esp */
  ESI = (ESP);
  /* 114c8ac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8ac4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114c8ac6 push eax */
  push32((uint32_t)(EAX));
  /* 114c8ac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8aca mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 114c8acd push edx */
  push32((uint32_t)(EDX));
  /* 114c8ace call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c8ad4u);
  /* 114c8ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ad9 call 0x114c9460 */
  push32(0x114c8adeu); f_114c9460();
  /* 114c8ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8ae0 jle 0x114c8b05 */
  if ((C.zf||C.sf!=C.of)) goto L_114c8b05;
  /* 114c8ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8ae5 call 0x114c1267 */
  push32(0x114c8aeau); f_114c1267();
  /* 114c8aea mov esi, esp */
  ESI = (ESP);
  /* 114c8aec push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8aee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8af1 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 114c8af4 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8af5 call dword ptr [0x11501534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501534))), 0x114c8afbu);
  /* 114c8afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8afe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8b00 call 0x114c9460 */
  push32(0x114c8b05u); f_114c9460();
L_114c8b05:;
  /* 114c8b05 mov esi, esp */
  ESI = (ESP);
  /* 114c8b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8b0a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 114c8b0d push eax */
  push32((uint32_t)(EAX));
  /* 114c8b0e call dword ptr [0x11501524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501524))), 0x114c8b14u);
  /* 114c8b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8b19 call 0x114c9460 */
  push32(0x114c8b1eu); f_114c9460();
  /* 114c8b1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c8b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8b25 jne 0x114c8b6e */
  if (!C.zf) goto L_114c8b6e;
  /* 114c8b27 mov esi, esp */
  ESI = (ESP);
  /* 114c8b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8b2c mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114c8b2e push edx */
  push32((uint32_t)(EDX));
  /* 114c8b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8b32 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 114c8b35 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8b36 call dword ptr [0x11501560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501560))), 0x114c8b3cu);
  /* 114c8b3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8b41 call 0x114c9460 */
  push32(0x114c8b46u); f_114c9460();
  /* 114c8b46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8b49 jge 0x114c8b6e */
  if ((C.sf==C.of)) goto L_114c8b6e;
  /* 114c8b4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8b4e call 0x114c10c3 */
  push32(0x114c8b53u); f_114c10c3();
  /* 114c8b53 mov esi, esp */
  ESI = (ESP);
  /* 114c8b55 push 1 */
  push32((uint32_t)(0x1u));
  /* 114c8b57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8b5a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 114c8b5d push eax */
  push32((uint32_t)(EAX));
  /* 114c8b5e call dword ptr [0x11501534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501534))), 0x114c8b64u);
  /* 114c8b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8b69 call 0x114c9460 */
  push32(0x114c8b6eu); f_114c9460();
L_114c8b6e:;
  /* 114c8b6e pop edi */
  EDI = (pop32());
  /* 114c8b6f pop esi */
  ESI = (pop32());
  /* 114c8b70 pop ebx */
  EBX = (pop32());
  /* 114c8b71 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8b74 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8b76 call 0x114c9460 */
  push32(0x114c8b7bu); f_114c9460();
  /* 114c8b7b mov esp, ebp */
  ESP = (EBP);
  /* 114c8b7d pop ebp */
  EBP = (pop32());
  /* 114c8b7e ret  */
  ESPCHK(0x114c8a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x114c8bc0 (158 bytes, 60 insns) */
void f_114c8bc0(void) {
  FTRACE(0x114c8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 114c8bc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8bc7 push esi */
  push32((uint32_t)(ESI));
  /* 114c8bc8 push edi */
  push32((uint32_t)(EDI));
  /* 114c8bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8bca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c8bcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8bd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8bd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8bd9 pop ecx */
  ECX = (pop32());
  /* 114c8bda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8bdd mov esi, esp */
  ESI = (ESP);
  /* 114c8bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8be4 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8be7 push eax */
  push32((uint32_t)(EAX));
  /* 114c8be8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8beb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114c8bed push edx */
  push32((uint32_t)(EDX));
  /* 114c8bee call dword ptr [0x11501594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501594))), 0x114c8bf4u);
  /* 114c8bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8bf9 call 0x114c9460 */
  push32(0x114c8bfeu); f_114c9460();
  /* 114c8bfe mov esi, esp */
  ESI = (ESP);
  /* 114c8c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8c05 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 114c8c08 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8c09 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c8c0fu);
  /* 114c8c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8c14 call 0x114c9460 */
  push32(0x114c8c19u); f_114c9460();
  /* 114c8c19 mov esi, esp */
  ESI = (ESP);
  /* 114c8c1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8c1e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114c8c21 push eax */
  push32((uint32_t)(EAX));
  /* 114c8c22 call dword ptr [0x115014b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014b8))), 0x114c8c28u);
  /* 114c8c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8c2d call 0x114c9460 */
  push32(0x114c8c32u); f_114c9460();
  /* 114c8c32 mov esi, esp */
  ESI = (ESP);
  /* 114c8c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8c36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8c39 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8c3c push ecx */
  push32((uint32_t)(ECX));
  /* 114c8c3d call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c8c43u);
  /* 114c8c43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8c48 call 0x114c9460 */
  push32(0x114c8c4du); f_114c9460();
  /* 114c8c4d pop edi */
  EDI = (pop32());
  /* 114c8c4e pop esi */
  ESI = (pop32());
  /* 114c8c4f pop ebx */
  EBX = (pop32());
  /* 114c8c50 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8c53 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8c55 call 0x114c9460 */
  push32(0x114c8c5au); f_114c9460();
  /* 114c8c5a mov esp, ebp */
  ESP = (EBP);
  /* 114c8c5c pop ebp */
  EBP = (pop32());
  /* 114c8c5d ret  */
  ESPCHK(0x114c8bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c90 @ 0x114c8c90 (158 bytes, 60 insns) */
void f_114c8c90(void) {
  FTRACE(0x114c8c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8c90 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8c91 mov ebp, esp */
  EBP = (ESP);
  /* 114c8c93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8c96 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8c97 push esi */
  push32((uint32_t)(ESI));
  /* 114c8c98 push edi */
  push32((uint32_t)(EDI));
  /* 114c8c99 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8c9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c8c9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8ca9 pop ecx */
  ECX = (pop32());
  /* 114c8caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8cad mov esi, esp */
  ESI = (ESP);
  /* 114c8caf push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8cb4 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8cb7 push eax */
  push32((uint32_t)(EAX));
  /* 114c8cb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8cbb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114c8cbd push edx */
  push32((uint32_t)(EDX));
  /* 114c8cbe call dword ptr [0x11501594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501594))), 0x114c8cc4u);
  /* 114c8cc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8cc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8cc9 call 0x114c9460 */
  push32(0x114c8cceu); f_114c9460();
  /* 114c8cce mov esi, esp */
  ESI = (ESP);
  /* 114c8cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8cd5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 114c8cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8cd9 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c8cdfu);
  /* 114c8cdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ce4 call 0x114c9460 */
  push32(0x114c8ce9u); f_114c9460();
  /* 114c8ce9 mov esi, esp */
  ESI = (ESP);
  /* 114c8ceb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8cee mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114c8cf1 push eax */
  push32((uint32_t)(EAX));
  /* 114c8cf2 call dword ptr [0x115014c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014c0))), 0x114c8cf8u);
  /* 114c8cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8cfd call 0x114c9460 */
  push32(0x114c8d02u); f_114c9460();
  /* 114c8d02 mov esi, esp */
  ESI = (ESP);
  /* 114c8d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8d06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8d09 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8d0c push ecx */
  push32((uint32_t)(ECX));
  /* 114c8d0d call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c8d13u);
  /* 114c8d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8d18 call 0x114c9460 */
  push32(0x114c8d1du); f_114c9460();
  /* 114c8d1d pop edi */
  EDI = (pop32());
  /* 114c8d1e pop esi */
  ESI = (pop32());
  /* 114c8d1f pop ebx */
  EBX = (pop32());
  /* 114c8d20 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8d23 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8d25 call 0x114c9460 */
  push32(0x114c8d2au); f_114c9460();
  /* 114c8d2a mov esp, ebp */
  ESP = (EBP);
  /* 114c8d2c pop ebp */
  EBP = (pop32());
  /* 114c8d2d ret  */
  ESPCHK(0x114c8c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x114c8d60 (49 bytes, 22 insns) */
void f_114c8d60(void) {
  FTRACE(0x114c8d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8d60 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8d61 mov ebp, esp */
  EBP = (ESP);
  /* 114c8d63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8d66 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8d67 push esi */
  push32((uint32_t)(ESI));
  /* 114c8d68 push edi */
  push32((uint32_t)(EDI));
  /* 114c8d69 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8d6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c8d6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8d72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8d77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8d79 pop ecx */
  ECX = (pop32());
  /* 114c8d7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8d7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8d80 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 114c8d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8d8a pop edi */
  EDI = (pop32());
  /* 114c8d8b pop esi */
  ESI = (pop32());
  /* 114c8d8c pop ebx */
  EBX = (pop32());
  /* 114c8d8d mov esp, ebp */
  ESP = (EBP);
  /* 114c8d8f pop ebp */
  EBP = (pop32());
  /* 114c8d90 ret  */
  ESPCHK(0x114c8d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008da0 @ 0x114c8da0 (77 bytes, 32 insns) */
void f_114c8da0(void) {
  FTRACE(0x114c8da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8da0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8da1 mov ebp, esp */
  EBP = (ESP);
  /* 114c8da3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8da6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8da7 push esi */
  push32((uint32_t)(ESI));
  /* 114c8da8 push edi */
  push32((uint32_t)(EDI));
  /* 114c8da9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8daa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c8dad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8db2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8db7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8db9 pop ecx */
  ECX = (pop32());
  /* 114c8dba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8dbd mov esi, esp */
  ESI = (ESP);
  /* 114c8dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8dc2 push eax */
  push32((uint32_t)(EAX));
  /* 114c8dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8dc6 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8dca call dword ptr [0x11501568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501568))), 0x114c8dd0u);
  /* 114c8dd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8dd5 call 0x114c9460 */
  push32(0x114c8ddau); f_114c9460();
  /* 114c8dda pop edi */
  EDI = (pop32());
  /* 114c8ddb pop esi */
  ESI = (pop32());
  /* 114c8ddc pop ebx */
  EBX = (pop32());
  /* 114c8ddd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8de0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8de2 call 0x114c9460 */
  push32(0x114c8de7u); f_114c9460();
  /* 114c8de7 mov esp, ebp */
  ESP = (EBP);
  /* 114c8de9 pop ebp */
  EBP = (pop32());
  /* 114c8dea ret 4 */
  ESPCHK(0x114c8da0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008e00 @ 0x114c8e00 (102 bytes, 40 insns) */
void f_114c8e00(void) {
  FTRACE(0x114c8e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8e00 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8e01 mov ebp, esp */
  EBP = (ESP);
  /* 114c8e03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8e06 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8e07 push esi */
  push32((uint32_t)(ESI));
  /* 114c8e08 push edi */
  push32((uint32_t)(EDI));
  /* 114c8e09 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8e0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c8e0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c8e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8e19 pop ecx */
  ECX = (pop32());
  /* 114c8e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8e20 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8e23 mov esi, esp */
  ESI = (ESP);
  /* 114c8e25 push eax */
  push32((uint32_t)(EAX));
  /* 114c8e26 call dword ptr [0x1150158c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150158c))), 0x114c8e2cu);
  /* 114c8e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8e31 call 0x114c9460 */
  push32(0x114c8e36u); f_114c9460();
  /* 114c8e36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8e39 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8e3c mov esi, esp */
  ESI = (ESP);
  /* 114c8e3e push ecx */
  push32((uint32_t)(ECX));
  /* 114c8e3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8e42 push edx */
  push32((uint32_t)(EDX));
  /* 114c8e43 call dword ptr [0x115014bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115014bc))), 0x114c8e49u);
  /* 114c8e49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8e4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8e4e call 0x114c9460 */
  push32(0x114c8e53u); f_114c9460();
  /* 114c8e53 pop edi */
  EDI = (pop32());
  /* 114c8e54 pop esi */
  ESI = (pop32());
  /* 114c8e55 pop ebx */
  EBX = (pop32());
  /* 114c8e56 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8e59 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8e5b call 0x114c9460 */
  push32(0x114c8e60u); f_114c9460();
  /* 114c8e60 mov esp, ebp */
  ESP = (EBP);
  /* 114c8e62 pop ebp */
  EBP = (pop32());
  /* 114c8e63 ret 4 */
  ESPCHK(0x114c8e00u, _esp0);
  ESP += 8; return;
}

/* FUN_10008e80 @ 0x114c8e80 (184 bytes, 69 insns) */
void f_114c8e80(void) {
  FTRACE(0x114c8e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8e80 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8e81 mov ebp, esp */
  EBP = (ESP);
  /* 114c8e83 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8e86 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8e87 push esi */
  push32((uint32_t)(ESI));
  /* 114c8e88 push edi */
  push32((uint32_t)(EDI));
  /* 114c8e89 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8e8a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c8e8d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c8e92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8e97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8e99 pop ecx */
  ECX = (pop32());
  /* 114c8e9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8e9d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c8ea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8ea4 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ea8 jne 0x114c8ed7 */
  if (!C.zf) goto L_114c8ed7;
  /* 114c8eaa mov esi, esp */
  ESI = (ESP);
  /* 114c8eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8eaf push ecx */
  push32((uint32_t)(ECX));
  /* 114c8eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8eb5 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8eb8 push edx */
  push32((uint32_t)(EDX));
  /* 114c8eb9 call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c8ebfu);
  /* 114c8ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ec4 call 0x114c9460 */
  push32(0x114c8ec9u); f_114c9460();
  /* 114c8ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8ecc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c8ece mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114c8ed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8ed4 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_114c8ed7:;
  /* 114c8ed7 mov esi, esp */
  ESI = (ESP);
  /* 114c8ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8edc push eax */
  push32((uint32_t)(EAX));
  /* 114c8edd call dword ptr [0x11501598] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501598))), 0x114c8ee3u);
  /* 114c8ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8ee6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ee8 call 0x114c9460 */
  push32(0x114c8eedu); f_114c9460();
  /* 114c8eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8ef0 jne 0x114c8f22 */
  if (!C.zf) goto L_114c8f22;
  /* 114c8ef2 mov esi, esp */
  ESI = (ESP);
  /* 114c8ef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c8efa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8efd push edx */
  push32((uint32_t)(EDX));
  /* 114c8efe call dword ptr [0x11501590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501590))), 0x114c8f04u);
  /* 114c8f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8f09 call 0x114c9460 */
  push32(0x114c8f0eu); f_114c9460();
  /* 114c8f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8f11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c8f13 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114c8f16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8f19 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8f1c jne 0x114c8f22 */
  if (!C.zf) goto L_114c8f22;
  /* 114c8f1e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c8f22:;
  /* 114c8f22 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c8f25 pop edi */
  EDI = (pop32());
  /* 114c8f26 pop esi */
  ESI = (pop32());
  /* 114c8f27 pop ebx */
  EBX = (pop32());
  /* 114c8f28 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8f2b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8f2d call 0x114c9460 */
  push32(0x114c8f32u); f_114c9460();
  /* 114c8f32 mov esp, ebp */
  ESP = (EBP);
  /* 114c8f34 pop ebp */
  EBP = (pop32());
  /* 114c8f35 ret 4 */
  ESPCHK(0x114c8e80u, _esp0);
  ESP += 8; return;
}

/* FUN_10008f70 @ 0x114c8f70 (110 bytes, 43 insns) */
void f_114c8f70(void) {
  FTRACE(0x114c8f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c8f70 push ebp */
  push32((uint32_t)(EBP));
  /* 114c8f71 mov ebp, esp */
  EBP = (ESP);
  /* 114c8f73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c8f76 push ebx */
  push32((uint32_t)(EBX));
  /* 114c8f77 push esi */
  push32((uint32_t)(ESI));
  /* 114c8f78 push edi */
  push32((uint32_t)(EDI));
  /* 114c8f79 push ecx */
  push32((uint32_t)(ECX));
  /* 114c8f7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 114c8f7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 114c8f82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c8f87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c8f89 pop ecx */
  ECX = (pop32());
  /* 114c8f8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c8f8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c8f91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8f94 push eax */
  push32((uint32_t)(EAX));
  /* 114c8f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c8f98 call 0x114c100a */
  push32(0x114c8f9du); f_114c100a();
  /* 114c8f9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114c8fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8fa4 je 0x114c8fc8 */
  if (C.zf) goto L_114c8fc8;
  /* 114c8fa6 mov esi, esp */
  ESI = (ESP);
  /* 114c8fa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c8fab push ecx */
  push32((uint32_t)(ECX));
  /* 114c8fac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c8faf push edx */
  push32((uint32_t)(EDX));
  /* 114c8fb0 call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c8fb6u);
  /* 114c8fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8fbb call 0x114c9460 */
  push32(0x114c8fc0u); f_114c9460();
  /* 114c8fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c8fc2 jle 0x114c8fc8 */
  if ((C.zf||C.sf!=C.of)) goto L_114c8fc8;
  /* 114c8fc4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c8fc8:;
  /* 114c8fc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c8fcb pop edi */
  EDI = (pop32());
  /* 114c8fcc pop esi */
  ESI = (pop32());
  /* 114c8fcd pop ebx */
  EBX = (pop32());
  /* 114c8fce add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c8fd1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c8fd3 call 0x114c9460 */
  push32(0x114c8fd8u); f_114c9460();
  /* 114c8fd8 mov esp, ebp */
  ESP = (EBP);
  /* 114c8fda pop ebp */
  EBP = (pop32());
  /* 114c8fdb ret 8 */
  ESPCHK(0x114c8f70u, _esp0);
  ESP += 12; return;
}

/* FUN_10009000 @ 0x114c9000 (42 bytes, 21 insns) */
void f_114c9000(void) {
  FTRACE(0x114c9000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9000 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9001 mov ebp, esp */
  EBP = (ESP);
  /* 114c9003 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9006 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9007 push esi */
  push32((uint32_t)(ESI));
  /* 114c9008 push edi */
  push32((uint32_t)(EDI));
  /* 114c9009 push ecx */
  push32((uint32_t)(ECX));
  /* 114c900a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 114c900d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 114c9012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c9017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c9019 pop ecx */
  ECX = (pop32());
  /* 114c901a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c901d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9020 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9023 pop edi */
  EDI = (pop32());
  /* 114c9024 pop esi */
  ESI = (pop32());
  /* 114c9025 pop ebx */
  EBX = (pop32());
  /* 114c9026 mov esp, ebp */
  ESP = (EBP);
  /* 114c9028 pop ebp */
  EBP = (pop32());
  /* 114c9029 ret  */
  ESPCHK(0x114c9000u, _esp0);
  ESP += 4; return;
}

/* FUN_10009040 @ 0x114c9040 (155 bytes, 58 insns) */
void f_114c9040(void) {
  FTRACE(0x114c9040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9040 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9041 mov ebp, esp */
  EBP = (ESP);
  /* 114c9043 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9046 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9047 push esi */
  push32((uint32_t)(ESI));
  /* 114c9048 push edi */
  push32((uint32_t)(EDI));
  /* 114c9049 push ecx */
  push32((uint32_t)(ECX));
  /* 114c904a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 114c904d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 114c9052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c9057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c9059 pop ecx */
  ECX = (pop32());
  /* 114c905a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c905d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9063 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 114c9066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9069 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 114c906c mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 114c906f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9072 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c9075 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 114c9078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c907b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c907e mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 114c9081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9084 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114c9087 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 114c908a mov esi, esp */
  ESI = (ESP);
  /* 114c908c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 114c9091 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9094 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 114c9097 push edx */
  push32((uint32_t)(EDX));
  /* 114c9098 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114c909b push eax */
  push32((uint32_t)(EAX));
  /* 114c909c call dword ptr [0x11501588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501588))), 0x114c90a2u);
  /* 114c90a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c90a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c90a7 call 0x114c9460 */
  push32(0x114c90acu); f_114c9460();
  /* 114c90ac mov esi, esp */
  ESI = (ESP);
  /* 114c90ae push 0 */
  push32((uint32_t)(0x0u));
  /* 114c90b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c90b2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114c90b5 push ecx */
  push32((uint32_t)(ECX));
  /* 114c90b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c90b8 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c90beu);
  /* 114c90be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c90c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c90c3 call 0x114c9460 */
  push32(0x114c90c8u); f_114c9460();
  /* 114c90c8 pop edi */
  EDI = (pop32());
  /* 114c90c9 pop esi */
  ESI = (pop32());
  /* 114c90ca pop ebx */
  EBX = (pop32());
  /* 114c90cb add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c90ce cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c90d0 call 0x114c9460 */
  push32(0x114c90d5u); f_114c9460();
  /* 114c90d5 mov esp, ebp */
  ESP = (EBP);
  /* 114c90d7 pop ebp */
  EBP = (pop32());
  /* 114c90d8 ret 0x14 */
  ESPCHK(0x114c9040u, _esp0);
  ESP += 24; return;
}

/* FUN_10009110 @ 0x114c9110 (252 bytes, 91 insns) */
void f_114c9110(void) {
  FTRACE(0x114c9110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9110 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9111 mov ebp, esp */
  EBP = (ESP);
  /* 114c9113 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9116 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9117 push esi */
  push32((uint32_t)(ESI));
  /* 114c9118 push edi */
  push32((uint32_t)(EDI));
  /* 114c9119 push ecx */
  push32((uint32_t)(ECX));
  /* 114c911a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 114c911d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 114c9122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c9127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c9129 pop ecx */
  ECX = (pop32());
  /* 114c912a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c912d mov esi, esp */
  ESI = (ESP);
  /* 114c912f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9134 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 114c9137 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9138 call dword ptr [0x11501570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501570))), 0x114c913eu);
  /* 114c913e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9143 call 0x114c9460 */
  push32(0x114c9148u); f_114c9460();
  /* 114c9148 mov esi, esp */
  ESI = (ESP);
  /* 114c914a push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 114c914f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9152 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 114c9155 push eax */
  push32((uint32_t)(EAX));
  /* 114c9156 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114c9159 push ecx */
  push32((uint32_t)(ECX));
  /* 114c915a call dword ptr [0x11501588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501588))), 0x114c9160u);
  /* 114c9160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9165 call 0x114c9460 */
  push32(0x114c916au); f_114c9460();
  /* 114c916a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c916d cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9171 je 0x114c9182 */
  if (C.zf) goto L_114c9182;
  /* 114c9173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9176 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 114c917a add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 114c917e mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_114c9182:;
  /* 114c9182 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9185 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9189 je 0x114c9196 */
  if (C.zf) goto L_114c9196;
  /* 114c918b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c918e mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 114c9192 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_114c9196:;
  /* 114c9196 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c919b mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 114c919e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c91a0 jne 0x114c91c3 */
  if (!C.zf) goto L_114c91c3;
  /* 114c91a2 mov esi, esp */
  ESI = (ESP);
  /* 114c91a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c91a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c91a9 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 114c91ac push edx */
  push32((uint32_t)(EDX));
  /* 114c91ad lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114c91b0 push eax */
  push32((uint32_t)(EAX));
  /* 114c91b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 114c91b3 call dword ptr [0x11501580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501580))), 0x114c91b9u);
  /* 114c91b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c91bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c91be call 0x114c9460 */
  push32(0x114c91c3u); f_114c9460();
L_114c91c3:;
  /* 114c91c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c91c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114c91c8 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 114c91cb cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c91ce jne 0x114c91f1 */
  if (!C.zf) goto L_114c91f1;
  /* 114c91d0 mov esi, esp */
  ESI = (ESP);
  /* 114c91d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c91d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c91d7 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 114c91da push ecx */
  push32((uint32_t)(ECX));
  /* 114c91db lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114c91de push edx */
  push32((uint32_t)(EDX));
  /* 114c91df push 3 */
  push32((uint32_t)(0x3u));
  /* 114c91e1 call dword ptr [0x1150156c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150156c))), 0x114c91e7u);
  /* 114c91e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c91ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c91ec call 0x114c9460 */
  push32(0x114c91f1u); f_114c9460();
L_114c91f1:;
  /* 114c91f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c91f4 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 114c91fb pop edi */
  EDI = (pop32());
  /* 114c91fc pop esi */
  ESI = (pop32());
  /* 114c91fd pop ebx */
  EBX = (pop32());
  /* 114c91fe add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9201 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9203 call 0x114c9460 */
  push32(0x114c9208u); f_114c9460();
  /* 114c9208 mov esp, ebp */
  ESP = (EBP);
  /* 114c920a pop ebp */
  EBP = (pop32());
  /* 114c920b ret  */
  ESPCHK(0x114c9110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x114c9250 (143 bytes, 53 insns) */
void f_114c9250(void) {
  FTRACE(0x114c9250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9250 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9251 mov ebp, esp */
  EBP = (ESP);
  /* 114c9253 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9256 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9257 push esi */
  push32((uint32_t)(ESI));
  /* 114c9258 push edi */
  push32((uint32_t)(EDI));
  /* 114c9259 push ecx */
  push32((uint32_t)(ECX));
  /* 114c925a lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 114c925d mov ecx, 0x14 */
  ECX = (0x14u);
  /* 114c9262 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 114c9267 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114c9269 pop ecx */
  ECX = (pop32());
  /* 114c926a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c926d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c9271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9274 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9278 je 0x114c92cb */
  if (C.zf) goto L_114c92cb;
  /* 114c927a mov esi, esp */
  ESI = (ESP);
  /* 114c927c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 114c9281 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9284 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 114c9287 push edx */
  push32((uint32_t)(EDX));
  /* 114c9288 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 114c928b push eax */
  push32((uint32_t)(EAX));
  /* 114c928c call dword ptr [0x11501588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501588))), 0x114c9292u);
  /* 114c9292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9297 call 0x114c9460 */
  push32(0x114c929cu); f_114c9460();
  /* 114c929c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c929f call 0x114c120d */
  push32(0x114c92a4u); f_114c120d();
  /* 114c92a4 mov esi, esp */
  ESI = (ESP);
  /* 114c92a6 push eax */
  push32((uint32_t)(EAX));
  /* 114c92a7 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 114c92aa push ecx */
  push32((uint32_t)(ECX));
  /* 114c92ab call dword ptr [0x11501578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501578))), 0x114c92b1u);
  /* 114c92b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c92b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c92b6 call 0x114c9460 */
  push32(0x114c92bbu); f_114c9460();
  /* 114c92bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c92bd jle 0x114c92cb */
  if ((C.zf||C.sf!=C.of)) goto L_114c92cb;
  /* 114c92bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c92c2 call 0x114c1087 */
  push32(0x114c92c7u); f_114c1087();
  /* 114c92c7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_114c92cb:;
  /* 114c92cb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114c92ce pop edi */
  EDI = (pop32());
  /* 114c92cf pop esi */
  ESI = (pop32());
  /* 114c92d0 pop ebx */
  EBX = (pop32());
  /* 114c92d1 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c92d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c92d6 call 0x114c9460 */
  push32(0x114c92dbu); f_114c9460();
  /* 114c92db mov esp, ebp */
  ESP = (EBP);
  /* 114c92dd pop ebp */
  EBP = (pop32());
  /* 114c92de ret  */
  ESPCHK(0x114c9250u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x114c9460 (56 bytes, 28 insns) */
void f_114c9460(void) {
  FTRACE(0x114c9460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9460 jne 0x114c9463 */
  if (!C.zf) goto L_114c9463;
  /* 114c9462 ret  */
  ESPCHK(0x114c9460u, _esp0);
  ESP += 4; return;
L_114c9463:;
  /* 114c9463 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9464 mov ebp, esp */
  EBP = (ESP);
  /* 114c9466 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9469 push eax */
  push32((uint32_t)(EAX));
  /* 114c946a push edx */
  push32((uint32_t)(EDX));
  /* 114c946b push ebx */
  push32((uint32_t)(EBX));
  /* 114c946c push esi */
  push32((uint32_t)(ESI));
  /* 114c946d push edi */
  push32((uint32_t)(EDI));
  /* 114c946e push 0x114f9328 */
  push32((uint32_t)(0x114f9328u));
  /* 114c9473 push 0x114f9324 */
  push32((uint32_t)(0x114f9324u));
  /* 114c9478 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 114c947a push 0x114f9314 */
  push32((uint32_t)(0x114f9314u));
  /* 114c947f push 1 */
  push32((uint32_t)(0x1u));
  /* 114c9481 call 0x114ca4c0 */
  push32(0x114c9486u); f_114ca4c0();
  /* 114c9486 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9489 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c948c jne 0x114c948f */
  if (!C.zf) goto L_114c948f;
  /* 114c948e int3  */
  x86_unimpl("int3 @ 0x114c948e");
L_114c948f:;
  /* 114c948f pop edi */
  EDI = (pop32());
  /* 114c9490 pop esi */
  ESI = (pop32());
  /* 114c9491 pop ebx */
  EBX = (pop32());
  /* 114c9492 pop edx */
  EDX = (pop32());
  /* 114c9493 pop eax */
  EAX = (pop32());
  /* 114c9494 mov esp, ebp */
  ESP = (EBP);
  /* 114c9496 pop ebp */
  EBP = (pop32());
  /* 114c9497 ret  */
  ESPCHK(0x114c9460u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x114c94a0 (20 bytes, 6 insns) */
void f_114c94a0(void) {
  FTRACE(0x114c94a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c94a0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c94a3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 114c94a6 call 0x114cadb8 */
  push32(0x114c94abu); f_114cadb8();
  /* 114c94ab call 0x114c94bd */
  push32(0x114c94b0u); f_114c94bd();
  /* 114c94b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c94b3 ret  */
  ESPCHK(0x114c94a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b4 @ 0x114c94b4 (9 bytes, 2 insns) */
void f_114c94b4(void) {
  FTRACE(0x114c94b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c94b4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 114c94b8 call 0x114cad75 */
  push32(0x114c94bdu); f_114cad75();
}

/* FUN_100094bd @ 0x114c94bd (145 bytes, 43 insns) */
void f_114c94bd(void) {
  FTRACE(0x114c94bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c94bd push edx */
  push32((uint32_t)(EDX));
  /* 114c94be wait  */
  /* wait (no observable integer/reg state) */
  /* 114c94bf fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 114c94c2 je 0x114c9514 */
  if (C.zf) goto L_114c9514;
  /* 114c94c4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 114c94ca je 0x114c94d2 */
  if (C.zf) goto L_114c94d2;
  /* 114c94cc fldcw word ptr [0x114f96b8] */
  C.fcw = r16((uint32_t)(0x114f96b8));
L_114c94d2:;
  /* 114c94d2 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 114c94d4 wait  */
  /* wait (no observable integer/reg state) */
  /* 114c94d5 fnstsw ax */
  AX = fpu_status();
  /* 114c94d7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 114c94d8 jp 0x114c94f7 */
  if (C.pf) goto L_114c94f7;
L_114c94da:;
  /* 114c94da cmp dword ptr [0x114ff100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c94e1 jne 0x114cadce */
  if (!C.zf) { jmp_ind(0x114cadceu); return; }
  /* 114c94e7 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 114c94ec lea ecx, [0x114fcdc0] */
  ECX = ((uint32_t)(0x114fcdc0));
  /* 114c94f2 jmp 0x114caddb */
  f_114caddb(); return;
L_114c94f7:;
  /* 114c94f7 fld xword ptr [0x114f96ba] */
  fpu_push(rf80((uint32_t)(0x114f96ba)));
  /* 114c94fd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_114c94ff:;
  /* 114c94ff fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 114c9501 wait  */
  /* wait (no observable integer/reg state) */
  /* 114c9502 fnstsw ax */
  AX = fpu_status();
  /* 114c9504 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 114c9505 jp 0x114c94ff */
  if (C.pf) goto L_114c94ff;
  /* 114c9507 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 114c9509 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 114c950b jmp 0x114c94da */
  goto L_114c94da;
L_114c950d:;
  /* 114c950d call 0x114cad5c */
  push32(0x114c9512u); f_114cad5c();
  /* 114c9512 jmp 0x114c952f */
  goto L_114c952f;
L_114c9514:;
  /* 114c9514 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 114c9519 jne 0x114c950d */
  if (!C.zf) goto L_114c950d;
  /* 114c951b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9520 jne 0x114c950d */
  if (!C.zf) goto L_114c950d;
  /* 114c9522 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 114c9524 fld xword ptr [0x114fce40] */
  fpu_push(rf80((uint32_t)(0x114fce40)));
  /* 114c952a mov eax, 1 */
  EAX = (0x1u);
L_114c952f:;
  /* 114c952f cmp dword ptr [0x114ff100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9536 jne 0x114cadce */
  if (!C.zf) { jmp_ind(0x114cadceu); return; }
  /* 114c953c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 114c9541 lea ecx, [0x114fcdc0] */
  ECX = ((uint32_t)(0x114fcdc0));
  /* 114c9547 call 0x114caed7 */
  push32(0x114c954cu); f_114caed7();
  /* 114c954c pop edx */
  EDX = (pop32());
  /* 114c954d ret  */
  ESPCHK(0x114c94bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x114c9550 (20 bytes, 6 insns) */
void f_114c9550(void) {
  FTRACE(0x114c9550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9550 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9553 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 114c9556 call 0x114cadb8 */
  push32(0x114c955bu); f_114cadb8();
  /* 114c955b call 0x114c956d */
  push32(0x114c9560u); f_114c956d();
  /* 114c9560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9563 ret  */
  ESPCHK(0x114c9550u, _esp0);
  ESP += 4; return;
}

/* FUN_10009564 @ 0x114c9564 (9 bytes, 2 insns) */
void f_114c9564(void) {
  FTRACE(0x114c9564u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9564 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 114c9568 call 0x114cad75 */
  push32(0x114c956du); f_114cad75();
}

/* FUN_1000956d @ 0x114c956d (145 bytes, 43 insns) */
void f_114c956d(void) {
  FTRACE(0x114c956du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c956d push edx */
  push32((uint32_t)(EDX));
  /* 114c956e wait  */
  /* wait (no observable integer/reg state) */
  /* 114c956f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 114c9572 je 0x114c95c4 */
  if (C.zf) goto L_114c95c4;
  /* 114c9574 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 114c957a je 0x114c9582 */
  if (C.zf) goto L_114c9582;
  /* 114c957c fldcw word ptr [0x114f96b8] */
  C.fcw = r16((uint32_t)(0x114f96b8));
L_114c9582:;
  /* 114c9582 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 114c9584 wait  */
  /* wait (no observable integer/reg state) */
  /* 114c9585 fnstsw ax */
  AX = fpu_status();
  /* 114c9587 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 114c9588 jp 0x114c95a7 */
  if (C.pf) goto L_114c95a7;
L_114c958a:;
  /* 114c958a cmp dword ptr [0x114ff100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9591 jne 0x114cadce */
  if (!C.zf) { jmp_ind(0x114cadceu); return; }
  /* 114c9597 mov edx, 0x12 */
  EDX = (0x12u);
  /* 114c959c lea ecx, [0x114fcdd0] */
  ECX = ((uint32_t)(0x114fcdd0));
  /* 114c95a2 jmp 0x114caddb */
  f_114caddb(); return;
L_114c95a7:;
  /* 114c95a7 fld xword ptr [0x114f96ba] */
  fpu_push(rf80((uint32_t)(0x114f96ba)));
  /* 114c95ad fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_114c95af:;
  /* 114c95af fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 114c95b1 wait  */
  /* wait (no observable integer/reg state) */
  /* 114c95b2 fnstsw ax */
  AX = fpu_status();
  /* 114c95b4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 114c95b5 jp 0x114c95af */
  if (C.pf) goto L_114c95af;
  /* 114c95b7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 114c95b9 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 114c95bb jmp 0x114c958a */
  goto L_114c958a;
L_114c95bd:;
  /* 114c95bd call 0x114cad5c */
  push32(0x114c95c2u); f_114cad5c();
  /* 114c95c2 jmp 0x114c95df */
  goto L_114c95df;
L_114c95c4:;
  /* 114c95c4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 114c95c9 jne 0x114c95bd */
  if (!C.zf) goto L_114c95bd;
  /* 114c95cb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c95d0 jne 0x114c95bd */
  if (!C.zf) goto L_114c95bd;
  /* 114c95d2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 114c95d4 fld xword ptr [0x114fce40] */
  fpu_push(rf80((uint32_t)(0x114fce40)));
  /* 114c95da mov eax, 1 */
  EAX = (0x1u);
L_114c95df:;
  /* 114c95df cmp dword ptr [0x114ff100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c95e6 jne 0x114cadce */
  if (!C.zf) { jmp_ind(0x114cadceu); return; }
  /* 114c95ec mov edx, 0x12 */
  EDX = (0x12u);
  /* 114c95f1 lea ecx, [0x114fcdd0] */
  ECX = ((uint32_t)(0x114fcdd0));
  /* 114c95f7 call 0x114caed7 */
  push32(0x114c95fcu); f_114caed7();
  /* 114c95fc pop edx */
  EDX = (pop32());
  /* 114c95fd ret  */
  ESPCHK(0x114c956du, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x114c9600 (20 bytes, 6 insns) */
void f_114c9600(void) {
  FTRACE(0x114c9600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9600 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9603 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 114c9606 call 0x114cadb8 */
  push32(0x114c960bu); f_114cadb8();
  /* 114c960b call 0x114c961d */
  push32(0x114c9610u); f_114c961d();
  /* 114c9610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9613 ret  */
  ESPCHK(0x114c9600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009614 @ 0x114c9614 (9 bytes, 2 insns) */
void f_114c9614(void) {
  FTRACE(0x114c9614u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9614 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 114c9618 call 0x114cad75 */
  push32(0x114c961du); f_114cad75();
}

/* FUN_1000961d @ 0x114c961d (138 bytes, 40 insns) */
void f_114c961d(void) {
  FTRACE(0x114c961du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c961d push edx */
  push32((uint32_t)(EDX));
  /* 114c961e wait  */
  /* wait (no observable integer/reg state) */
  /* 114c961f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 114c9622 je 0x114c965a */
  if (C.zf) goto L_114c965a;
  /* 114c9624 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 114c962a je 0x114c9632 */
  if (C.zf) goto L_114c9632;
  /* 114c962c fldcw word ptr [0x114f96b8] */
  C.fcw = r16((uint32_t)(0x114f96b8));
L_114c9632:;
  /* 114c9632 fld1  */
  fpu_push(1.0);
  /* 114c9634 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_114c9636:;
  /* 114c9636 cmp dword ptr [0x114ff100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c963d jne 0x114cadce */
  if (!C.zf) { jmp_ind(0x114cadceu); return; }
  /* 114c9643 mov edx, 0xf */
  EDX = (0xfu);
  /* 114c9648 lea ecx, [0x114fcde0] */
  ECX = ((uint32_t)(0x114fcde0));
  /* 114c964e jmp 0x114caddb */
  f_114caddb(); return;
L_114c9653:;
  /* 114c9653 call 0x114cad5c */
  push32(0x114c9658u); f_114cad5c();
  /* 114c9658 jmp 0x114c9680 */
  goto L_114c9680;
L_114c965a:;
  /* 114c965a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 114c965f jne 0x114c9653 */
  if (!C.zf) goto L_114c9653;
  /* 114c9661 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9666 jne 0x114c9653 */
  if (!C.zf) goto L_114c9653;
  /* 114c9668 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 114c966a fld xword ptr [0x114fce4a] */
  fpu_push(rf80((uint32_t)(0x114fce4a)));
  /* 114c9670 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 114c9675 je 0x114c9636 */
  if (C.zf) goto L_114c9636;
  /* 114c9677 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 114c9679 jmp 0x114c9636 */
  goto L_114c9636;
  /* 114c967b mov eax, 1 */
  EAX = (0x1u);
L_114c9680:;
  /* 114c9680 cmp dword ptr [0x114ff100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9687 jne 0x114cadce */
  if (!C.zf) { jmp_ind(0x114cadceu); return; }
  /* 114c968d mov edx, 0xf */
  EDX = (0xfu);
  /* 114c9692 lea ecx, [0x114fcde0] */
  ECX = ((uint32_t)(0x114fcde0));
  /* 114c9698 call 0x114caed7 */
  push32(0x114c969du); f_114caed7();
  /* 114c969d pop edx */
  EDX = (pop32());
  /* 114c969e ret  */
  ESPCHK(0x114c961du, _esp0);
  ESP += 4; return;
  /* 114c969f int3  */
  x86_unimpl("int3 @ 0x114c969f");
  /* 114c96a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c96a1 mov ebp, esp */
  EBP = (ESP);
  /* 114c96a3 push ebx */
  push32((uint32_t)(EBX));
  /* 114c96a4 push esi */
  push32((uint32_t)(ESI));
  /* 114c96a5 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_100096a0 @ 0x114c96a0 (33 bytes, 15 insns) */
void f_114c96a0(void) {
  FTRACE(0x114c96a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c96a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c96a1 mov ebp, esp */
  EBP = (ESP);
  /* 114c96a3 push ebx */
  push32((uint32_t)(EBX));
  /* 114c96a4 push esi */
  push32((uint32_t)(ESI));
  /* 114c96a5 push edi */
  push32((uint32_t)(EDI));
  /* 114c96a6 call 0x114c96e0 */
  push32(0x114c96abu); f_114c96e0();
  /* 114c96ab call 0x114cafa0 */
  push32(0x114c96b0u); f_114cafa0();
  /* 114c96b0 mov dword ptr [0x114ff104], eax */
  w32((uint32_t)(0x114ff104), (EAX));
  /* 114c96b5 call 0x114caf20 */
  push32(0x114c96bau); f_114caf20();
  /* 114c96ba fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 114c96bc pop edi */
  EDI = (pop32());
  /* 114c96bd pop esi */
  ESI = (pop32());
  /* 114c96be pop ebx */
  EBX = (pop32());
  /* 114c96bf pop ebp */
  EBP = (pop32());
  /* 114c96c0 ret  */
  ESPCHK(0x114c96a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x114c96d0 (5 bytes, 4 insns) */
void f_114c96d0(void) {
  FTRACE(0x114c96d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c96d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c96d1 mov ebp, esp */
  EBP = (ESP);
  /* 114c96d3 pop ebp */
  EBP = (pop32());
  /* 114c96d4 ret  */
  ESPCHK(0x114c96d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e0 @ 0x114c96e0 (65 bytes, 10 insns) */
void f_114c96e0(void) {
  FTRACE(0x114c96e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c96e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c96e1 mov ebp, esp */
  EBP = (ESP);
  /* 114c96e3 mov dword ptr [0x114fce70], 0x114cb690 */
  w32((uint32_t)(0x114fce70), (0x114cb690u));
  /* 114c96ed mov dword ptr [0x114fce74], 0x114cb0a0 */
  w32((uint32_t)(0x114fce74), (0x114cb0a0u));
  /* 114c96f7 mov dword ptr [0x114fce78], 0x114cb1b0 */
  w32((uint32_t)(0x114fce78), (0x114cb1b0u));
  /* 114c9701 mov dword ptr [0x114fce7c], 0x114caff0 */
  w32((uint32_t)(0x114fce7c), (0x114caff0u));
  /* 114c970b mov dword ptr [0x114fce80], 0x114cb180 */
  w32((uint32_t)(0x114fce80), (0x114cb180u));
  /* 114c9715 mov dword ptr [0x114fce84], 0x114cb690 */
  w32((uint32_t)(0x114fce84), (0x114cb690u));
  /* 114c971f pop ebp */
  EBP = (pop32());
  /* 114c9720 ret  */
  ESPCHK(0x114c96e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009730 @ 0x114c9730 (28 bytes, 11 insns) */
void f_114c9730(void) {
  FTRACE(0x114c9730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9730 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9731 mov ebp, esp */
  EBP = (ESP);
  /* 114c9733 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9734 mov eax, dword ptr [0x114ff100] */
  EAX = (r32((uint32_t)(0x114ff100)));
  /* 114c9739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114c973c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c973f mov dword ptr [0x114ff100], ecx */
  w32((uint32_t)(0x114ff100), (ECX));
  /* 114c9745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9748 mov esp, ebp */
  ESP = (EBP);
  /* 114c974a pop ebp */
  EBP = (pop32());
  /* 114c974b ret  */
  ESPCHK(0x114c9730u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x114c974c (39 bytes, 16 insns) */
void f_114c974c(void) {
  FTRACE(0x114c974cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c974c push ebp */
  push32((uint32_t)(EBP));
  /* 114c974d mov ebp, esp */
  EBP = (ESP);
  /* 114c974f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9752 wait  */
  /* wait (no observable integer/reg state) */
  /* 114c9753 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 114c9756 wait  */
  /* wait (no observable integer/reg state) */
  /* 114c9757 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 114c975b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 114c975e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114c9762 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 114c9765 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 114c9768 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 114c976b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114c976e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c9771 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114c9772 ret  */
  ESPCHK(0x114c974cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009780 @ 0x114c9780 (161 bytes, 60 insns) */
void f_114c9780(void) {
  FTRACE(0x114c9780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9780 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9781 mov ebp, esp */
  EBP = (ESP);
  /* 114c9783 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9784 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9785 push esi */
  push32((uint32_t)(ESI));
  /* 114c9786 push edi */
  push32((uint32_t)(EDI));
  /* 114c9787 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c978b jne 0x114c9792 */
  if (!C.zf) goto L_114c9792;
  /* 114c978d jmp 0x114c981a */
  goto L_114c981a;
L_114c9792:;
  /* 114c9792 push 9 */
  push32((uint32_t)(0x9u));
  /* 114c9794 call 0x114cb800 */
  push32(0x114c9799u); f_114cb800();
  /* 114c9799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c979c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c979f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c97a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114c97a5:;
  /* 114c97a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c97a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114c97ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114c97b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c97b4 je 0x114c97f7 */
  if (C.zf) goto L_114c97f7;
  /* 114c97b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c97b9 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c97bd je 0x114c97f7 */
  if (C.zf) goto L_114c97f7;
  /* 114c97bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c97c2 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114c97c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114c97cb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c97ce je 0x114c97f7 */
  if (C.zf) goto L_114c97f7;
  /* 114c97d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c97d3 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c97d7 je 0x114c97f7 */
  if (C.zf) goto L_114c97f7;
  /* 114c97d9 push 0x114f9410 */
  push32((uint32_t)(0x114f9410u));
  /* 114c97de push 0 */
  push32((uint32_t)(0x0u));
  /* 114c97e0 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 114c97e2 push 0x114f9404 */
  push32((uint32_t)(0x114f9404u));
  /* 114c97e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114c97e9 call 0x114ca4c0 */
  push32(0x114c97eeu); f_114ca4c0();
  /* 114c97ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c97f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c97f4 jne 0x114c97f7 */
  if (!C.zf) goto L_114c97f7;
  /* 114c97f6 int3  */
  x86_unimpl("int3 @ 0x114c97f6");
L_114c97f7:;
  /* 114c97f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114c97f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114c97fb jne 0x114c97a5 */
  if (!C.zf) goto L_114c97a5;
  /* 114c97fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9800 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114c9803 push eax */
  push32((uint32_t)(EAX));
  /* 114c9804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9807 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9808 call 0x114cc390 */
  push32(0x114c980du); f_114cc390();
  /* 114c980d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9810 push 9 */
  push32((uint32_t)(0x9u));
  /* 114c9812 call 0x114cb8a0 */
  push32(0x114c9817u); f_114cb8a0();
  /* 114c9817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114c981a:;
  /* 114c981a pop edi */
  EDI = (pop32());
  /* 114c981b pop esi */
  ESI = (pop32());
  /* 114c981c pop ebx */
  EBX = (pop32());
  /* 114c981d mov esp, ebp */
  ESP = (EBP);
  /* 114c981f pop ebp */
  EBP = (pop32());
  /* 114c9820 ret  */
  ESPCHK(0x114c9780u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x114c9830 (19 bytes, 9 insns) */
void f_114c9830(void) {
  FTRACE(0x114c9830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9830 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9831 mov ebp, esp */
  EBP = (ESP);
  /* 114c9833 push 1 */
  push32((uint32_t)(0x1u));
  /* 114c9835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9838 push eax */
  push32((uint32_t)(EAX));
  /* 114c9839 call 0x114cb930 */
  push32(0x114c983eu); f_114cb930();
  /* 114c983e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9841 pop ebp */
  EBP = (pop32());
  /* 114c9842 ret  */
  ESPCHK(0x114c9830u, _esp0);
  ESP += 4; return;
}

/* FUN_10009850 @ 0x114c9850 (45 bytes, 17 insns) */
void f_114c9850(void) {
  FTRACE(0x114c9850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9850 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9851 mov ebp, esp */
  EBP = (ESP);
  /* 114c9853 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9854 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9855 push esi */
  push32((uint32_t)(ESI));
  /* 114c9856 push edi */
  push32((uint32_t)(EDI));
  /* 114c9857 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c985a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c985d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114c9860 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 114c9867 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 114c9869 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 114c986f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9872 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9875 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 114c9878 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 114c987b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x114c9890 (7 bytes, 4 insns) */
void f_114c9890(void) {
  FTRACE(0x114c9890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9890 pop eax */
  EAX = (pop32());
  /* 114c9891 pop ecx */
  ECX = (pop32());
  /* 114c9892 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 114c9895 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100098a0 @ 0x114c98a0 (7 bytes, 4 insns) */
void f_114c98a0(void) {
  FTRACE(0x114c98a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c98a0 pop eax */
  EAX = (pop32());
  /* 114c98a1 pop ecx */
  ECX = (pop32());
  /* 114c98a2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 114c98a5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100098b0 @ 0x114c98b0 (7 bytes, 4 insns) */
void f_114c98b0(void) {
  FTRACE(0x114c98b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c98b0 pop eax */
  EAX = (pop32());
  /* 114c98b1 pop ecx */
  ECX = (pop32());
  /* 114c98b2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 114c98b5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100098c0 @ 0x114c98c0 (86 bytes, 32 insns) */
void f_114c98c0(void) {
  FTRACE(0x114c98c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c98c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c98c1 mov ebp, esp */
  EBP = (ESP);
  /* 114c98c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c98c6 push ebx */
  push32((uint32_t)(EBX));
  /* 114c98c7 push esi */
  push32((uint32_t)(ESI));
  /* 114c98c8 push edi */
  push32((uint32_t)(EDI));
  /* 114c98c9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114c98cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114c98d2 mov dword ptr [ebp - 4], 0x114c98ec */
  w32((uint32_t)(EBP + -0x4), (0x114c98ecu));
  /* 114c98d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c98db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c98de push eax */
  push32((uint32_t)(EAX));
  /* 114c98df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c98e2 push ecx */
  push32((uint32_t)(ECX));
  /* 114c98e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c98e6 push edx */
  push32((uint32_t)(EDX));
  /* 114c98e7 call 0x114e0dbc */
  push32(0x114c98ecu); f_114e0dbc();
  /* 114c98ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c98ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c98f2 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 114c98f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c98f8 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114c98fb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114c9901 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c9904 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 114c9906 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 114c990d pop edi */
  EDI = (pop32());
  /* 114c990e pop esi */
  ESI = (pop32());
  /* 114c990f pop ebx */
  EBX = (pop32());
  /* 114c9910 mov esp, ebp */
  ESP = (EBP);
  /* 114c9912 pop ebp */
  EBP = (pop32());
  /* 114c9913 ret 8 */
  ESPCHK(0x114c98c0u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x114c9920 (60 bytes, 31 insns) */
void f_114c9920(void) {
  FTRACE(0x114c9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9920 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9921 mov ebp, esp */
  EBP = (ESP);
  /* 114c9923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9926 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9927 push esi */
  push32((uint32_t)(ESI));
  /* 114c9928 push edi */
  push32((uint32_t)(EDI));
  /* 114c9929 cld  */
  C.df=0;
  /* 114c992a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114c992d push 0 */
  push32((uint32_t)(0x0u));
  /* 114c992f push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9931 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9933 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114c9936 push eax */
  push32((uint32_t)(EAX));
  /* 114c9937 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c993a push ecx */
  push32((uint32_t)(ECX));
  /* 114c993b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c993e push edx */
  push32((uint32_t)(EDX));
  /* 114c993f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9942 push eax */
  push32((uint32_t)(EAX));
  /* 114c9943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9946 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9947 call 0x114cd870 */
  push32(0x114c994cu); f_114cd870();
  /* 114c994c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c994f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114c9952 pop edi */
  EDI = (pop32());
  /* 114c9953 pop esi */
  ESI = (pop32());
  /* 114c9954 pop ebx */
  EBX = (pop32());
  /* 114c9955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9958 mov esp, ebp */
  ESP = (EBP);
  /* 114c995a pop ebp */
  EBP = (pop32());
  /* 114c995b ret  */
  ESPCHK(0x114c9920u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x114c9960 (38 bytes, 16 insns) */
void f_114c9960(void) {
  FTRACE(0x114c9960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9960 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9961 mov ebp, esp */
  EBP = (ESP);
  /* 114c9963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9966 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114c9969 push ecx */
  push32((uint32_t)(ECX));
  /* 114c996a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c996d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 114c9970 push eax */
  push32((uint32_t)(EAX));
  /* 114c9971 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9976 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114c9979 push edx */
  push32((uint32_t)(EDX));
  /* 114c997a call 0x114cdde0 */
  push32(0x114c997fu); f_114cdde0();
  /* 114c997f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9982 pop ebp */
  EBP = (pop32());
  /* 114c9983 ret 4 */
  ESPCHK(0x114c9960u, _esp0);
  ESP += 8; return;
}

/* FUN_10009990 @ 0x114c9990 (104 bytes, 36 insns) */
void f_114c9990(void) {
  FTRACE(0x114c9990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9990 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9991 mov ebp, esp */
  EBP = (ESP);
  /* 114c9993 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9996 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9997 push esi */
  push32((uint32_t)(ESI));
  /* 114c9998 push edi */
  push32((uint32_t)(EDI));
  /* 114c9999 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114c99a0 mov dword ptr [ebp - 0x10], 0x114c9a00 */
  w32((uint32_t)(EBP + -0x10), (0x114c9a00u));
  /* 114c99a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c99aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114c99ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c99b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114c99b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c99b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114c99b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114c99bc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114c99c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114c99c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114c99cb mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 114c99d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114c99d4 push eax */
  push32((uint32_t)(EAX));
  /* 114c99d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c99d8 push ecx */
  push32((uint32_t)(ECX));
  /* 114c99d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c99dc push edx */
  push32((uint32_t)(EDX));
  /* 114c99dd call 0x114ce4d0 */
  push32(0x114c99e2u); f_114ce4d0();
  /* 114c99e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114c99e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114c99e8 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 114c99ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114c99f1 pop edi */
  EDI = (pop32());
  /* 114c99f2 pop esi */
  ESI = (pop32());
  /* 114c99f3 pop ebx */
  EBX = (pop32());
  /* 114c99f4 mov esp, ebp */
  ESP = (EBP);
  /* 114c99f6 pop ebp */
  EBP = (pop32());
  /* 114c99f7 ret  */
  ESPCHK(0x114c9990u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a00 @ 0x114c9a00 (57 bytes, 30 insns) */
void f_114c9a00(void) {
  FTRACE(0x114c9a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9a00 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9a01 mov ebp, esp */
  EBP = (ESP);
  /* 114c9a03 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9a04 push esi */
  push32((uint32_t)(ESI));
  /* 114c9a05 push edi */
  push32((uint32_t)(EDI));
  /* 114c9a06 cld  */
  C.df=0;
  /* 114c9a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9a09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9a0c push eax */
  push32((uint32_t)(EAX));
  /* 114c9a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9a10 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114c9a13 push edx */
  push32((uint32_t)(EDX));
  /* 114c9a14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9a17 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114c9a1a push ecx */
  push32((uint32_t)(ECX));
  /* 114c9a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9a1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c9a20 push edx */
  push32((uint32_t)(EDX));
  /* 114c9a21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9a24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114c9a27 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9a28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9a2b push edx */
  push32((uint32_t)(EDX));
  /* 114c9a2c call 0x114cd870 */
  push32(0x114c9a31u); f_114cd870();
  /* 114c9a31 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9a34 pop edi */
  EDI = (pop32());
  /* 114c9a35 pop esi */
  ESI = (pop32());
  /* 114c9a36 pop ebx */
  EBX = (pop32());
  /* 114c9a37 pop ebp */
  EBP = (pop32());
  /* 114c9a38 ret  */
  ESPCHK(0x114c9a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a40 @ 0x114c9a40 (204 bytes, 58 insns) */
void f_114c9a40(void) {
  FTRACE(0x114c9a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9a40 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9a41 mov ebp, esp */
  EBP = (ESP);
  /* 114c9a43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114c9a46 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9a47 push esi */
  push32((uint32_t)(ESI));
  /* 114c9a48 push edi */
  push32((uint32_t)(EDI));
  /* 114c9a49 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114c9a50 mov dword ptr [ebp - 0x24], 0x114c9b10 */
  w32((uint32_t)(EBP + -0x24), (0x114c9b10u));
  /* 114c9a57 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114c9a5a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114c9a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9a60 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 114c9a63 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114c9a66 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114c9a69 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114c9a6c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114c9a6f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114c9a76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114c9a7d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114c9a84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114c9a8b mov dword ptr [ebp - 0x10], 0x114c9adc */
  w32((uint32_t)(EBP + -0x10), (0x114c9adcu));
  /* 114c9a92 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 114c9a95 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 114c9a98 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114c9a9e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114c9aa1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 114c9aa7 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 114c9aad mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 114c9ab4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9ab7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 114c9aba mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c9abd mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 114c9ac0 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 114c9ac3 push eax */
  push32((uint32_t)(EAX));
  /* 114c9ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9ac7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114c9ac9 push edx */
  push32((uint32_t)(EDX));
  /* 114c9aca call 0x114ce600 */
  push32(0x114c9acfu); f_114ce600();
  /* 114c9acf call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x114c9ad2u);
  /* 114c9ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9ad5 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 114c9adc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9ae0 je 0x114c9af9 */
  if (C.zf) goto L_114c9af9;
  /* 114c9ae2 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 114c9ae9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 114c9aeb mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 114c9aee mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 114c9af0 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 114c9af7 jmp 0x114c9b02 */
  goto L_114c9b02;
L_114c9af9:;
  /* 114c9af9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114c9afc mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_114c9b02:;
  /* 114c9b02 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 114c9b05 pop edi */
  EDI = (pop32());
  /* 114c9b06 pop esi */
  ESI = (pop32());
  /* 114c9b07 pop ebx */
  EBX = (pop32());
  /* 114c9b08 mov esp, ebp */
  ESP = (EBP);
  /* 114c9b0a pop ebp */
  EBP = (pop32());
  /* 114c9b0b ret  */
  ESPCHK(0x114c9a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x114c9b10 (124 bytes, 53 insns) */
void f_114c9b10(void) {
  FTRACE(0x114c9b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9b10 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9b11 mov ebp, esp */
  EBP = (ESP);
  /* 114c9b13 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9b14 push esi */
  push32((uint32_t)(ESI));
  /* 114c9b15 push edi */
  push32((uint32_t)(EDI));
  /* 114c9b16 cld  */
  C.df=0;
  /* 114c9b17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9b1a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114c9b1d and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 114c9b20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114c9b22 je 0x114c9b35 */
  if (C.zf) goto L_114c9b35;
  /* 114c9b24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b27 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 114c9b2e mov eax, 1 */
  EAX = (0x1u);
  /* 114c9b33 jmp 0x114c9b8c */
  goto L_114c9b8c;
L_114c9b35:;
  /* 114c9b35 push 1 */
  push32((uint32_t)(0x1u));
  /* 114c9b37 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b3a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114c9b3d push ecx */
  push32((uint32_t)(ECX));
  /* 114c9b3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b41 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114c9b44 push eax */
  push32((uint32_t)(EAX));
  /* 114c9b45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114c9b4b push edx */
  push32((uint32_t)(EDX));
  /* 114c9b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9b4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c9b51 push eax */
  push32((uint32_t)(EAX));
  /* 114c9b52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114c9b58 push edx */
  push32((uint32_t)(EDX));
  /* 114c9b59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9b5c push eax */
  push32((uint32_t)(EAX));
  /* 114c9b5d call 0x114cd870 */
  push32(0x114c9b62u); f_114cd870();
  /* 114c9b62 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9b65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b68 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9b6c jne 0x114c9b7b */
  if (!C.zf) goto L_114c9b7b;
  /* 114c9b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9b71 push edx */
  push32((uint32_t)(EDX));
  /* 114c9b72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b75 push eax */
  push32((uint32_t)(EAX));
  /* 114c9b76 call 0x114c98c0 */
  push32(0x114c9b7bu); f_114c98c0();
L_114c9b7b:;
  /* 114c9b7b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9b7e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 114c9b81 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 114c9b84 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 114c9b87 mov eax, 1 */
  EAX = (0x1u);
L_114c9b8c:;
  /* 114c9b8c pop edi */
  EDI = (pop32());
  /* 114c9b8d pop esi */
  ESI = (pop32());
  /* 114c9b8e pop ebx */
  EBX = (pop32());
  /* 114c9b8f pop ebp */
  EBP = (pop32());
  /* 114c9b90 ret  */
  ESPCHK(0x114c9b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ba0 @ 0x114c9ba0 (130 bytes, 57 insns) */
void f_114c9ba0(void) {
  FTRACE(0x114c9ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9ba1 mov ebp, esp */
  EBP = (ESP);
  /* 114c9ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 114c9ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114c9ba7 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9ba8 push esi */
  push32((uint32_t)(ESI));
  /* 114c9ba9 push edi */
  push32((uint32_t)(EDI));
  /* 114c9baa mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114c9bad mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 114c9bb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114c9bb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9bb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114c9bb8 mov edi, esi */
  EDI = (ESI);
  /* 114c9bba mov ebx, esi */
  EBX = (ESI);
  /* 114c9bbc jl 0x114c9bf9 */
  if ((C.sf!=C.of)) goto L_114c9bf9;
L_114c9bbe:;
  /* 114c9bbe cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9bc1 jne 0x114c9bc8 */
  if (!C.zf) goto L_114c9bc8;
  /* 114c9bc3 call 0x114ce880 */
  push32(0x114c9bc8u); f_114ce880();
L_114c9bc8:;
  /* 114c9bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9bcb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 114c9bcc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114c9bcf lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 114c9bd2 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 114c9bd5 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9bd8 jge 0x114c9bdf */
  if ((C.sf==C.of)) goto L_114c9bdf;
  /* 114c9bda cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9bdd jle 0x114c9be4 */
  if ((C.zf||C.sf!=C.of)) goto L_114c9be4;
L_114c9bdf:;
  /* 114c9bdf cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9be2 jne 0x114c9bef */
  if (!C.zf) goto L_114c9bef;
L_114c9be4:;
  /* 114c9be4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9be7 mov edi, ebx */
  EDI = (EBX);
  /* 114c9be9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114c9bea mov ebx, esi */
  EBX = (ESI);
  /* 114c9bec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_114c9bef:;
  /* 114c9bef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114c9bf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114c9bf4 jge 0x114c9bbe */
  if ((C.sf==C.of)) goto L_114c9bbe;
  /* 114c9bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_114c9bf9:;
  /* 114c9bf9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114c9bfc mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114c9bff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114c9c00 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 114c9c02 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 114c9c04 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9c07 ja 0x114c9c0d */
  if ((!C.cf&&!C.zf)) goto L_114c9c0d;
  /* 114c9c09 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9c0b jbe 0x114c9c12 */
  if ((C.cf||C.zf)) goto L_114c9c12;
L_114c9c0d:;
  /* 114c9c0d call 0x114ce880 */
  push32(0x114c9c12u); f_114ce880();
L_114c9c12:;
  /* 114c9c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114c9c15 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 114c9c18 pop edi */
  EDI = (pop32());
  /* 114c9c19 pop esi */
  ESI = (pop32());
  /* 114c9c1a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 114c9c1d pop ebx */
  EBX = (pop32());
  /* 114c9c1e mov esp, ebp */
  ESP = (EBP);
  /* 114c9c20 pop ebp */
  EBP = (pop32());
  /* 114c9c21 ret  */
  ESPCHK(0x114c9ba0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x114c9c30 (32 bytes, 18 insns) */
void f_114c9c30(void) {
  FTRACE(0x114c9c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9c30 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9c31 mov ebp, esp */
  EBP = (ESP);
  /* 114c9c33 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9c34 push esi */
  push32((uint32_t)(ESI));
  /* 114c9c35 push edi */
  push32((uint32_t)(EDI));
  /* 114c9c36 push ebp */
  push32((uint32_t)(EBP));
  /* 114c9c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 114c9c3b push 0x114c9c48 */
  push32((uint32_t)(0x114c9c48u));
  /* 114c9c40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 114c9c43 call 0x114e0dbc */
  push32(0x114c9c48u); f_114e0dbc();
  /* 114c9c48 pop ebp */
  EBP = (pop32());
  /* 114c9c49 pop edi */
  EDI = (pop32());
  /* 114c9c4a pop esi */
  ESI = (pop32());
  /* 114c9c4b pop ebx */
  EBX = (pop32());
  /* 114c9c4c mov esp, ebp */
  ESP = (EBP);
  /* 114c9c4e pop ebp */
  EBP = (pop32());
  /* 114c9c4f ret  */
  ESPCHK(0x114c9c30u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x114c9c72 (104 bytes, 33 insns) */
void f_114c9c72(void) {
  FTRACE(0x114c9c72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9c72 push ebx */
  push32((uint32_t)(EBX));
  /* 114c9c73 push esi */
  push32((uint32_t)(ESI));
  /* 114c9c74 push edi */
  push32((uint32_t)(EDI));
  /* 114c9c75 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 114c9c79 push eax */
  push32((uint32_t)(EAX));
  /* 114c9c7a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 114c9c7c push 0x114c9c50 */
  push32((uint32_t)(0x114c9c50u));
  /* 114c9c81 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 114c9c88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_114c9c8f:;
  /* 114c9c8f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 114c9c93 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 114c9c96 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 114c9c99 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9c9c je 0x114c9ccc */
  if (C.zf) goto L_114c9ccc;
  /* 114c9c9e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9ca2 je 0x114c9ccc */
  if (C.zf) goto L_114c9ccc;
  /* 114c9ca4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 114c9ca7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 114c9caa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 114c9cae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 114c9cb1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9cb6 jne 0x114c9cca */
  if (!C.zf) goto L_114c9cca;
  /* 114c9cb8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 114c9cbd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 114c9cc1 call 0x114c9d06 */
  push32(0x114c9cc6u); f_114c9d06();
  /* 114c9cc6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x114c9ccau);
L_114c9cca:;
  /* 114c9cca jmp 0x114c9c8f */
  goto L_114c9c8f;
L_114c9ccc:;
  /* 114c9ccc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 114c9cd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114c9cd6 pop edi */
  EDI = (pop32());
  /* 114c9cd7 pop esi */
  ESI = (pop32());
  /* 114c9cd8 pop ebx */
  EBX = (pop32());
  /* 114c9cd9 ret  */
  ESPCHK(0x114c9c72u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x114c9cda (35 bytes, 10 insns) */
void f_114c9cda(void) {
  FTRACE(0x114c9cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9cda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114c9cdc mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 114c9ce3 cmp dword ptr [ecx + 4], 0x114c9c50 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x114c9c50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9cea jne 0x114c9cfc */
  if (!C.zf) goto L_114c9cfc;
  /* 114c9cec mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114c9cef mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 114c9cf2 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114c9cf5 jne 0x114c9cfc */
  if (!C.zf) goto L_114c9cfc;
  /* 114c9cf7 mov eax, 1 */
  EAX = (0x1u);
L_114c9cfc:;
  /* 114c9cfc ret  */
  ESPCHK(0x114c9cdau, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x114c9cfd (9 bytes, 4 insns) */
void f_114c9cfd(void) {
  FTRACE(0x114c9cfdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114c9cfd push ebx */
  push32((uint32_t)(EBX));
  /* 114c9cfe push ecx */
  push32((uint32_t)(ECX));
  /* 114c9cff mov ebx, 0x114fcdfc */
  EBX = (0x114fcdfcu);
  /* 114c9d04 jmp 0x114c9d10 */
  jmp_ind(0x114c9d10u); return;
}

