#include "recomp.h"

/* FUN_10006b50 @ 0x12c06b50 (10 bytes, 5 insns) */
void f_12c06b50(void) {
  FTRACE(0x12c06b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06b51 mov ebp, esp */
  EBP = (ESP);
  /* 12c06b53 mov eax, dword ptr [0x12c2e67c] */
  EAX = (r32((uint32_t)(0x12c2e67c)));
  /* 12c06b58 pop ebp */
  EBP = (pop32());
  /* 12c06b59 ret  */
  ESPCHK(0x12c06b50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12c06b60 (45 bytes, 19 insns) */
void f_12c06b60(void) {
  FTRACE(0x12c06b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06b61 mov ebp, esp */
  EBP = (ESP);
  /* 12c06b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06b64 mov eax, dword ptr [0x12c2e67c] */
  EAX = (r32((uint32_t)(0x12c2e67c)));
  /* 12c06b69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06b6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06b70 je 0x12c06b80 */
  if (C.zf) goto L_12c06b80;
  /* 12c06b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06b75 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06b76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12c06b79u);
  /* 12c06b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c06b7e jne 0x12c06b84 */
  if (!C.zf) goto L_12c06b84;
L_12c06b80:;
  /* 12c06b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06b82 jmp 0x12c06b89 */
  goto L_12c06b89;
L_12c06b84:;
  /* 12c06b84 mov eax, 1 */
  EAX = (0x1u);
L_12c06b89:;
  /* 12c06b89 mov esp, ebp */
  ESP = (EBP);
  /* 12c06b8b pop ebp */
  EBP = (pop32());
  /* 12c06b8c ret  */
  ESPCHK(0x12c06b60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12c06b90 (88 bytes, 40 insns) */
void f_12c06b90(void) {
  FTRACE(0x12c06b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06b90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c06b94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c06b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c06b9a je 0x12c06be3 */
  if (C.zf) goto L_12c06be3;
  /* 12c06b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06b9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c06ba2 push edi */
  push32((uint32_t)(EDI));
  /* 12c06ba3 mov edi, ecx */
  EDI = (ECX);
  /* 12c06ba5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06ba8 jb 0x12c06bd7 */
  if (C.cf) goto L_12c06bd7;
  /* 12c06baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c06bac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c06baf je 0x12c06bb9 */
  if (C.zf) goto L_12c06bb9;
  /* 12c06bb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c06bb3:;
  /* 12c06bb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c06bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c06bb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c06bb7 jne 0x12c06bb3 */
  if (!C.zf) goto L_12c06bb3;
L_12c06bb9:;
  /* 12c06bb9 mov ecx, eax */
  ECX = (EAX);
  /* 12c06bbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c06bbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06bc0 mov ecx, eax */
  ECX = (EAX);
  /* 12c06bc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c06bc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06bc7 mov ecx, edx */
  ECX = (EDX);
  /* 12c06bc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c06bcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c06bcf je 0x12c06bd7 */
  if (C.zf) goto L_12c06bd7;
  /* 12c06bd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c06bd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c06bd5 je 0x12c06bdd */
  if (C.zf) goto L_12c06bdd;
L_12c06bd7:;
  /* 12c06bd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c06bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c06bda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12c06bdb jne 0x12c06bd7 */
  if (!C.zf) goto L_12c06bd7;
L_12c06bdd:;
  /* 12c06bdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c06be1 pop edi */
  EDI = (pop32());
  /* 12c06be2 ret  */
  ESPCHK(0x12c06b90u, _esp0);
  ESP += 4; return;
L_12c06be3:;
  /* 12c06be3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c06be7 ret  */
  ESPCHK(0x12c06b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x12c06bf0 (23 bytes, 10 insns) */
void f_12c06bf0(void) {
  FTRACE(0x12c06bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c06bf3 mov eax, dword ptr [0x12c2e678] */
  EAX = (r32((uint32_t)(0x12c2e678)));
  /* 12c06bf8 push eax */
  push32((uint32_t)(EAX));
  /* 12c06bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06bfc push ecx */
  push32((uint32_t)(ECX));
  /* 12c06bfd call 0x12c06c10 */
  push32(0x12c06c02u); f_12c06c10();
  /* 12c06c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06c05 pop ebp */
  EBP = (pop32());
  /* 12c06c06 ret  */
  ESPCHK(0x12c06bf0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12c06c10 (87 bytes, 34 insns) */
void f_12c06c10(void) {
  FTRACE(0x12c06c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06c11 mov ebp, esp */
  EBP = (ESP);
  /* 12c06c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06c14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06c18 jbe 0x12c06c1e */
  if ((C.cf||C.zf)) goto L_12c06c1e;
  /* 12c06c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06c1c jmp 0x12c06c63 */
  goto L_12c06c63;
L_12c06c1e:;
  /* 12c06c1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06c22 ja 0x12c06c35 */
  if ((!C.cf&&!C.zf)) goto L_12c06c35;
  /* 12c06c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06c27 push eax */
  push32((uint32_t)(EAX));
  /* 12c06c28 call 0x12c06c70 */
  push32(0x12c06c2du); f_12c06c70();
  /* 12c06c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06c33 jmp 0x12c06c3c */
  goto L_12c06c3c;
L_12c06c35:;
  /* 12c06c35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c06c3c:;
  /* 12c06c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06c40 jne 0x12c06c48 */
  if (!C.zf) goto L_12c06c48;
  /* 12c06c42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06c46 jne 0x12c06c4d */
  if (!C.zf) goto L_12c06c4d;
L_12c06c48:;
  /* 12c06c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06c4b jmp 0x12c06c63 */
  goto L_12c06c63;
L_12c06c4d:;
  /* 12c06c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06c51 call 0x12c06b60 */
  push32(0x12c06c56u); f_12c06b60();
  /* 12c06c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c06c5b jne 0x12c06c61 */
  if (!C.zf) goto L_12c06c61;
  /* 12c06c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06c5f jmp 0x12c06c63 */
  goto L_12c06c63;
L_12c06c61:;
  /* 12c06c61 jmp 0x12c06c1e */
  goto L_12c06c1e;
L_12c06c63:;
  /* 12c06c63 mov esp, ebp */
  ESP = (EBP);
  /* 12c06c65 pop ebp */
  EBP = (pop32());
  /* 12c06c66 ret  */
  ESPCHK(0x12c06c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x12c06c70 (109 bytes, 37 insns) */
void f_12c06c70(void) {
  FTRACE(0x12c06c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06c71 mov ebp, esp */
  EBP = (ESP);
  /* 12c06c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06c77 cmp eax, dword ptr [0x12c2cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06c7d ja 0x12c06cad */
  if ((!C.cf&&!C.zf)) goto L_12c06cad;
  /* 12c06c7f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06c81 call 0x12c06820 */
  push32(0x12c06c86u); f_12c06820();
  /* 12c06c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06c8c push ecx */
  push32((uint32_t)(ECX));
  /* 12c06c8d call 0x12c077b0 */
  push32(0x12c06c92u); f_12c077b0();
  /* 12c06c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06c9a call 0x12c068c0 */
  push32(0x12c06c9fu); f_12c068c0();
  /* 12c06c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06ca2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06ca6 je 0x12c06cad */
  if (C.zf) goto L_12c06cad;
  /* 12c06ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06cab jmp 0x12c06cd9 */
  goto L_12c06cd9;
L_12c06cad:;
  /* 12c06cad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06cb1 jne 0x12c06cba */
  if (!C.zf) goto L_12c06cba;
  /* 12c06cb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12c06cba:;
  /* 12c06cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06cbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06cc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12c06cc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c06cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12c06cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12c06ccc mov ecx, dword ptr [0x12c2fe2c] */
  ECX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c06cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06cd3 call dword ptr [0x12c30330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30330))), 0x12c06cd9u);
L_12c06cd9:;
  /* 12c06cd9 mov esp, ebp */
  ESP = (EBP);
  /* 12c06cdb pop ebp */
  EBP = (pop32());
  /* 12c06cdc ret  */
  ESPCHK(0x12c06c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x12c06ce0 (10 bytes, 5 insns) */
void f_12c06ce0(void) {
  FTRACE(0x12c06ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12c06ce3 mov eax, 1 */
  EAX = (0x1u);
  /* 12c06ce8 pop ebp */
  EBP = (pop32());
  /* 12c06ce9 ret  */
  ESPCHK(0x12c06ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x12c06cf0 (173 bytes, 59 insns) */
void f_12c06cf0(void) {
  FTRACE(0x12c06cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c06cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06cf6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06cfa jbe 0x12c06d03 */
  if ((C.cf||C.zf)) goto L_12c06d03;
  /* 12c06cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06cfe jmp 0x12c06d99 */
  goto L_12c06d99;
L_12c06d03:;
  /* 12c06d03 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06d05 call 0x12c06820 */
  push32(0x12c06d0au); f_12c06820();
  /* 12c06d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06d10 push eax */
  push32((uint32_t)(EAX));
  /* 12c06d11 call 0x12c07120 */
  push32(0x12c06d16u); f_12c07120();
  /* 12c06d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06d19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c06d1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06d20 je 0x12c06d61 */
  if (C.zf) goto L_12c06d61;
  /* 12c06d22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c06d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06d2c cmp ecx, dword ptr [0x12c2cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06d32 ja 0x12c06d52 */
  if ((!C.cf&&!C.zf)) goto L_12c06d52;
  /* 12c06d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06d37 push edx */
  push32((uint32_t)(EDX));
  /* 12c06d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06d3b push eax */
  push32((uint32_t)(EAX));
  /* 12c06d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06d3f push ecx */
  push32((uint32_t)(ECX));
  /* 12c06d40 call 0x12c07ff0 */
  push32(0x12c06d45u); f_12c07ff0();
  /* 12c06d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c06d4a je 0x12c06d52 */
  if (C.zf) goto L_12c06d52;
  /* 12c06d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06d4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c06d52:;
  /* 12c06d52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06d54 call 0x12c068c0 */
  push32(0x12c06d59u); f_12c068c0();
  /* 12c06d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06d5f jmp 0x12c06d99 */
  goto L_12c06d99;
L_12c06d61:;
  /* 12c06d61 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06d63 call 0x12c068c0 */
  push32(0x12c06d68u); f_12c068c0();
  /* 12c06d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06d6f jne 0x12c06d78 */
  if (!C.zf) goto L_12c06d78;
  /* 12c06d71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12c06d78:;
  /* 12c06d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06d7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06d7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12c06d80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c06d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06d86 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06d8a push edx */
  push32((uint32_t)(EDX));
  /* 12c06d8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c06d8d mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c06d92 push eax */
  push32((uint32_t)(EAX));
  /* 12c06d93 call dword ptr [0x12c30334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30334))), 0x12c06d99u);
L_12c06d99:;
  /* 12c06d99 mov esp, ebp */
  ESP = (EBP);
  /* 12c06d9b pop ebp */
  EBP = (pop32());
  /* 12c06d9c ret  */
  ESPCHK(0x12c06cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x12c06da0 (490 bytes, 165 insns) */
void f_12c06da0(void) {
  FTRACE(0x12c06da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06da1 mov ebp, esp */
  EBP = (ESP);
  /* 12c06da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06da6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06daa jne 0x12c06dbd */
  if (!C.zf) goto L_12c06dbd;
  /* 12c06dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06daf push eax */
  push32((uint32_t)(EAX));
  /* 12c06db0 call 0x12c06bf0 */
  push32(0x12c06db5u); f_12c06bf0();
  /* 12c06db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06db8 jmp 0x12c06f86 */
  goto L_12c06f86;
L_12c06dbd:;
  /* 12c06dbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06dc1 jne 0x12c06dd6 */
  if (!C.zf) goto L_12c06dd6;
  /* 12c06dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06dc7 call 0x12c06f90 */
  push32(0x12c06dccu); f_12c06f90();
  /* 12c06dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06dd1 jmp 0x12c06f86 */
  goto L_12c06f86;
L_12c06dd6:;
  /* 12c06dd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c06ddd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06de1 ja 0x12c06f59 */
  if ((!C.cf&&!C.zf)) goto L_12c06f59;
  /* 12c06de7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06de9 call 0x12c06820 */
  push32(0x12c06deeu); f_12c06820();
  /* 12c06dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06df4 push edx */
  push32((uint32_t)(EDX));
  /* 12c06df5 call 0x12c07120 */
  push32(0x12c06dfau); f_12c07120();
  /* 12c06dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06dfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c06e00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06e04 je 0x12c06f1c */
  if (C.zf) goto L_12c06f1c;
  /* 12c06e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06e0d cmp eax, dword ptr [0x12c2cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06e13 ja 0x12c06e90 */
  if ((!C.cf&&!C.zf)) goto L_12c06e90;
  /* 12c06e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06e1c push edx */
  push32((uint32_t)(EDX));
  /* 12c06e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c06e20 push eax */
  push32((uint32_t)(EAX));
  /* 12c06e21 call 0x12c07ff0 */
  push32(0x12c06e26u); f_12c07ff0();
  /* 12c06e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c06e2b je 0x12c06e35 */
  if (C.zf) goto L_12c06e35;
  /* 12c06e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06e30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c06e33 jmp 0x12c06e90 */
  goto L_12c06e90;
L_12c06e35:;
  /* 12c06e35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06e38 push edx */
  push32((uint32_t)(EDX));
  /* 12c06e39 call 0x12c077b0 */
  push32(0x12c06e3eu); f_12c077b0();
  /* 12c06e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c06e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06e48 je 0x12c06e90 */
  if (C.zf) goto L_12c06e90;
  /* 12c06e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06e4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12c06e50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c06e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06e59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06e5c jae 0x12c06e66 */
  if (!C.cf) goto L_12c06e66;
  /* 12c06e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c06e64 jmp 0x12c06e6c */
  goto L_12c06e6c;
L_12c06e66:;
  /* 12c06e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c06e6c:;
  /* 12c06e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06e6f push edx */
  push32((uint32_t)(EDX));
  /* 12c06e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06e73 push eax */
  push32((uint32_t)(EAX));
  /* 12c06e74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06e77 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06e78 call 0x12c09700 */
  push32(0x12c06e7du); f_12c09700();
  /* 12c06e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06e83 push edx */
  push32((uint32_t)(EDX));
  /* 12c06e84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c06e87 push eax */
  push32((uint32_t)(EAX));
  /* 12c06e88 call 0x12c071e0 */
  push32(0x12c06e8du); f_12c071e0();
  /* 12c06e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c06e90:;
  /* 12c06e90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06e94 jne 0x12c06f10 */
  if (!C.zf) goto L_12c06f10;
  /* 12c06e96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06e9a jne 0x12c06ea3 */
  if (!C.zf) goto L_12c06ea3;
  /* 12c06e9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12c06ea3:;
  /* 12c06ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06ea6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06ea9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12c06eac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c06eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06eb2 push edx */
  push32((uint32_t)(EDX));
  /* 12c06eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c06eb5 mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c06eba push eax */
  push32((uint32_t)(EAX));
  /* 12c06ebb call dword ptr [0x12c30330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30330))), 0x12c06ec1u);
  /* 12c06ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c06ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06ec8 je 0x12c06f10 */
  if (C.zf) goto L_12c06f10;
  /* 12c06eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06ecd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c06ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06ed3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c06ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06ed9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06edc jae 0x12c06ee6 */
  if (!C.cf) goto L_12c06ee6;
  /* 12c06ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06ee1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c06ee4 jmp 0x12c06eec */
  goto L_12c06eec;
L_12c06ee6:;
  /* 12c06ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06ee9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c06eec:;
  /* 12c06eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c06eef push eax */
  push32((uint32_t)(EAX));
  /* 12c06ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06ef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12c06ef8 call 0x12c09700 */
  push32(0x12c06efdu); f_12c09700();
  /* 12c06efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06f03 push eax */
  push32((uint32_t)(EAX));
  /* 12c06f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c06f07 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06f08 call 0x12c071e0 */
  push32(0x12c06f0du); f_12c071e0();
  /* 12c06f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c06f10:;
  /* 12c06f10 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06f12 call 0x12c068c0 */
  push32(0x12c06f17u); f_12c068c0();
  /* 12c06f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06f1a jmp 0x12c06f59 */
  goto L_12c06f59;
L_12c06f1c:;
  /* 12c06f1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06f1e call 0x12c068c0 */
  push32(0x12c06f23u); f_12c068c0();
  /* 12c06f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06f26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06f2a jne 0x12c06f33 */
  if (!C.zf) goto L_12c06f33;
  /* 12c06f2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12c06f33:;
  /* 12c06f33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06f36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06f39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12c06f3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c06f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06f42 push eax */
  push32((uint32_t)(EAX));
  /* 12c06f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06f46 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c06f49 mov edx, dword ptr [0x12c2fe2c] */
  EDX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c06f4f push edx */
  push32((uint32_t)(EDX));
  /* 12c06f50 call dword ptr [0x12c30334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30334))), 0x12c06f56u);
  /* 12c06f56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c06f59:;
  /* 12c06f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06f5d jne 0x12c06f68 */
  if (!C.zf) goto L_12c06f68;
  /* 12c06f5f cmp dword ptr [0x12c2e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06f66 jne 0x12c06f6d */
  if (!C.zf) goto L_12c06f6d;
L_12c06f68:;
  /* 12c06f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06f6b jmp 0x12c06f86 */
  goto L_12c06f86;
L_12c06f6d:;
  /* 12c06f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06f70 push eax */
  push32((uint32_t)(EAX));
  /* 12c06f71 call 0x12c06b60 */
  push32(0x12c06f76u); f_12c06b60();
  /* 12c06f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c06f7b jne 0x12c06f81 */
  if (!C.zf) goto L_12c06f81;
  /* 12c06f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06f7f jmp 0x12c06f86 */
  goto L_12c06f86;
L_12c06f81:;
  /* 12c06f81 jmp 0x12c06dd6 */
  goto L_12c06dd6;
L_12c06f86:;
  /* 12c06f86 mov esp, ebp */
  ESP = (EBP);
  /* 12c06f88 pop ebp */
  EBP = (pop32());
  /* 12c06f89 ret  */
  ESPCHK(0x12c06da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x12c06f90 (104 bytes, 38 insns) */
void f_12c06f90(void) {
  FTRACE(0x12c06f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06f91 mov ebp, esp */
  EBP = (ESP);
  /* 12c06f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06f94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06f98 jne 0x12c06f9c */
  if (!C.zf) goto L_12c06f9c;
  /* 12c06f9a jmp 0x12c06ff4 */
  goto L_12c06ff4;
L_12c06f9c:;
  /* 12c06f9c push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06f9e call 0x12c06820 */
  push32(0x12c06fa3u); f_12c06820();
  /* 12c06fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06fa9 push eax */
  push32((uint32_t)(EAX));
  /* 12c06faa call 0x12c07120 */
  push32(0x12c06fafu); f_12c07120();
  /* 12c06faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06fb9 je 0x12c06fd7 */
  if (C.zf) goto L_12c06fd7;
  /* 12c06fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06fbe push ecx */
  push32((uint32_t)(ECX));
  /* 12c06fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06fc2 push edx */
  push32((uint32_t)(EDX));
  /* 12c06fc3 call 0x12c071e0 */
  push32(0x12c06fc8u); f_12c071e0();
  /* 12c06fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06fcd call 0x12c068c0 */
  push32(0x12c06fd2u); f_12c068c0();
  /* 12c06fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06fd5 jmp 0x12c06ff4 */
  goto L_12c06ff4;
L_12c06fd7:;
  /* 12c06fd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06fd9 call 0x12c068c0 */
  push32(0x12c06fdeu); f_12c068c0();
  /* 12c06fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06fe4 push eax */
  push32((uint32_t)(EAX));
  /* 12c06fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c06fe7 mov ecx, dword ptr [0x12c2fe2c] */
  ECX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c06fed push ecx */
  push32((uint32_t)(ECX));
  /* 12c06fee call dword ptr [0x12c30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30310))), 0x12c06ff4u);
L_12c06ff4:;
  /* 12c06ff4 mov esp, ebp */
  ESP = (EBP);
  /* 12c06ff6 pop ebp */
  EBP = (pop32());
  /* 12c06ff7 ret  */
  ESPCHK(0x12c06f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x12c07000 (116 bytes, 34 insns) */
void f_12c07000(void) {
  FTRACE(0x12c07000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07000 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07001 mov ebp, esp */
  EBP = (ESP);
  /* 12c07003 push ecx */
  push32((uint32_t)(ECX));
  /* 12c07004 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12c0700b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c0700d call 0x12c06820 */
  push32(0x12c07012u); f_12c06820();
  /* 12c07012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07015 call 0x12c08710 */
  push32(0x12c0701au); f_12c08710();
  /* 12c0701a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0701c jge 0x12c07025 */
  if ((C.sf==C.of)) goto L_12c07025;
  /* 12c0701e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12c07025:;
  /* 12c07025 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c07027 call 0x12c068c0 */
  push32(0x12c0702cu); f_12c068c0();
  /* 12c0702c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0702f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c07031 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c07033 mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c07038 push eax */
  push32((uint32_t)(EAX));
  /* 12c07039 call dword ptr [0x12c30240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30240))), 0x12c0703fu);
  /* 12c0703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c07041 jne 0x12c0706d */
  if (!C.zf) goto L_12c0706d;
  /* 12c07043 call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c07049u);
  /* 12c07049 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0704c jne 0x12c07066 */
  if (!C.zf) goto L_12c07066;
  /* 12c0704e call 0x12c0ad00 */
  push32(0x12c07053u); f_12c0ad00();
  /* 12c07053 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12c07059 call 0x12c0acf0 */
  push32(0x12c0705eu); f_12c0acf0();
  /* 12c0705e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12c07064 jmp 0x12c0706d */
  goto L_12c0706d;
L_12c07066:;
  /* 12c07066 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12c0706d:;
  /* 12c0706d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07070 mov esp, ebp */
  ESP = (EBP);
  /* 12c07072 pop ebp */
  EBP = (pop32());
  /* 12c07073 ret  */
  ESPCHK(0x12c07000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x12c07080 (10 bytes, 5 insns) */
void f_12c07080(void) {
  FTRACE(0x12c07080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07080 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07081 mov ebp, esp */
  EBP = (ESP);
  /* 12c07083 call 0x12c07000 */
  push32(0x12c07088u); f_12c07000();
  /* 12c07088 pop ebp */
  EBP = (pop32());
  /* 12c07089 ret  */
  ESPCHK(0x12c07080u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x12c07090 (10 bytes, 5 insns) */
void f_12c07090(void) {
  FTRACE(0x12c07090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07090 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07091 mov ebp, esp */
  EBP = (ESP);
  /* 12c07093 mov eax, dword ptr [0x12c2cc94] */
  EAX = (r32((uint32_t)(0x12c2cc94)));
  /* 12c07098 pop ebp */
  EBP = (pop32());
  /* 12c07099 ret  */
  ESPCHK(0x12c07090u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x12c070a0 (31 bytes, 11 insns) */
void f_12c070a0(void) {
  FTRACE(0x12c070a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c070a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c070a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c070a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c070aa jbe 0x12c070b0 */
  if ((C.cf||C.zf)) goto L_12c070b0;
  /* 12c070ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c070ae jmp 0x12c070bd */
  goto L_12c070bd;
L_12c070b0:;
  /* 12c070b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c070b3 mov dword ptr [0x12c2cc94], eax */
  w32((uint32_t)(0x12c2cc94), (EAX));
  /* 12c070b8 mov eax, 1 */
  EAX = (0x1u);
L_12c070bd:;
  /* 12c070bd pop ebp */
  EBP = (pop32());
  /* 12c070be ret  */
  ESPCHK(0x12c070a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x12c070c0 (89 bytes, 20 insns) */
void f_12c070c0(void) {
  FTRACE(0x12c070c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c070c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c070c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c070c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12c070c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c070ca mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c070cf push eax */
  push32((uint32_t)(EAX));
  /* 12c070d0 call dword ptr [0x12c30330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30330))), 0x12c070d6u);
  /* 12c070d6 mov dword ptr [0x12c2fe28], eax */
  w32((uint32_t)(0x12c2fe28), (EAX));
  /* 12c070db cmp dword ptr [0x12c2fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c070e2 jne 0x12c070e8 */
  if (!C.zf) goto L_12c070e8;
  /* 12c070e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c070e6 jmp 0x12c07117 */
  goto L_12c07117;
L_12c070e8:;
  /* 12c070e8 mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c070ee mov dword ptr [0x12c2fe1c], ecx */
  w32((uint32_t)(0x12c2fe1c), (ECX));
  /* 12c070f4 mov dword ptr [0x12c2fe20], 0 */
  w32((uint32_t)(0x12c2fe20), (0x0u));
  /* 12c070fe mov dword ptr [0x12c2fe24], 0 */
  w32((uint32_t)(0x12c2fe24), (0x0u));
  /* 12c07108 mov dword ptr [0x12c2fe08], 0x10 */
  w32((uint32_t)(0x12c2fe08), (0x10u));
  /* 12c07112 mov eax, 1 */
  EAX = (0x1u);
L_12c07117:;
  /* 12c07117 pop ebp */
  EBP = (pop32());
  /* 12c07118 ret  */
  ESPCHK(0x12c070c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x12c07120 (85 bytes, 29 insns) */
void f_12c07120(void) {
  FTRACE(0x12c07120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07120 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07121 mov ebp, esp */
  EBP = (ESP);
  /* 12c07123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07126 mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c0712b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0712e mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c07134 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c07139 mov edx, dword ptr [0x12c2fe28] */
  EDX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c0713f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c07142:;
  /* 12c07142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07145 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07148 jae 0x12c0716f */
  if (!C.cf) goto L_12c0716f;
  /* 12c0714a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0714d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07150 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c07156 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0715d jae 0x12c07164 */
  if (!C.cf) goto L_12c07164;
  /* 12c0715f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07162 jmp 0x12c07171 */
  goto L_12c07171;
L_12c07164:;
  /* 12c07164 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07167 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0716a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0716d jmp 0x12c07142 */
  goto L_12c07142;
L_12c0716f:;
  /* 12c0716f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c07171:;
  /* 12c07171 mov esp, ebp */
  ESP = (EBP);
  /* 12c07173 pop ebp */
  EBP = (pop32());
  /* 12c07174 ret  */
  ESPCHK(0x12c07120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x12c07180 (95 bytes, 33 insns) */
void f_12c07180(void) {
  FTRACE(0x12c07180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07180 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07181 mov ebp, esp */
  EBP = (ESP);
  /* 12c07183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0718c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0718f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c07192 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07195 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c07198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0719b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c071a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c071a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c071a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c071a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c071ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c071ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c071af jne 0x12c071d1 */
  if (!C.zf) goto L_12c071d1;
  /* 12c071b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c071b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12c071b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c071b9 jne 0x12c071d1 */
  if (!C.zf) goto L_12c071d1;
  /* 12c071bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c071be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c071c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c071c6 je 0x12c071d1 */
  if (C.zf) goto L_12c071d1;
  /* 12c071c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12c071cf jmp 0x12c071d8 */
  goto L_12c071d8;
L_12c071d1:;
  /* 12c071d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12c071d8:;
  /* 12c071d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c071db mov esp, ebp */
  ESP = (EBP);
  /* 12c071dd pop ebp */
  EBP = (pop32());
  /* 12c071de ret  */
  ESPCHK(0x12c07180u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x12c071e0 (1485 bytes, 453 insns) */
void f_12c071e0(void) {
  FTRACE(0x12c071e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c071e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c071e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c071e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c071e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c071e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c071ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12c071ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c071f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c071f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c071f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c071fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c071fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12c07201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c07204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07207 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0720d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07210 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12c07217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0721a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0721d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07220 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c07223 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c07228 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0722b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12c0722e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07231 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07234 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12c07237 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c0723a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0723c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c0723f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07242 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12c07245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c07248 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0724b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0724e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07250 jne 0x12c07378 */
  if (!C.zf) goto L_12c07378;
  /* 12c07256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07259 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c0725c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0725f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c07262 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07266 jbe 0x12c0726f */
  if ((C.cf||C.zf)) goto L_12c0726f;
  /* 12c07268 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12c0726f:;
  /* 12c0726f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07275 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07278 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0727b jne 0x12c07351 */
  if (!C.zf) goto L_12c07351;
  /* 12c07281 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07285 jae 0x12c072e6 */
  if (!C.cf) goto L_12c072e6;
  /* 12c07287 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c0728c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0728f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c07291 not eax */
  EAX = (~(EAX));
  /* 12c07293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07296 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07299 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c0729d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0729f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c072a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c072a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c072a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c072ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c072af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c072b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c072b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c072b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c072bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c072be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c072c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c072c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c072c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c072ca jne 0x12c072e4 */
  if (!C.zf) goto L_12c072e4;
  /* 12c072cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c072d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c072d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c072d6 not eax */
  EAX = (~(EAX));
  /* 12c072d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c072db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c072dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c072df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c072e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c072e4:;
  /* 12c072e4 jmp 0x12c07351 */
  goto L_12c07351;
L_12c072e6:;
  /* 12c072e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c072e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c072ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c072f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c072f3 not edx */
  EDX = (~(EDX));
  /* 12c072f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c072f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c072fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c07302 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07307 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c0730a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12c07311 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07314 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07317 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c0731a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c0731d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07323 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c07326 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07329 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0732c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c07330 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07332 jne 0x12c07351 */
  if (!C.zf) goto L_12c07351;
  /* 12c07334 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c07337 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0733a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c0733f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07341 not edx */
  EDX = (~(EDX));
  /* 12c07343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07349 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0734b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0734e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c07351:;
  /* 12c07351 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07354 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c07357 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c0735a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c0735d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c07360 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c07366 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0736c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c0736f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07372 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07375 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12c07378:;
  /* 12c07378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0737b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c0737e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c07384 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07388 jbe 0x12c07391 */
  if ((C.cf||C.zf)) goto L_12c07391;
  /* 12c0738a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12c07391:;
  /* 12c07391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c07394 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c07397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07399 jne 0x12c074f5 */
  if (!C.zf) goto L_12c074f5;
  /* 12c0739f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c073a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c073a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12c073a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c073ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c073ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c073b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c073b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c073b8 jbe 0x12c073c1 */
  if ((C.cf||C.zf)) goto L_12c073c1;
  /* 12c073ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12c073c1:;
  /* 12c073c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c073c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c073c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12c073ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c073cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c073d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c073d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c073d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c073da jbe 0x12c073e3 */
  if ((C.cf||C.zf)) goto L_12c073e3;
  /* 12c073dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12c073e3:;
  /* 12c073e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c073e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c073e9 je 0x12c074ef */
  if (C.zf) goto L_12c074ef;
  /* 12c073ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c073f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c073f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c073f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c073fb jne 0x12c074d1 */
  if (!C.zf) goto L_12c074d1;
  /* 12c07401 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07405 jae 0x12c07466 */
  if (!C.cf) goto L_12c07466;
  /* 12c07407 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c0740c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0740f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07411 not edx */
  EDX = (~(EDX));
  /* 12c07413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07416 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07419 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c0741d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07425 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c07429 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c0742c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0742f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c07432 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c07435 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07438 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0743b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c0743e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07441 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07444 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c07448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0744a jne 0x12c07464 */
  if (!C.zf) goto L_12c07464;
  /* 12c0744c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07456 not edx */
  EDX = (~(EDX));
  /* 12c07458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0745b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0745d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0745f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c07464:;
  /* 12c07464 jmp 0x12c074d1 */
  goto L_12c074d1;
L_12c07466:;
  /* 12c07466 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0746c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c07471 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c07473 not eax */
  EAX = (~(EAX));
  /* 12c07475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07478 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c0747b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c07482 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c07484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07487 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c0748a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12c07491 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07494 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07497 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c0749a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c0749d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c074a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c074a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c074a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c074a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c074ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c074b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c074b2 jne 0x12c074d1 */
  if (!C.zf) goto L_12c074d1;
  /* 12c074b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c074b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c074ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c074bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c074c1 not eax */
  EAX = (~(EAX));
  /* 12c074c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c074c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c074c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c074cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c074ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c074d1:;
  /* 12c074d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c074d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c074d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c074da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c074dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c074e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c074e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c074e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c074e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c074ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12c074ef:;
  /* 12c074ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c074f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12c074f5:;
  /* 12c074f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c074f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c074fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c074fd jne 0x12c0750b */
  if (!C.zf) goto L_12c0750b;
  /* 12c074ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07502 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07505 je 0x12c0761b */
  if (C.zf) goto L_12c0761b;
L_12c0750b:;
  /* 12c0750b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0750e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07511 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12c07514 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c07517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0751a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0751d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c07520 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c07523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07526 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07529 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c0752c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0752f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07532 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c07535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07538 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0753b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0753e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c07541 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07547 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0754a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0754d jne 0x12c0761b */
  if (!C.zf) goto L_12c0761b;
  /* 12c07553 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07557 jae 0x12c075b4 */
  if (!C.cf) goto L_12c075b4;
  /* 12c07559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c0755c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0755f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c07563 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07566 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07569 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c0756c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c0756f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07572 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07575 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c07578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0757a jne 0x12c07592 */
  if (!C.zf) goto L_12c07592;
  /* 12c0757c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07589 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0758b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0758d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07590 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c07592:;
  /* 12c07592 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c07597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0759a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c0759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0759f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c075a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c075a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c075a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c075ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c075ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c075b2 jmp 0x12c0761b */
  goto L_12c0761b;
L_12c075b4:;
  /* 12c075b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c075b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c075ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c075be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c075c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c075c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c075c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c075ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c075cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c075d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c075d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c075d5 jne 0x12c075f2 */
  if (!C.zf) goto L_12c075f2;
  /* 12c075d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c075da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c075dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c075e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c075e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c075e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c075ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c075ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c075ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c075f2:;
  /* 12c075f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c075f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c075f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c075fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c075ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07602 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07605 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c0760c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0760e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c07614 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12c0761b:;
  /* 12c0761b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0761e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07621 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c07623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07626 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07629 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0762c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12c0762f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c07634 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0763a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c0763c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0763f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07642 jne 0x12c077a9 */
  if (!C.zf) goto L_12c077a9;
  /* 12c07648 cmp dword ptr [0x12c2fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0764f je 0x12c07798 */
  if (C.zf) goto L_12c07798;
  /* 12c07655 mov eax, dword ptr [0x12c2fe18] */
  EAX = (r32((uint32_t)(0x12c2fe18)));
  /* 12c0765a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12c0765d mov ecx, dword ptr [0x12c2fe20] */
  ECX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c07663 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c07666 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07668 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c0766b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c07670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c07675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07678 push eax */
  push32((uint32_t)(EAX));
  /* 12c07679 call dword ptr [0x12c30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30314))), 0x12c0767fu);
  /* 12c0767f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07684 mov ecx, dword ptr [0x12c2fe18] */
  ECX = (r32((uint32_t)(0x12c2fe18)));
  /* 12c0768a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c0768c mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c07691 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c07694 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c07696 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c0769c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c0769f mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c076a7 mov edx, dword ptr [0x12c2fe18] */
  EDX = (r32((uint32_t)(0x12c2fe18)));
  /* 12c076ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12c076b8 mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c076c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12c076c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c076c6 mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c076ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12c076d1 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c076da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12c076de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c076e0 jne 0x12c076f6 */
  if (!C.zf) goto L_12c076f6;
  /* 12c076e2 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c076eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12c076ed mov ecx, dword ptr [0x12c2fe20] */
  ECX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12c076f6:;
  /* 12c076f6 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c076fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07700 jne 0x12c07798 */
  if (!C.zf) goto L_12c07798;
  /* 12c07706 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c0770b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0770d mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c07712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c07715 push ecx */
  push32((uint32_t)(ECX));
  /* 12c07716 call dword ptr [0x12c30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30314))), 0x12c0771cu);
  /* 12c0771c mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c07722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c07725 push eax */
  push32((uint32_t)(EAX));
  /* 12c07726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c07728 mov ecx, dword ptr [0x12c2fe2c] */
  ECX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c0772e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0772f call dword ptr [0x12c30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30310))), 0x12c07735u);
  /* 12c07735 mov edx, dword ptr [0x12c2fe24] */
  EDX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c0773b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0773e mov eax, dword ptr [0x12c2fe28] */
  EAX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c07743 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07745 mov ecx, dword ptr [0x12c2fe20] */
  ECX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c0774b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0774e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07750 push eax */
  push32((uint32_t)(EAX));
  /* 12c07751 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c07757 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0775a push edx */
  push32((uint32_t)(EDX));
  /* 12c0775b mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c07760 push eax */
  push32((uint32_t)(EAX));
  /* 12c07761 call 0x12c0ad10 */
  push32(0x12c07766u); f_12c0ad10();
  /* 12c07766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07769 mov ecx, dword ptr [0x12c2fe24] */
  ECX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c0776f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07772 mov dword ptr [0x12c2fe24], ecx */
  w32((uint32_t)(0x12c2fe24), (ECX));
  /* 12c07778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0777b cmp edx, dword ptr [0x12c2fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07781 jbe 0x12c0778c */
  if ((C.cf||C.zf)) goto L_12c0778c;
  /* 12c07783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07786 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07789 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c0778c:;
  /* 12c0778c mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c07792 mov dword ptr [0x12c2fe1c], ecx */
  w32((uint32_t)(0x12c2fe1c), (ECX));
L_12c07798:;
  /* 12c07798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0779b mov dword ptr [0x12c2fe20], edx */
  w32((uint32_t)(0x12c2fe20), (EDX));
  /* 12c077a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c077a4 mov dword ptr [0x12c2fe18], eax */
  w32((uint32_t)(0x12c2fe18), (EAX));
L_12c077a9:;
  /* 12c077a9 mov esp, ebp */
  ESP = (EBP);
  /* 12c077ab pop ebp */
  EBP = (pop32());
  /* 12c077ac ret  */
  ESPCHK(0x12c071e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x12c077b0 (1334 bytes, 427 insns) */
void f_12c077b0(void) {
  FTRACE(0x12c077b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c077b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c077b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c077b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c077b6 push esi */
  push32((uint32_t)(ESI));
  /* 12c077b7 mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c077bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c077bf mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c077c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c077c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c077ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c077cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c077d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12c077d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c077d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c077d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c077dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c077df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c077e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c077e6 jge 0x12c077fc */
  if ((C.sf==C.of)) goto L_12c077fc;
  /* 12c077e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c077eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c077ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c077f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c077f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12c077fa jmp 0x12c07811 */
  goto L_12c07811;
L_12c077fc:;
  /* 12c077fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c07803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07806 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07809 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0780c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c0780e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12c07811:;
  /* 12c07811 mov ecx, dword ptr [0x12c2fe1c] */
  ECX = (r32((uint32_t)(0x12c2fe1c)));
  /* 12c07817 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12c0781a:;
  /* 12c0781a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0781d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07820 jae 0x12c07846 */
  if (!C.cf) goto L_12c07846;
  /* 12c07822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c07828 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12c0782a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0782d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c07830 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12c07833 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c07835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07837 je 0x12c0783b */
  if (C.zf) goto L_12c0783b;
  /* 12c07839 jmp 0x12c07846 */
  goto L_12c07846;
L_12c0783b:;
  /* 12c0783b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0783e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07841 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c07844 jmp 0x12c0781a */
  goto L_12c0781a;
L_12c07846:;
  /* 12c07846 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07849 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0784c jne 0x12c0792d */
  if (!C.zf) goto L_12c0792d;
  /* 12c07852 mov eax, dword ptr [0x12c2fe28] */
  EAX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c07857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12c0785a:;
  /* 12c0785a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0785d cmp ecx, dword ptr [0x12c2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07863 jae 0x12c07889 */
  if (!C.cf) goto L_12c07889;
  /* 12c07865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0786b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12c0786d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c07873 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12c07876 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0787a je 0x12c0787e */
  if (C.zf) goto L_12c0787e;
  /* 12c0787c jmp 0x12c07889 */
  goto L_12c07889;
L_12c0787e:;
  /* 12c0787e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07881 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c07887 jmp 0x12c0785a */
  goto L_12c0785a;
L_12c07889:;
  /* 12c07889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0788c cmp ecx, dword ptr [0x12c2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07892 jne 0x12c0792d */
  if (!C.zf) goto L_12c0792d;
L_12c07898:;
  /* 12c07898 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0789b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0789e jae 0x12c078b6 */
  if (!C.cf) goto L_12c078b6;
  /* 12c078a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c078a7 je 0x12c078ab */
  if (C.zf) goto L_12c078ab;
  /* 12c078a9 jmp 0x12c078b6 */
  goto L_12c078b6;
L_12c078ab:;
  /* 12c078ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c078b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c078b4 jmp 0x12c07898 */
  goto L_12c07898;
L_12c078b6:;
  /* 12c078b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c078bc jne 0x12c07907 */
  if (!C.zf) goto L_12c07907;
  /* 12c078be mov eax, dword ptr [0x12c2fe28] */
  EAX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c078c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12c078c6:;
  /* 12c078c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078c9 cmp ecx, dword ptr [0x12c2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c078cf jae 0x12c078e7 */
  if (!C.cf) goto L_12c078e7;
  /* 12c078d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c078d8 je 0x12c078dc */
  if (C.zf) goto L_12c078dc;
  /* 12c078da jmp 0x12c078e7 */
  goto L_12c078e7;
L_12c078dc:;
  /* 12c078dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c078e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c078e5 jmp 0x12c078c6 */
  goto L_12c078c6;
L_12c078e7:;
  /* 12c078e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c078ea cmp ecx, dword ptr [0x12c2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c078f0 jne 0x12c07907 */
  if (!C.zf) goto L_12c07907;
  /* 12c078f2 call 0x12c07cf0 */
  push32(0x12c078f7u); f_12c07cf0();
  /* 12c078f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c078fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c078fe jne 0x12c07907 */
  if (!C.zf) goto L_12c07907;
  /* 12c07900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07902 jmp 0x12c07ce1 */
  goto L_12c07ce1;
L_12c07907:;
  /* 12c07907 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0790a push edx */
  push32((uint32_t)(EDX));
  /* 12c0790b call 0x12c07e00 */
  push32(0x12c07910u); f_12c07e00();
  /* 12c07910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07916 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c07919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c0791b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0791e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c07921 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07924 jne 0x12c0792d */
  if (!C.zf) goto L_12c0792d;
  /* 12c07926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07928 jmp 0x12c07ce1 */
  goto L_12c07ce1;
L_12c0792d:;
  /* 12c0792d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07930 mov dword ptr [0x12c2fe1c], edx */
  w32((uint32_t)(0x12c2fe1c), (EDX));
  /* 12c07936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07939 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0793c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12c0793f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c07944 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c07947 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0794b je 0x12c07970 */
  if (C.zf) goto L_12c07970;
  /* 12c0794d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07950 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c07956 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12c0795a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0795d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07960 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12c07963 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12c0796a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12c0796c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0796e jne 0x12c079a5 */
  if (!C.zf) goto L_12c079a5;
L_12c07970:;
  /* 12c07970 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12c07977:;
  /* 12c07977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0797a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c0797d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c07980 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12c07984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07987 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c0798a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12c0798d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12c07994 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12c07996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c07998 jne 0x12c079a5 */
  if (!C.zf) goto L_12c079a5;
  /* 12c0799a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0799d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c079a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12c079a3 jmp 0x12c07977 */
  goto L_12c07977;
L_12c079a5:;
  /* 12c079a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c079a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c079ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c079b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c079b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c079bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c079c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c079c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c079c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c079cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12c079cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c079d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c079d6 jne 0x12c079f2 */
  if (!C.zf) goto L_12c079f2;
  /* 12c079d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12c079df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c079e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c079e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c079e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12c079ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12c079f2:;
  /* 12c079f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c079f6 jl 0x12c07a0b */
  if ((C.sf!=C.of)) goto L_12c07a0b;
  /* 12c079f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c079fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c079fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c07a00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07a03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07a06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c07a09 jmp 0x12c079f2 */
  goto L_12c079f2;
L_12c07a0b:;
  /* 12c07a0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07a11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12c07a15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c07a18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07a1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c07a1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07a20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c07a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07a26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c07a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07a2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c07a2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07a33 jle 0x12c07a3c */
  if ((C.zf||C.sf!=C.of)) goto L_12c07a3c;
  /* 12c07a35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12c07a3c:;
  /* 12c07a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07a3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07a42 je 0x12c07c60 */
  if (C.zf) goto L_12c07c60;
  /* 12c07a48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07a4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07a51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07a54 jne 0x12c07b2a */
  if (!C.zf) goto L_12c07b2a;
  /* 12c07a5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07a5e jge 0x12c07abf */
  if ((C.sf==C.of)) goto L_12c07abf;
  /* 12c07a60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c07a65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07a68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c07a6a not eax */
  EAX = (~(EAX));
  /* 12c07a6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07a6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07a72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c07a76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c07a78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07a7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07a7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c07a82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07a85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07a88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c07a8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c07a8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07a91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07a94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c07a97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07a9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07a9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c07aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c07aa3 jne 0x12c07abd */
  if (!C.zf) goto L_12c07abd;
  /* 12c07aa5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c07aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07aad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c07aaf not eax */
  EAX = (~(EAX));
  /* 12c07ab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c07ab6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c07ab8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07abb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c07abd:;
  /* 12c07abd jmp 0x12c07b2a */
  goto L_12c07b2a;
L_12c07abf:;
  /* 12c07abf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07ac2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07ac5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07aca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07acc not edx */
  EDX = (~(EDX));
  /* 12c07ace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07ad1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07ad4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c07adb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07add mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07ae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07ae3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12c07aea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07aed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07af0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c07af3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c07af6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07af9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07afc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c07aff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07b02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07b05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c07b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07b0b jne 0x12c07b2a */
  if (!C.zf) goto L_12c07b2a;
  /* 12c07b0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07b10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07b13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07b18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07b1a not edx */
  EDX = (~(EDX));
  /* 12c07b1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07b1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07b22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c07b24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07b27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c07b2a:;
  /* 12c07b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c07b30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c07b36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c07b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c07b3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c07b45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c07b48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07b4c je 0x12c07c60 */
  if (C.zf) goto L_12c07c60;
  /* 12c07b52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07b58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12c07b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c07b5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c07b64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07b67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c07b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c07b70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c07b73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c07b76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c07b7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c07b88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07b8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c07b91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07b94 jne 0x12c07c60 */
  if (!C.zf) goto L_12c07c60;
  /* 12c07b9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07b9e jge 0x12c07bfa */
  if ((C.sf==C.of)) goto L_12c07bfa;
  /* 12c07ba0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07ba3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07ba6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c07baa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07bad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07bb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c07bb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c07bb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07bb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07bbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c07bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07bc0 jne 0x12c07bd8 */
  if (!C.zf) goto L_12c07bd8;
  /* 12c07bc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c07bc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07bca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c07bcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07bcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c07bd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c07bd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c07bd8:;
  /* 12c07bd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07be0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07be2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07be5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07be8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c07bec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07bee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07bf1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07bf4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c07bf8 jmp 0x12c07c60 */
  goto L_12c07c60;
L_12c07bfa:;
  /* 12c07bfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07bfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c07c04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07c07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c07c0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c07c0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07c12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c07c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07c1a jne 0x12c07c37 */
  if (!C.zf) goto L_12c07c37;
  /* 12c07c1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07c1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07c22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c07c27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c07c29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07c2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c07c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c07c31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07c34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c07c37:;
  /* 12c07c37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07c3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07c42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07c44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07c47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07c4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c07c51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07c53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07c56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07c59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12c07c60:;
  /* 12c07c60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07c64 je 0x12c07c7a */
  if (C.zf) goto L_12c07c7a;
  /* 12c07c66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c07c6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07c71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07c77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12c07c7a:;
  /* 12c07c7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07c7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c07c83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07c86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07c8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c07c8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07c97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07c9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12c07c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c07ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07ca5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c07ca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07cad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c07caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c07cb1 jne 0x12c07cd3 */
  if (!C.zf) goto L_12c07cd3;
  /* 12c07cb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07cb6 cmp eax, dword ptr [0x12c2fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07cbc jne 0x12c07cd3 */
  if (!C.zf) goto L_12c07cd3;
  /* 12c07cbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07cc1 cmp ecx, dword ptr [0x12c2fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07cc7 jne 0x12c07cd3 */
  if (!C.zf) goto L_12c07cd3;
  /* 12c07cc9 mov dword ptr [0x12c2fe20], 0 */
  w32((uint32_t)(0x12c2fe20), (0x0u));
L_12c07cd3:;
  /* 12c07cd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c07cd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c07cd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c07cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07cde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c07ce1:;
  /* 12c07ce1 pop esi */
  ESI = (pop32());
  /* 12c07ce2 mov esp, ebp */
  ESP = (EBP);
  /* 12c07ce4 pop ebp */
  EBP = (pop32());
  /* 12c07ce5 ret  */
  ESPCHK(0x12c077b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x12c07cf0 (271 bytes, 78 insns) */
void f_12c07cf0(void) {
  FTRACE(0x12c07cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c07cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c07cf4 mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c07cf9 cmp eax, dword ptr [0x12c2fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07cff jne 0x12c07d4b */
  if (!C.zf) goto L_12c07d4b;
  /* 12c07d01 mov ecx, dword ptr [0x12c2fe08] */
  ECX = (r32((uint32_t)(0x12c2fe08)));
  /* 12c07d07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07d0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c07d0d push ecx */
  push32((uint32_t)(ECX));
  /* 12c07d0e mov edx, dword ptr [0x12c2fe28] */
  EDX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c07d14 push edx */
  push32((uint32_t)(EDX));
  /* 12c07d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c07d17 mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c07d1c push eax */
  push32((uint32_t)(EAX));
  /* 12c07d1d call dword ptr [0x12c30334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30334))), 0x12c07d23u);
  /* 12c07d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c07d26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07d2a jne 0x12c07d33 */
  if (!C.zf) goto L_12c07d33;
  /* 12c07d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07d2e jmp 0x12c07dfb */
  goto L_12c07dfb;
L_12c07d33:;
  /* 12c07d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07d36 mov dword ptr [0x12c2fe28], ecx */
  w32((uint32_t)(0x12c2fe28), (ECX));
  /* 12c07d3c mov edx, dword ptr [0x12c2fe08] */
  EDX = (r32((uint32_t)(0x12c2fe08)));
  /* 12c07d42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07d45 mov dword ptr [0x12c2fe08], edx */
  w32((uint32_t)(0x12c2fe08), (EDX));
L_12c07d4b:;
  /* 12c07d4b mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c07d50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c07d53 mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c07d59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07d5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c07d5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12c07d63 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c07d65 mov edx, dword ptr [0x12c2fe2c] */
  EDX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c07d6b push edx */
  push32((uint32_t)(EDX));
  /* 12c07d6c call dword ptr [0x12c30330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30330))), 0x12c07d72u);
  /* 12c07d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07d75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12c07d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07d7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07d7f jne 0x12c07d85 */
  if (!C.zf) goto L_12c07d85;
  /* 12c07d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07d83 jmp 0x12c07dfb */
  goto L_12c07dfb;
L_12c07d85:;
  /* 12c07d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c07d87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12c07d8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12c07d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c07d93 call dword ptr [0x12c30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30338))), 0x12c07d99u);
  /* 12c07d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07d9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12c07d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07da2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07da6 jne 0x12c07dc2 */
  if (!C.zf) goto L_12c07dc2;
  /* 12c07da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07dab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c07dae push ecx */
  push32((uint32_t)(ECX));
  /* 12c07daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c07db1 mov edx, dword ptr [0x12c2fe2c] */
  EDX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c07db7 push edx */
  push32((uint32_t)(EDX));
  /* 12c07db8 call dword ptr [0x12c30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30310))), 0x12c07dbeu);
  /* 12c07dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c07dc0 jmp 0x12c07dfb */
  goto L_12c07dfb;
L_12c07dc2:;
  /* 12c07dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07dc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c07dcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07dce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c07dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07dd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12c07ddf mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c07de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07de7 mov dword ptr [0x12c2fe24], eax */
  w32((uint32_t)(0x12c2fe24), (EAX));
  /* 12c07dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07def mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c07df2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12c07df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c07dfb:;
  /* 12c07dfb mov esp, ebp */
  ESP = (EBP);
  /* 12c07dfd pop ebp */
  EBP = (pop32());
  /* 12c07dfe ret  */
  ESPCHK(0x12c07cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x12c07e00 (494 bytes, 149 insns) */
void f_12c07e00(void) {
  FTRACE(0x12c07e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07e01 mov ebp, esp */
  EBP = (ESP);
  /* 12c07e03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07e09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c07e0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c07e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c07e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c07e18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12c07e1f:;
  /* 12c07e1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07e23 jl 0x12c07e38 */
  if ((C.sf!=C.of)) goto L_12c07e38;
  /* 12c07e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c07e28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c07e2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c07e2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07e30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07e33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c07e36 jmp 0x12c07e1f */
  goto L_12c07e1f;
L_12c07e38:;
  /* 12c07e38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07e3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c07e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07e44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c07e4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c07e4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c07e55 jmp 0x12c07e60 */
  goto L_12c07e60;
L_12c07e57:;
  /* 12c07e57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12c07e60:;
  /* 12c07e60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07e64 jge 0x12c07e86 */
  if ((C.sf==C.of)) goto L_12c07e86;
  /* 12c07e66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c07e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c07e6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12c07e6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c07e72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07e75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07e78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c07e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07e7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07e81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c07e84 jmp 0x12c07e57 */
  goto L_12c07e57;
L_12c07e86:;
  /* 12c07e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07e89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c07e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07e8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c07e92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07e94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c07e97 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c07e99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c07e9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c07ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07ea6 push edx */
  push32((uint32_t)(EDX));
  /* 12c07ea7 call dword ptr [0x12c30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30338))), 0x12c07eadu);
  /* 12c07ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c07eaf jne 0x12c07eb9 */
  if (!C.zf) goto L_12c07eb9;
  /* 12c07eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c07eb4 jmp 0x12c07fea */
  goto L_12c07fea;
L_12c07eb9:;
  /* 12c07eb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07ebc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07ec1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c07ec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07ec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c07eca jmp 0x12c07ed8 */
  goto L_12c07ed8;
L_12c07ecc:;
  /* 12c07ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07ecf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07ed5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c07ed8:;
  /* 12c07ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07edb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c07ede ja 0x12c07f3d */
  if ((!C.cf&&!C.zf)) goto L_12c07f3d;
  /* 12c07ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07ee3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12c07eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07eed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12c07ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c07efa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07efd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c07f00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12c07f09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07f12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c07f18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07f21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c07f27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07f2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c07f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c07f35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12c07f3b jmp 0x12c07ecc */
  goto L_12c07ecc;
L_12c07f3d:;
  /* 12c07f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c07f40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07f46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c07f49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c07f4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07f4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07f52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c07f55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c07f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c07f5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07f64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c07f67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c07f6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07f70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c07f73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07f76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c07f79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c07f7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c07f7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c07f82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c07f85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07f88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07f8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12c07f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07f96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07f99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12c07fa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07fa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12c07fab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07fae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12c07fb1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c07fb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c07fb7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12c07fba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c07fbc jne 0x12c07fcd */
  if (!C.zf) goto L_12c07fcd;
  /* 12c07fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07fc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c07fc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c07fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07fca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c07fcd:;
  /* 12c07fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c07fd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c07fd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c07fd7 not edx */
  EDX = (~(EDX));
  /* 12c07fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07fdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c07fdf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c07fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c07fe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c07fe7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12c07fea:;
  /* 12c07fea mov esp, ebp */
  ESP = (EBP);
  /* 12c07fec pop ebp */
  EBP = (pop32());
  /* 12c07fed ret  */
  ESPCHK(0x12c07e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x12c07ff0 (1515 bytes, 489 insns) */
void f_12c07ff0(void) {
  FTRACE(0x12c07ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c07ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c07ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12c07ff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c07ff6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c07ff9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c07ffc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12c07ffe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c08001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08004 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c08007 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12c0800a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0800d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c08010 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c08016 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c08019 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c0801c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0801f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c08028 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0802b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c08032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c08035 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c08038 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0803b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c0803e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c08043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08046 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c08049 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0804c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0804f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c08052 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c08057 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c0805a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0805d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08060 jle 0x12c08316 */
  if ((C.zf||C.sf!=C.of)) goto L_12c08316;
  /* 12c08066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0806c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0806e jne 0x12c0807b */
  if (!C.zf) goto L_12c0807b;
  /* 12c08070 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c08073 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08076 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08079 jle 0x12c08082 */
  if ((C.zf||C.sf!=C.of)) goto L_12c08082;
L_12c0807b:;
  /* 12c0807b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0807d jmp 0x12c085d7 */
  goto L_12c085d7;
L_12c08082:;
  /* 12c08082 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08085 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c08088 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0808b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0808e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08092 jbe 0x12c0809b */
  if ((C.cf||C.zf)) goto L_12c0809b;
  /* 12c08094 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12c0809b:;
  /* 12c0809b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0809e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c080a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c080a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c080a7 jne 0x12c0817d */
  if (!C.zf) goto L_12c0817d;
  /* 12c080ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c080b1 jae 0x12c08112 */
  if (!C.cf) goto L_12c08112;
  /* 12c080b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c080b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c080bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c080bd not edx */
  EDX = (~(EDX));
  /* 12c080bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c080c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c080c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c080c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c080cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c080ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c080d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c080d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c080d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c080db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c080de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c080e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c080e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c080e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c080ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c080ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c080f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c080f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c080f6 jne 0x12c08110 */
  if (!C.zf) goto L_12c08110;
  /* 12c080f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c080fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c08100 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08102 not edx */
  EDX = (~(EDX));
  /* 12c08104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c08109 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0810b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0810e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c08110:;
  /* 12c08110 jmp 0x12c0817d */
  goto L_12c0817d;
L_12c08112:;
  /* 12c08112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c08115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c0811d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c0811f not eax */
  EAX = (~(EAX));
  /* 12c08121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08127 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c0812e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08133 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08136 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12c0813d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08140 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08143 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c08146 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c08149 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0814c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0814f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c08152 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08155 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08158 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c0815c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0815e jne 0x12c0817d */
  if (!C.zf) goto L_12c0817d;
  /* 12c08160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c08163 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08166 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c0816b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c0816d not eax */
  EAX = (~(EAX));
  /* 12c0816f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08172 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08175 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c08177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0817a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c0817d:;
  /* 12c0817d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08180 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c08183 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c08189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c0818c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0818f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c08192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c08198 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12c0819b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0819e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c081a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c081a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c081a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c081ab jle 0x12c082f7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c082f7;
  /* 12c081b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c081b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c081b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c081ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c081bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c081c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c081c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c081c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c081ca jbe 0x12c081d3 */
  if ((C.cf||C.zf)) goto L_12c081d3;
  /* 12c081cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12c081d3:;
  /* 12c081d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c081d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c081d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12c081dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c081df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c081e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c081e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c081e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c081eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c081ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c081f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c081f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c081f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c081fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c081fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08200 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08206 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c08209 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0820c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0820f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08212 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08215 jne 0x12c082e3 */
  if (!C.zf) goto L_12c082e3;
  /* 12c0821b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0821f jae 0x12c0827c */
  if (!C.cf) goto L_12c0827c;
  /* 12c08221 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08224 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08227 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c0822b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0822e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08231 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c08234 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c08237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0823a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0823d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c08240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c08242 jne 0x12c0825a */
  if (!C.zf) goto L_12c0825a;
  /* 12c08244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c08249 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0824c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c0824e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c08253 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08258 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c0825a:;
  /* 12c0825a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c0825f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c08262 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c08264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08267 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0826a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c0826e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08276 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c0827a jmp 0x12c082e3 */
  goto L_12c082e3;
L_12c0827c:;
  /* 12c0827c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0827f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08282 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c08286 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08289 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0828c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c0828f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c08292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08295 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08298 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c0829b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0829d jne 0x12c082ba */
  if (!C.zf) goto L_12c082ba;
  /* 12c0829f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c082a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c082a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c082aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c082ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c082af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c082b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c082b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c082b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c082ba:;
  /* 12c082ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c082bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c082c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c082c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c082c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c082ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c082cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c082d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c082d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c082d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c082dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12c082e3:;
  /* 12c082e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c082e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c082e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c082eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c082ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c082f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c082f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12c082f7:;
  /* 12c082f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c082fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c082fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08300 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c08302 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c08305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08308 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0830b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0830e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12c08311 jmp 0x12c085d2 */
  goto L_12c085d2;
L_12c08316:;
  /* 12c08316 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c08319 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0831c jge 0x12c085d2 */
  if ((C.sf==C.of)) goto L_12c085d2;
  /* 12c08322 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c08325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08328 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0832b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c0832d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c08330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08333 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08336 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08339 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12c0833c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0833f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c08345 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c08348 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0834b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c0834e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c08351 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c08354 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08357 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c0835a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0835e jbe 0x12c08367 */
  if ((C.cf||C.zf)) goto L_12c08367;
  /* 12c08360 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12c08367:;
  /* 12c08367 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0836a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0836d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0836f jne 0x12c084b0 */
  if (!C.zf) goto L_12c084b0;
  /* 12c08375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08378 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c0837b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0837e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c08381 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08385 jbe 0x12c0838e */
  if ((C.cf||C.zf)) goto L_12c0838e;
  /* 12c08387 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12c0838e:;
  /* 12c0838e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08391 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08394 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08397 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0839a jne 0x12c08470 */
  if (!C.zf) goto L_12c08470;
  /* 12c083a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c083a4 jae 0x12c08405 */
  if (!C.cf) goto L_12c08405;
  /* 12c083a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c083ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c083ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c083b0 not edx */
  EDX = (~(EDX));
  /* 12c083b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c083b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c083b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c083bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c083be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c083c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c083c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c083c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c083cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c083ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c083d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c083d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c083d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c083da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c083dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c083e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c083e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c083e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c083e9 jne 0x12c08403 */
  if (!C.zf) goto L_12c08403;
  /* 12c083eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c083f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c083f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c083f5 not edx */
  EDX = (~(EDX));
  /* 12c083f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c083fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c083fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c083fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08401 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c08403:;
  /* 12c08403 jmp 0x12c08470 */
  goto L_12c08470;
L_12c08405:;
  /* 12c08405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c08408 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0840b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c08410 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c08412 not eax */
  EAX = (~(EAX));
  /* 12c08414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0841a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c08421 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08426 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08429 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12c08430 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08433 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08436 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c08439 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c0843c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0843f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08442 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c08445 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08448 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0844b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c0844f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c08451 jne 0x12c08470 */
  if (!C.zf) goto L_12c08470;
  /* 12c08453 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c08456 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08459 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c0845e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c08460 not eax */
  EAX = (~(EAX));
  /* 12c08462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08468 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0846a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0846d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c08470:;
  /* 12c08470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08473 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c08476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08479 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c0847c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c0847f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08482 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c08485 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08488 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c0848b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12c0848e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c08491 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08494 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c08497 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0849a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c0849d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c084a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c084a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c084a7 jbe 0x12c084b0 */
  if ((C.cf||C.zf)) goto L_12c084b0;
  /* 12c084a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12c084b0:;
  /* 12c084b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c084b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c084b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12c084b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c084bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c084c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c084c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c084c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c084ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c084d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c084d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c084da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c084e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c084e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c084ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c084ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c084f2 jne 0x12c085be */
  if (!C.zf) goto L_12c085be;
  /* 12c084f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c084fc jae 0x12c08558 */
  if (!C.cf) goto L_12c08558;
  /* 12c084fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08501 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08504 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c08508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0850b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0850e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c08511 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c08513 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08516 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08519 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c0851c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0851e jne 0x12c08536 */
  if (!C.zf) goto L_12c08536;
  /* 12c08520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c08525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c0852a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0852d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0852f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c08531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c08536:;
  /* 12c08536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c0853b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0853e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08543 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08546 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c0854a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0854c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0854f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08552 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c08556 jmp 0x12c085be */
  goto L_12c085be;
L_12c08558:;
  /* 12c08558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0855b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0855e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c08562 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08565 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08568 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c0856b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c0856d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c08570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08573 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c08576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c08578 jne 0x12c08595 */
  if (!C.zf) goto L_12c08595;
  /* 12c0857a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0857d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c08585 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c08587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0858a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0858d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0858f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08592 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c08595:;
  /* 12c08595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0859b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c085a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c085a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c085a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c085a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c085af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c085b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c085b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c085b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12c085be:;
  /* 12c085be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c085c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c085c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c085c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c085c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c085cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c085cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12c085d2:;
  /* 12c085d2 mov eax, 1 */
  EAX = (0x1u);
L_12c085d7:;
  /* 12c085d7 mov esp, ebp */
  ESP = (EBP);
  /* 12c085d9 pop ebp */
  EBP = (pop32());
  /* 12c085da ret  */
  ESPCHK(0x12c07ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x12c085e0 (304 bytes, 79 insns) */
void f_12c085e0(void) {
  FTRACE(0x12c085e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c085e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c085e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c085e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c085e4 cmp dword ptr [0x12c2fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c085eb je 0x12c0870c */
  if (C.zf) goto L_12c0870c;
  /* 12c085f1 mov eax, dword ptr [0x12c2fe18] */
  EAX = (r32((uint32_t)(0x12c2fe18)));
  /* 12c085f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12c085f9 mov ecx, dword ptr [0x12c2fe20] */
  ECX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c085ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c08602 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c08607 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c0860c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c08611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08614 push eax */
  push32((uint32_t)(EAX));
  /* 12c08615 call dword ptr [0x12c30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30314))), 0x12c0861bu);
  /* 12c0861b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c08620 mov ecx, dword ptr [0x12c2fe18] */
  ECX = (r32((uint32_t)(0x12c2fe18)));
  /* 12c08626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08628 mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c0862d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c08630 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08632 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08638 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c0863b mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08640 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c08643 mov edx, dword ptr [0x12c2fe18] */
  EDX = (r32((uint32_t)(0x12c2fe18)));
  /* 12c08649 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12c08654 mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0865c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12c0865f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c08662 mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0866a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12c0866d mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c08676 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12c0867a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0867c jne 0x12c08692 */
  if (!C.zf) goto L_12c08692;
  /* 12c0867e mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c08687 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12c08689 mov ecx, dword ptr [0x12c2fe20] */
  ECX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c0868f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12c08692:;
  /* 12c08692 mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c08698 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0869c jne 0x12c08702 */
  if (!C.zf) goto L_12c08702;
  /* 12c0869e cmp dword ptr [0x12c2fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c086a5 jle 0x12c08702 */
  if ((C.zf||C.sf!=C.of)) goto L_12c08702;
  /* 12c086a7 mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c086ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c086af push ecx */
  push32((uint32_t)(ECX));
  /* 12c086b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c086b2 mov edx, dword ptr [0x12c2fe2c] */
  EDX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c086b8 push edx */
  push32((uint32_t)(EDX));
  /* 12c086b9 call dword ptr [0x12c30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30310))), 0x12c086bfu);
  /* 12c086bf mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c086c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c086c7 mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c086cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c086cf mov edx, dword ptr [0x12c2fe20] */
  EDX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c086d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c086d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c086da push ecx */
  push32((uint32_t)(ECX));
  /* 12c086db mov eax, dword ptr [0x12c2fe20] */
  EAX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c086e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c086e3 push eax */
  push32((uint32_t)(EAX));
  /* 12c086e4 mov ecx, dword ptr [0x12c2fe20] */
  ECX = (r32((uint32_t)(0x12c2fe20)));
  /* 12c086ea push ecx */
  push32((uint32_t)(ECX));
  /* 12c086eb call 0x12c0ad10 */
  push32(0x12c086f0u); f_12c0ad10();
  /* 12c086f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c086f3 mov edx, dword ptr [0x12c2fe24] */
  EDX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c086f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c086fc mov dword ptr [0x12c2fe24], edx */
  w32((uint32_t)(0x12c2fe24), (EDX));
L_12c08702:;
  /* 12c08702 mov dword ptr [0x12c2fe20], 0 */
  w32((uint32_t)(0x12c2fe20), (0x0u));
L_12c0870c:;
  /* 12c0870c mov esp, ebp */
  ESP = (EBP);
  /* 12c0870e pop ebp */
  EBP = (pop32());
  /* 12c0870f ret  */
  ESPCHK(0x12c085e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x12c08710 (1565 bytes, 343 insns) */
void f_12c08710(void) {
  FTRACE(0x12c08710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c08710 push ebp */
  push32((uint32_t)(EBP));
  /* 12c08711 mov ebp, esp */
  EBP = (ESP);
  /* 12c08713 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08719 mov eax, dword ptr [0x12c2fe24] */
  EAX = (r32((uint32_t)(0x12c2fe24)));
  /* 12c0871e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c08721 push eax */
  push32((uint32_t)(EAX));
  /* 12c08722 mov ecx, dword ptr [0x12c2fe28] */
  ECX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c08728 push ecx */
  push32((uint32_t)(ECX));
  /* 12c08729 call dword ptr [0x12c302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e8))), 0x12c0872fu);
  /* 12c0872f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08731 je 0x12c0873b */
  if (C.zf) goto L_12c0873b;
  /* 12c08733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c08736 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c0873b:;
  /* 12c0873b mov edx, dword ptr [0x12c2fe28] */
  EDX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c08741 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12c08747 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12c08751 jmp 0x12c08762 */
  goto L_12c08762;
L_12c08753:;
  /* 12c08753 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12c08759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0875c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12c08762:;
  /* 12c08762 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12c08768 cmp ecx, dword ptr [0x12c2fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0876e jge 0x12c08d27 */
  if ((C.sf==C.of)) goto L_12c08d27;
  /* 12c08774 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c0877a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c0877d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12c08783 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12c08788 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c0878e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0878f call dword ptr [0x12c302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e8))), 0x12c08795u);
  /* 12c08795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08797 je 0x12c087a3 */
  if (C.zf) goto L_12c087a3;
  /* 12c08799 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12c0879e jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c087a3:;
  /* 12c087a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c087a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c087ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12c087b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c087b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c087be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c087c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c087c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c087ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c087cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12c087d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12c087e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c087e8 jmp 0x12c087f3 */
  goto L_12c087f3;
L_12c087ea:;
  /* 12c087ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c087ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c087f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c087f3:;
  /* 12c087f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c087f7 jge 0x12c08ceb */
  if ((C.sf==C.of)) goto L_12c08ceb;
  /* 12c087fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12c08807 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12c08811 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12c0881b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12c08825 jmp 0x12c08836 */
  goto L_12c08836;
L_12c08827:;
  /* 12c08827 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c0882d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08830 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12c08836:;
  /* 12c08836 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0883d jge 0x12c08852 */
  if ((C.sf==C.of)) goto L_12c08852;
  /* 12c0883f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c08845 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12c08850 jmp 0x12c08827 */
  goto L_12c08827;
L_12c08852:;
  /* 12c08852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08856 jl 0x12c08c8d */
  if ((C.sf!=C.of)) goto L_12c08c8d;
  /* 12c0885c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c08861 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c08867 push ecx */
  push32((uint32_t)(ECX));
  /* 12c08868 call dword ptr [0x12c302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e8))), 0x12c0886eu);
  /* 12c0886e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08870 je 0x12c0887c */
  if (C.zf) goto L_12c0887c;
  /* 12c08872 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12c08877 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c0887c:;
  /* 12c0887c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c08882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c08885 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12c0888f jmp 0x12c088a0 */
  goto L_12c088a0;
L_12c08891:;
  /* 12c08891 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12c08897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0889a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12c088a0:;
  /* 12c088a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c088a7 jge 0x12c08a24 */
  if ((C.sf==C.of)) goto L_12c08a24;
  /* 12c088ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c088b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c088b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12c088b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c088bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c088c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12c088cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c088d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c088d5 jne 0x12c088e2 */
  if (!C.zf) goto L_12c088e2;
  /* 12c088d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12c088dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c088e0 je 0x12c088ec */
  if (C.zf) goto L_12c088ec;
L_12c088e2:;
  /* 12c088e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12c088e7 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c088ec:;
  /* 12c088ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c088f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c088f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12c088fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c08900 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12c08906 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12c0890c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0890f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c08911 je 0x12c08949 */
  if (C.zf) goto L_12c08949;
  /* 12c08913 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c08919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0891c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12c08922 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0892c jle 0x12c08938 */
  if ((C.zf||C.sf!=C.of)) goto L_12c08938;
  /* 12c0892e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12c08933 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08938:;
  /* 12c08938 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12c0893e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08941 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12c08947 jmp 0x12c0898b */
  goto L_12c0898b;
L_12c08949:;
  /* 12c08949 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c0894f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c08952 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08955 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12c0895b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08962 jle 0x12c0896e */
  if ((C.zf||C.sf!=C.of)) goto L_12c0896e;
  /* 12c08964 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12c0896e:;
  /* 12c0896e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c08974 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12c0897b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0897e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c08984 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12c0898b:;
  /* 12c0898b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08992 jl 0x12c089ad */
  if ((C.sf!=C.of)) goto L_12c089ad;
  /* 12c08994 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c0899a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0899d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0899f jne 0x12c089ad */
  if (!C.zf) goto L_12c089ad;
  /* 12c089a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c089ab jle 0x12c089b7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c089b7;
L_12c089ad:;
  /* 12c089ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12c089b2 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c089b7:;
  /* 12c089b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c089bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c089c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c089c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c089cc je 0x12c089d8 */
  if (C.zf) goto L_12c089d8;
  /* 12c089ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12c089d3 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c089d8:;
  /* 12c089d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c089de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c089e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12c089ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c089f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c089f6 jb 0x12c088ec */
  if (C.cf) goto L_12c088ec;
  /* 12c089fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c08a02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08a08 je 0x12c08a14 */
  if (C.zf) goto L_12c08a14;
  /* 12c08a0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12c08a0f jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08a14:;
  /* 12c08a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c08a17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08a1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c08a1f jmp 0x12c08891 */
  goto L_12c08891;
L_12c08a24:;
  /* 12c08a24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c08a27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c08a29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08a2f je 0x12c08a3b */
  if (C.zf) goto L_12c08a3b;
  /* 12c08a31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12c08a36 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08a3b:;
  /* 12c08a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c08a3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12c08a44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12c08a4b jmp 0x12c08a56 */
  goto L_12c08a56;
L_12c08a4d:;
  /* 12c08a4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08a53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c08a56:;
  /* 12c08a56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08a5a jge 0x12c08c8d */
  if ((C.sf==C.of)) goto L_12c08c8d;
  /* 12c08a60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12c08a6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12c08a70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12c08a76:;
  /* 12c08a76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c08a7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c08a7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12c08a85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c08a8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08a91 je 0x12c08bba */
  if (C.zf) goto L_12c08bba;
  /* 12c08a97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08a9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12c08aa0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08aa7 je 0x12c08bba */
  if (C.zf) goto L_12c08bba;
  /* 12c08aad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c08ab3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08ab9 jb 0x12c08ace */
  if (C.cf) goto L_12c08ace;
  /* 12c08abb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c08ac1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08ac6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08acc jb 0x12c08ad8 */
  if (C.cf) goto L_12c08ad8;
L_12c08ace:;
  /* 12c08ace mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12c08ad3 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08ad8:;
  /* 12c08ad8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c08ade and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c08ae4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12c08aea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12c08af0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08af3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c08af6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08af9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08afe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12c08b04:;
  /* 12c08b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08b07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08b0d je 0x12c08b2e */
  if (C.zf) goto L_12c08b2e;
  /* 12c08b0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08b12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08b18 jne 0x12c08b1c */
  if (!C.zf) goto L_12c08b1c;
  /* 12c08b1a jmp 0x12c08b2e */
  goto L_12c08b2e;
L_12c08b1c:;
  /* 12c08b1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c08b21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12c08b24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08b27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08b29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c08b2c jmp 0x12c08b04 */
  goto L_12c08b04;
L_12c08b2e:;
  /* 12c08b2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c08b31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08b37 jne 0x12c08b43 */
  if (!C.zf) goto L_12c08b43;
  /* 12c08b39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12c08b3e jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08b43:;
  /* 12c08b43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c08b49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c08b4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c08b4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08b51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12c08b57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08b5e jle 0x12c08b6a */
  if ((C.zf||C.sf!=C.of)) goto L_12c08b6a;
  /* 12c08b60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12c08b6a:;
  /* 12c08b6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c08b70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08b73 je 0x12c08b7f */
  if (C.zf) goto L_12c08b7f;
  /* 12c08b75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12c08b7a jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08b7f:;
  /* 12c08b7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c08b85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c08b88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08b8e je 0x12c08b9a */
  if (C.zf) goto L_12c08b9a;
  /* 12c08b90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12c08b95 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08b9a:;
  /* 12c08b9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c08ba0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12c08ba6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12c08bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08baf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12c08bb5 jmp 0x12c08a76 */
  goto L_12c08a76;
L_12c08bba:;
  /* 12c08bba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08bc1 je 0x12c08c31 */
  if (C.zf) goto L_12c08c31;
  /* 12c08bc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08bc7 jge 0x12c08bfb */
  if ((C.sf==C.of)) goto L_12c08bfb;
  /* 12c08bc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c08bce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08bd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08bd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12c08bd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08bdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12c08be1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c08be6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08be9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08beb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12c08bf1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08bf3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12c08bf9 jmp 0x12c08c31 */
  goto L_12c08c31;
L_12c08bfb:;
  /* 12c08bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08bfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08c01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c08c06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08c08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12c08c0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08c10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12c08c16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08c19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08c1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c08c21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c08c23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12c08c29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08c2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12c08c31:;
  /* 12c08c31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c08c37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08c3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08c40 jne 0x12c08c54 */
  if (!C.zf) goto L_12c08c54;
  /* 12c08c42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c08c45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12c08c4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08c52 je 0x12c08c5e */
  if (C.zf) goto L_12c08c5e;
L_12c08c54:;
  /* 12c08c54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12c08c59 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08c5e:;
  /* 12c08c5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12c08c64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c08c67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08c6d je 0x12c08c79 */
  if (C.zf) goto L_12c08c79;
  /* 12c08c6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12c08c74 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08c79:;
  /* 12c08c79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12c08c7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08c82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12c08c88 jmp 0x12c08a4d */
  goto L_12c08a4d;
L_12c08c8d:;
  /* 12c08c8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c08c90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c08c96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12c08c9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08ca0 jne 0x12c08cba */
  if (!C.zf) goto L_12c08cba;
  /* 12c08ca2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c08ca5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c08cab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12c08cb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08cb8 je 0x12c08cc1 */
  if (C.zf) goto L_12c08cc1;
L_12c08cba:;
  /* 12c08cba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12c08cbf jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08cc1:;
  /* 12c08cc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c08cc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08ccd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12c08cd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c08cd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08cdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c08cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08ce1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c08ce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c08ce6 jmp 0x12c087ea */
  goto L_12c087ea;
L_12c08ceb:;
  /* 12c08ceb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c08cf1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12c08cf7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08cf9 jne 0x12c08d0c */
  if (!C.zf) goto L_12c08d0c;
  /* 12c08cfb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c08d01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12c08d07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08d0a je 0x12c08d13 */
  if (C.zf) goto L_12c08d13;
L_12c08d0c:;
  /* 12c08d0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12c08d11 jmp 0x12c08d29 */
  goto L_12c08d29;
L_12c08d13:;
  /* 12c08d13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c08d19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08d1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12c08d22 jmp 0x12c08753 */
  goto L_12c08753;
L_12c08d27:;
  /* 12c08d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c08d29:;
  /* 12c08d29 mov esp, ebp */
  ESP = (EBP);
  /* 12c08d2b pop ebp */
  EBP = (pop32());
  /* 12c08d2c ret  */
  ESPCHK(0x12c08710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x12c08d30 (250 bytes, 92 insns) */
void f_12c08d30(void) {
  FTRACE(0x12c08d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c08d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c08d31 mov ebp, esp */
  EBP = (ESP);
  /* 12c08d33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08d36 push ebx */
  push32((uint32_t)(EBX));
  /* 12c08d37 push esi */
  push32((uint32_t)(ESI));
  /* 12c08d38 push edi */
  push32((uint32_t)(EDI));
  /* 12c08d39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c08d3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c08d3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c08d42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12c08d45:;
  /* 12c08d45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08d49 jne 0x12c08d69 */
  if (!C.zf) goto L_12c08d69;
  /* 12c08d4b push 0x12c29df8 */
  push32((uint32_t)(0x12c29df8u));
  /* 12c08d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c08d52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12c08d54 push 0x12c29dec */
  push32((uint32_t)(0x12c29decu));
  /* 12c08d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c08d5b call 0x12c01ee0 */
  push32(0x12c08d60u); f_12c01ee0();
  /* 12c08d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08d63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08d66 jne 0x12c08d69 */
  if (!C.zf) goto L_12c08d69;
  /* 12c08d68 int3  */
  x86_unimpl("int3 @ 0x12c08d68");
L_12c08d69:;
  /* 12c08d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c08d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c08d6d jne 0x12c08d45 */
  if (!C.zf) goto L_12c08d45;
L_12c08d6f:;
  /* 12c08d6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08d73 jne 0x12c08d93 */
  if (!C.zf) goto L_12c08d93;
  /* 12c08d75 push 0x12c29ddc */
  push32((uint32_t)(0x12c29ddcu));
  /* 12c08d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c08d7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12c08d7e push 0x12c29dec */
  push32((uint32_t)(0x12c29decu));
  /* 12c08d83 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c08d85 call 0x12c01ee0 */
  push32(0x12c08d8au); f_12c01ee0();
  /* 12c08d8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08d90 jne 0x12c08d93 */
  if (!C.zf) goto L_12c08d93;
  /* 12c08d92 int3  */
  x86_unimpl("int3 @ 0x12c08d92");
L_12c08d93:;
  /* 12c08d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08d97 jne 0x12c08d6f */
  if (!C.zf) goto L_12c08d6f;
  /* 12c08d99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08d9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12c08da3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08da9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c08dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08daf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08db2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c08db4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08db7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12c08dbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c08dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c08dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c08dc5 push edx */
  push32((uint32_t)(EDX));
  /* 12c08dc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08dc9 push eax */
  push32((uint32_t)(EAX));
  /* 12c08dca call 0x12c09db0 */
  push32(0x12c08dcfu); f_12c09db0();
  /* 12c08dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08dd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c08dd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08dd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c08ddb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08dde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08de1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c08de4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08de7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08deb jl 0x12c08e0f */
  if ((C.sf!=C.of)) goto L_12c08e0f;
  /* 12c08ded mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08df0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c08df2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c08df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c08dfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12c08e00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08e03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c08e05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08e08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08e0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c08e0d jmp 0x12c08e20 */
  goto L_12c08e20;
L_12c08e0f:;
  /* 12c08e0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08e12 push edx */
  push32((uint32_t)(EDX));
  /* 12c08e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c08e15 call 0x12c09b30 */
  push32(0x12c08e1au); f_12c09b30();
  /* 12c08e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08e1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12c08e20:;
  /* 12c08e20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c08e23 pop edi */
  EDI = (pop32());
  /* 12c08e24 pop esi */
  ESI = (pop32());
  /* 12c08e25 pop ebx */
  EBX = (pop32());
  /* 12c08e26 mov esp, ebp */
  ESP = (EBP);
  /* 12c08e28 pop ebp */
  EBP = (pop32());
  /* 12c08e29 ret  */
  ESPCHK(0x12c08d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x12c08e30 (183 bytes, 58 insns) */
void f_12c08e30(void) {
  FTRACE(0x12c08e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c08e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c08e31 mov ebp, esp */
  EBP = (ESP);
  /* 12c08e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08e3c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08e41 ja 0x12c08e5a */
  if ((!C.cf&&!C.zf)) goto L_12c08e5a;
  /* 12c08e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08e46 mov edx, dword ptr [0x12c2cc98] */
  EDX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c08e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08e4e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12c08e52 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12c08e55 jmp 0x12c08ee3 */
  goto L_12c08ee3;
L_12c08e5a:;
  /* 12c08e5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08e5d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c08e60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c08e66 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c08e6c mov edx, dword ptr [0x12c2cc98] */
  EDX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c08e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08e74 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12c08e78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12c08e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08e7f je 0x12c08ea3 */
  if (C.zf) goto L_12c08ea3;
  /* 12c08e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08e84 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c08e87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c08e8d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12c08e90 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c08e93 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12c08e96 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12c08e9a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12c08ea1 jmp 0x12c08eb4 */
  goto L_12c08eb4;
L_12c08ea3:;
  /* 12c08ea3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c08ea6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12c08ea9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12c08ead mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12c08eb4:;
  /* 12c08eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c08eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c08eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c08eba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12c08ebd push ecx */
  push32((uint32_t)(ECX));
  /* 12c08ebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c08ec1 push edx */
  push32((uint32_t)(EDX));
  /* 12c08ec2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c08ec5 push eax */
  push32((uint32_t)(EAX));
  /* 12c08ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c08ec8 call 0x12c0b050 */
  push32(0x12c08ecdu); f_12c0b050();
  /* 12c08ecd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08ed2 jne 0x12c08ed8 */
  if (!C.zf) goto L_12c08ed8;
  /* 12c08ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08ed6 jmp 0x12c08ee3 */
  goto L_12c08ee3;
L_12c08ed8:;
  /* 12c08ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08edb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c08ee0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12c08ee3:;
  /* 12c08ee3 mov esp, ebp */
  ESP = (EBP);
  /* 12c08ee5 pop ebp */
  EBP = (pop32());
  /* 12c08ee6 ret  */
  ESPCHK(0x12c08e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x12c08ef0 (836 bytes, 238 insns) */
void f_12c08ef0(void) {
  FTRACE(0x12c08ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c08ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c08ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12c08ef3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c08ef6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c08ef8 call 0x12c06820 */
  push32(0x12c08efdu); f_12c06820();
  /* 12c08efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08f03 push eax */
  push32((uint32_t)(EAX));
  /* 12c08f04 call 0x12c09240 */
  push32(0x12c08f09u); f_12c09240();
  /* 12c08f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08f0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c08f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c08f12 cmp ecx, dword ptr [0x12c2fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08f18 jne 0x12c08f2b */
  if (!C.zf) goto L_12c08f2b;
  /* 12c08f1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c08f1c call 0x12c068c0 */
  push32(0x12c08f21u); f_12c068c0();
  /* 12c08f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08f26 jmp 0x12c09230 */
  goto L_12c09230;
L_12c08f2b:;
  /* 12c08f2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08f2f jne 0x12c08f4c */
  if (!C.zf) goto L_12c08f4c;
  /* 12c08f31 call 0x12c09320 */
  push32(0x12c08f36u); f_12c09320();
  /* 12c08f36 call 0x12c093a0 */
  push32(0x12c08f3bu); f_12c093a0();
  /* 12c08f3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c08f3d call 0x12c068c0 */
  push32(0x12c08f42u); f_12c068c0();
  /* 12c08f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08f47 jmp 0x12c09230 */
  goto L_12c09230;
L_12c08f4c:;
  /* 12c08f4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c08f53 jmp 0x12c08f5e */
  goto L_12c08f5e;
L_12c08f55:;
  /* 12c08f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08f5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c08f5e:;
  /* 12c08f5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08f62 jae 0x12c090af */
  if (!C.cf) goto L_12c090af;
  /* 12c08f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08f6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c08f6e mov ecx, dword ptr [eax + 0x12c2ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x12c2ceb8)));
  /* 12c08f74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08f77 jne 0x12c090aa */
  if (!C.zf) goto L_12c090aa;
  /* 12c08f7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c08f84 jmp 0x12c08f8f */
  goto L_12c08f8f;
L_12c08f86:;
  /* 12c08f86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08f89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08f8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12c08f8f:;
  /* 12c08f8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08f96 jae 0x12c08fa4 */
  if (!C.cf) goto L_12c08fa4;
  /* 12c08f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c08f9b mov byte ptr [eax + 0x12c2fd00], 0 */
  w8((uint32_t)(EAX + 0x12c2fd00), (0x0u));
  /* 12c08fa2 jmp 0x12c08f86 */
  goto L_12c08f86;
L_12c08fa4:;
  /* 12c08fa4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c08fab jmp 0x12c08fb6 */
  goto L_12c08fb6;
L_12c08fad:;
  /* 12c08fad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c08fb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08fb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c08fb6:;
  /* 12c08fb6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c08fba jae 0x12c09037 */
  if (!C.cf) goto L_12c09037;
  /* 12c08fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c08fbf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c08fc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c08fc5 lea ecx, [edx + eax*8 + 0x12c2cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12c2cec8));
  /* 12c08fcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c08fcf jmp 0x12c08fda */
  goto L_12c08fda;
L_12c08fd1:;
  /* 12c08fd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c08fd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c08fd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c08fda:;
  /* 12c08fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c08fdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c08fdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c08fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c08fe3 je 0x12c09032 */
  if (C.zf) goto L_12c09032;
  /* 12c08fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c08fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c08fea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c08fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c08fef je 0x12c09032 */
  if (C.zf) goto L_12c09032;
  /* 12c08ff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c08ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c08ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c08ff8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c08ffb jmp 0x12c09006 */
  goto L_12c09006;
L_12c08ffd:;
  /* 12c08ffd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09003 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c09006:;
  /* 12c09006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0900b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c0900e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09011 ja 0x12c09030 */
  if ((!C.cf&&!C.zf)) goto L_12c09030;
  /* 12c09013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c09019 mov dl, byte ptr [eax + 0x12c2fd01] */
  DL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c0901f or dl, byte ptr [ecx + 0x12c2ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12c2ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12c09025 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09028 mov byte ptr [eax + 0x12c2fd01], dl */
  w8((uint32_t)(EAX + 0x12c2fd01), (DL));
  /* 12c0902e jmp 0x12c08ffd */
  goto L_12c08ffd;
L_12c09030:;
  /* 12c09030 jmp 0x12c08fd1 */
  goto L_12c08fd1;
L_12c09032:;
  /* 12c09032 jmp 0x12c08fad */
  goto L_12c08fad;
L_12c09037:;
  /* 12c09037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0903a mov dword ptr [0x12c2fb64], ecx */
  w32((uint32_t)(0x12c2fb64), (ECX));
  /* 12c09040 mov dword ptr [0x12c2fbec], 1 */
  w32((uint32_t)(0x12c2fbec), (0x1u));
  /* 12c0904a mov edx, dword ptr [0x12c2fb64] */
  EDX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c09050 push edx */
  push32((uint32_t)(EDX));
  /* 12c09051 call 0x12c092a0 */
  push32(0x12c09056u); f_12c092a0();
  /* 12c09056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09059 mov dword ptr [0x12c2fe04], eax */
  w32((uint32_t)(0x12c2fe04), (EAX));
  /* 12c0905e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c09065 jmp 0x12c09070 */
  goto L_12c09070;
L_12c09067:;
  /* 12c09067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0906a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0906d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c09070:;
  /* 12c09070 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09074 jae 0x12c09094 */
  if (!C.cf) goto L_12c09094;
  /* 12c09076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09079 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0907c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0907f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c09082 mov cx, word ptr [ecx + eax*2 + 0x12c2cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12c2cebc)));
  /* 12c0908a mov word ptr [edx*2 + 0x12c2fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x12c2fbe0), (CX));
  /* 12c09092 jmp 0x12c09067 */
  goto L_12c09067;
L_12c09094:;
  /* 12c09094 call 0x12c093a0 */
  push32(0x12c09099u); f_12c093a0();
  /* 12c09099 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c0909b call 0x12c068c0 */
  push32(0x12c090a0u); f_12c068c0();
  /* 12c090a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c090a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c090a5 jmp 0x12c09230 */
  goto L_12c09230;
L_12c090aa:;
  /* 12c090aa jmp 0x12c08f55 */
  goto L_12c08f55;
L_12c090af:;
  /* 12c090af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12c090b2 push edx */
  push32((uint32_t)(EDX));
  /* 12c090b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c090b6 push eax */
  push32((uint32_t)(EAX));
  /* 12c090b7 call dword ptr [0x12c3033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3033c))), 0x12c090bdu);
  /* 12c090bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c090c0 jne 0x12c09202 */
  if (!C.zf) goto L_12c09202;
  /* 12c090c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c090cd jmp 0x12c090d8 */
  goto L_12c090d8;
L_12c090cf:;
  /* 12c090cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c090d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c090d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12c090d8:;
  /* 12c090d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c090df jae 0x12c090ed */
  if (!C.cf) goto L_12c090ed;
  /* 12c090e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c090e4 mov byte ptr [edx + 0x12c2fd00], 0 */
  w8((uint32_t)(EDX + 0x12c2fd00), (0x0u));
  /* 12c090eb jmp 0x12c090cf */
  goto L_12c090cf;
L_12c090ed:;
  /* 12c090ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c090f0 mov dword ptr [0x12c2fb64], eax */
  w32((uint32_t)(0x12c2fb64), (EAX));
  /* 12c090f5 mov dword ptr [0x12c2fe04], 0 */
  w32((uint32_t)(0x12c2fe04), (0x0u));
  /* 12c090ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09103 jbe 0x12c091be */
  if ((C.cf||C.zf)) goto L_12c091be;
  /* 12c09109 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12c0910c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12c0910f jmp 0x12c0911a */
  goto L_12c0911a;
L_12c09111:;
  /* 12c09111 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c09114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09117 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12c0911a:;
  /* 12c0911a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0911d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0911f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c09121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c09123 je 0x12c0916c */
  if (C.zf) goto L_12c0916c;
  /* 12c09125 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c09128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0912a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c0912d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0912f je 0x12c0916c */
  if (C.zf) goto L_12c0916c;
  /* 12c09131 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c09134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c09138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c0913b jmp 0x12c09146 */
  goto L_12c09146;
L_12c0913d:;
  /* 12c0913d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c09146:;
  /* 12c09146 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c09149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0914b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c0914e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09151 ja 0x12c0916a */
  if ((!C.cf&&!C.zf)) goto L_12c0916a;
  /* 12c09153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09156 mov cl, byte ptr [eax + 0x12c2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c0915c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12c0915f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09162 mov byte ptr [edx + 0x12c2fd01], cl */
  w8((uint32_t)(EDX + 0x12c2fd01), (CL));
  /* 12c09168 jmp 0x12c0913d */
  goto L_12c0913d;
L_12c0916a:;
  /* 12c0916a jmp 0x12c09111 */
  goto L_12c09111;
L_12c0916c:;
  /* 12c0916c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12c09173 jmp 0x12c0917e */
  goto L_12c0917e;
L_12c09175:;
  /* 12c09175 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0917b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c0917e:;
  /* 12c0917e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09185 jae 0x12c0919e */
  if (!C.cf) goto L_12c0919e;
  /* 12c09187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0918a mov dl, byte ptr [ecx + 0x12c2fd01] */
  DL = (r8((uint32_t)(ECX + 0x12c2fd01)));
  /* 12c09190 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12c09193 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c09196 mov byte ptr [eax + 0x12c2fd01], dl */
  w8((uint32_t)(EAX + 0x12c2fd01), (DL));
  /* 12c0919c jmp 0x12c09175 */
  goto L_12c09175;
L_12c0919e:;
  /* 12c0919e mov ecx, dword ptr [0x12c2fb64] */
  ECX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c091a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c091a5 call 0x12c092a0 */
  push32(0x12c091aau); f_12c092a0();
  /* 12c091aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c091ad mov dword ptr [0x12c2fe04], eax */
  w32((uint32_t)(0x12c2fe04), (EAX));
  /* 12c091b2 mov dword ptr [0x12c2fbec], 1 */
  w32((uint32_t)(0x12c2fbec), (0x1u));
  /* 12c091bc jmp 0x12c091c8 */
  goto L_12c091c8;
L_12c091be:;
  /* 12c091be mov dword ptr [0x12c2fbec], 0 */
  w32((uint32_t)(0x12c2fbec), (0x0u));
L_12c091c8:;
  /* 12c091c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c091cf jmp 0x12c091da */
  goto L_12c091da;
L_12c091d1:;
  /* 12c091d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c091d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c091d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c091da:;
  /* 12c091da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c091de jae 0x12c091ef */
  if (!C.cf) goto L_12c091ef;
  /* 12c091e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c091e3 mov word ptr [eax*2 + 0x12c2fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12c2fbe0), (0x0u));
  /* 12c091ed jmp 0x12c091d1 */
  goto L_12c091d1;
L_12c091ef:;
  /* 12c091ef call 0x12c093a0 */
  push32(0x12c091f4u); f_12c093a0();
  /* 12c091f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c091f6 call 0x12c068c0 */
  push32(0x12c091fbu); f_12c068c0();
  /* 12c091fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c091fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09200 jmp 0x12c09230 */
  goto L_12c09230;
L_12c09202:;
  /* 12c09202 cmp dword ptr [0x12c2e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09209 je 0x12c09223 */
  if (C.zf) goto L_12c09223;
  /* 12c0920b call 0x12c09320 */
  push32(0x12c09210u); f_12c09320();
  /* 12c09210 call 0x12c093a0 */
  push32(0x12c09215u); f_12c093a0();
  /* 12c09215 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c09217 call 0x12c068c0 */
  push32(0x12c0921cu); f_12c068c0();
  /* 12c0921c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0921f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09221 jmp 0x12c09230 */
  goto L_12c09230;
L_12c09223:;
  /* 12c09223 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c09225 call 0x12c068c0 */
  push32(0x12c0922au); f_12c068c0();
  /* 12c0922a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0922d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c09230:;
  /* 12c09230 mov esp, ebp */
  ESP = (EBP);
  /* 12c09232 pop ebp */
  EBP = (pop32());
  /* 12c09233 ret  */
  ESPCHK(0x12c08ef0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12c09240 (89 bytes, 21 insns) */
void f_12c09240(void) {
  FTRACE(0x12c09240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09240 push ebp */
  push32((uint32_t)(EBP));
  /* 12c09241 mov ebp, esp */
  EBP = (ESP);
  /* 12c09243 mov dword ptr [0x12c2e680], 0 */
  w32((uint32_t)(0x12c2e680), (0x0u));
  /* 12c0924d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09251 jne 0x12c09265 */
  if (!C.zf) goto L_12c09265;
  /* 12c09253 mov dword ptr [0x12c2e680], 1 */
  w32((uint32_t)(0x12c2e680), (0x1u));
  /* 12c0925d call dword ptr [0x12c30344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30344))), 0x12c09263u);
  /* 12c09263 jmp 0x12c09297 */
  goto L_12c09297;
L_12c09265:;
  /* 12c09265 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09269 jne 0x12c0927d */
  if (!C.zf) goto L_12c0927d;
  /* 12c0926b mov dword ptr [0x12c2e680], 1 */
  w32((uint32_t)(0x12c2e680), (0x1u));
  /* 12c09275 call dword ptr [0x12c30340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30340))), 0x12c0927bu);
  /* 12c0927b jmp 0x12c09297 */
  goto L_12c09297;
L_12c0927d:;
  /* 12c0927d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09281 jne 0x12c09294 */
  if (!C.zf) goto L_12c09294;
  /* 12c09283 mov dword ptr [0x12c2e680], 1 */
  w32((uint32_t)(0x12c2e680), (0x1u));
  /* 12c0928d mov eax, dword ptr [0x12c2e6a0] */
  EAX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c09292 jmp 0x12c09297 */
  goto L_12c09297;
L_12c09294:;
  /* 12c09294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12c09297:;
  /* 12c09297 pop ebp */
  EBP = (pop32());
  /* 12c09298 ret  */
  ESPCHK(0x12c09240u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x12c092a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12c092a0(void) {
  FTRACE(0x12c092a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c092a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c092a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c092a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c092a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c092a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c092aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c092ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c092b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c092b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c092ba ja 0x12c092ea */
  if ((!C.cf&&!C.zf)) goto L_12c092ea;
  /* 12c092bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c092bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c092c1 mov dl, byte ptr [eax + 0x12c09304] */
  DL = (r8((uint32_t)(EAX + 0x12c09304)));
  /* 12c092c7 jmp dword ptr [edx*4 + 0x12c092f0] */
  switch (EDX) {
    case 0: goto L_12c092ce;
    case 1: goto L_12c092d5;
    case 2: goto L_12c092dc;
    case 3: goto L_12c092e3;
    case 4: goto L_12c092ea;
    default: x86_unimpl("switch@0x12c092c7 out of table"); return;
  }
L_12c092ce:;
  /* 12c092ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 12c092d3 jmp 0x12c092ec */
  goto L_12c092ec;
L_12c092d5:;
  /* 12c092d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12c092da jmp 0x12c092ec */
  goto L_12c092ec;
L_12c092dc:;
  /* 12c092dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12c092e1 jmp 0x12c092ec */
  goto L_12c092ec;
L_12c092e3:;
  /* 12c092e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12c092e8 jmp 0x12c092ec */
  goto L_12c092ec;
L_12c092ea:;
  /* 12c092ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c092ec:;
  /* 12c092ec mov esp, ebp */
  ESP = (EBP);
  /* 12c092ee pop ebp */
  EBP = (pop32());
  /* 12c092ef ret  */
  ESPCHK(0x12c092a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12c09320 (116 bytes, 29 insns) */
void f_12c09320(void) {
  FTRACE(0x12c09320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09320 push ebp */
  push32((uint32_t)(EBP));
  /* 12c09321 mov ebp, esp */
  EBP = (ESP);
  /* 12c09323 push ecx */
  push32((uint32_t)(ECX));
  /* 12c09324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0932b jmp 0x12c09336 */
  goto L_12c09336;
L_12c0932d:;
  /* 12c0932d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c09336:;
  /* 12c09336 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0933d jge 0x12c0934b */
  if ((C.sf==C.of)) goto L_12c0934b;
  /* 12c0933f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09342 mov byte ptr [ecx + 0x12c2fd00], 0 */
  w8((uint32_t)(ECX + 0x12c2fd00), (0x0u));
  /* 12c09349 jmp 0x12c0932d */
  goto L_12c0932d;
L_12c0934b:;
  /* 12c0934b mov dword ptr [0x12c2fb64], 0 */
  w32((uint32_t)(0x12c2fb64), (0x0u));
  /* 12c09355 mov dword ptr [0x12c2fbec], 0 */
  w32((uint32_t)(0x12c2fbec), (0x0u));
  /* 12c0935f mov dword ptr [0x12c2fe04], 0 */
  w32((uint32_t)(0x12c2fe04), (0x0u));
  /* 12c09369 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c09370 jmp 0x12c0937b */
  goto L_12c0937b;
L_12c09372:;
  /* 12c09372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09375 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09378 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0937b:;
  /* 12c0937b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0937f jge 0x12c09390 */
  if ((C.sf==C.of)) goto L_12c09390;
  /* 12c09381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09384 mov word ptr [eax*2 + 0x12c2fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12c2fbe0), (0x0u));
  /* 12c0938e jmp 0x12c09372 */
  goto L_12c09372;
L_12c09390:;
  /* 12c09390 mov esp, ebp */
  ESP = (EBP);
  /* 12c09392 pop ebp */
  EBP = (pop32());
  /* 12c09393 ret  */
  ESPCHK(0x12c09320u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x12c093a0 (770 bytes, 175 insns) */
void f_12c093a0(void) {
  FTRACE(0x12c093a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c093a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c093a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c093a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c093a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12c093af push eax */
  push32((uint32_t)(EAX));
  /* 12c093b0 mov ecx, dword ptr [0x12c2fb64] */
  ECX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c093b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c093b7 call dword ptr [0x12c3033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3033c))), 0x12c093bdu);
  /* 12c093bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c093c0 jne 0x12c095d9 */
  if (!C.zf) goto L_12c095d9;
  /* 12c093c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12c093d0 jmp 0x12c093e1 */
  goto L_12c093e1;
L_12c093d2:;
  /* 12c093d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c093d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c093db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12c093e1:;
  /* 12c093e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c093eb jae 0x12c09402 */
  if (!C.cf) goto L_12c09402;
  /* 12c093ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c093f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12c093f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12c09400 jmp 0x12c093d2 */
  goto L_12c093d2;
L_12c09402:;
  /* 12c09402 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12c09409 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12c0940f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c09412 jmp 0x12c0941d */
  goto L_12c0941d;
L_12c09414:;
  /* 12c09414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09417 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0941a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0941d:;
  /* 12c0941d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09420 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09422 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c09424 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c09426 je 0x12c09468 */
  if (C.zf) goto L_12c09468;
  /* 12c09428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0942b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0942d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c0942f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12c09435 jmp 0x12c09446 */
  goto L_12c09446;
L_12c09437:;
  /* 12c09437 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0943d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09440 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12c09446:;
  /* 12c09446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09449 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0944b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c0944e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09454 ja 0x12c09466 */
  if ((!C.cf&&!C.zf)) goto L_12c09466;
  /* 12c09456 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0945c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12c09464 jmp 0x12c09437 */
  goto L_12c09437;
L_12c09466:;
  /* 12c09466 jmp 0x12c09414 */
  goto L_12c09414;
L_12c09468:;
  /* 12c09468 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0946a mov eax, dword ptr [0x12c2fe04] */
  EAX = (r32((uint32_t)(0x12c2fe04)));
  /* 12c0946f push eax */
  push32((uint32_t)(EAX));
  /* 12c09470 mov ecx, dword ptr [0x12c2fb64] */
  ECX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c09476 push ecx */
  push32((uint32_t)(ECX));
  /* 12c09477 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12c0947d push edx */
  push32((uint32_t)(EDX));
  /* 12c0947e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c09483 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12c09489 push eax */
  push32((uint32_t)(EAX));
  /* 12c0948a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0948c call 0x12c0b050 */
  push32(0x12c09491u); f_12c0b050();
  /* 12c09491 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c09496 mov ecx, dword ptr [0x12c2fb64] */
  ECX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c0949c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0949d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c094a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12c094a8 push edx */
  push32((uint32_t)(EDX));
  /* 12c094a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c094ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12c094b4 push eax */
  push32((uint32_t)(EAX));
  /* 12c094b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c094ba mov ecx, dword ptr [0x12c2fe04] */
  ECX = (r32((uint32_t)(0x12c2fe04)));
  /* 12c094c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c094c1 call 0x12c0b210 */
  push32(0x12c094c6u); f_12c0b210();
  /* 12c094c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c094c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c094cb mov edx, dword ptr [0x12c2fb64] */
  EDX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c094d1 push edx */
  push32((uint32_t)(EDX));
  /* 12c094d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c094d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12c094dd push eax */
  push32((uint32_t)(EAX));
  /* 12c094de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c094e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12c094e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c094ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12c094ef mov edx, dword ptr [0x12c2fe04] */
  EDX = (r32((uint32_t)(0x12c2fe04)));
  /* 12c094f5 push edx */
  push32((uint32_t)(EDX));
  /* 12c094f6 call 0x12c0b210 */
  push32(0x12c094fbu); f_12c0b210();
  /* 12c094fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c094fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12c09508 jmp 0x12c09519 */
  goto L_12c09519;
L_12c0950a:;
  /* 12c0950a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09510 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09513 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12c09519:;
  /* 12c09519 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09523 jae 0x12c095d4 */
  if (!C.cf) goto L_12c095d4;
  /* 12c09529 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0952f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09531 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12c09539 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0953c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0953e je 0x12c09576 */
  if (C.zf) goto L_12c09576;
  /* 12c09540 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09546 mov cl, byte ptr [eax + 0x12c2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c0954c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12c0954f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09555 mov byte ptr [edx + 0x12c2fd01], cl */
  w8((uint32_t)(EDX + 0x12c2fd01), (CL));
  /* 12c0955b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09561 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09567 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12c0956e mov byte ptr [eax + 0x12c2fc00], dl */
  w8((uint32_t)(EAX + 0x12c2fc00), (DL));
  /* 12c09574 jmp 0x12c095cf */
  goto L_12c095cf;
L_12c09576:;
  /* 12c09576 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0957c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0957e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12c09586 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c09589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0958b je 0x12c095c2 */
  if (C.zf) goto L_12c095c2;
  /* 12c0958d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09593 mov al, byte ptr [edx + 0x12c2fd01] */
  AL = (r8((uint32_t)(EDX + 0x12c2fd01)));
  /* 12c09599 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c0959b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c095a1 mov byte ptr [ecx + 0x12c2fd01], al */
  w8((uint32_t)(ECX + 0x12c2fd01), (AL));
  /* 12c095a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c095ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c095b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12c095ba mov byte ptr [edx + 0x12c2fc00], cl */
  w8((uint32_t)(EDX + 0x12c2fc00), (CL));
  /* 12c095c0 jmp 0x12c095cf */
  goto L_12c095cf;
L_12c095c2:;
  /* 12c095c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c095c8 mov byte ptr [edx + 0x12c2fc00], 0 */
  w8((uint32_t)(EDX + 0x12c2fc00), (0x0u));
L_12c095cf:;
  /* 12c095cf jmp 0x12c0950a */
  goto L_12c0950a;
L_12c095d4:;
  /* 12c095d4 jmp 0x12c0969e */
  goto L_12c0969e;
L_12c095d9:;
  /* 12c095d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12c095e3 jmp 0x12c095f4 */
  goto L_12c095f4;
L_12c095e5:;
  /* 12c095e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c095eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c095ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12c095f4:;
  /* 12c095f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c095fe jae 0x12c0969e */
  if (!C.cf) goto L_12c0969e;
  /* 12c09604 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0960b jb 0x12c09648 */
  if (C.cf) goto L_12c09648;
  /* 12c0960d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09614 ja 0x12c09648 */
  if ((!C.cf&&!C.zf)) goto L_12c09648;
  /* 12c09616 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0961c mov dl, byte ptr [ecx + 0x12c2fd01] */
  DL = (r8((uint32_t)(ECX + 0x12c2fd01)));
  /* 12c09622 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12c09625 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0962b mov byte ptr [eax + 0x12c2fd01], dl */
  w8((uint32_t)(EAX + 0x12c2fd01), (DL));
  /* 12c09631 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09637 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0963a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09640 mov byte ptr [edx + 0x12c2fc00], cl */
  w8((uint32_t)(EDX + 0x12c2fc00), (CL));
  /* 12c09646 jmp 0x12c09699 */
  goto L_12c09699;
L_12c09648:;
  /* 12c09648 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0964f jb 0x12c0968c */
  if (C.cf) goto L_12c0968c;
  /* 12c09651 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09658 ja 0x12c0968c */
  if ((!C.cf&&!C.zf)) goto L_12c0968c;
  /* 12c0965a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09660 mov cl, byte ptr [eax + 0x12c2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c09666 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c09669 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0966f mov byte ptr [edx + 0x12c2fd01], cl */
  w8((uint32_t)(EDX + 0x12c2fd01), (CL));
  /* 12c09675 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c0967b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0967e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09684 mov byte ptr [ecx + 0x12c2fc00], al */
  w8((uint32_t)(ECX + 0x12c2fc00), (AL));
  /* 12c0968a jmp 0x12c09699 */
  goto L_12c09699;
L_12c0968c:;
  /* 12c0968c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c09692 mov byte ptr [edx + 0x12c2fc00], 0 */
  w8((uint32_t)(EDX + 0x12c2fc00), (0x0u));
L_12c09699:;
  /* 12c09699 jmp 0x12c095e5 */
  goto L_12c095e5;
L_12c0969e:;
  /* 12c0969e mov esp, ebp */
  ESP = (EBP);
  /* 12c096a0 pop ebp */
  EBP = (pop32());
  /* 12c096a1 ret  */
  ESPCHK(0x12c093a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x12c096b0 (23 bytes, 9 insns) */
void f_12c096b0(void) {
  FTRACE(0x12c096b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c096b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c096b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c096b3 cmp dword ptr [0x12c2fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c096ba je 0x12c096c3 */
  if (C.zf) goto L_12c096c3;
  /* 12c096bc mov eax, dword ptr [0x12c2fb64] */
  EAX = (r32((uint32_t)(0x12c2fb64)));
  /* 12c096c1 jmp 0x12c096c5 */
  goto L_12c096c5;
L_12c096c3:;
  /* 12c096c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c096c5:;
  /* 12c096c5 pop ebp */
  EBP = (pop32());
  /* 12c096c6 ret  */
  ESPCHK(0x12c096b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x12c096d0 (34 bytes, 10 insns) */
void f_12c096d0(void) {
  FTRACE(0x12c096d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c096d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c096d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c096d3 cmp dword ptr [0x12c2ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c096da jne 0x12c096f0 */
  if (!C.zf) goto L_12c096f0;
  /* 12c096dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12c096de call 0x12c08ef0 */
  push32(0x12c096e3u); f_12c08ef0();
  /* 12c096e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c096e6 mov dword ptr [0x12c2ffb0], 1 */
  w32((uint32_t)(0x12c2ffb0), (0x1u));
L_12c096f0:;
  /* 12c096f0 pop ebp */
  EBP = (pop32());
  /* 12c096f1 ret  */
  ESPCHK(0x12c096d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x12c09700 (664 bytes, 265 insns) [15 switch table(s)] */
void f_12c09700(void) {
  FTRACE(0x12c09700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09700 push ebp */
  push32((uint32_t)(EBP));
  /* 12c09701 mov ebp, esp */
  EBP = (ESP);
  /* 12c09703 push edi */
  push32((uint32_t)(EDI));
  /* 12c09704 push esi */
  push32((uint32_t)(ESI));
  /* 12c09705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c09708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0970b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0970e mov eax, ecx */
  EAX = (ECX);
  /* 12c09710 mov edx, ecx */
  EDX = (ECX);
  /* 12c09712 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09714 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09716 jbe 0x12c09720 */
  if ((C.cf||C.zf)) goto L_12c09720;
  /* 12c09718 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0971a jb 0x12c09898 */
  if (C.cf) goto L_12c09898;
L_12c09720:;
  /* 12c09720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c09726 jne 0x12c0973c */
  if (!C.zf) goto L_12c0973c;
  /* 12c09728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0972b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0972e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09731 jb 0x12c0975c */
  if (C.cf) goto L_12c0975c;
  /* 12c09733 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c09735 jmp dword ptr [edx*4 + 0x12c09848] */
  switch (EDX) {
    case 0: goto L_12c09858;
    case 1: goto L_12c09860;
    case 2: goto L_12c0986c;
    case 3: goto L_12c09880;
    default: x86_unimpl("switch@0x12c09735 out of table"); return;
  }
L_12c0973c:;
  /* 12c0973c mov eax, edi */
  EAX = (EDI);
  /* 12c0973e mov edx, 3 */
  EDX = (0x3u);
  /* 12c09743 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09746 jb 0x12c09754 */
  if (C.cf) goto L_12c09754;
  /* 12c09748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0974b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0974d jmp dword ptr [eax*4 + 0x12c09760] */
  switch (EAX) {
    case 1: goto L_12c09770;
    case 2: goto L_12c0979c;
    case 3: goto L_12c097c0;
    default: x86_unimpl("switch@0x12c0974d out of table"); return;
  }
L_12c09754:;
  /* 12c09754 jmp dword ptr [ecx*4 + 0x12c09858] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12c09858)))); return;
  /* 12c0975b nop  */
  /* nop */
L_12c0975c:;
  /* 12c0975c jmp dword ptr [ecx*4 + 0x12c097dc] */
  switch (ECX) {
    case 0: goto L_12c0983f;
    case 1: goto L_12c0982c;
    case 2: goto L_12c09824;
    case 3: goto L_12c0981c;
    case 4: goto L_12c09814;
    case 5: goto L_12c0980c;
    case 6: goto L_12c09804;
    case 7: goto L_12c097fc;
    default: x86_unimpl("switch@0x12c0975c out of table"); return;
  }
  /* 12c09763 nop  */
  /* nop */
L_12c09770:;
  /* 12c09770 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09772 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c09774 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c09776 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c09779 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0977c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0977f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c09782 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c09785 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09788 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0978b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0978e jb 0x12c0975c */
  if (C.cf) goto L_12c0975c;
  /* 12c09790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c09792 jmp dword ptr [edx*4 + 0x12c09848] */
  switch (EDX) {
    case 0: goto L_12c09858;
    case 1: goto L_12c09860;
    case 2: goto L_12c0986c;
    case 3: goto L_12c09880;
    default: x86_unimpl("switch@0x12c09792 out of table"); return;
  }
  /* 12c09799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0979c:;
  /* 12c0979c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0979e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c097a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c097a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c097a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c097a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c097ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c097ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c097b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c097b4 jb 0x12c0975c */
  if (C.cf) goto L_12c0975c;
  /* 12c097b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c097b8 jmp dword ptr [edx*4 + 0x12c09848] */
  switch (EDX) {
    case 0: goto L_12c09858;
    case 1: goto L_12c09860;
    case 2: goto L_12c0986c;
    case 3: goto L_12c09880;
    default: x86_unimpl("switch@0x12c097b8 out of table"); return;
  }
  /* 12c097bf nop  */
  /* nop */
L_12c097c0:;
  /* 12c097c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c097c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c097c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c097c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c097c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c097ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c097cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c097ce jb 0x12c0975c */
  if (C.cf) goto L_12c0975c;
  /* 12c097d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c097d2 jmp dword ptr [edx*4 + 0x12c09848] */
  switch (EDX) {
    case 0: goto L_12c09858;
    case 1: goto L_12c09860;
    case 2: goto L_12c0986c;
    case 3: goto L_12c09880;
    default: x86_unimpl("switch@0x12c097d2 out of table"); return;
  }
  /* 12c097d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c097fc:;
  /* 12c097fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12c09800 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12c09804:;
  /* 12c09804 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12c09808 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12c0980c:;
  /* 12c0980c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12c09810 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12c09814:;
  /* 12c09814 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12c09818 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12c0981c:;
  /* 12c0981c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12c09820 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12c09824:;
  /* 12c09824 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12c09828 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12c0982c:;
  /* 12c0982c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12c09830 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12c09834 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c0983b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0983d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c0983f:;
  /* 12c0983f jmp dword ptr [edx*4 + 0x12c09848] */
  switch (EDX) {
    case 0: goto L_12c09858;
    case 1: goto L_12c09860;
    case 2: goto L_12c0986c;
    case 3: goto L_12c09880;
    default: x86_unimpl("switch@0x12c0983f out of table"); return;
  }
  /* 12c09846 mov edi, edi */
  EDI = (EDI);
L_12c09858:;
  /* 12c09858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0985b pop esi */
  ESI = (pop32());
  /* 12c0985c pop edi */
  EDI = (pop32());
  /* 12c0985d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0985e ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c0985f nop  */
  /* nop */
L_12c09860:;
  /* 12c09860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c09862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c09864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09867 pop esi */
  ESI = (pop32());
  /* 12c09868 pop edi */
  EDI = (pop32());
  /* 12c09869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0986a ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c0986b nop  */
  /* nop */
L_12c0986c:;
  /* 12c0986c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0986e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c09870 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c09873 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c09876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09879 pop esi */
  ESI = (pop32());
  /* 12c0987a pop edi */
  EDI = (pop32());
  /* 12c0987b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0987c ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c0987d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c09880:;
  /* 12c09880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c09882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c09884 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c09887 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0988a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0988d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c09890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09893 pop esi */
  ESI = (pop32());
  /* 12c09894 pop edi */
  EDI = (pop32());
  /* 12c09895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c09896 ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c09897 nop  */
  /* nop */
L_12c09898:;
  /* 12c09898 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c0989c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c098a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c098a6 jne 0x12c098cc */
  if (!C.zf) goto L_12c098cc;
  /* 12c098a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c098ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c098ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c098b1 jb 0x12c098c0 */
  if (C.cf) goto L_12c098c0;
  /* 12c098b3 std  */
  C.df=1;
  /* 12c098b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c098b6 cld  */
  C.df=0;
  /* 12c098b7 jmp dword ptr [edx*4 + 0x12c099e0] */
  switch (EDX) {
    case 0: goto L_12c099f0;
    case 1: goto L_12c099f8;
    case 2: goto L_12c09a08;
    case 3: goto L_12c09a1c;
    default: x86_unimpl("switch@0x12c098b7 out of table"); return;
  }
  /* 12c098be mov edi, edi */
  EDI = (EDI);
L_12c098c0:;
  /* 12c098c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c098c2 jmp dword ptr [ecx*4 + 0x12c09990] */
  switch (ECX) {
    case 0: goto L_12c099d7;
    default: x86_unimpl("switch@0x12c098c2 out of table"); return;
  }
  /* 12c098c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c098cc:;
  /* 12c098cc mov eax, edi */
  EAX = (EDI);
  /* 12c098ce mov edx, 3 */
  EDX = (0x3u);
  /* 12c098d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c098d6 jb 0x12c098e4 */
  if (C.cf) goto L_12c098e4;
  /* 12c098d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c098db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c098dd jmp dword ptr [eax*4 + 0x12c098e8] */
  switch (EAX) {
    case 1: goto L_12c098f8;
    case 2: goto L_12c09918;
    case 3: goto L_12c09940;
    default: x86_unimpl("switch@0x12c098dd out of table"); return;
  }
L_12c098e4:;
  /* 12c098e4 jmp dword ptr [ecx*4 + 0x12c099e0] */
  switch (ECX) {
    case 0: goto L_12c099f0;
    case 1: goto L_12c099f8;
    case 2: goto L_12c09a08;
    case 3: goto L_12c09a1c;
    default: x86_unimpl("switch@0x12c098e4 out of table"); return;
  }
  /* 12c098eb nop  */
  /* nop */
L_12c098f8:;
  /* 12c098f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c098fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c098fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c09900 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c09901 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c09904 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c09905 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09908 jb 0x12c098c0 */
  if (C.cf) goto L_12c098c0;
  /* 12c0990a std  */
  C.df=1;
  /* 12c0990b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0990d cld  */
  C.df=0;
  /* 12c0990e jmp dword ptr [edx*4 + 0x12c099e0] */
  switch (EDX) {
    case 0: goto L_12c099f0;
    case 1: goto L_12c099f8;
    case 2: goto L_12c09a08;
    case 3: goto L_12c09a1c;
    default: x86_unimpl("switch@0x12c0990e out of table"); return;
  }
  /* 12c09915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c09918:;
  /* 12c09918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0991b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0991d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c09920 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c09923 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c09926 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c09929 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0992c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0992f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09932 jb 0x12c098c0 */
  if (C.cf) goto L_12c098c0;
  /* 12c09934 std  */
  C.df=1;
  /* 12c09935 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c09937 cld  */
  C.df=0;
  /* 12c09938 jmp dword ptr [edx*4 + 0x12c099e0] */
  switch (EDX) {
    case 0: goto L_12c099f0;
    case 1: goto L_12c099f8;
    case 2: goto L_12c09a08;
    case 3: goto L_12c09a1c;
    default: x86_unimpl("switch@0x12c09938 out of table"); return;
  }
  /* 12c0993f nop  */
  /* nop */
L_12c09940:;
  /* 12c09940 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c09943 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09945 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c09948 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0994b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0994e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c09951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c09954 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c09957 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0995a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0995d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09960 jb 0x12c098c0 */
  if (C.cf) goto L_12c098c0;
  /* 12c09966 std  */
  C.df=1;
  /* 12c09967 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c09969 cld  */
  C.df=0;
  /* 12c0996a jmp dword ptr [edx*4 + 0x12c099e0] */
  switch (EDX) {
    case 0: goto L_12c099f0;
    case 1: goto L_12c099f8;
    case 2: goto L_12c09a08;
    case 3: goto L_12c09a1c;
    default: x86_unimpl("switch@0x12c0996a out of table"); return;
  }
  /* 12c09971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12c09974 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12c09975 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c09976 rcl byte ptr [edx], 0x9c */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0x9cu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c09979 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0997a rcl byte ptr [edx], 0xa4 */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xa4u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0997d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0997e rcl byte ptr [edx], 0xac */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xacu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c09981 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c09982 rcl byte ptr [edx], 0xb4 */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xb4u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c09985 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c09986 rcl byte ptr [edx], 0xbc */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xbcu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c09989 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0998a rcl byte ptr [edx], 0xc4 */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xc4u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0998d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c09994 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12c09998 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12c0999c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12c099a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12c099a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12c099a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12c099ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12c099b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12c099b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12c099b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12c099bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12c099c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12c099c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12c099c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12c099cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c099d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c099d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c099d7:;
  /* 12c099d7 jmp dword ptr [edx*4 + 0x12c099e0] */
  switch (EDX) {
    case 0: goto L_12c099f0;
    case 1: goto L_12c099f8;
    case 2: goto L_12c09a08;
    case 3: goto L_12c09a1c;
    default: x86_unimpl("switch@0x12c099d7 out of table"); return;
  }
  /* 12c099de mov edi, edi */
  EDI = (EDI);
L_12c099f0:;
  /* 12c099f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c099f3 pop esi */
  ESI = (pop32());
  /* 12c099f4 pop edi */
  EDI = (pop32());
  /* 12c099f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c099f6 ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c099f7 nop  */
  /* nop */
L_12c099f8:;
  /* 12c099f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c099fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c099fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09a01 pop esi */
  ESI = (pop32());
  /* 12c09a02 pop edi */
  EDI = (pop32());
  /* 12c09a03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c09a04 ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c09a05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c09a08:;
  /* 12c09a08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c09a0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c09a0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c09a11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c09a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09a17 pop esi */
  ESI = (pop32());
  /* 12c09a18 pop edi */
  EDI = (pop32());
  /* 12c09a19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c09a1a ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
  /* 12c09a1b nop  */
  /* nop */
L_12c09a1c:;
  /* 12c09a1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c09a1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c09a22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c09a25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c09a28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c09a2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c09a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09a31 pop esi */
  ESI = (pop32());
  /* 12c09a32 pop edi */
  EDI = (pop32());
  /* 12c09a33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c09a34 ret  */
  ESPCHK(0x12c09700u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12c09a40 (104 bytes, 43 insns) */
void f_12c09a40(void) {
  FTRACE(0x12c09a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09a40 push ebx */
  push32((uint32_t)(EBX));
  /* 12c09a41 push esi */
  push32((uint32_t)(ESI));
  /* 12c09a42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c09a46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09a48 jne 0x12c09a62 */
  if (!C.zf) goto L_12c09a62;
  /* 12c09a4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c09a4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c09a52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09a54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c09a56 mov ebx, eax */
  EBX = (EAX);
  /* 12c09a58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c09a5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c09a5e mov edx, ebx */
  EDX = (EBX);
  /* 12c09a60 jmp 0x12c09aa3 */
  goto L_12c09aa3;
L_12c09a62:;
  /* 12c09a62 mov ecx, eax */
  ECX = (EAX);
  /* 12c09a64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c09a68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c09a6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12c09a70:;
  /* 12c09a70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c09a72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12c09a74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c09a76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12c09a78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c09a7a jne 0x12c09a70 */
  if (!C.zf) goto L_12c09a70;
  /* 12c09a7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c09a7e mov esi, eax */
  ESI = (EAX);
  /* 12c09a80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c09a84 mov ecx, eax */
  ECX = (EAX);
  /* 12c09a86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c09a8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c09a8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09a8e jb 0x12c09a9e */
  if (C.cf) goto L_12c09a9e;
  /* 12c09a90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09a94 ja 0x12c09a9e */
  if ((!C.cf&&!C.zf)) goto L_12c09a9e;
  /* 12c09a96 jb 0x12c09a9f */
  if (C.cf) goto L_12c09a9f;
  /* 12c09a98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09a9c jbe 0x12c09a9f */
  if ((C.cf||C.zf)) goto L_12c09a9f;
L_12c09a9e:;
  /* 12c09a9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12c09a9f:;
  /* 12c09a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09aa1 mov eax, esi */
  EAX = (ESI);
L_12c09aa3:;
  /* 12c09aa3 pop esi */
  ESI = (pop32());
  /* 12c09aa4 pop ebx */
  EBX = (pop32());
  /* 12c09aa5 ret 0x10 */
  ESPCHK(0x12c09a40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12c09ab0 (117 bytes, 44 insns) */
void f_12c09ab0(void) {
  FTRACE(0x12c09ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c09ab1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c09ab5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09ab7 jne 0x12c09ad1 */
  if (!C.zf) goto L_12c09ad1;
  /* 12c09ab9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c09abd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c09ac1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09ac3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c09ac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c09ac9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c09acb mov eax, edx */
  EAX = (EDX);
  /* 12c09acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c09acf jmp 0x12c09b21 */
  goto L_12c09b21;
L_12c09ad1:;
  /* 12c09ad1 mov ecx, eax */
  ECX = (EAX);
  /* 12c09ad3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c09ad7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c09adb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12c09adf:;
  /* 12c09adf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c09ae1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12c09ae3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c09ae5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12c09ae7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c09ae9 jne 0x12c09adf */
  if (!C.zf) goto L_12c09adf;
  /* 12c09aeb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c09aed mov ecx, eax */
  ECX = (EAX);
  /* 12c09aef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c09af3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12c09af4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c09af8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09afa jb 0x12c09b0a */
  if (C.cf) goto L_12c09b0a;
  /* 12c09afc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09b00 ja 0x12c09b0a */
  if ((!C.cf&&!C.zf)) goto L_12c09b0a;
  /* 12c09b02 jb 0x12c09b12 */
  if (C.cf) goto L_12c09b12;
  /* 12c09b04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09b08 jbe 0x12c09b12 */
  if ((C.cf||C.zf)) goto L_12c09b12;
L_12c09b0a:;
  /* 12c09b0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09b0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c09b12:;
  /* 12c09b12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09b16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c09b1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c09b1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c09b21:;
  /* 12c09b21 pop ebx */
  EBX = (pop32());
  /* 12c09b22 ret 0x10 */
  ESPCHK(0x12c09ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009b30 @ 0x12c09b30 (628 bytes, 214 insns) */
void f_12c09b30(void) {
  FTRACE(0x12c09b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c09b31 mov ebp, esp */
  EBP = (ESP);
  /* 12c09b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09b36 push ebx */
  push32((uint32_t)(EBX));
  /* 12c09b37 push esi */
  push32((uint32_t)(ESI));
  /* 12c09b38 push edi */
  push32((uint32_t)(EDI));
L_12c09b39:;
  /* 12c09b39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09b3d jne 0x12c09b5d */
  if (!C.zf) goto L_12c09b5d;
  /* 12c09b3f push 0x12c29ea4 */
  push32((uint32_t)(0x12c29ea4u));
  /* 12c09b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c09b46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12c09b48 push 0x12c29e98 */
  push32((uint32_t)(0x12c29e98u));
  /* 12c09b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c09b4f call 0x12c01ee0 */
  push32(0x12c09b54u); f_12c01ee0();
  /* 12c09b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09b5a jne 0x12c09b5d */
  if (!C.zf) goto L_12c09b5d;
  /* 12c09b5c int3  */
  x86_unimpl("int3 @ 0x12c09b5c");
L_12c09b5d:;
  /* 12c09b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09b61 jne 0x12c09b39 */
  if (!C.zf) goto L_12c09b39;
  /* 12c09b63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c09b66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c09b69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09b6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c09b6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c09b72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09b75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c09b78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12c09b7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c09b80 je 0x12c09b8f */
  if (C.zf) goto L_12c09b8f;
  /* 12c09b82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09b85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c09b88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12c09b8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c09b8d je 0x12c09ba5 */
  if (C.zf) goto L_12c09ba5;
L_12c09b8f:;
  /* 12c09b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09b92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c09b95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c09b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09b9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12c09b9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c09ba0 jmp 0x12c09d9d */
  goto L_12c09d9d;
L_12c09ba5:;
  /* 12c09ba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09ba8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c09bab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c09bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09bb0 je 0x12c09bfc */
  if (C.zf) goto L_12c09bfc;
  /* 12c09bb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bb5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c09bbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c09bc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12c09bc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09bc7 je 0x12c09be5 */
  if (C.zf) goto L_12c09be5;
  /* 12c09bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c09bd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c09bd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c09bda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12c09bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09be0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c09be3 jmp 0x12c09bfc */
  goto L_12c09bfc;
L_12c09be5:;
  /* 12c09be5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09be8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c09beb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12c09bee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bf1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c09bf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c09bf7 jmp 0x12c09d9d */
  goto L_12c09d9d;
L_12c09bfc:;
  /* 12c09bfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09bff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c09c02 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12c09c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c08 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c09c0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c0e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c09c11 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12c09c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c17 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c09c1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c1d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c09c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c09c2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09c2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c09c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c09c37 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12c09c3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c09c3f jne 0x12c09c6f */
  if (!C.zf) goto L_12c09c6f;
  /* 12c09c41 cmp dword ptr [ebp - 8], 0x12c2d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12c2d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09c48 je 0x12c09c53 */
  if (C.zf) goto L_12c09c53;
  /* 12c09c4a cmp dword ptr [ebp - 8], 0x12c2d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12c2d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09c51 jne 0x12c09c63 */
  if (!C.zf) goto L_12c09c63;
L_12c09c53:;
  /* 12c09c53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c09c56 push edx */
  push32((uint32_t)(EDX));
  /* 12c09c57 call 0x12c0baa0 */
  push32(0x12c09c5cu); f_12c0baa0();
  /* 12c09c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09c61 jne 0x12c09c6f */
  if (!C.zf) goto L_12c09c6f;
L_12c09c63:;
  /* 12c09c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c66 push eax */
  push32((uint32_t)(EAX));
  /* 12c09c67 call 0x12c0b9d0 */
  push32(0x12c09c6cu); f_12c0b9d0();
  /* 12c09c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c09c6f:;
  /* 12c09c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c72 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c09c75 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12c09c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c09c7d je 0x12c09d5b */
  if (C.zf) goto L_12c09d5b;
L_12c09c83:;
  /* 12c09c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09c89 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12c09c8b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09c8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c09c90 jge 0x12c09cb3 */
  if ((C.sf==C.of)) goto L_12c09cb3;
  /* 12c09c92 push 0x12c29e58 */
  push32((uint32_t)(0x12c29e58u));
  /* 12c09c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c09c99 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12c09c9e push 0x12c29e98 */
  push32((uint32_t)(0x12c29e98u));
  /* 12c09ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c09ca5 call 0x12c01ee0 */
  push32(0x12c09caau); f_12c01ee0();
  /* 12c09caa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09cad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09cb0 jne 0x12c09cb3 */
  if (!C.zf) goto L_12c09cb3;
  /* 12c09cb2 int3  */
  x86_unimpl("int3 @ 0x12c09cb2");
L_12c09cb3:;
  /* 12c09cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09cb7 jne 0x12c09c83 */
  if (!C.zf) goto L_12c09c83;
  /* 12c09cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09cbf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c09cc1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09cc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c09cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09cca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c09ccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09cd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c09cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09cd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c09cdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09ce1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c09ce4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09ce8 jle 0x12c09d06 */
  if ((C.zf||C.sf!=C.of)) goto L_12c09d06;
  /* 12c09cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09ced push ecx */
  push32((uint32_t)(ECX));
  /* 12c09cee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09cf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c09cf4 push eax */
  push32((uint32_t)(EAX));
  /* 12c09cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c09cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c09cf9 call 0x12c0b6c0 */
  push32(0x12c09cfeu); f_12c0b6c0();
  /* 12c09cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09d01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c09d04 jmp 0x12c09d4e */
  goto L_12c09d4e;
L_12c09d06:;
  /* 12c09d06 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09d0a je 0x12c09d29 */
  if (C.zf) goto L_12c09d29;
  /* 12c09d0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c09d0f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c09d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c09d15 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c09d18 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c09d1b mov ecx, dword ptr [edx*4 + 0x12c2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c09d22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09d24 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c09d27 jmp 0x12c09d30 */
  goto L_12c09d30;
L_12c09d29:;
  /* 12c09d29 mov dword ptr [ebp - 0x14], 0x12c2ca60 */
  w32((uint32_t)(EBP + -0x14), (0x12c2ca60u));
L_12c09d30:;
  /* 12c09d30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c09d33 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12c09d37 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c09d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09d3c je 0x12c09d4e */
  if (C.zf) goto L_12c09d4e;
  /* 12c09d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c09d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c09d42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c09d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12c09d46 call 0x12c0b570 */
  push32(0x12c09d4bu); f_12c0b570();
  /* 12c09d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c09d4e:;
  /* 12c09d4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09d51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c09d54 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c09d57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c09d59 jmp 0x12c09d79 */
  goto L_12c09d79;
L_12c09d5b:;
  /* 12c09d5b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c09d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09d65 push edx */
  push32((uint32_t)(EDX));
  /* 12c09d66 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c09d69 push eax */
  push32((uint32_t)(EAX));
  /* 12c09d6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c09d6d push ecx */
  push32((uint32_t)(ECX));
  /* 12c09d6e call 0x12c0b6c0 */
  push32(0x12c09d73u); f_12c0b6c0();
  /* 12c09d73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09d76 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c09d79:;
  /* 12c09d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c09d7c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09d7f je 0x12c09d95 */
  if (C.zf) goto L_12c09d95;
  /* 12c09d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09d84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c09d87 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c09d8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09d8d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12c09d90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c09d93 jmp 0x12c09d9d */
  goto L_12c09d9d;
L_12c09d95:;
  /* 12c09d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09d98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12c09d9d:;
  /* 12c09d9d pop edi */
  EDI = (pop32());
  /* 12c09d9e pop esi */
  ESI = (pop32());
  /* 12c09d9f pop ebx */
  EBX = (pop32());
  /* 12c09da0 mov esp, ebp */
  ESP = (EBP);
  /* 12c09da2 pop ebp */
  EBP = (pop32());
  /* 12c09da3 ret  */
  ESPCHK(0x12c09b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009db0 @ 0x12c09db0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12c09db0(void) {
  FTRACE(0x12c09db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c09db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c09db1 mov ebp, esp */
  EBP = (ESP);
  /* 12c09db3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09db9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c09dba push esi */
  push32((uint32_t)(ESI));
  /* 12c09dbb push edi */
  push32((uint32_t)(EDI));
  /* 12c09dbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c09dc3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12c09dcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12c09dd4:;
  /* 12c09dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c09dd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c09dd9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12c09ddc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09de0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c09de3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09de6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c09de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c09deb je 0x12c0a9c7 */
  if (C.zf) goto L_12c0a9c7;
  /* 12c09df1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09df8 jl 0x12c0a9c7 */
  if ((C.sf!=C.of)) goto L_12c0a9c7;
  /* 12c09dfe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09e02 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09e05 jl 0x12c09e26 */
  if ((C.sf!=C.of)) goto L_12c09e26;
  /* 12c09e07 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09e0b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09e0e jg 0x12c09e26 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c09e26;
  /* 12c09e10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09e14 movsx ecx, byte ptr [eax + 0x12c29e90] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12c29e90))));
  /* 12c09e1b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12c09e1e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12c09e24 jmp 0x12c09e30 */
  goto L_12c09e30;
L_12c09e26:;
  /* 12c09e26 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12c09e30:;
  /* 12c09e30 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12c09e36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c09e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c09e3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c09e3f movsx edx, byte ptr [ecx + eax*8 + 0x12c29eb0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12c29eb0))));
  /* 12c09e47 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c09e4a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c09e4d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c09e50 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12c09e56 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09e5d ja 0x12c0a9c2 */
  if ((!C.cf&&!C.zf)) goto L_12c0a9c2;
  /* 12c09e63 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12c09e69 jmp dword ptr [ecx*4 + 0x12c0a9d4] */
  switch (ECX) {
    case 0: goto L_12c09e70;
    case 1: goto L_12c09f0a;
    case 2: goto L_12c09f4c;
    case 3: goto L_12c09fbb;
    case 4: goto L_12c0a013;
    case 5: goto L_12c0a022;
    case 6: goto L_12c0a06e;
    case 7: goto L_12c0a101;
    case 8: goto L_12c09f98;
    case 9: goto L_12c09fa3;
    case 10: goto L_12c09f8e;
    case 11: goto L_12c09f83;
    case 12: goto L_12c09fae;
    case 13: goto L_12c09fb6;
    default: x86_unimpl("switch@0x12c09e69 out of table"); return;
  }
L_12c09e70:;
  /* 12c09e70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12c09e77 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c09e7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c09e80 mov eax, dword ptr [0x12c2cc98] */
  EAX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c09e85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c09e87 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c09e8b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c09e91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c09e93 je 0x12c09eed */
  if (C.zf) goto L_12c09eed;
  /* 12c09e95 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12c09e9b push edx */
  push32((uint32_t)(EDX));
  /* 12c09e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09e9f push eax */
  push32((uint32_t)(EAX));
  /* 12c09ea0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c09ea5 call 0x12c0aae0 */
  push32(0x12c09eaau); f_12c0aae0();
  /* 12c09eaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09ead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c09eb0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c09eb2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12c09eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c09eb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09ebb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c09ebe:;
  /* 12c09ebe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c09ec4 jne 0x12c09ee7 */
  if (!C.zf) goto L_12c09ee7;
  /* 12c09ec6 push 0x12c29f30 */
  push32((uint32_t)(0x12c29f30u));
  /* 12c09ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c09ecd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12c09ed2 push 0x12c29f24 */
  push32((uint32_t)(0x12c29f24u));
  /* 12c09ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c09ed9 call 0x12c01ee0 */
  push32(0x12c09edeu); f_12c01ee0();
  /* 12c09ede add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09ee4 jne 0x12c09ee7 */
  if (!C.zf) goto L_12c09ee7;
  /* 12c09ee6 int3  */
  x86_unimpl("int3 @ 0x12c09ee6");
L_12c09ee7:;
  /* 12c09ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c09eeb jne 0x12c09ebe */
  if (!C.zf) goto L_12c09ebe;
L_12c09eed:;
  /* 12c09eed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12c09ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c09ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c09ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12c09ef8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09efc push eax */
  push32((uint32_t)(EAX));
  /* 12c09efd call 0x12c0aae0 */
  push32(0x12c09f02u); f_12c0aae0();
  /* 12c09f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09f05 jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c09f0a:;
  /* 12c09f0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c09f11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c09f14 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12c09f1a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12c09f20 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12c09f26 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c09f2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c09f2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c09f36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12c09f40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12c09f47 jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c09f4c:;
  /* 12c09f4c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09f50 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12c09f56 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12c09f5c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c09f5f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12c09f65 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09f6c ja 0x12c09fb6 */
  if ((!C.cf&&!C.zf)) goto L_12c09fb6;
  /* 12c09f6e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12c09f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c09f76 mov al, byte ptr [ecx + 0x12c0aa0c] */
  AL = (r8((uint32_t)(ECX + 0x12c0aa0c)));
  /* 12c09f7c jmp dword ptr [eax*4 + 0x12c0a9f4] */
  switch (EAX) {
    case 0: goto L_12c09f98;
    case 1: goto L_12c09fa3;
    case 2: goto L_12c09f8e;
    case 3: goto L_12c09f83;
    case 4: goto L_12c09fae;
    case 5: goto L_12c09fb6;
    default: x86_unimpl("switch@0x12c09f7c out of table"); return;
  }
L_12c09f83:;
  /* 12c09f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09f86 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c09f89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c09f8c jmp 0x12c09fb6 */
  goto L_12c09fb6;
L_12c09f8e:;
  /* 12c09f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09f91 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12c09f93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c09f96 jmp 0x12c09fb6 */
  goto L_12c09fb6;
L_12c09f98:;
  /* 12c09f98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09f9b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c09f9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c09fa1 jmp 0x12c09fb6 */
  goto L_12c09fb6;
L_12c09fa3:;
  /* 12c09fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09fa6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12c09fa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c09fac jmp 0x12c09fb6 */
  goto L_12c09fb6;
L_12c09fae:;
  /* 12c09fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09fb1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12c09fb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c09fb6:;
  /* 12c09fb6 jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c09fbb:;
  /* 12c09fbb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c09fbf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09fc2 jne 0x12c09ff7 */
  if (!C.zf) goto L_12c09ff7;
  /* 12c09fc4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c09fc7 push edx */
  push32((uint32_t)(EDX));
  /* 12c09fc8 call 0x12c0abf0 */
  push32(0x12c09fcdu); f_12c0abf0();
  /* 12c09fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c09fd0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12c09fd6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c09fdd jge 0x12c09ff5 */
  if ((C.sf==C.of)) goto L_12c09ff5;
  /* 12c09fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c09fe2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c09fe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c09fe7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c09fed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c09fef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12c09ff5:;
  /* 12c09ff5 jmp 0x12c0a00e */
  goto L_12c0a00e;
L_12c09ff7:;
  /* 12c09ff7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c09ffd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0a000 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a004 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12c0a008 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12c0a00e:;
  /* 12c0a00e jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c0a013:;
  /* 12c0a013 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12c0a01d jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c0a022:;
  /* 12c0a022 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a026 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a029 jne 0x12c0a052 */
  if (!C.zf) goto L_12c0a052;
  /* 12c0a02b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c0a02e push eax */
  push32((uint32_t)(EAX));
  /* 12c0a02f call 0x12c0abf0 */
  push32(0x12c0a034u); f_12c0abf0();
  /* 12c0a034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a037 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12c0a03d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a044 jge 0x12c0a050 */
  if ((C.sf==C.of)) goto L_12c0a050;
  /* 12c0a046 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12c0a050:;
  /* 12c0a050 jmp 0x12c0a069 */
  goto L_12c0a069;
L_12c0a052:;
  /* 12c0a052 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c0a058 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0a05b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a05f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12c0a063 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12c0a069:;
  /* 12c0a069 jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c0a06e:;
  /* 12c0a06e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a072 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12c0a078 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12c0a07e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a081 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12c0a087 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a08e ja 0x12c0a0fc */
  if ((!C.cf&&!C.zf)) goto L_12c0a0fc;
  /* 12c0a090 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12c0a096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a098 mov al, byte ptr [ecx + 0x12c0aa31] */
  AL = (r8((uint32_t)(ECX + 0x12c0aa31)));
  /* 12c0a09e jmp dword ptr [eax*4 + 0x12c0aa1d] */
  switch (EAX) {
    case 0: goto L_12c0a0b0;
    case 1: goto L_12c0a0e9;
    case 2: goto L_12c0a0a5;
    case 3: goto L_12c0a0f3;
    case 4: goto L_12c0a0fc;
    default: x86_unimpl("switch@0x12c0a09e out of table"); return;
  }
L_12c0a0a5:;
  /* 12c0a0a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a0a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a0ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0a0ae jmp 0x12c0a0fc */
  goto L_12c0a0fc;
L_12c0a0b0:;
  /* 12c0a0b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0a0b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0a0b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a0b9 jne 0x12c0a0db */
  if (!C.zf) goto L_12c0a0db;
  /* 12c0a0bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0a0be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c0a0c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a0c5 jne 0x12c0a0db */
  if (!C.zf) goto L_12c0a0db;
  /* 12c0a0c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0a0ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a0cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c0a0d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a0d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a0d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0a0d9 jmp 0x12c0a0e7 */
  goto L_12c0a0e7;
L_12c0a0db:;
  /* 12c0a0db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12c0a0e2 jmp 0x12c09e70 */
  goto L_12c09e70;
L_12c0a0e7:;
  /* 12c0a0e7 jmp 0x12c0a0fc */
  goto L_12c0a0fc;
L_12c0a0e9:;
  /* 12c0a0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a0ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c0a0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0a0f1 jmp 0x12c0a0fc */
  goto L_12c0a0fc;
L_12c0a0f3:;
  /* 12c0a0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a0f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a0f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0a0fc:;
  /* 12c0a0fc jmp 0x12c0a9c2 */
  goto L_12c0a9c2;
L_12c0a101:;
  /* 12c0a101 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a105 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12c0a10b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12c0a111 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a114 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12c0a11a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a121 ja 0x12c0a7e7 */
  if ((!C.cf&&!C.zf)) goto L_12c0a7e7;
  /* 12c0a127 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12c0a12d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a12f mov cl, byte ptr [edx + 0x12c0aa9c] */
  CL = (r8((uint32_t)(EDX + 0x12c0aa9c)));
  /* 12c0a135 jmp dword ptr [ecx*4 + 0x12c0aa60] */
  switch (ECX) {
    case 0: goto L_12c0a13c;
    case 1: goto L_12c0a3d0;
    case 2: goto L_12c0a260;
    case 3: goto L_12c0a509;
    case 4: goto L_12c0a1cb;
    case 5: goto L_12c0a151;
    case 6: goto L_12c0a4db;
    case 7: goto L_12c0a3e0;
    case 8: goto L_12c0a385;
    case 9: goto L_12c0a555;
    case 10: goto L_12c0a4ff;
    case 11: goto L_12c0a276;
    case 12: goto L_12c0a4f3;
    case 13: goto L_12c0a515;
    case 14: goto L_12c0a7e7;
    default: x86_unimpl("switch@0x12c0a135 out of table"); return;
  }
L_12c0a13c:;
  /* 12c0a13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a13f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a146 jne 0x12c0a151 */
  if (!C.zf) goto L_12c0a151;
  /* 12c0a148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a14b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a14e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0a151:;
  /* 12c0a151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a154 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a15a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a15c je 0x12c0a197 */
  if (C.zf) goto L_12c0a197;
  /* 12c0a15e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c0a161 push eax */
  push32((uint32_t)(EAX));
  /* 12c0a162 call 0x12c0ac30 */
  push32(0x12c0a167u); f_12c0ac30();
  /* 12c0a167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a16a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12c0a16e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12c0a172 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a173 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12c0a179 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a17a call 0x12c0bd10 */
  push32(0x12c0a17fu); f_12c0bd10();
  /* 12c0a17f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a182 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c0a185 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a189 jge 0x12c0a195 */
  if ((C.sf==C.of)) goto L_12c0a195;
  /* 12c0a18b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12c0a195:;
  /* 12c0a195 jmp 0x12c0a1bd */
  goto L_12c0a1bd;
L_12c0a197:;
  /* 12c0a197 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c0a19a push eax */
  push32((uint32_t)(EAX));
  /* 12c0a19b call 0x12c0abf0 */
  push32(0x12c0a1a0u); f_12c0abf0();
  /* 12c0a1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a1a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12c0a1aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12c0a1b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12c0a1b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12c0a1bd:;
  /* 12c0a1bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12c0a1c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c0a1c6 jmp 0x12c0a7e7 */
  goto L_12c0a7e7;
L_12c0a1cb:;
  /* 12c0a1cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c0a1ce push eax */
  push32((uint32_t)(EAX));
  /* 12c0a1cf call 0x12c0abf0 */
  push32(0x12c0a1d4u); f_12c0abf0();
  /* 12c0a1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a1d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12c0a1dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a1e4 je 0x12c0a1f2 */
  if (C.zf) goto L_12c0a1f2;
  /* 12c0a1e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c0a1ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a1f0 jne 0x12c0a20c */
  if (!C.zf) goto L_12c0a20c;
L_12c0a1f2:;
  /* 12c0a1f2 mov edx, dword ptr [0x12c2cfb0] */
  EDX = (r32((uint32_t)(0x12c2cfb0)));
  /* 12c0a1f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c0a1fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a1fe push eax */
  push32((uint32_t)(EAX));
  /* 12c0a1ff call 0x12c05c50 */
  push32(0x12c0a204u); f_12c05c50();
  /* 12c0a204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a207 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c0a20a jmp 0x12c0a25b */
  goto L_12c0a25b;
L_12c0a20c:;
  /* 12c0a20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a20f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0a217 je 0x12c0a23c */
  if (C.zf) goto L_12c0a23c;
  /* 12c0a219 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c0a21f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c0a222 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0a225 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c0a22b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12c0a22e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c0a230 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c0a233 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12c0a23a jmp 0x12c0a25b */
  goto L_12c0a25b;
L_12c0a23c:;
  /* 12c0a23c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12c0a243 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c0a249 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c0a24c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c0a24f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c0a255 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12c0a258 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c0a25b:;
  /* 12c0a25b jmp 0x12c0a7e7 */
  goto L_12c0a7e7;
L_12c0a260:;
  /* 12c0a260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a263 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0a26b jne 0x12c0a276 */
  if (!C.zf) goto L_12c0a276;
  /* 12c0a26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a270 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0a276:;
  /* 12c0a276 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a27d jne 0x12c0a28b */
  if (!C.zf) goto L_12c0a28b;
  /* 12c0a27f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12c0a289 jmp 0x12c0a297 */
  goto L_12c0a297;
L_12c0a28b:;
  /* 12c0a28b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c0a291 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12c0a297:;
  /* 12c0a297 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12c0a29d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12c0a2a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c0a2a6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a2a7 call 0x12c0abf0 */
  push32(0x12c0a2acu); f_12c0abf0();
  /* 12c0a2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a2af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0a2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a2b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a2bc je 0x12c0a326 */
  if (C.zf) goto L_12c0a326;
  /* 12c0a2be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a2c2 jne 0x12c0a2cd */
  if (!C.zf) goto L_12c0a2cd;
  /* 12c0a2c4 mov ecx, dword ptr [0x12c2cfb4] */
  ECX = (r32((uint32_t)(0x12c2cfb4)));
  /* 12c0a2ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c0a2cd:;
  /* 12c0a2cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12c0a2d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a2d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12c0a2dd:;
  /* 12c0a2dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c0a2e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c0a2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a2ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12c0a2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a2f4 je 0x12c0a316 */
  if (C.zf) goto L_12c0a316;
  /* 12c0a2f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12c0a2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a2fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12c0a301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a303 je 0x12c0a316 */
  if (C.zf) goto L_12c0a316;
  /* 12c0a305 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12c0a30b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a30e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12c0a314 jmp 0x12c0a2dd */
  goto L_12c0a2dd;
L_12c0a316:;
  /* 12c0a316 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12c0a31c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a31f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c0a321 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c0a324 jmp 0x12c0a380 */
  goto L_12c0a380;
L_12c0a326:;
  /* 12c0a326 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a32a jne 0x12c0a334 */
  if (!C.zf) goto L_12c0a334;
  /* 12c0a32c mov eax, dword ptr [0x12c2cfb0] */
  EAX = (r32((uint32_t)(0x12c2cfb0)));
  /* 12c0a331 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12c0a334:;
  /* 12c0a334 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a337 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12c0a33d:;
  /* 12c0a33d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c0a343 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c0a349 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a34c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12c0a352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a354 je 0x12c0a374 */
  if (C.zf) goto L_12c0a374;
  /* 12c0a356 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12c0a35c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0a35f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a361 je 0x12c0a374 */
  if (C.zf) goto L_12c0a374;
  /* 12c0a363 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12c0a369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a36c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12c0a372 jmp 0x12c0a33d */
  goto L_12c0a33d;
L_12c0a374:;
  /* 12c0a374 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12c0a37a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a37d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12c0a380:;
  /* 12c0a380 jmp 0x12c0a7e7 */
  goto L_12c0a7e7;
L_12c0a385:;
  /* 12c0a385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c0a388 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a389 call 0x12c0abf0 */
  push32(0x12c0a38eu); f_12c0abf0();
  /* 12c0a38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a391 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12c0a397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a39a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a39f je 0x12c0a3b3 */
  if (C.zf) goto L_12c0a3b3;
  /* 12c0a3a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12c0a3a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12c0a3ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12c0a3b1 jmp 0x12c0a3c1 */
  goto L_12c0a3c1;
L_12c0a3b3:;
  /* 12c0a3b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12c0a3b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12c0a3bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12c0a3c1:;
  /* 12c0a3c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12c0a3cb jmp 0x12c0a7e7 */
  goto L_12c0a7e7;
L_12c0a3d0:;
  /* 12c0a3d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c0a3d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12c0a3da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c0a3dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12c0a3e0:;
  /* 12c0a3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a3e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12c0a3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0a3e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12c0a3ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c0a3f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a3f8 jge 0x12c0a406 */
  if ((C.sf==C.of)) goto L_12c0a406;
  /* 12c0a3fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12c0a404 jmp 0x12c0a422 */
  goto L_12c0a422;
L_12c0a406:;
  /* 12c0a406 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a40d jne 0x12c0a422 */
  if (!C.zf) goto L_12c0a422;
  /* 12c0a40f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a413 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a416 jne 0x12c0a422 */
  if (!C.zf) goto L_12c0a422;
  /* 12c0a418 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12c0a422:;
  /* 12c0a422 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0a425 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a428 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c0a42b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0a42e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0a433 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0a436 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12c0a43c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12c0a442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0a445 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a446 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c0a44c push edx */
  push32((uint32_t)(EDX));
  /* 12c0a44d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a451 push eax */
  push32((uint32_t)(EAX));
  /* 12c0a452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a455 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a456 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12c0a45c push edx */
  push32((uint32_t)(EDX));
  /* 12c0a45d call dword ptr [0x12c2d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2d3a0))), 0x12c0a463u);
  /* 12c0a463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a469 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a470 je 0x12c0a488 */
  if (C.zf) goto L_12c0a488;
  /* 12c0a472 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a479 jne 0x12c0a488 */
  if (!C.zf) goto L_12c0a488;
  /* 12c0a47b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a47e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a47f call dword ptr [0x12c2d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2d3ac))), 0x12c0a485u);
  /* 12c0a485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0a488:;
  /* 12c0a488 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c0a48c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a48f jne 0x12c0a4aa */
  if (!C.zf) goto L_12c0a4aa;
  /* 12c0a491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a494 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a49b jne 0x12c0a4aa */
  if (!C.zf) goto L_12c0a4aa;
  /* 12c0a49d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a4a1 call dword ptr [0x12c2d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2d3a4))), 0x12c0a4a7u);
  /* 12c0a4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0a4aa:;
  /* 12c0a4aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a4ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0a4b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a4b3 jne 0x12c0a4c7 */
  if (!C.zf) goto L_12c0a4c7;
  /* 12c0a4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a4b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a4bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0a4be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a4c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12c0a4c7:;
  /* 12c0a4c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a4ca push eax */
  push32((uint32_t)(EAX));
  /* 12c0a4cb call 0x12c05c50 */
  push32(0x12c0a4d0u); f_12c05c50();
  /* 12c0a4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c0a4d6 jmp 0x12c0a7e7 */
  goto L_12c0a7e7;
L_12c0a4db:;
  /* 12c0a4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a4de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a4e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0a4e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12c0a4ee jmp 0x12c0a575 */
  goto L_12c0a575;
L_12c0a4f3:;
  /* 12c0a4f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12c0a4fd jmp 0x12c0a575 */
  goto L_12c0a575;
L_12c0a4ff:;
  /* 12c0a4ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12c0a509:;
  /* 12c0a509 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12c0a513 jmp 0x12c0a51f */
  goto L_12c0a51f;
L_12c0a515:;
  /* 12c0a515 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12c0a51f:;
  /* 12c0a51f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12c0a529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a52c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a532 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a534 je 0x12c0a553 */
  if (C.zf) goto L_12c0a553;
  /* 12c0a536 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12c0a53d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12c0a543 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a546 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12c0a54c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12c0a553:;
  /* 12c0a553 jmp 0x12c0a575 */
  goto L_12c0a575;
L_12c0a555:;
  /* 12c0a555 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12c0a55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a562 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0a56a je 0x12c0a575 */
  if (C.zf) goto L_12c0a575;
  /* 12c0a56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a56f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a572 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0a575:;
  /* 12c0a575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a578 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a57f je 0x12c0a59e */
  if (C.zf) goto L_12c0a59e;
  /* 12c0a581 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c0a584 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a585 call 0x12c0ac10 */
  push32(0x12c0a58au); f_12c0ac10();
  /* 12c0a58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a58d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c0a593 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12c0a599 jmp 0x12c0a62f */
  goto L_12c0a62f;
L_12c0a59e:;
  /* 12c0a59e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a5a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a5a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a5a6 je 0x12c0a5f0 */
  if (C.zf) goto L_12c0a5f0;
  /* 12c0a5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a5ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a5b0 je 0x12c0a5d0 */
  if (C.zf) goto L_12c0a5d0;
  /* 12c0a5b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c0a5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a5b6 call 0x12c0abf0 */
  push32(0x12c0a5bbu); f_12c0abf0();
  /* 12c0a5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a5be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12c0a5c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0a5c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c0a5c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12c0a5ce jmp 0x12c0a5ee */
  goto L_12c0a5ee;
L_12c0a5d0:;
  /* 12c0a5d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c0a5d3 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a5d4 call 0x12c0abf0 */
  push32(0x12c0a5d9u); f_12c0abf0();
  /* 12c0a5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a5dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a5e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0a5e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c0a5e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12c0a5ee:;
  /* 12c0a5ee jmp 0x12c0a62f */
  goto L_12c0a62f;
L_12c0a5f0:;
  /* 12c0a5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a5f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a5f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a5f8 je 0x12c0a615 */
  if (C.zf) goto L_12c0a615;
  /* 12c0a5fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c0a5fd push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a5fe call 0x12c0abf0 */
  push32(0x12c0a603u); f_12c0abf0();
  /* 12c0a603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0a607 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c0a60d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12c0a613 jmp 0x12c0a62f */
  goto L_12c0a62f;
L_12c0a615:;
  /* 12c0a615 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c0a618 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a619 call 0x12c0abf0 */
  push32(0x12c0a61eu); f_12c0abf0();
  /* 12c0a61e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a623 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c0a629 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12c0a62f:;
  /* 12c0a62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a632 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a637 je 0x12c0a677 */
  if (C.zf) goto L_12c0a677;
  /* 12c0a639 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a640 jg 0x12c0a677 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0a677;
  /* 12c0a642 jl 0x12c0a64d */
  if ((C.sf!=C.of)) goto L_12c0a64d;
  /* 12c0a644 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a64b jae 0x12c0a677 */
  if (!C.cf) goto L_12c0a677;
L_12c0a64d:;
  /* 12c0a64d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12c0a653 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0a655 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12c0a65b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a65e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0a660 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c0a666 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12c0a66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a66f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c0a672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0a675 jmp 0x12c0a68f */
  goto L_12c0a68f;
L_12c0a677:;
  /* 12c0a677 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12c0a67d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c0a683 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12c0a689 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12c0a68f:;
  /* 12c0a68f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a692 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a69a jne 0x12c0a6b7 */
  if (!C.zf) goto L_12c0a6b7;
  /* 12c0a69c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c0a6a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12c0a6a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a6ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c0a6b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12c0a6b7:;
  /* 12c0a6b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a6be jge 0x12c0a6cc */
  if ((C.sf==C.of)) goto L_12c0a6cc;
  /* 12c0a6c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12c0a6ca jmp 0x12c0a6d5 */
  goto L_12c0a6d5;
L_12c0a6cc:;
  /* 12c0a6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a6cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a6d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0a6d5:;
  /* 12c0a6d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c0a6db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a6e3 jne 0x12c0a6ec */
  if (!C.zf) goto L_12c0a6ec;
  /* 12c0a6e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c0a6ec:;
  /* 12c0a6ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12c0a6ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c0a6f2:;
  /* 12c0a6f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c0a6f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c0a6fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a701 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12c0a707 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a709 jg 0x12c0a71f */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0a71f;
  /* 12c0a70b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c0a711 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0a719 je 0x12c0a7a0 */
  if (C.zf) goto L_12c0a7a0;
L_12c0a71f:;
  /* 12c0a71f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12c0a725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0a726 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a727 push eax */
  push32((uint32_t)(EAX));
  /* 12c0a728 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12c0a72e push edx */
  push32((uint32_t)(EDX));
  /* 12c0a72f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c0a735 push eax */
  push32((uint32_t)(EAX));
  /* 12c0a736 call 0x12c09ab0 */
  push32(0x12c0a73bu); f_12c09ab0();
  /* 12c0a73b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a73e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12c0a744 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12c0a74a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0a74b push edx */
  push32((uint32_t)(EDX));
  /* 12c0a74c push eax */
  push32((uint32_t)(EAX));
  /* 12c0a74d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12c0a753 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a754 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c0a75a push edx */
  push32((uint32_t)(EDX));
  /* 12c0a75b call 0x12c09a40 */
  push32(0x12c0a760u); f_12c09a40();
  /* 12c0a760 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c0a766 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12c0a76c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a773 jle 0x12c0a787 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0a787;
  /* 12c0a775 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12c0a77b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a781 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12c0a787:;
  /* 12c0a787 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a78a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12c0a790 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12c0a792 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a795 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a798 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0a79b jmp 0x12c0a6f2 */
  goto L_12c0a6f2;
L_12c0a7a0:;
  /* 12c0a7a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12c0a7a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a7a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c0a7a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a7ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a7af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c0a7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a7b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a7bc je 0x12c0a7e7 */
  if (C.zf) goto L_12c0a7e7;
  /* 12c0a7be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a7c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0a7c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a7c7 jne 0x12c0a7cf */
  if (!C.zf) goto L_12c0a7cf;
  /* 12c0a7c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a7cd jne 0x12c0a7e7 */
  if (!C.zf) goto L_12c0a7e7;
L_12c0a7cf:;
  /* 12c0a7cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a7d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a7d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0a7d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a7db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12c0a7de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0a7e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a7e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12c0a7e7:;
  /* 12c0a7e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a7ee jne 0x12c0a9c2 */
  if (!C.zf) goto L_12c0a9c2;
  /* 12c0a7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a7f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a7fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a7fc je 0x12c0a84d */
  if (C.zf) goto L_12c0a84d;
  /* 12c0a7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a801 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0a809 je 0x12c0a81b */
  if (C.zf) goto L_12c0a81b;
  /* 12c0a80b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12c0a812 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c0a819 jmp 0x12c0a84d */
  goto L_12c0a84d;
L_12c0a81b:;
  /* 12c0a81b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a81e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a823 je 0x12c0a835 */
  if (C.zf) goto L_12c0a835;
  /* 12c0a825 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12c0a82c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c0a833 jmp 0x12c0a84d */
  goto L_12c0a84d;
L_12c0a835:;
  /* 12c0a835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a838 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0a83b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0a83d je 0x12c0a84d */
  if (C.zf) goto L_12c0a84d;
  /* 12c0a83f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12c0a846 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12c0a84d:;
  /* 12c0a84d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c0a853 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a856 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a859 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12c0a85f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a862 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a867 jne 0x12c0a885 */
  if (!C.zf) goto L_12c0a885;
  /* 12c0a869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c0a86f push eax */
  push32((uint32_t)(EAX));
  /* 12c0a870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0a873 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a874 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12c0a87a push edx */
  push32((uint32_t)(EDX));
  /* 12c0a87b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c0a87d call 0x12c0ab60 */
  push32(0x12c0a882u); f_12c0ab60();
  /* 12c0a882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0a885:;
  /* 12c0a885 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c0a88b push eax */
  push32((uint32_t)(EAX));
  /* 12c0a88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0a88f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a890 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0a893 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a894 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12c0a89a push eax */
  push32((uint32_t)(EAX));
  /* 12c0a89b call 0x12c0aba0 */
  push32(0x12c0a8a0u); f_12c0aba0();
  /* 12c0a8a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a8a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0a8a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0a8ab je 0x12c0a8d3 */
  if (C.zf) goto L_12c0a8d3;
  /* 12c0a8ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a8b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a8b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a8b5 jne 0x12c0a8d3 */
  if (!C.zf) goto L_12c0a8d3;
  /* 12c0a8b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c0a8bd push eax */
  push32((uint32_t)(EAX));
  /* 12c0a8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0a8c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a8c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12c0a8c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a8c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c0a8cb call 0x12c0ab60 */
  push32(0x12c0a8d0u); f_12c0ab60();
  /* 12c0a8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0a8d3:;
  /* 12c0a8d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a8d7 je 0x12c0a981 */
  if (C.zf) goto L_12c0a981;
  /* 12c0a8dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a8e1 jle 0x12c0a981 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0a981;
  /* 12c0a8e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a8ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12c0a8f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0a8f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12c0a8f9:;
  /* 12c0a8f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12c0a8ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12c0a905 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0a908 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12c0a90e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a910 je 0x12c0a97f */
  if (C.zf) goto L_12c0a97f;
  /* 12c0a912 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12c0a918 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c0a91b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12c0a922 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12c0a929 push eax */
  push32((uint32_t)(EAX));
  /* 12c0a92a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12c0a930 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a931 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12c0a937 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a93a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12c0a940 call 0x12c0bd10 */
  push32(0x12c0a945u); f_12c0bd10();
  /* 12c0a945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a948 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12c0a94e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0a955 jg 0x12c0a959 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0a959;
  /* 12c0a957 jmp 0x12c0a97f */
  goto L_12c0a97f;
L_12c0a959:;
  /* 12c0a959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c0a95f push eax */
  push32((uint32_t)(EAX));
  /* 12c0a960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0a963 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a964 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12c0a96a push edx */
  push32((uint32_t)(EDX));
  /* 12c0a96b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12c0a971 push eax */
  push32((uint32_t)(EAX));
  /* 12c0a972 call 0x12c0aba0 */
  push32(0x12c0a977u); f_12c0aba0();
  /* 12c0a977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0a97a jmp 0x12c0a8f9 */
  goto L_12c0a8f9;
L_12c0a97f:;
  /* 12c0a97f jmp 0x12c0a99c */
  goto L_12c0a99c;
L_12c0a981:;
  /* 12c0a981 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12c0a987 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0a98b push edx */
  push32((uint32_t)(EDX));
  /* 12c0a98c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0a98f push eax */
  push32((uint32_t)(EAX));
  /* 12c0a990 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0a993 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a994 call 0x12c0aba0 */
  push32(0x12c0a999u); f_12c0aba0();
  /* 12c0a999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0a99c:;
  /* 12c0a99c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0a99f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0a9a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0a9a4 je 0x12c0a9c2 */
  if (C.zf) goto L_12c0a9c2;
  /* 12c0a9a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c0a9ac push eax */
  push32((uint32_t)(EAX));
  /* 12c0a9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0a9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0a9b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12c0a9b7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0a9b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c0a9ba call 0x12c0ab60 */
  push32(0x12c0a9bfu); f_12c0ab60();
  /* 12c0a9bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0a9c2:;
  /* 12c0a9c2 jmp 0x12c09dd4 */
  goto L_12c09dd4;
L_12c0a9c7:;
  /* 12c0a9c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12c0a9cd pop edi */
  EDI = (pop32());
  /* 12c0a9ce pop esi */
  ESI = (pop32());
  /* 12c0a9cf pop ebx */
  EBX = (pop32());
  /* 12c0a9d0 mov esp, ebp */
  ESP = (EBP);
  /* 12c0a9d2 pop ebp */
  EBP = (pop32());
  /* 12c0a9d3 ret  */
  ESPCHK(0x12c09db0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x12c0aae0 (119 bytes, 44 insns) */
void f_12c0aae0(void) {
  FTRACE(0x12c0aae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0aae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0aae1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0aae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0aae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0aae7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c0aaea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0aaed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0aaf0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c0aaf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0aaf6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0aafa jl 0x12c0ab22 */
  if ((C.sf!=C.of)) goto L_12c0ab22;
  /* 12c0aafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0aaff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0ab01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c0ab04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c0ab06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12c0ab0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0ab10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0ab13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ab16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c0ab18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ab1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ab1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c0ab20 jmp 0x12c0ab35 */
  goto L_12c0ab35;
L_12c0ab22:;
  /* 12c0ab22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ab25 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ab26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ab29 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ab2a call 0x12c09b30 */
  push32(0x12c0ab2fu); f_12c09b30();
  /* 12c0ab2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ab32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0ab35:;
  /* 12c0ab35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ab39 jne 0x12c0ab46 */
  if (!C.zf) goto L_12c0ab46;
  /* 12c0ab3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ab3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c0ab44 jmp 0x12c0ab53 */
  goto L_12c0ab53;
L_12c0ab46:;
  /* 12c0ab46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ab49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c0ab4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ab4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ab51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c0ab53:;
  /* 12c0ab53 mov esp, ebp */
  ESP = (EBP);
  /* 12c0ab55 pop ebp */
  EBP = (pop32());
  /* 12c0ab56 ret  */
  ESPCHK(0x12c0aae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x12c0ab60 (53 bytes, 23 insns) */
void f_12c0ab60(void) {
  FTRACE(0x12c0ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ab61 mov ebp, esp */
  EBP = (ESP);
L_12c0ab63:;
  /* 12c0ab63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ab66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ab69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ab6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c0ab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ab71 jle 0x12c0ab93 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0ab93;
  /* 12c0ab73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0ab76 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ab77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ab7a push eax */
  push32((uint32_t)(EAX));
  /* 12c0ab7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ab7e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ab7f call 0x12c0aae0 */
  push32(0x12c0ab84u); f_12c0aae0();
  /* 12c0ab84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ab87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0ab8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ab8d jne 0x12c0ab91 */
  if (!C.zf) goto L_12c0ab91;
  /* 12c0ab8f jmp 0x12c0ab93 */
  goto L_12c0ab93;
L_12c0ab91:;
  /* 12c0ab91 jmp 0x12c0ab63 */
  goto L_12c0ab63;
L_12c0ab93:;
  /* 12c0ab93 pop ebp */
  EBP = (pop32());
  /* 12c0ab94 ret  */
  ESPCHK(0x12c0ab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x12c0aba0 (74 bytes, 31 insns) */
void f_12c0aba0(void) {
  FTRACE(0x12c0aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0aba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0aba1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0aba3 push ecx */
  push32((uint32_t)(ECX));
L_12c0aba4:;
  /* 12c0aba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0aba7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0abaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0abad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c0abb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0abb2 jle 0x12c0abe6 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0abe6;
  /* 12c0abb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0abb7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0abb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0abbb push eax */
  push32((uint32_t)(EAX));
  /* 12c0abbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0abbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0abc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0abc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0abc8 push eax */
  push32((uint32_t)(EAX));
  /* 12c0abc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0abcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0abcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c0abd2 call 0x12c0aae0 */
  push32(0x12c0abd7u); f_12c0aae0();
  /* 12c0abd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0abda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0abdd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0abe0 jne 0x12c0abe4 */
  if (!C.zf) goto L_12c0abe4;
  /* 12c0abe2 jmp 0x12c0abe6 */
  goto L_12c0abe6;
L_12c0abe4:;
  /* 12c0abe4 jmp 0x12c0aba4 */
  goto L_12c0aba4;
L_12c0abe6:;
  /* 12c0abe6 mov esp, ebp */
  ESP = (EBP);
  /* 12c0abe8 pop ebp */
  EBP = (pop32());
  /* 12c0abe9 ret  */
  ESPCHK(0x12c0aba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abf0 @ 0x12c0abf0 (26 bytes, 12 insns) */
void f_12c0abf0(void) {
  FTRACE(0x12c0abf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0abf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0abf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0abf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0abf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0abf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0abfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0abfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c0ac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0ac05 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c0ac08 pop ebp */
  EBP = (pop32());
  /* 12c0ac09 ret  */
  ESPCHK(0x12c0abf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x12c0ac10 (31 bytes, 14 insns) */
void f_12c0ac10(void) {
  FTRACE(0x12c0ac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ac10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ac11 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ac13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0ac18 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ac1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c0ac20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0ac25 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ac28 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c0ac2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0ac2d pop ebp */
  EBP = (pop32());
  /* 12c0ac2e ret  */
  ESPCHK(0x12c0ac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac30 @ 0x12c0ac30 (27 bytes, 12 insns) */
void f_12c0ac30(void) {
  FTRACE(0x12c0ac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ac30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ac31 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ac33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0ac38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ac3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c0ac40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0ac45 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12c0ac49 pop ebp */
  EBP = (pop32());
  /* 12c0ac4a ret  */
  ESPCHK(0x12c0ac30u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12c0ac50 (145 bytes, 42 insns) */
void f_12c0ac50(void) {
  FTRACE(0x12c0ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ac51 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ac54 call 0x12c0ad00 */
  push32(0x12c0ac59u); f_12c0ad00();
  /* 12c0ac59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c0ac5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0ac65 jmp 0x12c0ac70 */
  goto L_12c0ac70;
L_12c0ac67:;
  /* 12c0ac67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ac6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ac6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0ac70:;
  /* 12c0ac70 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ac74 jae 0x12c0ac9a */
  if (!C.cf) goto L_12c0ac9a;
  /* 12c0ac76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ac79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ac7c cmp ecx, dword ptr [eax*8 + 0x12c2cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12c2cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ac83 jne 0x12c0ac98 */
  if (!C.zf) goto L_12c0ac98;
  /* 12c0ac85 call 0x12c0acf0 */
  push32(0x12c0ac8au); f_12c0acf0();
  /* 12c0ac8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ac8d mov ecx, dword ptr [edx*8 + 0x12c2cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12c2cfbc)));
  /* 12c0ac94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c0ac96 jmp 0x12c0acdd */
  goto L_12c0acdd;
L_12c0ac98:;
  /* 12c0ac98 jmp 0x12c0ac67 */
  goto L_12c0ac67;
L_12c0ac9a:;
  /* 12c0ac9a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ac9e jb 0x12c0acb3 */
  if (C.cf) goto L_12c0acb3;
  /* 12c0aca0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0aca4 ja 0x12c0acb3 */
  if ((!C.cf&&!C.zf)) goto L_12c0acb3;
  /* 12c0aca6 call 0x12c0acf0 */
  push32(0x12c0acabu); f_12c0acf0();
  /* 12c0acab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12c0acb1 jmp 0x12c0acdd */
  goto L_12c0acdd;
L_12c0acb3:;
  /* 12c0acb3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0acba jb 0x12c0acd2 */
  if (C.cf) goto L_12c0acd2;
  /* 12c0acbc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0acc3 ja 0x12c0acd2 */
  if ((!C.cf&&!C.zf)) goto L_12c0acd2;
  /* 12c0acc5 call 0x12c0acf0 */
  push32(0x12c0accau); f_12c0acf0();
  /* 12c0acca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12c0acd0 jmp 0x12c0acdd */
  goto L_12c0acdd;
L_12c0acd2:;
  /* 12c0acd2 call 0x12c0acf0 */
  push32(0x12c0acd7u); f_12c0acf0();
  /* 12c0acd7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12c0acdd:;
  /* 12c0acdd mov esp, ebp */
  ESP = (EBP);
  /* 12c0acdf pop ebp */
  EBP = (pop32());
  /* 12c0ace0 ret  */
  ESPCHK(0x12c0ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x12c0acf0 (13 bytes, 6 insns) */
void f_12c0acf0(void) {
  FTRACE(0x12c0acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0acf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0acf3 call 0x12c02860 */
  push32(0x12c0acf8u); f_12c02860();
  /* 12c0acf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0acfb pop ebp */
  EBP = (pop32());
  /* 12c0acfc ret  */
  ESPCHK(0x12c0acf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad00 @ 0x12c0ad00 (13 bytes, 6 insns) */
void f_12c0ad00(void) {
  FTRACE(0x12c0ad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ad00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ad01 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ad03 call 0x12c02860 */
  push32(0x12c0ad08u); f_12c02860();
  /* 12c0ad08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ad0b pop ebp */
  EBP = (pop32());
  /* 12c0ad0c ret  */
  ESPCHK(0x12c0ad00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x12c0ad10 (664 bytes, 265 insns) [15 switch table(s)] */
void f_12c0ad10(void) {
  FTRACE(0x12c0ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ad11 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ad13 push edi */
  push32((uint32_t)(EDI));
  /* 12c0ad14 push esi */
  push32((uint32_t)(ESI));
  /* 12c0ad15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ad18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ad1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ad1e mov eax, ecx */
  EAX = (ECX);
  /* 12c0ad20 mov edx, ecx */
  EDX = (ECX);
  /* 12c0ad22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ad24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ad26 jbe 0x12c0ad30 */
  if ((C.cf||C.zf)) goto L_12c0ad30;
  /* 12c0ad28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ad2a jb 0x12c0aea8 */
  if (C.cf) goto L_12c0aea8;
L_12c0ad30:;
  /* 12c0ad30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c0ad36 jne 0x12c0ad4c */
  if (!C.zf) goto L_12c0ad4c;
  /* 12c0ad38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0ad3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0ad3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ad41 jb 0x12c0ad6c */
  if (C.cf) goto L_12c0ad6c;
  /* 12c0ad43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0ad45 jmp dword ptr [edx*4 + 0x12c0ae58] */
  switch (EDX) {
    case 0: goto L_12c0ae68;
    case 1: goto L_12c0ae70;
    case 2: goto L_12c0ae7c;
    case 3: goto L_12c0ae90;
    default: x86_unimpl("switch@0x12c0ad45 out of table"); return;
  }
L_12c0ad4c:;
  /* 12c0ad4c mov eax, edi */
  EAX = (EDI);
  /* 12c0ad4e mov edx, 3 */
  EDX = (0x3u);
  /* 12c0ad53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ad56 jb 0x12c0ad64 */
  if (C.cf) goto L_12c0ad64;
  /* 12c0ad58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ad5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ad5d jmp dword ptr [eax*4 + 0x12c0ad70] */
  switch (EAX) {
    case 1: goto L_12c0ad80;
    case 2: goto L_12c0adac;
    case 3: goto L_12c0add0;
    default: x86_unimpl("switch@0x12c0ad5d out of table"); return;
  }
L_12c0ad64:;
  /* 12c0ad64 jmp dword ptr [ecx*4 + 0x12c0ae68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12c0ae68)))); return;
  /* 12c0ad6b nop  */
  /* nop */
L_12c0ad6c:;
  /* 12c0ad6c jmp dword ptr [ecx*4 + 0x12c0adec] */
  switch (ECX) {
    case 0: goto L_12c0ae4f;
    case 1: goto L_12c0ae3c;
    case 2: goto L_12c0ae34;
    case 3: goto L_12c0ae2c;
    case 4: goto L_12c0ae24;
    case 5: goto L_12c0ae1c;
    case 6: goto L_12c0ae14;
    case 7: goto L_12c0ae0c;
    default: x86_unimpl("switch@0x12c0ad6c out of table"); return;
  }
  /* 12c0ad73 nop  */
  /* nop */
L_12c0ad80:;
  /* 12c0ad80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0ad82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0ad84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0ad86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c0ad89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0ad8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0ad8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0ad92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0ad95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ad98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ad9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ad9e jb 0x12c0ad6c */
  if (C.cf) goto L_12c0ad6c;
  /* 12c0ada0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0ada2 jmp dword ptr [edx*4 + 0x12c0ae58] */
  switch (EDX) {
    case 0: goto L_12c0ae68;
    case 1: goto L_12c0ae70;
    case 2: goto L_12c0ae7c;
    case 3: goto L_12c0ae90;
    default: x86_unimpl("switch@0x12c0ada2 out of table"); return;
  }
  /* 12c0ada9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0adac:;
  /* 12c0adac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0adae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0adb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0adb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c0adb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0adb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0adbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0adbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0adc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0adc4 jb 0x12c0ad6c */
  if (C.cf) goto L_12c0ad6c;
  /* 12c0adc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0adc8 jmp dword ptr [edx*4 + 0x12c0ae58] */
  switch (EDX) {
    case 0: goto L_12c0ae68;
    case 1: goto L_12c0ae70;
    case 2: goto L_12c0ae7c;
    case 3: goto L_12c0ae90;
    default: x86_unimpl("switch@0x12c0adc8 out of table"); return;
  }
  /* 12c0adcf nop  */
  /* nop */
L_12c0add0:;
  /* 12c0add0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0add2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0add4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0add6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c0add7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0adda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c0addb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0adde jb 0x12c0ad6c */
  if (C.cf) goto L_12c0ad6c;
  /* 12c0ade0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0ade2 jmp dword ptr [edx*4 + 0x12c0ae58] */
  switch (EDX) {
    case 0: goto L_12c0ae68;
    case 1: goto L_12c0ae70;
    case 2: goto L_12c0ae7c;
    case 3: goto L_12c0ae90;
    default: x86_unimpl("switch@0x12c0ade2 out of table"); return;
  }
  /* 12c0ade9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0ae0c:;
  /* 12c0ae0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12c0ae10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12c0ae14:;
  /* 12c0ae14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12c0ae18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12c0ae1c:;
  /* 12c0ae1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12c0ae20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12c0ae24:;
  /* 12c0ae24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12c0ae28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12c0ae2c:;
  /* 12c0ae2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12c0ae30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12c0ae34:;
  /* 12c0ae34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12c0ae38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12c0ae3c:;
  /* 12c0ae3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12c0ae40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12c0ae44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c0ae4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ae4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c0ae4f:;
  /* 12c0ae4f jmp dword ptr [edx*4 + 0x12c0ae58] */
  switch (EDX) {
    case 0: goto L_12c0ae68;
    case 1: goto L_12c0ae70;
    case 2: goto L_12c0ae7c;
    case 3: goto L_12c0ae90;
    default: x86_unimpl("switch@0x12c0ae4f out of table"); return;
  }
  /* 12c0ae56 mov edi, edi */
  EDI = (EDI);
L_12c0ae68:;
  /* 12c0ae68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ae6b pop esi */
  ESI = (pop32());
  /* 12c0ae6c pop edi */
  EDI = (pop32());
  /* 12c0ae6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0ae6e ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0ae6f nop  */
  /* nop */
L_12c0ae70:;
  /* 12c0ae70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0ae72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0ae74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ae77 pop esi */
  ESI = (pop32());
  /* 12c0ae78 pop edi */
  EDI = (pop32());
  /* 12c0ae79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0ae7a ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0ae7b nop  */
  /* nop */
L_12c0ae7c:;
  /* 12c0ae7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0ae7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0ae80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c0ae83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0ae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ae89 pop esi */
  ESI = (pop32());
  /* 12c0ae8a pop edi */
  EDI = (pop32());
  /* 12c0ae8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0ae8c ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0ae8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0ae90:;
  /* 12c0ae90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0ae92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0ae94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c0ae97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0ae9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0ae9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0aea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0aea3 pop esi */
  ESI = (pop32());
  /* 12c0aea4 pop edi */
  EDI = (pop32());
  /* 12c0aea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0aea6 ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0aea7 nop  */
  /* nop */
L_12c0aea8:;
  /* 12c0aea8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c0aeac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c0aeb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c0aeb6 jne 0x12c0aedc */
  if (!C.zf) goto L_12c0aedc;
  /* 12c0aeb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0aebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0aebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0aec1 jb 0x12c0aed0 */
  if (C.cf) goto L_12c0aed0;
  /* 12c0aec3 std  */
  C.df=1;
  /* 12c0aec4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0aec6 cld  */
  C.df=0;
  /* 12c0aec7 jmp dword ptr [edx*4 + 0x12c0aff0] */
  switch (EDX) {
    case 0: goto L_12c0b000;
    case 1: goto L_12c0b008;
    case 2: goto L_12c0b018;
    case 3: goto L_12c0b02c;
    default: x86_unimpl("switch@0x12c0aec7 out of table"); return;
  }
  /* 12c0aece mov edi, edi */
  EDI = (EDI);
L_12c0aed0:;
  /* 12c0aed0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0aed2 jmp dword ptr [ecx*4 + 0x12c0afa0] */
  switch (ECX) {
    case 0: goto L_12c0afe7;
    default: x86_unimpl("switch@0x12c0aed2 out of table"); return;
  }
  /* 12c0aed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0aedc:;
  /* 12c0aedc mov eax, edi */
  EAX = (EDI);
  /* 12c0aede mov edx, 3 */
  EDX = (0x3u);
  /* 12c0aee3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0aee6 jb 0x12c0aef4 */
  if (C.cf) goto L_12c0aef4;
  /* 12c0aee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0aeeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0aeed jmp dword ptr [eax*4 + 0x12c0aef8] */
  switch (EAX) {
    case 1: goto L_12c0af08;
    case 2: goto L_12c0af28;
    case 3: goto L_12c0af50;
    default: x86_unimpl("switch@0x12c0aeed out of table"); return;
  }
L_12c0aef4:;
  /* 12c0aef4 jmp dword ptr [ecx*4 + 0x12c0aff0] */
  switch (ECX) {
    case 0: goto L_12c0b000;
    case 1: goto L_12c0b008;
    case 2: goto L_12c0b018;
    case 3: goto L_12c0b02c;
    default: x86_unimpl("switch@0x12c0aef4 out of table"); return;
  }
  /* 12c0aefb nop  */
  /* nop */
L_12c0af08:;
  /* 12c0af08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0af0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0af0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c0af10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c0af11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0af14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c0af15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0af18 jb 0x12c0aed0 */
  if (C.cf) goto L_12c0aed0;
  /* 12c0af1a std  */
  C.df=1;
  /* 12c0af1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0af1d cld  */
  C.df=0;
  /* 12c0af1e jmp dword ptr [edx*4 + 0x12c0aff0] */
  switch (EDX) {
    case 0: goto L_12c0b000;
    case 1: goto L_12c0b008;
    case 2: goto L_12c0b018;
    case 3: goto L_12c0b02c;
    default: x86_unimpl("switch@0x12c0af1e out of table"); return;
  }
  /* 12c0af25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0af28:;
  /* 12c0af28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0af2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0af2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c0af30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0af33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0af36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0af39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0af3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0af3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0af42 jb 0x12c0aed0 */
  if (C.cf) goto L_12c0aed0;
  /* 12c0af44 std  */
  C.df=1;
  /* 12c0af45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0af47 cld  */
  C.df=0;
  /* 12c0af48 jmp dword ptr [edx*4 + 0x12c0aff0] */
  switch (EDX) {
    case 0: goto L_12c0b000;
    case 1: goto L_12c0b008;
    case 2: goto L_12c0b018;
    case 3: goto L_12c0b02c;
    default: x86_unimpl("switch@0x12c0af48 out of table"); return;
  }
  /* 12c0af4f nop  */
  /* nop */
L_12c0af50:;
  /* 12c0af50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0af53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0af55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c0af58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0af5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0af5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c0af61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0af64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0af67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0af6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0af6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0af70 jb 0x12c0aed0 */
  if (C.cf) goto L_12c0aed0;
  /* 12c0af76 std  */
  C.df=1;
  /* 12c0af77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c0af79 cld  */
  C.df=0;
  /* 12c0af7a jmp dword ptr [edx*4 + 0x12c0aff0] */
  switch (EDX) {
    case 0: goto L_12c0b000;
    case 1: goto L_12c0b008;
    case 2: goto L_12c0b018;
    case 3: goto L_12c0b02c;
    default: x86_unimpl("switch@0x12c0af7a out of table"); return;
  }
  /* 12c0af81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12c0af84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12c0af85 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0af86 rcl byte ptr [edx], 0xac */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xacu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0af89 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0af8a rcl byte ptr [edx], 0xb4 */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xb4u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0af8d scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0af8e rcl byte ptr [edx], 0xbc */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xbcu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0af91 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0af92 rcl byte ptr [edx], 0xc4 */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xc4u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0af95 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0af96 rcl byte ptr [edx], 0xcc */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xccu)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0af99 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0af9a rcl byte ptr [edx], 0xd4 */
  { uint32_t _v=(r8((uint32_t)(EDX)))&0xffu, _cf=C.cf, _n=(0xd4u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12c0af9d scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12c0afa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12c0afa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12c0afac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12c0afb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12c0afb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12c0afb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12c0afbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12c0afc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12c0afc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12c0afc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12c0afcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12c0afd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12c0afd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12c0afd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12c0afdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c0afe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0afe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c0afe7:;
  /* 12c0afe7 jmp dword ptr [edx*4 + 0x12c0aff0] */
  switch (EDX) {
    case 0: goto L_12c0b000;
    case 1: goto L_12c0b008;
    case 2: goto L_12c0b018;
    case 3: goto L_12c0b02c;
    default: x86_unimpl("switch@0x12c0afe7 out of table"); return;
  }
  /* 12c0afee mov edi, edi */
  EDI = (EDI);
L_12c0b000:;
  /* 12c0b000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b003 pop esi */
  ESI = (pop32());
  /* 12c0b004 pop edi */
  EDI = (pop32());
  /* 12c0b005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0b006 ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0b007 nop  */
  /* nop */
L_12c0b008:;
  /* 12c0b008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0b00b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c0b00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b011 pop esi */
  ESI = (pop32());
  /* 12c0b012 pop edi */
  EDI = (pop32());
  /* 12c0b013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0b014 ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0b015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0b018:;
  /* 12c0b018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0b01b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c0b01e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0b021 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0b024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b027 pop esi */
  ESI = (pop32());
  /* 12c0b028 pop edi */
  EDI = (pop32());
  /* 12c0b029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0b02a ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
  /* 12c0b02b nop  */
  /* nop */
L_12c0b02c:;
  /* 12c0b02c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c0b02f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c0b032 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c0b035 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c0b038 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c0b03b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c0b03e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b041 pop esi */
  ESI = (pop32());
  /* 12c0b042 pop edi */
  EDI = (pop32());
  /* 12c0b043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0b044 ret  */
  ESPCHK(0x12c0ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x12c0b050 (421 bytes, 148 insns) */
void f_12c0b050(void) {
  FTRACE(0x12c0b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b050 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b051 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c0b055 push 0x12c29f48 */
  push32((uint32_t)(0x12c29f48u));
  /* 12c0b05a push 0x12c0bf28 */
  push32((uint32_t)(0x12c0bf28u));
  /* 12c0b05f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c0b065 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c0b06d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b070 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0b071 push esi */
  push32((uint32_t)(ESI));
  /* 12c0b072 push edi */
  push32((uint32_t)(EDI));
  /* 12c0b073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c0b076 cmp dword ptr [0x12c2e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b07d jne 0x12c0b0ce */
  if (!C.zf) goto L_12c0b0ce;
  /* 12c0b07f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c0b082 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b083 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b085 push 0x12c29f44 */
  push32((uint32_t)(0x12c29f44u));
  /* 12c0b08a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b08c call dword ptr [0x12c30350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30350))), 0x12c0b092u);
  /* 12c0b092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b094 je 0x12c0b0a2 */
  if (C.zf) goto L_12c0b0a2;
  /* 12c0b096 mov dword ptr [0x12c2e684], 1 */
  w32((uint32_t)(0x12c2e684), (0x1u));
  /* 12c0b0a0 jmp 0x12c0b0ce */
  goto L_12c0b0ce;
L_12c0b0a2:;
  /* 12c0b0a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c0b0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b0a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b0a8 push 0x12c29f40 */
  push32((uint32_t)(0x12c29f40u));
  /* 12c0b0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b0af push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b0b1 call dword ptr [0x12c3034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3034c))), 0x12c0b0b7u);
  /* 12c0b0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b0b9 je 0x12c0b0c7 */
  if (C.zf) goto L_12c0b0c7;
  /* 12c0b0bb mov dword ptr [0x12c2e684], 2 */
  w32((uint32_t)(0x12c2e684), (0x2u));
  /* 12c0b0c5 jmp 0x12c0b0ce */
  goto L_12c0b0ce;
L_12c0b0c7:;
  /* 12c0b0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b0c9 jmp 0x12c0b1f8 */
  goto L_12c0b1f8;
L_12c0b0ce:;
  /* 12c0b0ce cmp dword ptr [0x12c2e684], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e684))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b0d5 jne 0x12c0b105 */
  if (!C.zf) goto L_12c0b105;
  /* 12c0b0d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b0db jne 0x12c0b0e6 */
  if (!C.zf) goto L_12c0b0e6;
  /* 12c0b0dd mov edx, dword ptr [0x12c2e690] */
  EDX = (r32((uint32_t)(0x12c2e690)));
  /* 12c0b0e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12c0b0e6:;
  /* 12c0b0e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0b0e9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b0ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b0ed push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b0ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b0f1 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b0f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b0f5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b0f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c0b0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b0fa call dword ptr [0x12c3034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3034c))), 0x12c0b100u);
  /* 12c0b100 jmp 0x12c0b1f8 */
  goto L_12c0b1f8;
L_12c0b105:;
  /* 12c0b105 cmp dword ptr [0x12c2e684], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e684))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b10c jne 0x12c0b1f6 */
  if (!C.zf) goto L_12c0b1f6;
  /* 12c0b112 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b116 jne 0x12c0b121 */
  if (!C.zf) goto L_12c0b121;
  /* 12c0b118 mov edx, dword ptr [0x12c2e6a0] */
  EDX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c0b11e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12c0b121:;
  /* 12c0b121 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b123 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b125 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b128 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b12c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b12d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c0b130 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0b132 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b134 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b13a push edx */
  push32((uint32_t)(EDX));
  /* 12c0b13b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0b13e push eax */
  push32((uint32_t)(EAX));
  /* 12c0b13f call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c0b145u);
  /* 12c0b145 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0b148 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b14c jne 0x12c0b155 */
  if (!C.zf) goto L_12c0b155;
  /* 12c0b14e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b150 jmp 0x12c0b1f8 */
  goto L_12c0b1f8;
L_12c0b155:;
  /* 12c0b155 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0b15c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0b15f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c0b161 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b164 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c0b166 call 0x12c05fc0 */
  push32(0x12c0b16bu); f_12c05fc0();
  /* 12c0b16b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12c0b16e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c0b171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0b174 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c0b177 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0b17a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c0b17c push edx */
  push32((uint32_t)(EDX));
  /* 12c0b17d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b17f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b182 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b183 call 0x12c06b90 */
  push32(0x12c0b188u); f_12c06b90();
  /* 12c0b188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b18b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c0b192 jmp 0x12c0b1ab */
  goto L_12c0b1ab;
  /* 12c0b194 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0b199 ret  */
  ESPCHK(0x12c0b050u, _esp0);
  ESP += 4; return;
  /* 12c0b19a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0b19d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c0b1a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c0b1ab:;
  /* 12c0b1ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b1af jne 0x12c0b1b5 */
  if (!C.zf) goto L_12c0b1b5;
  /* 12c0b1b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b1b3 jmp 0x12c0b1f8 */
  goto L_12c0b1f8;
L_12c0b1b5:;
  /* 12c0b1b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0b1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b1b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b1bc push edx */
  push32((uint32_t)(EDX));
  /* 12c0b1bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b1c0 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b1c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b1c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b1c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0b1ca push edx */
  push32((uint32_t)(EDX));
  /* 12c0b1cb call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c0b1d1u);
  /* 12c0b1d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c0b1d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b1d8 jne 0x12c0b1de */
  if (!C.zf) goto L_12c0b1de;
  /* 12c0b1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b1dc jmp 0x12c0b1f8 */
  goto L_12c0b1f8;
L_12c0b1de:;
  /* 12c0b1de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0b1e1 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b1e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0b1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b1e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b1e9 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b1ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b1ed push eax */
  push32((uint32_t)(EAX));
  /* 12c0b1ee call dword ptr [0x12c30350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30350))), 0x12c0b1f4u);
  /* 12c0b1f4 jmp 0x12c0b1f8 */
  goto L_12c0b1f8;
L_12c0b1f6:;
  /* 12c0b1f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0b1f8:;
  /* 12c0b1f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12c0b1fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0b1fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c0b205 pop edi */
  EDI = (pop32());
  /* 12c0b206 pop esi */
  ESI = (pop32());
  /* 12c0b207 pop ebx */
  EBX = (pop32());
  /* 12c0b208 mov esp, ebp */
  ESP = (EBP);
  /* 12c0b20a pop ebp */
  EBP = (pop32());
  /* 12c0b20b ret  */
  ESPCHK(0x12c0b050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x12c0b210 (727 bytes, 263 insns) */
void f_12c0b210(void) {
  FTRACE(0x12c0b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b210 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b211 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c0b215 push 0x12c29f58 */
  push32((uint32_t)(0x12c29f58u));
  /* 12c0b21a push 0x12c0bf28 */
  push32((uint32_t)(0x12c0bf28u));
  /* 12c0b21f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c0b225 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b226 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c0b22d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b230 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0b231 push esi */
  push32((uint32_t)(ESI));
  /* 12c0b232 push edi */
  push32((uint32_t)(EDI));
  /* 12c0b233 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c0b236 cmp dword ptr [0x12c2e6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b23d jne 0x12c0b296 */
  if (!C.zf) goto L_12c0b296;
  /* 12c0b23f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b241 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b243 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b245 push 0x12c29f44 */
  push32((uint32_t)(0x12c29f44u));
  /* 12c0b24a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c0b24f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b251 call dword ptr [0x12c30358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30358))), 0x12c0b257u);
  /* 12c0b257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b259 je 0x12c0b267 */
  if (C.zf) goto L_12c0b267;
  /* 12c0b25b mov dword ptr [0x12c2e6a8], 1 */
  w32((uint32_t)(0x12c2e6a8), (0x1u));
  /* 12c0b265 jmp 0x12c0b296 */
  goto L_12c0b296;
L_12c0b267:;
  /* 12c0b267 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b269 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b26b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b26d push 0x12c29f40 */
  push32((uint32_t)(0x12c29f40u));
  /* 12c0b272 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c0b277 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b279 call dword ptr [0x12c30354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30354))), 0x12c0b27fu);
  /* 12c0b27f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b281 je 0x12c0b28f */
  if (C.zf) goto L_12c0b28f;
  /* 12c0b283 mov dword ptr [0x12c2e6a8], 2 */
  w32((uint32_t)(0x12c2e6a8), (0x2u));
  /* 12c0b28d jmp 0x12c0b296 */
  goto L_12c0b296;
L_12c0b28f:;
  /* 12c0b28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b291 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b296:;
  /* 12c0b296 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b29a jle 0x12c0b2af */
  if ((C.zf||C.sf!=C.of)) goto L_12c0b2af;
  /* 12c0b29c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0b29f push eax */
  push32((uint32_t)(EAX));
  /* 12c0b2a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b2a4 call 0x12c0b520 */
  push32(0x12c0b2a9u); f_12c0b520();
  /* 12c0b2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b2ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12c0b2af:;
  /* 12c0b2af cmp dword ptr [0x12c2e6a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b2b6 jne 0x12c0b2db */
  if (!C.zf) goto L_12c0b2db;
  /* 12c0b2b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c0b2bb push edx */
  push32((uint32_t)(EDX));
  /* 12c0b2bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0b2bf push eax */
  push32((uint32_t)(EAX));
  /* 12c0b2c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0b2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b2c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b2c7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b2cb push eax */
  push32((uint32_t)(EAX));
  /* 12c0b2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b2cf push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b2d0 call dword ptr [0x12c30354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30354))), 0x12c0b2d6u);
  /* 12c0b2d6 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b2db:;
  /* 12c0b2db cmp dword ptr [0x12c2e6a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b2e2 jne 0x12c0b4ff */
  if (!C.zf) goto L_12c0b4ff;
  /* 12c0b2e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b2ec jne 0x12c0b2f7 */
  if (!C.zf) goto L_12c0b2f7;
  /* 12c0b2ee mov edx, dword ptr [0x12c2e6a0] */
  EDX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c0b2f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12c0b2f7:;
  /* 12c0b2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b2fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0b2fe push eax */
  push32((uint32_t)(EAX));
  /* 12c0b2ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b302 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b303 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c0b306 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0b308 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b30a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b310 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b311 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c0b314 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b315 call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c0b31bu);
  /* 12c0b31b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c0b31e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b322 jne 0x12c0b32b */
  if (!C.zf) goto L_12c0b32b;
  /* 12c0b324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b326 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b32b:;
  /* 12c0b32b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0b332 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0b335 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c0b337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c0b33c call 0x12c05fc0 */
  push32(0x12c0b341u); f_12c05fc0();
  /* 12c0b341 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12c0b344 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c0b347 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0b34a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c0b34d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c0b354 jmp 0x12c0b36d */
  goto L_12c0b36d;
  /* 12c0b356 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0b35b ret  */
  ESPCHK(0x12c0b210u, _esp0);
  ESP += 4; return;
  /* 12c0b35c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0b35f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c0b366 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c0b36d:;
  /* 12c0b36d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b371 jne 0x12c0b37a */
  if (!C.zf) goto L_12c0b37a;
  /* 12c0b373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b375 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b37a:;
  /* 12c0b37a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0b37d push edx */
  push32((uint32_t)(EDX));
  /* 12c0b37e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b381 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b382 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0b385 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b386 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b389 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b38a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0b38c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c0b38f push eax */
  push32((uint32_t)(EAX));
  /* 12c0b390 call dword ptr [0x12c30348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30348))), 0x12c0b396u);
  /* 12c0b396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b398 jne 0x12c0b3a1 */
  if (!C.zf) goto L_12c0b3a1;
  /* 12c0b39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b39c jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b3a1:;
  /* 12c0b3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b3a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0b3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b3a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b3ac push edx */
  push32((uint32_t)(EDX));
  /* 12c0b3ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b3b0 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b3b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b3b5 call dword ptr [0x12c30358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30358))), 0x12c0b3bbu);
  /* 12c0b3bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c0b3be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b3c2 jne 0x12c0b3cb */
  if (!C.zf) goto L_12c0b3cb;
  /* 12c0b3c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b3c6 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b3cb:;
  /* 12c0b3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b3ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b3d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0b3d6 je 0x12c0b41b */
  if (C.zf) goto L_12c0b41b;
  /* 12c0b3d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b3dc je 0x12c0b416 */
  if (C.zf) goto L_12c0b416;
  /* 12c0b3de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0b3e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b3e4 jle 0x12c0b3ed */
  if ((C.zf||C.sf!=C.of)) goto L_12c0b3ed;
  /* 12c0b3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b3e8 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b3ed:;
  /* 12c0b3ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c0b3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b3f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0b3f4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b3f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0b3f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b3f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b3fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b3fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b400 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b404 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b405 call dword ptr [0x12c30358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30358))), 0x12c0b40bu);
  /* 12c0b40b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b40d jne 0x12c0b416 */
  if (!C.zf) goto L_12c0b416;
  /* 12c0b40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b411 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b416:;
  /* 12c0b416 jmp 0x12c0b4fa */
  goto L_12c0b4fa;
L_12c0b41b:;
  /* 12c0b41b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0b41e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c0b421 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c0b428 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0b42b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c0b42d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b430 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c0b432 call 0x12c05fc0 */
  push32(0x12c0b437u); f_12c05fc0();
  /* 12c0b437 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12c0b43a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c0b43d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c0b440 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c0b443 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c0b44a jmp 0x12c0b463 */
  goto L_12c0b463;
  /* 12c0b44c mov eax, 1 */
  EAX = (0x1u);
  /* 12c0b451 ret  */
  ESPCHK(0x12c0b210u, _esp0);
  ESP += 4; return;
  /* 12c0b452 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0b455 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c0b45c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c0b463:;
  /* 12c0b463 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b467 jne 0x12c0b470 */
  if (!C.zf) goto L_12c0b470;
  /* 12c0b469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b46b jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b470:;
  /* 12c0b470 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0b473 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b474 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0b477 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b478 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0b47b push edx */
  push32((uint32_t)(EDX));
  /* 12c0b47c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0b47f push eax */
  push32((uint32_t)(EAX));
  /* 12c0b480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b483 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b487 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b488 call dword ptr [0x12c30358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30358))), 0x12c0b48eu);
  /* 12c0b48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b490 jne 0x12c0b496 */
  if (!C.zf) goto L_12c0b496;
  /* 12c0b492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b494 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b496:;
  /* 12c0b496 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b49a jne 0x12c0b4ca */
  if (!C.zf) goto L_12c0b4ca;
  /* 12c0b49c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b49e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b4a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0b4a7 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b4a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0b4ab push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b4ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c0b4b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c0b4b4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b4b5 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c0b4bbu);
  /* 12c0b4bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c0b4be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b4c2 jne 0x12c0b4c8 */
  if (!C.zf) goto L_12c0b4c8;
  /* 12c0b4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b4c6 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b4c8:;
  /* 12c0b4c8 jmp 0x12c0b4fa */
  goto L_12c0b4fa;
L_12c0b4ca:;
  /* 12c0b4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b4cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b4ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c0b4d1 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b4d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0b4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b4d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0b4d9 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b4da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0b4dd push eax */
  push32((uint32_t)(EAX));
  /* 12c0b4de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c0b4e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c0b4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b4e7 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c0b4edu);
  /* 12c0b4ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c0b4f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b4f4 jne 0x12c0b4fa */
  if (!C.zf) goto L_12c0b4fa;
  /* 12c0b4f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b4f8 jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b4fa:;
  /* 12c0b4fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0b4fd jmp 0x12c0b501 */
  goto L_12c0b501;
L_12c0b4ff:;
  /* 12c0b4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0b501:;
  /* 12c0b501 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12c0b504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0b507 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c0b50e pop edi */
  EDI = (pop32());
  /* 12c0b50f pop esi */
  ESI = (pop32());
  /* 12c0b510 pop ebx */
  EBX = (pop32());
  /* 12c0b511 mov esp, ebp */
  ESP = (EBP);
  /* 12c0b513 pop ebp */
  EBP = (pop32());
  /* 12c0b514 ret  */
  ESPCHK(0x12c0b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b520 @ 0x12c0b520 (80 bytes, 32 insns) */
void f_12c0b520(void) {
  FTRACE(0x12c0b520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b520 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b521 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b529 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0b52c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b52f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0b532:;
  /* 12c0b532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b538 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0b53e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0b540 je 0x12c0b557 */
  if (C.zf) goto L_12c0b557;
  /* 12c0b542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b545 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0b548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0b54a je 0x12c0b557 */
  if (C.zf) goto L_12c0b557;
  /* 12c0b54c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b54f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0b555 jmp 0x12c0b532 */
  goto L_12c0b532;
L_12c0b557:;
  /* 12c0b557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b55a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0b55d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0b55f jne 0x12c0b569 */
  if (!C.zf) goto L_12c0b569;
  /* 12c0b561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b564 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b567 jmp 0x12c0b56c */
  goto L_12c0b56c;
L_12c0b569:;
  /* 12c0b569 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12c0b56c:;
  /* 12c0b56c mov esp, ebp */
  ESP = (EBP);
  /* 12c0b56e pop ebp */
  EBP = (pop32());
  /* 12c0b56f ret  */
  ESPCHK(0x12c0b520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x12c0b570 (130 bytes, 43 insns) */
void f_12c0b570(void) {
  FTRACE(0x12c0b570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b570 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b571 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b573 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b577 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b57d jae 0x12c0b5a1 */
  if (!C.cf) goto L_12c0b5a1;
  /* 12c0b57f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b582 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0b585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b588 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b58b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b58e mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0b595 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0b59a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0b59f jne 0x12c0b5bc */
  if (!C.zf) goto L_12c0b5bc;
L_12c0b5a1:;
  /* 12c0b5a1 call 0x12c0acf0 */
  push32(0x12c0b5a6u); f_12c0acf0();
  /* 12c0b5a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0b5ac call 0x12c0ad00 */
  push32(0x12c0b5b1u); f_12c0ad00();
  /* 12c0b5b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0b5b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b5ba jmp 0x12c0b5ee */
  goto L_12c0b5ee;
L_12c0b5bc:;
  /* 12c0b5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b5bf push edx */
  push32((uint32_t)(EDX));
  /* 12c0b5c0 call 0x12c0c510 */
  push32(0x12c0b5c5u); f_12c0c510();
  /* 12c0b5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b5c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b5cb push eax */
  push32((uint32_t)(EAX));
  /* 12c0b5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b5cf push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b5d3 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b5d4 call 0x12c0b600 */
  push32(0x12c0b5d9u); f_12c0b600();
  /* 12c0b5d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b5dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0b5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b5e2 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b5e3 call 0x12c0c5a0 */
  push32(0x12c0b5e8u); f_12c0c5a0();
  /* 12c0b5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c0b5ee:;
  /* 12c0b5ee mov esp, ebp */
  ESP = (EBP);
  /* 12c0b5f0 pop ebp */
  EBP = (pop32());
  /* 12c0b5f1 ret  */
  ESPCHK(0x12c0b570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x12c0b600 (178 bytes, 56 insns) */
void f_12c0b600(void) {
  FTRACE(0x12c0b600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b600 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b601 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b609 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b60a call 0x12c0c390 */
  push32(0x12c0b60fu); f_12c0c390();
  /* 12c0b60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b612 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0b615 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b619 jne 0x12c0b62e */
  if (!C.zf) goto L_12c0b62e;
  /* 12c0b61b call 0x12c0acf0 */
  push32(0x12c0b620u); f_12c0acf0();
  /* 12c0b620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0b626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b629 jmp 0x12c0b6ae */
  goto L_12c0b6ae;
L_12c0b62e:;
  /* 12c0b62e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b631 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b637 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0b63b push eax */
  push32((uint32_t)(EAX));
  /* 12c0b63c call dword ptr [0x12c302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302ec))), 0x12c0b642u);
  /* 12c0b642 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0b645 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b649 jne 0x12c0b656 */
  if (!C.zf) goto L_12c0b656;
  /* 12c0b64b call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0b651u);
  /* 12c0b651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0b654 jmp 0x12c0b65d */
  goto L_12c0b65d;
L_12c0b656:;
  /* 12c0b656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c0b65d:;
  /* 12c0b65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b661 je 0x12c0b674 */
  if (C.zf) goto L_12c0b674;
  /* 12c0b663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b666 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b667 call 0x12c0ac50 */
  push32(0x12c0b66cu); f_12c0ac50();
  /* 12c0b66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b66f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b672 jmp 0x12c0b6ae */
  goto L_12c0b6ae;
L_12c0b674:;
  /* 12c0b674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b677 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c0b67a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b67d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b680 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b683 mov ecx, dword ptr [edx*4 + 0x12c2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c0b68a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12c0b68e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12c0b691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b694 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0b697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b69a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b69d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b6a0 mov eax, dword ptr [eax*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0b6a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12c0b6ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c0b6ae:;
  /* 12c0b6ae mov esp, ebp */
  ESP = (EBP);
  /* 12c0b6b0 pop ebp */
  EBP = (pop32());
  /* 12c0b6b1 ret  */
  ESPCHK(0x12c0b600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x12c0b6c0 (130 bytes, 43 insns) */
void f_12c0b6c0(void) {
  FTRACE(0x12c0b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b6c7 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b6cd jae 0x12c0b6f1 */
  if (!C.cf) goto L_12c0b6f1;
  /* 12c0b6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0b6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b6de mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0b6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0b6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0b6ef jne 0x12c0b70c */
  if (!C.zf) goto L_12c0b70c;
L_12c0b6f1:;
  /* 12c0b6f1 call 0x12c0acf0 */
  push32(0x12c0b6f6u); f_12c0acf0();
  /* 12c0b6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0b6fc call 0x12c0ad00 */
  push32(0x12c0b701u); f_12c0ad00();
  /* 12c0b701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0b707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b70a jmp 0x12c0b73e */
  goto L_12c0b73e;
L_12c0b70c:;
  /* 12c0b70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b70f push edx */
  push32((uint32_t)(EDX));
  /* 12c0b710 call 0x12c0c510 */
  push32(0x12c0b715u); f_12c0c510();
  /* 12c0b715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b71b push eax */
  push32((uint32_t)(EAX));
  /* 12c0b71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b71f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b723 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b724 call 0x12c0b750 */
  push32(0x12c0b729u); f_12c0b750();
  /* 12c0b729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0b72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b732 push eax */
  push32((uint32_t)(EAX));
  /* 12c0b733 call 0x12c0c5a0 */
  push32(0x12c0b738u); f_12c0c5a0();
  /* 12c0b738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c0b73e:;
  /* 12c0b73e mov esp, ebp */
  ESP = (EBP);
  /* 12c0b740 pop ebp */
  EBP = (pop32());
  /* 12c0b741 ret  */
  ESPCHK(0x12c0b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x12c0b750 (627 bytes, 182 insns) */
void f_12c0b750(void) {
  FTRACE(0x12c0b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b750 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b751 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b753 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b759 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0b760 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0b763 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12c0b769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b76d jne 0x12c0b776 */
  if (!C.zf) goto L_12c0b776;
  /* 12c0b76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b771 jmp 0x12c0b9bf */
  goto L_12c0b9bf;
L_12c0b776:;
  /* 12c0b776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b779 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0b77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b77f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b782 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b785 mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0b78c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0b791 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0b796 je 0x12c0b7a8 */
  if (C.zf) goto L_12c0b7a8;
  /* 12c0b798 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0b79a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b79f push edx */
  push32((uint32_t)(EDX));
  /* 12c0b7a0 call 0x12c0b600 */
  push32(0x12c0b7a5u); f_12c0b600();
  /* 12c0b7a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0b7a8:;
  /* 12c0b7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b7ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0b7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b7b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b7b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b7b7 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0b7be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12c0b7c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b7ca je 0x12c0b8dc */
  if (C.zf) goto L_12c0b8dc;
  /* 12c0b7d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b7d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0b7d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12c0b7dd:;
  /* 12c0b7dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b7e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b7e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b7e6 jae 0x12c0b8da */
  if (!C.cf) goto L_12c0b8da;
  /* 12c0b7ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12c0b7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c0b7f5:;
  /* 12c0b7f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b7f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12c0b7fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b800 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b806 jge 0x12c0b867 */
  if ((C.sf==C.of)) goto L_12c0b867;
  /* 12c0b808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b80b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b80e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b811 jae 0x12c0b867 */
  if (!C.cf) goto L_12c0b867;
  /* 12c0b813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c0b818 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12c0b81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0b821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0b827 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12c0b82e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b831 jne 0x12c0b851 */
  if (!C.zf) goto L_12c0b851;
  /* 12c0b833 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12c0b839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b83c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12c0b842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b845 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12c0b848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b84b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b84e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c0b851:;
  /* 12c0b851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b854 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12c0b85a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c0b85c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b85f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b862 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0b865 jmp 0x12c0b7f5 */
  goto L_12c0b7f5;
L_12c0b867:;
  /* 12c0b867 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b869 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12c0b86f push edx */
  push32((uint32_t)(EDX));
  /* 12c0b870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b873 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12c0b879 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b87b push eax */
  push32((uint32_t)(EAX));
  /* 12c0b87c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12c0b882 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b886 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0b889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b88c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b88f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b892 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0b899 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12c0b89c push eax */
  push32((uint32_t)(EAX));
  /* 12c0b89d call dword ptr [0x12c30290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30290))), 0x12c0b8a3u);
  /* 12c0b8a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b8a5 je 0x12c0b8ca */
  if (C.zf) goto L_12c0b8ca;
  /* 12c0b8a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0b8aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b8b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c0b8b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0b8b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12c0b8bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0b8be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b8c4 jge 0x12c0b8c8 */
  if ((C.sf==C.of)) goto L_12c0b8c8;
  /* 12c0b8c6 jmp 0x12c0b8da */
  goto L_12c0b8da;
L_12c0b8c8:;
  /* 12c0b8c8 jmp 0x12c0b8d5 */
  goto L_12c0b8d5;
L_12c0b8ca:;
  /* 12c0b8ca call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0b8d0u);
  /* 12c0b8d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0b8d3 jmp 0x12c0b8da */
  goto L_12c0b8da;
L_12c0b8d5:;
  /* 12c0b8d5 jmp 0x12c0b7dd */
  goto L_12c0b7dd;
L_12c0b8da:;
  /* 12c0b8da jmp 0x12c0b92c */
  goto L_12c0b92c;
L_12c0b8dc:;
  /* 12c0b8dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b8de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12c0b8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b8e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0b8e8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0b8e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b8ec push eax */
  push32((uint32_t)(EAX));
  /* 12c0b8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b8f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0b8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b8f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0b8f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b8fc mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0b903 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12c0b906 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b907 call dword ptr [0x12c30290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30290))), 0x12c0b90du);
  /* 12c0b90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b90f je 0x12c0b923 */
  if (C.zf) goto L_12c0b923;
  /* 12c0b911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c0b918 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12c0b91e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c0b921 jmp 0x12c0b92c */
  goto L_12c0b92c;
L_12c0b923:;
  /* 12c0b923 call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0b929u);
  /* 12c0b929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c0b92c:;
  /* 12c0b92c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b930 jne 0x12c0b9b6 */
  if (!C.zf) goto L_12c0b9b6;
  /* 12c0b936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b93a je 0x12c0b96a */
  if (C.zf) goto L_12c0b96a;
  /* 12c0b93c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b940 jne 0x12c0b959 */
  if (!C.zf) goto L_12c0b959;
  /* 12c0b942 call 0x12c0acf0 */
  push32(0x12c0b947u); f_12c0acf0();
  /* 12c0b947 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0b94d call 0x12c0ad00 */
  push32(0x12c0b952u); f_12c0ad00();
  /* 12c0b952 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0b955 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c0b957 jmp 0x12c0b965 */
  goto L_12c0b965;
L_12c0b959:;
  /* 12c0b959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0b95c push edx */
  push32((uint32_t)(EDX));
  /* 12c0b95d call 0x12c0ac50 */
  push32(0x12c0b962u); f_12c0ac50();
  /* 12c0b962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0b965:;
  /* 12c0b965 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b968 jmp 0x12c0b9bf */
  goto L_12c0b9bf;
L_12c0b96a:;
  /* 12c0b96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0b970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0b973 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0b976 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0b979 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0b980 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12c0b985 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b98a je 0x12c0b99b */
  if (C.zf) goto L_12c0b99b;
  /* 12c0b98c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0b98f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0b992 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b995 jne 0x12c0b99b */
  if (!C.zf) goto L_12c0b99b;
  /* 12c0b997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b999 jmp 0x12c0b9bf */
  goto L_12c0b9bf;
L_12c0b99b:;
  /* 12c0b99b call 0x12c0acf0 */
  push32(0x12c0b9a0u); f_12c0acf0();
  /* 12c0b9a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12c0b9a6 call 0x12c0ad00 */
  push32(0x12c0b9abu); f_12c0ad00();
  /* 12c0b9ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0b9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b9b4 jmp 0x12c0b9bf */
  goto L_12c0b9bf;
L_12c0b9b6:;
  /* 12c0b9b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0b9b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c0b9bf:;
  /* 12c0b9bf mov esp, ebp */
  ESP = (EBP);
  /* 12c0b9c1 pop ebp */
  EBP = (pop32());
  /* 12c0b9c2 ret  */
  ESPCHK(0x12c0b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x12c0b9d0 (199 bytes, 68 insns) */
void f_12c0b9d0(void) {
  FTRACE(0x12c0b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0b9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0b9d4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0b9d5 push esi */
  push32((uint32_t)(ESI));
  /* 12c0b9d6 push edi */
  push32((uint32_t)(EDI));
L_12c0b9d7:;
  /* 12c0b9d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b9db jne 0x12c0b9fb */
  if (!C.zf) goto L_12c0b9fb;
  /* 12c0b9dd push 0x12c29ea4 */
  push32((uint32_t)(0x12c29ea4u));
  /* 12c0b9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0b9e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12c0b9e6 push 0x12c29f70 */
  push32((uint32_t)(0x12c29f70u));
  /* 12c0b9eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0b9ed call 0x12c01ee0 */
  push32(0x12c0b9f2u); f_12c01ee0();
  /* 12c0b9f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0b9f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0b9f8 jne 0x12c0b9fb */
  if (!C.zf) goto L_12c0b9fb;
  /* 12c0b9fa int3  */
  x86_unimpl("int3 @ 0x12c0b9fa");
L_12c0b9fb:;
  /* 12c0b9fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0b9fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0b9ff jne 0x12c0b9d7 */
  if (!C.zf) goto L_12c0b9d7;
  /* 12c0ba01 mov ecx, dword ptr [0x12c2e6ac] */
  ECX = (r32((uint32_t)(0x12c2e6ac)));
  /* 12c0ba07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ba0a mov dword ptr [0x12c2e6ac], ecx */
  w32((uint32_t)(0x12c2e6ac), (ECX));
  /* 12c0ba10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ba13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0ba16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12c0ba18 push 0x12c29f70 */
  push32((uint32_t)(0x12c29f70u));
  /* 12c0ba1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ba1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c0ba24 call 0x12c02e20 */
  push32(0x12c0ba29u); f_12c02e20();
  /* 12c0ba29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ba2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c0ba32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ba39 je 0x12c0ba56 */
  if (C.zf) goto L_12c0ba56;
  /* 12c0ba3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0ba41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0ba44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12c0ba4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12c0ba54 jmp 0x12c0ba7b */
  goto L_12c0ba7b;
L_12c0ba56:;
  /* 12c0ba56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0ba5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0ba5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c0ba65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ba6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c0ba71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12c0ba7b:;
  /* 12c0ba7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c0ba84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c0ba86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ba89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c0ba90 pop edi */
  EDI = (pop32());
  /* 12c0ba91 pop esi */
  ESI = (pop32());
  /* 12c0ba92 pop ebx */
  EBX = (pop32());
  /* 12c0ba93 mov esp, ebp */
  ESP = (EBP);
  /* 12c0ba95 pop ebp */
  EBP = (pop32());
  /* 12c0ba96 ret  */
  ESPCHK(0x12c0b9d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12c0baa0 (50 bytes, 17 insns) */
void f_12c0baa0(void) {
  FTRACE(0x12c0baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0baa1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0baa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0baa6 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0baac jb 0x12c0bab2 */
  if (C.cf) goto L_12c0bab2;
  /* 12c0baae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0bab0 jmp 0x12c0bad0 */
  goto L_12c0bad0;
L_12c0bab2:;
  /* 12c0bab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bab5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0bab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0babb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0babe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0bac1 mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0bac8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0bacd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12c0bad0:;
  /* 12c0bad0 pop ebp */
  EBP = (pop32());
  /* 12c0bad1 ret  */
  ESPCHK(0x12c0baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x12c0bae0 (300 bytes, 80 insns) */
void f_12c0bae0(void) {
  FTRACE(0x12c0bae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bae1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bae4 cmp dword ptr [0x12c2fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0baeb jne 0x12c0baf9 */
  if (!C.zf) goto L_12c0baf9;
  /* 12c0baed mov dword ptr [0x12c2fb60], 0x200 */
  w32((uint32_t)(0x12c2fb60), (0x200u));
  /* 12c0baf7 jmp 0x12c0bb0c */
  goto L_12c0bb0c;
L_12c0baf9:;
  /* 12c0baf9 cmp dword ptr [0x12c2fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bb00 jge 0x12c0bb0c */
  if ((C.sf==C.of)) goto L_12c0bb0c;
  /* 12c0bb02 mov dword ptr [0x12c2fb60], 0x14 */
  w32((uint32_t)(0x12c2fb60), (0x14u));
L_12c0bb0c:;
  /* 12c0bb0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12c0bb11 push 0x12c29f7c */
  push32((uint32_t)(0x12c29f7cu));
  /* 12c0bb16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0bb18 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c0bb1a mov eax, dword ptr [0x12c2fb60] */
  EAX = (r32((uint32_t)(0x12c2fb60)));
  /* 12c0bb1f push eax */
  push32((uint32_t)(EAX));
  /* 12c0bb20 call 0x12c03230 */
  push32(0x12c0bb25u); f_12c03230();
  /* 12c0bb25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bb28 mov dword ptr [0x12c2e820], eax */
  w32((uint32_t)(0x12c2e820), (EAX));
  /* 12c0bb2d cmp dword ptr [0x12c2e820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bb34 jne 0x12c0bb75 */
  if (!C.zf) goto L_12c0bb75;
  /* 12c0bb36 mov dword ptr [0x12c2fb60], 0x14 */
  w32((uint32_t)(0x12c2fb60), (0x14u));
  /* 12c0bb40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12c0bb45 push 0x12c29f7c */
  push32((uint32_t)(0x12c29f7cu));
  /* 12c0bb4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0bb4c push 4 */
  push32((uint32_t)(0x4u));
  /* 12c0bb4e mov ecx, dword ptr [0x12c2fb60] */
  ECX = (r32((uint32_t)(0x12c2fb60)));
  /* 12c0bb54 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bb55 call 0x12c03230 */
  push32(0x12c0bb5au); f_12c03230();
  /* 12c0bb5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bb5d mov dword ptr [0x12c2e820], eax */
  w32((uint32_t)(0x12c2e820), (EAX));
  /* 12c0bb62 cmp dword ptr [0x12c2e820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bb69 jne 0x12c0bb75 */
  if (!C.zf) goto L_12c0bb75;
  /* 12c0bb6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12c0bb6d call 0x12c01d90 */
  push32(0x12c0bb72u); f_12c01d90();
  /* 12c0bb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0bb75:;
  /* 12c0bb75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0bb7c jmp 0x12c0bb87 */
  goto L_12c0bb87;
L_12c0bb7e:;
  /* 12c0bb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bb81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0bb87:;
  /* 12c0bb87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bb8b jge 0x12c0bba6 */
  if ((C.sf==C.of)) goto L_12c0bba6;
  /* 12c0bb8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bb90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0bb93 add eax, 0x12c2d120 */
  { uint32_t _a=(EAX),_b=(0x12c2d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bb9b mov edx, dword ptr [0x12c2e820] */
  EDX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0bba1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12c0bba4 jmp 0x12c0bb7e */
  goto L_12c0bb7e;
L_12c0bba6:;
  /* 12c0bba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0bbad jmp 0x12c0bbb8 */
  goto L_12c0bbb8;
L_12c0bbaf:;
  /* 12c0bbaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bbb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0bbb8:;
  /* 12c0bbb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bbbc jge 0x12c0bc08 */
  if ((C.sf==C.of)) goto L_12c0bc08;
  /* 12c0bbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bbc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0bbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bbc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0bbca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0bbcd mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0bbd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bbd8 je 0x12c0bbf6 */
  if (C.zf) goto L_12c0bbf6;
  /* 12c0bbda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bbdd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0bbe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bbe3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0bbe6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0bbe9 mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0bbf0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bbf4 jne 0x12c0bc06 */
  if (!C.zf) goto L_12c0bc06;
L_12c0bbf6:;
  /* 12c0bbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0bbf9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0bbfc mov dword ptr [ecx + 0x12c2d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12c2d130), (0xffffffffu));
L_12c0bc06:;
  /* 12c0bc06 jmp 0x12c0bbaf */
  goto L_12c0bbaf;
L_12c0bc08:;
  /* 12c0bc08 mov esp, ebp */
  ESP = (EBP);
  /* 12c0bc0a pop ebp */
  EBP = (pop32());
  /* 12c0bc0b ret  */
  ESPCHK(0x12c0bae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x12c0bc10 (26 bytes, 9 insns) */
void f_12c0bc10(void) {
  FTRACE(0x12c0bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bc11 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bc13 call 0x12c0c810 */
  push32(0x12c0bc18u); f_12c0c810();
  /* 12c0bc18 movsx eax, byte ptr [0x12c2e4c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12c2e4c4))));
  /* 12c0bc1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0bc21 je 0x12c0bc28 */
  if (C.zf) goto L_12c0bc28;
  /* 12c0bc23 call 0x12c0c5d0 */
  push32(0x12c0bc28u); f_12c0c5d0();
L_12c0bc28:;
  /* 12c0bc28 pop ebp */
  EBP = (pop32());
  /* 12c0bc29 ret  */
  ESPCHK(0x12c0bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x12c0bc30 (61 bytes, 20 insns) */
void f_12c0bc30(void) {
  FTRACE(0x12c0bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bc31 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bc33 cmp dword ptr [ebp + 8], 0x12c2d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c2d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bc3a jb 0x12c0bc5e */
  if (C.cf) goto L_12c0bc5e;
  /* 12c0bc3c cmp dword ptr [ebp + 8], 0x12c2d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c2d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bc43 ja 0x12c0bc5e */
  if ((!C.cf&&!C.zf)) goto L_12c0bc5e;
  /* 12c0bc45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bc48 sub eax, 0x12c2d120 */
  { uint32_t _a=(EAX),_b=(0x12c2d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0bc4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0bc50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bc53 push eax */
  push32((uint32_t)(EAX));
  /* 12c0bc54 call 0x12c06820 */
  push32(0x12c0bc59u); f_12c06820();
  /* 12c0bc59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bc5c jmp 0x12c0bc6b */
  goto L_12c0bc6b;
L_12c0bc5e:;
  /* 12c0bc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bc61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bc64 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bc65 call dword ptr [0x12c30320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30320))), 0x12c0bc6bu);
L_12c0bc6b:;
  /* 12c0bc6b pop ebp */
  EBP = (pop32());
  /* 12c0bc6c ret  */
  ESPCHK(0x12c0bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x12c0bc70 (41 bytes, 16 insns) */
void f_12c0bc70(void) {
  FTRACE(0x12c0bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bc71 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bc73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bc77 jge 0x12c0bc8a */
  if ((C.sf==C.of)) goto L_12c0bc8a;
  /* 12c0bc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bc7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bc7f push eax */
  push32((uint32_t)(EAX));
  /* 12c0bc80 call 0x12c06820 */
  push32(0x12c0bc85u); f_12c06820();
  /* 12c0bc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bc88 jmp 0x12c0bc97 */
  goto L_12c0bc97;
L_12c0bc8a:;
  /* 12c0bc8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0bc8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bc90 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bc91 call dword ptr [0x12c30320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30320))), 0x12c0bc97u);
L_12c0bc97:;
  /* 12c0bc97 pop ebp */
  EBP = (pop32());
  /* 12c0bc98 ret  */
  ESPCHK(0x12c0bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bca0 @ 0x12c0bca0 (61 bytes, 20 insns) */
void f_12c0bca0(void) {
  FTRACE(0x12c0bca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bca1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bca3 cmp dword ptr [ebp + 8], 0x12c2d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c2d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bcaa jb 0x12c0bcce */
  if (C.cf) goto L_12c0bcce;
  /* 12c0bcac cmp dword ptr [ebp + 8], 0x12c2d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c2d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bcb3 ja 0x12c0bcce */
  if ((!C.cf&&!C.zf)) goto L_12c0bcce;
  /* 12c0bcb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bcb8 sub eax, 0x12c2d120 */
  { uint32_t _a=(EAX),_b=(0x12c2d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0bcbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0bcc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bcc3 push eax */
  push32((uint32_t)(EAX));
  /* 12c0bcc4 call 0x12c068c0 */
  push32(0x12c0bcc9u); f_12c068c0();
  /* 12c0bcc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bccc jmp 0x12c0bcdb */
  goto L_12c0bcdb;
L_12c0bcce:;
  /* 12c0bcce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bcd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bcd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bcd5 call dword ptr [0x12c30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30324))), 0x12c0bcdbu);
L_12c0bcdb:;
  /* 12c0bcdb pop ebp */
  EBP = (pop32());
  /* 12c0bcdc ret  */
  ESPCHK(0x12c0bca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x12c0bce0 (41 bytes, 16 insns) */
void f_12c0bce0(void) {
  FTRACE(0x12c0bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bce1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bce3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bce7 jge 0x12c0bcfa */
  if ((C.sf==C.of)) goto L_12c0bcfa;
  /* 12c0bce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bcec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bcef push eax */
  push32((uint32_t)(EAX));
  /* 12c0bcf0 call 0x12c068c0 */
  push32(0x12c0bcf5u); f_12c068c0();
  /* 12c0bcf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bcf8 jmp 0x12c0bd07 */
  goto L_12c0bd07;
L_12c0bcfa:;
  /* 12c0bcfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0bcfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bd00 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bd01 call dword ptr [0x12c30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30324))), 0x12c0bd07u);
L_12c0bd07:;
  /* 12c0bd07 pop ebp */
  EBP = (pop32());
  /* 12c0bd08 ret  */
  ESPCHK(0x12c0bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x12c0bd10 (119 bytes, 34 insns) */
void f_12c0bd10(void) {
  FTRACE(0x12c0bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bd10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bd11 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0bd16 push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c0bd1b call dword ptr [0x12c302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a4))), 0x12c0bd21u);
  /* 12c0bd21 cmp dword ptr [0x12c2e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bd28 je 0x12c0bd48 */
  if (C.zf) goto L_12c0bd48;
  /* 12c0bd2a push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c0bd2f call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c0bd35u);
  /* 12c0bd35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c0bd37 call 0x12c06820 */
  push32(0x12c0bd3cu); f_12c06820();
  /* 12c0bd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bd3f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c0bd46 jmp 0x12c0bd4f */
  goto L_12c0bd4f;
L_12c0bd48:;
  /* 12c0bd48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c0bd4f:;
  /* 12c0bd4f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12c0bd53 push eax */
  push32((uint32_t)(EAX));
  /* 12c0bd54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bd57 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bd58 call 0x12c0bd90 */
  push32(0x12c0bd5du); f_12c0bd90();
  /* 12c0bd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bd60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0bd63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bd67 je 0x12c0bd75 */
  if (C.zf) goto L_12c0bd75;
  /* 12c0bd69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c0bd6b call 0x12c068c0 */
  push32(0x12c0bd70u); f_12c068c0();
  /* 12c0bd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bd73 jmp 0x12c0bd80 */
  goto L_12c0bd80;
L_12c0bd75:;
  /* 12c0bd75 push 0x12c2e81c */
  push32((uint32_t)(0x12c2e81cu));
  /* 12c0bd7a call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c0bd80u);
L_12c0bd80:;
  /* 12c0bd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0bd83 mov esp, ebp */
  ESP = (EBP);
  /* 12c0bd85 pop ebp */
  EBP = (pop32());
  /* 12c0bd86 ret  */
  ESPCHK(0x12c0bd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x12c0bd90 (160 bytes, 50 insns) */
void f_12c0bd90(void) {
  FTRACE(0x12c0bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bd91 mov ebp, esp */
  EBP = (ESP);
  /* 12c0bd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0bd96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bd9a jne 0x12c0bda3 */
  if (!C.zf) goto L_12c0bda3;
  /* 12c0bd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0bd9e jmp 0x12c0be2c */
  goto L_12c0be2c;
L_12c0bda3:;
  /* 12c0bda3 cmp dword ptr [0x12c2e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bdaa jne 0x12c0bdda */
  if (!C.zf) goto L_12c0bdda;
  /* 12c0bdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0bdaf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0bdb4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bdb9 jle 0x12c0bdcb */
  if ((C.zf||C.sf!=C.of)) goto L_12c0bdcb;
  /* 12c0bdbb call 0x12c0acf0 */
  push32(0x12c0bdc0u); f_12c0acf0();
  /* 12c0bdc0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12c0bdc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0bdc9 jmp 0x12c0be2c */
  goto L_12c0be2c;
L_12c0bdcb:;
  /* 12c0bdcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bdce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12c0bdd1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12c0bdd3 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0bdd8 jmp 0x12c0be2c */
  goto L_12c0be2c;
L_12c0bdda:;
  /* 12c0bdda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0bde1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c0bde4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0bde5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0bde7 mov ecx, dword ptr [0x12c2cea4] */
  ECX = (r32((uint32_t)(0x12c2cea4)));
  /* 12c0bded push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bdee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bdf1 push edx */
  push32((uint32_t)(EDX));
  /* 12c0bdf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0bdf4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12c0bdf7 push eax */
  push32((uint32_t)(EAX));
  /* 12c0bdf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c0bdfd mov ecx, dword ptr [0x12c2e6a0] */
  ECX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c0be03 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0be04 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c0be0au);
  /* 12c0be0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0be0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0be11 je 0x12c0be19 */
  if (C.zf) goto L_12c0be19;
  /* 12c0be13 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0be17 je 0x12c0be29 */
  if (C.zf) goto L_12c0be29;
L_12c0be19:;
  /* 12c0be19 call 0x12c0acf0 */
  push32(0x12c0be1eu); f_12c0acf0();
  /* 12c0be1e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12c0be24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0be27 jmp 0x12c0be2c */
  goto L_12c0be2c;
L_12c0be29:;
  /* 12c0be29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c0be2c:;
  /* 12c0be2c mov esp, ebp */
  ESP = (EBP);
  /* 12c0be2e pop ebp */
  EBP = (pop32());
  /* 12c0be2f ret  */
  ESPCHK(0x12c0bd90u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12c0be30 (32 bytes, 18 insns) */
void f_12c0be30(void) {
  FTRACE(0x12c0be30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0be30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0be31 mov ebp, esp */
  EBP = (ESP);
  /* 12c0be33 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0be34 push esi */
  push32((uint32_t)(ESI));
  /* 12c0be35 push edi */
  push32((uint32_t)(EDI));
  /* 12c0be36 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0be37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0be39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0be3b push 0x12c0be48 */
  push32((uint32_t)(0x12c0be48u));
  /* 12c0be40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c0be43 call 0x12c1357c */
  push32(0x12c0be48u); f_12c1357c();
  /* 12c0be48 pop ebp */
  EBP = (pop32());
  /* 12c0be49 pop edi */
  EDI = (pop32());
  /* 12c0be4a pop esi */
  ESI = (pop32());
  /* 12c0be4b pop ebx */
  EBX = (pop32());
  /* 12c0be4c mov esp, ebp */
  ESP = (EBP);
  /* 12c0be4e pop ebp */
  EBP = (pop32());
  /* 12c0be4f ret  */
  ESPCHK(0x12c0be30u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12c0be72 (104 bytes, 33 insns) */
void f_12c0be72(void) {
  FTRACE(0x12c0be72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0be72 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0be73 push esi */
  push32((uint32_t)(ESI));
  /* 12c0be74 push edi */
  push32((uint32_t)(EDI));
  /* 12c0be75 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c0be79 push eax */
  push32((uint32_t)(EAX));
  /* 12c0be7a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12c0be7c push 0x12c0be50 */
  push32((uint32_t)(0x12c0be50u));
  /* 12c0be81 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12c0be88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12c0be8f:;
  /* 12c0be8f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c0be93 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0be96 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0be99 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0be9c je 0x12c0becc */
  if (C.zf) goto L_12c0becc;
  /* 12c0be9e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0bea2 je 0x12c0becc */
  if (C.zf) goto L_12c0becc;
  /* 12c0bea4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12c0bea7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12c0beaa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12c0beae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12c0beb1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0beb6 jne 0x12c0beca */
  if (!C.zf) goto L_12c0beca;
  /* 12c0beb8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12c0bebd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12c0bec1 call 0x12c0bf06 */
  push32(0x12c0bec6u); f_12c0bf06();
  /* 12c0bec6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12c0becau);
L_12c0beca:;
  /* 12c0beca jmp 0x12c0be8f */
  goto L_12c0be8f;
L_12c0becc:;
  /* 12c0becc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12c0bed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bed6 pop edi */
  EDI = (pop32());
  /* 12c0bed7 pop esi */
  ESI = (pop32());
  /* 12c0bed8 pop ebx */
  EBX = (pop32());
  /* 12c0bed9 ret  */
  ESPCHK(0x12c0be72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf06 @ 0x12c0bf06 (24 bytes, 10 insns) */
void f_12c0bf06(void) {
  FTRACE(0x12c0bf06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bf06 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0bf07 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0bf08 mov ebx, 0x12c2d3b8 */
  EBX = (0x12c2d3b8u);
  /* 12c0bf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0bf10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12c0bf13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c0bf16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12c0bf19 pop ecx */
  ECX = (pop32());
  /* 12c0bf1a pop ebx */
  EBX = (pop32());
  /* 12c0bf1b ret 4 */
  ESPCHK(0x12c0bf06u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bfe5 @ 0x12c0bfe5 (27 bytes, 11 insns) */
void f_12c0bfe5(void) {
  FTRACE(0x12c0bfe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0bfe5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0bfe6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c0bfea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12c0bfec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c0bfef push eax */
  push32((uint32_t)(EAX));
  /* 12c0bff0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c0bff3 push eax */
  push32((uint32_t)(EAX));
  /* 12c0bff4 call 0x12c0be72 */
  push32(0x12c0bff9u); f_12c0be72();
  /* 12c0bff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0bffc pop ebp */
  EBP = (pop32());
  /* 12c0bffd ret 4 */
  ESPCHK(0x12c0bfe5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c000 @ 0x12c0c000 (482 bytes, 138 insns) */
void f_12c0c000(void) {
  FTRACE(0x12c0c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c000 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c001 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c006 push esi */
  push32((uint32_t)(ESI));
  /* 12c0c007 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12c0c00e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12c0c010 call 0x12c06820 */
  push32(0x12c0c015u); f_12c06820();
  /* 12c0c015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c018 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c0c01f jmp 0x12c0c02a */
  goto L_12c0c02a;
L_12c0c021:;
  /* 12c0c021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c0c02a:;
  /* 12c0c02a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c02e jge 0x12c0c1d0 */
  if ((C.sf==C.of)) goto L_12c0c1d0;
  /* 12c0c034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c037 cmp dword ptr [ecx*4 + 0x12c2fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c2fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c03f je 0x12c0c136 */
  if (C.zf) goto L_12c0c136;
  /* 12c0c045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c048 mov eax, dword ptr [edx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c0c04f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0c052 jmp 0x12c0c05d */
  goto L_12c0c05d;
L_12c0c054:;
  /* 12c0c054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c057 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c05a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0c05d:;
  /* 12c0c05d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c060 mov eax, dword ptr [edx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c0c067 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c06c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c06f jae 0x12c0c126 */
  if (!C.cf) goto L_12c0c126;
  /* 12c0c075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c078 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c0c07c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0c081 jne 0x12c0c121 */
  if (!C.zf) goto L_12c0c121;
  /* 12c0c087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c08a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c08e jne 0x12c0c0c9 */
  if (!C.zf) goto L_12c0c0c9;
  /* 12c0c090 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c0c092 call 0x12c06820 */
  push32(0x12c0c097u); f_12c06820();
  /* 12c0c097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c09d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c0a1 jne 0x12c0c0bf */
  if (!C.zf) goto L_12c0c0bf;
  /* 12c0c0a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c0a9 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c0aa call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c0c0b0u);
  /* 12c0c0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0c0b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12c0c0bf:;
  /* 12c0c0bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c0c0c1 call 0x12c068c0 */
  push32(0x12c0c0c6u); f_12c068c0();
  /* 12c0c0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0c0c9:;
  /* 12c0c0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c0cf push eax */
  push32((uint32_t)(EAX));
  /* 12c0c0d0 call dword ptr [0x12c30320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30320))), 0x12c0c0d6u);
  /* 12c0c0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c0c0dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c0e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0c0e2 je 0x12c0c0f6 */
  if (C.zf) goto L_12c0c0f6;
  /* 12c0c0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c0ea push eax */
  push32((uint32_t)(EAX));
  /* 12c0c0eb call dword ptr [0x12c30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30324))), 0x12c0c0f1u);
  /* 12c0c0f1 jmp 0x12c0c054 */
  goto L_12c0c054;
L_12c0c0f6:;
  /* 12c0c0f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c0f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c0c0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c102 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0c105 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c10b sub eax, dword ptr [edx*4 + 0x12c2fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12c2fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c112 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0c113 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12c0c118 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c0c11a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0c11f jmp 0x12c0c126 */
  goto L_12c0c126;
L_12c0c121:;
  /* 12c0c121 jmp 0x12c0c054 */
  goto L_12c0c054;
L_12c0c126:;
  /* 12c0c126 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c12a je 0x12c0c131 */
  if (C.zf) goto L_12c0c131;
  /* 12c0c12c jmp 0x12c0c1d0 */
  goto L_12c0c1d0;
L_12c0c131:;
  /* 12c0c131 jmp 0x12c0c1cb */
  goto L_12c0c1cb;
L_12c0c136:;
  /* 12c0c136 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12c0c138 push 0x12c29f84 */
  push32((uint32_t)(0x12c29f84u));
  /* 12c0c13d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c13f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c0c144 call 0x12c02e20 */
  push32(0x12c0c149u); f_12c02e20();
  /* 12c0c149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c14c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0c14f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c153 je 0x12c0c1c9 */
  if (C.zf) goto L_12c0c1c9;
  /* 12c0c155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c15b mov dword ptr [eax*4 + 0x12c2fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12c2fe60), (ECX));
  /* 12c0c162 mov edx, dword ptr [0x12c2ff9c] */
  EDX = (r32((uint32_t)(0x12c2ff9c)));
  /* 12c0c168 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c16b mov dword ptr [0x12c2ff9c], edx */
  w32((uint32_t)(0x12c2ff9c), (EDX));
  /* 12c0c171 jmp 0x12c0c17c */
  goto L_12c0c17c;
L_12c0c173:;
  /* 12c0c173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c176 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0c17c:;
  /* 12c0c17c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c17f mov edx, dword ptr [ecx*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0c186 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c18c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c18f jae 0x12c0c1b4 */
  if (!C.cf) goto L_12c0c1b4;
  /* 12c0c191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c194 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c0c198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c19b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c0c1a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c1a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12c0c1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c1ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c0c1b2 jmp 0x12c0c173 */
  goto L_12c0c173;
L_12c0c1b4:;
  /* 12c0c1b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c1b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0c1ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0c1bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c1c0 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c1c1 call 0x12c0c510 */
  push32(0x12c0c1c6u); f_12c0c510();
  /* 12c0c1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0c1c9:;
  /* 12c0c1c9 jmp 0x12c0c1d0 */
  goto L_12c0c1d0;
L_12c0c1cb:;
  /* 12c0c1cb jmp 0x12c0c021 */
  goto L_12c0c021;
L_12c0c1d0:;
  /* 12c0c1d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12c0c1d2 call 0x12c068c0 */
  push32(0x12c0c1d7u); f_12c068c0();
  /* 12c0c1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c1dd pop esi */
  ESI = (pop32());
  /* 12c0c1de mov esp, ebp */
  ESP = (EBP);
  /* 12c0c1e0 pop ebp */
  EBP = (pop32());
  /* 12c0c1e1 ret  */
  ESPCHK(0x12c0c000u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12c0c1f0 (183 bytes, 57 insns) */
void f_12c0c1f0(void) {
  FTRACE(0x12c0c1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c1f7 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c1fd jae 0x12c0c28a */
  if (!C.cf) goto L_12c0c28a;
  /* 12c0c203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c206 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0c209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c20c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c20f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c212 mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0c219 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c21d jne 0x12c0c28a */
  if (!C.zf) goto L_12c0c28a;
  /* 12c0c21f cmp dword ptr [0x12c2e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c226 jne 0x12c0c26a */
  if (!C.zf) goto L_12c0c26a;
  /* 12c0c228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c22b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0c22e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c232 je 0x12c0c242 */
  if (C.zf) goto L_12c0c242;
  /* 12c0c234 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c238 je 0x12c0c250 */
  if (C.zf) goto L_12c0c250;
  /* 12c0c23a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c23e je 0x12c0c25e */
  if (C.zf) goto L_12c0c25e;
  /* 12c0c240 jmp 0x12c0c26a */
  goto L_12c0c26a;
L_12c0c242:;
  /* 12c0c242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c245 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c246 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12c0c248 call dword ptr [0x12c302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f0))), 0x12c0c24eu);
  /* 12c0c24e jmp 0x12c0c26a */
  goto L_12c0c26a;
L_12c0c250:;
  /* 12c0c250 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c253 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c254 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c0c256 call dword ptr [0x12c302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f0))), 0x12c0c25cu);
  /* 12c0c25c jmp 0x12c0c26a */
  goto L_12c0c26a;
L_12c0c25e:;
  /* 12c0c25e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c261 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c262 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c0c264 call dword ptr [0x12c302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f0))), 0x12c0c26au);
L_12c0c26a:;
  /* 12c0c26a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c26d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c0c270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c273 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c276 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c279 mov ecx, dword ptr [edx*4 + 0x12c2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c0c280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c283 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12c0c286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c288 jmp 0x12c0c2a3 */
  goto L_12c0c2a3;
L_12c0c28a:;
  /* 12c0c28a call 0x12c0acf0 */
  push32(0x12c0c28fu); f_12c0acf0();
  /* 12c0c28f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0c295 call 0x12c0ad00 */
  push32(0x12c0c29au); f_12c0ad00();
  /* 12c0c29a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0c2a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c0c2a3:;
  /* 12c0c2a3 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c2a5 pop ebp */
  EBP = (pop32());
  /* 12c0c2a6 ret  */
  ESPCHK(0x12c0c1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x12c0c2b0 (216 bytes, 63 insns) */
void f_12c0c2b0(void) {
  FTRACE(0x12c0c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c2b7 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c2bd jae 0x12c0c36b */
  if (!C.cf) goto L_12c0c36b;
  /* 12c0c2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c2c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0c2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c2cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c2cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c2d2 mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0c2d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0c2de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c2e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0c2e3 je 0x12c0c36b */
  if (C.zf) goto L_12c0c36b;
  /* 12c0c2e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c2ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c0c2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c2f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c2f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c2f8 mov ecx, dword ptr [edx*4 + 0x12c2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c0c2ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c303 je 0x12c0c36b */
  if (C.zf) goto L_12c0c36b;
  /* 12c0c305 cmp dword ptr [0x12c2e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c30c jne 0x12c0c34a */
  if (!C.zf) goto L_12c0c34a;
  /* 12c0c30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c311 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0c314 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c318 je 0x12c0c328 */
  if (C.zf) goto L_12c0c328;
  /* 12c0c31a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c31e je 0x12c0c334 */
  if (C.zf) goto L_12c0c334;
  /* 12c0c320 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c324 je 0x12c0c340 */
  if (C.zf) goto L_12c0c340;
  /* 12c0c326 jmp 0x12c0c34a */
  goto L_12c0c34a;
L_12c0c328:;
  /* 12c0c328 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0c32a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12c0c32c call dword ptr [0x12c302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f0))), 0x12c0c332u);
  /* 12c0c332 jmp 0x12c0c34a */
  goto L_12c0c34a;
L_12c0c334:;
  /* 12c0c334 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0c336 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c0c338 call dword ptr [0x12c302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f0))), 0x12c0c33eu);
  /* 12c0c33e jmp 0x12c0c34a */
  goto L_12c0c34a;
L_12c0c340:;
  /* 12c0c340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0c342 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c0c344 call dword ptr [0x12c302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f0))), 0x12c0c34au);
L_12c0c34a:;
  /* 12c0c34a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0c350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c353 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c356 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c359 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0c360 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12c0c367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c369 jmp 0x12c0c384 */
  goto L_12c0c384;
L_12c0c36b:;
  /* 12c0c36b call 0x12c0acf0 */
  push32(0x12c0c370u); f_12c0acf0();
  /* 12c0c370 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0c376 call 0x12c0ad00 */
  push32(0x12c0c37bu); f_12c0ad00();
  /* 12c0c37b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0c381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c0c384:;
  /* 12c0c384 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c386 pop ebp */
  EBP = (pop32());
  /* 12c0c387 ret  */
  ESPCHK(0x12c0c2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x12c0c390 (102 bytes, 30 insns) */
void f_12c0c390(void) {
  FTRACE(0x12c0c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c390 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c391 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c396 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c39c jae 0x12c0c3db */
  if (!C.cf) goto L_12c0c3db;
  /* 12c0c39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c3a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0c3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c3a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c3aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c3ad mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0c3b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0c3b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c3bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0c3be je 0x12c0c3db */
  if (C.zf) goto L_12c0c3db;
  /* 12c0c3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c3c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c0c3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c3c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c3cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c3cf mov ecx, dword ptr [edx*4 + 0x12c2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c0c3d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12c0c3d9 jmp 0x12c0c3f4 */
  goto L_12c0c3f4;
L_12c0c3db:;
  /* 12c0c3db call 0x12c0acf0 */
  push32(0x12c0c3e0u); f_12c0acf0();
  /* 12c0c3e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0c3e6 call 0x12c0ad00 */
  push32(0x12c0c3ebu); f_12c0ad00();
  /* 12c0c3eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0c3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c0c3f4:;
  /* 12c0c3f4 pop ebp */
  EBP = (pop32());
  /* 12c0c3f5 ret  */
  ESPCHK(0x12c0c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x12c0c400 (260 bytes, 83 insns) */
void f_12c0c400(void) {
  FTRACE(0x12c0c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c400 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c401 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c406 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c0c40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c40d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0c412 je 0x12c0c41d */
  if (C.zf) goto L_12c0c41d;
  /* 12c0c414 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c417 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c0c41a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12c0c41d:;
  /* 12c0c41d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c420 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0c428 je 0x12c0c432 */
  if (C.zf) goto L_12c0c432;
  /* 12c0c42a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c42d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12c0c42f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12c0c432:;
  /* 12c0c432 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c435 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c43b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0c43d je 0x12c0c448 */
  if (C.zf) goto L_12c0c448;
  /* 12c0c43f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c442 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12c0c445 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12c0c448:;
  /* 12c0c448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c44b push eax */
  push32((uint32_t)(EAX));
  /* 12c0c44c call dword ptr [0x12c302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302dc))), 0x12c0c452u);
  /* 12c0c452 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0c455 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c459 jne 0x12c0c472 */
  if (!C.zf) goto L_12c0c472;
  /* 12c0c45b call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0c461u);
  /* 12c0c461 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c462 call 0x12c0ac50 */
  push32(0x12c0c467u); f_12c0ac50();
  /* 12c0c467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c46a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c46d jmp 0x12c0c500 */
  goto L_12c0c500;
L_12c0c472:;
  /* 12c0c472 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c476 jne 0x12c0c483 */
  if (!C.zf) goto L_12c0c483;
  /* 12c0c478 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c47b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12c0c47e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12c0c481 jmp 0x12c0c492 */
  goto L_12c0c492;
L_12c0c483:;
  /* 12c0c483 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c487 jne 0x12c0c492 */
  if (!C.zf) goto L_12c0c492;
  /* 12c0c489 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c48c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12c0c48f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12c0c492:;
  /* 12c0c492 call 0x12c0c000 */
  push32(0x12c0c497u); f_12c0c000();
  /* 12c0c497 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0c49a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c49e jne 0x12c0c4bb */
  if (!C.zf) goto L_12c0c4bb;
  /* 12c0c4a0 call 0x12c0acf0 */
  push32(0x12c0c4a5u); f_12c0acf0();
  /* 12c0c4a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12c0c4ab call 0x12c0ad00 */
  push32(0x12c0c4b0u); f_12c0ad00();
  /* 12c0c4b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c0c4b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c4b9 jmp 0x12c0c500 */
  goto L_12c0c500;
L_12c0c4bb:;
  /* 12c0c4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c4be push eax */
  push32((uint32_t)(EAX));
  /* 12c0c4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c4c3 call 0x12c0c1f0 */
  push32(0x12c0c4c8u); f_12c0c1f0();
  /* 12c0c4c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c4cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c4ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12c0c4d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12c0c4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c4d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0c4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c4dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c4e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c4e3 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0c4ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c0c4ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12c0c4f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c4f5 call 0x12c0c5a0 */
  push32(0x12c0c4fau); f_12c0c5a0();
  /* 12c0c4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c4fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c0c500:;
  /* 12c0c500 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c502 pop ebp */
  EBP = (pop32());
  /* 12c0c503 ret  */
  ESPCHK(0x12c0c400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x12c0c510 (134 bytes, 44 insns) */
void f_12c0c510(void) {
  FTRACE(0x12c0c510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c510 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c511 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c513 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c517 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0c51a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c51d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c520 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c523 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0c52a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c52c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0c52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c532 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c536 jne 0x12c0c571 */
  if (!C.zf) goto L_12c0c571;
  /* 12c0c538 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c0c53a call 0x12c06820 */
  push32(0x12c0c53fu); f_12c06820();
  /* 12c0c53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c545 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c549 jne 0x12c0c567 */
  if (!C.zf) goto L_12c0c567;
  /* 12c0c54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c54e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c551 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c552 call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c0c558u);
  /* 12c0c558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c55b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0c55e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12c0c567:;
  /* 12c0c567 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c0c569 call 0x12c068c0 */
  push32(0x12c0c56eu); f_12c068c0();
  /* 12c0c56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0c571:;
  /* 12c0c571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c574 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0c577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c57a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c57d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c580 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0c587 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12c0c58b push eax */
  push32((uint32_t)(EAX));
  /* 12c0c58c call dword ptr [0x12c30320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30320))), 0x12c0c592u);
  /* 12c0c592 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c594 pop ebp */
  EBP = (pop32());
  /* 12c0c595 ret  */
  ESPCHK(0x12c0c510u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12c0c5a0 (38 bytes, 13 insns) */
void f_12c0c5a0(void) {
  FTRACE(0x12c0c5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0c5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c5b2 mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0c5b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12c0c5bd push eax */
  push32((uint32_t)(EAX));
  /* 12c0c5be call dword ptr [0x12c30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30324))), 0x12c0c5c4u);
  /* 12c0c5c4 pop ebp */
  EBP = (pop32());
  /* 12c0c5c5 ret  */
  ESPCHK(0x12c0c5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x12c0c5d0 (218 bytes, 63 insns) */
void f_12c0c5d0(void) {
  FTRACE(0x12c0c5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0c5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c5df call 0x12c06820 */
  push32(0x12c0c5e4u); f_12c06820();
  /* 12c0c5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c5e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12c0c5ee jmp 0x12c0c5f9 */
  goto L_12c0c5f9;
L_12c0c5f0:;
  /* 12c0c5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c5f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c5f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c0c5f9:;
  /* 12c0c5f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c5fc cmp ecx, dword ptr [0x12c2fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c602 jge 0x12c0c699 */
  if ((C.sf==C.of)) goto L_12c0c699;
  /* 12c0c608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c60b mov eax, dword ptr [0x12c2e820] */
  EAX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c610 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c614 je 0x12c0c694 */
  if (C.zf) goto L_12c0c694;
  /* 12c0c616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c619 mov edx, dword ptr [0x12c2e820] */
  EDX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c61f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c0c622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0c625 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0c62d je 0x12c0c651 */
  if (C.zf) goto L_12c0c651;
  /* 12c0c62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c632 mov eax, dword ptr [0x12c2e820] */
  EAX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c637 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c0c63a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c63b call 0x12c0d3c0 */
  push32(0x12c0c640u); f_12c0d3c0();
  /* 12c0c640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c643 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c646 je 0x12c0c651 */
  if (C.zf) goto L_12c0c651;
  /* 12c0c648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c64e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0c651:;
  /* 12c0c651 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c655 jl 0x12c0c694 */
  if ((C.sf!=C.of)) goto L_12c0c694;
  /* 12c0c657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c65a mov ecx, dword ptr [0x12c2e820] */
  ECX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c660 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c0c663 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c666 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c667 call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c0c66du);
  /* 12c0c66d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c66f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c672 mov ecx, dword ptr [0x12c2e820] */
  ECX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c678 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c0c67b push edx */
  push32((uint32_t)(EDX));
  /* 12c0c67c call 0x12c038b0 */
  push32(0x12c0c681u); f_12c038b0();
  /* 12c0c681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c687 mov ecx, dword ptr [0x12c2e820] */
  ECX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c68d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12c0c694:;
  /* 12c0c694 jmp 0x12c0c5f0 */
  goto L_12c0c5f0;
L_12c0c699:;
  /* 12c0c699 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c69b call 0x12c068c0 */
  push32(0x12c0c6a0u); f_12c068c0();
  /* 12c0c6a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c6a6 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c6a8 pop ebp */
  EBP = (pop32());
  /* 12c0c6a9 ret  */
  ESPCHK(0x12c0c5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x12c0c6b0 (68 bytes, 26 insns) */
void f_12c0c6b0(void) {
  FTRACE(0x12c0c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c6b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c6b8 jne 0x12c0c6c6 */
  if (!C.zf) goto L_12c0c6c6;
  /* 12c0c6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0c6bc call 0x12c0c820 */
  push32(0x12c0c6c1u); f_12c0c820();
  /* 12c0c6c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c6c4 jmp 0x12c0c6f0 */
  goto L_12c0c6f0;
L_12c0c6c6:;
  /* 12c0c6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c6c9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c6ca call 0x12c0bc30 */
  push32(0x12c0c6cfu); f_12c0bc30();
  /* 12c0c6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c6d6 call 0x12c0c700 */
  push32(0x12c0c6dbu); f_12c0c700();
  /* 12c0c6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c6de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0c6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c6e4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c6e5 call 0x12c0bca0 */
  push32(0x12c0c6eau); f_12c0bca0();
  /* 12c0c6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c6ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c0c6f0:;
  /* 12c0c6f0 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c6f2 pop ebp */
  EBP = (pop32());
  /* 12c0c6f3 ret  */
  ESPCHK(0x12c0c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x12c0c700 (65 bytes, 26 insns) */
void f_12c0c700(void) {
  FTRACE(0x12c0c700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c700 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c701 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c706 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c707 call 0x12c0c750 */
  push32(0x12c0c70cu); f_12c0c750();
  /* 12c0c70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0c711 je 0x12c0c718 */
  if (C.zf) goto L_12c0c718;
  /* 12c0c713 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c716 jmp 0x12c0c73f */
  goto L_12c0c73f;
L_12c0c718:;
  /* 12c0c718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c71b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0c71e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0c726 je 0x12c0c73d */
  if (C.zf) goto L_12c0c73d;
  /* 12c0c728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c72b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0c72e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c72f call 0x12c0d510 */
  push32(0x12c0c734u); f_12c0d510();
  /* 12c0c734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c737 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0c739 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c73b jmp 0x12c0c73f */
  goto L_12c0c73f;
L_12c0c73d:;
  /* 12c0c73d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0c73f:;
  /* 12c0c73f pop ebp */
  EBP = (pop32());
  /* 12c0c740 ret  */
  ESPCHK(0x12c0c700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x12c0c750 (183 bytes, 62 insns) */
void f_12c0c750(void) {
  FTRACE(0x12c0c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c750 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c751 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0c75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c760 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0c763 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c766 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0c769 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c76c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c76f jne 0x12c0c7eb */
  if (!C.zf) goto L_12c0c7eb;
  /* 12c0c771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c774 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0c777 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c77d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0c77f je 0x12c0c7eb */
  if (C.zf) goto L_12c0c7eb;
  /* 12c0c781 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c787 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c0c789 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0c78f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c793 jle 0x12c0c7eb */
  if ((C.zf||C.sf!=C.of)) goto L_12c0c7eb;
  /* 12c0c795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c798 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c79c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0c79f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c0c7a6 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c7a7 call 0x12c0b6c0 */
  push32(0x12c0c7acu); f_12c0b6c0();
  /* 12c0c7ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c7af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c7b2 jne 0x12c0c7d5 */
  if (!C.zf) goto L_12c0c7d5;
  /* 12c0c7b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0c7ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0c7c2 je 0x12c0c7d3 */
  if (C.zf) goto L_12c0c7d3;
  /* 12c0c7c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0c7ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12c0c7d3:;
  /* 12c0c7d3 jmp 0x12c0c7eb */
  goto L_12c0c7eb;
L_12c0c7d5:;
  /* 12c0c7d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0c7db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c7de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12c0c7e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c0c7eb:;
  /* 12c0c7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c0c7f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c0c7f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0c7f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c0c800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c803 mov esp, ebp */
  ESP = (EBP);
  /* 12c0c805 pop ebp */
  EBP = (pop32());
  /* 12c0c806 ret  */
  ESPCHK(0x12c0c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x12c0c810 (15 bytes, 7 insns) */
void f_12c0c810(void) {
  FTRACE(0x12c0c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c810 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c811 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c813 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0c815 call 0x12c0c820 */
  push32(0x12c0c81au); f_12c0c820();
  /* 12c0c81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c81d pop ebp */
  EBP = (pop32());
  /* 12c0c81e ret  */
  ESPCHK(0x12c0c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x12c0c820 (319 bytes, 94 insns) */
void f_12c0c820(void) {
  FTRACE(0x12c0c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c820 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c821 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0c82d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0c834 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c836 call 0x12c06820 */
  push32(0x12c0c83bu); f_12c06820();
  /* 12c0c83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c83e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c0c845 jmp 0x12c0c850 */
  goto L_12c0c850;
L_12c0c847:;
  /* 12c0c847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c84d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c0c850:;
  /* 12c0c850 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c853 cmp ecx, dword ptr [0x12c2fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c859 jge 0x12c0c943 */
  if ((C.sf==C.of)) goto L_12c0c943;
  /* 12c0c85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c862 mov eax, dword ptr [0x12c2e820] */
  EAX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c867 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c86b je 0x12c0c93e */
  if (C.zf) goto L_12c0c93e;
  /* 12c0c871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c874 mov edx, dword ptr [0x12c2e820] */
  EDX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c87a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c0c87d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0c880 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0c886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0c888 je 0x12c0c93e */
  if (C.zf) goto L_12c0c93e;
  /* 12c0c88e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c891 mov eax, dword ptr [0x12c2e820] */
  EAX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c896 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c0c899 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c89a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c89d push edx */
  push32((uint32_t)(EDX));
  /* 12c0c89e call 0x12c0bc70 */
  push32(0x12c0c8a3u); f_12c0bc70();
  /* 12c0c8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c8a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c8a9 mov ecx, dword ptr [0x12c2e820] */
  ECX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c8af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c0c8b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c0c8b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c8ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0c8bc je 0x12c0c925 */
  if (C.zf) goto L_12c0c925;
  /* 12c0c8be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c8c2 jne 0x12c0c8e9 */
  if (!C.zf) goto L_12c0c8e9;
  /* 12c0c8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c8c7 mov edx, dword ptr [0x12c2e820] */
  EDX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c8cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c0c8d0 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c8d1 call 0x12c0c700 */
  push32(0x12c0c8d6u); f_12c0c700();
  /* 12c0c8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c8d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c8dc je 0x12c0c8e7 */
  if (C.zf) goto L_12c0c8e7;
  /* 12c0c8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c8e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c8e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0c8e7:;
  /* 12c0c8e7 jmp 0x12c0c925 */
  goto L_12c0c925;
L_12c0c8e9:;
  /* 12c0c8e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c8ed jne 0x12c0c925 */
  if (!C.zf) goto L_12c0c925;
  /* 12c0c8ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c8f2 mov eax, dword ptr [0x12c2e820] */
  EAX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c8f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c0c8fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0c8fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0c900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0c902 je 0x12c0c925 */
  if (C.zf) goto L_12c0c925;
  /* 12c0c904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c907 mov ecx, dword ptr [0x12c2e820] */
  ECX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c90d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c0c910 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c911 call 0x12c0c700 */
  push32(0x12c0c916u); f_12c0c700();
  /* 12c0c916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c919 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c91c jne 0x12c0c925 */
  if (!C.zf) goto L_12c0c925;
  /* 12c0c91e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12c0c925:;
  /* 12c0c925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c928 mov ecx, dword ptr [0x12c2e820] */
  ECX = (r32((uint32_t)(0x12c2e820)));
  /* 12c0c92e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c0c931 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c932 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0c935 push eax */
  push32((uint32_t)(EAX));
  /* 12c0c936 call 0x12c0bce0 */
  push32(0x12c0c93bu); f_12c0bce0();
  /* 12c0c93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0c93e:;
  /* 12c0c93e jmp 0x12c0c847 */
  goto L_12c0c847;
L_12c0c943:;
  /* 12c0c943 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c945 call 0x12c068c0 */
  push32(0x12c0c94au); f_12c068c0();
  /* 12c0c94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c94d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c951 jne 0x12c0c958 */
  if (!C.zf) goto L_12c0c958;
  /* 12c0c953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0c956 jmp 0x12c0c95b */
  goto L_12c0c95b;
L_12c0c958:;
  /* 12c0c958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c0c95b:;
  /* 12c0c95b mov esp, ebp */
  ESP = (EBP);
  /* 12c0c95d pop ebp */
  EBP = (pop32());
  /* 12c0c95e ret  */
  ESPCHK(0x12c0c820u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12c0c960 (15 bytes, 7 insns) */
void f_12c0c960(void) {
  FTRACE(0x12c0c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c961 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c963 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0c965 call 0x12c01d90 */
  push32(0x12c0c96au); f_12c01d90();
  /* 12c0c96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c96d pop ebp */
  EBP = (pop32());
  /* 12c0c96e ret  */
  ESPCHK(0x12c0c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x12c0c970 (1007 bytes, 269 insns) */
void f_12c0c970(void) {
  FTRACE(0x12c0c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0c970 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0c971 mov ebp, esp */
  EBP = (ESP);
  /* 12c0c973 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0c979 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c97d jl 0x12c0c985 */
  if ((C.sf!=C.of)) goto L_12c0c985;
  /* 12c0c97f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c983 jle 0x12c0c98c */
  if ((C.zf||C.sf!=C.of)) goto L_12c0c98c;
L_12c0c985:;
  /* 12c0c985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0c987 jmp 0x12c0cd5b */
  goto L_12c0cd5b;
L_12c0c98c:;
  /* 12c0c98c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c0c98e call 0x12c06820 */
  push32(0x12c0c993u); f_12c06820();
  /* 12c0c993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c996 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c0c99d mov eax, dword ptr [0x12c2e80c] */
  EAX = (r32((uint32_t)(0x12c2e80c)));
  /* 12c0c9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c9a5 mov dword ptr [0x12c2e80c], eax */
  w32((uint32_t)(0x12c2e80c), (EAX));
L_12c0c9aa:;
  /* 12c0c9aa cmp dword ptr [0x12c2e81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c9b1 je 0x12c0c9bd */
  if (C.zf) goto L_12c0c9bd;
  /* 12c0c9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0c9b5 call dword ptr [0x12c30274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30274))), 0x12c0c9bbu);
  /* 12c0c9bb jmp 0x12c0c9aa */
  goto L_12c0c9aa;
L_12c0c9bd:;
  /* 12c0c9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c9c1 je 0x12c0ca01 */
  if (C.zf) goto L_12c0ca01;
  /* 12c0c9c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0c9c7 je 0x12c0c9e1 */
  if (C.zf) goto L_12c0c9e1;
  /* 12c0c9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0c9cc push ecx */
  push32((uint32_t)(ECX));
  /* 12c0c9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c9d0 push edx */
  push32((uint32_t)(EDX));
  /* 12c0c9d1 call 0x12c0cd60 */
  push32(0x12c0c9d6u); f_12c0cd60();
  /* 12c0c9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0c9d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12c0c9df jmp 0x12c0c9f3 */
  goto L_12c0c9f3;
L_12c0c9e1:;
  /* 12c0c9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0c9e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0c9e7 mov ecx, dword ptr [eax + 0x12c2d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12c2d4dc)));
  /* 12c0c9ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12c0c9f3:;
  /* 12c0c9f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12c0c9f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0c9fc jmp 0x12c0cd3b */
  goto L_12c0cd3b;
L_12c0ca01:;
  /* 12c0ca01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12c0ca08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c0ca0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca13 je 0x12c0cd33 */
  if (C.zf) goto L_12c0cd33;
  /* 12c0ca19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ca1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0ca1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca22 jne 0x12c0cc44 */
  if (!C.zf) goto L_12c0cc44;
  /* 12c0ca28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ca2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c0ca2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca32 jne 0x12c0cc44 */
  if (!C.zf) goto L_12c0cc44;
  /* 12c0ca38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ca3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12c0ca3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca42 jne 0x12c0cc44 */
  if (!C.zf) goto L_12c0cc44;
  /* 12c0ca48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ca4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12c0ca51:;
  /* 12c0ca51 push 0x12c29fd4 */
  push32((uint32_t)(0x12c29fd4u));
  /* 12c0ca56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c0ca5c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ca5d call 0x12c0ebc0 */
  push32(0x12c0ca62u); f_12c0ebc0();
  /* 12c0ca62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ca65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12c0ca6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca72 je 0x12c0ca9d */
  if (C.zf) goto L_12c0ca9d;
  /* 12c0ca74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0ca7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ca80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12c0ca86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca8d je 0x12c0ca9d */
  if (C.zf) goto L_12c0ca9d;
  /* 12c0ca8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0ca95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0ca98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ca9b jne 0x12c0cac3 */
  if (!C.zf) goto L_12c0cac3;
L_12c0ca9d:;
  /* 12c0ca9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0caa1 je 0x12c0cabc */
  if (C.zf) goto L_12c0cabc;
  /* 12c0caa3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c0caa5 call 0x12c068c0 */
  push32(0x12c0caaau); f_12c068c0();
  /* 12c0caaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0caad mov edx, dword ptr [0x12c2e80c] */
  EDX = (r32((uint32_t)(0x12c2e80c)));
  /* 12c0cab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0cab6 mov dword ptr [0x12c2e80c], edx */
  w32((uint32_t)(0x12c2e80c), (EDX));
L_12c0cabc:;
  /* 12c0cabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0cabe jmp 0x12c0cd5b */
  goto L_12c0cd5b;
L_12c0cac3:;
  /* 12c0cac3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c0caca jmp 0x12c0cad5 */
  goto L_12c0cad5;
L_12c0cacc:;
  /* 12c0cacc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0cacf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cad2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c0cad5:;
  /* 12c0cad5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cad9 jg 0x12c0cb23 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0cb23;
  /* 12c0cadb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c0cae1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cae2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c0cae8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0cae9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0caec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0caef mov ecx, dword ptr [eax + 0x12c2d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12c2d4d8)));
  /* 12c0caf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0caf6 call 0x12c0eb80 */
  push32(0x12c0cafbu); f_12c0eb80();
  /* 12c0cafb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cb00 jne 0x12c0cb21 */
  if (!C.zf) goto L_12c0cb21;
  /* 12c0cb02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0cb05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cb08 mov eax, dword ptr [edx + 0x12c2d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12c2d4d8)));
  /* 12c0cb0e push eax */
  push32((uint32_t)(EAX));
  /* 12c0cb0f call 0x12c05c50 */
  push32(0x12c0cb14u); f_12c05c50();
  /* 12c0cb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cb17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cb1d jne 0x12c0cb21 */
  if (!C.zf) goto L_12c0cb21;
  /* 12c0cb1f jmp 0x12c0cb23 */
  goto L_12c0cb23;
L_12c0cb21:;
  /* 12c0cb21 jmp 0x12c0cacc */
  goto L_12c0cacc;
L_12c0cb23:;
  /* 12c0cb23 push 0x12c29fd0 */
  push32((uint32_t)(0x12c29fd0u));
  /* 12c0cb28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0cb2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cb31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12c0cb37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0cb3d push edx */
  push32((uint32_t)(EDX));
  /* 12c0cb3e call 0x12c0eb40 */
  push32(0x12c0cb43u); f_12c0eb40();
  /* 12c0cb43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cb46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12c0cb4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cb53 jne 0x12c0cb89 */
  if (!C.zf) goto L_12c0cb89;
  /* 12c0cb55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0cb5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0cb5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cb61 je 0x12c0cb89 */
  if (C.zf) goto L_12c0cb89;
  /* 12c0cb63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cb67 je 0x12c0cb82 */
  if (C.zf) goto L_12c0cb82;
  /* 12c0cb69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c0cb6b call 0x12c068c0 */
  push32(0x12c0cb70u); f_12c068c0();
  /* 12c0cb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cb73 mov edx, dword ptr [0x12c2e80c] */
  EDX = (r32((uint32_t)(0x12c2e80c)));
  /* 12c0cb79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0cb7c mov dword ptr [0x12c2e80c], edx */
  w32((uint32_t)(0x12c2e80c), (EDX));
L_12c0cb82:;
  /* 12c0cb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0cb84 jmp 0x12c0cd5b */
  goto L_12c0cd5b;
L_12c0cb89:;
  /* 12c0cb89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cb8d jg 0x12c0cbda */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0cbda;
  /* 12c0cb8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c0cb95 push eax */
  push32((uint32_t)(EAX));
  /* 12c0cb96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0cb9c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cb9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12c0cba3 push edx */
  push32((uint32_t)(EDX));
  /* 12c0cba4 call 0x12c06640 */
  push32(0x12c0cba9u); f_12c06640();
  /* 12c0cba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cbac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c0cbb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12c0cbba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12c0cbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cbc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0cbc4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0cbc5 call 0x12c0cd60 */
  push32(0x12c0cbcau); f_12c0cd60();
  /* 12c0cbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cbcf je 0x12c0cbda */
  if (C.zf) goto L_12c0cbda;
  /* 12c0cbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0cbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cbd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c0cbda:;
  /* 12c0cbda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0cbe0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cbe6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12c0cbec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c0cbf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0cbf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cbf7 je 0x12c0cc08 */
  if (C.zf) goto L_12c0cc08;
  /* 12c0cbf9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c0cbff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cc02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12c0cc08:;
  /* 12c0cc08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c0cc0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0cc11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cc13 jne 0x12c0ca51 */
  if (!C.zf) goto L_12c0ca51;
  /* 12c0cc19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cc1d je 0x12c0cc2c */
  if (C.zf) goto L_12c0cc2c;
  /* 12c0cc1f call 0x12c0cf00 */
  push32(0x12c0cc24u); f_12c0cf00();
  /* 12c0cc24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12c0cc2a jmp 0x12c0cc36 */
  goto L_12c0cc36;
L_12c0cc2c:;
  /* 12c0cc2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12c0cc36:;
  /* 12c0cc36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12c0cc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0cc3f jmp 0x12c0cd31 */
  goto L_12c0cd31;
L_12c0cc44:;
  /* 12c0cc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0cc47 push edx */
  push32((uint32_t)(EDX));
  /* 12c0cc48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0cc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0cc4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12c0cc52 push eax */
  push32((uint32_t)(EAX));
  /* 12c0cc53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0cc56 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cc57 call 0x12c0d000 */
  push32(0x12c0cc5cu); f_12c0d000();
  /* 12c0cc5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cc5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0cc62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cc66 je 0x12c0cd31 */
  if (C.zf) goto L_12c0cd31;
  /* 12c0cc6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c0cc73 jmp 0x12c0cc7e */
  goto L_12c0cc7e;
L_12c0cc75:;
  /* 12c0cc75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0cc78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cc7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c0cc7e:;
  /* 12c0cc7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cc82 jg 0x12c0cce0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0cce0;
  /* 12c0cc84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cc88 je 0x12c0ccde */
  if (C.zf) goto L_12c0ccde;
  /* 12c0cc8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0cc8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cc90 mov ecx, dword ptr [eax + 0x12c2d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12c2d4dc)));
  /* 12c0cc96 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cc97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12c0cc9d push edx */
  push32((uint32_t)(EDX));
  /* 12c0cc9e call 0x12c0eab0 */
  push32(0x12c0cca3u); f_12c0eab0();
  /* 12c0cca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cca8 je 0x12c0ccd5 */
  if (C.zf) goto L_12c0ccd5;
  /* 12c0ccaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12c0ccb0 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ccb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0ccb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ccb5 call 0x12c0cd60 */
  push32(0x12c0ccbau); f_12c0cd60();
  /* 12c0ccba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ccbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ccbf je 0x12c0cccc */
  if (C.zf) goto L_12c0cccc;
  /* 12c0ccc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ccc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ccc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c0ccca jmp 0x12c0ccd3 */
  goto L_12c0ccd3;
L_12c0cccc:;
  /* 12c0cccc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12c0ccd3:;
  /* 12c0ccd3 jmp 0x12c0ccde */
  goto L_12c0ccde;
L_12c0ccd5:;
  /* 12c0ccd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ccd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ccdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c0ccde:;
  /* 12c0ccde jmp 0x12c0cc75 */
  goto L_12c0cc75;
L_12c0cce0:;
  /* 12c0cce0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cce4 je 0x12c0cd0b */
  if (C.zf) goto L_12c0cd0b;
  /* 12c0cce6 call 0x12c0cf00 */
  push32(0x12c0ccebu); f_12c0cf00();
  /* 12c0cceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0ccee push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ccf0 mov ecx, dword ptr [0x12c2d4dc] */
  ECX = (r32((uint32_t)(0x12c2d4dc)));
  /* 12c0ccf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ccf7 call 0x12c038b0 */
  push32(0x12c0ccfcu); f_12c038b0();
  /* 12c0ccfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ccff mov dword ptr [0x12c2d4dc], 0 */
  w32((uint32_t)(0x12c2d4dc), (0x0u));
  /* 12c0cd09 jmp 0x12c0cd31 */
  goto L_12c0cd31;
L_12c0cd0b:;
  /* 12c0cd0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cd0f je 0x12c0cd1e */
  if (C.zf) goto L_12c0cd1e;
  /* 12c0cd11 call 0x12c0cf00 */
  push32(0x12c0cd16u); f_12c0cf00();
  /* 12c0cd16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12c0cd1c jmp 0x12c0cd28 */
  goto L_12c0cd28;
L_12c0cd1e:;
  /* 12c0cd1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12c0cd28:;
  /* 12c0cd28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12c0cd2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c0cd31:;
  /* 12c0cd31 jmp 0x12c0cd3b */
  goto L_12c0cd3b;
L_12c0cd33:;
  /* 12c0cd33 call 0x12c0cf00 */
  push32(0x12c0cd38u); f_12c0cf00();
  /* 12c0cd38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c0cd3b:;
  /* 12c0cd3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cd3f je 0x12c0cd58 */
  if (C.zf) goto L_12c0cd58;
  /* 12c0cd41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c0cd43 call 0x12c068c0 */
  push32(0x12c0cd48u); f_12c068c0();
  /* 12c0cd48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cd4b mov eax, dword ptr [0x12c2e80c] */
  EAX = (r32((uint32_t)(0x12c2e80c)));
  /* 12c0cd50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0cd53 mov dword ptr [0x12c2e80c], eax */
  w32((uint32_t)(0x12c2e80c), (EAX));
L_12c0cd58:;
  /* 12c0cd58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c0cd5b:;
  /* 12c0cd5b mov esp, ebp */
  ESP = (EBP);
  /* 12c0cd5d pop ebp */
  EBP = (pop32());
  /* 12c0cd5e ret  */
  ESPCHK(0x12c0c970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x12c0cd60 (403 bytes, 117 insns) */
void f_12c0cd60(void) {
  FTRACE(0x12c0cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0cd61 mov ebp, esp */
  EBP = (ESP);
  /* 12c0cd63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0cd69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0cd6c push eax */
  push32((uint32_t)(EAX));
  /* 12c0cd6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12c0cd73 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cd74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12c0cd7a push edx */
  push32((uint32_t)(EDX));
  /* 12c0cd7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12c0cd81 push eax */
  push32((uint32_t)(EAX));
  /* 12c0cd82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0cd85 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cd86 call 0x12c0d000 */
  push32(0x12c0cd8bu); f_12c0d000();
  /* 12c0cd8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cd90 jne 0x12c0cd99 */
  if (!C.zf) goto L_12c0cd99;
  /* 12c0cd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0cd94 jmp 0x12c0ceef */
  goto L_12c0ceef;
L_12c0cd99:;
  /* 12c0cd99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12c0cd9e push 0x12c29fd8 */
  push32((uint32_t)(0x12c29fd8u));
  /* 12c0cda3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0cda5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12c0cdab push edx */
  push32((uint32_t)(EDX));
  /* 12c0cdac call 0x12c05c50 */
  push32(0x12c0cdb1u); f_12c05c50();
  /* 12c0cdb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cdb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cdb7 push eax */
  push32((uint32_t)(EAX));
  /* 12c0cdb8 call 0x12c02e20 */
  push32(0x12c0cdbdu); f_12c02e20();
  /* 12c0cdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cdc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0cdc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cdc7 jne 0x12c0cdd0 */
  if (!C.zf) goto L_12c0cdd0;
  /* 12c0cdc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0cdcb jmp 0x12c0ceef */
  goto L_12c0ceef;
L_12c0cdd0:;
  /* 12c0cdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0cdd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cdd6 mov ecx, dword ptr [eax + 0x12c2d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12c2d4dc)));
  /* 12c0cddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0cddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0cde2 mov eax, dword ptr [edx*4 + 0x12c2e688] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2e688)));
  /* 12c0cde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0cdec push 6 */
  push32((uint32_t)(0x6u));
  /* 12c0cdee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0cdf1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cdf4 add ecx, 0x12c2e6d8 */
  { uint32_t _a=(ECX),_b=(0x12c2e6d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cdfa push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cdfb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12c0cdfe push edx */
  push32((uint32_t)(EDX));
  /* 12c0cdff call 0x12c09700 */
  push32(0x12c0ce04u); f_12c09700();
  /* 12c0ce04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ce07 mov eax, dword ptr [0x12c2e6a0] */
  EAX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c0ce0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c0ce0f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12c0ce15 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ce16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0ce19 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ce1a call 0x12c05dd0 */
  push32(0x12c0ce1fu); f_12c05dd0();
  /* 12c0ce1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ce22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ce25 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0ce28 mov dword ptr [ecx + 0x12c2d4dc], eax */
  w32((uint32_t)(ECX + 0x12c2d4dc), (EAX));
  /* 12c0ce2e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12c0ce34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0ce3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ce3d mov dword ptr [eax*4 + 0x12c2e688], edx */
  w32((uint32_t)(EAX*4 + 0x12c2e688), (EDX));
  /* 12c0ce44 push 6 */
  push32((uint32_t)(0x6u));
  /* 12c0ce46 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12c0ce4c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ce4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ce50 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0ce53 add edx, 0x12c2e6d8 */
  { uint32_t _a=(EDX),_b=(0x12c2e6d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ce59 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ce5a call 0x12c09700 */
  push32(0x12c0ce5fu); f_12c09700();
  /* 12c0ce5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ce62 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ce66 jne 0x12c0ce73 */
  if (!C.zf) goto L_12c0ce73;
  /* 12c0ce68 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0ce6e mov dword ptr [0x12c2e6a0], eax */
  w32((uint32_t)(0x12c2e6a0), (EAX));
L_12c0ce73:;
  /* 12c0ce73 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ce77 jne 0x12c0ce85 */
  if (!C.zf) goto L_12c0ce85;
  /* 12c0ce79 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c0ce7f mov dword ptr [0x12c2e6a4], ecx */
  w32((uint32_t)(0x12c2e6a4), (ECX));
L_12c0ce85:;
  /* 12c0ce85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ce88 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0ce8b call dword ptr [edx + 0x12c2d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12c2d4e0))), 0x12c0ce91u);
  /* 12c0ce91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ce93 je 0x12c0cecc */
  if (C.zf) goto L_12c0cecc;
  /* 12c0ce95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ce98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0ce9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ce9e mov dword ptr [eax + 0x12c2d4dc], ecx */
  w32((uint32_t)(EAX + 0x12c2d4dc), (ECX));
  /* 12c0cea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0cea6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0cea9 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ceaa call 0x12c038b0 */
  push32(0x12c0ceafu); f_12c038b0();
  /* 12c0ceaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ceb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ceb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ceb8 mov dword ptr [eax*4 + 0x12c2e688], ecx */
  w32((uint32_t)(EAX*4 + 0x12c2e688), (ECX));
  /* 12c0cebf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0cec2 mov dword ptr [0x12c2e6a0], edx */
  w32((uint32_t)(0x12c2e6a0), (EDX));
  /* 12c0cec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ceca jmp 0x12c0ceef */
  goto L_12c0ceef;
L_12c0cecc:;
  /* 12c0cecc cmp dword ptr [ebp - 0xc], 0x12c2d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12c2d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ced3 je 0x12c0cee3 */
  if (C.zf) goto L_12c0cee3;
  /* 12c0ced5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ced7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ceda push eax */
  push32((uint32_t)(EAX));
  /* 12c0cedb call 0x12c038b0 */
  push32(0x12c0cee0u); f_12c038b0();
  /* 12c0cee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0cee3:;
  /* 12c0cee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0cee6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cee9 mov eax, dword ptr [ecx + 0x12c2d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12c2d4dc)));
L_12c0ceef:;
  /* 12c0ceef mov esp, ebp */
  ESP = (EBP);
  /* 12c0cef1 pop ebp */
  EBP = (pop32());
  /* 12c0cef2 ret  */
  ESPCHK(0x12c0cd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x12c0cf00 (256 bytes, 72 insns) */
void f_12c0cf00(void) {
  FTRACE(0x12c0cf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0cf00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0cf01 mov ebp, esp */
  EBP = (ESP);
  /* 12c0cf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0cf06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c0cf0d cmp dword ptr [0x12c2d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cf14 jne 0x12c0cf34 */
  if (!C.zf) goto L_12c0cf34;
  /* 12c0cf16 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12c0cf1b push 0x12c29fd8 */
  push32((uint32_t)(0x12c29fd8u));
  /* 12c0cf20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0cf22 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12c0cf27 call 0x12c02e20 */
  push32(0x12c0cf2cu); f_12c02e20();
  /* 12c0cf2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cf2f mov dword ptr [0x12c2d4dc], eax */
  w32((uint32_t)(0x12c2d4dc), (EAX));
L_12c0cf34:;
  /* 12c0cf34 mov eax, dword ptr [0x12c2d4dc] */
  EAX = (r32((uint32_t)(0x12c2d4dc)));
  /* 12c0cf39 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c0cf3c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c0cf43 jmp 0x12c0cf4e */
  goto L_12c0cf4e;
L_12c0cf45:;
  /* 12c0cf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0cf48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0cf4e:;
  /* 12c0cf4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0cf51 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cf54 mov eax, dword ptr [edx + 0x12c2d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12c2d4dc)));
  /* 12c0cf5a push eax */
  push32((uint32_t)(EAX));
  /* 12c0cf5b push 0x12c29fe4 */
  push32((uint32_t)(0x12c29fe4u));
  /* 12c0cf60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0cf63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cf66 mov edx, dword ptr [ecx + 0x12c2d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12c2d4d8)));
  /* 12c0cf6c push edx */
  push32((uint32_t)(EDX));
  /* 12c0cf6d push 3 */
  push32((uint32_t)(0x3u));
  /* 12c0cf6f mov eax, dword ptr [0x12c2d4dc] */
  EAX = (r32((uint32_t)(0x12c2d4dc)));
  /* 12c0cf74 push eax */
  push32((uint32_t)(EAX));
  /* 12c0cf75 call 0x12c0d1a0 */
  push32(0x12c0cf7au); f_12c0d1a0();
  /* 12c0cf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cf7d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cf81 jge 0x12c0cfc9 */
  if ((C.sf==C.of)) goto L_12c0cfc9;
  /* 12c0cf83 push 0x12c29fd0 */
  push32((uint32_t)(0x12c29fd0u));
  /* 12c0cf88 mov ecx, dword ptr [0x12c2d4dc] */
  ECX = (r32((uint32_t)(0x12c2d4dc)));
  /* 12c0cf8e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0cf8f call 0x12c05de0 */
  push32(0x12c0cf94u); f_12c05de0();
  /* 12c0cf94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cf97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0cf9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cf9d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cfa0 mov eax, dword ptr [edx + 0x12c2d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12c2d4dc)));
  /* 12c0cfa6 push eax */
  push32((uint32_t)(EAX));
  /* 12c0cfa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0cfaa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0cfad mov edx, dword ptr [ecx + 0x12c2d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12c2d4dc)));
  /* 12c0cfb3 push edx */
  push32((uint32_t)(EDX));
  /* 12c0cfb4 call 0x12c0eab0 */
  push32(0x12c0cfb9u); f_12c0eab0();
  /* 12c0cfb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cfbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0cfbe je 0x12c0cfc7 */
  if (C.zf) goto L_12c0cfc7;
  /* 12c0cfc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c0cfc7:;
  /* 12c0cfc7 jmp 0x12c0cff7 */
  goto L_12c0cff7;
L_12c0cfc9:;
  /* 12c0cfc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0cfcd jne 0x12c0cfd6 */
  if (!C.zf) goto L_12c0cfd6;
  /* 12c0cfcf mov eax, dword ptr [0x12c2d4dc] */
  EAX = (r32((uint32_t)(0x12c2d4dc)));
  /* 12c0cfd4 jmp 0x12c0cffc */
  goto L_12c0cffc;
L_12c0cfd6:;
  /* 12c0cfd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0cfd8 mov eax, dword ptr [0x12c2d4dc] */
  EAX = (r32((uint32_t)(0x12c2d4dc)));
  /* 12c0cfdd push eax */
  push32((uint32_t)(EAX));
  /* 12c0cfde call 0x12c038b0 */
  push32(0x12c0cfe3u); f_12c038b0();
  /* 12c0cfe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0cfe6 mov dword ptr [0x12c2d4dc], 0 */
  w32((uint32_t)(0x12c2d4dc), (0x0u));
  /* 12c0cff0 mov eax, dword ptr [0x12c2d4f4] */
  EAX = (r32((uint32_t)(0x12c2d4f4)));
  /* 12c0cff5 jmp 0x12c0cffc */
  goto L_12c0cffc;
L_12c0cff7:;
  /* 12c0cff7 jmp 0x12c0cf45 */
  goto L_12c0cf45;
L_12c0cffc:;
  /* 12c0cffc mov esp, ebp */
  ESP = (EBP);
  /* 12c0cffe pop ebp */
  EBP = (pop32());
  /* 12c0cfff ret  */
  ESPCHK(0x12c0cf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x12c0d000 (388 bytes, 115 insns) */
void f_12c0d000(void) {
  FTRACE(0x12c0d000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d000 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d001 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d003 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0d009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d00d jne 0x12c0d016 */
  if (!C.zf) goto L_12c0d016;
  /* 12c0d00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d011 jmp 0x12c0d180 */
  goto L_12c0d180;
L_12c0d016:;
  /* 12c0d016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0d01c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d01f jne 0x12c0d070 */
  if (!C.zf) goto L_12c0d070;
  /* 12c0d021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d024 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c0d028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d02a jne 0x12c0d070 */
  if (!C.zf) goto L_12c0d070;
  /* 12c0d02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d02f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12c0d032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d035 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12c0d039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d03d je 0x12c0d059 */
  if (C.zf) goto L_12c0d059;
  /* 12c0d03f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0d042 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12c0d047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0d04a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12c0d050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0d053 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12c0d059:;
  /* 12c0d059 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d05d je 0x12c0d068 */
  if (C.zf) goto L_12c0d068;
  /* 12c0d05f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0d062 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c0d068:;
  /* 12c0d068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d06b jmp 0x12c0d180 */
  goto L_12c0d180;
L_12c0d070:;
  /* 12c0d070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d073 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d074 push 0x12c2d450 */
  push32((uint32_t)(0x12c2d450u));
  /* 12c0d079 call 0x12c0eab0 */
  push32(0x12c0d07eu); f_12c0eab0();
  /* 12c0d07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d083 je 0x12c0d138 */
  if (C.zf) goto L_12c0d138;
  /* 12c0d089 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d08c push edx */
  push32((uint32_t)(EDX));
  /* 12c0d08d push 0x12c2d3cc */
  push32((uint32_t)(0x12c2d3ccu));
  /* 12c0d092 call 0x12c0eab0 */
  push32(0x12c0d097u); f_12c0eab0();
  /* 12c0d097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d09c je 0x12c0d138 */
  if (C.zf) goto L_12c0d138;
  /* 12c0d0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d0a5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d0a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12c0d0ac push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d0ad call 0x12c0d1f0 */
  push32(0x12c0d0b2u); f_12c0d1f0();
  /* 12c0d0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d0b7 je 0x12c0d0c0 */
  if (C.zf) goto L_12c0d0c0;
  /* 12c0d0b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d0bb jmp 0x12c0d180 */
  goto L_12c0d180;
L_12c0d0c0:;
  /* 12c0d0c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12c0d0c6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d0c7 push 0x12c2e6b0 */
  push32((uint32_t)(0x12c2e6b0u));
  /* 12c0d0cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12c0d0d2 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d0d3 call 0x12c0ec00 */
  push32(0x12c0d0d8u); f_12c0ec00();
  /* 12c0d0d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d0dd jne 0x12c0d0e6 */
  if (!C.zf) goto L_12c0d0e6;
  /* 12c0d0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d0e1 jmp 0x12c0d180 */
  goto L_12c0d180;
L_12c0d0e6:;
  /* 12c0d0e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d0e8 mov cx, word ptr [0x12c2e6b4] */
  CX = (r16((uint32_t)(0x12c2e6b4)));
  /* 12c0d0ef mov dword ptr [0x12c2e6b8], ecx */
  w32((uint32_t)(0x12c2e6b8), (ECX));
  /* 12c0d0f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12c0d0fb push edx */
  push32((uint32_t)(EDX));
  /* 12c0d0fc push 0x12c2d450 */
  push32((uint32_t)(0x12c2d450u));
  /* 12c0d101 call 0x12c0d350 */
  push32(0x12c0d106u); f_12c0d350();
  /* 12c0d106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d10c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0d10f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0d111 je 0x12c0d126 */
  if (C.zf) goto L_12c0d126;
  /* 12c0d113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d116 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d117 push 0x12c2d3cc */
  push32((uint32_t)(0x12c2d3ccu));
  /* 12c0d11c call 0x12c05dd0 */
  push32(0x12c0d121u); f_12c05dd0();
  /* 12c0d121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d124 jmp 0x12c0d138 */
  goto L_12c0d138;
L_12c0d126:;
  /* 12c0d126 push 0x12c2d450 */
  push32((uint32_t)(0x12c2d450u));
  /* 12c0d12b push 0x12c2d3cc */
  push32((uint32_t)(0x12c2d3ccu));
  /* 12c0d130 call 0x12c05dd0 */
  push32(0x12c0d135u); f_12c05dd0();
  /* 12c0d135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0d138:;
  /* 12c0d138 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d13c je 0x12c0d151 */
  if (C.zf) goto L_12c0d151;
  /* 12c0d13e push 6 */
  push32((uint32_t)(0x6u));
  /* 12c0d140 push 0x12c2e6b0 */
  push32((uint32_t)(0x12c2e6b0u));
  /* 12c0d145 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0d148 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d149 call 0x12c09700 */
  push32(0x12c0d14eu); f_12c09700();
  /* 12c0d14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0d151:;
  /* 12c0d151 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d155 je 0x12c0d16a */
  if (C.zf) goto L_12c0d16a;
  /* 12c0d157 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c0d159 push 0x12c2e6b8 */
  push32((uint32_t)(0x12c2e6b8u));
  /* 12c0d15e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0d161 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d162 call 0x12c09700 */
  push32(0x12c0d167u); f_12c09700();
  /* 12c0d167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0d16a:;
  /* 12c0d16a push 0x12c2d450 */
  push32((uint32_t)(0x12c2d450u));
  /* 12c0d16f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d172 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d173 call 0x12c05dd0 */
  push32(0x12c0d178u); f_12c05dd0();
  /* 12c0d178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d17b mov eax, 0x12c2d450 */
  EAX = (0x12c2d450u);
L_12c0d180:;
  /* 12c0d180 mov esp, ebp */
  ESP = (EBP);
  /* 12c0d182 pop ebp */
  EBP = (pop32());
  /* 12c0d183 ret  */
  ESPCHK(0x12c0d000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x12c0d190 (7 bytes, 5 insns) */
void f_12c0d190(void) {
  FTRACE(0x12c0d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d190 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d191 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d195 pop ebp */
  EBP = (pop32());
  /* 12c0d196 ret  */
  ESPCHK(0x12c0d190u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12c0d1a0 (79 bytes, 28 insns) */
void f_12c0d1a0(void) {
  FTRACE(0x12c0d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0d1a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c0d1a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d1ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0d1b3 jmp 0x12c0d1be */
  goto L_12c0d1be;
L_12c0d1b5:;
  /* 12c0d1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d1b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c0d1be:;
  /* 12c0d1be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d1c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d1c4 jge 0x12c0d1e4 */
  if ((C.sf==C.of)) goto L_12c0d1e4;
  /* 12c0d1c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d1c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d1d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c0d1d5 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d1d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d1d9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d1da call 0x12c05de0 */
  push32(0x12c0d1dfu); f_12c05de0();
  /* 12c0d1df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d1e2 jmp 0x12c0d1b5 */
  goto L_12c0d1b5;
L_12c0d1e4:;
  /* 12c0d1e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0d1eb mov esp, ebp */
  ESP = (EBP);
  /* 12c0d1ed pop ebp */
  EBP = (pop32());
  /* 12c0d1ee ret  */
  ESPCHK(0x12c0d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x12c0d1f0 (349 bytes, 122 insns) */
void f_12c0d1f0(void) {
  FTRACE(0x12c0d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0d1f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12c0d1fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0d1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d200 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d201 call 0x12c06b90 */
  push32(0x12c0d206u); f_12c06b90();
  /* 12c0d206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d20c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0d20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0d211 jne 0x12c0d21a */
  if (!C.zf) goto L_12c0d21a;
  /* 12c0d213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d215 jmp 0x12c0d349 */
  goto L_12c0d349;
L_12c0d21a:;
  /* 12c0d21a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d21d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0d220 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d223 jne 0x12c0d250 */
  if (!C.zf) goto L_12c0d250;
  /* 12c0d225 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d228 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c0d22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d22e je 0x12c0d250 */
  if (C.zf) goto L_12c0d250;
  /* 12c0d230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d233 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d236 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d23a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d240 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d241 call 0x12c05dd0 */
  push32(0x12c0d246u); f_12c05dd0();
  /* 12c0d246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d24b jmp 0x12c0d349 */
  goto L_12c0d349;
L_12c0d250:;
  /* 12c0d250 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0d257 jmp 0x12c0d262 */
  goto L_12c0d262;
L_12c0d259:;
  /* 12c0d259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d25c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0d262:;
  /* 12c0d262 push 0x12c29fe8 */
  push32((uint32_t)(0x12c29fe8u));
  /* 12c0d267 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d26a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d26b call 0x12c0eb40 */
  push32(0x12c0d270u); f_12c0eb40();
  /* 12c0d270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d273 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0d276 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d27a jne 0x12c0d284 */
  if (!C.zf) goto L_12c0d284;
  /* 12c0d27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d27f jmp 0x12c0d349 */
  goto L_12c0d349;
L_12c0d284:;
  /* 12c0d284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d287 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d28a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0d28c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12c0d28f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d293 jne 0x12c0d2ba */
  if (!C.zf) goto L_12c0d2ba;
  /* 12c0d295 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d299 jge 0x12c0d2ba */
  if ((C.sf==C.of)) goto L_12c0d2ba;
  /* 12c0d29b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0d29f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d2a2 je 0x12c0d2ba */
  if (C.zf) goto L_12c0d2ba;
  /* 12c0d2a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d2a7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d2a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d2ab push eax */
  push32((uint32_t)(EAX));
  /* 12c0d2ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d2af push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d2b0 call 0x12c06640 */
  push32(0x12c0d2b5u); f_12c06640();
  /* 12c0d2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d2b8 jmp 0x12c0d320 */
  goto L_12c0d320;
L_12c0d2ba:;
  /* 12c0d2ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d2be jne 0x12c0d2e8 */
  if (!C.zf) goto L_12c0d2e8;
  /* 12c0d2c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d2c4 jge 0x12c0d2e8 */
  if ((C.sf==C.of)) goto L_12c0d2e8;
  /* 12c0d2c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0d2ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d2cd je 0x12c0d2e8 */
  if (C.zf) goto L_12c0d2e8;
  /* 12c0d2cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d2d2 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d2d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d2da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d2dd push edx */
  push32((uint32_t)(EDX));
  /* 12c0d2de call 0x12c06640 */
  push32(0x12c0d2e3u); f_12c06640();
  /* 12c0d2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d2e6 jmp 0x12c0d320 */
  goto L_12c0d320;
L_12c0d2e8:;
  /* 12c0d2e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d2ec jne 0x12c0d31b */
  if (!C.zf) goto L_12c0d31b;
  /* 12c0d2ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0d2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d2f4 je 0x12c0d2ff */
  if (C.zf) goto L_12c0d2ff;
  /* 12c0d2f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0d2fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d2fd jne 0x12c0d31b */
  if (!C.zf) goto L_12c0d31b;
L_12c0d2ff:;
  /* 12c0d2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d302 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d306 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d30a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d310 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d311 call 0x12c06640 */
  push32(0x12c0d316u); f_12c06640();
  /* 12c0d316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d319 jmp 0x12c0d320 */
  goto L_12c0d320;
L_12c0d31b:;
  /* 12c0d31b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d31e jmp 0x12c0d349 */
  goto L_12c0d349;
L_12c0d320:;
  /* 12c0d320 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0d324 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d327 jne 0x12c0d32b */
  if (!C.zf) goto L_12c0d32b;
  /* 12c0d329 jmp 0x12c0d347 */
  goto L_12c0d347;
L_12c0d32b:;
  /* 12c0d32b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c0d32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d331 jne 0x12c0d335 */
  if (!C.zf) goto L_12c0d335;
  /* 12c0d333 jmp 0x12c0d347 */
  goto L_12c0d347;
L_12c0d335:;
  /* 12c0d335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d33b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12c0d33f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c0d342 jmp 0x12c0d259 */
  goto L_12c0d259;
L_12c0d347:;
  /* 12c0d347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0d349:;
  /* 12c0d349 mov esp, ebp */
  ESP = (EBP);
  /* 12c0d34b pop ebp */
  EBP = (pop32());
  /* 12c0d34c ret  */
  ESPCHK(0x12c0d1f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12c0d350 (101 bytes, 36 insns) */
void f_12c0d350(void) {
  FTRACE(0x12c0d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d350 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d351 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d356 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d35a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d35b call 0x12c05dd0 */
  push32(0x12c0d360u); f_12c05dd0();
  /* 12c0d360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d366 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12c0d36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d36c je 0x12c0d388 */
  if (C.zf) goto L_12c0d388;
  /* 12c0d36e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d371 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d374 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d375 push 0x12c29ff0 */
  push32((uint32_t)(0x12c29ff0u));
  /* 12c0d37a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d37f push edx */
  push32((uint32_t)(EDX));
  /* 12c0d380 call 0x12c0d1a0 */
  push32(0x12c0d385u); f_12c0d1a0();
  /* 12c0d385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0d388:;
  /* 12c0d388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d38b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12c0d392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0d394 je 0x12c0d3b3 */
  if (C.zf) goto L_12c0d3b3;
  /* 12c0d396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0d399 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d39f push edx */
  push32((uint32_t)(EDX));
  /* 12c0d3a0 push 0x12c29fec */
  push32((uint32_t)(0x12c29fecu));
  /* 12c0d3a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d3aa push eax */
  push32((uint32_t)(EAX));
  /* 12c0d3ab call 0x12c0d1a0 */
  push32(0x12c0d3b0u); f_12c0d1a0();
  /* 12c0d3b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0d3b3:;
  /* 12c0d3b3 pop ebp */
  EBP = (pop32());
  /* 12c0d3b4 ret  */
  ESPCHK(0x12c0d350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x12c0d3c0 (130 bytes, 50 insns) */
void f_12c0d3c0(void) {
  FTRACE(0x12c0d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0d3c5 push esi */
  push32((uint32_t)(ESI));
  /* 12c0d3c6 push edi */
  push32((uint32_t)(EDI));
  /* 12c0d3c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c0d3ce:;
  /* 12c0d3ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d3d2 jne 0x12c0d3f2 */
  if (!C.zf) goto L_12c0d3f2;
  /* 12c0d3d4 push 0x12c2a000 */
  push32((uint32_t)(0x12c2a000u));
  /* 12c0d3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0d3db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12c0d3dd push 0x12c29ff4 */
  push32((uint32_t)(0x12c29ff4u));
  /* 12c0d3e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d3e4 call 0x12c01ee0 */
  push32(0x12c0d3e9u); f_12c01ee0();
  /* 12c0d3e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d3ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d3ef jne 0x12c0d3f2 */
  if (!C.zf) goto L_12c0d3f2;
  /* 12c0d3f1 int3  */
  x86_unimpl("int3 @ 0x12c0d3f1");
L_12c0d3f2:;
  /* 12c0d3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d3f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d3f6 jne 0x12c0d3ce */
  if (!C.zf) goto L_12c0d3ce;
  /* 12c0d3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0d3fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0d401 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0d403 je 0x12c0d411 */
  if (C.zf) goto L_12c0d411;
  /* 12c0d405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d408 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12c0d40f jmp 0x12c0d438 */
  goto L_12c0d438;
L_12c0d411:;
  /* 12c0d411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d414 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d415 call 0x12c0bc30 */
  push32(0x12c0d41au); f_12c0bc30();
  /* 12c0d41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d420 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d421 call 0x12c0d450 */
  push32(0x12c0d426u); f_12c0d450();
  /* 12c0d426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d42f push eax */
  push32((uint32_t)(EAX));
  /* 12c0d430 call 0x12c0bca0 */
  push32(0x12c0d435u); f_12c0bca0();
  /* 12c0d435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0d438:;
  /* 12c0d438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d43b pop edi */
  EDI = (pop32());
  /* 12c0d43c pop esi */
  ESI = (pop32());
  /* 12c0d43d pop ebx */
  EBX = (pop32());
  /* 12c0d43e mov esp, ebp */
  ESP = (EBP);
  /* 12c0d440 pop ebp */
  EBP = (pop32());
  /* 12c0d441 ret  */
  ESPCHK(0x12c0d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x12c0d450 (190 bytes, 67 insns) */
void f_12c0d450(void) {
  FTRACE(0x12c0d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d450 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d451 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0d456 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0d457 push esi */
  push32((uint32_t)(ESI));
  /* 12c0d458 push edi */
  push32((uint32_t)(EDI));
  /* 12c0d459 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c0d460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c0d466:;
  /* 12c0d466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d46a jne 0x12c0d48a */
  if (!C.zf) goto L_12c0d48a;
  /* 12c0d46c push 0x12c29ea4 */
  push32((uint32_t)(0x12c29ea4u));
  /* 12c0d471 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0d473 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12c0d475 push 0x12c29ff4 */
  push32((uint32_t)(0x12c29ff4u));
  /* 12c0d47a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d47c call 0x12c01ee0 */
  push32(0x12c0d481u); f_12c01ee0();
  /* 12c0d481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d487 jne 0x12c0d48a */
  if (!C.zf) goto L_12c0d48a;
  /* 12c0d489 int3  */
  x86_unimpl("int3 @ 0x12c0d489");
L_12c0d48a:;
  /* 12c0d48a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0d48e jne 0x12c0d466 */
  if (!C.zf) goto L_12c0d466;
  /* 12c0d490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d493 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c0d496 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d49b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d49d je 0x12c0d4fa */
  if (C.zf) goto L_12c0d4fa;
  /* 12c0d49f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d4a3 call 0x12c0c750 */
  push32(0x12c0d4a8u); f_12c0c750();
  /* 12c0d4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d4ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4b1 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d4b2 call 0x12c0fad0 */
  push32(0x12c0d4b7u); f_12c0fad0();
  /* 12c0d4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d4ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0d4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d4c1 call 0x12c0f9a0 */
  push32(0x12c0d4c6u); f_12c0f9a0();
  /* 12c0d4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d4cb jge 0x12c0d4d6 */
  if ((C.sf==C.of)) goto L_12c0d4d6;
  /* 12c0d4cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c0d4d4 jmp 0x12c0d4fa */
  goto L_12c0d4fa;
L_12c0d4d6:;
  /* 12c0d4d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d4dd je 0x12c0d4fa */
  if (C.zf) goto L_12c0d4fa;
  /* 12c0d4df push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d4e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c0d4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d4e8 call 0x12c038b0 */
  push32(0x12c0d4edu); f_12c038b0();
  /* 12c0d4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d4f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12c0d4fa:;
  /* 12c0d4fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0d4fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12c0d504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d507 pop edi */
  EDI = (pop32());
  /* 12c0d508 pop esi */
  ESI = (pop32());
  /* 12c0d509 pop ebx */
  EBX = (pop32());
  /* 12c0d50a mov esp, ebp */
  ESP = (EBP);
  /* 12c0d50c pop ebp */
  EBP = (pop32());
  /* 12c0d50d ret  */
  ESPCHK(0x12c0d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d510 @ 0x12c0d510 (210 bytes, 63 insns) */
void f_12c0d510(void) {
  FTRACE(0x12c0d510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d510 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d511 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d513 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d517 cmp eax, dword ptr [0x12c2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d51d jae 0x12c0d541 */
  if (!C.cf) goto L_12c0d541;
  /* 12c0d51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d522 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c0d525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d528 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0d52b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0d52e mov eax, dword ptr [ecx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c0d535 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c0d53a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d53d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0d53f jne 0x12c0d554 */
  if (!C.zf) goto L_12c0d554;
L_12c0d541:;
  /* 12c0d541 call 0x12c0acf0 */
  push32(0x12c0d546u); f_12c0acf0();
  /* 12c0d546 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0d54c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d54f jmp 0x12c0d5de */
  goto L_12c0d5de;
L_12c0d554:;
  /* 12c0d554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d557 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d558 call 0x12c0c510 */
  push32(0x12c0d55du); f_12c0c510();
  /* 12c0d55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d563 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c0d566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d569 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d56c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0d56f mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c0d576 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12c0d57b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d580 je 0x12c0d5bd */
  if (C.zf) goto L_12c0d5bd;
  /* 12c0d582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d585 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d586 call 0x12c0c390 */
  push32(0x12c0d58bu); f_12c0c390();
  /* 12c0d58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d58e push eax */
  push32((uint32_t)(EAX));
  /* 12c0d58f call dword ptr [0x12c30270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30270))), 0x12c0d595u);
  /* 12c0d595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d597 jne 0x12c0d5a4 */
  if (!C.zf) goto L_12c0d5a4;
  /* 12c0d599 call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0d59fu);
  /* 12c0d59f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d5a2 jmp 0x12c0d5ab */
  goto L_12c0d5ab;
L_12c0d5a4:;
  /* 12c0d5a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c0d5ab:;
  /* 12c0d5ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d5af jne 0x12c0d5b3 */
  if (!C.zf) goto L_12c0d5b3;
  /* 12c0d5b1 jmp 0x12c0d5cf */
  goto L_12c0d5cf;
L_12c0d5b3:;
  /* 12c0d5b3 call 0x12c0ad00 */
  push32(0x12c0d5b8u); f_12c0ad00();
  /* 12c0d5b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d5bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c0d5bd:;
  /* 12c0d5bd call 0x12c0acf0 */
  push32(0x12c0d5c2u); f_12c0acf0();
  /* 12c0d5c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c0d5c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c0d5cf:;
  /* 12c0d5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d5d2 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d5d3 call 0x12c0c5a0 */
  push32(0x12c0d5d8u); f_12c0c5a0();
  /* 12c0d5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c0d5de:;
  /* 12c0d5de mov esp, ebp */
  ESP = (EBP);
  /* 12c0d5e0 pop ebp */
  EBP = (pop32());
  /* 12c0d5e1 ret  */
  ESPCHK(0x12c0d510u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12c0d5f0 (219 bytes, 64 insns) */
void f_12c0d5f0(void) {
  FTRACE(0x12c0d5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d5f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d5f4 cmp dword ptr [0x12c2e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d5fb je 0x12c0d691 */
  if (C.zf) goto L_12c0d691;
  /* 12c0d601 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12c0d603 push 0x12c2a010 */
  push32((uint32_t)(0x12c2a010u));
  /* 12c0d608 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d60a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12c0d60f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d611 call 0x12c03230 */
  push32(0x12c0d616u); f_12c03230();
  /* 12c0d616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d620 jne 0x12c0d62c */
  if (!C.zf) goto L_12c0d62c;
  /* 12c0d622 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0d627 jmp 0x12c0d6c7 */
  goto L_12c0d6c7;
L_12c0d62c:;
  /* 12c0d62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d62f push eax */
  push32((uint32_t)(EAX));
  /* 12c0d630 call 0x12c0d6d0 */
  push32(0x12c0d635u); f_12c0d6d0();
  /* 12c0d635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0d63a je 0x12c0d65d */
  if (C.zf) goto L_12c0d65d;
  /* 12c0d63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d63f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d640 call 0x12c0dc60 */
  push32(0x12c0d645u); f_12c0dc60();
  /* 12c0d645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d648 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d64a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d64d push edx */
  push32((uint32_t)(EDX));
  /* 12c0d64e call 0x12c038b0 */
  push32(0x12c0d653u); f_12c038b0();
  /* 12c0d653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d656 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0d65b jmp 0x12c0d6c7 */
  goto L_12c0d6c7;
L_12c0d65d:;
  /* 12c0d65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d660 mov dword ptr [0x12c2dc98], eax */
  w32((uint32_t)(0x12c2dc98), (EAX));
  /* 12c0d665 mov ecx, dword ptr [0x12c2e6bc] */
  ECX = (r32((uint32_t)(0x12c2e6bc)));
  /* 12c0d66b push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d66c call 0x12c0dc60 */
  push32(0x12c0d671u); f_12c0dc60();
  /* 12c0d671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d674 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d676 mov edx, dword ptr [0x12c2e6bc] */
  EDX = (r32((uint32_t)(0x12c2e6bc)));
  /* 12c0d67c push edx */
  push32((uint32_t)(EDX));
  /* 12c0d67d call 0x12c038b0 */
  push32(0x12c0d682u); f_12c038b0();
  /* 12c0d682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d688 mov dword ptr [0x12c2e6bc], eax */
  w32((uint32_t)(0x12c2e6bc), (EAX));
  /* 12c0d68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d68f jmp 0x12c0d6c7 */
  goto L_12c0d6c7;
L_12c0d691:;
  /* 12c0d691 mov dword ptr [0x12c2dc98], 0x12c2dca0 */
  w32((uint32_t)(0x12c2dc98), (0x12c2dca0u));
  /* 12c0d69b mov ecx, dword ptr [0x12c2e6bc] */
  ECX = (r32((uint32_t)(0x12c2e6bc)));
  /* 12c0d6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0d6a2 call 0x12c0dc60 */
  push32(0x12c0d6a7u); f_12c0dc60();
  /* 12c0d6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0d6ac mov edx, dword ptr [0x12c2e6bc] */
  EDX = (r32((uint32_t)(0x12c2e6bc)));
  /* 12c0d6b2 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d6b3 call 0x12c038b0 */
  push32(0x12c0d6b8u); f_12c038b0();
  /* 12c0d6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d6bb mov dword ptr [0x12c2e6bc], 0 */
  w32((uint32_t)(0x12c2e6bc), (0x0u));
  /* 12c0d6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0d6c7:;
  /* 12c0d6c7 mov esp, ebp */
  ESP = (EBP);
  /* 12c0d6c9 pop ebp */
  EBP = (pop32());
  /* 12c0d6ca ret  */
  ESPCHK(0x12c0d5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x12c0d6d0 (1423 bytes, 533 insns) */
void f_12c0d6d0(void) {
  FTRACE(0x12c0d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0d6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0d6d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c0d6dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d6df mov ax, word ptr [0x12c2e6f6] */
  AX = (r16((uint32_t)(0x12c2e6f6)));
  /* 12c0d6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0d6e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d6ea mov cx, word ptr [0x12c2e6f8] */
  CX = (r16((uint32_t)(0x12c2e6f8)));
  /* 12c0d6f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0d6f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0d6f8 jne 0x12c0d702 */
  if (!C.zf) goto L_12c0d702;
  /* 12c0d6fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0d6fd jmp 0x12c0dc5b */
  goto L_12c0dc5b;
L_12c0d702:;
  /* 12c0d702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d705 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d708 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d709 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12c0d70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d70e push eax */
  push32((uint32_t)(EAX));
  /* 12c0d70f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d711 call 0x12c10fe0 */
  push32(0x12c0d716u); f_12c10fe0();
  /* 12c0d716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d71e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d724 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d727 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12c0d72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d72d push eax */
  push32((uint32_t)(EAX));
  /* 12c0d72e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d730 call 0x12c10fe0 */
  push32(0x12c0d735u); f_12c10fe0();
  /* 12c0d735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d738 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d73b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d73d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d743 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d746 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d747 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12c0d749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d74c push eax */
  push32((uint32_t)(EAX));
  /* 12c0d74d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d74f call 0x12c10fe0 */
  push32(0x12c0d754u); f_12c10fe0();
  /* 12c0d754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d757 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d75a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d75c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d762 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d765 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d766 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12c0d768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d76b push eax */
  push32((uint32_t)(EAX));
  /* 12c0d76c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d76e call 0x12c10fe0 */
  push32(0x12c0d773u); f_12c10fe0();
  /* 12c0d773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d779 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d77b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d781 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d784 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d785 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12c0d787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d78a push eax */
  push32((uint32_t)(EAX));
  /* 12c0d78b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d78d call 0x12c10fe0 */
  push32(0x12c0d792u); f_12c10fe0();
  /* 12c0d792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d79a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d7a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d7a3 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d7a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12c0d7a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d7a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d7ac call 0x12c10fe0 */
  push32(0x12c0d7b1u); f_12c10fe0();
  /* 12c0d7b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d7b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d7b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d7bf push edx */
  push32((uint32_t)(EDX));
  /* 12c0d7c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12c0d7c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d7c5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d7c8 call 0x12c10fe0 */
  push32(0x12c0d7cdu); f_12c10fe0();
  /* 12c0d7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d7d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d7d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d7d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d7db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d7de push edx */
  push32((uint32_t)(EDX));
  /* 12c0d7df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12c0d7e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d7e4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d7e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d7e7 call 0x12c10fe0 */
  push32(0x12c0d7ecu); f_12c10fe0();
  /* 12c0d7ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d7ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d7f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d7f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d7f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d7fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d7fd push edx */
  push32((uint32_t)(EDX));
  /* 12c0d7fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12c0d800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d803 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d806 call 0x12c10fe0 */
  push32(0x12c0d80bu); f_12c10fe0();
  /* 12c0d80b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d80e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d811 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d813 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d819 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d81c push edx */
  push32((uint32_t)(EDX));
  /* 12c0d81d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12c0d81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d822 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d823 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d825 call 0x12c10fe0 */
  push32(0x12c0d82au); f_12c10fe0();
  /* 12c0d82a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d838 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d83b push edx */
  push32((uint32_t)(EDX));
  /* 12c0d83c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12c0d83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d841 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d842 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d844 call 0x12c10fe0 */
  push32(0x12c0d849u); f_12c10fe0();
  /* 12c0d849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d84c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d84f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d851 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d857 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d85a push edx */
  push32((uint32_t)(EDX));
  /* 12c0d85b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12c0d85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d860 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d861 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d863 call 0x12c10fe0 */
  push32(0x12c0d868u); f_12c10fe0();
  /* 12c0d868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d86b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d86e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d876 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d879 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d87a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12c0d87c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d87f push eax */
  push32((uint32_t)(EAX));
  /* 12c0d880 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d882 call 0x12c10fe0 */
  push32(0x12c0d887u); f_12c10fe0();
  /* 12c0d887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d88a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d88d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d88f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d898 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d899 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c0d89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d89e push eax */
  push32((uint32_t)(EAX));
  /* 12c0d89f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d8a1 call 0x12c10fe0 */
  push32(0x12c0d8a6u); f_12c10fe0();
  /* 12c0d8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d8b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d8b7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d8b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12c0d8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d8bd push eax */
  push32((uint32_t)(EAX));
  /* 12c0d8be push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d8c0 call 0x12c10fe0 */
  push32(0x12c0d8c5u); f_12c10fe0();
  /* 12c0d8c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d8c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d8cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d8cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d8d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d8d6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d8d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12c0d8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d8dc push eax */
  push32((uint32_t)(EAX));
  /* 12c0d8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d8df call 0x12c10fe0 */
  push32(0x12c0d8e4u); f_12c10fe0();
  /* 12c0d8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d8e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d8f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d8f5 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d8f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12c0d8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d8fb push eax */
  push32((uint32_t)(EAX));
  /* 12c0d8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d8fe call 0x12c10fe0 */
  push32(0x12c0d903u); f_12c10fe0();
  /* 12c0d903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d909 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d90b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d911 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d914 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d915 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12c0d917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d91a push eax */
  push32((uint32_t)(EAX));
  /* 12c0d91b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d91d call 0x12c10fe0 */
  push32(0x12c0d922u); f_12c10fe0();
  /* 12c0d922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d92a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d930 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d933 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d934 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12c0d936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d939 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d93a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d93c call 0x12c10fe0 */
  push32(0x12c0d941u); f_12c10fe0();
  /* 12c0d941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d949 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d94f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d952 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d953 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12c0d955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d958 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d959 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d95b call 0x12c10fe0 */
  push32(0x12c0d960u); f_12c10fe0();
  /* 12c0d960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d966 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d968 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d96e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d971 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d972 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12c0d974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d977 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d978 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d97a call 0x12c10fe0 */
  push32(0x12c0d97fu); f_12c10fe0();
  /* 12c0d97f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d982 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d985 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d987 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d98d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d990 push edx */
  push32((uint32_t)(EDX));
  /* 12c0d991 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12c0d993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d996 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d997 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d999 call 0x12c10fe0 */
  push32(0x12c0d99eu); f_12c10fe0();
  /* 12c0d99e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d9a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d9a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d9a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d9ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9af push edx */
  push32((uint32_t)(EDX));
  /* 12c0d9b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12c0d9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d9b5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d9b8 call 0x12c10fe0 */
  push32(0x12c0d9bdu); f_12c10fe0();
  /* 12c0d9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d9c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d9cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9ce push edx */
  push32((uint32_t)(EDX));
  /* 12c0d9cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12c0d9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d9d4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d9d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d9d7 call 0x12c10fe0 */
  push32(0x12c0d9dcu); f_12c10fe0();
  /* 12c0d9dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0d9e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0d9e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0d9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0d9ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9ed push edx */
  push32((uint32_t)(EDX));
  /* 12c0d9ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12c0d9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0d9f3 push eax */
  push32((uint32_t)(EAX));
  /* 12c0d9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0d9f6 call 0x12c10fe0 */
  push32(0x12c0d9fbu); f_12c10fe0();
  /* 12c0d9fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0d9fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0da01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0da03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0da06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0da09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da0c push edx */
  push32((uint32_t)(EDX));
  /* 12c0da0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12c0da0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0da12 push eax */
  push32((uint32_t)(EAX));
  /* 12c0da13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0da15 call 0x12c10fe0 */
  push32(0x12c0da1au); f_12c10fe0();
  /* 12c0da1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0da20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0da22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0da25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0da28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da2b push edx */
  push32((uint32_t)(EDX));
  /* 12c0da2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12c0da2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0da31 push eax */
  push32((uint32_t)(EAX));
  /* 12c0da32 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0da34 call 0x12c10fe0 */
  push32(0x12c0da39u); f_12c10fe0();
  /* 12c0da39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0da3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0da41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0da44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0da47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da4a push edx */
  push32((uint32_t)(EDX));
  /* 12c0da4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12c0da4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0da50 push eax */
  push32((uint32_t)(EAX));
  /* 12c0da51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0da53 call 0x12c10fe0 */
  push32(0x12c0da58u); f_12c10fe0();
  /* 12c0da58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0da5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0da60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0da63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0da66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da69 push edx */
  push32((uint32_t)(EDX));
  /* 12c0da6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12c0da6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0da6f push eax */
  push32((uint32_t)(EAX));
  /* 12c0da70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0da72 call 0x12c10fe0 */
  push32(0x12c0da77u); f_12c10fe0();
  /* 12c0da77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0da7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0da7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0da82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0da85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da88 push edx */
  push32((uint32_t)(EDX));
  /* 12c0da89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12c0da8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0da8e push eax */
  push32((uint32_t)(EAX));
  /* 12c0da8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0da91 call 0x12c10fe0 */
  push32(0x12c0da96u); f_12c10fe0();
  /* 12c0da96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0da99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0da9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0da9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0daa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0daa4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0daa7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0daa8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12c0daaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0daad push eax */
  push32((uint32_t)(EAX));
  /* 12c0daae push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dab0 call 0x12c10fe0 */
  push32(0x12c0dab5u); f_12c10fe0();
  /* 12c0dab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dac3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dac6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dac7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12c0dac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0dacc push eax */
  push32((uint32_t)(EAX));
  /* 12c0dacd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dacf call 0x12c10fe0 */
  push32(0x12c0dad4u); f_12c10fe0();
  /* 12c0dad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dae2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dae8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dae9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12c0daeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0daee push eax */
  push32((uint32_t)(EAX));
  /* 12c0daef push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0daf1 call 0x12c10fe0 */
  push32(0x12c0daf6u); f_12c10fe0();
  /* 12c0daf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0daf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dafc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dafe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0db01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0db04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db0a push edx */
  push32((uint32_t)(EDX));
  /* 12c0db0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c0db0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0db10 push eax */
  push32((uint32_t)(EAX));
  /* 12c0db11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0db13 call 0x12c10fe0 */
  push32(0x12c0db18u); f_12c10fe0();
  /* 12c0db18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0db1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0db20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0db23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0db26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db2c push edx */
  push32((uint32_t)(EDX));
  /* 12c0db2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c0db2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0db32 push eax */
  push32((uint32_t)(EAX));
  /* 12c0db33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0db35 call 0x12c10fe0 */
  push32(0x12c0db3au); f_12c10fe0();
  /* 12c0db3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0db40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0db42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0db45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0db48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db4e push edx */
  push32((uint32_t)(EDX));
  /* 12c0db4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12c0db51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0db54 push eax */
  push32((uint32_t)(EAX));
  /* 12c0db55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0db57 call 0x12c10fe0 */
  push32(0x12c0db5cu); f_12c10fe0();
  /* 12c0db5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0db62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0db64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0db67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0db6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db70 push edx */
  push32((uint32_t)(EDX));
  /* 12c0db71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12c0db73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0db76 push eax */
  push32((uint32_t)(EAX));
  /* 12c0db77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0db79 call 0x12c10fe0 */
  push32(0x12c0db7eu); f_12c10fe0();
  /* 12c0db7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0db84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0db86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0db89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0db8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0db92 push edx */
  push32((uint32_t)(EDX));
  /* 12c0db93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12c0db95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0db98 push eax */
  push32((uint32_t)(EAX));
  /* 12c0db99 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0db9b call 0x12c10fe0 */
  push32(0x12c0dba0u); f_12c10fe0();
  /* 12c0dba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dba3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dba6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dba8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dbab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dbae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dbb4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dbb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12c0dbb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0dbba push eax */
  push32((uint32_t)(EAX));
  /* 12c0dbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dbbd call 0x12c10fe0 */
  push32(0x12c0dbc2u); f_12c10fe0();
  /* 12c0dbc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dbc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dbc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dbca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dbcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dbd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dbd6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dbd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12c0dbd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0dbdc push eax */
  push32((uint32_t)(EAX));
  /* 12c0dbdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dbdf call 0x12c10fe0 */
  push32(0x12c0dbe4u); f_12c10fe0();
  /* 12c0dbe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dbe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dbea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dbec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dbef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dbf2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dbf9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12c0dbfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0dbfe push eax */
  push32((uint32_t)(EAX));
  /* 12c0dbff push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dc01 call 0x12c10fe0 */
  push32(0x12c0dc06u); f_12c10fe0();
  /* 12c0dc06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dc0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dc0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dc14 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc1a push edx */
  push32((uint32_t)(EDX));
  /* 12c0dc1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c0dc1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0dc20 push eax */
  push32((uint32_t)(EAX));
  /* 12c0dc21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dc23 call 0x12c10fe0 */
  push32(0x12c0dc28u); f_12c10fe0();
  /* 12c0dc28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dc2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dc30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dc33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dc36 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc3c push edx */
  push32((uint32_t)(EDX));
  /* 12c0dc3d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12c0dc42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0dc45 push eax */
  push32((uint32_t)(EAX));
  /* 12c0dc46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dc48 call 0x12c10fe0 */
  push32(0x12c0dc4du); f_12c10fe0();
  /* 12c0dc4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0dc53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dc55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c0dc58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12c0dc5b:;
  /* 12c0dc5b mov esp, ebp */
  ESP = (EBP);
  /* 12c0dc5d pop ebp */
  EBP = (pop32());
  /* 12c0dc5e ret  */
  ESPCHK(0x12c0d6d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12c0dc60 (779 bytes, 265 insns) */
void f_12c0dc60(void) {
  FTRACE(0x12c0dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0dc61 mov ebp, esp */
  EBP = (ESP);
  /* 12c0dc63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0dc67 jne 0x12c0dc6e */
  if (!C.zf) goto L_12c0dc6e;
  /* 12c0dc69 jmp 0x12c0df69 */
  goto L_12c0df69;
L_12c0dc6e:;
  /* 12c0dc6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dc73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c0dc76 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dc77 call 0x12c038b0 */
  push32(0x12c0dc7cu); f_12c038b0();
  /* 12c0dc7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dc84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c0dc87 push eax */
  push32((uint32_t)(EAX));
  /* 12c0dc88 call 0x12c038b0 */
  push32(0x12c0dc8du); f_12c038b0();
  /* 12c0dc8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dc90 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dc92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dc95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0dc98 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dc99 call 0x12c038b0 */
  push32(0x12c0dc9eu); f_12c038b0();
  /* 12c0dc9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0dca9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dcaa call 0x12c038b0 */
  push32(0x12c0dcafu); f_12c038b0();
  /* 12c0dcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dcb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dcb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dcb7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c0dcba push eax */
  push32((uint32_t)(EAX));
  /* 12c0dcbb call 0x12c038b0 */
  push32(0x12c0dcc0u); f_12c038b0();
  /* 12c0dcc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dcc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dcc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dcc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c0dccb push edx */
  push32((uint32_t)(EDX));
  /* 12c0dccc call 0x12c038b0 */
  push32(0x12c0dcd1u); f_12c038b0();
  /* 12c0dcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dcd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dcd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dcd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0dcdb push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dcdc call 0x12c038b0 */
  push32(0x12c0dce1u); f_12c038b0();
  /* 12c0dce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dce9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12c0dcec push eax */
  push32((uint32_t)(EAX));
  /* 12c0dced call 0x12c038b0 */
  push32(0x12c0dcf2u); f_12c038b0();
  /* 12c0dcf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dcf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dcf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dcfa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12c0dcfd push edx */
  push32((uint32_t)(EDX));
  /* 12c0dcfe call 0x12c038b0 */
  push32(0x12c0dd03u); f_12c038b0();
  /* 12c0dd03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd0b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12c0dd0e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dd0f call 0x12c038b0 */
  push32(0x12c0dd14u); f_12c038b0();
  /* 12c0dd14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd1c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12c0dd1f push eax */
  push32((uint32_t)(EAX));
  /* 12c0dd20 call 0x12c038b0 */
  push32(0x12c0dd25u); f_12c038b0();
  /* 12c0dd25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd2d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12c0dd30 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dd31 call 0x12c038b0 */
  push32(0x12c0dd36u); f_12c038b0();
  /* 12c0dd36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd3e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12c0dd41 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dd42 call 0x12c038b0 */
  push32(0x12c0dd47u); f_12c038b0();
  /* 12c0dd47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd4f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c0dd52 push eax */
  push32((uint32_t)(EAX));
  /* 12c0dd53 call 0x12c038b0 */
  push32(0x12c0dd58u); f_12c038b0();
  /* 12c0dd58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd5b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd60 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12c0dd63 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dd64 call 0x12c038b0 */
  push32(0x12c0dd69u); f_12c038b0();
  /* 12c0dd69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd6c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd71 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12c0dd74 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dd75 call 0x12c038b0 */
  push32(0x12c0dd7au); f_12c038b0();
  /* 12c0dd7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd82 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12c0dd85 push eax */
  push32((uint32_t)(EAX));
  /* 12c0dd86 call 0x12c038b0 */
  push32(0x12c0dd8bu); f_12c038b0();
  /* 12c0dd8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dd93 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12c0dd96 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dd97 call 0x12c038b0 */
  push32(0x12c0dd9cu); f_12c038b0();
  /* 12c0dd9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dd9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dda1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dda4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12c0dda7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dda8 call 0x12c038b0 */
  push32(0x12c0ddadu); f_12c038b0();
  /* 12c0ddad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ddb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ddb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ddb5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12c0ddb8 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ddb9 call 0x12c038b0 */
  push32(0x12c0ddbeu); f_12c038b0();
  /* 12c0ddbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ddc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ddc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ddc6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c0ddc9 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ddca call 0x12c038b0 */
  push32(0x12c0ddcfu); f_12c038b0();
  /* 12c0ddcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ddd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ddd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ddd7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12c0ddda push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dddb call 0x12c038b0 */
  push32(0x12c0dde0u); f_12c038b0();
  /* 12c0dde0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dde3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dde5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dde8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12c0ddeb push eax */
  push32((uint32_t)(EAX));
  /* 12c0ddec call 0x12c038b0 */
  push32(0x12c0ddf1u); f_12c038b0();
  /* 12c0ddf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ddf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ddf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ddf9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12c0ddfc push edx */
  push32((uint32_t)(EDX));
  /* 12c0ddfd call 0x12c038b0 */
  push32(0x12c0de02u); f_12c038b0();
  /* 12c0de02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de0a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12c0de0d push ecx */
  push32((uint32_t)(ECX));
  /* 12c0de0e call 0x12c038b0 */
  push32(0x12c0de13u); f_12c038b0();
  /* 12c0de13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de1b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12c0de1e push eax */
  push32((uint32_t)(EAX));
  /* 12c0de1f call 0x12c038b0 */
  push32(0x12c0de24u); f_12c038b0();
  /* 12c0de24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de2c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12c0de2f push edx */
  push32((uint32_t)(EDX));
  /* 12c0de30 call 0x12c038b0 */
  push32(0x12c0de35u); f_12c038b0();
  /* 12c0de35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de3d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12c0de40 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0de41 call 0x12c038b0 */
  push32(0x12c0de46u); f_12c038b0();
  /* 12c0de46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de49 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de4e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12c0de51 push eax */
  push32((uint32_t)(EAX));
  /* 12c0de52 call 0x12c038b0 */
  push32(0x12c0de57u); f_12c038b0();
  /* 12c0de57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de5f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12c0de62 push edx */
  push32((uint32_t)(EDX));
  /* 12c0de63 call 0x12c038b0 */
  push32(0x12c0de68u); f_12c038b0();
  /* 12c0de68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de70 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12c0de73 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0de74 call 0x12c038b0 */
  push32(0x12c0de79u); f_12c038b0();
  /* 12c0de79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de81 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12c0de84 push eax */
  push32((uint32_t)(EAX));
  /* 12c0de85 call 0x12c038b0 */
  push32(0x12c0de8au); f_12c038b0();
  /* 12c0de8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0de8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0de8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0de92 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12c0de98 push edx */
  push32((uint32_t)(EDX));
  /* 12c0de99 call 0x12c038b0 */
  push32(0x12c0de9eu); f_12c038b0();
  /* 12c0de9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dea6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12c0deac push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dead call 0x12c038b0 */
  push32(0x12c0deb2u); f_12c038b0();
  /* 12c0deb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0deb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0deb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0deba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12c0dec0 push eax */
  push32((uint32_t)(EAX));
  /* 12c0dec1 call 0x12c038b0 */
  push32(0x12c0dec6u); f_12c038b0();
  /* 12c0dec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0decb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dece mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12c0ded4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ded5 call 0x12c038b0 */
  push32(0x12c0dedau); f_12c038b0();
  /* 12c0deda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dedd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0dedf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0dee2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12c0dee8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dee9 call 0x12c038b0 */
  push32(0x12c0deeeu); f_12c038b0();
  /* 12c0deee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0def1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0def3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0def6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12c0defc push eax */
  push32((uint32_t)(EAX));
  /* 12c0defd call 0x12c038b0 */
  push32(0x12c0df02u); f_12c038b0();
  /* 12c0df02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0df05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0df07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0df0a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12c0df10 push edx */
  push32((uint32_t)(EDX));
  /* 12c0df11 call 0x12c038b0 */
  push32(0x12c0df16u); f_12c038b0();
  /* 12c0df16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0df19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0df1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0df1e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12c0df24 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0df25 call 0x12c038b0 */
  push32(0x12c0df2au); f_12c038b0();
  /* 12c0df2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0df2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0df2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0df32 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12c0df38 push eax */
  push32((uint32_t)(EAX));
  /* 12c0df39 call 0x12c038b0 */
  push32(0x12c0df3eu); f_12c038b0();
  /* 12c0df3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0df41 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0df43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0df46 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12c0df4c push edx */
  push32((uint32_t)(EDX));
  /* 12c0df4d call 0x12c038b0 */
  push32(0x12c0df52u); f_12c038b0();
  /* 12c0df52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0df55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0df57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0df5a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12c0df60 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0df61 call 0x12c038b0 */
  push32(0x12c0df66u); f_12c038b0();
  /* 12c0df66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0df69:;
  /* 12c0df69 pop ebp */
  EBP = (pop32());
  /* 12c0df6a ret  */
  ESPCHK(0x12c0dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x12c0df70 (678 bytes, 180 insns) */
void f_12c0df70(void) {
  FTRACE(0x12c0df70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0df70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0df71 mov ebp, esp */
  EBP = (ESP);
  /* 12c0df73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0df76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0df7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0df7f mov ax, word ptr [0x12c2e6f2] */
  AX = (r16((uint32_t)(0x12c2e6f2)));
  /* 12c0df85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0df88 cmp dword ptr [0x12c2e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0df8f je 0x12c0e0ea */
  if (C.zf) goto L_12c0e0ea;
  /* 12c0df95 push 0x12c2e6c0 */
  push32((uint32_t)(0x12c2e6c0u));
  /* 12c0df9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12c0df9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0df9f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0dfa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dfa2 call 0x12c10fe0 */
  push32(0x12c0dfa7u); f_12c10fe0();
  /* 12c0dfa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dfaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0dfad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0dfaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0dfb2 push 0x12c2e6c4 */
  push32((uint32_t)(0x12c2e6c4u));
  /* 12c0dfb7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12c0dfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0dfbc push eax */
  push32((uint32_t)(EAX));
  /* 12c0dfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dfbf call 0x12c10fe0 */
  push32(0x12c0dfc4u); f_12c10fe0();
  /* 12c0dfc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dfc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0dfca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dfcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0dfcf push 0x12c2e6c8 */
  push32((uint32_t)(0x12c2e6c8u));
  /* 12c0dfd4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c0dfd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0dfd9 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dfda push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0dfdc call 0x12c10fe0 */
  push32(0x12c0dfe1u); f_12c10fe0();
  /* 12c0dfe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dfe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0dfe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0dfe9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0dfec mov edx, dword ptr [0x12c2e6c8] */
  EDX = (r32((uint32_t)(0x12c2e6c8)));
  /* 12c0dff2 push edx */
  push32((uint32_t)(EDX));
  /* 12c0dff3 call 0x12c0e220 */
  push32(0x12c0dff8u); f_12c0e220();
  /* 12c0dff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0dffb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0dfff je 0x12c0e059 */
  if (C.zf) goto L_12c0e059;
  /* 12c0e001 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e003 mov eax, dword ptr [0x12c2e6c0] */
  EAX = (r32((uint32_t)(0x12c2e6c0)));
  /* 12c0e008 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e009 call 0x12c038b0 */
  push32(0x12c0e00eu); f_12c038b0();
  /* 12c0e00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e011 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e013 mov ecx, dword ptr [0x12c2e6c4] */
  ECX = (r32((uint32_t)(0x12c2e6c4)));
  /* 12c0e019 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e01a call 0x12c038b0 */
  push32(0x12c0e01fu); f_12c038b0();
  /* 12c0e01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e022 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e024 mov edx, dword ptr [0x12c2e6c8] */
  EDX = (r32((uint32_t)(0x12c2e6c8)));
  /* 12c0e02a push edx */
  push32((uint32_t)(EDX));
  /* 12c0e02b call 0x12c038b0 */
  push32(0x12c0e030u); f_12c038b0();
  /* 12c0e030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e033 mov dword ptr [0x12c2e6c0], 0 */
  w32((uint32_t)(0x12c2e6c0), (0x0u));
  /* 12c0e03d mov dword ptr [0x12c2e6c4], 0 */
  w32((uint32_t)(0x12c2e6c4), (0x0u));
  /* 12c0e047 mov dword ptr [0x12c2e6c8], 0 */
  w32((uint32_t)(0x12c2e6c8), (0x0u));
  /* 12c0e051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e054 jmp 0x12c0e212 */
  goto L_12c0e212;
L_12c0e059:;
  /* 12c0e059 mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e05e cmp dword ptr [eax], 0x12c2dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12c2dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e064 je 0x12c0e0a0 */
  if (C.zf) goto L_12c0e0a0;
  /* 12c0e066 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e068 mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e06e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0e070 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e071 call 0x12c038b0 */
  push32(0x12c0e076u); f_12c038b0();
  /* 12c0e076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e079 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e07b mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e080 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c0e083 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e084 call 0x12c038b0 */
  push32(0x12c0e089u); f_12c038b0();
  /* 12c0e089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e08c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e08e mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e094 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c0e097 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e098 call 0x12c038b0 */
  push32(0x12c0e09du); f_12c038b0();
  /* 12c0e09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0e0a0:;
  /* 12c0e0a0 mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e0a6 mov edx, dword ptr [0x12c2e6c0] */
  EDX = (r32((uint32_t)(0x12c2e6c0)));
  /* 12c0e0ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c0e0ae mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e0b3 mov ecx, dword ptr [0x12c2e6c4] */
  ECX = (r32((uint32_t)(0x12c2e6c4)));
  /* 12c0e0b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c0e0bc mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e0c2 mov eax, dword ptr [0x12c2e6c8] */
  EAX = (r32((uint32_t)(0x12c2e6c8)));
  /* 12c0e0c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c0e0ca mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e0d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0e0d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0e0d4 mov byte ptr [0x12c2cea8], al */
  w8((uint32_t)(0x12c2cea8), (AL));
  /* 12c0e0d9 mov dword ptr [0x12c2ceac], 1 */
  w32((uint32_t)(0x12c2ceac), (0x1u));
  /* 12c0e0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e0e5 jmp 0x12c0e212 */
  goto L_12c0e212;
L_12c0e0ea:;
  /* 12c0e0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e0ec mov ecx, dword ptr [0x12c2e6c0] */
  ECX = (r32((uint32_t)(0x12c2e6c0)));
  /* 12c0e0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e0f3 call 0x12c038b0 */
  push32(0x12c0e0f8u); f_12c038b0();
  /* 12c0e0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e0fd mov edx, dword ptr [0x12c2e6c4] */
  EDX = (r32((uint32_t)(0x12c2e6c4)));
  /* 12c0e103 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e104 call 0x12c038b0 */
  push32(0x12c0e109u); f_12c038b0();
  /* 12c0e109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e10c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e10e mov eax, dword ptr [0x12c2e6c8] */
  EAX = (r32((uint32_t)(0x12c2e6c8)));
  /* 12c0e113 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e114 call 0x12c038b0 */
  push32(0x12c0e119u); f_12c038b0();
  /* 12c0e119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e11c mov dword ptr [0x12c2e6c0], 0 */
  w32((uint32_t)(0x12c2e6c0), (0x0u));
  /* 12c0e126 mov dword ptr [0x12c2e6c4], 0 */
  w32((uint32_t)(0x12c2e6c4), (0x0u));
  /* 12c0e130 mov dword ptr [0x12c2e6c8], 0 */
  w32((uint32_t)(0x12c2e6c8), (0x0u));
  /* 12c0e13a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12c0e13f push 0x12c2a01c */
  push32((uint32_t)(0x12c2a01cu));
  /* 12c0e144 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e146 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e148 call 0x12c02e20 */
  push32(0x12c0e14du); f_12c02e20();
  /* 12c0e14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e150 mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e156 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c0e158 mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e15e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e161 jne 0x12c0e16b */
  if (!C.zf) goto L_12c0e16b;
  /* 12c0e163 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e166 jmp 0x12c0e212 */
  goto L_12c0e212;
L_12c0e16b:;
  /* 12c0e16b push 0x12c29fec */
  push32((uint32_t)(0x12c29fecu));
  /* 12c0e170 mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e175 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0e177 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e178 call 0x12c05dd0 */
  push32(0x12c0e17du); f_12c05dd0();
  /* 12c0e17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e180 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12c0e185 push 0x12c2a01c */
  push32((uint32_t)(0x12c2a01cu));
  /* 12c0e18a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e18c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e18e call 0x12c02e20 */
  push32(0x12c0e193u); f_12c02e20();
  /* 12c0e193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e196 mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e19c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c0e19f mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e1a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e1a8 jne 0x12c0e1af */
  if (!C.zf) goto L_12c0e1af;
  /* 12c0e1aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e1ad jmp 0x12c0e212 */
  goto L_12c0e212;
L_12c0e1af:;
  /* 12c0e1af mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e1b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0e1b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c0e1bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12c0e1c0 push 0x12c2a01c */
  push32((uint32_t)(0x12c2a01cu));
  /* 12c0e1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e1c9 call 0x12c02e20 */
  push32(0x12c0e1ceu); f_12c02e20();
  /* 12c0e1ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e1d1 mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e1d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c0e1da mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e1e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e1e4 jne 0x12c0e1eb */
  if (!C.zf) goto L_12c0e1eb;
  /* 12c0e1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e1e9 jmp 0x12c0e212 */
  goto L_12c0e212;
L_12c0e1eb:;
  /* 12c0e1eb mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e1f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0e1f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c0e1f6 mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e1fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c0e1fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c0e200 mov byte ptr [0x12c2cea8], cl */
  w8((uint32_t)(0x12c2cea8), (CL));
  /* 12c0e206 mov dword ptr [0x12c2ceac], 1 */
  w32((uint32_t)(0x12c2ceac), (0x1u));
  /* 12c0e210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0e212:;
  /* 12c0e212 mov esp, ebp */
  ESP = (EBP);
  /* 12c0e214 pop ebp */
  EBP = (pop32());
  /* 12c0e215 ret  */
  ESPCHK(0x12c0df70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12c0e220 (125 bytes, 49 insns) */
void f_12c0e220(void) {
  FTRACE(0x12c0e220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0e220 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0e221 mov ebp, esp */
  EBP = (ESP);
  /* 12c0e223 push ecx */
  push32((uint32_t)(ECX));
L_12c0e224:;
  /* 12c0e224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0e22a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0e22c je 0x12c0e299 */
  if (C.zf) goto L_12c0e299;
  /* 12c0e22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e231 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0e234 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e237 jl 0x12c0e25d */
  if ((C.sf!=C.of)) goto L_12c0e25d;
  /* 12c0e239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e23c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0e23f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e242 jg 0x12c0e25d */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0e25d;
  /* 12c0e244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0e24a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0e24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e250 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c0e252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c0e25b jmp 0x12c0e297 */
  goto L_12c0e297;
L_12c0e25d:;
  /* 12c0e25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0e263 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e266 jne 0x12c0e28e */
  if (!C.zf) goto L_12c0e28e;
  /* 12c0e268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e26b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0e26e:;
  /* 12c0e26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e274 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c0e277 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c0e279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e27c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e27f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0e282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0e288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e28a jne 0x12c0e26e */
  if (!C.zf) goto L_12c0e26e;
  /* 12c0e28c jmp 0x12c0e297 */
  goto L_12c0e297;
L_12c0e28e:;
  /* 12c0e28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c0e297:;
  /* 12c0e297 jmp 0x12c0e224 */
  goto L_12c0e224;
L_12c0e299:;
  /* 12c0e299 mov esp, ebp */
  ESP = (EBP);
  /* 12c0e29b pop ebp */
  EBP = (pop32());
  /* 12c0e29c ret  */
  ESPCHK(0x12c0e220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x12c0e2a0 (304 bytes, 85 insns) */
void f_12c0e2a0(void) {
  FTRACE(0x12c0e2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0e2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0e2a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0e2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e2a4 cmp dword ptr [0x12c2e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e2ab je 0x12c0e36c */
  if (C.zf) goto L_12c0e36c;
  /* 12c0e2b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12c0e2b3 push 0x12c2a028 */
  push32((uint32_t)(0x12c2a028u));
  /* 12c0e2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e2ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c0e2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e2be call 0x12c03230 */
  push32(0x12c0e2c3u); f_12c03230();
  /* 12c0e2c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e2c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0e2c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e2cd jne 0x12c0e2d9 */
  if (!C.zf) goto L_12c0e2d9;
  /* 12c0e2cf mov eax, 1 */
  EAX = (0x1u);
  /* 12c0e2d4 jmp 0x12c0e3cc */
  goto L_12c0e3cc;
L_12c0e2d9:;
  /* 12c0e2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e2dc push eax */
  push32((uint32_t)(EAX));
  /* 12c0e2dd call 0x12c0e3d0 */
  push32(0x12c0e2e2u); f_12c0e3d0();
  /* 12c0e2e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e2e7 je 0x12c0e30d */
  if (C.zf) goto L_12c0e30d;
  /* 12c0e2e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e2ec push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e2ed call 0x12c0e660 */
  push32(0x12c0e2f2u); f_12c0e660();
  /* 12c0e2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e2fa push edx */
  push32((uint32_t)(EDX));
  /* 12c0e2fb call 0x12c038b0 */
  push32(0x12c0e300u); f_12c038b0();
  /* 12c0e300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e303 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0e308 jmp 0x12c0e3cc */
  goto L_12c0e3cc;
L_12c0e30d:;
  /* 12c0e30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e310 mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0e318 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c0e31a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e31d mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e323 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c0e326 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c0e329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e32c mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e332 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c0e335 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12c0e338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e33b mov dword ptr [0x12c2dd88], eax */
  w32((uint32_t)(0x12c2dd88), (EAX));
  /* 12c0e340 mov ecx, dword ptr [0x12c2e6cc] */
  ECX = (r32((uint32_t)(0x12c2e6cc)));
  /* 12c0e346 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e347 call 0x12c0e660 */
  push32(0x12c0e34cu); f_12c0e660();
  /* 12c0e34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e34f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e351 mov edx, dword ptr [0x12c2e6cc] */
  EDX = (r32((uint32_t)(0x12c2e6cc)));
  /* 12c0e357 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e358 call 0x12c038b0 */
  push32(0x12c0e35du); f_12c038b0();
  /* 12c0e35d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e363 mov dword ptr [0x12c2e6cc], eax */
  w32((uint32_t)(0x12c2e6cc), (EAX));
  /* 12c0e368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e36a jmp 0x12c0e3cc */
  goto L_12c0e3cc;
L_12c0e36c:;
  /* 12c0e36c mov ecx, dword ptr [0x12c2dd88] */
  ECX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0e374 mov dword ptr [0x12c2dd58], edx */
  w32((uint32_t)(0x12c2dd58), (EDX));
  /* 12c0e37a mov eax, dword ptr [0x12c2dd88] */
  EAX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e37f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c0e382 mov dword ptr [0x12c2dd5c], ecx */
  w32((uint32_t)(0x12c2dd5c), (ECX));
  /* 12c0e388 mov edx, dword ptr [0x12c2dd88] */
  EDX = (r32((uint32_t)(0x12c2dd88)));
  /* 12c0e38e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c0e391 mov dword ptr [0x12c2dd60], eax */
  w32((uint32_t)(0x12c2dd60), (EAX));
  /* 12c0e396 mov dword ptr [0x12c2dd88], 0x12c2dd58 */
  w32((uint32_t)(0x12c2dd88), (0x12c2dd58u));
  /* 12c0e3a0 mov ecx, dword ptr [0x12c2e6cc] */
  ECX = (r32((uint32_t)(0x12c2e6cc)));
  /* 12c0e3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e3a7 call 0x12c0e660 */
  push32(0x12c0e3acu); f_12c0e660();
  /* 12c0e3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e3af push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e3b1 mov edx, dword ptr [0x12c2e6cc] */
  EDX = (r32((uint32_t)(0x12c2e6cc)));
  /* 12c0e3b7 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e3b8 call 0x12c038b0 */
  push32(0x12c0e3bdu); f_12c038b0();
  /* 12c0e3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e3c0 mov dword ptr [0x12c2e6cc], 0 */
  w32((uint32_t)(0x12c2e6cc), (0x0u));
  /* 12c0e3ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0e3cc:;
  /* 12c0e3cc mov esp, ebp */
  ESP = (EBP);
  /* 12c0e3ce pop ebp */
  EBP = (pop32());
  /* 12c0e3cf ret  */
  ESPCHK(0x12c0e2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x12c0e3d0 (525 bytes, 200 insns) */
void f_12c0e3d0(void) {
  FTRACE(0x12c0e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0e3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0e3d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0e3dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e3df mov ax, word ptr [0x12c2e6ec] */
  AX = (r16((uint32_t)(0x12c2e6ec)));
  /* 12c0e3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0e3e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e3ec jne 0x12c0e3f6 */
  if (!C.zf) goto L_12c0e3f6;
  /* 12c0e3ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e3f1 jmp 0x12c0e5d9 */
  goto L_12c0e5d9;
L_12c0e3f6:;
  /* 12c0e3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e3f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e3fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e3fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12c0e3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e402 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e403 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e405 call 0x12c10fe0 */
  push32(0x12c0e40au); f_12c10fe0();
  /* 12c0e40a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e40d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e410 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e412 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e418 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e41b push edx */
  push32((uint32_t)(EDX));
  /* 12c0e41c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12c0e41e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e421 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e422 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e424 call 0x12c10fe0 */
  push32(0x12c0e429u); f_12c10fe0();
  /* 12c0e429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e42c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e42f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e431 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e43a push edx */
  push32((uint32_t)(EDX));
  /* 12c0e43b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c0e43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e440 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e441 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e443 call 0x12c10fe0 */
  push32(0x12c0e448u); f_12c10fe0();
  /* 12c0e448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e44b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e44e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e450 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e456 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e459 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e45a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12c0e45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e45f push eax */
  push32((uint32_t)(EAX));
  /* 12c0e460 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e462 call 0x12c10fe0 */
  push32(0x12c0e467u); f_12c10fe0();
  /* 12c0e467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e46a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e46d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e475 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e478 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e479 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12c0e47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e47e push eax */
  push32((uint32_t)(EAX));
  /* 12c0e47f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e481 call 0x12c10fe0 */
  push32(0x12c0e486u); f_12c10fe0();
  /* 12c0e486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e48c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e48e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e494 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c0e497 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e498 call 0x12c0e5e0 */
  push32(0x12c0e49du); f_12c0e5e0();
  /* 12c0e49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e4a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e4a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12c0e4a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e4ac push edx */
  push32((uint32_t)(EDX));
  /* 12c0e4ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e4af call 0x12c10fe0 */
  push32(0x12c0e4b4u); f_12c10fe0();
  /* 12c0e4b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e4ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e4bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e4c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4c5 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e4c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12c0e4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e4cb push eax */
  push32((uint32_t)(EAX));
  /* 12c0e4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e4ce call 0x12c10fe0 */
  push32(0x12c0e4d3u); f_12c10fe0();
  /* 12c0e4d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e4d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e4db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e4e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4e4 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e4e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12c0e4e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e4ea push eax */
  push32((uint32_t)(EAX));
  /* 12c0e4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e4ed call 0x12c10fe0 */
  push32(0x12c0e4f2u); f_12c10fe0();
  /* 12c0e4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e4f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e4fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e4fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e500 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e503 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c0e506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e509 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e50a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e50c call 0x12c10fe0 */
  push32(0x12c0e511u); f_12c10fe0();
  /* 12c0e511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e514 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e517 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e519 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e51f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e522 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e523 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12c0e525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e528 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e529 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e52b call 0x12c10fe0 */
  push32(0x12c0e530u); f_12c10fe0();
  /* 12c0e530 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e536 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e53b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e53e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e541 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e542 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12c0e544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e547 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e548 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e54a call 0x12c10fe0 */
  push32(0x12c0e54fu); f_12c10fe0();
  /* 12c0e54f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e555 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e557 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e55a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e55d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e560 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e561 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12c0e563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e566 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e567 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e569 call 0x12c10fe0 */
  push32(0x12c0e56eu); f_12c10fe0();
  /* 12c0e56e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e574 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e576 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e57c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e57f push edx */
  push32((uint32_t)(EDX));
  /* 12c0e580 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12c0e582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e585 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e588 call 0x12c10fe0 */
  push32(0x12c0e58du); f_12c10fe0();
  /* 12c0e58d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e593 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e59b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e59e push edx */
  push32((uint32_t)(EDX));
  /* 12c0e59f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12c0e5a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e5a4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e5a7 call 0x12c10fe0 */
  push32(0x12c0e5acu); f_12c10fe0();
  /* 12c0e5ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e5af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e5b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e5b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e5ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e5bd push edx */
  push32((uint32_t)(EDX));
  /* 12c0e5be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12c0e5c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e5c3 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e5c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e5c6 call 0x12c10fe0 */
  push32(0x12c0e5cbu); f_12c10fe0();
  /* 12c0e5cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e5ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0e5d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e5d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c0e5d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c0e5d9:;
  /* 12c0e5d9 mov esp, ebp */
  ESP = (EBP);
  /* 12c0e5db pop ebp */
  EBP = (pop32());
  /* 12c0e5dc ret  */
  ESPCHK(0x12c0e3d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12c0e5e0 (125 bytes, 49 insns) */
void f_12c0e5e0(void) {
  FTRACE(0x12c0e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0e5e3 push ecx */
  push32((uint32_t)(ECX));
L_12c0e5e4:;
  /* 12c0e5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e5e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0e5ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0e5ec je 0x12c0e659 */
  if (C.zf) goto L_12c0e659;
  /* 12c0e5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e5f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0e5f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e5f7 jl 0x12c0e61d */
  if ((C.sf!=C.of)) goto L_12c0e61d;
  /* 12c0e5f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e5fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0e5ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e602 jg 0x12c0e61d */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0e61d;
  /* 12c0e604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0e60a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0e60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e610 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c0e612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e618 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c0e61b jmp 0x12c0e657 */
  goto L_12c0e657;
L_12c0e61d:;
  /* 12c0e61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e620 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0e623 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e626 jne 0x12c0e64e */
  if (!C.zf) goto L_12c0e64e;
  /* 12c0e628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e62b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0e62e:;
  /* 12c0e62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e634 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c0e637 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c0e639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e63c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e63f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c0e642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0e645 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0e648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e64a jne 0x12c0e62e */
  if (!C.zf) goto L_12c0e62e;
  /* 12c0e64c jmp 0x12c0e657 */
  goto L_12c0e657;
L_12c0e64e:;
  /* 12c0e64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e654 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c0e657:;
  /* 12c0e657 jmp 0x12c0e5e4 */
  goto L_12c0e5e4;
L_12c0e659:;
  /* 12c0e659 mov esp, ebp */
  ESP = (EBP);
  /* 12c0e65b pop ebp */
  EBP = (pop32());
  /* 12c0e65c ret  */
  ESPCHK(0x12c0e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x12c0e660 (147 bytes, 52 insns) */
void f_12c0e660(void) {
  FTRACE(0x12c0e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0e660 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0e661 mov ebp, esp */
  EBP = (ESP);
  /* 12c0e663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e667 jne 0x12c0e66e */
  if (!C.zf) goto L_12c0e66e;
  /* 12c0e669 jmp 0x12c0e6f1 */
  goto L_12c0e6f1;
L_12c0e66e:;
  /* 12c0e66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e671 cmp dword ptr [eax + 0xc], 0x12c2e728 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12c2e728u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e678 je 0x12c0e6f1 */
  if (C.zf) goto L_12c0e6f1;
  /* 12c0e67a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e67f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0e682 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e683 call 0x12c038b0 */
  push32(0x12c0e688u); f_12c038b0();
  /* 12c0e688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e68b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e68d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e690 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c0e693 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e694 call 0x12c038b0 */
  push32(0x12c0e699u); f_12c038b0();
  /* 12c0e699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e69c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e6a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c0e6a4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e6a5 call 0x12c038b0 */
  push32(0x12c0e6aau); f_12c038b0();
  /* 12c0e6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e6af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e6b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c0e6b5 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e6b6 call 0x12c038b0 */
  push32(0x12c0e6bbu); f_12c038b0();
  /* 12c0e6bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e6be push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e6c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c0e6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e6c7 call 0x12c038b0 */
  push32(0x12c0e6ccu); f_12c038b0();
  /* 12c0e6cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e6d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12c0e6d7 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e6d8 call 0x12c038b0 */
  push32(0x12c0e6ddu); f_12c038b0();
  /* 12c0e6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e6e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e6e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0e6e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12c0e6e8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0e6e9 call 0x12c038b0 */
  push32(0x12c0e6eeu); f_12c038b0();
  /* 12c0e6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0e6f1:;
  /* 12c0e6f1 pop ebp */
  EBP = (pop32());
  /* 12c0e6f2 ret  */
  ESPCHK(0x12c0e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x12c0e700 (928 bytes, 284 insns) */
void f_12c0e700(void) {
  FTRACE(0x12c0e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0e700 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0e701 mov ebp, esp */
  EBP = (ESP);
  /* 12c0e703 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0e706 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12c0e70d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12c0e714 cmp dword ptr [0x12c2e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e71b je 0x12c0ea51 */
  if (C.zf) goto L_12c0ea51;
  /* 12c0e721 cmp dword ptr [0x12c2e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e728 jne 0x12c0e750 */
  if (!C.zf) goto L_12c0e750;
  /* 12c0e72a push 0x12c2e6a0 */
  push32((uint32_t)(0x12c2e6a0u));
  /* 12c0e72f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12c0e734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e736 mov ax, word ptr [0x12c2e6e4] */
  AX = (r16((uint32_t)(0x12c2e6e4)));
  /* 12c0e73c push eax */
  push32((uint32_t)(EAX));
  /* 12c0e73d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e73f call 0x12c10fe0 */
  push32(0x12c0e744u); f_12c10fe0();
  /* 12c0e744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e749 je 0x12c0e750 */
  if (C.zf) goto L_12c0e750;
  /* 12c0e74b jmp 0x12c0ea12 */
  goto L_12c0ea12;
L_12c0e750:;
  /* 12c0e750 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12c0e752 push 0x12c2a034 */
  push32((uint32_t)(0x12c2a034u));
  /* 12c0e757 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e759 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12c0e75e call 0x12c02e20 */
  push32(0x12c0e763u); f_12c02e20();
  /* 12c0e763 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e766 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c0e769 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12c0e76b push 0x12c2a034 */
  push32((uint32_t)(0x12c2a034u));
  /* 12c0e770 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e772 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12c0e777 call 0x12c02e20 */
  push32(0x12c0e77cu); f_12c02e20();
  /* 12c0e77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e77f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c0e782 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12c0e784 push 0x12c2a034 */
  push32((uint32_t)(0x12c2a034u));
  /* 12c0e789 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e78b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12c0e790 call 0x12c02e20 */
  push32(0x12c0e795u); f_12c02e20();
  /* 12c0e795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e798 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c0e79b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12c0e79d push 0x12c2a034 */
  push32((uint32_t)(0x12c2a034u));
  /* 12c0e7a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e7a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12c0e7a9 call 0x12c02e20 */
  push32(0x12c0e7aeu); f_12c02e20();
  /* 12c0e7ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e7b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c0e7b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e7b8 je 0x12c0e7cc */
  if (C.zf) goto L_12c0e7cc;
  /* 12c0e7ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e7be je 0x12c0e7cc */
  if (C.zf) goto L_12c0e7cc;
  /* 12c0e7c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e7c4 je 0x12c0e7cc */
  if (C.zf) goto L_12c0e7cc;
  /* 12c0e7c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e7ca jne 0x12c0e7d1 */
  if (!C.zf) goto L_12c0e7d1;
L_12c0e7cc:;
  /* 12c0e7cc jmp 0x12c0ea12 */
  goto L_12c0ea12;
L_12c0e7d1:;
  /* 12c0e7d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0e7d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c0e7d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c0e7de jmp 0x12c0e7e9 */
  goto L_12c0e7e9;
L_12c0e7e0:;
  /* 12c0e7e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0e7e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e7e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12c0e7e9:;
  /* 12c0e7e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e7f0 jge 0x12c0e805 */
  if ((C.sf==C.of)) goto L_12c0e805;
  /* 12c0e7f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e7f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12c0e7f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c0e7fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e7fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e800 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c0e803 jmp 0x12c0e7e0 */
  goto L_12c0e7e0;
L_12c0e805:;
  /* 12c0e805 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c0e808 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e809 mov ecx, dword ptr [0x12c2e6a0] */
  ECX = (r32((uint32_t)(0x12c2e6a0)));
  /* 12c0e80f push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e810 call dword ptr [0x12c3033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3033c))), 0x12c0e816u);
  /* 12c0e816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e818 jne 0x12c0e81f */
  if (!C.zf) goto L_12c0e81f;
  /* 12c0e81a jmp 0x12c0ea12 */
  goto L_12c0ea12;
L_12c0e81f:;
  /* 12c0e81f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e823 jbe 0x12c0e82a */
  if ((C.cf||C.zf)) goto L_12c0e82a;
  /* 12c0e825 jmp 0x12c0ea12 */
  goto L_12c0ea12;
L_12c0e82a:;
  /* 12c0e82a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0e82d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0e833 mov dword ptr [0x12c2cea4], edx */
  w32((uint32_t)(0x12c2cea4), (EDX));
  /* 12c0e839 cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e840 jle 0x12c0e899 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0e899;
  /* 12c0e842 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12c0e845 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c0e848 jmp 0x12c0e853 */
  goto L_12c0e853;
L_12c0e84a:;
  /* 12c0e84a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e84d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e850 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12c0e853:;
  /* 12c0e853 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e858 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0e85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e85c je 0x12c0e899 */
  if (C.zf) goto L_12c0e899;
  /* 12c0e85e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e861 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0e863 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c0e866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0e868 je 0x12c0e899 */
  if (C.zf) goto L_12c0e899;
  /* 12c0e86a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c0e871 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c0e874 jmp 0x12c0e87f */
  goto L_12c0e87f;
L_12c0e876:;
  /* 12c0e876 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0e879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e87c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12c0e87f:;
  /* 12c0e87f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e884 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c0e887 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e88a jg 0x12c0e897 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0e897;
  /* 12c0e88c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0e88f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e892 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c0e895 jmp 0x12c0e876 */
  goto L_12c0e876;
L_12c0e897:;
  /* 12c0e897 jmp 0x12c0e84a */
  goto L_12c0e84a;
L_12c0e899:;
  /* 12c0e899 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e89b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e89d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e89f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0e8a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e8a5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e8a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c0e8ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0e8ae push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e8af push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e8b1 call 0x12c0b050 */
  push32(0x12c0e8b6u); f_12c0b050();
  /* 12c0e8b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e8bb jne 0x12c0e8c2 */
  if (!C.zf) goto L_12c0e8c2;
  /* 12c0e8bd jmp 0x12c0ea12 */
  goto L_12c0ea12;
L_12c0e8c2:;
  /* 12c0e8c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0e8c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12c0e8ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0e8cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c0e8d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c0e8d7 jmp 0x12c0e8e2 */
  goto L_12c0e8e2;
L_12c0e8d9:;
  /* 12c0e8d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0e8dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c0e8e2:;
  /* 12c0e8e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e8e9 jge 0x12c0e900 */
  if ((C.sf==C.of)) goto L_12c0e900;
  /* 12c0e8eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0e8ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12c0e8f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12c0e8f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c0e8f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e8fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c0e8fe jmp 0x12c0e8d9 */
  goto L_12c0e8d9;
L_12c0e900:;
  /* 12c0e900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e902 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0e904 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0e907 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e90a push edx */
  push32((uint32_t)(EDX));
  /* 12c0e90b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c0e910 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0e913 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e914 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0e916 call 0x12c11280 */
  push32(0x12c0e91bu); f_12c11280();
  /* 12c0e91b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0e920 jne 0x12c0e927 */
  if (!C.zf) goto L_12c0e927;
  /* 12c0e922 jmp 0x12c0ea12 */
  goto L_12c0ea12;
L_12c0e927:;
  /* 12c0e927 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0e92a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12c0e92f cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e936 jle 0x12c0e993 */
  if ((C.zf||C.sf!=C.of)) goto L_12c0e993;
  /* 12c0e938 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12c0e93b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c0e93e jmp 0x12c0e949 */
  goto L_12c0e949;
L_12c0e940:;
  /* 12c0e940 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e943 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e946 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12c0e949:;
  /* 12c0e949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e94c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0e94e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c0e950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0e952 je 0x12c0e993 */
  if (C.zf) goto L_12c0e993;
  /* 12c0e954 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e957 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0e959 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c0e95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0e95e je 0x12c0e993 */
  if (C.zf) goto L_12c0e993;
  /* 12c0e960 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e965 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0e967 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c0e96a jmp 0x12c0e975 */
  goto L_12c0e975;
L_12c0e96c:;
  /* 12c0e96c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0e96f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e972 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c0e975:;
  /* 12c0e975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0e978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0e97a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c0e97d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e980 jg 0x12c0e991 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0e991;
  /* 12c0e982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c0e985 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0e988 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12c0e98f jmp 0x12c0e96c */
  goto L_12c0e96c;
L_12c0e991:;
  /* 12c0e991 jmp 0x12c0e940 */
  goto L_12c0e940;
L_12c0e993:;
  /* 12c0e993 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0e996 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e999 mov dword ptr [0x12c2cc98], eax */
  w32((uint32_t)(0x12c2cc98), (EAX));
  /* 12c0e99e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0e9a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e9a4 mov dword ptr [0x12c2cc9c], ecx */
  w32((uint32_t)(0x12c2cc9c), (ECX));
  /* 12c0e9aa cmp dword ptr [0x12c2e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e9b1 je 0x12c0e9c4 */
  if (C.zf) goto L_12c0e9c4;
  /* 12c0e9b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e9b5 mov edx, dword ptr [0x12c2e6d0] */
  EDX = (r32((uint32_t)(0x12c2e6d0)));
  /* 12c0e9bb push edx */
  push32((uint32_t)(EDX));
  /* 12c0e9bc call 0x12c038b0 */
  push32(0x12c0e9c1u); f_12c038b0();
  /* 12c0e9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0e9c4:;
  /* 12c0e9c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0e9c7 mov dword ptr [0x12c2e6d0], eax */
  w32((uint32_t)(0x12c2e6d0), (EAX));
  /* 12c0e9cc cmp dword ptr [0x12c2e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0e9d3 je 0x12c0e9e6 */
  if (C.zf) goto L_12c0e9e6;
  /* 12c0e9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e9d7 mov ecx, dword ptr [0x12c2e6d4] */
  ECX = (r32((uint32_t)(0x12c2e6d4)));
  /* 12c0e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 12c0e9de call 0x12c038b0 */
  push32(0x12c0e9e3u); f_12c038b0();
  /* 12c0e9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0e9e6:;
  /* 12c0e9e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0e9e9 mov dword ptr [0x12c2e6d4], edx */
  w32((uint32_t)(0x12c2e6d4), (EDX));
  /* 12c0e9ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e9f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0e9f4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0e9f5 call 0x12c038b0 */
  push32(0x12c0e9fau); f_12c038b0();
  /* 12c0e9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0e9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0e9ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0ea02 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ea03 call 0x12c038b0 */
  push32(0x12c0ea08u); f_12c038b0();
  /* 12c0ea08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ea0d jmp 0x12c0ea9c */
  goto L_12c0ea9c;
L_12c0ea12:;
  /* 12c0ea12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ea14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c0ea17 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ea18 call 0x12c038b0 */
  push32(0x12c0ea1du); f_12c038b0();
  /* 12c0ea1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ea22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c0ea25 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ea26 call 0x12c038b0 */
  push32(0x12c0ea2bu); f_12c038b0();
  /* 12c0ea2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea2e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ea30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c0ea33 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ea34 call 0x12c038b0 */
  push32(0x12c0ea39u); f_12c038b0();
  /* 12c0ea39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ea3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c0ea41 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ea42 call 0x12c038b0 */
  push32(0x12c0ea47u); f_12c038b0();
  /* 12c0ea47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea4a mov eax, 1 */
  EAX = (0x1u);
  /* 12c0ea4f jmp 0x12c0ea9c */
  goto L_12c0ea9c;
L_12c0ea51:;
  /* 12c0ea51 mov dword ptr [0x12c2cc98], 0x12c2cca2 */
  w32((uint32_t)(0x12c2cc98), (0x12c2cca2u));
  /* 12c0ea5b mov dword ptr [0x12c2cc9c], 0x12c2cca2 */
  w32((uint32_t)(0x12c2cc9c), (0x12c2cca2u));
  /* 12c0ea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ea67 mov eax, dword ptr [0x12c2e6d0] */
  EAX = (r32((uint32_t)(0x12c2e6d0)));
  /* 12c0ea6c push eax */
  push32((uint32_t)(EAX));
  /* 12c0ea6d call 0x12c038b0 */
  push32(0x12c0ea72u); f_12c038b0();
  /* 12c0ea72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0ea77 mov ecx, dword ptr [0x12c2e6d4] */
  ECX = (r32((uint32_t)(0x12c2e6d4)));
  /* 12c0ea7d push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ea7e call 0x12c038b0 */
  push32(0x12c0ea83u); f_12c038b0();
  /* 12c0ea83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ea86 mov dword ptr [0x12c2e6d0], 0 */
  w32((uint32_t)(0x12c2e6d0), (0x0u));
  /* 12c0ea90 mov dword ptr [0x12c2e6d4], 0 */
  w32((uint32_t)(0x12c2e6d4), (0x0u));
  /* 12c0ea9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0ea9c:;
  /* 12c0ea9c mov esp, ebp */
  ESP = (EBP);
  /* 12c0ea9e pop ebp */
  EBP = (pop32());
  /* 12c0ea9f ret  */
  ESPCHK(0x12c0e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x12c0eaa0 (7 bytes, 5 insns) */
void f_12c0eaa0(void) {
  FTRACE(0x12c0eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0eaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0eaa5 pop ebp */
  EBP = (pop32());
  /* 12c0eaa6 ret  */
  ESPCHK(0x12c0eaa0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12c0eab0 (129 bytes, 56 insns) */
void f_12c0eab0(void) {
  FTRACE(0x12c0eab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0eab0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c0eab4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c0eab8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c0eabe jne 0x12c0eafc */
  if (!C.zf) goto L_12c0eafc;
L_12c0eac0:;
  /* 12c0eac0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c0eac2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eac4 jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0eac8 je 0x12c0eaf0 */
  if (C.zf) goto L_12c0eaf0;
  /* 12c0eaca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eacd jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eacf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c0ead1 je 0x12c0eaf0 */
  if (C.zf) goto L_12c0eaf0;
  /* 12c0ead3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c0ead6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0ead9 jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eadb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0eadd je 0x12c0eaf0 */
  if (C.zf) goto L_12c0eaf0;
  /* 12c0eadf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eae2 jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eae4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eae7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eaea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c0eaec jne 0x12c0eac0 */
  if (!C.zf) goto L_12c0eac0;
  /* 12c0eaee mov edi, edi */
  EDI = (EDI);
L_12c0eaf0:;
  /* 12c0eaf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0eaf2 ret  */
  ESPCHK(0x12c0eab0u, _esp0);
  ESP += 4; return;
  /* 12c0eaf3 nop  */
  /* nop */
L_12c0eaf4:;
  /* 12c0eaf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0eaf6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c0eaf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c0eaf9 ret  */
  ESPCHK(0x12c0eab0u, _esp0);
  ESP += 4; return;
  /* 12c0eafa mov edi, edi */
  EDI = (EDI);
L_12c0eafc:;
  /* 12c0eafc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12c0eb02 je 0x12c0eb18 */
  if (C.zf) goto L_12c0eb18;
  /* 12c0eb04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0eb06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c0eb07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eb09 jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eb0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c0eb0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0eb0e je 0x12c0eaf0 */
  if (C.zf) goto L_12c0eaf0;
  /* 12c0eb10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12c0eb16 je 0x12c0eac0 */
  if (C.zf) goto L_12c0eac0;
L_12c0eb18:;
  /* 12c0eb18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12c0eb1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eb1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eb20 jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eb22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0eb24 je 0x12c0eaf0 */
  if (C.zf) goto L_12c0eaf0;
  /* 12c0eb26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eb29 jne 0x12c0eaf4 */
  if (!C.zf) goto L_12c0eaf4;
  /* 12c0eb2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c0eb2d je 0x12c0eaf0 */
  if (C.zf) goto L_12c0eaf0;
  /* 12c0eb2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eb32 jmp 0x12c0eac0 */
  goto L_12c0eac0;
}

/* FUN_1000eb40 @ 0x12c0eb40 (62 bytes, 35 insns) */
void f_12c0eb40(void) {
  FTRACE(0x12c0eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0eb41 mov ebp, esp */
  EBP = (ESP);
  /* 12c0eb43 push esi */
  push32((uint32_t)(ESI));
  /* 12c0eb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0eb46 push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb47 push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb48 push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb49 push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb4a push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb4b push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb4c push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb4d push eax */
  push32((uint32_t)(EAX));
  /* 12c0eb4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0eb51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0eb54:;
  /* 12c0eb54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0eb56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0eb58 je 0x12c0eb61 */
  if (C.zf) goto L_12c0eb61;
  /* 12c0eb5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c0eb5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c0eb5b");
  /* 12c0eb5f jmp 0x12c0eb54 */
  goto L_12c0eb54;
L_12c0eb61:;
  /* 12c0eb61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0eb64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0eb67 nop  */
  /* nop */
L_12c0eb68:;
  /* 12c0eb68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c0eb69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0eb6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0eb6d je 0x12c0eb76 */
  if (C.zf) goto L_12c0eb76;
  /* 12c0eb6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c0eb70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c0eb70");
  /* 12c0eb74 jae 0x12c0eb68 */
  if (!C.cf) goto L_12c0eb68;
L_12c0eb76:;
  /* 12c0eb76 mov eax, ecx */
  EAX = (ECX);
  /* 12c0eb78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eb7b pop esi */
  ESI = (pop32());
  /* 12c0eb7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0eb7d ret  */
  ESPCHK(0x12c0eb40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12c0eb80 (56 bytes, 31 insns) */
void f_12c0eb80(void) {
  FTRACE(0x12c0eb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0eb80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0eb81 mov ebp, esp */
  EBP = (ESP);
  /* 12c0eb83 push edi */
  push32((uint32_t)(EDI));
  /* 12c0eb84 push esi */
  push32((uint32_t)(ESI));
  /* 12c0eb85 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0eb86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0eb89 jecxz 0x12c0ebb1 */
  x86_unimpl("jecxz @ 0x12c0eb89");
  /* 12c0eb8b mov ebx, ecx */
  EBX = (ECX);
  /* 12c0eb8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0eb90 mov esi, edi */
  ESI = (EDI);
  /* 12c0eb92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0eb94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c0eb96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0eb98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eb9a mov edi, esi */
  EDI = (ESI);
  /* 12c0eb9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0eb9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c0eba1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12c0eba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0eba6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c0eba9 ja 0x12c0ebaf */
  if ((!C.cf&&!C.zf)) goto L_12c0ebaf;
  /* 12c0ebab je 0x12c0ebb1 */
  if (C.zf) goto L_12c0ebb1;
  /* 12c0ebad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c0ebae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12c0ebaf:;
  /* 12c0ebaf not ecx */
  ECX = (~(ECX));
L_12c0ebb1:;
  /* 12c0ebb1 mov eax, ecx */
  EAX = (ECX);
  /* 12c0ebb3 pop ebx */
  EBX = (pop32());
  /* 12c0ebb4 pop esi */
  ESI = (pop32());
  /* 12c0ebb5 pop edi */
  EDI = (pop32());
  /* 12c0ebb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0ebb7 ret  */
  ESPCHK(0x12c0eb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x12c0ebc0 (58 bytes, 32 insns) */
void f_12c0ebc0(void) {
  FTRACE(0x12c0ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ebc3 push esi */
  push32((uint32_t)(ESI));
  /* 12c0ebc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ebc6 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebc7 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebc8 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebca push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebcb push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebcc push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebcd push eax */
  push32((uint32_t)(EAX));
  /* 12c0ebce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ebd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c0ebd4:;
  /* 12c0ebd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c0ebd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0ebd8 je 0x12c0ebe1 */
  if (C.zf) goto L_12c0ebe1;
  /* 12c0ebda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c0ebdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c0ebdb");
  /* 12c0ebdf jmp 0x12c0ebd4 */
  goto L_12c0ebd4;
L_12c0ebe1:;
  /* 12c0ebe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12c0ebe4:;
  /* 12c0ebe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c0ebe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c0ebe8 je 0x12c0ebf4 */
  if (C.zf) goto L_12c0ebf4;
  /* 12c0ebea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c0ebeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c0ebeb");
  /* 12c0ebef jae 0x12c0ebe4 */
  if (!C.cf) goto L_12c0ebe4;
  /* 12c0ebf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12c0ebf4:;
  /* 12c0ebf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ebf7 pop esi */
  ESI = (pop32());
  /* 12c0ebf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c0ebf9 ret  */
  ESPCHK(0x12c0ebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec00 @ 0x12c0ec00 (512 bytes, 147 insns) */
void f_12c0ec00(void) {
  FTRACE(0x12c0ec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ec00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ec01 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ec03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ec06 cmp dword ptr [0x12c2e71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ec0d jne 0x12c0ec32 */
  if (!C.zf) goto L_12c0ec32;
  /* 12c0ec0f call 0x12c0f6d0 */
  push32(0x12c0ec14u); f_12c0f6d0();
  /* 12c0ec14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ec16 je 0x12c0ec22 */
  if (C.zf) goto L_12c0ec22;
  /* 12c0ec18 mov eax, dword ptr [0x12c30264] */
  EAX = (r32((uint32_t)(0x12c30264)));
  /* 12c0ec1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0ec20 jmp 0x12c0ec29 */
  goto L_12c0ec29;
L_12c0ec22:;
  /* 12c0ec22 mov dword ptr [ebp - 8], 0x12c0f720 */
  w32((uint32_t)(EBP + -0x8), (0x12c0f720u));
L_12c0ec29:;
  /* 12c0ec29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0ec2c mov dword ptr [0x12c2e71c], ecx */
  w32((uint32_t)(0x12c2e71c), (ECX));
L_12c0ec32:;
  /* 12c0ec32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ec36 jne 0x12c0ec42 */
  if (!C.zf) goto L_12c0ec42;
  /* 12c0ec38 call 0x12c0f520 */
  push32(0x12c0ec3du); f_12c0f520();
  /* 12c0ec3d jmp 0x12c0ed0e */
  goto L_12c0ed0e;
L_12c0ec42:;
  /* 12c0ec42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ec45 mov dword ptr [0x12c2e70c], edx */
  w32((uint32_t)(0x12c2e70c), (EDX));
  /* 12c0ec4b cmp dword ptr [0x12c2e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ec52 je 0x12c0ec74 */
  if (C.zf) goto L_12c0ec74;
  /* 12c0ec54 mov eax, dword ptr [0x12c2e70c] */
  EAX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0ec59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0ec5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0ec5e je 0x12c0ec74 */
  if (C.zf) goto L_12c0ec74;
  /* 12c0ec60 push 0x12c2e70c */
  push32((uint32_t)(0x12c2e70cu));
  /* 12c0ec65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c0ec67 push 0x12c2da90 */
  push32((uint32_t)(0x12c2da90u));
  /* 12c0ec6c call 0x12c0ee00 */
  push32(0x12c0ec71u); f_12c0ee00();
  /* 12c0ec71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0ec74:;
  /* 12c0ec74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ec77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ec7a mov dword ptr [0x12c2e710], edx */
  w32((uint32_t)(0x12c2e710), (EDX));
  /* 12c0ec80 cmp dword ptr [0x12c2e710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ec87 je 0x12c0eca9 */
  if (C.zf) goto L_12c0eca9;
  /* 12c0ec89 mov eax, dword ptr [0x12c2e710] */
  EAX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0ec8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0ec91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0ec93 je 0x12c0eca9 */
  if (C.zf) goto L_12c0eca9;
  /* 12c0ec95 push 0x12c2e710 */
  push32((uint32_t)(0x12c2e710u));
  /* 12c0ec9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c0ec9c push 0x12c2d9d8 */
  push32((uint32_t)(0x12c2d9d8u));
  /* 12c0eca1 call 0x12c0ee00 */
  push32(0x12c0eca6u); f_12c0ee00();
  /* 12c0eca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0eca9:;
  /* 12c0eca9 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
  /* 12c0ecb3 cmp dword ptr [0x12c2e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ecba je 0x12c0eced */
  if (C.zf) goto L_12c0eced;
  /* 12c0ecbc mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0ecc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0ecc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ecc7 je 0x12c0eced */
  if (C.zf) goto L_12c0eced;
  /* 12c0ecc9 cmp dword ptr [0x12c2e710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ecd0 je 0x12c0ece6 */
  if (C.zf) goto L_12c0ece6;
  /* 12c0ecd2 mov ecx, dword ptr [0x12c2e710] */
  ECX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0ecd8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0ecdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0ecdd je 0x12c0ece6 */
  if (C.zf) goto L_12c0ece6;
  /* 12c0ecdf call 0x12c0ee90 */
  push32(0x12c0ece4u); f_12c0ee90();
  /* 12c0ece4 jmp 0x12c0eceb */
  goto L_12c0eceb;
L_12c0ece6:;
  /* 12c0ece6 call 0x12c0f280 */
  push32(0x12c0ecebu); f_12c0f280();
L_12c0eceb:;
  /* 12c0eceb jmp 0x12c0ed0e */
  goto L_12c0ed0e;
L_12c0eced:;
  /* 12c0eced cmp dword ptr [0x12c2e710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ecf4 je 0x12c0ed09 */
  if (C.zf) goto L_12c0ed09;
  /* 12c0ecf6 mov eax, dword ptr [0x12c2e710] */
  EAX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0ecfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0ecfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0ed00 je 0x12c0ed09 */
  if (C.zf) goto L_12c0ed09;
  /* 12c0ed02 call 0x12c0f420 */
  push32(0x12c0ed07u); f_12c0f420();
  /* 12c0ed07 jmp 0x12c0ed0e */
  goto L_12c0ed0e;
L_12c0ed09:;
  /* 12c0ed09 call 0x12c0f520 */
  push32(0x12c0ed0eu); f_12c0f520();
L_12c0ed0e:;
  /* 12c0ed0e cmp dword ptr [0x12c2e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ed15 jne 0x12c0ed1e */
  if (!C.zf) goto L_12c0ed1e;
  /* 12c0ed17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ed19 jmp 0x12c0edfc */
  goto L_12c0edfc;
L_12c0ed1e:;
  /* 12c0ed1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ed21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ed27 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ed28 call 0x12c0f550 */
  push32(0x12c0ed2du); f_12c0f550();
  /* 12c0ed2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ed30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0ed33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ed37 je 0x12c0ed4c */
  if (C.zf) goto L_12c0ed4c;
  /* 12c0ed39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ed3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ed41 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ed42 call dword ptr [0x12c30268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30268))), 0x12c0ed48u);
  /* 12c0ed48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ed4a jne 0x12c0ed53 */
  if (!C.zf) goto L_12c0ed53;
L_12c0ed4c:;
  /* 12c0ed4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ed4e jmp 0x12c0edfc */
  goto L_12c0edfc;
L_12c0ed53:;
  /* 12c0ed53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0ed55 mov ecx, dword ptr [0x12c2e6fc] */
  ECX = (r32((uint32_t)(0x12c2e6fc)));
  /* 12c0ed5b push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ed5c call dword ptr [0x12c30278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30278))), 0x12c0ed62u);
  /* 12c0ed62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ed64 jne 0x12c0ed6d */
  if (!C.zf) goto L_12c0ed6d;
  /* 12c0ed66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ed68 jmp 0x12c0edfc */
  goto L_12c0edfc;
L_12c0ed6d:;
  /* 12c0ed6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ed71 je 0x12c0ed98 */
  if (C.zf) goto L_12c0ed98;
  /* 12c0ed73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ed76 mov ax, word ptr [0x12c2e6fc] */
  AX = (r16((uint32_t)(0x12c2e6fc)));
  /* 12c0ed7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12c0ed7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ed82 mov dx, word ptr [0x12c2e718] */
  DX = (r16((uint32_t)(0x12c2e718)));
  /* 12c0ed89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12c0ed8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0ed90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12c0ed94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12c0ed98:;
  /* 12c0ed98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ed9c je 0x12c0edf7 */
  if (C.zf) goto L_12c0edf7;
  /* 12c0ed9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c0eda0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0eda3 push edx */
  push32((uint32_t)(EDX));
  /* 12c0eda4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12c0eda9 mov eax, dword ptr [0x12c2e6fc] */
  EAX = (r32((uint32_t)(0x12c2e6fc)));
  /* 12c0edae push eax */
  push32((uint32_t)(EAX));
  /* 12c0edaf call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0edb5u);
  /* 12c0edb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0edb7 jne 0x12c0edbd */
  if (!C.zf) goto L_12c0edbd;
  /* 12c0edb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0edbb jmp 0x12c0edfc */
  goto L_12c0edfc;
L_12c0edbd:;
  /* 12c0edbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c0edbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0edc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0edc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0edc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12c0edcb mov edx, dword ptr [0x12c2e718] */
  EDX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0edd1 push edx */
  push32((uint32_t)(EDX));
  /* 12c0edd2 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0edd8u);
  /* 12c0edd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0edda jne 0x12c0ede0 */
  if (!C.zf) goto L_12c0ede0;
  /* 12c0eddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0edde jmp 0x12c0edfc */
  goto L_12c0edfc;
L_12c0ede0:;
  /* 12c0ede0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c0ede2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ede5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0edea push eax */
  push32((uint32_t)(EAX));
  /* 12c0edeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0edee push ecx */
  push32((uint32_t)(ECX));
  /* 12c0edef call 0x12c05960 */
  push32(0x12c0edf4u); f_12c05960();
  /* 12c0edf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0edf7:;
  /* 12c0edf7 mov eax, 1 */
  EAX = (0x1u);
L_12c0edfc:;
  /* 12c0edfc mov esp, ebp */
  ESP = (EBP);
  /* 12c0edfe pop ebp */
  EBP = (pop32());
  /* 12c0edff ret  */
  ESPCHK(0x12c0ec00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x12c0ee00 (130 bytes, 47 insns) */
void f_12c0ee00(void) {
  FTRACE(0x12c0ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ee01 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ee03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ee06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c0ee0d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12c0ee14:;
  /* 12c0ee14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ee17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ee1a jg 0x12c0ee7e */
  if ((!C.zf&&C.sf==C.of)) goto L_12c0ee7e;
  /* 12c0ee1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ee20 je 0x12c0ee7e */
  if (C.zf) goto L_12c0ee7e;
  /* 12c0ee22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0ee25 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ee28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c0ee29 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ee2b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c0ee2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0ee30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ee33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ee36 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12c0ee39 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ee3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ee3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0ee3f push edx */
  push32((uint32_t)(EDX));
  /* 12c0ee40 call 0x12c114f0 */
  push32(0x12c0ee45u); f_12c114f0();
  /* 12c0ee45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ee48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0ee4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ee4f jne 0x12c0ee62 */
  if (!C.zf) goto L_12c0ee62;
  /* 12c0ee51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ee54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ee57 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12c0ee5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0ee5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c0ee60 jmp 0x12c0ee7c */
  goto L_12c0ee7c;
L_12c0ee62:;
  /* 12c0ee62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0ee66 jge 0x12c0ee73 */
  if ((C.sf==C.of)) goto L_12c0ee73;
  /* 12c0ee68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ee6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ee6e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c0ee71 jmp 0x12c0ee7c */
  goto L_12c0ee7c;
L_12c0ee73:;
  /* 12c0ee73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0ee76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ee79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c0ee7c:;
  /* 12c0ee7c jmp 0x12c0ee14 */
  goto L_12c0ee14;
L_12c0ee7e:;
  /* 12c0ee7e mov esp, ebp */
  ESP = (EBP);
  /* 12c0ee80 pop ebp */
  EBP = (pop32());
  /* 12c0ee81 ret  */
  ESPCHK(0x12c0ee00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee90 @ 0x12c0ee90 (186 bytes, 50 insns) */
void f_12c0ee90(void) {
  FTRACE(0x12c0ee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ee90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ee91 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ee93 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ee94 mov eax, dword ptr [0x12c2e70c] */
  EAX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0ee99 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ee9a call 0x12c05c50 */
  push32(0x12c0ee9fu); f_12c05c50();
  /* 12c0ee9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0eea4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0eea7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c0eeaa mov dword ptr [0x12c2e708], ecx */
  w32((uint32_t)(0x12c2e708), (ECX));
  /* 12c0eeb0 mov edx, dword ptr [0x12c2e710] */
  EDX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0eeb6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0eeb7 call 0x12c05c50 */
  push32(0x12c0eebcu); f_12c05c50();
  /* 12c0eebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0eec1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0eec4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c0eec7 mov dword ptr [0x12c2e700], ecx */
  w32((uint32_t)(0x12c2e700), (ECX));
  /* 12c0eecd mov dword ptr [0x12c2e6fc], 0 */
  w32((uint32_t)(0x12c2e6fc), (0x0u));
  /* 12c0eed7 cmp dword ptr [0x12c2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0eede je 0x12c0eee9 */
  if (C.zf) goto L_12c0eee9;
  /* 12c0eee0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c0eee7 jmp 0x12c0eefb */
  goto L_12c0eefb;
L_12c0eee9:;
  /* 12c0eee9 mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0eeef push edx */
  push32((uint32_t)(EDX));
  /* 12c0eef0 call 0x12c0f930 */
  push32(0x12c0eef5u); f_12c0f930();
  /* 12c0eef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0eef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0eefb:;
  /* 12c0eefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0eefe mov dword ptr [0x12c2e704], eax */
  w32((uint32_t)(0x12c2e704), (EAX));
  /* 12c0ef03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0ef05 push 0x12c0ef50 */
  push32((uint32_t)(0x12c0ef50u));
  /* 12c0ef0a call dword ptr [0x12c3026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3026c))), 0x12c0ef10u);
  /* 12c0ef10 mov ecx, dword ptr [0x12c2e714] */
  ECX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0ef16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0ef1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0ef1e je 0x12c0ef3c */
  if (C.zf) goto L_12c0ef3c;
  /* 12c0ef20 mov edx, dword ptr [0x12c2e714] */
  EDX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0ef26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0ef2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0ef2e je 0x12c0ef3c */
  if (C.zf) goto L_12c0ef3c;
  /* 12c0ef30 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0ef35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0ef38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ef3a jne 0x12c0ef46 */
  if (!C.zf) goto L_12c0ef46;
L_12c0ef3c:;
  /* 12c0ef3c mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
L_12c0ef46:;
  /* 12c0ef46 mov esp, ebp */
  ESP = (EBP);
  /* 12c0ef48 pop ebp */
  EBP = (pop32());
  /* 12c0ef49 ret  */
  ESPCHK(0x12c0ee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x12c0ef50 (804 bytes, 220 insns) */
void f_12c0ef50(void) {
  FTRACE(0x12c0ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0ef51 mov ebp, esp */
  EBP = (ESP);
  /* 12c0ef53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ef56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0ef59 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ef5a call 0x12c0f8b0 */
  push32(0x12c0ef5fu); f_12c0f8b0();
  /* 12c0ef5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ef62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12c0ef65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c0ef67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0ef6a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0ef6b mov edx, dword ptr [0x12c2e700] */
  EDX = (r32((uint32_t)(0x12c2e700)));
  /* 12c0ef71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0ef73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0ef75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0ef7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0ef81 push edx */
  push32((uint32_t)(EDX));
  /* 12c0ef82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0ef85 push eax */
  push32((uint32_t)(EAX));
  /* 12c0ef86 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0ef8cu);
  /* 12c0ef8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0ef8e jne 0x12c0efa4 */
  if (!C.zf) goto L_12c0efa4;
  /* 12c0ef90 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
  /* 12c0ef9a mov eax, 1 */
  EAX = (0x1u);
  /* 12c0ef9f jmp 0x12c0f26e */
  goto L_12c0f26e;
L_12c0efa4:;
  /* 12c0efa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0efa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0efa8 mov edx, dword ptr [0x12c2e710] */
  EDX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0efae push edx */
  push32((uint32_t)(EDX));
  /* 12c0efaf call 0x12c114f0 */
  push32(0x12c0efb4u); f_12c114f0();
  /* 12c0efb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0efb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0efb9 jne 0x12c0f0df */
  if (!C.zf) goto L_12c0f0df;
  /* 12c0efbf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c0efc1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c0efc4 push eax */
  push32((uint32_t)(EAX));
  /* 12c0efc5 mov ecx, dword ptr [0x12c2e708] */
  ECX = (r32((uint32_t)(0x12c2e708)));
  /* 12c0efcb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0efcd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0efcf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0efd5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0efdb push ecx */
  push32((uint32_t)(ECX));
  /* 12c0efdc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0efdf push edx */
  push32((uint32_t)(EDX));
  /* 12c0efe0 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0efe6u);
  /* 12c0efe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0efe8 jne 0x12c0effe */
  if (!C.zf) goto L_12c0effe;
  /* 12c0efea mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
  /* 12c0eff4 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0eff9 jmp 0x12c0f26e */
  goto L_12c0f26e;
L_12c0effe:;
  /* 12c0effe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c0f001 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f002 mov ecx, dword ptr [0x12c2e70c] */
  ECX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f008 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f009 call 0x12c114f0 */
  push32(0x12c0f00eu); f_12c114f0();
  /* 12c0f00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f013 jne 0x12c0f040 */
  if (!C.zf) goto L_12c0f040;
  /* 12c0f015 mov edx, dword ptr [0x12c2e714] */
  EDX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f01b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f021 mov dword ptr [0x12c2e714], edx */
  w32((uint32_t)(0x12c2e714), (EDX));
  /* 12c0f027 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f02a mov dword ptr [0x12c2e718], eax */
  w32((uint32_t)(0x12c2e718), (EAX));
  /* 12c0f02f mov ecx, dword ptr [0x12c2e718] */
  ECX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f035 mov dword ptr [0x12c2e6fc], ecx */
  w32((uint32_t)(0x12c2e6fc), (ECX));
  /* 12c0f03b jmp 0x12c0f0df */
  goto L_12c0f0df;
L_12c0f040:;
  /* 12c0f040 mov edx, dword ptr [0x12c2e714] */
  EDX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f046 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0f04b jne 0x12c0f0df */
  if (!C.zf) goto L_12c0f0df;
  /* 12c0f051 cmp dword ptr [0x12c2e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f058 je 0x12c0f0ad */
  if (C.zf) goto L_12c0f0ad;
  /* 12c0f05a mov eax, dword ptr [0x12c2e704] */
  EAX = (r32((uint32_t)(0x12c2e704)));
  /* 12c0f05f push eax */
  push32((uint32_t)(EAX));
  /* 12c0f060 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0f063 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f064 mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f06a push edx */
  push32((uint32_t)(EDX));
  /* 12c0f06b call 0x12c115c0 */
  push32(0x12c0f070u); f_12c115c0();
  /* 12c0f070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f075 jne 0x12c0f0ad */
  if (!C.zf) goto L_12c0f0ad;
  /* 12c0f077 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f07c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12c0f07e mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
  /* 12c0f083 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f086 mov dword ptr [0x12c2e718], ecx */
  w32((uint32_t)(0x12c2e718), (ECX));
  /* 12c0f08c mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f092 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f093 call 0x12c05c50 */
  push32(0x12c0f098u); f_12c05c50();
  /* 12c0f098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f09b cmp eax, dword ptr [0x12c2e704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2e704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f0a1 jne 0x12c0f0ab */
  if (!C.zf) goto L_12c0f0ab;
  /* 12c0f0a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f0a6 mov dword ptr [0x12c2e6fc], eax */
  w32((uint32_t)(0x12c2e6fc), (EAX));
L_12c0f0ab:;
  /* 12c0f0ab jmp 0x12c0f0df */
  goto L_12c0f0df;
L_12c0f0ad:;
  /* 12c0f0ad mov ecx, dword ptr [0x12c2e714] */
  ECX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f0b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f0b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0f0b8 jne 0x12c0f0df */
  if (!C.zf) goto L_12c0f0df;
  /* 12c0f0ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f0bd push edx */
  push32((uint32_t)(EDX));
  /* 12c0f0be call 0x12c0f5f0 */
  push32(0x12c0f0c3u); f_12c0f5f0();
  /* 12c0f0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f0c8 je 0x12c0f0df */
  if (C.zf) goto L_12c0f0df;
  /* 12c0f0ca mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f0cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12c0f0d1 mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
  /* 12c0f0d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f0d9 mov dword ptr [0x12c2e718], ecx */
  w32((uint32_t)(0x12c2e718), (ECX));
L_12c0f0df:;
  /* 12c0f0df mov edx, dword ptr [0x12c2e714] */
  EDX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f0e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f0eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f0f1 je 0x12c0f261 */
  if (C.zf) goto L_12c0f261;
  /* 12c0f0f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c0f0f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c0f0fc push eax */
  push32((uint32_t)(EAX));
  /* 12c0f0fd mov ecx, dword ptr [0x12c2e708] */
  ECX = (r32((uint32_t)(0x12c2e708)));
  /* 12c0f103 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0f105 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f107 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f10d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f113 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f114 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f117 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f118 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0f11eu);
  /* 12c0f11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f120 jne 0x12c0f136 */
  if (!C.zf) goto L_12c0f136;
  /* 12c0f122 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
  /* 12c0f12c mov eax, 1 */
  EAX = (0x1u);
  /* 12c0f131 jmp 0x12c0f26e */
  goto L_12c0f26e;
L_12c0f136:;
  /* 12c0f136 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c0f139 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f13a mov ecx, dword ptr [0x12c2e70c] */
  ECX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f140 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f141 call 0x12c114f0 */
  push32(0x12c0f146u); f_12c114f0();
  /* 12c0f146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f14b jne 0x12c0f200 */
  if (!C.zf) goto L_12c0f200;
  /* 12c0f151 mov edx, dword ptr [0x12c2e714] */
  EDX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f157 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c0f15a mov dword ptr [0x12c2e714], edx */
  w32((uint32_t)(0x12c2e714), (EDX));
  /* 12c0f160 cmp dword ptr [0x12c2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f167 je 0x12c0f18a */
  if (C.zf) goto L_12c0f18a;
  /* 12c0f169 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f16e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12c0f171 mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
  /* 12c0f176 cmp dword ptr [0x12c2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f17d jne 0x12c0f188 */
  if (!C.zf) goto L_12c0f188;
  /* 12c0f17f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f182 mov dword ptr [0x12c2e6fc], ecx */
  w32((uint32_t)(0x12c2e6fc), (ECX));
L_12c0f188:;
  /* 12c0f188 jmp 0x12c0f1fe */
  goto L_12c0f1fe;
L_12c0f18a:;
  /* 12c0f18a cmp dword ptr [0x12c2e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f191 je 0x12c0f1df */
  if (C.zf) goto L_12c0f1df;
  /* 12c0f193 mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f199 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f19a call 0x12c05c50 */
  push32(0x12c0f19fu); f_12c05c50();
  /* 12c0f19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f1a2 cmp eax, dword ptr [0x12c2e704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2e704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f1a8 jne 0x12c0f1df */
  if (!C.zf) goto L_12c0f1df;
  /* 12c0f1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0f1ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f1af push eax */
  push32((uint32_t)(EAX));
  /* 12c0f1b0 call 0x12c0f640 */
  push32(0x12c0f1b5u); f_12c0f640();
  /* 12c0f1b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f1ba je 0x12c0f1dd */
  if (C.zf) goto L_12c0f1dd;
  /* 12c0f1bc mov ecx, dword ptr [0x12c2e714] */
  ECX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f1c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c0f1c5 mov dword ptr [0x12c2e714], ecx */
  w32((uint32_t)(0x12c2e714), (ECX));
  /* 12c0f1cb cmp dword ptr [0x12c2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f1d2 jne 0x12c0f1dd */
  if (!C.zf) goto L_12c0f1dd;
  /* 12c0f1d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f1d7 mov dword ptr [0x12c2e6fc], edx */
  w32((uint32_t)(0x12c2e6fc), (EDX));
L_12c0f1dd:;
  /* 12c0f1dd jmp 0x12c0f1fe */
  goto L_12c0f1fe;
L_12c0f1df:;
  /* 12c0f1df mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f1e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12c0f1e7 mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
  /* 12c0f1ec cmp dword ptr [0x12c2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f1f3 jne 0x12c0f1fe */
  if (!C.zf) goto L_12c0f1fe;
  /* 12c0f1f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f1f8 mov dword ptr [0x12c2e6fc], ecx */
  w32((uint32_t)(0x12c2e6fc), (ECX));
L_12c0f1fe:;
  /* 12c0f1fe jmp 0x12c0f261 */
  goto L_12c0f261;
L_12c0f200:;
  /* 12c0f200 cmp dword ptr [0x12c2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f207 jne 0x12c0f261 */
  if (!C.zf) goto L_12c0f261;
  /* 12c0f209 cmp dword ptr [0x12c2e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f210 je 0x12c0f261 */
  if (C.zf) goto L_12c0f261;
  /* 12c0f212 mov edx, dword ptr [0x12c2e704] */
  EDX = (r32((uint32_t)(0x12c2e704)));
  /* 12c0f218 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c0f21c push eax */
  push32((uint32_t)(EAX));
  /* 12c0f21d mov ecx, dword ptr [0x12c2e70c] */
  ECX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f223 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f224 call 0x12c115c0 */
  push32(0x12c0f229u); f_12c115c0();
  /* 12c0f229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f22e jne 0x12c0f261 */
  if (!C.zf) goto L_12c0f261;
  /* 12c0f230 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0f232 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f235 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f236 call 0x12c0f640 */
  push32(0x12c0f23bu); f_12c0f640();
  /* 12c0f23b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f240 je 0x12c0f261 */
  if (C.zf) goto L_12c0f261;
  /* 12c0f242 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f247 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12c0f24a mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
  /* 12c0f24f cmp dword ptr [0x12c2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f256 jne 0x12c0f261 */
  if (!C.zf) goto L_12c0f261;
  /* 12c0f258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f25b mov dword ptr [0x12c2e6fc], ecx */
  w32((uint32_t)(0x12c2e6fc), (ECX));
L_12c0f261:;
  /* 12c0f261 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f269 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0f26b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f26d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c0f26e:;
  /* 12c0f26e mov esp, ebp */
  ESP = (EBP);
  /* 12c0f270 pop ebp */
  EBP = (pop32());
  /* 12c0f271 ret 4 */
  ESPCHK(0x12c0ef50u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f280 @ 0x12c0f280 (116 bytes, 33 insns) */
void f_12c0f280(void) {
  FTRACE(0x12c0f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f280 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f281 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f283 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f284 mov eax, dword ptr [0x12c2e70c] */
  EAX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f289 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f28a call 0x12c05c50 */
  push32(0x12c0f28fu); f_12c05c50();
  /* 12c0f28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f294 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f297 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c0f29a mov dword ptr [0x12c2e708], ecx */
  w32((uint32_t)(0x12c2e708), (ECX));
  /* 12c0f2a0 cmp dword ptr [0x12c2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f2a7 je 0x12c0f2b2 */
  if (C.zf) goto L_12c0f2b2;
  /* 12c0f2a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c0f2b0 jmp 0x12c0f2c4 */
  goto L_12c0f2c4;
L_12c0f2b2:;
  /* 12c0f2b2 mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f2b8 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f2b9 call 0x12c0f930 */
  push32(0x12c0f2beu); f_12c0f930();
  /* 12c0f2be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0f2c4:;
  /* 12c0f2c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0f2c7 mov dword ptr [0x12c2e704], eax */
  w32((uint32_t)(0x12c2e704), (EAX));
  /* 12c0f2cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0f2ce push 0x12c0f300 */
  push32((uint32_t)(0x12c0f300u));
  /* 12c0f2d3 call dword ptr [0x12c3026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3026c))), 0x12c0f2d9u);
  /* 12c0f2d9 mov ecx, dword ptr [0x12c2e714] */
  ECX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f2df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f2e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0f2e4 jne 0x12c0f2f0 */
  if (!C.zf) goto L_12c0f2f0;
  /* 12c0f2e6 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
L_12c0f2f0:;
  /* 12c0f2f0 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f2f2 pop ebp */
  EBP = (pop32());
  /* 12c0f2f3 ret  */
  ESPCHK(0x12c0f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f300 @ 0x12c0f300 (287 bytes, 86 insns) */
void f_12c0f300(void) {
  FTRACE(0x12c0f300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f300 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f301 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f303 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f309 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f30a call 0x12c0f8b0 */
  push32(0x12c0f30fu); f_12c0f8b0();
  /* 12c0f30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f312 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12c0f315 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c0f317 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0f31a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f31b mov edx, dword ptr [0x12c2e708] */
  EDX = (r32((uint32_t)(0x12c2e708)));
  /* 12c0f321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0f323 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f325 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f32b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f331 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f332 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f335 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f336 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0f33cu);
  /* 12c0f33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f33e jne 0x12c0f354 */
  if (!C.zf) goto L_12c0f354;
  /* 12c0f340 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
  /* 12c0f34a mov eax, 1 */
  EAX = (0x1u);
  /* 12c0f34f jmp 0x12c0f419 */
  goto L_12c0f419;
L_12c0f354:;
  /* 12c0f354 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0f357 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f358 mov edx, dword ptr [0x12c2e70c] */
  EDX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f35e push edx */
  push32((uint32_t)(EDX));
  /* 12c0f35f call 0x12c114f0 */
  push32(0x12c0f364u); f_12c114f0();
  /* 12c0f364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f369 jne 0x12c0f3a9 */
  if (!C.zf) goto L_12c0f3a9;
  /* 12c0f36b cmp dword ptr [0x12c2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f372 jne 0x12c0f386 */
  if (!C.zf) goto L_12c0f386;
  /* 12c0f374 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0f376 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f379 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f37a call 0x12c0f640 */
  push32(0x12c0f37fu); f_12c0f640();
  /* 12c0f37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f384 je 0x12c0f3a7 */
  if (C.zf) goto L_12c0f3a7;
L_12c0f386:;
  /* 12c0f386 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f389 mov dword ptr [0x12c2e718], ecx */
  w32((uint32_t)(0x12c2e718), (ECX));
  /* 12c0f38f mov edx, dword ptr [0x12c2e718] */
  EDX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f395 mov dword ptr [0x12c2e6fc], edx */
  w32((uint32_t)(0x12c2e6fc), (EDX));
  /* 12c0f39b mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f3a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c0f3a2 mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
L_12c0f3a7:;
  /* 12c0f3a7 jmp 0x12c0f40c */
  goto L_12c0f40c;
L_12c0f3a9:;
  /* 12c0f3a9 cmp dword ptr [0x12c2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f3b0 jne 0x12c0f40c */
  if (!C.zf) goto L_12c0f40c;
  /* 12c0f3b2 cmp dword ptr [0x12c2e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f3b9 je 0x12c0f40c */
  if (C.zf) goto L_12c0f40c;
  /* 12c0f3bb mov ecx, dword ptr [0x12c2e704] */
  ECX = (r32((uint32_t)(0x12c2e704)));
  /* 12c0f3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f3c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12c0f3c5 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f3c6 mov eax, dword ptr [0x12c2e70c] */
  EAX = (r32((uint32_t)(0x12c2e70c)));
  /* 12c0f3cb push eax */
  push32((uint32_t)(EAX));
  /* 12c0f3cc call 0x12c115c0 */
  push32(0x12c0f3d1u); f_12c115c0();
  /* 12c0f3d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f3d6 jne 0x12c0f40c */
  if (!C.zf) goto L_12c0f40c;
  /* 12c0f3d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0f3da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f3dd push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f3de call 0x12c0f640 */
  push32(0x12c0f3e3u); f_12c0f640();
  /* 12c0f3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f3e8 je 0x12c0f40c */
  if (C.zf) goto L_12c0f40c;
  /* 12c0f3ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f3ed mov dword ptr [0x12c2e718], edx */
  w32((uint32_t)(0x12c2e718), (EDX));
  /* 12c0f3f3 mov eax, dword ptr [0x12c2e718] */
  EAX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f3f8 mov dword ptr [0x12c2e6fc], eax */
  w32((uint32_t)(0x12c2e6fc), (EAX));
  /* 12c0f3fd mov ecx, dword ptr [0x12c2e714] */
  ECX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f403 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f406 mov dword ptr [0x12c2e714], ecx */
  w32((uint32_t)(0x12c2e714), (ECX));
L_12c0f40c:;
  /* 12c0f40c mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0f416 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f418 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c0f419:;
  /* 12c0f419 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f41b pop ebp */
  EBP = (pop32());
  /* 12c0f41c ret 4 */
  ESPCHK(0x12c0f300u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f420 @ 0x12c0f420 (69 bytes, 20 insns) */
void f_12c0f420(void) {
  FTRACE(0x12c0f420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f420 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f421 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f423 mov eax, dword ptr [0x12c2e710] */
  EAX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0f428 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f429 call 0x12c05c50 */
  push32(0x12c0f42eu); f_12c05c50();
  /* 12c0f42e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f433 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f436 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c0f439 mov dword ptr [0x12c2e700], ecx */
  w32((uint32_t)(0x12c2e700), (ECX));
  /* 12c0f43f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0f441 push 0x12c0f470 */
  push32((uint32_t)(0x12c0f470u));
  /* 12c0f446 call dword ptr [0x12c3026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3026c))), 0x12c0f44cu);
  /* 12c0f44c mov edx, dword ptr [0x12c2e714] */
  EDX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f452 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0f457 jne 0x12c0f463 */
  if (!C.zf) goto L_12c0f463;
  /* 12c0f459 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
L_12c0f463:;
  /* 12c0f463 pop ebp */
  EBP = (pop32());
  /* 12c0f464 ret  */
  ESPCHK(0x12c0f420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x12c0f470 (172 bytes, 54 insns) */
void f_12c0f470(void) {
  FTRACE(0x12c0f470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f470 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f471 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f473 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f479 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f47a call 0x12c0f8b0 */
  push32(0x12c0f47fu); f_12c0f8b0();
  /* 12c0f47f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f482 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12c0f485 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c0f487 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0f48a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f48b mov edx, dword ptr [0x12c2e700] */
  EDX = (r32((uint32_t)(0x12c2e700)));
  /* 12c0f491 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0f493 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f495 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f49b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f4a1 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f4a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f4a5 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f4a6 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0f4acu);
  /* 12c0f4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f4ae jne 0x12c0f4c1 */
  if (!C.zf) goto L_12c0f4c1;
  /* 12c0f4b0 mov dword ptr [0x12c2e714], 0 */
  w32((uint32_t)(0x12c2e714), (0x0u));
  /* 12c0f4ba mov eax, 1 */
  EAX = (0x1u);
  /* 12c0f4bf jmp 0x12c0f516 */
  goto L_12c0f516;
L_12c0f4c1:;
  /* 12c0f4c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c0f4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f4c5 mov edx, dword ptr [0x12c2e710] */
  EDX = (r32((uint32_t)(0x12c2e710)));
  /* 12c0f4cb push edx */
  push32((uint32_t)(EDX));
  /* 12c0f4cc call 0x12c114f0 */
  push32(0x12c0f4d1u); f_12c114f0();
  /* 12c0f4d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f4d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f4d6 jne 0x12c0f509 */
  if (!C.zf) goto L_12c0f509;
  /* 12c0f4d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f4db push eax */
  push32((uint32_t)(EAX));
  /* 12c0f4dc call 0x12c0f5f0 */
  push32(0x12c0f4e1u); f_12c0f5f0();
  /* 12c0f4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f4e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f4e6 je 0x12c0f509 */
  if (C.zf) goto L_12c0f509;
  /* 12c0f4e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c0f4eb mov dword ptr [0x12c2e718], ecx */
  w32((uint32_t)(0x12c2e718), (ECX));
  /* 12c0f4f1 mov edx, dword ptr [0x12c2e718] */
  EDX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f4f7 mov dword ptr [0x12c2e6fc], edx */
  w32((uint32_t)(0x12c2e6fc), (EDX));
  /* 12c0f4fd mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f502 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c0f504 mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
L_12c0f509:;
  /* 12c0f509 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f50e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f511 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c0f513 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f515 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c0f516:;
  /* 12c0f516 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f518 pop ebp */
  EBP = (pop32());
  /* 12c0f519 ret 4 */
  ESPCHK(0x12c0f470u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f520 @ 0x12c0f520 (43 bytes, 11 insns) */
void f_12c0f520(void) {
  FTRACE(0x12c0f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f520 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f521 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f523 mov eax, dword ptr [0x12c2e714] */
  EAX = (r32((uint32_t)(0x12c2e714)));
  /* 12c0f528 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f52d mov dword ptr [0x12c2e714], eax */
  w32((uint32_t)(0x12c2e714), (EAX));
  /* 12c0f532 call dword ptr [0x12c3025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3025c))), 0x12c0f538u);
  /* 12c0f538 mov dword ptr [0x12c2e718], eax */
  w32((uint32_t)(0x12c2e718), (EAX));
  /* 12c0f53d mov ecx, dword ptr [0x12c2e718] */
  ECX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f543 mov dword ptr [0x12c2e6fc], ecx */
  w32((uint32_t)(0x12c2e6fc), (ECX));
  /* 12c0f549 pop ebp */
  EBP = (pop32());
  /* 12c0f54a ret  */
  ESPCHK(0x12c0f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x12c0f550 (155 bytes, 57 insns) */
void f_12c0f550(void) {
  FTRACE(0x12c0f550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f550 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f551 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f55a je 0x12c0f57b */
  if (C.zf) goto L_12c0f57b;
  /* 12c0f55c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f55f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c0f562 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0f564 je 0x12c0f57b */
  if (C.zf) goto L_12c0f57b;
  /* 12c0f566 push 0x12c2a6c4 */
  push32((uint32_t)(0x12c2a6c4u));
  /* 12c0f56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f56e push edx */
  push32((uint32_t)(EDX));
  /* 12c0f56f call 0x12c0eab0 */
  push32(0x12c0f574u); f_12c0eab0();
  /* 12c0f574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f579 jne 0x12c0f5a3 */
  if (!C.zf) goto L_12c0f5a3;
L_12c0f57b:;
  /* 12c0f57b push 8 */
  push32((uint32_t)(0x8u));
  /* 12c0f57d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c0f580 push eax */
  push32((uint32_t)(EAX));
  /* 12c0f581 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12c0f586 mov ecx, dword ptr [0x12c2e718] */
  ECX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f58c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f58d call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0f593u);
  /* 12c0f593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f595 jne 0x12c0f59b */
  if (!C.zf) goto L_12c0f59b;
  /* 12c0f597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f599 jmp 0x12c0f5e7 */
  goto L_12c0f5e7;
L_12c0f59b:;
  /* 12c0f59b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12c0f59e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c0f5a1 jmp 0x12c0f5db */
  goto L_12c0f5db;
L_12c0f5a3:;
  /* 12c0f5a3 push 0x12c2a6c0 */
  push32((uint32_t)(0x12c2a6c0u));
  /* 12c0f5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f5ab push eax */
  push32((uint32_t)(EAX));
  /* 12c0f5ac call 0x12c0eab0 */
  push32(0x12c0f5b1u); f_12c0eab0();
  /* 12c0f5b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f5b6 jne 0x12c0f5db */
  if (!C.zf) goto L_12c0f5db;
  /* 12c0f5b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c0f5ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c0f5bd push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f5be push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c0f5c0 mov edx, dword ptr [0x12c2e718] */
  EDX = (r32((uint32_t)(0x12c2e718)));
  /* 12c0f5c6 push edx */
  push32((uint32_t)(EDX));
  /* 12c0f5c7 call dword ptr [0x12c2e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e71c))), 0x12c0f5cdu);
  /* 12c0f5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0f5cf jne 0x12c0f5d5 */
  if (!C.zf) goto L_12c0f5d5;
  /* 12c0f5d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f5d3 jmp 0x12c0f5e7 */
  goto L_12c0f5e7;
L_12c0f5d5:;
  /* 12c0f5d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c0f5d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c0f5db:;
  /* 12c0f5db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0f5de push ecx */
  push32((uint32_t)(ECX));
  /* 12c0f5df call 0x12c116d0 */
  push32(0x12c0f5e4u); f_12c116d0();
  /* 12c0f5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0f5e7:;
  /* 12c0f5e7 mov esp, ebp */
  ESP = (EBP);
  /* 12c0f5e9 pop ebp */
  EBP = (pop32());
  /* 12c0f5ea ret  */
  ESPCHK(0x12c0f550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x12c0f5f0 (79 bytes, 26 insns) */
void f_12c0f5f0(void) {
  FTRACE(0x12c0f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c0f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c0f5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0f5f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12c0f5fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12c0f5fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c0f605 jmp 0x12c0f610 */
  goto L_12c0f610;
L_12c0f607:;
  /* 12c0f607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0f60a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0f60d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c0f610:;
  /* 12c0f610 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f614 jae 0x12c0f636 */
  if (!C.cf) goto L_12c0f636;
  /* 12c0f616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0f619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0f61f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0f622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0f624 mov cx, word ptr [eax*2 + 0x12c2d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12c2d9c4)));
  /* 12c0f62c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0f62e jne 0x12c0f634 */
  if (!C.zf) goto L_12c0f634;
  /* 12c0f630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0f632 jmp 0x12c0f63b */
  goto L_12c0f63b;
L_12c0f634:;
  /* 12c0f634 jmp 0x12c0f607 */
  goto L_12c0f607;
L_12c0f636:;
  /* 12c0f636 mov eax, 1 */
  EAX = (0x1u);
L_12c0f63b:;
  /* 12c0f63b mov esp, ebp */
  ESP = (EBP);
  /* 12c0f63d pop ebp */
  EBP = (pop32());
  /* 12c0f63e ret  */
  ESPCHK(0x12c0f5f0u, _esp0);
  ESP += 4; return;
}

