#include "recomp.h"

/* FUN_10006b50 @ 0x12e36b50 (10 bytes, 5 insns) */
void f_12e36b50(void) {
  FTRACE(0x12e36b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36b51 mov ebp, esp */
  EBP = (ESP);
  /* 12e36b53 mov eax, dword ptr [0x12e5e67c] */
  EAX = (r32((uint32_t)(0x12e5e67c)));
  /* 12e36b58 pop ebp */
  EBP = (pop32());
  /* 12e36b59 ret  */
  ESPCHK(0x12e36b50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12e36b60 (45 bytes, 19 insns) */
void f_12e36b60(void) {
  FTRACE(0x12e36b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36b61 mov ebp, esp */
  EBP = (ESP);
  /* 12e36b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36b64 mov eax, dword ptr [0x12e5e67c] */
  EAX = (r32((uint32_t)(0x12e5e67c)));
  /* 12e36b69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36b6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36b70 je 0x12e36b80 */
  if (C.zf) goto L_12e36b80;
  /* 12e36b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36b75 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36b76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12e36b79u);
  /* 12e36b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e36b7e jne 0x12e36b84 */
  if (!C.zf) goto L_12e36b84;
L_12e36b80:;
  /* 12e36b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36b82 jmp 0x12e36b89 */
  goto L_12e36b89;
L_12e36b84:;
  /* 12e36b84 mov eax, 1 */
  EAX = (0x1u);
L_12e36b89:;
  /* 12e36b89 mov esp, ebp */
  ESP = (EBP);
  /* 12e36b8b pop ebp */
  EBP = (pop32());
  /* 12e36b8c ret  */
  ESPCHK(0x12e36b60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12e36b90 (88 bytes, 40 insns) */
void f_12e36b90(void) {
  FTRACE(0x12e36b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36b90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e36b94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e36b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e36b9a je 0x12e36be3 */
  if (C.zf) goto L_12e36be3;
  /* 12e36b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36b9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12e36ba2 push edi */
  push32((uint32_t)(EDI));
  /* 12e36ba3 mov edi, ecx */
  EDI = (ECX);
  /* 12e36ba5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36ba8 jb 0x12e36bd7 */
  if (C.cf) goto L_12e36bd7;
  /* 12e36baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e36bac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12e36baf je 0x12e36bb9 */
  if (C.zf) goto L_12e36bb9;
  /* 12e36bb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12e36bb3:;
  /* 12e36bb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e36bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e36bb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e36bb7 jne 0x12e36bb3 */
  if (!C.zf) goto L_12e36bb3;
L_12e36bb9:;
  /* 12e36bb9 mov ecx, eax */
  ECX = (EAX);
  /* 12e36bbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e36bbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36bc0 mov ecx, eax */
  ECX = (EAX);
  /* 12e36bc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e36bc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36bc7 mov ecx, edx */
  ECX = (EDX);
  /* 12e36bc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e36bcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e36bcf je 0x12e36bd7 */
  if (C.zf) goto L_12e36bd7;
  /* 12e36bd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e36bd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e36bd5 je 0x12e36bdd */
  if (C.zf) goto L_12e36bdd;
L_12e36bd7:;
  /* 12e36bd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e36bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e36bda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12e36bdb jne 0x12e36bd7 */
  if (!C.zf) goto L_12e36bd7;
L_12e36bdd:;
  /* 12e36bdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e36be1 pop edi */
  EDI = (pop32());
  /* 12e36be2 ret  */
  ESPCHK(0x12e36b90u, _esp0);
  ESP += 4; return;
L_12e36be3:;
  /* 12e36be3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e36be7 ret  */
  ESPCHK(0x12e36b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x12e36bf0 (23 bytes, 10 insns) */
void f_12e36bf0(void) {
  FTRACE(0x12e36bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e36bf3 mov eax, dword ptr [0x12e5e678] */
  EAX = (r32((uint32_t)(0x12e5e678)));
  /* 12e36bf8 push eax */
  push32((uint32_t)(EAX));
  /* 12e36bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36bfc push ecx */
  push32((uint32_t)(ECX));
  /* 12e36bfd call 0x12e36c10 */
  push32(0x12e36c02u); f_12e36c10();
  /* 12e36c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36c05 pop ebp */
  EBP = (pop32());
  /* 12e36c06 ret  */
  ESPCHK(0x12e36bf0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12e36c10 (87 bytes, 34 insns) */
void f_12e36c10(void) {
  FTRACE(0x12e36c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36c11 mov ebp, esp */
  EBP = (ESP);
  /* 12e36c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36c14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36c18 jbe 0x12e36c1e */
  if ((C.cf||C.zf)) goto L_12e36c1e;
  /* 12e36c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36c1c jmp 0x12e36c63 */
  goto L_12e36c63;
L_12e36c1e:;
  /* 12e36c1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36c22 ja 0x12e36c35 */
  if ((!C.cf&&!C.zf)) goto L_12e36c35;
  /* 12e36c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36c27 push eax */
  push32((uint32_t)(EAX));
  /* 12e36c28 call 0x12e36c70 */
  push32(0x12e36c2du); f_12e36c70();
  /* 12e36c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36c33 jmp 0x12e36c3c */
  goto L_12e36c3c;
L_12e36c35:;
  /* 12e36c35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e36c3c:;
  /* 12e36c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36c40 jne 0x12e36c48 */
  if (!C.zf) goto L_12e36c48;
  /* 12e36c42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36c46 jne 0x12e36c4d */
  if (!C.zf) goto L_12e36c4d;
L_12e36c48:;
  /* 12e36c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36c4b jmp 0x12e36c63 */
  goto L_12e36c63;
L_12e36c4d:;
  /* 12e36c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36c51 call 0x12e36b60 */
  push32(0x12e36c56u); f_12e36b60();
  /* 12e36c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e36c5b jne 0x12e36c61 */
  if (!C.zf) goto L_12e36c61;
  /* 12e36c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36c5f jmp 0x12e36c63 */
  goto L_12e36c63;
L_12e36c61:;
  /* 12e36c61 jmp 0x12e36c1e */
  goto L_12e36c1e;
L_12e36c63:;
  /* 12e36c63 mov esp, ebp */
  ESP = (EBP);
  /* 12e36c65 pop ebp */
  EBP = (pop32());
  /* 12e36c66 ret  */
  ESPCHK(0x12e36c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x12e36c70 (109 bytes, 37 insns) */
void f_12e36c70(void) {
  FTRACE(0x12e36c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36c71 mov ebp, esp */
  EBP = (ESP);
  /* 12e36c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36c77 cmp eax, dword ptr [0x12e5cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36c7d ja 0x12e36cad */
  if ((!C.cf&&!C.zf)) goto L_12e36cad;
  /* 12e36c7f push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36c81 call 0x12e36820 */
  push32(0x12e36c86u); f_12e36820();
  /* 12e36c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36c8c push ecx */
  push32((uint32_t)(ECX));
  /* 12e36c8d call 0x12e377b0 */
  push32(0x12e36c92u); f_12e377b0();
  /* 12e36c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36c9a call 0x12e368c0 */
  push32(0x12e36c9fu); f_12e368c0();
  /* 12e36c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36ca2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36ca6 je 0x12e36cad */
  if (C.zf) goto L_12e36cad;
  /* 12e36ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36cab jmp 0x12e36cd9 */
  goto L_12e36cd9;
L_12e36cad:;
  /* 12e36cad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36cb1 jne 0x12e36cba */
  if (!C.zf) goto L_12e36cba;
  /* 12e36cb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12e36cba:;
  /* 12e36cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36cbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36cc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12e36cc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e36cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12e36cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12e36ccc mov ecx, dword ptr [0x12e5fe2c] */
  ECX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e36cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36cd3 call dword ptr [0x12e60330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60330))), 0x12e36cd9u);
L_12e36cd9:;
  /* 12e36cd9 mov esp, ebp */
  ESP = (EBP);
  /* 12e36cdb pop ebp */
  EBP = (pop32());
  /* 12e36cdc ret  */
  ESPCHK(0x12e36c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x12e36ce0 (10 bytes, 5 insns) */
void f_12e36ce0(void) {
  FTRACE(0x12e36ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12e36ce3 mov eax, 1 */
  EAX = (0x1u);
  /* 12e36ce8 pop ebp */
  EBP = (pop32());
  /* 12e36ce9 ret  */
  ESPCHK(0x12e36ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x12e36cf0 (173 bytes, 59 insns) */
void f_12e36cf0(void) {
  FTRACE(0x12e36cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e36cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36cf6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36cfa jbe 0x12e36d03 */
  if ((C.cf||C.zf)) goto L_12e36d03;
  /* 12e36cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36cfe jmp 0x12e36d99 */
  goto L_12e36d99;
L_12e36d03:;
  /* 12e36d03 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36d05 call 0x12e36820 */
  push32(0x12e36d0au); f_12e36820();
  /* 12e36d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36d10 push eax */
  push32((uint32_t)(EAX));
  /* 12e36d11 call 0x12e37120 */
  push32(0x12e36d16u); f_12e37120();
  /* 12e36d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36d19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e36d1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36d20 je 0x12e36d61 */
  if (C.zf) goto L_12e36d61;
  /* 12e36d22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e36d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36d2c cmp ecx, dword ptr [0x12e5cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36d32 ja 0x12e36d52 */
  if ((!C.cf&&!C.zf)) goto L_12e36d52;
  /* 12e36d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36d37 push edx */
  push32((uint32_t)(EDX));
  /* 12e36d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36d3b push eax */
  push32((uint32_t)(EAX));
  /* 12e36d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36d3f push ecx */
  push32((uint32_t)(ECX));
  /* 12e36d40 call 0x12e37ff0 */
  push32(0x12e36d45u); f_12e37ff0();
  /* 12e36d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e36d4a je 0x12e36d52 */
  if (C.zf) goto L_12e36d52;
  /* 12e36d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36d4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e36d52:;
  /* 12e36d52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36d54 call 0x12e368c0 */
  push32(0x12e36d59u); f_12e368c0();
  /* 12e36d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36d5f jmp 0x12e36d99 */
  goto L_12e36d99;
L_12e36d61:;
  /* 12e36d61 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36d63 call 0x12e368c0 */
  push32(0x12e36d68u); f_12e368c0();
  /* 12e36d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36d6f jne 0x12e36d78 */
  if (!C.zf) goto L_12e36d78;
  /* 12e36d71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12e36d78:;
  /* 12e36d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36d7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36d7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12e36d80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e36d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36d86 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36d8a push edx */
  push32((uint32_t)(EDX));
  /* 12e36d8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e36d8d mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e36d92 push eax */
  push32((uint32_t)(EAX));
  /* 12e36d93 call dword ptr [0x12e60334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60334))), 0x12e36d99u);
L_12e36d99:;
  /* 12e36d99 mov esp, ebp */
  ESP = (EBP);
  /* 12e36d9b pop ebp */
  EBP = (pop32());
  /* 12e36d9c ret  */
  ESPCHK(0x12e36cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x12e36da0 (490 bytes, 165 insns) */
void f_12e36da0(void) {
  FTRACE(0x12e36da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36da1 mov ebp, esp */
  EBP = (ESP);
  /* 12e36da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36da6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36daa jne 0x12e36dbd */
  if (!C.zf) goto L_12e36dbd;
  /* 12e36dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36daf push eax */
  push32((uint32_t)(EAX));
  /* 12e36db0 call 0x12e36bf0 */
  push32(0x12e36db5u); f_12e36bf0();
  /* 12e36db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36db8 jmp 0x12e36f86 */
  goto L_12e36f86;
L_12e36dbd:;
  /* 12e36dbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36dc1 jne 0x12e36dd6 */
  if (!C.zf) goto L_12e36dd6;
  /* 12e36dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36dc7 call 0x12e36f90 */
  push32(0x12e36dccu); f_12e36f90();
  /* 12e36dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36dd1 jmp 0x12e36f86 */
  goto L_12e36f86;
L_12e36dd6:;
  /* 12e36dd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e36ddd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36de1 ja 0x12e36f59 */
  if ((!C.cf&&!C.zf)) goto L_12e36f59;
  /* 12e36de7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36de9 call 0x12e36820 */
  push32(0x12e36deeu); f_12e36820();
  /* 12e36dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36df4 push edx */
  push32((uint32_t)(EDX));
  /* 12e36df5 call 0x12e37120 */
  push32(0x12e36dfau); f_12e37120();
  /* 12e36dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36dfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e36e00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36e04 je 0x12e36f1c */
  if (C.zf) goto L_12e36f1c;
  /* 12e36e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36e0d cmp eax, dword ptr [0x12e5cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36e13 ja 0x12e36e90 */
  if ((!C.cf&&!C.zf)) goto L_12e36e90;
  /* 12e36e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36e1c push edx */
  push32((uint32_t)(EDX));
  /* 12e36e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e36e20 push eax */
  push32((uint32_t)(EAX));
  /* 12e36e21 call 0x12e37ff0 */
  push32(0x12e36e26u); f_12e37ff0();
  /* 12e36e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e36e2b je 0x12e36e35 */
  if (C.zf) goto L_12e36e35;
  /* 12e36e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36e30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e36e33 jmp 0x12e36e90 */
  goto L_12e36e90;
L_12e36e35:;
  /* 12e36e35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36e38 push edx */
  push32((uint32_t)(EDX));
  /* 12e36e39 call 0x12e377b0 */
  push32(0x12e36e3eu); f_12e377b0();
  /* 12e36e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e36e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36e48 je 0x12e36e90 */
  if (C.zf) goto L_12e36e90;
  /* 12e36e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36e4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12e36e50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e36e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36e59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36e5c jae 0x12e36e66 */
  if (!C.cf) goto L_12e36e66;
  /* 12e36e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e36e64 jmp 0x12e36e6c */
  goto L_12e36e6c;
L_12e36e66:;
  /* 12e36e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e36e6c:;
  /* 12e36e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36e6f push edx */
  push32((uint32_t)(EDX));
  /* 12e36e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36e73 push eax */
  push32((uint32_t)(EAX));
  /* 12e36e74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36e77 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36e78 call 0x12e39700 */
  push32(0x12e36e7du); f_12e39700();
  /* 12e36e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36e83 push edx */
  push32((uint32_t)(EDX));
  /* 12e36e84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e36e87 push eax */
  push32((uint32_t)(EAX));
  /* 12e36e88 call 0x12e371e0 */
  push32(0x12e36e8du); f_12e371e0();
  /* 12e36e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e36e90:;
  /* 12e36e90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36e94 jne 0x12e36f10 */
  if (!C.zf) goto L_12e36f10;
  /* 12e36e96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36e9a jne 0x12e36ea3 */
  if (!C.zf) goto L_12e36ea3;
  /* 12e36e9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12e36ea3:;
  /* 12e36ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36ea6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36ea9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12e36eac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e36eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36eb2 push edx */
  push32((uint32_t)(EDX));
  /* 12e36eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e36eb5 mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e36eba push eax */
  push32((uint32_t)(EAX));
  /* 12e36ebb call dword ptr [0x12e60330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60330))), 0x12e36ec1u);
  /* 12e36ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e36ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36ec8 je 0x12e36f10 */
  if (C.zf) goto L_12e36f10;
  /* 12e36eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36ecd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e36ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36ed3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e36ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36ed9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36edc jae 0x12e36ee6 */
  if (!C.cf) goto L_12e36ee6;
  /* 12e36ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36ee1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e36ee4 jmp 0x12e36eec */
  goto L_12e36eec;
L_12e36ee6:;
  /* 12e36ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36ee9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e36eec:;
  /* 12e36eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e36eef push eax */
  push32((uint32_t)(EAX));
  /* 12e36ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36ef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12e36ef8 call 0x12e39700 */
  push32(0x12e36efdu); f_12e39700();
  /* 12e36efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36f03 push eax */
  push32((uint32_t)(EAX));
  /* 12e36f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e36f07 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36f08 call 0x12e371e0 */
  push32(0x12e36f0du); f_12e371e0();
  /* 12e36f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e36f10:;
  /* 12e36f10 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36f12 call 0x12e368c0 */
  push32(0x12e36f17u); f_12e368c0();
  /* 12e36f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36f1a jmp 0x12e36f59 */
  goto L_12e36f59;
L_12e36f1c:;
  /* 12e36f1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36f1e call 0x12e368c0 */
  push32(0x12e36f23u); f_12e368c0();
  /* 12e36f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36f26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36f2a jne 0x12e36f33 */
  if (!C.zf) goto L_12e36f33;
  /* 12e36f2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12e36f33:;
  /* 12e36f33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36f36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36f39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12e36f3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e36f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36f42 push eax */
  push32((uint32_t)(EAX));
  /* 12e36f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36f46 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e36f49 mov edx, dword ptr [0x12e5fe2c] */
  EDX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e36f4f push edx */
  push32((uint32_t)(EDX));
  /* 12e36f50 call dword ptr [0x12e60334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60334))), 0x12e36f56u);
  /* 12e36f56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e36f59:;
  /* 12e36f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36f5d jne 0x12e36f68 */
  if (!C.zf) goto L_12e36f68;
  /* 12e36f5f cmp dword ptr [0x12e5e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36f66 jne 0x12e36f6d */
  if (!C.zf) goto L_12e36f6d;
L_12e36f68:;
  /* 12e36f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36f6b jmp 0x12e36f86 */
  goto L_12e36f86;
L_12e36f6d:;
  /* 12e36f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36f70 push eax */
  push32((uint32_t)(EAX));
  /* 12e36f71 call 0x12e36b60 */
  push32(0x12e36f76u); f_12e36b60();
  /* 12e36f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e36f7b jne 0x12e36f81 */
  if (!C.zf) goto L_12e36f81;
  /* 12e36f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36f7f jmp 0x12e36f86 */
  goto L_12e36f86;
L_12e36f81:;
  /* 12e36f81 jmp 0x12e36dd6 */
  goto L_12e36dd6;
L_12e36f86:;
  /* 12e36f86 mov esp, ebp */
  ESP = (EBP);
  /* 12e36f88 pop ebp */
  EBP = (pop32());
  /* 12e36f89 ret  */
  ESPCHK(0x12e36da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x12e36f90 (104 bytes, 38 insns) */
void f_12e36f90(void) {
  FTRACE(0x12e36f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36f91 mov ebp, esp */
  EBP = (ESP);
  /* 12e36f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36f94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36f98 jne 0x12e36f9c */
  if (!C.zf) goto L_12e36f9c;
  /* 12e36f9a jmp 0x12e36ff4 */
  goto L_12e36ff4;
L_12e36f9c:;
  /* 12e36f9c push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36f9e call 0x12e36820 */
  push32(0x12e36fa3u); f_12e36820();
  /* 12e36fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36fa9 push eax */
  push32((uint32_t)(EAX));
  /* 12e36faa call 0x12e37120 */
  push32(0x12e36fafu); f_12e37120();
  /* 12e36faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36fb9 je 0x12e36fd7 */
  if (C.zf) goto L_12e36fd7;
  /* 12e36fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36fbe push ecx */
  push32((uint32_t)(ECX));
  /* 12e36fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36fc2 push edx */
  push32((uint32_t)(EDX));
  /* 12e36fc3 call 0x12e371e0 */
  push32(0x12e36fc8u); f_12e371e0();
  /* 12e36fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36fcd call 0x12e368c0 */
  push32(0x12e36fd2u); f_12e368c0();
  /* 12e36fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36fd5 jmp 0x12e36ff4 */
  goto L_12e36ff4;
L_12e36fd7:;
  /* 12e36fd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36fd9 call 0x12e368c0 */
  push32(0x12e36fdeu); f_12e368c0();
  /* 12e36fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36fe4 push eax */
  push32((uint32_t)(EAX));
  /* 12e36fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e36fe7 mov ecx, dword ptr [0x12e5fe2c] */
  ECX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e36fed push ecx */
  push32((uint32_t)(ECX));
  /* 12e36fee call dword ptr [0x12e60310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60310))), 0x12e36ff4u);
L_12e36ff4:;
  /* 12e36ff4 mov esp, ebp */
  ESP = (EBP);
  /* 12e36ff6 pop ebp */
  EBP = (pop32());
  /* 12e36ff7 ret  */
  ESPCHK(0x12e36f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x12e37000 (116 bytes, 34 insns) */
void f_12e37000(void) {
  FTRACE(0x12e37000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37001 mov ebp, esp */
  EBP = (ESP);
  /* 12e37003 push ecx */
  push32((uint32_t)(ECX));
  /* 12e37004 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12e3700b push 9 */
  push32((uint32_t)(0x9u));
  /* 12e3700d call 0x12e36820 */
  push32(0x12e37012u); f_12e36820();
  /* 12e37012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37015 call 0x12e38710 */
  push32(0x12e3701au); f_12e38710();
  /* 12e3701a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3701c jge 0x12e37025 */
  if ((C.sf==C.of)) goto L_12e37025;
  /* 12e3701e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12e37025:;
  /* 12e37025 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e37027 call 0x12e368c0 */
  push32(0x12e3702cu); f_12e368c0();
  /* 12e3702c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3702f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e37031 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e37033 mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e37038 push eax */
  push32((uint32_t)(EAX));
  /* 12e37039 call dword ptr [0x12e60240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60240))), 0x12e3703fu);
  /* 12e3703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e37041 jne 0x12e3706d */
  if (!C.zf) goto L_12e3706d;
  /* 12e37043 call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e37049u);
  /* 12e37049 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3704c jne 0x12e37066 */
  if (!C.zf) goto L_12e37066;
  /* 12e3704e call 0x12e3ad00 */
  push32(0x12e37053u); f_12e3ad00();
  /* 12e37053 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12e37059 call 0x12e3acf0 */
  push32(0x12e3705eu); f_12e3acf0();
  /* 12e3705e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12e37064 jmp 0x12e3706d */
  goto L_12e3706d;
L_12e37066:;
  /* 12e37066 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12e3706d:;
  /* 12e3706d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37070 mov esp, ebp */
  ESP = (EBP);
  /* 12e37072 pop ebp */
  EBP = (pop32());
  /* 12e37073 ret  */
  ESPCHK(0x12e37000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x12e37080 (10 bytes, 5 insns) */
void f_12e37080(void) {
  FTRACE(0x12e37080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37080 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37081 mov ebp, esp */
  EBP = (ESP);
  /* 12e37083 call 0x12e37000 */
  push32(0x12e37088u); f_12e37000();
  /* 12e37088 pop ebp */
  EBP = (pop32());
  /* 12e37089 ret  */
  ESPCHK(0x12e37080u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x12e37090 (10 bytes, 5 insns) */
void f_12e37090(void) {
  FTRACE(0x12e37090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37090 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37091 mov ebp, esp */
  EBP = (ESP);
  /* 12e37093 mov eax, dword ptr [0x12e5cc94] */
  EAX = (r32((uint32_t)(0x12e5cc94)));
  /* 12e37098 pop ebp */
  EBP = (pop32());
  /* 12e37099 ret  */
  ESPCHK(0x12e37090u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x12e370a0 (31 bytes, 11 insns) */
void f_12e370a0(void) {
  FTRACE(0x12e370a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e370a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e370a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e370a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e370aa jbe 0x12e370b0 */
  if ((C.cf||C.zf)) goto L_12e370b0;
  /* 12e370ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e370ae jmp 0x12e370bd */
  goto L_12e370bd;
L_12e370b0:;
  /* 12e370b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e370b3 mov dword ptr [0x12e5cc94], eax */
  w32((uint32_t)(0x12e5cc94), (EAX));
  /* 12e370b8 mov eax, 1 */
  EAX = (0x1u);
L_12e370bd:;
  /* 12e370bd pop ebp */
  EBP = (pop32());
  /* 12e370be ret  */
  ESPCHK(0x12e370a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x12e370c0 (89 bytes, 20 insns) */
void f_12e370c0(void) {
  FTRACE(0x12e370c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e370c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e370c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e370c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12e370c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e370ca mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e370cf push eax */
  push32((uint32_t)(EAX));
  /* 12e370d0 call dword ptr [0x12e60330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60330))), 0x12e370d6u);
  /* 12e370d6 mov dword ptr [0x12e5fe28], eax */
  w32((uint32_t)(0x12e5fe28), (EAX));
  /* 12e370db cmp dword ptr [0x12e5fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e370e2 jne 0x12e370e8 */
  if (!C.zf) goto L_12e370e8;
  /* 12e370e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e370e6 jmp 0x12e37117 */
  goto L_12e37117;
L_12e370e8:;
  /* 12e370e8 mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e370ee mov dword ptr [0x12e5fe1c], ecx */
  w32((uint32_t)(0x12e5fe1c), (ECX));
  /* 12e370f4 mov dword ptr [0x12e5fe20], 0 */
  w32((uint32_t)(0x12e5fe20), (0x0u));
  /* 12e370fe mov dword ptr [0x12e5fe24], 0 */
  w32((uint32_t)(0x12e5fe24), (0x0u));
  /* 12e37108 mov dword ptr [0x12e5fe08], 0x10 */
  w32((uint32_t)(0x12e5fe08), (0x10u));
  /* 12e37112 mov eax, 1 */
  EAX = (0x1u);
L_12e37117:;
  /* 12e37117 pop ebp */
  EBP = (pop32());
  /* 12e37118 ret  */
  ESPCHK(0x12e370c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x12e37120 (85 bytes, 29 insns) */
void f_12e37120(void) {
  FTRACE(0x12e37120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37120 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37121 mov ebp, esp */
  EBP = (ESP);
  /* 12e37123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37126 mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e3712b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3712e mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e37134 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e37139 mov edx, dword ptr [0x12e5fe28] */
  EDX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e3713f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e37142:;
  /* 12e37142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37145 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37148 jae 0x12e3716f */
  if (!C.cf) goto L_12e3716f;
  /* 12e3714a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3714d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37150 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e37156 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3715d jae 0x12e37164 */
  if (!C.cf) goto L_12e37164;
  /* 12e3715f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37162 jmp 0x12e37171 */
  goto L_12e37171;
L_12e37164:;
  /* 12e37164 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37167 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3716a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3716d jmp 0x12e37142 */
  goto L_12e37142;
L_12e3716f:;
  /* 12e3716f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e37171:;
  /* 12e37171 mov esp, ebp */
  ESP = (EBP);
  /* 12e37173 pop ebp */
  EBP = (pop32());
  /* 12e37174 ret  */
  ESPCHK(0x12e37120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x12e37180 (95 bytes, 33 insns) */
void f_12e37180(void) {
  FTRACE(0x12e37180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37180 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37181 mov ebp, esp */
  EBP = (ESP);
  /* 12e37183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3718c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3718f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e37192 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37195 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12e37198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3719b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e371a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e371a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e371a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e371a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e371ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e371ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e371af jne 0x12e371d1 */
  if (!C.zf) goto L_12e371d1;
  /* 12e371b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e371b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12e371b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e371b9 jne 0x12e371d1 */
  if (!C.zf) goto L_12e371d1;
  /* 12e371bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e371be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e371c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e371c6 je 0x12e371d1 */
  if (C.zf) goto L_12e371d1;
  /* 12e371c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12e371cf jmp 0x12e371d8 */
  goto L_12e371d8;
L_12e371d1:;
  /* 12e371d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e371d8:;
  /* 12e371d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e371db mov esp, ebp */
  ESP = (EBP);
  /* 12e371dd pop ebp */
  EBP = (pop32());
  /* 12e371de ret  */
  ESPCHK(0x12e37180u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x12e371e0 (1485 bytes, 453 insns) */
void f_12e371e0(void) {
  FTRACE(0x12e371e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e371e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e371e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e371e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e371e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e371e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e371ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12e371ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e371f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e371f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e371f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e371fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e371fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12e37201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e37204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37207 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3720d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37210 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12e37217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3721a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3721d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37220 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e37223 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e37228 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3722b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12e3722e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37231 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37234 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12e37237 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e3723a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3723c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e3723f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37242 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12e37245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e37248 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3724b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3724e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37250 jne 0x12e37378 */
  if (!C.zf) goto L_12e37378;
  /* 12e37256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37259 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e3725c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3725f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e37262 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37266 jbe 0x12e3726f */
  if ((C.cf||C.zf)) goto L_12e3726f;
  /* 12e37268 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12e3726f:;
  /* 12e3726f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37275 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37278 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3727b jne 0x12e37351 */
  if (!C.zf) goto L_12e37351;
  /* 12e37281 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37285 jae 0x12e372e6 */
  if (!C.cf) goto L_12e372e6;
  /* 12e37287 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e3728c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3728f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e37291 not eax */
  EAX = (~(EAX));
  /* 12e37293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37296 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37299 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e3729d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3729f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e372a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e372a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e372a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e372ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e372af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e372b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e372b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e372b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e372bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e372be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e372c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e372c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e372c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e372ca jne 0x12e372e4 */
  if (!C.zf) goto L_12e372e4;
  /* 12e372cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e372d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e372d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e372d6 not eax */
  EAX = (~(EAX));
  /* 12e372d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e372db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e372dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e372df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e372e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e372e4:;
  /* 12e372e4 jmp 0x12e37351 */
  goto L_12e37351;
L_12e372e6:;
  /* 12e372e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e372e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e372ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e372f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e372f3 not edx */
  EDX = (~(EDX));
  /* 12e372f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e372f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e372fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e37302 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37307 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e3730a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12e37311 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37314 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37317 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e3731a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e3731d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37323 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e37326 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37329 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3732c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e37330 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37332 jne 0x12e37351 */
  if (!C.zf) goto L_12e37351;
  /* 12e37334 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e37337 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3733a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e3733f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37341 not edx */
  EDX = (~(EDX));
  /* 12e37343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37349 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3734b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3734e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e37351:;
  /* 12e37351 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37354 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e37357 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e3735a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e3735d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e37360 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e37366 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3736c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e3736f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37372 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37375 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12e37378:;
  /* 12e37378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3737b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e3737e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e37384 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37388 jbe 0x12e37391 */
  if ((C.cf||C.zf)) goto L_12e37391;
  /* 12e3738a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12e37391:;
  /* 12e37391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e37394 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e37397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37399 jne 0x12e374f5 */
  if (!C.zf) goto L_12e374f5;
  /* 12e3739f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e373a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e373a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12e373a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e373ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e373ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e373b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12e373b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e373b8 jbe 0x12e373c1 */
  if ((C.cf||C.zf)) goto L_12e373c1;
  /* 12e373ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12e373c1:;
  /* 12e373c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e373c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e373c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12e373ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e373cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e373d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e373d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e373d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e373da jbe 0x12e373e3 */
  if ((C.cf||C.zf)) goto L_12e373e3;
  /* 12e373dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12e373e3:;
  /* 12e373e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e373e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e373e9 je 0x12e374ef */
  if (C.zf) goto L_12e374ef;
  /* 12e373ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e373f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e373f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e373f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e373fb jne 0x12e374d1 */
  if (!C.zf) goto L_12e374d1;
  /* 12e37401 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37405 jae 0x12e37466 */
  if (!C.cf) goto L_12e37466;
  /* 12e37407 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e3740c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3740f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37411 not edx */
  EDX = (~(EDX));
  /* 12e37413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37416 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37419 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e3741d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37425 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e37429 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e3742c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3742f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e37432 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e37435 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37438 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3743b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e3743e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37441 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37444 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e37448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3744a jne 0x12e37464 */
  if (!C.zf) goto L_12e37464;
  /* 12e3744c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37456 not edx */
  EDX = (~(EDX));
  /* 12e37458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3745b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3745d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3745f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e37464:;
  /* 12e37464 jmp 0x12e374d1 */
  goto L_12e374d1;
L_12e37466:;
  /* 12e37466 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3746c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e37471 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e37473 not eax */
  EAX = (~(EAX));
  /* 12e37475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37478 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e3747b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e37482 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e37484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37487 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e3748a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12e37491 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37494 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37497 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e3749a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e3749d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e374a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e374a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e374a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e374a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e374ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e374b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e374b2 jne 0x12e374d1 */
  if (!C.zf) goto L_12e374d1;
  /* 12e374b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e374b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e374ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e374bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e374c1 not eax */
  EAX = (~(EAX));
  /* 12e374c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e374c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e374c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e374cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e374ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e374d1:;
  /* 12e374d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e374d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e374d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e374da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e374dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e374e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e374e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e374e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e374e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e374ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12e374ef:;
  /* 12e374ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e374f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12e374f5:;
  /* 12e374f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e374f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e374fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e374fd jne 0x12e3750b */
  if (!C.zf) goto L_12e3750b;
  /* 12e374ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37502 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37505 je 0x12e3761b */
  if (C.zf) goto L_12e3761b;
L_12e3750b:;
  /* 12e3750b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3750e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37511 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12e37514 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e37517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3751a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3751d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e37520 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e37523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37526 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37529 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12e3752c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3752f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37532 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e37535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37538 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3753b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3753e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e37541 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37547 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3754a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3754d jne 0x12e3761b */
  if (!C.zf) goto L_12e3761b;
  /* 12e37553 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37557 jae 0x12e375b4 */
  if (!C.cf) goto L_12e375b4;
  /* 12e37559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e3755c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3755f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e37563 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37566 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37569 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e3756c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e3756f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37572 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37575 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e37578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3757a jne 0x12e37592 */
  if (!C.zf) goto L_12e37592;
  /* 12e3757c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37589 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3758b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3758d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37590 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e37592:;
  /* 12e37592 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e37597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3759a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e3759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3759f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e375a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e375a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e375a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e375ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e375ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e375b2 jmp 0x12e3761b */
  goto L_12e3761b;
L_12e375b4:;
  /* 12e375b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e375b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e375ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e375be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e375c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e375c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e375c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e375ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e375cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e375d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e375d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e375d5 jne 0x12e375f2 */
  if (!C.zf) goto L_12e375f2;
  /* 12e375d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e375da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e375dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e375e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e375e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e375e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e375ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e375ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e375ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e375f2:;
  /* 12e375f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e375f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e375f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e375fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e375ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37602 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37605 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e3760c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3760e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12e37614 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12e3761b:;
  /* 12e3761b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3761e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37621 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e37623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37626 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37629 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3762c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12e3762f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e37634 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3763a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e3763c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3763f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37642 jne 0x12e377a9 */
  if (!C.zf) goto L_12e377a9;
  /* 12e37648 cmp dword ptr [0x12e5fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3764f je 0x12e37798 */
  if (C.zf) goto L_12e37798;
  /* 12e37655 mov eax, dword ptr [0x12e5fe18] */
  EAX = (r32((uint32_t)(0x12e5fe18)));
  /* 12e3765a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12e3765d mov ecx, dword ptr [0x12e5fe20] */
  ECX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e37663 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e37666 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37668 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e3766b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12e37670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e37675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37678 push eax */
  push32((uint32_t)(EAX));
  /* 12e37679 call dword ptr [0x12e60314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60314))), 0x12e3767fu);
  /* 12e3767f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37684 mov ecx, dword ptr [0x12e5fe18] */
  ECX = (r32((uint32_t)(0x12e5fe18)));
  /* 12e3768a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e3768c mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e37691 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e37694 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e37696 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e3769c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e3769f mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e376a7 mov edx, dword ptr [0x12e5fe18] */
  EDX = (r32((uint32_t)(0x12e5fe18)));
  /* 12e376ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12e376b8 mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e376c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12e376c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e376c6 mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e376ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12e376d1 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e376da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12e376de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e376e0 jne 0x12e376f6 */
  if (!C.zf) goto L_12e376f6;
  /* 12e376e2 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e376eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12e376ed mov ecx, dword ptr [0x12e5fe20] */
  ECX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12e376f6:;
  /* 12e376f6 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e376fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37700 jne 0x12e37798 */
  if (!C.zf) goto L_12e37798;
  /* 12e37706 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e3770b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3770d mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e37712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e37715 push ecx */
  push32((uint32_t)(ECX));
  /* 12e37716 call dword ptr [0x12e60314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60314))), 0x12e3771cu);
  /* 12e3771c mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e37722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e37725 push eax */
  push32((uint32_t)(EAX));
  /* 12e37726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e37728 mov ecx, dword ptr [0x12e5fe2c] */
  ECX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e3772e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3772f call dword ptr [0x12e60310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60310))), 0x12e37735u);
  /* 12e37735 mov edx, dword ptr [0x12e5fe24] */
  EDX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e3773b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3773e mov eax, dword ptr [0x12e5fe28] */
  EAX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e37743 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37745 mov ecx, dword ptr [0x12e5fe20] */
  ECX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e3774b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3774e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37750 push eax */
  push32((uint32_t)(EAX));
  /* 12e37751 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e37757 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3775a push edx */
  push32((uint32_t)(EDX));
  /* 12e3775b mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e37760 push eax */
  push32((uint32_t)(EAX));
  /* 12e37761 call 0x12e3ad10 */
  push32(0x12e37766u); f_12e3ad10();
  /* 12e37766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37769 mov ecx, dword ptr [0x12e5fe24] */
  ECX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e3776f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37772 mov dword ptr [0x12e5fe24], ecx */
  w32((uint32_t)(0x12e5fe24), (ECX));
  /* 12e37778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3777b cmp edx, dword ptr [0x12e5fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37781 jbe 0x12e3778c */
  if ((C.cf||C.zf)) goto L_12e3778c;
  /* 12e37783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37786 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37789 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e3778c:;
  /* 12e3778c mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e37792 mov dword ptr [0x12e5fe1c], ecx */
  w32((uint32_t)(0x12e5fe1c), (ECX));
L_12e37798:;
  /* 12e37798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3779b mov dword ptr [0x12e5fe20], edx */
  w32((uint32_t)(0x12e5fe20), (EDX));
  /* 12e377a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e377a4 mov dword ptr [0x12e5fe18], eax */
  w32((uint32_t)(0x12e5fe18), (EAX));
L_12e377a9:;
  /* 12e377a9 mov esp, ebp */
  ESP = (EBP);
  /* 12e377ab pop ebp */
  EBP = (pop32());
  /* 12e377ac ret  */
  ESPCHK(0x12e371e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x12e377b0 (1334 bytes, 427 insns) */
void f_12e377b0(void) {
  FTRACE(0x12e377b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e377b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e377b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e377b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e377b6 push esi */
  push32((uint32_t)(ESI));
  /* 12e377b7 mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e377bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e377bf mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e377c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e377c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e377ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e377cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e377d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12e377d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e377d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e377d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e377dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e377df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e377e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e377e6 jge 0x12e377fc */
  if ((C.sf==C.of)) goto L_12e377fc;
  /* 12e377e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e377eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e377ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e377f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e377f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12e377fa jmp 0x12e37811 */
  goto L_12e37811;
L_12e377fc:;
  /* 12e377fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e37803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37806 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37809 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3780c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e3780e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12e37811:;
  /* 12e37811 mov ecx, dword ptr [0x12e5fe1c] */
  ECX = (r32((uint32_t)(0x12e5fe1c)));
  /* 12e37817 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12e3781a:;
  /* 12e3781a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3781d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37820 jae 0x12e37846 */
  if (!C.cf) goto L_12e37846;
  /* 12e37822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e37828 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12e3782a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3782d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e37830 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12e37833 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e37835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37837 je 0x12e3783b */
  if (C.zf) goto L_12e3783b;
  /* 12e37839 jmp 0x12e37846 */
  goto L_12e37846;
L_12e3783b:;
  /* 12e3783b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3783e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37841 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e37844 jmp 0x12e3781a */
  goto L_12e3781a;
L_12e37846:;
  /* 12e37846 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37849 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3784c jne 0x12e3792d */
  if (!C.zf) goto L_12e3792d;
  /* 12e37852 mov eax, dword ptr [0x12e5fe28] */
  EAX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e37857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12e3785a:;
  /* 12e3785a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3785d cmp ecx, dword ptr [0x12e5fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37863 jae 0x12e37889 */
  if (!C.cf) goto L_12e37889;
  /* 12e37865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3786b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12e3786d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e37873 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e37876 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3787a je 0x12e3787e */
  if (C.zf) goto L_12e3787e;
  /* 12e3787c jmp 0x12e37889 */
  goto L_12e37889;
L_12e3787e:;
  /* 12e3787e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37881 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e37887 jmp 0x12e3785a */
  goto L_12e3785a;
L_12e37889:;
  /* 12e37889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3788c cmp ecx, dword ptr [0x12e5fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37892 jne 0x12e3792d */
  if (!C.zf) goto L_12e3792d;
L_12e37898:;
  /* 12e37898 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3789b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3789e jae 0x12e378b6 */
  if (!C.cf) goto L_12e378b6;
  /* 12e378a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e378a7 je 0x12e378ab */
  if (C.zf) goto L_12e378ab;
  /* 12e378a9 jmp 0x12e378b6 */
  goto L_12e378b6;
L_12e378ab:;
  /* 12e378ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e378b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e378b4 jmp 0x12e37898 */
  goto L_12e37898;
L_12e378b6:;
  /* 12e378b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e378bc jne 0x12e37907 */
  if (!C.zf) goto L_12e37907;
  /* 12e378be mov eax, dword ptr [0x12e5fe28] */
  EAX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e378c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12e378c6:;
  /* 12e378c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378c9 cmp ecx, dword ptr [0x12e5fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e378cf jae 0x12e378e7 */
  if (!C.cf) goto L_12e378e7;
  /* 12e378d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e378d8 je 0x12e378dc */
  if (C.zf) goto L_12e378dc;
  /* 12e378da jmp 0x12e378e7 */
  goto L_12e378e7;
L_12e378dc:;
  /* 12e378dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e378e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e378e5 jmp 0x12e378c6 */
  goto L_12e378c6;
L_12e378e7:;
  /* 12e378e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e378ea cmp ecx, dword ptr [0x12e5fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e378f0 jne 0x12e37907 */
  if (!C.zf) goto L_12e37907;
  /* 12e378f2 call 0x12e37cf0 */
  push32(0x12e378f7u); f_12e37cf0();
  /* 12e378f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e378fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e378fe jne 0x12e37907 */
  if (!C.zf) goto L_12e37907;
  /* 12e37900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37902 jmp 0x12e37ce1 */
  goto L_12e37ce1;
L_12e37907:;
  /* 12e37907 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3790a push edx */
  push32((uint32_t)(EDX));
  /* 12e3790b call 0x12e37e00 */
  push32(0x12e37910u); f_12e37e00();
  /* 12e37910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37916 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e37919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e3791b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3791e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e37921 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37924 jne 0x12e3792d */
  if (!C.zf) goto L_12e3792d;
  /* 12e37926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37928 jmp 0x12e37ce1 */
  goto L_12e37ce1;
L_12e3792d:;
  /* 12e3792d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37930 mov dword ptr [0x12e5fe1c], edx */
  w32((uint32_t)(0x12e5fe1c), (EDX));
  /* 12e37936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37939 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3793c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12e3793f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e37944 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e37947 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3794b je 0x12e37970 */
  if (C.zf) goto L_12e37970;
  /* 12e3794d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37950 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e37956 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12e3795a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3795d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37960 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12e37963 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12e3796a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12e3796c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3796e jne 0x12e379a5 */
  if (!C.zf) goto L_12e379a5;
L_12e37970:;
  /* 12e37970 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12e37977:;
  /* 12e37977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3797a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e3797d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e37980 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12e37984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37987 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e3798a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12e3798d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12e37994 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12e37996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e37998 jne 0x12e379a5 */
  if (!C.zf) goto L_12e379a5;
  /* 12e3799a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3799d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e379a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12e379a3 jmp 0x12e37977 */
  goto L_12e37977;
L_12e379a5:;
  /* 12e379a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e379a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e379ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e379b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12e379b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e379bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e379c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e379c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e379c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e379cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12e379cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e379d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e379d6 jne 0x12e379f2 */
  if (!C.zf) goto L_12e379f2;
  /* 12e379d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12e379df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e379e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e379e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e379e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e379ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12e379f2:;
  /* 12e379f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e379f6 jl 0x12e37a0b */
  if ((C.sf!=C.of)) goto L_12e37a0b;
  /* 12e379f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e379fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e379fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e37a00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37a03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37a06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e37a09 jmp 0x12e379f2 */
  goto L_12e379f2;
L_12e37a0b:;
  /* 12e37a0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37a11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12e37a15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e37a18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37a1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e37a1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37a20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e37a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37a26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e37a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37a2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e37a2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37a33 jle 0x12e37a3c */
  if ((C.zf||C.sf!=C.of)) goto L_12e37a3c;
  /* 12e37a35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12e37a3c:;
  /* 12e37a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37a3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37a42 je 0x12e37c60 */
  if (C.zf) goto L_12e37c60;
  /* 12e37a48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37a4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37a51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37a54 jne 0x12e37b2a */
  if (!C.zf) goto L_12e37b2a;
  /* 12e37a5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37a5e jge 0x12e37abf */
  if ((C.sf==C.of)) goto L_12e37abf;
  /* 12e37a60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e37a65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37a68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e37a6a not eax */
  EAX = (~(EAX));
  /* 12e37a6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37a6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37a72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e37a76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e37a78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37a7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37a7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e37a82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37a85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37a88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e37a8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e37a8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37a91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37a94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e37a97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37a9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37a9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e37aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e37aa3 jne 0x12e37abd */
  if (!C.zf) goto L_12e37abd;
  /* 12e37aa5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e37aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37aad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e37aaf not eax */
  EAX = (~(EAX));
  /* 12e37ab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e37ab6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e37ab8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37abb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e37abd:;
  /* 12e37abd jmp 0x12e37b2a */
  goto L_12e37b2a;
L_12e37abf:;
  /* 12e37abf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37ac2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37ac5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37aca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37acc not edx */
  EDX = (~(EDX));
  /* 12e37ace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37ad1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37ad4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e37adb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37add mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37ae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37ae3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12e37aea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37aed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37af0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e37af3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e37af6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37af9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37afc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e37aff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37b02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37b05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e37b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37b0b jne 0x12e37b2a */
  if (!C.zf) goto L_12e37b2a;
  /* 12e37b0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37b10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37b13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37b18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37b1a not edx */
  EDX = (~(EDX));
  /* 12e37b1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37b1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37b22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e37b24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37b27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e37b2a:;
  /* 12e37b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e37b30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e37b36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e37b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e37b3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e37b45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e37b48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37b4c je 0x12e37c60 */
  if (C.zf) goto L_12e37c60;
  /* 12e37b52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37b58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12e37b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e37b5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e37b64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37b67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e37b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e37b70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e37b73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e37b76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e37b7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e37b88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37b8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e37b91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37b94 jne 0x12e37c60 */
  if (!C.zf) goto L_12e37c60;
  /* 12e37b9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37b9e jge 0x12e37bfa */
  if ((C.sf==C.of)) goto L_12e37bfa;
  /* 12e37ba0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37ba3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37ba6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e37baa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37bad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37bb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e37bb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e37bb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37bb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37bbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e37bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37bc0 jne 0x12e37bd8 */
  if (!C.zf) goto L_12e37bd8;
  /* 12e37bc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e37bc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37bca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e37bcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37bcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e37bd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e37bd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e37bd8:;
  /* 12e37bd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37be0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37be2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37be5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37be8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e37bec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37bee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37bf1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37bf4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e37bf8 jmp 0x12e37c60 */
  goto L_12e37c60;
L_12e37bfa:;
  /* 12e37bfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37bfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e37c04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37c07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e37c0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e37c0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37c12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e37c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37c1a jne 0x12e37c37 */
  if (!C.zf) goto L_12e37c37;
  /* 12e37c1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37c1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37c22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e37c27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e37c29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37c2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e37c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e37c31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37c34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e37c37:;
  /* 12e37c37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37c3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37c42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37c44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37c47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37c4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e37c51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37c53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37c56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37c59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12e37c60:;
  /* 12e37c60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37c64 je 0x12e37c7a */
  if (C.zf) goto L_12e37c7a;
  /* 12e37c66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e37c6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37c71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37c77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12e37c7a:;
  /* 12e37c7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37c7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e37c83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37c86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37c8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e37c8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37c97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37c9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12e37c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e37ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37ca5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e37ca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37cad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e37caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e37cb1 jne 0x12e37cd3 */
  if (!C.zf) goto L_12e37cd3;
  /* 12e37cb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37cb6 cmp eax, dword ptr [0x12e5fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37cbc jne 0x12e37cd3 */
  if (!C.zf) goto L_12e37cd3;
  /* 12e37cbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37cc1 cmp ecx, dword ptr [0x12e5fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37cc7 jne 0x12e37cd3 */
  if (!C.zf) goto L_12e37cd3;
  /* 12e37cc9 mov dword ptr [0x12e5fe20], 0 */
  w32((uint32_t)(0x12e5fe20), (0x0u));
L_12e37cd3:;
  /* 12e37cd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12e37cd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e37cd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e37cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37cde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12e37ce1:;
  /* 12e37ce1 pop esi */
  ESI = (pop32());
  /* 12e37ce2 mov esp, ebp */
  ESP = (EBP);
  /* 12e37ce4 pop ebp */
  EBP = (pop32());
  /* 12e37ce5 ret  */
  ESPCHK(0x12e377b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x12e37cf0 (271 bytes, 78 insns) */
void f_12e37cf0(void) {
  FTRACE(0x12e37cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e37cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e37cf4 mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e37cf9 cmp eax, dword ptr [0x12e5fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37cff jne 0x12e37d4b */
  if (!C.zf) goto L_12e37d4b;
  /* 12e37d01 mov ecx, dword ptr [0x12e5fe08] */
  ECX = (r32((uint32_t)(0x12e5fe08)));
  /* 12e37d07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37d0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e37d0d push ecx */
  push32((uint32_t)(ECX));
  /* 12e37d0e mov edx, dword ptr [0x12e5fe28] */
  EDX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e37d14 push edx */
  push32((uint32_t)(EDX));
  /* 12e37d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e37d17 mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e37d1c push eax */
  push32((uint32_t)(EAX));
  /* 12e37d1d call dword ptr [0x12e60334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60334))), 0x12e37d23u);
  /* 12e37d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e37d26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37d2a jne 0x12e37d33 */
  if (!C.zf) goto L_12e37d33;
  /* 12e37d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37d2e jmp 0x12e37dfb */
  goto L_12e37dfb;
L_12e37d33:;
  /* 12e37d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37d36 mov dword ptr [0x12e5fe28], ecx */
  w32((uint32_t)(0x12e5fe28), (ECX));
  /* 12e37d3c mov edx, dword ptr [0x12e5fe08] */
  EDX = (r32((uint32_t)(0x12e5fe08)));
  /* 12e37d42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37d45 mov dword ptr [0x12e5fe08], edx */
  w32((uint32_t)(0x12e5fe08), (EDX));
L_12e37d4b:;
  /* 12e37d4b mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e37d50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e37d53 mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e37d59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37d5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e37d5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12e37d63 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e37d65 mov edx, dword ptr [0x12e5fe2c] */
  EDX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e37d6b push edx */
  push32((uint32_t)(EDX));
  /* 12e37d6c call dword ptr [0x12e60330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60330))), 0x12e37d72u);
  /* 12e37d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37d75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12e37d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37d7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37d7f jne 0x12e37d85 */
  if (!C.zf) goto L_12e37d85;
  /* 12e37d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37d83 jmp 0x12e37dfb */
  goto L_12e37dfb;
L_12e37d85:;
  /* 12e37d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e37d87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12e37d8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12e37d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e37d93 call dword ptr [0x12e60338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60338))), 0x12e37d99u);
  /* 12e37d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37d9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12e37d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37da2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37da6 jne 0x12e37dc2 */
  if (!C.zf) goto L_12e37dc2;
  /* 12e37da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37dab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e37dae push ecx */
  push32((uint32_t)(ECX));
  /* 12e37daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e37db1 mov edx, dword ptr [0x12e5fe2c] */
  EDX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e37db7 push edx */
  push32((uint32_t)(EDX));
  /* 12e37db8 call dword ptr [0x12e60310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60310))), 0x12e37dbeu);
  /* 12e37dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e37dc0 jmp 0x12e37dfb */
  goto L_12e37dfb;
L_12e37dc2:;
  /* 12e37dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37dc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e37dcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37dce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e37dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37dd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12e37ddf mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e37de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37de7 mov dword ptr [0x12e5fe24], eax */
  w32((uint32_t)(0x12e5fe24), (EAX));
  /* 12e37dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37def mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e37df2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12e37df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e37dfb:;
  /* 12e37dfb mov esp, ebp */
  ESP = (EBP);
  /* 12e37dfd pop ebp */
  EBP = (pop32());
  /* 12e37dfe ret  */
  ESPCHK(0x12e37cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x12e37e00 (494 bytes, 149 insns) */
void f_12e37e00(void) {
  FTRACE(0x12e37e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37e01 mov ebp, esp */
  EBP = (ESP);
  /* 12e37e03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37e09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e37e0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e37e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e37e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e37e18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12e37e1f:;
  /* 12e37e1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37e23 jl 0x12e37e38 */
  if ((C.sf!=C.of)) goto L_12e37e38;
  /* 12e37e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e37e28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e37e2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e37e2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37e30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37e33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e37e36 jmp 0x12e37e1f */
  goto L_12e37e1f;
L_12e37e38:;
  /* 12e37e38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37e3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e37e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37e44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12e37e4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e37e4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e37e55 jmp 0x12e37e60 */
  goto L_12e37e60;
L_12e37e57:;
  /* 12e37e57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12e37e60:;
  /* 12e37e60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37e64 jge 0x12e37e86 */
  if ((C.sf==C.of)) goto L_12e37e86;
  /* 12e37e66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e37e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e37e6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12e37e6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e37e72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37e75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37e78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e37e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37e7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37e81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e37e84 jmp 0x12e37e57 */
  goto L_12e37e57;
L_12e37e86:;
  /* 12e37e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37e89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12e37e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37e8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e37e92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37e94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e37e97 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e37e99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e37e9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e37ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37ea6 push edx */
  push32((uint32_t)(EDX));
  /* 12e37ea7 call dword ptr [0x12e60338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60338))), 0x12e37eadu);
  /* 12e37ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e37eaf jne 0x12e37eb9 */
  if (!C.zf) goto L_12e37eb9;
  /* 12e37eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e37eb4 jmp 0x12e37fea */
  goto L_12e37fea;
L_12e37eb9:;
  /* 12e37eb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37ebc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37ec1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e37ec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37ec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e37eca jmp 0x12e37ed8 */
  goto L_12e37ed8;
L_12e37ecc:;
  /* 12e37ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37ecf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37ed5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e37ed8:;
  /* 12e37ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37edb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e37ede ja 0x12e37f3d */
  if ((!C.cf&&!C.zf)) goto L_12e37f3d;
  /* 12e37ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37ee3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12e37eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37eed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12e37ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e37efa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37efd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e37f00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12e37f09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37f12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e37f18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37f21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e37f27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37f2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e37f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e37f35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12e37f3b jmp 0x12e37ecc */
  goto L_12e37ecc;
L_12e37f3d:;
  /* 12e37f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e37f40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37f46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e37f49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e37f4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37f4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37f52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e37f55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e37f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e37f5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37f64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e37f67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e37f6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37f70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12e37f73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37f76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e37f79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e37f7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e37f7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e37f82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e37f85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37f88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37f8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12e37f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37f96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37f99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12e37fa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37fa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12e37fab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37fae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12e37fb1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e37fb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e37fb7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12e37fba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e37fbc jne 0x12e37fcd */
  if (!C.zf) goto L_12e37fcd;
  /* 12e37fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37fc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e37fc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e37fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37fca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e37fcd:;
  /* 12e37fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e37fd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e37fd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e37fd7 not edx */
  EDX = (~(EDX));
  /* 12e37fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37fdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e37fdf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e37fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e37fe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e37fe7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12e37fea:;
  /* 12e37fea mov esp, ebp */
  ESP = (EBP);
  /* 12e37fec pop ebp */
  EBP = (pop32());
  /* 12e37fed ret  */
  ESPCHK(0x12e37e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x12e37ff0 (1515 bytes, 489 insns) */
void f_12e37ff0(void) {
  FTRACE(0x12e37ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e37ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e37ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12e37ff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e37ff6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e37ff9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e37ffc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12e37ffe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e38001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38004 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e38007 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12e3800a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3800d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e38010 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e38016 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e38019 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12e3801c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3801f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e38028 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3802b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12e38032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e38035 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e38038 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3803b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e3803e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e38043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38046 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12e38049 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3804c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3804f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12e38052 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e38057 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e3805a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3805d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38060 jle 0x12e38316 */
  if ((C.zf||C.sf!=C.of)) goto L_12e38316;
  /* 12e38066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3806c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3806e jne 0x12e3807b */
  if (!C.zf) goto L_12e3807b;
  /* 12e38070 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e38073 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38076 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38079 jle 0x12e38082 */
  if ((C.zf||C.sf!=C.of)) goto L_12e38082;
L_12e3807b:;
  /* 12e3807b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3807d jmp 0x12e385d7 */
  goto L_12e385d7;
L_12e38082:;
  /* 12e38082 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38085 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e38088 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3808b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3808e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38092 jbe 0x12e3809b */
  if ((C.cf||C.zf)) goto L_12e3809b;
  /* 12e38094 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12e3809b:;
  /* 12e3809b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3809e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e380a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e380a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e380a7 jne 0x12e3817d */
  if (!C.zf) goto L_12e3817d;
  /* 12e380ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e380b1 jae 0x12e38112 */
  if (!C.cf) goto L_12e38112;
  /* 12e380b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e380b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e380bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e380bd not edx */
  EDX = (~(EDX));
  /* 12e380bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e380c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e380c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e380c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e380cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e380ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e380d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e380d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e380d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e380db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e380de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e380e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e380e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e380e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e380ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e380ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e380f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e380f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e380f6 jne 0x12e38110 */
  if (!C.zf) goto L_12e38110;
  /* 12e380f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e380fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e38100 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38102 not edx */
  EDX = (~(EDX));
  /* 12e38104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e38109 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3810b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3810e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e38110:;
  /* 12e38110 jmp 0x12e3817d */
  goto L_12e3817d;
L_12e38112:;
  /* 12e38112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e38115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e3811d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e3811f not eax */
  EAX = (~(EAX));
  /* 12e38121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38127 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e3812e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38133 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38136 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12e3813d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38140 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38143 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e38146 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e38149 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3814c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3814f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e38152 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38155 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38158 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e3815c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3815e jne 0x12e3817d */
  if (!C.zf) goto L_12e3817d;
  /* 12e38160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e38163 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38166 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e3816b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e3816d not eax */
  EAX = (~(EAX));
  /* 12e3816f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38172 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38175 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e38177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3817a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e3817d:;
  /* 12e3817d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38180 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e38183 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e38189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e3818c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3818f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e38192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e38198 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12e3819b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3819e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e381a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e381a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e381a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e381ab jle 0x12e382f7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e382f7;
  /* 12e381b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e381b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e381b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e381ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e381bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e381c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e381c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e381c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e381ca jbe 0x12e381d3 */
  if ((C.cf||C.zf)) goto L_12e381d3;
  /* 12e381cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12e381d3:;
  /* 12e381d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e381d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e381d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12e381dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e381df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e381e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e381e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e381e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e381eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e381ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e381f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12e381f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e381f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e381fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e381fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38200 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38206 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e38209 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3820c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3820f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38212 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38215 jne 0x12e382e3 */
  if (!C.zf) goto L_12e382e3;
  /* 12e3821b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3821f jae 0x12e3827c */
  if (!C.cf) goto L_12e3827c;
  /* 12e38221 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38224 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38227 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e3822b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3822e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38231 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e38234 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e38237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3823a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3823d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e38240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e38242 jne 0x12e3825a */
  if (!C.zf) goto L_12e3825a;
  /* 12e38244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e38249 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3824c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e3824e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e38253 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38258 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e3825a:;
  /* 12e3825a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e3825f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e38262 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e38264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38267 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3826a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12e3826e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38276 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12e3827a jmp 0x12e382e3 */
  goto L_12e382e3;
L_12e3827c:;
  /* 12e3827c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3827f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38282 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e38286 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38289 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3828c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e3828f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e38292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38295 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38298 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12e3829b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3829d jne 0x12e382ba */
  if (!C.zf) goto L_12e382ba;
  /* 12e3829f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e382a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e382a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e382aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e382ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e382af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e382b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e382b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e382b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12e382ba:;
  /* 12e382ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e382bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e382c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e382c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e382c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e382ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e382cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e382d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e382d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e382d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e382dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12e382e3:;
  /* 12e382e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e382e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e382e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e382eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e382ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e382f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e382f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12e382f7:;
  /* 12e382f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e382fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e382fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38300 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e38302 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e38305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38308 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3830b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3830e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12e38311 jmp 0x12e385d2 */
  goto L_12e385d2;
L_12e38316:;
  /* 12e38316 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e38319 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3831c jge 0x12e385d2 */
  if ((C.sf==C.of)) goto L_12e385d2;
  /* 12e38322 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e38325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38328 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3832b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e3832d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e38330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38333 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38336 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38339 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12e3833c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3833f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e38345 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e38348 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3834b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e3834e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e38351 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e38354 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38357 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e3835a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3835e jbe 0x12e38367 */
  if ((C.cf||C.zf)) goto L_12e38367;
  /* 12e38360 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12e38367:;
  /* 12e38367 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3836a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3836d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3836f jne 0x12e384b0 */
  if (!C.zf) goto L_12e384b0;
  /* 12e38375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38378 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12e3837b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3837e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e38381 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38385 jbe 0x12e3838e */
  if ((C.cf||C.zf)) goto L_12e3838e;
  /* 12e38387 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12e3838e:;
  /* 12e3838e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38391 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38394 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38397 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3839a jne 0x12e38470 */
  if (!C.zf) goto L_12e38470;
  /* 12e383a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e383a4 jae 0x12e38405 */
  if (!C.cf) goto L_12e38405;
  /* 12e383a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e383ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e383ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e383b0 not edx */
  EDX = (~(EDX));
  /* 12e383b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e383b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e383b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e383bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e383be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e383c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e383c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e383c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e383cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e383ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e383d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e383d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e383d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e383da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12e383dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e383e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e383e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e383e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e383e9 jne 0x12e38403 */
  if (!C.zf) goto L_12e38403;
  /* 12e383eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e383f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e383f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e383f5 not edx */
  EDX = (~(EDX));
  /* 12e383f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e383fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e383fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e383fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38401 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e38403:;
  /* 12e38403 jmp 0x12e38470 */
  goto L_12e38470;
L_12e38405:;
  /* 12e38405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e38408 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3840b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e38410 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e38412 not eax */
  EAX = (~(EAX));
  /* 12e38414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3841a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12e38421 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38426 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38429 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12e38430 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38433 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38436 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12e38439 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e3843c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3843f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38442 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12e38445 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38448 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3844b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e3844f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e38451 jne 0x12e38470 */
  if (!C.zf) goto L_12e38470;
  /* 12e38453 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e38456 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38459 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e3845e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e38460 not eax */
  EAX = (~(EAX));
  /* 12e38462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38468 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3846a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3846d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e38470:;
  /* 12e38470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38473 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e38476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38479 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e3847c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e3847f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38482 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e38485 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38488 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e3848b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12e3848e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e38491 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38494 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e38497 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3849a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e3849d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e384a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e384a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e384a7 jbe 0x12e384b0 */
  if ((C.cf||C.zf)) goto L_12e384b0;
  /* 12e384a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12e384b0:;
  /* 12e384b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e384b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e384b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12e384b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e384bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e384c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e384c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e384c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e384ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e384d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e384d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e384da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e384e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e384e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e384ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e384ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e384f2 jne 0x12e385be */
  if (!C.zf) goto L_12e385be;
  /* 12e384f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e384fc jae 0x12e38558 */
  if (!C.cf) goto L_12e38558;
  /* 12e384fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38501 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38504 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e38508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3850b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3850e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e38511 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e38513 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38516 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38519 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e3851c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3851e jne 0x12e38536 */
  if (!C.zf) goto L_12e38536;
  /* 12e38520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e38525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e3852a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3852d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3852f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e38531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e38536:;
  /* 12e38536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e3853b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3853e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38543 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38546 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12e3854a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3854c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3854f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38552 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12e38556 jmp 0x12e385be */
  goto L_12e385be;
L_12e38558:;
  /* 12e38558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3855b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3855e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12e38562 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38565 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38568 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e3856b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e3856d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e38570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38573 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12e38576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e38578 jne 0x12e38595 */
  if (!C.zf) goto L_12e38595;
  /* 12e3857a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3857d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12e38585 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12e38587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3858a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3858d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3858f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38592 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12e38595:;
  /* 12e38595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3859b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e385a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e385a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e385a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e385a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12e385af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e385b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e385b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e385b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12e385be:;
  /* 12e385be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e385c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e385c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e385c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e385c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e385cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e385cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12e385d2:;
  /* 12e385d2 mov eax, 1 */
  EAX = (0x1u);
L_12e385d7:;
  /* 12e385d7 mov esp, ebp */
  ESP = (EBP);
  /* 12e385d9 pop ebp */
  EBP = (pop32());
  /* 12e385da ret  */
  ESPCHK(0x12e37ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x12e385e0 (304 bytes, 79 insns) */
void f_12e385e0(void) {
  FTRACE(0x12e385e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e385e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e385e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e385e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e385e4 cmp dword ptr [0x12e5fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e385eb je 0x12e3870c */
  if (C.zf) goto L_12e3870c;
  /* 12e385f1 mov eax, dword ptr [0x12e5fe18] */
  EAX = (r32((uint32_t)(0x12e5fe18)));
  /* 12e385f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12e385f9 mov ecx, dword ptr [0x12e5fe20] */
  ECX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e385ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e38602 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e38607 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12e3860c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e38611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38614 push eax */
  push32((uint32_t)(EAX));
  /* 12e38615 call dword ptr [0x12e60314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60314))), 0x12e3861bu);
  /* 12e3861b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e38620 mov ecx, dword ptr [0x12e5fe18] */
  ECX = (r32((uint32_t)(0x12e5fe18)));
  /* 12e38626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38628 mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e3862d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e38630 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38632 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38638 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e3863b mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38640 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e38643 mov edx, dword ptr [0x12e5fe18] */
  EDX = (r32((uint32_t)(0x12e5fe18)));
  /* 12e38649 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12e38654 mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3865c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12e3865f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e38662 mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3866a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12e3866d mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e38676 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12e3867a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3867c jne 0x12e38692 */
  if (!C.zf) goto L_12e38692;
  /* 12e3867e mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e38687 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12e38689 mov ecx, dword ptr [0x12e5fe20] */
  ECX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e3868f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12e38692:;
  /* 12e38692 mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e38698 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3869c jne 0x12e38702 */
  if (!C.zf) goto L_12e38702;
  /* 12e3869e cmp dword ptr [0x12e5fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e386a5 jle 0x12e38702 */
  if ((C.zf||C.sf!=C.of)) goto L_12e38702;
  /* 12e386a7 mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e386ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e386af push ecx */
  push32((uint32_t)(ECX));
  /* 12e386b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e386b2 mov edx, dword ptr [0x12e5fe2c] */
  EDX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e386b8 push edx */
  push32((uint32_t)(EDX));
  /* 12e386b9 call dword ptr [0x12e60310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60310))), 0x12e386bfu);
  /* 12e386bf mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e386c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e386c7 mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e386cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e386cf mov edx, dword ptr [0x12e5fe20] */
  EDX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e386d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e386d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e386da push ecx */
  push32((uint32_t)(ECX));
  /* 12e386db mov eax, dword ptr [0x12e5fe20] */
  EAX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e386e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e386e3 push eax */
  push32((uint32_t)(EAX));
  /* 12e386e4 mov ecx, dword ptr [0x12e5fe20] */
  ECX = (r32((uint32_t)(0x12e5fe20)));
  /* 12e386ea push ecx */
  push32((uint32_t)(ECX));
  /* 12e386eb call 0x12e3ad10 */
  push32(0x12e386f0u); f_12e3ad10();
  /* 12e386f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e386f3 mov edx, dword ptr [0x12e5fe24] */
  EDX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e386f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e386fc mov dword ptr [0x12e5fe24], edx */
  w32((uint32_t)(0x12e5fe24), (EDX));
L_12e38702:;
  /* 12e38702 mov dword ptr [0x12e5fe20], 0 */
  w32((uint32_t)(0x12e5fe20), (0x0u));
L_12e3870c:;
  /* 12e3870c mov esp, ebp */
  ESP = (EBP);
  /* 12e3870e pop ebp */
  EBP = (pop32());
  /* 12e3870f ret  */
  ESPCHK(0x12e385e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x12e38710 (1565 bytes, 343 insns) */
void f_12e38710(void) {
  FTRACE(0x12e38710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e38710 push ebp */
  push32((uint32_t)(EBP));
  /* 12e38711 mov ebp, esp */
  EBP = (ESP);
  /* 12e38713 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38719 mov eax, dword ptr [0x12e5fe24] */
  EAX = (r32((uint32_t)(0x12e5fe24)));
  /* 12e3871e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e38721 push eax */
  push32((uint32_t)(EAX));
  /* 12e38722 mov ecx, dword ptr [0x12e5fe28] */
  ECX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e38728 push ecx */
  push32((uint32_t)(ECX));
  /* 12e38729 call dword ptr [0x12e602e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e8))), 0x12e3872fu);
  /* 12e3872f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38731 je 0x12e3873b */
  if (C.zf) goto L_12e3873b;
  /* 12e38733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e38736 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e3873b:;
  /* 12e3873b mov edx, dword ptr [0x12e5fe28] */
  EDX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e38741 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12e38747 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12e38751 jmp 0x12e38762 */
  goto L_12e38762;
L_12e38753:;
  /* 12e38753 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12e38759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3875c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12e38762:;
  /* 12e38762 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12e38768 cmp ecx, dword ptr [0x12e5fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3876e jge 0x12e38d27 */
  if ((C.sf==C.of)) goto L_12e38d27;
  /* 12e38774 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e3877a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e3877d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12e38783 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12e38788 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e3878e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3878f call dword ptr [0x12e602e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e8))), 0x12e38795u);
  /* 12e38795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38797 je 0x12e387a3 */
  if (C.zf) goto L_12e387a3;
  /* 12e38799 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12e3879e jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e387a3:;
  /* 12e387a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e387a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e387ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12e387b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e387b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e387be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e387c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e387c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e387ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e387cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12e387d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12e387e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e387e8 jmp 0x12e387f3 */
  goto L_12e387f3;
L_12e387ea:;
  /* 12e387ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e387ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e387f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e387f3:;
  /* 12e387f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e387f7 jge 0x12e38ceb */
  if ((C.sf==C.of)) goto L_12e38ceb;
  /* 12e387fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12e38807 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12e38811 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12e3881b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12e38825 jmp 0x12e38836 */
  goto L_12e38836;
L_12e38827:;
  /* 12e38827 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e3882d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38830 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12e38836:;
  /* 12e38836 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3883d jge 0x12e38852 */
  if ((C.sf==C.of)) goto L_12e38852;
  /* 12e3883f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e38845 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12e38850 jmp 0x12e38827 */
  goto L_12e38827;
L_12e38852:;
  /* 12e38852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38856 jl 0x12e38c8d */
  if ((C.sf!=C.of)) goto L_12e38c8d;
  /* 12e3885c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e38861 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e38867 push ecx */
  push32((uint32_t)(ECX));
  /* 12e38868 call dword ptr [0x12e602e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e8))), 0x12e3886eu);
  /* 12e3886e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38870 je 0x12e3887c */
  if (C.zf) goto L_12e3887c;
  /* 12e38872 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12e38877 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e3887c:;
  /* 12e3887c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e38882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e38885 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12e3888f jmp 0x12e388a0 */
  goto L_12e388a0;
L_12e38891:;
  /* 12e38891 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12e38897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3889a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12e388a0:;
  /* 12e388a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e388a7 jge 0x12e38a24 */
  if ((C.sf==C.of)) goto L_12e38a24;
  /* 12e388ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e388b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e388b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12e388b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e388bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e388c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12e388cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e388d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e388d5 jne 0x12e388e2 */
  if (!C.zf) goto L_12e388e2;
  /* 12e388d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12e388dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e388e0 je 0x12e388ec */
  if (C.zf) goto L_12e388ec;
L_12e388e2:;
  /* 12e388e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12e388e7 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e388ec:;
  /* 12e388ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e388f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e388f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12e388fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e38900 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12e38906 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12e3890c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3890f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e38911 je 0x12e38949 */
  if (C.zf) goto L_12e38949;
  /* 12e38913 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e38919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3891c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12e38922 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3892c jle 0x12e38938 */
  if ((C.zf||C.sf!=C.of)) goto L_12e38938;
  /* 12e3892e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12e38933 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38938:;
  /* 12e38938 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12e3893e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38941 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12e38947 jmp 0x12e3898b */
  goto L_12e3898b;
L_12e38949:;
  /* 12e38949 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e3894f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e38952 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38955 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12e3895b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38962 jle 0x12e3896e */
  if ((C.zf||C.sf!=C.of)) goto L_12e3896e;
  /* 12e38964 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12e3896e:;
  /* 12e3896e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e38974 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12e3897b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3897e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e38984 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12e3898b:;
  /* 12e3898b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38992 jl 0x12e389ad */
  if ((C.sf!=C.of)) goto L_12e389ad;
  /* 12e38994 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12e3899a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3899d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3899f jne 0x12e389ad */
  if (!C.zf) goto L_12e389ad;
  /* 12e389a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e389ab jle 0x12e389b7 */
  if ((C.zf||C.sf!=C.of)) goto L_12e389b7;
L_12e389ad:;
  /* 12e389ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12e389b2 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e389b7:;
  /* 12e389b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e389bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e389c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e389c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e389cc je 0x12e389d8 */
  if (C.zf) goto L_12e389d8;
  /* 12e389ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12e389d3 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e389d8:;
  /* 12e389d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e389de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e389e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12e389ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e389f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e389f6 jb 0x12e388ec */
  if (C.cf) goto L_12e388ec;
  /* 12e389fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e38a02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38a08 je 0x12e38a14 */
  if (C.zf) goto L_12e38a14;
  /* 12e38a0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12e38a0f jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38a14:;
  /* 12e38a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e38a17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38a1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e38a1f jmp 0x12e38891 */
  goto L_12e38891;
L_12e38a24:;
  /* 12e38a24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e38a27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e38a29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38a2f je 0x12e38a3b */
  if (C.zf) goto L_12e38a3b;
  /* 12e38a31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12e38a36 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38a3b:;
  /* 12e38a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e38a3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12e38a44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12e38a4b jmp 0x12e38a56 */
  goto L_12e38a56;
L_12e38a4d:;
  /* 12e38a4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38a53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e38a56:;
  /* 12e38a56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38a5a jge 0x12e38c8d */
  if ((C.sf==C.of)) goto L_12e38c8d;
  /* 12e38a60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12e38a6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12e38a70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12e38a76:;
  /* 12e38a76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e38a7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e38a7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12e38a85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e38a8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38a91 je 0x12e38bba */
  if (C.zf) goto L_12e38bba;
  /* 12e38a97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38a9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12e38aa0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38aa7 je 0x12e38bba */
  if (C.zf) goto L_12e38bba;
  /* 12e38aad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e38ab3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38ab9 jb 0x12e38ace */
  if (C.cf) goto L_12e38ace;
  /* 12e38abb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e38ac1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38ac6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38acc jb 0x12e38ad8 */
  if (C.cf) goto L_12e38ad8;
L_12e38ace:;
  /* 12e38ace mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12e38ad3 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38ad8:;
  /* 12e38ad8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e38ade and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e38ae4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12e38aea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12e38af0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38af3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e38af6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38af9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38afe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12e38b04:;
  /* 12e38b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38b07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38b0d je 0x12e38b2e */
  if (C.zf) goto L_12e38b2e;
  /* 12e38b0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38b12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38b18 jne 0x12e38b1c */
  if (!C.zf) goto L_12e38b1c;
  /* 12e38b1a jmp 0x12e38b2e */
  goto L_12e38b2e;
L_12e38b1c:;
  /* 12e38b1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e38b21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12e38b24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38b27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38b29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e38b2c jmp 0x12e38b04 */
  goto L_12e38b04;
L_12e38b2e:;
  /* 12e38b2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e38b31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38b37 jne 0x12e38b43 */
  if (!C.zf) goto L_12e38b43;
  /* 12e38b39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12e38b3e jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38b43:;
  /* 12e38b43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e38b49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e38b4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e38b4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38b51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12e38b57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38b5e jle 0x12e38b6a */
  if ((C.zf||C.sf!=C.of)) goto L_12e38b6a;
  /* 12e38b60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12e38b6a:;
  /* 12e38b6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12e38b70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38b73 je 0x12e38b7f */
  if (C.zf) goto L_12e38b7f;
  /* 12e38b75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12e38b7a jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38b7f:;
  /* 12e38b7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e38b85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e38b88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38b8e je 0x12e38b9a */
  if (C.zf) goto L_12e38b9a;
  /* 12e38b90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12e38b95 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38b9a:;
  /* 12e38b9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12e38ba0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12e38ba6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12e38bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38baf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12e38bb5 jmp 0x12e38a76 */
  goto L_12e38a76;
L_12e38bba:;
  /* 12e38bba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38bc1 je 0x12e38c31 */
  if (C.zf) goto L_12e38c31;
  /* 12e38bc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38bc7 jge 0x12e38bfb */
  if ((C.sf==C.of)) goto L_12e38bfb;
  /* 12e38bc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e38bce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38bd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38bd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12e38bd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38bdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12e38be1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e38be6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38be9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38beb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12e38bf1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38bf3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12e38bf9 jmp 0x12e38c31 */
  goto L_12e38c31;
L_12e38bfb:;
  /* 12e38bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38bfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38c01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e38c06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38c08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12e38c0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38c10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12e38c16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38c19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38c1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12e38c21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12e38c23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12e38c29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38c2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12e38c31:;
  /* 12e38c31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12e38c37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38c3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38c40 jne 0x12e38c54 */
  if (!C.zf) goto L_12e38c54;
  /* 12e38c42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e38c45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12e38c4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38c52 je 0x12e38c5e */
  if (C.zf) goto L_12e38c5e;
L_12e38c54:;
  /* 12e38c54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12e38c59 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38c5e:;
  /* 12e38c5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12e38c64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e38c67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38c6d je 0x12e38c79 */
  if (C.zf) goto L_12e38c79;
  /* 12e38c6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12e38c74 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38c79:;
  /* 12e38c79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12e38c7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38c82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12e38c88 jmp 0x12e38a4d */
  goto L_12e38a4d;
L_12e38c8d:;
  /* 12e38c8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e38c90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e38c96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12e38c9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38ca0 jne 0x12e38cba */
  if (!C.zf) goto L_12e38cba;
  /* 12e38ca2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e38ca5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12e38cab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12e38cb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38cb8 je 0x12e38cc1 */
  if (C.zf) goto L_12e38cc1;
L_12e38cba:;
  /* 12e38cba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12e38cbf jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38cc1:;
  /* 12e38cc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12e38cc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38ccd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12e38cd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e38cd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38cdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e38cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38ce1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e38ce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e38ce6 jmp 0x12e387ea */
  goto L_12e387ea;
L_12e38ceb:;
  /* 12e38ceb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e38cf1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12e38cf7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38cf9 jne 0x12e38d0c */
  if (!C.zf) goto L_12e38d0c;
  /* 12e38cfb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e38d01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12e38d07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38d0a je 0x12e38d13 */
  if (C.zf) goto L_12e38d13;
L_12e38d0c:;
  /* 12e38d0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12e38d11 jmp 0x12e38d29 */
  goto L_12e38d29;
L_12e38d13:;
  /* 12e38d13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12e38d19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38d1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12e38d22 jmp 0x12e38753 */
  goto L_12e38753;
L_12e38d27:;
  /* 12e38d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e38d29:;
  /* 12e38d29 mov esp, ebp */
  ESP = (EBP);
  /* 12e38d2b pop ebp */
  EBP = (pop32());
  /* 12e38d2c ret  */
  ESPCHK(0x12e38710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x12e38d30 (250 bytes, 92 insns) */
void f_12e38d30(void) {
  FTRACE(0x12e38d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e38d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e38d31 mov ebp, esp */
  EBP = (ESP);
  /* 12e38d33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38d36 push ebx */
  push32((uint32_t)(EBX));
  /* 12e38d37 push esi */
  push32((uint32_t)(ESI));
  /* 12e38d38 push edi */
  push32((uint32_t)(EDI));
  /* 12e38d39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12e38d3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e38d3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e38d42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12e38d45:;
  /* 12e38d45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38d49 jne 0x12e38d69 */
  if (!C.zf) goto L_12e38d69;
  /* 12e38d4b push 0x12e59df8 */
  push32((uint32_t)(0x12e59df8u));
  /* 12e38d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e38d52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12e38d54 push 0x12e59dec */
  push32((uint32_t)(0x12e59decu));
  /* 12e38d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e38d5b call 0x12e31ee0 */
  push32(0x12e38d60u); f_12e31ee0();
  /* 12e38d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38d63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38d66 jne 0x12e38d69 */
  if (!C.zf) goto L_12e38d69;
  /* 12e38d68 int3  */
  x86_unimpl("int3 @ 0x12e38d68");
L_12e38d69:;
  /* 12e38d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e38d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e38d6d jne 0x12e38d45 */
  if (!C.zf) goto L_12e38d45;
L_12e38d6f:;
  /* 12e38d6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38d73 jne 0x12e38d93 */
  if (!C.zf) goto L_12e38d93;
  /* 12e38d75 push 0x12e59ddc */
  push32((uint32_t)(0x12e59ddcu));
  /* 12e38d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e38d7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12e38d7e push 0x12e59dec */
  push32((uint32_t)(0x12e59decu));
  /* 12e38d83 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e38d85 call 0x12e31ee0 */
  push32(0x12e38d8au); f_12e31ee0();
  /* 12e38d8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38d90 jne 0x12e38d93 */
  if (!C.zf) goto L_12e38d93;
  /* 12e38d92 int3  */
  x86_unimpl("int3 @ 0x12e38d92");
L_12e38d93:;
  /* 12e38d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38d97 jne 0x12e38d6f */
  if (!C.zf) goto L_12e38d6f;
  /* 12e38d99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38d9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12e38da3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38da9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e38dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38daf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38db2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e38db4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38db7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12e38dbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e38dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e38dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e38dc5 push edx */
  push32((uint32_t)(EDX));
  /* 12e38dc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38dc9 push eax */
  push32((uint32_t)(EAX));
  /* 12e38dca call 0x12e39db0 */
  push32(0x12e38dcfu); f_12e39db0();
  /* 12e38dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38dd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e38dd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38dd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e38ddb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38dde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38de1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e38de4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38de7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38deb jl 0x12e38e0f */
  if ((C.sf!=C.of)) goto L_12e38e0f;
  /* 12e38ded mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38df0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e38df2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e38df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e38dfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12e38e00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38e03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e38e05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38e08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38e0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e38e0d jmp 0x12e38e20 */
  goto L_12e38e20;
L_12e38e0f:;
  /* 12e38e0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38e12 push edx */
  push32((uint32_t)(EDX));
  /* 12e38e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e38e15 call 0x12e39b30 */
  push32(0x12e38e1au); f_12e39b30();
  /* 12e38e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38e1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12e38e20:;
  /* 12e38e20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e38e23 pop edi */
  EDI = (pop32());
  /* 12e38e24 pop esi */
  ESI = (pop32());
  /* 12e38e25 pop ebx */
  EBX = (pop32());
  /* 12e38e26 mov esp, ebp */
  ESP = (EBP);
  /* 12e38e28 pop ebp */
  EBP = (pop32());
  /* 12e38e29 ret  */
  ESPCHK(0x12e38d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x12e38e30 (183 bytes, 58 insns) */
void f_12e38e30(void) {
  FTRACE(0x12e38e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e38e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e38e31 mov ebp, esp */
  EBP = (ESP);
  /* 12e38e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38e3c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38e41 ja 0x12e38e5a */
  if ((!C.cf&&!C.zf)) goto L_12e38e5a;
  /* 12e38e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38e46 mov edx, dword ptr [0x12e5cc98] */
  EDX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e38e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38e4e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e38e52 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12e38e55 jmp 0x12e38ee3 */
  goto L_12e38ee3;
L_12e38e5a:;
  /* 12e38e5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38e5d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e38e60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e38e66 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e38e6c mov edx, dword ptr [0x12e5cc98] */
  EDX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e38e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38e74 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e38e78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e38e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38e7f je 0x12e38ea3 */
  if (C.zf) goto L_12e38ea3;
  /* 12e38e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38e84 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e38e87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e38e8d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12e38e90 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e38e93 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12e38e96 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12e38e9a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12e38ea1 jmp 0x12e38eb4 */
  goto L_12e38eb4;
L_12e38ea3:;
  /* 12e38ea3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e38ea6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12e38ea9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12e38ead mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12e38eb4:;
  /* 12e38eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e38eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e38eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e38eba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12e38ebd push ecx */
  push32((uint32_t)(ECX));
  /* 12e38ebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e38ec1 push edx */
  push32((uint32_t)(EDX));
  /* 12e38ec2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12e38ec5 push eax */
  push32((uint32_t)(EAX));
  /* 12e38ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e38ec8 call 0x12e3b050 */
  push32(0x12e38ecdu); f_12e3b050();
  /* 12e38ecd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38ed2 jne 0x12e38ed8 */
  if (!C.zf) goto L_12e38ed8;
  /* 12e38ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38ed6 jmp 0x12e38ee3 */
  goto L_12e38ee3;
L_12e38ed8:;
  /* 12e38ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38edb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e38ee0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12e38ee3:;
  /* 12e38ee3 mov esp, ebp */
  ESP = (EBP);
  /* 12e38ee5 pop ebp */
  EBP = (pop32());
  /* 12e38ee6 ret  */
  ESPCHK(0x12e38e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x12e38ef0 (836 bytes, 238 insns) */
void f_12e38ef0(void) {
  FTRACE(0x12e38ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e38ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e38ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12e38ef3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e38ef6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e38ef8 call 0x12e36820 */
  push32(0x12e38efdu); f_12e36820();
  /* 12e38efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38f03 push eax */
  push32((uint32_t)(EAX));
  /* 12e38f04 call 0x12e39240 */
  push32(0x12e38f09u); f_12e39240();
  /* 12e38f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38f0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e38f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e38f12 cmp ecx, dword ptr [0x12e5fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38f18 jne 0x12e38f2b */
  if (!C.zf) goto L_12e38f2b;
  /* 12e38f1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e38f1c call 0x12e368c0 */
  push32(0x12e38f21u); f_12e368c0();
  /* 12e38f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38f26 jmp 0x12e39230 */
  goto L_12e39230;
L_12e38f2b:;
  /* 12e38f2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38f2f jne 0x12e38f4c */
  if (!C.zf) goto L_12e38f4c;
  /* 12e38f31 call 0x12e39320 */
  push32(0x12e38f36u); f_12e39320();
  /* 12e38f36 call 0x12e393a0 */
  push32(0x12e38f3bu); f_12e393a0();
  /* 12e38f3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e38f3d call 0x12e368c0 */
  push32(0x12e38f42u); f_12e368c0();
  /* 12e38f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38f47 jmp 0x12e39230 */
  goto L_12e39230;
L_12e38f4c:;
  /* 12e38f4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e38f53 jmp 0x12e38f5e */
  goto L_12e38f5e;
L_12e38f55:;
  /* 12e38f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38f5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e38f5e:;
  /* 12e38f5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38f62 jae 0x12e390af */
  if (!C.cf) goto L_12e390af;
  /* 12e38f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38f6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e38f6e mov ecx, dword ptr [eax + 0x12e5ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x12e5ceb8)));
  /* 12e38f74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38f77 jne 0x12e390aa */
  if (!C.zf) goto L_12e390aa;
  /* 12e38f7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e38f84 jmp 0x12e38f8f */
  goto L_12e38f8f;
L_12e38f86:;
  /* 12e38f86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38f89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38f8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12e38f8f:;
  /* 12e38f8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38f96 jae 0x12e38fa4 */
  if (!C.cf) goto L_12e38fa4;
  /* 12e38f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e38f9b mov byte ptr [eax + 0x12e5fd00], 0 */
  w8((uint32_t)(EAX + 0x12e5fd00), (0x0u));
  /* 12e38fa2 jmp 0x12e38f86 */
  goto L_12e38f86;
L_12e38fa4:;
  /* 12e38fa4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e38fab jmp 0x12e38fb6 */
  goto L_12e38fb6;
L_12e38fad:;
  /* 12e38fad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e38fb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38fb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e38fb6:;
  /* 12e38fb6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e38fba jae 0x12e39037 */
  if (!C.cf) goto L_12e39037;
  /* 12e38fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e38fbf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e38fc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e38fc5 lea ecx, [edx + eax*8 + 0x12e5cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12e5cec8));
  /* 12e38fcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e38fcf jmp 0x12e38fda */
  goto L_12e38fda;
L_12e38fd1:;
  /* 12e38fd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e38fd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e38fd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e38fda:;
  /* 12e38fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e38fdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e38fdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e38fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e38fe3 je 0x12e39032 */
  if (C.zf) goto L_12e39032;
  /* 12e38fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e38fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e38fea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e38fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e38fef je 0x12e39032 */
  if (C.zf) goto L_12e39032;
  /* 12e38ff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e38ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e38ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e38ff8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e38ffb jmp 0x12e39006 */
  goto L_12e39006;
L_12e38ffd:;
  /* 12e38ffd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39003 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e39006:;
  /* 12e39006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3900b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e3900e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39011 ja 0x12e39030 */
  if ((!C.cf&&!C.zf)) goto L_12e39030;
  /* 12e39013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e39019 mov dl, byte ptr [eax + 0x12e5fd01] */
  DL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e3901f or dl, byte ptr [ecx + 0x12e5ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12e5ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12e39025 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39028 mov byte ptr [eax + 0x12e5fd01], dl */
  w8((uint32_t)(EAX + 0x12e5fd01), (DL));
  /* 12e3902e jmp 0x12e38ffd */
  goto L_12e38ffd;
L_12e39030:;
  /* 12e39030 jmp 0x12e38fd1 */
  goto L_12e38fd1;
L_12e39032:;
  /* 12e39032 jmp 0x12e38fad */
  goto L_12e38fad;
L_12e39037:;
  /* 12e39037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3903a mov dword ptr [0x12e5fb64], ecx */
  w32((uint32_t)(0x12e5fb64), (ECX));
  /* 12e39040 mov dword ptr [0x12e5fbec], 1 */
  w32((uint32_t)(0x12e5fbec), (0x1u));
  /* 12e3904a mov edx, dword ptr [0x12e5fb64] */
  EDX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e39050 push edx */
  push32((uint32_t)(EDX));
  /* 12e39051 call 0x12e392a0 */
  push32(0x12e39056u); f_12e392a0();
  /* 12e39056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39059 mov dword ptr [0x12e5fe04], eax */
  w32((uint32_t)(0x12e5fe04), (EAX));
  /* 12e3905e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e39065 jmp 0x12e39070 */
  goto L_12e39070;
L_12e39067:;
  /* 12e39067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3906a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3906d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e39070:;
  /* 12e39070 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39074 jae 0x12e39094 */
  if (!C.cf) goto L_12e39094;
  /* 12e39076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39079 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3907c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3907f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e39082 mov cx, word ptr [ecx + eax*2 + 0x12e5cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12e5cebc)));
  /* 12e3908a mov word ptr [edx*2 + 0x12e5fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x12e5fbe0), (CX));
  /* 12e39092 jmp 0x12e39067 */
  goto L_12e39067;
L_12e39094:;
  /* 12e39094 call 0x12e393a0 */
  push32(0x12e39099u); f_12e393a0();
  /* 12e39099 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e3909b call 0x12e368c0 */
  push32(0x12e390a0u); f_12e368c0();
  /* 12e390a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e390a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e390a5 jmp 0x12e39230 */
  goto L_12e39230;
L_12e390aa:;
  /* 12e390aa jmp 0x12e38f55 */
  goto L_12e38f55;
L_12e390af:;
  /* 12e390af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12e390b2 push edx */
  push32((uint32_t)(EDX));
  /* 12e390b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e390b6 push eax */
  push32((uint32_t)(EAX));
  /* 12e390b7 call dword ptr [0x12e6033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6033c))), 0x12e390bdu);
  /* 12e390bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e390c0 jne 0x12e39202 */
  if (!C.zf) goto L_12e39202;
  /* 12e390c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e390cd jmp 0x12e390d8 */
  goto L_12e390d8;
L_12e390cf:;
  /* 12e390cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e390d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e390d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12e390d8:;
  /* 12e390d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e390df jae 0x12e390ed */
  if (!C.cf) goto L_12e390ed;
  /* 12e390e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e390e4 mov byte ptr [edx + 0x12e5fd00], 0 */
  w8((uint32_t)(EDX + 0x12e5fd00), (0x0u));
  /* 12e390eb jmp 0x12e390cf */
  goto L_12e390cf;
L_12e390ed:;
  /* 12e390ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e390f0 mov dword ptr [0x12e5fb64], eax */
  w32((uint32_t)(0x12e5fb64), (EAX));
  /* 12e390f5 mov dword ptr [0x12e5fe04], 0 */
  w32((uint32_t)(0x12e5fe04), (0x0u));
  /* 12e390ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39103 jbe 0x12e391be */
  if ((C.cf||C.zf)) goto L_12e391be;
  /* 12e39109 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12e3910c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e3910f jmp 0x12e3911a */
  goto L_12e3911a;
L_12e39111:;
  /* 12e39111 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e39114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39117 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12e3911a:;
  /* 12e3911a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3911d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3911f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e39121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e39123 je 0x12e3916c */
  if (C.zf) goto L_12e3916c;
  /* 12e39125 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e39128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3912a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e3912d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3912f je 0x12e3916c */
  if (C.zf) goto L_12e3916c;
  /* 12e39131 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e39134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e39138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e3913b jmp 0x12e39146 */
  goto L_12e39146;
L_12e3913d:;
  /* 12e3913d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e39146:;
  /* 12e39146 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e39149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3914b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e3914e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39151 ja 0x12e3916a */
  if ((!C.cf&&!C.zf)) goto L_12e3916a;
  /* 12e39153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39156 mov cl, byte ptr [eax + 0x12e5fd01] */
  CL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e3915c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12e3915f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39162 mov byte ptr [edx + 0x12e5fd01], cl */
  w8((uint32_t)(EDX + 0x12e5fd01), (CL));
  /* 12e39168 jmp 0x12e3913d */
  goto L_12e3913d;
L_12e3916a:;
  /* 12e3916a jmp 0x12e39111 */
  goto L_12e39111;
L_12e3916c:;
  /* 12e3916c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12e39173 jmp 0x12e3917e */
  goto L_12e3917e;
L_12e39175:;
  /* 12e39175 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3917b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e3917e:;
  /* 12e3917e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39185 jae 0x12e3919e */
  if (!C.cf) goto L_12e3919e;
  /* 12e39187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3918a mov dl, byte ptr [ecx + 0x12e5fd01] */
  DL = (r8((uint32_t)(ECX + 0x12e5fd01)));
  /* 12e39190 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12e39193 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e39196 mov byte ptr [eax + 0x12e5fd01], dl */
  w8((uint32_t)(EAX + 0x12e5fd01), (DL));
  /* 12e3919c jmp 0x12e39175 */
  goto L_12e39175;
L_12e3919e:;
  /* 12e3919e mov ecx, dword ptr [0x12e5fb64] */
  ECX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e391a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e391a5 call 0x12e392a0 */
  push32(0x12e391aau); f_12e392a0();
  /* 12e391aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e391ad mov dword ptr [0x12e5fe04], eax */
  w32((uint32_t)(0x12e5fe04), (EAX));
  /* 12e391b2 mov dword ptr [0x12e5fbec], 1 */
  w32((uint32_t)(0x12e5fbec), (0x1u));
  /* 12e391bc jmp 0x12e391c8 */
  goto L_12e391c8;
L_12e391be:;
  /* 12e391be mov dword ptr [0x12e5fbec], 0 */
  w32((uint32_t)(0x12e5fbec), (0x0u));
L_12e391c8:;
  /* 12e391c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e391cf jmp 0x12e391da */
  goto L_12e391da;
L_12e391d1:;
  /* 12e391d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e391d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e391d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e391da:;
  /* 12e391da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e391de jae 0x12e391ef */
  if (!C.cf) goto L_12e391ef;
  /* 12e391e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e391e3 mov word ptr [eax*2 + 0x12e5fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12e5fbe0), (0x0u));
  /* 12e391ed jmp 0x12e391d1 */
  goto L_12e391d1;
L_12e391ef:;
  /* 12e391ef call 0x12e393a0 */
  push32(0x12e391f4u); f_12e393a0();
  /* 12e391f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e391f6 call 0x12e368c0 */
  push32(0x12e391fbu); f_12e368c0();
  /* 12e391fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e391fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39200 jmp 0x12e39230 */
  goto L_12e39230;
L_12e39202:;
  /* 12e39202 cmp dword ptr [0x12e5e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39209 je 0x12e39223 */
  if (C.zf) goto L_12e39223;
  /* 12e3920b call 0x12e39320 */
  push32(0x12e39210u); f_12e39320();
  /* 12e39210 call 0x12e393a0 */
  push32(0x12e39215u); f_12e393a0();
  /* 12e39215 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e39217 call 0x12e368c0 */
  push32(0x12e3921cu); f_12e368c0();
  /* 12e3921c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3921f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39221 jmp 0x12e39230 */
  goto L_12e39230;
L_12e39223:;
  /* 12e39223 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e39225 call 0x12e368c0 */
  push32(0x12e3922au); f_12e368c0();
  /* 12e3922a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3922d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e39230:;
  /* 12e39230 mov esp, ebp */
  ESP = (EBP);
  /* 12e39232 pop ebp */
  EBP = (pop32());
  /* 12e39233 ret  */
  ESPCHK(0x12e38ef0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12e39240 (89 bytes, 21 insns) */
void f_12e39240(void) {
  FTRACE(0x12e39240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39240 push ebp */
  push32((uint32_t)(EBP));
  /* 12e39241 mov ebp, esp */
  EBP = (ESP);
  /* 12e39243 mov dword ptr [0x12e5e680], 0 */
  w32((uint32_t)(0x12e5e680), (0x0u));
  /* 12e3924d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39251 jne 0x12e39265 */
  if (!C.zf) goto L_12e39265;
  /* 12e39253 mov dword ptr [0x12e5e680], 1 */
  w32((uint32_t)(0x12e5e680), (0x1u));
  /* 12e3925d call dword ptr [0x12e60344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60344))), 0x12e39263u);
  /* 12e39263 jmp 0x12e39297 */
  goto L_12e39297;
L_12e39265:;
  /* 12e39265 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39269 jne 0x12e3927d */
  if (!C.zf) goto L_12e3927d;
  /* 12e3926b mov dword ptr [0x12e5e680], 1 */
  w32((uint32_t)(0x12e5e680), (0x1u));
  /* 12e39275 call dword ptr [0x12e60340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60340))), 0x12e3927bu);
  /* 12e3927b jmp 0x12e39297 */
  goto L_12e39297;
L_12e3927d:;
  /* 12e3927d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39281 jne 0x12e39294 */
  if (!C.zf) goto L_12e39294;
  /* 12e39283 mov dword ptr [0x12e5e680], 1 */
  w32((uint32_t)(0x12e5e680), (0x1u));
  /* 12e3928d mov eax, dword ptr [0x12e5e6a0] */
  EAX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e39292 jmp 0x12e39297 */
  goto L_12e39297;
L_12e39294:;
  /* 12e39294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12e39297:;
  /* 12e39297 pop ebp */
  EBP = (pop32());
  /* 12e39298 ret  */
  ESPCHK(0x12e39240u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x12e392a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12e392a0(void) {
  FTRACE(0x12e392a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e392a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e392a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e392a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e392a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e392a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e392aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e392ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e392b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e392b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e392ba ja 0x12e392ea */
  if ((!C.cf&&!C.zf)) goto L_12e392ea;
  /* 12e392bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e392bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e392c1 mov dl, byte ptr [eax + 0x12e39304] */
  DL = (r8((uint32_t)(EAX + 0x12e39304)));
  /* 12e392c7 jmp dword ptr [edx*4 + 0x12e392f0] */
  switch (EDX) {
    case 0: goto L_12e392ce;
    case 1: goto L_12e392d5;
    case 2: goto L_12e392dc;
    case 3: goto L_12e392e3;
    case 4: goto L_12e392ea;
    default: x86_unimpl("switch@0x12e392c7 out of table"); return;
  }
L_12e392ce:;
  /* 12e392ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 12e392d3 jmp 0x12e392ec */
  goto L_12e392ec;
L_12e392d5:;
  /* 12e392d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12e392da jmp 0x12e392ec */
  goto L_12e392ec;
L_12e392dc:;
  /* 12e392dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12e392e1 jmp 0x12e392ec */
  goto L_12e392ec;
L_12e392e3:;
  /* 12e392e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12e392e8 jmp 0x12e392ec */
  goto L_12e392ec;
L_12e392ea:;
  /* 12e392ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e392ec:;
  /* 12e392ec mov esp, ebp */
  ESP = (EBP);
  /* 12e392ee pop ebp */
  EBP = (pop32());
  /* 12e392ef ret  */
  ESPCHK(0x12e392a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12e39320 (116 bytes, 29 insns) */
void f_12e39320(void) {
  FTRACE(0x12e39320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39320 push ebp */
  push32((uint32_t)(EBP));
  /* 12e39321 mov ebp, esp */
  EBP = (ESP);
  /* 12e39323 push ecx */
  push32((uint32_t)(ECX));
  /* 12e39324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3932b jmp 0x12e39336 */
  goto L_12e39336;
L_12e3932d:;
  /* 12e3932d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e39336:;
  /* 12e39336 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3933d jge 0x12e3934b */
  if ((C.sf==C.of)) goto L_12e3934b;
  /* 12e3933f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39342 mov byte ptr [ecx + 0x12e5fd00], 0 */
  w8((uint32_t)(ECX + 0x12e5fd00), (0x0u));
  /* 12e39349 jmp 0x12e3932d */
  goto L_12e3932d;
L_12e3934b:;
  /* 12e3934b mov dword ptr [0x12e5fb64], 0 */
  w32((uint32_t)(0x12e5fb64), (0x0u));
  /* 12e39355 mov dword ptr [0x12e5fbec], 0 */
  w32((uint32_t)(0x12e5fbec), (0x0u));
  /* 12e3935f mov dword ptr [0x12e5fe04], 0 */
  w32((uint32_t)(0x12e5fe04), (0x0u));
  /* 12e39369 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e39370 jmp 0x12e3937b */
  goto L_12e3937b;
L_12e39372:;
  /* 12e39372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39375 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39378 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3937b:;
  /* 12e3937b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3937f jge 0x12e39390 */
  if ((C.sf==C.of)) goto L_12e39390;
  /* 12e39381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39384 mov word ptr [eax*2 + 0x12e5fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12e5fbe0), (0x0u));
  /* 12e3938e jmp 0x12e39372 */
  goto L_12e39372;
L_12e39390:;
  /* 12e39390 mov esp, ebp */
  ESP = (EBP);
  /* 12e39392 pop ebp */
  EBP = (pop32());
  /* 12e39393 ret  */
  ESPCHK(0x12e39320u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x12e393a0 (770 bytes, 175 insns) */
void f_12e393a0(void) {
  FTRACE(0x12e393a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e393a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e393a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e393a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e393a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12e393af push eax */
  push32((uint32_t)(EAX));
  /* 12e393b0 mov ecx, dword ptr [0x12e5fb64] */
  ECX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e393b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e393b7 call dword ptr [0x12e6033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6033c))), 0x12e393bdu);
  /* 12e393bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e393c0 jne 0x12e395d9 */
  if (!C.zf) goto L_12e395d9;
  /* 12e393c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12e393d0 jmp 0x12e393e1 */
  goto L_12e393e1;
L_12e393d2:;
  /* 12e393d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e393d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e393db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12e393e1:;
  /* 12e393e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e393eb jae 0x12e39402 */
  if (!C.cf) goto L_12e39402;
  /* 12e393ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e393f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12e393f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12e39400 jmp 0x12e393d2 */
  goto L_12e393d2;
L_12e39402:;
  /* 12e39402 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12e39409 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12e3940f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e39412 jmp 0x12e3941d */
  goto L_12e3941d;
L_12e39414:;
  /* 12e39414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39417 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3941a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3941d:;
  /* 12e3941d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39420 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39422 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e39424 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e39426 je 0x12e39468 */
  if (C.zf) goto L_12e39468;
  /* 12e39428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3942b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3942d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e3942f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12e39435 jmp 0x12e39446 */
  goto L_12e39446;
L_12e39437:;
  /* 12e39437 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3943d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39440 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12e39446:;
  /* 12e39446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39449 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3944b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e3944e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39454 ja 0x12e39466 */
  if ((!C.cf&&!C.zf)) goto L_12e39466;
  /* 12e39456 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3945c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12e39464 jmp 0x12e39437 */
  goto L_12e39437;
L_12e39466:;
  /* 12e39466 jmp 0x12e39414 */
  goto L_12e39414;
L_12e39468:;
  /* 12e39468 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3946a mov eax, dword ptr [0x12e5fe04] */
  EAX = (r32((uint32_t)(0x12e5fe04)));
  /* 12e3946f push eax */
  push32((uint32_t)(EAX));
  /* 12e39470 mov ecx, dword ptr [0x12e5fb64] */
  ECX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e39476 push ecx */
  push32((uint32_t)(ECX));
  /* 12e39477 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12e3947d push edx */
  push32((uint32_t)(EDX));
  /* 12e3947e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e39483 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12e39489 push eax */
  push32((uint32_t)(EAX));
  /* 12e3948a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3948c call 0x12e3b050 */
  push32(0x12e39491u); f_12e3b050();
  /* 12e39491 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e39496 mov ecx, dword ptr [0x12e5fb64] */
  ECX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e3949c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3949d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e394a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12e394a8 push edx */
  push32((uint32_t)(EDX));
  /* 12e394a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e394ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12e394b4 push eax */
  push32((uint32_t)(EAX));
  /* 12e394b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e394ba mov ecx, dword ptr [0x12e5fe04] */
  ECX = (r32((uint32_t)(0x12e5fe04)));
  /* 12e394c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e394c1 call 0x12e3b210 */
  push32(0x12e394c6u); f_12e3b210();
  /* 12e394c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e394c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e394cb mov edx, dword ptr [0x12e5fb64] */
  EDX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e394d1 push edx */
  push32((uint32_t)(EDX));
  /* 12e394d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e394d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12e394dd push eax */
  push32((uint32_t)(EAX));
  /* 12e394de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e394e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12e394e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e394ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12e394ef mov edx, dword ptr [0x12e5fe04] */
  EDX = (r32((uint32_t)(0x12e5fe04)));
  /* 12e394f5 push edx */
  push32((uint32_t)(EDX));
  /* 12e394f6 call 0x12e3b210 */
  push32(0x12e394fbu); f_12e3b210();
  /* 12e394fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e394fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12e39508 jmp 0x12e39519 */
  goto L_12e39519;
L_12e3950a:;
  /* 12e3950a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39510 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39513 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12e39519:;
  /* 12e39519 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39523 jae 0x12e395d4 */
  if (!C.cf) goto L_12e395d4;
  /* 12e39529 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3952f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39531 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12e39539 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3953c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3953e je 0x12e39576 */
  if (C.zf) goto L_12e39576;
  /* 12e39540 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39546 mov cl, byte ptr [eax + 0x12e5fd01] */
  CL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e3954c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12e3954f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39555 mov byte ptr [edx + 0x12e5fd01], cl */
  w8((uint32_t)(EDX + 0x12e5fd01), (CL));
  /* 12e3955b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39561 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39567 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12e3956e mov byte ptr [eax + 0x12e5fc00], dl */
  w8((uint32_t)(EAX + 0x12e5fc00), (DL));
  /* 12e39574 jmp 0x12e395cf */
  goto L_12e395cf;
L_12e39576:;
  /* 12e39576 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3957c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3957e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12e39586 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e39589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3958b je 0x12e395c2 */
  if (C.zf) goto L_12e395c2;
  /* 12e3958d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39593 mov al, byte ptr [edx + 0x12e5fd01] */
  AL = (r8((uint32_t)(EDX + 0x12e5fd01)));
  /* 12e39599 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12e3959b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e395a1 mov byte ptr [ecx + 0x12e5fd01], al */
  w8((uint32_t)(ECX + 0x12e5fd01), (AL));
  /* 12e395a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e395ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e395b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12e395ba mov byte ptr [edx + 0x12e5fc00], cl */
  w8((uint32_t)(EDX + 0x12e5fc00), (CL));
  /* 12e395c0 jmp 0x12e395cf */
  goto L_12e395cf;
L_12e395c2:;
  /* 12e395c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e395c8 mov byte ptr [edx + 0x12e5fc00], 0 */
  w8((uint32_t)(EDX + 0x12e5fc00), (0x0u));
L_12e395cf:;
  /* 12e395cf jmp 0x12e3950a */
  goto L_12e3950a;
L_12e395d4:;
  /* 12e395d4 jmp 0x12e3969e */
  goto L_12e3969e;
L_12e395d9:;
  /* 12e395d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12e395e3 jmp 0x12e395f4 */
  goto L_12e395f4;
L_12e395e5:;
  /* 12e395e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e395eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e395ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12e395f4:;
  /* 12e395f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e395fe jae 0x12e3969e */
  if (!C.cf) goto L_12e3969e;
  /* 12e39604 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3960b jb 0x12e39648 */
  if (C.cf) goto L_12e39648;
  /* 12e3960d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39614 ja 0x12e39648 */
  if ((!C.cf&&!C.zf)) goto L_12e39648;
  /* 12e39616 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3961c mov dl, byte ptr [ecx + 0x12e5fd01] */
  DL = (r8((uint32_t)(ECX + 0x12e5fd01)));
  /* 12e39622 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12e39625 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3962b mov byte ptr [eax + 0x12e5fd01], dl */
  w8((uint32_t)(EAX + 0x12e5fd01), (DL));
  /* 12e39631 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39637 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3963a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39640 mov byte ptr [edx + 0x12e5fc00], cl */
  w8((uint32_t)(EDX + 0x12e5fc00), (CL));
  /* 12e39646 jmp 0x12e39699 */
  goto L_12e39699;
L_12e39648:;
  /* 12e39648 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3964f jb 0x12e3968c */
  if (C.cf) goto L_12e3968c;
  /* 12e39651 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39658 ja 0x12e3968c */
  if ((!C.cf&&!C.zf)) goto L_12e3968c;
  /* 12e3965a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39660 mov cl, byte ptr [eax + 0x12e5fd01] */
  CL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e39666 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e39669 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3966f mov byte ptr [edx + 0x12e5fd01], cl */
  w8((uint32_t)(EDX + 0x12e5fd01), (CL));
  /* 12e39675 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e3967b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3967e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39684 mov byte ptr [ecx + 0x12e5fc00], al */
  w8((uint32_t)(ECX + 0x12e5fc00), (AL));
  /* 12e3968a jmp 0x12e39699 */
  goto L_12e39699;
L_12e3968c:;
  /* 12e3968c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12e39692 mov byte ptr [edx + 0x12e5fc00], 0 */
  w8((uint32_t)(EDX + 0x12e5fc00), (0x0u));
L_12e39699:;
  /* 12e39699 jmp 0x12e395e5 */
  goto L_12e395e5;
L_12e3969e:;
  /* 12e3969e mov esp, ebp */
  ESP = (EBP);
  /* 12e396a0 pop ebp */
  EBP = (pop32());
  /* 12e396a1 ret  */
  ESPCHK(0x12e393a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x12e396b0 (23 bytes, 9 insns) */
void f_12e396b0(void) {
  FTRACE(0x12e396b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e396b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e396b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e396b3 cmp dword ptr [0x12e5fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e396ba je 0x12e396c3 */
  if (C.zf) goto L_12e396c3;
  /* 12e396bc mov eax, dword ptr [0x12e5fb64] */
  EAX = (r32((uint32_t)(0x12e5fb64)));
  /* 12e396c1 jmp 0x12e396c5 */
  goto L_12e396c5;
L_12e396c3:;
  /* 12e396c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e396c5:;
  /* 12e396c5 pop ebp */
  EBP = (pop32());
  /* 12e396c6 ret  */
  ESPCHK(0x12e396b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x12e396d0 (34 bytes, 10 insns) */
void f_12e396d0(void) {
  FTRACE(0x12e396d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e396d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e396d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e396d3 cmp dword ptr [0x12e5ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e396da jne 0x12e396f0 */
  if (!C.zf) goto L_12e396f0;
  /* 12e396dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12e396de call 0x12e38ef0 */
  push32(0x12e396e3u); f_12e38ef0();
  /* 12e396e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e396e6 mov dword ptr [0x12e5ffb0], 1 */
  w32((uint32_t)(0x12e5ffb0), (0x1u));
L_12e396f0:;
  /* 12e396f0 pop ebp */
  EBP = (pop32());
  /* 12e396f1 ret  */
  ESPCHK(0x12e396d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x12e39700 (664 bytes, 268 insns) [15 switch table(s)] */
void f_12e39700(void) {
  FTRACE(0x12e39700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39700 push ebp */
  push32((uint32_t)(EBP));
  /* 12e39701 mov ebp, esp */
  EBP = (ESP);
  /* 12e39703 push edi */
  push32((uint32_t)(EDI));
  /* 12e39704 push esi */
  push32((uint32_t)(ESI));
  /* 12e39705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e39708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3970b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3970e mov eax, ecx */
  EAX = (ECX);
  /* 12e39710 mov edx, ecx */
  EDX = (ECX);
  /* 12e39712 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39714 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39716 jbe 0x12e39720 */
  if ((C.cf||C.zf)) goto L_12e39720;
  /* 12e39718 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3971a jb 0x12e39898 */
  if (C.cf) goto L_12e39898;
L_12e39720:;
  /* 12e39720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e39726 jne 0x12e3973c */
  if (!C.zf) goto L_12e3973c;
  /* 12e39728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3972b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3972e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39731 jb 0x12e3975c */
  if (C.cf) goto L_12e3975c;
  /* 12e39733 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e39735 jmp dword ptr [edx*4 + 0x12e39848] */
  switch (EDX) {
    case 0: goto L_12e39858;
    case 1: goto L_12e39860;
    case 2: goto L_12e3986c;
    case 3: goto L_12e39880;
    default: x86_unimpl("switch@0x12e39735 out of table"); return;
  }
L_12e3973c:;
  /* 12e3973c mov eax, edi */
  EAX = (EDI);
  /* 12e3973e mov edx, 3 */
  EDX = (0x3u);
  /* 12e39743 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39746 jb 0x12e39754 */
  if (C.cf) goto L_12e39754;
  /* 12e39748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3974b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3974d jmp dword ptr [eax*4 + 0x12e39760] */
  switch (EAX) {
    case 1: goto L_12e39770;
    case 2: goto L_12e3979c;
    case 3: goto L_12e397c0;
    default: x86_unimpl("switch@0x12e3974d out of table"); return;
  }
L_12e39754:;
  /* 12e39754 jmp dword ptr [ecx*4 + 0x12e39858] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12e39858)))); return;
  /* 12e3975b nop  */
  /* nop */
L_12e3975c:;
  /* 12e3975c jmp dword ptr [ecx*4 + 0x12e397dc] */
  switch (ECX) {
    case 0: goto L_12e3983f;
    case 1: goto L_12e3982c;
    case 2: goto L_12e39824;
    case 3: goto L_12e3981c;
    case 4: goto L_12e39814;
    case 5: goto L_12e3980c;
    case 6: goto L_12e39804;
    case 7: goto L_12e397fc;
    default: x86_unimpl("switch@0x12e3975c out of table"); return;
  }
  /* 12e39763 nop  */
  /* nop */
L_12e39770:;
  /* 12e39770 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39772 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e39774 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e39776 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e39779 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3977c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3977f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e39782 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e39785 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39788 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3978b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3978e jb 0x12e3975c */
  if (C.cf) goto L_12e3975c;
  /* 12e39790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e39792 jmp dword ptr [edx*4 + 0x12e39848] */
  switch (EDX) {
    case 0: goto L_12e39858;
    case 1: goto L_12e39860;
    case 2: goto L_12e3986c;
    case 3: goto L_12e39880;
    default: x86_unimpl("switch@0x12e39792 out of table"); return;
  }
  /* 12e39799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3979c:;
  /* 12e3979c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3979e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e397a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e397a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e397a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e397a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e397ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e397ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e397b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e397b4 jb 0x12e3975c */
  if (C.cf) goto L_12e3975c;
  /* 12e397b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e397b8 jmp dword ptr [edx*4 + 0x12e39848] */
  switch (EDX) {
    case 0: goto L_12e39858;
    case 1: goto L_12e39860;
    case 2: goto L_12e3986c;
    case 3: goto L_12e39880;
    default: x86_unimpl("switch@0x12e397b8 out of table"); return;
  }
  /* 12e397bf nop  */
  /* nop */
L_12e397c0:;
  /* 12e397c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e397c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e397c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e397c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e397c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e397ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e397cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e397ce jb 0x12e3975c */
  if (C.cf) goto L_12e3975c;
  /* 12e397d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e397d2 jmp dword ptr [edx*4 + 0x12e39848] */
  switch (EDX) {
    case 0: goto L_12e39858;
    case 1: goto L_12e39860;
    case 2: goto L_12e3986c;
    case 3: goto L_12e39880;
    default: x86_unimpl("switch@0x12e397d2 out of table"); return;
  }
  /* 12e397d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e397fc:;
  /* 12e397fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12e39800 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12e39804:;
  /* 12e39804 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12e39808 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12e3980c:;
  /* 12e3980c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12e39810 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12e39814:;
  /* 12e39814 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12e39818 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12e3981c:;
  /* 12e3981c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12e39820 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12e39824:;
  /* 12e39824 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12e39828 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12e3982c:;
  /* 12e3982c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12e39830 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12e39834 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e3983b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3983d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e3983f:;
  /* 12e3983f jmp dword ptr [edx*4 + 0x12e39848] */
  switch (EDX) {
    case 0: goto L_12e39858;
    case 1: goto L_12e39860;
    case 2: goto L_12e3986c;
    case 3: goto L_12e39880;
    default: x86_unimpl("switch@0x12e3983f out of table"); return;
  }
  /* 12e39846 mov edi, edi */
  EDI = (EDI);
L_12e39858:;
  /* 12e39858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3985b pop esi */
  ESI = (pop32());
  /* 12e3985c pop edi */
  EDI = (pop32());
  /* 12e3985d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3985e ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e3985f nop  */
  /* nop */
L_12e39860:;
  /* 12e39860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e39862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e39864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39867 pop esi */
  ESI = (pop32());
  /* 12e39868 pop edi */
  EDI = (pop32());
  /* 12e39869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3986a ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e3986b nop  */
  /* nop */
L_12e3986c:;
  /* 12e3986c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3986e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e39870 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e39873 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e39876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39879 pop esi */
  ESI = (pop32());
  /* 12e3987a pop edi */
  EDI = (pop32());
  /* 12e3987b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3987c ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e3987d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e39880:;
  /* 12e39880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e39882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e39884 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e39887 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3988a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3988d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e39890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39893 pop esi */
  ESI = (pop32());
  /* 12e39894 pop edi */
  EDI = (pop32());
  /* 12e39895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e39896 ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e39897 nop  */
  /* nop */
L_12e39898:;
  /* 12e39898 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12e3989c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12e398a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e398a6 jne 0x12e398cc */
  if (!C.zf) goto L_12e398cc;
  /* 12e398a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e398ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e398ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e398b1 jb 0x12e398c0 */
  if (C.cf) goto L_12e398c0;
  /* 12e398b3 std  */
  C.df=1;
  /* 12e398b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e398b6 cld  */
  C.df=0;
  /* 12e398b7 jmp dword ptr [edx*4 + 0x12e399e0] */
  switch (EDX) {
    case 0: goto L_12e399f0;
    case 1: goto L_12e399f8;
    case 2: goto L_12e39a08;
    case 3: goto L_12e39a1c;
    default: x86_unimpl("switch@0x12e398b7 out of table"); return;
  }
  /* 12e398be mov edi, edi */
  EDI = (EDI);
L_12e398c0:;
  /* 12e398c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e398c2 jmp dword ptr [ecx*4 + 0x12e39990] */
  switch (ECX) {
    case 0: goto L_12e399d7;
    default: x86_unimpl("switch@0x12e398c2 out of table"); return;
  }
  /* 12e398c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e398cc:;
  /* 12e398cc mov eax, edi */
  EAX = (EDI);
  /* 12e398ce mov edx, 3 */
  EDX = (0x3u);
  /* 12e398d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e398d6 jb 0x12e398e4 */
  if (C.cf) goto L_12e398e4;
  /* 12e398d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e398db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e398dd jmp dword ptr [eax*4 + 0x12e398e8] */
  switch (EAX) {
    case 1: goto L_12e398f8;
    case 2: goto L_12e39918;
    case 3: goto L_12e39940;
    default: x86_unimpl("switch@0x12e398dd out of table"); return;
  }
L_12e398e4:;
  /* 12e398e4 jmp dword ptr [ecx*4 + 0x12e399e0] */
  switch (ECX) {
    case 0: goto L_12e399f0;
    case 1: goto L_12e399f8;
    case 2: goto L_12e39a08;
    case 3: goto L_12e39a1c;
    default: x86_unimpl("switch@0x12e398e4 out of table"); return;
  }
  /* 12e398eb nop  */
  /* nop */
L_12e398f8:;
  /* 12e398f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e398fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e398fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e39900 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12e39901 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e39904 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12e39905 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39908 jb 0x12e398c0 */
  if (C.cf) goto L_12e398c0;
  /* 12e3990a std  */
  C.df=1;
  /* 12e3990b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3990d cld  */
  C.df=0;
  /* 12e3990e jmp dword ptr [edx*4 + 0x12e399e0] */
  switch (EDX) {
    case 0: goto L_12e399f0;
    case 1: goto L_12e399f8;
    case 2: goto L_12e39a08;
    case 3: goto L_12e39a1c;
    default: x86_unimpl("switch@0x12e3990e out of table"); return;
  }
  /* 12e39915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e39918:;
  /* 12e39918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3991b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3991d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e39920 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e39923 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e39926 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e39929 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3992c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3992f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39932 jb 0x12e398c0 */
  if (C.cf) goto L_12e398c0;
  /* 12e39934 std  */
  C.df=1;
  /* 12e39935 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e39937 cld  */
  C.df=0;
  /* 12e39938 jmp dword ptr [edx*4 + 0x12e399e0] */
  switch (EDX) {
    case 0: goto L_12e399f0;
    case 1: goto L_12e399f8;
    case 2: goto L_12e39a08;
    case 3: goto L_12e39a1c;
    default: x86_unimpl("switch@0x12e39938 out of table"); return;
  }
  /* 12e3993f nop  */
  /* nop */
L_12e39940:;
  /* 12e39940 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e39943 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39945 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e39948 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3994b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3994e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e39951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e39954 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e39957 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3995a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3995d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39960 jb 0x12e398c0 */
  if (C.cf) goto L_12e398c0;
  /* 12e39966 std  */
  C.df=1;
  /* 12e39967 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e39969 cld  */
  C.df=0;
  /* 12e3996a jmp dword ptr [edx*4 + 0x12e399e0] */
  switch (EDX) {
    case 0: goto L_12e399f0;
    case 1: goto L_12e399f8;
    case 2: goto L_12e39a08;
    case 3: goto L_12e39a1c;
    default: x86_unimpl("switch@0x12e3996a out of table"); return;
  }
  /* 12e39971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12e39974 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12e39975 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e39976 jecxz 0x12e3998a */
  x86_unimpl("jecxz @ 0x12e39976");
  /* 12e39978 pushfd  */
  x86_unimpl("pushfd @ 0x12e39978");
  /* 12e39979 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3997a jecxz 0x12e3998e */
  x86_unimpl("jecxz @ 0x12e3997a");
  /* 12e3997c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12e3997d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3997e jecxz 0x12e39992 */
  x86_unimpl("jecxz @ 0x12e3997e");
  /* 12e39980 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 12e39981 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e39982 jecxz 0x12e39996 */
  x86_unimpl("jecxz @ 0x12e39982");
  /* 12e39984 mov ah, 0x99 */
  AH = (0x99u);
  /* 12e39986 jecxz 0x12e3999a */
  x86_unimpl("jecxz @ 0x12e39986");
  /* 12e39988 mov esp, 0xc412e399 */
  ESP = (0xc412e399u);
  /* 12e3998d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3998e jecxz 0x12e399a2 */
  x86_unimpl("jecxz @ 0x12e3998e");
  /* 12e39994 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12e39998 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12e3999c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12e399a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12e399a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12e399a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12e399ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12e399b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12e399b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12e399b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12e399bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12e399c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12e399c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12e399c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12e399cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e399d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e399d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e399d7:;
  /* 12e399d7 jmp dword ptr [edx*4 + 0x12e399e0] */
  switch (EDX) {
    case 0: goto L_12e399f0;
    case 1: goto L_12e399f8;
    case 2: goto L_12e39a08;
    case 3: goto L_12e39a1c;
    default: x86_unimpl("switch@0x12e399d7 out of table"); return;
  }
  /* 12e399de mov edi, edi */
  EDI = (EDI);
L_12e399f0:;
  /* 12e399f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e399f3 pop esi */
  ESI = (pop32());
  /* 12e399f4 pop edi */
  EDI = (pop32());
  /* 12e399f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e399f6 ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e399f7 nop  */
  /* nop */
L_12e399f8:;
  /* 12e399f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e399fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e399fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39a01 pop esi */
  ESI = (pop32());
  /* 12e39a02 pop edi */
  EDI = (pop32());
  /* 12e39a03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e39a04 ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e39a05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e39a08:;
  /* 12e39a08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e39a0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e39a0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e39a11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e39a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39a17 pop esi */
  ESI = (pop32());
  /* 12e39a18 pop edi */
  EDI = (pop32());
  /* 12e39a19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e39a1a ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
  /* 12e39a1b nop  */
  /* nop */
L_12e39a1c:;
  /* 12e39a1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e39a1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e39a22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e39a25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e39a28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e39a2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e39a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39a31 pop esi */
  ESI = (pop32());
  /* 12e39a32 pop edi */
  EDI = (pop32());
  /* 12e39a33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e39a34 ret  */
  ESPCHK(0x12e39700u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12e39a40 (104 bytes, 43 insns) */
void f_12e39a40(void) {
  FTRACE(0x12e39a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39a40 push ebx */
  push32((uint32_t)(EBX));
  /* 12e39a41 push esi */
  push32((uint32_t)(ESI));
  /* 12e39a42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12e39a46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39a48 jne 0x12e39a62 */
  if (!C.zf) goto L_12e39a62;
  /* 12e39a4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e39a4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e39a52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39a54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e39a56 mov ebx, eax */
  EBX = (EAX);
  /* 12e39a58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e39a5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e39a5e mov edx, ebx */
  EDX = (EBX);
  /* 12e39a60 jmp 0x12e39aa3 */
  goto L_12e39aa3;
L_12e39a62:;
  /* 12e39a62 mov ecx, eax */
  ECX = (EAX);
  /* 12e39a64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e39a68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e39a6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12e39a70:;
  /* 12e39a70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e39a72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12e39a74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e39a76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12e39a78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e39a7a jne 0x12e39a70 */
  if (!C.zf) goto L_12e39a70;
  /* 12e39a7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e39a7e mov esi, eax */
  ESI = (EAX);
  /* 12e39a80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e39a84 mov ecx, eax */
  ECX = (EAX);
  /* 12e39a86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e39a8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e39a8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39a8e jb 0x12e39a9e */
  if (C.cf) goto L_12e39a9e;
  /* 12e39a90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39a94 ja 0x12e39a9e */
  if ((!C.cf&&!C.zf)) goto L_12e39a9e;
  /* 12e39a96 jb 0x12e39a9f */
  if (C.cf) goto L_12e39a9f;
  /* 12e39a98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39a9c jbe 0x12e39a9f */
  if ((C.cf||C.zf)) goto L_12e39a9f;
L_12e39a9e:;
  /* 12e39a9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12e39a9f:;
  /* 12e39a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39aa1 mov eax, esi */
  EAX = (ESI);
L_12e39aa3:;
  /* 12e39aa3 pop esi */
  ESI = (pop32());
  /* 12e39aa4 pop ebx */
  EBX = (pop32());
  /* 12e39aa5 ret 0x10 */
  ESPCHK(0x12e39a40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12e39ab0 (117 bytes, 44 insns) */
void f_12e39ab0(void) {
  FTRACE(0x12e39ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e39ab1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12e39ab5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39ab7 jne 0x12e39ad1 */
  if (!C.zf) goto L_12e39ad1;
  /* 12e39ab9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e39abd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e39ac1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39ac3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e39ac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e39ac9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e39acb mov eax, edx */
  EAX = (EDX);
  /* 12e39acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e39acf jmp 0x12e39b21 */
  goto L_12e39b21;
L_12e39ad1:;
  /* 12e39ad1 mov ecx, eax */
  ECX = (EAX);
  /* 12e39ad3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e39ad7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e39adb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12e39adf:;
  /* 12e39adf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e39ae1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12e39ae3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e39ae5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12e39ae7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e39ae9 jne 0x12e39adf */
  if (!C.zf) goto L_12e39adf;
  /* 12e39aeb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e39aed mov ecx, eax */
  ECX = (EAX);
  /* 12e39aef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e39af3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12e39af4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e39af8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39afa jb 0x12e39b0a */
  if (C.cf) goto L_12e39b0a;
  /* 12e39afc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39b00 ja 0x12e39b0a */
  if ((!C.cf&&!C.zf)) goto L_12e39b0a;
  /* 12e39b02 jb 0x12e39b12 */
  if (C.cf) goto L_12e39b12;
  /* 12e39b04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39b08 jbe 0x12e39b12 */
  if ((C.cf||C.zf)) goto L_12e39b12;
L_12e39b0a:;
  /* 12e39b0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39b0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12e39b12:;
  /* 12e39b12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39b16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e39b1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e39b1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12e39b21:;
  /* 12e39b21 pop ebx */
  EBX = (pop32());
  /* 12e39b22 ret 0x10 */
  ESPCHK(0x12e39ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009b30 @ 0x12e39b30 (628 bytes, 214 insns) */
void f_12e39b30(void) {
  FTRACE(0x12e39b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e39b31 mov ebp, esp */
  EBP = (ESP);
  /* 12e39b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39b36 push ebx */
  push32((uint32_t)(EBX));
  /* 12e39b37 push esi */
  push32((uint32_t)(ESI));
  /* 12e39b38 push edi */
  push32((uint32_t)(EDI));
L_12e39b39:;
  /* 12e39b39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39b3d jne 0x12e39b5d */
  if (!C.zf) goto L_12e39b5d;
  /* 12e39b3f push 0x12e59ea4 */
  push32((uint32_t)(0x12e59ea4u));
  /* 12e39b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e39b46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12e39b48 push 0x12e59e98 */
  push32((uint32_t)(0x12e59e98u));
  /* 12e39b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e39b4f call 0x12e31ee0 */
  push32(0x12e39b54u); f_12e31ee0();
  /* 12e39b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39b5a jne 0x12e39b5d */
  if (!C.zf) goto L_12e39b5d;
  /* 12e39b5c int3  */
  x86_unimpl("int3 @ 0x12e39b5c");
L_12e39b5d:;
  /* 12e39b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39b61 jne 0x12e39b39 */
  if (!C.zf) goto L_12e39b39;
  /* 12e39b63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e39b66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e39b69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39b6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e39b6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e39b72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39b75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e39b78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12e39b7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e39b80 je 0x12e39b8f */
  if (C.zf) goto L_12e39b8f;
  /* 12e39b82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39b85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e39b88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12e39b8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e39b8d je 0x12e39ba5 */
  if (C.zf) goto L_12e39ba5;
L_12e39b8f:;
  /* 12e39b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39b92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e39b95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12e39b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39b9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12e39b9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e39ba0 jmp 0x12e39d9d */
  goto L_12e39d9d;
L_12e39ba5:;
  /* 12e39ba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39ba8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e39bab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e39bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39bb0 je 0x12e39bfc */
  if (C.zf) goto L_12e39bfc;
  /* 12e39bb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bb5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e39bbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e39bc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12e39bc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39bc7 je 0x12e39be5 */
  if (C.zf) goto L_12e39be5;
  /* 12e39bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e39bd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e39bd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e39bda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12e39bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39be0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e39be3 jmp 0x12e39bfc */
  goto L_12e39bfc;
L_12e39be5:;
  /* 12e39be5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39be8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e39beb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12e39bee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bf1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e39bf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e39bf7 jmp 0x12e39d9d */
  goto L_12e39d9d;
L_12e39bfc:;
  /* 12e39bfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39bff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e39c02 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e39c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c08 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e39c0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c0e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e39c11 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12e39c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c17 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e39c1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c1d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e39c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e39c2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39c2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e39c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e39c37 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12e39c3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e39c3f jne 0x12e39c6f */
  if (!C.zf) goto L_12e39c6f;
  /* 12e39c41 cmp dword ptr [ebp - 8], 0x12e5d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12e5d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39c48 je 0x12e39c53 */
  if (C.zf) goto L_12e39c53;
  /* 12e39c4a cmp dword ptr [ebp - 8], 0x12e5d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12e5d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39c51 jne 0x12e39c63 */
  if (!C.zf) goto L_12e39c63;
L_12e39c53:;
  /* 12e39c53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e39c56 push edx */
  push32((uint32_t)(EDX));
  /* 12e39c57 call 0x12e3baa0 */
  push32(0x12e39c5cu); f_12e3baa0();
  /* 12e39c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39c61 jne 0x12e39c6f */
  if (!C.zf) goto L_12e39c6f;
L_12e39c63:;
  /* 12e39c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c66 push eax */
  push32((uint32_t)(EAX));
  /* 12e39c67 call 0x12e3b9d0 */
  push32(0x12e39c6cu); f_12e3b9d0();
  /* 12e39c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e39c6f:;
  /* 12e39c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c72 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e39c75 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12e39c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e39c7d je 0x12e39d5b */
  if (C.zf) goto L_12e39d5b;
L_12e39c83:;
  /* 12e39c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39c89 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12e39c8b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39c8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e39c90 jge 0x12e39cb3 */
  if ((C.sf==C.of)) goto L_12e39cb3;
  /* 12e39c92 push 0x12e59e58 */
  push32((uint32_t)(0x12e59e58u));
  /* 12e39c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e39c99 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12e39c9e push 0x12e59e98 */
  push32((uint32_t)(0x12e59e98u));
  /* 12e39ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e39ca5 call 0x12e31ee0 */
  push32(0x12e39caau); f_12e31ee0();
  /* 12e39caa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39cad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39cb0 jne 0x12e39cb3 */
  if (!C.zf) goto L_12e39cb3;
  /* 12e39cb2 int3  */
  x86_unimpl("int3 @ 0x12e39cb2");
L_12e39cb3:;
  /* 12e39cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39cb7 jne 0x12e39c83 */
  if (!C.zf) goto L_12e39c83;
  /* 12e39cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39cbf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e39cc1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39cc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e39cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39cca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e39ccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39cd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e39cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39cd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e39cdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39ce1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e39ce4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39ce8 jle 0x12e39d06 */
  if ((C.zf||C.sf!=C.of)) goto L_12e39d06;
  /* 12e39cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39ced push ecx */
  push32((uint32_t)(ECX));
  /* 12e39cee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39cf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e39cf4 push eax */
  push32((uint32_t)(EAX));
  /* 12e39cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e39cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e39cf9 call 0x12e3b6c0 */
  push32(0x12e39cfeu); f_12e3b6c0();
  /* 12e39cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39d01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e39d04 jmp 0x12e39d4e */
  goto L_12e39d4e;
L_12e39d06:;
  /* 12e39d06 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39d0a je 0x12e39d29 */
  if (C.zf) goto L_12e39d29;
  /* 12e39d0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e39d0f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e39d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e39d15 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e39d18 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e39d1b mov ecx, dword ptr [edx*4 + 0x12e5fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e39d22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39d24 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e39d27 jmp 0x12e39d30 */
  goto L_12e39d30;
L_12e39d29:;
  /* 12e39d29 mov dword ptr [ebp - 0x14], 0x12e5ca60 */
  w32((uint32_t)(EBP + -0x14), (0x12e5ca60u));
L_12e39d30:;
  /* 12e39d30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e39d33 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12e39d37 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e39d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39d3c je 0x12e39d4e */
  if (C.zf) goto L_12e39d4e;
  /* 12e39d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e39d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e39d42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e39d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12e39d46 call 0x12e3b570 */
  push32(0x12e39d4bu); f_12e3b570();
  /* 12e39d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e39d4e:;
  /* 12e39d4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39d51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e39d54 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e39d57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e39d59 jmp 0x12e39d79 */
  goto L_12e39d79;
L_12e39d5b:;
  /* 12e39d5b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e39d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39d65 push edx */
  push32((uint32_t)(EDX));
  /* 12e39d66 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12e39d69 push eax */
  push32((uint32_t)(EAX));
  /* 12e39d6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e39d6d push ecx */
  push32((uint32_t)(ECX));
  /* 12e39d6e call 0x12e3b6c0 */
  push32(0x12e39d73u); f_12e3b6c0();
  /* 12e39d73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39d76 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e39d79:;
  /* 12e39d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e39d7c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39d7f je 0x12e39d95 */
  if (C.zf) goto L_12e39d95;
  /* 12e39d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39d84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e39d87 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12e39d8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39d8d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12e39d90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e39d93 jmp 0x12e39d9d */
  goto L_12e39d9d;
L_12e39d95:;
  /* 12e39d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39d98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12e39d9d:;
  /* 12e39d9d pop edi */
  EDI = (pop32());
  /* 12e39d9e pop esi */
  ESI = (pop32());
  /* 12e39d9f pop ebx */
  EBX = (pop32());
  /* 12e39da0 mov esp, ebp */
  ESP = (EBP);
  /* 12e39da2 pop ebp */
  EBP = (pop32());
  /* 12e39da3 ret  */
  ESPCHK(0x12e39b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009db0 @ 0x12e39db0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12e39db0(void) {
  FTRACE(0x12e39db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e39db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e39db1 mov ebp, esp */
  EBP = (ESP);
  /* 12e39db3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39db9 push ebx */
  push32((uint32_t)(EBX));
  /* 12e39dba push esi */
  push32((uint32_t)(ESI));
  /* 12e39dbb push edi */
  push32((uint32_t)(EDI));
  /* 12e39dbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e39dc3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12e39dcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12e39dd4:;
  /* 12e39dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e39dd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e39dd9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12e39ddc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39de0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e39de3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39de6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e39de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e39deb je 0x12e3a9c7 */
  if (C.zf) goto L_12e3a9c7;
  /* 12e39df1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39df8 jl 0x12e3a9c7 */
  if ((C.sf!=C.of)) goto L_12e3a9c7;
  /* 12e39dfe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39e02 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39e05 jl 0x12e39e26 */
  if ((C.sf!=C.of)) goto L_12e39e26;
  /* 12e39e07 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39e0b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39e0e jg 0x12e39e26 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e39e26;
  /* 12e39e10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39e14 movsx ecx, byte ptr [eax + 0x12e59e90] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12e59e90))));
  /* 12e39e1b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12e39e1e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12e39e24 jmp 0x12e39e30 */
  goto L_12e39e30;
L_12e39e26:;
  /* 12e39e26 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12e39e30:;
  /* 12e39e30 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12e39e36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e39e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e39e3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e39e3f movsx edx, byte ptr [ecx + eax*8 + 0x12e59eb0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12e59eb0))));
  /* 12e39e47 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12e39e4a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e39e4d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e39e50 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12e39e56 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39e5d ja 0x12e3a9c2 */
  if ((!C.cf&&!C.zf)) goto L_12e3a9c2;
  /* 12e39e63 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12e39e69 jmp dword ptr [ecx*4 + 0x12e3a9d4] */
  switch (ECX) {
    case 0: goto L_12e39e70;
    case 1: goto L_12e39f0a;
    case 2: goto L_12e39f4c;
    case 3: goto L_12e39fbb;
    case 4: goto L_12e3a013;
    case 5: goto L_12e3a022;
    case 6: goto L_12e3a06e;
    case 7: goto L_12e3a101;
    case 8: goto L_12e39f98;
    case 9: goto L_12e39fa3;
    case 10: goto L_12e39f8e;
    case 11: goto L_12e39f83;
    case 12: goto L_12e39fae;
    case 13: goto L_12e39fb6;
    default: x86_unimpl("switch@0x12e39e69 out of table"); return;
  }
L_12e39e70:;
  /* 12e39e70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12e39e77 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e39e7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e39e80 mov eax, dword ptr [0x12e5cc98] */
  EAX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e39e85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e39e87 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e39e8b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e39e91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e39e93 je 0x12e39eed */
  if (C.zf) goto L_12e39eed;
  /* 12e39e95 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12e39e9b push edx */
  push32((uint32_t)(EDX));
  /* 12e39e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39e9f push eax */
  push32((uint32_t)(EAX));
  /* 12e39ea0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e39ea5 call 0x12e3aae0 */
  push32(0x12e39eaau); f_12e3aae0();
  /* 12e39eaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39ead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e39eb0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e39eb2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12e39eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e39eb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39ebb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e39ebe:;
  /* 12e39ebe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e39ec4 jne 0x12e39ee7 */
  if (!C.zf) goto L_12e39ee7;
  /* 12e39ec6 push 0x12e59f30 */
  push32((uint32_t)(0x12e59f30u));
  /* 12e39ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e39ecd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12e39ed2 push 0x12e59f24 */
  push32((uint32_t)(0x12e59f24u));
  /* 12e39ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e39ed9 call 0x12e31ee0 */
  push32(0x12e39edeu); f_12e31ee0();
  /* 12e39ede add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39ee4 jne 0x12e39ee7 */
  if (!C.zf) goto L_12e39ee7;
  /* 12e39ee6 int3  */
  x86_unimpl("int3 @ 0x12e39ee6");
L_12e39ee7:;
  /* 12e39ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e39eeb jne 0x12e39ebe */
  if (!C.zf) goto L_12e39ebe;
L_12e39eed:;
  /* 12e39eed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12e39ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e39ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e39ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12e39ef8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39efc push eax */
  push32((uint32_t)(EAX));
  /* 12e39efd call 0x12e3aae0 */
  push32(0x12e39f02u); f_12e3aae0();
  /* 12e39f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39f05 jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e39f0a:;
  /* 12e39f0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e39f11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e39f14 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12e39f1a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12e39f20 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12e39f26 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e39f2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e39f2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e39f36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12e39f40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12e39f47 jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e39f4c:;
  /* 12e39f4c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39f50 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12e39f56 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12e39f5c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e39f5f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12e39f65 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39f6c ja 0x12e39fb6 */
  if ((!C.cf&&!C.zf)) goto L_12e39fb6;
  /* 12e39f6e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12e39f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e39f76 mov al, byte ptr [ecx + 0x12e3aa0c] */
  AL = (r8((uint32_t)(ECX + 0x12e3aa0c)));
  /* 12e39f7c jmp dword ptr [eax*4 + 0x12e3a9f4] */
  switch (EAX) {
    case 0: goto L_12e39f98;
    case 1: goto L_12e39fa3;
    case 2: goto L_12e39f8e;
    case 3: goto L_12e39f83;
    case 4: goto L_12e39fae;
    case 5: goto L_12e39fb6;
    default: x86_unimpl("switch@0x12e39f7c out of table"); return;
  }
L_12e39f83:;
  /* 12e39f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39f86 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e39f89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e39f8c jmp 0x12e39fb6 */
  goto L_12e39fb6;
L_12e39f8e:;
  /* 12e39f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39f91 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12e39f93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e39f96 jmp 0x12e39fb6 */
  goto L_12e39fb6;
L_12e39f98:;
  /* 12e39f98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39f9b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e39f9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e39fa1 jmp 0x12e39fb6 */
  goto L_12e39fb6;
L_12e39fa3:;
  /* 12e39fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39fa6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12e39fa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e39fac jmp 0x12e39fb6 */
  goto L_12e39fb6;
L_12e39fae:;
  /* 12e39fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39fb1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12e39fb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e39fb6:;
  /* 12e39fb6 jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e39fbb:;
  /* 12e39fbb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e39fbf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39fc2 jne 0x12e39ff7 */
  if (!C.zf) goto L_12e39ff7;
  /* 12e39fc4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e39fc7 push edx */
  push32((uint32_t)(EDX));
  /* 12e39fc8 call 0x12e3abf0 */
  push32(0x12e39fcdu); f_12e3abf0();
  /* 12e39fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e39fd0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12e39fd6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e39fdd jge 0x12e39ff5 */
  if ((C.sf==C.of)) goto L_12e39ff5;
  /* 12e39fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e39fe2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e39fe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e39fe7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e39fed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e39fef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12e39ff5:;
  /* 12e39ff5 jmp 0x12e3a00e */
  goto L_12e3a00e;
L_12e39ff7:;
  /* 12e39ff7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e39ffd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3a000 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a004 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12e3a008 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12e3a00e:;
  /* 12e3a00e jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e3a013:;
  /* 12e3a013 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12e3a01d jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e3a022:;
  /* 12e3a022 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a026 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a029 jne 0x12e3a052 */
  if (!C.zf) goto L_12e3a052;
  /* 12e3a02b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e3a02e push eax */
  push32((uint32_t)(EAX));
  /* 12e3a02f call 0x12e3abf0 */
  push32(0x12e3a034u); f_12e3abf0();
  /* 12e3a034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a037 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12e3a03d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a044 jge 0x12e3a050 */
  if ((C.sf==C.of)) goto L_12e3a050;
  /* 12e3a046 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12e3a050:;
  /* 12e3a050 jmp 0x12e3a069 */
  goto L_12e3a069;
L_12e3a052:;
  /* 12e3a052 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e3a058 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3a05b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a05f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e3a063 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12e3a069:;
  /* 12e3a069 jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e3a06e:;
  /* 12e3a06e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a072 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12e3a078 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12e3a07e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a081 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12e3a087 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a08e ja 0x12e3a0fc */
  if ((!C.cf&&!C.zf)) goto L_12e3a0fc;
  /* 12e3a090 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12e3a096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a098 mov al, byte ptr [ecx + 0x12e3aa31] */
  AL = (r8((uint32_t)(ECX + 0x12e3aa31)));
  /* 12e3a09e jmp dword ptr [eax*4 + 0x12e3aa1d] */
  switch (EAX) {
    case 0: goto L_12e3a0b0;
    case 1: goto L_12e3a0e9;
    case 2: goto L_12e3a0a5;
    case 3: goto L_12e3a0f3;
    case 4: goto L_12e3a0fc;
    default: x86_unimpl("switch@0x12e3a09e out of table"); return;
  }
L_12e3a0a5:;
  /* 12e3a0a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a0a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a0ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3a0ae jmp 0x12e3a0fc */
  goto L_12e3a0fc;
L_12e3a0b0:;
  /* 12e3a0b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3a0b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3a0b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a0b9 jne 0x12e3a0db */
  if (!C.zf) goto L_12e3a0db;
  /* 12e3a0bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3a0be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e3a0c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a0c5 jne 0x12e3a0db */
  if (!C.zf) goto L_12e3a0db;
  /* 12e3a0c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3a0ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a0cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e3a0d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a0d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a0d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3a0d9 jmp 0x12e3a0e7 */
  goto L_12e3a0e7;
L_12e3a0db:;
  /* 12e3a0db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12e3a0e2 jmp 0x12e39e70 */
  goto L_12e39e70;
L_12e3a0e7:;
  /* 12e3a0e7 jmp 0x12e3a0fc */
  goto L_12e3a0fc;
L_12e3a0e9:;
  /* 12e3a0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a0ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12e3a0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3a0f1 jmp 0x12e3a0fc */
  goto L_12e3a0fc;
L_12e3a0f3:;
  /* 12e3a0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a0f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a0f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3a0fc:;
  /* 12e3a0fc jmp 0x12e3a9c2 */
  goto L_12e3a9c2;
L_12e3a101:;
  /* 12e3a101 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a105 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12e3a10b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12e3a111 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a114 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12e3a11a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a121 ja 0x12e3a7e7 */
  if ((!C.cf&&!C.zf)) goto L_12e3a7e7;
  /* 12e3a127 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12e3a12d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a12f mov cl, byte ptr [edx + 0x12e3aa9c] */
  CL = (r8((uint32_t)(EDX + 0x12e3aa9c)));
  /* 12e3a135 jmp dword ptr [ecx*4 + 0x12e3aa60] */
  switch (ECX) {
    case 0: goto L_12e3a13c;
    case 1: goto L_12e3a3d0;
    case 2: goto L_12e3a260;
    case 3: goto L_12e3a509;
    case 4: goto L_12e3a1cb;
    case 5: goto L_12e3a151;
    case 6: goto L_12e3a4db;
    case 7: goto L_12e3a3e0;
    case 8: goto L_12e3a385;
    case 9: goto L_12e3a555;
    case 10: goto L_12e3a4ff;
    case 11: goto L_12e3a276;
    case 12: goto L_12e3a4f3;
    case 13: goto L_12e3a515;
    case 14: goto L_12e3a7e7;
    default: x86_unimpl("switch@0x12e3a135 out of table"); return;
  }
L_12e3a13c:;
  /* 12e3a13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a13f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a146 jne 0x12e3a151 */
  if (!C.zf) goto L_12e3a151;
  /* 12e3a148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a14b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a14e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3a151:;
  /* 12e3a151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a154 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a15a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a15c je 0x12e3a197 */
  if (C.zf) goto L_12e3a197;
  /* 12e3a15e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e3a161 push eax */
  push32((uint32_t)(EAX));
  /* 12e3a162 call 0x12e3ac30 */
  push32(0x12e3a167u); f_12e3ac30();
  /* 12e3a167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a16a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12e3a16e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12e3a172 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a173 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12e3a179 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a17a call 0x12e3bd10 */
  push32(0x12e3a17fu); f_12e3bd10();
  /* 12e3a17f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a182 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e3a185 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a189 jge 0x12e3a195 */
  if ((C.sf==C.of)) goto L_12e3a195;
  /* 12e3a18b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12e3a195:;
  /* 12e3a195 jmp 0x12e3a1bd */
  goto L_12e3a1bd;
L_12e3a197:;
  /* 12e3a197 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e3a19a push eax */
  push32((uint32_t)(EAX));
  /* 12e3a19b call 0x12e3abf0 */
  push32(0x12e3a1a0u); f_12e3abf0();
  /* 12e3a1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a1a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12e3a1aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12e3a1b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12e3a1b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12e3a1bd:;
  /* 12e3a1bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12e3a1c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e3a1c6 jmp 0x12e3a7e7 */
  goto L_12e3a7e7;
L_12e3a1cb:;
  /* 12e3a1cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e3a1ce push eax */
  push32((uint32_t)(EAX));
  /* 12e3a1cf call 0x12e3abf0 */
  push32(0x12e3a1d4u); f_12e3abf0();
  /* 12e3a1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a1d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12e3a1dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a1e4 je 0x12e3a1f2 */
  if (C.zf) goto L_12e3a1f2;
  /* 12e3a1e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e3a1ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a1f0 jne 0x12e3a20c */
  if (!C.zf) goto L_12e3a20c;
L_12e3a1f2:;
  /* 12e3a1f2 mov edx, dword ptr [0x12e5cfb0] */
  EDX = (r32((uint32_t)(0x12e5cfb0)));
  /* 12e3a1f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e3a1fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a1fe push eax */
  push32((uint32_t)(EAX));
  /* 12e3a1ff call 0x12e35c50 */
  push32(0x12e3a204u); f_12e35c50();
  /* 12e3a204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a207 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e3a20a jmp 0x12e3a25b */
  goto L_12e3a25b;
L_12e3a20c:;
  /* 12e3a20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a20f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3a217 je 0x12e3a23c */
  if (C.zf) goto L_12e3a23c;
  /* 12e3a219 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e3a21f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e3a222 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3a225 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e3a22b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12e3a22e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e3a230 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e3a233 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12e3a23a jmp 0x12e3a25b */
  goto L_12e3a25b;
L_12e3a23c:;
  /* 12e3a23c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12e3a243 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e3a249 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e3a24c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e3a24f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12e3a255 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12e3a258 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e3a25b:;
  /* 12e3a25b jmp 0x12e3a7e7 */
  goto L_12e3a7e7;
L_12e3a260:;
  /* 12e3a260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a263 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3a26b jne 0x12e3a276 */
  if (!C.zf) goto L_12e3a276;
  /* 12e3a26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a270 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3a276:;
  /* 12e3a276 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a27d jne 0x12e3a28b */
  if (!C.zf) goto L_12e3a28b;
  /* 12e3a27f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12e3a289 jmp 0x12e3a297 */
  goto L_12e3a297;
L_12e3a28b:;
  /* 12e3a28b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e3a291 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12e3a297:;
  /* 12e3a297 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12e3a29d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12e3a2a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e3a2a6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a2a7 call 0x12e3abf0 */
  push32(0x12e3a2acu); f_12e3abf0();
  /* 12e3a2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a2af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3a2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a2b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a2bc je 0x12e3a326 */
  if (C.zf) goto L_12e3a326;
  /* 12e3a2be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a2c2 jne 0x12e3a2cd */
  if (!C.zf) goto L_12e3a2cd;
  /* 12e3a2c4 mov ecx, dword ptr [0x12e5cfb4] */
  ECX = (r32((uint32_t)(0x12e5cfb4)));
  /* 12e3a2ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e3a2cd:;
  /* 12e3a2cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12e3a2d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a2d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12e3a2dd:;
  /* 12e3a2dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e3a2e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e3a2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a2ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12e3a2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a2f4 je 0x12e3a316 */
  if (C.zf) goto L_12e3a316;
  /* 12e3a2f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12e3a2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a2fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12e3a301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a303 je 0x12e3a316 */
  if (C.zf) goto L_12e3a316;
  /* 12e3a305 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12e3a30b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a30e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12e3a314 jmp 0x12e3a2dd */
  goto L_12e3a2dd;
L_12e3a316:;
  /* 12e3a316 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12e3a31c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a31f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e3a321 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12e3a324 jmp 0x12e3a380 */
  goto L_12e3a380;
L_12e3a326:;
  /* 12e3a326 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a32a jne 0x12e3a334 */
  if (!C.zf) goto L_12e3a334;
  /* 12e3a32c mov eax, dword ptr [0x12e5cfb0] */
  EAX = (r32((uint32_t)(0x12e5cfb0)));
  /* 12e3a331 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12e3a334:;
  /* 12e3a334 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a337 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12e3a33d:;
  /* 12e3a33d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e3a343 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12e3a349 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a34c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12e3a352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a354 je 0x12e3a374 */
  if (C.zf) goto L_12e3a374;
  /* 12e3a356 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12e3a35c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3a35f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a361 je 0x12e3a374 */
  if (C.zf) goto L_12e3a374;
  /* 12e3a363 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12e3a369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a36c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12e3a372 jmp 0x12e3a33d */
  goto L_12e3a33d;
L_12e3a374:;
  /* 12e3a374 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12e3a37a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a37d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12e3a380:;
  /* 12e3a380 jmp 0x12e3a7e7 */
  goto L_12e3a7e7;
L_12e3a385:;
  /* 12e3a385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e3a388 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a389 call 0x12e3abf0 */
  push32(0x12e3a38eu); f_12e3abf0();
  /* 12e3a38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a391 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12e3a397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a39a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a39f je 0x12e3a3b3 */
  if (C.zf) goto L_12e3a3b3;
  /* 12e3a3a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12e3a3a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12e3a3ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12e3a3b1 jmp 0x12e3a3c1 */
  goto L_12e3a3c1;
L_12e3a3b3:;
  /* 12e3a3b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12e3a3b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12e3a3bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12e3a3c1:;
  /* 12e3a3c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12e3a3cb jmp 0x12e3a7e7 */
  goto L_12e3a7e7;
L_12e3a3d0:;
  /* 12e3a3d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e3a3d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12e3a3da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e3a3dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12e3a3e0:;
  /* 12e3a3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a3e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12e3a3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3a3e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12e3a3ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e3a3f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a3f8 jge 0x12e3a406 */
  if ((C.sf==C.of)) goto L_12e3a406;
  /* 12e3a3fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12e3a404 jmp 0x12e3a422 */
  goto L_12e3a422;
L_12e3a406:;
  /* 12e3a406 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a40d jne 0x12e3a422 */
  if (!C.zf) goto L_12e3a422;
  /* 12e3a40f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a413 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a416 jne 0x12e3a422 */
  if (!C.zf) goto L_12e3a422;
  /* 12e3a418 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12e3a422:;
  /* 12e3a422 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3a425 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a428 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12e3a42b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3a42e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3a433 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3a436 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12e3a43c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12e3a442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3a445 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a446 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e3a44c push edx */
  push32((uint32_t)(EDX));
  /* 12e3a44d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a451 push eax */
  push32((uint32_t)(EAX));
  /* 12e3a452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a455 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a456 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12e3a45c push edx */
  push32((uint32_t)(EDX));
  /* 12e3a45d call dword ptr [0x12e5d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5d3a0))), 0x12e3a463u);
  /* 12e3a463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a469 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a470 je 0x12e3a488 */
  if (C.zf) goto L_12e3a488;
  /* 12e3a472 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a479 jne 0x12e3a488 */
  if (!C.zf) goto L_12e3a488;
  /* 12e3a47b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a47e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a47f call dword ptr [0x12e5d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5d3ac))), 0x12e3a485u);
  /* 12e3a485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3a488:;
  /* 12e3a488 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12e3a48c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a48f jne 0x12e3a4aa */
  if (!C.zf) goto L_12e3a4aa;
  /* 12e3a491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a494 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a49b jne 0x12e3a4aa */
  if (!C.zf) goto L_12e3a4aa;
  /* 12e3a49d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a4a1 call dword ptr [0x12e5d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5d3a4))), 0x12e3a4a7u);
  /* 12e3a4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3a4aa:;
  /* 12e3a4aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a4ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3a4b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a4b3 jne 0x12e3a4c7 */
  if (!C.zf) goto L_12e3a4c7;
  /* 12e3a4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a4b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a4bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3a4be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a4c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12e3a4c7:;
  /* 12e3a4c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a4ca push eax */
  push32((uint32_t)(EAX));
  /* 12e3a4cb call 0x12e35c50 */
  push32(0x12e3a4d0u); f_12e35c50();
  /* 12e3a4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e3a4d6 jmp 0x12e3a7e7 */
  goto L_12e3a7e7;
L_12e3a4db:;
  /* 12e3a4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a4de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a4e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3a4e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12e3a4ee jmp 0x12e3a575 */
  goto L_12e3a575;
L_12e3a4f3:;
  /* 12e3a4f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12e3a4fd jmp 0x12e3a575 */
  goto L_12e3a575;
L_12e3a4ff:;
  /* 12e3a4ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12e3a509:;
  /* 12e3a509 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12e3a513 jmp 0x12e3a51f */
  goto L_12e3a51f;
L_12e3a515:;
  /* 12e3a515 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12e3a51f:;
  /* 12e3a51f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12e3a529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a52c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a532 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a534 je 0x12e3a553 */
  if (C.zf) goto L_12e3a553;
  /* 12e3a536 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12e3a53d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12e3a543 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a546 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12e3a54c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12e3a553:;
  /* 12e3a553 jmp 0x12e3a575 */
  goto L_12e3a575;
L_12e3a555:;
  /* 12e3a555 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12e3a55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a562 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3a56a je 0x12e3a575 */
  if (C.zf) goto L_12e3a575;
  /* 12e3a56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a56f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a572 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3a575:;
  /* 12e3a575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a578 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a57f je 0x12e3a59e */
  if (C.zf) goto L_12e3a59e;
  /* 12e3a581 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e3a584 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a585 call 0x12e3ac10 */
  push32(0x12e3a58au); f_12e3ac10();
  /* 12e3a58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a58d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e3a593 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12e3a599 jmp 0x12e3a62f */
  goto L_12e3a62f;
L_12e3a59e:;
  /* 12e3a59e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a5a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a5a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a5a6 je 0x12e3a5f0 */
  if (C.zf) goto L_12e3a5f0;
  /* 12e3a5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a5ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a5b0 je 0x12e3a5d0 */
  if (C.zf) goto L_12e3a5d0;
  /* 12e3a5b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e3a5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a5b6 call 0x12e3abf0 */
  push32(0x12e3a5bbu); f_12e3abf0();
  /* 12e3a5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a5be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12e3a5c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3a5c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e3a5c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12e3a5ce jmp 0x12e3a5ee */
  goto L_12e3a5ee;
L_12e3a5d0:;
  /* 12e3a5d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e3a5d3 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a5d4 call 0x12e3abf0 */
  push32(0x12e3a5d9u); f_12e3abf0();
  /* 12e3a5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a5dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a5e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3a5e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e3a5e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12e3a5ee:;
  /* 12e3a5ee jmp 0x12e3a62f */
  goto L_12e3a62f;
L_12e3a5f0:;
  /* 12e3a5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a5f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a5f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a5f8 je 0x12e3a615 */
  if (C.zf) goto L_12e3a615;
  /* 12e3a5fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12e3a5fd push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a5fe call 0x12e3abf0 */
  push32(0x12e3a603u); f_12e3abf0();
  /* 12e3a603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3a607 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e3a60d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12e3a613 jmp 0x12e3a62f */
  goto L_12e3a62f;
L_12e3a615:;
  /* 12e3a615 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12e3a618 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a619 call 0x12e3abf0 */
  push32(0x12e3a61eu); f_12e3abf0();
  /* 12e3a61e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a623 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12e3a629 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12e3a62f:;
  /* 12e3a62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a632 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a637 je 0x12e3a677 */
  if (C.zf) goto L_12e3a677;
  /* 12e3a639 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a640 jg 0x12e3a677 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3a677;
  /* 12e3a642 jl 0x12e3a64d */
  if ((C.sf!=C.of)) goto L_12e3a64d;
  /* 12e3a644 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a64b jae 0x12e3a677 */
  if (!C.cf) goto L_12e3a677;
L_12e3a64d:;
  /* 12e3a64d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12e3a653 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3a655 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12e3a65b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a65e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3a660 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e3a666 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12e3a66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a66f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e3a672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3a675 jmp 0x12e3a68f */
  goto L_12e3a68f;
L_12e3a677:;
  /* 12e3a677 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12e3a67d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e3a683 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12e3a689 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12e3a68f:;
  /* 12e3a68f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a692 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a69a jne 0x12e3a6b7 */
  if (!C.zf) goto L_12e3a6b7;
  /* 12e3a69c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e3a6a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12e3a6a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a6ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e3a6b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12e3a6b7:;
  /* 12e3a6b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a6be jge 0x12e3a6cc */
  if ((C.sf==C.of)) goto L_12e3a6cc;
  /* 12e3a6c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12e3a6ca jmp 0x12e3a6d5 */
  goto L_12e3a6d5;
L_12e3a6cc:;
  /* 12e3a6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a6cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a6d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3a6d5:;
  /* 12e3a6d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e3a6db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a6e3 jne 0x12e3a6ec */
  if (!C.zf) goto L_12e3a6ec;
  /* 12e3a6e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e3a6ec:;
  /* 12e3a6ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12e3a6ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e3a6f2:;
  /* 12e3a6f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e3a6f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12e3a6fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a701 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12e3a707 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a709 jg 0x12e3a71f */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3a71f;
  /* 12e3a70b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e3a711 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3a719 je 0x12e3a7a0 */
  if (C.zf) goto L_12e3a7a0;
L_12e3a71f:;
  /* 12e3a71f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12e3a725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3a726 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a727 push eax */
  push32((uint32_t)(EAX));
  /* 12e3a728 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12e3a72e push edx */
  push32((uint32_t)(EDX));
  /* 12e3a72f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e3a735 push eax */
  push32((uint32_t)(EAX));
  /* 12e3a736 call 0x12e39ab0 */
  push32(0x12e3a73bu); f_12e39ab0();
  /* 12e3a73b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a73e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12e3a744 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12e3a74a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3a74b push edx */
  push32((uint32_t)(EDX));
  /* 12e3a74c push eax */
  push32((uint32_t)(EAX));
  /* 12e3a74d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12e3a753 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a754 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12e3a75a push edx */
  push32((uint32_t)(EDX));
  /* 12e3a75b call 0x12e39a40 */
  push32(0x12e3a760u); f_12e39a40();
  /* 12e3a760 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12e3a766 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12e3a76c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a773 jle 0x12e3a787 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3a787;
  /* 12e3a775 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12e3a77b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a781 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12e3a787:;
  /* 12e3a787 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a78a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12e3a790 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12e3a792 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a795 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a798 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3a79b jmp 0x12e3a6f2 */
  goto L_12e3a6f2;
L_12e3a7a0:;
  /* 12e3a7a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12e3a7a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a7a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e3a7a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a7ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a7af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e3a7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a7b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a7bc je 0x12e3a7e7 */
  if (C.zf) goto L_12e3a7e7;
  /* 12e3a7be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a7c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3a7c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a7c7 jne 0x12e3a7cf */
  if (!C.zf) goto L_12e3a7cf;
  /* 12e3a7c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a7cd jne 0x12e3a7e7 */
  if (!C.zf) goto L_12e3a7e7;
L_12e3a7cf:;
  /* 12e3a7cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a7d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a7d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3a7d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a7db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12e3a7de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3a7e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a7e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12e3a7e7:;
  /* 12e3a7e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a7ee jne 0x12e3a9c2 */
  if (!C.zf) goto L_12e3a9c2;
  /* 12e3a7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a7f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a7fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a7fc je 0x12e3a84d */
  if (C.zf) goto L_12e3a84d;
  /* 12e3a7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a801 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3a809 je 0x12e3a81b */
  if (C.zf) goto L_12e3a81b;
  /* 12e3a80b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12e3a812 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e3a819 jmp 0x12e3a84d */
  goto L_12e3a84d;
L_12e3a81b:;
  /* 12e3a81b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a81e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a823 je 0x12e3a835 */
  if (C.zf) goto L_12e3a835;
  /* 12e3a825 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12e3a82c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e3a833 jmp 0x12e3a84d */
  goto L_12e3a84d;
L_12e3a835:;
  /* 12e3a835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a838 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3a83b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3a83d je 0x12e3a84d */
  if (C.zf) goto L_12e3a84d;
  /* 12e3a83f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12e3a846 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12e3a84d:;
  /* 12e3a84d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12e3a853 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a856 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a859 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12e3a85f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a862 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a867 jne 0x12e3a885 */
  if (!C.zf) goto L_12e3a885;
  /* 12e3a869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e3a86f push eax */
  push32((uint32_t)(EAX));
  /* 12e3a870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3a873 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a874 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12e3a87a push edx */
  push32((uint32_t)(EDX));
  /* 12e3a87b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e3a87d call 0x12e3ab60 */
  push32(0x12e3a882u); f_12e3ab60();
  /* 12e3a882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3a885:;
  /* 12e3a885 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e3a88b push eax */
  push32((uint32_t)(EAX));
  /* 12e3a88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3a88f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a890 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3a893 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a894 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12e3a89a push eax */
  push32((uint32_t)(EAX));
  /* 12e3a89b call 0x12e3aba0 */
  push32(0x12e3a8a0u); f_12e3aba0();
  /* 12e3a8a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a8a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3a8a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3a8ab je 0x12e3a8d3 */
  if (C.zf) goto L_12e3a8d3;
  /* 12e3a8ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a8b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a8b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a8b5 jne 0x12e3a8d3 */
  if (!C.zf) goto L_12e3a8d3;
  /* 12e3a8b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e3a8bd push eax */
  push32((uint32_t)(EAX));
  /* 12e3a8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3a8c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a8c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12e3a8c8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a8c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e3a8cb call 0x12e3ab60 */
  push32(0x12e3a8d0u); f_12e3ab60();
  /* 12e3a8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3a8d3:;
  /* 12e3a8d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a8d7 je 0x12e3a981 */
  if (C.zf) goto L_12e3a981;
  /* 12e3a8dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a8e1 jle 0x12e3a981 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3a981;
  /* 12e3a8e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a8ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12e3a8f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3a8f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12e3a8f9:;
  /* 12e3a8f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12e3a8ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12e3a905 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3a908 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12e3a90e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a910 je 0x12e3a97f */
  if (C.zf) goto L_12e3a97f;
  /* 12e3a912 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12e3a918 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12e3a91b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12e3a922 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12e3a929 push eax */
  push32((uint32_t)(EAX));
  /* 12e3a92a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12e3a930 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a931 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12e3a937 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a93a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12e3a940 call 0x12e3bd10 */
  push32(0x12e3a945u); f_12e3bd10();
  /* 12e3a945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a948 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12e3a94e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3a955 jg 0x12e3a959 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3a959;
  /* 12e3a957 jmp 0x12e3a97f */
  goto L_12e3a97f;
L_12e3a959:;
  /* 12e3a959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e3a95f push eax */
  push32((uint32_t)(EAX));
  /* 12e3a960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3a963 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a964 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12e3a96a push edx */
  push32((uint32_t)(EDX));
  /* 12e3a96b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12e3a971 push eax */
  push32((uint32_t)(EAX));
  /* 12e3a972 call 0x12e3aba0 */
  push32(0x12e3a977u); f_12e3aba0();
  /* 12e3a977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3a97a jmp 0x12e3a8f9 */
  goto L_12e3a8f9;
L_12e3a97f:;
  /* 12e3a97f jmp 0x12e3a99c */
  goto L_12e3a99c;
L_12e3a981:;
  /* 12e3a981 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12e3a987 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3a98b push edx */
  push32((uint32_t)(EDX));
  /* 12e3a98c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3a98f push eax */
  push32((uint32_t)(EAX));
  /* 12e3a990 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3a993 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a994 call 0x12e3aba0 */
  push32(0x12e3a999u); f_12e3aba0();
  /* 12e3a999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3a99c:;
  /* 12e3a99c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3a99f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3a9a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3a9a4 je 0x12e3a9c2 */
  if (C.zf) goto L_12e3a9c2;
  /* 12e3a9a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12e3a9ac push eax */
  push32((uint32_t)(EAX));
  /* 12e3a9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3a9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3a9b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12e3a9b7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3a9b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e3a9ba call 0x12e3ab60 */
  push32(0x12e3a9bfu); f_12e3ab60();
  /* 12e3a9bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3a9c2:;
  /* 12e3a9c2 jmp 0x12e39dd4 */
  goto L_12e39dd4;
L_12e3a9c7:;
  /* 12e3a9c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12e3a9cd pop edi */
  EDI = (pop32());
  /* 12e3a9ce pop esi */
  ESI = (pop32());
  /* 12e3a9cf pop ebx */
  EBX = (pop32());
  /* 12e3a9d0 mov esp, ebp */
  ESP = (EBP);
  /* 12e3a9d2 pop ebp */
  EBP = (pop32());
  /* 12e3a9d3 ret  */
  ESPCHK(0x12e39db0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x12e3aae0 (119 bytes, 44 insns) */
void f_12e3aae0(void) {
  FTRACE(0x12e3aae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3aae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3aae1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3aae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3aae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3aae7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e3aaea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3aaed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3aaf0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12e3aaf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3aaf6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3aafa jl 0x12e3ab22 */
  if ((C.sf!=C.of)) goto L_12e3ab22;
  /* 12e3aafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3aaff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3ab01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e3ab04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e3ab06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12e3ab0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3ab10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3ab13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ab16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e3ab18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ab1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ab1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e3ab20 jmp 0x12e3ab35 */
  goto L_12e3ab35;
L_12e3ab22:;
  /* 12e3ab22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ab25 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ab26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ab29 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ab2a call 0x12e39b30 */
  push32(0x12e3ab2fu); f_12e39b30();
  /* 12e3ab2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ab32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3ab35:;
  /* 12e3ab35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ab39 jne 0x12e3ab46 */
  if (!C.zf) goto L_12e3ab46;
  /* 12e3ab3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ab3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e3ab44 jmp 0x12e3ab53 */
  goto L_12e3ab53;
L_12e3ab46:;
  /* 12e3ab46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ab49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e3ab4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ab4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ab51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e3ab53:;
  /* 12e3ab53 mov esp, ebp */
  ESP = (EBP);
  /* 12e3ab55 pop ebp */
  EBP = (pop32());
  /* 12e3ab56 ret  */
  ESPCHK(0x12e3aae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x12e3ab60 (53 bytes, 23 insns) */
void f_12e3ab60(void) {
  FTRACE(0x12e3ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ab61 mov ebp, esp */
  EBP = (ESP);
L_12e3ab63:;
  /* 12e3ab63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ab66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ab69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ab6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e3ab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ab71 jle 0x12e3ab93 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3ab93;
  /* 12e3ab73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3ab76 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ab77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ab7a push eax */
  push32((uint32_t)(EAX));
  /* 12e3ab7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ab7e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ab7f call 0x12e3aae0 */
  push32(0x12e3ab84u); f_12e3aae0();
  /* 12e3ab84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ab87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3ab8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ab8d jne 0x12e3ab91 */
  if (!C.zf) goto L_12e3ab91;
  /* 12e3ab8f jmp 0x12e3ab93 */
  goto L_12e3ab93;
L_12e3ab91:;
  /* 12e3ab91 jmp 0x12e3ab63 */
  goto L_12e3ab63;
L_12e3ab93:;
  /* 12e3ab93 pop ebp */
  EBP = (pop32());
  /* 12e3ab94 ret  */
  ESPCHK(0x12e3ab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x12e3aba0 (74 bytes, 31 insns) */
void f_12e3aba0(void) {
  FTRACE(0x12e3aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3aba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3aba1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3aba3 push ecx */
  push32((uint32_t)(ECX));
L_12e3aba4:;
  /* 12e3aba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3aba7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3abaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3abad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e3abb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3abb2 jle 0x12e3abe6 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3abe6;
  /* 12e3abb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3abb7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3abb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3abbb push eax */
  push32((uint32_t)(EAX));
  /* 12e3abbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3abbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3abc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3abc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3abc8 push eax */
  push32((uint32_t)(EAX));
  /* 12e3abc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3abcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3abcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e3abd2 call 0x12e3aae0 */
  push32(0x12e3abd7u); f_12e3aae0();
  /* 12e3abd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3abda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3abdd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3abe0 jne 0x12e3abe4 */
  if (!C.zf) goto L_12e3abe4;
  /* 12e3abe2 jmp 0x12e3abe6 */
  goto L_12e3abe6;
L_12e3abe4:;
  /* 12e3abe4 jmp 0x12e3aba4 */
  goto L_12e3aba4;
L_12e3abe6:;
  /* 12e3abe6 mov esp, ebp */
  ESP = (EBP);
  /* 12e3abe8 pop ebp */
  EBP = (pop32());
  /* 12e3abe9 ret  */
  ESPCHK(0x12e3aba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abf0 @ 0x12e3abf0 (26 bytes, 12 insns) */
void f_12e3abf0(void) {
  FTRACE(0x12e3abf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3abf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3abf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3abf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3abf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3abf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3abfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3abfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e3ac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3ac05 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e3ac08 pop ebp */
  EBP = (pop32());
  /* 12e3ac09 ret  */
  ESPCHK(0x12e3abf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x12e3ac10 (31 bytes, 14 insns) */
void f_12e3ac10(void) {
  FTRACE(0x12e3ac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ac10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ac11 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ac13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3ac18 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ac1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e3ac20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3ac25 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ac28 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e3ac2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3ac2d pop ebp */
  EBP = (pop32());
  /* 12e3ac2e ret  */
  ESPCHK(0x12e3ac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac30 @ 0x12e3ac30 (27 bytes, 12 insns) */
void f_12e3ac30(void) {
  FTRACE(0x12e3ac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ac30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ac31 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ac33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3ac38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ac3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e3ac40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3ac45 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12e3ac49 pop ebp */
  EBP = (pop32());
  /* 12e3ac4a ret  */
  ESPCHK(0x12e3ac30u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12e3ac50 (145 bytes, 42 insns) */
void f_12e3ac50(void) {
  FTRACE(0x12e3ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ac51 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ac54 call 0x12e3ad00 */
  push32(0x12e3ac59u); f_12e3ad00();
  /* 12e3ac59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e3ac5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3ac65 jmp 0x12e3ac70 */
  goto L_12e3ac70;
L_12e3ac67:;
  /* 12e3ac67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ac6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ac6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3ac70:;
  /* 12e3ac70 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ac74 jae 0x12e3ac9a */
  if (!C.cf) goto L_12e3ac9a;
  /* 12e3ac76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ac79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ac7c cmp ecx, dword ptr [eax*8 + 0x12e5cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e5cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ac83 jne 0x12e3ac98 */
  if (!C.zf) goto L_12e3ac98;
  /* 12e3ac85 call 0x12e3acf0 */
  push32(0x12e3ac8au); f_12e3acf0();
  /* 12e3ac8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ac8d mov ecx, dword ptr [edx*8 + 0x12e5cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12e5cfbc)));
  /* 12e3ac94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e3ac96 jmp 0x12e3acdd */
  goto L_12e3acdd;
L_12e3ac98:;
  /* 12e3ac98 jmp 0x12e3ac67 */
  goto L_12e3ac67;
L_12e3ac9a:;
  /* 12e3ac9a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ac9e jb 0x12e3acb3 */
  if (C.cf) goto L_12e3acb3;
  /* 12e3aca0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3aca4 ja 0x12e3acb3 */
  if ((!C.cf&&!C.zf)) goto L_12e3acb3;
  /* 12e3aca6 call 0x12e3acf0 */
  push32(0x12e3acabu); f_12e3acf0();
  /* 12e3acab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12e3acb1 jmp 0x12e3acdd */
  goto L_12e3acdd;
L_12e3acb3:;
  /* 12e3acb3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3acba jb 0x12e3acd2 */
  if (C.cf) goto L_12e3acd2;
  /* 12e3acbc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3acc3 ja 0x12e3acd2 */
  if ((!C.cf&&!C.zf)) goto L_12e3acd2;
  /* 12e3acc5 call 0x12e3acf0 */
  push32(0x12e3accau); f_12e3acf0();
  /* 12e3acca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12e3acd0 jmp 0x12e3acdd */
  goto L_12e3acdd;
L_12e3acd2:;
  /* 12e3acd2 call 0x12e3acf0 */
  push32(0x12e3acd7u); f_12e3acf0();
  /* 12e3acd7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12e3acdd:;
  /* 12e3acdd mov esp, ebp */
  ESP = (EBP);
  /* 12e3acdf pop ebp */
  EBP = (pop32());
  /* 12e3ace0 ret  */
  ESPCHK(0x12e3ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x12e3acf0 (13 bytes, 6 insns) */
void f_12e3acf0(void) {
  FTRACE(0x12e3acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3acf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3acf3 call 0x12e32860 */
  push32(0x12e3acf8u); f_12e32860();
  /* 12e3acf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3acfb pop ebp */
  EBP = (pop32());
  /* 12e3acfc ret  */
  ESPCHK(0x12e3acf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad00 @ 0x12e3ad00 (13 bytes, 6 insns) */
void f_12e3ad00(void) {
  FTRACE(0x12e3ad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ad00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ad01 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ad03 call 0x12e32860 */
  push32(0x12e3ad08u); f_12e32860();
  /* 12e3ad08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ad0b pop ebp */
  EBP = (pop32());
  /* 12e3ad0c ret  */
  ESPCHK(0x12e3ad00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x12e3ad10 (664 bytes, 267 insns) [15 switch table(s)] */
void f_12e3ad10(void) {
  FTRACE(0x12e3ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ad11 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ad13 push edi */
  push32((uint32_t)(EDI));
  /* 12e3ad14 push esi */
  push32((uint32_t)(ESI));
  /* 12e3ad15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ad18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ad1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ad1e mov eax, ecx */
  EAX = (ECX);
  /* 12e3ad20 mov edx, ecx */
  EDX = (ECX);
  /* 12e3ad22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ad24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ad26 jbe 0x12e3ad30 */
  if ((C.cf||C.zf)) goto L_12e3ad30;
  /* 12e3ad28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ad2a jb 0x12e3aea8 */
  if (C.cf) goto L_12e3aea8;
L_12e3ad30:;
  /* 12e3ad30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e3ad36 jne 0x12e3ad4c */
  if (!C.zf) goto L_12e3ad4c;
  /* 12e3ad38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3ad3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3ad3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ad41 jb 0x12e3ad6c */
  if (C.cf) goto L_12e3ad6c;
  /* 12e3ad43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3ad45 jmp dword ptr [edx*4 + 0x12e3ae58] */
  switch (EDX) {
    case 0: goto L_12e3ae68;
    case 1: goto L_12e3ae70;
    case 2: goto L_12e3ae7c;
    case 3: goto L_12e3ae90;
    default: x86_unimpl("switch@0x12e3ad45 out of table"); return;
  }
L_12e3ad4c:;
  /* 12e3ad4c mov eax, edi */
  EAX = (EDI);
  /* 12e3ad4e mov edx, 3 */
  EDX = (0x3u);
  /* 12e3ad53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ad56 jb 0x12e3ad64 */
  if (C.cf) goto L_12e3ad64;
  /* 12e3ad58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ad5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ad5d jmp dword ptr [eax*4 + 0x12e3ad70] */
  switch (EAX) {
    case 1: goto L_12e3ad80;
    case 2: goto L_12e3adac;
    case 3: goto L_12e3add0;
    default: x86_unimpl("switch@0x12e3ad5d out of table"); return;
  }
L_12e3ad64:;
  /* 12e3ad64 jmp dword ptr [ecx*4 + 0x12e3ae68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12e3ae68)))); return;
  /* 12e3ad6b nop  */
  /* nop */
L_12e3ad6c:;
  /* 12e3ad6c jmp dword ptr [ecx*4 + 0x12e3adec] */
  switch (ECX) {
    case 0: goto L_12e3ae4f;
    case 1: goto L_12e3ae3c;
    case 2: goto L_12e3ae34;
    case 3: goto L_12e3ae2c;
    case 4: goto L_12e3ae24;
    case 5: goto L_12e3ae1c;
    case 6: goto L_12e3ae14;
    case 7: goto L_12e3ae0c;
    default: x86_unimpl("switch@0x12e3ad6c out of table"); return;
  }
  /* 12e3ad73 nop  */
  /* nop */
L_12e3ad80:;
  /* 12e3ad80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3ad82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3ad84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3ad86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e3ad89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3ad8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3ad8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3ad92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3ad95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ad98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ad9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ad9e jb 0x12e3ad6c */
  if (C.cf) goto L_12e3ad6c;
  /* 12e3ada0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3ada2 jmp dword ptr [edx*4 + 0x12e3ae58] */
  switch (EDX) {
    case 0: goto L_12e3ae68;
    case 1: goto L_12e3ae70;
    case 2: goto L_12e3ae7c;
    case 3: goto L_12e3ae90;
    default: x86_unimpl("switch@0x12e3ada2 out of table"); return;
  }
  /* 12e3ada9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3adac:;
  /* 12e3adac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3adae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3adb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3adb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e3adb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3adb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3adbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3adbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3adc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3adc4 jb 0x12e3ad6c */
  if (C.cf) goto L_12e3ad6c;
  /* 12e3adc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3adc8 jmp dword ptr [edx*4 + 0x12e3ae58] */
  switch (EDX) {
    case 0: goto L_12e3ae68;
    case 1: goto L_12e3ae70;
    case 2: goto L_12e3ae7c;
    case 3: goto L_12e3ae90;
    default: x86_unimpl("switch@0x12e3adc8 out of table"); return;
  }
  /* 12e3adcf nop  */
  /* nop */
L_12e3add0:;
  /* 12e3add0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3add2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3add4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3add6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e3add7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3adda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e3addb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3adde jb 0x12e3ad6c */
  if (C.cf) goto L_12e3ad6c;
  /* 12e3ade0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3ade2 jmp dword ptr [edx*4 + 0x12e3ae58] */
  switch (EDX) {
    case 0: goto L_12e3ae68;
    case 1: goto L_12e3ae70;
    case 2: goto L_12e3ae7c;
    case 3: goto L_12e3ae90;
    default: x86_unimpl("switch@0x12e3ade2 out of table"); return;
  }
  /* 12e3ade9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3ae0c:;
  /* 12e3ae0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12e3ae10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12e3ae14:;
  /* 12e3ae14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12e3ae18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12e3ae1c:;
  /* 12e3ae1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12e3ae20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12e3ae24:;
  /* 12e3ae24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12e3ae28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12e3ae2c:;
  /* 12e3ae2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12e3ae30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12e3ae34:;
  /* 12e3ae34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12e3ae38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12e3ae3c:;
  /* 12e3ae3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12e3ae40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12e3ae44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e3ae4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ae4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e3ae4f:;
  /* 12e3ae4f jmp dword ptr [edx*4 + 0x12e3ae58] */
  switch (EDX) {
    case 0: goto L_12e3ae68;
    case 1: goto L_12e3ae70;
    case 2: goto L_12e3ae7c;
    case 3: goto L_12e3ae90;
    default: x86_unimpl("switch@0x12e3ae4f out of table"); return;
  }
  /* 12e3ae56 mov edi, edi */
  EDI = (EDI);
L_12e3ae68:;
  /* 12e3ae68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ae6b pop esi */
  ESI = (pop32());
  /* 12e3ae6c pop edi */
  EDI = (pop32());
  /* 12e3ae6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3ae6e ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3ae6f nop  */
  /* nop */
L_12e3ae70:;
  /* 12e3ae70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3ae72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3ae74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ae77 pop esi */
  ESI = (pop32());
  /* 12e3ae78 pop edi */
  EDI = (pop32());
  /* 12e3ae79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3ae7a ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3ae7b nop  */
  /* nop */
L_12e3ae7c:;
  /* 12e3ae7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3ae7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3ae80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e3ae83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3ae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ae89 pop esi */
  ESI = (pop32());
  /* 12e3ae8a pop edi */
  EDI = (pop32());
  /* 12e3ae8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3ae8c ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3ae8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3ae90:;
  /* 12e3ae90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3ae92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3ae94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e3ae97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3ae9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3ae9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3aea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3aea3 pop esi */
  ESI = (pop32());
  /* 12e3aea4 pop edi */
  EDI = (pop32());
  /* 12e3aea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3aea6 ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3aea7 nop  */
  /* nop */
L_12e3aea8:;
  /* 12e3aea8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12e3aeac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12e3aeb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e3aeb6 jne 0x12e3aedc */
  if (!C.zf) goto L_12e3aedc;
  /* 12e3aeb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3aebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3aebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3aec1 jb 0x12e3aed0 */
  if (C.cf) goto L_12e3aed0;
  /* 12e3aec3 std  */
  C.df=1;
  /* 12e3aec4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3aec6 cld  */
  C.df=0;
  /* 12e3aec7 jmp dword ptr [edx*4 + 0x12e3aff0] */
  switch (EDX) {
    case 0: goto L_12e3b000;
    case 1: goto L_12e3b008;
    case 2: goto L_12e3b018;
    case 3: goto L_12e3b02c;
    default: x86_unimpl("switch@0x12e3aec7 out of table"); return;
  }
  /* 12e3aece mov edi, edi */
  EDI = (EDI);
L_12e3aed0:;
  /* 12e3aed0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3aed2 jmp dword ptr [ecx*4 + 0x12e3afa0] */
  switch (ECX) {
    case 0: goto L_12e3afe7;
    default: x86_unimpl("switch@0x12e3aed2 out of table"); return;
  }
  /* 12e3aed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3aedc:;
  /* 12e3aedc mov eax, edi */
  EAX = (EDI);
  /* 12e3aede mov edx, 3 */
  EDX = (0x3u);
  /* 12e3aee3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3aee6 jb 0x12e3aef4 */
  if (C.cf) goto L_12e3aef4;
  /* 12e3aee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3aeeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3aeed jmp dword ptr [eax*4 + 0x12e3aef8] */
  switch (EAX) {
    case 1: goto L_12e3af08;
    case 2: goto L_12e3af28;
    case 3: goto L_12e3af50;
    default: x86_unimpl("switch@0x12e3aeed out of table"); return;
  }
L_12e3aef4:;
  /* 12e3aef4 jmp dword ptr [ecx*4 + 0x12e3aff0] */
  switch (ECX) {
    case 0: goto L_12e3b000;
    case 1: goto L_12e3b008;
    case 2: goto L_12e3b018;
    case 3: goto L_12e3b02c;
    default: x86_unimpl("switch@0x12e3aef4 out of table"); return;
  }
  /* 12e3aefb nop  */
  /* nop */
L_12e3af08:;
  /* 12e3af08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3af0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3af0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e3af10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12e3af11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3af14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12e3af15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3af18 jb 0x12e3aed0 */
  if (C.cf) goto L_12e3aed0;
  /* 12e3af1a std  */
  C.df=1;
  /* 12e3af1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3af1d cld  */
  C.df=0;
  /* 12e3af1e jmp dword ptr [edx*4 + 0x12e3aff0] */
  switch (EDX) {
    case 0: goto L_12e3b000;
    case 1: goto L_12e3b008;
    case 2: goto L_12e3b018;
    case 3: goto L_12e3b02c;
    default: x86_unimpl("switch@0x12e3af1e out of table"); return;
  }
  /* 12e3af25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3af28:;
  /* 12e3af28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3af2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3af2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e3af30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3af33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3af36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3af39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3af3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3af3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3af42 jb 0x12e3aed0 */
  if (C.cf) goto L_12e3aed0;
  /* 12e3af44 std  */
  C.df=1;
  /* 12e3af45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3af47 cld  */
  C.df=0;
  /* 12e3af48 jmp dword ptr [edx*4 + 0x12e3aff0] */
  switch (EDX) {
    case 0: goto L_12e3b000;
    case 1: goto L_12e3b008;
    case 2: goto L_12e3b018;
    case 3: goto L_12e3b02c;
    default: x86_unimpl("switch@0x12e3af48 out of table"); return;
  }
  /* 12e3af4f nop  */
  /* nop */
L_12e3af50:;
  /* 12e3af50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3af53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3af55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e3af58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3af5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3af5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e3af61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3af64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3af67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3af6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3af6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3af70 jb 0x12e3aed0 */
  if (C.cf) goto L_12e3aed0;
  /* 12e3af76 std  */
  C.df=1;
  /* 12e3af77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12e3af79 cld  */
  C.df=0;
  /* 12e3af7a jmp dword ptr [edx*4 + 0x12e3aff0] */
  switch (EDX) {
    case 0: goto L_12e3b000;
    case 1: goto L_12e3b008;
    case 2: goto L_12e3b018;
    case 3: goto L_12e3b02c;
    default: x86_unimpl("switch@0x12e3af7a out of table"); return;
  }
  /* 12e3af81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12e3af84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12e3af85 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12e3af86 jecxz 0x12e3af9a */
  x86_unimpl("jecxz @ 0x12e3af86");
  /* 12e3af88 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 12e3af89 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12e3af8a jecxz 0x12e3af9e */
  x86_unimpl("jecxz @ 0x12e3af8a");
  /* 12e3af8c mov ah, 0xaf */
  AH = (0xafu);
  /* 12e3af8e jecxz 0x12e3afa2 */
  x86_unimpl("jecxz @ 0x12e3af8e");
  /* 12e3af90 mov esp, 0xc412e3af */
  ESP = (0xc412e3afu);
  /* 12e3af95 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12e3af96 jecxz 0x12e3afaa */
  x86_unimpl("jecxz @ 0x12e3af96");
  /* 12e3af98 int3  */
  x86_unimpl("int3 @ 0x12e3af98");
  /* 12e3af99 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 12e3af9a jecxz 0x12e3afae */
  x86_unimpl("jecxz @ 0x12e3af9a");
  /* 12e3af9c aam 0xaf */
  x86_unimpl("aam @ 0x12e3af9c");
  /* 12e3af9e jecxz 0x12e3afb2 */
  x86_unimpl("jecxz @ 0x12e3af9e");
  /* 12e3afa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12e3afa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12e3afac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12e3afb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12e3afb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12e3afb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12e3afbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12e3afc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12e3afc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12e3afc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12e3afcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12e3afd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12e3afd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12e3afd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12e3afdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12e3afe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3afe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e3afe7:;
  /* 12e3afe7 jmp dword ptr [edx*4 + 0x12e3aff0] */
  switch (EDX) {
    case 0: goto L_12e3b000;
    case 1: goto L_12e3b008;
    case 2: goto L_12e3b018;
    case 3: goto L_12e3b02c;
    default: x86_unimpl("switch@0x12e3afe7 out of table"); return;
  }
  /* 12e3afee mov edi, edi */
  EDI = (EDI);
L_12e3b000:;
  /* 12e3b000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b003 pop esi */
  ESI = (pop32());
  /* 12e3b004 pop edi */
  EDI = (pop32());
  /* 12e3b005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3b006 ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3b007 nop  */
  /* nop */
L_12e3b008:;
  /* 12e3b008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3b00b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e3b00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b011 pop esi */
  ESI = (pop32());
  /* 12e3b012 pop edi */
  EDI = (pop32());
  /* 12e3b013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3b014 ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3b015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3b018:;
  /* 12e3b018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3b01b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e3b01e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3b021 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3b024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b027 pop esi */
  ESI = (pop32());
  /* 12e3b028 pop edi */
  EDI = (pop32());
  /* 12e3b029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3b02a ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
  /* 12e3b02b nop  */
  /* nop */
L_12e3b02c:;
  /* 12e3b02c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12e3b02f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12e3b032 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12e3b035 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12e3b038 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12e3b03b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12e3b03e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b041 pop esi */
  ESI = (pop32());
  /* 12e3b042 pop edi */
  EDI = (pop32());
  /* 12e3b043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3b044 ret  */
  ESPCHK(0x12e3ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x12e3b050 (421 bytes, 148 insns) */
void f_12e3b050(void) {
  FTRACE(0x12e3b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b050 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b051 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e3b055 push 0x12e59f48 */
  push32((uint32_t)(0x12e59f48u));
  /* 12e3b05a push 0x12e3bf28 */
  push32((uint32_t)(0x12e3bf28u));
  /* 12e3b05f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e3b065 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e3b06d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b070 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3b071 push esi */
  push32((uint32_t)(ESI));
  /* 12e3b072 push edi */
  push32((uint32_t)(EDI));
  /* 12e3b073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e3b076 cmp dword ptr [0x12e5e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b07d jne 0x12e3b0ce */
  if (!C.zf) goto L_12e3b0ce;
  /* 12e3b07f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12e3b082 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b083 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b085 push 0x12e59f44 */
  push32((uint32_t)(0x12e59f44u));
  /* 12e3b08a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b08c call dword ptr [0x12e60350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60350))), 0x12e3b092u);
  /* 12e3b092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b094 je 0x12e3b0a2 */
  if (C.zf) goto L_12e3b0a2;
  /* 12e3b096 mov dword ptr [0x12e5e684], 1 */
  w32((uint32_t)(0x12e5e684), (0x1u));
  /* 12e3b0a0 jmp 0x12e3b0ce */
  goto L_12e3b0ce;
L_12e3b0a2:;
  /* 12e3b0a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12e3b0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b0a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b0a8 push 0x12e59f40 */
  push32((uint32_t)(0x12e59f40u));
  /* 12e3b0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b0af push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b0b1 call dword ptr [0x12e6034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6034c))), 0x12e3b0b7u);
  /* 12e3b0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b0b9 je 0x12e3b0c7 */
  if (C.zf) goto L_12e3b0c7;
  /* 12e3b0bb mov dword ptr [0x12e5e684], 2 */
  w32((uint32_t)(0x12e5e684), (0x2u));
  /* 12e3b0c5 jmp 0x12e3b0ce */
  goto L_12e3b0ce;
L_12e3b0c7:;
  /* 12e3b0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b0c9 jmp 0x12e3b1f8 */
  goto L_12e3b1f8;
L_12e3b0ce:;
  /* 12e3b0ce cmp dword ptr [0x12e5e684], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e684))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b0d5 jne 0x12e3b105 */
  if (!C.zf) goto L_12e3b105;
  /* 12e3b0d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b0db jne 0x12e3b0e6 */
  if (!C.zf) goto L_12e3b0e6;
  /* 12e3b0dd mov edx, dword ptr [0x12e5e690] */
  EDX = (r32((uint32_t)(0x12e5e690)));
  /* 12e3b0e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12e3b0e6:;
  /* 12e3b0e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3b0e9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b0ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b0ed push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b0ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b0f1 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b0f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b0f5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b0f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e3b0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b0fa call dword ptr [0x12e6034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6034c))), 0x12e3b100u);
  /* 12e3b100 jmp 0x12e3b1f8 */
  goto L_12e3b1f8;
L_12e3b105:;
  /* 12e3b105 cmp dword ptr [0x12e5e684], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e684))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b10c jne 0x12e3b1f6 */
  if (!C.zf) goto L_12e3b1f6;
  /* 12e3b112 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b116 jne 0x12e3b121 */
  if (!C.zf) goto L_12e3b121;
  /* 12e3b118 mov edx, dword ptr [0x12e5e6a0] */
  EDX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e3b11e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12e3b121:;
  /* 12e3b121 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b123 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b125 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b128 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b12c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b12d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e3b130 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3b132 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b134 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b13a push edx */
  push32((uint32_t)(EDX));
  /* 12e3b13b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3b13e push eax */
  push32((uint32_t)(EAX));
  /* 12e3b13f call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e3b145u);
  /* 12e3b145 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3b148 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b14c jne 0x12e3b155 */
  if (!C.zf) goto L_12e3b155;
  /* 12e3b14e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b150 jmp 0x12e3b1f8 */
  goto L_12e3b1f8;
L_12e3b155:;
  /* 12e3b155 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3b15c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3b15f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e3b161 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b164 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e3b166 call 0x12e35fc0 */
  push32(0x12e3b16bu); f_12e35fc0();
  /* 12e3b16b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12e3b16e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e3b171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3b174 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e3b177 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3b17a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12e3b17c push edx */
  push32((uint32_t)(EDX));
  /* 12e3b17d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b17f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b182 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b183 call 0x12e36b90 */
  push32(0x12e3b188u); f_12e36b90();
  /* 12e3b188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b18b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e3b192 jmp 0x12e3b1ab */
  goto L_12e3b1ab;
  /* 12e3b194 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3b199 ret  */
  ESPCHK(0x12e3b050u, _esp0);
  ESP += 4; return;
  /* 12e3b19a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3b19d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e3b1a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e3b1ab:;
  /* 12e3b1ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b1af jne 0x12e3b1b5 */
  if (!C.zf) goto L_12e3b1b5;
  /* 12e3b1b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b1b3 jmp 0x12e3b1f8 */
  goto L_12e3b1f8;
L_12e3b1b5:;
  /* 12e3b1b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3b1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b1b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b1bc push edx */
  push32((uint32_t)(EDX));
  /* 12e3b1bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b1c0 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b1c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b1c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b1c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3b1ca push edx */
  push32((uint32_t)(EDX));
  /* 12e3b1cb call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e3b1d1u);
  /* 12e3b1d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e3b1d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b1d8 jne 0x12e3b1de */
  if (!C.zf) goto L_12e3b1de;
  /* 12e3b1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b1dc jmp 0x12e3b1f8 */
  goto L_12e3b1f8;
L_12e3b1de:;
  /* 12e3b1de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3b1e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b1e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3b1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b1e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b1e9 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b1ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b1ed push eax */
  push32((uint32_t)(EAX));
  /* 12e3b1ee call dword ptr [0x12e60350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60350))), 0x12e3b1f4u);
  /* 12e3b1f4 jmp 0x12e3b1f8 */
  goto L_12e3b1f8;
L_12e3b1f6:;
  /* 12e3b1f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3b1f8:;
  /* 12e3b1f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12e3b1fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3b1fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e3b205 pop edi */
  EDI = (pop32());
  /* 12e3b206 pop esi */
  ESI = (pop32());
  /* 12e3b207 pop ebx */
  EBX = (pop32());
  /* 12e3b208 mov esp, ebp */
  ESP = (EBP);
  /* 12e3b20a pop ebp */
  EBP = (pop32());
  /* 12e3b20b ret  */
  ESPCHK(0x12e3b050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x12e3b210 (727 bytes, 263 insns) */
void f_12e3b210(void) {
  FTRACE(0x12e3b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b210 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b211 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e3b215 push 0x12e59f58 */
  push32((uint32_t)(0x12e59f58u));
  /* 12e3b21a push 0x12e3bf28 */
  push32((uint32_t)(0x12e3bf28u));
  /* 12e3b21f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e3b225 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b226 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e3b22d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b230 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3b231 push esi */
  push32((uint32_t)(ESI));
  /* 12e3b232 push edi */
  push32((uint32_t)(EDI));
  /* 12e3b233 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e3b236 cmp dword ptr [0x12e5e6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b23d jne 0x12e3b296 */
  if (!C.zf) goto L_12e3b296;
  /* 12e3b23f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b241 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b243 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b245 push 0x12e59f44 */
  push32((uint32_t)(0x12e59f44u));
  /* 12e3b24a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e3b24f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b251 call dword ptr [0x12e60358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60358))), 0x12e3b257u);
  /* 12e3b257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b259 je 0x12e3b267 */
  if (C.zf) goto L_12e3b267;
  /* 12e3b25b mov dword ptr [0x12e5e6a8], 1 */
  w32((uint32_t)(0x12e5e6a8), (0x1u));
  /* 12e3b265 jmp 0x12e3b296 */
  goto L_12e3b296;
L_12e3b267:;
  /* 12e3b267 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b269 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b26b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b26d push 0x12e59f40 */
  push32((uint32_t)(0x12e59f40u));
  /* 12e3b272 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e3b277 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b279 call dword ptr [0x12e60354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60354))), 0x12e3b27fu);
  /* 12e3b27f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b281 je 0x12e3b28f */
  if (C.zf) goto L_12e3b28f;
  /* 12e3b283 mov dword ptr [0x12e5e6a8], 2 */
  w32((uint32_t)(0x12e5e6a8), (0x2u));
  /* 12e3b28d jmp 0x12e3b296 */
  goto L_12e3b296;
L_12e3b28f:;
  /* 12e3b28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b291 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b296:;
  /* 12e3b296 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b29a jle 0x12e3b2af */
  if ((C.zf||C.sf!=C.of)) goto L_12e3b2af;
  /* 12e3b29c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3b29f push eax */
  push32((uint32_t)(EAX));
  /* 12e3b2a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b2a4 call 0x12e3b520 */
  push32(0x12e3b2a9u); f_12e3b520();
  /* 12e3b2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b2ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12e3b2af:;
  /* 12e3b2af cmp dword ptr [0x12e5e6a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b2b6 jne 0x12e3b2db */
  if (!C.zf) goto L_12e3b2db;
  /* 12e3b2b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e3b2bb push edx */
  push32((uint32_t)(EDX));
  /* 12e3b2bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3b2bf push eax */
  push32((uint32_t)(EAX));
  /* 12e3b2c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3b2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b2c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b2c7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b2cb push eax */
  push32((uint32_t)(EAX));
  /* 12e3b2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b2cf push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b2d0 call dword ptr [0x12e60354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60354))), 0x12e3b2d6u);
  /* 12e3b2d6 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b2db:;
  /* 12e3b2db cmp dword ptr [0x12e5e6a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b2e2 jne 0x12e3b4ff */
  if (!C.zf) goto L_12e3b4ff;
  /* 12e3b2e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b2ec jne 0x12e3b2f7 */
  if (!C.zf) goto L_12e3b2f7;
  /* 12e3b2ee mov edx, dword ptr [0x12e5e6a0] */
  EDX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e3b2f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12e3b2f7:;
  /* 12e3b2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b2fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3b2fe push eax */
  push32((uint32_t)(EAX));
  /* 12e3b2ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b302 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b303 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e3b306 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3b308 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b30a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b310 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b311 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e3b314 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b315 call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e3b31bu);
  /* 12e3b31b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e3b31e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b322 jne 0x12e3b32b */
  if (!C.zf) goto L_12e3b32b;
  /* 12e3b324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b326 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b32b:;
  /* 12e3b32b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3b332 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3b335 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e3b337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e3b33c call 0x12e35fc0 */
  push32(0x12e3b341u); f_12e35fc0();
  /* 12e3b341 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12e3b344 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e3b347 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3b34a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e3b34d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e3b354 jmp 0x12e3b36d */
  goto L_12e3b36d;
  /* 12e3b356 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3b35b ret  */
  ESPCHK(0x12e3b210u, _esp0);
  ESP += 4; return;
  /* 12e3b35c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3b35f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e3b366 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e3b36d:;
  /* 12e3b36d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b371 jne 0x12e3b37a */
  if (!C.zf) goto L_12e3b37a;
  /* 12e3b373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b375 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b37a:;
  /* 12e3b37a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3b37d push edx */
  push32((uint32_t)(EDX));
  /* 12e3b37e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b381 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b382 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3b385 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b386 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b389 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b38a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3b38c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e3b38f push eax */
  push32((uint32_t)(EAX));
  /* 12e3b390 call dword ptr [0x12e60348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60348))), 0x12e3b396u);
  /* 12e3b396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b398 jne 0x12e3b3a1 */
  if (!C.zf) goto L_12e3b3a1;
  /* 12e3b39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b39c jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b3a1:;
  /* 12e3b3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b3a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3b3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b3a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b3ac push edx */
  push32((uint32_t)(EDX));
  /* 12e3b3ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b3b0 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b3b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b3b5 call dword ptr [0x12e60358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60358))), 0x12e3b3bbu);
  /* 12e3b3bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e3b3be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b3c2 jne 0x12e3b3cb */
  if (!C.zf) goto L_12e3b3cb;
  /* 12e3b3c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b3c6 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b3cb:;
  /* 12e3b3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b3ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b3d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3b3d6 je 0x12e3b41b */
  if (C.zf) goto L_12e3b41b;
  /* 12e3b3d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b3dc je 0x12e3b416 */
  if (C.zf) goto L_12e3b416;
  /* 12e3b3de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3b3e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b3e4 jle 0x12e3b3ed */
  if ((C.zf||C.sf!=C.of)) goto L_12e3b3ed;
  /* 12e3b3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b3e8 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b3ed:;
  /* 12e3b3ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e3b3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b3f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3b3f4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b3f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3b3f8 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b3f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b3fc push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b3fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b400 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b404 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b405 call dword ptr [0x12e60358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60358))), 0x12e3b40bu);
  /* 12e3b40b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b40d jne 0x12e3b416 */
  if (!C.zf) goto L_12e3b416;
  /* 12e3b40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b411 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b416:;
  /* 12e3b416 jmp 0x12e3b4fa */
  goto L_12e3b4fa;
L_12e3b41b:;
  /* 12e3b41b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3b41e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e3b421 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e3b428 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3b42b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e3b42d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b430 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e3b432 call 0x12e35fc0 */
  push32(0x12e3b437u); f_12e35fc0();
  /* 12e3b437 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12e3b43a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e3b43d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e3b440 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e3b443 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e3b44a jmp 0x12e3b463 */
  goto L_12e3b463;
  /* 12e3b44c mov eax, 1 */
  EAX = (0x1u);
  /* 12e3b451 ret  */
  ESPCHK(0x12e3b210u, _esp0);
  ESP += 4; return;
  /* 12e3b452 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3b455 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e3b45c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e3b463:;
  /* 12e3b463 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b467 jne 0x12e3b470 */
  if (!C.zf) goto L_12e3b470;
  /* 12e3b469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b46b jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b470:;
  /* 12e3b470 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3b473 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b474 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3b477 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b478 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3b47b push edx */
  push32((uint32_t)(EDX));
  /* 12e3b47c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3b47f push eax */
  push32((uint32_t)(EAX));
  /* 12e3b480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b483 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b487 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b488 call dword ptr [0x12e60358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60358))), 0x12e3b48eu);
  /* 12e3b48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b490 jne 0x12e3b496 */
  if (!C.zf) goto L_12e3b496;
  /* 12e3b492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b494 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b496:;
  /* 12e3b496 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b49a jne 0x12e3b4ca */
  if (!C.zf) goto L_12e3b4ca;
  /* 12e3b49c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b49e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b4a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3b4a7 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b4a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3b4ab push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b4ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e3b4b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e3b4b4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b4b5 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e3b4bbu);
  /* 12e3b4bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e3b4be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b4c2 jne 0x12e3b4c8 */
  if (!C.zf) goto L_12e3b4c8;
  /* 12e3b4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b4c6 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b4c8:;
  /* 12e3b4c8 jmp 0x12e3b4fa */
  goto L_12e3b4fa;
L_12e3b4ca:;
  /* 12e3b4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b4cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b4ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e3b4d1 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b4d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3b4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b4d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3b4d9 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b4da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3b4dd push eax */
  push32((uint32_t)(EAX));
  /* 12e3b4de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e3b4e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e3b4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b4e7 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e3b4edu);
  /* 12e3b4ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e3b4f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b4f4 jne 0x12e3b4fa */
  if (!C.zf) goto L_12e3b4fa;
  /* 12e3b4f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b4f8 jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b4fa:;
  /* 12e3b4fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3b4fd jmp 0x12e3b501 */
  goto L_12e3b501;
L_12e3b4ff:;
  /* 12e3b4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3b501:;
  /* 12e3b501 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12e3b504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3b507 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e3b50e pop edi */
  EDI = (pop32());
  /* 12e3b50f pop esi */
  ESI = (pop32());
  /* 12e3b510 pop ebx */
  EBX = (pop32());
  /* 12e3b511 mov esp, ebp */
  ESP = (EBP);
  /* 12e3b513 pop ebp */
  EBP = (pop32());
  /* 12e3b514 ret  */
  ESPCHK(0x12e3b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b520 @ 0x12e3b520 (80 bytes, 32 insns) */
void f_12e3b520(void) {
  FTRACE(0x12e3b520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b520 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b521 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b529 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3b52c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b52f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3b532:;
  /* 12e3b532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b538 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3b53e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3b540 je 0x12e3b557 */
  if (C.zf) goto L_12e3b557;
  /* 12e3b542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b545 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3b548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3b54a je 0x12e3b557 */
  if (C.zf) goto L_12e3b557;
  /* 12e3b54c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b54f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3b555 jmp 0x12e3b532 */
  goto L_12e3b532;
L_12e3b557:;
  /* 12e3b557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b55a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3b55d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3b55f jne 0x12e3b569 */
  if (!C.zf) goto L_12e3b569;
  /* 12e3b561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b564 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b567 jmp 0x12e3b56c */
  goto L_12e3b56c;
L_12e3b569:;
  /* 12e3b569 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12e3b56c:;
  /* 12e3b56c mov esp, ebp */
  ESP = (EBP);
  /* 12e3b56e pop ebp */
  EBP = (pop32());
  /* 12e3b56f ret  */
  ESPCHK(0x12e3b520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x12e3b570 (130 bytes, 43 insns) */
void f_12e3b570(void) {
  FTRACE(0x12e3b570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b570 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b571 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b573 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b577 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b57d jae 0x12e3b5a1 */
  if (!C.cf) goto L_12e3b5a1;
  /* 12e3b57f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b582 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3b585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b588 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b58b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b58e mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3b595 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3b59a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3b59f jne 0x12e3b5bc */
  if (!C.zf) goto L_12e3b5bc;
L_12e3b5a1:;
  /* 12e3b5a1 call 0x12e3acf0 */
  push32(0x12e3b5a6u); f_12e3acf0();
  /* 12e3b5a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3b5ac call 0x12e3ad00 */
  push32(0x12e3b5b1u); f_12e3ad00();
  /* 12e3b5b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3b5b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b5ba jmp 0x12e3b5ee */
  goto L_12e3b5ee;
L_12e3b5bc:;
  /* 12e3b5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b5bf push edx */
  push32((uint32_t)(EDX));
  /* 12e3b5c0 call 0x12e3c510 */
  push32(0x12e3b5c5u); f_12e3c510();
  /* 12e3b5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b5c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b5cb push eax */
  push32((uint32_t)(EAX));
  /* 12e3b5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b5cf push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b5d3 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b5d4 call 0x12e3b600 */
  push32(0x12e3b5d9u); f_12e3b600();
  /* 12e3b5d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b5dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3b5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b5e2 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b5e3 call 0x12e3c5a0 */
  push32(0x12e3b5e8u); f_12e3c5a0();
  /* 12e3b5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e3b5ee:;
  /* 12e3b5ee mov esp, ebp */
  ESP = (EBP);
  /* 12e3b5f0 pop ebp */
  EBP = (pop32());
  /* 12e3b5f1 ret  */
  ESPCHK(0x12e3b570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x12e3b600 (178 bytes, 56 insns) */
void f_12e3b600(void) {
  FTRACE(0x12e3b600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b600 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b601 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b609 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b60a call 0x12e3c390 */
  push32(0x12e3b60fu); f_12e3c390();
  /* 12e3b60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b612 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3b615 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b619 jne 0x12e3b62e */
  if (!C.zf) goto L_12e3b62e;
  /* 12e3b61b call 0x12e3acf0 */
  push32(0x12e3b620u); f_12e3acf0();
  /* 12e3b620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3b626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b629 jmp 0x12e3b6ae */
  goto L_12e3b6ae;
L_12e3b62e:;
  /* 12e3b62e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b631 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b637 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3b63b push eax */
  push32((uint32_t)(EAX));
  /* 12e3b63c call dword ptr [0x12e602ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602ec))), 0x12e3b642u);
  /* 12e3b642 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3b645 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b649 jne 0x12e3b656 */
  if (!C.zf) goto L_12e3b656;
  /* 12e3b64b call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3b651u);
  /* 12e3b651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3b654 jmp 0x12e3b65d */
  goto L_12e3b65d;
L_12e3b656:;
  /* 12e3b656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e3b65d:;
  /* 12e3b65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b661 je 0x12e3b674 */
  if (C.zf) goto L_12e3b674;
  /* 12e3b663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b666 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b667 call 0x12e3ac50 */
  push32(0x12e3b66cu); f_12e3ac50();
  /* 12e3b66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b66f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b672 jmp 0x12e3b6ae */
  goto L_12e3b6ae;
L_12e3b674:;
  /* 12e3b674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b677 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e3b67a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b67d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b680 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b683 mov ecx, dword ptr [edx*4 + 0x12e5fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e3b68a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12e3b68e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12e3b691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b694 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3b697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b69a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b69d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b6a0 mov eax, dword ptr [eax*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3b6a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12e3b6ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e3b6ae:;
  /* 12e3b6ae mov esp, ebp */
  ESP = (EBP);
  /* 12e3b6b0 pop ebp */
  EBP = (pop32());
  /* 12e3b6b1 ret  */
  ESPCHK(0x12e3b600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x12e3b6c0 (130 bytes, 43 insns) */
void f_12e3b6c0(void) {
  FTRACE(0x12e3b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b6c7 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b6cd jae 0x12e3b6f1 */
  if (!C.cf) goto L_12e3b6f1;
  /* 12e3b6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3b6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b6de mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3b6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3b6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3b6ef jne 0x12e3b70c */
  if (!C.zf) goto L_12e3b70c;
L_12e3b6f1:;
  /* 12e3b6f1 call 0x12e3acf0 */
  push32(0x12e3b6f6u); f_12e3acf0();
  /* 12e3b6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3b6fc call 0x12e3ad00 */
  push32(0x12e3b701u); f_12e3ad00();
  /* 12e3b701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3b707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b70a jmp 0x12e3b73e */
  goto L_12e3b73e;
L_12e3b70c:;
  /* 12e3b70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b70f push edx */
  push32((uint32_t)(EDX));
  /* 12e3b710 call 0x12e3c510 */
  push32(0x12e3b715u); f_12e3c510();
  /* 12e3b715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b71b push eax */
  push32((uint32_t)(EAX));
  /* 12e3b71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b71f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b723 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b724 call 0x12e3b750 */
  push32(0x12e3b729u); f_12e3b750();
  /* 12e3b729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3b72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b732 push eax */
  push32((uint32_t)(EAX));
  /* 12e3b733 call 0x12e3c5a0 */
  push32(0x12e3b738u); f_12e3c5a0();
  /* 12e3b738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e3b73e:;
  /* 12e3b73e mov esp, ebp */
  ESP = (EBP);
  /* 12e3b740 pop ebp */
  EBP = (pop32());
  /* 12e3b741 ret  */
  ESPCHK(0x12e3b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x12e3b750 (627 bytes, 182 insns) */
void f_12e3b750(void) {
  FTRACE(0x12e3b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b750 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b751 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b753 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b759 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3b760 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3b763 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12e3b769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b76d jne 0x12e3b776 */
  if (!C.zf) goto L_12e3b776;
  /* 12e3b76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b771 jmp 0x12e3b9bf */
  goto L_12e3b9bf;
L_12e3b776:;
  /* 12e3b776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b779 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3b77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b77f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b782 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b785 mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3b78c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3b791 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3b796 je 0x12e3b7a8 */
  if (C.zf) goto L_12e3b7a8;
  /* 12e3b798 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3b79a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b79f push edx */
  push32((uint32_t)(EDX));
  /* 12e3b7a0 call 0x12e3b600 */
  push32(0x12e3b7a5u); f_12e3b600();
  /* 12e3b7a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3b7a8:;
  /* 12e3b7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b7ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3b7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b7b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b7b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b7b7 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3b7be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12e3b7c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b7ca je 0x12e3b8dc */
  if (C.zf) goto L_12e3b8dc;
  /* 12e3b7d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b7d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3b7d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e3b7dd:;
  /* 12e3b7dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b7e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b7e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b7e6 jae 0x12e3b8da */
  if (!C.cf) goto L_12e3b8da;
  /* 12e3b7ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12e3b7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e3b7f5:;
  /* 12e3b7f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b7f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12e3b7fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b800 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b806 jge 0x12e3b867 */
  if ((C.sf==C.of)) goto L_12e3b867;
  /* 12e3b808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b80b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b80e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b811 jae 0x12e3b867 */
  if (!C.cf) goto L_12e3b867;
  /* 12e3b813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e3b818 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12e3b81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3b821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3b827 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12e3b82e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b831 jne 0x12e3b851 */
  if (!C.zf) goto L_12e3b851;
  /* 12e3b833 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12e3b839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b83c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12e3b842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b845 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12e3b848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b84b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b84e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e3b851:;
  /* 12e3b851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b854 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12e3b85a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e3b85c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b85f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b862 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3b865 jmp 0x12e3b7f5 */
  goto L_12e3b7f5;
L_12e3b867:;
  /* 12e3b867 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b869 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12e3b86f push edx */
  push32((uint32_t)(EDX));
  /* 12e3b870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b873 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12e3b879 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b87b push eax */
  push32((uint32_t)(EAX));
  /* 12e3b87c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12e3b882 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b886 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3b889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b88c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b88f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b892 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3b899 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12e3b89c push eax */
  push32((uint32_t)(EAX));
  /* 12e3b89d call dword ptr [0x12e60290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60290))), 0x12e3b8a3u);
  /* 12e3b8a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b8a5 je 0x12e3b8ca */
  if (C.zf) goto L_12e3b8ca;
  /* 12e3b8a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3b8aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b8b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e3b8b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3b8b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12e3b8bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3b8be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b8c4 jge 0x12e3b8c8 */
  if ((C.sf==C.of)) goto L_12e3b8c8;
  /* 12e3b8c6 jmp 0x12e3b8da */
  goto L_12e3b8da;
L_12e3b8c8:;
  /* 12e3b8c8 jmp 0x12e3b8d5 */
  goto L_12e3b8d5;
L_12e3b8ca:;
  /* 12e3b8ca call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3b8d0u);
  /* 12e3b8d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3b8d3 jmp 0x12e3b8da */
  goto L_12e3b8da;
L_12e3b8d5:;
  /* 12e3b8d5 jmp 0x12e3b7dd */
  goto L_12e3b7dd;
L_12e3b8da:;
  /* 12e3b8da jmp 0x12e3b92c */
  goto L_12e3b92c;
L_12e3b8dc:;
  /* 12e3b8dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b8de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12e3b8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b8e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3b8e8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3b8e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b8ec push eax */
  push32((uint32_t)(EAX));
  /* 12e3b8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b8f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3b8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b8f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3b8f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b8fc mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3b903 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12e3b906 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b907 call dword ptr [0x12e60290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60290))), 0x12e3b90du);
  /* 12e3b90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b90f je 0x12e3b923 */
  if (C.zf) goto L_12e3b923;
  /* 12e3b911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e3b918 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12e3b91e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e3b921 jmp 0x12e3b92c */
  goto L_12e3b92c;
L_12e3b923:;
  /* 12e3b923 call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3b929u);
  /* 12e3b929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e3b92c:;
  /* 12e3b92c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b930 jne 0x12e3b9b6 */
  if (!C.zf) goto L_12e3b9b6;
  /* 12e3b936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b93a je 0x12e3b96a */
  if (C.zf) goto L_12e3b96a;
  /* 12e3b93c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b940 jne 0x12e3b959 */
  if (!C.zf) goto L_12e3b959;
  /* 12e3b942 call 0x12e3acf0 */
  push32(0x12e3b947u); f_12e3acf0();
  /* 12e3b947 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3b94d call 0x12e3ad00 */
  push32(0x12e3b952u); f_12e3ad00();
  /* 12e3b952 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3b955 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e3b957 jmp 0x12e3b965 */
  goto L_12e3b965;
L_12e3b959:;
  /* 12e3b959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3b95c push edx */
  push32((uint32_t)(EDX));
  /* 12e3b95d call 0x12e3ac50 */
  push32(0x12e3b962u); f_12e3ac50();
  /* 12e3b962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3b965:;
  /* 12e3b965 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b968 jmp 0x12e3b9bf */
  goto L_12e3b9bf;
L_12e3b96a:;
  /* 12e3b96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3b970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3b973 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3b976 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3b979 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3b980 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12e3b985 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b98a je 0x12e3b99b */
  if (C.zf) goto L_12e3b99b;
  /* 12e3b98c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3b98f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3b992 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b995 jne 0x12e3b99b */
  if (!C.zf) goto L_12e3b99b;
  /* 12e3b997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b999 jmp 0x12e3b9bf */
  goto L_12e3b9bf;
L_12e3b99b:;
  /* 12e3b99b call 0x12e3acf0 */
  push32(0x12e3b9a0u); f_12e3acf0();
  /* 12e3b9a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12e3b9a6 call 0x12e3ad00 */
  push32(0x12e3b9abu); f_12e3ad00();
  /* 12e3b9ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3b9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b9b4 jmp 0x12e3b9bf */
  goto L_12e3b9bf;
L_12e3b9b6:;
  /* 12e3b9b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3b9b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e3b9bf:;
  /* 12e3b9bf mov esp, ebp */
  ESP = (EBP);
  /* 12e3b9c1 pop ebp */
  EBP = (pop32());
  /* 12e3b9c2 ret  */
  ESPCHK(0x12e3b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x12e3b9d0 (199 bytes, 68 insns) */
void f_12e3b9d0(void) {
  FTRACE(0x12e3b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3b9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3b9d4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3b9d5 push esi */
  push32((uint32_t)(ESI));
  /* 12e3b9d6 push edi */
  push32((uint32_t)(EDI));
L_12e3b9d7:;
  /* 12e3b9d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b9db jne 0x12e3b9fb */
  if (!C.zf) goto L_12e3b9fb;
  /* 12e3b9dd push 0x12e59ea4 */
  push32((uint32_t)(0x12e59ea4u));
  /* 12e3b9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3b9e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12e3b9e6 push 0x12e59f70 */
  push32((uint32_t)(0x12e59f70u));
  /* 12e3b9eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3b9ed call 0x12e31ee0 */
  push32(0x12e3b9f2u); f_12e31ee0();
  /* 12e3b9f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3b9f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3b9f8 jne 0x12e3b9fb */
  if (!C.zf) goto L_12e3b9fb;
  /* 12e3b9fa int3  */
  x86_unimpl("int3 @ 0x12e3b9fa");
L_12e3b9fb:;
  /* 12e3b9fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3b9fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3b9ff jne 0x12e3b9d7 */
  if (!C.zf) goto L_12e3b9d7;
  /* 12e3ba01 mov ecx, dword ptr [0x12e5e6ac] */
  ECX = (r32((uint32_t)(0x12e5e6ac)));
  /* 12e3ba07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ba0a mov dword ptr [0x12e5e6ac], ecx */
  w32((uint32_t)(0x12e5e6ac), (ECX));
  /* 12e3ba10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ba13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3ba16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12e3ba18 push 0x12e59f70 */
  push32((uint32_t)(0x12e59f70u));
  /* 12e3ba1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ba1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e3ba24 call 0x12e32e20 */
  push32(0x12e3ba29u); f_12e32e20();
  /* 12e3ba29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ba2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12e3ba32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ba39 je 0x12e3ba56 */
  if (C.zf) goto L_12e3ba56;
  /* 12e3ba3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3ba41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3ba44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12e3ba4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12e3ba54 jmp 0x12e3ba7b */
  goto L_12e3ba7b;
L_12e3ba56:;
  /* 12e3ba56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3ba5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3ba5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e3ba65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ba6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12e3ba71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12e3ba7b:;
  /* 12e3ba7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e3ba84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e3ba86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ba89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e3ba90 pop edi */
  EDI = (pop32());
  /* 12e3ba91 pop esi */
  ESI = (pop32());
  /* 12e3ba92 pop ebx */
  EBX = (pop32());
  /* 12e3ba93 mov esp, ebp */
  ESP = (EBP);
  /* 12e3ba95 pop ebp */
  EBP = (pop32());
  /* 12e3ba96 ret  */
  ESPCHK(0x12e3b9d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12e3baa0 (50 bytes, 17 insns) */
void f_12e3baa0(void) {
  FTRACE(0x12e3baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3baa1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3baa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3baa6 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3baac jb 0x12e3bab2 */
  if (C.cf) goto L_12e3bab2;
  /* 12e3baae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3bab0 jmp 0x12e3bad0 */
  goto L_12e3bad0;
L_12e3bab2:;
  /* 12e3bab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bab5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3bab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3babb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3babe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3bac1 mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3bac8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3bacd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12e3bad0:;
  /* 12e3bad0 pop ebp */
  EBP = (pop32());
  /* 12e3bad1 ret  */
  ESPCHK(0x12e3baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x12e3bae0 (300 bytes, 80 insns) */
void f_12e3bae0(void) {
  FTRACE(0x12e3bae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bae1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bae4 cmp dword ptr [0x12e5fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3baeb jne 0x12e3baf9 */
  if (!C.zf) goto L_12e3baf9;
  /* 12e3baed mov dword ptr [0x12e5fb60], 0x200 */
  w32((uint32_t)(0x12e5fb60), (0x200u));
  /* 12e3baf7 jmp 0x12e3bb0c */
  goto L_12e3bb0c;
L_12e3baf9:;
  /* 12e3baf9 cmp dword ptr [0x12e5fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bb00 jge 0x12e3bb0c */
  if ((C.sf==C.of)) goto L_12e3bb0c;
  /* 12e3bb02 mov dword ptr [0x12e5fb60], 0x14 */
  w32((uint32_t)(0x12e5fb60), (0x14u));
L_12e3bb0c:;
  /* 12e3bb0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12e3bb11 push 0x12e59f7c */
  push32((uint32_t)(0x12e59f7cu));
  /* 12e3bb16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3bb18 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e3bb1a mov eax, dword ptr [0x12e5fb60] */
  EAX = (r32((uint32_t)(0x12e5fb60)));
  /* 12e3bb1f push eax */
  push32((uint32_t)(EAX));
  /* 12e3bb20 call 0x12e33230 */
  push32(0x12e3bb25u); f_12e33230();
  /* 12e3bb25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bb28 mov dword ptr [0x12e5e820], eax */
  w32((uint32_t)(0x12e5e820), (EAX));
  /* 12e3bb2d cmp dword ptr [0x12e5e820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bb34 jne 0x12e3bb75 */
  if (!C.zf) goto L_12e3bb75;
  /* 12e3bb36 mov dword ptr [0x12e5fb60], 0x14 */
  w32((uint32_t)(0x12e5fb60), (0x14u));
  /* 12e3bb40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12e3bb45 push 0x12e59f7c */
  push32((uint32_t)(0x12e59f7cu));
  /* 12e3bb4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3bb4c push 4 */
  push32((uint32_t)(0x4u));
  /* 12e3bb4e mov ecx, dword ptr [0x12e5fb60] */
  ECX = (r32((uint32_t)(0x12e5fb60)));
  /* 12e3bb54 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bb55 call 0x12e33230 */
  push32(0x12e3bb5au); f_12e33230();
  /* 12e3bb5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bb5d mov dword ptr [0x12e5e820], eax */
  w32((uint32_t)(0x12e5e820), (EAX));
  /* 12e3bb62 cmp dword ptr [0x12e5e820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bb69 jne 0x12e3bb75 */
  if (!C.zf) goto L_12e3bb75;
  /* 12e3bb6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12e3bb6d call 0x12e31d90 */
  push32(0x12e3bb72u); f_12e31d90();
  /* 12e3bb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3bb75:;
  /* 12e3bb75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3bb7c jmp 0x12e3bb87 */
  goto L_12e3bb87;
L_12e3bb7e:;
  /* 12e3bb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bb81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3bb87:;
  /* 12e3bb87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bb8b jge 0x12e3bba6 */
  if ((C.sf==C.of)) goto L_12e3bba6;
  /* 12e3bb8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bb90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3bb93 add eax, 0x12e5d120 */
  { uint32_t _a=(EAX),_b=(0x12e5d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bb9b mov edx, dword ptr [0x12e5e820] */
  EDX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3bba1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12e3bba4 jmp 0x12e3bb7e */
  goto L_12e3bb7e;
L_12e3bba6:;
  /* 12e3bba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3bbad jmp 0x12e3bbb8 */
  goto L_12e3bbb8;
L_12e3bbaf:;
  /* 12e3bbaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bbb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3bbb8:;
  /* 12e3bbb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bbbc jge 0x12e3bc08 */
  if ((C.sf==C.of)) goto L_12e3bc08;
  /* 12e3bbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bbc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3bbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bbc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3bbca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3bbcd mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3bbd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bbd8 je 0x12e3bbf6 */
  if (C.zf) goto L_12e3bbf6;
  /* 12e3bbda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bbdd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3bbe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bbe3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3bbe6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3bbe9 mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3bbf0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bbf4 jne 0x12e3bc06 */
  if (!C.zf) goto L_12e3bc06;
L_12e3bbf6:;
  /* 12e3bbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3bbf9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3bbfc mov dword ptr [ecx + 0x12e5d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12e5d130), (0xffffffffu));
L_12e3bc06:;
  /* 12e3bc06 jmp 0x12e3bbaf */
  goto L_12e3bbaf;
L_12e3bc08:;
  /* 12e3bc08 mov esp, ebp */
  ESP = (EBP);
  /* 12e3bc0a pop ebp */
  EBP = (pop32());
  /* 12e3bc0b ret  */
  ESPCHK(0x12e3bae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x12e3bc10 (26 bytes, 9 insns) */
void f_12e3bc10(void) {
  FTRACE(0x12e3bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bc11 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bc13 call 0x12e3c810 */
  push32(0x12e3bc18u); f_12e3c810();
  /* 12e3bc18 movsx eax, byte ptr [0x12e5e4c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12e5e4c4))));
  /* 12e3bc1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3bc21 je 0x12e3bc28 */
  if (C.zf) goto L_12e3bc28;
  /* 12e3bc23 call 0x12e3c5d0 */
  push32(0x12e3bc28u); f_12e3c5d0();
L_12e3bc28:;
  /* 12e3bc28 pop ebp */
  EBP = (pop32());
  /* 12e3bc29 ret  */
  ESPCHK(0x12e3bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x12e3bc30 (61 bytes, 20 insns) */
void f_12e3bc30(void) {
  FTRACE(0x12e3bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bc31 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bc33 cmp dword ptr [ebp + 8], 0x12e5d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e5d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bc3a jb 0x12e3bc5e */
  if (C.cf) goto L_12e3bc5e;
  /* 12e3bc3c cmp dword ptr [ebp + 8], 0x12e5d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e5d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bc43 ja 0x12e3bc5e */
  if ((!C.cf&&!C.zf)) goto L_12e3bc5e;
  /* 12e3bc45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bc48 sub eax, 0x12e5d120 */
  { uint32_t _a=(EAX),_b=(0x12e5d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3bc4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3bc50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bc53 push eax */
  push32((uint32_t)(EAX));
  /* 12e3bc54 call 0x12e36820 */
  push32(0x12e3bc59u); f_12e36820();
  /* 12e3bc59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bc5c jmp 0x12e3bc6b */
  goto L_12e3bc6b;
L_12e3bc5e:;
  /* 12e3bc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bc61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bc64 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bc65 call dword ptr [0x12e60320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60320))), 0x12e3bc6bu);
L_12e3bc6b:;
  /* 12e3bc6b pop ebp */
  EBP = (pop32());
  /* 12e3bc6c ret  */
  ESPCHK(0x12e3bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x12e3bc70 (41 bytes, 16 insns) */
void f_12e3bc70(void) {
  FTRACE(0x12e3bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bc71 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bc73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bc77 jge 0x12e3bc8a */
  if ((C.sf==C.of)) goto L_12e3bc8a;
  /* 12e3bc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bc7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bc7f push eax */
  push32((uint32_t)(EAX));
  /* 12e3bc80 call 0x12e36820 */
  push32(0x12e3bc85u); f_12e36820();
  /* 12e3bc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bc88 jmp 0x12e3bc97 */
  goto L_12e3bc97;
L_12e3bc8a:;
  /* 12e3bc8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3bc8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bc90 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bc91 call dword ptr [0x12e60320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60320))), 0x12e3bc97u);
L_12e3bc97:;
  /* 12e3bc97 pop ebp */
  EBP = (pop32());
  /* 12e3bc98 ret  */
  ESPCHK(0x12e3bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bca0 @ 0x12e3bca0 (61 bytes, 20 insns) */
void f_12e3bca0(void) {
  FTRACE(0x12e3bca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bca1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bca3 cmp dword ptr [ebp + 8], 0x12e5d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e5d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bcaa jb 0x12e3bcce */
  if (C.cf) goto L_12e3bcce;
  /* 12e3bcac cmp dword ptr [ebp + 8], 0x12e5d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e5d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bcb3 ja 0x12e3bcce */
  if ((!C.cf&&!C.zf)) goto L_12e3bcce;
  /* 12e3bcb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bcb8 sub eax, 0x12e5d120 */
  { uint32_t _a=(EAX),_b=(0x12e5d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3bcbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3bcc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bcc3 push eax */
  push32((uint32_t)(EAX));
  /* 12e3bcc4 call 0x12e368c0 */
  push32(0x12e3bcc9u); f_12e368c0();
  /* 12e3bcc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bccc jmp 0x12e3bcdb */
  goto L_12e3bcdb;
L_12e3bcce:;
  /* 12e3bcce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bcd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bcd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bcd5 call dword ptr [0x12e60324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60324))), 0x12e3bcdbu);
L_12e3bcdb:;
  /* 12e3bcdb pop ebp */
  EBP = (pop32());
  /* 12e3bcdc ret  */
  ESPCHK(0x12e3bca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x12e3bce0 (41 bytes, 16 insns) */
void f_12e3bce0(void) {
  FTRACE(0x12e3bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bce1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bce3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bce7 jge 0x12e3bcfa */
  if ((C.sf==C.of)) goto L_12e3bcfa;
  /* 12e3bce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bcec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bcef push eax */
  push32((uint32_t)(EAX));
  /* 12e3bcf0 call 0x12e368c0 */
  push32(0x12e3bcf5u); f_12e368c0();
  /* 12e3bcf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bcf8 jmp 0x12e3bd07 */
  goto L_12e3bd07;
L_12e3bcfa:;
  /* 12e3bcfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3bcfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bd00 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bd01 call dword ptr [0x12e60324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60324))), 0x12e3bd07u);
L_12e3bd07:;
  /* 12e3bd07 pop ebp */
  EBP = (pop32());
  /* 12e3bd08 ret  */
  ESPCHK(0x12e3bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x12e3bd10 (119 bytes, 34 insns) */
void f_12e3bd10(void) {
  FTRACE(0x12e3bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bd10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bd11 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3bd16 push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e3bd1b call dword ptr [0x12e602a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a4))), 0x12e3bd21u);
  /* 12e3bd21 cmp dword ptr [0x12e5e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bd28 je 0x12e3bd48 */
  if (C.zf) goto L_12e3bd48;
  /* 12e3bd2a push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e3bd2f call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e3bd35u);
  /* 12e3bd35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e3bd37 call 0x12e36820 */
  push32(0x12e3bd3cu); f_12e36820();
  /* 12e3bd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bd3f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e3bd46 jmp 0x12e3bd4f */
  goto L_12e3bd4f;
L_12e3bd48:;
  /* 12e3bd48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e3bd4f:;
  /* 12e3bd4f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12e3bd53 push eax */
  push32((uint32_t)(EAX));
  /* 12e3bd54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bd57 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bd58 call 0x12e3bd90 */
  push32(0x12e3bd5du); f_12e3bd90();
  /* 12e3bd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bd60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3bd63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bd67 je 0x12e3bd75 */
  if (C.zf) goto L_12e3bd75;
  /* 12e3bd69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e3bd6b call 0x12e368c0 */
  push32(0x12e3bd70u); f_12e368c0();
  /* 12e3bd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bd73 jmp 0x12e3bd80 */
  goto L_12e3bd80;
L_12e3bd75:;
  /* 12e3bd75 push 0x12e5e81c */
  push32((uint32_t)(0x12e5e81cu));
  /* 12e3bd7a call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e3bd80u);
L_12e3bd80:;
  /* 12e3bd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3bd83 mov esp, ebp */
  ESP = (EBP);
  /* 12e3bd85 pop ebp */
  EBP = (pop32());
  /* 12e3bd86 ret  */
  ESPCHK(0x12e3bd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x12e3bd90 (160 bytes, 50 insns) */
void f_12e3bd90(void) {
  FTRACE(0x12e3bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bd91 mov ebp, esp */
  EBP = (ESP);
  /* 12e3bd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3bd96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bd9a jne 0x12e3bda3 */
  if (!C.zf) goto L_12e3bda3;
  /* 12e3bd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3bd9e jmp 0x12e3be2c */
  goto L_12e3be2c;
L_12e3bda3:;
  /* 12e3bda3 cmp dword ptr [0x12e5e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bdaa jne 0x12e3bdda */
  if (!C.zf) goto L_12e3bdda;
  /* 12e3bdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3bdaf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3bdb4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bdb9 jle 0x12e3bdcb */
  if ((C.zf||C.sf!=C.of)) goto L_12e3bdcb;
  /* 12e3bdbb call 0x12e3acf0 */
  push32(0x12e3bdc0u); f_12e3acf0();
  /* 12e3bdc0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12e3bdc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3bdc9 jmp 0x12e3be2c */
  goto L_12e3be2c;
L_12e3bdcb:;
  /* 12e3bdcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bdce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e3bdd1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12e3bdd3 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3bdd8 jmp 0x12e3be2c */
  goto L_12e3be2c;
L_12e3bdda:;
  /* 12e3bdda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3bde1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e3bde4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3bde5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3bde7 mov ecx, dword ptr [0x12e5cea4] */
  ECX = (r32((uint32_t)(0x12e5cea4)));
  /* 12e3bded push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bdee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bdf1 push edx */
  push32((uint32_t)(EDX));
  /* 12e3bdf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3bdf4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12e3bdf7 push eax */
  push32((uint32_t)(EAX));
  /* 12e3bdf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e3bdfd mov ecx, dword ptr [0x12e5e6a0] */
  ECX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e3be03 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3be04 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e3be0au);
  /* 12e3be0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3be0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3be11 je 0x12e3be19 */
  if (C.zf) goto L_12e3be19;
  /* 12e3be13 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3be17 je 0x12e3be29 */
  if (C.zf) goto L_12e3be29;
L_12e3be19:;
  /* 12e3be19 call 0x12e3acf0 */
  push32(0x12e3be1eu); f_12e3acf0();
  /* 12e3be1e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12e3be24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3be27 jmp 0x12e3be2c */
  goto L_12e3be2c;
L_12e3be29:;
  /* 12e3be29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e3be2c:;
  /* 12e3be2c mov esp, ebp */
  ESP = (EBP);
  /* 12e3be2e pop ebp */
  EBP = (pop32());
  /* 12e3be2f ret  */
  ESPCHK(0x12e3bd90u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12e3be30 (32 bytes, 18 insns) */
void f_12e3be30(void) {
  FTRACE(0x12e3be30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3be30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3be31 mov ebp, esp */
  EBP = (ESP);
  /* 12e3be33 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3be34 push esi */
  push32((uint32_t)(ESI));
  /* 12e3be35 push edi */
  push32((uint32_t)(EDI));
  /* 12e3be36 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3be37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3be39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3be3b push 0x12e3be48 */
  push32((uint32_t)(0x12e3be48u));
  /* 12e3be40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12e3be43 call 0x12e4357c */
  push32(0x12e3be48u); f_12e4357c();
  /* 12e3be48 pop ebp */
  EBP = (pop32());
  /* 12e3be49 pop edi */
  EDI = (pop32());
  /* 12e3be4a pop esi */
  ESI = (pop32());
  /* 12e3be4b pop ebx */
  EBX = (pop32());
  /* 12e3be4c mov esp, ebp */
  ESP = (EBP);
  /* 12e3be4e pop ebp */
  EBP = (pop32());
  /* 12e3be4f ret  */
  ESPCHK(0x12e3be30u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12e3be72 (104 bytes, 33 insns) */
void f_12e3be72(void) {
  FTRACE(0x12e3be72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3be72 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3be73 push esi */
  push32((uint32_t)(ESI));
  /* 12e3be74 push edi */
  push32((uint32_t)(EDI));
  /* 12e3be75 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e3be79 push eax */
  push32((uint32_t)(EAX));
  /* 12e3be7a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12e3be7c push 0x12e3be50 */
  push32((uint32_t)(0x12e3be50u));
  /* 12e3be81 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12e3be88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12e3be8f:;
  /* 12e3be8f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12e3be93 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3be96 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3be99 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3be9c je 0x12e3becc */
  if (C.zf) goto L_12e3becc;
  /* 12e3be9e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3bea2 je 0x12e3becc */
  if (C.zf) goto L_12e3becc;
  /* 12e3bea4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12e3bea7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12e3beaa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12e3beae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12e3beb1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3beb6 jne 0x12e3beca */
  if (!C.zf) goto L_12e3beca;
  /* 12e3beb8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12e3bebd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12e3bec1 call 0x12e3bf06 */
  push32(0x12e3bec6u); f_12e3bf06();
  /* 12e3bec6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12e3becau);
L_12e3beca:;
  /* 12e3beca jmp 0x12e3be8f */
  goto L_12e3be8f;
L_12e3becc:;
  /* 12e3becc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12e3bed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bed6 pop edi */
  EDI = (pop32());
  /* 12e3bed7 pop esi */
  ESI = (pop32());
  /* 12e3bed8 pop ebx */
  EBX = (pop32());
  /* 12e3bed9 ret  */
  ESPCHK(0x12e3be72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf06 @ 0x12e3bf06 (24 bytes, 10 insns) */
void f_12e3bf06(void) {
  FTRACE(0x12e3bf06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bf06 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3bf07 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3bf08 mov ebx, 0x12e5d3b8 */
  EBX = (0x12e5d3b8u);
  /* 12e3bf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3bf10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12e3bf13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12e3bf16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12e3bf19 pop ecx */
  ECX = (pop32());
  /* 12e3bf1a pop ebx */
  EBX = (pop32());
  /* 12e3bf1b ret 4 */
  ESPCHK(0x12e3bf06u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bfe5 @ 0x12e3bfe5 (27 bytes, 11 insns) */
void f_12e3bfe5(void) {
  FTRACE(0x12e3bfe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3bfe5 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3bfe6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e3bfea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12e3bfec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e3bfef push eax */
  push32((uint32_t)(EAX));
  /* 12e3bff0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e3bff3 push eax */
  push32((uint32_t)(EAX));
  /* 12e3bff4 call 0x12e3be72 */
  push32(0x12e3bff9u); f_12e3be72();
  /* 12e3bff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3bffc pop ebp */
  EBP = (pop32());
  /* 12e3bffd ret 4 */
  ESPCHK(0x12e3bfe5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c000 @ 0x12e3c000 (482 bytes, 138 insns) */
void f_12e3c000(void) {
  FTRACE(0x12e3c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c001 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c006 push esi */
  push32((uint32_t)(ESI));
  /* 12e3c007 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12e3c00e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12e3c010 call 0x12e36820 */
  push32(0x12e3c015u); f_12e36820();
  /* 12e3c015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c018 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e3c01f jmp 0x12e3c02a */
  goto L_12e3c02a;
L_12e3c021:;
  /* 12e3c021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e3c02a:;
  /* 12e3c02a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c02e jge 0x12e3c1d0 */
  if ((C.sf==C.of)) goto L_12e3c1d0;
  /* 12e3c034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c037 cmp dword ptr [ecx*4 + 0x12e5fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e5fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c03f je 0x12e3c136 */
  if (C.zf) goto L_12e3c136;
  /* 12e3c045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c048 mov eax, dword ptr [edx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e3c04f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3c052 jmp 0x12e3c05d */
  goto L_12e3c05d;
L_12e3c054:;
  /* 12e3c054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c057 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c05a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3c05d:;
  /* 12e3c05d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c060 mov eax, dword ptr [edx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e3c067 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c06c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c06f jae 0x12e3c126 */
  if (!C.cf) goto L_12e3c126;
  /* 12e3c075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c078 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e3c07c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3c081 jne 0x12e3c121 */
  if (!C.zf) goto L_12e3c121;
  /* 12e3c087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c08a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c08e jne 0x12e3c0c9 */
  if (!C.zf) goto L_12e3c0c9;
  /* 12e3c090 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e3c092 call 0x12e36820 */
  push32(0x12e3c097u); f_12e36820();
  /* 12e3c097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c09d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c0a1 jne 0x12e3c0bf */
  if (!C.zf) goto L_12e3c0bf;
  /* 12e3c0a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c0a9 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c0aa call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e3c0b0u);
  /* 12e3c0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3c0b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12e3c0bf:;
  /* 12e3c0bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e3c0c1 call 0x12e368c0 */
  push32(0x12e3c0c6u); f_12e368c0();
  /* 12e3c0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3c0c9:;
  /* 12e3c0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c0cf push eax */
  push32((uint32_t)(EAX));
  /* 12e3c0d0 call dword ptr [0x12e60320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60320))), 0x12e3c0d6u);
  /* 12e3c0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12e3c0dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c0e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3c0e2 je 0x12e3c0f6 */
  if (C.zf) goto L_12e3c0f6;
  /* 12e3c0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c0ea push eax */
  push32((uint32_t)(EAX));
  /* 12e3c0eb call dword ptr [0x12e60324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60324))), 0x12e3c0f1u);
  /* 12e3c0f1 jmp 0x12e3c054 */
  goto L_12e3c054;
L_12e3c0f6:;
  /* 12e3c0f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c0f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e3c0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c102 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3c105 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c10b sub eax, dword ptr [edx*4 + 0x12e5fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12e5fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c112 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3c113 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12e3c118 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e3c11a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3c11f jmp 0x12e3c126 */
  goto L_12e3c126;
L_12e3c121:;
  /* 12e3c121 jmp 0x12e3c054 */
  goto L_12e3c054;
L_12e3c126:;
  /* 12e3c126 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c12a je 0x12e3c131 */
  if (C.zf) goto L_12e3c131;
  /* 12e3c12c jmp 0x12e3c1d0 */
  goto L_12e3c1d0;
L_12e3c131:;
  /* 12e3c131 jmp 0x12e3c1cb */
  goto L_12e3c1cb;
L_12e3c136:;
  /* 12e3c136 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12e3c138 push 0x12e59f84 */
  push32((uint32_t)(0x12e59f84u));
  /* 12e3c13d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c13f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12e3c144 call 0x12e32e20 */
  push32(0x12e3c149u); f_12e32e20();
  /* 12e3c149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c14c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3c14f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c153 je 0x12e3c1c9 */
  if (C.zf) goto L_12e3c1c9;
  /* 12e3c155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c15b mov dword ptr [eax*4 + 0x12e5fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12e5fe60), (ECX));
  /* 12e3c162 mov edx, dword ptr [0x12e5ff9c] */
  EDX = (r32((uint32_t)(0x12e5ff9c)));
  /* 12e3c168 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c16b mov dword ptr [0x12e5ff9c], edx */
  w32((uint32_t)(0x12e5ff9c), (EDX));
  /* 12e3c171 jmp 0x12e3c17c */
  goto L_12e3c17c;
L_12e3c173:;
  /* 12e3c173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c176 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3c17c:;
  /* 12e3c17c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c17f mov edx, dword ptr [ecx*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3c186 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c18c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c18f jae 0x12e3c1b4 */
  if (!C.cf) goto L_12e3c1b4;
  /* 12e3c191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c194 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e3c198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c19b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e3c1a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c1a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12e3c1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c1ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e3c1b2 jmp 0x12e3c173 */
  goto L_12e3c173;
L_12e3c1b4:;
  /* 12e3c1b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c1b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3c1ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3c1bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c1c0 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c1c1 call 0x12e3c510 */
  push32(0x12e3c1c6u); f_12e3c510();
  /* 12e3c1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3c1c9:;
  /* 12e3c1c9 jmp 0x12e3c1d0 */
  goto L_12e3c1d0;
L_12e3c1cb:;
  /* 12e3c1cb jmp 0x12e3c021 */
  goto L_12e3c021;
L_12e3c1d0:;
  /* 12e3c1d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12e3c1d2 call 0x12e368c0 */
  push32(0x12e3c1d7u); f_12e368c0();
  /* 12e3c1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c1dd pop esi */
  ESI = (pop32());
  /* 12e3c1de mov esp, ebp */
  ESP = (EBP);
  /* 12e3c1e0 pop ebp */
  EBP = (pop32());
  /* 12e3c1e1 ret  */
  ESPCHK(0x12e3c000u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12e3c1f0 (183 bytes, 57 insns) */
void f_12e3c1f0(void) {
  FTRACE(0x12e3c1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c1f7 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c1fd jae 0x12e3c28a */
  if (!C.cf) goto L_12e3c28a;
  /* 12e3c203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c206 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3c209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c20c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c20f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c212 mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3c219 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c21d jne 0x12e3c28a */
  if (!C.zf) goto L_12e3c28a;
  /* 12e3c21f cmp dword ptr [0x12e5e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c226 jne 0x12e3c26a */
  if (!C.zf) goto L_12e3c26a;
  /* 12e3c228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c22b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3c22e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c232 je 0x12e3c242 */
  if (C.zf) goto L_12e3c242;
  /* 12e3c234 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c238 je 0x12e3c250 */
  if (C.zf) goto L_12e3c250;
  /* 12e3c23a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c23e je 0x12e3c25e */
  if (C.zf) goto L_12e3c25e;
  /* 12e3c240 jmp 0x12e3c26a */
  goto L_12e3c26a;
L_12e3c242:;
  /* 12e3c242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c245 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c246 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12e3c248 call dword ptr [0x12e602f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f0))), 0x12e3c24eu);
  /* 12e3c24e jmp 0x12e3c26a */
  goto L_12e3c26a;
L_12e3c250:;
  /* 12e3c250 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c253 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c254 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12e3c256 call dword ptr [0x12e602f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f0))), 0x12e3c25cu);
  /* 12e3c25c jmp 0x12e3c26a */
  goto L_12e3c26a;
L_12e3c25e:;
  /* 12e3c25e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c261 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c262 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e3c264 call dword ptr [0x12e602f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f0))), 0x12e3c26au);
L_12e3c26a:;
  /* 12e3c26a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c26d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e3c270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c273 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c276 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c279 mov ecx, dword ptr [edx*4 + 0x12e5fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e3c280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c283 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12e3c286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c288 jmp 0x12e3c2a3 */
  goto L_12e3c2a3;
L_12e3c28a:;
  /* 12e3c28a call 0x12e3acf0 */
  push32(0x12e3c28fu); f_12e3acf0();
  /* 12e3c28f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3c295 call 0x12e3ad00 */
  push32(0x12e3c29au); f_12e3ad00();
  /* 12e3c29a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3c2a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e3c2a3:;
  /* 12e3c2a3 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c2a5 pop ebp */
  EBP = (pop32());
  /* 12e3c2a6 ret  */
  ESPCHK(0x12e3c1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x12e3c2b0 (216 bytes, 63 insns) */
void f_12e3c2b0(void) {
  FTRACE(0x12e3c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c2b7 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c2bd jae 0x12e3c36b */
  if (!C.cf) goto L_12e3c36b;
  /* 12e3c2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c2c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3c2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c2cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c2cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c2d2 mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3c2d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3c2de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c2e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3c2e3 je 0x12e3c36b */
  if (C.zf) goto L_12e3c36b;
  /* 12e3c2e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c2ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e3c2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c2f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c2f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c2f8 mov ecx, dword ptr [edx*4 + 0x12e5fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e3c2ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c303 je 0x12e3c36b */
  if (C.zf) goto L_12e3c36b;
  /* 12e3c305 cmp dword ptr [0x12e5e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c30c jne 0x12e3c34a */
  if (!C.zf) goto L_12e3c34a;
  /* 12e3c30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c311 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3c314 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c318 je 0x12e3c328 */
  if (C.zf) goto L_12e3c328;
  /* 12e3c31a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c31e je 0x12e3c334 */
  if (C.zf) goto L_12e3c334;
  /* 12e3c320 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c324 je 0x12e3c340 */
  if (C.zf) goto L_12e3c340;
  /* 12e3c326 jmp 0x12e3c34a */
  goto L_12e3c34a;
L_12e3c328:;
  /* 12e3c328 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3c32a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12e3c32c call dword ptr [0x12e602f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f0))), 0x12e3c332u);
  /* 12e3c332 jmp 0x12e3c34a */
  goto L_12e3c34a;
L_12e3c334:;
  /* 12e3c334 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3c336 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12e3c338 call dword ptr [0x12e602f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f0))), 0x12e3c33eu);
  /* 12e3c33e jmp 0x12e3c34a */
  goto L_12e3c34a;
L_12e3c340:;
  /* 12e3c340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3c342 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e3c344 call dword ptr [0x12e602f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f0))), 0x12e3c34au);
L_12e3c34a:;
  /* 12e3c34a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3c350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c353 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c356 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c359 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3c360 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12e3c367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c369 jmp 0x12e3c384 */
  goto L_12e3c384;
L_12e3c36b:;
  /* 12e3c36b call 0x12e3acf0 */
  push32(0x12e3c370u); f_12e3acf0();
  /* 12e3c370 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3c376 call 0x12e3ad00 */
  push32(0x12e3c37bu); f_12e3ad00();
  /* 12e3c37b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3c381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e3c384:;
  /* 12e3c384 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c386 pop ebp */
  EBP = (pop32());
  /* 12e3c387 ret  */
  ESPCHK(0x12e3c2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x12e3c390 (102 bytes, 30 insns) */
void f_12e3c390(void) {
  FTRACE(0x12e3c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c390 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c391 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c396 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c39c jae 0x12e3c3db */
  if (!C.cf) goto L_12e3c3db;
  /* 12e3c39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c3a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3c3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c3a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c3aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c3ad mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3c3b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3c3b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c3bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3c3be je 0x12e3c3db */
  if (C.zf) goto L_12e3c3db;
  /* 12e3c3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c3c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12e3c3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c3c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c3cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c3cf mov ecx, dword ptr [edx*4 + 0x12e5fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e3c3d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12e3c3d9 jmp 0x12e3c3f4 */
  goto L_12e3c3f4;
L_12e3c3db:;
  /* 12e3c3db call 0x12e3acf0 */
  push32(0x12e3c3e0u); f_12e3acf0();
  /* 12e3c3e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3c3e6 call 0x12e3ad00 */
  push32(0x12e3c3ebu); f_12e3ad00();
  /* 12e3c3eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3c3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e3c3f4:;
  /* 12e3c3f4 pop ebp */
  EBP = (pop32());
  /* 12e3c3f5 ret  */
  ESPCHK(0x12e3c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x12e3c400 (260 bytes, 83 insns) */
void f_12e3c400(void) {
  FTRACE(0x12e3c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c400 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c401 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c406 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e3c40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c40d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3c412 je 0x12e3c41d */
  if (C.zf) goto L_12e3c41d;
  /* 12e3c414 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c417 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e3c41a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12e3c41d:;
  /* 12e3c41d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c420 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3c428 je 0x12e3c432 */
  if (C.zf) goto L_12e3c432;
  /* 12e3c42a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c42d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12e3c42f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12e3c432:;
  /* 12e3c432 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c435 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c43b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3c43d je 0x12e3c448 */
  if (C.zf) goto L_12e3c448;
  /* 12e3c43f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c442 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12e3c445 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12e3c448:;
  /* 12e3c448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c44b push eax */
  push32((uint32_t)(EAX));
  /* 12e3c44c call dword ptr [0x12e602dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602dc))), 0x12e3c452u);
  /* 12e3c452 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3c455 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c459 jne 0x12e3c472 */
  if (!C.zf) goto L_12e3c472;
  /* 12e3c45b call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3c461u);
  /* 12e3c461 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c462 call 0x12e3ac50 */
  push32(0x12e3c467u); f_12e3ac50();
  /* 12e3c467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c46a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c46d jmp 0x12e3c500 */
  goto L_12e3c500;
L_12e3c472:;
  /* 12e3c472 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c476 jne 0x12e3c483 */
  if (!C.zf) goto L_12e3c483;
  /* 12e3c478 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c47b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12e3c47e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12e3c481 jmp 0x12e3c492 */
  goto L_12e3c492;
L_12e3c483:;
  /* 12e3c483 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c487 jne 0x12e3c492 */
  if (!C.zf) goto L_12e3c492;
  /* 12e3c489 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c48c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12e3c48f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12e3c492:;
  /* 12e3c492 call 0x12e3c000 */
  push32(0x12e3c497u); f_12e3c000();
  /* 12e3c497 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3c49a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c49e jne 0x12e3c4bb */
  if (!C.zf) goto L_12e3c4bb;
  /* 12e3c4a0 call 0x12e3acf0 */
  push32(0x12e3c4a5u); f_12e3acf0();
  /* 12e3c4a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12e3c4ab call 0x12e3ad00 */
  push32(0x12e3c4b0u); f_12e3ad00();
  /* 12e3c4b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e3c4b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c4b9 jmp 0x12e3c500 */
  goto L_12e3c500;
L_12e3c4bb:;
  /* 12e3c4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c4be push eax */
  push32((uint32_t)(EAX));
  /* 12e3c4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c4c3 call 0x12e3c1f0 */
  push32(0x12e3c4c8u); f_12e3c1f0();
  /* 12e3c4c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c4cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c4ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12e3c4d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12e3c4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c4d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3c4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c4dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c4e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c4e3 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3c4ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e3c4ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12e3c4f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c4f5 call 0x12e3c5a0 */
  push32(0x12e3c4fau); f_12e3c5a0();
  /* 12e3c4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c4fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e3c500:;
  /* 12e3c500 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c502 pop ebp */
  EBP = (pop32());
  /* 12e3c503 ret  */
  ESPCHK(0x12e3c400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x12e3c510 (134 bytes, 44 insns) */
void f_12e3c510(void) {
  FTRACE(0x12e3c510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c510 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c511 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c513 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c517 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3c51a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c51d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c520 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c523 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3c52a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c52c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3c52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c532 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c536 jne 0x12e3c571 */
  if (!C.zf) goto L_12e3c571;
  /* 12e3c538 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e3c53a call 0x12e36820 */
  push32(0x12e3c53fu); f_12e36820();
  /* 12e3c53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c545 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c549 jne 0x12e3c567 */
  if (!C.zf) goto L_12e3c567;
  /* 12e3c54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c54e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c551 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c552 call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e3c558u);
  /* 12e3c558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c55b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3c55e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12e3c567:;
  /* 12e3c567 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e3c569 call 0x12e368c0 */
  push32(0x12e3c56eu); f_12e368c0();
  /* 12e3c56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3c571:;
  /* 12e3c571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c574 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3c577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c57a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c57d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c580 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3c587 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12e3c58b push eax */
  push32((uint32_t)(EAX));
  /* 12e3c58c call dword ptr [0x12e60320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60320))), 0x12e3c592u);
  /* 12e3c592 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c594 pop ebp */
  EBP = (pop32());
  /* 12e3c595 ret  */
  ESPCHK(0x12e3c510u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12e3c5a0 (38 bytes, 13 insns) */
void f_12e3c5a0(void) {
  FTRACE(0x12e3c5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3c5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c5b2 mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3c5b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12e3c5bd push eax */
  push32((uint32_t)(EAX));
  /* 12e3c5be call dword ptr [0x12e60324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60324))), 0x12e3c5c4u);
  /* 12e3c5c4 pop ebp */
  EBP = (pop32());
  /* 12e3c5c5 ret  */
  ESPCHK(0x12e3c5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x12e3c5d0 (218 bytes, 63 insns) */
void f_12e3c5d0(void) {
  FTRACE(0x12e3c5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3c5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c5df call 0x12e36820 */
  push32(0x12e3c5e4u); f_12e36820();
  /* 12e3c5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c5e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12e3c5ee jmp 0x12e3c5f9 */
  goto L_12e3c5f9;
L_12e3c5f0:;
  /* 12e3c5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c5f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c5f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e3c5f9:;
  /* 12e3c5f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c5fc cmp ecx, dword ptr [0x12e5fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c602 jge 0x12e3c699 */
  if ((C.sf==C.of)) goto L_12e3c699;
  /* 12e3c608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c60b mov eax, dword ptr [0x12e5e820] */
  EAX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c610 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c614 je 0x12e3c694 */
  if (C.zf) goto L_12e3c694;
  /* 12e3c616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c619 mov edx, dword ptr [0x12e5e820] */
  EDX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c61f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e3c622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3c625 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3c62d je 0x12e3c651 */
  if (C.zf) goto L_12e3c651;
  /* 12e3c62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c632 mov eax, dword ptr [0x12e5e820] */
  EAX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c637 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e3c63a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c63b call 0x12e3d3c0 */
  push32(0x12e3c640u); f_12e3d3c0();
  /* 12e3c640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c643 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c646 je 0x12e3c651 */
  if (C.zf) goto L_12e3c651;
  /* 12e3c648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c64e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3c651:;
  /* 12e3c651 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c655 jl 0x12e3c694 */
  if ((C.sf!=C.of)) goto L_12e3c694;
  /* 12e3c657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c65a mov ecx, dword ptr [0x12e5e820] */
  ECX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c660 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e3c663 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c666 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c667 call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e3c66du);
  /* 12e3c66d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c66f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c672 mov ecx, dword ptr [0x12e5e820] */
  ECX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c678 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e3c67b push edx */
  push32((uint32_t)(EDX));
  /* 12e3c67c call 0x12e338b0 */
  push32(0x12e3c681u); f_12e338b0();
  /* 12e3c681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c687 mov ecx, dword ptr [0x12e5e820] */
  ECX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c68d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12e3c694:;
  /* 12e3c694 jmp 0x12e3c5f0 */
  goto L_12e3c5f0;
L_12e3c699:;
  /* 12e3c699 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c69b call 0x12e368c0 */
  push32(0x12e3c6a0u); f_12e368c0();
  /* 12e3c6a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c6a6 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c6a8 pop ebp */
  EBP = (pop32());
  /* 12e3c6a9 ret  */
  ESPCHK(0x12e3c5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x12e3c6b0 (68 bytes, 26 insns) */
void f_12e3c6b0(void) {
  FTRACE(0x12e3c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c6b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c6b8 jne 0x12e3c6c6 */
  if (!C.zf) goto L_12e3c6c6;
  /* 12e3c6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3c6bc call 0x12e3c820 */
  push32(0x12e3c6c1u); f_12e3c820();
  /* 12e3c6c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c6c4 jmp 0x12e3c6f0 */
  goto L_12e3c6f0;
L_12e3c6c6:;
  /* 12e3c6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c6c9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c6ca call 0x12e3bc30 */
  push32(0x12e3c6cfu); f_12e3bc30();
  /* 12e3c6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c6d6 call 0x12e3c700 */
  push32(0x12e3c6dbu); f_12e3c700();
  /* 12e3c6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c6de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3c6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c6e4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c6e5 call 0x12e3bca0 */
  push32(0x12e3c6eau); f_12e3bca0();
  /* 12e3c6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c6ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e3c6f0:;
  /* 12e3c6f0 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c6f2 pop ebp */
  EBP = (pop32());
  /* 12e3c6f3 ret  */
  ESPCHK(0x12e3c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x12e3c700 (65 bytes, 26 insns) */
void f_12e3c700(void) {
  FTRACE(0x12e3c700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c700 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c701 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c706 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c707 call 0x12e3c750 */
  push32(0x12e3c70cu); f_12e3c750();
  /* 12e3c70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3c711 je 0x12e3c718 */
  if (C.zf) goto L_12e3c718;
  /* 12e3c713 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c716 jmp 0x12e3c73f */
  goto L_12e3c73f;
L_12e3c718:;
  /* 12e3c718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c71b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3c71e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3c726 je 0x12e3c73d */
  if (C.zf) goto L_12e3c73d;
  /* 12e3c728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c72b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3c72e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c72f call 0x12e3d510 */
  push32(0x12e3c734u); f_12e3d510();
  /* 12e3c734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c737 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3c739 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c73b jmp 0x12e3c73f */
  goto L_12e3c73f;
L_12e3c73d:;
  /* 12e3c73d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3c73f:;
  /* 12e3c73f pop ebp */
  EBP = (pop32());
  /* 12e3c740 ret  */
  ESPCHK(0x12e3c700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x12e3c750 (183 bytes, 62 insns) */
void f_12e3c750(void) {
  FTRACE(0x12e3c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c750 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c751 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3c75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c760 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3c763 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c766 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3c769 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c76c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c76f jne 0x12e3c7eb */
  if (!C.zf) goto L_12e3c7eb;
  /* 12e3c771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c774 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3c777 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c77d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3c77f je 0x12e3c7eb */
  if (C.zf) goto L_12e3c7eb;
  /* 12e3c781 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c787 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12e3c789 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3c78f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c793 jle 0x12e3c7eb */
  if ((C.zf||C.sf!=C.of)) goto L_12e3c7eb;
  /* 12e3c795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c798 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c79c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3c79f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e3c7a6 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c7a7 call 0x12e3b6c0 */
  push32(0x12e3c7acu); f_12e3b6c0();
  /* 12e3c7ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c7af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c7b2 jne 0x12e3c7d5 */
  if (!C.zf) goto L_12e3c7d5;
  /* 12e3c7b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3c7ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3c7c2 je 0x12e3c7d3 */
  if (C.zf) goto L_12e3c7d3;
  /* 12e3c7c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3c7ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12e3c7d3:;
  /* 12e3c7d3 jmp 0x12e3c7eb */
  goto L_12e3c7eb;
L_12e3c7d5:;
  /* 12e3c7d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3c7db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c7de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12e3c7e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e3c7eb:;
  /* 12e3c7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e3c7f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e3c7f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3c7f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e3c800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c803 mov esp, ebp */
  ESP = (EBP);
  /* 12e3c805 pop ebp */
  EBP = (pop32());
  /* 12e3c806 ret  */
  ESPCHK(0x12e3c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x12e3c810 (15 bytes, 7 insns) */
void f_12e3c810(void) {
  FTRACE(0x12e3c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c810 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c811 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c813 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3c815 call 0x12e3c820 */
  push32(0x12e3c81au); f_12e3c820();
  /* 12e3c81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c81d pop ebp */
  EBP = (pop32());
  /* 12e3c81e ret  */
  ESPCHK(0x12e3c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x12e3c820 (319 bytes, 94 insns) */
void f_12e3c820(void) {
  FTRACE(0x12e3c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c820 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c821 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3c82d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3c834 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c836 call 0x12e36820 */
  push32(0x12e3c83bu); f_12e36820();
  /* 12e3c83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c83e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e3c845 jmp 0x12e3c850 */
  goto L_12e3c850;
L_12e3c847:;
  /* 12e3c847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c84d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e3c850:;
  /* 12e3c850 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c853 cmp ecx, dword ptr [0x12e5fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c859 jge 0x12e3c943 */
  if ((C.sf==C.of)) goto L_12e3c943;
  /* 12e3c85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c862 mov eax, dword ptr [0x12e5e820] */
  EAX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c867 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c86b je 0x12e3c93e */
  if (C.zf) goto L_12e3c93e;
  /* 12e3c871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c874 mov edx, dword ptr [0x12e5e820] */
  EDX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c87a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e3c87d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3c880 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3c886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3c888 je 0x12e3c93e */
  if (C.zf) goto L_12e3c93e;
  /* 12e3c88e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c891 mov eax, dword ptr [0x12e5e820] */
  EAX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c896 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e3c899 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c89a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c89d push edx */
  push32((uint32_t)(EDX));
  /* 12e3c89e call 0x12e3bc70 */
  push32(0x12e3c8a3u); f_12e3bc70();
  /* 12e3c8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c8a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c8a9 mov ecx, dword ptr [0x12e5e820] */
  ECX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c8af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e3c8b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e3c8b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c8ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3c8bc je 0x12e3c925 */
  if (C.zf) goto L_12e3c925;
  /* 12e3c8be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c8c2 jne 0x12e3c8e9 */
  if (!C.zf) goto L_12e3c8e9;
  /* 12e3c8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c8c7 mov edx, dword ptr [0x12e5e820] */
  EDX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c8cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e3c8d0 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c8d1 call 0x12e3c700 */
  push32(0x12e3c8d6u); f_12e3c700();
  /* 12e3c8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c8d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c8dc je 0x12e3c8e7 */
  if (C.zf) goto L_12e3c8e7;
  /* 12e3c8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c8e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c8e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3c8e7:;
  /* 12e3c8e7 jmp 0x12e3c925 */
  goto L_12e3c925;
L_12e3c8e9:;
  /* 12e3c8e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c8ed jne 0x12e3c925 */
  if (!C.zf) goto L_12e3c925;
  /* 12e3c8ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c8f2 mov eax, dword ptr [0x12e5e820] */
  EAX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c8f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e3c8fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3c8fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3c900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3c902 je 0x12e3c925 */
  if (C.zf) goto L_12e3c925;
  /* 12e3c904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c907 mov ecx, dword ptr [0x12e5e820] */
  ECX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c90d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e3c910 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c911 call 0x12e3c700 */
  push32(0x12e3c916u); f_12e3c700();
  /* 12e3c916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c919 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c91c jne 0x12e3c925 */
  if (!C.zf) goto L_12e3c925;
  /* 12e3c91e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12e3c925:;
  /* 12e3c925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c928 mov ecx, dword ptr [0x12e5e820] */
  ECX = (r32((uint32_t)(0x12e5e820)));
  /* 12e3c92e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e3c931 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c932 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3c935 push eax */
  push32((uint32_t)(EAX));
  /* 12e3c936 call 0x12e3bce0 */
  push32(0x12e3c93bu); f_12e3bce0();
  /* 12e3c93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3c93e:;
  /* 12e3c93e jmp 0x12e3c847 */
  goto L_12e3c847;
L_12e3c943:;
  /* 12e3c943 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c945 call 0x12e368c0 */
  push32(0x12e3c94au); f_12e368c0();
  /* 12e3c94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c94d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c951 jne 0x12e3c958 */
  if (!C.zf) goto L_12e3c958;
  /* 12e3c953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3c956 jmp 0x12e3c95b */
  goto L_12e3c95b;
L_12e3c958:;
  /* 12e3c958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e3c95b:;
  /* 12e3c95b mov esp, ebp */
  ESP = (EBP);
  /* 12e3c95d pop ebp */
  EBP = (pop32());
  /* 12e3c95e ret  */
  ESPCHK(0x12e3c820u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12e3c960 (15 bytes, 7 insns) */
void f_12e3c960(void) {
  FTRACE(0x12e3c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c960 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c961 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c963 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3c965 call 0x12e31d90 */
  push32(0x12e3c96au); f_12e31d90();
  /* 12e3c96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c96d pop ebp */
  EBP = (pop32());
  /* 12e3c96e ret  */
  ESPCHK(0x12e3c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x12e3c970 (1007 bytes, 269 insns) */
void f_12e3c970(void) {
  FTRACE(0x12e3c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3c970 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3c971 mov ebp, esp */
  EBP = (ESP);
  /* 12e3c973 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3c979 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c97d jl 0x12e3c985 */
  if ((C.sf!=C.of)) goto L_12e3c985;
  /* 12e3c97f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c983 jle 0x12e3c98c */
  if ((C.zf||C.sf!=C.of)) goto L_12e3c98c;
L_12e3c985:;
  /* 12e3c985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3c987 jmp 0x12e3cd5b */
  goto L_12e3cd5b;
L_12e3c98c:;
  /* 12e3c98c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e3c98e call 0x12e36820 */
  push32(0x12e3c993u); f_12e36820();
  /* 12e3c993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c996 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e3c99d mov eax, dword ptr [0x12e5e80c] */
  EAX = (r32((uint32_t)(0x12e5e80c)));
  /* 12e3c9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c9a5 mov dword ptr [0x12e5e80c], eax */
  w32((uint32_t)(0x12e5e80c), (EAX));
L_12e3c9aa:;
  /* 12e3c9aa cmp dword ptr [0x12e5e81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c9b1 je 0x12e3c9bd */
  if (C.zf) goto L_12e3c9bd;
  /* 12e3c9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3c9b5 call dword ptr [0x12e60274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60274))), 0x12e3c9bbu);
  /* 12e3c9bb jmp 0x12e3c9aa */
  goto L_12e3c9aa;
L_12e3c9bd:;
  /* 12e3c9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c9c1 je 0x12e3ca01 */
  if (C.zf) goto L_12e3ca01;
  /* 12e3c9c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3c9c7 je 0x12e3c9e1 */
  if (C.zf) goto L_12e3c9e1;
  /* 12e3c9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3c9cc push ecx */
  push32((uint32_t)(ECX));
  /* 12e3c9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c9d0 push edx */
  push32((uint32_t)(EDX));
  /* 12e3c9d1 call 0x12e3cd60 */
  push32(0x12e3c9d6u); f_12e3cd60();
  /* 12e3c9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3c9d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12e3c9df jmp 0x12e3c9f3 */
  goto L_12e3c9f3;
L_12e3c9e1:;
  /* 12e3c9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3c9e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3c9e7 mov ecx, dword ptr [eax + 0x12e5d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12e5d4dc)));
  /* 12e3c9ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12e3c9f3:;
  /* 12e3c9f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12e3c9f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3c9fc jmp 0x12e3cd3b */
  goto L_12e3cd3b;
L_12e3ca01:;
  /* 12e3ca01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12e3ca08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e3ca0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca13 je 0x12e3cd33 */
  if (C.zf) goto L_12e3cd33;
  /* 12e3ca19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ca1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3ca1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca22 jne 0x12e3cc44 */
  if (!C.zf) goto L_12e3cc44;
  /* 12e3ca28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ca2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e3ca2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca32 jne 0x12e3cc44 */
  if (!C.zf) goto L_12e3cc44;
  /* 12e3ca38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ca3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12e3ca3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca42 jne 0x12e3cc44 */
  if (!C.zf) goto L_12e3cc44;
  /* 12e3ca48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ca4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12e3ca51:;
  /* 12e3ca51 push 0x12e59fd4 */
  push32((uint32_t)(0x12e59fd4u));
  /* 12e3ca56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e3ca5c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ca5d call 0x12e3ebc0 */
  push32(0x12e3ca62u); f_12e3ebc0();
  /* 12e3ca62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ca65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12e3ca6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca72 je 0x12e3ca9d */
  if (C.zf) goto L_12e3ca9d;
  /* 12e3ca74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3ca7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ca80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12e3ca86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca8d je 0x12e3ca9d */
  if (C.zf) goto L_12e3ca9d;
  /* 12e3ca8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3ca95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3ca98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ca9b jne 0x12e3cac3 */
  if (!C.zf) goto L_12e3cac3;
L_12e3ca9d:;
  /* 12e3ca9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3caa1 je 0x12e3cabc */
  if (C.zf) goto L_12e3cabc;
  /* 12e3caa3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e3caa5 call 0x12e368c0 */
  push32(0x12e3caaau); f_12e368c0();
  /* 12e3caaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3caad mov edx, dword ptr [0x12e5e80c] */
  EDX = (r32((uint32_t)(0x12e5e80c)));
  /* 12e3cab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3cab6 mov dword ptr [0x12e5e80c], edx */
  w32((uint32_t)(0x12e5e80c), (EDX));
L_12e3cabc:;
  /* 12e3cabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3cabe jmp 0x12e3cd5b */
  goto L_12e3cd5b;
L_12e3cac3:;
  /* 12e3cac3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e3caca jmp 0x12e3cad5 */
  goto L_12e3cad5;
L_12e3cacc:;
  /* 12e3cacc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3cacf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cad2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e3cad5:;
  /* 12e3cad5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cad9 jg 0x12e3cb23 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3cb23;
  /* 12e3cadb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e3cae1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cae2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e3cae8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3cae9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3caec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3caef mov ecx, dword ptr [eax + 0x12e5d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12e5d4d8)));
  /* 12e3caf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3caf6 call 0x12e3eb80 */
  push32(0x12e3cafbu); f_12e3eb80();
  /* 12e3cafb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cb00 jne 0x12e3cb21 */
  if (!C.zf) goto L_12e3cb21;
  /* 12e3cb02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3cb05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cb08 mov eax, dword ptr [edx + 0x12e5d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12e5d4d8)));
  /* 12e3cb0e push eax */
  push32((uint32_t)(EAX));
  /* 12e3cb0f call 0x12e35c50 */
  push32(0x12e3cb14u); f_12e35c50();
  /* 12e3cb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cb17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cb1d jne 0x12e3cb21 */
  if (!C.zf) goto L_12e3cb21;
  /* 12e3cb1f jmp 0x12e3cb23 */
  goto L_12e3cb23;
L_12e3cb21:;
  /* 12e3cb21 jmp 0x12e3cacc */
  goto L_12e3cacc;
L_12e3cb23:;
  /* 12e3cb23 push 0x12e59fd0 */
  push32((uint32_t)(0x12e59fd0u));
  /* 12e3cb28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3cb2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cb31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12e3cb37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3cb3d push edx */
  push32((uint32_t)(EDX));
  /* 12e3cb3e call 0x12e3eb40 */
  push32(0x12e3cb43u); f_12e3eb40();
  /* 12e3cb43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cb46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12e3cb4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cb53 jne 0x12e3cb89 */
  if (!C.zf) goto L_12e3cb89;
  /* 12e3cb55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3cb5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3cb5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cb61 je 0x12e3cb89 */
  if (C.zf) goto L_12e3cb89;
  /* 12e3cb63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cb67 je 0x12e3cb82 */
  if (C.zf) goto L_12e3cb82;
  /* 12e3cb69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e3cb6b call 0x12e368c0 */
  push32(0x12e3cb70u); f_12e368c0();
  /* 12e3cb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cb73 mov edx, dword ptr [0x12e5e80c] */
  EDX = (r32((uint32_t)(0x12e5e80c)));
  /* 12e3cb79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3cb7c mov dword ptr [0x12e5e80c], edx */
  w32((uint32_t)(0x12e5e80c), (EDX));
L_12e3cb82:;
  /* 12e3cb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3cb84 jmp 0x12e3cd5b */
  goto L_12e3cd5b;
L_12e3cb89:;
  /* 12e3cb89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cb8d jg 0x12e3cbda */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3cbda;
  /* 12e3cb8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e3cb95 push eax */
  push32((uint32_t)(EAX));
  /* 12e3cb96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3cb9c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cb9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12e3cba3 push edx */
  push32((uint32_t)(EDX));
  /* 12e3cba4 call 0x12e36640 */
  push32(0x12e3cba9u); f_12e36640();
  /* 12e3cba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cbac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e3cbb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12e3cbba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12e3cbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cbc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3cbc4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3cbc5 call 0x12e3cd60 */
  push32(0x12e3cbcau); f_12e3cd60();
  /* 12e3cbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cbcf je 0x12e3cbda */
  if (C.zf) goto L_12e3cbda;
  /* 12e3cbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3cbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cbd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e3cbda:;
  /* 12e3cbda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3cbe0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cbe6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12e3cbec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e3cbf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3cbf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cbf7 je 0x12e3cc08 */
  if (C.zf) goto L_12e3cc08;
  /* 12e3cbf9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e3cbff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cc02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12e3cc08:;
  /* 12e3cc08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e3cc0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3cc11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cc13 jne 0x12e3ca51 */
  if (!C.zf) goto L_12e3ca51;
  /* 12e3cc19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cc1d je 0x12e3cc2c */
  if (C.zf) goto L_12e3cc2c;
  /* 12e3cc1f call 0x12e3cf00 */
  push32(0x12e3cc24u); f_12e3cf00();
  /* 12e3cc24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12e3cc2a jmp 0x12e3cc36 */
  goto L_12e3cc36;
L_12e3cc2c:;
  /* 12e3cc2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12e3cc36:;
  /* 12e3cc36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12e3cc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3cc3f jmp 0x12e3cd31 */
  goto L_12e3cd31;
L_12e3cc44:;
  /* 12e3cc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3cc47 push edx */
  push32((uint32_t)(EDX));
  /* 12e3cc48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3cc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3cc4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12e3cc52 push eax */
  push32((uint32_t)(EAX));
  /* 12e3cc53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3cc56 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cc57 call 0x12e3d000 */
  push32(0x12e3cc5cu); f_12e3d000();
  /* 12e3cc5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cc5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3cc62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cc66 je 0x12e3cd31 */
  if (C.zf) goto L_12e3cd31;
  /* 12e3cc6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e3cc73 jmp 0x12e3cc7e */
  goto L_12e3cc7e;
L_12e3cc75:;
  /* 12e3cc75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3cc78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cc7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e3cc7e:;
  /* 12e3cc7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cc82 jg 0x12e3cce0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3cce0;
  /* 12e3cc84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cc88 je 0x12e3ccde */
  if (C.zf) goto L_12e3ccde;
  /* 12e3cc8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3cc8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cc90 mov ecx, dword ptr [eax + 0x12e5d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12e5d4dc)));
  /* 12e3cc96 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cc97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12e3cc9d push edx */
  push32((uint32_t)(EDX));
  /* 12e3cc9e call 0x12e3eab0 */
  push32(0x12e3cca3u); f_12e3eab0();
  /* 12e3cca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cca8 je 0x12e3ccd5 */
  if (C.zf) goto L_12e3ccd5;
  /* 12e3ccaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12e3ccb0 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ccb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3ccb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ccb5 call 0x12e3cd60 */
  push32(0x12e3ccbau); f_12e3cd60();
  /* 12e3ccba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ccbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ccbf je 0x12e3cccc */
  if (C.zf) goto L_12e3cccc;
  /* 12e3ccc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ccc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ccc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e3ccca jmp 0x12e3ccd3 */
  goto L_12e3ccd3;
L_12e3cccc:;
  /* 12e3cccc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12e3ccd3:;
  /* 12e3ccd3 jmp 0x12e3ccde */
  goto L_12e3ccde;
L_12e3ccd5:;
  /* 12e3ccd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ccd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ccdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e3ccde:;
  /* 12e3ccde jmp 0x12e3cc75 */
  goto L_12e3cc75;
L_12e3cce0:;
  /* 12e3cce0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cce4 je 0x12e3cd0b */
  if (C.zf) goto L_12e3cd0b;
  /* 12e3cce6 call 0x12e3cf00 */
  push32(0x12e3ccebu); f_12e3cf00();
  /* 12e3cceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3ccee push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ccf0 mov ecx, dword ptr [0x12e5d4dc] */
  ECX = (r32((uint32_t)(0x12e5d4dc)));
  /* 12e3ccf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ccf7 call 0x12e338b0 */
  push32(0x12e3ccfcu); f_12e338b0();
  /* 12e3ccfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ccff mov dword ptr [0x12e5d4dc], 0 */
  w32((uint32_t)(0x12e5d4dc), (0x0u));
  /* 12e3cd09 jmp 0x12e3cd31 */
  goto L_12e3cd31;
L_12e3cd0b:;
  /* 12e3cd0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cd0f je 0x12e3cd1e */
  if (C.zf) goto L_12e3cd1e;
  /* 12e3cd11 call 0x12e3cf00 */
  push32(0x12e3cd16u); f_12e3cf00();
  /* 12e3cd16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12e3cd1c jmp 0x12e3cd28 */
  goto L_12e3cd28;
L_12e3cd1e:;
  /* 12e3cd1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12e3cd28:;
  /* 12e3cd28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12e3cd2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e3cd31:;
  /* 12e3cd31 jmp 0x12e3cd3b */
  goto L_12e3cd3b;
L_12e3cd33:;
  /* 12e3cd33 call 0x12e3cf00 */
  push32(0x12e3cd38u); f_12e3cf00();
  /* 12e3cd38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e3cd3b:;
  /* 12e3cd3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cd3f je 0x12e3cd58 */
  if (C.zf) goto L_12e3cd58;
  /* 12e3cd41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e3cd43 call 0x12e368c0 */
  push32(0x12e3cd48u); f_12e368c0();
  /* 12e3cd48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cd4b mov eax, dword ptr [0x12e5e80c] */
  EAX = (r32((uint32_t)(0x12e5e80c)));
  /* 12e3cd50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3cd53 mov dword ptr [0x12e5e80c], eax */
  w32((uint32_t)(0x12e5e80c), (EAX));
L_12e3cd58:;
  /* 12e3cd58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e3cd5b:;
  /* 12e3cd5b mov esp, ebp */
  ESP = (EBP);
  /* 12e3cd5d pop ebp */
  EBP = (pop32());
  /* 12e3cd5e ret  */
  ESPCHK(0x12e3c970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x12e3cd60 (403 bytes, 117 insns) */
void f_12e3cd60(void) {
  FTRACE(0x12e3cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3cd61 mov ebp, esp */
  EBP = (ESP);
  /* 12e3cd63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3cd69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3cd6c push eax */
  push32((uint32_t)(EAX));
  /* 12e3cd6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12e3cd73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cd74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12e3cd7a push edx */
  push32((uint32_t)(EDX));
  /* 12e3cd7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12e3cd81 push eax */
  push32((uint32_t)(EAX));
  /* 12e3cd82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3cd85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cd86 call 0x12e3d000 */
  push32(0x12e3cd8bu); f_12e3d000();
  /* 12e3cd8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cd90 jne 0x12e3cd99 */
  if (!C.zf) goto L_12e3cd99;
  /* 12e3cd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3cd94 jmp 0x12e3ceef */
  goto L_12e3ceef;
L_12e3cd99:;
  /* 12e3cd99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12e3cd9e push 0x12e59fd8 */
  push32((uint32_t)(0x12e59fd8u));
  /* 12e3cda3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3cda5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12e3cdab push edx */
  push32((uint32_t)(EDX));
  /* 12e3cdac call 0x12e35c50 */
  push32(0x12e3cdb1u); f_12e35c50();
  /* 12e3cdb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cdb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cdb7 push eax */
  push32((uint32_t)(EAX));
  /* 12e3cdb8 call 0x12e32e20 */
  push32(0x12e3cdbdu); f_12e32e20();
  /* 12e3cdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cdc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3cdc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cdc7 jne 0x12e3cdd0 */
  if (!C.zf) goto L_12e3cdd0;
  /* 12e3cdc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3cdcb jmp 0x12e3ceef */
  goto L_12e3ceef;
L_12e3cdd0:;
  /* 12e3cdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3cdd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cdd6 mov ecx, dword ptr [eax + 0x12e5d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12e5d4dc)));
  /* 12e3cddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3cddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3cde2 mov eax, dword ptr [edx*4 + 0x12e5e688] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5e688)));
  /* 12e3cde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3cdec push 6 */
  push32((uint32_t)(0x6u));
  /* 12e3cdee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3cdf1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cdf4 add ecx, 0x12e5e6d8 */
  { uint32_t _a=(ECX),_b=(0x12e5e6d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cdfa push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cdfb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12e3cdfe push edx */
  push32((uint32_t)(EDX));
  /* 12e3cdff call 0x12e39700 */
  push32(0x12e3ce04u); f_12e39700();
  /* 12e3ce04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ce07 mov eax, dword ptr [0x12e5e6a0] */
  EAX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e3ce0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e3ce0f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12e3ce15 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ce16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3ce19 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ce1a call 0x12e35dd0 */
  push32(0x12e3ce1fu); f_12e35dd0();
  /* 12e3ce1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ce22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ce25 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3ce28 mov dword ptr [ecx + 0x12e5d4dc], eax */
  w32((uint32_t)(ECX + 0x12e5d4dc), (EAX));
  /* 12e3ce2e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12e3ce34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3ce3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ce3d mov dword ptr [eax*4 + 0x12e5e688], edx */
  w32((uint32_t)(EAX*4 + 0x12e5e688), (EDX));
  /* 12e3ce44 push 6 */
  push32((uint32_t)(0x6u));
  /* 12e3ce46 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12e3ce4c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ce4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ce50 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3ce53 add edx, 0x12e5e6d8 */
  { uint32_t _a=(EDX),_b=(0x12e5e6d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ce59 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ce5a call 0x12e39700 */
  push32(0x12e3ce5fu); f_12e39700();
  /* 12e3ce5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ce62 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ce66 jne 0x12e3ce73 */
  if (!C.zf) goto L_12e3ce73;
  /* 12e3ce68 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3ce6e mov dword ptr [0x12e5e6a0], eax */
  w32((uint32_t)(0x12e5e6a0), (EAX));
L_12e3ce73:;
  /* 12e3ce73 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ce77 jne 0x12e3ce85 */
  if (!C.zf) goto L_12e3ce85;
  /* 12e3ce79 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e3ce7f mov dword ptr [0x12e5e6a4], ecx */
  w32((uint32_t)(0x12e5e6a4), (ECX));
L_12e3ce85:;
  /* 12e3ce85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ce88 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3ce8b call dword ptr [edx + 0x12e5d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12e5d4e0))), 0x12e3ce91u);
  /* 12e3ce91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ce93 je 0x12e3cecc */
  if (C.zf) goto L_12e3cecc;
  /* 12e3ce95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ce98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3ce9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ce9e mov dword ptr [eax + 0x12e5d4dc], ecx */
  w32((uint32_t)(EAX + 0x12e5d4dc), (ECX));
  /* 12e3cea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3cea6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3cea9 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ceaa call 0x12e338b0 */
  push32(0x12e3ceafu); f_12e338b0();
  /* 12e3ceaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ceb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ceb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ceb8 mov dword ptr [eax*4 + 0x12e5e688], ecx */
  w32((uint32_t)(EAX*4 + 0x12e5e688), (ECX));
  /* 12e3cebf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3cec2 mov dword ptr [0x12e5e6a0], edx */
  w32((uint32_t)(0x12e5e6a0), (EDX));
  /* 12e3cec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ceca jmp 0x12e3ceef */
  goto L_12e3ceef;
L_12e3cecc:;
  /* 12e3cecc cmp dword ptr [ebp - 0xc], 0x12e5d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12e5d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ced3 je 0x12e3cee3 */
  if (C.zf) goto L_12e3cee3;
  /* 12e3ced5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ced7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ceda push eax */
  push32((uint32_t)(EAX));
  /* 12e3cedb call 0x12e338b0 */
  push32(0x12e3cee0u); f_12e338b0();
  /* 12e3cee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3cee3:;
  /* 12e3cee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3cee6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cee9 mov eax, dword ptr [ecx + 0x12e5d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12e5d4dc)));
L_12e3ceef:;
  /* 12e3ceef mov esp, ebp */
  ESP = (EBP);
  /* 12e3cef1 pop ebp */
  EBP = (pop32());
  /* 12e3cef2 ret  */
  ESPCHK(0x12e3cd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x12e3cf00 (256 bytes, 72 insns) */
void f_12e3cf00(void) {
  FTRACE(0x12e3cf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3cf00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3cf01 mov ebp, esp */
  EBP = (ESP);
  /* 12e3cf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3cf06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e3cf0d cmp dword ptr [0x12e5d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cf14 jne 0x12e3cf34 */
  if (!C.zf) goto L_12e3cf34;
  /* 12e3cf16 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12e3cf1b push 0x12e59fd8 */
  push32((uint32_t)(0x12e59fd8u));
  /* 12e3cf20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3cf22 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12e3cf27 call 0x12e32e20 */
  push32(0x12e3cf2cu); f_12e32e20();
  /* 12e3cf2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cf2f mov dword ptr [0x12e5d4dc], eax */
  w32((uint32_t)(0x12e5d4dc), (EAX));
L_12e3cf34:;
  /* 12e3cf34 mov eax, dword ptr [0x12e5d4dc] */
  EAX = (r32((uint32_t)(0x12e5d4dc)));
  /* 12e3cf39 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e3cf3c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e3cf43 jmp 0x12e3cf4e */
  goto L_12e3cf4e;
L_12e3cf45:;
  /* 12e3cf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3cf48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3cf4e:;
  /* 12e3cf4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3cf51 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cf54 mov eax, dword ptr [edx + 0x12e5d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12e5d4dc)));
  /* 12e3cf5a push eax */
  push32((uint32_t)(EAX));
  /* 12e3cf5b push 0x12e59fe4 */
  push32((uint32_t)(0x12e59fe4u));
  /* 12e3cf60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3cf63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cf66 mov edx, dword ptr [ecx + 0x12e5d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12e5d4d8)));
  /* 12e3cf6c push edx */
  push32((uint32_t)(EDX));
  /* 12e3cf6d push 3 */
  push32((uint32_t)(0x3u));
  /* 12e3cf6f mov eax, dword ptr [0x12e5d4dc] */
  EAX = (r32((uint32_t)(0x12e5d4dc)));
  /* 12e3cf74 push eax */
  push32((uint32_t)(EAX));
  /* 12e3cf75 call 0x12e3d1a0 */
  push32(0x12e3cf7au); f_12e3d1a0();
  /* 12e3cf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cf7d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cf81 jge 0x12e3cfc9 */
  if ((C.sf==C.of)) goto L_12e3cfc9;
  /* 12e3cf83 push 0x12e59fd0 */
  push32((uint32_t)(0x12e59fd0u));
  /* 12e3cf88 mov ecx, dword ptr [0x12e5d4dc] */
  ECX = (r32((uint32_t)(0x12e5d4dc)));
  /* 12e3cf8e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3cf8f call 0x12e35de0 */
  push32(0x12e3cf94u); f_12e35de0();
  /* 12e3cf94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cf97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3cf9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cf9d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cfa0 mov eax, dword ptr [edx + 0x12e5d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12e5d4dc)));
  /* 12e3cfa6 push eax */
  push32((uint32_t)(EAX));
  /* 12e3cfa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3cfaa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3cfad mov edx, dword ptr [ecx + 0x12e5d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12e5d4dc)));
  /* 12e3cfb3 push edx */
  push32((uint32_t)(EDX));
  /* 12e3cfb4 call 0x12e3eab0 */
  push32(0x12e3cfb9u); f_12e3eab0();
  /* 12e3cfb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cfbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3cfbe je 0x12e3cfc7 */
  if (C.zf) goto L_12e3cfc7;
  /* 12e3cfc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e3cfc7:;
  /* 12e3cfc7 jmp 0x12e3cff7 */
  goto L_12e3cff7;
L_12e3cfc9:;
  /* 12e3cfc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3cfcd jne 0x12e3cfd6 */
  if (!C.zf) goto L_12e3cfd6;
  /* 12e3cfcf mov eax, dword ptr [0x12e5d4dc] */
  EAX = (r32((uint32_t)(0x12e5d4dc)));
  /* 12e3cfd4 jmp 0x12e3cffc */
  goto L_12e3cffc;
L_12e3cfd6:;
  /* 12e3cfd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3cfd8 mov eax, dword ptr [0x12e5d4dc] */
  EAX = (r32((uint32_t)(0x12e5d4dc)));
  /* 12e3cfdd push eax */
  push32((uint32_t)(EAX));
  /* 12e3cfde call 0x12e338b0 */
  push32(0x12e3cfe3u); f_12e338b0();
  /* 12e3cfe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3cfe6 mov dword ptr [0x12e5d4dc], 0 */
  w32((uint32_t)(0x12e5d4dc), (0x0u));
  /* 12e3cff0 mov eax, dword ptr [0x12e5d4f4] */
  EAX = (r32((uint32_t)(0x12e5d4f4)));
  /* 12e3cff5 jmp 0x12e3cffc */
  goto L_12e3cffc;
L_12e3cff7:;
  /* 12e3cff7 jmp 0x12e3cf45 */
  goto L_12e3cf45;
L_12e3cffc:;
  /* 12e3cffc mov esp, ebp */
  ESP = (EBP);
  /* 12e3cffe pop ebp */
  EBP = (pop32());
  /* 12e3cfff ret  */
  ESPCHK(0x12e3cf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x12e3d000 (388 bytes, 115 insns) */
void f_12e3d000(void) {
  FTRACE(0x12e3d000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d001 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d003 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3d009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d00d jne 0x12e3d016 */
  if (!C.zf) goto L_12e3d016;
  /* 12e3d00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d011 jmp 0x12e3d180 */
  goto L_12e3d180;
L_12e3d016:;
  /* 12e3d016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3d01c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d01f jne 0x12e3d070 */
  if (!C.zf) goto L_12e3d070;
  /* 12e3d021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d024 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e3d028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d02a jne 0x12e3d070 */
  if (!C.zf) goto L_12e3d070;
  /* 12e3d02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d02f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12e3d032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d035 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12e3d039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d03d je 0x12e3d059 */
  if (C.zf) goto L_12e3d059;
  /* 12e3d03f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3d042 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12e3d047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3d04a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12e3d050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3d053 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12e3d059:;
  /* 12e3d059 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d05d je 0x12e3d068 */
  if (C.zf) goto L_12e3d068;
  /* 12e3d05f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3d062 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e3d068:;
  /* 12e3d068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d06b jmp 0x12e3d180 */
  goto L_12e3d180;
L_12e3d070:;
  /* 12e3d070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d073 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d074 push 0x12e5d450 */
  push32((uint32_t)(0x12e5d450u));
  /* 12e3d079 call 0x12e3eab0 */
  push32(0x12e3d07eu); f_12e3eab0();
  /* 12e3d07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d083 je 0x12e3d138 */
  if (C.zf) goto L_12e3d138;
  /* 12e3d089 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d08c push edx */
  push32((uint32_t)(EDX));
  /* 12e3d08d push 0x12e5d3cc */
  push32((uint32_t)(0x12e5d3ccu));
  /* 12e3d092 call 0x12e3eab0 */
  push32(0x12e3d097u); f_12e3eab0();
  /* 12e3d097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d09c je 0x12e3d138 */
  if (C.zf) goto L_12e3d138;
  /* 12e3d0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d0a5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d0a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12e3d0ac push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d0ad call 0x12e3d1f0 */
  push32(0x12e3d0b2u); f_12e3d1f0();
  /* 12e3d0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d0b7 je 0x12e3d0c0 */
  if (C.zf) goto L_12e3d0c0;
  /* 12e3d0b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d0bb jmp 0x12e3d180 */
  goto L_12e3d180;
L_12e3d0c0:;
  /* 12e3d0c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12e3d0c6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d0c7 push 0x12e5e6b0 */
  push32((uint32_t)(0x12e5e6b0u));
  /* 12e3d0cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12e3d0d2 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d0d3 call 0x12e3ec00 */
  push32(0x12e3d0d8u); f_12e3ec00();
  /* 12e3d0d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d0dd jne 0x12e3d0e6 */
  if (!C.zf) goto L_12e3d0e6;
  /* 12e3d0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d0e1 jmp 0x12e3d180 */
  goto L_12e3d180;
L_12e3d0e6:;
  /* 12e3d0e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d0e8 mov cx, word ptr [0x12e5e6b4] */
  CX = (r16((uint32_t)(0x12e5e6b4)));
  /* 12e3d0ef mov dword ptr [0x12e5e6b8], ecx */
  w32((uint32_t)(0x12e5e6b8), (ECX));
  /* 12e3d0f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12e3d0fb push edx */
  push32((uint32_t)(EDX));
  /* 12e3d0fc push 0x12e5d450 */
  push32((uint32_t)(0x12e5d450u));
  /* 12e3d101 call 0x12e3d350 */
  push32(0x12e3d106u); f_12e3d350();
  /* 12e3d106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d10c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3d10f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3d111 je 0x12e3d126 */
  if (C.zf) goto L_12e3d126;
  /* 12e3d113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d116 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d117 push 0x12e5d3cc */
  push32((uint32_t)(0x12e5d3ccu));
  /* 12e3d11c call 0x12e35dd0 */
  push32(0x12e3d121u); f_12e35dd0();
  /* 12e3d121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d124 jmp 0x12e3d138 */
  goto L_12e3d138;
L_12e3d126:;
  /* 12e3d126 push 0x12e5d450 */
  push32((uint32_t)(0x12e5d450u));
  /* 12e3d12b push 0x12e5d3cc */
  push32((uint32_t)(0x12e5d3ccu));
  /* 12e3d130 call 0x12e35dd0 */
  push32(0x12e3d135u); f_12e35dd0();
  /* 12e3d135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3d138:;
  /* 12e3d138 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d13c je 0x12e3d151 */
  if (C.zf) goto L_12e3d151;
  /* 12e3d13e push 6 */
  push32((uint32_t)(0x6u));
  /* 12e3d140 push 0x12e5e6b0 */
  push32((uint32_t)(0x12e5e6b0u));
  /* 12e3d145 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3d148 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d149 call 0x12e39700 */
  push32(0x12e3d14eu); f_12e39700();
  /* 12e3d14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3d151:;
  /* 12e3d151 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d155 je 0x12e3d16a */
  if (C.zf) goto L_12e3d16a;
  /* 12e3d157 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e3d159 push 0x12e5e6b8 */
  push32((uint32_t)(0x12e5e6b8u));
  /* 12e3d15e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3d161 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d162 call 0x12e39700 */
  push32(0x12e3d167u); f_12e39700();
  /* 12e3d167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3d16a:;
  /* 12e3d16a push 0x12e5d450 */
  push32((uint32_t)(0x12e5d450u));
  /* 12e3d16f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d172 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d173 call 0x12e35dd0 */
  push32(0x12e3d178u); f_12e35dd0();
  /* 12e3d178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d17b mov eax, 0x12e5d450 */
  EAX = (0x12e5d450u);
L_12e3d180:;
  /* 12e3d180 mov esp, ebp */
  ESP = (EBP);
  /* 12e3d182 pop ebp */
  EBP = (pop32());
  /* 12e3d183 ret  */
  ESPCHK(0x12e3d000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x12e3d190 (7 bytes, 5 insns) */
void f_12e3d190(void) {
  FTRACE(0x12e3d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d190 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d191 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d195 pop ebp */
  EBP = (pop32());
  /* 12e3d196 ret  */
  ESPCHK(0x12e3d190u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12e3d1a0 (79 bytes, 28 insns) */
void f_12e3d1a0(void) {
  FTRACE(0x12e3d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3d1a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12e3d1a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d1ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3d1b3 jmp 0x12e3d1be */
  goto L_12e3d1be;
L_12e3d1b5:;
  /* 12e3d1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d1b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e3d1be:;
  /* 12e3d1be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d1c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d1c4 jge 0x12e3d1e4 */
  if ((C.sf==C.of)) goto L_12e3d1e4;
  /* 12e3d1c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d1c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d1d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e3d1d5 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d1d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d1d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d1da call 0x12e35de0 */
  push32(0x12e3d1dfu); f_12e35de0();
  /* 12e3d1df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d1e2 jmp 0x12e3d1b5 */
  goto L_12e3d1b5;
L_12e3d1e4:;
  /* 12e3d1e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3d1eb mov esp, ebp */
  ESP = (EBP);
  /* 12e3d1ed pop ebp */
  EBP = (pop32());
  /* 12e3d1ee ret  */
  ESPCHK(0x12e3d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x12e3d1f0 (349 bytes, 122 insns) */
void f_12e3d1f0(void) {
  FTRACE(0x12e3d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3d1f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12e3d1fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3d1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d200 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d201 call 0x12e36b90 */
  push32(0x12e3d206u); f_12e36b90();
  /* 12e3d206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d20c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3d20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3d211 jne 0x12e3d21a */
  if (!C.zf) goto L_12e3d21a;
  /* 12e3d213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d215 jmp 0x12e3d349 */
  goto L_12e3d349;
L_12e3d21a:;
  /* 12e3d21a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d21d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3d220 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d223 jne 0x12e3d250 */
  if (!C.zf) goto L_12e3d250;
  /* 12e3d225 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d228 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e3d22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d22e je 0x12e3d250 */
  if (C.zf) goto L_12e3d250;
  /* 12e3d230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d233 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d236 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d23a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d240 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d241 call 0x12e35dd0 */
  push32(0x12e3d246u); f_12e35dd0();
  /* 12e3d246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d24b jmp 0x12e3d349 */
  goto L_12e3d349;
L_12e3d250:;
  /* 12e3d250 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3d257 jmp 0x12e3d262 */
  goto L_12e3d262;
L_12e3d259:;
  /* 12e3d259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d25c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3d262:;
  /* 12e3d262 push 0x12e59fe8 */
  push32((uint32_t)(0x12e59fe8u));
  /* 12e3d267 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d26a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d26b call 0x12e3eb40 */
  push32(0x12e3d270u); f_12e3eb40();
  /* 12e3d270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d273 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3d276 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d27a jne 0x12e3d284 */
  if (!C.zf) goto L_12e3d284;
  /* 12e3d27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d27f jmp 0x12e3d349 */
  goto L_12e3d349;
L_12e3d284:;
  /* 12e3d284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d287 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d28a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3d28c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12e3d28f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d293 jne 0x12e3d2ba */
  if (!C.zf) goto L_12e3d2ba;
  /* 12e3d295 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d299 jge 0x12e3d2ba */
  if ((C.sf==C.of)) goto L_12e3d2ba;
  /* 12e3d29b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3d29f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d2a2 je 0x12e3d2ba */
  if (C.zf) goto L_12e3d2ba;
  /* 12e3d2a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d2a7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d2a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d2ab push eax */
  push32((uint32_t)(EAX));
  /* 12e3d2ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d2af push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d2b0 call 0x12e36640 */
  push32(0x12e3d2b5u); f_12e36640();
  /* 12e3d2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d2b8 jmp 0x12e3d320 */
  goto L_12e3d320;
L_12e3d2ba:;
  /* 12e3d2ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d2be jne 0x12e3d2e8 */
  if (!C.zf) goto L_12e3d2e8;
  /* 12e3d2c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d2c4 jge 0x12e3d2e8 */
  if ((C.sf==C.of)) goto L_12e3d2e8;
  /* 12e3d2c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3d2ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d2cd je 0x12e3d2e8 */
  if (C.zf) goto L_12e3d2e8;
  /* 12e3d2cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d2d2 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d2d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d2da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d2dd push edx */
  push32((uint32_t)(EDX));
  /* 12e3d2de call 0x12e36640 */
  push32(0x12e3d2e3u); f_12e36640();
  /* 12e3d2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d2e6 jmp 0x12e3d320 */
  goto L_12e3d320;
L_12e3d2e8:;
  /* 12e3d2e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d2ec jne 0x12e3d31b */
  if (!C.zf) goto L_12e3d31b;
  /* 12e3d2ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3d2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d2f4 je 0x12e3d2ff */
  if (C.zf) goto L_12e3d2ff;
  /* 12e3d2f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3d2fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d2fd jne 0x12e3d31b */
  if (!C.zf) goto L_12e3d31b;
L_12e3d2ff:;
  /* 12e3d2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d302 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d306 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d30a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d310 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d311 call 0x12e36640 */
  push32(0x12e3d316u); f_12e36640();
  /* 12e3d316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d319 jmp 0x12e3d320 */
  goto L_12e3d320;
L_12e3d31b:;
  /* 12e3d31b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d31e jmp 0x12e3d349 */
  goto L_12e3d349;
L_12e3d320:;
  /* 12e3d320 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3d324 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d327 jne 0x12e3d32b */
  if (!C.zf) goto L_12e3d32b;
  /* 12e3d329 jmp 0x12e3d347 */
  goto L_12e3d347;
L_12e3d32b:;
  /* 12e3d32b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e3d32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d331 jne 0x12e3d335 */
  if (!C.zf) goto L_12e3d335;
  /* 12e3d333 jmp 0x12e3d347 */
  goto L_12e3d347;
L_12e3d335:;
  /* 12e3d335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d33b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12e3d33f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e3d342 jmp 0x12e3d259 */
  goto L_12e3d259;
L_12e3d347:;
  /* 12e3d347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3d349:;
  /* 12e3d349 mov esp, ebp */
  ESP = (EBP);
  /* 12e3d34b pop ebp */
  EBP = (pop32());
  /* 12e3d34c ret  */
  ESPCHK(0x12e3d1f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12e3d350 (101 bytes, 36 insns) */
void f_12e3d350(void) {
  FTRACE(0x12e3d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d350 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d351 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d356 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d35a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d35b call 0x12e35dd0 */
  push32(0x12e3d360u); f_12e35dd0();
  /* 12e3d360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d366 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12e3d36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d36c je 0x12e3d388 */
  if (C.zf) goto L_12e3d388;
  /* 12e3d36e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d371 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d374 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d375 push 0x12e59ff0 */
  push32((uint32_t)(0x12e59ff0u));
  /* 12e3d37a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d37f push edx */
  push32((uint32_t)(EDX));
  /* 12e3d380 call 0x12e3d1a0 */
  push32(0x12e3d385u); f_12e3d1a0();
  /* 12e3d385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3d388:;
  /* 12e3d388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d38b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12e3d392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3d394 je 0x12e3d3b3 */
  if (C.zf) goto L_12e3d3b3;
  /* 12e3d396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3d399 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d39f push edx */
  push32((uint32_t)(EDX));
  /* 12e3d3a0 push 0x12e59fec */
  push32((uint32_t)(0x12e59fecu));
  /* 12e3d3a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d3aa push eax */
  push32((uint32_t)(EAX));
  /* 12e3d3ab call 0x12e3d1a0 */
  push32(0x12e3d3b0u); f_12e3d1a0();
  /* 12e3d3b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3d3b3:;
  /* 12e3d3b3 pop ebp */
  EBP = (pop32());
  /* 12e3d3b4 ret  */
  ESPCHK(0x12e3d350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x12e3d3c0 (130 bytes, 50 insns) */
void f_12e3d3c0(void) {
  FTRACE(0x12e3d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3d3c5 push esi */
  push32((uint32_t)(ESI));
  /* 12e3d3c6 push edi */
  push32((uint32_t)(EDI));
  /* 12e3d3c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e3d3ce:;
  /* 12e3d3ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d3d2 jne 0x12e3d3f2 */
  if (!C.zf) goto L_12e3d3f2;
  /* 12e3d3d4 push 0x12e5a000 */
  push32((uint32_t)(0x12e5a000u));
  /* 12e3d3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3d3db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12e3d3dd push 0x12e59ff4 */
  push32((uint32_t)(0x12e59ff4u));
  /* 12e3d3e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d3e4 call 0x12e31ee0 */
  push32(0x12e3d3e9u); f_12e31ee0();
  /* 12e3d3e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d3ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d3ef jne 0x12e3d3f2 */
  if (!C.zf) goto L_12e3d3f2;
  /* 12e3d3f1 int3  */
  x86_unimpl("int3 @ 0x12e3d3f1");
L_12e3d3f2:;
  /* 12e3d3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d3f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d3f6 jne 0x12e3d3ce */
  if (!C.zf) goto L_12e3d3ce;
  /* 12e3d3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3d3fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3d401 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3d403 je 0x12e3d411 */
  if (C.zf) goto L_12e3d411;
  /* 12e3d405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d408 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12e3d40f jmp 0x12e3d438 */
  goto L_12e3d438;
L_12e3d411:;
  /* 12e3d411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d414 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d415 call 0x12e3bc30 */
  push32(0x12e3d41au); f_12e3bc30();
  /* 12e3d41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d420 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d421 call 0x12e3d450 */
  push32(0x12e3d426u); f_12e3d450();
  /* 12e3d426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d42f push eax */
  push32((uint32_t)(EAX));
  /* 12e3d430 call 0x12e3bca0 */
  push32(0x12e3d435u); f_12e3bca0();
  /* 12e3d435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3d438:;
  /* 12e3d438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d43b pop edi */
  EDI = (pop32());
  /* 12e3d43c pop esi */
  ESI = (pop32());
  /* 12e3d43d pop ebx */
  EBX = (pop32());
  /* 12e3d43e mov esp, ebp */
  ESP = (EBP);
  /* 12e3d440 pop ebp */
  EBP = (pop32());
  /* 12e3d441 ret  */
  ESPCHK(0x12e3d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x12e3d450 (190 bytes, 67 insns) */
void f_12e3d450(void) {
  FTRACE(0x12e3d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d450 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d451 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3d456 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3d457 push esi */
  push32((uint32_t)(ESI));
  /* 12e3d458 push edi */
  push32((uint32_t)(EDI));
  /* 12e3d459 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e3d460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e3d466:;
  /* 12e3d466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d46a jne 0x12e3d48a */
  if (!C.zf) goto L_12e3d48a;
  /* 12e3d46c push 0x12e59ea4 */
  push32((uint32_t)(0x12e59ea4u));
  /* 12e3d471 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3d473 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12e3d475 push 0x12e59ff4 */
  push32((uint32_t)(0x12e59ff4u));
  /* 12e3d47a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d47c call 0x12e31ee0 */
  push32(0x12e3d481u); f_12e31ee0();
  /* 12e3d481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d487 jne 0x12e3d48a */
  if (!C.zf) goto L_12e3d48a;
  /* 12e3d489 int3  */
  x86_unimpl("int3 @ 0x12e3d489");
L_12e3d48a:;
  /* 12e3d48a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3d48e jne 0x12e3d466 */
  if (!C.zf) goto L_12e3d466;
  /* 12e3d490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d493 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e3d496 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d49b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d49d je 0x12e3d4fa */
  if (C.zf) goto L_12e3d4fa;
  /* 12e3d49f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d4a3 call 0x12e3c750 */
  push32(0x12e3d4a8u); f_12e3c750();
  /* 12e3d4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d4ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4b1 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d4b2 call 0x12e3fad0 */
  push32(0x12e3d4b7u); f_12e3fad0();
  /* 12e3d4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d4ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3d4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d4c1 call 0x12e3f9a0 */
  push32(0x12e3d4c6u); f_12e3f9a0();
  /* 12e3d4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d4cb jge 0x12e3d4d6 */
  if ((C.sf==C.of)) goto L_12e3d4d6;
  /* 12e3d4cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e3d4d4 jmp 0x12e3d4fa */
  goto L_12e3d4fa;
L_12e3d4d6:;
  /* 12e3d4d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d4dd je 0x12e3d4fa */
  if (C.zf) goto L_12e3d4fa;
  /* 12e3d4df push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d4e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e3d4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d4e8 call 0x12e338b0 */
  push32(0x12e3d4edu); f_12e338b0();
  /* 12e3d4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d4f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12e3d4fa:;
  /* 12e3d4fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3d4fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12e3d504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d507 pop edi */
  EDI = (pop32());
  /* 12e3d508 pop esi */
  ESI = (pop32());
  /* 12e3d509 pop ebx */
  EBX = (pop32());
  /* 12e3d50a mov esp, ebp */
  ESP = (EBP);
  /* 12e3d50c pop ebp */
  EBP = (pop32());
  /* 12e3d50d ret  */
  ESPCHK(0x12e3d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d510 @ 0x12e3d510 (210 bytes, 63 insns) */
void f_12e3d510(void) {
  FTRACE(0x12e3d510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d510 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d511 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d513 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d517 cmp eax, dword ptr [0x12e5ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d51d jae 0x12e3d541 */
  if (!C.cf) goto L_12e3d541;
  /* 12e3d51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d522 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e3d525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d528 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3d52b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3d52e mov eax, dword ptr [ecx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e3d535 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e3d53a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d53d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3d53f jne 0x12e3d554 */
  if (!C.zf) goto L_12e3d554;
L_12e3d541:;
  /* 12e3d541 call 0x12e3acf0 */
  push32(0x12e3d546u); f_12e3acf0();
  /* 12e3d546 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3d54c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d54f jmp 0x12e3d5de */
  goto L_12e3d5de;
L_12e3d554:;
  /* 12e3d554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d557 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d558 call 0x12e3c510 */
  push32(0x12e3d55du); f_12e3c510();
  /* 12e3d55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d563 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e3d566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d569 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d56c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3d56f mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e3d576 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12e3d57b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d580 je 0x12e3d5bd */
  if (C.zf) goto L_12e3d5bd;
  /* 12e3d582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d585 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d586 call 0x12e3c390 */
  push32(0x12e3d58bu); f_12e3c390();
  /* 12e3d58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d58e push eax */
  push32((uint32_t)(EAX));
  /* 12e3d58f call dword ptr [0x12e60270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60270))), 0x12e3d595u);
  /* 12e3d595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d597 jne 0x12e3d5a4 */
  if (!C.zf) goto L_12e3d5a4;
  /* 12e3d599 call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3d59fu);
  /* 12e3d59f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d5a2 jmp 0x12e3d5ab */
  goto L_12e3d5ab;
L_12e3d5a4:;
  /* 12e3d5a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e3d5ab:;
  /* 12e3d5ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d5af jne 0x12e3d5b3 */
  if (!C.zf) goto L_12e3d5b3;
  /* 12e3d5b1 jmp 0x12e3d5cf */
  goto L_12e3d5cf;
L_12e3d5b3:;
  /* 12e3d5b3 call 0x12e3ad00 */
  push32(0x12e3d5b8u); f_12e3ad00();
  /* 12e3d5b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d5bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e3d5bd:;
  /* 12e3d5bd call 0x12e3acf0 */
  push32(0x12e3d5c2u); f_12e3acf0();
  /* 12e3d5c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e3d5c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e3d5cf:;
  /* 12e3d5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d5d2 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d5d3 call 0x12e3c5a0 */
  push32(0x12e3d5d8u); f_12e3c5a0();
  /* 12e3d5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e3d5de:;
  /* 12e3d5de mov esp, ebp */
  ESP = (EBP);
  /* 12e3d5e0 pop ebp */
  EBP = (pop32());
  /* 12e3d5e1 ret  */
  ESPCHK(0x12e3d510u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12e3d5f0 (219 bytes, 64 insns) */
void f_12e3d5f0(void) {
  FTRACE(0x12e3d5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d5f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d5f4 cmp dword ptr [0x12e5e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d5fb je 0x12e3d691 */
  if (C.zf) goto L_12e3d691;
  /* 12e3d601 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12e3d603 push 0x12e5a010 */
  push32((uint32_t)(0x12e5a010u));
  /* 12e3d608 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d60a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12e3d60f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d611 call 0x12e33230 */
  push32(0x12e3d616u); f_12e33230();
  /* 12e3d616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d620 jne 0x12e3d62c */
  if (!C.zf) goto L_12e3d62c;
  /* 12e3d622 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3d627 jmp 0x12e3d6c7 */
  goto L_12e3d6c7;
L_12e3d62c:;
  /* 12e3d62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d62f push eax */
  push32((uint32_t)(EAX));
  /* 12e3d630 call 0x12e3d6d0 */
  push32(0x12e3d635u); f_12e3d6d0();
  /* 12e3d635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3d63a je 0x12e3d65d */
  if (C.zf) goto L_12e3d65d;
  /* 12e3d63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d63f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d640 call 0x12e3dc60 */
  push32(0x12e3d645u); f_12e3dc60();
  /* 12e3d645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d648 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d64a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d64d push edx */
  push32((uint32_t)(EDX));
  /* 12e3d64e call 0x12e338b0 */
  push32(0x12e3d653u); f_12e338b0();
  /* 12e3d653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d656 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3d65b jmp 0x12e3d6c7 */
  goto L_12e3d6c7;
L_12e3d65d:;
  /* 12e3d65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d660 mov dword ptr [0x12e5dc98], eax */
  w32((uint32_t)(0x12e5dc98), (EAX));
  /* 12e3d665 mov ecx, dword ptr [0x12e5e6bc] */
  ECX = (r32((uint32_t)(0x12e5e6bc)));
  /* 12e3d66b push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d66c call 0x12e3dc60 */
  push32(0x12e3d671u); f_12e3dc60();
  /* 12e3d671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d674 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d676 mov edx, dword ptr [0x12e5e6bc] */
  EDX = (r32((uint32_t)(0x12e5e6bc)));
  /* 12e3d67c push edx */
  push32((uint32_t)(EDX));
  /* 12e3d67d call 0x12e338b0 */
  push32(0x12e3d682u); f_12e338b0();
  /* 12e3d682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d688 mov dword ptr [0x12e5e6bc], eax */
  w32((uint32_t)(0x12e5e6bc), (EAX));
  /* 12e3d68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d68f jmp 0x12e3d6c7 */
  goto L_12e3d6c7;
L_12e3d691:;
  /* 12e3d691 mov dword ptr [0x12e5dc98], 0x12e5dca0 */
  w32((uint32_t)(0x12e5dc98), (0x12e5dca0u));
  /* 12e3d69b mov ecx, dword ptr [0x12e5e6bc] */
  ECX = (r32((uint32_t)(0x12e5e6bc)));
  /* 12e3d6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3d6a2 call 0x12e3dc60 */
  push32(0x12e3d6a7u); f_12e3dc60();
  /* 12e3d6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3d6ac mov edx, dword ptr [0x12e5e6bc] */
  EDX = (r32((uint32_t)(0x12e5e6bc)));
  /* 12e3d6b2 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d6b3 call 0x12e338b0 */
  push32(0x12e3d6b8u); f_12e338b0();
  /* 12e3d6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d6bb mov dword ptr [0x12e5e6bc], 0 */
  w32((uint32_t)(0x12e5e6bc), (0x0u));
  /* 12e3d6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3d6c7:;
  /* 12e3d6c7 mov esp, ebp */
  ESP = (EBP);
  /* 12e3d6c9 pop ebp */
  EBP = (pop32());
  /* 12e3d6ca ret  */
  ESPCHK(0x12e3d5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x12e3d6d0 (1423 bytes, 533 insns) */
void f_12e3d6d0(void) {
  FTRACE(0x12e3d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3d6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3d6d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e3d6dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d6df mov ax, word ptr [0x12e5e6f6] */
  AX = (r16((uint32_t)(0x12e5e6f6)));
  /* 12e3d6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3d6e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d6ea mov cx, word ptr [0x12e5e6f8] */
  CX = (r16((uint32_t)(0x12e5e6f8)));
  /* 12e3d6f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3d6f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3d6f8 jne 0x12e3d702 */
  if (!C.zf) goto L_12e3d702;
  /* 12e3d6fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3d6fd jmp 0x12e3dc5b */
  goto L_12e3dc5b;
L_12e3d702:;
  /* 12e3d702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d705 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d708 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d709 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12e3d70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d70e push eax */
  push32((uint32_t)(EAX));
  /* 12e3d70f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d711 call 0x12e40fe0 */
  push32(0x12e3d716u); f_12e40fe0();
  /* 12e3d716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d71e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d724 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d727 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12e3d72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d72d push eax */
  push32((uint32_t)(EAX));
  /* 12e3d72e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d730 call 0x12e40fe0 */
  push32(0x12e3d735u); f_12e40fe0();
  /* 12e3d735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d738 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d73b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d73d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d743 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d746 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d747 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12e3d749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d74c push eax */
  push32((uint32_t)(EAX));
  /* 12e3d74d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d74f call 0x12e40fe0 */
  push32(0x12e3d754u); f_12e40fe0();
  /* 12e3d754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d757 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d75a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d75c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d762 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d765 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d766 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12e3d768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d76b push eax */
  push32((uint32_t)(EAX));
  /* 12e3d76c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d76e call 0x12e40fe0 */
  push32(0x12e3d773u); f_12e40fe0();
  /* 12e3d773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d779 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d77b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d781 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d784 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d785 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12e3d787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d78a push eax */
  push32((uint32_t)(EAX));
  /* 12e3d78b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d78d call 0x12e40fe0 */
  push32(0x12e3d792u); f_12e40fe0();
  /* 12e3d792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d79a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d7a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d7a3 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d7a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12e3d7a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d7a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d7ac call 0x12e40fe0 */
  push32(0x12e3d7b1u); f_12e40fe0();
  /* 12e3d7b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d7b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d7b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d7bf push edx */
  push32((uint32_t)(EDX));
  /* 12e3d7c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12e3d7c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d7c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d7c8 call 0x12e40fe0 */
  push32(0x12e3d7cdu); f_12e40fe0();
  /* 12e3d7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d7d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d7d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d7d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d7db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d7de push edx */
  push32((uint32_t)(EDX));
  /* 12e3d7df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12e3d7e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d7e4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d7e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d7e7 call 0x12e40fe0 */
  push32(0x12e3d7ecu); f_12e40fe0();
  /* 12e3d7ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d7ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d7f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d7f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d7f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d7fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d7fd push edx */
  push32((uint32_t)(EDX));
  /* 12e3d7fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12e3d800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d803 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d806 call 0x12e40fe0 */
  push32(0x12e3d80bu); f_12e40fe0();
  /* 12e3d80b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d80e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d811 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d813 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d819 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d81c push edx */
  push32((uint32_t)(EDX));
  /* 12e3d81d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12e3d81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d822 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d823 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d825 call 0x12e40fe0 */
  push32(0x12e3d82au); f_12e40fe0();
  /* 12e3d82a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d838 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d83b push edx */
  push32((uint32_t)(EDX));
  /* 12e3d83c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12e3d83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d841 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d842 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d844 call 0x12e40fe0 */
  push32(0x12e3d849u); f_12e40fe0();
  /* 12e3d849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d84c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d84f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d851 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d857 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d85a push edx */
  push32((uint32_t)(EDX));
  /* 12e3d85b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12e3d85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d860 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d861 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d863 call 0x12e40fe0 */
  push32(0x12e3d868u); f_12e40fe0();
  /* 12e3d868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d86b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d86e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d876 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d879 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d87a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12e3d87c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d87f push eax */
  push32((uint32_t)(EAX));
  /* 12e3d880 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d882 call 0x12e40fe0 */
  push32(0x12e3d887u); f_12e40fe0();
  /* 12e3d887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d88a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d88d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d88f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d898 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d899 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e3d89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d89e push eax */
  push32((uint32_t)(EAX));
  /* 12e3d89f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d8a1 call 0x12e40fe0 */
  push32(0x12e3d8a6u); f_12e40fe0();
  /* 12e3d8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d8b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d8b7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d8b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12e3d8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d8bd push eax */
  push32((uint32_t)(EAX));
  /* 12e3d8be push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d8c0 call 0x12e40fe0 */
  push32(0x12e3d8c5u); f_12e40fe0();
  /* 12e3d8c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d8c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d8cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d8cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d8d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d8d6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d8d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12e3d8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d8dc push eax */
  push32((uint32_t)(EAX));
  /* 12e3d8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d8df call 0x12e40fe0 */
  push32(0x12e3d8e4u); f_12e40fe0();
  /* 12e3d8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d8e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d8f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d8f5 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d8f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12e3d8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d8fb push eax */
  push32((uint32_t)(EAX));
  /* 12e3d8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d8fe call 0x12e40fe0 */
  push32(0x12e3d903u); f_12e40fe0();
  /* 12e3d903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d909 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d90b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d911 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d914 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d915 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12e3d917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d91a push eax */
  push32((uint32_t)(EAX));
  /* 12e3d91b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d91d call 0x12e40fe0 */
  push32(0x12e3d922u); f_12e40fe0();
  /* 12e3d922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d92a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d930 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d933 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d934 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12e3d936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d939 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d93a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d93c call 0x12e40fe0 */
  push32(0x12e3d941u); f_12e40fe0();
  /* 12e3d941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d949 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d94f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d952 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d953 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12e3d955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d958 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d959 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d95b call 0x12e40fe0 */
  push32(0x12e3d960u); f_12e40fe0();
  /* 12e3d960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d966 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d968 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d96e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d971 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d972 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12e3d974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d977 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d978 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d97a call 0x12e40fe0 */
  push32(0x12e3d97fu); f_12e40fe0();
  /* 12e3d97f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d982 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d985 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d987 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d98d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d990 push edx */
  push32((uint32_t)(EDX));
  /* 12e3d991 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12e3d993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d996 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d997 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d999 call 0x12e40fe0 */
  push32(0x12e3d99eu); f_12e40fe0();
  /* 12e3d99e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d9a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d9a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d9a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d9ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9af push edx */
  push32((uint32_t)(EDX));
  /* 12e3d9b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12e3d9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d9b5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d9b8 call 0x12e40fe0 */
  push32(0x12e3d9bdu); f_12e40fe0();
  /* 12e3d9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d9c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d9cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9ce push edx */
  push32((uint32_t)(EDX));
  /* 12e3d9cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12e3d9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d9d4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d9d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d9d7 call 0x12e40fe0 */
  push32(0x12e3d9dcu); f_12e40fe0();
  /* 12e3d9dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3d9e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3d9e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3d9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3d9ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9ed push edx */
  push32((uint32_t)(EDX));
  /* 12e3d9ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12e3d9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3d9f3 push eax */
  push32((uint32_t)(EAX));
  /* 12e3d9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3d9f6 call 0x12e40fe0 */
  push32(0x12e3d9fbu); f_12e40fe0();
  /* 12e3d9fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3d9fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3da01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3da03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3da06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3da09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da0c push edx */
  push32((uint32_t)(EDX));
  /* 12e3da0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12e3da0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3da12 push eax */
  push32((uint32_t)(EAX));
  /* 12e3da13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3da15 call 0x12e40fe0 */
  push32(0x12e3da1au); f_12e40fe0();
  /* 12e3da1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3da20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3da22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3da25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3da28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da2b push edx */
  push32((uint32_t)(EDX));
  /* 12e3da2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12e3da2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3da31 push eax */
  push32((uint32_t)(EAX));
  /* 12e3da32 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3da34 call 0x12e40fe0 */
  push32(0x12e3da39u); f_12e40fe0();
  /* 12e3da39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3da3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3da41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3da44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3da47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da4a push edx */
  push32((uint32_t)(EDX));
  /* 12e3da4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12e3da4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3da50 push eax */
  push32((uint32_t)(EAX));
  /* 12e3da51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3da53 call 0x12e40fe0 */
  push32(0x12e3da58u); f_12e40fe0();
  /* 12e3da58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3da5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3da60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3da63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3da66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da69 push edx */
  push32((uint32_t)(EDX));
  /* 12e3da6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12e3da6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3da6f push eax */
  push32((uint32_t)(EAX));
  /* 12e3da70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3da72 call 0x12e40fe0 */
  push32(0x12e3da77u); f_12e40fe0();
  /* 12e3da77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3da7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3da7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3da82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3da85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da88 push edx */
  push32((uint32_t)(EDX));
  /* 12e3da89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12e3da8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3da8e push eax */
  push32((uint32_t)(EAX));
  /* 12e3da8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3da91 call 0x12e40fe0 */
  push32(0x12e3da96u); f_12e40fe0();
  /* 12e3da96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3da99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3da9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3da9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3daa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3daa4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3daa7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3daa8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12e3daaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3daad push eax */
  push32((uint32_t)(EAX));
  /* 12e3daae push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dab0 call 0x12e40fe0 */
  push32(0x12e3dab5u); f_12e40fe0();
  /* 12e3dab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dac3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dac6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dac7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e3dac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3dacc push eax */
  push32((uint32_t)(EAX));
  /* 12e3dacd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dacf call 0x12e40fe0 */
  push32(0x12e3dad4u); f_12e40fe0();
  /* 12e3dad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dae2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dae8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dae9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12e3daeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3daee push eax */
  push32((uint32_t)(EAX));
  /* 12e3daef push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3daf1 call 0x12e40fe0 */
  push32(0x12e3daf6u); f_12e40fe0();
  /* 12e3daf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3daf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dafc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dafe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3db01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3db04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db0a push edx */
  push32((uint32_t)(EDX));
  /* 12e3db0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e3db0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3db10 push eax */
  push32((uint32_t)(EAX));
  /* 12e3db11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3db13 call 0x12e40fe0 */
  push32(0x12e3db18u); f_12e40fe0();
  /* 12e3db18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3db1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3db20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3db23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3db26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db2c push edx */
  push32((uint32_t)(EDX));
  /* 12e3db2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e3db2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3db32 push eax */
  push32((uint32_t)(EAX));
  /* 12e3db33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3db35 call 0x12e40fe0 */
  push32(0x12e3db3au); f_12e40fe0();
  /* 12e3db3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3db40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3db42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3db45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3db48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db4e push edx */
  push32((uint32_t)(EDX));
  /* 12e3db4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12e3db51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3db54 push eax */
  push32((uint32_t)(EAX));
  /* 12e3db55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3db57 call 0x12e40fe0 */
  push32(0x12e3db5cu); f_12e40fe0();
  /* 12e3db5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3db62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3db64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3db67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3db6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db70 push edx */
  push32((uint32_t)(EDX));
  /* 12e3db71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12e3db73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3db76 push eax */
  push32((uint32_t)(EAX));
  /* 12e3db77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3db79 call 0x12e40fe0 */
  push32(0x12e3db7eu); f_12e40fe0();
  /* 12e3db7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3db84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3db86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3db89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3db8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3db92 push edx */
  push32((uint32_t)(EDX));
  /* 12e3db93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12e3db95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3db98 push eax */
  push32((uint32_t)(EAX));
  /* 12e3db99 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3db9b call 0x12e40fe0 */
  push32(0x12e3dba0u); f_12e40fe0();
  /* 12e3dba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dba3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dba6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dba8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dbab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dbae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dbb4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dbb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12e3dbb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3dbba push eax */
  push32((uint32_t)(EAX));
  /* 12e3dbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dbbd call 0x12e40fe0 */
  push32(0x12e3dbc2u); f_12e40fe0();
  /* 12e3dbc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dbc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dbc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dbca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dbcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dbd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dbd6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dbd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12e3dbd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3dbdc push eax */
  push32((uint32_t)(EAX));
  /* 12e3dbdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dbdf call 0x12e40fe0 */
  push32(0x12e3dbe4u); f_12e40fe0();
  /* 12e3dbe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dbe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dbea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dbec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dbef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dbf2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dbf9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12e3dbfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3dbfe push eax */
  push32((uint32_t)(EAX));
  /* 12e3dbff push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dc01 call 0x12e40fe0 */
  push32(0x12e3dc06u); f_12e40fe0();
  /* 12e3dc06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dc0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dc0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dc14 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc1a push edx */
  push32((uint32_t)(EDX));
  /* 12e3dc1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e3dc1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3dc20 push eax */
  push32((uint32_t)(EAX));
  /* 12e3dc21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dc23 call 0x12e40fe0 */
  push32(0x12e3dc28u); f_12e40fe0();
  /* 12e3dc28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dc2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dc30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dc33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dc36 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc3c push edx */
  push32((uint32_t)(EDX));
  /* 12e3dc3d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12e3dc42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3dc45 push eax */
  push32((uint32_t)(EAX));
  /* 12e3dc46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dc48 call 0x12e40fe0 */
  push32(0x12e3dc4du); f_12e40fe0();
  /* 12e3dc4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3dc53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dc55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e3dc58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12e3dc5b:;
  /* 12e3dc5b mov esp, ebp */
  ESP = (EBP);
  /* 12e3dc5d pop ebp */
  EBP = (pop32());
  /* 12e3dc5e ret  */
  ESPCHK(0x12e3d6d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12e3dc60 (779 bytes, 265 insns) */
void f_12e3dc60(void) {
  FTRACE(0x12e3dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3dc61 mov ebp, esp */
  EBP = (ESP);
  /* 12e3dc63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3dc67 jne 0x12e3dc6e */
  if (!C.zf) goto L_12e3dc6e;
  /* 12e3dc69 jmp 0x12e3df69 */
  goto L_12e3df69;
L_12e3dc6e:;
  /* 12e3dc6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dc73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e3dc76 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dc77 call 0x12e338b0 */
  push32(0x12e3dc7cu); f_12e338b0();
  /* 12e3dc7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dc84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e3dc87 push eax */
  push32((uint32_t)(EAX));
  /* 12e3dc88 call 0x12e338b0 */
  push32(0x12e3dc8du); f_12e338b0();
  /* 12e3dc8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dc90 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dc92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dc95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3dc98 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dc99 call 0x12e338b0 */
  push32(0x12e3dc9eu); f_12e338b0();
  /* 12e3dc9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3dca9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dcaa call 0x12e338b0 */
  push32(0x12e3dcafu); f_12e338b0();
  /* 12e3dcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dcb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dcb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dcb7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e3dcba push eax */
  push32((uint32_t)(EAX));
  /* 12e3dcbb call 0x12e338b0 */
  push32(0x12e3dcc0u); f_12e338b0();
  /* 12e3dcc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dcc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dcc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dcc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e3dccb push edx */
  push32((uint32_t)(EDX));
  /* 12e3dccc call 0x12e338b0 */
  push32(0x12e3dcd1u); f_12e338b0();
  /* 12e3dcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dcd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dcd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dcd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3dcdb push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dcdc call 0x12e338b0 */
  push32(0x12e3dce1u); f_12e338b0();
  /* 12e3dce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dce9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12e3dcec push eax */
  push32((uint32_t)(EAX));
  /* 12e3dced call 0x12e338b0 */
  push32(0x12e3dcf2u); f_12e338b0();
  /* 12e3dcf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dcf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dcf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dcfa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12e3dcfd push edx */
  push32((uint32_t)(EDX));
  /* 12e3dcfe call 0x12e338b0 */
  push32(0x12e3dd03u); f_12e338b0();
  /* 12e3dd03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd0b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12e3dd0e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dd0f call 0x12e338b0 */
  push32(0x12e3dd14u); f_12e338b0();
  /* 12e3dd14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd1c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12e3dd1f push eax */
  push32((uint32_t)(EAX));
  /* 12e3dd20 call 0x12e338b0 */
  push32(0x12e3dd25u); f_12e338b0();
  /* 12e3dd25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd2d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12e3dd30 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dd31 call 0x12e338b0 */
  push32(0x12e3dd36u); f_12e338b0();
  /* 12e3dd36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd3e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12e3dd41 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dd42 call 0x12e338b0 */
  push32(0x12e3dd47u); f_12e338b0();
  /* 12e3dd47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd4f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e3dd52 push eax */
  push32((uint32_t)(EAX));
  /* 12e3dd53 call 0x12e338b0 */
  push32(0x12e3dd58u); f_12e338b0();
  /* 12e3dd58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd5b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd60 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12e3dd63 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dd64 call 0x12e338b0 */
  push32(0x12e3dd69u); f_12e338b0();
  /* 12e3dd69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd6c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd71 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12e3dd74 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dd75 call 0x12e338b0 */
  push32(0x12e3dd7au); f_12e338b0();
  /* 12e3dd7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd82 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12e3dd85 push eax */
  push32((uint32_t)(EAX));
  /* 12e3dd86 call 0x12e338b0 */
  push32(0x12e3dd8bu); f_12e338b0();
  /* 12e3dd8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dd93 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12e3dd96 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dd97 call 0x12e338b0 */
  push32(0x12e3dd9cu); f_12e338b0();
  /* 12e3dd9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dd9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dda1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dda4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12e3dda7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dda8 call 0x12e338b0 */
  push32(0x12e3ddadu); f_12e338b0();
  /* 12e3ddad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ddb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ddb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ddb5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12e3ddb8 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ddb9 call 0x12e338b0 */
  push32(0x12e3ddbeu); f_12e338b0();
  /* 12e3ddbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ddc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ddc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ddc6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e3ddc9 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ddca call 0x12e338b0 */
  push32(0x12e3ddcfu); f_12e338b0();
  /* 12e3ddcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ddd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ddd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ddd7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12e3ddda push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dddb call 0x12e338b0 */
  push32(0x12e3dde0u); f_12e338b0();
  /* 12e3dde0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dde3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dde5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dde8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12e3ddeb push eax */
  push32((uint32_t)(EAX));
  /* 12e3ddec call 0x12e338b0 */
  push32(0x12e3ddf1u); f_12e338b0();
  /* 12e3ddf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ddf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ddf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ddf9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12e3ddfc push edx */
  push32((uint32_t)(EDX));
  /* 12e3ddfd call 0x12e338b0 */
  push32(0x12e3de02u); f_12e338b0();
  /* 12e3de02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de0a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12e3de0d push ecx */
  push32((uint32_t)(ECX));
  /* 12e3de0e call 0x12e338b0 */
  push32(0x12e3de13u); f_12e338b0();
  /* 12e3de13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de1b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12e3de1e push eax */
  push32((uint32_t)(EAX));
  /* 12e3de1f call 0x12e338b0 */
  push32(0x12e3de24u); f_12e338b0();
  /* 12e3de24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de2c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12e3de2f push edx */
  push32((uint32_t)(EDX));
  /* 12e3de30 call 0x12e338b0 */
  push32(0x12e3de35u); f_12e338b0();
  /* 12e3de35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de3d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12e3de40 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3de41 call 0x12e338b0 */
  push32(0x12e3de46u); f_12e338b0();
  /* 12e3de46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de49 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de4e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12e3de51 push eax */
  push32((uint32_t)(EAX));
  /* 12e3de52 call 0x12e338b0 */
  push32(0x12e3de57u); f_12e338b0();
  /* 12e3de57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de5f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12e3de62 push edx */
  push32((uint32_t)(EDX));
  /* 12e3de63 call 0x12e338b0 */
  push32(0x12e3de68u); f_12e338b0();
  /* 12e3de68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de70 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12e3de73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3de74 call 0x12e338b0 */
  push32(0x12e3de79u); f_12e338b0();
  /* 12e3de79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de81 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12e3de84 push eax */
  push32((uint32_t)(EAX));
  /* 12e3de85 call 0x12e338b0 */
  push32(0x12e3de8au); f_12e338b0();
  /* 12e3de8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3de8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3de8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3de92 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12e3de98 push edx */
  push32((uint32_t)(EDX));
  /* 12e3de99 call 0x12e338b0 */
  push32(0x12e3de9eu); f_12e338b0();
  /* 12e3de9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dea6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12e3deac push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dead call 0x12e338b0 */
  push32(0x12e3deb2u); f_12e338b0();
  /* 12e3deb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3deb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3deb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3deba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12e3dec0 push eax */
  push32((uint32_t)(EAX));
  /* 12e3dec1 call 0x12e338b0 */
  push32(0x12e3dec6u); f_12e338b0();
  /* 12e3dec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3decb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dece mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12e3ded4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ded5 call 0x12e338b0 */
  push32(0x12e3dedau); f_12e338b0();
  /* 12e3deda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dedd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3dedf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3dee2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12e3dee8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dee9 call 0x12e338b0 */
  push32(0x12e3deeeu); f_12e338b0();
  /* 12e3deee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3def1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3def3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3def6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12e3defc push eax */
  push32((uint32_t)(EAX));
  /* 12e3defd call 0x12e338b0 */
  push32(0x12e3df02u); f_12e338b0();
  /* 12e3df02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3df05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3df07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3df0a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12e3df10 push edx */
  push32((uint32_t)(EDX));
  /* 12e3df11 call 0x12e338b0 */
  push32(0x12e3df16u); f_12e338b0();
  /* 12e3df16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3df19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3df1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3df1e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12e3df24 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3df25 call 0x12e338b0 */
  push32(0x12e3df2au); f_12e338b0();
  /* 12e3df2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3df2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3df2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3df32 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12e3df38 push eax */
  push32((uint32_t)(EAX));
  /* 12e3df39 call 0x12e338b0 */
  push32(0x12e3df3eu); f_12e338b0();
  /* 12e3df3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3df41 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3df43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3df46 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12e3df4c push edx */
  push32((uint32_t)(EDX));
  /* 12e3df4d call 0x12e338b0 */
  push32(0x12e3df52u); f_12e338b0();
  /* 12e3df52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3df55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3df57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3df5a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12e3df60 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3df61 call 0x12e338b0 */
  push32(0x12e3df66u); f_12e338b0();
  /* 12e3df66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3df69:;
  /* 12e3df69 pop ebp */
  EBP = (pop32());
  /* 12e3df6a ret  */
  ESPCHK(0x12e3dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x12e3df70 (678 bytes, 180 insns) */
void f_12e3df70(void) {
  FTRACE(0x12e3df70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3df70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3df71 mov ebp, esp */
  EBP = (ESP);
  /* 12e3df73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3df76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3df7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3df7f mov ax, word ptr [0x12e5e6f2] */
  AX = (r16((uint32_t)(0x12e5e6f2)));
  /* 12e3df85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3df88 cmp dword ptr [0x12e5e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3df8f je 0x12e3e0ea */
  if (C.zf) goto L_12e3e0ea;
  /* 12e3df95 push 0x12e5e6c0 */
  push32((uint32_t)(0x12e5e6c0u));
  /* 12e3df9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12e3df9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3df9f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3dfa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dfa2 call 0x12e40fe0 */
  push32(0x12e3dfa7u); f_12e40fe0();
  /* 12e3dfa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dfaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3dfad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3dfaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3dfb2 push 0x12e5e6c4 */
  push32((uint32_t)(0x12e5e6c4u));
  /* 12e3dfb7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12e3dfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3dfbc push eax */
  push32((uint32_t)(EAX));
  /* 12e3dfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dfbf call 0x12e40fe0 */
  push32(0x12e3dfc4u); f_12e40fe0();
  /* 12e3dfc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dfc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3dfca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dfcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3dfcf push 0x12e5e6c8 */
  push32((uint32_t)(0x12e5e6c8u));
  /* 12e3dfd4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e3dfd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3dfd9 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dfda push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3dfdc call 0x12e40fe0 */
  push32(0x12e3dfe1u); f_12e40fe0();
  /* 12e3dfe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dfe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3dfe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3dfe9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3dfec mov edx, dword ptr [0x12e5e6c8] */
  EDX = (r32((uint32_t)(0x12e5e6c8)));
  /* 12e3dff2 push edx */
  push32((uint32_t)(EDX));
  /* 12e3dff3 call 0x12e3e220 */
  push32(0x12e3dff8u); f_12e3e220();
  /* 12e3dff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3dffb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3dfff je 0x12e3e059 */
  if (C.zf) goto L_12e3e059;
  /* 12e3e001 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e003 mov eax, dword ptr [0x12e5e6c0] */
  EAX = (r32((uint32_t)(0x12e5e6c0)));
  /* 12e3e008 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e009 call 0x12e338b0 */
  push32(0x12e3e00eu); f_12e338b0();
  /* 12e3e00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e011 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e013 mov ecx, dword ptr [0x12e5e6c4] */
  ECX = (r32((uint32_t)(0x12e5e6c4)));
  /* 12e3e019 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e01a call 0x12e338b0 */
  push32(0x12e3e01fu); f_12e338b0();
  /* 12e3e01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e022 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e024 mov edx, dword ptr [0x12e5e6c8] */
  EDX = (r32((uint32_t)(0x12e5e6c8)));
  /* 12e3e02a push edx */
  push32((uint32_t)(EDX));
  /* 12e3e02b call 0x12e338b0 */
  push32(0x12e3e030u); f_12e338b0();
  /* 12e3e030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e033 mov dword ptr [0x12e5e6c0], 0 */
  w32((uint32_t)(0x12e5e6c0), (0x0u));
  /* 12e3e03d mov dword ptr [0x12e5e6c4], 0 */
  w32((uint32_t)(0x12e5e6c4), (0x0u));
  /* 12e3e047 mov dword ptr [0x12e5e6c8], 0 */
  w32((uint32_t)(0x12e5e6c8), (0x0u));
  /* 12e3e051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e054 jmp 0x12e3e212 */
  goto L_12e3e212;
L_12e3e059:;
  /* 12e3e059 mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e05e cmp dword ptr [eax], 0x12e5dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12e5dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e064 je 0x12e3e0a0 */
  if (C.zf) goto L_12e3e0a0;
  /* 12e3e066 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e068 mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e06e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3e070 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e071 call 0x12e338b0 */
  push32(0x12e3e076u); f_12e338b0();
  /* 12e3e076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e079 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e07b mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e080 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e3e083 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e084 call 0x12e338b0 */
  push32(0x12e3e089u); f_12e338b0();
  /* 12e3e089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e08c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e08e mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e094 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e3e097 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e098 call 0x12e338b0 */
  push32(0x12e3e09du); f_12e338b0();
  /* 12e3e09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3e0a0:;
  /* 12e3e0a0 mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e0a6 mov edx, dword ptr [0x12e5e6c0] */
  EDX = (r32((uint32_t)(0x12e5e6c0)));
  /* 12e3e0ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e3e0ae mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e0b3 mov ecx, dword ptr [0x12e5e6c4] */
  ECX = (r32((uint32_t)(0x12e5e6c4)));
  /* 12e3e0b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e3e0bc mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e0c2 mov eax, dword ptr [0x12e5e6c8] */
  EAX = (r32((uint32_t)(0x12e5e6c8)));
  /* 12e3e0c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e3e0ca mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e0d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3e0d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3e0d4 mov byte ptr [0x12e5cea8], al */
  w8((uint32_t)(0x12e5cea8), (AL));
  /* 12e3e0d9 mov dword ptr [0x12e5ceac], 1 */
  w32((uint32_t)(0x12e5ceac), (0x1u));
  /* 12e3e0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e0e5 jmp 0x12e3e212 */
  goto L_12e3e212;
L_12e3e0ea:;
  /* 12e3e0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e0ec mov ecx, dword ptr [0x12e5e6c0] */
  ECX = (r32((uint32_t)(0x12e5e6c0)));
  /* 12e3e0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e0f3 call 0x12e338b0 */
  push32(0x12e3e0f8u); f_12e338b0();
  /* 12e3e0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e0fd mov edx, dword ptr [0x12e5e6c4] */
  EDX = (r32((uint32_t)(0x12e5e6c4)));
  /* 12e3e103 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e104 call 0x12e338b0 */
  push32(0x12e3e109u); f_12e338b0();
  /* 12e3e109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e10c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e10e mov eax, dword ptr [0x12e5e6c8] */
  EAX = (r32((uint32_t)(0x12e5e6c8)));
  /* 12e3e113 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e114 call 0x12e338b0 */
  push32(0x12e3e119u); f_12e338b0();
  /* 12e3e119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e11c mov dword ptr [0x12e5e6c0], 0 */
  w32((uint32_t)(0x12e5e6c0), (0x0u));
  /* 12e3e126 mov dword ptr [0x12e5e6c4], 0 */
  w32((uint32_t)(0x12e5e6c4), (0x0u));
  /* 12e3e130 mov dword ptr [0x12e5e6c8], 0 */
  w32((uint32_t)(0x12e5e6c8), (0x0u));
  /* 12e3e13a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12e3e13f push 0x12e5a01c */
  push32((uint32_t)(0x12e5a01cu));
  /* 12e3e144 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e146 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e148 call 0x12e32e20 */
  push32(0x12e3e14du); f_12e32e20();
  /* 12e3e14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e150 mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e156 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e3e158 mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e15e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e161 jne 0x12e3e16b */
  if (!C.zf) goto L_12e3e16b;
  /* 12e3e163 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e166 jmp 0x12e3e212 */
  goto L_12e3e212;
L_12e3e16b:;
  /* 12e3e16b push 0x12e59fec */
  push32((uint32_t)(0x12e59fecu));
  /* 12e3e170 mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e175 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3e177 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e178 call 0x12e35dd0 */
  push32(0x12e3e17du); f_12e35dd0();
  /* 12e3e17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e180 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12e3e185 push 0x12e5a01c */
  push32((uint32_t)(0x12e5a01cu));
  /* 12e3e18a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e18c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e18e call 0x12e32e20 */
  push32(0x12e3e193u); f_12e32e20();
  /* 12e3e193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e196 mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e19c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e3e19f mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e1a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e1a8 jne 0x12e3e1af */
  if (!C.zf) goto L_12e3e1af;
  /* 12e3e1aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e1ad jmp 0x12e3e212 */
  goto L_12e3e212;
L_12e3e1af:;
  /* 12e3e1af mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e1b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3e1b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e3e1bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12e3e1c0 push 0x12e5a01c */
  push32((uint32_t)(0x12e5a01cu));
  /* 12e3e1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e1c9 call 0x12e32e20 */
  push32(0x12e3e1ceu); f_12e32e20();
  /* 12e3e1ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e1d1 mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e1d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12e3e1da mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e1e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e1e4 jne 0x12e3e1eb */
  if (!C.zf) goto L_12e3e1eb;
  /* 12e3e1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e1e9 jmp 0x12e3e212 */
  goto L_12e3e212;
L_12e3e1eb:;
  /* 12e3e1eb mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e1f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3e1f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e3e1f6 mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e1fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e3e1fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e3e200 mov byte ptr [0x12e5cea8], cl */
  w8((uint32_t)(0x12e5cea8), (CL));
  /* 12e3e206 mov dword ptr [0x12e5ceac], 1 */
  w32((uint32_t)(0x12e5ceac), (0x1u));
  /* 12e3e210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3e212:;
  /* 12e3e212 mov esp, ebp */
  ESP = (EBP);
  /* 12e3e214 pop ebp */
  EBP = (pop32());
  /* 12e3e215 ret  */
  ESPCHK(0x12e3df70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12e3e220 (125 bytes, 49 insns) */
void f_12e3e220(void) {
  FTRACE(0x12e3e220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3e220 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3e221 mov ebp, esp */
  EBP = (ESP);
  /* 12e3e223 push ecx */
  push32((uint32_t)(ECX));
L_12e3e224:;
  /* 12e3e224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3e22a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3e22c je 0x12e3e299 */
  if (C.zf) goto L_12e3e299;
  /* 12e3e22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e231 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3e234 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e237 jl 0x12e3e25d */
  if ((C.sf!=C.of)) goto L_12e3e25d;
  /* 12e3e239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e23c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3e23f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e242 jg 0x12e3e25d */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3e25d;
  /* 12e3e244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3e24a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3e24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e250 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e3e252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e3e25b jmp 0x12e3e297 */
  goto L_12e3e297;
L_12e3e25d:;
  /* 12e3e25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3e263 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e266 jne 0x12e3e28e */
  if (!C.zf) goto L_12e3e28e;
  /* 12e3e268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e26b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3e26e:;
  /* 12e3e26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e274 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e3e277 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e3e279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e27c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e27f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3e282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3e288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e28a jne 0x12e3e26e */
  if (!C.zf) goto L_12e3e26e;
  /* 12e3e28c jmp 0x12e3e297 */
  goto L_12e3e297;
L_12e3e28e:;
  /* 12e3e28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e3e297:;
  /* 12e3e297 jmp 0x12e3e224 */
  goto L_12e3e224;
L_12e3e299:;
  /* 12e3e299 mov esp, ebp */
  ESP = (EBP);
  /* 12e3e29b pop ebp */
  EBP = (pop32());
  /* 12e3e29c ret  */
  ESPCHK(0x12e3e220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x12e3e2a0 (304 bytes, 85 insns) */
void f_12e3e2a0(void) {
  FTRACE(0x12e3e2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3e2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3e2a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3e2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e2a4 cmp dword ptr [0x12e5e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e2ab je 0x12e3e36c */
  if (C.zf) goto L_12e3e36c;
  /* 12e3e2b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12e3e2b3 push 0x12e5a028 */
  push32((uint32_t)(0x12e5a028u));
  /* 12e3e2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e2ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e3e2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e2be call 0x12e33230 */
  push32(0x12e3e2c3u); f_12e33230();
  /* 12e3e2c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e2c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3e2c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e2cd jne 0x12e3e2d9 */
  if (!C.zf) goto L_12e3e2d9;
  /* 12e3e2cf mov eax, 1 */
  EAX = (0x1u);
  /* 12e3e2d4 jmp 0x12e3e3cc */
  goto L_12e3e3cc;
L_12e3e2d9:;
  /* 12e3e2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e2dc push eax */
  push32((uint32_t)(EAX));
  /* 12e3e2dd call 0x12e3e3d0 */
  push32(0x12e3e2e2u); f_12e3e3d0();
  /* 12e3e2e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e2e7 je 0x12e3e30d */
  if (C.zf) goto L_12e3e30d;
  /* 12e3e2e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e2ec push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e2ed call 0x12e3e660 */
  push32(0x12e3e2f2u); f_12e3e660();
  /* 12e3e2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e2fa push edx */
  push32((uint32_t)(EDX));
  /* 12e3e2fb call 0x12e338b0 */
  push32(0x12e3e300u); f_12e338b0();
  /* 12e3e300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e303 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3e308 jmp 0x12e3e3cc */
  goto L_12e3e3cc;
L_12e3e30d:;
  /* 12e3e30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e310 mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3e318 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e3e31a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e31d mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e323 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e3e326 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e3e329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e32c mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e332 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e3e335 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12e3e338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e33b mov dword ptr [0x12e5dd88], eax */
  w32((uint32_t)(0x12e5dd88), (EAX));
  /* 12e3e340 mov ecx, dword ptr [0x12e5e6cc] */
  ECX = (r32((uint32_t)(0x12e5e6cc)));
  /* 12e3e346 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e347 call 0x12e3e660 */
  push32(0x12e3e34cu); f_12e3e660();
  /* 12e3e34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e34f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e351 mov edx, dword ptr [0x12e5e6cc] */
  EDX = (r32((uint32_t)(0x12e5e6cc)));
  /* 12e3e357 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e358 call 0x12e338b0 */
  push32(0x12e3e35du); f_12e338b0();
  /* 12e3e35d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e363 mov dword ptr [0x12e5e6cc], eax */
  w32((uint32_t)(0x12e5e6cc), (EAX));
  /* 12e3e368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e36a jmp 0x12e3e3cc */
  goto L_12e3e3cc;
L_12e3e36c:;
  /* 12e3e36c mov ecx, dword ptr [0x12e5dd88] */
  ECX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3e374 mov dword ptr [0x12e5dd58], edx */
  w32((uint32_t)(0x12e5dd58), (EDX));
  /* 12e3e37a mov eax, dword ptr [0x12e5dd88] */
  EAX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e37f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e3e382 mov dword ptr [0x12e5dd5c], ecx */
  w32((uint32_t)(0x12e5dd5c), (ECX));
  /* 12e3e388 mov edx, dword ptr [0x12e5dd88] */
  EDX = (r32((uint32_t)(0x12e5dd88)));
  /* 12e3e38e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e3e391 mov dword ptr [0x12e5dd60], eax */
  w32((uint32_t)(0x12e5dd60), (EAX));
  /* 12e3e396 mov dword ptr [0x12e5dd88], 0x12e5dd58 */
  w32((uint32_t)(0x12e5dd88), (0x12e5dd58u));
  /* 12e3e3a0 mov ecx, dword ptr [0x12e5e6cc] */
  ECX = (r32((uint32_t)(0x12e5e6cc)));
  /* 12e3e3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e3a7 call 0x12e3e660 */
  push32(0x12e3e3acu); f_12e3e660();
  /* 12e3e3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e3af push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e3b1 mov edx, dword ptr [0x12e5e6cc] */
  EDX = (r32((uint32_t)(0x12e5e6cc)));
  /* 12e3e3b7 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e3b8 call 0x12e338b0 */
  push32(0x12e3e3bdu); f_12e338b0();
  /* 12e3e3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e3c0 mov dword ptr [0x12e5e6cc], 0 */
  w32((uint32_t)(0x12e5e6cc), (0x0u));
  /* 12e3e3ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3e3cc:;
  /* 12e3e3cc mov esp, ebp */
  ESP = (EBP);
  /* 12e3e3ce pop ebp */
  EBP = (pop32());
  /* 12e3e3cf ret  */
  ESPCHK(0x12e3e2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x12e3e3d0 (525 bytes, 200 insns) */
void f_12e3e3d0(void) {
  FTRACE(0x12e3e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3e3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3e3d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3e3dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e3df mov ax, word ptr [0x12e5e6ec] */
  AX = (r16((uint32_t)(0x12e5e6ec)));
  /* 12e3e3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3e3e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e3ec jne 0x12e3e3f6 */
  if (!C.zf) goto L_12e3e3f6;
  /* 12e3e3ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e3f1 jmp 0x12e3e5d9 */
  goto L_12e3e5d9;
L_12e3e3f6:;
  /* 12e3e3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e3f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e3fc push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e3fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12e3e3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e402 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e403 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e405 call 0x12e40fe0 */
  push32(0x12e3e40au); f_12e40fe0();
  /* 12e3e40a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e40d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e410 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e412 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e418 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e41b push edx */
  push32((uint32_t)(EDX));
  /* 12e3e41c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12e3e41e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e421 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e422 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e424 call 0x12e40fe0 */
  push32(0x12e3e429u); f_12e40fe0();
  /* 12e3e429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e42c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e42f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e431 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e43a push edx */
  push32((uint32_t)(EDX));
  /* 12e3e43b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e3e43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e440 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e441 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e443 call 0x12e40fe0 */
  push32(0x12e3e448u); f_12e40fe0();
  /* 12e3e448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e44b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e44e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e450 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e456 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e459 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e45a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12e3e45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e45f push eax */
  push32((uint32_t)(EAX));
  /* 12e3e460 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e462 call 0x12e40fe0 */
  push32(0x12e3e467u); f_12e40fe0();
  /* 12e3e467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e46a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e46d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e475 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e478 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e479 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12e3e47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e47e push eax */
  push32((uint32_t)(EAX));
  /* 12e3e47f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e481 call 0x12e40fe0 */
  push32(0x12e3e486u); f_12e40fe0();
  /* 12e3e486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e48c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e48e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e494 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e3e497 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e498 call 0x12e3e5e0 */
  push32(0x12e3e49du); f_12e3e5e0();
  /* 12e3e49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e4a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e4a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12e3e4a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e4ac push edx */
  push32((uint32_t)(EDX));
  /* 12e3e4ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e4af call 0x12e40fe0 */
  push32(0x12e3e4b4u); f_12e40fe0();
  /* 12e3e4b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e4ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e4bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e4c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4c5 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e4c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12e3e4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e4cb push eax */
  push32((uint32_t)(EAX));
  /* 12e3e4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e4ce call 0x12e40fe0 */
  push32(0x12e3e4d3u); f_12e40fe0();
  /* 12e3e4d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e4d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e4db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e4e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4e4 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e4e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12e3e4e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e4ea push eax */
  push32((uint32_t)(EAX));
  /* 12e3e4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e4ed call 0x12e40fe0 */
  push32(0x12e3e4f2u); f_12e40fe0();
  /* 12e3e4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e4f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e4fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e4fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e500 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e503 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e3e506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e509 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e50a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e50c call 0x12e40fe0 */
  push32(0x12e3e511u); f_12e40fe0();
  /* 12e3e511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e514 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e517 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e519 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e51f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e522 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e523 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12e3e525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e528 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e529 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e52b call 0x12e40fe0 */
  push32(0x12e3e530u); f_12e40fe0();
  /* 12e3e530 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e536 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e53b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e53e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e541 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e542 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12e3e544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e547 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e548 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e54a call 0x12e40fe0 */
  push32(0x12e3e54fu); f_12e40fe0();
  /* 12e3e54f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e555 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e557 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e55a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e55d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e560 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e561 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12e3e563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e566 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e567 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e569 call 0x12e40fe0 */
  push32(0x12e3e56eu); f_12e40fe0();
  /* 12e3e56e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e574 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e576 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e57c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e57f push edx */
  push32((uint32_t)(EDX));
  /* 12e3e580 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12e3e582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e585 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e588 call 0x12e40fe0 */
  push32(0x12e3e58du); f_12e40fe0();
  /* 12e3e58d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e593 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e59b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e59e push edx */
  push32((uint32_t)(EDX));
  /* 12e3e59f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12e3e5a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e5a4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e5a7 call 0x12e40fe0 */
  push32(0x12e3e5acu); f_12e40fe0();
  /* 12e3e5ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e5af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e5b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e5b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e5ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e5bd push edx */
  push32((uint32_t)(EDX));
  /* 12e3e5be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12e3e5c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e5c3 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e5c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e5c6 call 0x12e40fe0 */
  push32(0x12e3e5cbu); f_12e40fe0();
  /* 12e3e5cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e5ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3e5d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e5d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e3e5d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e3e5d9:;
  /* 12e3e5d9 mov esp, ebp */
  ESP = (EBP);
  /* 12e3e5db pop ebp */
  EBP = (pop32());
  /* 12e3e5dc ret  */
  ESPCHK(0x12e3e3d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12e3e5e0 (125 bytes, 49 insns) */
void f_12e3e5e0(void) {
  FTRACE(0x12e3e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3e5e3 push ecx */
  push32((uint32_t)(ECX));
L_12e3e5e4:;
  /* 12e3e5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e5e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3e5ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3e5ec je 0x12e3e659 */
  if (C.zf) goto L_12e3e659;
  /* 12e3e5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e5f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3e5f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e5f7 jl 0x12e3e61d */
  if ((C.sf!=C.of)) goto L_12e3e61d;
  /* 12e3e5f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e5fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3e5ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e602 jg 0x12e3e61d */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3e61d;
  /* 12e3e604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3e60a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3e60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e610 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e3e612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e618 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e3e61b jmp 0x12e3e657 */
  goto L_12e3e657;
L_12e3e61d:;
  /* 12e3e61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e620 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3e623 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e626 jne 0x12e3e64e */
  if (!C.zf) goto L_12e3e64e;
  /* 12e3e628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e62b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3e62e:;
  /* 12e3e62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e634 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e3e637 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e3e639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e63c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e63f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e3e642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3e645 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3e648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e64a jne 0x12e3e62e */
  if (!C.zf) goto L_12e3e62e;
  /* 12e3e64c jmp 0x12e3e657 */
  goto L_12e3e657;
L_12e3e64e:;
  /* 12e3e64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e654 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e3e657:;
  /* 12e3e657 jmp 0x12e3e5e4 */
  goto L_12e3e5e4;
L_12e3e659:;
  /* 12e3e659 mov esp, ebp */
  ESP = (EBP);
  /* 12e3e65b pop ebp */
  EBP = (pop32());
  /* 12e3e65c ret  */
  ESPCHK(0x12e3e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x12e3e660 (147 bytes, 52 insns) */
void f_12e3e660(void) {
  FTRACE(0x12e3e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3e660 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3e661 mov ebp, esp */
  EBP = (ESP);
  /* 12e3e663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e667 jne 0x12e3e66e */
  if (!C.zf) goto L_12e3e66e;
  /* 12e3e669 jmp 0x12e3e6f1 */
  goto L_12e3e6f1;
L_12e3e66e:;
  /* 12e3e66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e671 cmp dword ptr [eax + 0xc], 0x12e5e728 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12e5e728u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e678 je 0x12e3e6f1 */
  if (C.zf) goto L_12e3e6f1;
  /* 12e3e67a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e67f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3e682 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e683 call 0x12e338b0 */
  push32(0x12e3e688u); f_12e338b0();
  /* 12e3e688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e68b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e68d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e690 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e3e693 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e694 call 0x12e338b0 */
  push32(0x12e3e699u); f_12e338b0();
  /* 12e3e699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e69c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e6a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e3e6a4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e6a5 call 0x12e338b0 */
  push32(0x12e3e6aau); f_12e338b0();
  /* 12e3e6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e6af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e6b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e3e6b5 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e6b6 call 0x12e338b0 */
  push32(0x12e3e6bbu); f_12e338b0();
  /* 12e3e6bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e6be push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e6c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e3e6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e6c7 call 0x12e338b0 */
  push32(0x12e3e6ccu); f_12e338b0();
  /* 12e3e6cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e6d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12e3e6d7 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e6d8 call 0x12e338b0 */
  push32(0x12e3e6ddu); f_12e338b0();
  /* 12e3e6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e6e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e6e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3e6e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12e3e6e8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3e6e9 call 0x12e338b0 */
  push32(0x12e3e6eeu); f_12e338b0();
  /* 12e3e6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3e6f1:;
  /* 12e3e6f1 pop ebp */
  EBP = (pop32());
  /* 12e3e6f2 ret  */
  ESPCHK(0x12e3e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x12e3e700 (928 bytes, 284 insns) */
void f_12e3e700(void) {
  FTRACE(0x12e3e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3e700 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3e701 mov ebp, esp */
  EBP = (ESP);
  /* 12e3e703 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3e706 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12e3e70d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12e3e714 cmp dword ptr [0x12e5e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e71b je 0x12e3ea51 */
  if (C.zf) goto L_12e3ea51;
  /* 12e3e721 cmp dword ptr [0x12e5e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e728 jne 0x12e3e750 */
  if (!C.zf) goto L_12e3e750;
  /* 12e3e72a push 0x12e5e6a0 */
  push32((uint32_t)(0x12e5e6a0u));
  /* 12e3e72f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12e3e734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e736 mov ax, word ptr [0x12e5e6e4] */
  AX = (r16((uint32_t)(0x12e5e6e4)));
  /* 12e3e73c push eax */
  push32((uint32_t)(EAX));
  /* 12e3e73d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e73f call 0x12e40fe0 */
  push32(0x12e3e744u); f_12e40fe0();
  /* 12e3e744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e749 je 0x12e3e750 */
  if (C.zf) goto L_12e3e750;
  /* 12e3e74b jmp 0x12e3ea12 */
  goto L_12e3ea12;
L_12e3e750:;
  /* 12e3e750 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12e3e752 push 0x12e5a034 */
  push32((uint32_t)(0x12e5a034u));
  /* 12e3e757 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e759 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12e3e75e call 0x12e32e20 */
  push32(0x12e3e763u); f_12e32e20();
  /* 12e3e763 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e766 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e3e769 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12e3e76b push 0x12e5a034 */
  push32((uint32_t)(0x12e5a034u));
  /* 12e3e770 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e772 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12e3e777 call 0x12e32e20 */
  push32(0x12e3e77cu); f_12e32e20();
  /* 12e3e77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e77f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e3e782 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12e3e784 push 0x12e5a034 */
  push32((uint32_t)(0x12e5a034u));
  /* 12e3e789 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e78b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12e3e790 call 0x12e32e20 */
  push32(0x12e3e795u); f_12e32e20();
  /* 12e3e795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e798 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12e3e79b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12e3e79d push 0x12e5a034 */
  push32((uint32_t)(0x12e5a034u));
  /* 12e3e7a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e7a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12e3e7a9 call 0x12e32e20 */
  push32(0x12e3e7aeu); f_12e32e20();
  /* 12e3e7ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e7b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e3e7b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e7b8 je 0x12e3e7cc */
  if (C.zf) goto L_12e3e7cc;
  /* 12e3e7ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e7be je 0x12e3e7cc */
  if (C.zf) goto L_12e3e7cc;
  /* 12e3e7c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e7c4 je 0x12e3e7cc */
  if (C.zf) goto L_12e3e7cc;
  /* 12e3e7c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e7ca jne 0x12e3e7d1 */
  if (!C.zf) goto L_12e3e7d1;
L_12e3e7cc:;
  /* 12e3e7cc jmp 0x12e3ea12 */
  goto L_12e3ea12;
L_12e3e7d1:;
  /* 12e3e7d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3e7d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e3e7d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e3e7de jmp 0x12e3e7e9 */
  goto L_12e3e7e9;
L_12e3e7e0:;
  /* 12e3e7e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3e7e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e7e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12e3e7e9:;
  /* 12e3e7e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e7f0 jge 0x12e3e805 */
  if ((C.sf==C.of)) goto L_12e3e805;
  /* 12e3e7f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e7f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12e3e7f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e3e7fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e7fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e800 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e3e803 jmp 0x12e3e7e0 */
  goto L_12e3e7e0;
L_12e3e805:;
  /* 12e3e805 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12e3e808 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e809 mov ecx, dword ptr [0x12e5e6a0] */
  ECX = (r32((uint32_t)(0x12e5e6a0)));
  /* 12e3e80f push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e810 call dword ptr [0x12e6033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6033c))), 0x12e3e816u);
  /* 12e3e816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e818 jne 0x12e3e81f */
  if (!C.zf) goto L_12e3e81f;
  /* 12e3e81a jmp 0x12e3ea12 */
  goto L_12e3ea12;
L_12e3e81f:;
  /* 12e3e81f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e823 jbe 0x12e3e82a */
  if ((C.cf||C.zf)) goto L_12e3e82a;
  /* 12e3e825 jmp 0x12e3ea12 */
  goto L_12e3ea12;
L_12e3e82a:;
  /* 12e3e82a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3e82d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3e833 mov dword ptr [0x12e5cea4], edx */
  w32((uint32_t)(0x12e5cea4), (EDX));
  /* 12e3e839 cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e840 jle 0x12e3e899 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3e899;
  /* 12e3e842 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12e3e845 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e3e848 jmp 0x12e3e853 */
  goto L_12e3e853;
L_12e3e84a:;
  /* 12e3e84a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e84d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e850 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12e3e853:;
  /* 12e3e853 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e858 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3e85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e85c je 0x12e3e899 */
  if (C.zf) goto L_12e3e899;
  /* 12e3e85e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e861 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3e863 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e3e866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3e868 je 0x12e3e899 */
  if (C.zf) goto L_12e3e899;
  /* 12e3e86a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e3e871 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e3e874 jmp 0x12e3e87f */
  goto L_12e3e87f;
L_12e3e876:;
  /* 12e3e876 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3e879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e87c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12e3e87f:;
  /* 12e3e87f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e884 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e3e887 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e88a jg 0x12e3e897 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3e897;
  /* 12e3e88c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3e88f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e892 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e3e895 jmp 0x12e3e876 */
  goto L_12e3e876;
L_12e3e897:;
  /* 12e3e897 jmp 0x12e3e84a */
  goto L_12e3e84a;
L_12e3e899:;
  /* 12e3e899 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e89b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e89d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e89f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3e8a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e8a5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e8a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e3e8ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3e8ae push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e8af push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e8b1 call 0x12e3b050 */
  push32(0x12e3e8b6u); f_12e3b050();
  /* 12e3e8b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e8bb jne 0x12e3e8c2 */
  if (!C.zf) goto L_12e3e8c2;
  /* 12e3e8bd jmp 0x12e3ea12 */
  goto L_12e3ea12;
L_12e3e8c2:;
  /* 12e3e8c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3e8c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12e3e8ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3e8cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e3e8d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e3e8d7 jmp 0x12e3e8e2 */
  goto L_12e3e8e2;
L_12e3e8d9:;
  /* 12e3e8d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3e8dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e3e8e2:;
  /* 12e3e8e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e8e9 jge 0x12e3e900 */
  if ((C.sf==C.of)) goto L_12e3e900;
  /* 12e3e8eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3e8ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12e3e8f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12e3e8f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e3e8f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e8fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e3e8fe jmp 0x12e3e8d9 */
  goto L_12e3e8d9;
L_12e3e900:;
  /* 12e3e900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e902 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3e904 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3e907 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e90a push edx */
  push32((uint32_t)(EDX));
  /* 12e3e90b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e3e910 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3e913 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e914 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3e916 call 0x12e41280 */
  push32(0x12e3e91bu); f_12e41280();
  /* 12e3e91b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3e920 jne 0x12e3e927 */
  if (!C.zf) goto L_12e3e927;
  /* 12e3e922 jmp 0x12e3ea12 */
  goto L_12e3ea12;
L_12e3e927:;
  /* 12e3e927 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3e92a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12e3e92f cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e936 jle 0x12e3e993 */
  if ((C.zf||C.sf!=C.of)) goto L_12e3e993;
  /* 12e3e938 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12e3e93b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e3e93e jmp 0x12e3e949 */
  goto L_12e3e949;
L_12e3e940:;
  /* 12e3e940 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e943 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e946 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12e3e949:;
  /* 12e3e949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e94c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3e94e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e3e950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3e952 je 0x12e3e993 */
  if (C.zf) goto L_12e3e993;
  /* 12e3e954 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e957 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3e959 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e3e95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3e95e je 0x12e3e993 */
  if (C.zf) goto L_12e3e993;
  /* 12e3e960 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e965 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3e967 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e3e96a jmp 0x12e3e975 */
  goto L_12e3e975;
L_12e3e96c:;
  /* 12e3e96c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3e96f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e972 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12e3e975:;
  /* 12e3e975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3e978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3e97a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e3e97d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e980 jg 0x12e3e991 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3e991;
  /* 12e3e982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e3e985 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3e988 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12e3e98f jmp 0x12e3e96c */
  goto L_12e3e96c;
L_12e3e991:;
  /* 12e3e991 jmp 0x12e3e940 */
  goto L_12e3e940;
L_12e3e993:;
  /* 12e3e993 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3e996 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e999 mov dword ptr [0x12e5cc98], eax */
  w32((uint32_t)(0x12e5cc98), (EAX));
  /* 12e3e99e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3e9a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e9a4 mov dword ptr [0x12e5cc9c], ecx */
  w32((uint32_t)(0x12e5cc9c), (ECX));
  /* 12e3e9aa cmp dword ptr [0x12e5e6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e9b1 je 0x12e3e9c4 */
  if (C.zf) goto L_12e3e9c4;
  /* 12e3e9b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e9b5 mov edx, dword ptr [0x12e5e6d0] */
  EDX = (r32((uint32_t)(0x12e5e6d0)));
  /* 12e3e9bb push edx */
  push32((uint32_t)(EDX));
  /* 12e3e9bc call 0x12e338b0 */
  push32(0x12e3e9c1u); f_12e338b0();
  /* 12e3e9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3e9c4:;
  /* 12e3e9c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3e9c7 mov dword ptr [0x12e5e6d0], eax */
  w32((uint32_t)(0x12e5e6d0), (EAX));
  /* 12e3e9cc cmp dword ptr [0x12e5e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3e9d3 je 0x12e3e9e6 */
  if (C.zf) goto L_12e3e9e6;
  /* 12e3e9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e9d7 mov ecx, dword ptr [0x12e5e6d4] */
  ECX = (r32((uint32_t)(0x12e5e6d4)));
  /* 12e3e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 12e3e9de call 0x12e338b0 */
  push32(0x12e3e9e3u); f_12e338b0();
  /* 12e3e9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3e9e6:;
  /* 12e3e9e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3e9e9 mov dword ptr [0x12e5e6d4], edx */
  w32((uint32_t)(0x12e5e6d4), (EDX));
  /* 12e3e9ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e9f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3e9f4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3e9f5 call 0x12e338b0 */
  push32(0x12e3e9fau); f_12e338b0();
  /* 12e3e9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3e9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3e9ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3ea02 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ea03 call 0x12e338b0 */
  push32(0x12e3ea08u); f_12e338b0();
  /* 12e3ea08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ea0d jmp 0x12e3ea9c */
  goto L_12e3ea9c;
L_12e3ea12:;
  /* 12e3ea12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ea14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e3ea17 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ea18 call 0x12e338b0 */
  push32(0x12e3ea1du); f_12e338b0();
  /* 12e3ea1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ea22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e3ea25 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ea26 call 0x12e338b0 */
  push32(0x12e3ea2bu); f_12e338b0();
  /* 12e3ea2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea2e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ea30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e3ea33 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ea34 call 0x12e338b0 */
  push32(0x12e3ea39u); f_12e338b0();
  /* 12e3ea39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ea3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e3ea41 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ea42 call 0x12e338b0 */
  push32(0x12e3ea47u); f_12e338b0();
  /* 12e3ea47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea4a mov eax, 1 */
  EAX = (0x1u);
  /* 12e3ea4f jmp 0x12e3ea9c */
  goto L_12e3ea9c;
L_12e3ea51:;
  /* 12e3ea51 mov dword ptr [0x12e5cc98], 0x12e5cca2 */
  w32((uint32_t)(0x12e5cc98), (0x12e5cca2u));
  /* 12e3ea5b mov dword ptr [0x12e5cc9c], 0x12e5cca2 */
  w32((uint32_t)(0x12e5cc9c), (0x12e5cca2u));
  /* 12e3ea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ea67 mov eax, dword ptr [0x12e5e6d0] */
  EAX = (r32((uint32_t)(0x12e5e6d0)));
  /* 12e3ea6c push eax */
  push32((uint32_t)(EAX));
  /* 12e3ea6d call 0x12e338b0 */
  push32(0x12e3ea72u); f_12e338b0();
  /* 12e3ea72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3ea77 mov ecx, dword ptr [0x12e5e6d4] */
  ECX = (r32((uint32_t)(0x12e5e6d4)));
  /* 12e3ea7d push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ea7e call 0x12e338b0 */
  push32(0x12e3ea83u); f_12e338b0();
  /* 12e3ea83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ea86 mov dword ptr [0x12e5e6d0], 0 */
  w32((uint32_t)(0x12e5e6d0), (0x0u));
  /* 12e3ea90 mov dword ptr [0x12e5e6d4], 0 */
  w32((uint32_t)(0x12e5e6d4), (0x0u));
  /* 12e3ea9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3ea9c:;
  /* 12e3ea9c mov esp, ebp */
  ESP = (EBP);
  /* 12e3ea9e pop ebp */
  EBP = (pop32());
  /* 12e3ea9f ret  */
  ESPCHK(0x12e3e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x12e3eaa0 (7 bytes, 5 insns) */
void f_12e3eaa0(void) {
  FTRACE(0x12e3eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3eaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3eaa5 pop ebp */
  EBP = (pop32());
  /* 12e3eaa6 ret  */
  ESPCHK(0x12e3eaa0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12e3eab0 (129 bytes, 56 insns) */
void f_12e3eab0(void) {
  FTRACE(0x12e3eab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3eab0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e3eab4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e3eab8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e3eabe jne 0x12e3eafc */
  if (!C.zf) goto L_12e3eafc;
L_12e3eac0:;
  /* 12e3eac0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e3eac2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eac4 jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3eac8 je 0x12e3eaf0 */
  if (C.zf) goto L_12e3eaf0;
  /* 12e3eaca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eacd jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eacf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e3ead1 je 0x12e3eaf0 */
  if (C.zf) goto L_12e3eaf0;
  /* 12e3ead3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e3ead6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3ead9 jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eadb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3eadd je 0x12e3eaf0 */
  if (C.zf) goto L_12e3eaf0;
  /* 12e3eadf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eae2 jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eae4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eae7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eaea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e3eaec jne 0x12e3eac0 */
  if (!C.zf) goto L_12e3eac0;
  /* 12e3eaee mov edi, edi */
  EDI = (EDI);
L_12e3eaf0:;
  /* 12e3eaf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3eaf2 ret  */
  ESPCHK(0x12e3eab0u, _esp0);
  ESP += 4; return;
  /* 12e3eaf3 nop  */
  /* nop */
L_12e3eaf4:;
  /* 12e3eaf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3eaf6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e3eaf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12e3eaf9 ret  */
  ESPCHK(0x12e3eab0u, _esp0);
  ESP += 4; return;
  /* 12e3eafa mov edi, edi */
  EDI = (EDI);
L_12e3eafc:;
  /* 12e3eafc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12e3eb02 je 0x12e3eb18 */
  if (C.zf) goto L_12e3eb18;
  /* 12e3eb04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3eb06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e3eb07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eb09 jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eb0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e3eb0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3eb0e je 0x12e3eaf0 */
  if (C.zf) goto L_12e3eaf0;
  /* 12e3eb10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12e3eb16 je 0x12e3eac0 */
  if (C.zf) goto L_12e3eac0;
L_12e3eb18:;
  /* 12e3eb18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12e3eb1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eb1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eb20 jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eb22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3eb24 je 0x12e3eaf0 */
  if (C.zf) goto L_12e3eaf0;
  /* 12e3eb26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eb29 jne 0x12e3eaf4 */
  if (!C.zf) goto L_12e3eaf4;
  /* 12e3eb2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e3eb2d je 0x12e3eaf0 */
  if (C.zf) goto L_12e3eaf0;
  /* 12e3eb2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eb32 jmp 0x12e3eac0 */
  goto L_12e3eac0;
}

/* FUN_1000eb40 @ 0x12e3eb40 (62 bytes, 35 insns) */
void f_12e3eb40(void) {
  FTRACE(0x12e3eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3eb41 mov ebp, esp */
  EBP = (ESP);
  /* 12e3eb43 push esi */
  push32((uint32_t)(ESI));
  /* 12e3eb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3eb46 push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb47 push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb48 push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb49 push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb4a push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb4b push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb4c push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb4d push eax */
  push32((uint32_t)(EAX));
  /* 12e3eb4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3eb51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3eb54:;
  /* 12e3eb54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3eb56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3eb58 je 0x12e3eb61 */
  if (C.zf) goto L_12e3eb61;
  /* 12e3eb5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e3eb5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12e3eb5b");
  /* 12e3eb5f jmp 0x12e3eb54 */
  goto L_12e3eb54;
L_12e3eb61:;
  /* 12e3eb61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3eb64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3eb67 nop  */
  /* nop */
L_12e3eb68:;
  /* 12e3eb68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e3eb69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3eb6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3eb6d je 0x12e3eb76 */
  if (C.zf) goto L_12e3eb76;
  /* 12e3eb6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e3eb70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12e3eb70");
  /* 12e3eb74 jae 0x12e3eb68 */
  if (!C.cf) goto L_12e3eb68;
L_12e3eb76:;
  /* 12e3eb76 mov eax, ecx */
  EAX = (ECX);
  /* 12e3eb78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eb7b pop esi */
  ESI = (pop32());
  /* 12e3eb7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3eb7d ret  */
  ESPCHK(0x12e3eb40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12e3eb80 (56 bytes, 31 insns) */
void f_12e3eb80(void) {
  FTRACE(0x12e3eb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3eb80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3eb81 mov ebp, esp */
  EBP = (ESP);
  /* 12e3eb83 push edi */
  push32((uint32_t)(EDI));
  /* 12e3eb84 push esi */
  push32((uint32_t)(ESI));
  /* 12e3eb85 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3eb86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3eb89 jecxz 0x12e3ebb1 */
  x86_unimpl("jecxz @ 0x12e3eb89");
  /* 12e3eb8b mov ebx, ecx */
  EBX = (ECX);
  /* 12e3eb8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3eb90 mov esi, edi */
  ESI = (EDI);
  /* 12e3eb92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3eb94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12e3eb96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3eb98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eb9a mov edi, esi */
  EDI = (ESI);
  /* 12e3eb9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3eb9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12e3eba1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12e3eba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3eba6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e3eba9 ja 0x12e3ebaf */
  if ((!C.cf&&!C.zf)) goto L_12e3ebaf;
  /* 12e3ebab je 0x12e3ebb1 */
  if (C.zf) goto L_12e3ebb1;
  /* 12e3ebad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e3ebae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12e3ebaf:;
  /* 12e3ebaf not ecx */
  ECX = (~(ECX));
L_12e3ebb1:;
  /* 12e3ebb1 mov eax, ecx */
  EAX = (ECX);
  /* 12e3ebb3 pop ebx */
  EBX = (pop32());
  /* 12e3ebb4 pop esi */
  ESI = (pop32());
  /* 12e3ebb5 pop edi */
  EDI = (pop32());
  /* 12e3ebb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3ebb7 ret  */
  ESPCHK(0x12e3eb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x12e3ebc0 (58 bytes, 32 insns) */
void f_12e3ebc0(void) {
  FTRACE(0x12e3ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ebc3 push esi */
  push32((uint32_t)(ESI));
  /* 12e3ebc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ebc6 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebc7 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebc8 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebca push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebcb push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebcc push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebcd push eax */
  push32((uint32_t)(EAX));
  /* 12e3ebce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ebd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e3ebd4:;
  /* 12e3ebd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e3ebd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3ebd8 je 0x12e3ebe1 */
  if (C.zf) goto L_12e3ebe1;
  /* 12e3ebda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e3ebdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12e3ebdb");
  /* 12e3ebdf jmp 0x12e3ebd4 */
  goto L_12e3ebd4;
L_12e3ebe1:;
  /* 12e3ebe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12e3ebe4:;
  /* 12e3ebe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e3ebe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e3ebe8 je 0x12e3ebf4 */
  if (C.zf) goto L_12e3ebf4;
  /* 12e3ebea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e3ebeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12e3ebeb");
  /* 12e3ebef jae 0x12e3ebe4 */
  if (!C.cf) goto L_12e3ebe4;
  /* 12e3ebf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12e3ebf4:;
  /* 12e3ebf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ebf7 pop esi */
  ESI = (pop32());
  /* 12e3ebf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e3ebf9 ret  */
  ESPCHK(0x12e3ebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec00 @ 0x12e3ec00 (512 bytes, 147 insns) */
void f_12e3ec00(void) {
  FTRACE(0x12e3ec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ec00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ec01 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ec03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ec06 cmp dword ptr [0x12e5e71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ec0d jne 0x12e3ec32 */
  if (!C.zf) goto L_12e3ec32;
  /* 12e3ec0f call 0x12e3f6d0 */
  push32(0x12e3ec14u); f_12e3f6d0();
  /* 12e3ec14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ec16 je 0x12e3ec22 */
  if (C.zf) goto L_12e3ec22;
  /* 12e3ec18 mov eax, dword ptr [0x12e60264] */
  EAX = (r32((uint32_t)(0x12e60264)));
  /* 12e3ec1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3ec20 jmp 0x12e3ec29 */
  goto L_12e3ec29;
L_12e3ec22:;
  /* 12e3ec22 mov dword ptr [ebp - 8], 0x12e3f720 */
  w32((uint32_t)(EBP + -0x8), (0x12e3f720u));
L_12e3ec29:;
  /* 12e3ec29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3ec2c mov dword ptr [0x12e5e71c], ecx */
  w32((uint32_t)(0x12e5e71c), (ECX));
L_12e3ec32:;
  /* 12e3ec32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ec36 jne 0x12e3ec42 */
  if (!C.zf) goto L_12e3ec42;
  /* 12e3ec38 call 0x12e3f520 */
  push32(0x12e3ec3du); f_12e3f520();
  /* 12e3ec3d jmp 0x12e3ed0e */
  goto L_12e3ed0e;
L_12e3ec42:;
  /* 12e3ec42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ec45 mov dword ptr [0x12e5e70c], edx */
  w32((uint32_t)(0x12e5e70c), (EDX));
  /* 12e3ec4b cmp dword ptr [0x12e5e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ec52 je 0x12e3ec74 */
  if (C.zf) goto L_12e3ec74;
  /* 12e3ec54 mov eax, dword ptr [0x12e5e70c] */
  EAX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3ec59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3ec5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3ec5e je 0x12e3ec74 */
  if (C.zf) goto L_12e3ec74;
  /* 12e3ec60 push 0x12e5e70c */
  push32((uint32_t)(0x12e5e70cu));
  /* 12e3ec65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e3ec67 push 0x12e5da90 */
  push32((uint32_t)(0x12e5da90u));
  /* 12e3ec6c call 0x12e3ee00 */
  push32(0x12e3ec71u); f_12e3ee00();
  /* 12e3ec71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3ec74:;
  /* 12e3ec74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ec77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ec7a mov dword ptr [0x12e5e710], edx */
  w32((uint32_t)(0x12e5e710), (EDX));
  /* 12e3ec80 cmp dword ptr [0x12e5e710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ec87 je 0x12e3eca9 */
  if (C.zf) goto L_12e3eca9;
  /* 12e3ec89 mov eax, dword ptr [0x12e5e710] */
  EAX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3ec8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3ec91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3ec93 je 0x12e3eca9 */
  if (C.zf) goto L_12e3eca9;
  /* 12e3ec95 push 0x12e5e710 */
  push32((uint32_t)(0x12e5e710u));
  /* 12e3ec9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e3ec9c push 0x12e5d9d8 */
  push32((uint32_t)(0x12e5d9d8u));
  /* 12e3eca1 call 0x12e3ee00 */
  push32(0x12e3eca6u); f_12e3ee00();
  /* 12e3eca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3eca9:;
  /* 12e3eca9 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
  /* 12e3ecb3 cmp dword ptr [0x12e5e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ecba je 0x12e3eced */
  if (C.zf) goto L_12e3eced;
  /* 12e3ecbc mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3ecc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3ecc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ecc7 je 0x12e3eced */
  if (C.zf) goto L_12e3eced;
  /* 12e3ecc9 cmp dword ptr [0x12e5e710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ecd0 je 0x12e3ece6 */
  if (C.zf) goto L_12e3ece6;
  /* 12e3ecd2 mov ecx, dword ptr [0x12e5e710] */
  ECX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3ecd8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3ecdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3ecdd je 0x12e3ece6 */
  if (C.zf) goto L_12e3ece6;
  /* 12e3ecdf call 0x12e3ee90 */
  push32(0x12e3ece4u); f_12e3ee90();
  /* 12e3ece4 jmp 0x12e3eceb */
  goto L_12e3eceb;
L_12e3ece6:;
  /* 12e3ece6 call 0x12e3f280 */
  push32(0x12e3ecebu); f_12e3f280();
L_12e3eceb:;
  /* 12e3eceb jmp 0x12e3ed0e */
  goto L_12e3ed0e;
L_12e3eced:;
  /* 12e3eced cmp dword ptr [0x12e5e710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ecf4 je 0x12e3ed09 */
  if (C.zf) goto L_12e3ed09;
  /* 12e3ecf6 mov eax, dword ptr [0x12e5e710] */
  EAX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3ecfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3ecfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3ed00 je 0x12e3ed09 */
  if (C.zf) goto L_12e3ed09;
  /* 12e3ed02 call 0x12e3f420 */
  push32(0x12e3ed07u); f_12e3f420();
  /* 12e3ed07 jmp 0x12e3ed0e */
  goto L_12e3ed0e;
L_12e3ed09:;
  /* 12e3ed09 call 0x12e3f520 */
  push32(0x12e3ed0eu); f_12e3f520();
L_12e3ed0e:;
  /* 12e3ed0e cmp dword ptr [0x12e5e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ed15 jne 0x12e3ed1e */
  if (!C.zf) goto L_12e3ed1e;
  /* 12e3ed17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ed19 jmp 0x12e3edfc */
  goto L_12e3edfc;
L_12e3ed1e:;
  /* 12e3ed1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ed21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ed27 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ed28 call 0x12e3f550 */
  push32(0x12e3ed2du); f_12e3f550();
  /* 12e3ed2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ed30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3ed33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ed37 je 0x12e3ed4c */
  if (C.zf) goto L_12e3ed4c;
  /* 12e3ed39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ed3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ed41 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ed42 call dword ptr [0x12e60268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60268))), 0x12e3ed48u);
  /* 12e3ed48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ed4a jne 0x12e3ed53 */
  if (!C.zf) goto L_12e3ed53;
L_12e3ed4c:;
  /* 12e3ed4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ed4e jmp 0x12e3edfc */
  goto L_12e3edfc;
L_12e3ed53:;
  /* 12e3ed53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3ed55 mov ecx, dword ptr [0x12e5e6fc] */
  ECX = (r32((uint32_t)(0x12e5e6fc)));
  /* 12e3ed5b push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ed5c call dword ptr [0x12e60278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60278))), 0x12e3ed62u);
  /* 12e3ed62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ed64 jne 0x12e3ed6d */
  if (!C.zf) goto L_12e3ed6d;
  /* 12e3ed66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ed68 jmp 0x12e3edfc */
  goto L_12e3edfc;
L_12e3ed6d:;
  /* 12e3ed6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ed71 je 0x12e3ed98 */
  if (C.zf) goto L_12e3ed98;
  /* 12e3ed73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ed76 mov ax, word ptr [0x12e5e6fc] */
  AX = (r16((uint32_t)(0x12e5e6fc)));
  /* 12e3ed7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12e3ed7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ed82 mov dx, word ptr [0x12e5e718] */
  DX = (r16((uint32_t)(0x12e5e718)));
  /* 12e3ed89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12e3ed8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3ed90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12e3ed94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12e3ed98:;
  /* 12e3ed98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ed9c je 0x12e3edf7 */
  if (C.zf) goto L_12e3edf7;
  /* 12e3ed9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e3eda0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3eda3 push edx */
  push32((uint32_t)(EDX));
  /* 12e3eda4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12e3eda9 mov eax, dword ptr [0x12e5e6fc] */
  EAX = (r32((uint32_t)(0x12e5e6fc)));
  /* 12e3edae push eax */
  push32((uint32_t)(EAX));
  /* 12e3edaf call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3edb5u);
  /* 12e3edb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3edb7 jne 0x12e3edbd */
  if (!C.zf) goto L_12e3edbd;
  /* 12e3edb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3edbb jmp 0x12e3edfc */
  goto L_12e3edfc;
L_12e3edbd:;
  /* 12e3edbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12e3edbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3edc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3edc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3edc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12e3edcb mov edx, dword ptr [0x12e5e718] */
  EDX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3edd1 push edx */
  push32((uint32_t)(EDX));
  /* 12e3edd2 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3edd8u);
  /* 12e3edd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3edda jne 0x12e3ede0 */
  if (!C.zf) goto L_12e3ede0;
  /* 12e3eddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3edde jmp 0x12e3edfc */
  goto L_12e3edfc;
L_12e3ede0:;
  /* 12e3ede0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e3ede2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ede5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3edea push eax */
  push32((uint32_t)(EAX));
  /* 12e3edeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3edee push ecx */
  push32((uint32_t)(ECX));
  /* 12e3edef call 0x12e35960 */
  push32(0x12e3edf4u); f_12e35960();
  /* 12e3edf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3edf7:;
  /* 12e3edf7 mov eax, 1 */
  EAX = (0x1u);
L_12e3edfc:;
  /* 12e3edfc mov esp, ebp */
  ESP = (EBP);
  /* 12e3edfe pop ebp */
  EBP = (pop32());
  /* 12e3edff ret  */
  ESPCHK(0x12e3ec00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x12e3ee00 (130 bytes, 47 insns) */
void f_12e3ee00(void) {
  FTRACE(0x12e3ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ee01 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ee03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ee06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e3ee0d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12e3ee14:;
  /* 12e3ee14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ee17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ee1a jg 0x12e3ee7e */
  if ((!C.zf&&C.sf==C.of)) goto L_12e3ee7e;
  /* 12e3ee1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ee20 je 0x12e3ee7e */
  if (C.zf) goto L_12e3ee7e;
  /* 12e3ee22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3ee25 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ee28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e3ee29 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ee2b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e3ee2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3ee30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ee33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ee36 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12e3ee39 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ee3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ee3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3ee3f push edx */
  push32((uint32_t)(EDX));
  /* 12e3ee40 call 0x12e414f0 */
  push32(0x12e3ee45u); f_12e414f0();
  /* 12e3ee45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ee48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3ee4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ee4f jne 0x12e3ee62 */
  if (!C.zf) goto L_12e3ee62;
  /* 12e3ee51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ee54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ee57 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12e3ee5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3ee5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e3ee60 jmp 0x12e3ee7c */
  goto L_12e3ee7c;
L_12e3ee62:;
  /* 12e3ee62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3ee66 jge 0x12e3ee73 */
  if ((C.sf==C.of)) goto L_12e3ee73;
  /* 12e3ee68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ee6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ee6e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12e3ee71 jmp 0x12e3ee7c */
  goto L_12e3ee7c;
L_12e3ee73:;
  /* 12e3ee73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3ee76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ee79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e3ee7c:;
  /* 12e3ee7c jmp 0x12e3ee14 */
  goto L_12e3ee14;
L_12e3ee7e:;
  /* 12e3ee7e mov esp, ebp */
  ESP = (EBP);
  /* 12e3ee80 pop ebp */
  EBP = (pop32());
  /* 12e3ee81 ret  */
  ESPCHK(0x12e3ee00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee90 @ 0x12e3ee90 (186 bytes, 50 insns) */
void f_12e3ee90(void) {
  FTRACE(0x12e3ee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ee90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ee91 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ee93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ee94 mov eax, dword ptr [0x12e5e70c] */
  EAX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3ee99 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ee9a call 0x12e35c50 */
  push32(0x12e3ee9fu); f_12e35c50();
  /* 12e3ee9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3eea4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3eea7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e3eeaa mov dword ptr [0x12e5e708], ecx */
  w32((uint32_t)(0x12e5e708), (ECX));
  /* 12e3eeb0 mov edx, dword ptr [0x12e5e710] */
  EDX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3eeb6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3eeb7 call 0x12e35c50 */
  push32(0x12e3eebcu); f_12e35c50();
  /* 12e3eebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3eec1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3eec4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e3eec7 mov dword ptr [0x12e5e700], ecx */
  w32((uint32_t)(0x12e5e700), (ECX));
  /* 12e3eecd mov dword ptr [0x12e5e6fc], 0 */
  w32((uint32_t)(0x12e5e6fc), (0x0u));
  /* 12e3eed7 cmp dword ptr [0x12e5e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3eede je 0x12e3eee9 */
  if (C.zf) goto L_12e3eee9;
  /* 12e3eee0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e3eee7 jmp 0x12e3eefb */
  goto L_12e3eefb;
L_12e3eee9:;
  /* 12e3eee9 mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3eeef push edx */
  push32((uint32_t)(EDX));
  /* 12e3eef0 call 0x12e3f930 */
  push32(0x12e3eef5u); f_12e3f930();
  /* 12e3eef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3eef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3eefb:;
  /* 12e3eefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3eefe mov dword ptr [0x12e5e704], eax */
  w32((uint32_t)(0x12e5e704), (EAX));
  /* 12e3ef03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3ef05 push 0x12e3ef50 */
  push32((uint32_t)(0x12e3ef50u));
  /* 12e3ef0a call dword ptr [0x12e6026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6026c))), 0x12e3ef10u);
  /* 12e3ef10 mov ecx, dword ptr [0x12e5e714] */
  ECX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3ef16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3ef1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3ef1e je 0x12e3ef3c */
  if (C.zf) goto L_12e3ef3c;
  /* 12e3ef20 mov edx, dword ptr [0x12e5e714] */
  EDX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3ef26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3ef2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3ef2e je 0x12e3ef3c */
  if (C.zf) goto L_12e3ef3c;
  /* 12e3ef30 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3ef35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3ef38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ef3a jne 0x12e3ef46 */
  if (!C.zf) goto L_12e3ef46;
L_12e3ef3c:;
  /* 12e3ef3c mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
L_12e3ef46:;
  /* 12e3ef46 mov esp, ebp */
  ESP = (EBP);
  /* 12e3ef48 pop ebp */
  EBP = (pop32());
  /* 12e3ef49 ret  */
  ESPCHK(0x12e3ee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x12e3ef50 (804 bytes, 220 insns) */
void f_12e3ef50(void) {
  FTRACE(0x12e3ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3ef51 mov ebp, esp */
  EBP = (ESP);
  /* 12e3ef53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ef56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3ef59 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ef5a call 0x12e3f8b0 */
  push32(0x12e3ef5fu); f_12e3f8b0();
  /* 12e3ef5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ef62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e3ef65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e3ef67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3ef6a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3ef6b mov edx, dword ptr [0x12e5e700] */
  EDX = (r32((uint32_t)(0x12e5e700)));
  /* 12e3ef71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3ef73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3ef75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3ef7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3ef81 push edx */
  push32((uint32_t)(EDX));
  /* 12e3ef82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3ef85 push eax */
  push32((uint32_t)(EAX));
  /* 12e3ef86 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3ef8cu);
  /* 12e3ef8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3ef8e jne 0x12e3efa4 */
  if (!C.zf) goto L_12e3efa4;
  /* 12e3ef90 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
  /* 12e3ef9a mov eax, 1 */
  EAX = (0x1u);
  /* 12e3ef9f jmp 0x12e3f26e */
  goto L_12e3f26e;
L_12e3efa4:;
  /* 12e3efa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3efa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3efa8 mov edx, dword ptr [0x12e5e710] */
  EDX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3efae push edx */
  push32((uint32_t)(EDX));
  /* 12e3efaf call 0x12e414f0 */
  push32(0x12e3efb4u); f_12e414f0();
  /* 12e3efb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3efb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3efb9 jne 0x12e3f0df */
  if (!C.zf) goto L_12e3f0df;
  /* 12e3efbf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e3efc1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e3efc4 push eax */
  push32((uint32_t)(EAX));
  /* 12e3efc5 mov ecx, dword ptr [0x12e5e708] */
  ECX = (r32((uint32_t)(0x12e5e708)));
  /* 12e3efcb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3efcd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3efcf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3efd5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3efdb push ecx */
  push32((uint32_t)(ECX));
  /* 12e3efdc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3efdf push edx */
  push32((uint32_t)(EDX));
  /* 12e3efe0 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3efe6u);
  /* 12e3efe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3efe8 jne 0x12e3effe */
  if (!C.zf) goto L_12e3effe;
  /* 12e3efea mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
  /* 12e3eff4 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3eff9 jmp 0x12e3f26e */
  goto L_12e3f26e;
L_12e3effe:;
  /* 12e3effe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e3f001 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f002 mov ecx, dword ptr [0x12e5e70c] */
  ECX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f008 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f009 call 0x12e414f0 */
  push32(0x12e3f00eu); f_12e414f0();
  /* 12e3f00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f013 jne 0x12e3f040 */
  if (!C.zf) goto L_12e3f040;
  /* 12e3f015 mov edx, dword ptr [0x12e5e714] */
  EDX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f01b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f021 mov dword ptr [0x12e5e714], edx */
  w32((uint32_t)(0x12e5e714), (EDX));
  /* 12e3f027 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f02a mov dword ptr [0x12e5e718], eax */
  w32((uint32_t)(0x12e5e718), (EAX));
  /* 12e3f02f mov ecx, dword ptr [0x12e5e718] */
  ECX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f035 mov dword ptr [0x12e5e6fc], ecx */
  w32((uint32_t)(0x12e5e6fc), (ECX));
  /* 12e3f03b jmp 0x12e3f0df */
  goto L_12e3f0df;
L_12e3f040:;
  /* 12e3f040 mov edx, dword ptr [0x12e5e714] */
  EDX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f046 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3f04b jne 0x12e3f0df */
  if (!C.zf) goto L_12e3f0df;
  /* 12e3f051 cmp dword ptr [0x12e5e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f058 je 0x12e3f0ad */
  if (C.zf) goto L_12e3f0ad;
  /* 12e3f05a mov eax, dword ptr [0x12e5e704] */
  EAX = (r32((uint32_t)(0x12e5e704)));
  /* 12e3f05f push eax */
  push32((uint32_t)(EAX));
  /* 12e3f060 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3f063 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f064 mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f06a push edx */
  push32((uint32_t)(EDX));
  /* 12e3f06b call 0x12e415c0 */
  push32(0x12e3f070u); f_12e415c0();
  /* 12e3f070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f075 jne 0x12e3f0ad */
  if (!C.zf) goto L_12e3f0ad;
  /* 12e3f077 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f07c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12e3f07e mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
  /* 12e3f083 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f086 mov dword ptr [0x12e5e718], ecx */
  w32((uint32_t)(0x12e5e718), (ECX));
  /* 12e3f08c mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f092 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f093 call 0x12e35c50 */
  push32(0x12e3f098u); f_12e35c50();
  /* 12e3f098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f09b cmp eax, dword ptr [0x12e5e704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5e704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f0a1 jne 0x12e3f0ab */
  if (!C.zf) goto L_12e3f0ab;
  /* 12e3f0a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f0a6 mov dword ptr [0x12e5e6fc], eax */
  w32((uint32_t)(0x12e5e6fc), (EAX));
L_12e3f0ab:;
  /* 12e3f0ab jmp 0x12e3f0df */
  goto L_12e3f0df;
L_12e3f0ad:;
  /* 12e3f0ad mov ecx, dword ptr [0x12e5e714] */
  ECX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f0b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f0b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3f0b8 jne 0x12e3f0df */
  if (!C.zf) goto L_12e3f0df;
  /* 12e3f0ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f0bd push edx */
  push32((uint32_t)(EDX));
  /* 12e3f0be call 0x12e3f5f0 */
  push32(0x12e3f0c3u); f_12e3f5f0();
  /* 12e3f0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f0c8 je 0x12e3f0df */
  if (C.zf) goto L_12e3f0df;
  /* 12e3f0ca mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f0cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12e3f0d1 mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
  /* 12e3f0d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f0d9 mov dword ptr [0x12e5e718], ecx */
  w32((uint32_t)(0x12e5e718), (ECX));
L_12e3f0df:;
  /* 12e3f0df mov edx, dword ptr [0x12e5e714] */
  EDX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f0e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f0eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f0f1 je 0x12e3f261 */
  if (C.zf) goto L_12e3f261;
  /* 12e3f0f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e3f0f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e3f0fc push eax */
  push32((uint32_t)(EAX));
  /* 12e3f0fd mov ecx, dword ptr [0x12e5e708] */
  ECX = (r32((uint32_t)(0x12e5e708)));
  /* 12e3f103 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3f105 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f107 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f10d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f113 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f114 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f117 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f118 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3f11eu);
  /* 12e3f11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f120 jne 0x12e3f136 */
  if (!C.zf) goto L_12e3f136;
  /* 12e3f122 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
  /* 12e3f12c mov eax, 1 */
  EAX = (0x1u);
  /* 12e3f131 jmp 0x12e3f26e */
  goto L_12e3f26e;
L_12e3f136:;
  /* 12e3f136 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e3f139 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f13a mov ecx, dword ptr [0x12e5e70c] */
  ECX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f140 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f141 call 0x12e414f0 */
  push32(0x12e3f146u); f_12e414f0();
  /* 12e3f146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f14b jne 0x12e3f200 */
  if (!C.zf) goto L_12e3f200;
  /* 12e3f151 mov edx, dword ptr [0x12e5e714] */
  EDX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f157 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12e3f15a mov dword ptr [0x12e5e714], edx */
  w32((uint32_t)(0x12e5e714), (EDX));
  /* 12e3f160 cmp dword ptr [0x12e5e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f167 je 0x12e3f18a */
  if (C.zf) goto L_12e3f18a;
  /* 12e3f169 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f16e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e3f171 mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
  /* 12e3f176 cmp dword ptr [0x12e5e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f17d jne 0x12e3f188 */
  if (!C.zf) goto L_12e3f188;
  /* 12e3f17f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f182 mov dword ptr [0x12e5e6fc], ecx */
  w32((uint32_t)(0x12e5e6fc), (ECX));
L_12e3f188:;
  /* 12e3f188 jmp 0x12e3f1fe */
  goto L_12e3f1fe;
L_12e3f18a:;
  /* 12e3f18a cmp dword ptr [0x12e5e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f191 je 0x12e3f1df */
  if (C.zf) goto L_12e3f1df;
  /* 12e3f193 mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f199 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f19a call 0x12e35c50 */
  push32(0x12e3f19fu); f_12e35c50();
  /* 12e3f19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f1a2 cmp eax, dword ptr [0x12e5e704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5e704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f1a8 jne 0x12e3f1df */
  if (!C.zf) goto L_12e3f1df;
  /* 12e3f1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3f1ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f1af push eax */
  push32((uint32_t)(EAX));
  /* 12e3f1b0 call 0x12e3f640 */
  push32(0x12e3f1b5u); f_12e3f640();
  /* 12e3f1b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f1ba je 0x12e3f1dd */
  if (C.zf) goto L_12e3f1dd;
  /* 12e3f1bc mov ecx, dword ptr [0x12e5e714] */
  ECX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f1c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12e3f1c5 mov dword ptr [0x12e5e714], ecx */
  w32((uint32_t)(0x12e5e714), (ECX));
  /* 12e3f1cb cmp dword ptr [0x12e5e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f1d2 jne 0x12e3f1dd */
  if (!C.zf) goto L_12e3f1dd;
  /* 12e3f1d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f1d7 mov dword ptr [0x12e5e6fc], edx */
  w32((uint32_t)(0x12e5e6fc), (EDX));
L_12e3f1dd:;
  /* 12e3f1dd jmp 0x12e3f1fe */
  goto L_12e3f1fe;
L_12e3f1df:;
  /* 12e3f1df mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f1e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e3f1e7 mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
  /* 12e3f1ec cmp dword ptr [0x12e5e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f1f3 jne 0x12e3f1fe */
  if (!C.zf) goto L_12e3f1fe;
  /* 12e3f1f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f1f8 mov dword ptr [0x12e5e6fc], ecx */
  w32((uint32_t)(0x12e5e6fc), (ECX));
L_12e3f1fe:;
  /* 12e3f1fe jmp 0x12e3f261 */
  goto L_12e3f261;
L_12e3f200:;
  /* 12e3f200 cmp dword ptr [0x12e5e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f207 jne 0x12e3f261 */
  if (!C.zf) goto L_12e3f261;
  /* 12e3f209 cmp dword ptr [0x12e5e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f210 je 0x12e3f261 */
  if (C.zf) goto L_12e3f261;
  /* 12e3f212 mov edx, dword ptr [0x12e5e704] */
  EDX = (r32((uint32_t)(0x12e5e704)));
  /* 12e3f218 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12e3f21c push eax */
  push32((uint32_t)(EAX));
  /* 12e3f21d mov ecx, dword ptr [0x12e5e70c] */
  ECX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f223 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f224 call 0x12e415c0 */
  push32(0x12e3f229u); f_12e415c0();
  /* 12e3f229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f22e jne 0x12e3f261 */
  if (!C.zf) goto L_12e3f261;
  /* 12e3f230 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3f232 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f235 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f236 call 0x12e3f640 */
  push32(0x12e3f23bu); f_12e3f640();
  /* 12e3f23b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f240 je 0x12e3f261 */
  if (C.zf) goto L_12e3f261;
  /* 12e3f242 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f247 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12e3f24a mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
  /* 12e3f24f cmp dword ptr [0x12e5e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f256 jne 0x12e3f261 */
  if (!C.zf) goto L_12e3f261;
  /* 12e3f258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f25b mov dword ptr [0x12e5e6fc], ecx */
  w32((uint32_t)(0x12e5e6fc), (ECX));
L_12e3f261:;
  /* 12e3f261 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f269 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3f26b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f26d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e3f26e:;
  /* 12e3f26e mov esp, ebp */
  ESP = (EBP);
  /* 12e3f270 pop ebp */
  EBP = (pop32());
  /* 12e3f271 ret 4 */
  ESPCHK(0x12e3ef50u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f280 @ 0x12e3f280 (116 bytes, 33 insns) */
void f_12e3f280(void) {
  FTRACE(0x12e3f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f280 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f281 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f283 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f284 mov eax, dword ptr [0x12e5e70c] */
  EAX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f289 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f28a call 0x12e35c50 */
  push32(0x12e3f28fu); f_12e35c50();
  /* 12e3f28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f294 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f297 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e3f29a mov dword ptr [0x12e5e708], ecx */
  w32((uint32_t)(0x12e5e708), (ECX));
  /* 12e3f2a0 cmp dword ptr [0x12e5e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f2a7 je 0x12e3f2b2 */
  if (C.zf) goto L_12e3f2b2;
  /* 12e3f2a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e3f2b0 jmp 0x12e3f2c4 */
  goto L_12e3f2c4;
L_12e3f2b2:;
  /* 12e3f2b2 mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f2b8 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f2b9 call 0x12e3f930 */
  push32(0x12e3f2beu); f_12e3f930();
  /* 12e3f2be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3f2c4:;
  /* 12e3f2c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3f2c7 mov dword ptr [0x12e5e704], eax */
  w32((uint32_t)(0x12e5e704), (EAX));
  /* 12e3f2cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3f2ce push 0x12e3f300 */
  push32((uint32_t)(0x12e3f300u));
  /* 12e3f2d3 call dword ptr [0x12e6026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6026c))), 0x12e3f2d9u);
  /* 12e3f2d9 mov ecx, dword ptr [0x12e5e714] */
  ECX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f2df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f2e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3f2e4 jne 0x12e3f2f0 */
  if (!C.zf) goto L_12e3f2f0;
  /* 12e3f2e6 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
L_12e3f2f0:;
  /* 12e3f2f0 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f2f2 pop ebp */
  EBP = (pop32());
  /* 12e3f2f3 ret  */
  ESPCHK(0x12e3f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f300 @ 0x12e3f300 (287 bytes, 86 insns) */
void f_12e3f300(void) {
  FTRACE(0x12e3f300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f300 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f301 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f303 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f309 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f30a call 0x12e3f8b0 */
  push32(0x12e3f30fu); f_12e3f8b0();
  /* 12e3f30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f312 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e3f315 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e3f317 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3f31a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f31b mov edx, dword ptr [0x12e5e708] */
  EDX = (r32((uint32_t)(0x12e5e708)));
  /* 12e3f321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3f323 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f325 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f32b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f331 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f332 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f335 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f336 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3f33cu);
  /* 12e3f33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f33e jne 0x12e3f354 */
  if (!C.zf) goto L_12e3f354;
  /* 12e3f340 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
  /* 12e3f34a mov eax, 1 */
  EAX = (0x1u);
  /* 12e3f34f jmp 0x12e3f419 */
  goto L_12e3f419;
L_12e3f354:;
  /* 12e3f354 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3f357 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f358 mov edx, dword ptr [0x12e5e70c] */
  EDX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f35e push edx */
  push32((uint32_t)(EDX));
  /* 12e3f35f call 0x12e414f0 */
  push32(0x12e3f364u); f_12e414f0();
  /* 12e3f364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f369 jne 0x12e3f3a9 */
  if (!C.zf) goto L_12e3f3a9;
  /* 12e3f36b cmp dword ptr [0x12e5e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f372 jne 0x12e3f386 */
  if (!C.zf) goto L_12e3f386;
  /* 12e3f374 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3f376 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f379 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f37a call 0x12e3f640 */
  push32(0x12e3f37fu); f_12e3f640();
  /* 12e3f37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f384 je 0x12e3f3a7 */
  if (C.zf) goto L_12e3f3a7;
L_12e3f386:;
  /* 12e3f386 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f389 mov dword ptr [0x12e5e718], ecx */
  w32((uint32_t)(0x12e5e718), (ECX));
  /* 12e3f38f mov edx, dword ptr [0x12e5e718] */
  EDX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f395 mov dword ptr [0x12e5e6fc], edx */
  w32((uint32_t)(0x12e5e6fc), (EDX));
  /* 12e3f39b mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f3a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e3f3a2 mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
L_12e3f3a7:;
  /* 12e3f3a7 jmp 0x12e3f40c */
  goto L_12e3f40c;
L_12e3f3a9:;
  /* 12e3f3a9 cmp dword ptr [0x12e5e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f3b0 jne 0x12e3f40c */
  if (!C.zf) goto L_12e3f40c;
  /* 12e3f3b2 cmp dword ptr [0x12e5e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f3b9 je 0x12e3f40c */
  if (C.zf) goto L_12e3f40c;
  /* 12e3f3bb mov ecx, dword ptr [0x12e5e704] */
  ECX = (r32((uint32_t)(0x12e5e704)));
  /* 12e3f3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f3c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12e3f3c5 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f3c6 mov eax, dword ptr [0x12e5e70c] */
  EAX = (r32((uint32_t)(0x12e5e70c)));
  /* 12e3f3cb push eax */
  push32((uint32_t)(EAX));
  /* 12e3f3cc call 0x12e415c0 */
  push32(0x12e3f3d1u); f_12e415c0();
  /* 12e3f3d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f3d6 jne 0x12e3f40c */
  if (!C.zf) goto L_12e3f40c;
  /* 12e3f3d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3f3da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f3dd push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f3de call 0x12e3f640 */
  push32(0x12e3f3e3u); f_12e3f640();
  /* 12e3f3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f3e8 je 0x12e3f40c */
  if (C.zf) goto L_12e3f40c;
  /* 12e3f3ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f3ed mov dword ptr [0x12e5e718], edx */
  w32((uint32_t)(0x12e5e718), (EDX));
  /* 12e3f3f3 mov eax, dword ptr [0x12e5e718] */
  EAX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f3f8 mov dword ptr [0x12e5e6fc], eax */
  w32((uint32_t)(0x12e5e6fc), (EAX));
  /* 12e3f3fd mov ecx, dword ptr [0x12e5e714] */
  ECX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f403 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f406 mov dword ptr [0x12e5e714], ecx */
  w32((uint32_t)(0x12e5e714), (ECX));
L_12e3f40c:;
  /* 12e3f40c mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3f416 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f418 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e3f419:;
  /* 12e3f419 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f41b pop ebp */
  EBP = (pop32());
  /* 12e3f41c ret 4 */
  ESPCHK(0x12e3f300u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f420 @ 0x12e3f420 (69 bytes, 20 insns) */
void f_12e3f420(void) {
  FTRACE(0x12e3f420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f420 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f421 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f423 mov eax, dword ptr [0x12e5e710] */
  EAX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3f428 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f429 call 0x12e35c50 */
  push32(0x12e3f42eu); f_12e35c50();
  /* 12e3f42e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f433 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f436 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e3f439 mov dword ptr [0x12e5e700], ecx */
  w32((uint32_t)(0x12e5e700), (ECX));
  /* 12e3f43f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3f441 push 0x12e3f470 */
  push32((uint32_t)(0x12e3f470u));
  /* 12e3f446 call dword ptr [0x12e6026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6026c))), 0x12e3f44cu);
  /* 12e3f44c mov edx, dword ptr [0x12e5e714] */
  EDX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f452 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3f457 jne 0x12e3f463 */
  if (!C.zf) goto L_12e3f463;
  /* 12e3f459 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
L_12e3f463:;
  /* 12e3f463 pop ebp */
  EBP = (pop32());
  /* 12e3f464 ret  */
  ESPCHK(0x12e3f420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x12e3f470 (172 bytes, 54 insns) */
void f_12e3f470(void) {
  FTRACE(0x12e3f470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f470 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f471 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f473 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f479 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f47a call 0x12e3f8b0 */
  push32(0x12e3f47fu); f_12e3f8b0();
  /* 12e3f47f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f482 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e3f485 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e3f487 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3f48a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f48b mov edx, dword ptr [0x12e5e700] */
  EDX = (r32((uint32_t)(0x12e5e700)));
  /* 12e3f491 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3f493 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f495 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f49b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f4a1 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f4a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f4a5 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f4a6 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3f4acu);
  /* 12e3f4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f4ae jne 0x12e3f4c1 */
  if (!C.zf) goto L_12e3f4c1;
  /* 12e3f4b0 mov dword ptr [0x12e5e714], 0 */
  w32((uint32_t)(0x12e5e714), (0x0u));
  /* 12e3f4ba mov eax, 1 */
  EAX = (0x1u);
  /* 12e3f4bf jmp 0x12e3f516 */
  goto L_12e3f516;
L_12e3f4c1:;
  /* 12e3f4c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e3f4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f4c5 mov edx, dword ptr [0x12e5e710] */
  EDX = (r32((uint32_t)(0x12e5e710)));
  /* 12e3f4cb push edx */
  push32((uint32_t)(EDX));
  /* 12e3f4cc call 0x12e414f0 */
  push32(0x12e3f4d1u); f_12e414f0();
  /* 12e3f4d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f4d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f4d6 jne 0x12e3f509 */
  if (!C.zf) goto L_12e3f509;
  /* 12e3f4d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f4db push eax */
  push32((uint32_t)(EAX));
  /* 12e3f4dc call 0x12e3f5f0 */
  push32(0x12e3f4e1u); f_12e3f5f0();
  /* 12e3f4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f4e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f4e6 je 0x12e3f509 */
  if (C.zf) goto L_12e3f509;
  /* 12e3f4e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e3f4eb mov dword ptr [0x12e5e718], ecx */
  w32((uint32_t)(0x12e5e718), (ECX));
  /* 12e3f4f1 mov edx, dword ptr [0x12e5e718] */
  EDX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f4f7 mov dword ptr [0x12e5e6fc], edx */
  w32((uint32_t)(0x12e5e6fc), (EDX));
  /* 12e3f4fd mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f502 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e3f504 mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
L_12e3f509:;
  /* 12e3f509 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f50e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f511 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e3f513 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f515 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e3f516:;
  /* 12e3f516 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f518 pop ebp */
  EBP = (pop32());
  /* 12e3f519 ret 4 */
  ESPCHK(0x12e3f470u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f520 @ 0x12e3f520 (43 bytes, 11 insns) */
void f_12e3f520(void) {
  FTRACE(0x12e3f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f520 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f521 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f523 mov eax, dword ptr [0x12e5e714] */
  EAX = (r32((uint32_t)(0x12e5e714)));
  /* 12e3f528 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f52d mov dword ptr [0x12e5e714], eax */
  w32((uint32_t)(0x12e5e714), (EAX));
  /* 12e3f532 call dword ptr [0x12e6025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6025c))), 0x12e3f538u);
  /* 12e3f538 mov dword ptr [0x12e5e718], eax */
  w32((uint32_t)(0x12e5e718), (EAX));
  /* 12e3f53d mov ecx, dword ptr [0x12e5e718] */
  ECX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f543 mov dword ptr [0x12e5e6fc], ecx */
  w32((uint32_t)(0x12e5e6fc), (ECX));
  /* 12e3f549 pop ebp */
  EBP = (pop32());
  /* 12e3f54a ret  */
  ESPCHK(0x12e3f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x12e3f550 (155 bytes, 57 insns) */
void f_12e3f550(void) {
  FTRACE(0x12e3f550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f550 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f551 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f55a je 0x12e3f57b */
  if (C.zf) goto L_12e3f57b;
  /* 12e3f55c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f55f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e3f562 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3f564 je 0x12e3f57b */
  if (C.zf) goto L_12e3f57b;
  /* 12e3f566 push 0x12e5a6c4 */
  push32((uint32_t)(0x12e5a6c4u));
  /* 12e3f56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f56e push edx */
  push32((uint32_t)(EDX));
  /* 12e3f56f call 0x12e3eab0 */
  push32(0x12e3f574u); f_12e3eab0();
  /* 12e3f574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f579 jne 0x12e3f5a3 */
  if (!C.zf) goto L_12e3f5a3;
L_12e3f57b:;
  /* 12e3f57b push 8 */
  push32((uint32_t)(0x8u));
  /* 12e3f57d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e3f580 push eax */
  push32((uint32_t)(EAX));
  /* 12e3f581 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12e3f586 mov ecx, dword ptr [0x12e5e718] */
  ECX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f58c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f58d call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3f593u);
  /* 12e3f593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f595 jne 0x12e3f59b */
  if (!C.zf) goto L_12e3f59b;
  /* 12e3f597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f599 jmp 0x12e3f5e7 */
  goto L_12e3f5e7;
L_12e3f59b:;
  /* 12e3f59b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12e3f59e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e3f5a1 jmp 0x12e3f5db */
  goto L_12e3f5db;
L_12e3f5a3:;
  /* 12e3f5a3 push 0x12e5a6c0 */
  push32((uint32_t)(0x12e5a6c0u));
  /* 12e3f5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f5ab push eax */
  push32((uint32_t)(EAX));
  /* 12e3f5ac call 0x12e3eab0 */
  push32(0x12e3f5b1u); f_12e3eab0();
  /* 12e3f5b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f5b6 jne 0x12e3f5db */
  if (!C.zf) goto L_12e3f5db;
  /* 12e3f5b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e3f5ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e3f5bd push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f5be push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e3f5c0 mov edx, dword ptr [0x12e5e718] */
  EDX = (r32((uint32_t)(0x12e5e718)));
  /* 12e3f5c6 push edx */
  push32((uint32_t)(EDX));
  /* 12e3f5c7 call dword ptr [0x12e5e71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e71c))), 0x12e3f5cdu);
  /* 12e3f5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3f5cf jne 0x12e3f5d5 */
  if (!C.zf) goto L_12e3f5d5;
  /* 12e3f5d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f5d3 jmp 0x12e3f5e7 */
  goto L_12e3f5e7;
L_12e3f5d5:;
  /* 12e3f5d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e3f5d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e3f5db:;
  /* 12e3f5db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3f5de push ecx */
  push32((uint32_t)(ECX));
  /* 12e3f5df call 0x12e416d0 */
  push32(0x12e3f5e4u); f_12e416d0();
  /* 12e3f5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3f5e7:;
  /* 12e3f5e7 mov esp, ebp */
  ESP = (EBP);
  /* 12e3f5e9 pop ebp */
  EBP = (pop32());
  /* 12e3f5ea ret  */
  ESPCHK(0x12e3f550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x12e3f5f0 (79 bytes, 26 insns) */
void f_12e3f5f0(void) {
  FTRACE(0x12e3f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e3f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e3f5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3f5f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12e3f5fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12e3f5fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e3f605 jmp 0x12e3f610 */
  goto L_12e3f610;
L_12e3f607:;
  /* 12e3f607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3f60a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3f60d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e3f610:;
  /* 12e3f610 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f614 jae 0x12e3f636 */
  if (!C.cf) goto L_12e3f636;
  /* 12e3f616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3f619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3f61f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3f622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3f624 mov cx, word ptr [eax*2 + 0x12e5d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12e5d9c4)));
  /* 12e3f62c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3f62e jne 0x12e3f634 */
  if (!C.zf) goto L_12e3f634;
  /* 12e3f630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3f632 jmp 0x12e3f63b */
  goto L_12e3f63b;
L_12e3f634:;
  /* 12e3f634 jmp 0x12e3f607 */
  goto L_12e3f607;
L_12e3f636:;
  /* 12e3f636 mov eax, 1 */
  EAX = (0x1u);
L_12e3f63b:;
  /* 12e3f63b mov esp, ebp */
  ESP = (EBP);
  /* 12e3f63d pop ebp */
  EBP = (pop32());
  /* 12e3f63e ret  */
  ESPCHK(0x12e3f5f0u, _esp0);
  ESP += 4; return;
}

