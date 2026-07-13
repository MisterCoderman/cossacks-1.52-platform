#include "recomp.h"

/* FUN_10006b50 @ 0x129c6b50 (10 bytes, 5 insns) */
void f_129c6b50(void) {
  FTRACE(0x129c6b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6b50 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6b51 mov ebp, esp */
  EBP = (ESP);
  /* 129c6b53 mov eax, dword ptr [0x129ee67c] */
  EAX = (r32((uint32_t)(0x129ee67c)));
  /* 129c6b58 pop ebp */
  EBP = (pop32());
  /* 129c6b59 ret  */
  ESPCHK(0x129c6b50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x129c6b60 (45 bytes, 19 insns) */
void f_129c6b60(void) {
  FTRACE(0x129c6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6b60 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6b61 mov ebp, esp */
  EBP = (ESP);
  /* 129c6b63 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6b64 mov eax, dword ptr [0x129ee67c] */
  EAX = (r32((uint32_t)(0x129ee67c)));
  /* 129c6b69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6b6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6b70 je 0x129c6b80 */
  if (C.zf) goto L_129c6b80;
  /* 129c6b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6b75 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6b76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129c6b79u);
  /* 129c6b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c6b7e jne 0x129c6b84 */
  if (!C.zf) goto L_129c6b84;
L_129c6b80:;
  /* 129c6b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6b82 jmp 0x129c6b89 */
  goto L_129c6b89;
L_129c6b84:;
  /* 129c6b84 mov eax, 1 */
  EAX = (0x1u);
L_129c6b89:;
  /* 129c6b89 mov esp, ebp */
  ESP = (EBP);
  /* 129c6b8b pop ebp */
  EBP = (pop32());
  /* 129c6b8c ret  */
  ESPCHK(0x129c6b60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x129c6b90 (88 bytes, 40 insns) */
void f_129c6b90(void) {
  FTRACE(0x129c6b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6b90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 129c6b94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c6b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c6b9a je 0x129c6be3 */
  if (C.zf) goto L_129c6be3;
  /* 129c6b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6b9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 129c6ba2 push edi */
  push32((uint32_t)(EDI));
  /* 129c6ba3 mov edi, ecx */
  EDI = (ECX);
  /* 129c6ba5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6ba8 jb 0x129c6bd7 */
  if (C.cf) goto L_129c6bd7;
  /* 129c6baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c6bac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 129c6baf je 0x129c6bb9 */
  if (C.zf) goto L_129c6bb9;
  /* 129c6bb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129c6bb3:;
  /* 129c6bb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c6bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c6bb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129c6bb7 jne 0x129c6bb3 */
  if (!C.zf) goto L_129c6bb3;
L_129c6bb9:;
  /* 129c6bb9 mov ecx, eax */
  ECX = (EAX);
  /* 129c6bbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129c6bbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6bc0 mov ecx, eax */
  ECX = (EAX);
  /* 129c6bc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129c6bc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6bc7 mov ecx, edx */
  ECX = (EDX);
  /* 129c6bc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129c6bcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c6bcf je 0x129c6bd7 */
  if (C.zf) goto L_129c6bd7;
  /* 129c6bd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c6bd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c6bd5 je 0x129c6bdd */
  if (C.zf) goto L_129c6bdd;
L_129c6bd7:;
  /* 129c6bd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c6bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c6bda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 129c6bdb jne 0x129c6bd7 */
  if (!C.zf) goto L_129c6bd7;
L_129c6bdd:;
  /* 129c6bdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c6be1 pop edi */
  EDI = (pop32());
  /* 129c6be2 ret  */
  ESPCHK(0x129c6b90u, _esp0);
  ESP += 4; return;
L_129c6be3:;
  /* 129c6be3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c6be7 ret  */
  ESPCHK(0x129c6b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x129c6bf0 (23 bytes, 10 insns) */
void f_129c6bf0(void) {
  FTRACE(0x129c6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 129c6bf3 mov eax, dword ptr [0x129ee678] */
  EAX = (r32((uint32_t)(0x129ee678)));
  /* 129c6bf8 push eax */
  push32((uint32_t)(EAX));
  /* 129c6bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6bfc push ecx */
  push32((uint32_t)(ECX));
  /* 129c6bfd call 0x129c6c10 */
  push32(0x129c6c02u); f_129c6c10();
  /* 129c6c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6c05 pop ebp */
  EBP = (pop32());
  /* 129c6c06 ret  */
  ESPCHK(0x129c6bf0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x129c6c10 (87 bytes, 34 insns) */
void f_129c6c10(void) {
  FTRACE(0x129c6c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6c10 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6c11 mov ebp, esp */
  EBP = (ESP);
  /* 129c6c13 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6c14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6c18 jbe 0x129c6c1e */
  if ((C.cf||C.zf)) goto L_129c6c1e;
  /* 129c6c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6c1c jmp 0x129c6c63 */
  goto L_129c6c63;
L_129c6c1e:;
  /* 129c6c1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6c22 ja 0x129c6c35 */
  if ((!C.cf&&!C.zf)) goto L_129c6c35;
  /* 129c6c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6c27 push eax */
  push32((uint32_t)(EAX));
  /* 129c6c28 call 0x129c6c70 */
  push32(0x129c6c2du); f_129c6c70();
  /* 129c6c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6c33 jmp 0x129c6c3c */
  goto L_129c6c3c;
L_129c6c35:;
  /* 129c6c35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c6c3c:;
  /* 129c6c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6c40 jne 0x129c6c48 */
  if (!C.zf) goto L_129c6c48;
  /* 129c6c42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6c46 jne 0x129c6c4d */
  if (!C.zf) goto L_129c6c4d;
L_129c6c48:;
  /* 129c6c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6c4b jmp 0x129c6c63 */
  goto L_129c6c63;
L_129c6c4d:;
  /* 129c6c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6c50 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6c51 call 0x129c6b60 */
  push32(0x129c6c56u); f_129c6b60();
  /* 129c6c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c6c5b jne 0x129c6c61 */
  if (!C.zf) goto L_129c6c61;
  /* 129c6c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6c5f jmp 0x129c6c63 */
  goto L_129c6c63;
L_129c6c61:;
  /* 129c6c61 jmp 0x129c6c1e */
  goto L_129c6c1e;
L_129c6c63:;
  /* 129c6c63 mov esp, ebp */
  ESP = (EBP);
  /* 129c6c65 pop ebp */
  EBP = (pop32());
  /* 129c6c66 ret  */
  ESPCHK(0x129c6c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x129c6c70 (109 bytes, 37 insns) */
void f_129c6c70(void) {
  FTRACE(0x129c6c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6c70 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6c71 mov ebp, esp */
  EBP = (ESP);
  /* 129c6c73 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6c77 cmp eax, dword ptr [0x129ecc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ecc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6c7d ja 0x129c6cad */
  if ((!C.cf&&!C.zf)) goto L_129c6cad;
  /* 129c6c7f push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6c81 call 0x129c6820 */
  push32(0x129c6c86u); f_129c6820();
  /* 129c6c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6c8c push ecx */
  push32((uint32_t)(ECX));
  /* 129c6c8d call 0x129c77b0 */
  push32(0x129c6c92u); f_129c77b0();
  /* 129c6c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6c9a call 0x129c68c0 */
  push32(0x129c6c9fu); f_129c68c0();
  /* 129c6c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6ca2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6ca6 je 0x129c6cad */
  if (C.zf) goto L_129c6cad;
  /* 129c6ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6cab jmp 0x129c6cd9 */
  goto L_129c6cd9;
L_129c6cad:;
  /* 129c6cad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6cb1 jne 0x129c6cba */
  if (!C.zf) goto L_129c6cba;
  /* 129c6cb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_129c6cba:;
  /* 129c6cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6cbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6cc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129c6cc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129c6cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6cc9 push eax */
  push32((uint32_t)(EAX));
  /* 129c6cca push 0 */
  push32((uint32_t)(0x0u));
  /* 129c6ccc mov ecx, dword ptr [0x129efe2c] */
  ECX = (r32((uint32_t)(0x129efe2c)));
  /* 129c6cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6cd3 call dword ptr [0x129f0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0330))), 0x129c6cd9u);
L_129c6cd9:;
  /* 129c6cd9 mov esp, ebp */
  ESP = (EBP);
  /* 129c6cdb pop ebp */
  EBP = (pop32());
  /* 129c6cdc ret  */
  ESPCHK(0x129c6c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x129c6ce0 (10 bytes, 5 insns) */
void f_129c6ce0(void) {
  FTRACE(0x129c6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 129c6ce3 mov eax, 1 */
  EAX = (0x1u);
  /* 129c6ce8 pop ebp */
  EBP = (pop32());
  /* 129c6ce9 ret  */
  ESPCHK(0x129c6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x129c6cf0 (173 bytes, 59 insns) */
void f_129c6cf0(void) {
  FTRACE(0x129c6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 129c6cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6cf6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6cfa jbe 0x129c6d03 */
  if ((C.cf||C.zf)) goto L_129c6d03;
  /* 129c6cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6cfe jmp 0x129c6d99 */
  goto L_129c6d99;
L_129c6d03:;
  /* 129c6d03 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6d05 call 0x129c6820 */
  push32(0x129c6d0au); f_129c6820();
  /* 129c6d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6d10 push eax */
  push32((uint32_t)(EAX));
  /* 129c6d11 call 0x129c7120 */
  push32(0x129c6d16u); f_129c7120();
  /* 129c6d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6d19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c6d1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6d20 je 0x129c6d61 */
  if (C.zf) goto L_129c6d61;
  /* 129c6d22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c6d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6d2c cmp ecx, dword ptr [0x129ecc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ecc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6d32 ja 0x129c6d52 */
  if ((!C.cf&&!C.zf)) goto L_129c6d52;
  /* 129c6d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6d37 push edx */
  push32((uint32_t)(EDX));
  /* 129c6d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6d3b push eax */
  push32((uint32_t)(EAX));
  /* 129c6d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6d3f push ecx */
  push32((uint32_t)(ECX));
  /* 129c6d40 call 0x129c7ff0 */
  push32(0x129c6d45u); f_129c7ff0();
  /* 129c6d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c6d4a je 0x129c6d52 */
  if (C.zf) goto L_129c6d52;
  /* 129c6d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6d4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c6d52:;
  /* 129c6d52 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6d54 call 0x129c68c0 */
  push32(0x129c6d59u); f_129c68c0();
  /* 129c6d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6d5f jmp 0x129c6d99 */
  goto L_129c6d99;
L_129c6d61:;
  /* 129c6d61 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6d63 call 0x129c68c0 */
  push32(0x129c6d68u); f_129c68c0();
  /* 129c6d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6d6f jne 0x129c6d78 */
  if (!C.zf) goto L_129c6d78;
  /* 129c6d71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_129c6d78:;
  /* 129c6d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6d7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6d7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 129c6d80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 129c6d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6d86 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6d8a push edx */
  push32((uint32_t)(EDX));
  /* 129c6d8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129c6d8d mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c6d92 push eax */
  push32((uint32_t)(EAX));
  /* 129c6d93 call dword ptr [0x129f0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0334))), 0x129c6d99u);
L_129c6d99:;
  /* 129c6d99 mov esp, ebp */
  ESP = (EBP);
  /* 129c6d9b pop ebp */
  EBP = (pop32());
  /* 129c6d9c ret  */
  ESPCHK(0x129c6cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x129c6da0 (490 bytes, 165 insns) */
void f_129c6da0(void) {
  FTRACE(0x129c6da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6da0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6da1 mov ebp, esp */
  EBP = (ESP);
  /* 129c6da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6da6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6daa jne 0x129c6dbd */
  if (!C.zf) goto L_129c6dbd;
  /* 129c6dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6daf push eax */
  push32((uint32_t)(EAX));
  /* 129c6db0 call 0x129c6bf0 */
  push32(0x129c6db5u); f_129c6bf0();
  /* 129c6db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6db8 jmp 0x129c6f86 */
  goto L_129c6f86;
L_129c6dbd:;
  /* 129c6dbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6dc1 jne 0x129c6dd6 */
  if (!C.zf) goto L_129c6dd6;
  /* 129c6dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6dc7 call 0x129c6f90 */
  push32(0x129c6dccu); f_129c6f90();
  /* 129c6dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6dd1 jmp 0x129c6f86 */
  goto L_129c6f86;
L_129c6dd6:;
  /* 129c6dd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c6ddd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6de1 ja 0x129c6f59 */
  if ((!C.cf&&!C.zf)) goto L_129c6f59;
  /* 129c6de7 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6de9 call 0x129c6820 */
  push32(0x129c6deeu); f_129c6820();
  /* 129c6dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6df4 push edx */
  push32((uint32_t)(EDX));
  /* 129c6df5 call 0x129c7120 */
  push32(0x129c6dfau); f_129c7120();
  /* 129c6dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6dfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c6e00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6e04 je 0x129c6f1c */
  if (C.zf) goto L_129c6f1c;
  /* 129c6e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6e0d cmp eax, dword ptr [0x129ecc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ecc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6e13 ja 0x129c6e90 */
  if ((!C.cf&&!C.zf)) goto L_129c6e90;
  /* 129c6e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6e18 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6e1c push edx */
  push32((uint32_t)(EDX));
  /* 129c6e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c6e20 push eax */
  push32((uint32_t)(EAX));
  /* 129c6e21 call 0x129c7ff0 */
  push32(0x129c6e26u); f_129c7ff0();
  /* 129c6e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c6e2b je 0x129c6e35 */
  if (C.zf) goto L_129c6e35;
  /* 129c6e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6e30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c6e33 jmp 0x129c6e90 */
  goto L_129c6e90;
L_129c6e35:;
  /* 129c6e35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6e38 push edx */
  push32((uint32_t)(EDX));
  /* 129c6e39 call 0x129c77b0 */
  push32(0x129c6e3eu); f_129c77b0();
  /* 129c6e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c6e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6e48 je 0x129c6e90 */
  if (C.zf) goto L_129c6e90;
  /* 129c6e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6e4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 129c6e50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c6e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6e59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6e5c jae 0x129c6e66 */
  if (!C.cf) goto L_129c6e66;
  /* 129c6e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c6e64 jmp 0x129c6e6c */
  goto L_129c6e6c;
L_129c6e66:;
  /* 129c6e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129c6e6c:;
  /* 129c6e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6e6f push edx */
  push32((uint32_t)(EDX));
  /* 129c6e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6e73 push eax */
  push32((uint32_t)(EAX));
  /* 129c6e74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6e77 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6e78 call 0x129c9700 */
  push32(0x129c6e7du); f_129c9700();
  /* 129c6e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6e83 push edx */
  push32((uint32_t)(EDX));
  /* 129c6e84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c6e87 push eax */
  push32((uint32_t)(EAX));
  /* 129c6e88 call 0x129c71e0 */
  push32(0x129c6e8du); f_129c71e0();
  /* 129c6e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c6e90:;
  /* 129c6e90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6e94 jne 0x129c6f10 */
  if (!C.zf) goto L_129c6f10;
  /* 129c6e96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6e9a jne 0x129c6ea3 */
  if (!C.zf) goto L_129c6ea3;
  /* 129c6e9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_129c6ea3:;
  /* 129c6ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6ea6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6ea9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 129c6eac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 129c6eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6eb2 push edx */
  push32((uint32_t)(EDX));
  /* 129c6eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c6eb5 mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c6eba push eax */
  push32((uint32_t)(EAX));
  /* 129c6ebb call dword ptr [0x129f0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0330))), 0x129c6ec1u);
  /* 129c6ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c6ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6ec8 je 0x129c6f10 */
  if (C.zf) goto L_129c6f10;
  /* 129c6eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6ecd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 129c6ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6ed3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c6ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6ed9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6edc jae 0x129c6ee6 */
  if (!C.cf) goto L_129c6ee6;
  /* 129c6ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6ee1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129c6ee4 jmp 0x129c6eec */
  goto L_129c6eec;
L_129c6ee6:;
  /* 129c6ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6ee9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129c6eec:;
  /* 129c6eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c6eef push eax */
  push32((uint32_t)(EAX));
  /* 129c6ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6ef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6ef7 push edx */
  push32((uint32_t)(EDX));
  /* 129c6ef8 call 0x129c9700 */
  push32(0x129c6efdu); f_129c9700();
  /* 129c6efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6f03 push eax */
  push32((uint32_t)(EAX));
  /* 129c6f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c6f07 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6f08 call 0x129c71e0 */
  push32(0x129c6f0du); f_129c71e0();
  /* 129c6f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c6f10:;
  /* 129c6f10 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6f12 call 0x129c68c0 */
  push32(0x129c6f17u); f_129c68c0();
  /* 129c6f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6f1a jmp 0x129c6f59 */
  goto L_129c6f59;
L_129c6f1c:;
  /* 129c6f1c push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6f1e call 0x129c68c0 */
  push32(0x129c6f23u); f_129c68c0();
  /* 129c6f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6f26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6f2a jne 0x129c6f33 */
  if (!C.zf) goto L_129c6f33;
  /* 129c6f2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_129c6f33:;
  /* 129c6f33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6f36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6f39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129c6f3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129c6f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6f42 push eax */
  push32((uint32_t)(EAX));
  /* 129c6f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6f46 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c6f49 mov edx, dword ptr [0x129efe2c] */
  EDX = (r32((uint32_t)(0x129efe2c)));
  /* 129c6f4f push edx */
  push32((uint32_t)(EDX));
  /* 129c6f50 call dword ptr [0x129f0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0334))), 0x129c6f56u);
  /* 129c6f56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129c6f59:;
  /* 129c6f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6f5d jne 0x129c6f68 */
  if (!C.zf) goto L_129c6f68;
  /* 129c6f5f cmp dword ptr [0x129ee678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6f66 jne 0x129c6f6d */
  if (!C.zf) goto L_129c6f6d;
L_129c6f68:;
  /* 129c6f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6f6b jmp 0x129c6f86 */
  goto L_129c6f86;
L_129c6f6d:;
  /* 129c6f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6f70 push eax */
  push32((uint32_t)(EAX));
  /* 129c6f71 call 0x129c6b60 */
  push32(0x129c6f76u); f_129c6b60();
  /* 129c6f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c6f7b jne 0x129c6f81 */
  if (!C.zf) goto L_129c6f81;
  /* 129c6f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6f7f jmp 0x129c6f86 */
  goto L_129c6f86;
L_129c6f81:;
  /* 129c6f81 jmp 0x129c6dd6 */
  goto L_129c6dd6;
L_129c6f86:;
  /* 129c6f86 mov esp, ebp */
  ESP = (EBP);
  /* 129c6f88 pop ebp */
  EBP = (pop32());
  /* 129c6f89 ret  */
  ESPCHK(0x129c6da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x129c6f90 (104 bytes, 38 insns) */
void f_129c6f90(void) {
  FTRACE(0x129c6f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6f90 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6f91 mov ebp, esp */
  EBP = (ESP);
  /* 129c6f93 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6f94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6f98 jne 0x129c6f9c */
  if (!C.zf) goto L_129c6f9c;
  /* 129c6f9a jmp 0x129c6ff4 */
  goto L_129c6ff4;
L_129c6f9c:;
  /* 129c6f9c push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6f9e call 0x129c6820 */
  push32(0x129c6fa3u); f_129c6820();
  /* 129c6fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6fa9 push eax */
  push32((uint32_t)(EAX));
  /* 129c6faa call 0x129c7120 */
  push32(0x129c6fafu); f_129c7120();
  /* 129c6faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6fb9 je 0x129c6fd7 */
  if (C.zf) goto L_129c6fd7;
  /* 129c6fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6fbe push ecx */
  push32((uint32_t)(ECX));
  /* 129c6fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6fc2 push edx */
  push32((uint32_t)(EDX));
  /* 129c6fc3 call 0x129c71e0 */
  push32(0x129c6fc8u); f_129c71e0();
  /* 129c6fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6fcd call 0x129c68c0 */
  push32(0x129c6fd2u); f_129c68c0();
  /* 129c6fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6fd5 jmp 0x129c6ff4 */
  goto L_129c6ff4;
L_129c6fd7:;
  /* 129c6fd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6fd9 call 0x129c68c0 */
  push32(0x129c6fdeu); f_129c68c0();
  /* 129c6fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6fe4 push eax */
  push32((uint32_t)(EAX));
  /* 129c6fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c6fe7 mov ecx, dword ptr [0x129efe2c] */
  ECX = (r32((uint32_t)(0x129efe2c)));
  /* 129c6fed push ecx */
  push32((uint32_t)(ECX));
  /* 129c6fee call dword ptr [0x129f0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0310))), 0x129c6ff4u);
L_129c6ff4:;
  /* 129c6ff4 mov esp, ebp */
  ESP = (EBP);
  /* 129c6ff6 pop ebp */
  EBP = (pop32());
  /* 129c6ff7 ret  */
  ESPCHK(0x129c6f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x129c7000 (116 bytes, 34 insns) */
void f_129c7000(void) {
  FTRACE(0x129c7000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7000 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7001 mov ebp, esp */
  EBP = (ESP);
  /* 129c7003 push ecx */
  push32((uint32_t)(ECX));
  /* 129c7004 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 129c700b push 9 */
  push32((uint32_t)(0x9u));
  /* 129c700d call 0x129c6820 */
  push32(0x129c7012u); f_129c6820();
  /* 129c7012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7015 call 0x129c8710 */
  push32(0x129c701au); f_129c8710();
  /* 129c701a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c701c jge 0x129c7025 */
  if ((C.sf==C.of)) goto L_129c7025;
  /* 129c701e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_129c7025:;
  /* 129c7025 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c7027 call 0x129c68c0 */
  push32(0x129c702cu); f_129c68c0();
  /* 129c702c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c702f push 0 */
  push32((uint32_t)(0x0u));
  /* 129c7031 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c7033 mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c7038 push eax */
  push32((uint32_t)(EAX));
  /* 129c7039 call dword ptr [0x129f0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0240))), 0x129c703fu);
  /* 129c703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c7041 jne 0x129c706d */
  if (!C.zf) goto L_129c706d;
  /* 129c7043 call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129c7049u);
  /* 129c7049 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c704c jne 0x129c7066 */
  if (!C.zf) goto L_129c7066;
  /* 129c704e call 0x129cad00 */
  push32(0x129c7053u); f_129cad00();
  /* 129c7053 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 129c7059 call 0x129cacf0 */
  push32(0x129c705eu); f_129cacf0();
  /* 129c705e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 129c7064 jmp 0x129c706d */
  goto L_129c706d;
L_129c7066:;
  /* 129c7066 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_129c706d:;
  /* 129c706d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7070 mov esp, ebp */
  ESP = (EBP);
  /* 129c7072 pop ebp */
  EBP = (pop32());
  /* 129c7073 ret  */
  ESPCHK(0x129c7000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x129c7080 (10 bytes, 5 insns) */
void f_129c7080(void) {
  FTRACE(0x129c7080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7080 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7081 mov ebp, esp */
  EBP = (ESP);
  /* 129c7083 call 0x129c7000 */
  push32(0x129c7088u); f_129c7000();
  /* 129c7088 pop ebp */
  EBP = (pop32());
  /* 129c7089 ret  */
  ESPCHK(0x129c7080u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x129c7090 (10 bytes, 5 insns) */
void f_129c7090(void) {
  FTRACE(0x129c7090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7090 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7091 mov ebp, esp */
  EBP = (ESP);
  /* 129c7093 mov eax, dword ptr [0x129ecc94] */
  EAX = (r32((uint32_t)(0x129ecc94)));
  /* 129c7098 pop ebp */
  EBP = (pop32());
  /* 129c7099 ret  */
  ESPCHK(0x129c7090u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x129c70a0 (31 bytes, 11 insns) */
void f_129c70a0(void) {
  FTRACE(0x129c70a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c70a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c70a1 mov ebp, esp */
  EBP = (ESP);
  /* 129c70a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c70aa jbe 0x129c70b0 */
  if ((C.cf||C.zf)) goto L_129c70b0;
  /* 129c70ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c70ae jmp 0x129c70bd */
  goto L_129c70bd;
L_129c70b0:;
  /* 129c70b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c70b3 mov dword ptr [0x129ecc94], eax */
  w32((uint32_t)(0x129ecc94), (EAX));
  /* 129c70b8 mov eax, 1 */
  EAX = (0x1u);
L_129c70bd:;
  /* 129c70bd pop ebp */
  EBP = (pop32());
  /* 129c70be ret  */
  ESPCHK(0x129c70a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x129c70c0 (89 bytes, 20 insns) */
void f_129c70c0(void) {
  FTRACE(0x129c70c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c70c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c70c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c70c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 129c70c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c70ca mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c70cf push eax */
  push32((uint32_t)(EAX));
  /* 129c70d0 call dword ptr [0x129f0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0330))), 0x129c70d6u);
  /* 129c70d6 mov dword ptr [0x129efe28], eax */
  w32((uint32_t)(0x129efe28), (EAX));
  /* 129c70db cmp dword ptr [0x129efe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c70e2 jne 0x129c70e8 */
  if (!C.zf) goto L_129c70e8;
  /* 129c70e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c70e6 jmp 0x129c7117 */
  goto L_129c7117;
L_129c70e8:;
  /* 129c70e8 mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c70ee mov dword ptr [0x129efe1c], ecx */
  w32((uint32_t)(0x129efe1c), (ECX));
  /* 129c70f4 mov dword ptr [0x129efe20], 0 */
  w32((uint32_t)(0x129efe20), (0x0u));
  /* 129c70fe mov dword ptr [0x129efe24], 0 */
  w32((uint32_t)(0x129efe24), (0x0u));
  /* 129c7108 mov dword ptr [0x129efe08], 0x10 */
  w32((uint32_t)(0x129efe08), (0x10u));
  /* 129c7112 mov eax, 1 */
  EAX = (0x1u);
L_129c7117:;
  /* 129c7117 pop ebp */
  EBP = (pop32());
  /* 129c7118 ret  */
  ESPCHK(0x129c70c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x129c7120 (85 bytes, 29 insns) */
void f_129c7120(void) {
  FTRACE(0x129c7120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7120 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7121 mov ebp, esp */
  EBP = (ESP);
  /* 129c7123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7126 mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c712b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c712e mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c7134 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c7139 mov edx, dword ptr [0x129efe28] */
  EDX = (r32((uint32_t)(0x129efe28)));
  /* 129c713f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129c7142:;
  /* 129c7142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7145 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7148 jae 0x129c716f */
  if (!C.cf) goto L_129c716f;
  /* 129c714a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c714d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7150 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c7156 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c715d jae 0x129c7164 */
  if (!C.cf) goto L_129c7164;
  /* 129c715f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7162 jmp 0x129c7171 */
  goto L_129c7171;
L_129c7164:;
  /* 129c7164 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7167 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c716a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c716d jmp 0x129c7142 */
  goto L_129c7142;
L_129c716f:;
  /* 129c716f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c7171:;
  /* 129c7171 mov esp, ebp */
  ESP = (EBP);
  /* 129c7173 pop ebp */
  EBP = (pop32());
  /* 129c7174 ret  */
  ESPCHK(0x129c7120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x129c7180 (95 bytes, 33 insns) */
void f_129c7180(void) {
  FTRACE(0x129c7180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7180 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7181 mov ebp, esp */
  EBP = (ESP);
  /* 129c7183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c718c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c718f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c7192 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7195 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 129c7198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c719b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c71a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c71a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c71a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c71a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c71ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c71ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c71af jne 0x129c71d1 */
  if (!C.zf) goto L_129c71d1;
  /* 129c71b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c71b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 129c71b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c71b9 jne 0x129c71d1 */
  if (!C.zf) goto L_129c71d1;
  /* 129c71bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c71be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c71c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c71c6 je 0x129c71d1 */
  if (C.zf) goto L_129c71d1;
  /* 129c71c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 129c71cf jmp 0x129c71d8 */
  goto L_129c71d8;
L_129c71d1:;
  /* 129c71d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_129c71d8:;
  /* 129c71d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c71db mov esp, ebp */
  ESP = (EBP);
  /* 129c71dd pop ebp */
  EBP = (pop32());
  /* 129c71de ret  */
  ESPCHK(0x129c7180u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x129c71e0 (1485 bytes, 453 insns) */
void f_129c71e0(void) {
  FTRACE(0x129c71e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c71e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c71e1 mov ebp, esp */
  EBP = (ESP);
  /* 129c71e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c71e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c71e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c71ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 129c71ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c71f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c71f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c71f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c71fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c71fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 129c7201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c7204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7207 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c720d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7210 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 129c7217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c721a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c721d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7220 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c7223 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c7228 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c722b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 129c722e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7231 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7234 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 129c7237 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c723a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c723c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129c723f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7242 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 129c7245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c7248 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c724b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129c724e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7250 jne 0x129c7378 */
  if (!C.zf) goto L_129c7378;
  /* 129c7256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7259 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129c725c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c725f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 129c7262 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7266 jbe 0x129c726f */
  if ((C.cf||C.zf)) goto L_129c726f;
  /* 129c7268 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_129c726f:;
  /* 129c726f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7275 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7278 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c727b jne 0x129c7351 */
  if (!C.zf) goto L_129c7351;
  /* 129c7281 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7285 jae 0x129c72e6 */
  if (!C.cf) goto L_129c72e6;
  /* 129c7287 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c728c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c728f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c7291 not eax */
  EAX = (~(EAX));
  /* 129c7293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7296 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7299 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129c729d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c729f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c72a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c72a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129c72a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c72ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c72af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129c72b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c72b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c72b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c72bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129c72be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c72c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c72c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c72c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c72ca jne 0x129c72e4 */
  if (!C.zf) goto L_129c72e4;
  /* 129c72cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c72d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c72d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c72d6 not eax */
  EAX = (~(EAX));
  /* 129c72d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c72db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c72dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c72df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c72e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129c72e4:;
  /* 129c72e4 jmp 0x129c7351 */
  goto L_129c7351;
L_129c72e6:;
  /* 129c72e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c72e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c72ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c72f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c72f3 not edx */
  EDX = (~(EDX));
  /* 129c72f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c72f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c72fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129c7302 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7307 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c730a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 129c7311 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7314 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7317 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c731a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c731d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7323 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 129c7326 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7329 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c732c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c7330 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7332 jne 0x129c7351 */
  if (!C.zf) goto L_129c7351;
  /* 129c7334 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c7337 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c733a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c733f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7341 not edx */
  EDX = (~(EDX));
  /* 129c7343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7349 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c734b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c734e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_129c7351:;
  /* 129c7351 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7354 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c7357 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c735a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c735d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129c7360 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c7366 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c736c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129c736f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7372 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7375 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_129c7378:;
  /* 129c7378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c737b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129c737e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129c7384 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7388 jbe 0x129c7391 */
  if ((C.cf||C.zf)) goto L_129c7391;
  /* 129c738a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_129c7391:;
  /* 129c7391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c7394 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129c7397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7399 jne 0x129c74f5 */
  if (!C.zf) goto L_129c74f5;
  /* 129c739f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c73a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c73a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 129c73a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c73ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129c73ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c73b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 129c73b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c73b8 jbe 0x129c73c1 */
  if ((C.cf||C.zf)) goto L_129c73c1;
  /* 129c73ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_129c73c1:;
  /* 129c73c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c73c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c73c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 129c73ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c73cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129c73d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c73d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129c73d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c73da jbe 0x129c73e3 */
  if ((C.cf||C.zf)) goto L_129c73e3;
  /* 129c73dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_129c73e3:;
  /* 129c73e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c73e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c73e9 je 0x129c74ef */
  if (C.zf) goto L_129c74ef;
  /* 129c73ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c73f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c73f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c73f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c73fb jne 0x129c74d1 */
  if (!C.zf) goto L_129c74d1;
  /* 129c7401 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7405 jae 0x129c7466 */
  if (!C.cf) goto L_129c7466;
  /* 129c7407 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c740c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c740f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7411 not edx */
  EDX = (~(EDX));
  /* 129c7413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7416 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7419 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129c741d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7425 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129c7429 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c742c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c742f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c7432 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c7435 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7438 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c743b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 129c743e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7441 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7444 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c7448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c744a jne 0x129c7464 */
  if (!C.zf) goto L_129c7464;
  /* 129c744c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7456 not edx */
  EDX = (~(EDX));
  /* 129c7458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c745b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c745d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c745f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c7464:;
  /* 129c7464 jmp 0x129c74d1 */
  goto L_129c74d1;
L_129c7466:;
  /* 129c7466 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c746c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c7471 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c7473 not eax */
  EAX = (~(EAX));
  /* 129c7475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7478 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c747b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129c7482 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c7484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7487 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c748a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 129c7491 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7494 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7497 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129c749a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c749d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c74a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c74a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129c74a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c74a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c74ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c74b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c74b2 jne 0x129c74d1 */
  if (!C.zf) goto L_129c74d1;
  /* 129c74b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c74b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c74ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c74bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c74c1 not eax */
  EAX = (~(EAX));
  /* 129c74c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c74c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c74c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c74cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c74ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129c74d1:;
  /* 129c74d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c74d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c74d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c74da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c74dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129c74e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c74e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c74e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c74e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c74ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_129c74ef:;
  /* 129c74ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c74f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_129c74f5:;
  /* 129c74f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c74f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129c74fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c74fd jne 0x129c750b */
  if (!C.zf) goto L_129c750b;
  /* 129c74ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7502 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7505 je 0x129c761b */
  if (C.zf) goto L_129c761b;
L_129c750b:;
  /* 129c750b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c750e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7511 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 129c7514 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129c7517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c751a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c751d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c7520 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c7523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7526 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7529 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 129c752c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c752f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7532 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 129c7535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7538 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c753b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c753e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c7541 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7547 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c754a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c754d jne 0x129c761b */
  if (!C.zf) goto L_129c761b;
  /* 129c7553 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7557 jae 0x129c75b4 */
  if (!C.cf) goto L_129c75b4;
  /* 129c7559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c755c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c755f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c7563 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7566 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7569 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c756c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c756f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7572 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7575 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 129c7578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c757a jne 0x129c7592 */
  if (!C.zf) goto L_129c7592;
  /* 129c757c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7589 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c758b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c758d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7590 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c7592:;
  /* 129c7592 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c7597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c759a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c759f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c75a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129c75a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c75a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c75ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c75ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129c75b2 jmp 0x129c761b */
  goto L_129c761b;
L_129c75b4:;
  /* 129c75b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c75b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c75ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c75be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c75c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c75c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c75c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c75ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c75cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c75d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 129c75d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c75d5 jne 0x129c75f2 */
  if (!C.zf) goto L_129c75f2;
  /* 129c75d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c75da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c75dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c75e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c75e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c75e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c75ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c75ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c75ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_129c75f2:;
  /* 129c75f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c75f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c75f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c75fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c75ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7602 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7605 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129c760c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c760e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129c7614 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_129c761b:;
  /* 129c761b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c761e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7621 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129c7623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7626 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7629 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c762c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 129c762f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c7634 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c763a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c763c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c763f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7642 jne 0x129c77a9 */
  if (!C.zf) goto L_129c77a9;
  /* 129c7648 cmp dword ptr [0x129efe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c764f je 0x129c7798 */
  if (C.zf) goto L_129c7798;
  /* 129c7655 mov eax, dword ptr [0x129efe18] */
  EAX = (r32((uint32_t)(0x129efe18)));
  /* 129c765a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 129c765d mov ecx, dword ptr [0x129efe20] */
  ECX = (r32((uint32_t)(0x129efe20)));
  /* 129c7663 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c7666 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7668 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129c766b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 129c7670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129c7675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7678 push eax */
  push32((uint32_t)(EAX));
  /* 129c7679 call dword ptr [0x129f0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0314))), 0x129c767fu);
  /* 129c767f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7684 mov ecx, dword ptr [0x129efe18] */
  ECX = (r32((uint32_t)(0x129efe18)));
  /* 129c768a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c768c mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c7691 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c7694 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c7696 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c769c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129c769f mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c76a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c76a7 mov edx, dword ptr [0x129efe18] */
  EDX = (r32((uint32_t)(0x129efe18)));
  /* 129c76ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 129c76b8 mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c76bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c76c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 129c76c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c76c6 mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c76cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c76ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 129c76d1 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c76d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c76da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 129c76de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c76e0 jne 0x129c76f6 */
  if (!C.zf) goto L_129c76f6;
  /* 129c76e2 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c76e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c76eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 129c76ed mov ecx, dword ptr [0x129efe20] */
  ECX = (r32((uint32_t)(0x129efe20)));
  /* 129c76f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_129c76f6:;
  /* 129c76f6 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c76fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7700 jne 0x129c7798 */
  if (!C.zf) goto L_129c7798;
  /* 129c7706 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129c770b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c770d mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c7712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c7715 push ecx */
  push32((uint32_t)(ECX));
  /* 129c7716 call dword ptr [0x129f0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0314))), 0x129c771cu);
  /* 129c771c mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c7722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c7725 push eax */
  push32((uint32_t)(EAX));
  /* 129c7726 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c7728 mov ecx, dword ptr [0x129efe2c] */
  ECX = (r32((uint32_t)(0x129efe2c)));
  /* 129c772e push ecx */
  push32((uint32_t)(ECX));
  /* 129c772f call dword ptr [0x129f0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0310))), 0x129c7735u);
  /* 129c7735 mov edx, dword ptr [0x129efe24] */
  EDX = (r32((uint32_t)(0x129efe24)));
  /* 129c773b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c773e mov eax, dword ptr [0x129efe28] */
  EAX = (r32((uint32_t)(0x129efe28)));
  /* 129c7743 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7745 mov ecx, dword ptr [0x129efe20] */
  ECX = (r32((uint32_t)(0x129efe20)));
  /* 129c774b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c774e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7750 push eax */
  push32((uint32_t)(EAX));
  /* 129c7751 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c7757 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c775a push edx */
  push32((uint32_t)(EDX));
  /* 129c775b mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c7760 push eax */
  push32((uint32_t)(EAX));
  /* 129c7761 call 0x129cad10 */
  push32(0x129c7766u); f_129cad10();
  /* 129c7766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7769 mov ecx, dword ptr [0x129efe24] */
  ECX = (r32((uint32_t)(0x129efe24)));
  /* 129c776f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7772 mov dword ptr [0x129efe24], ecx */
  w32((uint32_t)(0x129efe24), (ECX));
  /* 129c7778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c777b cmp edx, dword ptr [0x129efe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129efe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7781 jbe 0x129c778c */
  if ((C.cf||C.zf)) goto L_129c778c;
  /* 129c7783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7786 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7789 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129c778c:;
  /* 129c778c mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c7792 mov dword ptr [0x129efe1c], ecx */
  w32((uint32_t)(0x129efe1c), (ECX));
L_129c7798:;
  /* 129c7798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c779b mov dword ptr [0x129efe20], edx */
  w32((uint32_t)(0x129efe20), (EDX));
  /* 129c77a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c77a4 mov dword ptr [0x129efe18], eax */
  w32((uint32_t)(0x129efe18), (EAX));
L_129c77a9:;
  /* 129c77a9 mov esp, ebp */
  ESP = (EBP);
  /* 129c77ab pop ebp */
  EBP = (pop32());
  /* 129c77ac ret  */
  ESPCHK(0x129c71e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x129c77b0 (1334 bytes, 427 insns) */
void f_129c77b0(void) {
  FTRACE(0x129c77b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c77b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c77b1 mov ebp, esp */
  EBP = (ESP);
  /* 129c77b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c77b6 push esi */
  push32((uint32_t)(ESI));
  /* 129c77b7 mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c77bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c77bf mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c77c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c77c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129c77ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c77cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c77d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129c77d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129c77d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c77d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129c77dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c77df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129c77e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c77e6 jge 0x129c77fc */
  if ((C.sf==C.of)) goto L_129c77fc;
  /* 129c77e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c77eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c77ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c77f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 129c77f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 129c77fa jmp 0x129c7811 */
  goto L_129c7811;
L_129c77fc:;
  /* 129c77fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129c7803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7806 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7809 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c780c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c780e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_129c7811:;
  /* 129c7811 mov ecx, dword ptr [0x129efe1c] */
  ECX = (r32((uint32_t)(0x129efe1c)));
  /* 129c7817 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_129c781a:;
  /* 129c781a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c781d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7820 jae 0x129c7846 */
  if (!C.cf) goto L_129c7846;
  /* 129c7822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c7828 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 129c782a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c782d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c7830 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 129c7833 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c7835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7837 je 0x129c783b */
  if (C.zf) goto L_129c783b;
  /* 129c7839 jmp 0x129c7846 */
  goto L_129c7846;
L_129c783b:;
  /* 129c783b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c783e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7841 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129c7844 jmp 0x129c781a */
  goto L_129c781a;
L_129c7846:;
  /* 129c7846 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7849 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c784c jne 0x129c792d */
  if (!C.zf) goto L_129c792d;
  /* 129c7852 mov eax, dword ptr [0x129efe28] */
  EAX = (r32((uint32_t)(0x129efe28)));
  /* 129c7857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_129c785a:;
  /* 129c785a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c785d cmp ecx, dword ptr [0x129efe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7863 jae 0x129c7889 */
  if (!C.cf) goto L_129c7889;
  /* 129c7865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c786b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 129c786d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c7873 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 129c7876 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c787a je 0x129c787e */
  if (C.zf) goto L_129c787e;
  /* 129c787c jmp 0x129c7889 */
  goto L_129c7889;
L_129c787e:;
  /* 129c787e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7881 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c7887 jmp 0x129c785a */
  goto L_129c785a;
L_129c7889:;
  /* 129c7889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c788c cmp ecx, dword ptr [0x129efe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7892 jne 0x129c792d */
  if (!C.zf) goto L_129c792d;
L_129c7898:;
  /* 129c7898 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c789b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c789e jae 0x129c78b6 */
  if (!C.cf) goto L_129c78b6;
  /* 129c78a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c78a7 je 0x129c78ab */
  if (C.zf) goto L_129c78ab;
  /* 129c78a9 jmp 0x129c78b6 */
  goto L_129c78b6;
L_129c78ab:;
  /* 129c78ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c78b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129c78b4 jmp 0x129c7898 */
  goto L_129c7898;
L_129c78b6:;
  /* 129c78b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c78bc jne 0x129c7907 */
  if (!C.zf) goto L_129c7907;
  /* 129c78be mov eax, dword ptr [0x129efe28] */
  EAX = (r32((uint32_t)(0x129efe28)));
  /* 129c78c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_129c78c6:;
  /* 129c78c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78c9 cmp ecx, dword ptr [0x129efe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c78cf jae 0x129c78e7 */
  if (!C.cf) goto L_129c78e7;
  /* 129c78d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c78d8 je 0x129c78dc */
  if (C.zf) goto L_129c78dc;
  /* 129c78da jmp 0x129c78e7 */
  goto L_129c78e7;
L_129c78dc:;
  /* 129c78dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c78e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c78e5 jmp 0x129c78c6 */
  goto L_129c78c6;
L_129c78e7:;
  /* 129c78e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c78ea cmp ecx, dword ptr [0x129efe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c78f0 jne 0x129c7907 */
  if (!C.zf) goto L_129c7907;
  /* 129c78f2 call 0x129c7cf0 */
  push32(0x129c78f7u); f_129c7cf0();
  /* 129c78f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c78fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c78fe jne 0x129c7907 */
  if (!C.zf) goto L_129c7907;
  /* 129c7900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7902 jmp 0x129c7ce1 */
  goto L_129c7ce1;
L_129c7907:;
  /* 129c7907 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c790a push edx */
  push32((uint32_t)(EDX));
  /* 129c790b call 0x129c7e00 */
  push32(0x129c7910u); f_129c7e00();
  /* 129c7910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7916 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129c7919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129c791b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c791e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c7921 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7924 jne 0x129c792d */
  if (!C.zf) goto L_129c792d;
  /* 129c7926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7928 jmp 0x129c7ce1 */
  goto L_129c7ce1;
L_129c792d:;
  /* 129c792d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7930 mov dword ptr [0x129efe1c], edx */
  w32((uint32_t)(0x129efe1c), (EDX));
  /* 129c7936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7939 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c793c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 129c793f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c7944 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 129c7947 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c794b je 0x129c7970 */
  if (C.zf) goto L_129c7970;
  /* 129c794d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7950 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c7956 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 129c795a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c795d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7960 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 129c7963 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 129c796a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 129c796c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c796e jne 0x129c79a5 */
  if (!C.zf) goto L_129c79a5;
L_129c7970:;
  /* 129c7970 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_129c7977:;
  /* 129c7977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c797a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c797d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c7980 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 129c7984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7987 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c798a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 129c798d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 129c7994 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 129c7996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c7998 jne 0x129c79a5 */
  if (!C.zf) goto L_129c79a5;
  /* 129c799a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c799d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c79a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 129c79a3 jmp 0x129c7977 */
  goto L_129c7977;
L_129c79a5:;
  /* 129c79a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c79a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c79ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c79b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 129c79b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c79bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129c79c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c79c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c79c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c79cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 129c79cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c79d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c79d6 jne 0x129c79f2 */
  if (!C.zf) goto L_129c79f2;
  /* 129c79d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 129c79df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c79e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c79e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 129c79e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 129c79ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_129c79f2:;
  /* 129c79f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c79f6 jl 0x129c7a0b */
  if ((C.sf!=C.of)) goto L_129c7a0b;
  /* 129c79f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c79fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129c79fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129c7a00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7a03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7a06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129c7a09 jmp 0x129c79f2 */
  goto L_129c79f2;
L_129c7a0b:;
  /* 129c7a0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7a11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 129c7a15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129c7a18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7a1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c7a1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7a20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c7a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7a26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129c7a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7a2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129c7a2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7a33 jle 0x129c7a3c */
  if ((C.zf||C.sf!=C.of)) goto L_129c7a3c;
  /* 129c7a35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_129c7a3c:;
  /* 129c7a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7a3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7a42 je 0x129c7c60 */
  if (C.zf) goto L_129c7c60;
  /* 129c7a48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7a4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7a51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7a54 jne 0x129c7b2a */
  if (!C.zf) goto L_129c7b2a;
  /* 129c7a5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7a5e jge 0x129c7abf */
  if ((C.sf==C.of)) goto L_129c7abf;
  /* 129c7a60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c7a65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7a68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c7a6a not eax */
  EAX = (~(EAX));
  /* 129c7a6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7a6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7a72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129c7a76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c7a78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7a7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7a7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129c7a82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7a85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7a88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129c7a8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c7a8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7a91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7a94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129c7a97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7a9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7a9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c7aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c7aa3 jne 0x129c7abd */
  if (!C.zf) goto L_129c7abd;
  /* 129c7aa5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c7aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7aad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c7aaf not eax */
  EAX = (~(EAX));
  /* 129c7ab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c7ab6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c7ab8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7abb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129c7abd:;
  /* 129c7abd jmp 0x129c7b2a */
  goto L_129c7b2a;
L_129c7abf:;
  /* 129c7abf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7ac2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7ac5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7aca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7acc not edx */
  EDX = (~(EDX));
  /* 129c7ace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7ad1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7ad4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129c7adb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7add mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7ae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7ae3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 129c7aea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7aed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7af0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c7af3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c7af6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7af9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7afc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 129c7aff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7b02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7b05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c7b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7b0b jne 0x129c7b2a */
  if (!C.zf) goto L_129c7b2a;
  /* 129c7b0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7b10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7b13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7b18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7b1a not edx */
  EDX = (~(EDX));
  /* 129c7b1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7b1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7b22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c7b24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7b27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_129c7b2a:;
  /* 129c7b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c7b30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c7b36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129c7b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c7b3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c7b45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129c7b48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7b4c je 0x129c7c60 */
  if (C.zf) goto L_129c7c60;
  /* 129c7b52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7b58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 129c7b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c7b5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c7b64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7b67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129c7b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c7b70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c7b73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c7b76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129c7b7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129c7b88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7b8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c7b91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7b94 jne 0x129c7c60 */
  if (!C.zf) goto L_129c7c60;
  /* 129c7b9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7b9e jge 0x129c7bfa */
  if ((C.sf==C.of)) goto L_129c7bfa;
  /* 129c7ba0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7ba3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7ba6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c7baa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7bad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7bb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129c7bb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c7bb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7bb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7bbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129c7bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7bc0 jne 0x129c7bd8 */
  if (!C.zf) goto L_129c7bd8;
  /* 129c7bc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c7bc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7bca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c7bcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7bcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c7bd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c7bd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129c7bd8:;
  /* 129c7bd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7be0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7be2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7be5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7be8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129c7bec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7bee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7bf1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7bf4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129c7bf8 jmp 0x129c7c60 */
  goto L_129c7c60;
L_129c7bfa:;
  /* 129c7bfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7bfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c7c04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7c07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129c7c0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c7c0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7c12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129c7c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7c1a jne 0x129c7c37 */
  if (!C.zf) goto L_129c7c37;
  /* 129c7c1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7c1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7c22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c7c27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c7c29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7c2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c7c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c7c31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7c34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129c7c37:;
  /* 129c7c37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7c3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7c42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7c44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7c47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7c4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129c7c51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7c53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7c56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7c59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_129c7c60:;
  /* 129c7c60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7c64 je 0x129c7c7a */
  if (C.zf) goto L_129c7c7a;
  /* 129c7c66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129c7c6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7c71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7c77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_129c7c7a:;
  /* 129c7c7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7c7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129c7c83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7c86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7c8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c7c8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7c97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7c9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 129c7c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c7ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7ca5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c7ca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7cad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129c7caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c7cb1 jne 0x129c7cd3 */
  if (!C.zf) goto L_129c7cd3;
  /* 129c7cb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7cb6 cmp eax, dword ptr [0x129efe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129efe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7cbc jne 0x129c7cd3 */
  if (!C.zf) goto L_129c7cd3;
  /* 129c7cbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7cc1 cmp ecx, dword ptr [0x129efe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7cc7 jne 0x129c7cd3 */
  if (!C.zf) goto L_129c7cd3;
  /* 129c7cc9 mov dword ptr [0x129efe20], 0 */
  w32((uint32_t)(0x129efe20), (0x0u));
L_129c7cd3:;
  /* 129c7cd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129c7cd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c7cd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129c7cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7cde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_129c7ce1:;
  /* 129c7ce1 pop esi */
  ESI = (pop32());
  /* 129c7ce2 mov esp, ebp */
  ESP = (EBP);
  /* 129c7ce4 pop ebp */
  EBP = (pop32());
  /* 129c7ce5 ret  */
  ESPCHK(0x129c77b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x129c7cf0 (271 bytes, 78 insns) */
void f_129c7cf0(void) {
  FTRACE(0x129c7cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7cf1 mov ebp, esp */
  EBP = (ESP);
  /* 129c7cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c7cf4 mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c7cf9 cmp eax, dword ptr [0x129efe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129efe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7cff jne 0x129c7d4b */
  if (!C.zf) goto L_129c7d4b;
  /* 129c7d01 mov ecx, dword ptr [0x129efe08] */
  ECX = (r32((uint32_t)(0x129efe08)));
  /* 129c7d07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7d0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c7d0d push ecx */
  push32((uint32_t)(ECX));
  /* 129c7d0e mov edx, dword ptr [0x129efe28] */
  EDX = (r32((uint32_t)(0x129efe28)));
  /* 129c7d14 push edx */
  push32((uint32_t)(EDX));
  /* 129c7d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c7d17 mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c7d1c push eax */
  push32((uint32_t)(EAX));
  /* 129c7d1d call dword ptr [0x129f0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0334))), 0x129c7d23u);
  /* 129c7d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c7d26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7d2a jne 0x129c7d33 */
  if (!C.zf) goto L_129c7d33;
  /* 129c7d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7d2e jmp 0x129c7dfb */
  goto L_129c7dfb;
L_129c7d33:;
  /* 129c7d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7d36 mov dword ptr [0x129efe28], ecx */
  w32((uint32_t)(0x129efe28), (ECX));
  /* 129c7d3c mov edx, dword ptr [0x129efe08] */
  EDX = (r32((uint32_t)(0x129efe08)));
  /* 129c7d42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7d45 mov dword ptr [0x129efe08], edx */
  w32((uint32_t)(0x129efe08), (EDX));
L_129c7d4b:;
  /* 129c7d4b mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c7d50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c7d53 mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c7d59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7d5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c7d5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 129c7d63 push 8 */
  push32((uint32_t)(0x8u));
  /* 129c7d65 mov edx, dword ptr [0x129efe2c] */
  EDX = (r32((uint32_t)(0x129efe2c)));
  /* 129c7d6b push edx */
  push32((uint32_t)(EDX));
  /* 129c7d6c call dword ptr [0x129f0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0330))), 0x129c7d72u);
  /* 129c7d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7d75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 129c7d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7d7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7d7f jne 0x129c7d85 */
  if (!C.zf) goto L_129c7d85;
  /* 129c7d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7d83 jmp 0x129c7dfb */
  goto L_129c7dfb;
L_129c7d85:;
  /* 129c7d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 129c7d87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 129c7d8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 129c7d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c7d93 call dword ptr [0x129f0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0338))), 0x129c7d99u);
  /* 129c7d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7d9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 129c7d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7da2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7da6 jne 0x129c7dc2 */
  if (!C.zf) goto L_129c7dc2;
  /* 129c7da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7dab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c7dae push ecx */
  push32((uint32_t)(ECX));
  /* 129c7daf push 0 */
  push32((uint32_t)(0x0u));
  /* 129c7db1 mov edx, dword ptr [0x129efe2c] */
  EDX = (r32((uint32_t)(0x129efe2c)));
  /* 129c7db7 push edx */
  push32((uint32_t)(EDX));
  /* 129c7db8 call dword ptr [0x129f0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0310))), 0x129c7dbeu);
  /* 129c7dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c7dc0 jmp 0x129c7dfb */
  goto L_129c7dfb;
L_129c7dc2:;
  /* 129c7dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7dc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129c7dcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7dce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129c7dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7dd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 129c7ddf mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c7de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7de7 mov dword ptr [0x129efe24], eax */
  w32((uint32_t)(0x129efe24), (EAX));
  /* 129c7dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7def mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129c7df2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 129c7df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c7dfb:;
  /* 129c7dfb mov esp, ebp */
  ESP = (EBP);
  /* 129c7dfd pop ebp */
  EBP = (pop32());
  /* 129c7dfe ret  */
  ESPCHK(0x129c7cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x129c7e00 (494 bytes, 149 insns) */
void f_129c7e00(void) {
  FTRACE(0x129c7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7e01 mov ebp, esp */
  EBP = (ESP);
  /* 129c7e03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7e09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c7e0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129c7e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c7e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c7e18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_129c7e1f:;
  /* 129c7e1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7e23 jl 0x129c7e38 */
  if ((C.sf!=C.of)) goto L_129c7e38;
  /* 129c7e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c7e28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129c7e2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c7e2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7e30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7e33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129c7e36 jmp 0x129c7e1f */
  goto L_129c7e1f;
L_129c7e38:;
  /* 129c7e38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7e3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c7e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7e44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 129c7e4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c7e4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129c7e55 jmp 0x129c7e60 */
  goto L_129c7e60;
L_129c7e57:;
  /* 129c7e57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_129c7e60:;
  /* 129c7e60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7e64 jge 0x129c7e86 */
  if ((C.sf==C.of)) goto L_129c7e86;
  /* 129c7e66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c7e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c7e6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 129c7e6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c7e72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7e75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7e78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129c7e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7e7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7e81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 129c7e84 jmp 0x129c7e57 */
  goto L_129c7e57;
L_129c7e86:;
  /* 129c7e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7e89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 129c7e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7e8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c7e92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7e94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129c7e97 push 4 */
  push32((uint32_t)(0x4u));
  /* 129c7e99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 129c7e9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129c7ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7ea6 push edx */
  push32((uint32_t)(EDX));
  /* 129c7ea7 call dword ptr [0x129f0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0338))), 0x129c7eadu);
  /* 129c7ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c7eaf jne 0x129c7eb9 */
  if (!C.zf) goto L_129c7eb9;
  /* 129c7eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c7eb4 jmp 0x129c7fea */
  goto L_129c7fea;
L_129c7eb9:;
  /* 129c7eb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7ebc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7ec1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129c7ec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7ec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c7eca jmp 0x129c7ed8 */
  goto L_129c7ed8;
L_129c7ecc:;
  /* 129c7ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7ecf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7ed5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c7ed8:;
  /* 129c7ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7edb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c7ede ja 0x129c7f3d */
  if ((!C.cf&&!C.zf)) goto L_129c7f3d;
  /* 129c7ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7ee3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 129c7eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7eed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 129c7ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c7efa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7efd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c7f00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 129c7f09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7f12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c7f18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7f21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129c7f27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7f2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129c7f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c7f35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 129c7f3b jmp 0x129c7ecc */
  goto L_129c7ecc;
L_129c7f3d:;
  /* 129c7f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c7f40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7f46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129c7f49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c7f4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7f4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7f52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129c7f55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c7f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c7f5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7f64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129c7f67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c7f6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7f70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 129c7f73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7f76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c7f79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c7f7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c7f7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c7f82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129c7f85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7f88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7f8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 129c7f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7f96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7f99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 129c7fa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7fa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 129c7fab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7fae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 129c7fb1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c7fb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c7fb7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 129c7fba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c7fbc jne 0x129c7fcd */
  if (!C.zf) goto L_129c7fcd;
  /* 129c7fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7fc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c7fc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129c7fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7fca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129c7fcd:;
  /* 129c7fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c7fd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c7fd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c7fd7 not edx */
  EDX = (~(EDX));
  /* 129c7fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7fdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c7fdf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c7fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c7fe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129c7fe7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_129c7fea:;
  /* 129c7fea mov esp, ebp */
  ESP = (EBP);
  /* 129c7fec pop ebp */
  EBP = (pop32());
  /* 129c7fed ret  */
  ESPCHK(0x129c7e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x129c7ff0 (1515 bytes, 489 insns) */
void f_129c7ff0(void) {
  FTRACE(0x129c7ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c7ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c7ff1 mov ebp, esp */
  EBP = (ESP);
  /* 129c7ff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c7ff6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c7ff9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c7ffc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 129c7ffe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129c8001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8004 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129c8007 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 129c800a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c800d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c8010 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c8016 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c8019 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 129c801c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c801f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c8028 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c802b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 129c8032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129c8035 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c8038 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c803b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129c803e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c8043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8046 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129c8049 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c804c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c804f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 129c8052 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c8057 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129c805a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c805d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8060 jle 0x129c8316 */
  if ((C.zf||C.sf!=C.of)) goto L_129c8316;
  /* 129c8066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129c806c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c806e jne 0x129c807b */
  if (!C.zf) goto L_129c807b;
  /* 129c8070 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c8073 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8076 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8079 jle 0x129c8082 */
  if ((C.zf||C.sf!=C.of)) goto L_129c8082;
L_129c807b:;
  /* 129c807b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c807d jmp 0x129c85d7 */
  goto L_129c85d7;
L_129c8082:;
  /* 129c8082 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8085 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129c8088 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c808b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129c808e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8092 jbe 0x129c809b */
  if ((C.cf||C.zf)) goto L_129c809b;
  /* 129c8094 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_129c809b:;
  /* 129c809b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c809e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c80a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c80a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c80a7 jne 0x129c817d */
  if (!C.zf) goto L_129c817d;
  /* 129c80ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c80b1 jae 0x129c8112 */
  if (!C.cf) goto L_129c8112;
  /* 129c80b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c80b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c80bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c80bd not edx */
  EDX = (~(EDX));
  /* 129c80bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c80c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c80c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129c80c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c80cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c80ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c80d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129c80d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c80d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c80db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c80de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c80e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c80e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c80e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 129c80ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c80ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c80f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c80f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c80f6 jne 0x129c8110 */
  if (!C.zf) goto L_129c8110;
  /* 129c80f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c80fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c8100 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8102 not edx */
  EDX = (~(EDX));
  /* 129c8104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c8109 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c810b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c810e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c8110:;
  /* 129c8110 jmp 0x129c817d */
  goto L_129c817d;
L_129c8112:;
  /* 129c8112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c8115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c811d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c811f not eax */
  EAX = (~(EAX));
  /* 129c8121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8127 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129c812e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8133 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8136 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 129c813d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8140 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8143 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129c8146 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c8149 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c814c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c814f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129c8152 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8155 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8158 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c815c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c815e jne 0x129c817d */
  if (!C.zf) goto L_129c817d;
  /* 129c8160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c8163 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8166 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c816b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c816d not eax */
  EAX = (~(EAX));
  /* 129c816f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8172 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8175 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c8177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c817a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129c817d:;
  /* 129c817d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8180 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c8183 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c8189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129c818c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c818f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c8192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c8198 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 129c819b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c819e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c81a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c81a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c81a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c81ab jle 0x129c82f7 */
  if ((C.zf||C.sf!=C.of)) goto L_129c82f7;
  /* 129c81b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c81b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c81b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129c81ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c81bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129c81c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c81c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129c81c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c81ca jbe 0x129c81d3 */
  if ((C.cf||C.zf)) goto L_129c81d3;
  /* 129c81cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_129c81d3:;
  /* 129c81d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c81d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c81d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 129c81dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129c81df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c81e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c81e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c81e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c81eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c81ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c81f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 129c81f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c81f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c81fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 129c81fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8200 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8206 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c8209 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c820c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c820f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8212 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8215 jne 0x129c82e3 */
  if (!C.zf) goto L_129c82e3;
  /* 129c821b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c821f jae 0x129c827c */
  if (!C.cf) goto L_129c827c;
  /* 129c8221 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8224 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8227 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c822b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c822e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8231 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c8234 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c8237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c823a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c823d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 129c8240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c8242 jne 0x129c825a */
  if (!C.zf) goto L_129c825a;
  /* 129c8244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c8249 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c824c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c824e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c8253 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8258 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c825a:;
  /* 129c825a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c825f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c8262 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c8264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8267 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c826a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129c826e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8276 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129c827a jmp 0x129c82e3 */
  goto L_129c82e3;
L_129c827c:;
  /* 129c827c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c827f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8282 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c8286 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8289 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c828c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c828f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c8292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8295 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8298 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 129c829b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c829d jne 0x129c82ba */
  if (!C.zf) goto L_129c82ba;
  /* 129c829f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c82a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c82a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c82aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c82ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c82af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c82b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c82b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c82b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_129c82ba:;
  /* 129c82ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c82bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c82c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c82c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c82c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c82ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c82cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129c82d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c82d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c82d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c82dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_129c82e3:;
  /* 129c82e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c82e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c82e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129c82eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c82ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c82f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c82f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_129c82f7:;
  /* 129c82f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c82fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c82fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8300 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c8302 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c8305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8308 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c830b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c830e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 129c8311 jmp 0x129c85d2 */
  goto L_129c85d2;
L_129c8316:;
  /* 129c8316 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c8319 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c831c jge 0x129c85d2 */
  if ((C.sf==C.of)) goto L_129c85d2;
  /* 129c8322 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c8325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8328 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c832b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129c832d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129c8330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8333 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8336 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8339 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 129c833c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c833f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129c8345 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c8348 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c834b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129c834e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c8351 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129c8354 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8357 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129c835a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c835e jbe 0x129c8367 */
  if ((C.cf||C.zf)) goto L_129c8367;
  /* 129c8360 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_129c8367:;
  /* 129c8367 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c836a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129c836d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c836f jne 0x129c84b0 */
  if (!C.zf) goto L_129c84b0;
  /* 129c8375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8378 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129c837b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c837e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129c8381 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8385 jbe 0x129c838e */
  if ((C.cf||C.zf)) goto L_129c838e;
  /* 129c8387 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_129c838e:;
  /* 129c838e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8391 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8394 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8397 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c839a jne 0x129c8470 */
  if (!C.zf) goto L_129c8470;
  /* 129c83a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c83a4 jae 0x129c8405 */
  if (!C.cf) goto L_129c8405;
  /* 129c83a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c83ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c83ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c83b0 not edx */
  EDX = (~(EDX));
  /* 129c83b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c83b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c83b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129c83bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c83be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c83c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c83c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129c83c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c83cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c83ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c83d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c83d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c83d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c83da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 129c83dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c83e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c83e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c83e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c83e9 jne 0x129c8403 */
  if (!C.zf) goto L_129c8403;
  /* 129c83eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c83f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c83f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c83f5 not edx */
  EDX = (~(EDX));
  /* 129c83f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c83fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c83fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c83fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8401 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c8403:;
  /* 129c8403 jmp 0x129c8470 */
  goto L_129c8470;
L_129c8405:;
  /* 129c8405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c8408 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c840b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c8410 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c8412 not eax */
  EAX = (~(EAX));
  /* 129c8414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c841a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129c8421 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8426 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8429 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 129c8430 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8433 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8436 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129c8439 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c843c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c843f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8442 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129c8445 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8448 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c844b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129c844f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c8451 jne 0x129c8470 */
  if (!C.zf) goto L_129c8470;
  /* 129c8453 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c8456 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8459 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c845e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c8460 not eax */
  EAX = (~(EAX));
  /* 129c8462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8468 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c846a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c846d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129c8470:;
  /* 129c8470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8473 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c8476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8479 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c847c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129c847f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8482 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c8485 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8488 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c848b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 129c848e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c8491 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8494 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129c8497 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c849a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129c849d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c84a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129c84a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c84a7 jbe 0x129c84b0 */
  if ((C.cf||C.zf)) goto L_129c84b0;
  /* 129c84a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_129c84b0:;
  /* 129c84b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c84b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c84b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 129c84b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129c84bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c84c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c84c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129c84c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c84ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c84d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c84d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129c84da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c84e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129c84e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c84ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c84ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c84f2 jne 0x129c85be */
  if (!C.zf) goto L_129c85be;
  /* 129c84f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c84fc jae 0x129c8558 */
  if (!C.cf) goto L_129c8558;
  /* 129c84fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8501 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8504 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c8508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c850b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c850e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129c8511 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c8513 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8516 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8519 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129c851c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c851e jne 0x129c8536 */
  if (!C.zf) goto L_129c8536;
  /* 129c8520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c8525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c852a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c852d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c852f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c8531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129c8536:;
  /* 129c8536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c853b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c853e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8543 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8546 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129c854a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c854c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c854f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8552 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129c8556 jmp 0x129c85be */
  goto L_129c85be;
L_129c8558:;
  /* 129c8558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c855b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c855e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129c8562 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8565 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8568 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129c856b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c856d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c8570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8573 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129c8576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c8578 jne 0x129c8595 */
  if (!C.zf) goto L_129c8595;
  /* 129c857a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c857d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129c8585 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129c8587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c858a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c858d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129c858f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8592 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129c8595:;
  /* 129c8595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c859b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c85a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c85a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c85a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c85a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129c85af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c85b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c85b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129c85b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_129c85be:;
  /* 129c85be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c85c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c85c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129c85c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c85c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c85cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c85cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_129c85d2:;
  /* 129c85d2 mov eax, 1 */
  EAX = (0x1u);
L_129c85d7:;
  /* 129c85d7 mov esp, ebp */
  ESP = (EBP);
  /* 129c85d9 pop ebp */
  EBP = (pop32());
  /* 129c85da ret  */
  ESPCHK(0x129c7ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x129c85e0 (304 bytes, 79 insns) */
void f_129c85e0(void) {
  FTRACE(0x129c85e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c85e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c85e1 mov ebp, esp */
  EBP = (ESP);
  /* 129c85e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c85e4 cmp dword ptr [0x129efe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c85eb je 0x129c870c */
  if (C.zf) goto L_129c870c;
  /* 129c85f1 mov eax, dword ptr [0x129efe18] */
  EAX = (r32((uint32_t)(0x129efe18)));
  /* 129c85f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 129c85f9 mov ecx, dword ptr [0x129efe20] */
  ECX = (r32((uint32_t)(0x129efe20)));
  /* 129c85ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c8602 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c8607 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 129c860c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129c8611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8614 push eax */
  push32((uint32_t)(EAX));
  /* 129c8615 call dword ptr [0x129f0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0314))), 0x129c861bu);
  /* 129c861b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c8620 mov ecx, dword ptr [0x129efe18] */
  ECX = (r32((uint32_t)(0x129efe18)));
  /* 129c8626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8628 mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c862d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c8630 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8632 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c8638 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129c863b mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c8640 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c8643 mov edx, dword ptr [0x129efe18] */
  EDX = (r32((uint32_t)(0x129efe18)));
  /* 129c8649 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 129c8654 mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c8659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c865c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 129c865f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129c8662 mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c8667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c866a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 129c866d mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c8673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c8676 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 129c867a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c867c jne 0x129c8692 */
  if (!C.zf) goto L_129c8692;
  /* 129c867e mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c8684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c8687 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 129c8689 mov ecx, dword ptr [0x129efe20] */
  ECX = (r32((uint32_t)(0x129efe20)));
  /* 129c868f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_129c8692:;
  /* 129c8692 mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c8698 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c869c jne 0x129c8702 */
  if (!C.zf) goto L_129c8702;
  /* 129c869e cmp dword ptr [0x129efe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129efe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c86a5 jle 0x129c8702 */
  if ((C.zf||C.sf!=C.of)) goto L_129c8702;
  /* 129c86a7 mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c86ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c86af push ecx */
  push32((uint32_t)(ECX));
  /* 129c86b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c86b2 mov edx, dword ptr [0x129efe2c] */
  EDX = (r32((uint32_t)(0x129efe2c)));
  /* 129c86b8 push edx */
  push32((uint32_t)(EDX));
  /* 129c86b9 call dword ptr [0x129f0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0310))), 0x129c86bfu);
  /* 129c86bf mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c86c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c86c7 mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c86cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c86cf mov edx, dword ptr [0x129efe20] */
  EDX = (r32((uint32_t)(0x129efe20)));
  /* 129c86d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c86d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c86da push ecx */
  push32((uint32_t)(ECX));
  /* 129c86db mov eax, dword ptr [0x129efe20] */
  EAX = (r32((uint32_t)(0x129efe20)));
  /* 129c86e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c86e3 push eax */
  push32((uint32_t)(EAX));
  /* 129c86e4 mov ecx, dword ptr [0x129efe20] */
  ECX = (r32((uint32_t)(0x129efe20)));
  /* 129c86ea push ecx */
  push32((uint32_t)(ECX));
  /* 129c86eb call 0x129cad10 */
  push32(0x129c86f0u); f_129cad10();
  /* 129c86f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c86f3 mov edx, dword ptr [0x129efe24] */
  EDX = (r32((uint32_t)(0x129efe24)));
  /* 129c86f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c86fc mov dword ptr [0x129efe24], edx */
  w32((uint32_t)(0x129efe24), (EDX));
L_129c8702:;
  /* 129c8702 mov dword ptr [0x129efe20], 0 */
  w32((uint32_t)(0x129efe20), (0x0u));
L_129c870c:;
  /* 129c870c mov esp, ebp */
  ESP = (EBP);
  /* 129c870e pop ebp */
  EBP = (pop32());
  /* 129c870f ret  */
  ESPCHK(0x129c85e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x129c8710 (1565 bytes, 343 insns) */
void f_129c8710(void) {
  FTRACE(0x129c8710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c8710 push ebp */
  push32((uint32_t)(EBP));
  /* 129c8711 mov ebp, esp */
  EBP = (ESP);
  /* 129c8713 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8719 mov eax, dword ptr [0x129efe24] */
  EAX = (r32((uint32_t)(0x129efe24)));
  /* 129c871e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c8721 push eax */
  push32((uint32_t)(EAX));
  /* 129c8722 mov ecx, dword ptr [0x129efe28] */
  ECX = (r32((uint32_t)(0x129efe28)));
  /* 129c8728 push ecx */
  push32((uint32_t)(ECX));
  /* 129c8729 call dword ptr [0x129f02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e8))), 0x129c872fu);
  /* 129c872f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8731 je 0x129c873b */
  if (C.zf) goto L_129c873b;
  /* 129c8733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c8736 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c873b:;
  /* 129c873b mov edx, dword ptr [0x129efe28] */
  EDX = (r32((uint32_t)(0x129efe28)));
  /* 129c8741 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 129c8747 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 129c8751 jmp 0x129c8762 */
  goto L_129c8762;
L_129c8753:;
  /* 129c8753 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 129c8759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c875c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_129c8762:;
  /* 129c8762 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 129c8768 cmp ecx, dword ptr [0x129efe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c876e jge 0x129c8d27 */
  if ((C.sf==C.of)) goto L_129c8d27;
  /* 129c8774 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129c877a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c877d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 129c8783 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 129c8788 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 129c878e push ecx */
  push32((uint32_t)(ECX));
  /* 129c878f call dword ptr [0x129f02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e8))), 0x129c8795u);
  /* 129c8795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8797 je 0x129c87a3 */
  if (C.zf) goto L_129c87a3;
  /* 129c8799 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 129c879e jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c87a3:;
  /* 129c87a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129c87a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c87ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 129c87b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 129c87b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c87be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129c87c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129c87c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c87ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c87cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 129c87d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 129c87e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129c87e8 jmp 0x129c87f3 */
  goto L_129c87f3;
L_129c87ea:;
  /* 129c87ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c87ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c87f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_129c87f3:;
  /* 129c87f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c87f7 jge 0x129c8ceb */
  if ((C.sf==C.of)) goto L_129c8ceb;
  /* 129c87fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 129c8807 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 129c8811 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 129c881b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 129c8825 jmp 0x129c8836 */
  goto L_129c8836;
L_129c8827:;
  /* 129c8827 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129c882d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8830 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_129c8836:;
  /* 129c8836 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c883d jge 0x129c8852 */
  if ((C.sf==C.of)) goto L_129c8852;
  /* 129c883f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129c8845 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 129c8850 jmp 0x129c8827 */
  goto L_129c8827;
L_129c8852:;
  /* 129c8852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8856 jl 0x129c8c8d */
  if ((C.sf!=C.of)) goto L_129c8c8d;
  /* 129c885c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129c8861 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 129c8867 push ecx */
  push32((uint32_t)(ECX));
  /* 129c8868 call dword ptr [0x129f02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e8))), 0x129c886eu);
  /* 129c886e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8870 je 0x129c887c */
  if (C.zf) goto L_129c887c;
  /* 129c8872 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 129c8877 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c887c:;
  /* 129c887c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 129c8882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129c8885 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 129c888f jmp 0x129c88a0 */
  goto L_129c88a0;
L_129c8891:;
  /* 129c8891 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 129c8897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c889a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_129c88a0:;
  /* 129c88a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c88a7 jge 0x129c8a24 */
  if ((C.sf==C.of)) goto L_129c8a24;
  /* 129c88ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c88b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c88b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 129c88b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c88bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c88c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 129c88cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c88d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c88d5 jne 0x129c88e2 */
  if (!C.zf) goto L_129c88e2;
  /* 129c88d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 129c88dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c88e0 je 0x129c88ec */
  if (C.zf) goto L_129c88ec;
L_129c88e2:;
  /* 129c88e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 129c88e7 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c88ec:;
  /* 129c88ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c88f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c88f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 129c88fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 129c8900 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 129c8906 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 129c890c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129c890f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c8911 je 0x129c8949 */
  if (C.zf) goto L_129c8949;
  /* 129c8913 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 129c8919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c891c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 129c8922 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c892c jle 0x129c8938 */
  if ((C.zf||C.sf!=C.of)) goto L_129c8938;
  /* 129c892e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 129c8933 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8938:;
  /* 129c8938 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 129c893e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8941 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 129c8947 jmp 0x129c898b */
  goto L_129c898b;
L_129c8949:;
  /* 129c8949 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 129c894f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129c8952 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8955 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 129c895b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8962 jle 0x129c896e */
  if ((C.zf||C.sf!=C.of)) goto L_129c896e;
  /* 129c8964 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_129c896e:;
  /* 129c896e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129c8974 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 129c897b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c897e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129c8984 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_129c898b:;
  /* 129c898b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8992 jl 0x129c89ad */
  if ((C.sf!=C.of)) goto L_129c89ad;
  /* 129c8994 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 129c899a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 129c899d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c899f jne 0x129c89ad */
  if (!C.zf) goto L_129c89ad;
  /* 129c89a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c89ab jle 0x129c89b7 */
  if ((C.zf||C.sf!=C.of)) goto L_129c89b7;
L_129c89ad:;
  /* 129c89ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 129c89b2 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c89b7:;
  /* 129c89b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c89bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c89c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 129c89c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c89cc je 0x129c89d8 */
  if (C.zf) goto L_129c89d8;
  /* 129c89ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 129c89d3 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c89d8:;
  /* 129c89d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c89de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c89e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 129c89ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c89f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c89f6 jb 0x129c88ec */
  if (C.cf) goto L_129c88ec;
  /* 129c89fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c8a02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8a08 je 0x129c8a14 */
  if (C.zf) goto L_129c8a14;
  /* 129c8a0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 129c8a0f jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8a14:;
  /* 129c8a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c8a17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8a1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c8a1f jmp 0x129c8891 */
  goto L_129c8891;
L_129c8a24:;
  /* 129c8a24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c8a27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c8a29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8a2f je 0x129c8a3b */
  if (C.zf) goto L_129c8a3b;
  /* 129c8a31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 129c8a36 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8a3b:;
  /* 129c8a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c8a3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 129c8a44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 129c8a4b jmp 0x129c8a56 */
  goto L_129c8a56;
L_129c8a4d:;
  /* 129c8a4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8a53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129c8a56:;
  /* 129c8a56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8a5a jge 0x129c8c8d */
  if ((C.sf==C.of)) goto L_129c8c8d;
  /* 129c8a60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 129c8a6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 129c8a70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_129c8a76:;
  /* 129c8a76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c8a7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c8a7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 129c8a85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129c8a8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8a91 je 0x129c8bba */
  if (C.zf) goto L_129c8bba;
  /* 129c8a97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8a9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129c8aa0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8aa7 je 0x129c8bba */
  if (C.zf) goto L_129c8bba;
  /* 129c8aad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129c8ab3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8ab9 jb 0x129c8ace */
  if (C.cf) goto L_129c8ace;
  /* 129c8abb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 129c8ac1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8ac6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8acc jb 0x129c8ad8 */
  if (C.cf) goto L_129c8ad8;
L_129c8ace:;
  /* 129c8ace mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 129c8ad3 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8ad8:;
  /* 129c8ad8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129c8ade and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 129c8ae4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 129c8aea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 129c8af0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8af3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129c8af6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8af9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8afe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_129c8b04:;
  /* 129c8b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8b07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8b0d je 0x129c8b2e */
  if (C.zf) goto L_129c8b2e;
  /* 129c8b0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8b12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8b18 jne 0x129c8b1c */
  if (!C.zf) goto L_129c8b1c;
  /* 129c8b1a jmp 0x129c8b2e */
  goto L_129c8b2e;
L_129c8b1c:;
  /* 129c8b1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c8b21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 129c8b24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8b27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8b29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129c8b2c jmp 0x129c8b04 */
  goto L_129c8b04;
L_129c8b2e:;
  /* 129c8b2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c8b31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8b37 jne 0x129c8b43 */
  if (!C.zf) goto L_129c8b43;
  /* 129c8b39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 129c8b3e jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8b43:;
  /* 129c8b43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129c8b49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c8b4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129c8b4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8b51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 129c8b57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8b5e jle 0x129c8b6a */
  if ((C.zf||C.sf!=C.of)) goto L_129c8b6a;
  /* 129c8b60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_129c8b6a:;
  /* 129c8b6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129c8b70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8b73 je 0x129c8b7f */
  if (C.zf) goto L_129c8b7f;
  /* 129c8b75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 129c8b7a jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8b7f:;
  /* 129c8b7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129c8b85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c8b88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8b8e je 0x129c8b9a */
  if (C.zf) goto L_129c8b9a;
  /* 129c8b90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 129c8b95 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8b9a:;
  /* 129c8b9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129c8ba0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 129c8ba6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129c8bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8baf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 129c8bb5 jmp 0x129c8a76 */
  goto L_129c8a76;
L_129c8bba:;
  /* 129c8bba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8bc1 je 0x129c8c31 */
  if (C.zf) goto L_129c8c31;
  /* 129c8bc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8bc7 jge 0x129c8bfb */
  if ((C.sf==C.of)) goto L_129c8bfb;
  /* 129c8bc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c8bce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8bd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8bd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 129c8bd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8bdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 129c8be1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c8be6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8be9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8beb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 129c8bf1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8bf3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 129c8bf9 jmp 0x129c8c31 */
  goto L_129c8c31;
L_129c8bfb:;
  /* 129c8bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8bfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8c01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c8c06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8c08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 129c8c0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8c10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 129c8c16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8c19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8c1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129c8c21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129c8c23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 129c8c29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8c2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_129c8c31:;
  /* 129c8c31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 129c8c37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8c3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8c40 jne 0x129c8c54 */
  if (!C.zf) goto L_129c8c54;
  /* 129c8c42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c8c45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129c8c4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8c52 je 0x129c8c5e */
  if (C.zf) goto L_129c8c5e;
L_129c8c54:;
  /* 129c8c54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 129c8c59 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8c5e:;
  /* 129c8c5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 129c8c64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c8c67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8c6d je 0x129c8c79 */
  if (C.zf) goto L_129c8c79;
  /* 129c8c6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 129c8c74 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8c79:;
  /* 129c8c79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 129c8c7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8c82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 129c8c88 jmp 0x129c8a4d */
  goto L_129c8a4d;
L_129c8c8d:;
  /* 129c8c8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c8c90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 129c8c96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 129c8c9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8ca0 jne 0x129c8cba */
  if (!C.zf) goto L_129c8cba;
  /* 129c8ca2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c8ca5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 129c8cab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 129c8cb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8cb8 je 0x129c8cc1 */
  if (C.zf) goto L_129c8cc1;
L_129c8cba:;
  /* 129c8cba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 129c8cbf jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8cc1:;
  /* 129c8cc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 129c8cc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8ccd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 129c8cd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c8cd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8cdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c8cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8ce1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129c8ce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c8ce6 jmp 0x129c87ea */
  goto L_129c87ea;
L_129c8ceb:;
  /* 129c8ceb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129c8cf1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 129c8cf7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8cf9 jne 0x129c8d0c */
  if (!C.zf) goto L_129c8d0c;
  /* 129c8cfb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129c8d01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 129c8d07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8d0a je 0x129c8d13 */
  if (C.zf) goto L_129c8d13;
L_129c8d0c:;
  /* 129c8d0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 129c8d11 jmp 0x129c8d29 */
  goto L_129c8d29;
L_129c8d13:;
  /* 129c8d13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129c8d19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8d1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 129c8d22 jmp 0x129c8753 */
  goto L_129c8753;
L_129c8d27:;
  /* 129c8d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c8d29:;
  /* 129c8d29 mov esp, ebp */
  ESP = (EBP);
  /* 129c8d2b pop ebp */
  EBP = (pop32());
  /* 129c8d2c ret  */
  ESPCHK(0x129c8710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x129c8d30 (250 bytes, 92 insns) */
void f_129c8d30(void) {
  FTRACE(0x129c8d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c8d30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c8d31 mov ebp, esp */
  EBP = (ESP);
  /* 129c8d33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8d36 push ebx */
  push32((uint32_t)(EBX));
  /* 129c8d37 push esi */
  push32((uint32_t)(ESI));
  /* 129c8d38 push edi */
  push32((uint32_t)(EDI));
  /* 129c8d39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 129c8d3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129c8d3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 129c8d42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_129c8d45:;
  /* 129c8d45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8d49 jne 0x129c8d69 */
  if (!C.zf) goto L_129c8d69;
  /* 129c8d4b push 0x129e9df8 */
  push32((uint32_t)(0x129e9df8u));
  /* 129c8d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c8d52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 129c8d54 push 0x129e9dec */
  push32((uint32_t)(0x129e9decu));
  /* 129c8d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c8d5b call 0x129c1ee0 */
  push32(0x129c8d60u); f_129c1ee0();
  /* 129c8d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8d63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8d66 jne 0x129c8d69 */
  if (!C.zf) goto L_129c8d69;
  /* 129c8d68 int3  */
  x86_unimpl("int3 @ 0x129c8d68");
L_129c8d69:;
  /* 129c8d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c8d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c8d6d jne 0x129c8d45 */
  if (!C.zf) goto L_129c8d45;
L_129c8d6f:;
  /* 129c8d6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8d73 jne 0x129c8d93 */
  if (!C.zf) goto L_129c8d93;
  /* 129c8d75 push 0x129e9ddc */
  push32((uint32_t)(0x129e9ddcu));
  /* 129c8d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c8d7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 129c8d7e push 0x129e9dec */
  push32((uint32_t)(0x129e9decu));
  /* 129c8d83 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c8d85 call 0x129c1ee0 */
  push32(0x129c8d8au); f_129c1ee0();
  /* 129c8d8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8d90 jne 0x129c8d93 */
  if (!C.zf) goto L_129c8d93;
  /* 129c8d92 int3  */
  x86_unimpl("int3 @ 0x129c8d92");
L_129c8d93:;
  /* 129c8d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8d97 jne 0x129c8d6f */
  if (!C.zf) goto L_129c8d6f;
  /* 129c8d99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8d9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 129c8da3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8da9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c8dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8daf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8db2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129c8db4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8db7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 129c8dbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c8dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c8dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c8dc5 push edx */
  push32((uint32_t)(EDX));
  /* 129c8dc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8dc9 push eax */
  push32((uint32_t)(EAX));
  /* 129c8dca call 0x129c9db0 */
  push32(0x129c8dcfu); f_129c9db0();
  /* 129c8dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8dd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129c8dd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8dd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c8ddb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8dde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8de1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c8de4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8de7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8deb jl 0x129c8e0f */
  if ((C.sf!=C.of)) goto L_129c8e0f;
  /* 129c8ded mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8df0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c8df2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129c8df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c8dfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 129c8e00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8e03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c8e05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8e08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8e0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c8e0d jmp 0x129c8e20 */
  goto L_129c8e20;
L_129c8e0f:;
  /* 129c8e0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8e12 push edx */
  push32((uint32_t)(EDX));
  /* 129c8e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c8e15 call 0x129c9b30 */
  push32(0x129c8e1au); f_129c9b30();
  /* 129c8e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8e1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_129c8e20:;
  /* 129c8e20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c8e23 pop edi */
  EDI = (pop32());
  /* 129c8e24 pop esi */
  ESI = (pop32());
  /* 129c8e25 pop ebx */
  EBX = (pop32());
  /* 129c8e26 mov esp, ebp */
  ESP = (EBP);
  /* 129c8e28 pop ebp */
  EBP = (pop32());
  /* 129c8e29 ret  */
  ESPCHK(0x129c8d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x129c8e30 (183 bytes, 58 insns) */
void f_129c8e30(void) {
  FTRACE(0x129c8e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c8e30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c8e31 mov ebp, esp */
  EBP = (ESP);
  /* 129c8e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8e3c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8e41 ja 0x129c8e5a */
  if ((!C.cf&&!C.zf)) goto L_129c8e5a;
  /* 129c8e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8e46 mov edx, dword ptr [0x129ecc98] */
  EDX = (r32((uint32_t)(0x129ecc98)));
  /* 129c8e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8e4e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 129c8e52 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 129c8e55 jmp 0x129c8ee3 */
  goto L_129c8ee3;
L_129c8e5a:;
  /* 129c8e5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8e5d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 129c8e60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c8e66 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c8e6c mov edx, dword ptr [0x129ecc98] */
  EDX = (r32((uint32_t)(0x129ecc98)));
  /* 129c8e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8e74 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 129c8e78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 129c8e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8e7f je 0x129c8ea3 */
  if (C.zf) goto L_129c8ea3;
  /* 129c8e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8e84 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 129c8e87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c8e8d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 129c8e90 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 129c8e93 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 129c8e96 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 129c8e9a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 129c8ea1 jmp 0x129c8eb4 */
  goto L_129c8eb4;
L_129c8ea3:;
  /* 129c8ea3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 129c8ea6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 129c8ea9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 129c8ead mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_129c8eb4:;
  /* 129c8eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c8eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c8eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c8eba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 129c8ebd push ecx */
  push32((uint32_t)(ECX));
  /* 129c8ebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c8ec1 push edx */
  push32((uint32_t)(EDX));
  /* 129c8ec2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 129c8ec5 push eax */
  push32((uint32_t)(EAX));
  /* 129c8ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c8ec8 call 0x129cb050 */
  push32(0x129c8ecdu); f_129cb050();
  /* 129c8ecd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8ed2 jne 0x129c8ed8 */
  if (!C.zf) goto L_129c8ed8;
  /* 129c8ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8ed6 jmp 0x129c8ee3 */
  goto L_129c8ee3;
L_129c8ed8:;
  /* 129c8ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8edb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c8ee0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_129c8ee3:;
  /* 129c8ee3 mov esp, ebp */
  ESP = (EBP);
  /* 129c8ee5 pop ebp */
  EBP = (pop32());
  /* 129c8ee6 ret  */
  ESPCHK(0x129c8e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x129c8ef0 (836 bytes, 238 insns) */
void f_129c8ef0(void) {
  FTRACE(0x129c8ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c8ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c8ef1 mov ebp, esp */
  EBP = (ESP);
  /* 129c8ef3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c8ef6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c8ef8 call 0x129c6820 */
  push32(0x129c8efdu); f_129c6820();
  /* 129c8efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8f03 push eax */
  push32((uint32_t)(EAX));
  /* 129c8f04 call 0x129c9240 */
  push32(0x129c8f09u); f_129c9240();
  /* 129c8f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8f0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129c8f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c8f12 cmp ecx, dword ptr [0x129efb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8f18 jne 0x129c8f2b */
  if (!C.zf) goto L_129c8f2b;
  /* 129c8f1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c8f1c call 0x129c68c0 */
  push32(0x129c8f21u); f_129c68c0();
  /* 129c8f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8f26 jmp 0x129c9230 */
  goto L_129c9230;
L_129c8f2b:;
  /* 129c8f2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8f2f jne 0x129c8f4c */
  if (!C.zf) goto L_129c8f4c;
  /* 129c8f31 call 0x129c9320 */
  push32(0x129c8f36u); f_129c9320();
  /* 129c8f36 call 0x129c93a0 */
  push32(0x129c8f3bu); f_129c93a0();
  /* 129c8f3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c8f3d call 0x129c68c0 */
  push32(0x129c8f42u); f_129c68c0();
  /* 129c8f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8f47 jmp 0x129c9230 */
  goto L_129c9230;
L_129c8f4c:;
  /* 129c8f4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c8f53 jmp 0x129c8f5e */
  goto L_129c8f5e;
L_129c8f55:;
  /* 129c8f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8f5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c8f5e:;
  /* 129c8f5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8f62 jae 0x129c90af */
  if (!C.cf) goto L_129c90af;
  /* 129c8f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8f6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c8f6e mov ecx, dword ptr [eax + 0x129eceb8] */
  ECX = (r32((uint32_t)(EAX + 0x129eceb8)));
  /* 129c8f74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8f77 jne 0x129c90aa */
  if (!C.zf) goto L_129c90aa;
  /* 129c8f7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129c8f84 jmp 0x129c8f8f */
  goto L_129c8f8f;
L_129c8f86:;
  /* 129c8f86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8f89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8f8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_129c8f8f:;
  /* 129c8f8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8f96 jae 0x129c8fa4 */
  if (!C.cf) goto L_129c8fa4;
  /* 129c8f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c8f9b mov byte ptr [eax + 0x129efd00], 0 */
  w8((uint32_t)(EAX + 0x129efd00), (0x0u));
  /* 129c8fa2 jmp 0x129c8f86 */
  goto L_129c8f86;
L_129c8fa4:;
  /* 129c8fa4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129c8fab jmp 0x129c8fb6 */
  goto L_129c8fb6;
L_129c8fad:;
  /* 129c8fad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c8fb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8fb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_129c8fb6:;
  /* 129c8fb6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c8fba jae 0x129c9037 */
  if (!C.cf) goto L_129c9037;
  /* 129c8fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c8fbf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c8fc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c8fc5 lea ecx, [edx + eax*8 + 0x129ecec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x129ecec8));
  /* 129c8fcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c8fcf jmp 0x129c8fda */
  goto L_129c8fda;
L_129c8fd1:;
  /* 129c8fd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c8fd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c8fd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129c8fda:;
  /* 129c8fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c8fdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c8fdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129c8fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c8fe3 je 0x129c9032 */
  if (C.zf) goto L_129c9032;
  /* 129c8fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c8fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c8fea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129c8fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c8fef je 0x129c9032 */
  if (C.zf) goto L_129c9032;
  /* 129c8ff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c8ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c8ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c8ff8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 129c8ffb jmp 0x129c9006 */
  goto L_129c9006;
L_129c8ffd:;
  /* 129c8ffd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9003 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129c9006:;
  /* 129c9006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c900b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 129c900e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9011 ja 0x129c9030 */
  if ((!C.cf&&!C.zf)) goto L_129c9030;
  /* 129c9013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c9019 mov dl, byte ptr [eax + 0x129efd01] */
  DL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129c901f or dl, byte ptr [ecx + 0x129eceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x129eceb0))); DL = (_r); fl_logic(_r,8); }
  /* 129c9025 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9028 mov byte ptr [eax + 0x129efd01], dl */
  w8((uint32_t)(EAX + 0x129efd01), (DL));
  /* 129c902e jmp 0x129c8ffd */
  goto L_129c8ffd;
L_129c9030:;
  /* 129c9030 jmp 0x129c8fd1 */
  goto L_129c8fd1;
L_129c9032:;
  /* 129c9032 jmp 0x129c8fad */
  goto L_129c8fad;
L_129c9037:;
  /* 129c9037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c903a mov dword ptr [0x129efb64], ecx */
  w32((uint32_t)(0x129efb64), (ECX));
  /* 129c9040 mov dword ptr [0x129efbec], 1 */
  w32((uint32_t)(0x129efbec), (0x1u));
  /* 129c904a mov edx, dword ptr [0x129efb64] */
  EDX = (r32((uint32_t)(0x129efb64)));
  /* 129c9050 push edx */
  push32((uint32_t)(EDX));
  /* 129c9051 call 0x129c92a0 */
  push32(0x129c9056u); f_129c92a0();
  /* 129c9056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9059 mov dword ptr [0x129efe04], eax */
  w32((uint32_t)(0x129efe04), (EAX));
  /* 129c905e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129c9065 jmp 0x129c9070 */
  goto L_129c9070;
L_129c9067:;
  /* 129c9067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c906a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c906d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129c9070:;
  /* 129c9070 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9074 jae 0x129c9094 */
  if (!C.cf) goto L_129c9094;
  /* 129c9076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9079 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c907c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c907f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c9082 mov cx, word ptr [ecx + eax*2 + 0x129ecebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x129ecebc)));
  /* 129c908a mov word ptr [edx*2 + 0x129efbe0], cx */
  w16((uint32_t)(EDX*2 + 0x129efbe0), (CX));
  /* 129c9092 jmp 0x129c9067 */
  goto L_129c9067;
L_129c9094:;
  /* 129c9094 call 0x129c93a0 */
  push32(0x129c9099u); f_129c93a0();
  /* 129c9099 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c909b call 0x129c68c0 */
  push32(0x129c90a0u); f_129c68c0();
  /* 129c90a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c90a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c90a5 jmp 0x129c9230 */
  goto L_129c9230;
L_129c90aa:;
  /* 129c90aa jmp 0x129c8f55 */
  goto L_129c8f55;
L_129c90af:;
  /* 129c90af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 129c90b2 push edx */
  push32((uint32_t)(EDX));
  /* 129c90b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c90b6 push eax */
  push32((uint32_t)(EAX));
  /* 129c90b7 call dword ptr [0x129f033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f033c))), 0x129c90bdu);
  /* 129c90bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c90c0 jne 0x129c9202 */
  if (!C.zf) goto L_129c9202;
  /* 129c90c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129c90cd jmp 0x129c90d8 */
  goto L_129c90d8;
L_129c90cf:;
  /* 129c90cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c90d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c90d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_129c90d8:;
  /* 129c90d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c90df jae 0x129c90ed */
  if (!C.cf) goto L_129c90ed;
  /* 129c90e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c90e4 mov byte ptr [edx + 0x129efd00], 0 */
  w8((uint32_t)(EDX + 0x129efd00), (0x0u));
  /* 129c90eb jmp 0x129c90cf */
  goto L_129c90cf;
L_129c90ed:;
  /* 129c90ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c90f0 mov dword ptr [0x129efb64], eax */
  w32((uint32_t)(0x129efb64), (EAX));
  /* 129c90f5 mov dword ptr [0x129efe04], 0 */
  w32((uint32_t)(0x129efe04), (0x0u));
  /* 129c90ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9103 jbe 0x129c91be */
  if ((C.cf||C.zf)) goto L_129c91be;
  /* 129c9109 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 129c910c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 129c910f jmp 0x129c911a */
  goto L_129c911a;
L_129c9111:;
  /* 129c9111 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c9114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9117 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_129c911a:;
  /* 129c911a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c911d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c911f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129c9121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c9123 je 0x129c916c */
  if (C.zf) goto L_129c916c;
  /* 129c9125 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c9128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c912a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129c912d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c912f je 0x129c916c */
  if (C.zf) goto L_129c916c;
  /* 129c9131 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c9134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c9138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 129c913b jmp 0x129c9146 */
  goto L_129c9146;
L_129c913d:;
  /* 129c913d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129c9146:;
  /* 129c9146 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c9149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c914b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 129c914e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9151 ja 0x129c916a */
  if ((!C.cf&&!C.zf)) goto L_129c916a;
  /* 129c9153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9156 mov cl, byte ptr [eax + 0x129efd01] */
  CL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129c915c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 129c915f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9162 mov byte ptr [edx + 0x129efd01], cl */
  w8((uint32_t)(EDX + 0x129efd01), (CL));
  /* 129c9168 jmp 0x129c913d */
  goto L_129c913d;
L_129c916a:;
  /* 129c916a jmp 0x129c9111 */
  goto L_129c9111;
L_129c916c:;
  /* 129c916c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 129c9173 jmp 0x129c917e */
  goto L_129c917e;
L_129c9175:;
  /* 129c9175 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c917b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129c917e:;
  /* 129c917e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9185 jae 0x129c919e */
  if (!C.cf) goto L_129c919e;
  /* 129c9187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c918a mov dl, byte ptr [ecx + 0x129efd01] */
  DL = (r8((uint32_t)(ECX + 0x129efd01)));
  /* 129c9190 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 129c9193 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c9196 mov byte ptr [eax + 0x129efd01], dl */
  w8((uint32_t)(EAX + 0x129efd01), (DL));
  /* 129c919c jmp 0x129c9175 */
  goto L_129c9175;
L_129c919e:;
  /* 129c919e mov ecx, dword ptr [0x129efb64] */
  ECX = (r32((uint32_t)(0x129efb64)));
  /* 129c91a4 push ecx */
  push32((uint32_t)(ECX));
  /* 129c91a5 call 0x129c92a0 */
  push32(0x129c91aau); f_129c92a0();
  /* 129c91aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c91ad mov dword ptr [0x129efe04], eax */
  w32((uint32_t)(0x129efe04), (EAX));
  /* 129c91b2 mov dword ptr [0x129efbec], 1 */
  w32((uint32_t)(0x129efbec), (0x1u));
  /* 129c91bc jmp 0x129c91c8 */
  goto L_129c91c8;
L_129c91be:;
  /* 129c91be mov dword ptr [0x129efbec], 0 */
  w32((uint32_t)(0x129efbec), (0x0u));
L_129c91c8:;
  /* 129c91c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129c91cf jmp 0x129c91da */
  goto L_129c91da;
L_129c91d1:;
  /* 129c91d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c91d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c91d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129c91da:;
  /* 129c91da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c91de jae 0x129c91ef */
  if (!C.cf) goto L_129c91ef;
  /* 129c91e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c91e3 mov word ptr [eax*2 + 0x129efbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x129efbe0), (0x0u));
  /* 129c91ed jmp 0x129c91d1 */
  goto L_129c91d1;
L_129c91ef:;
  /* 129c91ef call 0x129c93a0 */
  push32(0x129c91f4u); f_129c93a0();
  /* 129c91f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c91f6 call 0x129c68c0 */
  push32(0x129c91fbu); f_129c68c0();
  /* 129c91fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c91fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9200 jmp 0x129c9230 */
  goto L_129c9230;
L_129c9202:;
  /* 129c9202 cmp dword ptr [0x129ee680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9209 je 0x129c9223 */
  if (C.zf) goto L_129c9223;
  /* 129c920b call 0x129c9320 */
  push32(0x129c9210u); f_129c9320();
  /* 129c9210 call 0x129c93a0 */
  push32(0x129c9215u); f_129c93a0();
  /* 129c9215 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c9217 call 0x129c68c0 */
  push32(0x129c921cu); f_129c68c0();
  /* 129c921c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c921f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9221 jmp 0x129c9230 */
  goto L_129c9230;
L_129c9223:;
  /* 129c9223 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129c9225 call 0x129c68c0 */
  push32(0x129c922au); f_129c68c0();
  /* 129c922a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c922d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129c9230:;
  /* 129c9230 mov esp, ebp */
  ESP = (EBP);
  /* 129c9232 pop ebp */
  EBP = (pop32());
  /* 129c9233 ret  */
  ESPCHK(0x129c8ef0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x129c9240 (89 bytes, 21 insns) */
void f_129c9240(void) {
  FTRACE(0x129c9240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9240 push ebp */
  push32((uint32_t)(EBP));
  /* 129c9241 mov ebp, esp */
  EBP = (ESP);
  /* 129c9243 mov dword ptr [0x129ee680], 0 */
  w32((uint32_t)(0x129ee680), (0x0u));
  /* 129c924d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9251 jne 0x129c9265 */
  if (!C.zf) goto L_129c9265;
  /* 129c9253 mov dword ptr [0x129ee680], 1 */
  w32((uint32_t)(0x129ee680), (0x1u));
  /* 129c925d call dword ptr [0x129f0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0344))), 0x129c9263u);
  /* 129c9263 jmp 0x129c9297 */
  goto L_129c9297;
L_129c9265:;
  /* 129c9265 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9269 jne 0x129c927d */
  if (!C.zf) goto L_129c927d;
  /* 129c926b mov dword ptr [0x129ee680], 1 */
  w32((uint32_t)(0x129ee680), (0x1u));
  /* 129c9275 call dword ptr [0x129f0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0340))), 0x129c927bu);
  /* 129c927b jmp 0x129c9297 */
  goto L_129c9297;
L_129c927d:;
  /* 129c927d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9281 jne 0x129c9294 */
  if (!C.zf) goto L_129c9294;
  /* 129c9283 mov dword ptr [0x129ee680], 1 */
  w32((uint32_t)(0x129ee680), (0x1u));
  /* 129c928d mov eax, dword ptr [0x129ee6a0] */
  EAX = (r32((uint32_t)(0x129ee6a0)));
  /* 129c9292 jmp 0x129c9297 */
  goto L_129c9297;
L_129c9294:;
  /* 129c9294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_129c9297:;
  /* 129c9297 pop ebp */
  EBP = (pop32());
  /* 129c9298 ret  */
  ESPCHK(0x129c9240u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x129c92a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_129c92a0(void) {
  FTRACE(0x129c92a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c92a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c92a1 mov ebp, esp */
  EBP = (ESP);
  /* 129c92a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c92a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c92a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c92aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c92ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c92b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c92b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c92ba ja 0x129c92ea */
  if ((!C.cf&&!C.zf)) goto L_129c92ea;
  /* 129c92bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c92bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c92c1 mov dl, byte ptr [eax + 0x129c9304] */
  DL = (r8((uint32_t)(EAX + 0x129c9304)));
  /* 129c92c7 jmp dword ptr [edx*4 + 0x129c92f0] */
  switch (EDX) {
    case 0: goto L_129c92ce;
    case 1: goto L_129c92d5;
    case 2: goto L_129c92dc;
    case 3: goto L_129c92e3;
    case 4: goto L_129c92ea;
    default: x86_unimpl("switch@0x129c92c7 out of table"); return;
  }
L_129c92ce:;
  /* 129c92ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 129c92d3 jmp 0x129c92ec */
  goto L_129c92ec;
L_129c92d5:;
  /* 129c92d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 129c92da jmp 0x129c92ec */
  goto L_129c92ec;
L_129c92dc:;
  /* 129c92dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 129c92e1 jmp 0x129c92ec */
  goto L_129c92ec;
L_129c92e3:;
  /* 129c92e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 129c92e8 jmp 0x129c92ec */
  goto L_129c92ec;
L_129c92ea:;
  /* 129c92ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c92ec:;
  /* 129c92ec mov esp, ebp */
  ESP = (EBP);
  /* 129c92ee pop ebp */
  EBP = (pop32());
  /* 129c92ef ret  */
  ESPCHK(0x129c92a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x129c9320 (116 bytes, 29 insns) */
void f_129c9320(void) {
  FTRACE(0x129c9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9320 push ebp */
  push32((uint32_t)(EBP));
  /* 129c9321 mov ebp, esp */
  EBP = (ESP);
  /* 129c9323 push ecx */
  push32((uint32_t)(ECX));
  /* 129c9324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c932b jmp 0x129c9336 */
  goto L_129c9336;
L_129c932d:;
  /* 129c932d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c9336:;
  /* 129c9336 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c933d jge 0x129c934b */
  if ((C.sf==C.of)) goto L_129c934b;
  /* 129c933f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9342 mov byte ptr [ecx + 0x129efd00], 0 */
  w8((uint32_t)(ECX + 0x129efd00), (0x0u));
  /* 129c9349 jmp 0x129c932d */
  goto L_129c932d;
L_129c934b:;
  /* 129c934b mov dword ptr [0x129efb64], 0 */
  w32((uint32_t)(0x129efb64), (0x0u));
  /* 129c9355 mov dword ptr [0x129efbec], 0 */
  w32((uint32_t)(0x129efbec), (0x0u));
  /* 129c935f mov dword ptr [0x129efe04], 0 */
  w32((uint32_t)(0x129efe04), (0x0u));
  /* 129c9369 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c9370 jmp 0x129c937b */
  goto L_129c937b;
L_129c9372:;
  /* 129c9372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9375 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9378 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c937b:;
  /* 129c937b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c937f jge 0x129c9390 */
  if ((C.sf==C.of)) goto L_129c9390;
  /* 129c9381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9384 mov word ptr [eax*2 + 0x129efbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x129efbe0), (0x0u));
  /* 129c938e jmp 0x129c9372 */
  goto L_129c9372;
L_129c9390:;
  /* 129c9390 mov esp, ebp */
  ESP = (EBP);
  /* 129c9392 pop ebp */
  EBP = (pop32());
  /* 129c9393 ret  */
  ESPCHK(0x129c9320u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x129c93a0 (770 bytes, 175 insns) */
void f_129c93a0(void) {
  FTRACE(0x129c93a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c93a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c93a1 mov ebp, esp */
  EBP = (ESP);
  /* 129c93a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c93a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 129c93af push eax */
  push32((uint32_t)(EAX));
  /* 129c93b0 mov ecx, dword ptr [0x129efb64] */
  ECX = (r32((uint32_t)(0x129efb64)));
  /* 129c93b6 push ecx */
  push32((uint32_t)(ECX));
  /* 129c93b7 call dword ptr [0x129f033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f033c))), 0x129c93bdu);
  /* 129c93bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c93c0 jne 0x129c95d9 */
  if (!C.zf) goto L_129c95d9;
  /* 129c93c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 129c93d0 jmp 0x129c93e1 */
  goto L_129c93e1;
L_129c93d2:;
  /* 129c93d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c93d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c93db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_129c93e1:;
  /* 129c93e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c93eb jae 0x129c9402 */
  if (!C.cf) goto L_129c9402;
  /* 129c93ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c93f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 129c93f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 129c9400 jmp 0x129c93d2 */
  goto L_129c93d2;
L_129c9402:;
  /* 129c9402 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 129c9409 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 129c940f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c9412 jmp 0x129c941d */
  goto L_129c941d;
L_129c9414:;
  /* 129c9414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9417 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c941a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c941d:;
  /* 129c941d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9420 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9422 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c9424 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c9426 je 0x129c9468 */
  if (C.zf) goto L_129c9468;
  /* 129c9428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c942b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c942d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129c942f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 129c9435 jmp 0x129c9446 */
  goto L_129c9446;
L_129c9437:;
  /* 129c9437 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c943d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9440 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_129c9446:;
  /* 129c9446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9449 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c944b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129c944e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9454 ja 0x129c9466 */
  if ((!C.cf&&!C.zf)) goto L_129c9466;
  /* 129c9456 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c945c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 129c9464 jmp 0x129c9437 */
  goto L_129c9437;
L_129c9466:;
  /* 129c9466 jmp 0x129c9414 */
  goto L_129c9414;
L_129c9468:;
  /* 129c9468 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c946a mov eax, dword ptr [0x129efe04] */
  EAX = (r32((uint32_t)(0x129efe04)));
  /* 129c946f push eax */
  push32((uint32_t)(EAX));
  /* 129c9470 mov ecx, dword ptr [0x129efb64] */
  ECX = (r32((uint32_t)(0x129efb64)));
  /* 129c9476 push ecx */
  push32((uint32_t)(ECX));
  /* 129c9477 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 129c947d push edx */
  push32((uint32_t)(EDX));
  /* 129c947e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129c9483 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 129c9489 push eax */
  push32((uint32_t)(EAX));
  /* 129c948a push 1 */
  push32((uint32_t)(0x1u));
  /* 129c948c call 0x129cb050 */
  push32(0x129c9491u); f_129cb050();
  /* 129c9491 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9494 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c9496 mov ecx, dword ptr [0x129efb64] */
  ECX = (r32((uint32_t)(0x129efb64)));
  /* 129c949c push ecx */
  push32((uint32_t)(ECX));
  /* 129c949d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129c94a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 129c94a8 push edx */
  push32((uint32_t)(EDX));
  /* 129c94a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129c94ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 129c94b4 push eax */
  push32((uint32_t)(EAX));
  /* 129c94b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129c94ba mov ecx, dword ptr [0x129efe04] */
  ECX = (r32((uint32_t)(0x129efe04)));
  /* 129c94c0 push ecx */
  push32((uint32_t)(ECX));
  /* 129c94c1 call 0x129cb210 */
  push32(0x129c94c6u); f_129cb210();
  /* 129c94c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c94c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c94cb mov edx, dword ptr [0x129efb64] */
  EDX = (r32((uint32_t)(0x129efb64)));
  /* 129c94d1 push edx */
  push32((uint32_t)(EDX));
  /* 129c94d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129c94d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 129c94dd push eax */
  push32((uint32_t)(EAX));
  /* 129c94de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129c94e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 129c94e9 push ecx */
  push32((uint32_t)(ECX));
  /* 129c94ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 129c94ef mov edx, dword ptr [0x129efe04] */
  EDX = (r32((uint32_t)(0x129efe04)));
  /* 129c94f5 push edx */
  push32((uint32_t)(EDX));
  /* 129c94f6 call 0x129cb210 */
  push32(0x129c94fbu); f_129cb210();
  /* 129c94fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c94fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 129c9508 jmp 0x129c9519 */
  goto L_129c9519;
L_129c950a:;
  /* 129c950a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9510 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9513 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_129c9519:;
  /* 129c9519 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9523 jae 0x129c95d4 */
  if (!C.cf) goto L_129c95d4;
  /* 129c9529 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c952f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9531 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 129c9539 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129c953c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c953e je 0x129c9576 */
  if (C.zf) goto L_129c9576;
  /* 129c9540 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9546 mov cl, byte ptr [eax + 0x129efd01] */
  CL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129c954c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 129c954f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9555 mov byte ptr [edx + 0x129efd01], cl */
  w8((uint32_t)(EDX + 0x129efd01), (CL));
  /* 129c955b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9561 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9567 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 129c956e mov byte ptr [eax + 0x129efc00], dl */
  w8((uint32_t)(EAX + 0x129efc00), (DL));
  /* 129c9574 jmp 0x129c95cf */
  goto L_129c95cf;
L_129c9576:;
  /* 129c9576 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c957c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c957e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 129c9586 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129c9589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c958b je 0x129c95c2 */
  if (C.zf) goto L_129c95c2;
  /* 129c958d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9593 mov al, byte ptr [edx + 0x129efd01] */
  AL = (r8((uint32_t)(EDX + 0x129efd01)));
  /* 129c9599 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129c959b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c95a1 mov byte ptr [ecx + 0x129efd01], al */
  w8((uint32_t)(ECX + 0x129efd01), (AL));
  /* 129c95a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c95ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c95b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 129c95ba mov byte ptr [edx + 0x129efc00], cl */
  w8((uint32_t)(EDX + 0x129efc00), (CL));
  /* 129c95c0 jmp 0x129c95cf */
  goto L_129c95cf;
L_129c95c2:;
  /* 129c95c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c95c8 mov byte ptr [edx + 0x129efc00], 0 */
  w8((uint32_t)(EDX + 0x129efc00), (0x0u));
L_129c95cf:;
  /* 129c95cf jmp 0x129c950a */
  goto L_129c950a;
L_129c95d4:;
  /* 129c95d4 jmp 0x129c969e */
  goto L_129c969e;
L_129c95d9:;
  /* 129c95d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 129c95e3 jmp 0x129c95f4 */
  goto L_129c95f4;
L_129c95e5:;
  /* 129c95e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c95eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c95ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_129c95f4:;
  /* 129c95f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c95fe jae 0x129c969e */
  if (!C.cf) goto L_129c969e;
  /* 129c9604 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c960b jb 0x129c9648 */
  if (C.cf) goto L_129c9648;
  /* 129c960d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9614 ja 0x129c9648 */
  if ((!C.cf&&!C.zf)) goto L_129c9648;
  /* 129c9616 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c961c mov dl, byte ptr [ecx + 0x129efd01] */
  DL = (r8((uint32_t)(ECX + 0x129efd01)));
  /* 129c9622 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 129c9625 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c962b mov byte ptr [eax + 0x129efd01], dl */
  w8((uint32_t)(EAX + 0x129efd01), (DL));
  /* 129c9631 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9637 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c963a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9640 mov byte ptr [edx + 0x129efc00], cl */
  w8((uint32_t)(EDX + 0x129efc00), (CL));
  /* 129c9646 jmp 0x129c9699 */
  goto L_129c9699;
L_129c9648:;
  /* 129c9648 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c964f jb 0x129c968c */
  if (C.cf) goto L_129c968c;
  /* 129c9651 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9658 ja 0x129c968c */
  if ((!C.cf&&!C.zf)) goto L_129c968c;
  /* 129c965a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9660 mov cl, byte ptr [eax + 0x129efd01] */
  CL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129c9666 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 129c9669 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c966f mov byte ptr [edx + 0x129efd01], cl */
  w8((uint32_t)(EDX + 0x129efd01), (CL));
  /* 129c9675 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c967b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c967e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9684 mov byte ptr [ecx + 0x129efc00], al */
  w8((uint32_t)(ECX + 0x129efc00), (AL));
  /* 129c968a jmp 0x129c9699 */
  goto L_129c9699;
L_129c968c:;
  /* 129c968c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129c9692 mov byte ptr [edx + 0x129efc00], 0 */
  w8((uint32_t)(EDX + 0x129efc00), (0x0u));
L_129c9699:;
  /* 129c9699 jmp 0x129c95e5 */
  goto L_129c95e5;
L_129c969e:;
  /* 129c969e mov esp, ebp */
  ESP = (EBP);
  /* 129c96a0 pop ebp */
  EBP = (pop32());
  /* 129c96a1 ret  */
  ESPCHK(0x129c93a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x129c96b0 (23 bytes, 9 insns) */
void f_129c96b0(void) {
  FTRACE(0x129c96b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c96b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c96b1 mov ebp, esp */
  EBP = (ESP);
  /* 129c96b3 cmp dword ptr [0x129efbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c96ba je 0x129c96c3 */
  if (C.zf) goto L_129c96c3;
  /* 129c96bc mov eax, dword ptr [0x129efb64] */
  EAX = (r32((uint32_t)(0x129efb64)));
  /* 129c96c1 jmp 0x129c96c5 */
  goto L_129c96c5;
L_129c96c3:;
  /* 129c96c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c96c5:;
  /* 129c96c5 pop ebp */
  EBP = (pop32());
  /* 129c96c6 ret  */
  ESPCHK(0x129c96b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x129c96d0 (34 bytes, 10 insns) */
void f_129c96d0(void) {
  FTRACE(0x129c96d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c96d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c96d1 mov ebp, esp */
  EBP = (ESP);
  /* 129c96d3 cmp dword ptr [0x129effb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c96da jne 0x129c96f0 */
  if (!C.zf) goto L_129c96f0;
  /* 129c96dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 129c96de call 0x129c8ef0 */
  push32(0x129c96e3u); f_129c8ef0();
  /* 129c96e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c96e6 mov dword ptr [0x129effb0], 1 */
  w32((uint32_t)(0x129effb0), (0x1u));
L_129c96f0:;
  /* 129c96f0 pop ebp */
  EBP = (pop32());
  /* 129c96f1 ret  */
  ESPCHK(0x129c96d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x129c9700 (664 bytes, 260 insns) [15 switch table(s)] */
void f_129c9700(void) {
  FTRACE(0x129c9700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9700 push ebp */
  push32((uint32_t)(EBP));
  /* 129c9701 mov ebp, esp */
  EBP = (ESP);
  /* 129c9703 push edi */
  push32((uint32_t)(EDI));
  /* 129c9704 push esi */
  push32((uint32_t)(ESI));
  /* 129c9705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129c9708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c970b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 129c970e mov eax, ecx */
  EAX = (ECX);
  /* 129c9710 mov edx, ecx */
  EDX = (ECX);
  /* 129c9712 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9714 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9716 jbe 0x129c9720 */
  if ((C.cf||C.zf)) goto L_129c9720;
  /* 129c9718 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c971a jb 0x129c9898 */
  if (C.cf) goto L_129c9898;
L_129c9720:;
  /* 129c9720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129c9726 jne 0x129c973c */
  if (!C.zf) goto L_129c973c;
  /* 129c9728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c972b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129c972e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9731 jb 0x129c975c */
  if (C.cf) goto L_129c975c;
  /* 129c9733 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c9735 jmp dword ptr [edx*4 + 0x129c9848] */
  switch (EDX) {
    case 0: goto L_129c9858;
    case 1: goto L_129c9860;
    case 2: goto L_129c986c;
    case 3: goto L_129c9880;
    default: x86_unimpl("switch@0x129c9735 out of table"); return;
  }
L_129c973c:;
  /* 129c973c mov eax, edi */
  EAX = (EDI);
  /* 129c973e mov edx, 3 */
  EDX = (0x3u);
  /* 129c9743 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9746 jb 0x129c9754 */
  if (C.cf) goto L_129c9754;
  /* 129c9748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129c974b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c974d jmp dword ptr [eax*4 + 0x129c9760] */
  switch (EAX) {
    case 1: goto L_129c9770;
    case 2: goto L_129c979c;
    case 3: goto L_129c97c0;
    default: x86_unimpl("switch@0x129c974d out of table"); return;
  }
L_129c9754:;
  /* 129c9754 jmp dword ptr [ecx*4 + 0x129c9858] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x129c9858)))); return;
  /* 129c975b nop  */
  /* nop */
L_129c975c:;
  /* 129c975c jmp dword ptr [ecx*4 + 0x129c97dc] */
  switch (ECX) {
    case 0: goto L_129c983f;
    case 1: goto L_129c982c;
    case 2: goto L_129c9824;
    case 3: goto L_129c981c;
    case 4: goto L_129c9814;
    case 5: goto L_129c980c;
    case 6: goto L_129c9804;
    case 7: goto L_129c97fc;
    default: x86_unimpl("switch@0x129c975c out of table"); return;
  }
  /* 129c9763 nop  */
  /* nop */
L_129c9770:;
  /* 129c9770 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9772 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c9774 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c9776 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129c9779 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129c977c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129c977f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c9782 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129c9785 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9788 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c978b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c978e jb 0x129c975c */
  if (C.cf) goto L_129c975c;
  /* 129c9790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c9792 jmp dword ptr [edx*4 + 0x129c9848] */
  switch (EDX) {
    case 0: goto L_129c9858;
    case 1: goto L_129c9860;
    case 2: goto L_129c986c;
    case 3: goto L_129c9880;
    default: x86_unimpl("switch@0x129c9792 out of table"); return;
  }
  /* 129c9799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129c979c:;
  /* 129c979c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129c979e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c97a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c97a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129c97a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c97a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129c97ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c97ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c97b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c97b4 jb 0x129c975c */
  if (C.cf) goto L_129c975c;
  /* 129c97b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c97b8 jmp dword ptr [edx*4 + 0x129c9848] */
  switch (EDX) {
    case 0: goto L_129c9858;
    case 1: goto L_129c9860;
    case 2: goto L_129c986c;
    case 3: goto L_129c9880;
    default: x86_unimpl("switch@0x129c97b8 out of table"); return;
  }
  /* 129c97bf nop  */
  /* nop */
L_129c97c0:;
  /* 129c97c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129c97c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c97c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c97c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129c97c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c97ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c97cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c97ce jb 0x129c975c */
  if (C.cf) goto L_129c975c;
  /* 129c97d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c97d2 jmp dword ptr [edx*4 + 0x129c9848] */
  switch (EDX) {
    case 0: goto L_129c9858;
    case 1: goto L_129c9860;
    case 2: goto L_129c986c;
    case 3: goto L_129c9880;
    default: x86_unimpl("switch@0x129c97d2 out of table"); return;
  }
  /* 129c97d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129c97fc:;
  /* 129c97fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 129c9800 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_129c9804:;
  /* 129c9804 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 129c9808 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_129c980c:;
  /* 129c980c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 129c9810 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_129c9814:;
  /* 129c9814 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 129c9818 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_129c981c:;
  /* 129c981c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 129c9820 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_129c9824:;
  /* 129c9824 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 129c9828 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_129c982c:;
  /* 129c982c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 129c9830 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 129c9834 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 129c983b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c983d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129c983f:;
  /* 129c983f jmp dword ptr [edx*4 + 0x129c9848] */
  switch (EDX) {
    case 0: goto L_129c9858;
    case 1: goto L_129c9860;
    case 2: goto L_129c986c;
    case 3: goto L_129c9880;
    default: x86_unimpl("switch@0x129c983f out of table"); return;
  }
  /* 129c9846 mov edi, edi */
  EDI = (EDI);
L_129c9858:;
  /* 129c9858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c985b pop esi */
  ESI = (pop32());
  /* 129c985c pop edi */
  EDI = (pop32());
  /* 129c985d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c985e ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c985f nop  */
  /* nop */
L_129c9860:;
  /* 129c9860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c9862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c9864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9867 pop esi */
  ESI = (pop32());
  /* 129c9868 pop edi */
  EDI = (pop32());
  /* 129c9869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c986a ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c986b nop  */
  /* nop */
L_129c986c:;
  /* 129c986c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c986e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c9870 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129c9873 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129c9876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9879 pop esi */
  ESI = (pop32());
  /* 129c987a pop edi */
  EDI = (pop32());
  /* 129c987b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c987c ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c987d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129c9880:;
  /* 129c9880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c9882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c9884 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129c9887 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129c988a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129c988d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129c9890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9893 pop esi */
  ESI = (pop32());
  /* 129c9894 pop edi */
  EDI = (pop32());
  /* 129c9895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c9896 ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c9897 nop  */
  /* nop */
L_129c9898:;
  /* 129c9898 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 129c989c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 129c98a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129c98a6 jne 0x129c98cc */
  if (!C.zf) goto L_129c98cc;
  /* 129c98a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c98ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129c98ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c98b1 jb 0x129c98c0 */
  if (C.cf) goto L_129c98c0;
  /* 129c98b3 std  */
  C.df=1;
  /* 129c98b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c98b6 cld  */
  C.df=0;
  /* 129c98b7 jmp dword ptr [edx*4 + 0x129c99e0] */
  switch (EDX) {
    case 0: goto L_129c99f0;
    case 1: goto L_129c99f8;
    case 2: goto L_129c9a08;
    case 3: goto L_129c9a1c;
    default: x86_unimpl("switch@0x129c98b7 out of table"); return;
  }
  /* 129c98be mov edi, edi */
  EDI = (EDI);
L_129c98c0:;
  /* 129c98c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c98c2 jmp dword ptr [ecx*4 + 0x129c9990] */
  switch (ECX) {
    case 0: goto L_129c99d7;
    default: x86_unimpl("switch@0x129c98c2 out of table"); return;
  }
  /* 129c98c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129c98cc:;
  /* 129c98cc mov eax, edi */
  EAX = (EDI);
  /* 129c98ce mov edx, 3 */
  EDX = (0x3u);
  /* 129c98d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c98d6 jb 0x129c98e4 */
  if (C.cf) goto L_129c98e4;
  /* 129c98d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129c98db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c98dd jmp dword ptr [eax*4 + 0x129c98e8] */
  switch (EAX) {
    case 1: goto L_129c98f8;
    case 2: goto L_129c9918;
    case 3: goto L_129c9940;
    default: x86_unimpl("switch@0x129c98dd out of table"); return;
  }
L_129c98e4:;
  /* 129c98e4 jmp dword ptr [ecx*4 + 0x129c99e0] */
  switch (ECX) {
    case 0: goto L_129c99f0;
    case 1: goto L_129c99f8;
    case 2: goto L_129c9a08;
    case 3: goto L_129c9a1c;
    default: x86_unimpl("switch@0x129c98e4 out of table"); return;
  }
  /* 129c98eb nop  */
  /* nop */
L_129c98f8:;
  /* 129c98f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129c98fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129c98fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129c9900 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 129c9901 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c9904 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 129c9905 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9908 jb 0x129c98c0 */
  if (C.cf) goto L_129c98c0;
  /* 129c990a std  */
  C.df=1;
  /* 129c990b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c990d cld  */
  C.df=0;
  /* 129c990e jmp dword ptr [edx*4 + 0x129c99e0] */
  switch (EDX) {
    case 0: goto L_129c99f0;
    case 1: goto L_129c99f8;
    case 2: goto L_129c9a08;
    case 3: goto L_129c9a1c;
    default: x86_unimpl("switch@0x129c990e out of table"); return;
  }
  /* 129c9915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129c9918:;
  /* 129c9918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129c991b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129c991d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129c9920 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129c9923 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c9926 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129c9929 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c992c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c992f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9932 jb 0x129c98c0 */
  if (C.cf) goto L_129c98c0;
  /* 129c9934 std  */
  C.df=1;
  /* 129c9935 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c9937 cld  */
  C.df=0;
  /* 129c9938 jmp dword ptr [edx*4 + 0x129c99e0] */
  switch (EDX) {
    case 0: goto L_129c99f0;
    case 1: goto L_129c99f8;
    case 2: goto L_129c9a08;
    case 3: goto L_129c9a1c;
    default: x86_unimpl("switch@0x129c9938 out of table"); return;
  }
  /* 129c993f nop  */
  /* nop */
L_129c9940:;
  /* 129c9940 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129c9943 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9945 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129c9948 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129c994b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129c994e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129c9951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c9954 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129c9957 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c995a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c995d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9960 jb 0x129c98c0 */
  if (C.cf) goto L_129c98c0;
  /* 129c9966 std  */
  C.df=1;
  /* 129c9967 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129c9969 cld  */
  C.df=0;
  /* 129c996a jmp dword ptr [edx*4 + 0x129c99e0] */
  switch (EDX) {
    case 0: goto L_129c99f0;
    case 1: goto L_129c99f8;
    case 2: goto L_129c9a08;
    case 3: goto L_129c9a1c;
    default: x86_unimpl("switch@0x129c996a out of table"); return;
  }
  /* 129c9971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 129c9974 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129c9975 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129c9976 pushfd  */
  x86_unimpl("pushfd @ 0x129c9976");
  /* 129c9977 adc bl, byte ptr [ecx + ebx*4 - 0x665bed64] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ECX + EBX*4 + -0x665bed64))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 129c997e pushfd  */
  x86_unimpl("pushfd @ 0x129c997e");
  /* 129c997f adc ch, byte ptr [ecx + ebx*4 - 0x664bed64] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(ECX + EBX*4 + -0x664bed64))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 129c9986 pushfd  */
  x86_unimpl("pushfd @ 0x129c9986");
  /* 129c9987 adc bh, byte ptr [ecx + ebx*4 - 0x663bed64] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ECX + EBX*4 + -0x663bed64))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 129c998e pushfd  */
  x86_unimpl("pushfd @ 0x129c998e");
  /* 129c9994 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 129c9998 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 129c999c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 129c99a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 129c99a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 129c99a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 129c99ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 129c99b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 129c99b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 129c99b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 129c99bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 129c99c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 129c99c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 129c99c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 129c99cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 129c99d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c99d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129c99d7:;
  /* 129c99d7 jmp dword ptr [edx*4 + 0x129c99e0] */
  switch (EDX) {
    case 0: goto L_129c99f0;
    case 1: goto L_129c99f8;
    case 2: goto L_129c9a08;
    case 3: goto L_129c9a1c;
    default: x86_unimpl("switch@0x129c99d7 out of table"); return;
  }
  /* 129c99de mov edi, edi */
  EDI = (EDI);
L_129c99f0:;
  /* 129c99f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c99f3 pop esi */
  ESI = (pop32());
  /* 129c99f4 pop edi */
  EDI = (pop32());
  /* 129c99f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c99f6 ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c99f7 nop  */
  /* nop */
L_129c99f8:;
  /* 129c99f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129c99fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129c99fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9a01 pop esi */
  ESI = (pop32());
  /* 129c9a02 pop edi */
  EDI = (pop32());
  /* 129c9a03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c9a04 ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c9a05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129c9a08:;
  /* 129c9a08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129c9a0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129c9a0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129c9a11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129c9a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9a17 pop esi */
  ESI = (pop32());
  /* 129c9a18 pop edi */
  EDI = (pop32());
  /* 129c9a19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c9a1a ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
  /* 129c9a1b nop  */
  /* nop */
L_129c9a1c:;
  /* 129c9a1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129c9a1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129c9a22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129c9a25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129c9a28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129c9a2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129c9a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9a31 pop esi */
  ESI = (pop32());
  /* 129c9a32 pop edi */
  EDI = (pop32());
  /* 129c9a33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129c9a34 ret  */
  ESPCHK(0x129c9700u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x129c9a40 (104 bytes, 43 insns) */
void f_129c9a40(void) {
  FTRACE(0x129c9a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9a40 push ebx */
  push32((uint32_t)(EBX));
  /* 129c9a41 push esi */
  push32((uint32_t)(ESI));
  /* 129c9a42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 129c9a46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9a48 jne 0x129c9a62 */
  if (!C.zf) goto L_129c9a62;
  /* 129c9a4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 129c9a4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129c9a52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9a54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c9a56 mov ebx, eax */
  EBX = (EAX);
  /* 129c9a58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 129c9a5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c9a5e mov edx, ebx */
  EDX = (EBX);
  /* 129c9a60 jmp 0x129c9aa3 */
  goto L_129c9aa3;
L_129c9a62:;
  /* 129c9a62 mov ecx, eax */
  ECX = (EAX);
  /* 129c9a64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 129c9a68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 129c9a6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_129c9a70:;
  /* 129c9a70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129c9a72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 129c9a74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 129c9a76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 129c9a78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c9a7a jne 0x129c9a70 */
  if (!C.zf) goto L_129c9a70;
  /* 129c9a7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c9a7e mov esi, eax */
  ESI = (EAX);
  /* 129c9a80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129c9a84 mov ecx, eax */
  ECX = (EAX);
  /* 129c9a86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 129c9a8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129c9a8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9a8e jb 0x129c9a9e */
  if (C.cf) goto L_129c9a9e;
  /* 129c9a90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9a94 ja 0x129c9a9e */
  if ((!C.cf&&!C.zf)) goto L_129c9a9e;
  /* 129c9a96 jb 0x129c9a9f */
  if (C.cf) goto L_129c9a9f;
  /* 129c9a98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9a9c jbe 0x129c9a9f */
  if ((C.cf||C.zf)) goto L_129c9a9f;
L_129c9a9e:;
  /* 129c9a9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_129c9a9f:;
  /* 129c9a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9aa1 mov eax, esi */
  EAX = (ESI);
L_129c9aa3:;
  /* 129c9aa3 pop esi */
  ESI = (pop32());
  /* 129c9aa4 pop ebx */
  EBX = (pop32());
  /* 129c9aa5 ret 0x10 */
  ESPCHK(0x129c9a40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x129c9ab0 (117 bytes, 44 insns) */
void f_129c9ab0(void) {
  FTRACE(0x129c9ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 129c9ab1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 129c9ab5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9ab7 jne 0x129c9ad1 */
  if (!C.zf) goto L_129c9ad1;
  /* 129c9ab9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 129c9abd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 129c9ac1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9ac3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c9ac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c9ac9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c9acb mov eax, edx */
  EAX = (EDX);
  /* 129c9acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c9acf jmp 0x129c9b21 */
  goto L_129c9b21;
L_129c9ad1:;
  /* 129c9ad1 mov ecx, eax */
  ECX = (EAX);
  /* 129c9ad3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 129c9ad7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 129c9adb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_129c9adf:;
  /* 129c9adf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129c9ae1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 129c9ae3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 129c9ae5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 129c9ae7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c9ae9 jne 0x129c9adf */
  if (!C.zf) goto L_129c9adf;
  /* 129c9aeb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c9aed mov ecx, eax */
  ECX = (EAX);
  /* 129c9aef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129c9af3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 129c9af4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129c9af8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9afa jb 0x129c9b0a */
  if (C.cf) goto L_129c9b0a;
  /* 129c9afc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9b00 ja 0x129c9b0a */
  if ((!C.cf&&!C.zf)) goto L_129c9b0a;
  /* 129c9b02 jb 0x129c9b12 */
  if (C.cf) goto L_129c9b12;
  /* 129c9b04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9b08 jbe 0x129c9b12 */
  if ((C.cf||C.zf)) goto L_129c9b12;
L_129c9b0a:;
  /* 129c9b0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9b0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129c9b12:;
  /* 129c9b12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9b16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c9b1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c9b1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129c9b21:;
  /* 129c9b21 pop ebx */
  EBX = (pop32());
  /* 129c9b22 ret 0x10 */
  ESPCHK(0x129c9ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009b30 @ 0x129c9b30 (628 bytes, 214 insns) */
void f_129c9b30(void) {
  FTRACE(0x129c9b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9b30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c9b31 mov ebp, esp */
  EBP = (ESP);
  /* 129c9b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9b36 push ebx */
  push32((uint32_t)(EBX));
  /* 129c9b37 push esi */
  push32((uint32_t)(ESI));
  /* 129c9b38 push edi */
  push32((uint32_t)(EDI));
L_129c9b39:;
  /* 129c9b39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9b3d jne 0x129c9b5d */
  if (!C.zf) goto L_129c9b5d;
  /* 129c9b3f push 0x129e9ea4 */
  push32((uint32_t)(0x129e9ea4u));
  /* 129c9b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c9b46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 129c9b48 push 0x129e9e98 */
  push32((uint32_t)(0x129e9e98u));
  /* 129c9b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 129c9b4f call 0x129c1ee0 */
  push32(0x129c9b54u); f_129c1ee0();
  /* 129c9b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9b5a jne 0x129c9b5d */
  if (!C.zf) goto L_129c9b5d;
  /* 129c9b5c int3  */
  x86_unimpl("int3 @ 0x129c9b5c");
L_129c9b5d:;
  /* 129c9b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9b61 jne 0x129c9b39 */
  if (!C.zf) goto L_129c9b39;
  /* 129c9b63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c9b66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c9b69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9b6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c9b6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c9b72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9b75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c9b78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 129c9b7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c9b80 je 0x129c9b8f */
  if (C.zf) goto L_129c9b8f;
  /* 129c9b82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9b85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c9b88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 129c9b8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c9b8d je 0x129c9ba5 */
  if (C.zf) goto L_129c9ba5;
L_129c9b8f:;
  /* 129c9b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9b92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c9b95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129c9b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9b9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 129c9b9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c9ba0 jmp 0x129c9d9d */
  goto L_129c9d9d;
L_129c9ba5:;
  /* 129c9ba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9ba8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c9bab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129c9bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9bb0 je 0x129c9bfc */
  if (C.zf) goto L_129c9bfc;
  /* 129c9bb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bb5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129c9bbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c9bc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 129c9bc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9bc7 je 0x129c9be5 */
  if (C.zf) goto L_129c9be5;
  /* 129c9bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c9bd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c9bd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c9bda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 129c9bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9be0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129c9be3 jmp 0x129c9bfc */
  goto L_129c9bfc;
L_129c9be5:;
  /* 129c9be5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9be8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c9beb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 129c9bee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bf1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129c9bf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c9bf7 jmp 0x129c9d9d */
  goto L_129c9d9d;
L_129c9bfc:;
  /* 129c9bfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9bff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c9c02 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 129c9c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c08 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129c9c0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c0e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c9c11 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 129c9c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c17 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129c9c1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c1d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129c9c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c9c2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9c2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c9c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c9c37 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 129c9c3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c9c3f jne 0x129c9c6f */
  if (!C.zf) goto L_129c9c6f;
  /* 129c9c41 cmp dword ptr [ebp - 8], 0x129ed140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x129ed140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9c48 je 0x129c9c53 */
  if (C.zf) goto L_129c9c53;
  /* 129c9c4a cmp dword ptr [ebp - 8], 0x129ed160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x129ed160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9c51 jne 0x129c9c63 */
  if (!C.zf) goto L_129c9c63;
L_129c9c53:;
  /* 129c9c53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c9c56 push edx */
  push32((uint32_t)(EDX));
  /* 129c9c57 call 0x129cbaa0 */
  push32(0x129c9c5cu); f_129cbaa0();
  /* 129c9c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9c61 jne 0x129c9c6f */
  if (!C.zf) goto L_129c9c6f;
L_129c9c63:;
  /* 129c9c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c66 push eax */
  push32((uint32_t)(EAX));
  /* 129c9c67 call 0x129cb9d0 */
  push32(0x129c9c6cu); f_129cb9d0();
  /* 129c9c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c9c6f:;
  /* 129c9c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c72 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c9c75 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 129c9c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c9c7d je 0x129c9d5b */
  if (C.zf) goto L_129c9d5b;
L_129c9c83:;
  /* 129c9c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9c89 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 129c9c8b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9c8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c9c90 jge 0x129c9cb3 */
  if ((C.sf==C.of)) goto L_129c9cb3;
  /* 129c9c92 push 0x129e9e58 */
  push32((uint32_t)(0x129e9e58u));
  /* 129c9c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c9c99 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 129c9c9e push 0x129e9e98 */
  push32((uint32_t)(0x129e9e98u));
  /* 129c9ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c9ca5 call 0x129c1ee0 */
  push32(0x129c9caau); f_129c1ee0();
  /* 129c9caa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9cad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9cb0 jne 0x129c9cb3 */
  if (!C.zf) goto L_129c9cb3;
  /* 129c9cb2 int3  */
  x86_unimpl("int3 @ 0x129c9cb2");
L_129c9cb3:;
  /* 129c9cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9cb7 jne 0x129c9c83 */
  if (!C.zf) goto L_129c9c83;
  /* 129c9cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9cbf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129c9cc1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9cc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c9cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9cca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c9ccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9cd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c9cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9cd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129c9cdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9ce1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c9ce4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9ce8 jle 0x129c9d06 */
  if ((C.zf||C.sf!=C.of)) goto L_129c9d06;
  /* 129c9cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9ced push ecx */
  push32((uint32_t)(ECX));
  /* 129c9cee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9cf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c9cf4 push eax */
  push32((uint32_t)(EAX));
  /* 129c9cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c9cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 129c9cf9 call 0x129cb6c0 */
  push32(0x129c9cfeu); f_129cb6c0();
  /* 129c9cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9d01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c9d04 jmp 0x129c9d4e */
  goto L_129c9d4e;
L_129c9d06:;
  /* 129c9d06 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9d0a je 0x129c9d29 */
  if (C.zf) goto L_129c9d29;
  /* 129c9d0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c9d0f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 129c9d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c9d15 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 129c9d18 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c9d1b mov ecx, dword ptr [edx*4 + 0x129efe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129c9d22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9d24 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129c9d27 jmp 0x129c9d30 */
  goto L_129c9d30;
L_129c9d29:;
  /* 129c9d29 mov dword ptr [ebp - 0x14], 0x129eca60 */
  w32((uint32_t)(EBP + -0x14), (0x129eca60u));
L_129c9d30:;
  /* 129c9d30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c9d33 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 129c9d37 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 129c9d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9d3c je 0x129c9d4e */
  if (C.zf) goto L_129c9d4e;
  /* 129c9d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 129c9d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c9d42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c9d45 push ecx */
  push32((uint32_t)(ECX));
  /* 129c9d46 call 0x129cb570 */
  push32(0x129c9d4bu); f_129cb570();
  /* 129c9d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c9d4e:;
  /* 129c9d4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9d51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c9d54 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 129c9d57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 129c9d59 jmp 0x129c9d79 */
  goto L_129c9d79;
L_129c9d5b:;
  /* 129c9d5b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129c9d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9d65 push edx */
  push32((uint32_t)(EDX));
  /* 129c9d66 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 129c9d69 push eax */
  push32((uint32_t)(EAX));
  /* 129c9d6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c9d6d push ecx */
  push32((uint32_t)(ECX));
  /* 129c9d6e call 0x129cb6c0 */
  push32(0x129c9d73u); f_129cb6c0();
  /* 129c9d73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9d76 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129c9d79:;
  /* 129c9d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c9d7c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9d7f je 0x129c9d95 */
  if (C.zf) goto L_129c9d95;
  /* 129c9d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9d84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c9d87 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 129c9d8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9d8d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 129c9d90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c9d93 jmp 0x129c9d9d */
  goto L_129c9d9d;
L_129c9d95:;
  /* 129c9d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9d98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_129c9d9d:;
  /* 129c9d9d pop edi */
  EDI = (pop32());
  /* 129c9d9e pop esi */
  ESI = (pop32());
  /* 129c9d9f pop ebx */
  EBX = (pop32());
  /* 129c9da0 mov esp, ebp */
  ESP = (EBP);
  /* 129c9da2 pop ebp */
  EBP = (pop32());
  /* 129c9da3 ret  */
  ESPCHK(0x129c9b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009db0 @ 0x129c9db0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_129c9db0(void) {
  FTRACE(0x129c9db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c9db0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c9db1 mov ebp, esp */
  EBP = (ESP);
  /* 129c9db3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9db9 push ebx */
  push32((uint32_t)(EBX));
  /* 129c9dba push esi */
  push32((uint32_t)(ESI));
  /* 129c9dbb push edi */
  push32((uint32_t)(EDI));
  /* 129c9dbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129c9dc3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 129c9dcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_129c9dd4:;
  /* 129c9dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c9dd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129c9dd9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 129c9ddc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9de0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c9de3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9de6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 129c9de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c9deb je 0x129ca9c7 */
  if (C.zf) goto L_129ca9c7;
  /* 129c9df1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9df8 jl 0x129ca9c7 */
  if ((C.sf!=C.of)) goto L_129ca9c7;
  /* 129c9dfe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9e02 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9e05 jl 0x129c9e26 */
  if ((C.sf!=C.of)) goto L_129c9e26;
  /* 129c9e07 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9e0b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9e0e jg 0x129c9e26 */
  if ((!C.zf&&C.sf==C.of)) goto L_129c9e26;
  /* 129c9e10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9e14 movsx ecx, byte ptr [eax + 0x129e9e90] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x129e9e90))));
  /* 129c9e1b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 129c9e1e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 129c9e24 jmp 0x129c9e30 */
  goto L_129c9e30;
L_129c9e26:;
  /* 129c9e26 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_129c9e30:;
  /* 129c9e30 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 129c9e36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c9e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c9e3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c9e3f movsx edx, byte ptr [ecx + eax*8 + 0x129e9eb0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x129e9eb0))));
  /* 129c9e47 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129c9e4a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129c9e4d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c9e50 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 129c9e56 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9e5d ja 0x129ca9c2 */
  if ((!C.cf&&!C.zf)) goto L_129ca9c2;
  /* 129c9e63 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 129c9e69 jmp dword ptr [ecx*4 + 0x129ca9d4] */
  switch (ECX) {
    case 0: goto L_129c9e70;
    case 1: goto L_129c9f0a;
    case 2: goto L_129c9f4c;
    case 3: goto L_129c9fbb;
    case 4: goto L_129ca013;
    case 5: goto L_129ca022;
    case 6: goto L_129ca06e;
    case 7: goto L_129ca101;
    case 8: goto L_129c9f98;
    case 9: goto L_129c9fa3;
    case 10: goto L_129c9f8e;
    case 11: goto L_129c9f83;
    case 12: goto L_129c9fae;
    case 13: goto L_129c9fb6;
    default: x86_unimpl("switch@0x129c9e69 out of table"); return;
  }
L_129c9e70:;
  /* 129c9e70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 129c9e77 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c9e7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c9e80 mov eax, dword ptr [0x129ecc98] */
  EAX = (r32((uint32_t)(0x129ecc98)));
  /* 129c9e85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c9e87 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129c9e8b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 129c9e91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c9e93 je 0x129c9eed */
  if (C.zf) goto L_129c9eed;
  /* 129c9e95 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 129c9e9b push edx */
  push32((uint32_t)(EDX));
  /* 129c9e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9e9f push eax */
  push32((uint32_t)(EAX));
  /* 129c9ea0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 129c9ea5 call 0x129caae0 */
  push32(0x129c9eaau); f_129caae0();
  /* 129c9eaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9ead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c9eb0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129c9eb2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 129c9eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c9eb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9ebb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_129c9ebe:;
  /* 129c9ebe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c9ec4 jne 0x129c9ee7 */
  if (!C.zf) goto L_129c9ee7;
  /* 129c9ec6 push 0x129e9f30 */
  push32((uint32_t)(0x129e9f30u));
  /* 129c9ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 129c9ecd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 129c9ed2 push 0x129e9f24 */
  push32((uint32_t)(0x129e9f24u));
  /* 129c9ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c9ed9 call 0x129c1ee0 */
  push32(0x129c9edeu); f_129c1ee0();
  /* 129c9ede add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9ee4 jne 0x129c9ee7 */
  if (!C.zf) goto L_129c9ee7;
  /* 129c9ee6 int3  */
  x86_unimpl("int3 @ 0x129c9ee6");
L_129c9ee7:;
  /* 129c9ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c9eeb jne 0x129c9ebe */
  if (!C.zf) goto L_129c9ebe;
L_129c9eed:;
  /* 129c9eed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 129c9ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c9ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c9ef7 push edx */
  push32((uint32_t)(EDX));
  /* 129c9ef8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9efc push eax */
  push32((uint32_t)(EAX));
  /* 129c9efd call 0x129caae0 */
  push32(0x129c9f02u); f_129caae0();
  /* 129c9f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9f05 jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129c9f0a:;
  /* 129c9f0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c9f11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c9f14 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 129c9f1a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 129c9f20 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 129c9f26 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 129c9f2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c9f2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c9f36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 129c9f40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 129c9f47 jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129c9f4c:;
  /* 129c9f4c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9f50 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 129c9f56 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 129c9f5c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c9f5f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 129c9f65 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9f6c ja 0x129c9fb6 */
  if ((!C.cf&&!C.zf)) goto L_129c9fb6;
  /* 129c9f6e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 129c9f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c9f76 mov al, byte ptr [ecx + 0x129caa0c] */
  AL = (r8((uint32_t)(ECX + 0x129caa0c)));
  /* 129c9f7c jmp dword ptr [eax*4 + 0x129ca9f4] */
  switch (EAX) {
    case 0: goto L_129c9f98;
    case 1: goto L_129c9fa3;
    case 2: goto L_129c9f8e;
    case 3: goto L_129c9f83;
    case 4: goto L_129c9fae;
    case 5: goto L_129c9fb6;
    default: x86_unimpl("switch@0x129c9f7c out of table"); return;
  }
L_129c9f83:;
  /* 129c9f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9f86 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129c9f89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c9f8c jmp 0x129c9fb6 */
  goto L_129c9fb6;
L_129c9f8e:;
  /* 129c9f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9f91 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 129c9f93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c9f96 jmp 0x129c9fb6 */
  goto L_129c9fb6;
L_129c9f98:;
  /* 129c9f98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9f9b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129c9f9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c9fa1 jmp 0x129c9fb6 */
  goto L_129c9fb6;
L_129c9fa3:;
  /* 129c9fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9fa6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 129c9fa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c9fac jmp 0x129c9fb6 */
  goto L_129c9fb6;
L_129c9fae:;
  /* 129c9fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9fb1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 129c9fb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c9fb6:;
  /* 129c9fb6 jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129c9fbb:;
  /* 129c9fbb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129c9fbf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9fc2 jne 0x129c9ff7 */
  if (!C.zf) goto L_129c9ff7;
  /* 129c9fc4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 129c9fc7 push edx */
  push32((uint32_t)(EDX));
  /* 129c9fc8 call 0x129cabf0 */
  push32(0x129c9fcdu); f_129cabf0();
  /* 129c9fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c9fd0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 129c9fd6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c9fdd jge 0x129c9ff5 */
  if ((C.sf==C.of)) goto L_129c9ff5;
  /* 129c9fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c9fe2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 129c9fe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c9fe7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 129c9fed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c9fef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_129c9ff5:;
  /* 129c9ff5 jmp 0x129ca00e */
  goto L_129ca00e;
L_129c9ff7:;
  /* 129c9ff7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 129c9ffd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ca000 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca004 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 129ca008 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_129ca00e:;
  /* 129ca00e jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129ca013:;
  /* 129ca013 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 129ca01d jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129ca022:;
  /* 129ca022 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca026 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca029 jne 0x129ca052 */
  if (!C.zf) goto L_129ca052;
  /* 129ca02b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 129ca02e push eax */
  push32((uint32_t)(EAX));
  /* 129ca02f call 0x129cabf0 */
  push32(0x129ca034u); f_129cabf0();
  /* 129ca034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca037 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 129ca03d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca044 jge 0x129ca050 */
  if ((C.sf==C.of)) goto L_129ca050;
  /* 129ca046 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_129ca050:;
  /* 129ca050 jmp 0x129ca069 */
  goto L_129ca069;
L_129ca052:;
  /* 129ca052 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 129ca058 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ca05b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca05f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 129ca063 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_129ca069:;
  /* 129ca069 jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129ca06e:;
  /* 129ca06e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca072 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 129ca078 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 129ca07e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca081 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 129ca087 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca08e ja 0x129ca0fc */
  if ((!C.cf&&!C.zf)) goto L_129ca0fc;
  /* 129ca090 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 129ca096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ca098 mov al, byte ptr [ecx + 0x129caa31] */
  AL = (r8((uint32_t)(ECX + 0x129caa31)));
  /* 129ca09e jmp dword ptr [eax*4 + 0x129caa1d] */
  switch (EAX) {
    case 0: goto L_129ca0b0;
    case 1: goto L_129ca0e9;
    case 2: goto L_129ca0a5;
    case 3: goto L_129ca0f3;
    case 4: goto L_129ca0fc;
    default: x86_unimpl("switch@0x129ca09e out of table"); return;
  }
L_129ca0a5:;
  /* 129ca0a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca0a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca0ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129ca0ae jmp 0x129ca0fc */
  goto L_129ca0fc;
L_129ca0b0:;
  /* 129ca0b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ca0b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129ca0b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca0b9 jne 0x129ca0db */
  if (!C.zf) goto L_129ca0db;
  /* 129ca0bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ca0be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129ca0c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca0c5 jne 0x129ca0db */
  if (!C.zf) goto L_129ca0db;
  /* 129ca0c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ca0ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca0cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 129ca0d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca0d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 129ca0d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129ca0d9 jmp 0x129ca0e7 */
  goto L_129ca0e7;
L_129ca0db:;
  /* 129ca0db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 129ca0e2 jmp 0x129c9e70 */
  goto L_129c9e70;
L_129ca0e7:;
  /* 129ca0e7 jmp 0x129ca0fc */
  goto L_129ca0fc;
L_129ca0e9:;
  /* 129ca0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca0ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129ca0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129ca0f1 jmp 0x129ca0fc */
  goto L_129ca0fc;
L_129ca0f3:;
  /* 129ca0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca0f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 129ca0f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129ca0fc:;
  /* 129ca0fc jmp 0x129ca9c2 */
  goto L_129ca9c2;
L_129ca101:;
  /* 129ca101 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca105 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 129ca10b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 129ca111 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca114 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 129ca11a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca121 ja 0x129ca7e7 */
  if ((!C.cf&&!C.zf)) goto L_129ca7e7;
  /* 129ca127 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 129ca12d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ca12f mov cl, byte ptr [edx + 0x129caa9c] */
  CL = (r8((uint32_t)(EDX + 0x129caa9c)));
  /* 129ca135 jmp dword ptr [ecx*4 + 0x129caa60] */
  switch (ECX) {
    case 0: goto L_129ca13c;
    case 1: goto L_129ca3d0;
    case 2: goto L_129ca260;
    case 3: goto L_129ca509;
    case 4: goto L_129ca1cb;
    case 5: goto L_129ca151;
    case 6: goto L_129ca4db;
    case 7: goto L_129ca3e0;
    case 8: goto L_129ca385;
    case 9: goto L_129ca555;
    case 10: goto L_129ca4ff;
    case 11: goto L_129ca276;
    case 12: goto L_129ca4f3;
    case 13: goto L_129ca515;
    case 14: goto L_129ca7e7;
    default: x86_unimpl("switch@0x129ca135 out of table"); return;
  }
L_129ca13c:;
  /* 129ca13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca13f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca146 jne 0x129ca151 */
  if (!C.zf) goto L_129ca151;
  /* 129ca148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca14b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 129ca14e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129ca151:;
  /* 129ca151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca154 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca15a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca15c je 0x129ca197 */
  if (C.zf) goto L_129ca197;
  /* 129ca15e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 129ca161 push eax */
  push32((uint32_t)(EAX));
  /* 129ca162 call 0x129cac30 */
  push32(0x129ca167u); f_129cac30();
  /* 129ca167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca16a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 129ca16e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 129ca172 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca173 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 129ca179 push edx */
  push32((uint32_t)(EDX));
  /* 129ca17a call 0x129cbd10 */
  push32(0x129ca17fu); f_129cbd10();
  /* 129ca17f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca182 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129ca185 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca189 jge 0x129ca195 */
  if ((C.sf==C.of)) goto L_129ca195;
  /* 129ca18b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_129ca195:;
  /* 129ca195 jmp 0x129ca1bd */
  goto L_129ca1bd;
L_129ca197:;
  /* 129ca197 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 129ca19a push eax */
  push32((uint32_t)(EAX));
  /* 129ca19b call 0x129cabf0 */
  push32(0x129ca1a0u); f_129cabf0();
  /* 129ca1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca1a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 129ca1aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 129ca1b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 129ca1b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_129ca1bd:;
  /* 129ca1bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 129ca1c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129ca1c6 jmp 0x129ca7e7 */
  goto L_129ca7e7;
L_129ca1cb:;
  /* 129ca1cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 129ca1ce push eax */
  push32((uint32_t)(EAX));
  /* 129ca1cf call 0x129cabf0 */
  push32(0x129ca1d4u); f_129cabf0();
  /* 129ca1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca1d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 129ca1dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca1e4 je 0x129ca1f2 */
  if (C.zf) goto L_129ca1f2;
  /* 129ca1e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 129ca1ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca1f0 jne 0x129ca20c */
  if (!C.zf) goto L_129ca20c;
L_129ca1f2:;
  /* 129ca1f2 mov edx, dword ptr [0x129ecfb0] */
  EDX = (r32((uint32_t)(0x129ecfb0)));
  /* 129ca1f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129ca1fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca1fe push eax */
  push32((uint32_t)(EAX));
  /* 129ca1ff call 0x129c5c50 */
  push32(0x129ca204u); f_129c5c50();
  /* 129ca204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca207 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129ca20a jmp 0x129ca25b */
  goto L_129ca25b;
L_129ca20c:;
  /* 129ca20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca20f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ca217 je 0x129ca23c */
  if (C.zf) goto L_129ca23c;
  /* 129ca219 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 129ca21f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129ca222 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129ca225 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 129ca22b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 129ca22e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 129ca230 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 129ca233 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 129ca23a jmp 0x129ca25b */
  goto L_129ca25b;
L_129ca23c:;
  /* 129ca23c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 129ca243 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 129ca249 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129ca24c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129ca24f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 129ca255 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 129ca258 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129ca25b:;
  /* 129ca25b jmp 0x129ca7e7 */
  goto L_129ca7e7;
L_129ca260:;
  /* 129ca260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca263 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ca26b jne 0x129ca276 */
  if (!C.zf) goto L_129ca276;
  /* 129ca26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca270 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 129ca273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129ca276:;
  /* 129ca276 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca27d jne 0x129ca28b */
  if (!C.zf) goto L_129ca28b;
  /* 129ca27f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 129ca289 jmp 0x129ca297 */
  goto L_129ca297;
L_129ca28b:;
  /* 129ca28b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 129ca291 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_129ca297:;
  /* 129ca297 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 129ca29d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 129ca2a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 129ca2a6 push edx */
  push32((uint32_t)(EDX));
  /* 129ca2a7 call 0x129cabf0 */
  push32(0x129ca2acu); f_129cabf0();
  /* 129ca2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca2af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129ca2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca2b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca2bc je 0x129ca326 */
  if (C.zf) goto L_129ca326;
  /* 129ca2be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca2c2 jne 0x129ca2cd */
  if (!C.zf) goto L_129ca2cd;
  /* 129ca2c4 mov ecx, dword ptr [0x129ecfb4] */
  ECX = (r32((uint32_t)(0x129ecfb4)));
  /* 129ca2ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_129ca2cd:;
  /* 129ca2cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 129ca2d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca2d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_129ca2dd:;
  /* 129ca2dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 129ca2e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 129ca2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca2ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 129ca2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca2f4 je 0x129ca316 */
  if (C.zf) goto L_129ca316;
  /* 129ca2f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 129ca2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ca2fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 129ca301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca303 je 0x129ca316 */
  if (C.zf) goto L_129ca316;
  /* 129ca305 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 129ca30b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca30e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 129ca314 jmp 0x129ca2dd */
  goto L_129ca2dd;
L_129ca316:;
  /* 129ca316 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 129ca31c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca31f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 129ca321 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 129ca324 jmp 0x129ca380 */
  goto L_129ca380;
L_129ca326:;
  /* 129ca326 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca32a jne 0x129ca334 */
  if (!C.zf) goto L_129ca334;
  /* 129ca32c mov eax, dword ptr [0x129ecfb0] */
  EAX = (r32((uint32_t)(0x129ecfb0)));
  /* 129ca331 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_129ca334:;
  /* 129ca334 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca337 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_129ca33d:;
  /* 129ca33d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 129ca343 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 129ca349 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca34c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 129ca352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca354 je 0x129ca374 */
  if (C.zf) goto L_129ca374;
  /* 129ca356 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 129ca35c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129ca35f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca361 je 0x129ca374 */
  if (C.zf) goto L_129ca374;
  /* 129ca363 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 129ca369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca36c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 129ca372 jmp 0x129ca33d */
  goto L_129ca33d;
L_129ca374:;
  /* 129ca374 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 129ca37a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca37d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_129ca380:;
  /* 129ca380 jmp 0x129ca7e7 */
  goto L_129ca7e7;
L_129ca385:;
  /* 129ca385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 129ca388 push edx */
  push32((uint32_t)(EDX));
  /* 129ca389 call 0x129cabf0 */
  push32(0x129ca38eu); f_129cabf0();
  /* 129ca38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca391 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 129ca397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca39a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca39f je 0x129ca3b3 */
  if (C.zf) goto L_129ca3b3;
  /* 129ca3a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 129ca3a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 129ca3ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 129ca3b1 jmp 0x129ca3c1 */
  goto L_129ca3c1;
L_129ca3b3:;
  /* 129ca3b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 129ca3b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 129ca3bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_129ca3c1:;
  /* 129ca3c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 129ca3cb jmp 0x129ca7e7 */
  goto L_129ca7e7;
L_129ca3d0:;
  /* 129ca3d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 129ca3d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 129ca3da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 129ca3dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_129ca3e0:;
  /* 129ca3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca3e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 129ca3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129ca3e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 129ca3ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129ca3f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca3f8 jge 0x129ca406 */
  if ((C.sf==C.of)) goto L_129ca406;
  /* 129ca3fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 129ca404 jmp 0x129ca422 */
  goto L_129ca422;
L_129ca406:;
  /* 129ca406 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca40d jne 0x129ca422 */
  if (!C.zf) goto L_129ca422;
  /* 129ca40f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca413 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca416 jne 0x129ca422 */
  if (!C.zf) goto L_129ca422;
  /* 129ca418 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_129ca422:;
  /* 129ca422 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129ca425 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca428 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 129ca42b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129ca42e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129ca433 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129ca436 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 129ca43c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 129ca442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ca445 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca446 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 129ca44c push edx */
  push32((uint32_t)(EDX));
  /* 129ca44d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca451 push eax */
  push32((uint32_t)(EAX));
  /* 129ca452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca455 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca456 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 129ca45c push edx */
  push32((uint32_t)(EDX));
  /* 129ca45d call dword ptr [0x129ed3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ed3a0))), 0x129ca463u);
  /* 129ca463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca469 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca470 je 0x129ca488 */
  if (C.zf) goto L_129ca488;
  /* 129ca472 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca479 jne 0x129ca488 */
  if (!C.zf) goto L_129ca488;
  /* 129ca47b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca47e push ecx */
  push32((uint32_t)(ECX));
  /* 129ca47f call dword ptr [0x129ed3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ed3ac))), 0x129ca485u);
  /* 129ca485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ca488:;
  /* 129ca488 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129ca48c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca48f jne 0x129ca4aa */
  if (!C.zf) goto L_129ca4aa;
  /* 129ca491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca494 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca49b jne 0x129ca4aa */
  if (!C.zf) goto L_129ca4aa;
  /* 129ca49d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca4a1 call dword ptr [0x129ed3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ed3a4))), 0x129ca4a7u);
  /* 129ca4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ca4aa:;
  /* 129ca4aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca4ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ca4b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca4b3 jne 0x129ca4c7 */
  if (!C.zf) goto L_129ca4c7;
  /* 129ca4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca4b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 129ca4bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129ca4be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca4c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_129ca4c7:;
  /* 129ca4c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca4ca push eax */
  push32((uint32_t)(EAX));
  /* 129ca4cb call 0x129c5c50 */
  push32(0x129ca4d0u); f_129c5c50();
  /* 129ca4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129ca4d6 jmp 0x129ca7e7 */
  goto L_129ca7e7;
L_129ca4db:;
  /* 129ca4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca4de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca4e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129ca4e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 129ca4ee jmp 0x129ca575 */
  goto L_129ca575;
L_129ca4f3:;
  /* 129ca4f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 129ca4fd jmp 0x129ca575 */
  goto L_129ca575;
L_129ca4ff:;
  /* 129ca4ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_129ca509:;
  /* 129ca509 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 129ca513 jmp 0x129ca51f */
  goto L_129ca51f;
L_129ca515:;
  /* 129ca515 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_129ca51f:;
  /* 129ca51f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 129ca529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca52c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca532 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca534 je 0x129ca553 */
  if (C.zf) goto L_129ca553;
  /* 129ca536 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 129ca53d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 129ca543 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca546 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 129ca54c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_129ca553:;
  /* 129ca553 jmp 0x129ca575 */
  goto L_129ca575;
L_129ca555:;
  /* 129ca555 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 129ca55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca562 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ca56a je 0x129ca575 */
  if (C.zf) goto L_129ca575;
  /* 129ca56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca56f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 129ca572 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129ca575:;
  /* 129ca575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca578 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca57f je 0x129ca59e */
  if (C.zf) goto L_129ca59e;
  /* 129ca581 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 129ca584 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca585 call 0x129cac10 */
  push32(0x129ca58au); f_129cac10();
  /* 129ca58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca58d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 129ca593 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 129ca599 jmp 0x129ca62f */
  goto L_129ca62f;
L_129ca59e:;
  /* 129ca59e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca5a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca5a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca5a6 je 0x129ca5f0 */
  if (C.zf) goto L_129ca5f0;
  /* 129ca5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca5ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca5b0 je 0x129ca5d0 */
  if (C.zf) goto L_129ca5d0;
  /* 129ca5b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 129ca5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca5b6 call 0x129cabf0 */
  push32(0x129ca5bbu); f_129cabf0();
  /* 129ca5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca5be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 129ca5c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129ca5c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 129ca5c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 129ca5ce jmp 0x129ca5ee */
  goto L_129ca5ee;
L_129ca5d0:;
  /* 129ca5d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 129ca5d3 push edx */
  push32((uint32_t)(EDX));
  /* 129ca5d4 call 0x129cabf0 */
  push32(0x129ca5d9u); f_129cabf0();
  /* 129ca5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca5dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ca5e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129ca5e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 129ca5e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_129ca5ee:;
  /* 129ca5ee jmp 0x129ca62f */
  goto L_129ca62f;
L_129ca5f0:;
  /* 129ca5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca5f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca5f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca5f8 je 0x129ca615 */
  if (C.zf) goto L_129ca615;
  /* 129ca5fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 129ca5fd push ecx */
  push32((uint32_t)(ECX));
  /* 129ca5fe call 0x129cabf0 */
  push32(0x129ca603u); f_129cabf0();
  /* 129ca603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129ca607 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 129ca60d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 129ca613 jmp 0x129ca62f */
  goto L_129ca62f;
L_129ca615:;
  /* 129ca615 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 129ca618 push edx */
  push32((uint32_t)(EDX));
  /* 129ca619 call 0x129cabf0 */
  push32(0x129ca61eu); f_129cabf0();
  /* 129ca61e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ca623 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 129ca629 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_129ca62f:;
  /* 129ca62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca632 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca637 je 0x129ca677 */
  if (C.zf) goto L_129ca677;
  /* 129ca639 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca640 jg 0x129ca677 */
  if ((!C.zf&&C.sf==C.of)) goto L_129ca677;
  /* 129ca642 jl 0x129ca64d */
  if ((C.sf!=C.of)) goto L_129ca64d;
  /* 129ca644 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca64b jae 0x129ca677 */
  if (!C.cf) goto L_129ca677;
L_129ca64d:;
  /* 129ca64d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 129ca653 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129ca655 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 129ca65b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca65e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129ca660 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 129ca666 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 129ca66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca66f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 129ca672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129ca675 jmp 0x129ca68f */
  goto L_129ca68f;
L_129ca677:;
  /* 129ca677 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 129ca67d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 129ca683 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 129ca689 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_129ca68f:;
  /* 129ca68f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca692 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca69a jne 0x129ca6b7 */
  if (!C.zf) goto L_129ca6b7;
  /* 129ca69c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 129ca6a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 129ca6a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca6ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 129ca6b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_129ca6b7:;
  /* 129ca6b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca6be jge 0x129ca6cc */
  if ((C.sf==C.of)) goto L_129ca6cc;
  /* 129ca6c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 129ca6ca jmp 0x129ca6d5 */
  goto L_129ca6d5;
L_129ca6cc:;
  /* 129ca6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca6cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca6d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129ca6d5:;
  /* 129ca6d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 129ca6db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 129ca6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca6e3 jne 0x129ca6ec */
  if (!C.zf) goto L_129ca6ec;
  /* 129ca6e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_129ca6ec:;
  /* 129ca6ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 129ca6ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_129ca6f2:;
  /* 129ca6f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 129ca6f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 129ca6fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca701 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 129ca707 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca709 jg 0x129ca71f */
  if ((!C.zf&&C.sf==C.of)) goto L_129ca71f;
  /* 129ca70b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 129ca711 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 129ca717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ca719 je 0x129ca7a0 */
  if (C.zf) goto L_129ca7a0;
L_129ca71f:;
  /* 129ca71f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 129ca725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129ca726 push edx */
  push32((uint32_t)(EDX));
  /* 129ca727 push eax */
  push32((uint32_t)(EAX));
  /* 129ca728 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 129ca72e push edx */
  push32((uint32_t)(EDX));
  /* 129ca72f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 129ca735 push eax */
  push32((uint32_t)(EAX));
  /* 129ca736 call 0x129c9ab0 */
  push32(0x129ca73bu); f_129c9ab0();
  /* 129ca73b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca73e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 129ca744 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 129ca74a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129ca74b push edx */
  push32((uint32_t)(EDX));
  /* 129ca74c push eax */
  push32((uint32_t)(EAX));
  /* 129ca74d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 129ca753 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca754 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 129ca75a push edx */
  push32((uint32_t)(EDX));
  /* 129ca75b call 0x129c9a40 */
  push32(0x129ca760u); f_129c9a40();
  /* 129ca760 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 129ca766 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 129ca76c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca773 jle 0x129ca787 */
  if ((C.zf||C.sf!=C.of)) goto L_129ca787;
  /* 129ca775 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 129ca77b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca781 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_129ca787:;
  /* 129ca787 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca78a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 129ca790 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 129ca792 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca795 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca798 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129ca79b jmp 0x129ca6f2 */
  goto L_129ca6f2;
L_129ca7a0:;
  /* 129ca7a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 129ca7a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca7a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129ca7a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca7ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca7af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129ca7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca7b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca7bc je 0x129ca7e7 */
  if (C.zf) goto L_129ca7e7;
  /* 129ca7be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca7c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129ca7c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca7c7 jne 0x129ca7cf */
  if (!C.zf) goto L_129ca7cf;
  /* 129ca7c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca7cd jne 0x129ca7e7 */
  if (!C.zf) goto L_129ca7e7;
L_129ca7cf:;
  /* 129ca7cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca7d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca7d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129ca7d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca7db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 129ca7de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129ca7e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca7e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_129ca7e7:;
  /* 129ca7e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca7ee jne 0x129ca9c2 */
  if (!C.zf) goto L_129ca9c2;
  /* 129ca7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca7f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca7fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca7fc je 0x129ca84d */
  if (C.zf) goto L_129ca84d;
  /* 129ca7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca801 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ca809 je 0x129ca81b */
  if (C.zf) goto L_129ca81b;
  /* 129ca80b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 129ca812 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 129ca819 jmp 0x129ca84d */
  goto L_129ca84d;
L_129ca81b:;
  /* 129ca81b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca81e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca823 je 0x129ca835 */
  if (C.zf) goto L_129ca835;
  /* 129ca825 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 129ca82c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 129ca833 jmp 0x129ca84d */
  goto L_129ca84d;
L_129ca835:;
  /* 129ca835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca838 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 129ca83b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ca83d je 0x129ca84d */
  if (C.zf) goto L_129ca84d;
  /* 129ca83f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 129ca846 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_129ca84d:;
  /* 129ca84d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 129ca853 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca856 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca859 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 129ca85f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca862 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 129ca865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca867 jne 0x129ca885 */
  if (!C.zf) goto L_129ca885;
  /* 129ca869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 129ca86f push eax */
  push32((uint32_t)(EAX));
  /* 129ca870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ca873 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca874 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 129ca87a push edx */
  push32((uint32_t)(EDX));
  /* 129ca87b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 129ca87d call 0x129cab60 */
  push32(0x129ca882u); f_129cab60();
  /* 129ca882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ca885:;
  /* 129ca885 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 129ca88b push eax */
  push32((uint32_t)(EAX));
  /* 129ca88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ca88f push ecx */
  push32((uint32_t)(ECX));
  /* 129ca890 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ca893 push edx */
  push32((uint32_t)(EDX));
  /* 129ca894 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 129ca89a push eax */
  push32((uint32_t)(EAX));
  /* 129ca89b call 0x129caba0 */
  push32(0x129ca8a0u); f_129caba0();
  /* 129ca8a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca8a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 129ca8a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ca8ab je 0x129ca8d3 */
  if (C.zf) goto L_129ca8d3;
  /* 129ca8ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca8b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca8b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca8b5 jne 0x129ca8d3 */
  if (!C.zf) goto L_129ca8d3;
  /* 129ca8b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 129ca8bd push eax */
  push32((uint32_t)(EAX));
  /* 129ca8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ca8c1 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca8c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 129ca8c8 push edx */
  push32((uint32_t)(EDX));
  /* 129ca8c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 129ca8cb call 0x129cab60 */
  push32(0x129ca8d0u); f_129cab60();
  /* 129ca8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ca8d3:;
  /* 129ca8d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca8d7 je 0x129ca981 */
  if (C.zf) goto L_129ca981;
  /* 129ca8dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca8e1 jle 0x129ca981 */
  if ((C.zf||C.sf!=C.of)) goto L_129ca981;
  /* 129ca8e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca8ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 129ca8f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129ca8f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_129ca8f9:;
  /* 129ca8f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 129ca8ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 129ca905 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ca908 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 129ca90e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca910 je 0x129ca97f */
  if (C.zf) goto L_129ca97f;
  /* 129ca912 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 129ca918 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129ca91b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 129ca922 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 129ca929 push eax */
  push32((uint32_t)(EAX));
  /* 129ca92a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 129ca930 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca931 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 129ca937 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca93a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 129ca940 call 0x129cbd10 */
  push32(0x129ca945u); f_129cbd10();
  /* 129ca945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca948 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 129ca94e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ca955 jg 0x129ca959 */
  if ((!C.zf&&C.sf==C.of)) goto L_129ca959;
  /* 129ca957 jmp 0x129ca97f */
  goto L_129ca97f;
L_129ca959:;
  /* 129ca959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 129ca95f push eax */
  push32((uint32_t)(EAX));
  /* 129ca960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ca963 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca964 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 129ca96a push edx */
  push32((uint32_t)(EDX));
  /* 129ca96b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 129ca971 push eax */
  push32((uint32_t)(EAX));
  /* 129ca972 call 0x129caba0 */
  push32(0x129ca977u); f_129caba0();
  /* 129ca977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ca97a jmp 0x129ca8f9 */
  goto L_129ca8f9;
L_129ca97f:;
  /* 129ca97f jmp 0x129ca99c */
  goto L_129ca99c;
L_129ca981:;
  /* 129ca981 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 129ca987 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ca98b push edx */
  push32((uint32_t)(EDX));
  /* 129ca98c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129ca98f push eax */
  push32((uint32_t)(EAX));
  /* 129ca990 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ca993 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca994 call 0x129caba0 */
  push32(0x129ca999u); f_129caba0();
  /* 129ca999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ca99c:;
  /* 129ca99c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ca99f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129ca9a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ca9a4 je 0x129ca9c2 */
  if (C.zf) goto L_129ca9c2;
  /* 129ca9a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 129ca9ac push eax */
  push32((uint32_t)(EAX));
  /* 129ca9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ca9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 129ca9b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 129ca9b7 push edx */
  push32((uint32_t)(EDX));
  /* 129ca9b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 129ca9ba call 0x129cab60 */
  push32(0x129ca9bfu); f_129cab60();
  /* 129ca9bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ca9c2:;
  /* 129ca9c2 jmp 0x129c9dd4 */
  goto L_129c9dd4;
L_129ca9c7:;
  /* 129ca9c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 129ca9cd pop edi */
  EDI = (pop32());
  /* 129ca9ce pop esi */
  ESI = (pop32());
  /* 129ca9cf pop ebx */
  EBX = (pop32());
  /* 129ca9d0 mov esp, ebp */
  ESP = (EBP);
  /* 129ca9d2 pop ebp */
  EBP = (pop32());
  /* 129ca9d3 ret  */
  ESPCHK(0x129c9db0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x129caae0 (119 bytes, 44 insns) */
void f_129caae0(void) {
  FTRACE(0x129caae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129caae0 push ebp */
  push32((uint32_t)(EBP));
  /* 129caae1 mov ebp, esp */
  EBP = (ESP);
  /* 129caae3 push ecx */
  push32((uint32_t)(ECX));
  /* 129caae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129caae7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129caaea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129caaed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129caaf0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129caaf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129caaf6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caafa jl 0x129cab22 */
  if ((C.sf!=C.of)) goto L_129cab22;
  /* 129caafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129caaff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129cab01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 129cab04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 129cab06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 129cab0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129cab10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129cab13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cab16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129cab18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cab1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cab1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129cab20 jmp 0x129cab35 */
  goto L_129cab35;
L_129cab22:;
  /* 129cab22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cab25 push edx */
  push32((uint32_t)(EDX));
  /* 129cab26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cab29 push eax */
  push32((uint32_t)(EAX));
  /* 129cab2a call 0x129c9b30 */
  push32(0x129cab2fu); f_129c9b30();
  /* 129cab2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cab32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129cab35:;
  /* 129cab35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cab39 jne 0x129cab46 */
  if (!C.zf) goto L_129cab46;
  /* 129cab3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cab3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129cab44 jmp 0x129cab53 */
  goto L_129cab53;
L_129cab46:;
  /* 129cab46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cab49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129cab4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cab4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cab51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_129cab53:;
  /* 129cab53 mov esp, ebp */
  ESP = (EBP);
  /* 129cab55 pop ebp */
  EBP = (pop32());
  /* 129cab56 ret  */
  ESPCHK(0x129caae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x129cab60 (53 bytes, 23 insns) */
void f_129cab60(void) {
  FTRACE(0x129cab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cab60 push ebp */
  push32((uint32_t)(EBP));
  /* 129cab61 mov ebp, esp */
  EBP = (ESP);
L_129cab63:;
  /* 129cab63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cab66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cab69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cab6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 129cab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cab71 jle 0x129cab93 */
  if ((C.zf||C.sf!=C.of)) goto L_129cab93;
  /* 129cab73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cab76 push edx */
  push32((uint32_t)(EDX));
  /* 129cab77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cab7a push eax */
  push32((uint32_t)(EAX));
  /* 129cab7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cab7e push ecx */
  push32((uint32_t)(ECX));
  /* 129cab7f call 0x129caae0 */
  push32(0x129cab84u); f_129caae0();
  /* 129cab84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cab87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cab8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cab8d jne 0x129cab91 */
  if (!C.zf) goto L_129cab91;
  /* 129cab8f jmp 0x129cab93 */
  goto L_129cab93;
L_129cab91:;
  /* 129cab91 jmp 0x129cab63 */
  goto L_129cab63;
L_129cab93:;
  /* 129cab93 pop ebp */
  EBP = (pop32());
  /* 129cab94 ret  */
  ESPCHK(0x129cab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x129caba0 (74 bytes, 31 insns) */
void f_129caba0(void) {
  FTRACE(0x129caba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129caba0 push ebp */
  push32((uint32_t)(EBP));
  /* 129caba1 mov ebp, esp */
  EBP = (ESP);
  /* 129caba3 push ecx */
  push32((uint32_t)(ECX));
L_129caba4:;
  /* 129caba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129caba7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cabaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cabad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 129cabb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cabb2 jle 0x129cabe6 */
  if ((C.zf||C.sf!=C.of)) goto L_129cabe6;
  /* 129cabb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cabb7 push edx */
  push32((uint32_t)(EDX));
  /* 129cabb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cabbb push eax */
  push32((uint32_t)(EAX));
  /* 129cabbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cabbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129cabc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129cabc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cabc8 push eax */
  push32((uint32_t)(EAX));
  /* 129cabc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cabcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cabcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129cabd2 call 0x129caae0 */
  push32(0x129cabd7u); f_129caae0();
  /* 129cabd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cabda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cabdd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cabe0 jne 0x129cabe4 */
  if (!C.zf) goto L_129cabe4;
  /* 129cabe2 jmp 0x129cabe6 */
  goto L_129cabe6;
L_129cabe4:;
  /* 129cabe4 jmp 0x129caba4 */
  goto L_129caba4;
L_129cabe6:;
  /* 129cabe6 mov esp, ebp */
  ESP = (EBP);
  /* 129cabe8 pop ebp */
  EBP = (pop32());
  /* 129cabe9 ret  */
  ESPCHK(0x129caba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abf0 @ 0x129cabf0 (26 bytes, 12 insns) */
void f_129cabf0(void) {
  FTRACE(0x129cabf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cabf0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cabf1 mov ebp, esp */
  EBP = (ESP);
  /* 129cabf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cabf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cabf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cabfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cabfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129cac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cac05 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 129cac08 pop ebp */
  EBP = (pop32());
  /* 129cac09 ret  */
  ESPCHK(0x129cabf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x129cac10 (31 bytes, 14 insns) */
void f_129cac10(void) {
  FTRACE(0x129cac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cac10 push ebp */
  push32((uint32_t)(EBP));
  /* 129cac11 mov ebp, esp */
  EBP = (ESP);
  /* 129cac13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cac18 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cac1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129cac20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cac25 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cac28 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129cac2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129cac2d pop ebp */
  EBP = (pop32());
  /* 129cac2e ret  */
  ESPCHK(0x129cac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac30 @ 0x129cac30 (27 bytes, 12 insns) */
void f_129cac30(void) {
  FTRACE(0x129cac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cac30 push ebp */
  push32((uint32_t)(EBP));
  /* 129cac31 mov ebp, esp */
  EBP = (ESP);
  /* 129cac33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cac38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cac3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129cac40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cac45 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 129cac49 pop ebp */
  EBP = (pop32());
  /* 129cac4a ret  */
  ESPCHK(0x129cac30u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x129cac50 (145 bytes, 42 insns) */
void f_129cac50(void) {
  FTRACE(0x129cac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cac50 push ebp */
  push32((uint32_t)(EBP));
  /* 129cac51 mov ebp, esp */
  EBP = (ESP);
  /* 129cac53 push ecx */
  push32((uint32_t)(ECX));
  /* 129cac54 call 0x129cad00 */
  push32(0x129cac59u); f_129cad00();
  /* 129cac59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129cac5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cac65 jmp 0x129cac70 */
  goto L_129cac70;
L_129cac67:;
  /* 129cac67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cac6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cac6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129cac70:;
  /* 129cac70 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cac74 jae 0x129cac9a */
  if (!C.cf) goto L_129cac9a;
  /* 129cac76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cac79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cac7c cmp ecx, dword ptr [eax*8 + 0x129ecfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x129ecfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cac83 jne 0x129cac98 */
  if (!C.zf) goto L_129cac98;
  /* 129cac85 call 0x129cacf0 */
  push32(0x129cac8au); f_129cacf0();
  /* 129cac8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cac8d mov ecx, dword ptr [edx*8 + 0x129ecfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x129ecfbc)));
  /* 129cac94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129cac96 jmp 0x129cacdd */
  goto L_129cacdd;
L_129cac98:;
  /* 129cac98 jmp 0x129cac67 */
  goto L_129cac67;
L_129cac9a:;
  /* 129cac9a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cac9e jb 0x129cacb3 */
  if (C.cf) goto L_129cacb3;
  /* 129caca0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caca4 ja 0x129cacb3 */
  if ((!C.cf&&!C.zf)) goto L_129cacb3;
  /* 129caca6 call 0x129cacf0 */
  push32(0x129cacabu); f_129cacf0();
  /* 129cacab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 129cacb1 jmp 0x129cacdd */
  goto L_129cacdd;
L_129cacb3:;
  /* 129cacb3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cacba jb 0x129cacd2 */
  if (C.cf) goto L_129cacd2;
  /* 129cacbc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cacc3 ja 0x129cacd2 */
  if ((!C.cf&&!C.zf)) goto L_129cacd2;
  /* 129cacc5 call 0x129cacf0 */
  push32(0x129caccau); f_129cacf0();
  /* 129cacca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 129cacd0 jmp 0x129cacdd */
  goto L_129cacdd;
L_129cacd2:;
  /* 129cacd2 call 0x129cacf0 */
  push32(0x129cacd7u); f_129cacf0();
  /* 129cacd7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_129cacdd:;
  /* 129cacdd mov esp, ebp */
  ESP = (EBP);
  /* 129cacdf pop ebp */
  EBP = (pop32());
  /* 129cace0 ret  */
  ESPCHK(0x129cac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x129cacf0 (13 bytes, 6 insns) */
void f_129cacf0(void) {
  FTRACE(0x129cacf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cacf0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cacf1 mov ebp, esp */
  EBP = (ESP);
  /* 129cacf3 call 0x129c2860 */
  push32(0x129cacf8u); f_129c2860();
  /* 129cacf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cacfb pop ebp */
  EBP = (pop32());
  /* 129cacfc ret  */
  ESPCHK(0x129cacf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad00 @ 0x129cad00 (13 bytes, 6 insns) */
void f_129cad00(void) {
  FTRACE(0x129cad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cad00 push ebp */
  push32((uint32_t)(EBP));
  /* 129cad01 mov ebp, esp */
  EBP = (ESP);
  /* 129cad03 call 0x129c2860 */
  push32(0x129cad08u); f_129c2860();
  /* 129cad08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cad0b pop ebp */
  EBP = (pop32());
  /* 129cad0c ret  */
  ESPCHK(0x129cad00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x129cad10 (664 bytes, 264 insns) [15 switch table(s)] */
void f_129cad10(void) {
  FTRACE(0x129cad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cad10 push ebp */
  push32((uint32_t)(EBP));
  /* 129cad11 mov ebp, esp */
  EBP = (ESP);
  /* 129cad13 push edi */
  push32((uint32_t)(EDI));
  /* 129cad14 push esi */
  push32((uint32_t)(ESI));
  /* 129cad15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129cad18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cad1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 129cad1e mov eax, ecx */
  EAX = (ECX);
  /* 129cad20 mov edx, ecx */
  EDX = (ECX);
  /* 129cad22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cad24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cad26 jbe 0x129cad30 */
  if ((C.cf||C.zf)) goto L_129cad30;
  /* 129cad28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cad2a jb 0x129caea8 */
  if (C.cf) goto L_129caea8;
L_129cad30:;
  /* 129cad30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129cad36 jne 0x129cad4c */
  if (!C.zf) goto L_129cad4c;
  /* 129cad38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129cad3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129cad3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cad41 jb 0x129cad6c */
  if (C.cf) goto L_129cad6c;
  /* 129cad43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129cad45 jmp dword ptr [edx*4 + 0x129cae58] */
  switch (EDX) {
    case 0: goto L_129cae68;
    case 1: goto L_129cae70;
    case 2: goto L_129cae7c;
    case 3: goto L_129cae90;
    default: x86_unimpl("switch@0x129cad45 out of table"); return;
  }
L_129cad4c:;
  /* 129cad4c mov eax, edi */
  EAX = (EDI);
  /* 129cad4e mov edx, 3 */
  EDX = (0x3u);
  /* 129cad53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cad56 jb 0x129cad64 */
  if (C.cf) goto L_129cad64;
  /* 129cad58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129cad5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cad5d jmp dword ptr [eax*4 + 0x129cad70] */
  switch (EAX) {
    case 1: goto L_129cad80;
    case 2: goto L_129cadac;
    case 3: goto L_129cadd0;
    default: x86_unimpl("switch@0x129cad5d out of table"); return;
  }
L_129cad64:;
  /* 129cad64 jmp dword ptr [ecx*4 + 0x129cae68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x129cae68)))); return;
  /* 129cad6b nop  */
  /* nop */
L_129cad6c:;
  /* 129cad6c jmp dword ptr [ecx*4 + 0x129cadec] */
  switch (ECX) {
    case 0: goto L_129cae4f;
    case 1: goto L_129cae3c;
    case 2: goto L_129cae34;
    case 3: goto L_129cae2c;
    case 4: goto L_129cae24;
    case 5: goto L_129cae1c;
    case 6: goto L_129cae14;
    case 7: goto L_129cae0c;
    default: x86_unimpl("switch@0x129cad6c out of table"); return;
  }
  /* 129cad73 nop  */
  /* nop */
L_129cad80:;
  /* 129cad80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129cad82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cad84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129cad86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129cad89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129cad8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129cad8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129cad92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129cad95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129cad98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129cad9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cad9e jb 0x129cad6c */
  if (C.cf) goto L_129cad6c;
  /* 129cada0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129cada2 jmp dword ptr [edx*4 + 0x129cae58] */
  switch (EDX) {
    case 0: goto L_129cae68;
    case 1: goto L_129cae70;
    case 2: goto L_129cae7c;
    case 3: goto L_129cae90;
    default: x86_unimpl("switch@0x129cada2 out of table"); return;
  }
  /* 129cada9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129cadac:;
  /* 129cadac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129cadae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cadb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129cadb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129cadb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129cadb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129cadbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129cadbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129cadc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cadc4 jb 0x129cad6c */
  if (C.cf) goto L_129cad6c;
  /* 129cadc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129cadc8 jmp dword ptr [edx*4 + 0x129cae58] */
  switch (EDX) {
    case 0: goto L_129cae68;
    case 1: goto L_129cae70;
    case 2: goto L_129cae7c;
    case 3: goto L_129cae90;
    default: x86_unimpl("switch@0x129cadc8 out of table"); return;
  }
  /* 129cadcf nop  */
  /* nop */
L_129cadd0:;
  /* 129cadd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129cadd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cadd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129cadd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129cadd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129cadda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129caddb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cadde jb 0x129cad6c */
  if (C.cf) goto L_129cad6c;
  /* 129cade0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129cade2 jmp dword ptr [edx*4 + 0x129cae58] */
  switch (EDX) {
    case 0: goto L_129cae68;
    case 1: goto L_129cae70;
    case 2: goto L_129cae7c;
    case 3: goto L_129cae90;
    default: x86_unimpl("switch@0x129cade2 out of table"); return;
  }
  /* 129cade9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129cae0c:;
  /* 129cae0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 129cae10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_129cae14:;
  /* 129cae14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 129cae18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_129cae1c:;
  /* 129cae1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 129cae20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_129cae24:;
  /* 129cae24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 129cae28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_129cae2c:;
  /* 129cae2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 129cae30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_129cae34:;
  /* 129cae34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 129cae38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_129cae3c:;
  /* 129cae3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 129cae40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 129cae44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 129cae4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129cae4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129cae4f:;
  /* 129cae4f jmp dword ptr [edx*4 + 0x129cae58] */
  switch (EDX) {
    case 0: goto L_129cae68;
    case 1: goto L_129cae70;
    case 2: goto L_129cae7c;
    case 3: goto L_129cae90;
    default: x86_unimpl("switch@0x129cae4f out of table"); return;
  }
  /* 129cae56 mov edi, edi */
  EDI = (EDI);
L_129cae68:;
  /* 129cae68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cae6b pop esi */
  ESI = (pop32());
  /* 129cae6c pop edi */
  EDI = (pop32());
  /* 129cae6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cae6e ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129cae6f nop  */
  /* nop */
L_129cae70:;
  /* 129cae70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cae72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129cae74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cae77 pop esi */
  ESI = (pop32());
  /* 129cae78 pop edi */
  EDI = (pop32());
  /* 129cae79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cae7a ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129cae7b nop  */
  /* nop */
L_129cae7c:;
  /* 129cae7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cae7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129cae80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129cae83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129cae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cae89 pop esi */
  ESI = (pop32());
  /* 129cae8a pop edi */
  EDI = (pop32());
  /* 129cae8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cae8c ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129cae8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129cae90:;
  /* 129cae90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cae92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129cae94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129cae97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129cae9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129cae9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129caea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129caea3 pop esi */
  ESI = (pop32());
  /* 129caea4 pop edi */
  EDI = (pop32());
  /* 129caea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129caea6 ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129caea7 nop  */
  /* nop */
L_129caea8:;
  /* 129caea8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 129caeac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 129caeb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129caeb6 jne 0x129caedc */
  if (!C.zf) goto L_129caedc;
  /* 129caeb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129caebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129caebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caec1 jb 0x129caed0 */
  if (C.cf) goto L_129caed0;
  /* 129caec3 std  */
  C.df=1;
  /* 129caec4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129caec6 cld  */
  C.df=0;
  /* 129caec7 jmp dword ptr [edx*4 + 0x129caff0] */
  switch (EDX) {
    case 0: goto L_129cb000;
    case 1: goto L_129cb008;
    case 2: goto L_129cb018;
    case 3: goto L_129cb02c;
    default: x86_unimpl("switch@0x129caec7 out of table"); return;
  }
  /* 129caece mov edi, edi */
  EDI = (EDI);
L_129caed0:;
  /* 129caed0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129caed2 jmp dword ptr [ecx*4 + 0x129cafa0] */
  switch (ECX) {
    case 0: goto L_129cafe7;
    default: x86_unimpl("switch@0x129caed2 out of table"); return;
  }
  /* 129caed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129caedc:;
  /* 129caedc mov eax, edi */
  EAX = (EDI);
  /* 129caede mov edx, 3 */
  EDX = (0x3u);
  /* 129caee3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caee6 jb 0x129caef4 */
  if (C.cf) goto L_129caef4;
  /* 129caee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129caeeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129caeed jmp dword ptr [eax*4 + 0x129caef8] */
  switch (EAX) {
    case 1: goto L_129caf08;
    case 2: goto L_129caf28;
    case 3: goto L_129caf50;
    default: x86_unimpl("switch@0x129caeed out of table"); return;
  }
L_129caef4:;
  /* 129caef4 jmp dword ptr [ecx*4 + 0x129caff0] */
  switch (ECX) {
    case 0: goto L_129cb000;
    case 1: goto L_129cb008;
    case 2: goto L_129cb018;
    case 3: goto L_129cb02c;
    default: x86_unimpl("switch@0x129caef4 out of table"); return;
  }
  /* 129caefb nop  */
  /* nop */
L_129caf08:;
  /* 129caf08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129caf0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129caf0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129caf10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 129caf11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129caf14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 129caf15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caf18 jb 0x129caed0 */
  if (C.cf) goto L_129caed0;
  /* 129caf1a std  */
  C.df=1;
  /* 129caf1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129caf1d cld  */
  C.df=0;
  /* 129caf1e jmp dword ptr [edx*4 + 0x129caff0] */
  switch (EDX) {
    case 0: goto L_129cb000;
    case 1: goto L_129cb008;
    case 2: goto L_129cb018;
    case 3: goto L_129cb02c;
    default: x86_unimpl("switch@0x129caf1e out of table"); return;
  }
  /* 129caf25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129caf28:;
  /* 129caf28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129caf2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129caf2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129caf30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129caf33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129caf36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129caf39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129caf3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129caf3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caf42 jb 0x129caed0 */
  if (C.cf) goto L_129caed0;
  /* 129caf44 std  */
  C.df=1;
  /* 129caf45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129caf47 cld  */
  C.df=0;
  /* 129caf48 jmp dword ptr [edx*4 + 0x129caff0] */
  switch (EDX) {
    case 0: goto L_129cb000;
    case 1: goto L_129cb008;
    case 2: goto L_129cb018;
    case 3: goto L_129cb02c;
    default: x86_unimpl("switch@0x129caf48 out of table"); return;
  }
  /* 129caf4f nop  */
  /* nop */
L_129caf50:;
  /* 129caf50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129caf53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129caf55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129caf58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129caf5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129caf5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129caf61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129caf64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129caf67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129caf6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129caf6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129caf70 jb 0x129caed0 */
  if (C.cf) goto L_129caed0;
  /* 129caf76 std  */
  C.df=1;
  /* 129caf77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129caf79 cld  */
  C.df=0;
  /* 129caf7a jmp dword ptr [edx*4 + 0x129caff0] */
  switch (EDX) {
    case 0: goto L_129cb000;
    case 1: goto L_129cb008;
    case 2: goto L_129cb018;
    case 3: goto L_129cb02c;
    default: x86_unimpl("switch@0x129caf7a out of table"); return;
  }
  /* 129caf81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 129caf84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 129caf85 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 129caf86 pushfd  */
  x86_unimpl("pushfd @ 0x129caf86");
  /* 129caf87 adc ch, byte ptr [edi + ebp*4 - 0x504bed64] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDI + EBP*4 + -0x504bed64))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 129caf8e pushfd  */
  x86_unimpl("pushfd @ 0x129caf8e");
  /* 129caf8f adc bh, byte ptr [edi + ebp*4 - 0x503bed64] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDI + EBP*4 + -0x503bed64))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 129caf96 pushfd  */
  x86_unimpl("pushfd @ 0x129caf96");
  /* 129caf97 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129caf99 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 129caf9a pushfd  */
  x86_unimpl("pushfd @ 0x129caf9a");
  /* 129caf9b adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 129caf9d scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 129caf9e pushfd  */
  x86_unimpl("pushfd @ 0x129caf9e");
  /* 129cafa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 129cafa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 129cafac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 129cafb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 129cafb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 129cafb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 129cafbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 129cafc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 129cafc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 129cafc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 129cafcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 129cafd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 129cafd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 129cafd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 129cafdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 129cafe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129cafe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129cafe7:;
  /* 129cafe7 jmp dword ptr [edx*4 + 0x129caff0] */
  switch (EDX) {
    case 0: goto L_129cb000;
    case 1: goto L_129cb008;
    case 2: goto L_129cb018;
    case 3: goto L_129cb02c;
    default: x86_unimpl("switch@0x129cafe7 out of table"); return;
  }
  /* 129cafee mov edi, edi */
  EDI = (EDI);
L_129cb000:;
  /* 129cb000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb003 pop esi */
  ESI = (pop32());
  /* 129cb004 pop edi */
  EDI = (pop32());
  /* 129cb005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cb006 ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129cb007 nop  */
  /* nop */
L_129cb008:;
  /* 129cb008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129cb00b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129cb00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb011 pop esi */
  ESI = (pop32());
  /* 129cb012 pop edi */
  EDI = (pop32());
  /* 129cb013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cb014 ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129cb015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129cb018:;
  /* 129cb018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129cb01b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129cb01e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129cb021 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129cb024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb027 pop esi */
  ESI = (pop32());
  /* 129cb028 pop edi */
  EDI = (pop32());
  /* 129cb029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cb02a ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
  /* 129cb02b nop  */
  /* nop */
L_129cb02c:;
  /* 129cb02c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129cb02f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129cb032 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129cb035 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129cb038 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129cb03b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129cb03e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb041 pop esi */
  ESI = (pop32());
  /* 129cb042 pop edi */
  EDI = (pop32());
  /* 129cb043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cb044 ret  */
  ESPCHK(0x129cad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x129cb050 (421 bytes, 148 insns) */
void f_129cb050(void) {
  FTRACE(0x129cb050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb050 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb051 mov ebp, esp */
  EBP = (ESP);
  /* 129cb053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129cb055 push 0x129e9f48 */
  push32((uint32_t)(0x129e9f48u));
  /* 129cb05a push 0x129cbf28 */
  push32((uint32_t)(0x129cbf28u));
  /* 129cb05f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 129cb065 push eax */
  push32((uint32_t)(EAX));
  /* 129cb066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 129cb06d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb070 push ebx */
  push32((uint32_t)(EBX));
  /* 129cb071 push esi */
  push32((uint32_t)(ESI));
  /* 129cb072 push edi */
  push32((uint32_t)(EDI));
  /* 129cb073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129cb076 cmp dword ptr [0x129ee684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb07d jne 0x129cb0ce */
  if (!C.zf) goto L_129cb0ce;
  /* 129cb07f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 129cb082 push eax */
  push32((uint32_t)(EAX));
  /* 129cb083 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb085 push 0x129e9f44 */
  push32((uint32_t)(0x129e9f44u));
  /* 129cb08a push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb08c call dword ptr [0x129f0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0350))), 0x129cb092u);
  /* 129cb092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb094 je 0x129cb0a2 */
  if (C.zf) goto L_129cb0a2;
  /* 129cb096 mov dword ptr [0x129ee684], 1 */
  w32((uint32_t)(0x129ee684), (0x1u));
  /* 129cb0a0 jmp 0x129cb0ce */
  goto L_129cb0ce;
L_129cb0a2:;
  /* 129cb0a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 129cb0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb0a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb0a8 push 0x129e9f40 */
  push32((uint32_t)(0x129e9f40u));
  /* 129cb0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb0af push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb0b1 call dword ptr [0x129f034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f034c))), 0x129cb0b7u);
  /* 129cb0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb0b9 je 0x129cb0c7 */
  if (C.zf) goto L_129cb0c7;
  /* 129cb0bb mov dword ptr [0x129ee684], 2 */
  w32((uint32_t)(0x129ee684), (0x2u));
  /* 129cb0c5 jmp 0x129cb0ce */
  goto L_129cb0ce;
L_129cb0c7:;
  /* 129cb0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb0c9 jmp 0x129cb1f8 */
  goto L_129cb1f8;
L_129cb0ce:;
  /* 129cb0ce cmp dword ptr [0x129ee684], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee684))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb0d5 jne 0x129cb105 */
  if (!C.zf) goto L_129cb105;
  /* 129cb0d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb0db jne 0x129cb0e6 */
  if (!C.zf) goto L_129cb0e6;
  /* 129cb0dd mov edx, dword ptr [0x129ee690] */
  EDX = (r32((uint32_t)(0x129ee690)));
  /* 129cb0e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_129cb0e6:;
  /* 129cb0e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cb0e9 push eax */
  push32((uint32_t)(EAX));
  /* 129cb0ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb0ed push ecx */
  push32((uint32_t)(ECX));
  /* 129cb0ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb0f1 push edx */
  push32((uint32_t)(EDX));
  /* 129cb0f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb0f5 push eax */
  push32((uint32_t)(EAX));
  /* 129cb0f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129cb0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb0fa call dword ptr [0x129f034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f034c))), 0x129cb100u);
  /* 129cb100 jmp 0x129cb1f8 */
  goto L_129cb1f8;
L_129cb105:;
  /* 129cb105 cmp dword ptr [0x129ee684], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee684))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb10c jne 0x129cb1f6 */
  if (!C.zf) goto L_129cb1f6;
  /* 129cb112 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb116 jne 0x129cb121 */
  if (!C.zf) goto L_129cb121;
  /* 129cb118 mov edx, dword ptr [0x129ee6a0] */
  EDX = (r32((uint32_t)(0x129ee6a0)));
  /* 129cb11e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_129cb121:;
  /* 129cb121 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb123 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb125 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb128 push eax */
  push32((uint32_t)(EAX));
  /* 129cb129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb12c push ecx */
  push32((uint32_t)(ECX));
  /* 129cb12d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 129cb130 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cb132 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb134 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 129cb137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb13a push edx */
  push32((uint32_t)(EDX));
  /* 129cb13b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129cb13e push eax */
  push32((uint32_t)(EAX));
  /* 129cb13f call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129cb145u);
  /* 129cb145 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129cb148 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb14c jne 0x129cb155 */
  if (!C.zf) goto L_129cb155;
  /* 129cb14e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb150 jmp 0x129cb1f8 */
  goto L_129cb1f8;
L_129cb155:;
  /* 129cb155 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cb15c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129cb15f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129cb161 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb164 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129cb166 call 0x129c5fc0 */
  push32(0x129cb16bu); f_129c5fc0();
  /* 129cb16b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 129cb16e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129cb171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129cb174 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129cb177 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129cb17a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 129cb17c push edx */
  push32((uint32_t)(EDX));
  /* 129cb17d push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb17f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb182 push eax */
  push32((uint32_t)(EAX));
  /* 129cb183 call 0x129c6b90 */
  push32(0x129cb188u); f_129c6b90();
  /* 129cb188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb18b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129cb192 jmp 0x129cb1ab */
  goto L_129cb1ab;
  /* 129cb194 mov eax, 1 */
  EAX = (0x1u);
  /* 129cb199 ret  */
  ESPCHK(0x129cb050u, _esp0);
  ESP += 4; return;
  /* 129cb19a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129cb19d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129cb1a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129cb1ab:;
  /* 129cb1ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb1af jne 0x129cb1b5 */
  if (!C.zf) goto L_129cb1b5;
  /* 129cb1b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb1b3 jmp 0x129cb1f8 */
  goto L_129cb1f8;
L_129cb1b5:;
  /* 129cb1b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129cb1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb1b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb1bc push edx */
  push32((uint32_t)(EDX));
  /* 129cb1bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb1c0 push eax */
  push32((uint32_t)(EAX));
  /* 129cb1c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb1c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb1c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129cb1ca push edx */
  push32((uint32_t)(EDX));
  /* 129cb1cb call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129cb1d1u);
  /* 129cb1d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129cb1d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb1d8 jne 0x129cb1de */
  if (!C.zf) goto L_129cb1de;
  /* 129cb1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb1dc jmp 0x129cb1f8 */
  goto L_129cb1f8;
L_129cb1de:;
  /* 129cb1de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cb1e1 push eax */
  push32((uint32_t)(EAX));
  /* 129cb1e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129cb1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb1e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb1e9 push edx */
  push32((uint32_t)(EDX));
  /* 129cb1ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb1ed push eax */
  push32((uint32_t)(EAX));
  /* 129cb1ee call dword ptr [0x129f0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0350))), 0x129cb1f4u);
  /* 129cb1f4 jmp 0x129cb1f8 */
  goto L_129cb1f8;
L_129cb1f6:;
  /* 129cb1f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cb1f8:;
  /* 129cb1f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 129cb1fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cb1fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129cb205 pop edi */
  EDI = (pop32());
  /* 129cb206 pop esi */
  ESI = (pop32());
  /* 129cb207 pop ebx */
  EBX = (pop32());
  /* 129cb208 mov esp, ebp */
  ESP = (EBP);
  /* 129cb20a pop ebp */
  EBP = (pop32());
  /* 129cb20b ret  */
  ESPCHK(0x129cb050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x129cb210 (727 bytes, 263 insns) */
void f_129cb210(void) {
  FTRACE(0x129cb210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb210 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb211 mov ebp, esp */
  EBP = (ESP);
  /* 129cb213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129cb215 push 0x129e9f58 */
  push32((uint32_t)(0x129e9f58u));
  /* 129cb21a push 0x129cbf28 */
  push32((uint32_t)(0x129cbf28u));
  /* 129cb21f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 129cb225 push eax */
  push32((uint32_t)(EAX));
  /* 129cb226 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 129cb22d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb230 push ebx */
  push32((uint32_t)(EBX));
  /* 129cb231 push esi */
  push32((uint32_t)(ESI));
  /* 129cb232 push edi */
  push32((uint32_t)(EDI));
  /* 129cb233 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129cb236 cmp dword ptr [0x129ee6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb23d jne 0x129cb296 */
  if (!C.zf) goto L_129cb296;
  /* 129cb23f push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb241 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb243 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb245 push 0x129e9f44 */
  push32((uint32_t)(0x129e9f44u));
  /* 129cb24a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129cb24f push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb251 call dword ptr [0x129f0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0358))), 0x129cb257u);
  /* 129cb257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb259 je 0x129cb267 */
  if (C.zf) goto L_129cb267;
  /* 129cb25b mov dword ptr [0x129ee6a8], 1 */
  w32((uint32_t)(0x129ee6a8), (0x1u));
  /* 129cb265 jmp 0x129cb296 */
  goto L_129cb296;
L_129cb267:;
  /* 129cb267 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb269 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb26b push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb26d push 0x129e9f40 */
  push32((uint32_t)(0x129e9f40u));
  /* 129cb272 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129cb277 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb279 call dword ptr [0x129f0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0354))), 0x129cb27fu);
  /* 129cb27f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb281 je 0x129cb28f */
  if (C.zf) goto L_129cb28f;
  /* 129cb283 mov dword ptr [0x129ee6a8], 2 */
  w32((uint32_t)(0x129ee6a8), (0x2u));
  /* 129cb28d jmp 0x129cb296 */
  goto L_129cb296;
L_129cb28f:;
  /* 129cb28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb291 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb296:;
  /* 129cb296 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb29a jle 0x129cb2af */
  if ((C.zf||C.sf!=C.of)) goto L_129cb2af;
  /* 129cb29c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cb29f push eax */
  push32((uint32_t)(EAX));
  /* 129cb2a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb2a4 call 0x129cb520 */
  push32(0x129cb2a9u); f_129cb520();
  /* 129cb2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb2ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_129cb2af:;
  /* 129cb2af cmp dword ptr [0x129ee6a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb2b6 jne 0x129cb2db */
  if (!C.zf) goto L_129cb2db;
  /* 129cb2b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129cb2bb push edx */
  push32((uint32_t)(EDX));
  /* 129cb2bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129cb2bf push eax */
  push32((uint32_t)(EAX));
  /* 129cb2c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cb2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb2c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb2c7 push edx */
  push32((uint32_t)(EDX));
  /* 129cb2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb2cb push eax */
  push32((uint32_t)(EAX));
  /* 129cb2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb2cf push ecx */
  push32((uint32_t)(ECX));
  /* 129cb2d0 call dword ptr [0x129f0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0354))), 0x129cb2d6u);
  /* 129cb2d6 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb2db:;
  /* 129cb2db cmp dword ptr [0x129ee6a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb2e2 jne 0x129cb4ff */
  if (!C.zf) goto L_129cb4ff;
  /* 129cb2e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb2ec jne 0x129cb2f7 */
  if (!C.zf) goto L_129cb2f7;
  /* 129cb2ee mov edx, dword ptr [0x129ee6a0] */
  EDX = (r32((uint32_t)(0x129ee6a0)));
  /* 129cb2f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_129cb2f7:;
  /* 129cb2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb2fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cb2fe push eax */
  push32((uint32_t)(EAX));
  /* 129cb2ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb302 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb303 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 129cb306 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cb308 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb30a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 129cb30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb310 push edx */
  push32((uint32_t)(EDX));
  /* 129cb311 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129cb314 push eax */
  push32((uint32_t)(EAX));
  /* 129cb315 call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129cb31bu);
  /* 129cb31b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129cb31e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb322 jne 0x129cb32b */
  if (!C.zf) goto L_129cb32b;
  /* 129cb324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb326 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb32b:;
  /* 129cb32b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cb332 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129cb335 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129cb337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129cb33c call 0x129c5fc0 */
  push32(0x129cb341u); f_129c5fc0();
  /* 129cb341 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 129cb344 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129cb347 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129cb34a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129cb34d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129cb354 jmp 0x129cb36d */
  goto L_129cb36d;
  /* 129cb356 mov eax, 1 */
  EAX = (0x1u);
  /* 129cb35b ret  */
  ESPCHK(0x129cb210u, _esp0);
  ESP += 4; return;
  /* 129cb35c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129cb35f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 129cb366 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129cb36d:;
  /* 129cb36d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb371 jne 0x129cb37a */
  if (!C.zf) goto L_129cb37a;
  /* 129cb373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb375 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb37a:;
  /* 129cb37a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129cb37d push edx */
  push32((uint32_t)(EDX));
  /* 129cb37e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb381 push eax */
  push32((uint32_t)(EAX));
  /* 129cb382 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cb385 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb386 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb389 push edx */
  push32((uint32_t)(EDX));
  /* 129cb38a push 1 */
  push32((uint32_t)(0x1u));
  /* 129cb38c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129cb38f push eax */
  push32((uint32_t)(EAX));
  /* 129cb390 call dword ptr [0x129f0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0348))), 0x129cb396u);
  /* 129cb396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb398 jne 0x129cb3a1 */
  if (!C.zf) goto L_129cb3a1;
  /* 129cb39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb39c jmp 0x129cb501 */
  goto L_129cb501;
L_129cb3a1:;
  /* 129cb3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb3a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129cb3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb3a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb3ac push edx */
  push32((uint32_t)(EDX));
  /* 129cb3ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb3b0 push eax */
  push32((uint32_t)(EAX));
  /* 129cb3b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb3b5 call dword ptr [0x129f0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0358))), 0x129cb3bbu);
  /* 129cb3bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129cb3be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb3c2 jne 0x129cb3cb */
  if (!C.zf) goto L_129cb3cb;
  /* 129cb3c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb3c6 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb3cb:;
  /* 129cb3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb3ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 129cb3d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cb3d6 je 0x129cb41b */
  if (C.zf) goto L_129cb41b;
  /* 129cb3d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb3dc je 0x129cb416 */
  if (C.zf) goto L_129cb416;
  /* 129cb3de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129cb3e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb3e4 jle 0x129cb3ed */
  if ((C.zf||C.sf!=C.of)) goto L_129cb3ed;
  /* 129cb3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb3e8 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb3ed:;
  /* 129cb3ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129cb3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb3f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129cb3f4 push edx */
  push32((uint32_t)(EDX));
  /* 129cb3f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129cb3f8 push eax */
  push32((uint32_t)(EAX));
  /* 129cb3f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb3fc push ecx */
  push32((uint32_t)(ECX));
  /* 129cb3fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb400 push edx */
  push32((uint32_t)(EDX));
  /* 129cb401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb404 push eax */
  push32((uint32_t)(EAX));
  /* 129cb405 call dword ptr [0x129f0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0358))), 0x129cb40bu);
  /* 129cb40b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb40d jne 0x129cb416 */
  if (!C.zf) goto L_129cb416;
  /* 129cb40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb411 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb416:;
  /* 129cb416 jmp 0x129cb4fa */
  goto L_129cb4fa;
L_129cb41b:;
  /* 129cb41b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129cb41e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129cb421 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129cb428 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129cb42b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129cb42d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb430 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129cb432 call 0x129c5fc0 */
  push32(0x129cb437u); f_129c5fc0();
  /* 129cb437 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 129cb43a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129cb43d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 129cb440 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 129cb443 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129cb44a jmp 0x129cb463 */
  goto L_129cb463;
  /* 129cb44c mov eax, 1 */
  EAX = (0x1u);
  /* 129cb451 ret  */
  ESPCHK(0x129cb210u, _esp0);
  ESP += 4; return;
  /* 129cb452 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129cb455 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129cb45c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129cb463:;
  /* 129cb463 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb467 jne 0x129cb470 */
  if (!C.zf) goto L_129cb470;
  /* 129cb469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb46b jmp 0x129cb501 */
  goto L_129cb501;
L_129cb470:;
  /* 129cb470 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129cb473 push eax */
  push32((uint32_t)(EAX));
  /* 129cb474 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129cb477 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb478 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129cb47b push edx */
  push32((uint32_t)(EDX));
  /* 129cb47c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129cb47f push eax */
  push32((uint32_t)(EAX));
  /* 129cb480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb483 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb487 push edx */
  push32((uint32_t)(EDX));
  /* 129cb488 call dword ptr [0x129f0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0358))), 0x129cb48eu);
  /* 129cb48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb490 jne 0x129cb496 */
  if (!C.zf) goto L_129cb496;
  /* 129cb492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb494 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb496:;
  /* 129cb496 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb49a jne 0x129cb4ca */
  if (!C.zf) goto L_129cb4ca;
  /* 129cb49c push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb49e push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb4a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129cb4a7 push eax */
  push32((uint32_t)(EAX));
  /* 129cb4a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129cb4ab push ecx */
  push32((uint32_t)(ECX));
  /* 129cb4ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129cb4b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 129cb4b4 push edx */
  push32((uint32_t)(EDX));
  /* 129cb4b5 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129cb4bbu);
  /* 129cb4bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129cb4be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb4c2 jne 0x129cb4c8 */
  if (!C.zf) goto L_129cb4c8;
  /* 129cb4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb4c6 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb4c8:;
  /* 129cb4c8 jmp 0x129cb4fa */
  goto L_129cb4fa;
L_129cb4ca:;
  /* 129cb4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb4cc push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb4ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 129cb4d1 push eax */
  push32((uint32_t)(EAX));
  /* 129cb4d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129cb4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb4d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129cb4d9 push edx */
  push32((uint32_t)(EDX));
  /* 129cb4da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129cb4dd push eax */
  push32((uint32_t)(EAX));
  /* 129cb4de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129cb4e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 129cb4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb4e7 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129cb4edu);
  /* 129cb4ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129cb4f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb4f4 jne 0x129cb4fa */
  if (!C.zf) goto L_129cb4fa;
  /* 129cb4f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb4f8 jmp 0x129cb501 */
  goto L_129cb501;
L_129cb4fa:;
  /* 129cb4fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129cb4fd jmp 0x129cb501 */
  goto L_129cb501;
L_129cb4ff:;
  /* 129cb4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cb501:;
  /* 129cb501 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 129cb504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cb507 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 129cb50e pop edi */
  EDI = (pop32());
  /* 129cb50f pop esi */
  ESI = (pop32());
  /* 129cb510 pop ebx */
  EBX = (pop32());
  /* 129cb511 mov esp, ebp */
  ESP = (EBP);
  /* 129cb513 pop ebp */
  EBP = (pop32());
  /* 129cb514 ret  */
  ESPCHK(0x129cb210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b520 @ 0x129cb520 (80 bytes, 32 insns) */
void f_129cb520(void) {
  FTRACE(0x129cb520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb520 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb521 mov ebp, esp */
  EBP = (ESP);
  /* 129cb523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb529 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cb52c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb52f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129cb532:;
  /* 129cb532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb538 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cb53e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cb540 je 0x129cb557 */
  if (C.zf) goto L_129cb557;
  /* 129cb542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb545 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129cb548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cb54a je 0x129cb557 */
  if (C.zf) goto L_129cb557;
  /* 129cb54c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb54f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cb555 jmp 0x129cb532 */
  goto L_129cb532;
L_129cb557:;
  /* 129cb557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb55a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129cb55d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cb55f jne 0x129cb569 */
  if (!C.zf) goto L_129cb569;
  /* 129cb561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb564 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb567 jmp 0x129cb56c */
  goto L_129cb56c;
L_129cb569:;
  /* 129cb569 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_129cb56c:;
  /* 129cb56c mov esp, ebp */
  ESP = (EBP);
  /* 129cb56e pop ebp */
  EBP = (pop32());
  /* 129cb56f ret  */
  ESPCHK(0x129cb520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x129cb570 (130 bytes, 43 insns) */
void f_129cb570(void) {
  FTRACE(0x129cb570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb570 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb571 mov ebp, esp */
  EBP = (ESP);
  /* 129cb573 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb577 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb57d jae 0x129cb5a1 */
  if (!C.cf) goto L_129cb5a1;
  /* 129cb57f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb582 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cb585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb588 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cb58b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb58e mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cb595 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cb59a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cb59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cb59f jne 0x129cb5bc */
  if (!C.zf) goto L_129cb5bc;
L_129cb5a1:;
  /* 129cb5a1 call 0x129cacf0 */
  push32(0x129cb5a6u); f_129cacf0();
  /* 129cb5a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cb5ac call 0x129cad00 */
  push32(0x129cb5b1u); f_129cad00();
  /* 129cb5b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cb5b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb5ba jmp 0x129cb5ee */
  goto L_129cb5ee;
L_129cb5bc:;
  /* 129cb5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb5bf push edx */
  push32((uint32_t)(EDX));
  /* 129cb5c0 call 0x129cc510 */
  push32(0x129cb5c5u); f_129cc510();
  /* 129cb5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb5c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb5cb push eax */
  push32((uint32_t)(EAX));
  /* 129cb5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb5cf push ecx */
  push32((uint32_t)(ECX));
  /* 129cb5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb5d3 push edx */
  push32((uint32_t)(EDX));
  /* 129cb5d4 call 0x129cb600 */
  push32(0x129cb5d9u); f_129cb600();
  /* 129cb5d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb5dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cb5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb5e2 push eax */
  push32((uint32_t)(EAX));
  /* 129cb5e3 call 0x129cc5a0 */
  push32(0x129cb5e8u); f_129cc5a0();
  /* 129cb5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129cb5ee:;
  /* 129cb5ee mov esp, ebp */
  ESP = (EBP);
  /* 129cb5f0 pop ebp */
  EBP = (pop32());
  /* 129cb5f1 ret  */
  ESPCHK(0x129cb570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x129cb600 (178 bytes, 56 insns) */
void f_129cb600(void) {
  FTRACE(0x129cb600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb600 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb601 mov ebp, esp */
  EBP = (ESP);
  /* 129cb603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb609 push eax */
  push32((uint32_t)(EAX));
  /* 129cb60a call 0x129cc390 */
  push32(0x129cb60fu); f_129cc390();
  /* 129cb60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb612 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cb615 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb619 jne 0x129cb62e */
  if (!C.zf) goto L_129cb62e;
  /* 129cb61b call 0x129cacf0 */
  push32(0x129cb620u); f_129cacf0();
  /* 129cb620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cb626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb629 jmp 0x129cb6ae */
  goto L_129cb6ae;
L_129cb62e:;
  /* 129cb62e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb631 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb632 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb637 push edx */
  push32((uint32_t)(EDX));
  /* 129cb638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cb63b push eax */
  push32((uint32_t)(EAX));
  /* 129cb63c call dword ptr [0x129f02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02ec))), 0x129cb642u);
  /* 129cb642 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cb645 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb649 jne 0x129cb656 */
  if (!C.zf) goto L_129cb656;
  /* 129cb64b call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129cb651u);
  /* 129cb651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cb654 jmp 0x129cb65d */
  goto L_129cb65d;
L_129cb656:;
  /* 129cb656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129cb65d:;
  /* 129cb65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb661 je 0x129cb674 */
  if (C.zf) goto L_129cb674;
  /* 129cb663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb666 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb667 call 0x129cac50 */
  push32(0x129cb66cu); f_129cac50();
  /* 129cb66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb66f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb672 jmp 0x129cb6ae */
  goto L_129cb6ae;
L_129cb674:;
  /* 129cb674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb677 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 129cb67a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb67d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb680 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb683 mov ecx, dword ptr [edx*4 + 0x129efe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129cb68a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 129cb68e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 129cb691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb694 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cb697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb69a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cb69d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb6a0 mov eax, dword ptr [eax*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cb6a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 129cb6ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129cb6ae:;
  /* 129cb6ae mov esp, ebp */
  ESP = (EBP);
  /* 129cb6b0 pop ebp */
  EBP = (pop32());
  /* 129cb6b1 ret  */
  ESPCHK(0x129cb600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x129cb6c0 (130 bytes, 43 insns) */
void f_129cb6c0(void) {
  FTRACE(0x129cb6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb6c1 mov ebp, esp */
  EBP = (ESP);
  /* 129cb6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb6c7 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb6cd jae 0x129cb6f1 */
  if (!C.cf) goto L_129cb6f1;
  /* 129cb6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cb6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cb6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb6de mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cb6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cb6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cb6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cb6ef jne 0x129cb70c */
  if (!C.zf) goto L_129cb70c;
L_129cb6f1:;
  /* 129cb6f1 call 0x129cacf0 */
  push32(0x129cb6f6u); f_129cacf0();
  /* 129cb6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cb6fc call 0x129cad00 */
  push32(0x129cb701u); f_129cad00();
  /* 129cb701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cb707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb70a jmp 0x129cb73e */
  goto L_129cb73e;
L_129cb70c:;
  /* 129cb70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb70f push edx */
  push32((uint32_t)(EDX));
  /* 129cb710 call 0x129cc510 */
  push32(0x129cb715u); f_129cc510();
  /* 129cb715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb71b push eax */
  push32((uint32_t)(EAX));
  /* 129cb71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb71f push ecx */
  push32((uint32_t)(ECX));
  /* 129cb720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb723 push edx */
  push32((uint32_t)(EDX));
  /* 129cb724 call 0x129cb750 */
  push32(0x129cb729u); f_129cb750();
  /* 129cb729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cb72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb732 push eax */
  push32((uint32_t)(EAX));
  /* 129cb733 call 0x129cc5a0 */
  push32(0x129cb738u); f_129cc5a0();
  /* 129cb738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129cb73e:;
  /* 129cb73e mov esp, ebp */
  ESP = (EBP);
  /* 129cb740 pop ebp */
  EBP = (pop32());
  /* 129cb741 ret  */
  ESPCHK(0x129cb6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x129cb750 (627 bytes, 182 insns) */
void f_129cb750(void) {
  FTRACE(0x129cb750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb750 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb751 mov ebp, esp */
  EBP = (ESP);
  /* 129cb753 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb759 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129cb760 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cb763 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 129cb769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb76d jne 0x129cb776 */
  if (!C.zf) goto L_129cb776;
  /* 129cb76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb771 jmp 0x129cb9bf */
  goto L_129cb9bf;
L_129cb776:;
  /* 129cb776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb779 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cb77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb77f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cb782 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb785 mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cb78c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cb791 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 129cb794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cb796 je 0x129cb7a8 */
  if (C.zf) goto L_129cb7a8;
  /* 129cb798 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cb79a push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb79f push edx */
  push32((uint32_t)(EDX));
  /* 129cb7a0 call 0x129cb600 */
  push32(0x129cb7a5u); f_129cb600();
  /* 129cb7a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cb7a8:;
  /* 129cb7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb7ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cb7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb7b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cb7b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb7b7 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cb7be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 129cb7c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 129cb7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb7ca je 0x129cb8dc */
  if (C.zf) goto L_129cb8dc;
  /* 129cb7d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb7d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129cb7d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_129cb7dd:;
  /* 129cb7dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb7e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb7e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb7e6 jae 0x129cb8da */
  if (!C.cf) goto L_129cb8da;
  /* 129cb7ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 129cb7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129cb7f5:;
  /* 129cb7f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb7f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 129cb7fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb800 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb806 jge 0x129cb867 */
  if ((C.sf==C.of)) goto L_129cb867;
  /* 129cb808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb80b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb80e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb811 jae 0x129cb867 */
  if (!C.cf) goto L_129cb867;
  /* 129cb813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129cb818 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 129cb81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cb821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cb827 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 129cb82e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb831 jne 0x129cb851 */
  if (!C.zf) goto L_129cb851;
  /* 129cb833 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 129cb839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb83c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 129cb842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb845 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 129cb848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb84b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb84e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129cb851:;
  /* 129cb851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb854 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 129cb85a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 129cb85c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb85f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb862 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cb865 jmp 0x129cb7f5 */
  goto L_129cb7f5;
L_129cb867:;
  /* 129cb867 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb869 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 129cb86f push edx */
  push32((uint32_t)(EDX));
  /* 129cb870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb873 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 129cb879 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb87b push eax */
  push32((uint32_t)(EAX));
  /* 129cb87c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 129cb882 push edx */
  push32((uint32_t)(EDX));
  /* 129cb883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb886 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cb889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb88c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cb88f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb892 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cb899 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 129cb89c push eax */
  push32((uint32_t)(EAX));
  /* 129cb89d call dword ptr [0x129f0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0290))), 0x129cb8a3u);
  /* 129cb8a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb8a5 je 0x129cb8ca */
  if (C.zf) goto L_129cb8ca;
  /* 129cb8a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cb8aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb8b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129cb8b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cb8b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 129cb8bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cb8be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb8c4 jge 0x129cb8c8 */
  if ((C.sf==C.of)) goto L_129cb8c8;
  /* 129cb8c6 jmp 0x129cb8da */
  goto L_129cb8da;
L_129cb8c8:;
  /* 129cb8c8 jmp 0x129cb8d5 */
  goto L_129cb8d5;
L_129cb8ca:;
  /* 129cb8ca call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129cb8d0u);
  /* 129cb8d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cb8d3 jmp 0x129cb8da */
  goto L_129cb8da;
L_129cb8d5:;
  /* 129cb8d5 jmp 0x129cb7dd */
  goto L_129cb7dd;
L_129cb8da:;
  /* 129cb8da jmp 0x129cb92c */
  goto L_129cb92c;
L_129cb8dc:;
  /* 129cb8dc push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb8de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 129cb8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb8e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cb8e8 push edx */
  push32((uint32_t)(EDX));
  /* 129cb8e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb8ec push eax */
  push32((uint32_t)(EAX));
  /* 129cb8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb8f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cb8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb8f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cb8f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb8fc mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cb903 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 129cb906 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb907 call dword ptr [0x129f0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0290))), 0x129cb90du);
  /* 129cb90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb90f je 0x129cb923 */
  if (C.zf) goto L_129cb923;
  /* 129cb911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129cb918 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 129cb91e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129cb921 jmp 0x129cb92c */
  goto L_129cb92c;
L_129cb923:;
  /* 129cb923 call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129cb929u);
  /* 129cb929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129cb92c:;
  /* 129cb92c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb930 jne 0x129cb9b6 */
  if (!C.zf) goto L_129cb9b6;
  /* 129cb936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb93a je 0x129cb96a */
  if (C.zf) goto L_129cb96a;
  /* 129cb93c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb940 jne 0x129cb959 */
  if (!C.zf) goto L_129cb959;
  /* 129cb942 call 0x129cacf0 */
  push32(0x129cb947u); f_129cacf0();
  /* 129cb947 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cb94d call 0x129cad00 */
  push32(0x129cb952u); f_129cad00();
  /* 129cb952 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cb955 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129cb957 jmp 0x129cb965 */
  goto L_129cb965;
L_129cb959:;
  /* 129cb959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cb95c push edx */
  push32((uint32_t)(EDX));
  /* 129cb95d call 0x129cac50 */
  push32(0x129cb962u); f_129cac50();
  /* 129cb962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cb965:;
  /* 129cb965 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb968 jmp 0x129cb9bf */
  goto L_129cb9bf;
L_129cb96a:;
  /* 129cb96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cb970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cb973 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cb976 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cb979 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cb980 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 129cb985 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 129cb988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb98a je 0x129cb99b */
  if (C.zf) goto L_129cb99b;
  /* 129cb98c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cb98f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129cb992 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb995 jne 0x129cb99b */
  if (!C.zf) goto L_129cb99b;
  /* 129cb997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb999 jmp 0x129cb9bf */
  goto L_129cb9bf;
L_129cb99b:;
  /* 129cb99b call 0x129cacf0 */
  push32(0x129cb9a0u); f_129cacf0();
  /* 129cb9a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 129cb9a6 call 0x129cad00 */
  push32(0x129cb9abu); f_129cad00();
  /* 129cb9ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cb9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cb9b4 jmp 0x129cb9bf */
  goto L_129cb9bf;
L_129cb9b6:;
  /* 129cb9b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cb9b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_129cb9bf:;
  /* 129cb9bf mov esp, ebp */
  ESP = (EBP);
  /* 129cb9c1 pop ebp */
  EBP = (pop32());
  /* 129cb9c2 ret  */
  ESPCHK(0x129cb750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x129cb9d0 (199 bytes, 68 insns) */
void f_129cb9d0(void) {
  FTRACE(0x129cb9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cb9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cb9d1 mov ebp, esp */
  EBP = (ESP);
  /* 129cb9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cb9d4 push ebx */
  push32((uint32_t)(EBX));
  /* 129cb9d5 push esi */
  push32((uint32_t)(ESI));
  /* 129cb9d6 push edi */
  push32((uint32_t)(EDI));
L_129cb9d7:;
  /* 129cb9d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb9db jne 0x129cb9fb */
  if (!C.zf) goto L_129cb9fb;
  /* 129cb9dd push 0x129e9ea4 */
  push32((uint32_t)(0x129e9ea4u));
  /* 129cb9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cb9e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 129cb9e6 push 0x129e9f70 */
  push32((uint32_t)(0x129e9f70u));
  /* 129cb9eb push 2 */
  push32((uint32_t)(0x2u));
  /* 129cb9ed call 0x129c1ee0 */
  push32(0x129cb9f2u); f_129c1ee0();
  /* 129cb9f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cb9f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cb9f8 jne 0x129cb9fb */
  if (!C.zf) goto L_129cb9fb;
  /* 129cb9fa int3  */
  x86_unimpl("int3 @ 0x129cb9fa");
L_129cb9fb:;
  /* 129cb9fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cb9fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cb9ff jne 0x129cb9d7 */
  if (!C.zf) goto L_129cb9d7;
  /* 129cba01 mov ecx, dword ptr [0x129ee6ac] */
  ECX = (r32((uint32_t)(0x129ee6ac)));
  /* 129cba07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cba0a mov dword ptr [0x129ee6ac], ecx */
  w32((uint32_t)(0x129ee6ac), (ECX));
  /* 129cba10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cba13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129cba16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 129cba18 push 0x129e9f70 */
  push32((uint32_t)(0x129e9f70u));
  /* 129cba1d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cba1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 129cba24 call 0x129c2e20 */
  push32(0x129cba29u); f_129c2e20();
  /* 129cba29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cba2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 129cba32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cba39 je 0x129cba56 */
  if (C.zf) goto L_129cba56;
  /* 129cba3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cba41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 129cba44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 129cba4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 129cba54 jmp 0x129cba7b */
  goto L_129cba7b;
L_129cba56:;
  /* 129cba56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cba5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129cba5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129cba65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cba6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129cba71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_129cba7b:;
  /* 129cba7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129cba84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129cba86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cba89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129cba90 pop edi */
  EDI = (pop32());
  /* 129cba91 pop esi */
  ESI = (pop32());
  /* 129cba92 pop ebx */
  EBX = (pop32());
  /* 129cba93 mov esp, ebp */
  ESP = (EBP);
  /* 129cba95 pop ebp */
  EBP = (pop32());
  /* 129cba96 ret  */
  ESPCHK(0x129cb9d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x129cbaa0 (50 bytes, 17 insns) */
void f_129cbaa0(void) {
  FTRACE(0x129cbaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbaa1 mov ebp, esp */
  EBP = (ESP);
  /* 129cbaa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbaa6 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbaac jb 0x129cbab2 */
  if (C.cf) goto L_129cbab2;
  /* 129cbaae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cbab0 jmp 0x129cbad0 */
  goto L_129cbad0;
L_129cbab2:;
  /* 129cbab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbab5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cbab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbabb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cbabe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cbac1 mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cbac8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cbacd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_129cbad0:;
  /* 129cbad0 pop ebp */
  EBP = (pop32());
  /* 129cbad1 ret  */
  ESPCHK(0x129cbaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x129cbae0 (300 bytes, 80 insns) */
void f_129cbae0(void) {
  FTRACE(0x129cbae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbae0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbae1 mov ebp, esp */
  EBP = (ESP);
  /* 129cbae3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbae4 cmp dword ptr [0x129efb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbaeb jne 0x129cbaf9 */
  if (!C.zf) goto L_129cbaf9;
  /* 129cbaed mov dword ptr [0x129efb60], 0x200 */
  w32((uint32_t)(0x129efb60), (0x200u));
  /* 129cbaf7 jmp 0x129cbb0c */
  goto L_129cbb0c;
L_129cbaf9:;
  /* 129cbaf9 cmp dword ptr [0x129efb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x129efb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbb00 jge 0x129cbb0c */
  if ((C.sf==C.of)) goto L_129cbb0c;
  /* 129cbb02 mov dword ptr [0x129efb60], 0x14 */
  w32((uint32_t)(0x129efb60), (0x14u));
L_129cbb0c:;
  /* 129cbb0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 129cbb11 push 0x129e9f7c */
  push32((uint32_t)(0x129e9f7cu));
  /* 129cbb16 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cbb18 push 4 */
  push32((uint32_t)(0x4u));
  /* 129cbb1a mov eax, dword ptr [0x129efb60] */
  EAX = (r32((uint32_t)(0x129efb60)));
  /* 129cbb1f push eax */
  push32((uint32_t)(EAX));
  /* 129cbb20 call 0x129c3230 */
  push32(0x129cbb25u); f_129c3230();
  /* 129cbb25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbb28 mov dword ptr [0x129ee820], eax */
  w32((uint32_t)(0x129ee820), (EAX));
  /* 129cbb2d cmp dword ptr [0x129ee820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbb34 jne 0x129cbb75 */
  if (!C.zf) goto L_129cbb75;
  /* 129cbb36 mov dword ptr [0x129efb60], 0x14 */
  w32((uint32_t)(0x129efb60), (0x14u));
  /* 129cbb40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 129cbb45 push 0x129e9f7c */
  push32((uint32_t)(0x129e9f7cu));
  /* 129cbb4a push 2 */
  push32((uint32_t)(0x2u));
  /* 129cbb4c push 4 */
  push32((uint32_t)(0x4u));
  /* 129cbb4e mov ecx, dword ptr [0x129efb60] */
  ECX = (r32((uint32_t)(0x129efb60)));
  /* 129cbb54 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbb55 call 0x129c3230 */
  push32(0x129cbb5au); f_129c3230();
  /* 129cbb5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbb5d mov dword ptr [0x129ee820], eax */
  w32((uint32_t)(0x129ee820), (EAX));
  /* 129cbb62 cmp dword ptr [0x129ee820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbb69 jne 0x129cbb75 */
  if (!C.zf) goto L_129cbb75;
  /* 129cbb6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 129cbb6d call 0x129c1d90 */
  push32(0x129cbb72u); f_129c1d90();
  /* 129cbb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cbb75:;
  /* 129cbb75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cbb7c jmp 0x129cbb87 */
  goto L_129cbb87;
L_129cbb7e:;
  /* 129cbb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbb81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129cbb87:;
  /* 129cbb87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbb8b jge 0x129cbba6 */
  if ((C.sf==C.of)) goto L_129cbba6;
  /* 129cbb8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbb90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cbb93 add eax, 0x129ed120 */
  { uint32_t _a=(EAX),_b=(0x129ed120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbb9b mov edx, dword ptr [0x129ee820] */
  EDX = (r32((uint32_t)(0x129ee820)));
  /* 129cbba1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 129cbba4 jmp 0x129cbb7e */
  goto L_129cbb7e;
L_129cbba6:;
  /* 129cbba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cbbad jmp 0x129cbbb8 */
  goto L_129cbbb8;
L_129cbbaf:;
  /* 129cbbaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbbb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129cbbb8:;
  /* 129cbbb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbbbc jge 0x129cbc08 */
  if ((C.sf==C.of)) goto L_129cbc08;
  /* 129cbbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbbc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cbbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbbc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cbbca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cbbcd mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cbbd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbbd8 je 0x129cbbf6 */
  if (C.zf) goto L_129cbbf6;
  /* 129cbbda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbbdd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cbbe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbbe3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cbbe6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cbbe9 mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cbbf0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbbf4 jne 0x129cbc06 */
  if (!C.zf) goto L_129cbc06;
L_129cbbf6:;
  /* 129cbbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cbbf9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cbbfc mov dword ptr [ecx + 0x129ed130], 0xffffffff */
  w32((uint32_t)(ECX + 0x129ed130), (0xffffffffu));
L_129cbc06:;
  /* 129cbc06 jmp 0x129cbbaf */
  goto L_129cbbaf;
L_129cbc08:;
  /* 129cbc08 mov esp, ebp */
  ESP = (EBP);
  /* 129cbc0a pop ebp */
  EBP = (pop32());
  /* 129cbc0b ret  */
  ESPCHK(0x129cbae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x129cbc10 (26 bytes, 9 insns) */
void f_129cbc10(void) {
  FTRACE(0x129cbc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbc10 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbc11 mov ebp, esp */
  EBP = (ESP);
  /* 129cbc13 call 0x129cc810 */
  push32(0x129cbc18u); f_129cc810();
  /* 129cbc18 movsx eax, byte ptr [0x129ee4c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x129ee4c4))));
  /* 129cbc1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cbc21 je 0x129cbc28 */
  if (C.zf) goto L_129cbc28;
  /* 129cbc23 call 0x129cc5d0 */
  push32(0x129cbc28u); f_129cc5d0();
L_129cbc28:;
  /* 129cbc28 pop ebp */
  EBP = (pop32());
  /* 129cbc29 ret  */
  ESPCHK(0x129cbc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x129cbc30 (61 bytes, 20 insns) */
void f_129cbc30(void) {
  FTRACE(0x129cbc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbc30 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbc31 mov ebp, esp */
  EBP = (ESP);
  /* 129cbc33 cmp dword ptr [ebp + 8], 0x129ed120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ed120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbc3a jb 0x129cbc5e */
  if (C.cf) goto L_129cbc5e;
  /* 129cbc3c cmp dword ptr [ebp + 8], 0x129ed380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ed380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbc43 ja 0x129cbc5e */
  if ((!C.cf&&!C.zf)) goto L_129cbc5e;
  /* 129cbc45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbc48 sub eax, 0x129ed120 */
  { uint32_t _a=(EAX),_b=(0x129ed120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cbc4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cbc50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbc53 push eax */
  push32((uint32_t)(EAX));
  /* 129cbc54 call 0x129c6820 */
  push32(0x129cbc59u); f_129c6820();
  /* 129cbc59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbc5c jmp 0x129cbc6b */
  goto L_129cbc6b;
L_129cbc5e:;
  /* 129cbc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbc61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbc64 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbc65 call dword ptr [0x129f0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0320))), 0x129cbc6bu);
L_129cbc6b:;
  /* 129cbc6b pop ebp */
  EBP = (pop32());
  /* 129cbc6c ret  */
  ESPCHK(0x129cbc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x129cbc70 (41 bytes, 16 insns) */
void f_129cbc70(void) {
  FTRACE(0x129cbc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbc70 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbc71 mov ebp, esp */
  EBP = (ESP);
  /* 129cbc73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbc77 jge 0x129cbc8a */
  if ((C.sf==C.of)) goto L_129cbc8a;
  /* 129cbc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbc7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbc7f push eax */
  push32((uint32_t)(EAX));
  /* 129cbc80 call 0x129c6820 */
  push32(0x129cbc85u); f_129c6820();
  /* 129cbc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbc88 jmp 0x129cbc97 */
  goto L_129cbc97;
L_129cbc8a:;
  /* 129cbc8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cbc8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbc90 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbc91 call dword ptr [0x129f0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0320))), 0x129cbc97u);
L_129cbc97:;
  /* 129cbc97 pop ebp */
  EBP = (pop32());
  /* 129cbc98 ret  */
  ESPCHK(0x129cbc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bca0 @ 0x129cbca0 (61 bytes, 20 insns) */
void f_129cbca0(void) {
  FTRACE(0x129cbca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbca0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbca1 mov ebp, esp */
  EBP = (ESP);
  /* 129cbca3 cmp dword ptr [ebp + 8], 0x129ed120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ed120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbcaa jb 0x129cbcce */
  if (C.cf) goto L_129cbcce;
  /* 129cbcac cmp dword ptr [ebp + 8], 0x129ed380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ed380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbcb3 ja 0x129cbcce */
  if ((!C.cf&&!C.zf)) goto L_129cbcce;
  /* 129cbcb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbcb8 sub eax, 0x129ed120 */
  { uint32_t _a=(EAX),_b=(0x129ed120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cbcbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cbcc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbcc3 push eax */
  push32((uint32_t)(EAX));
  /* 129cbcc4 call 0x129c68c0 */
  push32(0x129cbcc9u); f_129c68c0();
  /* 129cbcc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbccc jmp 0x129cbcdb */
  goto L_129cbcdb;
L_129cbcce:;
  /* 129cbcce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbcd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbcd4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbcd5 call dword ptr [0x129f0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0324))), 0x129cbcdbu);
L_129cbcdb:;
  /* 129cbcdb pop ebp */
  EBP = (pop32());
  /* 129cbcdc ret  */
  ESPCHK(0x129cbca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x129cbce0 (41 bytes, 16 insns) */
void f_129cbce0(void) {
  FTRACE(0x129cbce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbce0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbce1 mov ebp, esp */
  EBP = (ESP);
  /* 129cbce3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbce7 jge 0x129cbcfa */
  if ((C.sf==C.of)) goto L_129cbcfa;
  /* 129cbce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbcec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbcef push eax */
  push32((uint32_t)(EAX));
  /* 129cbcf0 call 0x129c68c0 */
  push32(0x129cbcf5u); f_129c68c0();
  /* 129cbcf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbcf8 jmp 0x129cbd07 */
  goto L_129cbd07;
L_129cbcfa:;
  /* 129cbcfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cbcfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbd00 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbd01 call dword ptr [0x129f0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0324))), 0x129cbd07u);
L_129cbd07:;
  /* 129cbd07 pop ebp */
  EBP = (pop32());
  /* 129cbd08 ret  */
  ESPCHK(0x129cbce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x129cbd10 (119 bytes, 34 insns) */
void f_129cbd10(void) {
  FTRACE(0x129cbd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbd10 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbd11 mov ebp, esp */
  EBP = (ESP);
  /* 129cbd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cbd16 push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129cbd1b call dword ptr [0x129f02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a4))), 0x129cbd21u);
  /* 129cbd21 cmp dword ptr [0x129ee80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbd28 je 0x129cbd48 */
  if (C.zf) goto L_129cbd48;
  /* 129cbd2a push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129cbd2f call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129cbd35u);
  /* 129cbd35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129cbd37 call 0x129c6820 */
  push32(0x129cbd3cu); f_129c6820();
  /* 129cbd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbd3f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129cbd46 jmp 0x129cbd4f */
  goto L_129cbd4f;
L_129cbd48:;
  /* 129cbd48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129cbd4f:;
  /* 129cbd4f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 129cbd53 push eax */
  push32((uint32_t)(EAX));
  /* 129cbd54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbd57 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbd58 call 0x129cbd90 */
  push32(0x129cbd5du); f_129cbd90();
  /* 129cbd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbd60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cbd63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbd67 je 0x129cbd75 */
  if (C.zf) goto L_129cbd75;
  /* 129cbd69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129cbd6b call 0x129c68c0 */
  push32(0x129cbd70u); f_129c68c0();
  /* 129cbd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbd73 jmp 0x129cbd80 */
  goto L_129cbd80;
L_129cbd75:;
  /* 129cbd75 push 0x129ee81c */
  push32((uint32_t)(0x129ee81cu));
  /* 129cbd7a call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129cbd80u);
L_129cbd80:;
  /* 129cbd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cbd83 mov esp, ebp */
  ESP = (EBP);
  /* 129cbd85 pop ebp */
  EBP = (pop32());
  /* 129cbd86 ret  */
  ESPCHK(0x129cbd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x129cbd90 (160 bytes, 50 insns) */
void f_129cbd90(void) {
  FTRACE(0x129cbd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbd90 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbd91 mov ebp, esp */
  EBP = (ESP);
  /* 129cbd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cbd96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbd9a jne 0x129cbda3 */
  if (!C.zf) goto L_129cbda3;
  /* 129cbd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cbd9e jmp 0x129cbe2c */
  goto L_129cbe2c;
L_129cbda3:;
  /* 129cbda3 cmp dword ptr [0x129ee690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbdaa jne 0x129cbdda */
  if (!C.zf) goto L_129cbdda;
  /* 129cbdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cbdaf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cbdb4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbdb9 jle 0x129cbdcb */
  if ((C.zf||C.sf!=C.of)) goto L_129cbdcb;
  /* 129cbdbb call 0x129cacf0 */
  push32(0x129cbdc0u); f_129cacf0();
  /* 129cbdc0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 129cbdc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cbdc9 jmp 0x129cbe2c */
  goto L_129cbe2c;
L_129cbdcb:;
  /* 129cbdcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbdce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 129cbdd1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 129cbdd3 mov eax, 1 */
  EAX = (0x1u);
  /* 129cbdd8 jmp 0x129cbe2c */
  goto L_129cbe2c;
L_129cbdda:;
  /* 129cbdda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cbde1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 129cbde4 push eax */
  push32((uint32_t)(EAX));
  /* 129cbde5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cbde7 mov ecx, dword ptr [0x129ecea4] */
  ECX = (r32((uint32_t)(0x129ecea4)));
  /* 129cbded push ecx */
  push32((uint32_t)(ECX));
  /* 129cbdee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbdf1 push edx */
  push32((uint32_t)(EDX));
  /* 129cbdf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cbdf4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 129cbdf7 push eax */
  push32((uint32_t)(EAX));
  /* 129cbdf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 129cbdfd mov ecx, dword ptr [0x129ee6a0] */
  ECX = (r32((uint32_t)(0x129ee6a0)));
  /* 129cbe03 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbe04 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129cbe0au);
  /* 129cbe0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cbe0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbe11 je 0x129cbe19 */
  if (C.zf) goto L_129cbe19;
  /* 129cbe13 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbe17 je 0x129cbe29 */
  if (C.zf) goto L_129cbe29;
L_129cbe19:;
  /* 129cbe19 call 0x129cacf0 */
  push32(0x129cbe1eu); f_129cacf0();
  /* 129cbe1e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 129cbe24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cbe27 jmp 0x129cbe2c */
  goto L_129cbe2c;
L_129cbe29:;
  /* 129cbe29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129cbe2c:;
  /* 129cbe2c mov esp, ebp */
  ESP = (EBP);
  /* 129cbe2e pop ebp */
  EBP = (pop32());
  /* 129cbe2f ret  */
  ESPCHK(0x129cbd90u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x129cbe30 (32 bytes, 18 insns) */
void f_129cbe30(void) {
  FTRACE(0x129cbe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbe30 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbe31 mov ebp, esp */
  EBP = (ESP);
  /* 129cbe33 push ebx */
  push32((uint32_t)(EBX));
  /* 129cbe34 push esi */
  push32((uint32_t)(ESI));
  /* 129cbe35 push edi */
  push32((uint32_t)(EDI));
  /* 129cbe36 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbe37 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cbe39 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cbe3b push 0x129cbe48 */
  push32((uint32_t)(0x129cbe48u));
  /* 129cbe40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 129cbe43 call 0x129d357c */
  push32(0x129cbe48u); f_129d357c();
  /* 129cbe48 pop ebp */
  EBP = (pop32());
  /* 129cbe49 pop edi */
  EDI = (pop32());
  /* 129cbe4a pop esi */
  ESI = (pop32());
  /* 129cbe4b pop ebx */
  EBX = (pop32());
  /* 129cbe4c mov esp, ebp */
  ESP = (EBP);
  /* 129cbe4e pop ebp */
  EBP = (pop32());
  /* 129cbe4f ret  */
  ESPCHK(0x129cbe30u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x129cbe72 (104 bytes, 33 insns) */
void f_129cbe72(void) {
  FTRACE(0x129cbe72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbe72 push ebx */
  push32((uint32_t)(EBX));
  /* 129cbe73 push esi */
  push32((uint32_t)(ESI));
  /* 129cbe74 push edi */
  push32((uint32_t)(EDI));
  /* 129cbe75 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129cbe79 push eax */
  push32((uint32_t)(EAX));
  /* 129cbe7a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 129cbe7c push 0x129cbe50 */
  push32((uint32_t)(0x129cbe50u));
  /* 129cbe81 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 129cbe88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_129cbe8f:;
  /* 129cbe8f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 129cbe93 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 129cbe96 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 129cbe99 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbe9c je 0x129cbecc */
  if (C.zf) goto L_129cbecc;
  /* 129cbe9e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbea2 je 0x129cbecc */
  if (C.zf) goto L_129cbecc;
  /* 129cbea4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 129cbea7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 129cbeaa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 129cbeae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 129cbeb1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cbeb6 jne 0x129cbeca */
  if (!C.zf) goto L_129cbeca;
  /* 129cbeb8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 129cbebd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 129cbec1 call 0x129cbf06 */
  push32(0x129cbec6u); f_129cbf06();
  /* 129cbec6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x129cbecau);
L_129cbeca:;
  /* 129cbeca jmp 0x129cbe8f */
  goto L_129cbe8f;
L_129cbecc:;
  /* 129cbecc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 129cbed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbed6 pop edi */
  EDI = (pop32());
  /* 129cbed7 pop esi */
  ESI = (pop32());
  /* 129cbed8 pop ebx */
  EBX = (pop32());
  /* 129cbed9 ret  */
  ESPCHK(0x129cbe72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf06 @ 0x129cbf06 (24 bytes, 10 insns) */
void f_129cbf06(void) {
  FTRACE(0x129cbf06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbf06 push ebx */
  push32((uint32_t)(EBX));
  /* 129cbf07 push ecx */
  push32((uint32_t)(ECX));
  /* 129cbf08 mov ebx, 0x129ed3b8 */
  EBX = (0x129ed3b8u);
  /* 129cbf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cbf10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 129cbf13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 129cbf16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 129cbf19 pop ecx */
  ECX = (pop32());
  /* 129cbf1a pop ebx */
  EBX = (pop32());
  /* 129cbf1b ret 4 */
  ESPCHK(0x129cbf06u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bfe5 @ 0x129cbfe5 (27 bytes, 11 insns) */
void f_129cbfe5(void) {
  FTRACE(0x129cbfe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cbfe5 push ebp */
  push32((uint32_t)(EBP));
  /* 129cbfe6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 129cbfea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 129cbfec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 129cbfef push eax */
  push32((uint32_t)(EAX));
  /* 129cbff0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 129cbff3 push eax */
  push32((uint32_t)(EAX));
  /* 129cbff4 call 0x129cbe72 */
  push32(0x129cbff9u); f_129cbe72();
  /* 129cbff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cbffc pop ebp */
  EBP = (pop32());
  /* 129cbffd ret 4 */
  ESPCHK(0x129cbfe5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c000 @ 0x129cc000 (482 bytes, 138 insns) */
void f_129cc000(void) {
  FTRACE(0x129cc000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc000 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc001 mov ebp, esp */
  EBP = (ESP);
  /* 129cc003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc006 push esi */
  push32((uint32_t)(ESI));
  /* 129cc007 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 129cc00e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 129cc010 call 0x129c6820 */
  push32(0x129cc015u); f_129c6820();
  /* 129cc015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc018 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129cc01f jmp 0x129cc02a */
  goto L_129cc02a;
L_129cc021:;
  /* 129cc021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129cc02a:;
  /* 129cc02a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc02e jge 0x129cc1d0 */
  if ((C.sf==C.of)) goto L_129cc1d0;
  /* 129cc034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc037 cmp dword ptr [ecx*4 + 0x129efe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129efe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc03f je 0x129cc136 */
  if (C.zf) goto L_129cc136;
  /* 129cc045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc048 mov eax, dword ptr [edx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129cc04f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cc052 jmp 0x129cc05d */
  goto L_129cc05d;
L_129cc054:;
  /* 129cc054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc057 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc05a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129cc05d:;
  /* 129cc05d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc060 mov eax, dword ptr [edx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129cc067 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc06c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc06f jae 0x129cc126 */
  if (!C.cf) goto L_129cc126;
  /* 129cc075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc078 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129cc07c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cc081 jne 0x129cc121 */
  if (!C.zf) goto L_129cc121;
  /* 129cc087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc08a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc08e jne 0x129cc0c9 */
  if (!C.zf) goto L_129cc0c9;
  /* 129cc090 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129cc092 call 0x129c6820 */
  push32(0x129cc097u); f_129c6820();
  /* 129cc097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc09d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc0a1 jne 0x129cc0bf */
  if (!C.zf) goto L_129cc0bf;
  /* 129cc0a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc0a9 push edx */
  push32((uint32_t)(EDX));
  /* 129cc0aa call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129cc0b0u);
  /* 129cc0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129cc0b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_129cc0bf:;
  /* 129cc0bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129cc0c1 call 0x129c68c0 */
  push32(0x129cc0c6u); f_129c68c0();
  /* 129cc0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cc0c9:;
  /* 129cc0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc0cf push eax */
  push32((uint32_t)(EAX));
  /* 129cc0d0 call dword ptr [0x129f0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0320))), 0x129cc0d6u);
  /* 129cc0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129cc0dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc0e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cc0e2 je 0x129cc0f6 */
  if (C.zf) goto L_129cc0f6;
  /* 129cc0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc0ea push eax */
  push32((uint32_t)(EAX));
  /* 129cc0eb call dword ptr [0x129f0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0324))), 0x129cc0f1u);
  /* 129cc0f1 jmp 0x129cc054 */
  goto L_129cc054;
L_129cc0f6:;
  /* 129cc0f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc0f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129cc0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc102 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cc105 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc10b sub eax, dword ptr [edx*4 + 0x129efe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x129efe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc112 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129cc113 mov esi, 0x24 */
  ESI = (0x24u);
  /* 129cc118 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129cc11a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cc11f jmp 0x129cc126 */
  goto L_129cc126;
L_129cc121:;
  /* 129cc121 jmp 0x129cc054 */
  goto L_129cc054;
L_129cc126:;
  /* 129cc126 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc12a je 0x129cc131 */
  if (C.zf) goto L_129cc131;
  /* 129cc12c jmp 0x129cc1d0 */
  goto L_129cc1d0;
L_129cc131:;
  /* 129cc131 jmp 0x129cc1cb */
  goto L_129cc1cb;
L_129cc136:;
  /* 129cc136 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 129cc138 push 0x129e9f84 */
  push32((uint32_t)(0x129e9f84u));
  /* 129cc13d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc13f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 129cc144 call 0x129c2e20 */
  push32(0x129cc149u); f_129c2e20();
  /* 129cc149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc14c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cc14f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc153 je 0x129cc1c9 */
  if (C.zf) goto L_129cc1c9;
  /* 129cc155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc15b mov dword ptr [eax*4 + 0x129efe60], ecx */
  w32((uint32_t)(EAX*4 + 0x129efe60), (ECX));
  /* 129cc162 mov edx, dword ptr [0x129eff9c] */
  EDX = (r32((uint32_t)(0x129eff9c)));
  /* 129cc168 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc16b mov dword ptr [0x129eff9c], edx */
  w32((uint32_t)(0x129eff9c), (EDX));
  /* 129cc171 jmp 0x129cc17c */
  goto L_129cc17c;
L_129cc173:;
  /* 129cc173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc176 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129cc17c:;
  /* 129cc17c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc17f mov edx, dword ptr [ecx*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cc186 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc18c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc18f jae 0x129cc1b4 */
  if (!C.cf) goto L_129cc1b4;
  /* 129cc191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc194 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129cc198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc19b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129cc1a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc1a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129cc1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc1ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129cc1b2 jmp 0x129cc173 */
  goto L_129cc173;
L_129cc1b4:;
  /* 129cc1b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc1b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cc1ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cc1bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc1c0 push edx */
  push32((uint32_t)(EDX));
  /* 129cc1c1 call 0x129cc510 */
  push32(0x129cc1c6u); f_129cc510();
  /* 129cc1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cc1c9:;
  /* 129cc1c9 jmp 0x129cc1d0 */
  goto L_129cc1d0;
L_129cc1cb:;
  /* 129cc1cb jmp 0x129cc021 */
  goto L_129cc021;
L_129cc1d0:;
  /* 129cc1d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 129cc1d2 call 0x129c68c0 */
  push32(0x129cc1d7u); f_129c68c0();
  /* 129cc1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc1dd pop esi */
  ESI = (pop32());
  /* 129cc1de mov esp, ebp */
  ESP = (EBP);
  /* 129cc1e0 pop ebp */
  EBP = (pop32());
  /* 129cc1e1 ret  */
  ESPCHK(0x129cc000u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x129cc1f0 (183 bytes, 57 insns) */
void f_129cc1f0(void) {
  FTRACE(0x129cc1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc1f1 mov ebp, esp */
  EBP = (ESP);
  /* 129cc1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc1f7 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc1fd jae 0x129cc28a */
  if (!C.cf) goto L_129cc28a;
  /* 129cc203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc206 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cc209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc20c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cc20f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc212 mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cc219 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc21d jne 0x129cc28a */
  if (!C.zf) goto L_129cc28a;
  /* 129cc21f cmp dword ptr [0x129ee484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc226 jne 0x129cc26a */
  if (!C.zf) goto L_129cc26a;
  /* 129cc228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc22b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129cc22e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc232 je 0x129cc242 */
  if (C.zf) goto L_129cc242;
  /* 129cc234 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc238 je 0x129cc250 */
  if (C.zf) goto L_129cc250;
  /* 129cc23a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc23e je 0x129cc25e */
  if (C.zf) goto L_129cc25e;
  /* 129cc240 jmp 0x129cc26a */
  goto L_129cc26a;
L_129cc242:;
  /* 129cc242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc245 push edx */
  push32((uint32_t)(EDX));
  /* 129cc246 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 129cc248 call dword ptr [0x129f02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f0))), 0x129cc24eu);
  /* 129cc24e jmp 0x129cc26a */
  goto L_129cc26a;
L_129cc250:;
  /* 129cc250 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc253 push eax */
  push32((uint32_t)(EAX));
  /* 129cc254 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 129cc256 call dword ptr [0x129f02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f0))), 0x129cc25cu);
  /* 129cc25c jmp 0x129cc26a */
  goto L_129cc26a;
L_129cc25e:;
  /* 129cc25e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc261 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc262 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 129cc264 call dword ptr [0x129f02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f0))), 0x129cc26au);
L_129cc26a:;
  /* 129cc26a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc26d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 129cc270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc273 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 129cc276 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc279 mov ecx, dword ptr [edx*4 + 0x129efe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129cc280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc283 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 129cc286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cc288 jmp 0x129cc2a3 */
  goto L_129cc2a3;
L_129cc28a:;
  /* 129cc28a call 0x129cacf0 */
  push32(0x129cc28fu); f_129cacf0();
  /* 129cc28f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cc295 call 0x129cad00 */
  push32(0x129cc29au); f_129cad00();
  /* 129cc29a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cc2a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129cc2a3:;
  /* 129cc2a3 mov esp, ebp */
  ESP = (EBP);
  /* 129cc2a5 pop ebp */
  EBP = (pop32());
  /* 129cc2a6 ret  */
  ESPCHK(0x129cc1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x129cc2b0 (216 bytes, 63 insns) */
void f_129cc2b0(void) {
  FTRACE(0x129cc2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc2b1 mov ebp, esp */
  EBP = (ESP);
  /* 129cc2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc2b7 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc2bd jae 0x129cc36b */
  if (!C.cf) goto L_129cc36b;
  /* 129cc2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc2c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cc2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc2cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cc2cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc2d2 mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cc2d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cc2de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc2e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cc2e3 je 0x129cc36b */
  if (C.zf) goto L_129cc36b;
  /* 129cc2e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc2ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 129cc2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc2f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 129cc2f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc2f8 mov ecx, dword ptr [edx*4 + 0x129efe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129cc2ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc303 je 0x129cc36b */
  if (C.zf) goto L_129cc36b;
  /* 129cc305 cmp dword ptr [0x129ee484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc30c jne 0x129cc34a */
  if (!C.zf) goto L_129cc34a;
  /* 129cc30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc311 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129cc314 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc318 je 0x129cc328 */
  if (C.zf) goto L_129cc328;
  /* 129cc31a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc31e je 0x129cc334 */
  if (C.zf) goto L_129cc334;
  /* 129cc320 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc324 je 0x129cc340 */
  if (C.zf) goto L_129cc340;
  /* 129cc326 jmp 0x129cc34a */
  goto L_129cc34a;
L_129cc328:;
  /* 129cc328 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cc32a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 129cc32c call dword ptr [0x129f02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f0))), 0x129cc332u);
  /* 129cc332 jmp 0x129cc34a */
  goto L_129cc34a;
L_129cc334:;
  /* 129cc334 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cc336 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 129cc338 call dword ptr [0x129f02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f0))), 0x129cc33eu);
  /* 129cc33e jmp 0x129cc34a */
  goto L_129cc34a;
L_129cc340:;
  /* 129cc340 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cc342 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 129cc344 call dword ptr [0x129f02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f0))), 0x129cc34au);
L_129cc34a:;
  /* 129cc34a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cc350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc353 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cc356 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc359 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cc360 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 129cc367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cc369 jmp 0x129cc384 */
  goto L_129cc384;
L_129cc36b:;
  /* 129cc36b call 0x129cacf0 */
  push32(0x129cc370u); f_129cacf0();
  /* 129cc370 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cc376 call 0x129cad00 */
  push32(0x129cc37bu); f_129cad00();
  /* 129cc37b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cc381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129cc384:;
  /* 129cc384 mov esp, ebp */
  ESP = (EBP);
  /* 129cc386 pop ebp */
  EBP = (pop32());
  /* 129cc387 ret  */
  ESPCHK(0x129cc2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x129cc390 (102 bytes, 30 insns) */
void f_129cc390(void) {
  FTRACE(0x129cc390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc390 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc391 mov ebp, esp */
  EBP = (ESP);
  /* 129cc393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc396 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc39c jae 0x129cc3db */
  if (!C.cf) goto L_129cc3db;
  /* 129cc39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc3a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cc3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc3a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cc3aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc3ad mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cc3b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cc3b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc3bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cc3be je 0x129cc3db */
  if (C.zf) goto L_129cc3db;
  /* 129cc3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc3c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 129cc3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc3c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 129cc3cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc3cf mov ecx, dword ptr [edx*4 + 0x129efe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129cc3d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 129cc3d9 jmp 0x129cc3f4 */
  goto L_129cc3f4;
L_129cc3db:;
  /* 129cc3db call 0x129cacf0 */
  push32(0x129cc3e0u); f_129cacf0();
  /* 129cc3e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cc3e6 call 0x129cad00 */
  push32(0x129cc3ebu); f_129cad00();
  /* 129cc3eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cc3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129cc3f4:;
  /* 129cc3f4 pop ebp */
  EBP = (pop32());
  /* 129cc3f5 ret  */
  ESPCHK(0x129cc390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x129cc400 (260 bytes, 83 insns) */
void f_129cc400(void) {
  FTRACE(0x129cc400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc400 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc401 mov ebp, esp */
  EBP = (ESP);
  /* 129cc403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc406 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 129cc40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc40d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 129cc410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cc412 je 0x129cc41d */
  if (C.zf) goto L_129cc41d;
  /* 129cc414 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc417 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 129cc41a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_129cc41d:;
  /* 129cc41d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc420 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cc428 je 0x129cc432 */
  if (C.zf) goto L_129cc432;
  /* 129cc42a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc42d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 129cc42f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_129cc432:;
  /* 129cc432 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc435 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc43b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cc43d je 0x129cc448 */
  if (C.zf) goto L_129cc448;
  /* 129cc43f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc442 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 129cc445 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_129cc448:;
  /* 129cc448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc44b push eax */
  push32((uint32_t)(EAX));
  /* 129cc44c call dword ptr [0x129f02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02dc))), 0x129cc452u);
  /* 129cc452 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cc455 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc459 jne 0x129cc472 */
  if (!C.zf) goto L_129cc472;
  /* 129cc45b call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129cc461u);
  /* 129cc461 push eax */
  push32((uint32_t)(EAX));
  /* 129cc462 call 0x129cac50 */
  push32(0x129cc467u); f_129cac50();
  /* 129cc467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc46a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cc46d jmp 0x129cc500 */
  goto L_129cc500;
L_129cc472:;
  /* 129cc472 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc476 jne 0x129cc483 */
  if (!C.zf) goto L_129cc483;
  /* 129cc478 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc47b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 129cc47e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 129cc481 jmp 0x129cc492 */
  goto L_129cc492;
L_129cc483:;
  /* 129cc483 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc487 jne 0x129cc492 */
  if (!C.zf) goto L_129cc492;
  /* 129cc489 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc48c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 129cc48f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_129cc492:;
  /* 129cc492 call 0x129cc000 */
  push32(0x129cc497u); f_129cc000();
  /* 129cc497 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cc49a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc49e jne 0x129cc4bb */
  if (!C.zf) goto L_129cc4bb;
  /* 129cc4a0 call 0x129cacf0 */
  push32(0x129cc4a5u); f_129cacf0();
  /* 129cc4a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 129cc4ab call 0x129cad00 */
  push32(0x129cc4b0u); f_129cad00();
  /* 129cc4b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129cc4b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cc4b9 jmp 0x129cc500 */
  goto L_129cc500;
L_129cc4bb:;
  /* 129cc4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc4be push eax */
  push32((uint32_t)(EAX));
  /* 129cc4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc4c3 call 0x129cc1f0 */
  push32(0x129cc4c8u); f_129cc1f0();
  /* 129cc4c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc4cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc4ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 129cc4d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 129cc4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc4d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cc4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc4dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cc4e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc4e3 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cc4ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 129cc4ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 129cc4f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc4f5 call 0x129cc5a0 */
  push32(0x129cc4fau); f_129cc5a0();
  /* 129cc4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc4fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129cc500:;
  /* 129cc500 mov esp, ebp */
  ESP = (EBP);
  /* 129cc502 pop ebp */
  EBP = (pop32());
  /* 129cc503 ret  */
  ESPCHK(0x129cc400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x129cc510 (134 bytes, 44 insns) */
void f_129cc510(void) {
  FTRACE(0x129cc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc510 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc511 mov ebp, esp */
  EBP = (ESP);
  /* 129cc513 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc517 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cc51a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc51d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cc520 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc523 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cc52a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc52c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129cc52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc532 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc536 jne 0x129cc571 */
  if (!C.zf) goto L_129cc571;
  /* 129cc538 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129cc53a call 0x129c6820 */
  push32(0x129cc53fu); f_129c6820();
  /* 129cc53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc545 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc549 jne 0x129cc567 */
  if (!C.zf) goto L_129cc567;
  /* 129cc54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc54e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc551 push edx */
  push32((uint32_t)(EDX));
  /* 129cc552 call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129cc558u);
  /* 129cc558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc55b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129cc55e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_129cc567:;
  /* 129cc567 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129cc569 call 0x129c68c0 */
  push32(0x129cc56eu); f_129c68c0();
  /* 129cc56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cc571:;
  /* 129cc571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc574 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cc577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc57a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cc57d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc580 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cc587 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 129cc58b push eax */
  push32((uint32_t)(EAX));
  /* 129cc58c call dword ptr [0x129f0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0320))), 0x129cc592u);
  /* 129cc592 mov esp, ebp */
  ESP = (EBP);
  /* 129cc594 pop ebp */
  EBP = (pop32());
  /* 129cc595 ret  */
  ESPCHK(0x129cc510u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x129cc5a0 (38 bytes, 13 insns) */
void f_129cc5a0(void) {
  FTRACE(0x129cc5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc5a1 mov ebp, esp */
  EBP = (ESP);
  /* 129cc5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cc5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cc5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc5b2 mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cc5b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 129cc5bd push eax */
  push32((uint32_t)(EAX));
  /* 129cc5be call dword ptr [0x129f0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0324))), 0x129cc5c4u);
  /* 129cc5c4 pop ebp */
  EBP = (pop32());
  /* 129cc5c5 ret  */
  ESPCHK(0x129cc5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x129cc5d0 (218 bytes, 63 insns) */
void f_129cc5d0(void) {
  FTRACE(0x129cc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 129cc5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cc5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc5df call 0x129c6820 */
  push32(0x129cc5e4u); f_129c6820();
  /* 129cc5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc5e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 129cc5ee jmp 0x129cc5f9 */
  goto L_129cc5f9;
L_129cc5f0:;
  /* 129cc5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc5f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc5f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129cc5f9:;
  /* 129cc5f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc5fc cmp ecx, dword ptr [0x129efb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc602 jge 0x129cc699 */
  if ((C.sf==C.of)) goto L_129cc699;
  /* 129cc608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc60b mov eax, dword ptr [0x129ee820] */
  EAX = (r32((uint32_t)(0x129ee820)));
  /* 129cc610 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc614 je 0x129cc694 */
  if (C.zf) goto L_129cc694;
  /* 129cc616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc619 mov edx, dword ptr [0x129ee820] */
  EDX = (r32((uint32_t)(0x129ee820)));
  /* 129cc61f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 129cc622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cc625 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cc62d je 0x129cc651 */
  if (C.zf) goto L_129cc651;
  /* 129cc62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc632 mov eax, dword ptr [0x129ee820] */
  EAX = (r32((uint32_t)(0x129ee820)));
  /* 129cc637 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 129cc63a push ecx */
  push32((uint32_t)(ECX));
  /* 129cc63b call 0x129cd3c0 */
  push32(0x129cc640u); f_129cd3c0();
  /* 129cc640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc643 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc646 je 0x129cc651 */
  if (C.zf) goto L_129cc651;
  /* 129cc648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc64e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129cc651:;
  /* 129cc651 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc655 jl 0x129cc694 */
  if ((C.sf!=C.of)) goto L_129cc694;
  /* 129cc657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc65a mov ecx, dword ptr [0x129ee820] */
  ECX = (r32((uint32_t)(0x129ee820)));
  /* 129cc660 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129cc663 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc666 push edx */
  push32((uint32_t)(EDX));
  /* 129cc667 call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129cc66du);
  /* 129cc66d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc66f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc672 mov ecx, dword ptr [0x129ee820] */
  ECX = (r32((uint32_t)(0x129ee820)));
  /* 129cc678 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129cc67b push edx */
  push32((uint32_t)(EDX));
  /* 129cc67c call 0x129c38b0 */
  push32(0x129cc681u); f_129c38b0();
  /* 129cc681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc687 mov ecx, dword ptr [0x129ee820] */
  ECX = (r32((uint32_t)(0x129ee820)));
  /* 129cc68d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_129cc694:;
  /* 129cc694 jmp 0x129cc5f0 */
  goto L_129cc5f0;
L_129cc699:;
  /* 129cc699 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc69b call 0x129c68c0 */
  push32(0x129cc6a0u); f_129c68c0();
  /* 129cc6a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc6a6 mov esp, ebp */
  ESP = (EBP);
  /* 129cc6a8 pop ebp */
  EBP = (pop32());
  /* 129cc6a9 ret  */
  ESPCHK(0x129cc5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x129cc6b0 (68 bytes, 26 insns) */
void f_129cc6b0(void) {
  FTRACE(0x129cc6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc6b1 mov ebp, esp */
  EBP = (ESP);
  /* 129cc6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc6b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc6b8 jne 0x129cc6c6 */
  if (!C.zf) goto L_129cc6c6;
  /* 129cc6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 129cc6bc call 0x129cc820 */
  push32(0x129cc6c1u); f_129cc820();
  /* 129cc6c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc6c4 jmp 0x129cc6f0 */
  goto L_129cc6f0;
L_129cc6c6:;
  /* 129cc6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc6c9 push eax */
  push32((uint32_t)(EAX));
  /* 129cc6ca call 0x129cbc30 */
  push32(0x129cc6cfu); f_129cbc30();
  /* 129cc6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc6d6 call 0x129cc700 */
  push32(0x129cc6dbu); f_129cc700();
  /* 129cc6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc6de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cc6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc6e4 push edx */
  push32((uint32_t)(EDX));
  /* 129cc6e5 call 0x129cbca0 */
  push32(0x129cc6eau); f_129cbca0();
  /* 129cc6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc6ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129cc6f0:;
  /* 129cc6f0 mov esp, ebp */
  ESP = (EBP);
  /* 129cc6f2 pop ebp */
  EBP = (pop32());
  /* 129cc6f3 ret  */
  ESPCHK(0x129cc6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x129cc700 (65 bytes, 26 insns) */
void f_129cc700(void) {
  FTRACE(0x129cc700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc700 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc701 mov ebp, esp */
  EBP = (ESP);
  /* 129cc703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc706 push eax */
  push32((uint32_t)(EAX));
  /* 129cc707 call 0x129cc750 */
  push32(0x129cc70cu); f_129cc750();
  /* 129cc70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cc711 je 0x129cc718 */
  if (C.zf) goto L_129cc718;
  /* 129cc713 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cc716 jmp 0x129cc73f */
  goto L_129cc73f;
L_129cc718:;
  /* 129cc718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc71b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cc71e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cc726 je 0x129cc73d */
  if (C.zf) goto L_129cc73d;
  /* 129cc728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc72b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129cc72e push ecx */
  push32((uint32_t)(ECX));
  /* 129cc72f call 0x129cd510 */
  push32(0x129cc734u); f_129cd510();
  /* 129cc734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc737 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cc739 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc73b jmp 0x129cc73f */
  goto L_129cc73f;
L_129cc73d:;
  /* 129cc73d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cc73f:;
  /* 129cc73f pop ebp */
  EBP = (pop32());
  /* 129cc740 ret  */
  ESPCHK(0x129cc700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x129cc750 (183 bytes, 62 insns) */
void f_129cc750(void) {
  FTRACE(0x129cc750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc750 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc751 mov ebp, esp */
  EBP = (ESP);
  /* 129cc753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cc75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc760 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cc763 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc766 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cc769 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc76c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc76f jne 0x129cc7eb */
  if (!C.zf) goto L_129cc7eb;
  /* 129cc771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc774 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cc777 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc77d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cc77f je 0x129cc7eb */
  if (C.zf) goto L_129cc7eb;
  /* 129cc781 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc787 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 129cc789 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cc78f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc793 jle 0x129cc7eb */
  if ((C.zf||C.sf!=C.of)) goto L_129cc7eb;
  /* 129cc795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc798 push edx */
  push32((uint32_t)(EDX));
  /* 129cc799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc79c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129cc79f push ecx */
  push32((uint32_t)(ECX));
  /* 129cc7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129cc7a6 push eax */
  push32((uint32_t)(EAX));
  /* 129cc7a7 call 0x129cb6c0 */
  push32(0x129cc7acu); f_129cb6c0();
  /* 129cc7ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc7af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc7b2 jne 0x129cc7d5 */
  if (!C.zf) goto L_129cc7d5;
  /* 129cc7b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cc7ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cc7c2 je 0x129cc7d3 */
  if (C.zf) goto L_129cc7d3;
  /* 129cc7c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cc7ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 129cc7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_129cc7d3:;
  /* 129cc7d3 jmp 0x129cc7eb */
  goto L_129cc7eb;
L_129cc7d5:;
  /* 129cc7d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cc7db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc7de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 129cc7e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129cc7eb:;
  /* 129cc7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129cc7f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129cc7f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cc7f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 129cc800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc803 mov esp, ebp */
  ESP = (EBP);
  /* 129cc805 pop ebp */
  EBP = (pop32());
  /* 129cc806 ret  */
  ESPCHK(0x129cc750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x129cc810 (15 bytes, 7 insns) */
void f_129cc810(void) {
  FTRACE(0x129cc810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc810 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc811 mov ebp, esp */
  EBP = (ESP);
  /* 129cc813 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cc815 call 0x129cc820 */
  push32(0x129cc81au); f_129cc820();
  /* 129cc81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc81d pop ebp */
  EBP = (pop32());
  /* 129cc81e ret  */
  ESPCHK(0x129cc810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x129cc820 (319 bytes, 94 insns) */
void f_129cc820(void) {
  FTRACE(0x129cc820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc820 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc821 mov ebp, esp */
  EBP = (ESP);
  /* 129cc823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cc82d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cc834 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc836 call 0x129c6820 */
  push32(0x129cc83bu); f_129c6820();
  /* 129cc83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc83e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129cc845 jmp 0x129cc850 */
  goto L_129cc850;
L_129cc847:;
  /* 129cc847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc84d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129cc850:;
  /* 129cc850 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc853 cmp ecx, dword ptr [0x129efb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129efb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc859 jge 0x129cc943 */
  if ((C.sf==C.of)) goto L_129cc943;
  /* 129cc85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc862 mov eax, dword ptr [0x129ee820] */
  EAX = (r32((uint32_t)(0x129ee820)));
  /* 129cc867 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc86b je 0x129cc93e */
  if (C.zf) goto L_129cc93e;
  /* 129cc871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc874 mov edx, dword ptr [0x129ee820] */
  EDX = (r32((uint32_t)(0x129ee820)));
  /* 129cc87a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 129cc87d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129cc880 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 129cc886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cc888 je 0x129cc93e */
  if (C.zf) goto L_129cc93e;
  /* 129cc88e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc891 mov eax, dword ptr [0x129ee820] */
  EAX = (r32((uint32_t)(0x129ee820)));
  /* 129cc896 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 129cc899 push ecx */
  push32((uint32_t)(ECX));
  /* 129cc89a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc89d push edx */
  push32((uint32_t)(EDX));
  /* 129cc89e call 0x129cbc70 */
  push32(0x129cc8a3u); f_129cbc70();
  /* 129cc8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc8a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc8a9 mov ecx, dword ptr [0x129ee820] */
  ECX = (r32((uint32_t)(0x129ee820)));
  /* 129cc8af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129cc8b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129cc8b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 129cc8ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cc8bc je 0x129cc925 */
  if (C.zf) goto L_129cc925;
  /* 129cc8be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc8c2 jne 0x129cc8e9 */
  if (!C.zf) goto L_129cc8e9;
  /* 129cc8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc8c7 mov edx, dword ptr [0x129ee820] */
  EDX = (r32((uint32_t)(0x129ee820)));
  /* 129cc8cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 129cc8d0 push eax */
  push32((uint32_t)(EAX));
  /* 129cc8d1 call 0x129cc700 */
  push32(0x129cc8d6u); f_129cc700();
  /* 129cc8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc8d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc8dc je 0x129cc8e7 */
  if (C.zf) goto L_129cc8e7;
  /* 129cc8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc8e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc8e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129cc8e7:;
  /* 129cc8e7 jmp 0x129cc925 */
  goto L_129cc925;
L_129cc8e9:;
  /* 129cc8e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc8ed jne 0x129cc925 */
  if (!C.zf) goto L_129cc925;
  /* 129cc8ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc8f2 mov eax, dword ptr [0x129ee820] */
  EAX = (r32((uint32_t)(0x129ee820)));
  /* 129cc8f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 129cc8fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cc8fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 129cc900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cc902 je 0x129cc925 */
  if (C.zf) goto L_129cc925;
  /* 129cc904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc907 mov ecx, dword ptr [0x129ee820] */
  ECX = (r32((uint32_t)(0x129ee820)));
  /* 129cc90d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129cc910 push edx */
  push32((uint32_t)(EDX));
  /* 129cc911 call 0x129cc700 */
  push32(0x129cc916u); f_129cc700();
  /* 129cc916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc919 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc91c jne 0x129cc925 */
  if (!C.zf) goto L_129cc925;
  /* 129cc91e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_129cc925:;
  /* 129cc925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc928 mov ecx, dword ptr [0x129ee820] */
  ECX = (r32((uint32_t)(0x129ee820)));
  /* 129cc92e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 129cc931 push edx */
  push32((uint32_t)(EDX));
  /* 129cc932 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cc935 push eax */
  push32((uint32_t)(EAX));
  /* 129cc936 call 0x129cbce0 */
  push32(0x129cc93bu); f_129cbce0();
  /* 129cc93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cc93e:;
  /* 129cc93e jmp 0x129cc847 */
  goto L_129cc847;
L_129cc943:;
  /* 129cc943 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc945 call 0x129c68c0 */
  push32(0x129cc94au); f_129c68c0();
  /* 129cc94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc94d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc951 jne 0x129cc958 */
  if (!C.zf) goto L_129cc958;
  /* 129cc953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cc956 jmp 0x129cc95b */
  goto L_129cc95b;
L_129cc958:;
  /* 129cc958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129cc95b:;
  /* 129cc95b mov esp, ebp */
  ESP = (EBP);
  /* 129cc95d pop ebp */
  EBP = (pop32());
  /* 129cc95e ret  */
  ESPCHK(0x129cc820u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x129cc960 (15 bytes, 7 insns) */
void f_129cc960(void) {
  FTRACE(0x129cc960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc960 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc961 mov ebp, esp */
  EBP = (ESP);
  /* 129cc963 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cc965 call 0x129c1d90 */
  push32(0x129cc96au); f_129c1d90();
  /* 129cc96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc96d pop ebp */
  EBP = (pop32());
  /* 129cc96e ret  */
  ESPCHK(0x129cc960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x129cc970 (1007 bytes, 269 insns) */
void f_129cc970(void) {
  FTRACE(0x129cc970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cc970 push ebp */
  push32((uint32_t)(EBP));
  /* 129cc971 mov ebp, esp */
  EBP = (ESP);
  /* 129cc973 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cc979 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc97d jl 0x129cc985 */
  if ((C.sf!=C.of)) goto L_129cc985;
  /* 129cc97f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc983 jle 0x129cc98c */
  if ((C.zf||C.sf!=C.of)) goto L_129cc98c;
L_129cc985:;
  /* 129cc985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cc987 jmp 0x129ccd5b */
  goto L_129ccd5b;
L_129cc98c:;
  /* 129cc98c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129cc98e call 0x129c6820 */
  push32(0x129cc993u); f_129c6820();
  /* 129cc993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc996 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129cc99d mov eax, dword ptr [0x129ee80c] */
  EAX = (r32((uint32_t)(0x129ee80c)));
  /* 129cc9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc9a5 mov dword ptr [0x129ee80c], eax */
  w32((uint32_t)(0x129ee80c), (EAX));
L_129cc9aa:;
  /* 129cc9aa cmp dword ptr [0x129ee81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc9b1 je 0x129cc9bd */
  if (C.zf) goto L_129cc9bd;
  /* 129cc9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cc9b5 call dword ptr [0x129f0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0274))), 0x129cc9bbu);
  /* 129cc9bb jmp 0x129cc9aa */
  goto L_129cc9aa;
L_129cc9bd:;
  /* 129cc9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc9c1 je 0x129cca01 */
  if (C.zf) goto L_129cca01;
  /* 129cc9c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cc9c7 je 0x129cc9e1 */
  if (C.zf) goto L_129cc9e1;
  /* 129cc9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cc9cc push ecx */
  push32((uint32_t)(ECX));
  /* 129cc9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc9d0 push edx */
  push32((uint32_t)(EDX));
  /* 129cc9d1 call 0x129ccd60 */
  push32(0x129cc9d6u); f_129ccd60();
  /* 129cc9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cc9d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 129cc9df jmp 0x129cc9f3 */
  goto L_129cc9f3;
L_129cc9e1:;
  /* 129cc9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cc9e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cc9e7 mov ecx, dword ptr [eax + 0x129ed4dc] */
  ECX = (r32((uint32_t)(EAX + 0x129ed4dc)));
  /* 129cc9ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_129cc9f3:;
  /* 129cc9f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 129cc9f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cc9fc jmp 0x129ccd3b */
  goto L_129ccd3b;
L_129cca01:;
  /* 129cca01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 129cca08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129cca0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca13 je 0x129ccd33 */
  if (C.zf) goto L_129ccd33;
  /* 129cca19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cca1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cca1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca22 jne 0x129ccc44 */
  if (!C.zf) goto L_129ccc44;
  /* 129cca28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cca2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129cca2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca32 jne 0x129ccc44 */
  if (!C.zf) goto L_129ccc44;
  /* 129cca38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cca3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 129cca3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca42 jne 0x129ccc44 */
  if (!C.zf) goto L_129ccc44;
  /* 129cca48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cca4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_129cca51:;
  /* 129cca51 push 0x129e9fd4 */
  push32((uint32_t)(0x129e9fd4u));
  /* 129cca56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129cca5c push ecx */
  push32((uint32_t)(ECX));
  /* 129cca5d call 0x129cebc0 */
  push32(0x129cca62u); f_129cebc0();
  /* 129cca62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cca65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 129cca6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca72 je 0x129cca9d */
  if (C.zf) goto L_129cca9d;
  /* 129cca74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129cca7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cca80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 129cca86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca8d je 0x129cca9d */
  if (C.zf) goto L_129cca9d;
  /* 129cca8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129cca95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cca98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cca9b jne 0x129ccac3 */
  if (!C.zf) goto L_129ccac3;
L_129cca9d:;
  /* 129cca9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccaa1 je 0x129ccabc */
  if (C.zf) goto L_129ccabc;
  /* 129ccaa3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129ccaa5 call 0x129c68c0 */
  push32(0x129ccaaau); f_129c68c0();
  /* 129ccaaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccaad mov edx, dword ptr [0x129ee80c] */
  EDX = (r32((uint32_t)(0x129ee80c)));
  /* 129ccab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ccab6 mov dword ptr [0x129ee80c], edx */
  w32((uint32_t)(0x129ee80c), (EDX));
L_129ccabc:;
  /* 129ccabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ccabe jmp 0x129ccd5b */
  goto L_129ccd5b;
L_129ccac3:;
  /* 129ccac3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 129ccaca jmp 0x129ccad5 */
  goto L_129ccad5;
L_129ccacc:;
  /* 129ccacc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ccacf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccad2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_129ccad5:;
  /* 129ccad5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccad9 jg 0x129ccb23 */
  if ((!C.zf&&C.sf==C.of)) goto L_129ccb23;
  /* 129ccadb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 129ccae1 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccae2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129ccae8 push edx */
  push32((uint32_t)(EDX));
  /* 129ccae9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ccaec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccaef mov ecx, dword ptr [eax + 0x129ed4d8] */
  ECX = (r32((uint32_t)(EAX + 0x129ed4d8)));
  /* 129ccaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccaf6 call 0x129ceb80 */
  push32(0x129ccafbu); f_129ceb80();
  /* 129ccafb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccb00 jne 0x129ccb21 */
  if (!C.zf) goto L_129ccb21;
  /* 129ccb02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ccb05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccb08 mov eax, dword ptr [edx + 0x129ed4d8] */
  EAX = (r32((uint32_t)(EDX + 0x129ed4d8)));
  /* 129ccb0e push eax */
  push32((uint32_t)(EAX));
  /* 129ccb0f call 0x129c5c50 */
  push32(0x129ccb14u); f_129c5c50();
  /* 129ccb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccb17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccb1d jne 0x129ccb21 */
  if (!C.zf) goto L_129ccb21;
  /* 129ccb1f jmp 0x129ccb23 */
  goto L_129ccb23;
L_129ccb21:;
  /* 129ccb21 jmp 0x129ccacc */
  goto L_129ccacc;
L_129ccb23:;
  /* 129ccb23 push 0x129e9fd0 */
  push32((uint32_t)(0x129e9fd0u));
  /* 129ccb28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129ccb2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccb31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 129ccb37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129ccb3d push edx */
  push32((uint32_t)(EDX));
  /* 129ccb3e call 0x129ceb40 */
  push32(0x129ccb43u); f_129ceb40();
  /* 129ccb43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccb46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 129ccb4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccb53 jne 0x129ccb89 */
  if (!C.zf) goto L_129ccb89;
  /* 129ccb55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129ccb5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129ccb5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccb61 je 0x129ccb89 */
  if (C.zf) goto L_129ccb89;
  /* 129ccb63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccb67 je 0x129ccb82 */
  if (C.zf) goto L_129ccb82;
  /* 129ccb69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129ccb6b call 0x129c68c0 */
  push32(0x129ccb70u); f_129c68c0();
  /* 129ccb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccb73 mov edx, dword ptr [0x129ee80c] */
  EDX = (r32((uint32_t)(0x129ee80c)));
  /* 129ccb79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ccb7c mov dword ptr [0x129ee80c], edx */
  w32((uint32_t)(0x129ee80c), (EDX));
L_129ccb82:;
  /* 129ccb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ccb84 jmp 0x129ccd5b */
  goto L_129ccd5b;
L_129ccb89:;
  /* 129ccb89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccb8d jg 0x129ccbda */
  if ((!C.zf&&C.sf==C.of)) goto L_129ccbda;
  /* 129ccb8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 129ccb95 push eax */
  push32((uint32_t)(EAX));
  /* 129ccb96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129ccb9c push ecx */
  push32((uint32_t)(ECX));
  /* 129ccb9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 129ccba3 push edx */
  push32((uint32_t)(EDX));
  /* 129ccba4 call 0x129c6640 */
  push32(0x129ccba9u); f_129c6640();
  /* 129ccba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccbac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 129ccbb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 129ccbba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 129ccbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccbc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ccbc4 push edx */
  push32((uint32_t)(EDX));
  /* 129ccbc5 call 0x129ccd60 */
  push32(0x129ccbcau); f_129ccd60();
  /* 129ccbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccbcf je 0x129ccbda */
  if (C.zf) goto L_129ccbda;
  /* 129ccbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129ccbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccbd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129ccbda:;
  /* 129ccbda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129ccbe0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccbe6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 129ccbec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129ccbf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ccbf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccbf7 je 0x129ccc08 */
  if (C.zf) goto L_129ccc08;
  /* 129ccbf9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129ccbff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccc02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_129ccc08:;
  /* 129ccc08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 129ccc0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ccc11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccc13 jne 0x129cca51 */
  if (!C.zf) goto L_129cca51;
  /* 129ccc19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccc1d je 0x129ccc2c */
  if (C.zf) goto L_129ccc2c;
  /* 129ccc1f call 0x129ccf00 */
  push32(0x129ccc24u); f_129ccf00();
  /* 129ccc24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 129ccc2a jmp 0x129ccc36 */
  goto L_129ccc36;
L_129ccc2c:;
  /* 129ccc2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_129ccc36:;
  /* 129ccc36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 129ccc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ccc3f jmp 0x129ccd31 */
  goto L_129ccd31;
L_129ccc44:;
  /* 129ccc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ccc47 push edx */
  push32((uint32_t)(EDX));
  /* 129ccc48 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ccc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 129ccc4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 129ccc52 push eax */
  push32((uint32_t)(EAX));
  /* 129ccc53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ccc56 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccc57 call 0x129cd000 */
  push32(0x129ccc5cu); f_129cd000();
  /* 129ccc5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccc5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129ccc62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccc66 je 0x129ccd31 */
  if (C.zf) goto L_129ccd31;
  /* 129ccc6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 129ccc73 jmp 0x129ccc7e */
  goto L_129ccc7e;
L_129ccc75:;
  /* 129ccc75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ccc78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccc7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_129ccc7e:;
  /* 129ccc7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccc82 jg 0x129ccce0 */
  if ((!C.zf&&C.sf==C.of)) goto L_129ccce0;
  /* 129ccc84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccc88 je 0x129cccde */
  if (C.zf) goto L_129cccde;
  /* 129ccc8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129ccc8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccc90 mov ecx, dword ptr [eax + 0x129ed4dc] */
  ECX = (r32((uint32_t)(EAX + 0x129ed4dc)));
  /* 129ccc96 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccc97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 129ccc9d push edx */
  push32((uint32_t)(EDX));
  /* 129ccc9e call 0x129ceab0 */
  push32(0x129ccca3u); f_129ceab0();
  /* 129ccca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccca8 je 0x129cccd5 */
  if (C.zf) goto L_129cccd5;
  /* 129cccaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 129cccb0 push eax */
  push32((uint32_t)(EAX));
  /* 129cccb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129cccb4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cccb5 call 0x129ccd60 */
  push32(0x129cccbau); f_129ccd60();
  /* 129cccba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cccbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cccbf je 0x129ccccc */
  if (C.zf) goto L_129ccccc;
  /* 129cccc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cccc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cccc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129cccca jmp 0x129cccd3 */
  goto L_129cccd3;
L_129ccccc:;
  /* 129ccccc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_129cccd3:;
  /* 129cccd3 jmp 0x129cccde */
  goto L_129cccde;
L_129cccd5:;
  /* 129cccd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cccd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cccdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129cccde:;
  /* 129cccde jmp 0x129ccc75 */
  goto L_129ccc75;
L_129ccce0:;
  /* 129ccce0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccce4 je 0x129ccd0b */
  if (C.zf) goto L_129ccd0b;
  /* 129ccce6 call 0x129ccf00 */
  push32(0x129cccebu); f_129ccf00();
  /* 129ccceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cccee push 2 */
  push32((uint32_t)(0x2u));
  /* 129cccf0 mov ecx, dword ptr [0x129ed4dc] */
  ECX = (r32((uint32_t)(0x129ed4dc)));
  /* 129cccf6 push ecx */
  push32((uint32_t)(ECX));
  /* 129cccf7 call 0x129c38b0 */
  push32(0x129cccfcu); f_129c38b0();
  /* 129cccfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cccff mov dword ptr [0x129ed4dc], 0 */
  w32((uint32_t)(0x129ed4dc), (0x0u));
  /* 129ccd09 jmp 0x129ccd31 */
  goto L_129ccd31;
L_129ccd0b:;
  /* 129ccd0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccd0f je 0x129ccd1e */
  if (C.zf) goto L_129ccd1e;
  /* 129ccd11 call 0x129ccf00 */
  push32(0x129ccd16u); f_129ccf00();
  /* 129ccd16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 129ccd1c jmp 0x129ccd28 */
  goto L_129ccd28;
L_129ccd1e:;
  /* 129ccd1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_129ccd28:;
  /* 129ccd28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 129ccd2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129ccd31:;
  /* 129ccd31 jmp 0x129ccd3b */
  goto L_129ccd3b;
L_129ccd33:;
  /* 129ccd33 call 0x129ccf00 */
  push32(0x129ccd38u); f_129ccf00();
  /* 129ccd38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129ccd3b:;
  /* 129ccd3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccd3f je 0x129ccd58 */
  if (C.zf) goto L_129ccd58;
  /* 129ccd41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129ccd43 call 0x129c68c0 */
  push32(0x129ccd48u); f_129c68c0();
  /* 129ccd48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccd4b mov eax, dword ptr [0x129ee80c] */
  EAX = (r32((uint32_t)(0x129ee80c)));
  /* 129ccd50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ccd53 mov dword ptr [0x129ee80c], eax */
  w32((uint32_t)(0x129ee80c), (EAX));
L_129ccd58:;
  /* 129ccd58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129ccd5b:;
  /* 129ccd5b mov esp, ebp */
  ESP = (EBP);
  /* 129ccd5d pop ebp */
  EBP = (pop32());
  /* 129ccd5e ret  */
  ESPCHK(0x129cc970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x129ccd60 (403 bytes, 117 insns) */
void f_129ccd60(void) {
  FTRACE(0x129ccd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ccd60 push ebp */
  push32((uint32_t)(EBP));
  /* 129ccd61 mov ebp, esp */
  EBP = (ESP);
  /* 129ccd63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ccd69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ccd6c push eax */
  push32((uint32_t)(EAX));
  /* 129ccd6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 129ccd73 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccd74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 129ccd7a push edx */
  push32((uint32_t)(EDX));
  /* 129ccd7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 129ccd81 push eax */
  push32((uint32_t)(EAX));
  /* 129ccd82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ccd85 push ecx */
  push32((uint32_t)(ECX));
  /* 129ccd86 call 0x129cd000 */
  push32(0x129ccd8bu); f_129cd000();
  /* 129ccd8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccd90 jne 0x129ccd99 */
  if (!C.zf) goto L_129ccd99;
  /* 129ccd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ccd94 jmp 0x129cceef */
  goto L_129cceef;
L_129ccd99:;
  /* 129ccd99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 129ccd9e push 0x129e9fd8 */
  push32((uint32_t)(0x129e9fd8u));
  /* 129ccda3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ccda5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 129ccdab push edx */
  push32((uint32_t)(EDX));
  /* 129ccdac call 0x129c5c50 */
  push32(0x129ccdb1u); f_129c5c50();
  /* 129ccdb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccdb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccdb7 push eax */
  push32((uint32_t)(EAX));
  /* 129ccdb8 call 0x129c2e20 */
  push32(0x129ccdbdu); f_129c2e20();
  /* 129ccdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccdc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129ccdc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccdc7 jne 0x129ccdd0 */
  if (!C.zf) goto L_129ccdd0;
  /* 129ccdc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ccdcb jmp 0x129cceef */
  goto L_129cceef;
L_129ccdd0:;
  /* 129ccdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ccdd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccdd6 mov ecx, dword ptr [eax + 0x129ed4dc] */
  ECX = (r32((uint32_t)(EAX + 0x129ed4dc)));
  /* 129ccddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129ccddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ccde2 mov eax, dword ptr [edx*4 + 0x129ee688] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ee688)));
  /* 129ccde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129ccdec push 6 */
  push32((uint32_t)(0x6u));
  /* 129ccdee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ccdf1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccdf4 add ecx, 0x129ee6d8 */
  { uint32_t _a=(ECX),_b=(0x129ee6d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccdfa push ecx */
  push32((uint32_t)(ECX));
  /* 129ccdfb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 129ccdfe push edx */
  push32((uint32_t)(EDX));
  /* 129ccdff call 0x129c9700 */
  push32(0x129cce04u); f_129c9700();
  /* 129cce04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cce07 mov eax, dword ptr [0x129ee6a0] */
  EAX = (r32((uint32_t)(0x129ee6a0)));
  /* 129cce0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129cce0f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 129cce15 push ecx */
  push32((uint32_t)(ECX));
  /* 129cce16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cce19 push edx */
  push32((uint32_t)(EDX));
  /* 129cce1a call 0x129c5dd0 */
  push32(0x129cce1fu); f_129c5dd0();
  /* 129cce1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cce22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cce25 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cce28 mov dword ptr [ecx + 0x129ed4dc], eax */
  w32((uint32_t)(ECX + 0x129ed4dc), (EAX));
  /* 129cce2e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 129cce34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129cce3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cce3d mov dword ptr [eax*4 + 0x129ee688], edx */
  w32((uint32_t)(EAX*4 + 0x129ee688), (EDX));
  /* 129cce44 push 6 */
  push32((uint32_t)(0x6u));
  /* 129cce46 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 129cce4c push ecx */
  push32((uint32_t)(ECX));
  /* 129cce4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cce50 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cce53 add edx, 0x129ee6d8 */
  { uint32_t _a=(EDX),_b=(0x129ee6d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cce59 push edx */
  push32((uint32_t)(EDX));
  /* 129cce5a call 0x129c9700 */
  push32(0x129cce5fu); f_129c9700();
  /* 129cce5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cce62 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cce66 jne 0x129cce73 */
  if (!C.zf) goto L_129cce73;
  /* 129cce68 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129cce6e mov dword ptr [0x129ee6a0], eax */
  w32((uint32_t)(0x129ee6a0), (EAX));
L_129cce73:;
  /* 129cce73 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cce77 jne 0x129cce85 */
  if (!C.zf) goto L_129cce85;
  /* 129cce79 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 129cce7f mov dword ptr [0x129ee6a4], ecx */
  w32((uint32_t)(0x129ee6a4), (ECX));
L_129cce85:;
  /* 129cce85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cce88 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cce8b call dword ptr [edx + 0x129ed4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x129ed4e0))), 0x129cce91u);
  /* 129cce91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cce93 je 0x129ccecc */
  if (C.zf) goto L_129ccecc;
  /* 129cce95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cce98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cce9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cce9e mov dword ptr [eax + 0x129ed4dc], ecx */
  w32((uint32_t)(EAX + 0x129ed4dc), (ECX));
  /* 129ccea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ccea6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ccea9 push edx */
  push32((uint32_t)(EDX));
  /* 129cceaa call 0x129c38b0 */
  push32(0x129cceafu); f_129c38b0();
  /* 129cceaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cceb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cceb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cceb8 mov dword ptr [eax*4 + 0x129ee688], ecx */
  w32((uint32_t)(EAX*4 + 0x129ee688), (ECX));
  /* 129ccebf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ccec2 mov dword ptr [0x129ee6a0], edx */
  w32((uint32_t)(0x129ee6a0), (EDX));
  /* 129ccec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cceca jmp 0x129cceef */
  goto L_129cceef;
L_129ccecc:;
  /* 129ccecc cmp dword ptr [ebp - 0xc], 0x129ed3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x129ed3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cced3 je 0x129ccee3 */
  if (C.zf) goto L_129ccee3;
  /* 129cced5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cced7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cceda push eax */
  push32((uint32_t)(EAX));
  /* 129ccedb call 0x129c38b0 */
  push32(0x129ccee0u); f_129c38b0();
  /* 129ccee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ccee3:;
  /* 129ccee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ccee6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccee9 mov eax, dword ptr [ecx + 0x129ed4dc] */
  EAX = (r32((uint32_t)(ECX + 0x129ed4dc)));
L_129cceef:;
  /* 129cceef mov esp, ebp */
  ESP = (EBP);
  /* 129ccef1 pop ebp */
  EBP = (pop32());
  /* 129ccef2 ret  */
  ESPCHK(0x129ccd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x129ccf00 (256 bytes, 72 insns) */
void f_129ccf00(void) {
  FTRACE(0x129ccf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ccf00 push ebp */
  push32((uint32_t)(EBP));
  /* 129ccf01 mov ebp, esp */
  EBP = (ESP);
  /* 129ccf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ccf06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 129ccf0d cmp dword ptr [0x129ed4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ed4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccf14 jne 0x129ccf34 */
  if (!C.zf) goto L_129ccf34;
  /* 129ccf16 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 129ccf1b push 0x129e9fd8 */
  push32((uint32_t)(0x129e9fd8u));
  /* 129ccf20 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ccf22 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 129ccf27 call 0x129c2e20 */
  push32(0x129ccf2cu); f_129c2e20();
  /* 129ccf2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccf2f mov dword ptr [0x129ed4dc], eax */
  w32((uint32_t)(0x129ed4dc), (EAX));
L_129ccf34:;
  /* 129ccf34 mov eax, dword ptr [0x129ed4dc] */
  EAX = (r32((uint32_t)(0x129ed4dc)));
  /* 129ccf39 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129ccf3c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129ccf43 jmp 0x129ccf4e */
  goto L_129ccf4e;
L_129ccf45:;
  /* 129ccf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ccf48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129ccf4e:;
  /* 129ccf4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ccf51 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccf54 mov eax, dword ptr [edx + 0x129ed4dc] */
  EAX = (r32((uint32_t)(EDX + 0x129ed4dc)));
  /* 129ccf5a push eax */
  push32((uint32_t)(EAX));
  /* 129ccf5b push 0x129e9fe4 */
  push32((uint32_t)(0x129e9fe4u));
  /* 129ccf60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ccf63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccf66 mov edx, dword ptr [ecx + 0x129ed4d8] */
  EDX = (r32((uint32_t)(ECX + 0x129ed4d8)));
  /* 129ccf6c push edx */
  push32((uint32_t)(EDX));
  /* 129ccf6d push 3 */
  push32((uint32_t)(0x3u));
  /* 129ccf6f mov eax, dword ptr [0x129ed4dc] */
  EAX = (r32((uint32_t)(0x129ed4dc)));
  /* 129ccf74 push eax */
  push32((uint32_t)(EAX));
  /* 129ccf75 call 0x129cd1a0 */
  push32(0x129ccf7au); f_129cd1a0();
  /* 129ccf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccf7d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccf81 jge 0x129ccfc9 */
  if ((C.sf==C.of)) goto L_129ccfc9;
  /* 129ccf83 push 0x129e9fd0 */
  push32((uint32_t)(0x129e9fd0u));
  /* 129ccf88 mov ecx, dword ptr [0x129ed4dc] */
  ECX = (r32((uint32_t)(0x129ed4dc)));
  /* 129ccf8e push ecx */
  push32((uint32_t)(ECX));
  /* 129ccf8f call 0x129c5de0 */
  push32(0x129ccf94u); f_129c5de0();
  /* 129ccf94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccf97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ccf9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccf9d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccfa0 mov eax, dword ptr [edx + 0x129ed4dc] */
  EAX = (r32((uint32_t)(EDX + 0x129ed4dc)));
  /* 129ccfa6 push eax */
  push32((uint32_t)(EAX));
  /* 129ccfa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ccfaa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129ccfad mov edx, dword ptr [ecx + 0x129ed4dc] */
  EDX = (r32((uint32_t)(ECX + 0x129ed4dc)));
  /* 129ccfb3 push edx */
  push32((uint32_t)(EDX));
  /* 129ccfb4 call 0x129ceab0 */
  push32(0x129ccfb9u); f_129ceab0();
  /* 129ccfb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccfbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ccfbe je 0x129ccfc7 */
  if (C.zf) goto L_129ccfc7;
  /* 129ccfc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129ccfc7:;
  /* 129ccfc7 jmp 0x129ccff7 */
  goto L_129ccff7;
L_129ccfc9:;
  /* 129ccfc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ccfcd jne 0x129ccfd6 */
  if (!C.zf) goto L_129ccfd6;
  /* 129ccfcf mov eax, dword ptr [0x129ed4dc] */
  EAX = (r32((uint32_t)(0x129ed4dc)));
  /* 129ccfd4 jmp 0x129ccffc */
  goto L_129ccffc;
L_129ccfd6:;
  /* 129ccfd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ccfd8 mov eax, dword ptr [0x129ed4dc] */
  EAX = (r32((uint32_t)(0x129ed4dc)));
  /* 129ccfdd push eax */
  push32((uint32_t)(EAX));
  /* 129ccfde call 0x129c38b0 */
  push32(0x129ccfe3u); f_129c38b0();
  /* 129ccfe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ccfe6 mov dword ptr [0x129ed4dc], 0 */
  w32((uint32_t)(0x129ed4dc), (0x0u));
  /* 129ccff0 mov eax, dword ptr [0x129ed4f4] */
  EAX = (r32((uint32_t)(0x129ed4f4)));
  /* 129ccff5 jmp 0x129ccffc */
  goto L_129ccffc;
L_129ccff7:;
  /* 129ccff7 jmp 0x129ccf45 */
  goto L_129ccf45;
L_129ccffc:;
  /* 129ccffc mov esp, ebp */
  ESP = (EBP);
  /* 129ccffe pop ebp */
  EBP = (pop32());
  /* 129ccfff ret  */
  ESPCHK(0x129ccf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x129cd000 (388 bytes, 115 insns) */
void f_129cd000(void) {
  FTRACE(0x129cd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd000 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd001 mov ebp, esp */
  EBP = (ESP);
  /* 129cd003 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cd009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd00d jne 0x129cd016 */
  if (!C.zf) goto L_129cd016;
  /* 129cd00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd011 jmp 0x129cd180 */
  goto L_129cd180;
L_129cd016:;
  /* 129cd016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cd01c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd01f jne 0x129cd070 */
  if (!C.zf) goto L_129cd070;
  /* 129cd021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd024 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129cd028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd02a jne 0x129cd070 */
  if (!C.zf) goto L_129cd070;
  /* 129cd02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd02f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 129cd032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd035 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 129cd039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd03d je 0x129cd059 */
  if (C.zf) goto L_129cd059;
  /* 129cd03f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cd042 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 129cd047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cd04a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 129cd050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cd053 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_129cd059:;
  /* 129cd059 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd05d je 0x129cd068 */
  if (C.zf) goto L_129cd068;
  /* 129cd05f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cd062 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_129cd068:;
  /* 129cd068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd06b jmp 0x129cd180 */
  goto L_129cd180;
L_129cd070:;
  /* 129cd070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd073 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd074 push 0x129ed450 */
  push32((uint32_t)(0x129ed450u));
  /* 129cd079 call 0x129ceab0 */
  push32(0x129cd07eu); f_129ceab0();
  /* 129cd07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd083 je 0x129cd138 */
  if (C.zf) goto L_129cd138;
  /* 129cd089 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd08c push edx */
  push32((uint32_t)(EDX));
  /* 129cd08d push 0x129ed3cc */
  push32((uint32_t)(0x129ed3ccu));
  /* 129cd092 call 0x129ceab0 */
  push32(0x129cd097u); f_129ceab0();
  /* 129cd097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd09c je 0x129cd138 */
  if (C.zf) goto L_129cd138;
  /* 129cd0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd0a5 push eax */
  push32((uint32_t)(EAX));
  /* 129cd0a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 129cd0ac push ecx */
  push32((uint32_t)(ECX));
  /* 129cd0ad call 0x129cd1f0 */
  push32(0x129cd0b2u); f_129cd1f0();
  /* 129cd0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd0b7 je 0x129cd0c0 */
  if (C.zf) goto L_129cd0c0;
  /* 129cd0b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd0bb jmp 0x129cd180 */
  goto L_129cd180;
L_129cd0c0:;
  /* 129cd0c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 129cd0c6 push edx */
  push32((uint32_t)(EDX));
  /* 129cd0c7 push 0x129ee6b0 */
  push32((uint32_t)(0x129ee6b0u));
  /* 129cd0cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 129cd0d2 push eax */
  push32((uint32_t)(EAX));
  /* 129cd0d3 call 0x129cec00 */
  push32(0x129cd0d8u); f_129cec00();
  /* 129cd0d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd0dd jne 0x129cd0e6 */
  if (!C.zf) goto L_129cd0e6;
  /* 129cd0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd0e1 jmp 0x129cd180 */
  goto L_129cd180;
L_129cd0e6:;
  /* 129cd0e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd0e8 mov cx, word ptr [0x129ee6b4] */
  CX = (r16((uint32_t)(0x129ee6b4)));
  /* 129cd0ef mov dword ptr [0x129ee6b8], ecx */
  w32((uint32_t)(0x129ee6b8), (ECX));
  /* 129cd0f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 129cd0fb push edx */
  push32((uint32_t)(EDX));
  /* 129cd0fc push 0x129ed450 */
  push32((uint32_t)(0x129ed450u));
  /* 129cd101 call 0x129cd350 */
  push32(0x129cd106u); f_129cd350();
  /* 129cd106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd10c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cd10f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cd111 je 0x129cd126 */
  if (C.zf) goto L_129cd126;
  /* 129cd113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd116 push edx */
  push32((uint32_t)(EDX));
  /* 129cd117 push 0x129ed3cc */
  push32((uint32_t)(0x129ed3ccu));
  /* 129cd11c call 0x129c5dd0 */
  push32(0x129cd121u); f_129c5dd0();
  /* 129cd121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd124 jmp 0x129cd138 */
  goto L_129cd138;
L_129cd126:;
  /* 129cd126 push 0x129ed450 */
  push32((uint32_t)(0x129ed450u));
  /* 129cd12b push 0x129ed3cc */
  push32((uint32_t)(0x129ed3ccu));
  /* 129cd130 call 0x129c5dd0 */
  push32(0x129cd135u); f_129c5dd0();
  /* 129cd135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cd138:;
  /* 129cd138 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd13c je 0x129cd151 */
  if (C.zf) goto L_129cd151;
  /* 129cd13e push 6 */
  push32((uint32_t)(0x6u));
  /* 129cd140 push 0x129ee6b0 */
  push32((uint32_t)(0x129ee6b0u));
  /* 129cd145 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cd148 push eax */
  push32((uint32_t)(EAX));
  /* 129cd149 call 0x129c9700 */
  push32(0x129cd14eu); f_129c9700();
  /* 129cd14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cd151:;
  /* 129cd151 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd155 je 0x129cd16a */
  if (C.zf) goto L_129cd16a;
  /* 129cd157 push 4 */
  push32((uint32_t)(0x4u));
  /* 129cd159 push 0x129ee6b8 */
  push32((uint32_t)(0x129ee6b8u));
  /* 129cd15e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129cd161 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd162 call 0x129c9700 */
  push32(0x129cd167u); f_129c9700();
  /* 129cd167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cd16a:;
  /* 129cd16a push 0x129ed450 */
  push32((uint32_t)(0x129ed450u));
  /* 129cd16f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd172 push edx */
  push32((uint32_t)(EDX));
  /* 129cd173 call 0x129c5dd0 */
  push32(0x129cd178u); f_129c5dd0();
  /* 129cd178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd17b mov eax, 0x129ed450 */
  EAX = (0x129ed450u);
L_129cd180:;
  /* 129cd180 mov esp, ebp */
  ESP = (EBP);
  /* 129cd182 pop ebp */
  EBP = (pop32());
  /* 129cd183 ret  */
  ESPCHK(0x129cd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x129cd190 (7 bytes, 5 insns) */
void f_129cd190(void) {
  FTRACE(0x129cd190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd190 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd191 mov ebp, esp */
  EBP = (ESP);
  /* 129cd193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd195 pop ebp */
  EBP = (pop32());
  /* 129cd196 ret  */
  ESPCHK(0x129cd190u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x129cd1a0 (79 bytes, 28 insns) */
void f_129cd1a0(void) {
  FTRACE(0x129cd1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd1a1 mov ebp, esp */
  EBP = (ESP);
  /* 129cd1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cd1a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 129cd1a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd1ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cd1b3 jmp 0x129cd1be */
  goto L_129cd1be;
L_129cd1b5:;
  /* 129cd1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd1b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129cd1be:;
  /* 129cd1be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd1c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd1c4 jge 0x129cd1e4 */
  if ((C.sf==C.of)) goto L_129cd1e4;
  /* 129cd1c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd1c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd1d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 129cd1d5 push edx */
  push32((uint32_t)(EDX));
  /* 129cd1d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd1d9 push eax */
  push32((uint32_t)(EAX));
  /* 129cd1da call 0x129c5de0 */
  push32(0x129cd1dfu); f_129c5de0();
  /* 129cd1df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd1e2 jmp 0x129cd1b5 */
  goto L_129cd1b5;
L_129cd1e4:;
  /* 129cd1e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cd1eb mov esp, ebp */
  ESP = (EBP);
  /* 129cd1ed pop ebp */
  EBP = (pop32());
  /* 129cd1ee ret  */
  ESPCHK(0x129cd1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x129cd1f0 (349 bytes, 122 insns) */
void f_129cd1f0(void) {
  FTRACE(0x129cd1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd1f1 mov ebp, esp */
  EBP = (ESP);
  /* 129cd1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cd1f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 129cd1fb push 0 */
  push32((uint32_t)(0x0u));
  /* 129cd1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd200 push eax */
  push32((uint32_t)(EAX));
  /* 129cd201 call 0x129c6b90 */
  push32(0x129cd206u); f_129c6b90();
  /* 129cd206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd20c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129cd20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cd211 jne 0x129cd21a */
  if (!C.zf) goto L_129cd21a;
  /* 129cd213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd215 jmp 0x129cd349 */
  goto L_129cd349;
L_129cd21a:;
  /* 129cd21a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd21d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cd220 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd223 jne 0x129cd250 */
  if (!C.zf) goto L_129cd250;
  /* 129cd225 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd228 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129cd22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd22e je 0x129cd250 */
  if (C.zf) goto L_129cd250;
  /* 129cd230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd233 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd236 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd23a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd240 push edx */
  push32((uint32_t)(EDX));
  /* 129cd241 call 0x129c5dd0 */
  push32(0x129cd246u); f_129c5dd0();
  /* 129cd246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd24b jmp 0x129cd349 */
  goto L_129cd349;
L_129cd250:;
  /* 129cd250 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129cd257 jmp 0x129cd262 */
  goto L_129cd262;
L_129cd259:;
  /* 129cd259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd25c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129cd262:;
  /* 129cd262 push 0x129e9fe8 */
  push32((uint32_t)(0x129e9fe8u));
  /* 129cd267 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd26a push ecx */
  push32((uint32_t)(ECX));
  /* 129cd26b call 0x129ceb40 */
  push32(0x129cd270u); f_129ceb40();
  /* 129cd270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd273 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129cd276 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd27a jne 0x129cd284 */
  if (!C.zf) goto L_129cd284;
  /* 129cd27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cd27f jmp 0x129cd349 */
  goto L_129cd349;
L_129cd284:;
  /* 129cd284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd287 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd28a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129cd28c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 129cd28f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd293 jne 0x129cd2ba */
  if (!C.zf) goto L_129cd2ba;
  /* 129cd295 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd299 jge 0x129cd2ba */
  if ((C.sf==C.of)) goto L_129cd2ba;
  /* 129cd29b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cd29f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd2a2 je 0x129cd2ba */
  if (C.zf) goto L_129cd2ba;
  /* 129cd2a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd2a7 push edx */
  push32((uint32_t)(EDX));
  /* 129cd2a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd2ab push eax */
  push32((uint32_t)(EAX));
  /* 129cd2ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd2af push ecx */
  push32((uint32_t)(ECX));
  /* 129cd2b0 call 0x129c6640 */
  push32(0x129cd2b5u); f_129c6640();
  /* 129cd2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd2b8 jmp 0x129cd320 */
  goto L_129cd320;
L_129cd2ba:;
  /* 129cd2ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd2be jne 0x129cd2e8 */
  if (!C.zf) goto L_129cd2e8;
  /* 129cd2c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd2c4 jge 0x129cd2e8 */
  if ((C.sf==C.of)) goto L_129cd2e8;
  /* 129cd2c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cd2ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd2cd je 0x129cd2e8 */
  if (C.zf) goto L_129cd2e8;
  /* 129cd2cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd2d2 push eax */
  push32((uint32_t)(EAX));
  /* 129cd2d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd2da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd2dd push edx */
  push32((uint32_t)(EDX));
  /* 129cd2de call 0x129c6640 */
  push32(0x129cd2e3u); f_129c6640();
  /* 129cd2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd2e6 jmp 0x129cd320 */
  goto L_129cd320;
L_129cd2e8:;
  /* 129cd2e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd2ec jne 0x129cd31b */
  if (!C.zf) goto L_129cd31b;
  /* 129cd2ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cd2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd2f4 je 0x129cd2ff */
  if (C.zf) goto L_129cd2ff;
  /* 129cd2f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cd2fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd2fd jne 0x129cd31b */
  if (!C.zf) goto L_129cd31b;
L_129cd2ff:;
  /* 129cd2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd302 push edx */
  push32((uint32_t)(EDX));
  /* 129cd303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd306 push eax */
  push32((uint32_t)(EAX));
  /* 129cd307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd30a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd310 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd311 call 0x129c6640 */
  push32(0x129cd316u); f_129c6640();
  /* 129cd316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd319 jmp 0x129cd320 */
  goto L_129cd320;
L_129cd31b:;
  /* 129cd31b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cd31e jmp 0x129cd349 */
  goto L_129cd349;
L_129cd320:;
  /* 129cd320 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cd324 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd327 jne 0x129cd32b */
  if (!C.zf) goto L_129cd32b;
  /* 129cd329 jmp 0x129cd347 */
  goto L_129cd347;
L_129cd32b:;
  /* 129cd32b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 129cd32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd331 jne 0x129cd335 */
  if (!C.zf) goto L_129cd335;
  /* 129cd333 jmp 0x129cd347 */
  goto L_129cd347;
L_129cd335:;
  /* 129cd335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd33b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 129cd33f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 129cd342 jmp 0x129cd259 */
  goto L_129cd259;
L_129cd347:;
  /* 129cd347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cd349:;
  /* 129cd349 mov esp, ebp */
  ESP = (EBP);
  /* 129cd34b pop ebp */
  EBP = (pop32());
  /* 129cd34c ret  */
  ESPCHK(0x129cd1f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x129cd350 (101 bytes, 36 insns) */
void f_129cd350(void) {
  FTRACE(0x129cd350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd350 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd351 mov ebp, esp */
  EBP = (ESP);
  /* 129cd353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd356 push eax */
  push32((uint32_t)(EAX));
  /* 129cd357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd35a push ecx */
  push32((uint32_t)(ECX));
  /* 129cd35b call 0x129c5dd0 */
  push32(0x129cd360u); f_129c5dd0();
  /* 129cd360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd366 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 129cd36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd36c je 0x129cd388 */
  if (C.zf) goto L_129cd388;
  /* 129cd36e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd371 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd374 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd375 push 0x129e9ff0 */
  push32((uint32_t)(0x129e9ff0u));
  /* 129cd37a push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd37f push edx */
  push32((uint32_t)(EDX));
  /* 129cd380 call 0x129cd1a0 */
  push32(0x129cd385u); f_129cd1a0();
  /* 129cd385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cd388:;
  /* 129cd388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd38b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 129cd392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cd394 je 0x129cd3b3 */
  if (C.zf) goto L_129cd3b3;
  /* 129cd396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cd399 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd39f push edx */
  push32((uint32_t)(EDX));
  /* 129cd3a0 push 0x129e9fec */
  push32((uint32_t)(0x129e9fecu));
  /* 129cd3a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd3aa push eax */
  push32((uint32_t)(EAX));
  /* 129cd3ab call 0x129cd1a0 */
  push32(0x129cd3b0u); f_129cd1a0();
  /* 129cd3b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cd3b3:;
  /* 129cd3b3 pop ebp */
  EBP = (pop32());
  /* 129cd3b4 ret  */
  ESPCHK(0x129cd350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x129cd3c0 (130 bytes, 50 insns) */
void f_129cd3c0(void) {
  FTRACE(0x129cd3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd3c1 mov ebp, esp */
  EBP = (ESP);
  /* 129cd3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 129cd3c5 push esi */
  push32((uint32_t)(ESI));
  /* 129cd3c6 push edi */
  push32((uint32_t)(EDI));
  /* 129cd3c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129cd3ce:;
  /* 129cd3ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd3d2 jne 0x129cd3f2 */
  if (!C.zf) goto L_129cd3f2;
  /* 129cd3d4 push 0x129ea000 */
  push32((uint32_t)(0x129ea000u));
  /* 129cd3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cd3db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 129cd3dd push 0x129e9ff4 */
  push32((uint32_t)(0x129e9ff4u));
  /* 129cd3e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd3e4 call 0x129c1ee0 */
  push32(0x129cd3e9u); f_129c1ee0();
  /* 129cd3e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd3ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd3ef jne 0x129cd3f2 */
  if (!C.zf) goto L_129cd3f2;
  /* 129cd3f1 int3  */
  x86_unimpl("int3 @ 0x129cd3f1");
L_129cd3f2:;
  /* 129cd3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd3f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd3f6 jne 0x129cd3ce */
  if (!C.zf) goto L_129cd3ce;
  /* 129cd3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cd3fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 129cd401 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cd403 je 0x129cd411 */
  if (C.zf) goto L_129cd411;
  /* 129cd405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd408 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 129cd40f jmp 0x129cd438 */
  goto L_129cd438;
L_129cd411:;
  /* 129cd411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd414 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd415 call 0x129cbc30 */
  push32(0x129cd41au); f_129cbc30();
  /* 129cd41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd420 push edx */
  push32((uint32_t)(EDX));
  /* 129cd421 call 0x129cd450 */
  push32(0x129cd426u); f_129cd450();
  /* 129cd426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd42f push eax */
  push32((uint32_t)(EAX));
  /* 129cd430 call 0x129cbca0 */
  push32(0x129cd435u); f_129cbca0();
  /* 129cd435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cd438:;
  /* 129cd438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd43b pop edi */
  EDI = (pop32());
  /* 129cd43c pop esi */
  ESI = (pop32());
  /* 129cd43d pop ebx */
  EBX = (pop32());
  /* 129cd43e mov esp, ebp */
  ESP = (EBP);
  /* 129cd440 pop ebp */
  EBP = (pop32());
  /* 129cd441 ret  */
  ESPCHK(0x129cd3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x129cd450 (190 bytes, 67 insns) */
void f_129cd450(void) {
  FTRACE(0x129cd450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd450 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd451 mov ebp, esp */
  EBP = (ESP);
  /* 129cd453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cd456 push ebx */
  push32((uint32_t)(EBX));
  /* 129cd457 push esi */
  push32((uint32_t)(ESI));
  /* 129cd458 push edi */
  push32((uint32_t)(EDI));
  /* 129cd459 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129cd460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129cd466:;
  /* 129cd466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd46a jne 0x129cd48a */
  if (!C.zf) goto L_129cd48a;
  /* 129cd46c push 0x129e9ea4 */
  push32((uint32_t)(0x129e9ea4u));
  /* 129cd471 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cd473 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 129cd475 push 0x129e9ff4 */
  push32((uint32_t)(0x129e9ff4u));
  /* 129cd47a push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd47c call 0x129c1ee0 */
  push32(0x129cd481u); f_129c1ee0();
  /* 129cd481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd487 jne 0x129cd48a */
  if (!C.zf) goto L_129cd48a;
  /* 129cd489 int3  */
  x86_unimpl("int3 @ 0x129cd489");
L_129cd48a:;
  /* 129cd48a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cd48e jne 0x129cd466 */
  if (!C.zf) goto L_129cd466;
  /* 129cd490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd493 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129cd496 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 129cd49b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd49d je 0x129cd4fa */
  if (C.zf) goto L_129cd4fa;
  /* 129cd49f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4a2 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd4a3 call 0x129cc750 */
  push32(0x129cd4a8u); f_129cc750();
  /* 129cd4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd4ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4b1 push edx */
  push32((uint32_t)(EDX));
  /* 129cd4b2 call 0x129cfad0 */
  push32(0x129cd4b7u); f_129cfad0();
  /* 129cd4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd4ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129cd4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd4c1 call 0x129cf9a0 */
  push32(0x129cd4c6u); f_129cf9a0();
  /* 129cd4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd4cb jge 0x129cd4d6 */
  if ((C.sf==C.of)) goto L_129cd4d6;
  /* 129cd4cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129cd4d4 jmp 0x129cd4fa */
  goto L_129cd4fa;
L_129cd4d6:;
  /* 129cd4d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd4dd je 0x129cd4fa */
  if (C.zf) goto L_129cd4fa;
  /* 129cd4df push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd4e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129cd4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd4e8 call 0x129c38b0 */
  push32(0x129cd4edu); f_129c38b0();
  /* 129cd4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd4f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_129cd4fa:;
  /* 129cd4fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cd4fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 129cd504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd507 pop edi */
  EDI = (pop32());
  /* 129cd508 pop esi */
  ESI = (pop32());
  /* 129cd509 pop ebx */
  EBX = (pop32());
  /* 129cd50a mov esp, ebp */
  ESP = (EBP);
  /* 129cd50c pop ebp */
  EBP = (pop32());
  /* 129cd50d ret  */
  ESPCHK(0x129cd450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d510 @ 0x129cd510 (210 bytes, 63 insns) */
void f_129cd510(void) {
  FTRACE(0x129cd510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd510 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd511 mov ebp, esp */
  EBP = (ESP);
  /* 129cd513 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd517 cmp eax, dword ptr [0x129eff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd51d jae 0x129cd541 */
  if (!C.cf) goto L_129cd541;
  /* 129cd51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd522 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 129cd525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd528 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 129cd52b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cd52e mov eax, dword ptr [ecx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129cd535 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 129cd53a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cd53d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cd53f jne 0x129cd554 */
  if (!C.zf) goto L_129cd554;
L_129cd541:;
  /* 129cd541 call 0x129cacf0 */
  push32(0x129cd546u); f_129cacf0();
  /* 129cd546 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cd54c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cd54f jmp 0x129cd5de */
  goto L_129cd5de;
L_129cd554:;
  /* 129cd554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd557 push edx */
  push32((uint32_t)(EDX));
  /* 129cd558 call 0x129cc510 */
  push32(0x129cd55du); f_129cc510();
  /* 129cd55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd563 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129cd566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd569 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129cd56c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129cd56f mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129cd576 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 129cd57b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129cd57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd580 je 0x129cd5bd */
  if (C.zf) goto L_129cd5bd;
  /* 129cd582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd585 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd586 call 0x129cc390 */
  push32(0x129cd58bu); f_129cc390();
  /* 129cd58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd58e push eax */
  push32((uint32_t)(EAX));
  /* 129cd58f call dword ptr [0x129f0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0270))), 0x129cd595u);
  /* 129cd595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd597 jne 0x129cd5a4 */
  if (!C.zf) goto L_129cd5a4;
  /* 129cd599 call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129cd59fu);
  /* 129cd59f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd5a2 jmp 0x129cd5ab */
  goto L_129cd5ab;
L_129cd5a4:;
  /* 129cd5a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129cd5ab:;
  /* 129cd5ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd5af jne 0x129cd5b3 */
  if (!C.zf) goto L_129cd5b3;
  /* 129cd5b1 jmp 0x129cd5cf */
  goto L_129cd5cf;
L_129cd5b3:;
  /* 129cd5b3 call 0x129cad00 */
  push32(0x129cd5b8u); f_129cad00();
  /* 129cd5b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd5bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129cd5bd:;
  /* 129cd5bd call 0x129cacf0 */
  push32(0x129cd5c2u); f_129cacf0();
  /* 129cd5c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 129cd5c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129cd5cf:;
  /* 129cd5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd5d2 push eax */
  push32((uint32_t)(EAX));
  /* 129cd5d3 call 0x129cc5a0 */
  push32(0x129cd5d8u); f_129cc5a0();
  /* 129cd5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129cd5de:;
  /* 129cd5de mov esp, ebp */
  ESP = (EBP);
  /* 129cd5e0 pop ebp */
  EBP = (pop32());
  /* 129cd5e1 ret  */
  ESPCHK(0x129cd510u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x129cd5f0 (219 bytes, 64 insns) */
void f_129cd5f0(void) {
  FTRACE(0x129cd5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd5f1 mov ebp, esp */
  EBP = (ESP);
  /* 129cd5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd5f4 cmp dword ptr [0x129ee69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd5fb je 0x129cd691 */
  if (C.zf) goto L_129cd691;
  /* 129cd601 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 129cd603 push 0x129ea010 */
  push32((uint32_t)(0x129ea010u));
  /* 129cd608 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd60a push 0xac */
  push32((uint32_t)(0xacu));
  /* 129cd60f push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd611 call 0x129c3230 */
  push32(0x129cd616u); f_129c3230();
  /* 129cd616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd620 jne 0x129cd62c */
  if (!C.zf) goto L_129cd62c;
  /* 129cd622 mov eax, 1 */
  EAX = (0x1u);
  /* 129cd627 jmp 0x129cd6c7 */
  goto L_129cd6c7;
L_129cd62c:;
  /* 129cd62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd62f push eax */
  push32((uint32_t)(EAX));
  /* 129cd630 call 0x129cd6d0 */
  push32(0x129cd635u); f_129cd6d0();
  /* 129cd635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cd63a je 0x129cd65d */
  if (C.zf) goto L_129cd65d;
  /* 129cd63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd63f push ecx */
  push32((uint32_t)(ECX));
  /* 129cd640 call 0x129cdc60 */
  push32(0x129cd645u); f_129cdc60();
  /* 129cd645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd648 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd64a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd64d push edx */
  push32((uint32_t)(EDX));
  /* 129cd64e call 0x129c38b0 */
  push32(0x129cd653u); f_129c38b0();
  /* 129cd653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd656 mov eax, 1 */
  EAX = (0x1u);
  /* 129cd65b jmp 0x129cd6c7 */
  goto L_129cd6c7;
L_129cd65d:;
  /* 129cd65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd660 mov dword ptr [0x129edc98], eax */
  w32((uint32_t)(0x129edc98), (EAX));
  /* 129cd665 mov ecx, dword ptr [0x129ee6bc] */
  ECX = (r32((uint32_t)(0x129ee6bc)));
  /* 129cd66b push ecx */
  push32((uint32_t)(ECX));
  /* 129cd66c call 0x129cdc60 */
  push32(0x129cd671u); f_129cdc60();
  /* 129cd671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd674 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd676 mov edx, dword ptr [0x129ee6bc] */
  EDX = (r32((uint32_t)(0x129ee6bc)));
  /* 129cd67c push edx */
  push32((uint32_t)(EDX));
  /* 129cd67d call 0x129c38b0 */
  push32(0x129cd682u); f_129c38b0();
  /* 129cd682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd688 mov dword ptr [0x129ee6bc], eax */
  w32((uint32_t)(0x129ee6bc), (EAX));
  /* 129cd68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd68f jmp 0x129cd6c7 */
  goto L_129cd6c7;
L_129cd691:;
  /* 129cd691 mov dword ptr [0x129edc98], 0x129edca0 */
  w32((uint32_t)(0x129edc98), (0x129edca0u));
  /* 129cd69b mov ecx, dword ptr [0x129ee6bc] */
  ECX = (r32((uint32_t)(0x129ee6bc)));
  /* 129cd6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 129cd6a2 call 0x129cdc60 */
  push32(0x129cd6a7u); f_129cdc60();
  /* 129cd6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 129cd6ac mov edx, dword ptr [0x129ee6bc] */
  EDX = (r32((uint32_t)(0x129ee6bc)));
  /* 129cd6b2 push edx */
  push32((uint32_t)(EDX));
  /* 129cd6b3 call 0x129c38b0 */
  push32(0x129cd6b8u); f_129c38b0();
  /* 129cd6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd6bb mov dword ptr [0x129ee6bc], 0 */
  w32((uint32_t)(0x129ee6bc), (0x0u));
  /* 129cd6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cd6c7:;
  /* 129cd6c7 mov esp, ebp */
  ESP = (EBP);
  /* 129cd6c9 pop ebp */
  EBP = (pop32());
  /* 129cd6ca ret  */
  ESPCHK(0x129cd5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x129cd6d0 (1423 bytes, 533 insns) */
void f_129cd6d0(void) {
  FTRACE(0x129cd6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cd6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cd6d1 mov ebp, esp */
  EBP = (ESP);
  /* 129cd6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cd6d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129cd6dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cd6df mov ax, word ptr [0x129ee6f6] */
  AX = (r16((uint32_t)(0x129ee6f6)));
  /* 129cd6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cd6e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd6ea mov cx, word ptr [0x129ee6f8] */
  CX = (r16((uint32_t)(0x129ee6f8)));
  /* 129cd6f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cd6f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cd6f8 jne 0x129cd702 */
  if (!C.zf) goto L_129cd702;
  /* 129cd6fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129cd6fd jmp 0x129cdc5b */
  goto L_129cdc5b;
L_129cd702:;
  /* 129cd702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd705 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd708 push edx */
  push32((uint32_t)(EDX));
  /* 129cd709 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 129cd70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd70e push eax */
  push32((uint32_t)(EAX));
  /* 129cd70f push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd711 call 0x129d0fe0 */
  push32(0x129cd716u); f_129d0fe0();
  /* 129cd716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd71e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd724 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd727 push edx */
  push32((uint32_t)(EDX));
  /* 129cd728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 129cd72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd72d push eax */
  push32((uint32_t)(EAX));
  /* 129cd72e push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd730 call 0x129d0fe0 */
  push32(0x129cd735u); f_129d0fe0();
  /* 129cd735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd738 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd73b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd73d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd743 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd746 push edx */
  push32((uint32_t)(EDX));
  /* 129cd747 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 129cd749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd74c push eax */
  push32((uint32_t)(EAX));
  /* 129cd74d push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd74f call 0x129d0fe0 */
  push32(0x129cd754u); f_129d0fe0();
  /* 129cd754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd757 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd75a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd75c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd762 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd765 push edx */
  push32((uint32_t)(EDX));
  /* 129cd766 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 129cd768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd76b push eax */
  push32((uint32_t)(EAX));
  /* 129cd76c push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd76e call 0x129d0fe0 */
  push32(0x129cd773u); f_129d0fe0();
  /* 129cd773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd779 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd77b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd781 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd784 push edx */
  push32((uint32_t)(EDX));
  /* 129cd785 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 129cd787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd78a push eax */
  push32((uint32_t)(EAX));
  /* 129cd78b push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd78d call 0x129d0fe0 */
  push32(0x129cd792u); f_129d0fe0();
  /* 129cd792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd79a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd7a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd7a3 push edx */
  push32((uint32_t)(EDX));
  /* 129cd7a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 129cd7a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd7a9 push eax */
  push32((uint32_t)(EAX));
  /* 129cd7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd7ac call 0x129d0fe0 */
  push32(0x129cd7b1u); f_129d0fe0();
  /* 129cd7b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd7b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd7b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd7bf push edx */
  push32((uint32_t)(EDX));
  /* 129cd7c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 129cd7c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd7c5 push eax */
  push32((uint32_t)(EAX));
  /* 129cd7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd7c8 call 0x129d0fe0 */
  push32(0x129cd7cdu); f_129d0fe0();
  /* 129cd7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd7d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd7d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd7d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd7db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd7de push edx */
  push32((uint32_t)(EDX));
  /* 129cd7df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 129cd7e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd7e4 push eax */
  push32((uint32_t)(EAX));
  /* 129cd7e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd7e7 call 0x129d0fe0 */
  push32(0x129cd7ecu); f_129d0fe0();
  /* 129cd7ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd7ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd7f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd7f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd7f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd7fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd7fd push edx */
  push32((uint32_t)(EDX));
  /* 129cd7fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 129cd800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd803 push eax */
  push32((uint32_t)(EAX));
  /* 129cd804 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd806 call 0x129d0fe0 */
  push32(0x129cd80bu); f_129d0fe0();
  /* 129cd80b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd80e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd811 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd813 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd819 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd81c push edx */
  push32((uint32_t)(EDX));
  /* 129cd81d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 129cd81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd822 push eax */
  push32((uint32_t)(EAX));
  /* 129cd823 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd825 call 0x129d0fe0 */
  push32(0x129cd82au); f_129d0fe0();
  /* 129cd82a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd838 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd83b push edx */
  push32((uint32_t)(EDX));
  /* 129cd83c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 129cd83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd841 push eax */
  push32((uint32_t)(EAX));
  /* 129cd842 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd844 call 0x129d0fe0 */
  push32(0x129cd849u); f_129d0fe0();
  /* 129cd849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd84c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd84f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd851 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd857 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd85a push edx */
  push32((uint32_t)(EDX));
  /* 129cd85b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 129cd85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd860 push eax */
  push32((uint32_t)(EAX));
  /* 129cd861 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd863 call 0x129d0fe0 */
  push32(0x129cd868u); f_129d0fe0();
  /* 129cd868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd86b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd86e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd876 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd879 push edx */
  push32((uint32_t)(EDX));
  /* 129cd87a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 129cd87c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd87f push eax */
  push32((uint32_t)(EAX));
  /* 129cd880 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd882 call 0x129d0fe0 */
  push32(0x129cd887u); f_129d0fe0();
  /* 129cd887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd88a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd88d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd88f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd898 push edx */
  push32((uint32_t)(EDX));
  /* 129cd899 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 129cd89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd89e push eax */
  push32((uint32_t)(EAX));
  /* 129cd89f push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd8a1 call 0x129d0fe0 */
  push32(0x129cd8a6u); f_129d0fe0();
  /* 129cd8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd8b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd8b7 push edx */
  push32((uint32_t)(EDX));
  /* 129cd8b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 129cd8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd8bd push eax */
  push32((uint32_t)(EAX));
  /* 129cd8be push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd8c0 call 0x129d0fe0 */
  push32(0x129cd8c5u); f_129d0fe0();
  /* 129cd8c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd8c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd8cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd8cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd8d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd8d6 push edx */
  push32((uint32_t)(EDX));
  /* 129cd8d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 129cd8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd8dc push eax */
  push32((uint32_t)(EAX));
  /* 129cd8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd8df call 0x129d0fe0 */
  push32(0x129cd8e4u); f_129d0fe0();
  /* 129cd8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd8e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd8f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd8f5 push edx */
  push32((uint32_t)(EDX));
  /* 129cd8f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 129cd8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd8fb push eax */
  push32((uint32_t)(EAX));
  /* 129cd8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd8fe call 0x129d0fe0 */
  push32(0x129cd903u); f_129d0fe0();
  /* 129cd903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd909 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd90b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd911 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd914 push edx */
  push32((uint32_t)(EDX));
  /* 129cd915 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 129cd917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd91a push eax */
  push32((uint32_t)(EAX));
  /* 129cd91b push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd91d call 0x129d0fe0 */
  push32(0x129cd922u); f_129d0fe0();
  /* 129cd922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd92a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd930 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd933 push edx */
  push32((uint32_t)(EDX));
  /* 129cd934 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 129cd936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd939 push eax */
  push32((uint32_t)(EAX));
  /* 129cd93a push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd93c call 0x129d0fe0 */
  push32(0x129cd941u); f_129d0fe0();
  /* 129cd941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd949 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd94f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd952 push edx */
  push32((uint32_t)(EDX));
  /* 129cd953 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 129cd955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd958 push eax */
  push32((uint32_t)(EAX));
  /* 129cd959 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd95b call 0x129d0fe0 */
  push32(0x129cd960u); f_129d0fe0();
  /* 129cd960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd966 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd968 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd96e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd971 push edx */
  push32((uint32_t)(EDX));
  /* 129cd972 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 129cd974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd977 push eax */
  push32((uint32_t)(EAX));
  /* 129cd978 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd97a call 0x129d0fe0 */
  push32(0x129cd97fu); f_129d0fe0();
  /* 129cd97f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd982 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd985 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd987 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd98d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd990 push edx */
  push32((uint32_t)(EDX));
  /* 129cd991 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 129cd993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd996 push eax */
  push32((uint32_t)(EAX));
  /* 129cd997 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd999 call 0x129d0fe0 */
  push32(0x129cd99eu); f_129d0fe0();
  /* 129cd99e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd9a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd9a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd9a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd9ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9af push edx */
  push32((uint32_t)(EDX));
  /* 129cd9b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 129cd9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd9b5 push eax */
  push32((uint32_t)(EAX));
  /* 129cd9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd9b8 call 0x129d0fe0 */
  push32(0x129cd9bdu); f_129d0fe0();
  /* 129cd9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd9c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd9cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9ce push edx */
  push32((uint32_t)(EDX));
  /* 129cd9cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 129cd9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd9d4 push eax */
  push32((uint32_t)(EAX));
  /* 129cd9d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd9d7 call 0x129d0fe0 */
  push32(0x129cd9dcu); f_129d0fe0();
  /* 129cd9dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cd9e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cd9e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cd9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cd9ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9ed push edx */
  push32((uint32_t)(EDX));
  /* 129cd9ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 129cd9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cd9f3 push eax */
  push32((uint32_t)(EAX));
  /* 129cd9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cd9f6 call 0x129d0fe0 */
  push32(0x129cd9fbu); f_129d0fe0();
  /* 129cd9fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cd9fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cda01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cda03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cda06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cda09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda0c push edx */
  push32((uint32_t)(EDX));
  /* 129cda0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 129cda0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cda12 push eax */
  push32((uint32_t)(EAX));
  /* 129cda13 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cda15 call 0x129d0fe0 */
  push32(0x129cda1au); f_129d0fe0();
  /* 129cda1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cda20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cda22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cda25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cda28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda2b push edx */
  push32((uint32_t)(EDX));
  /* 129cda2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 129cda2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cda31 push eax */
  push32((uint32_t)(EAX));
  /* 129cda32 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cda34 call 0x129d0fe0 */
  push32(0x129cda39u); f_129d0fe0();
  /* 129cda39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cda3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cda41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cda44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cda47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda4a push edx */
  push32((uint32_t)(EDX));
  /* 129cda4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 129cda4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cda50 push eax */
  push32((uint32_t)(EAX));
  /* 129cda51 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cda53 call 0x129d0fe0 */
  push32(0x129cda58u); f_129d0fe0();
  /* 129cda58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cda5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cda60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cda63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cda66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda69 push edx */
  push32((uint32_t)(EDX));
  /* 129cda6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 129cda6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cda6f push eax */
  push32((uint32_t)(EAX));
  /* 129cda70 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cda72 call 0x129d0fe0 */
  push32(0x129cda77u); f_129d0fe0();
  /* 129cda77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cda7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cda7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cda82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cda85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda88 push edx */
  push32((uint32_t)(EDX));
  /* 129cda89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 129cda8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cda8e push eax */
  push32((uint32_t)(EAX));
  /* 129cda8f push 1 */
  push32((uint32_t)(0x1u));
  /* 129cda91 call 0x129d0fe0 */
  push32(0x129cda96u); f_129d0fe0();
  /* 129cda96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cda99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cda9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cda9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdaa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdaa4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdaa7 push edx */
  push32((uint32_t)(EDX));
  /* 129cdaa8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 129cdaaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdaad push eax */
  push32((uint32_t)(EAX));
  /* 129cdaae push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdab0 call 0x129d0fe0 */
  push32(0x129cdab5u); f_129d0fe0();
  /* 129cdab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdac3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdac6 push edx */
  push32((uint32_t)(EDX));
  /* 129cdac7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 129cdac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdacc push eax */
  push32((uint32_t)(EAX));
  /* 129cdacd push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdacf call 0x129d0fe0 */
  push32(0x129cdad4u); f_129d0fe0();
  /* 129cdad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdae2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdae8 push edx */
  push32((uint32_t)(EDX));
  /* 129cdae9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 129cdaeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdaee push eax */
  push32((uint32_t)(EAX));
  /* 129cdaef push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdaf1 call 0x129d0fe0 */
  push32(0x129cdaf6u); f_129d0fe0();
  /* 129cdaf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdaf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdafc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdafe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdb01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdb04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb0a push edx */
  push32((uint32_t)(EDX));
  /* 129cdb0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 129cdb0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdb10 push eax */
  push32((uint32_t)(EAX));
  /* 129cdb11 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdb13 call 0x129d0fe0 */
  push32(0x129cdb18u); f_129d0fe0();
  /* 129cdb18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdb1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdb20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdb23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdb26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb2c push edx */
  push32((uint32_t)(EDX));
  /* 129cdb2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 129cdb2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdb32 push eax */
  push32((uint32_t)(EAX));
  /* 129cdb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdb35 call 0x129d0fe0 */
  push32(0x129cdb3au); f_129d0fe0();
  /* 129cdb3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdb40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdb42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdb48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb4e push edx */
  push32((uint32_t)(EDX));
  /* 129cdb4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 129cdb51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdb54 push eax */
  push32((uint32_t)(EAX));
  /* 129cdb55 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdb57 call 0x129d0fe0 */
  push32(0x129cdb5cu); f_129d0fe0();
  /* 129cdb5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdb62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdb64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdb67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdb6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb70 push edx */
  push32((uint32_t)(EDX));
  /* 129cdb71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 129cdb73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdb76 push eax */
  push32((uint32_t)(EAX));
  /* 129cdb77 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdb79 call 0x129d0fe0 */
  push32(0x129cdb7eu); f_129d0fe0();
  /* 129cdb7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdb84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdb86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdb89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdb8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdb92 push edx */
  push32((uint32_t)(EDX));
  /* 129cdb93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 129cdb95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdb98 push eax */
  push32((uint32_t)(EAX));
  /* 129cdb99 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdb9b call 0x129d0fe0 */
  push32(0x129cdba0u); f_129d0fe0();
  /* 129cdba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdba3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdba6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdba8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdbab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdbae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdbb4 push edx */
  push32((uint32_t)(EDX));
  /* 129cdbb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 129cdbb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdbba push eax */
  push32((uint32_t)(EAX));
  /* 129cdbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdbbd call 0x129d0fe0 */
  push32(0x129cdbc2u); f_129d0fe0();
  /* 129cdbc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdbc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdbc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdbca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdbcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdbd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdbd6 push edx */
  push32((uint32_t)(EDX));
  /* 129cdbd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 129cdbd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdbdc push eax */
  push32((uint32_t)(EAX));
  /* 129cdbdd push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdbdf call 0x129d0fe0 */
  push32(0x129cdbe4u); f_129d0fe0();
  /* 129cdbe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdbe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdbea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdbec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdbef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdbf2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdbf8 push edx */
  push32((uint32_t)(EDX));
  /* 129cdbf9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 129cdbfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cdbfe push eax */
  push32((uint32_t)(EAX));
  /* 129cdbff push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdc01 call 0x129d0fe0 */
  push32(0x129cdc06u); f_129d0fe0();
  /* 129cdc06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdc0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdc0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdc14 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc1a push edx */
  push32((uint32_t)(EDX));
  /* 129cdc1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 129cdc1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cdc20 push eax */
  push32((uint32_t)(EAX));
  /* 129cdc21 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdc23 call 0x129d0fe0 */
  push32(0x129cdc28u); f_129d0fe0();
  /* 129cdc28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdc2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdc30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdc33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdc36 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc3c push edx */
  push32((uint32_t)(EDX));
  /* 129cdc3d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 129cdc42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cdc45 push eax */
  push32((uint32_t)(EAX));
  /* 129cdc46 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdc48 call 0x129d0fe0 */
  push32(0x129cdc4du); f_129d0fe0();
  /* 129cdc4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cdc53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdc55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129cdc58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_129cdc5b:;
  /* 129cdc5b mov esp, ebp */
  ESP = (EBP);
  /* 129cdc5d pop ebp */
  EBP = (pop32());
  /* 129cdc5e ret  */
  ESPCHK(0x129cd6d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x129cdc60 (779 bytes, 265 insns) */
void f_129cdc60(void) {
  FTRACE(0x129cdc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cdc60 push ebp */
  push32((uint32_t)(EBP));
  /* 129cdc61 mov ebp, esp */
  EBP = (ESP);
  /* 129cdc63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cdc67 jne 0x129cdc6e */
  if (!C.zf) goto L_129cdc6e;
  /* 129cdc69 jmp 0x129cdf69 */
  goto L_129cdf69;
L_129cdc6e:;
  /* 129cdc6e push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdc73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129cdc76 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdc77 call 0x129c38b0 */
  push32(0x129cdc7cu); f_129c38b0();
  /* 129cdc7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc7f push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdc84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129cdc87 push eax */
  push32((uint32_t)(EAX));
  /* 129cdc88 call 0x129c38b0 */
  push32(0x129cdc8du); f_129c38b0();
  /* 129cdc8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdc90 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdc92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdc95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129cdc98 push edx */
  push32((uint32_t)(EDX));
  /* 129cdc99 call 0x129c38b0 */
  push32(0x129cdc9eu); f_129c38b0();
  /* 129cdc9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129cdca9 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdcaa call 0x129c38b0 */
  push32(0x129cdcafu); f_129c38b0();
  /* 129cdcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdcb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdcb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdcb7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129cdcba push eax */
  push32((uint32_t)(EAX));
  /* 129cdcbb call 0x129c38b0 */
  push32(0x129cdcc0u); f_129c38b0();
  /* 129cdcc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdcc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdcc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdcc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129cdccb push edx */
  push32((uint32_t)(EDX));
  /* 129cdccc call 0x129c38b0 */
  push32(0x129cdcd1u); f_129c38b0();
  /* 129cdcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdcd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdcd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdcd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129cdcdb push ecx */
  push32((uint32_t)(ECX));
  /* 129cdcdc call 0x129c38b0 */
  push32(0x129cdce1u); f_129c38b0();
  /* 129cdce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdce9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 129cdcec push eax */
  push32((uint32_t)(EAX));
  /* 129cdced call 0x129c38b0 */
  push32(0x129cdcf2u); f_129c38b0();
  /* 129cdcf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdcf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdcf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdcfa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 129cdcfd push edx */
  push32((uint32_t)(EDX));
  /* 129cdcfe call 0x129c38b0 */
  push32(0x129cdd03u); f_129c38b0();
  /* 129cdd03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd0b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 129cdd0e push ecx */
  push32((uint32_t)(ECX));
  /* 129cdd0f call 0x129c38b0 */
  push32(0x129cdd14u); f_129c38b0();
  /* 129cdd14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd17 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd1c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 129cdd1f push eax */
  push32((uint32_t)(EAX));
  /* 129cdd20 call 0x129c38b0 */
  push32(0x129cdd25u); f_129c38b0();
  /* 129cdd25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd2d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 129cdd30 push edx */
  push32((uint32_t)(EDX));
  /* 129cdd31 call 0x129c38b0 */
  push32(0x129cdd36u); f_129c38b0();
  /* 129cdd36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd39 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd3e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 129cdd41 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdd42 call 0x129c38b0 */
  push32(0x129cdd47u); f_129c38b0();
  /* 129cdd47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd4a push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd4f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129cdd52 push eax */
  push32((uint32_t)(EAX));
  /* 129cdd53 call 0x129c38b0 */
  push32(0x129cdd58u); f_129c38b0();
  /* 129cdd58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd5b push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd60 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 129cdd63 push edx */
  push32((uint32_t)(EDX));
  /* 129cdd64 call 0x129c38b0 */
  push32(0x129cdd69u); f_129c38b0();
  /* 129cdd69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd6c push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd71 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 129cdd74 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdd75 call 0x129c38b0 */
  push32(0x129cdd7au); f_129c38b0();
  /* 129cdd7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd7d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd82 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 129cdd85 push eax */
  push32((uint32_t)(EAX));
  /* 129cdd86 call 0x129c38b0 */
  push32(0x129cdd8bu); f_129c38b0();
  /* 129cdd8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd8e push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdd93 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 129cdd96 push edx */
  push32((uint32_t)(EDX));
  /* 129cdd97 call 0x129c38b0 */
  push32(0x129cdd9cu); f_129c38b0();
  /* 129cdd9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdd9f push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdda1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdda4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 129cdda7 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdda8 call 0x129c38b0 */
  push32(0x129cddadu); f_129c38b0();
  /* 129cddad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cddb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cddb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cddb5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 129cddb8 push eax */
  push32((uint32_t)(EAX));
  /* 129cddb9 call 0x129c38b0 */
  push32(0x129cddbeu); f_129c38b0();
  /* 129cddbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cddc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cddc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cddc6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129cddc9 push edx */
  push32((uint32_t)(EDX));
  /* 129cddca call 0x129c38b0 */
  push32(0x129cddcfu); f_129c38b0();
  /* 129cddcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cddd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cddd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cddd7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 129cddda push ecx */
  push32((uint32_t)(ECX));
  /* 129cdddb call 0x129c38b0 */
  push32(0x129cdde0u); f_129c38b0();
  /* 129cdde0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdde3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdde5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdde8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 129cddeb push eax */
  push32((uint32_t)(EAX));
  /* 129cddec call 0x129c38b0 */
  push32(0x129cddf1u); f_129c38b0();
  /* 129cddf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cddf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cddf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cddf9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 129cddfc push edx */
  push32((uint32_t)(EDX));
  /* 129cddfd call 0x129c38b0 */
  push32(0x129cde02u); f_129c38b0();
  /* 129cde02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde05 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde0a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 129cde0d push ecx */
  push32((uint32_t)(ECX));
  /* 129cde0e call 0x129c38b0 */
  push32(0x129cde13u); f_129c38b0();
  /* 129cde13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde16 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde1b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 129cde1e push eax */
  push32((uint32_t)(EAX));
  /* 129cde1f call 0x129c38b0 */
  push32(0x129cde24u); f_129c38b0();
  /* 129cde24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde27 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde2c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 129cde2f push edx */
  push32((uint32_t)(EDX));
  /* 129cde30 call 0x129c38b0 */
  push32(0x129cde35u); f_129c38b0();
  /* 129cde35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde38 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde3d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 129cde40 push ecx */
  push32((uint32_t)(ECX));
  /* 129cde41 call 0x129c38b0 */
  push32(0x129cde46u); f_129c38b0();
  /* 129cde46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde49 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde4e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 129cde51 push eax */
  push32((uint32_t)(EAX));
  /* 129cde52 call 0x129c38b0 */
  push32(0x129cde57u); f_129c38b0();
  /* 129cde57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde5a push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde5f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 129cde62 push edx */
  push32((uint32_t)(EDX));
  /* 129cde63 call 0x129c38b0 */
  push32(0x129cde68u); f_129c38b0();
  /* 129cde68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde6b push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde70 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 129cde73 push ecx */
  push32((uint32_t)(ECX));
  /* 129cde74 call 0x129c38b0 */
  push32(0x129cde79u); f_129c38b0();
  /* 129cde79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde7c push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde81 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 129cde84 push eax */
  push32((uint32_t)(EAX));
  /* 129cde85 call 0x129c38b0 */
  push32(0x129cde8au); f_129c38b0();
  /* 129cde8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cde8d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cde8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cde92 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 129cde98 push edx */
  push32((uint32_t)(EDX));
  /* 129cde99 call 0x129c38b0 */
  push32(0x129cde9eu); f_129c38b0();
  /* 129cde9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdea6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 129cdeac push ecx */
  push32((uint32_t)(ECX));
  /* 129cdead call 0x129c38b0 */
  push32(0x129cdeb2u); f_129c38b0();
  /* 129cdeb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdeb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdeb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdeba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 129cdec0 push eax */
  push32((uint32_t)(EAX));
  /* 129cdec1 call 0x129c38b0 */
  push32(0x129cdec6u); f_129c38b0();
  /* 129cdec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdece mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 129cded4 push edx */
  push32((uint32_t)(EDX));
  /* 129cded5 call 0x129c38b0 */
  push32(0x129cdedau); f_129c38b0();
  /* 129cdeda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdedd push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdedf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdee2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 129cdee8 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdee9 call 0x129c38b0 */
  push32(0x129cdeeeu); f_129c38b0();
  /* 129cdeee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdef6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 129cdefc push eax */
  push32((uint32_t)(EAX));
  /* 129cdefd call 0x129c38b0 */
  push32(0x129cdf02u); f_129c38b0();
  /* 129cdf02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdf05 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdf07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdf0a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 129cdf10 push edx */
  push32((uint32_t)(EDX));
  /* 129cdf11 call 0x129c38b0 */
  push32(0x129cdf16u); f_129c38b0();
  /* 129cdf16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdf19 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdf1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdf1e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 129cdf24 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdf25 call 0x129c38b0 */
  push32(0x129cdf2au); f_129c38b0();
  /* 129cdf2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdf2d push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdf2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdf32 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 129cdf38 push eax */
  push32((uint32_t)(EAX));
  /* 129cdf39 call 0x129c38b0 */
  push32(0x129cdf3eu); f_129c38b0();
  /* 129cdf3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdf41 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdf43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdf46 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 129cdf4c push edx */
  push32((uint32_t)(EDX));
  /* 129cdf4d call 0x129c38b0 */
  push32(0x129cdf52u); f_129c38b0();
  /* 129cdf52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdf55 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cdf57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cdf5a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 129cdf60 push ecx */
  push32((uint32_t)(ECX));
  /* 129cdf61 call 0x129c38b0 */
  push32(0x129cdf66u); f_129c38b0();
  /* 129cdf66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cdf69:;
  /* 129cdf69 pop ebp */
  EBP = (pop32());
  /* 129cdf6a ret  */
  ESPCHK(0x129cdc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x129cdf70 (678 bytes, 180 insns) */
void f_129cdf70(void) {
  FTRACE(0x129cdf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cdf70 push ebp */
  push32((uint32_t)(EBP));
  /* 129cdf71 mov ebp, esp */
  EBP = (ESP);
  /* 129cdf73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cdf76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cdf7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cdf7f mov ax, word ptr [0x129ee6f2] */
  AX = (r16((uint32_t)(0x129ee6f2)));
  /* 129cdf85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cdf88 cmp dword ptr [0x129ee698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cdf8f je 0x129ce0ea */
  if (C.zf) goto L_129ce0ea;
  /* 129cdf95 push 0x129ee6c0 */
  push32((uint32_t)(0x129ee6c0u));
  /* 129cdf9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 129cdf9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdf9f push ecx */
  push32((uint32_t)(ECX));
  /* 129cdfa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdfa2 call 0x129d0fe0 */
  push32(0x129cdfa7u); f_129d0fe0();
  /* 129cdfa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdfaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cdfad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129cdfaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129cdfb2 push 0x129ee6c4 */
  push32((uint32_t)(0x129ee6c4u));
  /* 129cdfb7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129cdfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdfbc push eax */
  push32((uint32_t)(EAX));
  /* 129cdfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdfbf call 0x129d0fe0 */
  push32(0x129cdfc4u); f_129d0fe0();
  /* 129cdfc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdfc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cdfca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdfcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cdfcf push 0x129ee6c8 */
  push32((uint32_t)(0x129ee6c8u));
  /* 129cdfd4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129cdfd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cdfd9 push edx */
  push32((uint32_t)(EDX));
  /* 129cdfda push 1 */
  push32((uint32_t)(0x1u));
  /* 129cdfdc call 0x129d0fe0 */
  push32(0x129cdfe1u); f_129d0fe0();
  /* 129cdfe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdfe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cdfe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129cdfe9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129cdfec mov edx, dword ptr [0x129ee6c8] */
  EDX = (r32((uint32_t)(0x129ee6c8)));
  /* 129cdff2 push edx */
  push32((uint32_t)(EDX));
  /* 129cdff3 call 0x129ce220 */
  push32(0x129cdff8u); f_129ce220();
  /* 129cdff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cdffb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cdfff je 0x129ce059 */
  if (C.zf) goto L_129ce059;
  /* 129ce001 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce003 mov eax, dword ptr [0x129ee6c0] */
  EAX = (r32((uint32_t)(0x129ee6c0)));
  /* 129ce008 push eax */
  push32((uint32_t)(EAX));
  /* 129ce009 call 0x129c38b0 */
  push32(0x129ce00eu); f_129c38b0();
  /* 129ce00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce011 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce013 mov ecx, dword ptr [0x129ee6c4] */
  ECX = (r32((uint32_t)(0x129ee6c4)));
  /* 129ce019 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce01a call 0x129c38b0 */
  push32(0x129ce01fu); f_129c38b0();
  /* 129ce01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce022 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce024 mov edx, dword ptr [0x129ee6c8] */
  EDX = (r32((uint32_t)(0x129ee6c8)));
  /* 129ce02a push edx */
  push32((uint32_t)(EDX));
  /* 129ce02b call 0x129c38b0 */
  push32(0x129ce030u); f_129c38b0();
  /* 129ce030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce033 mov dword ptr [0x129ee6c0], 0 */
  w32((uint32_t)(0x129ee6c0), (0x0u));
  /* 129ce03d mov dword ptr [0x129ee6c4], 0 */
  w32((uint32_t)(0x129ee6c4), (0x0u));
  /* 129ce047 mov dword ptr [0x129ee6c8], 0 */
  w32((uint32_t)(0x129ee6c8), (0x0u));
  /* 129ce051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ce054 jmp 0x129ce212 */
  goto L_129ce212;
L_129ce059:;
  /* 129ce059 mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce05e cmp dword ptr [eax], 0x129edd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x129edd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce064 je 0x129ce0a0 */
  if (C.zf) goto L_129ce0a0;
  /* 129ce066 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce068 mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce06e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129ce070 push edx */
  push32((uint32_t)(EDX));
  /* 129ce071 call 0x129c38b0 */
  push32(0x129ce076u); f_129c38b0();
  /* 129ce076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce079 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce07b mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce080 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129ce083 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce084 call 0x129c38b0 */
  push32(0x129ce089u); f_129c38b0();
  /* 129ce089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce08c push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce08e mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce094 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129ce097 push eax */
  push32((uint32_t)(EAX));
  /* 129ce098 call 0x129c38b0 */
  push32(0x129ce09du); f_129c38b0();
  /* 129ce09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ce0a0:;
  /* 129ce0a0 mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce0a6 mov edx, dword ptr [0x129ee6c0] */
  EDX = (r32((uint32_t)(0x129ee6c0)));
  /* 129ce0ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129ce0ae mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce0b3 mov ecx, dword ptr [0x129ee6c4] */
  ECX = (r32((uint32_t)(0x129ee6c4)));
  /* 129ce0b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 129ce0bc mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce0c2 mov eax, dword ptr [0x129ee6c8] */
  EAX = (r32((uint32_t)(0x129ee6c8)));
  /* 129ce0c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129ce0ca mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce0d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129ce0d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129ce0d4 mov byte ptr [0x129ecea8], al */
  w8((uint32_t)(0x129ecea8), (AL));
  /* 129ce0d9 mov dword ptr [0x129eceac], 1 */
  w32((uint32_t)(0x129eceac), (0x1u));
  /* 129ce0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce0e5 jmp 0x129ce212 */
  goto L_129ce212;
L_129ce0ea:;
  /* 129ce0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce0ec mov ecx, dword ptr [0x129ee6c0] */
  ECX = (r32((uint32_t)(0x129ee6c0)));
  /* 129ce0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce0f3 call 0x129c38b0 */
  push32(0x129ce0f8u); f_129c38b0();
  /* 129ce0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce0fd mov edx, dword ptr [0x129ee6c4] */
  EDX = (r32((uint32_t)(0x129ee6c4)));
  /* 129ce103 push edx */
  push32((uint32_t)(EDX));
  /* 129ce104 call 0x129c38b0 */
  push32(0x129ce109u); f_129c38b0();
  /* 129ce109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce10c push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce10e mov eax, dword ptr [0x129ee6c8] */
  EAX = (r32((uint32_t)(0x129ee6c8)));
  /* 129ce113 push eax */
  push32((uint32_t)(EAX));
  /* 129ce114 call 0x129c38b0 */
  push32(0x129ce119u); f_129c38b0();
  /* 129ce119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce11c mov dword ptr [0x129ee6c0], 0 */
  w32((uint32_t)(0x129ee6c0), (0x0u));
  /* 129ce126 mov dword ptr [0x129ee6c4], 0 */
  w32((uint32_t)(0x129ee6c4), (0x0u));
  /* 129ce130 mov dword ptr [0x129ee6c8], 0 */
  w32((uint32_t)(0x129ee6c8), (0x0u));
  /* 129ce13a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 129ce13f push 0x129ea01c */
  push32((uint32_t)(0x129ea01cu));
  /* 129ce144 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce146 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce148 call 0x129c2e20 */
  push32(0x129ce14du); f_129c2e20();
  /* 129ce14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce150 mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce156 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129ce158 mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce15e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce161 jne 0x129ce16b */
  if (!C.zf) goto L_129ce16b;
  /* 129ce163 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ce166 jmp 0x129ce212 */
  goto L_129ce212;
L_129ce16b:;
  /* 129ce16b push 0x129e9fec */
  push32((uint32_t)(0x129e9fecu));
  /* 129ce170 mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce175 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129ce177 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce178 call 0x129c5dd0 */
  push32(0x129ce17du); f_129c5dd0();
  /* 129ce17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce180 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 129ce185 push 0x129ea01c */
  push32((uint32_t)(0x129ea01cu));
  /* 129ce18a push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce18c push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce18e call 0x129c2e20 */
  push32(0x129ce193u); f_129c2e20();
  /* 129ce193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce196 mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce19c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 129ce19f mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce1a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce1a8 jne 0x129ce1af */
  if (!C.zf) goto L_129ce1af;
  /* 129ce1aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ce1ad jmp 0x129ce212 */
  goto L_129ce212;
L_129ce1af:;
  /* 129ce1af mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce1b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129ce1b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129ce1bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 129ce1c0 push 0x129ea01c */
  push32((uint32_t)(0x129ea01cu));
  /* 129ce1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce1c9 call 0x129c2e20 */
  push32(0x129ce1ceu); f_129c2e20();
  /* 129ce1ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce1d1 mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce1d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 129ce1da mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce1e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce1e4 jne 0x129ce1eb */
  if (!C.zf) goto L_129ce1eb;
  /* 129ce1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ce1e9 jmp 0x129ce212 */
  goto L_129ce212;
L_129ce1eb:;
  /* 129ce1eb mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce1f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129ce1f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 129ce1f6 mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce1fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129ce1fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129ce200 mov byte ptr [0x129ecea8], cl */
  w8((uint32_t)(0x129ecea8), (CL));
  /* 129ce206 mov dword ptr [0x129eceac], 1 */
  w32((uint32_t)(0x129eceac), (0x1u));
  /* 129ce210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129ce212:;
  /* 129ce212 mov esp, ebp */
  ESP = (EBP);
  /* 129ce214 pop ebp */
  EBP = (pop32());
  /* 129ce215 ret  */
  ESPCHK(0x129cdf70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x129ce220 (125 bytes, 49 insns) */
void f_129ce220(void) {
  FTRACE(0x129ce220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ce220 push ebp */
  push32((uint32_t)(EBP));
  /* 129ce221 mov ebp, esp */
  EBP = (ESP);
  /* 129ce223 push ecx */
  push32((uint32_t)(ECX));
L_129ce224:;
  /* 129ce224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129ce22a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ce22c je 0x129ce299 */
  if (C.zf) goto L_129ce299;
  /* 129ce22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce231 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ce234 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce237 jl 0x129ce25d */
  if ((C.sf!=C.of)) goto L_129ce25d;
  /* 129ce239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce23c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129ce23f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce242 jg 0x129ce25d */
  if ((!C.zf&&C.sf==C.of)) goto L_129ce25d;
  /* 129ce244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129ce24a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ce24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce250 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129ce252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129ce25b jmp 0x129ce297 */
  goto L_129ce297;
L_129ce25d:;
  /* 129ce25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129ce263 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce266 jne 0x129ce28e */
  if (!C.zf) goto L_129ce28e;
  /* 129ce268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce26b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129ce26e:;
  /* 129ce26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce274 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129ce277 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129ce279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce27c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce27f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129ce282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ce288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce28a jne 0x129ce26e */
  if (!C.zf) goto L_129ce26e;
  /* 129ce28c jmp 0x129ce297 */
  goto L_129ce297;
L_129ce28e:;
  /* 129ce28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_129ce297:;
  /* 129ce297 jmp 0x129ce224 */
  goto L_129ce224;
L_129ce299:;
  /* 129ce299 mov esp, ebp */
  ESP = (EBP);
  /* 129ce29b pop ebp */
  EBP = (pop32());
  /* 129ce29c ret  */
  ESPCHK(0x129ce220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x129ce2a0 (304 bytes, 85 insns) */
void f_129ce2a0(void) {
  FTRACE(0x129ce2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ce2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129ce2a1 mov ebp, esp */
  EBP = (ESP);
  /* 129ce2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce2a4 cmp dword ptr [0x129ee694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce2ab je 0x129ce36c */
  if (C.zf) goto L_129ce36c;
  /* 129ce2b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 129ce2b3 push 0x129ea028 */
  push32((uint32_t)(0x129ea028u));
  /* 129ce2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce2ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 129ce2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce2be call 0x129c3230 */
  push32(0x129ce2c3u); f_129c3230();
  /* 129ce2c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce2c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129ce2c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce2cd jne 0x129ce2d9 */
  if (!C.zf) goto L_129ce2d9;
  /* 129ce2cf mov eax, 1 */
  EAX = (0x1u);
  /* 129ce2d4 jmp 0x129ce3cc */
  goto L_129ce3cc;
L_129ce2d9:;
  /* 129ce2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce2dc push eax */
  push32((uint32_t)(EAX));
  /* 129ce2dd call 0x129ce3d0 */
  push32(0x129ce2e2u); f_129ce3d0();
  /* 129ce2e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce2e7 je 0x129ce30d */
  if (C.zf) goto L_129ce30d;
  /* 129ce2e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce2ec push ecx */
  push32((uint32_t)(ECX));
  /* 129ce2ed call 0x129ce660 */
  push32(0x129ce2f2u); f_129ce660();
  /* 129ce2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce2fa push edx */
  push32((uint32_t)(EDX));
  /* 129ce2fb call 0x129c38b0 */
  push32(0x129ce300u); f_129c38b0();
  /* 129ce300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce303 mov eax, 1 */
  EAX = (0x1u);
  /* 129ce308 jmp 0x129ce3cc */
  goto L_129ce3cc;
L_129ce30d:;
  /* 129ce30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce310 mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129ce318 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129ce31a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce31d mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce323 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129ce326 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129ce329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce32c mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce332 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129ce335 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 129ce338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce33b mov dword ptr [0x129edd88], eax */
  w32((uint32_t)(0x129edd88), (EAX));
  /* 129ce340 mov ecx, dword ptr [0x129ee6cc] */
  ECX = (r32((uint32_t)(0x129ee6cc)));
  /* 129ce346 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce347 call 0x129ce660 */
  push32(0x129ce34cu); f_129ce660();
  /* 129ce34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce34f push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce351 mov edx, dword ptr [0x129ee6cc] */
  EDX = (r32((uint32_t)(0x129ee6cc)));
  /* 129ce357 push edx */
  push32((uint32_t)(EDX));
  /* 129ce358 call 0x129c38b0 */
  push32(0x129ce35du); f_129c38b0();
  /* 129ce35d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce363 mov dword ptr [0x129ee6cc], eax */
  w32((uint32_t)(0x129ee6cc), (EAX));
  /* 129ce368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce36a jmp 0x129ce3cc */
  goto L_129ce3cc;
L_129ce36c:;
  /* 129ce36c mov ecx, dword ptr [0x129edd88] */
  ECX = (r32((uint32_t)(0x129edd88)));
  /* 129ce372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129ce374 mov dword ptr [0x129edd58], edx */
  w32((uint32_t)(0x129edd58), (EDX));
  /* 129ce37a mov eax, dword ptr [0x129edd88] */
  EAX = (r32((uint32_t)(0x129edd88)));
  /* 129ce37f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129ce382 mov dword ptr [0x129edd5c], ecx */
  w32((uint32_t)(0x129edd5c), (ECX));
  /* 129ce388 mov edx, dword ptr [0x129edd88] */
  EDX = (r32((uint32_t)(0x129edd88)));
  /* 129ce38e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129ce391 mov dword ptr [0x129edd60], eax */
  w32((uint32_t)(0x129edd60), (EAX));
  /* 129ce396 mov dword ptr [0x129edd88], 0x129edd58 */
  w32((uint32_t)(0x129edd88), (0x129edd58u));
  /* 129ce3a0 mov ecx, dword ptr [0x129ee6cc] */
  ECX = (r32((uint32_t)(0x129ee6cc)));
  /* 129ce3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce3a7 call 0x129ce660 */
  push32(0x129ce3acu); f_129ce660();
  /* 129ce3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce3af push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce3b1 mov edx, dword ptr [0x129ee6cc] */
  EDX = (r32((uint32_t)(0x129ee6cc)));
  /* 129ce3b7 push edx */
  push32((uint32_t)(EDX));
  /* 129ce3b8 call 0x129c38b0 */
  push32(0x129ce3bdu); f_129c38b0();
  /* 129ce3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce3c0 mov dword ptr [0x129ee6cc], 0 */
  w32((uint32_t)(0x129ee6cc), (0x0u));
  /* 129ce3ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129ce3cc:;
  /* 129ce3cc mov esp, ebp */
  ESP = (EBP);
  /* 129ce3ce pop ebp */
  EBP = (pop32());
  /* 129ce3cf ret  */
  ESPCHK(0x129ce2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x129ce3d0 (525 bytes, 200 insns) */
void f_129ce3d0(void) {
  FTRACE(0x129ce3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ce3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129ce3d1 mov ebp, esp */
  EBP = (ESP);
  /* 129ce3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ce3d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129ce3dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce3df mov ax, word ptr [0x129ee6ec] */
  AX = (r16((uint32_t)(0x129ee6ec)));
  /* 129ce3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129ce3e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce3ec jne 0x129ce3f6 */
  if (!C.zf) goto L_129ce3f6;
  /* 129ce3ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ce3f1 jmp 0x129ce5d9 */
  goto L_129ce5d9;
L_129ce3f6:;
  /* 129ce3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce3f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce3fc push ecx */
  push32((uint32_t)(ECX));
  /* 129ce3fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 129ce3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce402 push edx */
  push32((uint32_t)(EDX));
  /* 129ce403 push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce405 call 0x129d0fe0 */
  push32(0x129ce40au); f_129d0fe0();
  /* 129ce40a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce40d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce410 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce412 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce418 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce41b push edx */
  push32((uint32_t)(EDX));
  /* 129ce41c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 129ce41e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce421 push eax */
  push32((uint32_t)(EAX));
  /* 129ce422 push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce424 call 0x129d0fe0 */
  push32(0x129ce429u); f_129d0fe0();
  /* 129ce429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce42c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce42f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce431 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce43a push edx */
  push32((uint32_t)(EDX));
  /* 129ce43b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 129ce43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce440 push eax */
  push32((uint32_t)(EAX));
  /* 129ce441 push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce443 call 0x129d0fe0 */
  push32(0x129ce448u); f_129d0fe0();
  /* 129ce448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce44b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce44e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce450 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce456 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce459 push edx */
  push32((uint32_t)(EDX));
  /* 129ce45a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 129ce45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce45f push eax */
  push32((uint32_t)(EAX));
  /* 129ce460 push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce462 call 0x129d0fe0 */
  push32(0x129ce467u); f_129d0fe0();
  /* 129ce467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce46a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce46d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce475 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce478 push edx */
  push32((uint32_t)(EDX));
  /* 129ce479 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 129ce47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce47e push eax */
  push32((uint32_t)(EAX));
  /* 129ce47f push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce481 call 0x129d0fe0 */
  push32(0x129ce486u); f_129d0fe0();
  /* 129ce486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce48c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce48e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce494 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 129ce497 push eax */
  push32((uint32_t)(EAX));
  /* 129ce498 call 0x129ce5e0 */
  push32(0x129ce49du); f_129ce5e0();
  /* 129ce49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce4a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce4a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 129ce4a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce4ac push edx */
  push32((uint32_t)(EDX));
  /* 129ce4ad push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce4af call 0x129d0fe0 */
  push32(0x129ce4b4u); f_129d0fe0();
  /* 129ce4b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce4ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce4bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce4c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4c5 push edx */
  push32((uint32_t)(EDX));
  /* 129ce4c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 129ce4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce4cb push eax */
  push32((uint32_t)(EAX));
  /* 129ce4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce4ce call 0x129d0fe0 */
  push32(0x129ce4d3u); f_129d0fe0();
  /* 129ce4d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce4d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce4db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce4e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4e4 push edx */
  push32((uint32_t)(EDX));
  /* 129ce4e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 129ce4e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce4ea push eax */
  push32((uint32_t)(EAX));
  /* 129ce4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce4ed call 0x129d0fe0 */
  push32(0x129ce4f2u); f_129d0fe0();
  /* 129ce4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce4f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce4fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce4fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce500 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce503 push edx */
  push32((uint32_t)(EDX));
  /* 129ce504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129ce506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce509 push eax */
  push32((uint32_t)(EAX));
  /* 129ce50a push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce50c call 0x129d0fe0 */
  push32(0x129ce511u); f_129d0fe0();
  /* 129ce511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce514 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce517 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce519 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce51f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce522 push edx */
  push32((uint32_t)(EDX));
  /* 129ce523 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 129ce525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce528 push eax */
  push32((uint32_t)(EAX));
  /* 129ce529 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce52b call 0x129d0fe0 */
  push32(0x129ce530u); f_129d0fe0();
  /* 129ce530 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce536 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce53b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce53e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce541 push edx */
  push32((uint32_t)(EDX));
  /* 129ce542 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 129ce544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce547 push eax */
  push32((uint32_t)(EAX));
  /* 129ce548 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce54a call 0x129d0fe0 */
  push32(0x129ce54fu); f_129d0fe0();
  /* 129ce54f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce555 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce557 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce55a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce55d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce560 push edx */
  push32((uint32_t)(EDX));
  /* 129ce561 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 129ce563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce566 push eax */
  push32((uint32_t)(EAX));
  /* 129ce567 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce569 call 0x129d0fe0 */
  push32(0x129ce56eu); f_129d0fe0();
  /* 129ce56e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce574 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce576 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce57c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce57f push edx */
  push32((uint32_t)(EDX));
  /* 129ce580 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 129ce582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce585 push eax */
  push32((uint32_t)(EAX));
  /* 129ce586 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce588 call 0x129d0fe0 */
  push32(0x129ce58du); f_129d0fe0();
  /* 129ce58d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce593 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce59b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce59e push edx */
  push32((uint32_t)(EDX));
  /* 129ce59f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 129ce5a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce5a4 push eax */
  push32((uint32_t)(EAX));
  /* 129ce5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce5a7 call 0x129d0fe0 */
  push32(0x129ce5acu); f_129d0fe0();
  /* 129ce5ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce5af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce5b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce5b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce5ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce5bd push edx */
  push32((uint32_t)(EDX));
  /* 129ce5be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 129ce5c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce5c3 push eax */
  push32((uint32_t)(EAX));
  /* 129ce5c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce5c6 call 0x129d0fe0 */
  push32(0x129ce5cbu); f_129d0fe0();
  /* 129ce5cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce5ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129ce5d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce5d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129ce5d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129ce5d9:;
  /* 129ce5d9 mov esp, ebp */
  ESP = (EBP);
  /* 129ce5db pop ebp */
  EBP = (pop32());
  /* 129ce5dc ret  */
  ESPCHK(0x129ce3d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x129ce5e0 (125 bytes, 49 insns) */
void f_129ce5e0(void) {
  FTRACE(0x129ce5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ce5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129ce5e1 mov ebp, esp */
  EBP = (ESP);
  /* 129ce5e3 push ecx */
  push32((uint32_t)(ECX));
L_129ce5e4:;
  /* 129ce5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce5e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129ce5ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ce5ec je 0x129ce659 */
  if (C.zf) goto L_129ce659;
  /* 129ce5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce5f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ce5f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce5f7 jl 0x129ce61d */
  if ((C.sf!=C.of)) goto L_129ce61d;
  /* 129ce5f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce5fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129ce5ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce602 jg 0x129ce61d */
  if ((!C.zf&&C.sf==C.of)) goto L_129ce61d;
  /* 129ce604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129ce60a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ce60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce610 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129ce612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce618 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129ce61b jmp 0x129ce657 */
  goto L_129ce657;
L_129ce61d:;
  /* 129ce61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce620 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129ce623 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce626 jne 0x129ce64e */
  if (!C.zf) goto L_129ce64e;
  /* 129ce628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce62b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129ce62e:;
  /* 129ce62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce634 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129ce637 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129ce639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce63c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce63f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129ce642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ce645 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129ce648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce64a jne 0x129ce62e */
  if (!C.zf) goto L_129ce62e;
  /* 129ce64c jmp 0x129ce657 */
  goto L_129ce657;
L_129ce64e:;
  /* 129ce64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce654 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_129ce657:;
  /* 129ce657 jmp 0x129ce5e4 */
  goto L_129ce5e4;
L_129ce659:;
  /* 129ce659 mov esp, ebp */
  ESP = (EBP);
  /* 129ce65b pop ebp */
  EBP = (pop32());
  /* 129ce65c ret  */
  ESPCHK(0x129ce5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x129ce660 (147 bytes, 52 insns) */
void f_129ce660(void) {
  FTRACE(0x129ce660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ce660 push ebp */
  push32((uint32_t)(EBP));
  /* 129ce661 mov ebp, esp */
  EBP = (ESP);
  /* 129ce663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce667 jne 0x129ce66e */
  if (!C.zf) goto L_129ce66e;
  /* 129ce669 jmp 0x129ce6f1 */
  goto L_129ce6f1;
L_129ce66e:;
  /* 129ce66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce671 cmp dword ptr [eax + 0xc], 0x129ee728 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x129ee728u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce678 je 0x129ce6f1 */
  if (C.zf) goto L_129ce6f1;
  /* 129ce67a push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce67f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129ce682 push edx */
  push32((uint32_t)(EDX));
  /* 129ce683 call 0x129c38b0 */
  push32(0x129ce688u); f_129c38b0();
  /* 129ce688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce68b push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce68d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce690 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129ce693 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce694 call 0x129c38b0 */
  push32(0x129ce699u); f_129c38b0();
  /* 129ce699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce69c push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce6a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129ce6a4 push eax */
  push32((uint32_t)(EAX));
  /* 129ce6a5 call 0x129c38b0 */
  push32(0x129ce6aau); f_129c38b0();
  /* 129ce6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce6af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce6b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129ce6b5 push edx */
  push32((uint32_t)(EDX));
  /* 129ce6b6 call 0x129c38b0 */
  push32(0x129ce6bbu); f_129c38b0();
  /* 129ce6bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce6be push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce6c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129ce6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 129ce6c7 call 0x129c38b0 */
  push32(0x129ce6ccu); f_129c38b0();
  /* 129ce6cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce6d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 129ce6d7 push eax */
  push32((uint32_t)(EAX));
  /* 129ce6d8 call 0x129c38b0 */
  push32(0x129ce6ddu); f_129c38b0();
  /* 129ce6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce6e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce6e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ce6e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 129ce6e8 push edx */
  push32((uint32_t)(EDX));
  /* 129ce6e9 call 0x129c38b0 */
  push32(0x129ce6eeu); f_129c38b0();
  /* 129ce6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ce6f1:;
  /* 129ce6f1 pop ebp */
  EBP = (pop32());
  /* 129ce6f2 ret  */
  ESPCHK(0x129ce660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x129ce700 (928 bytes, 284 insns) */
void f_129ce700(void) {
  FTRACE(0x129ce700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ce700 push ebp */
  push32((uint32_t)(EBP));
  /* 129ce701 mov ebp, esp */
  EBP = (ESP);
  /* 129ce703 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ce706 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 129ce70d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 129ce714 cmp dword ptr [0x129ee690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce71b je 0x129cea51 */
  if (C.zf) goto L_129cea51;
  /* 129ce721 cmp dword ptr [0x129ee6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce728 jne 0x129ce750 */
  if (!C.zf) goto L_129ce750;
  /* 129ce72a push 0x129ee6a0 */
  push32((uint32_t)(0x129ee6a0u));
  /* 129ce72f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 129ce734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce736 mov ax, word ptr [0x129ee6e4] */
  AX = (r16((uint32_t)(0x129ee6e4)));
  /* 129ce73c push eax */
  push32((uint32_t)(EAX));
  /* 129ce73d push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce73f call 0x129d0fe0 */
  push32(0x129ce744u); f_129d0fe0();
  /* 129ce744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce749 je 0x129ce750 */
  if (C.zf) goto L_129ce750;
  /* 129ce74b jmp 0x129cea12 */
  goto L_129cea12;
L_129ce750:;
  /* 129ce750 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 129ce752 push 0x129ea034 */
  push32((uint32_t)(0x129ea034u));
  /* 129ce757 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce759 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 129ce75e call 0x129c2e20 */
  push32(0x129ce763u); f_129c2e20();
  /* 129ce763 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce766 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 129ce769 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 129ce76b push 0x129ea034 */
  push32((uint32_t)(0x129ea034u));
  /* 129ce770 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce772 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 129ce777 call 0x129c2e20 */
  push32(0x129ce77cu); f_129c2e20();
  /* 129ce77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce77f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 129ce782 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 129ce784 push 0x129ea034 */
  push32((uint32_t)(0x129ea034u));
  /* 129ce789 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce78b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 129ce790 call 0x129c2e20 */
  push32(0x129ce795u); f_129c2e20();
  /* 129ce795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce798 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 129ce79b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 129ce79d push 0x129ea034 */
  push32((uint32_t)(0x129ea034u));
  /* 129ce7a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce7a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 129ce7a9 call 0x129c2e20 */
  push32(0x129ce7aeu); f_129c2e20();
  /* 129ce7ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce7b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129ce7b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce7b8 je 0x129ce7cc */
  if (C.zf) goto L_129ce7cc;
  /* 129ce7ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce7be je 0x129ce7cc */
  if (C.zf) goto L_129ce7cc;
  /* 129ce7c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce7c4 je 0x129ce7cc */
  if (C.zf) goto L_129ce7cc;
  /* 129ce7c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce7ca jne 0x129ce7d1 */
  if (!C.zf) goto L_129ce7d1;
L_129ce7cc:;
  /* 129ce7cc jmp 0x129cea12 */
  goto L_129cea12;
L_129ce7d1:;
  /* 129ce7d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129ce7d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129ce7d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129ce7de jmp 0x129ce7e9 */
  goto L_129ce7e9;
L_129ce7e0:;
  /* 129ce7e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ce7e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce7e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_129ce7e9:;
  /* 129ce7e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce7f0 jge 0x129ce805 */
  if ((C.sf==C.of)) goto L_129ce805;
  /* 129ce7f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce7f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 129ce7f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 129ce7fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce7fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce800 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129ce803 jmp 0x129ce7e0 */
  goto L_129ce7e0;
L_129ce805:;
  /* 129ce805 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 129ce808 push eax */
  push32((uint32_t)(EAX));
  /* 129ce809 mov ecx, dword ptr [0x129ee6a0] */
  ECX = (r32((uint32_t)(0x129ee6a0)));
  /* 129ce80f push ecx */
  push32((uint32_t)(ECX));
  /* 129ce810 call dword ptr [0x129f033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f033c))), 0x129ce816u);
  /* 129ce816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce818 jne 0x129ce81f */
  if (!C.zf) goto L_129ce81f;
  /* 129ce81a jmp 0x129cea12 */
  goto L_129cea12;
L_129ce81f:;
  /* 129ce81f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce823 jbe 0x129ce82a */
  if ((C.cf||C.zf)) goto L_129ce82a;
  /* 129ce825 jmp 0x129cea12 */
  goto L_129cea12;
L_129ce82a:;
  /* 129ce82a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129ce82d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129ce833 mov dword ptr [0x129ecea4], edx */
  w32((uint32_t)(0x129ecea4), (EDX));
  /* 129ce839 cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce840 jle 0x129ce899 */
  if ((C.zf||C.sf!=C.of)) goto L_129ce899;
  /* 129ce842 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 129ce845 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129ce848 jmp 0x129ce853 */
  goto L_129ce853;
L_129ce84a:;
  /* 129ce84a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce84d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce850 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_129ce853:;
  /* 129ce853 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce858 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129ce85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce85c je 0x129ce899 */
  if (C.zf) goto L_129ce899;
  /* 129ce85e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce861 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129ce863 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 129ce866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ce868 je 0x129ce899 */
  if (C.zf) goto L_129ce899;
  /* 129ce86a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129ce871 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129ce874 jmp 0x129ce87f */
  goto L_129ce87f;
L_129ce876:;
  /* 129ce876 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ce879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce87c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_129ce87f:;
  /* 129ce87f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce884 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129ce887 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce88a jg 0x129ce897 */
  if ((!C.zf&&C.sf==C.of)) goto L_129ce897;
  /* 129ce88c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129ce88f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce892 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129ce895 jmp 0x129ce876 */
  goto L_129ce876;
L_129ce897:;
  /* 129ce897 jmp 0x129ce84a */
  goto L_129ce84a;
L_129ce899:;
  /* 129ce899 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce89b push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce89d push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce89f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129ce8a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce8a5 push eax */
  push32((uint32_t)(EAX));
  /* 129ce8a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129ce8ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129ce8ae push ecx */
  push32((uint32_t)(ECX));
  /* 129ce8af push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce8b1 call 0x129cb050 */
  push32(0x129ce8b6u); f_129cb050();
  /* 129ce8b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce8bb jne 0x129ce8c2 */
  if (!C.zf) goto L_129ce8c2;
  /* 129ce8bd jmp 0x129cea12 */
  goto L_129cea12;
L_129ce8c2:;
  /* 129ce8c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129ce8c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 129ce8ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129ce8cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129ce8d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129ce8d7 jmp 0x129ce8e2 */
  goto L_129ce8e2;
L_129ce8d9:;
  /* 129ce8d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ce8dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_129ce8e2:;
  /* 129ce8e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce8e9 jge 0x129ce900 */
  if ((C.sf==C.of)) goto L_129ce900;
  /* 129ce8eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129ce8ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 129ce8f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 129ce8f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129ce8f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce8fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129ce8fe jmp 0x129ce8d9 */
  goto L_129ce8d9;
L_129ce900:;
  /* 129ce900 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce902 push 0 */
  push32((uint32_t)(0x0u));
  /* 129ce904 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129ce907 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce90a push edx */
  push32((uint32_t)(EDX));
  /* 129ce90b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129ce910 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129ce913 push eax */
  push32((uint32_t)(EAX));
  /* 129ce914 push 1 */
  push32((uint32_t)(0x1u));
  /* 129ce916 call 0x129d1280 */
  push32(0x129ce91bu); f_129d1280();
  /* 129ce91b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ce920 jne 0x129ce927 */
  if (!C.zf) goto L_129ce927;
  /* 129ce922 jmp 0x129cea12 */
  goto L_129cea12;
L_129ce927:;
  /* 129ce927 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129ce92a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 129ce92f cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce936 jle 0x129ce993 */
  if ((C.zf||C.sf!=C.of)) goto L_129ce993;
  /* 129ce938 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 129ce93b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129ce93e jmp 0x129ce949 */
  goto L_129ce949;
L_129ce940:;
  /* 129ce940 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce943 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce946 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_129ce949:;
  /* 129ce949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce94c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129ce94e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129ce950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129ce952 je 0x129ce993 */
  if (C.zf) goto L_129ce993;
  /* 129ce954 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce957 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ce959 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129ce95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ce95e je 0x129ce993 */
  if (C.zf) goto L_129ce993;
  /* 129ce960 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce965 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129ce967 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129ce96a jmp 0x129ce975 */
  goto L_129ce975;
L_129ce96c:;
  /* 129ce96c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ce96f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce972 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_129ce975:;
  /* 129ce975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129ce978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ce97a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129ce97d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce980 jg 0x129ce991 */
  if ((!C.zf&&C.sf==C.of)) goto L_129ce991;
  /* 129ce982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129ce985 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129ce988 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 129ce98f jmp 0x129ce96c */
  goto L_129ce96c;
L_129ce991:;
  /* 129ce991 jmp 0x129ce940 */
  goto L_129ce940;
L_129ce993:;
  /* 129ce993 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129ce996 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce999 mov dword ptr [0x129ecc98], eax */
  w32((uint32_t)(0x129ecc98), (EAX));
  /* 129ce99e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129ce9a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce9a4 mov dword ptr [0x129ecc9c], ecx */
  w32((uint32_t)(0x129ecc9c), (ECX));
  /* 129ce9aa cmp dword ptr [0x129ee6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce9b1 je 0x129ce9c4 */
  if (C.zf) goto L_129ce9c4;
  /* 129ce9b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce9b5 mov edx, dword ptr [0x129ee6d0] */
  EDX = (r32((uint32_t)(0x129ee6d0)));
  /* 129ce9bb push edx */
  push32((uint32_t)(EDX));
  /* 129ce9bc call 0x129c38b0 */
  push32(0x129ce9c1u); f_129c38b0();
  /* 129ce9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ce9c4:;
  /* 129ce9c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129ce9c7 mov dword ptr [0x129ee6d0], eax */
  w32((uint32_t)(0x129ee6d0), (EAX));
  /* 129ce9cc cmp dword ptr [0x129ee6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ce9d3 je 0x129ce9e6 */
  if (C.zf) goto L_129ce9e6;
  /* 129ce9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce9d7 mov ecx, dword ptr [0x129ee6d4] */
  ECX = (r32((uint32_t)(0x129ee6d4)));
  /* 129ce9dd push ecx */
  push32((uint32_t)(ECX));
  /* 129ce9de call 0x129c38b0 */
  push32(0x129ce9e3u); f_129c38b0();
  /* 129ce9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ce9e6:;
  /* 129ce9e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129ce9e9 mov dword ptr [0x129ee6d4], edx */
  w32((uint32_t)(0x129ee6d4), (EDX));
  /* 129ce9ef push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce9f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129ce9f4 push eax */
  push32((uint32_t)(EAX));
  /* 129ce9f5 call 0x129c38b0 */
  push32(0x129ce9fau); f_129c38b0();
  /* 129ce9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ce9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 129ce9ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129cea02 push ecx */
  push32((uint32_t)(ECX));
  /* 129cea03 call 0x129c38b0 */
  push32(0x129cea08u); f_129c38b0();
  /* 129cea08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cea0d jmp 0x129cea9c */
  goto L_129cea9c;
L_129cea12:;
  /* 129cea12 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cea14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129cea17 push edx */
  push32((uint32_t)(EDX));
  /* 129cea18 call 0x129c38b0 */
  push32(0x129cea1du); f_129c38b0();
  /* 129cea1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea20 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cea22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129cea25 push eax */
  push32((uint32_t)(EAX));
  /* 129cea26 call 0x129c38b0 */
  push32(0x129cea2bu); f_129c38b0();
  /* 129cea2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea2e push 2 */
  push32((uint32_t)(0x2u));
  /* 129cea30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129cea33 push ecx */
  push32((uint32_t)(ECX));
  /* 129cea34 call 0x129c38b0 */
  push32(0x129cea39u); f_129c38b0();
  /* 129cea39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea3c push 2 */
  push32((uint32_t)(0x2u));
  /* 129cea3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129cea41 push edx */
  push32((uint32_t)(EDX));
  /* 129cea42 call 0x129c38b0 */
  push32(0x129cea47u); f_129c38b0();
  /* 129cea47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea4a mov eax, 1 */
  EAX = (0x1u);
  /* 129cea4f jmp 0x129cea9c */
  goto L_129cea9c;
L_129cea51:;
  /* 129cea51 mov dword ptr [0x129ecc98], 0x129ecca2 */
  w32((uint32_t)(0x129ecc98), (0x129ecca2u));
  /* 129cea5b mov dword ptr [0x129ecc9c], 0x129ecca2 */
  w32((uint32_t)(0x129ecc9c), (0x129ecca2u));
  /* 129cea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cea67 mov eax, dword ptr [0x129ee6d0] */
  EAX = (r32((uint32_t)(0x129ee6d0)));
  /* 129cea6c push eax */
  push32((uint32_t)(EAX));
  /* 129cea6d call 0x129c38b0 */
  push32(0x129cea72u); f_129c38b0();
  /* 129cea72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea75 push 2 */
  push32((uint32_t)(0x2u));
  /* 129cea77 mov ecx, dword ptr [0x129ee6d4] */
  ECX = (r32((uint32_t)(0x129ee6d4)));
  /* 129cea7d push ecx */
  push32((uint32_t)(ECX));
  /* 129cea7e call 0x129c38b0 */
  push32(0x129cea83u); f_129c38b0();
  /* 129cea83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cea86 mov dword ptr [0x129ee6d0], 0 */
  w32((uint32_t)(0x129ee6d0), (0x0u));
  /* 129cea90 mov dword ptr [0x129ee6d4], 0 */
  w32((uint32_t)(0x129ee6d4), (0x0u));
  /* 129cea9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129cea9c:;
  /* 129cea9c mov esp, ebp */
  ESP = (EBP);
  /* 129cea9e pop ebp */
  EBP = (pop32());
  /* 129cea9f ret  */
  ESPCHK(0x129ce700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x129ceaa0 (7 bytes, 5 insns) */
void f_129ceaa0(void) {
  FTRACE(0x129ceaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ceaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 129ceaa1 mov ebp, esp */
  EBP = (ESP);
  /* 129ceaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ceaa5 pop ebp */
  EBP = (pop32());
  /* 129ceaa6 ret  */
  ESPCHK(0x129ceaa0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x129ceab0 (129 bytes, 56 insns) */
void f_129ceab0(void) {
  FTRACE(0x129ceab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ceab0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 129ceab4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 129ceab8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 129ceabe jne 0x129ceafc */
  if (!C.zf) goto L_129ceafc;
L_129ceac0:;
  /* 129ceac0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129ceac2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceac4 jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129ceac8 je 0x129ceaf0 */
  if (C.zf) goto L_129ceaf0;
  /* 129ceaca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceacd jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceacf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 129cead1 je 0x129ceaf0 */
  if (C.zf) goto L_129ceaf0;
  /* 129cead3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129cead6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129cead9 jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceadb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129ceadd je 0x129ceaf0 */
  if (C.zf) goto L_129ceaf0;
  /* 129ceadf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceae2 jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceae4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceae7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceaea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 129ceaec jne 0x129ceac0 */
  if (!C.zf) goto L_129ceac0;
  /* 129ceaee mov edi, edi */
  EDI = (EDI);
L_129ceaf0:;
  /* 129ceaf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ceaf2 ret  */
  ESPCHK(0x129ceab0u, _esp0);
  ESP += 4; return;
  /* 129ceaf3 nop  */
  /* nop */
L_129ceaf4:;
  /* 129ceaf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129ceaf6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129ceaf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 129ceaf9 ret  */
  ESPCHK(0x129ceab0u, _esp0);
  ESP += 4; return;
  /* 129ceafa mov edi, edi */
  EDI = (EDI);
L_129ceafc:;
  /* 129ceafc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 129ceb02 je 0x129ceb18 */
  if (C.zf) goto L_129ceb18;
  /* 129ceb04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129ceb06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 129ceb07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceb09 jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceb0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129ceb0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129ceb0e je 0x129ceaf0 */
  if (C.zf) goto L_129ceaf0;
  /* 129ceb10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 129ceb16 je 0x129ceac0 */
  if (C.zf) goto L_129ceac0;
L_129ceb18:;
  /* 129ceb18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 129ceb1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceb1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceb20 jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceb22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129ceb24 je 0x129ceaf0 */
  if (C.zf) goto L_129ceaf0;
  /* 129ceb26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceb29 jne 0x129ceaf4 */
  if (!C.zf) goto L_129ceaf4;
  /* 129ceb2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 129ceb2d je 0x129ceaf0 */
  if (C.zf) goto L_129ceaf0;
  /* 129ceb2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceb32 jmp 0x129ceac0 */
  goto L_129ceac0;
}

/* FUN_1000eb40 @ 0x129ceb40 (62 bytes, 35 insns) */
void f_129ceb40(void) {
  FTRACE(0x129ceb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ceb40 push ebp */
  push32((uint32_t)(EBP));
  /* 129ceb41 mov ebp, esp */
  EBP = (ESP);
  /* 129ceb43 push esi */
  push32((uint32_t)(ESI));
  /* 129ceb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ceb46 push eax */
  push32((uint32_t)(EAX));
  /* 129ceb47 push eax */
  push32((uint32_t)(EAX));
  /* 129ceb48 push eax */
  push32((uint32_t)(EAX));
  /* 129ceb49 push eax */
  push32((uint32_t)(EAX));
  /* 129ceb4a push eax */
  push32((uint32_t)(EAX));
  /* 129ceb4b push eax */
  push32((uint32_t)(EAX));
  /* 129ceb4c push eax */
  push32((uint32_t)(EAX));
  /* 129ceb4d push eax */
  push32((uint32_t)(EAX));
  /* 129ceb4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ceb51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129ceb54:;
  /* 129ceb54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129ceb56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129ceb58 je 0x129ceb61 */
  if (C.zf) goto L_129ceb61;
  /* 129ceb5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 129ceb5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x129ceb5b");
  /* 129ceb5f jmp 0x129ceb54 */
  goto L_129ceb54;
L_129ceb61:;
  /* 129ceb61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 129ceb64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129ceb67 nop  */
  /* nop */
L_129ceb68:;
  /* 129ceb68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129ceb69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129ceb6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129ceb6d je 0x129ceb76 */
  if (C.zf) goto L_129ceb76;
  /* 129ceb6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129ceb70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x129ceb70");
  /* 129ceb74 jae 0x129ceb68 */
  if (!C.cf) goto L_129ceb68;
L_129ceb76:;
  /* 129ceb76 mov eax, ecx */
  EAX = (ECX);
  /* 129ceb78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceb7b pop esi */
  ESI = (pop32());
  /* 129ceb7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129ceb7d ret  */
  ESPCHK(0x129ceb40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x129ceb80 (56 bytes, 31 insns) */
void f_129ceb80(void) {
  FTRACE(0x129ceb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129ceb80 push ebp */
  push32((uint32_t)(EBP));
  /* 129ceb81 mov ebp, esp */
  EBP = (ESP);
  /* 129ceb83 push edi */
  push32((uint32_t)(EDI));
  /* 129ceb84 push esi */
  push32((uint32_t)(ESI));
  /* 129ceb85 push ebx */
  push32((uint32_t)(EBX));
  /* 129ceb86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129ceb89 jecxz 0x129cebb1 */
  x86_unimpl("jecxz @ 0x129ceb89");
  /* 129ceb8b mov ebx, ecx */
  EBX = (ECX);
  /* 129ceb8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 129ceb90 mov esi, edi */
  ESI = (EDI);
  /* 129ceb92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ceb94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 129ceb96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129ceb98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceb9a mov edi, esi */
  EDI = (ESI);
  /* 129ceb9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129ceb9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 129ceba1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 129ceba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ceba6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129ceba9 ja 0x129cebaf */
  if ((!C.cf&&!C.zf)) goto L_129cebaf;
  /* 129cebab je 0x129cebb1 */
  if (C.zf) goto L_129cebb1;
  /* 129cebad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129cebae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_129cebaf:;
  /* 129cebaf not ecx */
  ECX = (~(ECX));
L_129cebb1:;
  /* 129cebb1 mov eax, ecx */
  EAX = (ECX);
  /* 129cebb3 pop ebx */
  EBX = (pop32());
  /* 129cebb4 pop esi */
  ESI = (pop32());
  /* 129cebb5 pop edi */
  EDI = (pop32());
  /* 129cebb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cebb7 ret  */
  ESPCHK(0x129ceb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x129cebc0 (58 bytes, 32 insns) */
void f_129cebc0(void) {
  FTRACE(0x129cebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cebc1 mov ebp, esp */
  EBP = (ESP);
  /* 129cebc3 push esi */
  push32((uint32_t)(ESI));
  /* 129cebc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cebc6 push eax */
  push32((uint32_t)(EAX));
  /* 129cebc7 push eax */
  push32((uint32_t)(EAX));
  /* 129cebc8 push eax */
  push32((uint32_t)(EAX));
  /* 129cebc9 push eax */
  push32((uint32_t)(EAX));
  /* 129cebca push eax */
  push32((uint32_t)(EAX));
  /* 129cebcb push eax */
  push32((uint32_t)(EAX));
  /* 129cebcc push eax */
  push32((uint32_t)(EAX));
  /* 129cebcd push eax */
  push32((uint32_t)(EAX));
  /* 129cebce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129cebd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129cebd4:;
  /* 129cebd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129cebd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129cebd8 je 0x129cebe1 */
  if (C.zf) goto L_129cebe1;
  /* 129cebda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 129cebdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x129cebdb");
  /* 129cebdf jmp 0x129cebd4 */
  goto L_129cebd4;
L_129cebe1:;
  /* 129cebe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_129cebe4:;
  /* 129cebe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129cebe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 129cebe8 je 0x129cebf4 */
  if (C.zf) goto L_129cebf4;
  /* 129cebea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129cebeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x129cebeb");
  /* 129cebef jae 0x129cebe4 */
  if (!C.cf) goto L_129cebe4;
  /* 129cebf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_129cebf4:;
  /* 129cebf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cebf7 pop esi */
  ESI = (pop32());
  /* 129cebf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129cebf9 ret  */
  ESPCHK(0x129cebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec00 @ 0x129cec00 (512 bytes, 147 insns) */
void f_129cec00(void) {
  FTRACE(0x129cec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cec00 push ebp */
  push32((uint32_t)(EBP));
  /* 129cec01 mov ebp, esp */
  EBP = (ESP);
  /* 129cec03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cec06 cmp dword ptr [0x129ee71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cec0d jne 0x129cec32 */
  if (!C.zf) goto L_129cec32;
  /* 129cec0f call 0x129cf6d0 */
  push32(0x129cec14u); f_129cf6d0();
  /* 129cec14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cec16 je 0x129cec22 */
  if (C.zf) goto L_129cec22;
  /* 129cec18 mov eax, dword ptr [0x129f0264] */
  EAX = (r32((uint32_t)(0x129f0264)));
  /* 129cec1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cec20 jmp 0x129cec29 */
  goto L_129cec29;
L_129cec22:;
  /* 129cec22 mov dword ptr [ebp - 8], 0x129cf720 */
  w32((uint32_t)(EBP + -0x8), (0x129cf720u));
L_129cec29:;
  /* 129cec29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cec2c mov dword ptr [0x129ee71c], ecx */
  w32((uint32_t)(0x129ee71c), (ECX));
L_129cec32:;
  /* 129cec32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cec36 jne 0x129cec42 */
  if (!C.zf) goto L_129cec42;
  /* 129cec38 call 0x129cf520 */
  push32(0x129cec3du); f_129cf520();
  /* 129cec3d jmp 0x129ced0e */
  goto L_129ced0e;
L_129cec42:;
  /* 129cec42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cec45 mov dword ptr [0x129ee70c], edx */
  w32((uint32_t)(0x129ee70c), (EDX));
  /* 129cec4b cmp dword ptr [0x129ee70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cec52 je 0x129cec74 */
  if (C.zf) goto L_129cec74;
  /* 129cec54 mov eax, dword ptr [0x129ee70c] */
  EAX = (r32((uint32_t)(0x129ee70c)));
  /* 129cec59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cec5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cec5e je 0x129cec74 */
  if (C.zf) goto L_129cec74;
  /* 129cec60 push 0x129ee70c */
  push32((uint32_t)(0x129ee70cu));
  /* 129cec65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 129cec67 push 0x129eda90 */
  push32((uint32_t)(0x129eda90u));
  /* 129cec6c call 0x129cee00 */
  push32(0x129cec71u); f_129cee00();
  /* 129cec71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cec74:;
  /* 129cec74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cec77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cec7a mov dword ptr [0x129ee710], edx */
  w32((uint32_t)(0x129ee710), (EDX));
  /* 129cec80 cmp dword ptr [0x129ee710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cec87 je 0x129ceca9 */
  if (C.zf) goto L_129ceca9;
  /* 129cec89 mov eax, dword ptr [0x129ee710] */
  EAX = (r32((uint32_t)(0x129ee710)));
  /* 129cec8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cec91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cec93 je 0x129ceca9 */
  if (C.zf) goto L_129ceca9;
  /* 129cec95 push 0x129ee710 */
  push32((uint32_t)(0x129ee710u));
  /* 129cec9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 129cec9c push 0x129ed9d8 */
  push32((uint32_t)(0x129ed9d8u));
  /* 129ceca1 call 0x129cee00 */
  push32(0x129ceca6u); f_129cee00();
  /* 129ceca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129ceca9:;
  /* 129ceca9 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
  /* 129cecb3 cmp dword ptr [0x129ee70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cecba je 0x129ceced */
  if (C.zf) goto L_129ceced;
  /* 129cecbc mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cecc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129cecc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cecc7 je 0x129ceced */
  if (C.zf) goto L_129ceced;
  /* 129cecc9 cmp dword ptr [0x129ee710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cecd0 je 0x129cece6 */
  if (C.zf) goto L_129cece6;
  /* 129cecd2 mov ecx, dword ptr [0x129ee710] */
  ECX = (r32((uint32_t)(0x129ee710)));
  /* 129cecd8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129cecdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cecdd je 0x129cece6 */
  if (C.zf) goto L_129cece6;
  /* 129cecdf call 0x129cee90 */
  push32(0x129cece4u); f_129cee90();
  /* 129cece4 jmp 0x129ceceb */
  goto L_129ceceb;
L_129cece6:;
  /* 129cece6 call 0x129cf280 */
  push32(0x129cecebu); f_129cf280();
L_129ceceb:;
  /* 129ceceb jmp 0x129ced0e */
  goto L_129ced0e;
L_129ceced:;
  /* 129ceced cmp dword ptr [0x129ee710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cecf4 je 0x129ced09 */
  if (C.zf) goto L_129ced09;
  /* 129cecf6 mov eax, dword ptr [0x129ee710] */
  EAX = (r32((uint32_t)(0x129ee710)));
  /* 129cecfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cecfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129ced00 je 0x129ced09 */
  if (C.zf) goto L_129ced09;
  /* 129ced02 call 0x129cf420 */
  push32(0x129ced07u); f_129cf420();
  /* 129ced07 jmp 0x129ced0e */
  goto L_129ced0e;
L_129ced09:;
  /* 129ced09 call 0x129cf520 */
  push32(0x129ced0eu); f_129cf520();
L_129ced0e:;
  /* 129ced0e cmp dword ptr [0x129ee714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ced15 jne 0x129ced1e */
  if (!C.zf) goto L_129ced1e;
  /* 129ced17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ced19 jmp 0x129cedfc */
  goto L_129cedfc;
L_129ced1e:;
  /* 129ced1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129ced21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129ced27 push edx */
  push32((uint32_t)(EDX));
  /* 129ced28 call 0x129cf550 */
  push32(0x129ced2du); f_129cf550();
  /* 129ced2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ced30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129ced33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ced37 je 0x129ced4c */
  if (C.zf) goto L_129ced4c;
  /* 129ced39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ced3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129ced41 push eax */
  push32((uint32_t)(EAX));
  /* 129ced42 call dword ptr [0x129f0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0268))), 0x129ced48u);
  /* 129ced48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ced4a jne 0x129ced53 */
  if (!C.zf) goto L_129ced53;
L_129ced4c:;
  /* 129ced4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ced4e jmp 0x129cedfc */
  goto L_129cedfc;
L_129ced53:;
  /* 129ced53 push 1 */
  push32((uint32_t)(0x1u));
  /* 129ced55 mov ecx, dword ptr [0x129ee6fc] */
  ECX = (r32((uint32_t)(0x129ee6fc)));
  /* 129ced5b push ecx */
  push32((uint32_t)(ECX));
  /* 129ced5c call dword ptr [0x129f0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0278))), 0x129ced62u);
  /* 129ced62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129ced64 jne 0x129ced6d */
  if (!C.zf) goto L_129ced6d;
  /* 129ced66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129ced68 jmp 0x129cedfc */
  goto L_129cedfc;
L_129ced6d:;
  /* 129ced6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ced71 je 0x129ced98 */
  if (C.zf) goto L_129ced98;
  /* 129ced73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ced76 mov ax, word ptr [0x129ee6fc] */
  AX = (r16((uint32_t)(0x129ee6fc)));
  /* 129ced7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 129ced7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ced82 mov dx, word ptr [0x129ee718] */
  DX = (r16((uint32_t)(0x129ee718)));
  /* 129ced89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 129ced8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129ced90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 129ced94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_129ced98:;
  /* 129ced98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ced9c je 0x129cedf7 */
  if (C.zf) goto L_129cedf7;
  /* 129ced9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 129ceda0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129ceda3 push edx */
  push32((uint32_t)(EDX));
  /* 129ceda4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 129ceda9 mov eax, dword ptr [0x129ee6fc] */
  EAX = (r32((uint32_t)(0x129ee6fc)));
  /* 129cedae push eax */
  push32((uint32_t)(EAX));
  /* 129cedaf call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cedb5u);
  /* 129cedb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cedb7 jne 0x129cedbd */
  if (!C.zf) goto L_129cedbd;
  /* 129cedb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cedbb jmp 0x129cedfc */
  goto L_129cedfc;
L_129cedbd:;
  /* 129cedbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 129cedbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cedc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cedc5 push ecx */
  push32((uint32_t)(ECX));
  /* 129cedc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 129cedcb mov edx, dword ptr [0x129ee718] */
  EDX = (r32((uint32_t)(0x129ee718)));
  /* 129cedd1 push edx */
  push32((uint32_t)(EDX));
  /* 129cedd2 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cedd8u);
  /* 129cedd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cedda jne 0x129cede0 */
  if (!C.zf) goto L_129cede0;
  /* 129ceddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cedde jmp 0x129cedfc */
  goto L_129cedfc;
L_129cede0:;
  /* 129cede0 push 0xa */
  push32((uint32_t)(0xau));
  /* 129cede2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cede5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cedea push eax */
  push32((uint32_t)(EAX));
  /* 129cedeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cedee push ecx */
  push32((uint32_t)(ECX));
  /* 129cedef call 0x129c5960 */
  push32(0x129cedf4u); f_129c5960();
  /* 129cedf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cedf7:;
  /* 129cedf7 mov eax, 1 */
  EAX = (0x1u);
L_129cedfc:;
  /* 129cedfc mov esp, ebp */
  ESP = (EBP);
  /* 129cedfe pop ebp */
  EBP = (pop32());
  /* 129cedff ret  */
  ESPCHK(0x129cec00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x129cee00 (130 bytes, 47 insns) */
void f_129cee00(void) {
  FTRACE(0x129cee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cee00 push ebp */
  push32((uint32_t)(EBP));
  /* 129cee01 mov ebp, esp */
  EBP = (ESP);
  /* 129cee03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cee06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 129cee0d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_129cee14:;
  /* 129cee14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cee17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cee1a jg 0x129cee7e */
  if ((!C.zf&&C.sf==C.of)) goto L_129cee7e;
  /* 129cee1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cee20 je 0x129cee7e */
  if (C.zf) goto L_129cee7e;
  /* 129cee22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129cee25 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cee28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129cee29 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cee2b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129cee2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129cee30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cee33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cee36 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 129cee39 push eax */
  push32((uint32_t)(EAX));
  /* 129cee3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cee3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129cee3f push edx */
  push32((uint32_t)(EDX));
  /* 129cee40 call 0x129d14f0 */
  push32(0x129cee45u); f_129d14f0();
  /* 129cee45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cee48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129cee4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cee4f jne 0x129cee62 */
  if (!C.zf) goto L_129cee62;
  /* 129cee51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cee54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cee57 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 129cee5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129cee5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129cee60 jmp 0x129cee7c */
  goto L_129cee7c;
L_129cee62:;
  /* 129cee62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cee66 jge 0x129cee73 */
  if ((C.sf==C.of)) goto L_129cee73;
  /* 129cee68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cee6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cee6e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 129cee71 jmp 0x129cee7c */
  goto L_129cee7c;
L_129cee73:;
  /* 129cee73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cee76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cee79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129cee7c:;
  /* 129cee7c jmp 0x129cee14 */
  goto L_129cee14;
L_129cee7e:;
  /* 129cee7e mov esp, ebp */
  ESP = (EBP);
  /* 129cee80 pop ebp */
  EBP = (pop32());
  /* 129cee81 ret  */
  ESPCHK(0x129cee00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee90 @ 0x129cee90 (186 bytes, 50 insns) */
void f_129cee90(void) {
  FTRACE(0x129cee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cee90 push ebp */
  push32((uint32_t)(EBP));
  /* 129cee91 mov ebp, esp */
  EBP = (ESP);
  /* 129cee93 push ecx */
  push32((uint32_t)(ECX));
  /* 129cee94 mov eax, dword ptr [0x129ee70c] */
  EAX = (r32((uint32_t)(0x129ee70c)));
  /* 129cee99 push eax */
  push32((uint32_t)(EAX));
  /* 129cee9a call 0x129c5c50 */
  push32(0x129cee9fu); f_129c5c50();
  /* 129cee9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ceea4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ceea7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 129ceeaa mov dword ptr [0x129ee708], ecx */
  w32((uint32_t)(0x129ee708), (ECX));
  /* 129ceeb0 mov edx, dword ptr [0x129ee710] */
  EDX = (r32((uint32_t)(0x129ee710)));
  /* 129ceeb6 push edx */
  push32((uint32_t)(EDX));
  /* 129ceeb7 call 0x129c5c50 */
  push32(0x129ceebcu); f_129c5c50();
  /* 129ceebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129ceec1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ceec4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 129ceec7 mov dword ptr [0x129ee700], ecx */
  w32((uint32_t)(0x129ee700), (ECX));
  /* 129ceecd mov dword ptr [0x129ee6fc], 0 */
  w32((uint32_t)(0x129ee6fc), (0x0u));
  /* 129ceed7 cmp dword ptr [0x129ee708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129ceede je 0x129ceee9 */
  if (C.zf) goto L_129ceee9;
  /* 129ceee0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 129ceee7 jmp 0x129ceefb */
  goto L_129ceefb;
L_129ceee9:;
  /* 129ceee9 mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129ceeef push edx */
  push32((uint32_t)(EDX));
  /* 129ceef0 call 0x129cf930 */
  push32(0x129ceef5u); f_129cf930();
  /* 129ceef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129ceef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129ceefb:;
  /* 129ceefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129ceefe mov dword ptr [0x129ee704], eax */
  w32((uint32_t)(0x129ee704), (EAX));
  /* 129cef03 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cef05 push 0x129cef50 */
  push32((uint32_t)(0x129cef50u));
  /* 129cef0a call dword ptr [0x129f026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f026c))), 0x129cef10u);
  /* 129cef10 mov ecx, dword ptr [0x129ee714] */
  ECX = (r32((uint32_t)(0x129ee714)));
  /* 129cef16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 129cef1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cef1e je 0x129cef3c */
  if (C.zf) goto L_129cef3c;
  /* 129cef20 mov edx, dword ptr [0x129ee714] */
  EDX = (r32((uint32_t)(0x129ee714)));
  /* 129cef26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 129cef2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cef2e je 0x129cef3c */
  if (C.zf) goto L_129cef3c;
  /* 129cef30 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cef35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 129cef38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cef3a jne 0x129cef46 */
  if (!C.zf) goto L_129cef46;
L_129cef3c:;
  /* 129cef3c mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
L_129cef46:;
  /* 129cef46 mov esp, ebp */
  ESP = (EBP);
  /* 129cef48 pop ebp */
  EBP = (pop32());
  /* 129cef49 ret  */
  ESPCHK(0x129cee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x129cef50 (804 bytes, 220 insns) */
void f_129cef50(void) {
  FTRACE(0x129cef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cef50 push ebp */
  push32((uint32_t)(EBP));
  /* 129cef51 mov ebp, esp */
  EBP = (ESP);
  /* 129cef53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cef56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cef59 push eax */
  push32((uint32_t)(EAX));
  /* 129cef5a call 0x129cf8b0 */
  push32(0x129cef5fu); f_129cf8b0();
  /* 129cef5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cef62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 129cef65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 129cef67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cef6a push ecx */
  push32((uint32_t)(ECX));
  /* 129cef6b mov edx, dword ptr [0x129ee700] */
  EDX = (r32((uint32_t)(0x129ee700)));
  /* 129cef71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cef73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cef75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 129cef7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cef81 push edx */
  push32((uint32_t)(EDX));
  /* 129cef82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cef85 push eax */
  push32((uint32_t)(EAX));
  /* 129cef86 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cef8cu);
  /* 129cef8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cef8e jne 0x129cefa4 */
  if (!C.zf) goto L_129cefa4;
  /* 129cef90 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
  /* 129cef9a mov eax, 1 */
  EAX = (0x1u);
  /* 129cef9f jmp 0x129cf26e */
  goto L_129cf26e;
L_129cefa4:;
  /* 129cefa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cefa7 push ecx */
  push32((uint32_t)(ECX));
  /* 129cefa8 mov edx, dword ptr [0x129ee710] */
  EDX = (r32((uint32_t)(0x129ee710)));
  /* 129cefae push edx */
  push32((uint32_t)(EDX));
  /* 129cefaf call 0x129d14f0 */
  push32(0x129cefb4u); f_129d14f0();
  /* 129cefb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cefb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cefb9 jne 0x129cf0df */
  if (!C.zf) goto L_129cf0df;
  /* 129cefbf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 129cefc1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 129cefc4 push eax */
  push32((uint32_t)(EAX));
  /* 129cefc5 mov ecx, dword ptr [0x129ee708] */
  ECX = (r32((uint32_t)(0x129ee708)));
  /* 129cefcb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cefcd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cefcf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 129cefd5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cefdb push ecx */
  push32((uint32_t)(ECX));
  /* 129cefdc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cefdf push edx */
  push32((uint32_t)(EDX));
  /* 129cefe0 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cefe6u);
  /* 129cefe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cefe8 jne 0x129ceffe */
  if (!C.zf) goto L_129ceffe;
  /* 129cefea mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
  /* 129ceff4 mov eax, 1 */
  EAX = (0x1u);
  /* 129ceff9 jmp 0x129cf26e */
  goto L_129cf26e;
L_129ceffe:;
  /* 129ceffe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 129cf001 push eax */
  push32((uint32_t)(EAX));
  /* 129cf002 mov ecx, dword ptr [0x129ee70c] */
  ECX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf008 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf009 call 0x129d14f0 */
  push32(0x129cf00eu); f_129d14f0();
  /* 129cf00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf013 jne 0x129cf040 */
  if (!C.zf) goto L_129cf040;
  /* 129cf015 mov edx, dword ptr [0x129ee714] */
  EDX = (r32((uint32_t)(0x129ee714)));
  /* 129cf01b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 129cf021 mov dword ptr [0x129ee714], edx */
  w32((uint32_t)(0x129ee714), (EDX));
  /* 129cf027 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf02a mov dword ptr [0x129ee718], eax */
  w32((uint32_t)(0x129ee718), (EAX));
  /* 129cf02f mov ecx, dword ptr [0x129ee718] */
  ECX = (r32((uint32_t)(0x129ee718)));
  /* 129cf035 mov dword ptr [0x129ee6fc], ecx */
  w32((uint32_t)(0x129ee6fc), (ECX));
  /* 129cf03b jmp 0x129cf0df */
  goto L_129cf0df;
L_129cf040:;
  /* 129cf040 mov edx, dword ptr [0x129ee714] */
  EDX = (r32((uint32_t)(0x129ee714)));
  /* 129cf046 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 129cf049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cf04b jne 0x129cf0df */
  if (!C.zf) goto L_129cf0df;
  /* 129cf051 cmp dword ptr [0x129ee704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf058 je 0x129cf0ad */
  if (C.zf) goto L_129cf0ad;
  /* 129cf05a mov eax, dword ptr [0x129ee704] */
  EAX = (r32((uint32_t)(0x129ee704)));
  /* 129cf05f push eax */
  push32((uint32_t)(EAX));
  /* 129cf060 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cf063 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf064 mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf06a push edx */
  push32((uint32_t)(EDX));
  /* 129cf06b call 0x129d15c0 */
  push32(0x129cf070u); f_129d15c0();
  /* 129cf070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf075 jne 0x129cf0ad */
  if (!C.zf) goto L_129cf0ad;
  /* 129cf077 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf07c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 129cf07e mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
  /* 129cf083 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf086 mov dword ptr [0x129ee718], ecx */
  w32((uint32_t)(0x129ee718), (ECX));
  /* 129cf08c mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf092 push edx */
  push32((uint32_t)(EDX));
  /* 129cf093 call 0x129c5c50 */
  push32(0x129cf098u); f_129c5c50();
  /* 129cf098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf09b cmp eax, dword ptr [0x129ee704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ee704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf0a1 jne 0x129cf0ab */
  if (!C.zf) goto L_129cf0ab;
  /* 129cf0a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf0a6 mov dword ptr [0x129ee6fc], eax */
  w32((uint32_t)(0x129ee6fc), (EAX));
L_129cf0ab:;
  /* 129cf0ab jmp 0x129cf0df */
  goto L_129cf0df;
L_129cf0ad:;
  /* 129cf0ad mov ecx, dword ptr [0x129ee714] */
  ECX = (r32((uint32_t)(0x129ee714)));
  /* 129cf0b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129cf0b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cf0b8 jne 0x129cf0df */
  if (!C.zf) goto L_129cf0df;
  /* 129cf0ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf0bd push edx */
  push32((uint32_t)(EDX));
  /* 129cf0be call 0x129cf5f0 */
  push32(0x129cf0c3u); f_129cf5f0();
  /* 129cf0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf0c8 je 0x129cf0df */
  if (C.zf) goto L_129cf0df;
  /* 129cf0ca mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf0cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 129cf0d1 mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
  /* 129cf0d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf0d9 mov dword ptr [0x129ee718], ecx */
  w32((uint32_t)(0x129ee718), (ECX));
L_129cf0df:;
  /* 129cf0df mov edx, dword ptr [0x129ee714] */
  EDX = (r32((uint32_t)(0x129ee714)));
  /* 129cf0e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 129cf0eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf0f1 je 0x129cf261 */
  if (C.zf) goto L_129cf261;
  /* 129cf0f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 129cf0f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 129cf0fc push eax */
  push32((uint32_t)(EAX));
  /* 129cf0fd mov ecx, dword ptr [0x129ee708] */
  ECX = (r32((uint32_t)(0x129ee708)));
  /* 129cf103 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cf105 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf107 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 129cf10d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf113 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf114 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf117 push edx */
  push32((uint32_t)(EDX));
  /* 129cf118 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cf11eu);
  /* 129cf11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf120 jne 0x129cf136 */
  if (!C.zf) goto L_129cf136;
  /* 129cf122 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
  /* 129cf12c mov eax, 1 */
  EAX = (0x1u);
  /* 129cf131 jmp 0x129cf26e */
  goto L_129cf26e;
L_129cf136:;
  /* 129cf136 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 129cf139 push eax */
  push32((uint32_t)(EAX));
  /* 129cf13a mov ecx, dword ptr [0x129ee70c] */
  ECX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf140 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf141 call 0x129d14f0 */
  push32(0x129cf146u); f_129d14f0();
  /* 129cf146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf14b jne 0x129cf200 */
  if (!C.zf) goto L_129cf200;
  /* 129cf151 mov edx, dword ptr [0x129ee714] */
  EDX = (r32((uint32_t)(0x129ee714)));
  /* 129cf157 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 129cf15a mov dword ptr [0x129ee714], edx */
  w32((uint32_t)(0x129ee714), (EDX));
  /* 129cf160 cmp dword ptr [0x129ee708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf167 je 0x129cf18a */
  if (C.zf) goto L_129cf18a;
  /* 129cf169 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf16e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 129cf171 mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
  /* 129cf176 cmp dword ptr [0x129ee6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf17d jne 0x129cf188 */
  if (!C.zf) goto L_129cf188;
  /* 129cf17f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf182 mov dword ptr [0x129ee6fc], ecx */
  w32((uint32_t)(0x129ee6fc), (ECX));
L_129cf188:;
  /* 129cf188 jmp 0x129cf1fe */
  goto L_129cf1fe;
L_129cf18a:;
  /* 129cf18a cmp dword ptr [0x129ee704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf191 je 0x129cf1df */
  if (C.zf) goto L_129cf1df;
  /* 129cf193 mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf199 push edx */
  push32((uint32_t)(EDX));
  /* 129cf19a call 0x129c5c50 */
  push32(0x129cf19fu); f_129c5c50();
  /* 129cf19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf1a2 cmp eax, dword ptr [0x129ee704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ee704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf1a8 jne 0x129cf1df */
  if (!C.zf) goto L_129cf1df;
  /* 129cf1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 129cf1ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf1af push eax */
  push32((uint32_t)(EAX));
  /* 129cf1b0 call 0x129cf640 */
  push32(0x129cf1b5u); f_129cf640();
  /* 129cf1b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf1ba je 0x129cf1dd */
  if (C.zf) goto L_129cf1dd;
  /* 129cf1bc mov ecx, dword ptr [0x129ee714] */
  ECX = (r32((uint32_t)(0x129ee714)));
  /* 129cf1c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 129cf1c5 mov dword ptr [0x129ee714], ecx */
  w32((uint32_t)(0x129ee714), (ECX));
  /* 129cf1cb cmp dword ptr [0x129ee6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf1d2 jne 0x129cf1dd */
  if (!C.zf) goto L_129cf1dd;
  /* 129cf1d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf1d7 mov dword ptr [0x129ee6fc], edx */
  w32((uint32_t)(0x129ee6fc), (EDX));
L_129cf1dd:;
  /* 129cf1dd jmp 0x129cf1fe */
  goto L_129cf1fe;
L_129cf1df:;
  /* 129cf1df mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf1e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 129cf1e7 mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
  /* 129cf1ec cmp dword ptr [0x129ee6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf1f3 jne 0x129cf1fe */
  if (!C.zf) goto L_129cf1fe;
  /* 129cf1f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf1f8 mov dword ptr [0x129ee6fc], ecx */
  w32((uint32_t)(0x129ee6fc), (ECX));
L_129cf1fe:;
  /* 129cf1fe jmp 0x129cf261 */
  goto L_129cf261;
L_129cf200:;
  /* 129cf200 cmp dword ptr [0x129ee708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf207 jne 0x129cf261 */
  if (!C.zf) goto L_129cf261;
  /* 129cf209 cmp dword ptr [0x129ee704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf210 je 0x129cf261 */
  if (C.zf) goto L_129cf261;
  /* 129cf212 mov edx, dword ptr [0x129ee704] */
  EDX = (r32((uint32_t)(0x129ee704)));
  /* 129cf218 push edx */
  push32((uint32_t)(EDX));
  /* 129cf219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 129cf21c push eax */
  push32((uint32_t)(EAX));
  /* 129cf21d mov ecx, dword ptr [0x129ee70c] */
  ECX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf223 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf224 call 0x129d15c0 */
  push32(0x129cf229u); f_129d15c0();
  /* 129cf229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf22e jne 0x129cf261 */
  if (!C.zf) goto L_129cf261;
  /* 129cf230 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cf232 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf235 push edx */
  push32((uint32_t)(EDX));
  /* 129cf236 call 0x129cf640 */
  push32(0x129cf23bu); f_129cf640();
  /* 129cf23b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf240 je 0x129cf261 */
  if (C.zf) goto L_129cf261;
  /* 129cf242 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf247 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 129cf24a mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
  /* 129cf24f cmp dword ptr [0x129ee6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf256 jne 0x129cf261 */
  if (!C.zf) goto L_129cf261;
  /* 129cf258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf25b mov dword ptr [0x129ee6fc], ecx */
  w32((uint32_t)(0x129ee6fc), (ECX));
L_129cf261:;
  /* 129cf261 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129cf269 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cf26b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf26d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_129cf26e:;
  /* 129cf26e mov esp, ebp */
  ESP = (EBP);
  /* 129cf270 pop ebp */
  EBP = (pop32());
  /* 129cf271 ret 4 */
  ESPCHK(0x129cef50u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f280 @ 0x129cf280 (116 bytes, 33 insns) */
void f_129cf280(void) {
  FTRACE(0x129cf280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf280 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf281 mov ebp, esp */
  EBP = (ESP);
  /* 129cf283 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf284 mov eax, dword ptr [0x129ee70c] */
  EAX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf289 push eax */
  push32((uint32_t)(EAX));
  /* 129cf28a call 0x129c5c50 */
  push32(0x129cf28fu); f_129c5c50();
  /* 129cf28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129cf294 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf297 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 129cf29a mov dword ptr [0x129ee708], ecx */
  w32((uint32_t)(0x129ee708), (ECX));
  /* 129cf2a0 cmp dword ptr [0x129ee708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf2a7 je 0x129cf2b2 */
  if (C.zf) goto L_129cf2b2;
  /* 129cf2a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 129cf2b0 jmp 0x129cf2c4 */
  goto L_129cf2c4;
L_129cf2b2:;
  /* 129cf2b2 mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf2b8 push edx */
  push32((uint32_t)(EDX));
  /* 129cf2b9 call 0x129cf930 */
  push32(0x129cf2beu); f_129cf930();
  /* 129cf2be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129cf2c4:;
  /* 129cf2c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cf2c7 mov dword ptr [0x129ee704], eax */
  w32((uint32_t)(0x129ee704), (EAX));
  /* 129cf2cc push 1 */
  push32((uint32_t)(0x1u));
  /* 129cf2ce push 0x129cf300 */
  push32((uint32_t)(0x129cf300u));
  /* 129cf2d3 call dword ptr [0x129f026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f026c))), 0x129cf2d9u);
  /* 129cf2d9 mov ecx, dword ptr [0x129ee714] */
  ECX = (r32((uint32_t)(0x129ee714)));
  /* 129cf2df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 129cf2e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cf2e4 jne 0x129cf2f0 */
  if (!C.zf) goto L_129cf2f0;
  /* 129cf2e6 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
L_129cf2f0:;
  /* 129cf2f0 mov esp, ebp */
  ESP = (EBP);
  /* 129cf2f2 pop ebp */
  EBP = (pop32());
  /* 129cf2f3 ret  */
  ESPCHK(0x129cf280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f300 @ 0x129cf300 (287 bytes, 86 insns) */
void f_129cf300(void) {
  FTRACE(0x129cf300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf300 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf301 mov ebp, esp */
  EBP = (ESP);
  /* 129cf303 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf309 push eax */
  push32((uint32_t)(EAX));
  /* 129cf30a call 0x129cf8b0 */
  push32(0x129cf30fu); f_129cf8b0();
  /* 129cf30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf312 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 129cf315 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 129cf317 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cf31a push ecx */
  push32((uint32_t)(ECX));
  /* 129cf31b mov edx, dword ptr [0x129ee708] */
  EDX = (r32((uint32_t)(0x129ee708)));
  /* 129cf321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cf323 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf325 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 129cf32b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf331 push edx */
  push32((uint32_t)(EDX));
  /* 129cf332 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf335 push eax */
  push32((uint32_t)(EAX));
  /* 129cf336 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cf33cu);
  /* 129cf33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf33e jne 0x129cf354 */
  if (!C.zf) goto L_129cf354;
  /* 129cf340 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
  /* 129cf34a mov eax, 1 */
  EAX = (0x1u);
  /* 129cf34f jmp 0x129cf419 */
  goto L_129cf419;
L_129cf354:;
  /* 129cf354 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cf357 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf358 mov edx, dword ptr [0x129ee70c] */
  EDX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf35e push edx */
  push32((uint32_t)(EDX));
  /* 129cf35f call 0x129d14f0 */
  push32(0x129cf364u); f_129d14f0();
  /* 129cf364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf369 jne 0x129cf3a9 */
  if (!C.zf) goto L_129cf3a9;
  /* 129cf36b cmp dword ptr [0x129ee708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf372 jne 0x129cf386 */
  if (!C.zf) goto L_129cf386;
  /* 129cf374 push 1 */
  push32((uint32_t)(0x1u));
  /* 129cf376 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf379 push eax */
  push32((uint32_t)(EAX));
  /* 129cf37a call 0x129cf640 */
  push32(0x129cf37fu); f_129cf640();
  /* 129cf37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf384 je 0x129cf3a7 */
  if (C.zf) goto L_129cf3a7;
L_129cf386:;
  /* 129cf386 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf389 mov dword ptr [0x129ee718], ecx */
  w32((uint32_t)(0x129ee718), (ECX));
  /* 129cf38f mov edx, dword ptr [0x129ee718] */
  EDX = (r32((uint32_t)(0x129ee718)));
  /* 129cf395 mov dword ptr [0x129ee6fc], edx */
  w32((uint32_t)(0x129ee6fc), (EDX));
  /* 129cf39b mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf3a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 129cf3a2 mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
L_129cf3a7:;
  /* 129cf3a7 jmp 0x129cf40c */
  goto L_129cf40c;
L_129cf3a9:;
  /* 129cf3a9 cmp dword ptr [0x129ee708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf3b0 jne 0x129cf40c */
  if (!C.zf) goto L_129cf40c;
  /* 129cf3b2 cmp dword ptr [0x129ee704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf3b9 je 0x129cf40c */
  if (C.zf) goto L_129cf40c;
  /* 129cf3bb mov ecx, dword ptr [0x129ee704] */
  ECX = (r32((uint32_t)(0x129ee704)));
  /* 129cf3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf3c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 129cf3c5 push edx */
  push32((uint32_t)(EDX));
  /* 129cf3c6 mov eax, dword ptr [0x129ee70c] */
  EAX = (r32((uint32_t)(0x129ee70c)));
  /* 129cf3cb push eax */
  push32((uint32_t)(EAX));
  /* 129cf3cc call 0x129d15c0 */
  push32(0x129cf3d1u); f_129d15c0();
  /* 129cf3d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf3d6 jne 0x129cf40c */
  if (!C.zf) goto L_129cf40c;
  /* 129cf3d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129cf3da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf3dd push ecx */
  push32((uint32_t)(ECX));
  /* 129cf3de call 0x129cf640 */
  push32(0x129cf3e3u); f_129cf640();
  /* 129cf3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf3e8 je 0x129cf40c */
  if (C.zf) goto L_129cf40c;
  /* 129cf3ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf3ed mov dword ptr [0x129ee718], edx */
  w32((uint32_t)(0x129ee718), (EDX));
  /* 129cf3f3 mov eax, dword ptr [0x129ee718] */
  EAX = (r32((uint32_t)(0x129ee718)));
  /* 129cf3f8 mov dword ptr [0x129ee6fc], eax */
  w32((uint32_t)(0x129ee6fc), (EAX));
  /* 129cf3fd mov ecx, dword ptr [0x129ee714] */
  ECX = (r32((uint32_t)(0x129ee714)));
  /* 129cf403 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 129cf406 mov dword ptr [0x129ee714], ecx */
  w32((uint32_t)(0x129ee714), (ECX));
L_129cf40c:;
  /* 129cf40c mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129cf414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cf416 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf418 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_129cf419:;
  /* 129cf419 mov esp, ebp */
  ESP = (EBP);
  /* 129cf41b pop ebp */
  EBP = (pop32());
  /* 129cf41c ret 4 */
  ESPCHK(0x129cf300u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f420 @ 0x129cf420 (69 bytes, 20 insns) */
void f_129cf420(void) {
  FTRACE(0x129cf420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf420 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf421 mov ebp, esp */
  EBP = (ESP);
  /* 129cf423 mov eax, dword ptr [0x129ee710] */
  EAX = (r32((uint32_t)(0x129ee710)));
  /* 129cf428 push eax */
  push32((uint32_t)(EAX));
  /* 129cf429 call 0x129c5c50 */
  push32(0x129cf42eu); f_129c5c50();
  /* 129cf42e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129cf433 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf436 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 129cf439 mov dword ptr [0x129ee700], ecx */
  w32((uint32_t)(0x129ee700), (ECX));
  /* 129cf43f push 1 */
  push32((uint32_t)(0x1u));
  /* 129cf441 push 0x129cf470 */
  push32((uint32_t)(0x129cf470u));
  /* 129cf446 call dword ptr [0x129f026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f026c))), 0x129cf44cu);
  /* 129cf44c mov edx, dword ptr [0x129ee714] */
  EDX = (r32((uint32_t)(0x129ee714)));
  /* 129cf452 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129cf455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129cf457 jne 0x129cf463 */
  if (!C.zf) goto L_129cf463;
  /* 129cf459 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
L_129cf463:;
  /* 129cf463 pop ebp */
  EBP = (pop32());
  /* 129cf464 ret  */
  ESPCHK(0x129cf420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x129cf470 (172 bytes, 54 insns) */
void f_129cf470(void) {
  FTRACE(0x129cf470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf470 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf471 mov ebp, esp */
  EBP = (ESP);
  /* 129cf473 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf479 push eax */
  push32((uint32_t)(EAX));
  /* 129cf47a call 0x129cf8b0 */
  push32(0x129cf47fu); f_129cf8b0();
  /* 129cf47f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf482 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 129cf485 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 129cf487 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cf48a push ecx */
  push32((uint32_t)(ECX));
  /* 129cf48b mov edx, dword ptr [0x129ee700] */
  EDX = (r32((uint32_t)(0x129ee700)));
  /* 129cf491 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cf493 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf495 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 129cf49b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf4a1 push edx */
  push32((uint32_t)(EDX));
  /* 129cf4a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf4a5 push eax */
  push32((uint32_t)(EAX));
  /* 129cf4a6 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cf4acu);
  /* 129cf4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf4ae jne 0x129cf4c1 */
  if (!C.zf) goto L_129cf4c1;
  /* 129cf4b0 mov dword ptr [0x129ee714], 0 */
  w32((uint32_t)(0x129ee714), (0x0u));
  /* 129cf4ba mov eax, 1 */
  EAX = (0x1u);
  /* 129cf4bf jmp 0x129cf516 */
  goto L_129cf516;
L_129cf4c1:;
  /* 129cf4c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 129cf4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 129cf4c5 mov edx, dword ptr [0x129ee710] */
  EDX = (r32((uint32_t)(0x129ee710)));
  /* 129cf4cb push edx */
  push32((uint32_t)(EDX));
  /* 129cf4cc call 0x129d14f0 */
  push32(0x129cf4d1u); f_129d14f0();
  /* 129cf4d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf4d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf4d6 jne 0x129cf509 */
  if (!C.zf) goto L_129cf509;
  /* 129cf4d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf4db push eax */
  push32((uint32_t)(EAX));
  /* 129cf4dc call 0x129cf5f0 */
  push32(0x129cf4e1u); f_129cf5f0();
  /* 129cf4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf4e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf4e6 je 0x129cf509 */
  if (C.zf) goto L_129cf509;
  /* 129cf4e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 129cf4eb mov dword ptr [0x129ee718], ecx */
  w32((uint32_t)(0x129ee718), (ECX));
  /* 129cf4f1 mov edx, dword ptr [0x129ee718] */
  EDX = (r32((uint32_t)(0x129ee718)));
  /* 129cf4f7 mov dword ptr [0x129ee6fc], edx */
  w32((uint32_t)(0x129ee6fc), (EDX));
  /* 129cf4fd mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf502 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 129cf504 mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
L_129cf509:;
  /* 129cf509 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf50e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129cf511 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129cf513 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf515 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_129cf516:;
  /* 129cf516 mov esp, ebp */
  ESP = (EBP);
  /* 129cf518 pop ebp */
  EBP = (pop32());
  /* 129cf519 ret 4 */
  ESPCHK(0x129cf470u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f520 @ 0x129cf520 (43 bytes, 11 insns) */
void f_129cf520(void) {
  FTRACE(0x129cf520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf520 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf521 mov ebp, esp */
  EBP = (ESP);
  /* 129cf523 mov eax, dword ptr [0x129ee714] */
  EAX = (r32((uint32_t)(0x129ee714)));
  /* 129cf528 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 129cf52d mov dword ptr [0x129ee714], eax */
  w32((uint32_t)(0x129ee714), (EAX));
  /* 129cf532 call dword ptr [0x129f025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f025c))), 0x129cf538u);
  /* 129cf538 mov dword ptr [0x129ee718], eax */
  w32((uint32_t)(0x129ee718), (EAX));
  /* 129cf53d mov ecx, dword ptr [0x129ee718] */
  ECX = (r32((uint32_t)(0x129ee718)));
  /* 129cf543 mov dword ptr [0x129ee6fc], ecx */
  w32((uint32_t)(0x129ee6fc), (ECX));
  /* 129cf549 pop ebp */
  EBP = (pop32());
  /* 129cf54a ret  */
  ESPCHK(0x129cf520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x129cf550 (155 bytes, 57 insns) */
void f_129cf550(void) {
  FTRACE(0x129cf550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf550 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf551 mov ebp, esp */
  EBP = (ESP);
  /* 129cf553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf55a je 0x129cf57b */
  if (C.zf) goto L_129cf57b;
  /* 129cf55c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf55f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129cf562 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129cf564 je 0x129cf57b */
  if (C.zf) goto L_129cf57b;
  /* 129cf566 push 0x129ea6c4 */
  push32((uint32_t)(0x129ea6c4u));
  /* 129cf56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf56e push edx */
  push32((uint32_t)(EDX));
  /* 129cf56f call 0x129ceab0 */
  push32(0x129cf574u); f_129ceab0();
  /* 129cf574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf579 jne 0x129cf5a3 */
  if (!C.zf) goto L_129cf5a3;
L_129cf57b:;
  /* 129cf57b push 8 */
  push32((uint32_t)(0x8u));
  /* 129cf57d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 129cf580 push eax */
  push32((uint32_t)(EAX));
  /* 129cf581 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 129cf586 mov ecx, dword ptr [0x129ee718] */
  ECX = (r32((uint32_t)(0x129ee718)));
  /* 129cf58c push ecx */
  push32((uint32_t)(ECX));
  /* 129cf58d call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cf593u);
  /* 129cf593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf595 jne 0x129cf59b */
  if (!C.zf) goto L_129cf59b;
  /* 129cf597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cf599 jmp 0x129cf5e7 */
  goto L_129cf5e7;
L_129cf59b:;
  /* 129cf59b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 129cf59e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129cf5a1 jmp 0x129cf5db */
  goto L_129cf5db;
L_129cf5a3:;
  /* 129cf5a3 push 0x129ea6c0 */
  push32((uint32_t)(0x129ea6c0u));
  /* 129cf5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf5ab push eax */
  push32((uint32_t)(EAX));
  /* 129cf5ac call 0x129ceab0 */
  push32(0x129cf5b1u); f_129ceab0();
  /* 129cf5b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf5b6 jne 0x129cf5db */
  if (!C.zf) goto L_129cf5db;
  /* 129cf5b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 129cf5ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 129cf5bd push ecx */
  push32((uint32_t)(ECX));
  /* 129cf5be push 0xb */
  push32((uint32_t)(0xbu));
  /* 129cf5c0 mov edx, dword ptr [0x129ee718] */
  EDX = (r32((uint32_t)(0x129ee718)));
  /* 129cf5c6 push edx */
  push32((uint32_t)(EDX));
  /* 129cf5c7 call dword ptr [0x129ee71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee71c))), 0x129cf5cdu);
  /* 129cf5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129cf5cf jne 0x129cf5d5 */
  if (!C.zf) goto L_129cf5d5;
  /* 129cf5d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cf5d3 jmp 0x129cf5e7 */
  goto L_129cf5e7;
L_129cf5d5:;
  /* 129cf5d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 129cf5d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129cf5db:;
  /* 129cf5db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129cf5de push ecx */
  push32((uint32_t)(ECX));
  /* 129cf5df call 0x129d16d0 */
  push32(0x129cf5e4u); f_129d16d0();
  /* 129cf5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129cf5e7:;
  /* 129cf5e7 mov esp, ebp */
  ESP = (EBP);
  /* 129cf5e9 pop ebp */
  EBP = (pop32());
  /* 129cf5ea ret  */
  ESPCHK(0x129cf550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x129cf5f0 (79 bytes, 26 insns) */
void f_129cf5f0(void) {
  FTRACE(0x129cf5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129cf5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129cf5f1 mov ebp, esp */
  EBP = (ESP);
  /* 129cf5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129cf5f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 129cf5fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 129cf5fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129cf605 jmp 0x129cf610 */
  goto L_129cf610;
L_129cf607:;
  /* 129cf607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cf60a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129cf60d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129cf610:;
  /* 129cf610 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf614 jae 0x129cf636 */
  if (!C.cf) goto L_129cf636;
  /* 129cf616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129cf619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129cf61f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129cf622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129cf624 mov cx, word ptr [eax*2 + 0x129ed9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x129ed9c4)));
  /* 129cf62c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129cf62e jne 0x129cf634 */
  if (!C.zf) goto L_129cf634;
  /* 129cf630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129cf632 jmp 0x129cf63b */
  goto L_129cf63b;
L_129cf634:;
  /* 129cf634 jmp 0x129cf607 */
  goto L_129cf607;
L_129cf636:;
  /* 129cf636 mov eax, 1 */
  EAX = (0x1u);
L_129cf63b:;
  /* 129cf63b mov esp, ebp */
  ESP = (EBP);
  /* 129cf63d pop ebp */
  EBP = (pop32());
  /* 129cf63e ret  */
  ESPCHK(0x129cf5f0u, _esp0);
  ESP += 4; return;
}

