#include "recomp.h"

/* _set_new_handler @ 0x116e7b20 (48 bytes, 17 insns) */
void f_116e7b20(void) {
  FTRACE(0x116e7b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7b20 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7b21 mov ebp, esp */
  EBP = (ESP);
  /* 116e7b23 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7b26 call 0x116e7820 */
  push32(0x116e7b2bu); f_116e7820();
  /* 116e7b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7b2e mov eax, dword ptr [0x1170f81c] */
  EAX = (r32((uint32_t)(0x1170f81c)));
  /* 116e7b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7b39 mov dword ptr [0x1170f81c], ecx */
  w32((uint32_t)(0x1170f81c), (ECX));
  /* 116e7b3f push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7b41 call 0x116e78c0 */
  push32(0x116e7b46u); f_116e78c0();
  /* 116e7b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7b4c mov esp, ebp */
  ESP = (EBP);
  /* 116e7b4e pop ebp */
  EBP = (pop32());
  /* 116e7b4f ret  */
  ESPCHK(0x116e7b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b50 @ 0x116e7b50 (10 bytes, 5 insns) */
void f_116e7b50(void) {
  FTRACE(0x116e7b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7b50 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7b51 mov ebp, esp */
  EBP = (ESP);
  /* 116e7b53 mov eax, dword ptr [0x1170f81c] */
  EAX = (r32((uint32_t)(0x1170f81c)));
  /* 116e7b58 pop ebp */
  EBP = (pop32());
  /* 116e7b59 ret  */
  ESPCHK(0x116e7b50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x116e7b60 (45 bytes, 19 insns) */
void f_116e7b60(void) {
  FTRACE(0x116e7b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7b60 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7b61 mov ebp, esp */
  EBP = (ESP);
  /* 116e7b63 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7b64 mov eax, dword ptr [0x1170f81c] */
  EAX = (r32((uint32_t)(0x1170f81c)));
  /* 116e7b69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7b6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7b70 je 0x116e7b80 */
  if (C.zf) goto L_116e7b80;
  /* 116e7b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7b75 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7b76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x116e7b79u);
  /* 116e7b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e7b7e jne 0x116e7b84 */
  if (!C.zf) goto L_116e7b84;
L_116e7b80:;
  /* 116e7b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7b82 jmp 0x116e7b89 */
  goto L_116e7b89;
L_116e7b84:;
  /* 116e7b84 mov eax, 1 */
  EAX = (0x1u);
L_116e7b89:;
  /* 116e7b89 mov esp, ebp */
  ESP = (EBP);
  /* 116e7b8b pop ebp */
  EBP = (pop32());
  /* 116e7b8c ret  */
  ESPCHK(0x116e7b60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x116e7b90 (88 bytes, 40 insns) */
void f_116e7b90(void) {
  FTRACE(0x116e7b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7b90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 116e7b94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e7b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e7b9a je 0x116e7be3 */
  if (C.zf) goto L_116e7be3;
  /* 116e7b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7b9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 116e7ba2 push edi */
  push32((uint32_t)(EDI));
  /* 116e7ba3 mov edi, ecx */
  EDI = (ECX);
  /* 116e7ba5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7ba8 jb 0x116e7bd7 */
  if (C.cf) goto L_116e7bd7;
  /* 116e7baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116e7bac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 116e7baf je 0x116e7bb9 */
  if (C.zf) goto L_116e7bb9;
  /* 116e7bb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116e7bb3:;
  /* 116e7bb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116e7bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116e7bb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116e7bb7 jne 0x116e7bb3 */
  if (!C.zf) goto L_116e7bb3;
L_116e7bb9:;
  /* 116e7bb9 mov ecx, eax */
  ECX = (EAX);
  /* 116e7bbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116e7bbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7bc0 mov ecx, eax */
  ECX = (EAX);
  /* 116e7bc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116e7bc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7bc7 mov ecx, edx */
  ECX = (EDX);
  /* 116e7bc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116e7bcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116e7bcf je 0x116e7bd7 */
  if (C.zf) goto L_116e7bd7;
  /* 116e7bd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e7bd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e7bd5 je 0x116e7bdd */
  if (C.zf) goto L_116e7bdd;
L_116e7bd7:;
  /* 116e7bd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116e7bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116e7bda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 116e7bdb jne 0x116e7bd7 */
  if (!C.zf) goto L_116e7bd7;
L_116e7bdd:;
  /* 116e7bdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116e7be1 pop edi */
  EDI = (pop32());
  /* 116e7be2 ret  */
  ESPCHK(0x116e7b90u, _esp0);
  ESP += 4; return;
L_116e7be3:;
  /* 116e7be3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e7be7 ret  */
  ESPCHK(0x116e7b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x116e7bf0 (23 bytes, 10 insns) */
void f_116e7bf0(void) {
  FTRACE(0x116e7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 116e7bf3 mov eax, dword ptr [0x1170f818] */
  EAX = (r32((uint32_t)(0x1170f818)));
  /* 116e7bf8 push eax */
  push32((uint32_t)(EAX));
  /* 116e7bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7bfc push ecx */
  push32((uint32_t)(ECX));
  /* 116e7bfd call 0x116e7c10 */
  push32(0x116e7c02u); f_116e7c10();
  /* 116e7c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7c05 pop ebp */
  EBP = (pop32());
  /* 116e7c06 ret  */
  ESPCHK(0x116e7bf0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x116e7c10 (87 bytes, 34 insns) */
void f_116e7c10(void) {
  FTRACE(0x116e7c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7c10 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7c11 mov ebp, esp */
  EBP = (ESP);
  /* 116e7c13 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7c14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7c18 jbe 0x116e7c1e */
  if ((C.cf||C.zf)) goto L_116e7c1e;
  /* 116e7c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7c1c jmp 0x116e7c63 */
  goto L_116e7c63;
L_116e7c1e:;
  /* 116e7c1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7c22 ja 0x116e7c35 */
  if ((!C.cf&&!C.zf)) goto L_116e7c35;
  /* 116e7c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7c27 push eax */
  push32((uint32_t)(EAX));
  /* 116e7c28 call 0x116e7c70 */
  push32(0x116e7c2du); f_116e7c70();
  /* 116e7c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7c33 jmp 0x116e7c3c */
  goto L_116e7c3c;
L_116e7c35:;
  /* 116e7c35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e7c3c:;
  /* 116e7c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7c40 jne 0x116e7c48 */
  if (!C.zf) goto L_116e7c48;
  /* 116e7c42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7c46 jne 0x116e7c4d */
  if (!C.zf) goto L_116e7c4d;
L_116e7c48:;
  /* 116e7c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7c4b jmp 0x116e7c63 */
  goto L_116e7c63;
L_116e7c4d:;
  /* 116e7c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7c50 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7c51 call 0x116e7b60 */
  push32(0x116e7c56u); f_116e7b60();
  /* 116e7c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e7c5b jne 0x116e7c61 */
  if (!C.zf) goto L_116e7c61;
  /* 116e7c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7c5f jmp 0x116e7c63 */
  goto L_116e7c63;
L_116e7c61:;
  /* 116e7c61 jmp 0x116e7c1e */
  goto L_116e7c1e;
L_116e7c63:;
  /* 116e7c63 mov esp, ebp */
  ESP = (EBP);
  /* 116e7c65 pop ebp */
  EBP = (pop32());
  /* 116e7c66 ret  */
  ESPCHK(0x116e7c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x116e7c70 (109 bytes, 37 insns) */
void f_116e7c70(void) {
  FTRACE(0x116e7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7c71 mov ebp, esp */
  EBP = (ESP);
  /* 116e7c73 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7c77 cmp eax, dword ptr [0x1170dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7c7d ja 0x116e7cad */
  if ((!C.cf&&!C.zf)) goto L_116e7cad;
  /* 116e7c7f push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7c81 call 0x116e7820 */
  push32(0x116e7c86u); f_116e7820();
  /* 116e7c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7c8c push ecx */
  push32((uint32_t)(ECX));
  /* 116e7c8d call 0x116e87b0 */
  push32(0x116e7c92u); f_116e87b0();
  /* 116e7c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7c9a call 0x116e78c0 */
  push32(0x116e7c9fu); f_116e78c0();
  /* 116e7c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7ca2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7ca6 je 0x116e7cad */
  if (C.zf) goto L_116e7cad;
  /* 116e7ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7cab jmp 0x116e7cd9 */
  goto L_116e7cd9;
L_116e7cad:;
  /* 116e7cad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7cb1 jne 0x116e7cba */
  if (!C.zf) goto L_116e7cba;
  /* 116e7cb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_116e7cba:;
  /* 116e7cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7cbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7cc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 116e7cc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116e7cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7cc9 push eax */
  push32((uint32_t)(EAX));
  /* 116e7cca push 0 */
  push32((uint32_t)(0x0u));
  /* 116e7ccc mov ecx, dword ptr [0x11710fcc] */
  ECX = (r32((uint32_t)(0x11710fcc)));
  /* 116e7cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7cd3 call dword ptr [0x1171230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171230c))), 0x116e7cd9u);
L_116e7cd9:;
  /* 116e7cd9 mov esp, ebp */
  ESP = (EBP);
  /* 116e7cdb pop ebp */
  EBP = (pop32());
  /* 116e7cdc ret  */
  ESPCHK(0x116e7c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x116e7ce0 (10 bytes, 5 insns) */
void f_116e7ce0(void) {
  FTRACE(0x116e7ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7ce1 mov ebp, esp */
  EBP = (ESP);
  /* 116e7ce3 mov eax, 1 */
  EAX = (0x1u);
  /* 116e7ce8 pop ebp */
  EBP = (pop32());
  /* 116e7ce9 ret  */
  ESPCHK(0x116e7ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x116e7cf0 (173 bytes, 59 insns) */
void f_116e7cf0(void) {
  FTRACE(0x116e7cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7cf1 mov ebp, esp */
  EBP = (ESP);
  /* 116e7cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7cf6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7cfa jbe 0x116e7d03 */
  if ((C.cf||C.zf)) goto L_116e7d03;
  /* 116e7cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7cfe jmp 0x116e7d99 */
  goto L_116e7d99;
L_116e7d03:;
  /* 116e7d03 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7d05 call 0x116e7820 */
  push32(0x116e7d0au); f_116e7820();
  /* 116e7d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7d10 push eax */
  push32((uint32_t)(EAX));
  /* 116e7d11 call 0x116e8120 */
  push32(0x116e7d16u); f_116e8120();
  /* 116e7d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7d19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e7d1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7d20 je 0x116e7d61 */
  if (C.zf) goto L_116e7d61;
  /* 116e7d22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e7d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7d2c cmp ecx, dword ptr [0x1170dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7d32 ja 0x116e7d52 */
  if ((!C.cf&&!C.zf)) goto L_116e7d52;
  /* 116e7d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7d37 push edx */
  push32((uint32_t)(EDX));
  /* 116e7d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7d3b push eax */
  push32((uint32_t)(EAX));
  /* 116e7d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7d3f push ecx */
  push32((uint32_t)(ECX));
  /* 116e7d40 call 0x116e8ff0 */
  push32(0x116e7d45u); f_116e8ff0();
  /* 116e7d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e7d4a je 0x116e7d52 */
  if (C.zf) goto L_116e7d52;
  /* 116e7d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7d4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e7d52:;
  /* 116e7d52 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7d54 call 0x116e78c0 */
  push32(0x116e7d59u); f_116e78c0();
  /* 116e7d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7d5f jmp 0x116e7d99 */
  goto L_116e7d99;
L_116e7d61:;
  /* 116e7d61 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7d63 call 0x116e78c0 */
  push32(0x116e7d68u); f_116e78c0();
  /* 116e7d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7d6f jne 0x116e7d78 */
  if (!C.zf) goto L_116e7d78;
  /* 116e7d71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_116e7d78:;
  /* 116e7d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7d7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7d7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 116e7d80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116e7d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7d86 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7d8a push edx */
  push32((uint32_t)(EDX));
  /* 116e7d8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116e7d8d mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e7d92 push eax */
  push32((uint32_t)(EAX));
  /* 116e7d93 call dword ptr [0x11712314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712314))), 0x116e7d99u);
L_116e7d99:;
  /* 116e7d99 mov esp, ebp */
  ESP = (EBP);
  /* 116e7d9b pop ebp */
  EBP = (pop32());
  /* 116e7d9c ret  */
  ESPCHK(0x116e7cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x116e7da0 (490 bytes, 165 insns) */
void f_116e7da0(void) {
  FTRACE(0x116e7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7da0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7da1 mov ebp, esp */
  EBP = (ESP);
  /* 116e7da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7da6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7daa jne 0x116e7dbd */
  if (!C.zf) goto L_116e7dbd;
  /* 116e7dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7daf push eax */
  push32((uint32_t)(EAX));
  /* 116e7db0 call 0x116e7bf0 */
  push32(0x116e7db5u); f_116e7bf0();
  /* 116e7db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7db8 jmp 0x116e7f86 */
  goto L_116e7f86;
L_116e7dbd:;
  /* 116e7dbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7dc1 jne 0x116e7dd6 */
  if (!C.zf) goto L_116e7dd6;
  /* 116e7dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7dc7 call 0x116e7f90 */
  push32(0x116e7dccu); f_116e7f90();
  /* 116e7dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7dd1 jmp 0x116e7f86 */
  goto L_116e7f86;
L_116e7dd6:;
  /* 116e7dd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e7ddd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7de1 ja 0x116e7f59 */
  if ((!C.cf&&!C.zf)) goto L_116e7f59;
  /* 116e7de7 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7de9 call 0x116e7820 */
  push32(0x116e7deeu); f_116e7820();
  /* 116e7dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7df4 push edx */
  push32((uint32_t)(EDX));
  /* 116e7df5 call 0x116e8120 */
  push32(0x116e7dfau); f_116e8120();
  /* 116e7dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7dfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e7e00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7e04 je 0x116e7f1c */
  if (C.zf) goto L_116e7f1c;
  /* 116e7e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7e0d cmp eax, dword ptr [0x1170dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7e13 ja 0x116e7e90 */
  if ((!C.cf&&!C.zf)) goto L_116e7e90;
  /* 116e7e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7e18 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7e1c push edx */
  push32((uint32_t)(EDX));
  /* 116e7e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e7e20 push eax */
  push32((uint32_t)(EAX));
  /* 116e7e21 call 0x116e8ff0 */
  push32(0x116e7e26u); f_116e8ff0();
  /* 116e7e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e7e2b je 0x116e7e35 */
  if (C.zf) goto L_116e7e35;
  /* 116e7e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7e30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e7e33 jmp 0x116e7e90 */
  goto L_116e7e90;
L_116e7e35:;
  /* 116e7e35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7e38 push edx */
  push32((uint32_t)(EDX));
  /* 116e7e39 call 0x116e87b0 */
  push32(0x116e7e3eu); f_116e87b0();
  /* 116e7e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e7e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7e48 je 0x116e7e90 */
  if (C.zf) goto L_116e7e90;
  /* 116e7e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7e4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 116e7e50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e7e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7e59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7e5c jae 0x116e7e66 */
  if (!C.cf) goto L_116e7e66;
  /* 116e7e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e7e64 jmp 0x116e7e6c */
  goto L_116e7e6c;
L_116e7e66:;
  /* 116e7e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116e7e6c:;
  /* 116e7e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7e6f push edx */
  push32((uint32_t)(EDX));
  /* 116e7e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7e73 push eax */
  push32((uint32_t)(EAX));
  /* 116e7e74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7e77 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7e78 call 0x116ea700 */
  push32(0x116e7e7du); f_116ea700();
  /* 116e7e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7e83 push edx */
  push32((uint32_t)(EDX));
  /* 116e7e84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e7e87 push eax */
  push32((uint32_t)(EAX));
  /* 116e7e88 call 0x116e81e0 */
  push32(0x116e7e8du); f_116e81e0();
  /* 116e7e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e7e90:;
  /* 116e7e90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7e94 jne 0x116e7f10 */
  if (!C.zf) goto L_116e7f10;
  /* 116e7e96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7e9a jne 0x116e7ea3 */
  if (!C.zf) goto L_116e7ea3;
  /* 116e7e9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_116e7ea3:;
  /* 116e7ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7ea6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7ea9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 116e7eac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116e7eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7eb2 push edx */
  push32((uint32_t)(EDX));
  /* 116e7eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e7eb5 mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e7eba push eax */
  push32((uint32_t)(EAX));
  /* 116e7ebb call dword ptr [0x1171230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171230c))), 0x116e7ec1u);
  /* 116e7ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e7ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7ec8 je 0x116e7f10 */
  if (C.zf) goto L_116e7f10;
  /* 116e7eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7ecd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 116e7ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7ed3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e7ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7ed9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7edc jae 0x116e7ee6 */
  if (!C.cf) goto L_116e7ee6;
  /* 116e7ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7ee1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116e7ee4 jmp 0x116e7eec */
  goto L_116e7eec;
L_116e7ee6:;
  /* 116e7ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7ee9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116e7eec:;
  /* 116e7eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e7eef push eax */
  push32((uint32_t)(EAX));
  /* 116e7ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7ef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7ef7 push edx */
  push32((uint32_t)(EDX));
  /* 116e7ef8 call 0x116ea700 */
  push32(0x116e7efdu); f_116ea700();
  /* 116e7efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7f03 push eax */
  push32((uint32_t)(EAX));
  /* 116e7f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e7f07 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7f08 call 0x116e81e0 */
  push32(0x116e7f0du); f_116e81e0();
  /* 116e7f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e7f10:;
  /* 116e7f10 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7f12 call 0x116e78c0 */
  push32(0x116e7f17u); f_116e78c0();
  /* 116e7f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7f1a jmp 0x116e7f59 */
  goto L_116e7f59;
L_116e7f1c:;
  /* 116e7f1c push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7f1e call 0x116e78c0 */
  push32(0x116e7f23u); f_116e78c0();
  /* 116e7f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7f26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7f2a jne 0x116e7f33 */
  if (!C.zf) goto L_116e7f33;
  /* 116e7f2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_116e7f33:;
  /* 116e7f33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7f36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7f39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 116e7f3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 116e7f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7f42 push eax */
  push32((uint32_t)(EAX));
  /* 116e7f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7f46 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e7f49 mov edx, dword ptr [0x11710fcc] */
  EDX = (r32((uint32_t)(0x11710fcc)));
  /* 116e7f4f push edx */
  push32((uint32_t)(EDX));
  /* 116e7f50 call dword ptr [0x11712314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712314))), 0x116e7f56u);
  /* 116e7f56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116e7f59:;
  /* 116e7f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7f5d jne 0x116e7f68 */
  if (!C.zf) goto L_116e7f68;
  /* 116e7f5f cmp dword ptr [0x1170f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7f66 jne 0x116e7f6d */
  if (!C.zf) goto L_116e7f6d;
L_116e7f68:;
  /* 116e7f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7f6b jmp 0x116e7f86 */
  goto L_116e7f86;
L_116e7f6d:;
  /* 116e7f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7f70 push eax */
  push32((uint32_t)(EAX));
  /* 116e7f71 call 0x116e7b60 */
  push32(0x116e7f76u); f_116e7b60();
  /* 116e7f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e7f7b jne 0x116e7f81 */
  if (!C.zf) goto L_116e7f81;
  /* 116e7f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7f7f jmp 0x116e7f86 */
  goto L_116e7f86;
L_116e7f81:;
  /* 116e7f81 jmp 0x116e7dd6 */
  goto L_116e7dd6;
L_116e7f86:;
  /* 116e7f86 mov esp, ebp */
  ESP = (EBP);
  /* 116e7f88 pop ebp */
  EBP = (pop32());
  /* 116e7f89 ret  */
  ESPCHK(0x116e7da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x116e7f90 (104 bytes, 38 insns) */
void f_116e7f90(void) {
  FTRACE(0x116e7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7f91 mov ebp, esp */
  EBP = (ESP);
  /* 116e7f93 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7f94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7f98 jne 0x116e7f9c */
  if (!C.zf) goto L_116e7f9c;
  /* 116e7f9a jmp 0x116e7ff4 */
  goto L_116e7ff4;
L_116e7f9c:;
  /* 116e7f9c push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7f9e call 0x116e7820 */
  push32(0x116e7fa3u); f_116e7820();
  /* 116e7fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7fa9 push eax */
  push32((uint32_t)(EAX));
  /* 116e7faa call 0x116e8120 */
  push32(0x116e7fafu); f_116e8120();
  /* 116e7faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7fb9 je 0x116e7fd7 */
  if (C.zf) goto L_116e7fd7;
  /* 116e7fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7fbe push ecx */
  push32((uint32_t)(ECX));
  /* 116e7fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7fc2 push edx */
  push32((uint32_t)(EDX));
  /* 116e7fc3 call 0x116e81e0 */
  push32(0x116e7fc8u); f_116e81e0();
  /* 116e7fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7fcd call 0x116e78c0 */
  push32(0x116e7fd2u); f_116e78c0();
  /* 116e7fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7fd5 jmp 0x116e7ff4 */
  goto L_116e7ff4;
L_116e7fd7:;
  /* 116e7fd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e7fd9 call 0x116e78c0 */
  push32(0x116e7fdeu); f_116e78c0();
  /* 116e7fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7fe4 push eax */
  push32((uint32_t)(EAX));
  /* 116e7fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e7fe7 mov ecx, dword ptr [0x11710fcc] */
  ECX = (r32((uint32_t)(0x11710fcc)));
  /* 116e7fed push ecx */
  push32((uint32_t)(ECX));
  /* 116e7fee call dword ptr [0x1171239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171239c))), 0x116e7ff4u);
L_116e7ff4:;
  /* 116e7ff4 mov esp, ebp */
  ESP = (EBP);
  /* 116e7ff6 pop ebp */
  EBP = (pop32());
  /* 116e7ff7 ret  */
  ESPCHK(0x116e7f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x116e8000 (116 bytes, 34 insns) */
void f_116e8000(void) {
  FTRACE(0x116e8000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8000 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8001 mov ebp, esp */
  EBP = (ESP);
  /* 116e8003 push ecx */
  push32((uint32_t)(ECX));
  /* 116e8004 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 116e800b push 9 */
  push32((uint32_t)(0x9u));
  /* 116e800d call 0x116e7820 */
  push32(0x116e8012u); f_116e7820();
  /* 116e8012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8015 call 0x116e9710 */
  push32(0x116e801au); f_116e9710();
  /* 116e801a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e801c jge 0x116e8025 */
  if ((C.sf==C.of)) goto L_116e8025;
  /* 116e801e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_116e8025:;
  /* 116e8025 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e8027 call 0x116e78c0 */
  push32(0x116e802cu); f_116e78c0();
  /* 116e802c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e802f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e8031 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e8033 mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e8038 push eax */
  push32((uint32_t)(EAX));
  /* 116e8039 call dword ptr [0x117123a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123a0))), 0x116e803fu);
  /* 116e803f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e8041 jne 0x116e806d */
  if (!C.zf) goto L_116e806d;
  /* 116e8043 call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116e8049u);
  /* 116e8049 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e804c jne 0x116e8066 */
  if (!C.zf) goto L_116e8066;
  /* 116e804e call 0x116ebd00 */
  push32(0x116e8053u); f_116ebd00();
  /* 116e8053 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 116e8059 call 0x116ebcf0 */
  push32(0x116e805eu); f_116ebcf0();
  /* 116e805e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 116e8064 jmp 0x116e806d */
  goto L_116e806d;
L_116e8066:;
  /* 116e8066 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_116e806d:;
  /* 116e806d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8070 mov esp, ebp */
  ESP = (EBP);
  /* 116e8072 pop ebp */
  EBP = (pop32());
  /* 116e8073 ret  */
  ESPCHK(0x116e8000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008080 @ 0x116e8080 (10 bytes, 5 insns) */
void f_116e8080(void) {
  FTRACE(0x116e8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8080 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8081 mov ebp, esp */
  EBP = (ESP);
  /* 116e8083 call 0x116e8000 */
  push32(0x116e8088u); f_116e8000();
  /* 116e8088 pop ebp */
  EBP = (pop32());
  /* 116e8089 ret  */
  ESPCHK(0x116e8080u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x116e8090 (10 bytes, 5 insns) */
void f_116e8090(void) {
  FTRACE(0x116e8090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8090 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8091 mov ebp, esp */
  EBP = (ESP);
  /* 116e8093 mov eax, dword ptr [0x1170dc94] */
  EAX = (r32((uint32_t)(0x1170dc94)));
  /* 116e8098 pop ebp */
  EBP = (pop32());
  /* 116e8099 ret  */
  ESPCHK(0x116e8090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080a0 @ 0x116e80a0 (31 bytes, 11 insns) */
void f_116e80a0(void) {
  FTRACE(0x116e80a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e80a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e80a1 mov ebp, esp */
  EBP = (ESP);
  /* 116e80a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e80aa jbe 0x116e80b0 */
  if ((C.cf||C.zf)) goto L_116e80b0;
  /* 116e80ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e80ae jmp 0x116e80bd */
  goto L_116e80bd;
L_116e80b0:;
  /* 116e80b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e80b3 mov dword ptr [0x1170dc94], eax */
  w32((uint32_t)(0x1170dc94), (EAX));
  /* 116e80b8 mov eax, 1 */
  EAX = (0x1u);
L_116e80bd:;
  /* 116e80bd pop ebp */
  EBP = (pop32());
  /* 116e80be ret  */
  ESPCHK(0x116e80a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x116e80c0 (89 bytes, 20 insns) */
void f_116e80c0(void) {
  FTRACE(0x116e80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e80c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e80c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 116e80c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e80ca mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e80cf push eax */
  push32((uint32_t)(EAX));
  /* 116e80d0 call dword ptr [0x1171230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171230c))), 0x116e80d6u);
  /* 116e80d6 mov dword ptr [0x11710fc8], eax */
  w32((uint32_t)(0x11710fc8), (EAX));
  /* 116e80db cmp dword ptr [0x11710fc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710fc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e80e2 jne 0x116e80e8 */
  if (!C.zf) goto L_116e80e8;
  /* 116e80e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e80e6 jmp 0x116e8117 */
  goto L_116e8117;
L_116e80e8:;
  /* 116e80e8 mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e80ee mov dword ptr [0x11710fbc], ecx */
  w32((uint32_t)(0x11710fbc), (ECX));
  /* 116e80f4 mov dword ptr [0x11710fc0], 0 */
  w32((uint32_t)(0x11710fc0), (0x0u));
  /* 116e80fe mov dword ptr [0x11710fc4], 0 */
  w32((uint32_t)(0x11710fc4), (0x0u));
  /* 116e8108 mov dword ptr [0x11710fa8], 0x10 */
  w32((uint32_t)(0x11710fa8), (0x10u));
  /* 116e8112 mov eax, 1 */
  EAX = (0x1u);
L_116e8117:;
  /* 116e8117 pop ebp */
  EBP = (pop32());
  /* 116e8118 ret  */
  ESPCHK(0x116e80c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008120 @ 0x116e8120 (85 bytes, 29 insns) */
void f_116e8120(void) {
  FTRACE(0x116e8120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8120 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8121 mov ebp, esp */
  EBP = (ESP);
  /* 116e8123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8126 mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e812b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e812e mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e8134 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e8139 mov edx, dword ptr [0x11710fc8] */
  EDX = (r32((uint32_t)(0x11710fc8)));
  /* 116e813f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116e8142:;
  /* 116e8142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8145 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8148 jae 0x116e816f */
  if (!C.cf) goto L_116e816f;
  /* 116e814a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e814d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8150 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e8156 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e815d jae 0x116e8164 */
  if (!C.cf) goto L_116e8164;
  /* 116e815f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8162 jmp 0x116e8171 */
  goto L_116e8171;
L_116e8164:;
  /* 116e8164 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8167 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e816a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e816d jmp 0x116e8142 */
  goto L_116e8142;
L_116e816f:;
  /* 116e816f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e8171:;
  /* 116e8171 mov esp, ebp */
  ESP = (EBP);
  /* 116e8173 pop ebp */
  EBP = (pop32());
  /* 116e8174 ret  */
  ESPCHK(0x116e8120u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x116e8180 (95 bytes, 33 insns) */
void f_116e8180(void) {
  FTRACE(0x116e8180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8180 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8181 mov ebp, esp */
  EBP = (ESP);
  /* 116e8183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e818c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e818f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e8192 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8195 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 116e8198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e819b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e81a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e81a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e81a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e81a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e81ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e81ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e81af jne 0x116e81d1 */
  if (!C.zf) goto L_116e81d1;
  /* 116e81b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e81b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 116e81b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e81b9 jne 0x116e81d1 */
  if (!C.zf) goto L_116e81d1;
  /* 116e81bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e81be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e81c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e81c6 je 0x116e81d1 */
  if (C.zf) goto L_116e81d1;
  /* 116e81c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 116e81cf jmp 0x116e81d8 */
  goto L_116e81d8;
L_116e81d1:;
  /* 116e81d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116e81d8:;
  /* 116e81d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e81db mov esp, ebp */
  ESP = (EBP);
  /* 116e81dd pop ebp */
  EBP = (pop32());
  /* 116e81de ret  */
  ESPCHK(0x116e8180u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x116e81e0 (1485 bytes, 453 insns) */
void f_116e81e0(void) {
  FTRACE(0x116e81e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e81e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e81e1 mov ebp, esp */
  EBP = (ESP);
  /* 116e81e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e81e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e81e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e81ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 116e81ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e81f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e81f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e81f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e81fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e81fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 116e8201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e8204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8207 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e820d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8210 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 116e8217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e821a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e821d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8220 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e8223 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e8228 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e822b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116e822e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8231 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8234 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 116e8237 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e823a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e823c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116e823f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8242 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 116e8245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e8248 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e824b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116e824e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8250 jne 0x116e8378 */
  if (!C.zf) goto L_116e8378;
  /* 116e8256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8259 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116e825c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e825f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116e8262 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8266 jbe 0x116e826f */
  if ((C.cf||C.zf)) goto L_116e826f;
  /* 116e8268 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_116e826f:;
  /* 116e826f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8275 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8278 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e827b jne 0x116e8351 */
  if (!C.zf) goto L_116e8351;
  /* 116e8281 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8285 jae 0x116e82e6 */
  if (!C.cf) goto L_116e82e6;
  /* 116e8287 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e828c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e828f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e8291 not eax */
  EAX = (~(EAX));
  /* 116e8293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8296 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8299 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116e829d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e829f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e82a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e82a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116e82a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e82ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e82af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116e82b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e82b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e82b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e82bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116e82be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e82c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e82c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e82c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e82ca jne 0x116e82e4 */
  if (!C.zf) goto L_116e82e4;
  /* 116e82cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e82d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e82d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e82d6 not eax */
  EAX = (~(EAX));
  /* 116e82d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e82db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e82dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e82df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e82e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116e82e4:;
  /* 116e82e4 jmp 0x116e8351 */
  goto L_116e8351;
L_116e82e6:;
  /* 116e82e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e82e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e82ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e82f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e82f3 not edx */
  EDX = (~(EDX));
  /* 116e82f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e82f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e82fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116e8302 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8307 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e830a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 116e8311 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8314 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8317 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e831a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e831d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8323 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116e8326 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8329 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e832c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e8330 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8332 jne 0x116e8351 */
  if (!C.zf) goto L_116e8351;
  /* 116e8334 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e8337 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e833a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e833f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8341 not edx */
  EDX = (~(EDX));
  /* 116e8343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8349 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e834b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e834e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116e8351:;
  /* 116e8351 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8354 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e8357 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e835a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e835d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116e8360 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e8366 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e836c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116e836f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8372 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8375 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_116e8378:;
  /* 116e8378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e837b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116e837e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116e8384 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8388 jbe 0x116e8391 */
  if ((C.cf||C.zf)) goto L_116e8391;
  /* 116e838a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_116e8391:;
  /* 116e8391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e8394 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116e8397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8399 jne 0x116e84f5 */
  if (!C.zf) goto L_116e84f5;
  /* 116e839f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e83a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e83a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 116e83a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e83ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116e83ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e83b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116e83b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e83b8 jbe 0x116e83c1 */
  if ((C.cf||C.zf)) goto L_116e83c1;
  /* 116e83ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_116e83c1:;
  /* 116e83c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e83c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e83c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116e83ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e83cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116e83d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e83d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116e83d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e83da jbe 0x116e83e3 */
  if ((C.cf||C.zf)) goto L_116e83e3;
  /* 116e83dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_116e83e3:;
  /* 116e83e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e83e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e83e9 je 0x116e84ef */
  if (C.zf) goto L_116e84ef;
  /* 116e83ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e83f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e83f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e83f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e83fb jne 0x116e84d1 */
  if (!C.zf) goto L_116e84d1;
  /* 116e8401 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8405 jae 0x116e8466 */
  if (!C.cf) goto L_116e8466;
  /* 116e8407 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e840c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e840f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8411 not edx */
  EDX = (~(EDX));
  /* 116e8413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8416 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8419 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116e841d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e841f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8425 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116e8429 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e842c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e842f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e8432 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e8435 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8438 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e843b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116e843e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8441 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8444 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e8448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e844a jne 0x116e8464 */
  if (!C.zf) goto L_116e8464;
  /* 116e844c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8456 not edx */
  EDX = (~(EDX));
  /* 116e8458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e845b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e845d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e845f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e8464:;
  /* 116e8464 jmp 0x116e84d1 */
  goto L_116e84d1;
L_116e8466:;
  /* 116e8466 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e846c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e8471 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e8473 not eax */
  EAX = (~(EAX));
  /* 116e8475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8478 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e847b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116e8482 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e8484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8487 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e848a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 116e8491 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8494 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8497 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116e849a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e849d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e84a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e84a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116e84a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e84a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e84ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e84b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e84b2 jne 0x116e84d1 */
  if (!C.zf) goto L_116e84d1;
  /* 116e84b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e84b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e84ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e84bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e84c1 not eax */
  EAX = (~(EAX));
  /* 116e84c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e84c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e84c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e84cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e84ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116e84d1:;
  /* 116e84d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e84d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e84d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e84da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e84dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116e84e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e84e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e84e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e84e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e84ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_116e84ef:;
  /* 116e84ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e84f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_116e84f5:;
  /* 116e84f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e84f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116e84fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e84fd jne 0x116e850b */
  if (!C.zf) goto L_116e850b;
  /* 116e84ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8502 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8505 je 0x116e861b */
  if (C.zf) goto L_116e861b;
L_116e850b:;
  /* 116e850b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e850e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8511 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 116e8514 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116e8517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e851a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e851d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e8520 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116e8523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8526 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8529 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116e852c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e852f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8532 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116e8535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8538 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e853b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e853e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e8541 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8547 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e854a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e854d jne 0x116e861b */
  if (!C.zf) goto L_116e861b;
  /* 116e8553 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8557 jae 0x116e85b4 */
  if (!C.cf) goto L_116e85b4;
  /* 116e8559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e855c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e855f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e8563 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8566 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8569 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e856c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e856f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8572 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8575 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116e8578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e857a jne 0x116e8592 */
  if (!C.zf) goto L_116e8592;
  /* 116e857c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8589 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e858b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e858d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8590 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e8592:;
  /* 116e8592 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e8597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e859a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e859c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e859f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e85a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116e85a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e85a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e85ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e85ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116e85b2 jmp 0x116e861b */
  goto L_116e861b;
L_116e85b4:;
  /* 116e85b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e85b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e85ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e85be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e85c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e85c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e85c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e85ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e85cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e85d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116e85d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e85d5 jne 0x116e85f2 */
  if (!C.zf) goto L_116e85f2;
  /* 116e85d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e85da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e85dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e85e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e85e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e85e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e85ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e85ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e85ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116e85f2:;
  /* 116e85f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e85f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e85f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e85fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e85ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8602 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8605 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116e860c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e860e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116e8614 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_116e861b:;
  /* 116e861b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e861e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8621 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116e8623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8626 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8629 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e862c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 116e862f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e8634 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e863a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e863c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e863f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8642 jne 0x116e87a9 */
  if (!C.zf) goto L_116e87a9;
  /* 116e8648 cmp dword ptr [0x11710fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e864f je 0x116e8798 */
  if (C.zf) goto L_116e8798;
  /* 116e8655 mov eax, dword ptr [0x11710fb8] */
  EAX = (r32((uint32_t)(0x11710fb8)));
  /* 116e865a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 116e865d mov ecx, dword ptr [0x11710fc0] */
  ECX = (r32((uint32_t)(0x11710fc0)));
  /* 116e8663 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116e8666 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8668 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116e866b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116e8670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116e8675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8678 push eax */
  push32((uint32_t)(EAX));
  /* 116e8679 call dword ptr [0x11712328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712328))), 0x116e867fu);
  /* 116e867f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8684 mov ecx, dword ptr [0x11710fb8] */
  ECX = (r32((uint32_t)(0x11710fb8)));
  /* 116e868a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e868c mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e8691 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e8694 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e8696 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e869c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116e869f mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e86a7 mov edx, dword ptr [0x11710fb8] */
  EDX = (r32((uint32_t)(0x11710fb8)));
  /* 116e86ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 116e86b8 mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e86c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 116e86c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e86c6 mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e86ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 116e86d1 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e86da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 116e86de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e86e0 jne 0x116e86f6 */
  if (!C.zf) goto L_116e86f6;
  /* 116e86e2 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e86eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 116e86ed mov ecx, dword ptr [0x11710fc0] */
  ECX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116e86f6:;
  /* 116e86f6 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e86fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8700 jne 0x116e8798 */
  if (!C.zf) goto L_116e8798;
  /* 116e8706 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116e870b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e870d mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e8712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116e8715 push ecx */
  push32((uint32_t)(ECX));
  /* 116e8716 call dword ptr [0x11712328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712328))), 0x116e871cu);
  /* 116e871c mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e8722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e8725 push eax */
  push32((uint32_t)(EAX));
  /* 116e8726 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e8728 mov ecx, dword ptr [0x11710fcc] */
  ECX = (r32((uint32_t)(0x11710fcc)));
  /* 116e872e push ecx */
  push32((uint32_t)(ECX));
  /* 116e872f call dword ptr [0x1171239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171239c))), 0x116e8735u);
  /* 116e8735 mov edx, dword ptr [0x11710fc4] */
  EDX = (r32((uint32_t)(0x11710fc4)));
  /* 116e873b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e873e mov eax, dword ptr [0x11710fc8] */
  EAX = (r32((uint32_t)(0x11710fc8)));
  /* 116e8743 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8745 mov ecx, dword ptr [0x11710fc0] */
  ECX = (r32((uint32_t)(0x11710fc0)));
  /* 116e874b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e874e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8750 push eax */
  push32((uint32_t)(EAX));
  /* 116e8751 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e8757 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e875a push edx */
  push32((uint32_t)(EDX));
  /* 116e875b mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e8760 push eax */
  push32((uint32_t)(EAX));
  /* 116e8761 call 0x116ebd10 */
  push32(0x116e8766u); f_116ebd10();
  /* 116e8766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8769 mov ecx, dword ptr [0x11710fc4] */
  ECX = (r32((uint32_t)(0x11710fc4)));
  /* 116e876f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8772 mov dword ptr [0x11710fc4], ecx */
  w32((uint32_t)(0x11710fc4), (ECX));
  /* 116e8778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e877b cmp edx, dword ptr [0x11710fc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11710fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8781 jbe 0x116e878c */
  if ((C.cf||C.zf)) goto L_116e878c;
  /* 116e8783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8786 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8789 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116e878c:;
  /* 116e878c mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e8792 mov dword ptr [0x11710fbc], ecx */
  w32((uint32_t)(0x11710fbc), (ECX));
L_116e8798:;
  /* 116e8798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e879b mov dword ptr [0x11710fc0], edx */
  w32((uint32_t)(0x11710fc0), (EDX));
  /* 116e87a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e87a4 mov dword ptr [0x11710fb8], eax */
  w32((uint32_t)(0x11710fb8), (EAX));
L_116e87a9:;
  /* 116e87a9 mov esp, ebp */
  ESP = (EBP);
  /* 116e87ab pop ebp */
  EBP = (pop32());
  /* 116e87ac ret  */
  ESPCHK(0x116e81e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x116e87b0 (1334 bytes, 427 insns) */
void f_116e87b0(void) {
  FTRACE(0x116e87b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e87b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e87b1 mov ebp, esp */
  EBP = (ESP);
  /* 116e87b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e87b6 push esi */
  push32((uint32_t)(ESI));
  /* 116e87b7 mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e87bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e87bf mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e87c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e87c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116e87ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e87cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e87d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 116e87d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116e87d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e87d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116e87dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e87df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116e87e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e87e6 jge 0x116e87fc */
  if ((C.sf==C.of)) goto L_116e87fc;
  /* 116e87e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e87eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e87ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e87f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116e87f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 116e87fa jmp 0x116e8811 */
  goto L_116e8811;
L_116e87fc:;
  /* 116e87fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116e8803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8806 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8809 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e880c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e880e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_116e8811:;
  /* 116e8811 mov ecx, dword ptr [0x11710fbc] */
  ECX = (r32((uint32_t)(0x11710fbc)));
  /* 116e8817 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_116e881a:;
  /* 116e881a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e881d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8820 jae 0x116e8846 */
  if (!C.cf) goto L_116e8846;
  /* 116e8822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e8828 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 116e882a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e882d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e8830 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 116e8833 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e8835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8837 je 0x116e883b */
  if (C.zf) goto L_116e883b;
  /* 116e8839 jmp 0x116e8846 */
  goto L_116e8846;
L_116e883b:;
  /* 116e883b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e883e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8841 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116e8844 jmp 0x116e881a */
  goto L_116e881a;
L_116e8846:;
  /* 116e8846 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8849 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e884c jne 0x116e892d */
  if (!C.zf) goto L_116e892d;
  /* 116e8852 mov eax, dword ptr [0x11710fc8] */
  EAX = (r32((uint32_t)(0x11710fc8)));
  /* 116e8857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116e885a:;
  /* 116e885a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e885d cmp ecx, dword ptr [0x11710fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8863 jae 0x116e8889 */
  if (!C.cf) goto L_116e8889;
  /* 116e8865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e886b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 116e886d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e8873 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116e8876 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e887a je 0x116e887e */
  if (C.zf) goto L_116e887e;
  /* 116e887c jmp 0x116e8889 */
  goto L_116e8889;
L_116e887e:;
  /* 116e887e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8881 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e8887 jmp 0x116e885a */
  goto L_116e885a;
L_116e8889:;
  /* 116e8889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e888c cmp ecx, dword ptr [0x11710fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8892 jne 0x116e892d */
  if (!C.zf) goto L_116e892d;
L_116e8898:;
  /* 116e8898 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e889b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e889e jae 0x116e88b6 */
  if (!C.cf) goto L_116e88b6;
  /* 116e88a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e88a7 je 0x116e88ab */
  if (C.zf) goto L_116e88ab;
  /* 116e88a9 jmp 0x116e88b6 */
  goto L_116e88b6;
L_116e88ab:;
  /* 116e88ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e88b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116e88b4 jmp 0x116e8898 */
  goto L_116e8898;
L_116e88b6:;
  /* 116e88b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e88bc jne 0x116e8907 */
  if (!C.zf) goto L_116e8907;
  /* 116e88be mov eax, dword ptr [0x11710fc8] */
  EAX = (r32((uint32_t)(0x11710fc8)));
  /* 116e88c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116e88c6:;
  /* 116e88c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88c9 cmp ecx, dword ptr [0x11710fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e88cf jae 0x116e88e7 */
  if (!C.cf) goto L_116e88e7;
  /* 116e88d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e88d8 je 0x116e88dc */
  if (C.zf) goto L_116e88dc;
  /* 116e88da jmp 0x116e88e7 */
  goto L_116e88e7;
L_116e88dc:;
  /* 116e88dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e88e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e88e5 jmp 0x116e88c6 */
  goto L_116e88c6;
L_116e88e7:;
  /* 116e88e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e88ea cmp ecx, dword ptr [0x11710fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e88f0 jne 0x116e8907 */
  if (!C.zf) goto L_116e8907;
  /* 116e88f2 call 0x116e8cf0 */
  push32(0x116e88f7u); f_116e8cf0();
  /* 116e88f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e88fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e88fe jne 0x116e8907 */
  if (!C.zf) goto L_116e8907;
  /* 116e8900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8902 jmp 0x116e8ce1 */
  goto L_116e8ce1;
L_116e8907:;
  /* 116e8907 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e890a push edx */
  push32((uint32_t)(EDX));
  /* 116e890b call 0x116e8e00 */
  push32(0x116e8910u); f_116e8e00();
  /* 116e8910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8916 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116e8919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116e891b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e891e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e8921 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8924 jne 0x116e892d */
  if (!C.zf) goto L_116e892d;
  /* 116e8926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8928 jmp 0x116e8ce1 */
  goto L_116e8ce1;
L_116e892d:;
  /* 116e892d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8930 mov dword ptr [0x11710fbc], edx */
  w32((uint32_t)(0x11710fbc), (EDX));
  /* 116e8936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8939 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e893c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 116e893f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e8944 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116e8947 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e894b je 0x116e8970 */
  if (C.zf) goto L_116e8970;
  /* 116e894d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8950 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e8956 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 116e895a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e895d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8960 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 116e8963 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 116e896a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 116e896c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e896e jne 0x116e89a5 */
  if (!C.zf) goto L_116e89a5;
L_116e8970:;
  /* 116e8970 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_116e8977:;
  /* 116e8977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e897a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e897d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e8980 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 116e8984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8987 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e898a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 116e898d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 116e8994 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 116e8996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e8998 jne 0x116e89a5 */
  if (!C.zf) goto L_116e89a5;
  /* 116e899a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e899d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e89a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116e89a3 jmp 0x116e8977 */
  goto L_116e8977;
L_116e89a5:;
  /* 116e89a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e89a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e89ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e89b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116e89b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e89bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116e89c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e89c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e89c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e89cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 116e89cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e89d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e89d6 jne 0x116e89f2 */
  if (!C.zf) goto L_116e89f2;
  /* 116e89d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 116e89df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e89e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e89e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116e89e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 116e89ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_116e89f2:;
  /* 116e89f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e89f6 jl 0x116e8a0b */
  if ((C.sf!=C.of)) goto L_116e8a0b;
  /* 116e89f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e89fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116e89fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116e8a00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8a03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8a06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116e8a09 jmp 0x116e89f2 */
  goto L_116e89f2;
L_116e8a0b:;
  /* 116e8a0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8a11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 116e8a15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116e8a18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8a1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e8a1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8a20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e8a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8a26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116e8a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8a2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116e8a2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8a33 jle 0x116e8a3c */
  if ((C.zf||C.sf!=C.of)) goto L_116e8a3c;
  /* 116e8a35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_116e8a3c:;
  /* 116e8a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8a3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8a42 je 0x116e8c60 */
  if (C.zf) goto L_116e8c60;
  /* 116e8a48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8a4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8a51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8a54 jne 0x116e8b2a */
  if (!C.zf) goto L_116e8b2a;
  /* 116e8a5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8a5e jge 0x116e8abf */
  if ((C.sf==C.of)) goto L_116e8abf;
  /* 116e8a60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e8a65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8a68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e8a6a not eax */
  EAX = (~(EAX));
  /* 116e8a6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8a6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8a72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116e8a76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e8a78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8a7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8a7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116e8a82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8a85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8a88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116e8a8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e8a8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8a91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8a94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116e8a97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8a9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8a9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e8aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e8aa3 jne 0x116e8abd */
  if (!C.zf) goto L_116e8abd;
  /* 116e8aa5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e8aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8aad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e8aaf not eax */
  EAX = (~(EAX));
  /* 116e8ab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e8ab6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e8ab8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8abb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116e8abd:;
  /* 116e8abd jmp 0x116e8b2a */
  goto L_116e8b2a;
L_116e8abf:;
  /* 116e8abf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8ac2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8ac5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8aca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8acc not edx */
  EDX = (~(EDX));
  /* 116e8ace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8ad1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8ad4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116e8adb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8add mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8ae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8ae3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 116e8aea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8aed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8af0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e8af3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e8af6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8af9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8afc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116e8aff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8b02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8b05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e8b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8b0b jne 0x116e8b2a */
  if (!C.zf) goto L_116e8b2a;
  /* 116e8b0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8b10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8b13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8b18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8b1a not edx */
  EDX = (~(EDX));
  /* 116e8b1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8b1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8b22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e8b24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8b27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116e8b2a:;
  /* 116e8b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e8b30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e8b36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116e8b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e8b3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e8b45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116e8b48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8b4c je 0x116e8c60 */
  if (C.zf) goto L_116e8c60;
  /* 116e8b52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8b58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 116e8b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e8b5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e8b64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8b67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116e8b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e8b70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e8b73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e8b76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116e8b7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116e8b88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8b8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e8b91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8b94 jne 0x116e8c60 */
  if (!C.zf) goto L_116e8c60;
  /* 116e8b9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8b9e jge 0x116e8bfa */
  if ((C.sf==C.of)) goto L_116e8bfa;
  /* 116e8ba0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8ba3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8ba6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e8baa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8bad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8bb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116e8bb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e8bb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8bb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8bbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116e8bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8bc0 jne 0x116e8bd8 */
  if (!C.zf) goto L_116e8bd8;
  /* 116e8bc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e8bc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8bca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e8bcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8bcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e8bd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e8bd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116e8bd8:;
  /* 116e8bd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8be0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8be2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8be5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8be8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116e8bec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8bee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8bf1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8bf4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116e8bf8 jmp 0x116e8c60 */
  goto L_116e8c60;
L_116e8bfa:;
  /* 116e8bfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8bfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e8c04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8c07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116e8c0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e8c0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8c12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116e8c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8c1a jne 0x116e8c37 */
  if (!C.zf) goto L_116e8c37;
  /* 116e8c1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8c1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8c22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e8c27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e8c29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8c2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e8c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e8c31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8c34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116e8c37:;
  /* 116e8c37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8c3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8c42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8c44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8c47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8c4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116e8c51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8c53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8c56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8c59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_116e8c60:;
  /* 116e8c60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8c64 je 0x116e8c7a */
  if (C.zf) goto L_116e8c7a;
  /* 116e8c66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116e8c6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8c71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8c77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_116e8c7a:;
  /* 116e8c7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8c7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116e8c83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8c86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8c8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116e8c8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8c97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8c9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 116e8c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e8ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8ca5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e8ca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8cad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116e8caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e8cb1 jne 0x116e8cd3 */
  if (!C.zf) goto L_116e8cd3;
  /* 116e8cb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8cb6 cmp eax, dword ptr [0x11710fc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11710fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8cbc jne 0x116e8cd3 */
  if (!C.zf) goto L_116e8cd3;
  /* 116e8cbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8cc1 cmp ecx, dword ptr [0x11710fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8cc7 jne 0x116e8cd3 */
  if (!C.zf) goto L_116e8cd3;
  /* 116e8cc9 mov dword ptr [0x11710fc0], 0 */
  w32((uint32_t)(0x11710fc0), (0x0u));
L_116e8cd3:;
  /* 116e8cd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116e8cd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e8cd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116e8cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8cde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_116e8ce1:;
  /* 116e8ce1 pop esi */
  ESI = (pop32());
  /* 116e8ce2 mov esp, ebp */
  ESP = (EBP);
  /* 116e8ce4 pop ebp */
  EBP = (pop32());
  /* 116e8ce5 ret  */
  ESPCHK(0x116e87b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cf0 @ 0x116e8cf0 (271 bytes, 78 insns) */
void f_116e8cf0(void) {
  FTRACE(0x116e8cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8cf1 mov ebp, esp */
  EBP = (ESP);
  /* 116e8cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e8cf4 mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e8cf9 cmp eax, dword ptr [0x11710fa8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11710fa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8cff jne 0x116e8d4b */
  if (!C.zf) goto L_116e8d4b;
  /* 116e8d01 mov ecx, dword ptr [0x11710fa8] */
  ECX = (r32((uint32_t)(0x11710fa8)));
  /* 116e8d07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8d0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e8d0d push ecx */
  push32((uint32_t)(ECX));
  /* 116e8d0e mov edx, dword ptr [0x11710fc8] */
  EDX = (r32((uint32_t)(0x11710fc8)));
  /* 116e8d14 push edx */
  push32((uint32_t)(EDX));
  /* 116e8d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e8d17 mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e8d1c push eax */
  push32((uint32_t)(EAX));
  /* 116e8d1d call dword ptr [0x11712314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712314))), 0x116e8d23u);
  /* 116e8d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e8d26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8d2a jne 0x116e8d33 */
  if (!C.zf) goto L_116e8d33;
  /* 116e8d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8d2e jmp 0x116e8dfb */
  goto L_116e8dfb;
L_116e8d33:;
  /* 116e8d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8d36 mov dword ptr [0x11710fc8], ecx */
  w32((uint32_t)(0x11710fc8), (ECX));
  /* 116e8d3c mov edx, dword ptr [0x11710fa8] */
  EDX = (r32((uint32_t)(0x11710fa8)));
  /* 116e8d42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8d45 mov dword ptr [0x11710fa8], edx */
  w32((uint32_t)(0x11710fa8), (EDX));
L_116e8d4b:;
  /* 116e8d4b mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e8d50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e8d53 mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e8d59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8d5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e8d5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 116e8d63 push 8 */
  push32((uint32_t)(0x8u));
  /* 116e8d65 mov edx, dword ptr [0x11710fcc] */
  EDX = (r32((uint32_t)(0x11710fcc)));
  /* 116e8d6b push edx */
  push32((uint32_t)(EDX));
  /* 116e8d6c call dword ptr [0x1171230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171230c))), 0x116e8d72u);
  /* 116e8d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8d75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 116e8d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8d7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8d7f jne 0x116e8d85 */
  if (!C.zf) goto L_116e8d85;
  /* 116e8d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8d83 jmp 0x116e8dfb */
  goto L_116e8dfb;
L_116e8d85:;
  /* 116e8d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e8d87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 116e8d8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 116e8d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e8d93 call dword ptr [0x11712304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712304))), 0x116e8d99u);
  /* 116e8d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8d9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 116e8d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8da2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8da6 jne 0x116e8dc2 */
  if (!C.zf) goto L_116e8dc2;
  /* 116e8da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8dab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e8dae push ecx */
  push32((uint32_t)(ECX));
  /* 116e8daf push 0 */
  push32((uint32_t)(0x0u));
  /* 116e8db1 mov edx, dword ptr [0x11710fcc] */
  EDX = (r32((uint32_t)(0x11710fcc)));
  /* 116e8db7 push edx */
  push32((uint32_t)(EDX));
  /* 116e8db8 call dword ptr [0x1171239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171239c))), 0x116e8dbeu);
  /* 116e8dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e8dc0 jmp 0x116e8dfb */
  goto L_116e8dfb;
L_116e8dc2:;
  /* 116e8dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8dc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116e8dcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8dce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116e8dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8dd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 116e8ddf mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e8de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8de7 mov dword ptr [0x11710fc4], eax */
  w32((uint32_t)(0x11710fc4), (EAX));
  /* 116e8dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8def mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116e8df2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 116e8df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e8dfb:;
  /* 116e8dfb mov esp, ebp */
  ESP = (EBP);
  /* 116e8dfd pop ebp */
  EBP = (pop32());
  /* 116e8dfe ret  */
  ESPCHK(0x116e8cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x116e8e00 (494 bytes, 149 insns) */
void f_116e8e00(void) {
  FTRACE(0x116e8e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8e00 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8e01 mov ebp, esp */
  EBP = (ESP);
  /* 116e8e03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8e09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e8e0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116e8e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116e8e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e8e18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_116e8e1f:;
  /* 116e8e1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8e23 jl 0x116e8e38 */
  if ((C.sf!=C.of)) goto L_116e8e38;
  /* 116e8e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e8e28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116e8e2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e8e2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8e30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8e33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116e8e36 jmp 0x116e8e1f */
  goto L_116e8e1f;
L_116e8e38:;
  /* 116e8e38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8e3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e8e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8e44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116e8e4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116e8e4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116e8e55 jmp 0x116e8e60 */
  goto L_116e8e60;
L_116e8e57:;
  /* 116e8e57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_116e8e60:;
  /* 116e8e60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8e64 jge 0x116e8e86 */
  if ((C.sf==C.of)) goto L_116e8e86;
  /* 116e8e66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e8e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e8e6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 116e8e6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e8e72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8e75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8e78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116e8e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8e7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8e81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116e8e84 jmp 0x116e8e57 */
  goto L_116e8e57;
L_116e8e86:;
  /* 116e8e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8e89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 116e8e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8e8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116e8e92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8e94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116e8e97 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e8e99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116e8e9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116e8ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8ea6 push edx */
  push32((uint32_t)(EDX));
  /* 116e8ea7 call dword ptr [0x11712304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712304))), 0x116e8eadu);
  /* 116e8ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e8eaf jne 0x116e8eb9 */
  if (!C.zf) goto L_116e8eb9;
  /* 116e8eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e8eb4 jmp 0x116e8fea */
  goto L_116e8fea;
L_116e8eb9:;
  /* 116e8eb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8ebc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8ec1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116e8ec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8ec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e8eca jmp 0x116e8ed8 */
  goto L_116e8ed8;
L_116e8ecc:;
  /* 116e8ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8ecf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8ed5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e8ed8:;
  /* 116e8ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8edb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e8ede ja 0x116e8f3d */
  if ((!C.cf&&!C.zf)) goto L_116e8f3d;
  /* 116e8ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8ee3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 116e8eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8eed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 116e8ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e8efa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8efd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e8f00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 116e8f09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8f12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116e8f18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8f21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116e8f27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8f2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116e8f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e8f35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 116e8f3b jmp 0x116e8ecc */
  goto L_116e8ecc;
L_116e8f3d:;
  /* 116e8f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e8f40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8f46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116e8f49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e8f4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8f4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8f52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116e8f55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e8f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e8f5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8f64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116e8f67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e8f6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8f70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116e8f73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8f76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116e8f79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e8f7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e8f7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e8f82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116e8f85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8f88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8f8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 116e8f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8f96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8f99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 116e8fa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8fa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 116e8fab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8fae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 116e8fb1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e8fb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e8fb7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 116e8fba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e8fbc jne 0x116e8fcd */
  if (!C.zf) goto L_116e8fcd;
  /* 116e8fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8fc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e8fc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116e8fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8fca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116e8fcd:;
  /* 116e8fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e8fd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e8fd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e8fd7 not edx */
  EDX = (~(EDX));
  /* 116e8fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8fdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e8fdf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e8fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e8fe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116e8fe7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_116e8fea:;
  /* 116e8fea mov esp, ebp */
  ESP = (EBP);
  /* 116e8fec pop ebp */
  EBP = (pop32());
  /* 116e8fed ret  */
  ESPCHK(0x116e8e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff0 @ 0x116e8ff0 (1515 bytes, 489 insns) */
void f_116e8ff0(void) {
  FTRACE(0x116e8ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e8ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e8ff1 mov ebp, esp */
  EBP = (ESP);
  /* 116e8ff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e8ff6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e8ff9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e8ffc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 116e8ffe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116e9001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9004 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116e9007 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116e900a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e900d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e9010 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e9016 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e9019 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 116e901c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e901f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e9028 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e902b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116e9032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116e9035 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e9038 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e903b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116e903e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e9043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9046 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116e9049 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e904c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e904f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116e9052 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e9057 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116e905a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e905d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9060 jle 0x116e9316 */
  if ((C.zf||C.sf!=C.of)) goto L_116e9316;
  /* 116e9066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116e906c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e906e jne 0x116e907b */
  if (!C.zf) goto L_116e907b;
  /* 116e9070 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e9073 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9076 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9079 jle 0x116e9082 */
  if ((C.zf||C.sf!=C.of)) goto L_116e9082;
L_116e907b:;
  /* 116e907b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e907d jmp 0x116e95d7 */
  goto L_116e95d7;
L_116e9082:;
  /* 116e9082 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9085 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116e9088 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e908b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116e908e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9092 jbe 0x116e909b */
  if ((C.cf||C.zf)) goto L_116e909b;
  /* 116e9094 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_116e909b:;
  /* 116e909b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e909e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e90a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e90a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e90a7 jne 0x116e917d */
  if (!C.zf) goto L_116e917d;
  /* 116e90ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e90b1 jae 0x116e9112 */
  if (!C.cf) goto L_116e9112;
  /* 116e90b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e90b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e90bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e90bd not edx */
  EDX = (~(EDX));
  /* 116e90bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e90c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e90c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116e90c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e90cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e90ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e90d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116e90d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e90d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e90db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e90de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e90e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e90e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e90e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116e90ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e90ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e90f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e90f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e90f6 jne 0x116e9110 */
  if (!C.zf) goto L_116e9110;
  /* 116e90f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e90fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e9100 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9102 not edx */
  EDX = (~(EDX));
  /* 116e9104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e9109 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e910b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e910e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e9110:;
  /* 116e9110 jmp 0x116e917d */
  goto L_116e917d;
L_116e9112:;
  /* 116e9112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e9115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e911d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e911f not eax */
  EAX = (~(EAX));
  /* 116e9121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9127 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116e912e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9133 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9136 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 116e913d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9140 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9143 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116e9146 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e9149 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e914c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e914f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116e9152 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9155 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9158 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e915c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e915e jne 0x116e917d */
  if (!C.zf) goto L_116e917d;
  /* 116e9160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e9163 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9166 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e916b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e916d not eax */
  EAX = (~(EAX));
  /* 116e916f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9172 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9175 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e9177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e917a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116e917d:;
  /* 116e917d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9180 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e9183 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e9189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116e918c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e918f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e9192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e9198 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116e919b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e919e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e91a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e91a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e91a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e91ab jle 0x116e92f7 */
  if ((C.zf||C.sf!=C.of)) goto L_116e92f7;
  /* 116e91b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e91b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e91b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116e91ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e91bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116e91c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e91c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116e91c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e91ca jbe 0x116e91d3 */
  if ((C.cf||C.zf)) goto L_116e91d3;
  /* 116e91cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_116e91d3:;
  /* 116e91d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e91d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e91d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 116e91dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116e91df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e91e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e91e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e91e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116e91eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e91ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e91f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116e91f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e91f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e91fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116e91fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9200 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9206 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e9209 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e920c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e920f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9212 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9215 jne 0x116e92e3 */
  if (!C.zf) goto L_116e92e3;
  /* 116e921b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e921f jae 0x116e927c */
  if (!C.cf) goto L_116e927c;
  /* 116e9221 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9224 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9227 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e922b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e922e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9231 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e9234 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e9237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e923a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e923d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116e9240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e9242 jne 0x116e925a */
  if (!C.zf) goto L_116e925a;
  /* 116e9244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e9249 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e924c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e924e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e9253 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9258 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e925a:;
  /* 116e925a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e925f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e9262 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e9264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9267 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e926a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116e926e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9276 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116e927a jmp 0x116e92e3 */
  goto L_116e92e3;
L_116e927c:;
  /* 116e927c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e927f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9282 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e9286 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9289 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e928c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e928f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e9292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9295 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9298 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116e929b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e929d jne 0x116e92ba */
  if (!C.zf) goto L_116e92ba;
  /* 116e929f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e92a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e92a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e92aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e92ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e92af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e92b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e92b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e92b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116e92ba:;
  /* 116e92ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e92bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e92c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e92c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e92c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e92ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e92cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116e92d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e92d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e92d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e92dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_116e92e3:;
  /* 116e92e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e92e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e92e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116e92eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e92ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e92f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e92f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_116e92f7:;
  /* 116e92f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e92fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e92fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9300 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116e9302 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e9305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9308 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e930b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e930e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 116e9311 jmp 0x116e95d2 */
  goto L_116e95d2;
L_116e9316:;
  /* 116e9316 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e9319 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e931c jge 0x116e95d2 */
  if ((C.sf==C.of)) goto L_116e95d2;
  /* 116e9322 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e9325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9328 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e932b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116e932d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116e9330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9333 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9336 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9339 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 116e933c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e933f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116e9345 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e9348 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e934b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116e934e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e9351 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116e9354 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9357 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116e935a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e935e jbe 0x116e9367 */
  if ((C.cf||C.zf)) goto L_116e9367;
  /* 116e9360 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_116e9367:;
  /* 116e9367 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e936a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116e936d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e936f jne 0x116e94b0 */
  if (!C.zf) goto L_116e94b0;
  /* 116e9375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9378 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116e937b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e937e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116e9381 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9385 jbe 0x116e938e */
  if ((C.cf||C.zf)) goto L_116e938e;
  /* 116e9387 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_116e938e:;
  /* 116e938e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9391 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9394 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9397 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e939a jne 0x116e9470 */
  if (!C.zf) goto L_116e9470;
  /* 116e93a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e93a4 jae 0x116e9405 */
  if (!C.cf) goto L_116e9405;
  /* 116e93a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e93ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e93ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e93b0 not edx */
  EDX = (~(EDX));
  /* 116e93b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e93b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e93b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116e93bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e93be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e93c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e93c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116e93c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e93cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e93ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e93d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e93d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e93d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e93da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116e93dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e93e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e93e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e93e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e93e9 jne 0x116e9403 */
  if (!C.zf) goto L_116e9403;
  /* 116e93eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e93f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e93f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e93f5 not edx */
  EDX = (~(EDX));
  /* 116e93f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e93fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e93fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e93fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9401 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e9403:;
  /* 116e9403 jmp 0x116e9470 */
  goto L_116e9470;
L_116e9405:;
  /* 116e9405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e9408 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e940b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e9410 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e9412 not eax */
  EAX = (~(EAX));
  /* 116e9414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e941a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116e9421 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9426 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9429 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 116e9430 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9433 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9436 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116e9439 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e943c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e943f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9442 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116e9445 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9448 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e944b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116e944f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e9451 jne 0x116e9470 */
  if (!C.zf) goto L_116e9470;
  /* 116e9453 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e9456 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9459 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e945e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e9460 not eax */
  EAX = (~(EAX));
  /* 116e9462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9468 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e946a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e946d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116e9470:;
  /* 116e9470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9473 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e9476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9479 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e947c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116e947f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9482 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e9485 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9488 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e948b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116e948e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e9491 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9494 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116e9497 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e949a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116e949d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e94a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116e94a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e94a7 jbe 0x116e94b0 */
  if ((C.cf||C.zf)) goto L_116e94b0;
  /* 116e94a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_116e94b0:;
  /* 116e94b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e94b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e94b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 116e94b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116e94bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e94c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e94c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116e94c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e94ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e94d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e94d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116e94da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e94e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116e94e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e94ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e94ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e94f2 jne 0x116e95be */
  if (!C.zf) goto L_116e95be;
  /* 116e94f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e94fc jae 0x116e9558 */
  if (!C.cf) goto L_116e9558;
  /* 116e94fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9501 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9504 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e9508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e950b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e950e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116e9511 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e9513 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9516 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9519 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116e951c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e951e jne 0x116e9536 */
  if (!C.zf) goto L_116e9536;
  /* 116e9520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e9525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e952a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e952d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e952f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e9531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116e9536:;
  /* 116e9536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e953b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e953e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9543 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9546 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116e954a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e954c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e954f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9552 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116e9556 jmp 0x116e95be */
  goto L_116e95be;
L_116e9558:;
  /* 116e9558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e955b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e955e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116e9562 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9565 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9568 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116e956b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116e956d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e9570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9573 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116e9576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e9578 jne 0x116e9595 */
  if (!C.zf) goto L_116e9595;
  /* 116e957a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e957d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116e9585 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116e9587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e958a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e958d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116e958f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9592 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116e9595:;
  /* 116e9595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e959b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e95a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e95a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e95a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e95a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116e95af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e95b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e95b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116e95b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_116e95be:;
  /* 116e95be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e95c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e95c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116e95c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e95c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e95cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e95cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_116e95d2:;
  /* 116e95d2 mov eax, 1 */
  EAX = (0x1u);
L_116e95d7:;
  /* 116e95d7 mov esp, ebp */
  ESP = (EBP);
  /* 116e95d9 pop ebp */
  EBP = (pop32());
  /* 116e95da ret  */
  ESPCHK(0x116e8ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x116e95e0 (304 bytes, 79 insns) */
void f_116e95e0(void) {
  FTRACE(0x116e95e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e95e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e95e1 mov ebp, esp */
  EBP = (ESP);
  /* 116e95e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e95e4 cmp dword ptr [0x11710fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e95eb je 0x116e970c */
  if (C.zf) goto L_116e970c;
  /* 116e95f1 mov eax, dword ptr [0x11710fb8] */
  EAX = (r32((uint32_t)(0x11710fb8)));
  /* 116e95f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 116e95f9 mov ecx, dword ptr [0x11710fc0] */
  ECX = (r32((uint32_t)(0x11710fc0)));
  /* 116e95ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116e9602 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e9607 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116e960c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116e9611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9614 push eax */
  push32((uint32_t)(EAX));
  /* 116e9615 call dword ptr [0x11712328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712328))), 0x116e961bu);
  /* 116e961b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e9620 mov ecx, dword ptr [0x11710fb8] */
  ECX = (r32((uint32_t)(0x11710fb8)));
  /* 116e9626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9628 mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e962d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e9630 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9632 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9638 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116e963b mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9640 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e9643 mov edx, dword ptr [0x11710fb8] */
  EDX = (r32((uint32_t)(0x11710fb8)));
  /* 116e9649 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 116e9654 mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e965c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 116e965f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116e9662 mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e966a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 116e966d mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e9676 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 116e967a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e967c jne 0x116e9692 */
  if (!C.zf) goto L_116e9692;
  /* 116e967e mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e9687 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 116e9689 mov ecx, dword ptr [0x11710fc0] */
  ECX = (r32((uint32_t)(0x11710fc0)));
  /* 116e968f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116e9692:;
  /* 116e9692 mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e9698 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e969c jne 0x116e9702 */
  if (!C.zf) goto L_116e9702;
  /* 116e969e cmp dword ptr [0x11710fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11710fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e96a5 jle 0x116e9702 */
  if ((C.zf||C.sf!=C.of)) goto L_116e9702;
  /* 116e96a7 mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e96ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e96af push ecx */
  push32((uint32_t)(ECX));
  /* 116e96b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e96b2 mov edx, dword ptr [0x11710fcc] */
  EDX = (r32((uint32_t)(0x11710fcc)));
  /* 116e96b8 push edx */
  push32((uint32_t)(EDX));
  /* 116e96b9 call dword ptr [0x1171239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171239c))), 0x116e96bfu);
  /* 116e96bf mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e96c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e96c7 mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e96cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e96cf mov edx, dword ptr [0x11710fc0] */
  EDX = (r32((uint32_t)(0x11710fc0)));
  /* 116e96d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e96d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e96da push ecx */
  push32((uint32_t)(ECX));
  /* 116e96db mov eax, dword ptr [0x11710fc0] */
  EAX = (r32((uint32_t)(0x11710fc0)));
  /* 116e96e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e96e3 push eax */
  push32((uint32_t)(EAX));
  /* 116e96e4 mov ecx, dword ptr [0x11710fc0] */
  ECX = (r32((uint32_t)(0x11710fc0)));
  /* 116e96ea push ecx */
  push32((uint32_t)(ECX));
  /* 116e96eb call 0x116ebd10 */
  push32(0x116e96f0u); f_116ebd10();
  /* 116e96f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e96f3 mov edx, dword ptr [0x11710fc4] */
  EDX = (r32((uint32_t)(0x11710fc4)));
  /* 116e96f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e96fc mov dword ptr [0x11710fc4], edx */
  w32((uint32_t)(0x11710fc4), (EDX));
L_116e9702:;
  /* 116e9702 mov dword ptr [0x11710fc0], 0 */
  w32((uint32_t)(0x11710fc0), (0x0u));
L_116e970c:;
  /* 116e970c mov esp, ebp */
  ESP = (EBP);
  /* 116e970e pop ebp */
  EBP = (pop32());
  /* 116e970f ret  */
  ESPCHK(0x116e95e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x116e9710 (1565 bytes, 343 insns) */
void f_116e9710(void) {
  FTRACE(0x116e9710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e9710 push ebp */
  push32((uint32_t)(EBP));
  /* 116e9711 mov ebp, esp */
  EBP = (ESP);
  /* 116e9713 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9719 mov eax, dword ptr [0x11710fc4] */
  EAX = (r32((uint32_t)(0x11710fc4)));
  /* 116e971e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e9721 push eax */
  push32((uint32_t)(EAX));
  /* 116e9722 mov ecx, dword ptr [0x11710fc8] */
  ECX = (r32((uint32_t)(0x11710fc8)));
  /* 116e9728 push ecx */
  push32((uint32_t)(ECX));
  /* 116e9729 call dword ptr [0x11712378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712378))), 0x116e972fu);
  /* 116e972f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9731 je 0x116e973b */
  if (C.zf) goto L_116e973b;
  /* 116e9733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e9736 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e973b:;
  /* 116e973b mov edx, dword ptr [0x11710fc8] */
  EDX = (r32((uint32_t)(0x11710fc8)));
  /* 116e9741 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 116e9747 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 116e9751 jmp 0x116e9762 */
  goto L_116e9762;
L_116e9753:;
  /* 116e9753 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 116e9759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e975c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_116e9762:;
  /* 116e9762 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 116e9768 cmp ecx, dword ptr [0x11710fc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710fc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e976e jge 0x116e9d27 */
  if ((C.sf==C.of)) goto L_116e9d27;
  /* 116e9774 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116e977a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e977d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 116e9783 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 116e9788 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 116e978e push ecx */
  push32((uint32_t)(ECX));
  /* 116e978f call dword ptr [0x11712378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712378))), 0x116e9795u);
  /* 116e9795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9797 je 0x116e97a3 */
  if (C.zf) goto L_116e97a3;
  /* 116e9799 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 116e979e jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e97a3:;
  /* 116e97a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116e97a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116e97ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 116e97b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 116e97b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e97be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116e97c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116e97c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116e97ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e97cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 116e97d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 116e97e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116e97e8 jmp 0x116e97f3 */
  goto L_116e97f3;
L_116e97ea:;
  /* 116e97ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e97ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e97f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116e97f3:;
  /* 116e97f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e97f7 jge 0x116e9ceb */
  if ((C.sf==C.of)) goto L_116e9ceb;
  /* 116e97fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 116e9807 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 116e9811 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 116e981b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 116e9825 jmp 0x116e9836 */
  goto L_116e9836;
L_116e9827:;
  /* 116e9827 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116e982d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9830 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_116e9836:;
  /* 116e9836 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e983d jge 0x116e9852 */
  if ((C.sf==C.of)) goto L_116e9852;
  /* 116e983f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116e9845 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 116e9850 jmp 0x116e9827 */
  goto L_116e9827;
L_116e9852:;
  /* 116e9852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9856 jl 0x116e9c8d */
  if ((C.sf!=C.of)) goto L_116e9c8d;
  /* 116e985c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116e9861 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 116e9867 push ecx */
  push32((uint32_t)(ECX));
  /* 116e9868 call dword ptr [0x11712378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712378))), 0x116e986eu);
  /* 116e986e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9870 je 0x116e987c */
  if (C.zf) goto L_116e987c;
  /* 116e9872 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 116e9877 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e987c:;
  /* 116e987c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 116e9882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116e9885 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 116e988f jmp 0x116e98a0 */
  goto L_116e98a0;
L_116e9891:;
  /* 116e9891 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 116e9897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e989a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_116e98a0:;
  /* 116e98a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e98a7 jge 0x116e9a24 */
  if ((C.sf==C.of)) goto L_116e9a24;
  /* 116e98ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e98b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e98b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 116e98b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e98bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e98c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 116e98cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e98d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e98d5 jne 0x116e98e2 */
  if (!C.zf) goto L_116e98e2;
  /* 116e98d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 116e98dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e98e0 je 0x116e98ec */
  if (C.zf) goto L_116e98ec;
L_116e98e2:;
  /* 116e98e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 116e98e7 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e98ec:;
  /* 116e98ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e98f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e98f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 116e98fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 116e9900 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 116e9906 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 116e990c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116e990f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e9911 je 0x116e9949 */
  if (C.zf) goto L_116e9949;
  /* 116e9913 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 116e9919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e991c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 116e9922 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e992c jle 0x116e9938 */
  if ((C.zf||C.sf!=C.of)) goto L_116e9938;
  /* 116e992e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 116e9933 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9938:;
  /* 116e9938 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 116e993e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9941 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 116e9947 jmp 0x116e998b */
  goto L_116e998b;
L_116e9949:;
  /* 116e9949 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 116e994f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116e9952 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9955 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 116e995b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9962 jle 0x116e996e */
  if ((C.zf||C.sf!=C.of)) goto L_116e996e;
  /* 116e9964 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_116e996e:;
  /* 116e996e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116e9974 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 116e997b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e997e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116e9984 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_116e998b:;
  /* 116e998b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9992 jl 0x116e99ad */
  if ((C.sf!=C.of)) goto L_116e99ad;
  /* 116e9994 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 116e999a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 116e999d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e999f jne 0x116e99ad */
  if (!C.zf) goto L_116e99ad;
  /* 116e99a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e99ab jle 0x116e99b7 */
  if ((C.zf||C.sf!=C.of)) goto L_116e99b7;
L_116e99ad:;
  /* 116e99ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 116e99b2 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e99b7:;
  /* 116e99b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e99bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e99c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 116e99c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e99cc je 0x116e99d8 */
  if (C.zf) goto L_116e99d8;
  /* 116e99ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 116e99d3 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e99d8:;
  /* 116e99d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e99de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e99e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 116e99ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e99f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e99f6 jb 0x116e98ec */
  if (C.cf) goto L_116e98ec;
  /* 116e99fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e9a02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9a08 je 0x116e9a14 */
  if (C.zf) goto L_116e9a14;
  /* 116e9a0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 116e9a0f jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9a14:;
  /* 116e9a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e9a17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9a1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e9a1f jmp 0x116e9891 */
  goto L_116e9891;
L_116e9a24:;
  /* 116e9a24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e9a27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e9a29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9a2f je 0x116e9a3b */
  if (C.zf) goto L_116e9a3b;
  /* 116e9a31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 116e9a36 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9a3b:;
  /* 116e9a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e9a3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 116e9a44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116e9a4b jmp 0x116e9a56 */
  goto L_116e9a56;
L_116e9a4d:;
  /* 116e9a4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9a53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116e9a56:;
  /* 116e9a56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9a5a jge 0x116e9c8d */
  if ((C.sf==C.of)) goto L_116e9c8d;
  /* 116e9a60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 116e9a6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 116e9a70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_116e9a76:;
  /* 116e9a76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e9a7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e9a7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 116e9a85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116e9a8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9a91 je 0x116e9bba */
  if (C.zf) goto L_116e9bba;
  /* 116e9a97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9a9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 116e9aa0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9aa7 je 0x116e9bba */
  if (C.zf) goto L_116e9bba;
  /* 116e9aad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116e9ab3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9ab9 jb 0x116e9ace */
  if (C.cf) goto L_116e9ace;
  /* 116e9abb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 116e9ac1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9ac6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9acc jb 0x116e9ad8 */
  if (C.cf) goto L_116e9ad8;
L_116e9ace:;
  /* 116e9ace mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 116e9ad3 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9ad8:;
  /* 116e9ad8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116e9ade and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 116e9ae4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 116e9aea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 116e9af0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9af3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116e9af6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9af9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9afe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_116e9b04:;
  /* 116e9b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9b07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9b0d je 0x116e9b2e */
  if (C.zf) goto L_116e9b2e;
  /* 116e9b0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9b12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9b18 jne 0x116e9b1c */
  if (!C.zf) goto L_116e9b1c;
  /* 116e9b1a jmp 0x116e9b2e */
  goto L_116e9b2e;
L_116e9b1c:;
  /* 116e9b1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e9b21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 116e9b24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9b27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9b29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116e9b2c jmp 0x116e9b04 */
  goto L_116e9b04;
L_116e9b2e:;
  /* 116e9b2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e9b31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9b37 jne 0x116e9b43 */
  if (!C.zf) goto L_116e9b43;
  /* 116e9b39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 116e9b3e jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9b43:;
  /* 116e9b43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116e9b49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e9b4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116e9b4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9b51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 116e9b57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9b5e jle 0x116e9b6a */
  if ((C.zf||C.sf!=C.of)) goto L_116e9b6a;
  /* 116e9b60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_116e9b6a:;
  /* 116e9b6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116e9b70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9b73 je 0x116e9b7f */
  if (C.zf) goto L_116e9b7f;
  /* 116e9b75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 116e9b7a jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9b7f:;
  /* 116e9b7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116e9b85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e9b88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9b8e je 0x116e9b9a */
  if (C.zf) goto L_116e9b9a;
  /* 116e9b90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 116e9b95 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9b9a:;
  /* 116e9b9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116e9ba0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 116e9ba6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 116e9bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9baf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 116e9bb5 jmp 0x116e9a76 */
  goto L_116e9a76;
L_116e9bba:;
  /* 116e9bba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9bc1 je 0x116e9c31 */
  if (C.zf) goto L_116e9c31;
  /* 116e9bc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9bc7 jge 0x116e9bfb */
  if ((C.sf==C.of)) goto L_116e9bfb;
  /* 116e9bc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e9bce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9bd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9bd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 116e9bd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9bdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 116e9be1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e9be6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9be9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9beb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 116e9bf1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9bf3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 116e9bf9 jmp 0x116e9c31 */
  goto L_116e9c31;
L_116e9bfb:;
  /* 116e9bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9bfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9c01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e9c06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9c08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 116e9c0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9c10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 116e9c16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9c19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9c1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116e9c21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116e9c23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 116e9c29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9c2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_116e9c31:;
  /* 116e9c31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 116e9c37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9c3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9c40 jne 0x116e9c54 */
  if (!C.zf) goto L_116e9c54;
  /* 116e9c42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e9c45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 116e9c4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9c52 je 0x116e9c5e */
  if (C.zf) goto L_116e9c5e;
L_116e9c54:;
  /* 116e9c54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 116e9c59 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9c5e:;
  /* 116e9c5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 116e9c64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116e9c67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9c6d je 0x116e9c79 */
  if (C.zf) goto L_116e9c79;
  /* 116e9c6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 116e9c74 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9c79:;
  /* 116e9c79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 116e9c7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9c82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 116e9c88 jmp 0x116e9a4d */
  goto L_116e9a4d;
L_116e9c8d:;
  /* 116e9c8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e9c90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 116e9c96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 116e9c9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9ca0 jne 0x116e9cba */
  if (!C.zf) goto L_116e9cba;
  /* 116e9ca2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e9ca5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 116e9cab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 116e9cb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9cb8 je 0x116e9cc1 */
  if (C.zf) goto L_116e9cc1;
L_116e9cba:;
  /* 116e9cba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 116e9cbf jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9cc1:;
  /* 116e9cc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 116e9cc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9ccd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 116e9cd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e9cd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9cdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e9cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9ce1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116e9ce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e9ce6 jmp 0x116e97ea */
  goto L_116e97ea;
L_116e9ceb:;
  /* 116e9ceb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116e9cf1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 116e9cf7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9cf9 jne 0x116e9d0c */
  if (!C.zf) goto L_116e9d0c;
  /* 116e9cfb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116e9d01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 116e9d07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9d0a je 0x116e9d13 */
  if (C.zf) goto L_116e9d13;
L_116e9d0c:;
  /* 116e9d0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 116e9d11 jmp 0x116e9d29 */
  goto L_116e9d29;
L_116e9d13:;
  /* 116e9d13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116e9d19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9d1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 116e9d22 jmp 0x116e9753 */
  goto L_116e9753;
L_116e9d27:;
  /* 116e9d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e9d29:;
  /* 116e9d29 mov esp, ebp */
  ESP = (EBP);
  /* 116e9d2b pop ebp */
  EBP = (pop32());
  /* 116e9d2c ret  */
  ESPCHK(0x116e9710u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d30 @ 0x116e9d30 (250 bytes, 92 insns) */
void f_116e9d30(void) {
  FTRACE(0x116e9d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e9d30 push ebp */
  push32((uint32_t)(EBP));
  /* 116e9d31 mov ebp, esp */
  EBP = (ESP);
  /* 116e9d33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9d36 push ebx */
  push32((uint32_t)(EBX));
  /* 116e9d37 push esi */
  push32((uint32_t)(ESI));
  /* 116e9d38 push edi */
  push32((uint32_t)(EDI));
  /* 116e9d39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116e9d3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116e9d3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116e9d42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_116e9d45:;
  /* 116e9d45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9d49 jne 0x116e9d69 */
  if (!C.zf) goto L_116e9d69;
  /* 116e9d4b push 0x1170aeac */
  push32((uint32_t)(0x1170aeacu));
  /* 116e9d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e9d52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 116e9d54 push 0x1170aea0 */
  push32((uint32_t)(0x1170aea0u));
  /* 116e9d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e9d5b call 0x116e2ee0 */
  push32(0x116e9d60u); f_116e2ee0();
  /* 116e9d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9d63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9d66 jne 0x116e9d69 */
  if (!C.zf) goto L_116e9d69;
  /* 116e9d68 int3  */
  x86_unimpl("int3 @ 0x116e9d68");
L_116e9d69:;
  /* 116e9d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e9d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e9d6d jne 0x116e9d45 */
  if (!C.zf) goto L_116e9d45;
L_116e9d6f:;
  /* 116e9d6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9d73 jne 0x116e9d93 */
  if (!C.zf) goto L_116e9d93;
  /* 116e9d75 push 0x1170ae90 */
  push32((uint32_t)(0x1170ae90u));
  /* 116e9d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e9d7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116e9d7e push 0x1170aea0 */
  push32((uint32_t)(0x1170aea0u));
  /* 116e9d83 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e9d85 call 0x116e2ee0 */
  push32(0x116e9d8au); f_116e2ee0();
  /* 116e9d8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9d90 jne 0x116e9d93 */
  if (!C.zf) goto L_116e9d93;
  /* 116e9d92 int3  */
  x86_unimpl("int3 @ 0x116e9d92");
L_116e9d93:;
  /* 116e9d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9d97 jne 0x116e9d6f */
  if (!C.zf) goto L_116e9d6f;
  /* 116e9d99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9d9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 116e9da3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9da9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e9dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9daf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9db2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116e9db4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9db7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 116e9dbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e9dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 116e9dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e9dc5 push edx */
  push32((uint32_t)(EDX));
  /* 116e9dc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9dc9 push eax */
  push32((uint32_t)(EAX));
  /* 116e9dca call 0x116eadb0 */
  push32(0x116e9dcfu); f_116eadb0();
  /* 116e9dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9dd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116e9dd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9dd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e9ddb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9dde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9de1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116e9de4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9de7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9deb jl 0x116e9e0f */
  if ((C.sf!=C.of)) goto L_116e9e0f;
  /* 116e9ded mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9df0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e9df2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116e9df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e9dfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116e9e00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9e03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e9e05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9e08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9e0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e9e0d jmp 0x116e9e20 */
  goto L_116e9e20;
L_116e9e0f:;
  /* 116e9e0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9e12 push edx */
  push32((uint32_t)(EDX));
  /* 116e9e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e9e15 call 0x116eab30 */
  push32(0x116e9e1au); f_116eab30();
  /* 116e9e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9e1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_116e9e20:;
  /* 116e9e20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e9e23 pop edi */
  EDI = (pop32());
  /* 116e9e24 pop esi */
  ESI = (pop32());
  /* 116e9e25 pop ebx */
  EBX = (pop32());
  /* 116e9e26 mov esp, ebp */
  ESP = (EBP);
  /* 116e9e28 pop ebp */
  EBP = (pop32());
  /* 116e9e29 ret  */
  ESPCHK(0x116e9d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e30 @ 0x116e9e30 (183 bytes, 58 insns) */
void f_116e9e30(void) {
  FTRACE(0x116e9e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e9e30 push ebp */
  push32((uint32_t)(EBP));
  /* 116e9e31 mov ebp, esp */
  EBP = (ESP);
  /* 116e9e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9e3c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9e41 ja 0x116e9e5a */
  if ((!C.cf&&!C.zf)) goto L_116e9e5a;
  /* 116e9e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9e46 mov edx, dword ptr [0x1170dc98] */
  EDX = (r32((uint32_t)(0x1170dc98)));
  /* 116e9e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9e4e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116e9e52 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 116e9e55 jmp 0x116e9ee3 */
  goto L_116e9ee3;
L_116e9e5a:;
  /* 116e9e5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9e5d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116e9e60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e9e66 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e9e6c mov edx, dword ptr [0x1170dc98] */
  EDX = (r32((uint32_t)(0x1170dc98)));
  /* 116e9e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9e74 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116e9e78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116e9e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9e7f je 0x116e9ea3 */
  if (C.zf) goto L_116e9ea3;
  /* 116e9e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9e84 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116e9e87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e9e8d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 116e9e90 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 116e9e93 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 116e9e96 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 116e9e9a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 116e9ea1 jmp 0x116e9eb4 */
  goto L_116e9eb4;
L_116e9ea3:;
  /* 116e9ea3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 116e9ea6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 116e9ea9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 116e9ead mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116e9eb4:;
  /* 116e9eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e9eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e9eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e9eba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 116e9ebd push ecx */
  push32((uint32_t)(ECX));
  /* 116e9ebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e9ec1 push edx */
  push32((uint32_t)(EDX));
  /* 116e9ec2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116e9ec5 push eax */
  push32((uint32_t)(EAX));
  /* 116e9ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e9ec8 call 0x116ec050 */
  push32(0x116e9ecdu); f_116ec050();
  /* 116e9ecd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9ed2 jne 0x116e9ed8 */
  if (!C.zf) goto L_116e9ed8;
  /* 116e9ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9ed6 jmp 0x116e9ee3 */
  goto L_116e9ee3;
L_116e9ed8:;
  /* 116e9ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9edb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e9ee0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_116e9ee3:;
  /* 116e9ee3 mov esp, ebp */
  ESP = (EBP);
  /* 116e9ee5 pop ebp */
  EBP = (pop32());
  /* 116e9ee6 ret  */
  ESPCHK(0x116e9e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ef0 @ 0x116e9ef0 (836 bytes, 238 insns) */
void f_116e9ef0(void) {
  FTRACE(0x116e9ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e9ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e9ef1 mov ebp, esp */
  EBP = (ESP);
  /* 116e9ef3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e9ef6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116e9ef8 call 0x116e7820 */
  push32(0x116e9efdu); f_116e7820();
  /* 116e9efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9f03 push eax */
  push32((uint32_t)(EAX));
  /* 116e9f04 call 0x116ea240 */
  push32(0x116e9f09u); f_116ea240();
  /* 116e9f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9f0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116e9f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e9f12 cmp ecx, dword ptr [0x11710d04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710d04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9f18 jne 0x116e9f2b */
  if (!C.zf) goto L_116e9f2b;
  /* 116e9f1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116e9f1c call 0x116e78c0 */
  push32(0x116e9f21u); f_116e78c0();
  /* 116e9f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9f26 jmp 0x116ea230 */
  goto L_116ea230;
L_116e9f2b:;
  /* 116e9f2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9f2f jne 0x116e9f4c */
  if (!C.zf) goto L_116e9f4c;
  /* 116e9f31 call 0x116ea320 */
  push32(0x116e9f36u); f_116ea320();
  /* 116e9f36 call 0x116ea3a0 */
  push32(0x116e9f3bu); f_116ea3a0();
  /* 116e9f3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116e9f3d call 0x116e78c0 */
  push32(0x116e9f42u); f_116e78c0();
  /* 116e9f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9f47 jmp 0x116ea230 */
  goto L_116ea230;
L_116e9f4c:;
  /* 116e9f4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e9f53 jmp 0x116e9f5e */
  goto L_116e9f5e;
L_116e9f55:;
  /* 116e9f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9f5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e9f5e:;
  /* 116e9f5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9f62 jae 0x116ea0af */
  if (!C.cf) goto L_116ea0af;
  /* 116e9f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9f6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e9f6e mov ecx, dword ptr [eax + 0x1170deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1170deb8)));
  /* 116e9f74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9f77 jne 0x116ea0aa */
  if (!C.zf) goto L_116ea0aa;
  /* 116e9f7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116e9f84 jmp 0x116e9f8f */
  goto L_116e9f8f;
L_116e9f86:;
  /* 116e9f86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9f89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9f8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_116e9f8f:;
  /* 116e9f8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9f96 jae 0x116e9fa4 */
  if (!C.cf) goto L_116e9fa4;
  /* 116e9f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e9f9b mov byte ptr [eax + 0x11710ea0], 0 */
  w8((uint32_t)(EAX + 0x11710ea0), (0x0u));
  /* 116e9fa2 jmp 0x116e9f86 */
  goto L_116e9f86;
L_116e9fa4:;
  /* 116e9fa4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116e9fab jmp 0x116e9fb6 */
  goto L_116e9fb6;
L_116e9fad:;
  /* 116e9fad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e9fb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9fb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116e9fb6:;
  /* 116e9fb6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e9fba jae 0x116ea037 */
  if (!C.cf) goto L_116ea037;
  /* 116e9fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e9fbf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e9fc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e9fc5 lea ecx, [edx + eax*8 + 0x1170dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1170dec8));
  /* 116e9fcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e9fcf jmp 0x116e9fda */
  goto L_116e9fda;
L_116e9fd1:;
  /* 116e9fd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e9fd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e9fd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116e9fda:;
  /* 116e9fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e9fdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e9fdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116e9fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e9fe3 je 0x116ea032 */
  if (C.zf) goto L_116ea032;
  /* 116e9fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e9fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e9fea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116e9fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e9fef je 0x116ea032 */
  if (C.zf) goto L_116ea032;
  /* 116e9ff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e9ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e9ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e9ff8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116e9ffb jmp 0x116ea006 */
  goto L_116ea006;
L_116e9ffd:;
  /* 116e9ffd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea003 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116ea006:;
  /* 116ea006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ea009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea00b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116ea00e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea011 ja 0x116ea030 */
  if ((!C.cf&&!C.zf)) goto L_116ea030;
  /* 116ea013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ea019 mov dl, byte ptr [eax + 0x11710ea1] */
  DL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116ea01f or dl, byte ptr [ecx + 0x1170deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1170deb0))); DL = (_r); fl_logic(_r,8); }
  /* 116ea025 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea028 mov byte ptr [eax + 0x11710ea1], dl */
  w8((uint32_t)(EAX + 0x11710ea1), (DL));
  /* 116ea02e jmp 0x116e9ffd */
  goto L_116e9ffd;
L_116ea030:;
  /* 116ea030 jmp 0x116e9fd1 */
  goto L_116e9fd1;
L_116ea032:;
  /* 116ea032 jmp 0x116e9fad */
  goto L_116e9fad;
L_116ea037:;
  /* 116ea037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea03a mov dword ptr [0x11710d04], ecx */
  w32((uint32_t)(0x11710d04), (ECX));
  /* 116ea040 mov dword ptr [0x11710d8c], 1 */
  w32((uint32_t)(0x11710d8c), (0x1u));
  /* 116ea04a mov edx, dword ptr [0x11710d04] */
  EDX = (r32((uint32_t)(0x11710d04)));
  /* 116ea050 push edx */
  push32((uint32_t)(EDX));
  /* 116ea051 call 0x116ea2a0 */
  push32(0x116ea056u); f_116ea2a0();
  /* 116ea056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea059 mov dword ptr [0x11710fa4], eax */
  w32((uint32_t)(0x11710fa4), (EAX));
  /* 116ea05e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ea065 jmp 0x116ea070 */
  goto L_116ea070;
L_116ea067:;
  /* 116ea067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ea06a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea06d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ea070:;
  /* 116ea070 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea074 jae 0x116ea094 */
  if (!C.cf) goto L_116ea094;
  /* 116ea076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea079 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ea07c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ea07f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ea082 mov cx, word ptr [ecx + eax*2 + 0x1170debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1170debc)));
  /* 116ea08a mov word ptr [edx*2 + 0x11710d80], cx */
  w16((uint32_t)(EDX*2 + 0x11710d80), (CX));
  /* 116ea092 jmp 0x116ea067 */
  goto L_116ea067;
L_116ea094:;
  /* 116ea094 call 0x116ea3a0 */
  push32(0x116ea099u); f_116ea3a0();
  /* 116ea099 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116ea09b call 0x116e78c0 */
  push32(0x116ea0a0u); f_116e78c0();
  /* 116ea0a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ea0a5 jmp 0x116ea230 */
  goto L_116ea230;
L_116ea0aa:;
  /* 116ea0aa jmp 0x116e9f55 */
  goto L_116e9f55;
L_116ea0af:;
  /* 116ea0af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 116ea0b2 push edx */
  push32((uint32_t)(EDX));
  /* 116ea0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea0b6 push eax */
  push32((uint32_t)(EAX));
  /* 116ea0b7 call dword ptr [0x11712300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712300))), 0x116ea0bdu);
  /* 116ea0bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea0c0 jne 0x116ea202 */
  if (!C.zf) goto L_116ea202;
  /* 116ea0c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116ea0cd jmp 0x116ea0d8 */
  goto L_116ea0d8;
L_116ea0cf:;
  /* 116ea0cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea0d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea0d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_116ea0d8:;
  /* 116ea0d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea0df jae 0x116ea0ed */
  if (!C.cf) goto L_116ea0ed;
  /* 116ea0e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea0e4 mov byte ptr [edx + 0x11710ea0], 0 */
  w8((uint32_t)(EDX + 0x11710ea0), (0x0u));
  /* 116ea0eb jmp 0x116ea0cf */
  goto L_116ea0cf;
L_116ea0ed:;
  /* 116ea0ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea0f0 mov dword ptr [0x11710d04], eax */
  w32((uint32_t)(0x11710d04), (EAX));
  /* 116ea0f5 mov dword ptr [0x11710fa4], 0 */
  w32((uint32_t)(0x11710fa4), (0x0u));
  /* 116ea0ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea103 jbe 0x116ea1be */
  if ((C.cf||C.zf)) goto L_116ea1be;
  /* 116ea109 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 116ea10c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116ea10f jmp 0x116ea11a */
  goto L_116ea11a;
L_116ea111:;
  /* 116ea111 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ea114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea117 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_116ea11a:;
  /* 116ea11a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ea11d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ea11f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ea121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ea123 je 0x116ea16c */
  if (C.zf) goto L_116ea16c;
  /* 116ea125 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ea128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ea12a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116ea12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ea12f je 0x116ea16c */
  if (C.zf) goto L_116ea16c;
  /* 116ea131 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ea134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116ea138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116ea13b jmp 0x116ea146 */
  goto L_116ea146;
L_116ea13d:;
  /* 116ea13d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116ea146:;
  /* 116ea146 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ea149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea14b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116ea14e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea151 ja 0x116ea16a */
  if ((!C.cf&&!C.zf)) goto L_116ea16a;
  /* 116ea153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea156 mov cl, byte ptr [eax + 0x11710ea1] */
  CL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116ea15c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 116ea15f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea162 mov byte ptr [edx + 0x11710ea1], cl */
  w8((uint32_t)(EDX + 0x11710ea1), (CL));
  /* 116ea168 jmp 0x116ea13d */
  goto L_116ea13d;
L_116ea16a:;
  /* 116ea16a jmp 0x116ea111 */
  goto L_116ea111;
L_116ea16c:;
  /* 116ea16c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 116ea173 jmp 0x116ea17e */
  goto L_116ea17e;
L_116ea175:;
  /* 116ea175 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea17b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116ea17e:;
  /* 116ea17e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea185 jae 0x116ea19e */
  if (!C.cf) goto L_116ea19e;
  /* 116ea187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea18a mov dl, byte ptr [ecx + 0x11710ea1] */
  DL = (r8((uint32_t)(ECX + 0x11710ea1)));
  /* 116ea190 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 116ea193 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ea196 mov byte ptr [eax + 0x11710ea1], dl */
  w8((uint32_t)(EAX + 0x11710ea1), (DL));
  /* 116ea19c jmp 0x116ea175 */
  goto L_116ea175;
L_116ea19e:;
  /* 116ea19e mov ecx, dword ptr [0x11710d04] */
  ECX = (r32((uint32_t)(0x11710d04)));
  /* 116ea1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea1a5 call 0x116ea2a0 */
  push32(0x116ea1aau); f_116ea2a0();
  /* 116ea1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea1ad mov dword ptr [0x11710fa4], eax */
  w32((uint32_t)(0x11710fa4), (EAX));
  /* 116ea1b2 mov dword ptr [0x11710d8c], 1 */
  w32((uint32_t)(0x11710d8c), (0x1u));
  /* 116ea1bc jmp 0x116ea1c8 */
  goto L_116ea1c8;
L_116ea1be:;
  /* 116ea1be mov dword ptr [0x11710d8c], 0 */
  w32((uint32_t)(0x11710d8c), (0x0u));
L_116ea1c8:;
  /* 116ea1c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ea1cf jmp 0x116ea1da */
  goto L_116ea1da;
L_116ea1d1:;
  /* 116ea1d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ea1d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea1d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116ea1da:;
  /* 116ea1da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea1de jae 0x116ea1ef */
  if (!C.cf) goto L_116ea1ef;
  /* 116ea1e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ea1e3 mov word ptr [eax*2 + 0x11710d80], 0 */
  w16((uint32_t)(EAX*2 + 0x11710d80), (0x0u));
  /* 116ea1ed jmp 0x116ea1d1 */
  goto L_116ea1d1;
L_116ea1ef:;
  /* 116ea1ef call 0x116ea3a0 */
  push32(0x116ea1f4u); f_116ea3a0();
  /* 116ea1f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116ea1f6 call 0x116e78c0 */
  push32(0x116ea1fbu); f_116e78c0();
  /* 116ea1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea1fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ea200 jmp 0x116ea230 */
  goto L_116ea230;
L_116ea202:;
  /* 116ea202 cmp dword ptr [0x1170f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea209 je 0x116ea223 */
  if (C.zf) goto L_116ea223;
  /* 116ea20b call 0x116ea320 */
  push32(0x116ea210u); f_116ea320();
  /* 116ea210 call 0x116ea3a0 */
  push32(0x116ea215u); f_116ea3a0();
  /* 116ea215 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116ea217 call 0x116e78c0 */
  push32(0x116ea21cu); f_116e78c0();
  /* 116ea21c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea21f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ea221 jmp 0x116ea230 */
  goto L_116ea230;
L_116ea223:;
  /* 116ea223 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116ea225 call 0x116e78c0 */
  push32(0x116ea22au); f_116e78c0();
  /* 116ea22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea22d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ea230:;
  /* 116ea230 mov esp, ebp */
  ESP = (EBP);
  /* 116ea232 pop ebp */
  EBP = (pop32());
  /* 116ea233 ret  */
  ESPCHK(0x116e9ef0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x116ea240 (89 bytes, 21 insns) */
void f_116ea240(void) {
  FTRACE(0x116ea240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea240 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea241 mov ebp, esp */
  EBP = (ESP);
  /* 116ea243 mov dword ptr [0x1170f820], 0 */
  w32((uint32_t)(0x1170f820), (0x0u));
  /* 116ea24d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea251 jne 0x116ea265 */
  if (!C.zf) goto L_116ea265;
  /* 116ea253 mov dword ptr [0x1170f820], 1 */
  w32((uint32_t)(0x1170f820), (0x1u));
  /* 116ea25d call dword ptr [0x117122f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f8))), 0x116ea263u);
  /* 116ea263 jmp 0x116ea297 */
  goto L_116ea297;
L_116ea265:;
  /* 116ea265 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea269 jne 0x116ea27d */
  if (!C.zf) goto L_116ea27d;
  /* 116ea26b mov dword ptr [0x1170f820], 1 */
  w32((uint32_t)(0x1170f820), (0x1u));
  /* 116ea275 call dword ptr [0x11712308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712308))), 0x116ea27bu);
  /* 116ea27b jmp 0x116ea297 */
  goto L_116ea297;
L_116ea27d:;
  /* 116ea27d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea281 jne 0x116ea294 */
  if (!C.zf) goto L_116ea294;
  /* 116ea283 mov dword ptr [0x1170f820], 1 */
  w32((uint32_t)(0x1170f820), (0x1u));
  /* 116ea28d mov eax, dword ptr [0x1170f840] */
  EAX = (r32((uint32_t)(0x1170f840)));
  /* 116ea292 jmp 0x116ea297 */
  goto L_116ea297;
L_116ea294:;
  /* 116ea294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_116ea297:;
  /* 116ea297 pop ebp */
  EBP = (pop32());
  /* 116ea298 ret  */
  ESPCHK(0x116ea240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a0 @ 0x116ea2a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_116ea2a0(void) {
  FTRACE(0x116ea2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea2a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ea2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea2a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ea2aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea2ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea2b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ea2b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea2ba ja 0x116ea2ea */
  if ((!C.cf&&!C.zf)) goto L_116ea2ea;
  /* 116ea2bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea2bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea2c1 mov dl, byte ptr [eax + 0x116ea304] */
  DL = (r8((uint32_t)(EAX + 0x116ea304)));
  /* 116ea2c7 jmp dword ptr [edx*4 + 0x116ea2f0] */
  switch (EDX) {
    case 0: goto L_116ea2ce;
    case 1: goto L_116ea2d5;
    case 2: goto L_116ea2dc;
    case 3: goto L_116ea2e3;
    case 4: goto L_116ea2ea;
    default: x86_unimpl("switch@0x116ea2c7 out of table"); return;
  }
L_116ea2ce:;
  /* 116ea2ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 116ea2d3 jmp 0x116ea2ec */
  goto L_116ea2ec;
L_116ea2d5:;
  /* 116ea2d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 116ea2da jmp 0x116ea2ec */
  goto L_116ea2ec;
L_116ea2dc:;
  /* 116ea2dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 116ea2e1 jmp 0x116ea2ec */
  goto L_116ea2ec;
L_116ea2e3:;
  /* 116ea2e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 116ea2e8 jmp 0x116ea2ec */
  goto L_116ea2ec;
L_116ea2ea:;
  /* 116ea2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ea2ec:;
  /* 116ea2ec mov esp, ebp */
  ESP = (EBP);
  /* 116ea2ee pop ebp */
  EBP = (pop32());
  /* 116ea2ef ret  */
  ESPCHK(0x116ea2a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x116ea320 (116 bytes, 29 insns) */
void f_116ea320(void) {
  FTRACE(0x116ea320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea320 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea321 mov ebp, esp */
  EBP = (ESP);
  /* 116ea323 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ea32b jmp 0x116ea336 */
  goto L_116ea336;
L_116ea32d:;
  /* 116ea32d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ea336:;
  /* 116ea336 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea33d jge 0x116ea34b */
  if ((C.sf==C.of)) goto L_116ea34b;
  /* 116ea33f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea342 mov byte ptr [ecx + 0x11710ea0], 0 */
  w8((uint32_t)(ECX + 0x11710ea0), (0x0u));
  /* 116ea349 jmp 0x116ea32d */
  goto L_116ea32d;
L_116ea34b:;
  /* 116ea34b mov dword ptr [0x11710d04], 0 */
  w32((uint32_t)(0x11710d04), (0x0u));
  /* 116ea355 mov dword ptr [0x11710d8c], 0 */
  w32((uint32_t)(0x11710d8c), (0x0u));
  /* 116ea35f mov dword ptr [0x11710fa4], 0 */
  w32((uint32_t)(0x11710fa4), (0x0u));
  /* 116ea369 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ea370 jmp 0x116ea37b */
  goto L_116ea37b;
L_116ea372:;
  /* 116ea372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea375 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea378 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116ea37b:;
  /* 116ea37b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea37f jge 0x116ea390 */
  if ((C.sf==C.of)) goto L_116ea390;
  /* 116ea381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea384 mov word ptr [eax*2 + 0x11710d80], 0 */
  w16((uint32_t)(EAX*2 + 0x11710d80), (0x0u));
  /* 116ea38e jmp 0x116ea372 */
  goto L_116ea372;
L_116ea390:;
  /* 116ea390 mov esp, ebp */
  ESP = (EBP);
  /* 116ea392 pop ebp */
  EBP = (pop32());
  /* 116ea393 ret  */
  ESPCHK(0x116ea320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3a0 @ 0x116ea3a0 (770 bytes, 175 insns) */
void f_116ea3a0(void) {
  FTRACE(0x116ea3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea3a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ea3a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea3a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 116ea3af push eax */
  push32((uint32_t)(EAX));
  /* 116ea3b0 mov ecx, dword ptr [0x11710d04] */
  ECX = (r32((uint32_t)(0x11710d04)));
  /* 116ea3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea3b7 call dword ptr [0x11712300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712300))), 0x116ea3bdu);
  /* 116ea3bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea3c0 jne 0x116ea5d9 */
  if (!C.zf) goto L_116ea5d9;
  /* 116ea3c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 116ea3d0 jmp 0x116ea3e1 */
  goto L_116ea3e1;
L_116ea3d2:;
  /* 116ea3d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea3d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea3db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_116ea3e1:;
  /* 116ea3e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea3eb jae 0x116ea402 */
  if (!C.cf) goto L_116ea402;
  /* 116ea3ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea3f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 116ea3f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 116ea400 jmp 0x116ea3d2 */
  goto L_116ea3d2;
L_116ea402:;
  /* 116ea402 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 116ea409 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 116ea40f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ea412 jmp 0x116ea41d */
  goto L_116ea41d;
L_116ea414:;
  /* 116ea414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea417 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea41a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ea41d:;
  /* 116ea41d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea420 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea422 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116ea424 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ea426 je 0x116ea468 */
  if (C.zf) goto L_116ea468;
  /* 116ea428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea42b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ea42d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ea42f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 116ea435 jmp 0x116ea446 */
  goto L_116ea446;
L_116ea437:;
  /* 116ea437 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea43d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea440 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_116ea446:;
  /* 116ea446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ea449 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ea44b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116ea44e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea454 ja 0x116ea466 */
  if ((!C.cf&&!C.zf)) goto L_116ea466;
  /* 116ea456 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea45c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 116ea464 jmp 0x116ea437 */
  goto L_116ea437;
L_116ea466:;
  /* 116ea466 jmp 0x116ea414 */
  goto L_116ea414;
L_116ea468:;
  /* 116ea468 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ea46a mov eax, dword ptr [0x11710fa4] */
  EAX = (r32((uint32_t)(0x11710fa4)));
  /* 116ea46f push eax */
  push32((uint32_t)(EAX));
  /* 116ea470 mov ecx, dword ptr [0x11710d04] */
  ECX = (r32((uint32_t)(0x11710d04)));
  /* 116ea476 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea477 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 116ea47d push edx */
  push32((uint32_t)(EDX));
  /* 116ea47e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ea483 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 116ea489 push eax */
  push32((uint32_t)(EAX));
  /* 116ea48a push 1 */
  push32((uint32_t)(0x1u));
  /* 116ea48c call 0x116ec050 */
  push32(0x116ea491u); f_116ec050();
  /* 116ea491 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea494 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ea496 mov ecx, dword ptr [0x11710d04] */
  ECX = (r32((uint32_t)(0x11710d04)));
  /* 116ea49c push ecx */
  push32((uint32_t)(ECX));
  /* 116ea49d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ea4a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 116ea4a8 push edx */
  push32((uint32_t)(EDX));
  /* 116ea4a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ea4ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 116ea4b4 push eax */
  push32((uint32_t)(EAX));
  /* 116ea4b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ea4ba mov ecx, dword ptr [0x11710fa4] */
  ECX = (r32((uint32_t)(0x11710fa4)));
  /* 116ea4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea4c1 call 0x116ec210 */
  push32(0x116ea4c6u); f_116ec210();
  /* 116ea4c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea4c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ea4cb mov edx, dword ptr [0x11710d04] */
  EDX = (r32((uint32_t)(0x11710d04)));
  /* 116ea4d1 push edx */
  push32((uint32_t)(EDX));
  /* 116ea4d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ea4d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 116ea4dd push eax */
  push32((uint32_t)(EAX));
  /* 116ea4de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ea4e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 116ea4e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116ea4ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 116ea4ef mov edx, dword ptr [0x11710fa4] */
  EDX = (r32((uint32_t)(0x11710fa4)));
  /* 116ea4f5 push edx */
  push32((uint32_t)(EDX));
  /* 116ea4f6 call 0x116ec210 */
  push32(0x116ea4fbu); f_116ec210();
  /* 116ea4fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea4fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 116ea508 jmp 0x116ea519 */
  goto L_116ea519;
L_116ea50a:;
  /* 116ea50a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea510 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea513 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_116ea519:;
  /* 116ea519 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea523 jae 0x116ea5d4 */
  if (!C.cf) goto L_116ea5d4;
  /* 116ea529 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea52f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea531 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 116ea539 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116ea53c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ea53e je 0x116ea576 */
  if (C.zf) goto L_116ea576;
  /* 116ea540 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea546 mov cl, byte ptr [eax + 0x11710ea1] */
  CL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116ea54c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 116ea54f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea555 mov byte ptr [edx + 0x11710ea1], cl */
  w8((uint32_t)(EDX + 0x11710ea1), (CL));
  /* 116ea55b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea561 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea567 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 116ea56e mov byte ptr [eax + 0x11710da0], dl */
  w8((uint32_t)(EAX + 0x11710da0), (DL));
  /* 116ea574 jmp 0x116ea5cf */
  goto L_116ea5cf;
L_116ea576:;
  /* 116ea576 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea57c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ea57e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 116ea586 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116ea589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ea58b je 0x116ea5c2 */
  if (C.zf) goto L_116ea5c2;
  /* 116ea58d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea593 mov al, byte ptr [edx + 0x11710ea1] */
  AL = (r8((uint32_t)(EDX + 0x11710ea1)));
  /* 116ea599 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116ea59b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea5a1 mov byte ptr [ecx + 0x11710ea1], al */
  w8((uint32_t)(ECX + 0x11710ea1), (AL));
  /* 116ea5a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea5ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea5b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 116ea5ba mov byte ptr [edx + 0x11710da0], cl */
  w8((uint32_t)(EDX + 0x11710da0), (CL));
  /* 116ea5c0 jmp 0x116ea5cf */
  goto L_116ea5cf;
L_116ea5c2:;
  /* 116ea5c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea5c8 mov byte ptr [edx + 0x11710da0], 0 */
  w8((uint32_t)(EDX + 0x11710da0), (0x0u));
L_116ea5cf:;
  /* 116ea5cf jmp 0x116ea50a */
  goto L_116ea50a;
L_116ea5d4:;
  /* 116ea5d4 jmp 0x116ea69e */
  goto L_116ea69e;
L_116ea5d9:;
  /* 116ea5d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 116ea5e3 jmp 0x116ea5f4 */
  goto L_116ea5f4;
L_116ea5e5:;
  /* 116ea5e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea5eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea5ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_116ea5f4:;
  /* 116ea5f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea5fe jae 0x116ea69e */
  if (!C.cf) goto L_116ea69e;
  /* 116ea604 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea60b jb 0x116ea648 */
  if (C.cf) goto L_116ea648;
  /* 116ea60d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea614 ja 0x116ea648 */
  if ((!C.cf&&!C.zf)) goto L_116ea648;
  /* 116ea616 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea61c mov dl, byte ptr [ecx + 0x11710ea1] */
  DL = (r8((uint32_t)(ECX + 0x11710ea1)));
  /* 116ea622 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 116ea625 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea62b mov byte ptr [eax + 0x11710ea1], dl */
  w8((uint32_t)(EAX + 0x11710ea1), (DL));
  /* 116ea631 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea637 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea63a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea640 mov byte ptr [edx + 0x11710da0], cl */
  w8((uint32_t)(EDX + 0x11710da0), (CL));
  /* 116ea646 jmp 0x116ea699 */
  goto L_116ea699;
L_116ea648:;
  /* 116ea648 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea64f jb 0x116ea68c */
  if (C.cf) goto L_116ea68c;
  /* 116ea651 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea658 ja 0x116ea68c */
  if ((!C.cf&&!C.zf)) goto L_116ea68c;
  /* 116ea65a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea660 mov cl, byte ptr [eax + 0x11710ea1] */
  CL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116ea666 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116ea669 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea66f mov byte ptr [edx + 0x11710ea1], cl */
  w8((uint32_t)(EDX + 0x11710ea1), (CL));
  /* 116ea675 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea67b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea67e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea684 mov byte ptr [ecx + 0x11710da0], al */
  w8((uint32_t)(ECX + 0x11710da0), (AL));
  /* 116ea68a jmp 0x116ea699 */
  goto L_116ea699;
L_116ea68c:;
  /* 116ea68c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 116ea692 mov byte ptr [edx + 0x11710da0], 0 */
  w8((uint32_t)(EDX + 0x11710da0), (0x0u));
L_116ea699:;
  /* 116ea699 jmp 0x116ea5e5 */
  goto L_116ea5e5;
L_116ea69e:;
  /* 116ea69e mov esp, ebp */
  ESP = (EBP);
  /* 116ea6a0 pop ebp */
  EBP = (pop32());
  /* 116ea6a1 ret  */
  ESPCHK(0x116ea3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x116ea6b0 (23 bytes, 9 insns) */
void f_116ea6b0(void) {
  FTRACE(0x116ea6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea6b1 mov ebp, esp */
  EBP = (ESP);
  /* 116ea6b3 cmp dword ptr [0x11710d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea6ba je 0x116ea6c3 */
  if (C.zf) goto L_116ea6c3;
  /* 116ea6bc mov eax, dword ptr [0x11710d04] */
  EAX = (r32((uint32_t)(0x11710d04)));
  /* 116ea6c1 jmp 0x116ea6c5 */
  goto L_116ea6c5;
L_116ea6c3:;
  /* 116ea6c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ea6c5:;
  /* 116ea6c5 pop ebp */
  EBP = (pop32());
  /* 116ea6c6 ret  */
  ESPCHK(0x116ea6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d0 @ 0x116ea6d0 (34 bytes, 10 insns) */
void f_116ea6d0(void) {
  FTRACE(0x116ea6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea6d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ea6d3 cmp dword ptr [0x11711150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11711150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea6da jne 0x116ea6f0 */
  if (!C.zf) goto L_116ea6f0;
  /* 116ea6dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 116ea6de call 0x116e9ef0 */
  push32(0x116ea6e3u); f_116e9ef0();
  /* 116ea6e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea6e6 mov dword ptr [0x11711150], 1 */
  w32((uint32_t)(0x11711150), (0x1u));
L_116ea6f0:;
  /* 116ea6f0 pop ebp */
  EBP = (pop32());
  /* 116ea6f1 ret  */
  ESPCHK(0x116ea6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a700 @ 0x116ea700 (664 bytes, 260 insns) [15 switch table(s)] */
void f_116ea700(void) {
  FTRACE(0x116ea700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ea700 push ebp */
  push32((uint32_t)(EBP));
  /* 116ea701 mov ebp, esp */
  EBP = (ESP);
  /* 116ea703 push edi */
  push32((uint32_t)(EDI));
  /* 116ea704 push esi */
  push32((uint32_t)(ESI));
  /* 116ea705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116ea708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ea70b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea70e mov eax, ecx */
  EAX = (ECX);
  /* 116ea710 mov edx, ecx */
  EDX = (ECX);
  /* 116ea712 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea714 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea716 jbe 0x116ea720 */
  if ((C.cf||C.zf)) goto L_116ea720;
  /* 116ea718 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea71a jb 0x116ea898 */
  if (C.cf) goto L_116ea898;
L_116ea720:;
  /* 116ea720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116ea726 jne 0x116ea73c */
  if (!C.zf) goto L_116ea73c;
  /* 116ea728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea72b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116ea72e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea731 jb 0x116ea75c */
  if (C.cf) goto L_116ea75c;
  /* 116ea733 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea735 jmp dword ptr [edx*4 + 0x116ea848] */
  switch (EDX) {
    case 0: goto L_116ea858;
    case 1: goto L_116ea860;
    case 2: goto L_116ea86c;
    case 3: goto L_116ea880;
    default: x86_unimpl("switch@0x116ea735 out of table"); return;
  }
L_116ea73c:;
  /* 116ea73c mov eax, edi */
  EAX = (EDI);
  /* 116ea73e mov edx, 3 */
  EDX = (0x3u);
  /* 116ea743 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea746 jb 0x116ea754 */
  if (C.cf) goto L_116ea754;
  /* 116ea748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116ea74b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea74d jmp dword ptr [eax*4 + 0x116ea760] */
  switch (EAX) {
    case 1: goto L_116ea770;
    case 2: goto L_116ea79c;
    case 3: goto L_116ea7c0;
    default: x86_unimpl("switch@0x116ea74d out of table"); return;
  }
L_116ea754:;
  /* 116ea754 jmp dword ptr [ecx*4 + 0x116ea858] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x116ea858)))); return;
  /* 116ea75b nop  */
  /* nop */
L_116ea75c:;
  /* 116ea75c jmp dword ptr [ecx*4 + 0x116ea7dc] */
  switch (ECX) {
    case 0: goto L_116ea83f;
    case 1: goto L_116ea82c;
    case 2: goto L_116ea824;
    case 3: goto L_116ea81c;
    case 4: goto L_116ea814;
    case 5: goto L_116ea80c;
    case 6: goto L_116ea804;
    case 7: goto L_116ea7fc;
    default: x86_unimpl("switch@0x116ea75c out of table"); return;
  }
  /* 116ea763 nop  */
  /* nop */
L_116ea770:;
  /* 116ea770 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea772 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ea774 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ea776 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ea779 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ea77c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ea77f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea782 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ea785 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea788 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea78b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea78e jb 0x116ea75c */
  if (C.cf) goto L_116ea75c;
  /* 116ea790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea792 jmp dword ptr [edx*4 + 0x116ea848] */
  switch (EDX) {
    case 0: goto L_116ea858;
    case 1: goto L_116ea860;
    case 2: goto L_116ea86c;
    case 3: goto L_116ea880;
    default: x86_unimpl("switch@0x116ea792 out of table"); return;
  }
  /* 116ea799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ea79c:;
  /* 116ea79c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea79e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ea7a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ea7a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ea7a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea7a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ea7ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea7ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea7b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea7b4 jb 0x116ea75c */
  if (C.cf) goto L_116ea75c;
  /* 116ea7b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea7b8 jmp dword ptr [edx*4 + 0x116ea848] */
  switch (EDX) {
    case 0: goto L_116ea858;
    case 1: goto L_116ea860;
    case 2: goto L_116ea86c;
    case 3: goto L_116ea880;
    default: x86_unimpl("switch@0x116ea7b8 out of table"); return;
  }
  /* 116ea7bf nop  */
  /* nop */
L_116ea7c0:;
  /* 116ea7c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea7c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ea7c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ea7c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116ea7c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea7ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116ea7cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea7ce jb 0x116ea75c */
  if (C.cf) goto L_116ea75c;
  /* 116ea7d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea7d2 jmp dword ptr [edx*4 + 0x116ea848] */
  switch (EDX) {
    case 0: goto L_116ea858;
    case 1: goto L_116ea860;
    case 2: goto L_116ea86c;
    case 3: goto L_116ea880;
    default: x86_unimpl("switch@0x116ea7d2 out of table"); return;
  }
  /* 116ea7d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ea7fc:;
  /* 116ea7fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 116ea800 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_116ea804:;
  /* 116ea804 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 116ea808 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_116ea80c:;
  /* 116ea80c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 116ea810 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_116ea814:;
  /* 116ea814 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 116ea818 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_116ea81c:;
  /* 116ea81c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 116ea820 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_116ea824:;
  /* 116ea824 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 116ea828 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_116ea82c:;
  /* 116ea82c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 116ea830 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 116ea834 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116ea83b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea83d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116ea83f:;
  /* 116ea83f jmp dword ptr [edx*4 + 0x116ea848] */
  switch (EDX) {
    case 0: goto L_116ea858;
    case 1: goto L_116ea860;
    case 2: goto L_116ea86c;
    case 3: goto L_116ea880;
    default: x86_unimpl("switch@0x116ea83f out of table"); return;
  }
  /* 116ea846 mov edi, edi */
  EDI = (EDI);
L_116ea858:;
  /* 116ea858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea85b pop esi */
  ESI = (pop32());
  /* 116ea85c pop edi */
  EDI = (pop32());
  /* 116ea85d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ea85e ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116ea85f nop  */
  /* nop */
L_116ea860:;
  /* 116ea860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ea862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ea864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea867 pop esi */
  ESI = (pop32());
  /* 116ea868 pop edi */
  EDI = (pop32());
  /* 116ea869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ea86a ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116ea86b nop  */
  /* nop */
L_116ea86c:;
  /* 116ea86c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ea86e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ea870 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ea873 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ea876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea879 pop esi */
  ESI = (pop32());
  /* 116ea87a pop edi */
  EDI = (pop32());
  /* 116ea87b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ea87c ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116ea87d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ea880:;
  /* 116ea880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ea882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ea884 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ea887 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ea88a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ea88d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ea890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea893 pop esi */
  ESI = (pop32());
  /* 116ea894 pop edi */
  EDI = (pop32());
  /* 116ea895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ea896 ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116ea897 nop  */
  /* nop */
L_116ea898:;
  /* 116ea898 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 116ea89c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 116ea8a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116ea8a6 jne 0x116ea8cc */
  if (!C.zf) goto L_116ea8cc;
  /* 116ea8a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea8ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116ea8ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea8b1 jb 0x116ea8c0 */
  if (C.cf) goto L_116ea8c0;
  /* 116ea8b3 std  */
  C.df=1;
  /* 116ea8b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea8b6 cld  */
  C.df=0;
  /* 116ea8b7 jmp dword ptr [edx*4 + 0x116ea9e0] */
  switch (EDX) {
    case 0: goto L_116ea9f0;
    case 1: goto L_116ea9f8;
    case 2: goto L_116eaa08;
    case 3: goto L_116eaa1c;
    default: x86_unimpl("switch@0x116ea8b7 out of table"); return;
  }
  /* 116ea8be mov edi, edi */
  EDI = (EDI);
L_116ea8c0:;
  /* 116ea8c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ea8c2 jmp dword ptr [ecx*4 + 0x116ea990] */
  switch (ECX) {
    case 0: goto L_116ea9d7;
    default: x86_unimpl("switch@0x116ea8c2 out of table"); return;
  }
  /* 116ea8c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ea8cc:;
  /* 116ea8cc mov eax, edi */
  EAX = (EDI);
  /* 116ea8ce mov edx, 3 */
  EDX = (0x3u);
  /* 116ea8d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea8d6 jb 0x116ea8e4 */
  if (C.cf) goto L_116ea8e4;
  /* 116ea8d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116ea8db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea8dd jmp dword ptr [eax*4 + 0x116ea8e8] */
  switch (EAX) {
    case 1: goto L_116ea8f8;
    case 2: goto L_116ea918;
    case 3: goto L_116ea940;
    default: x86_unimpl("switch@0x116ea8dd out of table"); return;
  }
L_116ea8e4:;
  /* 116ea8e4 jmp dword ptr [ecx*4 + 0x116ea9e0] */
  switch (ECX) {
    case 0: goto L_116ea9f0;
    case 1: goto L_116ea9f8;
    case 2: goto L_116eaa08;
    case 3: goto L_116eaa1c;
    default: x86_unimpl("switch@0x116ea8e4 out of table"); return;
  }
  /* 116ea8eb nop  */
  /* nop */
L_116ea8f8:;
  /* 116ea8f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ea8fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea8fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ea900 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 116ea901 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea904 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 116ea905 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea908 jb 0x116ea8c0 */
  if (C.cf) goto L_116ea8c0;
  /* 116ea90a std  */
  C.df=1;
  /* 116ea90b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea90d cld  */
  C.df=0;
  /* 116ea90e jmp dword ptr [edx*4 + 0x116ea9e0] */
  switch (EDX) {
    case 0: goto L_116ea9f0;
    case 1: goto L_116ea9f8;
    case 2: goto L_116eaa08;
    case 3: goto L_116eaa1c;
    default: x86_unimpl("switch@0x116ea90e out of table"); return;
  }
  /* 116ea915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ea918:;
  /* 116ea918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ea91b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea91d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ea920 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ea923 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea926 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ea929 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea92c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea92f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea932 jb 0x116ea8c0 */
  if (C.cf) goto L_116ea8c0;
  /* 116ea934 std  */
  C.df=1;
  /* 116ea935 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea937 cld  */
  C.df=0;
  /* 116ea938 jmp dword ptr [edx*4 + 0x116ea9e0] */
  switch (EDX) {
    case 0: goto L_116ea9f0;
    case 1: goto L_116ea9f8;
    case 2: goto L_116eaa08;
    case 3: goto L_116eaa1c;
    default: x86_unimpl("switch@0x116ea938 out of table"); return;
  }
  /* 116ea93f nop  */
  /* nop */
L_116ea940:;
  /* 116ea940 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ea943 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ea945 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ea948 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ea94b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ea94e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ea951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ea954 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ea957 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea95a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ea95d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ea960 jb 0x116ea8c0 */
  if (C.cf) goto L_116ea8c0;
  /* 116ea966 std  */
  C.df=1;
  /* 116ea967 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ea969 cld  */
  C.df=0;
  /* 116ea96a jmp dword ptr [edx*4 + 0x116ea9e0] */
  switch (EDX) {
    case 0: goto L_116ea9f0;
    case 1: goto L_116ea9f8;
    case 2: goto L_116eaa08;
    case 3: goto L_116eaa1c;
    default: x86_unimpl("switch@0x116ea96a out of table"); return;
  }
  /* 116ea971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 116ea974 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 116ea975 test eax, 0xa99c116e */
  { uint32_t _r=(EAX)&(0xa99c116eu); fl_logic(_r,32); }
  /* 116ea97a outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ea97a");
  /* 116ea97b adc dword ptr [ecx + ebp*4 - 0x5653ee92], esp */
  { uint32_t _a=(r32((uint32_t)(ECX + EBP*4 + -0x5653ee92))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBP*4 + -0x5653ee92), (_r)); fl_add(_a,_b,_r,32); }
  /* 116ea982 outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ea982");
  /* 116ea983 adc dword ptr [ecx + ebp*4 - 0x5643ee92], esi */
  { uint32_t _a=(r32((uint32_t)(ECX + EBP*4 + -0x5643ee92))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBP*4 + -0x5643ee92), (_r)); fl_add(_a,_b,_r,32); }
  /* 116ea98a outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ea98a");
  /* 116ea98b adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea98e outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ea98e");
  /* 116ea994 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 116ea998 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 116ea99c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 116ea9a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 116ea9a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 116ea9a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 116ea9ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 116ea9b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 116ea9b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 116ea9b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 116ea9bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 116ea9c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 116ea9c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 116ea9c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 116ea9cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116ea9d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ea9d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116ea9d7:;
  /* 116ea9d7 jmp dword ptr [edx*4 + 0x116ea9e0] */
  switch (EDX) {
    case 0: goto L_116ea9f0;
    case 1: goto L_116ea9f8;
    case 2: goto L_116eaa08;
    case 3: goto L_116eaa1c;
    default: x86_unimpl("switch@0x116ea9d7 out of table"); return;
  }
  /* 116ea9de mov edi, edi */
  EDI = (EDI);
L_116ea9f0:;
  /* 116ea9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ea9f3 pop esi */
  ESI = (pop32());
  /* 116ea9f4 pop edi */
  EDI = (pop32());
  /* 116ea9f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ea9f6 ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116ea9f7 nop  */
  /* nop */
L_116ea9f8:;
  /* 116ea9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ea9fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ea9fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eaa01 pop esi */
  ESI = (pop32());
  /* 116eaa02 pop edi */
  EDI = (pop32());
  /* 116eaa03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116eaa04 ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116eaa05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116eaa08:;
  /* 116eaa08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116eaa0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116eaa0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116eaa11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116eaa14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eaa17 pop esi */
  ESI = (pop32());
  /* 116eaa18 pop edi */
  EDI = (pop32());
  /* 116eaa19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116eaa1a ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
  /* 116eaa1b nop  */
  /* nop */
L_116eaa1c:;
  /* 116eaa1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116eaa1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116eaa22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116eaa25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116eaa28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116eaa2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116eaa2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eaa31 pop esi */
  ESI = (pop32());
  /* 116eaa32 pop edi */
  EDI = (pop32());
  /* 116eaa33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116eaa34 ret  */
  ESPCHK(0x116ea700u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x116eaa40 (104 bytes, 43 insns) */
void f_116eaa40(void) {
  FTRACE(0x116eaa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eaa40 push ebx */
  push32((uint32_t)(EBX));
  /* 116eaa41 push esi */
  push32((uint32_t)(ESI));
  /* 116eaa42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 116eaa46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eaa48 jne 0x116eaa62 */
  if (!C.zf) goto L_116eaa62;
  /* 116eaa4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 116eaa4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116eaa52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116eaa54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116eaa56 mov ebx, eax */
  EBX = (EAX);
  /* 116eaa58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 116eaa5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116eaa5e mov edx, ebx */
  EDX = (EBX);
  /* 116eaa60 jmp 0x116eaaa3 */
  goto L_116eaaa3;
L_116eaa62:;
  /* 116eaa62 mov ecx, eax */
  ECX = (EAX);
  /* 116eaa64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 116eaa68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 116eaa6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_116eaa70:;
  /* 116eaa70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116eaa72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 116eaa74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116eaa76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 116eaa78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116eaa7a jne 0x116eaa70 */
  if (!C.zf) goto L_116eaa70;
  /* 116eaa7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116eaa7e mov esi, eax */
  ESI = (EAX);
  /* 116eaa80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116eaa84 mov ecx, eax */
  ECX = (EAX);
  /* 116eaa86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 116eaa8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116eaa8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eaa8e jb 0x116eaa9e */
  if (C.cf) goto L_116eaa9e;
  /* 116eaa90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eaa94 ja 0x116eaa9e */
  if ((!C.cf&&!C.zf)) goto L_116eaa9e;
  /* 116eaa96 jb 0x116eaa9f */
  if (C.cf) goto L_116eaa9f;
  /* 116eaa98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eaa9c jbe 0x116eaa9f */
  if ((C.cf||C.zf)) goto L_116eaa9f;
L_116eaa9e:;
  /* 116eaa9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_116eaa9f:;
  /* 116eaa9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116eaaa1 mov eax, esi */
  EAX = (ESI);
L_116eaaa3:;
  /* 116eaaa3 pop esi */
  ESI = (pop32());
  /* 116eaaa4 pop ebx */
  EBX = (pop32());
  /* 116eaaa5 ret 0x10 */
  ESPCHK(0x116eaa40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x116eaab0 (117 bytes, 44 insns) */
void f_116eaab0(void) {
  FTRACE(0x116eaab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eaab0 push ebx */
  push32((uint32_t)(EBX));
  /* 116eaab1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 116eaab5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eaab7 jne 0x116eaad1 */
  if (!C.zf) goto L_116eaad1;
  /* 116eaab9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 116eaabd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 116eaac1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116eaac3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116eaac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116eaac9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116eaacb mov eax, edx */
  EAX = (EDX);
  /* 116eaacd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116eaacf jmp 0x116eab21 */
  goto L_116eab21;
L_116eaad1:;
  /* 116eaad1 mov ecx, eax */
  ECX = (EAX);
  /* 116eaad3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 116eaad7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 116eaadb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_116eaadf:;
  /* 116eaadf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116eaae1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 116eaae3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116eaae5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 116eaae7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116eaae9 jne 0x116eaadf */
  if (!C.zf) goto L_116eaadf;
  /* 116eaaeb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116eaaed mov ecx, eax */
  ECX = (EAX);
  /* 116eaaef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116eaaf3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 116eaaf4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 116eaaf8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eaafa jb 0x116eab0a */
  if (C.cf) goto L_116eab0a;
  /* 116eaafc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eab00 ja 0x116eab0a */
  if ((!C.cf&&!C.zf)) goto L_116eab0a;
  /* 116eab02 jb 0x116eab12 */
  if (C.cf) goto L_116eab12;
  /* 116eab04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eab08 jbe 0x116eab12 */
  if ((C.cf||C.zf)) goto L_116eab12;
L_116eab0a:;
  /* 116eab0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eab0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116eab12:;
  /* 116eab12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eab16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eab1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116eab1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116eab1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116eab21:;
  /* 116eab21 pop ebx */
  EBX = (pop32());
  /* 116eab22 ret 0x10 */
  ESPCHK(0x116eaab0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ab30 @ 0x116eab30 (628 bytes, 214 insns) */
void f_116eab30(void) {
  FTRACE(0x116eab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eab30 push ebp */
  push32((uint32_t)(EBP));
  /* 116eab31 mov ebp, esp */
  EBP = (ESP);
  /* 116eab33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eab36 push ebx */
  push32((uint32_t)(EBX));
  /* 116eab37 push esi */
  push32((uint32_t)(ESI));
  /* 116eab38 push edi */
  push32((uint32_t)(EDI));
L_116eab39:;
  /* 116eab39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eab3d jne 0x116eab5d */
  if (!C.zf) goto L_116eab5d;
  /* 116eab3f push 0x1170af58 */
  push32((uint32_t)(0x1170af58u));
  /* 116eab44 push 0 */
  push32((uint32_t)(0x0u));
  /* 116eab46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 116eab48 push 0x1170af4c */
  push32((uint32_t)(0x1170af4cu));
  /* 116eab4d push 2 */
  push32((uint32_t)(0x2u));
  /* 116eab4f call 0x116e2ee0 */
  push32(0x116eab54u); f_116e2ee0();
  /* 116eab54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eab57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eab5a jne 0x116eab5d */
  if (!C.zf) goto L_116eab5d;
  /* 116eab5c int3  */
  x86_unimpl("int3 @ 0x116eab5c");
L_116eab5d:;
  /* 116eab5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eab5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eab61 jne 0x116eab39 */
  if (!C.zf) goto L_116eab39;
  /* 116eab63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eab66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116eab69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eab6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116eab6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116eab72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eab75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eab78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 116eab7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eab80 je 0x116eab8f */
  if (C.zf) goto L_116eab8f;
  /* 116eab82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eab85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116eab88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 116eab8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eab8d je 0x116eaba5 */
  if (C.zf) goto L_116eaba5;
L_116eab8f:;
  /* 116eab8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eab92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116eab95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116eab97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eab9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 116eab9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116eaba0 jmp 0x116ead9d */
  goto L_116ead9d;
L_116eaba5:;
  /* 116eaba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eaba8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116eabab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116eabae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eabb0 je 0x116eabfc */
  if (C.zf) goto L_116eabfc;
  /* 116eabb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabb5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116eabbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116eabc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116eabc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eabc7 je 0x116eabe5 */
  if (C.zf) goto L_116eabe5;
  /* 116eabc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116eabd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116eabd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eabda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 116eabdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabe0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116eabe3 jmp 0x116eabfc */
  goto L_116eabfc;
L_116eabe5:;
  /* 116eabe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabe8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eabeb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116eabee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabf1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116eabf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116eabf7 jmp 0x116ead9d */
  goto L_116ead9d;
L_116eabfc:;
  /* 116eabfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eabff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eac02 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116eac05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac08 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116eac0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac0e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eac11 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 116eac14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac17 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116eac1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac1d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116eac24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116eac2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eac2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116eac31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116eac37 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 116eac3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eac3f jne 0x116eac6f */
  if (!C.zf) goto L_116eac6f;
  /* 116eac41 cmp dword ptr [ebp - 8], 0x1170e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1170e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eac48 je 0x116eac53 */
  if (C.zf) goto L_116eac53;
  /* 116eac4a cmp dword ptr [ebp - 8], 0x1170e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1170e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eac51 jne 0x116eac63 */
  if (!C.zf) goto L_116eac63;
L_116eac53:;
  /* 116eac53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116eac56 push edx */
  push32((uint32_t)(EDX));
  /* 116eac57 call 0x116ecaa0 */
  push32(0x116eac5cu); f_116ecaa0();
  /* 116eac5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eac5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eac61 jne 0x116eac6f */
  if (!C.zf) goto L_116eac6f;
L_116eac63:;
  /* 116eac63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac66 push eax */
  push32((uint32_t)(EAX));
  /* 116eac67 call 0x116ec9d0 */
  push32(0x116eac6cu); f_116ec9d0();
  /* 116eac6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eac6f:;
  /* 116eac6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac72 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eac75 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 116eac7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eac7d je 0x116ead5b */
  if (C.zf) goto L_116ead5b;
L_116eac83:;
  /* 116eac83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eac89 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 116eac8b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eac8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eac90 jge 0x116eacb3 */
  if ((C.sf==C.of)) goto L_116eacb3;
  /* 116eac92 push 0x1170af0c */
  push32((uint32_t)(0x1170af0cu));
  /* 116eac97 push 0 */
  push32((uint32_t)(0x0u));
  /* 116eac99 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 116eac9e push 0x1170af4c */
  push32((uint32_t)(0x1170af4cu));
  /* 116eaca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eaca5 call 0x116e2ee0 */
  push32(0x116eacaau); f_116e2ee0();
  /* 116eacaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eacad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eacb0 jne 0x116eacb3 */
  if (!C.zf) goto L_116eacb3;
  /* 116eacb2 int3  */
  x86_unimpl("int3 @ 0x116eacb2");
L_116eacb3:;
  /* 116eacb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eacb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eacb7 jne 0x116eac83 */
  if (!C.zf) goto L_116eac83;
  /* 116eacb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eacbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eacbf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116eacc1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eacc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eacc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eacca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116eaccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eacd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eacd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116eacd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eacd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116eacdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eacde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eace1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116eace4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eace8 jle 0x116ead06 */
  if ((C.zf||C.sf!=C.of)) goto L_116ead06;
  /* 116eacea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eaced push ecx */
  push32((uint32_t)(ECX));
  /* 116eacee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eacf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116eacf4 push eax */
  push32((uint32_t)(EAX));
  /* 116eacf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116eacf8 push ecx */
  push32((uint32_t)(ECX));
  /* 116eacf9 call 0x116ec6c0 */
  push32(0x116eacfeu); f_116ec6c0();
  /* 116eacfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ead01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ead04 jmp 0x116ead4e */
  goto L_116ead4e;
L_116ead06:;
  /* 116ead06 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ead0a je 0x116ead29 */
  if (C.zf) goto L_116ead29;
  /* 116ead0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ead0f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ead12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ead15 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ead18 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ead1b mov ecx, dword ptr [edx*4 + 0x11711000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ead22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ead24 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116ead27 jmp 0x116ead30 */
  goto L_116ead30;
L_116ead29:;
  /* 116ead29 mov dword ptr [ebp - 0x14], 0x1170da60 */
  w32((uint32_t)(EBP + -0x14), (0x1170da60u));
L_116ead30:;
  /* 116ead30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116ead33 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 116ead37 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116ead3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ead3c je 0x116ead4e */
  if (C.zf) goto L_116ead4e;
  /* 116ead3e push 2 */
  push32((uint32_t)(0x2u));
  /* 116ead40 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ead42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ead45 push ecx */
  push32((uint32_t)(ECX));
  /* 116ead46 call 0x116ec570 */
  push32(0x116ead4bu); f_116ec570();
  /* 116ead4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ead4e:;
  /* 116ead4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ead51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116ead54 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 116ead57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116ead59 jmp 0x116ead79 */
  goto L_116ead79;
L_116ead5b:;
  /* 116ead5b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116ead62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ead65 push edx */
  push32((uint32_t)(EDX));
  /* 116ead66 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116ead69 push eax */
  push32((uint32_t)(EAX));
  /* 116ead6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ead6d push ecx */
  push32((uint32_t)(ECX));
  /* 116ead6e call 0x116ec6c0 */
  push32(0x116ead73u); f_116ec6c0();
  /* 116ead73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ead76 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ead79:;
  /* 116ead79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ead7c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ead7f je 0x116ead95 */
  if (C.zf) goto L_116ead95;
  /* 116ead81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ead84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ead87 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116ead8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ead8d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 116ead90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ead93 jmp 0x116ead9d */
  goto L_116ead9d;
L_116ead95:;
  /* 116ead95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ead98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_116ead9d:;
  /* 116ead9d pop edi */
  EDI = (pop32());
  /* 116ead9e pop esi */
  ESI = (pop32());
  /* 116ead9f pop ebx */
  EBX = (pop32());
  /* 116eada0 mov esp, ebp */
  ESP = (EBP);
  /* 116eada2 pop ebp */
  EBP = (pop32());
  /* 116eada3 ret  */
  ESPCHK(0x116eab30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adb0 @ 0x116eadb0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_116eadb0(void) {
  FTRACE(0x116eadb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eadb0 push ebp */
  push32((uint32_t)(EBP));
  /* 116eadb1 mov ebp, esp */
  EBP = (ESP);
  /* 116eadb3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eadb9 push ebx */
  push32((uint32_t)(EBX));
  /* 116eadba push esi */
  push32((uint32_t)(ESI));
  /* 116eadbb push edi */
  push32((uint32_t)(EDI));
  /* 116eadbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116eadc3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 116eadcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_116eadd4:;
  /* 116eadd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eadd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116eadd9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 116eaddc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eade0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eade3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eade6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116eade9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eadeb je 0x116eb9c7 */
  if (C.zf) goto L_116eb9c7;
  /* 116eadf1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eadf8 jl 0x116eb9c7 */
  if ((C.sf!=C.of)) goto L_116eb9c7;
  /* 116eadfe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eae02 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eae05 jl 0x116eae26 */
  if ((C.sf!=C.of)) goto L_116eae26;
  /* 116eae07 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eae0b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eae0e jg 0x116eae26 */
  if ((!C.zf&&C.sf==C.of)) goto L_116eae26;
  /* 116eae10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eae14 movsx ecx, byte ptr [eax + 0x1170af44] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1170af44))));
  /* 116eae1b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 116eae1e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 116eae24 jmp 0x116eae30 */
  goto L_116eae30;
L_116eae26:;
  /* 116eae26 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_116eae30:;
  /* 116eae30 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 116eae36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116eae39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eae3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116eae3f movsx edx, byte ptr [ecx + eax*8 + 0x1170af64] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1170af64))));
  /* 116eae47 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116eae4a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116eae4d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116eae50 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 116eae56 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eae5d ja 0x116eb9c2 */
  if ((!C.cf&&!C.zf)) goto L_116eb9c2;
  /* 116eae63 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 116eae69 jmp dword ptr [ecx*4 + 0x116eb9d4] */
  switch (ECX) {
    case 0: goto L_116eae70;
    case 1: goto L_116eaf0a;
    case 2: goto L_116eaf4c;
    case 3: goto L_116eafbb;
    case 4: goto L_116eb013;
    case 5: goto L_116eb022;
    case 6: goto L_116eb06e;
    case 7: goto L_116eb101;
    case 8: goto L_116eaf98;
    case 9: goto L_116eafa3;
    case 10: goto L_116eaf8e;
    case 11: goto L_116eaf83;
    case 12: goto L_116eafae;
    case 13: goto L_116eafb6;
    default: x86_unimpl("switch@0x116eae69 out of table"); return;
  }
L_116eae70:;
  /* 116eae70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116eae77 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116eae7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116eae80 mov eax, dword ptr [0x1170dc98] */
  EAX = (r32((uint32_t)(0x1170dc98)));
  /* 116eae85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116eae87 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116eae8b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 116eae91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eae93 je 0x116eaeed */
  if (C.zf) goto L_116eaeed;
  /* 116eae95 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 116eae9b push edx */
  push32((uint32_t)(EDX));
  /* 116eae9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eae9f push eax */
  push32((uint32_t)(EAX));
  /* 116eaea0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eaea4 push ecx */
  push32((uint32_t)(ECX));
  /* 116eaea5 call 0x116ebae0 */
  push32(0x116eaeaau); f_116ebae0();
  /* 116eaeaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eaead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eaeb0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116eaeb2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 116eaeb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eaeb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eaebb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116eaebe:;
  /* 116eaebe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eaec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eaec4 jne 0x116eaee7 */
  if (!C.zf) goto L_116eaee7;
  /* 116eaec6 push 0x1170afe4 */
  push32((uint32_t)(0x1170afe4u));
  /* 116eaecb push 0 */
  push32((uint32_t)(0x0u));
  /* 116eaecd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 116eaed2 push 0x1170afd8 */
  push32((uint32_t)(0x1170afd8u));
  /* 116eaed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eaed9 call 0x116e2ee0 */
  push32(0x116eaedeu); f_116e2ee0();
  /* 116eaede add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eaee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eaee4 jne 0x116eaee7 */
  if (!C.zf) goto L_116eaee7;
  /* 116eaee6 int3  */
  x86_unimpl("int3 @ 0x116eaee6");
L_116eaee7:;
  /* 116eaee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eaee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eaeeb jne 0x116eaebe */
  if (!C.zf) goto L_116eaebe;
L_116eaeed:;
  /* 116eaeed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 116eaef3 push ecx */
  push32((uint32_t)(ECX));
  /* 116eaef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eaef7 push edx */
  push32((uint32_t)(EDX));
  /* 116eaef8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eaefc push eax */
  push32((uint32_t)(EAX));
  /* 116eaefd call 0x116ebae0 */
  push32(0x116eaf02u); f_116ebae0();
  /* 116eaf02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eaf05 jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eaf0a:;
  /* 116eaf0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116eaf11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eaf14 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 116eaf1a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 116eaf20 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 116eaf26 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 116eaf2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116eaf2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116eaf36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 116eaf40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116eaf47 jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eaf4c:;
  /* 116eaf4c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eaf50 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 116eaf56 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 116eaf5c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eaf5f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 116eaf65 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eaf6c ja 0x116eafb6 */
  if ((!C.cf&&!C.zf)) goto L_116eafb6;
  /* 116eaf6e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 116eaf74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eaf76 mov al, byte ptr [ecx + 0x116eba0c] */
  AL = (r8((uint32_t)(ECX + 0x116eba0c)));
  /* 116eaf7c jmp dword ptr [eax*4 + 0x116eb9f4] */
  switch (EAX) {
    case 0: goto L_116eaf98;
    case 1: goto L_116eafa3;
    case 2: goto L_116eaf8e;
    case 3: goto L_116eaf83;
    case 4: goto L_116eafae;
    case 5: goto L_116eafb6;
    default: x86_unimpl("switch@0x116eaf7c out of table"); return;
  }
L_116eaf83:;
  /* 116eaf83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eaf86 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116eaf89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116eaf8c jmp 0x116eafb6 */
  goto L_116eafb6;
L_116eaf8e:;
  /* 116eaf8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eaf91 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116eaf93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eaf96 jmp 0x116eafb6 */
  goto L_116eafb6;
L_116eaf98:;
  /* 116eaf98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eaf9b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116eaf9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116eafa1 jmp 0x116eafb6 */
  goto L_116eafb6;
L_116eafa3:;
  /* 116eafa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eafa6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 116eafa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116eafac jmp 0x116eafb6 */
  goto L_116eafb6;
L_116eafae:;
  /* 116eafae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eafb1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 116eafb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116eafb6:;
  /* 116eafb6 jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eafbb:;
  /* 116eafbb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eafbf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eafc2 jne 0x116eaff7 */
  if (!C.zf) goto L_116eaff7;
  /* 116eafc4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116eafc7 push edx */
  push32((uint32_t)(EDX));
  /* 116eafc8 call 0x116ebbf0 */
  push32(0x116eafcdu); f_116ebbf0();
  /* 116eafcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eafd0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 116eafd6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eafdd jge 0x116eaff5 */
  if ((C.sf==C.of)) goto L_116eaff5;
  /* 116eafdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eafe2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116eafe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eafe7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 116eafed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116eafef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_116eaff5:;
  /* 116eaff5 jmp 0x116eb00e */
  goto L_116eb00e;
L_116eaff7:;
  /* 116eaff7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 116eaffd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116eb000 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb004 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 116eb008 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_116eb00e:;
  /* 116eb00e jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eb013:;
  /* 116eb013 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 116eb01d jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eb022:;
  /* 116eb022 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb026 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb029 jne 0x116eb052 */
  if (!C.zf) goto L_116eb052;
  /* 116eb02b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116eb02e push eax */
  push32((uint32_t)(EAX));
  /* 116eb02f call 0x116ebbf0 */
  push32(0x116eb034u); f_116ebbf0();
  /* 116eb034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb037 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 116eb03d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb044 jge 0x116eb050 */
  if ((C.sf==C.of)) goto L_116eb050;
  /* 116eb046 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_116eb050:;
  /* 116eb050 jmp 0x116eb069 */
  goto L_116eb069;
L_116eb052:;
  /* 116eb052 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 116eb058 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116eb05b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb05f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116eb063 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_116eb069:;
  /* 116eb069 jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eb06e:;
  /* 116eb06e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb072 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 116eb078 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 116eb07e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb081 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 116eb087 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb08e ja 0x116eb0fc */
  if ((!C.cf&&!C.zf)) goto L_116eb0fc;
  /* 116eb090 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 116eb096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eb098 mov al, byte ptr [ecx + 0x116eba31] */
  AL = (r8((uint32_t)(ECX + 0x116eba31)));
  /* 116eb09e jmp dword ptr [eax*4 + 0x116eba1d] */
  switch (EAX) {
    case 0: goto L_116eb0b0;
    case 1: goto L_116eb0e9;
    case 2: goto L_116eb0a5;
    case 3: goto L_116eb0f3;
    case 4: goto L_116eb0fc;
    default: x86_unimpl("switch@0x116eb09e out of table"); return;
  }
L_116eb0a5:;
  /* 116eb0a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb0a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb0ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116eb0ae jmp 0x116eb0fc */
  goto L_116eb0fc;
L_116eb0b0:;
  /* 116eb0b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eb0b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116eb0b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb0b9 jne 0x116eb0db */
  if (!C.zf) goto L_116eb0db;
  /* 116eb0bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eb0be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116eb0c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb0c5 jne 0x116eb0db */
  if (!C.zf) goto L_116eb0db;
  /* 116eb0c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eb0ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb0cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116eb0d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb0d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116eb0d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116eb0d9 jmp 0x116eb0e7 */
  goto L_116eb0e7;
L_116eb0db:;
  /* 116eb0db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 116eb0e2 jmp 0x116eae70 */
  goto L_116eae70;
L_116eb0e7:;
  /* 116eb0e7 jmp 0x116eb0fc */
  goto L_116eb0fc;
L_116eb0e9:;
  /* 116eb0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb0ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116eb0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eb0f1 jmp 0x116eb0fc */
  goto L_116eb0fc;
L_116eb0f3:;
  /* 116eb0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb0f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116eb0f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116eb0fc:;
  /* 116eb0fc jmp 0x116eb9c2 */
  goto L_116eb9c2;
L_116eb101:;
  /* 116eb101 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb105 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 116eb10b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 116eb111 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb114 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 116eb11a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb121 ja 0x116eb7e7 */
  if ((!C.cf&&!C.zf)) goto L_116eb7e7;
  /* 116eb127 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 116eb12d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116eb12f mov cl, byte ptr [edx + 0x116eba9c] */
  CL = (r8((uint32_t)(EDX + 0x116eba9c)));
  /* 116eb135 jmp dword ptr [ecx*4 + 0x116eba60] */
  switch (ECX) {
    case 0: goto L_116eb13c;
    case 1: goto L_116eb3d0;
    case 2: goto L_116eb260;
    case 3: goto L_116eb509;
    case 4: goto L_116eb1cb;
    case 5: goto L_116eb151;
    case 6: goto L_116eb4db;
    case 7: goto L_116eb3e0;
    case 8: goto L_116eb385;
    case 9: goto L_116eb555;
    case 10: goto L_116eb4ff;
    case 11: goto L_116eb276;
    case 12: goto L_116eb4f3;
    case 13: goto L_116eb515;
    case 14: goto L_116eb7e7;
    default: x86_unimpl("switch@0x116eb135 out of table"); return;
  }
L_116eb13c:;
  /* 116eb13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb13f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb146 jne 0x116eb151 */
  if (!C.zf) goto L_116eb151;
  /* 116eb148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb14b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116eb14e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116eb151:;
  /* 116eb151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb154 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb15a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb15c je 0x116eb197 */
  if (C.zf) goto L_116eb197;
  /* 116eb15e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116eb161 push eax */
  push32((uint32_t)(EAX));
  /* 116eb162 call 0x116ebc30 */
  push32(0x116eb167u); f_116ebc30();
  /* 116eb167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb16a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 116eb16e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 116eb172 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb173 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 116eb179 push edx */
  push32((uint32_t)(EDX));
  /* 116eb17a call 0x116ecd10 */
  push32(0x116eb17fu); f_116ecd10();
  /* 116eb17f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb182 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116eb185 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb189 jge 0x116eb195 */
  if ((C.sf==C.of)) goto L_116eb195;
  /* 116eb18b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_116eb195:;
  /* 116eb195 jmp 0x116eb1bd */
  goto L_116eb1bd;
L_116eb197:;
  /* 116eb197 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116eb19a push eax */
  push32((uint32_t)(EAX));
  /* 116eb19b call 0x116ebbf0 */
  push32(0x116eb1a0u); f_116ebbf0();
  /* 116eb1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb1a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 116eb1aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 116eb1b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 116eb1b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_116eb1bd:;
  /* 116eb1bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 116eb1c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116eb1c6 jmp 0x116eb7e7 */
  goto L_116eb7e7;
L_116eb1cb:;
  /* 116eb1cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116eb1ce push eax */
  push32((uint32_t)(EAX));
  /* 116eb1cf call 0x116ebbf0 */
  push32(0x116eb1d4u); f_116ebbf0();
  /* 116eb1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb1d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 116eb1dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb1e4 je 0x116eb1f2 */
  if (C.zf) goto L_116eb1f2;
  /* 116eb1e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116eb1ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb1f0 jne 0x116eb20c */
  if (!C.zf) goto L_116eb20c;
L_116eb1f2:;
  /* 116eb1f2 mov edx, dword ptr [0x1170dfb0] */
  EDX = (r32((uint32_t)(0x1170dfb0)));
  /* 116eb1f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116eb1fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb1fe push eax */
  push32((uint32_t)(EAX));
  /* 116eb1ff call 0x116e6c50 */
  push32(0x116eb204u); f_116e6c50();
  /* 116eb204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb207 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116eb20a jmp 0x116eb25b */
  goto L_116eb25b;
L_116eb20c:;
  /* 116eb20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb20f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eb217 je 0x116eb23c */
  if (C.zf) goto L_116eb23c;
  /* 116eb219 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116eb21f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116eb222 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116eb225 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116eb22b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 116eb22e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116eb230 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116eb233 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 116eb23a jmp 0x116eb25b */
  goto L_116eb25b;
L_116eb23c:;
  /* 116eb23c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116eb243 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116eb249 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116eb24c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116eb24f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 116eb255 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 116eb258 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116eb25b:;
  /* 116eb25b jmp 0x116eb7e7 */
  goto L_116eb7e7;
L_116eb260:;
  /* 116eb260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb263 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eb26b jne 0x116eb276 */
  if (!C.zf) goto L_116eb276;
  /* 116eb26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb270 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116eb273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116eb276:;
  /* 116eb276 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb27d jne 0x116eb28b */
  if (!C.zf) goto L_116eb28b;
  /* 116eb27f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 116eb289 jmp 0x116eb297 */
  goto L_116eb297;
L_116eb28b:;
  /* 116eb28b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 116eb291 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_116eb297:;
  /* 116eb297 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 116eb29d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 116eb2a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116eb2a6 push edx */
  push32((uint32_t)(EDX));
  /* 116eb2a7 call 0x116ebbf0 */
  push32(0x116eb2acu); f_116ebbf0();
  /* 116eb2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb2af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116eb2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb2b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb2bc je 0x116eb326 */
  if (C.zf) goto L_116eb326;
  /* 116eb2be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb2c2 jne 0x116eb2cd */
  if (!C.zf) goto L_116eb2cd;
  /* 116eb2c4 mov ecx, dword ptr [0x1170dfb4] */
  ECX = (r32((uint32_t)(0x1170dfb4)));
  /* 116eb2ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116eb2cd:;
  /* 116eb2cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 116eb2d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb2d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_116eb2dd:;
  /* 116eb2dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 116eb2e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 116eb2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb2ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 116eb2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb2f4 je 0x116eb316 */
  if (C.zf) goto L_116eb316;
  /* 116eb2f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 116eb2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eb2fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116eb301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb303 je 0x116eb316 */
  if (C.zf) goto L_116eb316;
  /* 116eb305 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 116eb30b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb30e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 116eb314 jmp 0x116eb2dd */
  goto L_116eb2dd;
L_116eb316:;
  /* 116eb316 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 116eb31c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb31f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116eb321 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116eb324 jmp 0x116eb380 */
  goto L_116eb380;
L_116eb326:;
  /* 116eb326 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb32a jne 0x116eb334 */
  if (!C.zf) goto L_116eb334;
  /* 116eb32c mov eax, dword ptr [0x1170dfb0] */
  EAX = (r32((uint32_t)(0x1170dfb0)));
  /* 116eb331 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_116eb334:;
  /* 116eb334 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb337 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_116eb33d:;
  /* 116eb33d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 116eb343 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 116eb349 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb34c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 116eb352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb354 je 0x116eb374 */
  if (C.zf) goto L_116eb374;
  /* 116eb356 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 116eb35c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116eb35f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb361 je 0x116eb374 */
  if (C.zf) goto L_116eb374;
  /* 116eb363 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 116eb369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb36c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 116eb372 jmp 0x116eb33d */
  goto L_116eb33d;
L_116eb374:;
  /* 116eb374 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 116eb37a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb37d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_116eb380:;
  /* 116eb380 jmp 0x116eb7e7 */
  goto L_116eb7e7;
L_116eb385:;
  /* 116eb385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116eb388 push edx */
  push32((uint32_t)(EDX));
  /* 116eb389 call 0x116ebbf0 */
  push32(0x116eb38eu); f_116ebbf0();
  /* 116eb38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb391 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 116eb397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb39a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb39f je 0x116eb3b3 */
  if (C.zf) goto L_116eb3b3;
  /* 116eb3a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 116eb3a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 116eb3ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 116eb3b1 jmp 0x116eb3c1 */
  goto L_116eb3c1;
L_116eb3b3:;
  /* 116eb3b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 116eb3b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 116eb3bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_116eb3c1:;
  /* 116eb3c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 116eb3cb jmp 0x116eb7e7 */
  goto L_116eb7e7;
L_116eb3d0:;
  /* 116eb3d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116eb3d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 116eb3da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 116eb3dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_116eb3e0:;
  /* 116eb3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb3e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 116eb3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eb3e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 116eb3ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116eb3f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb3f8 jge 0x116eb406 */
  if ((C.sf==C.of)) goto L_116eb406;
  /* 116eb3fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 116eb404 jmp 0x116eb422 */
  goto L_116eb422;
L_116eb406:;
  /* 116eb406 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb40d jne 0x116eb422 */
  if (!C.zf) goto L_116eb422;
  /* 116eb40f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb413 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb416 jne 0x116eb422 */
  if (!C.zf) goto L_116eb422;
  /* 116eb418 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_116eb422:;
  /* 116eb422 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116eb425 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb428 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 116eb42b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116eb42e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116eb433 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116eb436 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 116eb43c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 116eb442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eb445 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb446 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 116eb44c push edx */
  push32((uint32_t)(EDX));
  /* 116eb44d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb451 push eax */
  push32((uint32_t)(EAX));
  /* 116eb452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb455 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb456 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 116eb45c push edx */
  push32((uint32_t)(EDX));
  /* 116eb45d call dword ptr [0x1170e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170e3a0))), 0x116eb463u);
  /* 116eb463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb469 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb470 je 0x116eb488 */
  if (C.zf) goto L_116eb488;
  /* 116eb472 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb479 jne 0x116eb488 */
  if (!C.zf) goto L_116eb488;
  /* 116eb47b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb47e push ecx */
  push32((uint32_t)(ECX));
  /* 116eb47f call dword ptr [0x1170e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170e3ac))), 0x116eb485u);
  /* 116eb485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eb488:;
  /* 116eb488 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 116eb48c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb48f jne 0x116eb4aa */
  if (!C.zf) goto L_116eb4aa;
  /* 116eb491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb494 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb49b jne 0x116eb4aa */
  if (!C.zf) goto L_116eb4aa;
  /* 116eb49d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb4a1 call dword ptr [0x1170e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170e3a4))), 0x116eb4a7u);
  /* 116eb4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eb4aa:;
  /* 116eb4aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb4ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116eb4b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb4b3 jne 0x116eb4c7 */
  if (!C.zf) goto L_116eb4c7;
  /* 116eb4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb4b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116eb4bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116eb4be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb4c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116eb4c7:;
  /* 116eb4c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb4ca push eax */
  push32((uint32_t)(EAX));
  /* 116eb4cb call 0x116e6c50 */
  push32(0x116eb4d0u); f_116e6c50();
  /* 116eb4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116eb4d6 jmp 0x116eb7e7 */
  goto L_116eb7e7;
L_116eb4db:;
  /* 116eb4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb4de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb4e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116eb4e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 116eb4ee jmp 0x116eb575 */
  goto L_116eb575;
L_116eb4f3:;
  /* 116eb4f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 116eb4fd jmp 0x116eb575 */
  goto L_116eb575;
L_116eb4ff:;
  /* 116eb4ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_116eb509:;
  /* 116eb509 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 116eb513 jmp 0x116eb51f */
  goto L_116eb51f;
L_116eb515:;
  /* 116eb515 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_116eb51f:;
  /* 116eb51f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 116eb529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb52c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb532 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb534 je 0x116eb553 */
  if (C.zf) goto L_116eb553;
  /* 116eb536 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 116eb53d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 116eb543 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb546 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 116eb54c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_116eb553:;
  /* 116eb553 jmp 0x116eb575 */
  goto L_116eb575;
L_116eb555:;
  /* 116eb555 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 116eb55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb562 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eb56a je 0x116eb575 */
  if (C.zf) goto L_116eb575;
  /* 116eb56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb56f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116eb572 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116eb575:;
  /* 116eb575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb578 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb57f je 0x116eb59e */
  if (C.zf) goto L_116eb59e;
  /* 116eb581 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116eb584 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb585 call 0x116ebc10 */
  push32(0x116eb58au); f_116ebc10();
  /* 116eb58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb58d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116eb593 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 116eb599 jmp 0x116eb62f */
  goto L_116eb62f;
L_116eb59e:;
  /* 116eb59e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb5a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb5a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb5a6 je 0x116eb5f0 */
  if (C.zf) goto L_116eb5f0;
  /* 116eb5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb5ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb5b0 je 0x116eb5d0 */
  if (C.zf) goto L_116eb5d0;
  /* 116eb5b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116eb5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb5b6 call 0x116ebbf0 */
  push32(0x116eb5bbu); f_116ebbf0();
  /* 116eb5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb5be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 116eb5c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116eb5c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116eb5c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 116eb5ce jmp 0x116eb5ee */
  goto L_116eb5ee;
L_116eb5d0:;
  /* 116eb5d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116eb5d3 push edx */
  push32((uint32_t)(EDX));
  /* 116eb5d4 call 0x116ebbf0 */
  push32(0x116eb5d9u); f_116ebbf0();
  /* 116eb5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb5dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116eb5e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116eb5e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116eb5e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_116eb5ee:;
  /* 116eb5ee jmp 0x116eb62f */
  goto L_116eb62f;
L_116eb5f0:;
  /* 116eb5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb5f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb5f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb5f8 je 0x116eb615 */
  if (C.zf) goto L_116eb615;
  /* 116eb5fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116eb5fd push ecx */
  push32((uint32_t)(ECX));
  /* 116eb5fe call 0x116ebbf0 */
  push32(0x116eb603u); f_116ebbf0();
  /* 116eb603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116eb607 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116eb60d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 116eb613 jmp 0x116eb62f */
  goto L_116eb62f;
L_116eb615:;
  /* 116eb615 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 116eb618 push edx */
  push32((uint32_t)(EDX));
  /* 116eb619 call 0x116ebbf0 */
  push32(0x116eb61eu); f_116ebbf0();
  /* 116eb61e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116eb623 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 116eb629 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_116eb62f:;
  /* 116eb62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb632 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb637 je 0x116eb677 */
  if (C.zf) goto L_116eb677;
  /* 116eb639 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb640 jg 0x116eb677 */
  if ((!C.zf&&C.sf==C.of)) goto L_116eb677;
  /* 116eb642 jl 0x116eb64d */
  if ((C.sf!=C.of)) goto L_116eb64d;
  /* 116eb644 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb64b jae 0x116eb677 */
  if (!C.cf) goto L_116eb677;
L_116eb64d:;
  /* 116eb64d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 116eb653 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116eb655 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 116eb65b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb65e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116eb660 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116eb666 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 116eb66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb66f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116eb672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116eb675 jmp 0x116eb68f */
  goto L_116eb68f;
L_116eb677:;
  /* 116eb677 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 116eb67d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116eb683 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 116eb689 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_116eb68f:;
  /* 116eb68f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb692 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb69a jne 0x116eb6b7 */
  if (!C.zf) goto L_116eb6b7;
  /* 116eb69c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116eb6a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 116eb6a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb6ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116eb6b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_116eb6b7:;
  /* 116eb6b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb6be jge 0x116eb6cc */
  if ((C.sf==C.of)) goto L_116eb6cc;
  /* 116eb6c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 116eb6ca jmp 0x116eb6d5 */
  goto L_116eb6d5;
L_116eb6cc:;
  /* 116eb6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb6cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb6d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116eb6d5:;
  /* 116eb6d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116eb6db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 116eb6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb6e3 jne 0x116eb6ec */
  if (!C.zf) goto L_116eb6ec;
  /* 116eb6e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_116eb6ec:;
  /* 116eb6ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 116eb6ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116eb6f2:;
  /* 116eb6f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 116eb6f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 116eb6fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb701 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 116eb707 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb709 jg 0x116eb71f */
  if ((!C.zf&&C.sf==C.of)) goto L_116eb71f;
  /* 116eb70b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116eb711 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 116eb717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eb719 je 0x116eb7a0 */
  if (C.zf) goto L_116eb7a0;
L_116eb71f:;
  /* 116eb71f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 116eb725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116eb726 push edx */
  push32((uint32_t)(EDX));
  /* 116eb727 push eax */
  push32((uint32_t)(EAX));
  /* 116eb728 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 116eb72e push edx */
  push32((uint32_t)(EDX));
  /* 116eb72f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116eb735 push eax */
  push32((uint32_t)(EAX));
  /* 116eb736 call 0x116eaab0 */
  push32(0x116eb73bu); f_116eaab0();
  /* 116eb73b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb73e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 116eb744 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 116eb74a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116eb74b push edx */
  push32((uint32_t)(EDX));
  /* 116eb74c push eax */
  push32((uint32_t)(EAX));
  /* 116eb74d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 116eb753 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb754 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 116eb75a push edx */
  push32((uint32_t)(EDX));
  /* 116eb75b call 0x116eaa40 */
  push32(0x116eb760u); f_116eaa40();
  /* 116eb760 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 116eb766 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 116eb76c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb773 jle 0x116eb787 */
  if ((C.zf||C.sf!=C.of)) goto L_116eb787;
  /* 116eb775 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 116eb77b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb781 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_116eb787:;
  /* 116eb787 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb78a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 116eb790 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 116eb792 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb795 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb798 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116eb79b jmp 0x116eb6f2 */
  goto L_116eb6f2;
L_116eb7a0:;
  /* 116eb7a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 116eb7a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb7a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116eb7a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb7ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb7af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116eb7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb7b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb7bc je 0x116eb7e7 */
  if (C.zf) goto L_116eb7e7;
  /* 116eb7be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb7c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116eb7c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb7c7 jne 0x116eb7cf */
  if (!C.zf) goto L_116eb7cf;
  /* 116eb7c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb7cd jne 0x116eb7e7 */
  if (!C.zf) goto L_116eb7e7;
L_116eb7cf:;
  /* 116eb7cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb7d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb7d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116eb7d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb7db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 116eb7de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116eb7e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb7e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_116eb7e7:;
  /* 116eb7e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb7ee jne 0x116eb9c2 */
  if (!C.zf) goto L_116eb9c2;
  /* 116eb7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb7f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb7fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb7fc je 0x116eb84d */
  if (C.zf) goto L_116eb84d;
  /* 116eb7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb801 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eb809 je 0x116eb81b */
  if (C.zf) goto L_116eb81b;
  /* 116eb80b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 116eb812 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116eb819 jmp 0x116eb84d */
  goto L_116eb84d;
L_116eb81b:;
  /* 116eb81b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb81e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb823 je 0x116eb835 */
  if (C.zf) goto L_116eb835;
  /* 116eb825 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 116eb82c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116eb833 jmp 0x116eb84d */
  goto L_116eb84d;
L_116eb835:;
  /* 116eb835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb838 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 116eb83b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eb83d je 0x116eb84d */
  if (C.zf) goto L_116eb84d;
  /* 116eb83f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 116eb846 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_116eb84d:;
  /* 116eb84d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 116eb853 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb856 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb859 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 116eb85f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb862 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 116eb865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb867 jne 0x116eb885 */
  if (!C.zf) goto L_116eb885;
  /* 116eb869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116eb86f push eax */
  push32((uint32_t)(EAX));
  /* 116eb870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eb873 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb874 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 116eb87a push edx */
  push32((uint32_t)(EDX));
  /* 116eb87b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116eb87d call 0x116ebb60 */
  push32(0x116eb882u); f_116ebb60();
  /* 116eb882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eb885:;
  /* 116eb885 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116eb88b push eax */
  push32((uint32_t)(EAX));
  /* 116eb88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eb88f push ecx */
  push32((uint32_t)(ECX));
  /* 116eb890 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116eb893 push edx */
  push32((uint32_t)(EDX));
  /* 116eb894 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 116eb89a push eax */
  push32((uint32_t)(EAX));
  /* 116eb89b call 0x116ebba0 */
  push32(0x116eb8a0u); f_116ebba0();
  /* 116eb8a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb8a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116eb8a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eb8ab je 0x116eb8d3 */
  if (C.zf) goto L_116eb8d3;
  /* 116eb8ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb8b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb8b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb8b5 jne 0x116eb8d3 */
  if (!C.zf) goto L_116eb8d3;
  /* 116eb8b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116eb8bd push eax */
  push32((uint32_t)(EAX));
  /* 116eb8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eb8c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb8c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 116eb8c8 push edx */
  push32((uint32_t)(EDX));
  /* 116eb8c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116eb8cb call 0x116ebb60 */
  push32(0x116eb8d0u); f_116ebb60();
  /* 116eb8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eb8d3:;
  /* 116eb8d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb8d7 je 0x116eb981 */
  if (C.zf) goto L_116eb981;
  /* 116eb8dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb8e1 jle 0x116eb981 */
  if ((C.zf||C.sf!=C.of)) goto L_116eb981;
  /* 116eb8e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb8ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 116eb8f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116eb8f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_116eb8f9:;
  /* 116eb8f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 116eb8ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 116eb905 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eb908 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 116eb90e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb910 je 0x116eb97f */
  if (C.zf) goto L_116eb97f;
  /* 116eb912 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 116eb918 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 116eb91b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 116eb922 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 116eb929 push eax */
  push32((uint32_t)(EAX));
  /* 116eb92a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 116eb930 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb931 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 116eb937 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb93a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 116eb940 call 0x116ecd10 */
  push32(0x116eb945u); f_116ecd10();
  /* 116eb945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb948 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 116eb94e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eb955 jg 0x116eb959 */
  if ((!C.zf&&C.sf==C.of)) goto L_116eb959;
  /* 116eb957 jmp 0x116eb97f */
  goto L_116eb97f;
L_116eb959:;
  /* 116eb959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116eb95f push eax */
  push32((uint32_t)(EAX));
  /* 116eb960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eb963 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb964 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 116eb96a push edx */
  push32((uint32_t)(EDX));
  /* 116eb96b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 116eb971 push eax */
  push32((uint32_t)(EAX));
  /* 116eb972 call 0x116ebba0 */
  push32(0x116eb977u); f_116ebba0();
  /* 116eb977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eb97a jmp 0x116eb8f9 */
  goto L_116eb8f9;
L_116eb97f:;
  /* 116eb97f jmp 0x116eb99c */
  goto L_116eb99c;
L_116eb981:;
  /* 116eb981 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 116eb987 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eb98b push edx */
  push32((uint32_t)(EDX));
  /* 116eb98c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116eb98f push eax */
  push32((uint32_t)(EAX));
  /* 116eb990 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116eb993 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb994 call 0x116ebba0 */
  push32(0x116eb999u); f_116ebba0();
  /* 116eb999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eb99c:;
  /* 116eb99c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eb99f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116eb9a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eb9a4 je 0x116eb9c2 */
  if (C.zf) goto L_116eb9c2;
  /* 116eb9a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 116eb9ac push eax */
  push32((uint32_t)(EAX));
  /* 116eb9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eb9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 116eb9b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 116eb9b7 push edx */
  push32((uint32_t)(EDX));
  /* 116eb9b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116eb9ba call 0x116ebb60 */
  push32(0x116eb9bfu); f_116ebb60();
  /* 116eb9bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eb9c2:;
  /* 116eb9c2 jmp 0x116eadd4 */
  goto L_116eadd4;
L_116eb9c7:;
  /* 116eb9c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 116eb9cd pop edi */
  EDI = (pop32());
  /* 116eb9ce pop esi */
  ESI = (pop32());
  /* 116eb9cf pop ebx */
  EBX = (pop32());
  /* 116eb9d0 mov esp, ebp */
  ESP = (EBP);
  /* 116eb9d2 pop ebp */
  EBP = (pop32());
  /* 116eb9d3 ret  */
  ESPCHK(0x116eadb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x116ebae0 (119 bytes, 44 insns) */
void f_116ebae0(void) {
  FTRACE(0x116ebae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebae0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebae1 mov ebp, esp */
  EBP = (ESP);
  /* 116ebae3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ebae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebae7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116ebaea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebaed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebaf0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116ebaf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebaf6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebafa jl 0x116ebb22 */
  if ((C.sf!=C.of)) goto L_116ebb22;
  /* 116ebafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebaff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ebb01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 116ebb04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 116ebb06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 116ebb0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116ebb10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ebb13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebb16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116ebb18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebb1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebb1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116ebb20 jmp 0x116ebb35 */
  goto L_116ebb35;
L_116ebb22:;
  /* 116ebb22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebb25 push edx */
  push32((uint32_t)(EDX));
  /* 116ebb26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebb29 push eax */
  push32((uint32_t)(EAX));
  /* 116ebb2a call 0x116eab30 */
  push32(0x116ebb2fu); f_116eab30();
  /* 116ebb2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebb32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ebb35:;
  /* 116ebb35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebb39 jne 0x116ebb46 */
  if (!C.zf) goto L_116ebb46;
  /* 116ebb3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ebb3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116ebb44 jmp 0x116ebb53 */
  goto L_116ebb53;
L_116ebb46:;
  /* 116ebb46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ebb49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116ebb4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebb4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ebb51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116ebb53:;
  /* 116ebb53 mov esp, ebp */
  ESP = (EBP);
  /* 116ebb55 pop ebp */
  EBP = (pop32());
  /* 116ebb56 ret  */
  ESPCHK(0x116ebae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb60 @ 0x116ebb60 (53 bytes, 23 insns) */
void f_116ebb60(void) {
  FTRACE(0x116ebb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebb60 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebb61 mov ebp, esp */
  EBP = (ESP);
L_116ebb63:;
  /* 116ebb63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebb66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebb69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebb6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116ebb6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ebb71 jle 0x116ebb93 */
  if ((C.zf||C.sf!=C.of)) goto L_116ebb93;
  /* 116ebb73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ebb76 push edx */
  push32((uint32_t)(EDX));
  /* 116ebb77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ebb7a push eax */
  push32((uint32_t)(EAX));
  /* 116ebb7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebb7e push ecx */
  push32((uint32_t)(ECX));
  /* 116ebb7f call 0x116ebae0 */
  push32(0x116ebb84u); f_116ebae0();
  /* 116ebb84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebb87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ebb8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebb8d jne 0x116ebb91 */
  if (!C.zf) goto L_116ebb91;
  /* 116ebb8f jmp 0x116ebb93 */
  goto L_116ebb93;
L_116ebb91:;
  /* 116ebb91 jmp 0x116ebb63 */
  goto L_116ebb63;
L_116ebb93:;
  /* 116ebb93 pop ebp */
  EBP = (pop32());
  /* 116ebb94 ret  */
  ESPCHK(0x116ebb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x116ebba0 (74 bytes, 31 insns) */
void f_116ebba0(void) {
  FTRACE(0x116ebba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebba0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebba1 mov ebp, esp */
  EBP = (ESP);
  /* 116ebba3 push ecx */
  push32((uint32_t)(ECX));
L_116ebba4:;
  /* 116ebba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebba7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebbaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebbad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116ebbb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ebbb2 jle 0x116ebbe6 */
  if ((C.zf||C.sf!=C.of)) goto L_116ebbe6;
  /* 116ebbb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ebbb7 push edx */
  push32((uint32_t)(EDX));
  /* 116ebbb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ebbbb push eax */
  push32((uint32_t)(EAX));
  /* 116ebbbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebbbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ebbc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ebbc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ebbc8 push eax */
  push32((uint32_t)(EAX));
  /* 116ebbc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebbcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebbcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116ebbd2 call 0x116ebae0 */
  push32(0x116ebbd7u); f_116ebae0();
  /* 116ebbd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebbda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ebbdd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebbe0 jne 0x116ebbe4 */
  if (!C.zf) goto L_116ebbe4;
  /* 116ebbe2 jmp 0x116ebbe6 */
  goto L_116ebbe6;
L_116ebbe4:;
  /* 116ebbe4 jmp 0x116ebba4 */
  goto L_116ebba4;
L_116ebbe6:;
  /* 116ebbe6 mov esp, ebp */
  ESP = (EBP);
  /* 116ebbe8 pop ebp */
  EBP = (pop32());
  /* 116ebbe9 ret  */
  ESPCHK(0x116ebba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbf0 @ 0x116ebbf0 (26 bytes, 12 insns) */
void f_116ebbf0(void) {
  FTRACE(0x116ebbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebbf1 mov ebp, esp */
  EBP = (ESP);
  /* 116ebbf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebbf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ebbf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebbfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebbfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116ebc00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ebc05 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116ebc08 pop ebp */
  EBP = (pop32());
  /* 116ebc09 ret  */
  ESPCHK(0x116ebbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x116ebc10 (31 bytes, 14 insns) */
void f_116ebc10(void) {
  FTRACE(0x116ebc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebc10 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebc11 mov ebp, esp */
  EBP = (ESP);
  /* 116ebc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ebc18 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebc1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116ebc20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ebc25 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebc28 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116ebc2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116ebc2d pop ebp */
  EBP = (pop32());
  /* 116ebc2e ret  */
  ESPCHK(0x116ebc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x116ebc30 (27 bytes, 12 insns) */
void f_116ebc30(void) {
  FTRACE(0x116ebc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebc30 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebc31 mov ebp, esp */
  EBP = (ESP);
  /* 116ebc33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ebc38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebc3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116ebc40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ebc45 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 116ebc49 pop ebp */
  EBP = (pop32());
  /* 116ebc4a ret  */
  ESPCHK(0x116ebc30u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x116ebc50 (145 bytes, 42 insns) */
void f_116ebc50(void) {
  FTRACE(0x116ebc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebc50 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebc51 mov ebp, esp */
  EBP = (ESP);
  /* 116ebc53 push ecx */
  push32((uint32_t)(ECX));
  /* 116ebc54 call 0x116ebd00 */
  push32(0x116ebc59u); f_116ebd00();
  /* 116ebc59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116ebc5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ebc65 jmp 0x116ebc70 */
  goto L_116ebc70;
L_116ebc67:;
  /* 116ebc67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ebc6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebc6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116ebc70:;
  /* 116ebc70 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebc74 jae 0x116ebc9a */
  if (!C.cf) goto L_116ebc9a;
  /* 116ebc76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ebc79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebc7c cmp ecx, dword ptr [eax*8 + 0x1170dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1170dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebc83 jne 0x116ebc98 */
  if (!C.zf) goto L_116ebc98;
  /* 116ebc85 call 0x116ebcf0 */
  push32(0x116ebc8au); f_116ebcf0();
  /* 116ebc8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ebc8d mov ecx, dword ptr [edx*8 + 0x1170dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1170dfbc)));
  /* 116ebc94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116ebc96 jmp 0x116ebcdd */
  goto L_116ebcdd;
L_116ebc98:;
  /* 116ebc98 jmp 0x116ebc67 */
  goto L_116ebc67;
L_116ebc9a:;
  /* 116ebc9a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebc9e jb 0x116ebcb3 */
  if (C.cf) goto L_116ebcb3;
  /* 116ebca0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebca4 ja 0x116ebcb3 */
  if ((!C.cf&&!C.zf)) goto L_116ebcb3;
  /* 116ebca6 call 0x116ebcf0 */
  push32(0x116ebcabu); f_116ebcf0();
  /* 116ebcab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 116ebcb1 jmp 0x116ebcdd */
  goto L_116ebcdd;
L_116ebcb3:;
  /* 116ebcb3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebcba jb 0x116ebcd2 */
  if (C.cf) goto L_116ebcd2;
  /* 116ebcbc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebcc3 ja 0x116ebcd2 */
  if ((!C.cf&&!C.zf)) goto L_116ebcd2;
  /* 116ebcc5 call 0x116ebcf0 */
  push32(0x116ebccau); f_116ebcf0();
  /* 116ebcca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 116ebcd0 jmp 0x116ebcdd */
  goto L_116ebcdd;
L_116ebcd2:;
  /* 116ebcd2 call 0x116ebcf0 */
  push32(0x116ebcd7u); f_116ebcf0();
  /* 116ebcd7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_116ebcdd:;
  /* 116ebcdd mov esp, ebp */
  ESP = (EBP);
  /* 116ebcdf pop ebp */
  EBP = (pop32());
  /* 116ebce0 ret  */
  ESPCHK(0x116ebc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x116ebcf0 (13 bytes, 6 insns) */
void f_116ebcf0(void) {
  FTRACE(0x116ebcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebcf1 mov ebp, esp */
  EBP = (ESP);
  /* 116ebcf3 call 0x116e3860 */
  push32(0x116ebcf8u); f_116e3860();
  /* 116ebcf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebcfb pop ebp */
  EBP = (pop32());
  /* 116ebcfc ret  */
  ESPCHK(0x116ebcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd00 @ 0x116ebd00 (13 bytes, 6 insns) */
void f_116ebd00(void) {
  FTRACE(0x116ebd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebd00 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebd01 mov ebp, esp */
  EBP = (ESP);
  /* 116ebd03 call 0x116e3860 */
  push32(0x116ebd08u); f_116e3860();
  /* 116ebd08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebd0b pop ebp */
  EBP = (pop32());
  /* 116ebd0c ret  */
  ESPCHK(0x116ebd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x116ebd10 (664 bytes, 261 insns) [15 switch table(s)] */
void f_116ebd10(void) {
  FTRACE(0x116ebd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ebd10 push ebp */
  push32((uint32_t)(EBP));
  /* 116ebd11 mov ebp, esp */
  EBP = (ESP);
  /* 116ebd13 push edi */
  push32((uint32_t)(EDI));
  /* 116ebd14 push esi */
  push32((uint32_t)(ESI));
  /* 116ebd15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116ebd18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ebd1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebd1e mov eax, ecx */
  EAX = (ECX);
  /* 116ebd20 mov edx, ecx */
  EDX = (ECX);
  /* 116ebd22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebd24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebd26 jbe 0x116ebd30 */
  if ((C.cf||C.zf)) goto L_116ebd30;
  /* 116ebd28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebd2a jb 0x116ebea8 */
  if (C.cf) goto L_116ebea8;
L_116ebd30:;
  /* 116ebd30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116ebd36 jne 0x116ebd4c */
  if (!C.zf) goto L_116ebd4c;
  /* 116ebd38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebd3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116ebd3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebd41 jb 0x116ebd6c */
  if (C.cf) goto L_116ebd6c;
  /* 116ebd43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebd45 jmp dword ptr [edx*4 + 0x116ebe58] */
  switch (EDX) {
    case 0: goto L_116ebe68;
    case 1: goto L_116ebe70;
    case 2: goto L_116ebe7c;
    case 3: goto L_116ebe90;
    default: x86_unimpl("switch@0x116ebd45 out of table"); return;
  }
L_116ebd4c:;
  /* 116ebd4c mov eax, edi */
  EAX = (EDI);
  /* 116ebd4e mov edx, 3 */
  EDX = (0x3u);
  /* 116ebd53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebd56 jb 0x116ebd64 */
  if (C.cf) goto L_116ebd64;
  /* 116ebd58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116ebd5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebd5d jmp dword ptr [eax*4 + 0x116ebd70] */
  switch (EAX) {
    case 1: goto L_116ebd80;
    case 2: goto L_116ebdac;
    case 3: goto L_116ebdd0;
    default: x86_unimpl("switch@0x116ebd5d out of table"); return;
  }
L_116ebd64:;
  /* 116ebd64 jmp dword ptr [ecx*4 + 0x116ebe68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x116ebe68)))); return;
  /* 116ebd6b nop  */
  /* nop */
L_116ebd6c:;
  /* 116ebd6c jmp dword ptr [ecx*4 + 0x116ebdec] */
  switch (ECX) {
    case 0: goto L_116ebe4f;
    case 1: goto L_116ebe3c;
    case 2: goto L_116ebe34;
    case 3: goto L_116ebe2c;
    case 4: goto L_116ebe24;
    case 5: goto L_116ebe1c;
    case 6: goto L_116ebe14;
    case 7: goto L_116ebe0c;
    default: x86_unimpl("switch@0x116ebd6c out of table"); return;
  }
  /* 116ebd73 nop  */
  /* nop */
L_116ebd80:;
  /* 116ebd80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ebd82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ebd84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ebd86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ebd89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ebd8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ebd8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebd92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ebd95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebd98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebd9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebd9e jb 0x116ebd6c */
  if (C.cf) goto L_116ebd6c;
  /* 116ebda0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebda2 jmp dword ptr [edx*4 + 0x116ebe58] */
  switch (EDX) {
    case 0: goto L_116ebe68;
    case 1: goto L_116ebe70;
    case 2: goto L_116ebe7c;
    case 3: goto L_116ebe90;
    default: x86_unimpl("switch@0x116ebda2 out of table"); return;
  }
  /* 116ebda9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ebdac:;
  /* 116ebdac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ebdae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ebdb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ebdb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ebdb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebdb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ebdbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebdbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebdc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebdc4 jb 0x116ebd6c */
  if (C.cf) goto L_116ebd6c;
  /* 116ebdc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebdc8 jmp dword ptr [edx*4 + 0x116ebe58] */
  switch (EDX) {
    case 0: goto L_116ebe68;
    case 1: goto L_116ebe70;
    case 2: goto L_116ebe7c;
    case 3: goto L_116ebe90;
    default: x86_unimpl("switch@0x116ebdc8 out of table"); return;
  }
  /* 116ebdcf nop  */
  /* nop */
L_116ebdd0:;
  /* 116ebdd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ebdd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ebdd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ebdd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116ebdd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebdda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116ebddb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebdde jb 0x116ebd6c */
  if (C.cf) goto L_116ebd6c;
  /* 116ebde0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebde2 jmp dword ptr [edx*4 + 0x116ebe58] */
  switch (EDX) {
    case 0: goto L_116ebe68;
    case 1: goto L_116ebe70;
    case 2: goto L_116ebe7c;
    case 3: goto L_116ebe90;
    default: x86_unimpl("switch@0x116ebde2 out of table"); return;
  }
  /* 116ebde9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ebe0c:;
  /* 116ebe0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 116ebe10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_116ebe14:;
  /* 116ebe14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 116ebe18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_116ebe1c:;
  /* 116ebe1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 116ebe20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_116ebe24:;
  /* 116ebe24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 116ebe28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_116ebe2c:;
  /* 116ebe2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 116ebe30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_116ebe34:;
  /* 116ebe34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 116ebe38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_116ebe3c:;
  /* 116ebe3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 116ebe40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 116ebe44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116ebe4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebe4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116ebe4f:;
  /* 116ebe4f jmp dword ptr [edx*4 + 0x116ebe58] */
  switch (EDX) {
    case 0: goto L_116ebe68;
    case 1: goto L_116ebe70;
    case 2: goto L_116ebe7c;
    case 3: goto L_116ebe90;
    default: x86_unimpl("switch@0x116ebe4f out of table"); return;
  }
  /* 116ebe56 mov edi, edi */
  EDI = (EDI);
L_116ebe68:;
  /* 116ebe68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebe6b pop esi */
  ESI = (pop32());
  /* 116ebe6c pop edi */
  EDI = (pop32());
  /* 116ebe6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ebe6e ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ebe6f nop  */
  /* nop */
L_116ebe70:;
  /* 116ebe70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ebe72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ebe74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebe77 pop esi */
  ESI = (pop32());
  /* 116ebe78 pop edi */
  EDI = (pop32());
  /* 116ebe79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ebe7a ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ebe7b nop  */
  /* nop */
L_116ebe7c:;
  /* 116ebe7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ebe7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ebe80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ebe83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ebe86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebe89 pop esi */
  ESI = (pop32());
  /* 116ebe8a pop edi */
  EDI = (pop32());
  /* 116ebe8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ebe8c ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ebe8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ebe90:;
  /* 116ebe90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116ebe92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116ebe94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ebe97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ebe9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ebe9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ebea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ebea3 pop esi */
  ESI = (pop32());
  /* 116ebea4 pop edi */
  EDI = (pop32());
  /* 116ebea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ebea6 ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ebea7 nop  */
  /* nop */
L_116ebea8:;
  /* 116ebea8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 116ebeac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 116ebeb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116ebeb6 jne 0x116ebedc */
  if (!C.zf) goto L_116ebedc;
  /* 116ebeb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116ebebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebec1 jb 0x116ebed0 */
  if (C.cf) goto L_116ebed0;
  /* 116ebec3 std  */
  C.df=1;
  /* 116ebec4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebec6 cld  */
  C.df=0;
  /* 116ebec7 jmp dword ptr [edx*4 + 0x116ebff0] */
  switch (EDX) {
    case 0: goto L_116ec000;
    case 1: goto L_116ec008;
    case 2: goto L_116ec018;
    case 3: goto L_116ec02c;
    default: x86_unimpl("switch@0x116ebec7 out of table"); return;
  }
  /* 116ebece mov edi, edi */
  EDI = (EDI);
L_116ebed0:;
  /* 116ebed0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ebed2 jmp dword ptr [ecx*4 + 0x116ebfa0] */
  switch (ECX) {
    case 0: goto L_116ebfe7;
    default: x86_unimpl("switch@0x116ebed2 out of table"); return;
  }
  /* 116ebed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ebedc:;
  /* 116ebedc mov eax, edi */
  EAX = (EDI);
  /* 116ebede mov edx, 3 */
  EDX = (0x3u);
  /* 116ebee3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebee6 jb 0x116ebef4 */
  if (C.cf) goto L_116ebef4;
  /* 116ebee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116ebeeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebeed jmp dword ptr [eax*4 + 0x116ebef8] */
  switch (EAX) {
    case 1: goto L_116ebf08;
    case 2: goto L_116ebf28;
    case 3: goto L_116ebf50;
    default: x86_unimpl("switch@0x116ebeed out of table"); return;
  }
L_116ebef4:;
  /* 116ebef4 jmp dword ptr [ecx*4 + 0x116ebff0] */
  switch (ECX) {
    case 0: goto L_116ec000;
    case 1: goto L_116ec008;
    case 2: goto L_116ec018;
    case 3: goto L_116ec02c;
    default: x86_unimpl("switch@0x116ebef4 out of table"); return;
  }
  /* 116ebefb nop  */
  /* nop */
L_116ebf08:;
  /* 116ebf08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ebf0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ebf0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ebf10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 116ebf11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebf14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 116ebf15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebf18 jb 0x116ebed0 */
  if (C.cf) goto L_116ebed0;
  /* 116ebf1a std  */
  C.df=1;
  /* 116ebf1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebf1d cld  */
  C.df=0;
  /* 116ebf1e jmp dword ptr [edx*4 + 0x116ebff0] */
  switch (EDX) {
    case 0: goto L_116ec000;
    case 1: goto L_116ec008;
    case 2: goto L_116ec018;
    case 3: goto L_116ec02c;
    default: x86_unimpl("switch@0x116ebf1e out of table"); return;
  }
  /* 116ebf25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ebf28:;
  /* 116ebf28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ebf2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ebf2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ebf30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ebf33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebf36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ebf39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebf3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebf3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebf42 jb 0x116ebed0 */
  if (C.cf) goto L_116ebed0;
  /* 116ebf44 std  */
  C.df=1;
  /* 116ebf45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebf47 cld  */
  C.df=0;
  /* 116ebf48 jmp dword ptr [edx*4 + 0x116ebff0] */
  switch (EDX) {
    case 0: goto L_116ec000;
    case 1: goto L_116ec008;
    case 2: goto L_116ec018;
    case 3: goto L_116ec02c;
    default: x86_unimpl("switch@0x116ebf48 out of table"); return;
  }
  /* 116ebf4f nop  */
  /* nop */
L_116ebf50:;
  /* 116ebf50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ebf53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116ebf55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ebf58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ebf5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ebf5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ebf61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116ebf64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ebf67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebf6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ebf6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ebf70 jb 0x116ebed0 */
  if (C.cf) goto L_116ebed0;
  /* 116ebf76 std  */
  C.df=1;
  /* 116ebf77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116ebf79 cld  */
  C.df=0;
  /* 116ebf7a jmp dword ptr [edx*4 + 0x116ebff0] */
  switch (EDX) {
    case 0: goto L_116ec000;
    case 1: goto L_116ec008;
    case 2: goto L_116ec018;
    case 3: goto L_116ec02c;
    default: x86_unimpl("switch@0x116ebf7a out of table"); return;
  }
  /* 116ebf81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 116ebf84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 116ebf85 mov edi, 0xbfac116e */
  EDI = (0xbfac116eu);
  /* 116ebf8a outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ebf8a");
  /* 116ebf8b adc dword ptr [edi + edi*4 - 0x4043ee92], esi */
  { uint32_t _a=(r32((uint32_t)(EDI + EDI*4 + -0x4043ee92))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EDI*4 + -0x4043ee92), (_r)); fl_add(_a,_b,_r,32); }
  /* 116ebf92 outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ebf92");
  /* 116ebf93 adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebf95 mov edi, 0xbfcc116e */
  EDI = (0xbfcc116eu);
  /* 116ebf9a outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ebf9a");
  /* 116ebf9b adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebf9e outsb dx, byte ptr [esi] */
  x86_unimpl("outsb @ 0x116ebf9e");
  /* 116ebfa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 116ebfa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 116ebfac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 116ebfb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 116ebfb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 116ebfb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 116ebfbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 116ebfc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 116ebfc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 116ebfc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 116ebfcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 116ebfd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 116ebfd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 116ebfd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 116ebfdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116ebfe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116ebfe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116ebfe7:;
  /* 116ebfe7 jmp dword ptr [edx*4 + 0x116ebff0] */
  switch (EDX) {
    case 0: goto L_116ec000;
    case 1: goto L_116ec008;
    case 2: goto L_116ec018;
    case 3: goto L_116ec02c;
    default: x86_unimpl("switch@0x116ebfe7 out of table"); return;
  }
  /* 116ebfee mov edi, edi */
  EDI = (EDI);
L_116ec000:;
  /* 116ec000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec003 pop esi */
  ESI = (pop32());
  /* 116ec004 pop edi */
  EDI = (pop32());
  /* 116ec005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ec006 ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ec007 nop  */
  /* nop */
L_116ec008:;
  /* 116ec008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ec00b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ec00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec011 pop esi */
  ESI = (pop32());
  /* 116ec012 pop edi */
  EDI = (pop32());
  /* 116ec013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ec014 ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ec015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116ec018:;
  /* 116ec018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ec01b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ec01e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ec021 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ec024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec027 pop esi */
  ESI = (pop32());
  /* 116ec028 pop edi */
  EDI = (pop32());
  /* 116ec029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ec02a ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
  /* 116ec02b nop  */
  /* nop */
L_116ec02c:;
  /* 116ec02c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116ec02f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116ec032 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116ec035 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116ec038 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116ec03b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116ec03e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec041 pop esi */
  ESI = (pop32());
  /* 116ec042 pop edi */
  EDI = (pop32());
  /* 116ec043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116ec044 ret  */
  ESPCHK(0x116ebd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c050 @ 0x116ec050 (421 bytes, 148 insns) */
void f_116ec050(void) {
  FTRACE(0x116ec050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec050 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec051 mov ebp, esp */
  EBP = (ESP);
  /* 116ec053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116ec055 push 0x1170b000 */
  push32((uint32_t)(0x1170b000u));
  /* 116ec05a push 0x116ecf28 */
  push32((uint32_t)(0x116ecf28u));
  /* 116ec05f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116ec065 push eax */
  push32((uint32_t)(EAX));
  /* 116ec066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116ec06d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec070 push ebx */
  push32((uint32_t)(EBX));
  /* 116ec071 push esi */
  push32((uint32_t)(ESI));
  /* 116ec072 push edi */
  push32((uint32_t)(EDI));
  /* 116ec073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116ec076 cmp dword ptr [0x1170f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec07d jne 0x116ec0ce */
  if (!C.zf) goto L_116ec0ce;
  /* 116ec07f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 116ec082 push eax */
  push32((uint32_t)(EAX));
  /* 116ec083 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec085 push 0x1170aff8 */
  push32((uint32_t)(0x1170aff8u));
  /* 116ec08a push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec08c call dword ptr [0x117122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ec))), 0x116ec092u);
  /* 116ec092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec094 je 0x116ec0a2 */
  if (C.zf) goto L_116ec0a2;
  /* 116ec096 mov dword ptr [0x1170f824], 1 */
  w32((uint32_t)(0x1170f824), (0x1u));
  /* 116ec0a0 jmp 0x116ec0ce */
  goto L_116ec0ce;
L_116ec0a2:;
  /* 116ec0a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 116ec0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec0a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec0a8 push 0x1170aff4 */
  push32((uint32_t)(0x1170aff4u));
  /* 116ec0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec0af push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec0b1 call dword ptr [0x117122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122fc))), 0x116ec0b7u);
  /* 116ec0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec0b9 je 0x116ec0c7 */
  if (C.zf) goto L_116ec0c7;
  /* 116ec0bb mov dword ptr [0x1170f824], 2 */
  w32((uint32_t)(0x1170f824), (0x2u));
  /* 116ec0c5 jmp 0x116ec0ce */
  goto L_116ec0ce;
L_116ec0c7:;
  /* 116ec0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec0c9 jmp 0x116ec1f8 */
  goto L_116ec1f8;
L_116ec0ce:;
  /* 116ec0ce cmp dword ptr [0x1170f824], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f824))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec0d5 jne 0x116ec105 */
  if (!C.zf) goto L_116ec105;
  /* 116ec0d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec0db jne 0x116ec0e6 */
  if (!C.zf) goto L_116ec0e6;
  /* 116ec0dd mov edx, dword ptr [0x1170f830] */
  EDX = (r32((uint32_t)(0x1170f830)));
  /* 116ec0e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_116ec0e6:;
  /* 116ec0e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ec0e9 push eax */
  push32((uint32_t)(EAX));
  /* 116ec0ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec0ed push ecx */
  push32((uint32_t)(ECX));
  /* 116ec0ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec0f1 push edx */
  push32((uint32_t)(EDX));
  /* 116ec0f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec0f5 push eax */
  push32((uint32_t)(EAX));
  /* 116ec0f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116ec0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec0fa call dword ptr [0x117122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122fc))), 0x116ec100u);
  /* 116ec100 jmp 0x116ec1f8 */
  goto L_116ec1f8;
L_116ec105:;
  /* 116ec105 cmp dword ptr [0x1170f824], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f824))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec10c jne 0x116ec1f6 */
  if (!C.zf) goto L_116ec1f6;
  /* 116ec112 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec116 jne 0x116ec121 */
  if (!C.zf) goto L_116ec121;
  /* 116ec118 mov edx, dword ptr [0x1170f840] */
  EDX = (r32((uint32_t)(0x1170f840)));
  /* 116ec11e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_116ec121:;
  /* 116ec121 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec123 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec125 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec128 push eax */
  push32((uint32_t)(EAX));
  /* 116ec129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec12c push ecx */
  push32((uint32_t)(ECX));
  /* 116ec12d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 116ec130 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ec132 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec134 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116ec137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec13a push edx */
  push32((uint32_t)(EDX));
  /* 116ec13b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116ec13e push eax */
  push32((uint32_t)(EAX));
  /* 116ec13f call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116ec145u);
  /* 116ec145 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116ec148 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec14c jne 0x116ec155 */
  if (!C.zf) goto L_116ec155;
  /* 116ec14e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec150 jmp 0x116ec1f8 */
  goto L_116ec1f8;
L_116ec155:;
  /* 116ec155 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ec15c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ec15f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116ec161 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec164 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116ec166 call 0x116e6fc0 */
  push32(0x116ec16bu); f_116e6fc0();
  /* 116ec16b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 116ec16e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116ec171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ec174 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116ec177 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ec17a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 116ec17c push edx */
  push32((uint32_t)(EDX));
  /* 116ec17d push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec17f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec182 push eax */
  push32((uint32_t)(EAX));
  /* 116ec183 call 0x116e7b90 */
  push32(0x116ec188u); f_116e7b90();
  /* 116ec188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec18b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116ec192 jmp 0x116ec1ab */
  goto L_116ec1ab;
  /* 116ec194 mov eax, 1 */
  EAX = (0x1u);
  /* 116ec199 ret  */
  ESPCHK(0x116ec050u, _esp0);
  ESP += 4; return;
  /* 116ec19a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116ec19d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116ec1a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ec1ab:;
  /* 116ec1ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec1af jne 0x116ec1b5 */
  if (!C.zf) goto L_116ec1b5;
  /* 116ec1b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec1b3 jmp 0x116ec1f8 */
  goto L_116ec1f8;
L_116ec1b5:;
  /* 116ec1b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ec1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec1b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec1bc push edx */
  push32((uint32_t)(EDX));
  /* 116ec1bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec1c0 push eax */
  push32((uint32_t)(EAX));
  /* 116ec1c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec1c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec1c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116ec1ca push edx */
  push32((uint32_t)(EDX));
  /* 116ec1cb call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116ec1d1u);
  /* 116ec1d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116ec1d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec1d8 jne 0x116ec1de */
  if (!C.zf) goto L_116ec1de;
  /* 116ec1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec1dc jmp 0x116ec1f8 */
  goto L_116ec1f8;
L_116ec1de:;
  /* 116ec1de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ec1e1 push eax */
  push32((uint32_t)(EAX));
  /* 116ec1e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ec1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec1e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec1e9 push edx */
  push32((uint32_t)(EDX));
  /* 116ec1ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec1ed push eax */
  push32((uint32_t)(EAX));
  /* 116ec1ee call dword ptr [0x117122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122ec))), 0x116ec1f4u);
  /* 116ec1f4 jmp 0x116ec1f8 */
  goto L_116ec1f8;
L_116ec1f6:;
  /* 116ec1f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ec1f8:;
  /* 116ec1f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 116ec1fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ec1fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116ec205 pop edi */
  EDI = (pop32());
  /* 116ec206 pop esi */
  ESI = (pop32());
  /* 116ec207 pop ebx */
  EBX = (pop32());
  /* 116ec208 mov esp, ebp */
  ESP = (EBP);
  /* 116ec20a pop ebp */
  EBP = (pop32());
  /* 116ec20b ret  */
  ESPCHK(0x116ec050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x116ec210 (727 bytes, 263 insns) */
void f_116ec210(void) {
  FTRACE(0x116ec210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec210 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec211 mov ebp, esp */
  EBP = (ESP);
  /* 116ec213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116ec215 push 0x1170b010 */
  push32((uint32_t)(0x1170b010u));
  /* 116ec21a push 0x116ecf28 */
  push32((uint32_t)(0x116ecf28u));
  /* 116ec21f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116ec225 push eax */
  push32((uint32_t)(EAX));
  /* 116ec226 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116ec22d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec230 push ebx */
  push32((uint32_t)(EBX));
  /* 116ec231 push esi */
  push32((uint32_t)(ESI));
  /* 116ec232 push edi */
  push32((uint32_t)(EDI));
  /* 116ec233 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116ec236 cmp dword ptr [0x1170f848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec23d jne 0x116ec296 */
  if (!C.zf) goto L_116ec296;
  /* 116ec23f push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec241 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec243 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec245 push 0x1170aff8 */
  push32((uint32_t)(0x1170aff8u));
  /* 116ec24a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ec24f push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec251 call dword ptr [0x117122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f0))), 0x116ec257u);
  /* 116ec257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec259 je 0x116ec267 */
  if (C.zf) goto L_116ec267;
  /* 116ec25b mov dword ptr [0x1170f848], 1 */
  w32((uint32_t)(0x1170f848), (0x1u));
  /* 116ec265 jmp 0x116ec296 */
  goto L_116ec296;
L_116ec267:;
  /* 116ec267 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec269 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec26b push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec26d push 0x1170aff4 */
  push32((uint32_t)(0x1170aff4u));
  /* 116ec272 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ec277 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec279 call dword ptr [0x117122e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e8))), 0x116ec27fu);
  /* 116ec27f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec281 je 0x116ec28f */
  if (C.zf) goto L_116ec28f;
  /* 116ec283 mov dword ptr [0x1170f848], 2 */
  w32((uint32_t)(0x1170f848), (0x2u));
  /* 116ec28d jmp 0x116ec296 */
  goto L_116ec296;
L_116ec28f:;
  /* 116ec28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec291 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec296:;
  /* 116ec296 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec29a jle 0x116ec2af */
  if ((C.zf||C.sf!=C.of)) goto L_116ec2af;
  /* 116ec29c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ec29f push eax */
  push32((uint32_t)(EAX));
  /* 116ec2a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec2a4 call 0x116ec520 */
  push32(0x116ec2a9u); f_116ec520();
  /* 116ec2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec2ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_116ec2af:;
  /* 116ec2af cmp dword ptr [0x1170f848], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f848))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec2b6 jne 0x116ec2db */
  if (!C.zf) goto L_116ec2db;
  /* 116ec2b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116ec2bb push edx */
  push32((uint32_t)(EDX));
  /* 116ec2bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116ec2bf push eax */
  push32((uint32_t)(EAX));
  /* 116ec2c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ec2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec2c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec2c7 push edx */
  push32((uint32_t)(EDX));
  /* 116ec2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec2cb push eax */
  push32((uint32_t)(EAX));
  /* 116ec2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec2cf push ecx */
  push32((uint32_t)(ECX));
  /* 116ec2d0 call dword ptr [0x117122e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e8))), 0x116ec2d6u);
  /* 116ec2d6 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec2db:;
  /* 116ec2db cmp dword ptr [0x1170f848], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f848))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec2e2 jne 0x116ec4ff */
  if (!C.zf) goto L_116ec4ff;
  /* 116ec2e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec2ec jne 0x116ec2f7 */
  if (!C.zf) goto L_116ec2f7;
  /* 116ec2ee mov edx, dword ptr [0x1170f840] */
  EDX = (r32((uint32_t)(0x1170f840)));
  /* 116ec2f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_116ec2f7:;
  /* 116ec2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec2fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ec2fe push eax */
  push32((uint32_t)(EAX));
  /* 116ec2ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec302 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec303 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 116ec306 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ec308 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec30a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116ec30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec310 push edx */
  push32((uint32_t)(EDX));
  /* 116ec311 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116ec314 push eax */
  push32((uint32_t)(EAX));
  /* 116ec315 call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116ec31bu);
  /* 116ec31b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116ec31e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec322 jne 0x116ec32b */
  if (!C.zf) goto L_116ec32b;
  /* 116ec324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec326 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec32b:;
  /* 116ec32b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ec332 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ec335 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116ec337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116ec33c call 0x116e6fc0 */
  push32(0x116ec341u); f_116e6fc0();
  /* 116ec341 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 116ec344 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116ec347 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ec34a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116ec34d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116ec354 jmp 0x116ec36d */
  goto L_116ec36d;
  /* 116ec356 mov eax, 1 */
  EAX = (0x1u);
  /* 116ec35b ret  */
  ESPCHK(0x116ec210u, _esp0);
  ESP += 4; return;
  /* 116ec35c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116ec35f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116ec366 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ec36d:;
  /* 116ec36d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec371 jne 0x116ec37a */
  if (!C.zf) goto L_116ec37a;
  /* 116ec373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec375 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec37a:;
  /* 116ec37a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ec37d push edx */
  push32((uint32_t)(EDX));
  /* 116ec37e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec381 push eax */
  push32((uint32_t)(EAX));
  /* 116ec382 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ec385 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec386 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec389 push edx */
  push32((uint32_t)(EDX));
  /* 116ec38a push 1 */
  push32((uint32_t)(0x1u));
  /* 116ec38c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116ec38f push eax */
  push32((uint32_t)(EAX));
  /* 116ec390 call dword ptr [0x117122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f4))), 0x116ec396u);
  /* 116ec396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec398 jne 0x116ec3a1 */
  if (!C.zf) goto L_116ec3a1;
  /* 116ec39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec39c jmp 0x116ec501 */
  goto L_116ec501;
L_116ec3a1:;
  /* 116ec3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec3a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ec3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec3a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec3ac push edx */
  push32((uint32_t)(EDX));
  /* 116ec3ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec3b0 push eax */
  push32((uint32_t)(EAX));
  /* 116ec3b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec3b5 call dword ptr [0x117122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f0))), 0x116ec3bbu);
  /* 116ec3bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116ec3be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec3c2 jne 0x116ec3cb */
  if (!C.zf) goto L_116ec3cb;
  /* 116ec3c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec3c6 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec3cb:;
  /* 116ec3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec3ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 116ec3d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ec3d6 je 0x116ec41b */
  if (C.zf) goto L_116ec41b;
  /* 116ec3d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec3dc je 0x116ec416 */
  if (C.zf) goto L_116ec416;
  /* 116ec3de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ec3e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec3e4 jle 0x116ec3ed */
  if ((C.zf||C.sf!=C.of)) goto L_116ec3ed;
  /* 116ec3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec3e8 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec3ed:;
  /* 116ec3ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116ec3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec3f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116ec3f4 push edx */
  push32((uint32_t)(EDX));
  /* 116ec3f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ec3f8 push eax */
  push32((uint32_t)(EAX));
  /* 116ec3f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec3fc push ecx */
  push32((uint32_t)(ECX));
  /* 116ec3fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec400 push edx */
  push32((uint32_t)(EDX));
  /* 116ec401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec404 push eax */
  push32((uint32_t)(EAX));
  /* 116ec405 call dword ptr [0x117122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f0))), 0x116ec40bu);
  /* 116ec40b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec40d jne 0x116ec416 */
  if (!C.zf) goto L_116ec416;
  /* 116ec40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec411 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec416:;
  /* 116ec416 jmp 0x116ec4fa */
  goto L_116ec4fa;
L_116ec41b:;
  /* 116ec41b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ec41e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116ec421 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116ec428 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ec42b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116ec42d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec430 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116ec432 call 0x116e6fc0 */
  push32(0x116ec437u); f_116e6fc0();
  /* 116ec437 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 116ec43a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116ec43d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116ec440 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116ec443 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116ec44a jmp 0x116ec463 */
  goto L_116ec463;
  /* 116ec44c mov eax, 1 */
  EAX = (0x1u);
  /* 116ec451 ret  */
  ESPCHK(0x116ec210u, _esp0);
  ESP += 4; return;
  /* 116ec452 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116ec455 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116ec45c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ec463:;
  /* 116ec463 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec467 jne 0x116ec470 */
  if (!C.zf) goto L_116ec470;
  /* 116ec469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec46b jmp 0x116ec501 */
  goto L_116ec501;
L_116ec470:;
  /* 116ec470 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ec473 push eax */
  push32((uint32_t)(EAX));
  /* 116ec474 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ec477 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec478 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ec47b push edx */
  push32((uint32_t)(EDX));
  /* 116ec47c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ec47f push eax */
  push32((uint32_t)(EAX));
  /* 116ec480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec483 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec487 push edx */
  push32((uint32_t)(EDX));
  /* 116ec488 call dword ptr [0x117122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122f0))), 0x116ec48eu);
  /* 116ec48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec490 jne 0x116ec496 */
  if (!C.zf) goto L_116ec496;
  /* 116ec492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec494 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec496:;
  /* 116ec496 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec49a jne 0x116ec4ca */
  if (!C.zf) goto L_116ec4ca;
  /* 116ec49c push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec49e push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec4a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ec4a7 push eax */
  push32((uint32_t)(EAX));
  /* 116ec4a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ec4ab push ecx */
  push32((uint32_t)(ECX));
  /* 116ec4ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116ec4b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 116ec4b4 push edx */
  push32((uint32_t)(EDX));
  /* 116ec4b5 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116ec4bbu);
  /* 116ec4bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116ec4be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec4c2 jne 0x116ec4c8 */
  if (!C.zf) goto L_116ec4c8;
  /* 116ec4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec4c6 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec4c8:;
  /* 116ec4c8 jmp 0x116ec4fa */
  goto L_116ec4fa;
L_116ec4ca:;
  /* 116ec4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec4cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec4ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 116ec4d1 push eax */
  push32((uint32_t)(EAX));
  /* 116ec4d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116ec4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec4d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ec4d9 push edx */
  push32((uint32_t)(EDX));
  /* 116ec4da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ec4dd push eax */
  push32((uint32_t)(EAX));
  /* 116ec4de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116ec4e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116ec4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec4e7 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116ec4edu);
  /* 116ec4ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116ec4f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec4f4 jne 0x116ec4fa */
  if (!C.zf) goto L_116ec4fa;
  /* 116ec4f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec4f8 jmp 0x116ec501 */
  goto L_116ec501;
L_116ec4fa:;
  /* 116ec4fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ec4fd jmp 0x116ec501 */
  goto L_116ec501;
L_116ec4ff:;
  /* 116ec4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ec501:;
  /* 116ec501 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 116ec504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ec507 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116ec50e pop edi */
  EDI = (pop32());
  /* 116ec50f pop esi */
  ESI = (pop32());
  /* 116ec510 pop ebx */
  EBX = (pop32());
  /* 116ec511 mov esp, ebp */
  ESP = (EBP);
  /* 116ec513 pop ebp */
  EBP = (pop32());
  /* 116ec514 ret  */
  ESPCHK(0x116ec210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c520 @ 0x116ec520 (80 bytes, 32 insns) */
void f_116ec520(void) {
  FTRACE(0x116ec520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec520 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec521 mov ebp, esp */
  EBP = (ESP);
  /* 116ec523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec529 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ec52c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec52f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116ec532:;
  /* 116ec532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec538 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ec53e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ec540 je 0x116ec557 */
  if (C.zf) goto L_116ec557;
  /* 116ec542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec545 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ec548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ec54a je 0x116ec557 */
  if (C.zf) goto L_116ec557;
  /* 116ec54c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec54f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ec555 jmp 0x116ec532 */
  goto L_116ec532;
L_116ec557:;
  /* 116ec557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec55a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ec55d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ec55f jne 0x116ec569 */
  if (!C.zf) goto L_116ec569;
  /* 116ec561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec564 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec567 jmp 0x116ec56c */
  goto L_116ec56c;
L_116ec569:;
  /* 116ec569 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_116ec56c:;
  /* 116ec56c mov esp, ebp */
  ESP = (EBP);
  /* 116ec56e pop ebp */
  EBP = (pop32());
  /* 116ec56f ret  */
  ESPCHK(0x116ec520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c570 @ 0x116ec570 (130 bytes, 43 insns) */
void f_116ec570(void) {
  FTRACE(0x116ec570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec570 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec571 mov ebp, esp */
  EBP = (ESP);
  /* 116ec573 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec577 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec57d jae 0x116ec5a1 */
  if (!C.cf) goto L_116ec5a1;
  /* 116ec57f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec582 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ec585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec588 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ec58b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec58e mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ec595 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ec59a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ec59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ec59f jne 0x116ec5bc */
  if (!C.zf) goto L_116ec5bc;
L_116ec5a1:;
  /* 116ec5a1 call 0x116ebcf0 */
  push32(0x116ec5a6u); f_116ebcf0();
  /* 116ec5a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ec5ac call 0x116ebd00 */
  push32(0x116ec5b1u); f_116ebd00();
  /* 116ec5b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ec5b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec5ba jmp 0x116ec5ee */
  goto L_116ec5ee;
L_116ec5bc:;
  /* 116ec5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec5bf push edx */
  push32((uint32_t)(EDX));
  /* 116ec5c0 call 0x116ed510 */
  push32(0x116ec5c5u); f_116ed510();
  /* 116ec5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec5c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec5cb push eax */
  push32((uint32_t)(EAX));
  /* 116ec5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec5cf push ecx */
  push32((uint32_t)(ECX));
  /* 116ec5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec5d3 push edx */
  push32((uint32_t)(EDX));
  /* 116ec5d4 call 0x116ec600 */
  push32(0x116ec5d9u); f_116ec600();
  /* 116ec5d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec5dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ec5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec5e2 push eax */
  push32((uint32_t)(EAX));
  /* 116ec5e3 call 0x116ed5a0 */
  push32(0x116ec5e8u); f_116ed5a0();
  /* 116ec5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ec5ee:;
  /* 116ec5ee mov esp, ebp */
  ESP = (EBP);
  /* 116ec5f0 pop ebp */
  EBP = (pop32());
  /* 116ec5f1 ret  */
  ESPCHK(0x116ec570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x116ec600 (178 bytes, 56 insns) */
void f_116ec600(void) {
  FTRACE(0x116ec600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec600 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec601 mov ebp, esp */
  EBP = (ESP);
  /* 116ec603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec609 push eax */
  push32((uint32_t)(EAX));
  /* 116ec60a call 0x116ed390 */
  push32(0x116ec60fu); f_116ed390();
  /* 116ec60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec612 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ec615 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec619 jne 0x116ec62e */
  if (!C.zf) goto L_116ec62e;
  /* 116ec61b call 0x116ebcf0 */
  push32(0x116ec620u); f_116ebcf0();
  /* 116ec620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ec626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec629 jmp 0x116ec6ae */
  goto L_116ec6ae;
L_116ec62e:;
  /* 116ec62e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec631 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec632 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec637 push edx */
  push32((uint32_t)(EDX));
  /* 116ec638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ec63b push eax */
  push32((uint32_t)(EAX));
  /* 116ec63c call dword ptr [0x117122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e0))), 0x116ec642u);
  /* 116ec642 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ec645 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec649 jne 0x116ec656 */
  if (!C.zf) goto L_116ec656;
  /* 116ec64b call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116ec651u);
  /* 116ec651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ec654 jmp 0x116ec65d */
  goto L_116ec65d;
L_116ec656:;
  /* 116ec656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116ec65d:;
  /* 116ec65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec661 je 0x116ec674 */
  if (C.zf) goto L_116ec674;
  /* 116ec663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec666 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec667 call 0x116ebc50 */
  push32(0x116ec66cu); f_116ebc50();
  /* 116ec66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec66f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec672 jmp 0x116ec6ae */
  goto L_116ec6ae;
L_116ec674:;
  /* 116ec674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec677 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ec67a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec67d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec680 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec683 mov ecx, dword ptr [edx*4 + 0x11711000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ec68a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 116ec68e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 116ec691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec694 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ec697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec69a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ec69d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec6a0 mov eax, dword ptr [eax*4 + 0x11711000] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ec6a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 116ec6ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ec6ae:;
  /* 116ec6ae mov esp, ebp */
  ESP = (EBP);
  /* 116ec6b0 pop ebp */
  EBP = (pop32());
  /* 116ec6b1 ret  */
  ESPCHK(0x116ec600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c0 @ 0x116ec6c0 (130 bytes, 43 insns) */
void f_116ec6c0(void) {
  FTRACE(0x116ec6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec6c1 mov ebp, esp */
  EBP = (ESP);
  /* 116ec6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec6c7 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec6cd jae 0x116ec6f1 */
  if (!C.cf) goto L_116ec6f1;
  /* 116ec6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ec6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ec6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec6de mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ec6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ec6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ec6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ec6ef jne 0x116ec70c */
  if (!C.zf) goto L_116ec70c;
L_116ec6f1:;
  /* 116ec6f1 call 0x116ebcf0 */
  push32(0x116ec6f6u); f_116ebcf0();
  /* 116ec6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ec6fc call 0x116ebd00 */
  push32(0x116ec701u); f_116ebd00();
  /* 116ec701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ec707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec70a jmp 0x116ec73e */
  goto L_116ec73e;
L_116ec70c:;
  /* 116ec70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec70f push edx */
  push32((uint32_t)(EDX));
  /* 116ec710 call 0x116ed510 */
  push32(0x116ec715u); f_116ed510();
  /* 116ec715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec71b push eax */
  push32((uint32_t)(EAX));
  /* 116ec71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec71f push ecx */
  push32((uint32_t)(ECX));
  /* 116ec720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec723 push edx */
  push32((uint32_t)(EDX));
  /* 116ec724 call 0x116ec750 */
  push32(0x116ec729u); f_116ec750();
  /* 116ec729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ec72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec732 push eax */
  push32((uint32_t)(EAX));
  /* 116ec733 call 0x116ed5a0 */
  push32(0x116ec738u); f_116ed5a0();
  /* 116ec738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ec73e:;
  /* 116ec73e mov esp, ebp */
  ESP = (EBP);
  /* 116ec740 pop ebp */
  EBP = (pop32());
  /* 116ec741 ret  */
  ESPCHK(0x116ec6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x116ec750 (627 bytes, 182 insns) */
void f_116ec750(void) {
  FTRACE(0x116ec750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec750 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec751 mov ebp, esp */
  EBP = (ESP);
  /* 116ec753 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec759 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116ec760 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ec763 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 116ec769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec76d jne 0x116ec776 */
  if (!C.zf) goto L_116ec776;
  /* 116ec76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec771 jmp 0x116ec9bf */
  goto L_116ec9bf;
L_116ec776:;
  /* 116ec776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec779 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ec77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec77f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ec782 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec785 mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ec78c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ec791 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116ec794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ec796 je 0x116ec7a8 */
  if (C.zf) goto L_116ec7a8;
  /* 116ec798 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ec79a push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec79f push edx */
  push32((uint32_t)(EDX));
  /* 116ec7a0 call 0x116ec600 */
  push32(0x116ec7a5u); f_116ec600();
  /* 116ec7a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ec7a8:;
  /* 116ec7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec7ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ec7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec7b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ec7b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec7b7 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ec7be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116ec7c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116ec7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec7ca je 0x116ec8dc */
  if (C.zf) goto L_116ec8dc;
  /* 116ec7d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec7d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ec7d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116ec7dd:;
  /* 116ec7dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec7e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec7e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec7e6 jae 0x116ec8da */
  if (!C.cf) goto L_116ec8da;
  /* 116ec7ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 116ec7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116ec7f5:;
  /* 116ec7f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec7f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 116ec7fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec800 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec806 jge 0x116ec867 */
  if ((C.sf==C.of)) goto L_116ec867;
  /* 116ec808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec80b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec80e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec811 jae 0x116ec867 */
  if (!C.cf) goto L_116ec867;
  /* 116ec813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116ec818 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 116ec81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ec821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ec827 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 116ec82e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec831 jne 0x116ec851 */
  if (!C.zf) goto L_116ec851;
  /* 116ec833 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 116ec839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec83c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 116ec842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec845 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 116ec848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec84b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec84e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116ec851:;
  /* 116ec851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec854 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 116ec85a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 116ec85c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec85f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec862 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ec865 jmp 0x116ec7f5 */
  goto L_116ec7f5;
L_116ec867:;
  /* 116ec867 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec869 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 116ec86f push edx */
  push32((uint32_t)(EDX));
  /* 116ec870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec873 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 116ec879 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec87b push eax */
  push32((uint32_t)(EAX));
  /* 116ec87c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 116ec882 push edx */
  push32((uint32_t)(EDX));
  /* 116ec883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec886 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ec889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec88c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ec88f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec892 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ec899 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 116ec89c push eax */
  push32((uint32_t)(EAX));
  /* 116ec89d call dword ptr [0x11712340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712340))), 0x116ec8a3u);
  /* 116ec8a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec8a5 je 0x116ec8ca */
  if (C.zf) goto L_116ec8ca;
  /* 116ec8a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ec8aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec8b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116ec8b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ec8b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 116ec8bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ec8be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec8c4 jge 0x116ec8c8 */
  if ((C.sf==C.of)) goto L_116ec8c8;
  /* 116ec8c6 jmp 0x116ec8da */
  goto L_116ec8da;
L_116ec8c8:;
  /* 116ec8c8 jmp 0x116ec8d5 */
  goto L_116ec8d5;
L_116ec8ca:;
  /* 116ec8ca call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116ec8d0u);
  /* 116ec8d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ec8d3 jmp 0x116ec8da */
  goto L_116ec8da;
L_116ec8d5:;
  /* 116ec8d5 jmp 0x116ec7dd */
  goto L_116ec7dd;
L_116ec8da:;
  /* 116ec8da jmp 0x116ec92c */
  goto L_116ec92c;
L_116ec8dc:;
  /* 116ec8dc push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec8de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 116ec8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec8e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ec8e8 push edx */
  push32((uint32_t)(EDX));
  /* 116ec8e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec8ec push eax */
  push32((uint32_t)(EAX));
  /* 116ec8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec8f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ec8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec8f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ec8f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec8fc mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ec903 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 116ec906 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec907 call dword ptr [0x11712340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712340))), 0x116ec90du);
  /* 116ec90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec90f je 0x116ec923 */
  if (C.zf) goto L_116ec923;
  /* 116ec911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ec918 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 116ec91e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116ec921 jmp 0x116ec92c */
  goto L_116ec92c;
L_116ec923:;
  /* 116ec923 call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116ec929u);
  /* 116ec929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ec92c:;
  /* 116ec92c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec930 jne 0x116ec9b6 */
  if (!C.zf) goto L_116ec9b6;
  /* 116ec936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec93a je 0x116ec96a */
  if (C.zf) goto L_116ec96a;
  /* 116ec93c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec940 jne 0x116ec959 */
  if (!C.zf) goto L_116ec959;
  /* 116ec942 call 0x116ebcf0 */
  push32(0x116ec947u); f_116ebcf0();
  /* 116ec947 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ec94d call 0x116ebd00 */
  push32(0x116ec952u); f_116ebd00();
  /* 116ec952 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ec955 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116ec957 jmp 0x116ec965 */
  goto L_116ec965;
L_116ec959:;
  /* 116ec959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ec95c push edx */
  push32((uint32_t)(EDX));
  /* 116ec95d call 0x116ebc50 */
  push32(0x116ec962u); f_116ebc50();
  /* 116ec962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ec965:;
  /* 116ec965 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec968 jmp 0x116ec9bf */
  goto L_116ec9bf;
L_116ec96a:;
  /* 116ec96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ec970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ec973 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ec976 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ec979 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ec980 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116ec985 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 116ec988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec98a je 0x116ec99b */
  if (C.zf) goto L_116ec99b;
  /* 116ec98c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ec98f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ec992 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec995 jne 0x116ec99b */
  if (!C.zf) goto L_116ec99b;
  /* 116ec997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec999 jmp 0x116ec9bf */
  goto L_116ec9bf;
L_116ec99b:;
  /* 116ec99b call 0x116ebcf0 */
  push32(0x116ec9a0u); f_116ebcf0();
  /* 116ec9a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 116ec9a6 call 0x116ebd00 */
  push32(0x116ec9abu); f_116ebd00();
  /* 116ec9ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ec9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ec9b4 jmp 0x116ec9bf */
  goto L_116ec9bf;
L_116ec9b6:;
  /* 116ec9b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116ec9b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116ec9bf:;
  /* 116ec9bf mov esp, ebp */
  ESP = (EBP);
  /* 116ec9c1 pop ebp */
  EBP = (pop32());
  /* 116ec9c2 ret  */
  ESPCHK(0x116ec750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9d0 @ 0x116ec9d0 (199 bytes, 68 insns) */
void f_116ec9d0(void) {
  FTRACE(0x116ec9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ec9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ec9d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ec9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ec9d4 push ebx */
  push32((uint32_t)(EBX));
  /* 116ec9d5 push esi */
  push32((uint32_t)(ESI));
  /* 116ec9d6 push edi */
  push32((uint32_t)(EDI));
L_116ec9d7:;
  /* 116ec9d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec9db jne 0x116ec9fb */
  if (!C.zf) goto L_116ec9fb;
  /* 116ec9dd push 0x1170af58 */
  push32((uint32_t)(0x1170af58u));
  /* 116ec9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ec9e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 116ec9e6 push 0x1170b028 */
  push32((uint32_t)(0x1170b028u));
  /* 116ec9eb push 2 */
  push32((uint32_t)(0x2u));
  /* 116ec9ed call 0x116e2ee0 */
  push32(0x116ec9f2u); f_116e2ee0();
  /* 116ec9f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ec9f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ec9f8 jne 0x116ec9fb */
  if (!C.zf) goto L_116ec9fb;
  /* 116ec9fa int3  */
  x86_unimpl("int3 @ 0x116ec9fa");
L_116ec9fb:;
  /* 116ec9fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ec9fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ec9ff jne 0x116ec9d7 */
  if (!C.zf) goto L_116ec9d7;
  /* 116eca01 mov ecx, dword ptr [0x1170f84c] */
  ECX = (r32((uint32_t)(0x1170f84c)));
  /* 116eca07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eca0a mov dword ptr [0x1170f84c], ecx */
  w32((uint32_t)(0x1170f84c), (ECX));
  /* 116eca10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eca13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116eca16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 116eca18 push 0x1170b028 */
  push32((uint32_t)(0x1170b028u));
  /* 116eca1d push 2 */
  push32((uint32_t)(0x2u));
  /* 116eca1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116eca24 call 0x116e3e20 */
  push32(0x116eca29u); f_116e3e20();
  /* 116eca29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eca2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116eca32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eca39 je 0x116eca56 */
  if (C.zf) goto L_116eca56;
  /* 116eca3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116eca41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116eca44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 116eca4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 116eca54 jmp 0x116eca7b */
  goto L_116eca7b;
L_116eca56:;
  /* 116eca56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eca5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116eca5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116eca65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eca6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116eca71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_116eca7b:;
  /* 116eca7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116eca84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116eca86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eca89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116eca90 pop edi */
  EDI = (pop32());
  /* 116eca91 pop esi */
  ESI = (pop32());
  /* 116eca92 pop ebx */
  EBX = (pop32());
  /* 116eca93 mov esp, ebp */
  ESP = (EBP);
  /* 116eca95 pop ebp */
  EBP = (pop32());
  /* 116eca96 ret  */
  ESPCHK(0x116ec9d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x116ecaa0 (50 bytes, 17 insns) */
void f_116ecaa0(void) {
  FTRACE(0x116ecaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecaa1 mov ebp, esp */
  EBP = (ESP);
  /* 116ecaa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecaa6 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecaac jb 0x116ecab2 */
  if (C.cf) goto L_116ecab2;
  /* 116ecaae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ecab0 jmp 0x116ecad0 */
  goto L_116ecad0;
L_116ecab2:;
  /* 116ecab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecab5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ecab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecabb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ecabe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ecac1 mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ecac8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ecacd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_116ecad0:;
  /* 116ecad0 pop ebp */
  EBP = (pop32());
  /* 116ecad1 ret  */
  ESPCHK(0x116ecaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x116ecae0 (300 bytes, 80 insns) */
void f_116ecae0(void) {
  FTRACE(0x116ecae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecae0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecae1 mov ebp, esp */
  EBP = (ESP);
  /* 116ecae3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecae4 cmp dword ptr [0x11710d00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710d00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecaeb jne 0x116ecaf9 */
  if (!C.zf) goto L_116ecaf9;
  /* 116ecaed mov dword ptr [0x11710d00], 0x200 */
  w32((uint32_t)(0x11710d00), (0x200u));
  /* 116ecaf7 jmp 0x116ecb0c */
  goto L_116ecb0c;
L_116ecaf9:;
  /* 116ecaf9 cmp dword ptr [0x11710d00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11710d00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecb00 jge 0x116ecb0c */
  if ((C.sf==C.of)) goto L_116ecb0c;
  /* 116ecb02 mov dword ptr [0x11710d00], 0x14 */
  w32((uint32_t)(0x11710d00), (0x14u));
L_116ecb0c:;
  /* 116ecb0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 116ecb11 push 0x1170b034 */
  push32((uint32_t)(0x1170b034u));
  /* 116ecb16 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ecb18 push 4 */
  push32((uint32_t)(0x4u));
  /* 116ecb1a mov eax, dword ptr [0x11710d00] */
  EAX = (r32((uint32_t)(0x11710d00)));
  /* 116ecb1f push eax */
  push32((uint32_t)(EAX));
  /* 116ecb20 call 0x116e4230 */
  push32(0x116ecb25u); f_116e4230();
  /* 116ecb25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecb28 mov dword ptr [0x1170f9c0], eax */
  w32((uint32_t)(0x1170f9c0), (EAX));
  /* 116ecb2d cmp dword ptr [0x1170f9c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecb34 jne 0x116ecb75 */
  if (!C.zf) goto L_116ecb75;
  /* 116ecb36 mov dword ptr [0x11710d00], 0x14 */
  w32((uint32_t)(0x11710d00), (0x14u));
  /* 116ecb40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 116ecb45 push 0x1170b034 */
  push32((uint32_t)(0x1170b034u));
  /* 116ecb4a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ecb4c push 4 */
  push32((uint32_t)(0x4u));
  /* 116ecb4e mov ecx, dword ptr [0x11710d00] */
  ECX = (r32((uint32_t)(0x11710d00)));
  /* 116ecb54 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecb55 call 0x116e4230 */
  push32(0x116ecb5au); f_116e4230();
  /* 116ecb5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecb5d mov dword ptr [0x1170f9c0], eax */
  w32((uint32_t)(0x1170f9c0), (EAX));
  /* 116ecb62 cmp dword ptr [0x1170f9c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecb69 jne 0x116ecb75 */
  if (!C.zf) goto L_116ecb75;
  /* 116ecb6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116ecb6d call 0x116e2d90 */
  push32(0x116ecb72u); f_116e2d90();
  /* 116ecb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ecb75:;
  /* 116ecb75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ecb7c jmp 0x116ecb87 */
  goto L_116ecb87;
L_116ecb7e:;
  /* 116ecb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecb81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116ecb87:;
  /* 116ecb87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecb8b jge 0x116ecba6 */
  if ((C.sf==C.of)) goto L_116ecba6;
  /* 116ecb8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecb90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ecb93 add eax, 0x1170e120 */
  { uint32_t _a=(EAX),_b=(0x1170e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecb9b mov edx, dword ptr [0x1170f9c0] */
  EDX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ecba1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 116ecba4 jmp 0x116ecb7e */
  goto L_116ecb7e;
L_116ecba6:;
  /* 116ecba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ecbad jmp 0x116ecbb8 */
  goto L_116ecbb8;
L_116ecbaf:;
  /* 116ecbaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecbb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ecbb8:;
  /* 116ecbb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecbbc jge 0x116ecc08 */
  if ((C.sf==C.of)) goto L_116ecc08;
  /* 116ecbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecbc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ecbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecbc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ecbca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ecbcd mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ecbd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecbd8 je 0x116ecbf6 */
  if (C.zf) goto L_116ecbf6;
  /* 116ecbda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecbdd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ecbe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecbe3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ecbe6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ecbe9 mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ecbf0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecbf4 jne 0x116ecc06 */
  if (!C.zf) goto L_116ecc06;
L_116ecbf6:;
  /* 116ecbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ecbf9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ecbfc mov dword ptr [ecx + 0x1170e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1170e130), (0xffffffffu));
L_116ecc06:;
  /* 116ecc06 jmp 0x116ecbaf */
  goto L_116ecbaf;
L_116ecc08:;
  /* 116ecc08 mov esp, ebp */
  ESP = (EBP);
  /* 116ecc0a pop ebp */
  EBP = (pop32());
  /* 116ecc0b ret  */
  ESPCHK(0x116ecae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x116ecc10 (26 bytes, 9 insns) */
void f_116ecc10(void) {
  FTRACE(0x116ecc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecc10 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecc11 mov ebp, esp */
  EBP = (ESP);
  /* 116ecc13 call 0x116ed810 */
  push32(0x116ecc18u); f_116ed810();
  /* 116ecc18 movsx eax, byte ptr [0x1170f664] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1170f664))));
  /* 116ecc1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ecc21 je 0x116ecc28 */
  if (C.zf) goto L_116ecc28;
  /* 116ecc23 call 0x116ed5d0 */
  push32(0x116ecc28u); f_116ed5d0();
L_116ecc28:;
  /* 116ecc28 pop ebp */
  EBP = (pop32());
  /* 116ecc29 ret  */
  ESPCHK(0x116ecc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x116ecc30 (61 bytes, 20 insns) */
void f_116ecc30(void) {
  FTRACE(0x116ecc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecc30 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecc31 mov ebp, esp */
  EBP = (ESP);
  /* 116ecc33 cmp dword ptr [ebp + 8], 0x1170e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1170e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecc3a jb 0x116ecc5e */
  if (C.cf) goto L_116ecc5e;
  /* 116ecc3c cmp dword ptr [ebp + 8], 0x1170e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1170e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecc43 ja 0x116ecc5e */
  if ((!C.cf&&!C.zf)) goto L_116ecc5e;
  /* 116ecc45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecc48 sub eax, 0x1170e120 */
  { uint32_t _a=(EAX),_b=(0x1170e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ecc4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ecc50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecc53 push eax */
  push32((uint32_t)(EAX));
  /* 116ecc54 call 0x116e7820 */
  push32(0x116ecc59u); f_116e7820();
  /* 116ecc59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecc5c jmp 0x116ecc6b */
  goto L_116ecc6b;
L_116ecc5e:;
  /* 116ecc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecc61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecc64 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecc65 call dword ptr [0x1171231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171231c))), 0x116ecc6bu);
L_116ecc6b:;
  /* 116ecc6b pop ebp */
  EBP = (pop32());
  /* 116ecc6c ret  */
  ESPCHK(0x116ecc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x116ecc70 (41 bytes, 16 insns) */
void f_116ecc70(void) {
  FTRACE(0x116ecc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecc70 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecc71 mov ebp, esp */
  EBP = (ESP);
  /* 116ecc73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecc77 jge 0x116ecc8a */
  if ((C.sf==C.of)) goto L_116ecc8a;
  /* 116ecc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecc7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecc7f push eax */
  push32((uint32_t)(EAX));
  /* 116ecc80 call 0x116e7820 */
  push32(0x116ecc85u); f_116e7820();
  /* 116ecc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecc88 jmp 0x116ecc97 */
  goto L_116ecc97;
L_116ecc8a:;
  /* 116ecc8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ecc8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecc90 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecc91 call dword ptr [0x1171231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171231c))), 0x116ecc97u);
L_116ecc97:;
  /* 116ecc97 pop ebp */
  EBP = (pop32());
  /* 116ecc98 ret  */
  ESPCHK(0x116ecc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cca0 @ 0x116ecca0 (61 bytes, 20 insns) */
void f_116ecca0(void) {
  FTRACE(0x116ecca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecca0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecca1 mov ebp, esp */
  EBP = (ESP);
  /* 116ecca3 cmp dword ptr [ebp + 8], 0x1170e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1170e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eccaa jb 0x116eccce */
  if (C.cf) goto L_116eccce;
  /* 116eccac cmp dword ptr [ebp + 8], 0x1170e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1170e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eccb3 ja 0x116eccce */
  if ((!C.cf&&!C.zf)) goto L_116eccce;
  /* 116eccb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eccb8 sub eax, 0x1170e120 */
  { uint32_t _a=(EAX),_b=(0x1170e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eccbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116eccc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eccc3 push eax */
  push32((uint32_t)(EAX));
  /* 116eccc4 call 0x116e78c0 */
  push32(0x116eccc9u); f_116e78c0();
  /* 116eccc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecccc jmp 0x116eccdb */
  goto L_116eccdb;
L_116eccce:;
  /* 116eccce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eccd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eccd4 push ecx */
  push32((uint32_t)(ECX));
  /* 116eccd5 call dword ptr [0x11712318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712318))), 0x116eccdbu);
L_116eccdb:;
  /* 116eccdb pop ebp */
  EBP = (pop32());
  /* 116eccdc ret  */
  ESPCHK(0x116ecca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x116ecce0 (41 bytes, 16 insns) */
void f_116ecce0(void) {
  FTRACE(0x116ecce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecce0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecce1 mov ebp, esp */
  EBP = (ESP);
  /* 116ecce3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecce7 jge 0x116eccfa */
  if ((C.sf==C.of)) goto L_116eccfa;
  /* 116ecce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eccec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eccef push eax */
  push32((uint32_t)(EAX));
  /* 116eccf0 call 0x116e78c0 */
  push32(0x116eccf5u); f_116e78c0();
  /* 116eccf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eccf8 jmp 0x116ecd07 */
  goto L_116ecd07;
L_116eccfa:;
  /* 116eccfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eccfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecd00 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecd01 call dword ptr [0x11712318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712318))), 0x116ecd07u);
L_116ecd07:;
  /* 116ecd07 pop ebp */
  EBP = (pop32());
  /* 116ecd08 ret  */
  ESPCHK(0x116ecce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd10 @ 0x116ecd10 (119 bytes, 34 insns) */
void f_116ecd10(void) {
  FTRACE(0x116ecd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecd10 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecd11 mov ebp, esp */
  EBP = (ESP);
  /* 116ecd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ecd16 push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116ecd1b call dword ptr [0x11712354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712354))), 0x116ecd21u);
  /* 116ecd21 cmp dword ptr [0x1170f9ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecd28 je 0x116ecd48 */
  if (C.zf) goto L_116ecd48;
  /* 116ecd2a push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116ecd2f call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116ecd35u);
  /* 116ecd35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116ecd37 call 0x116e7820 */
  push32(0x116ecd3cu); f_116e7820();
  /* 116ecd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecd3f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116ecd46 jmp 0x116ecd4f */
  goto L_116ecd4f;
L_116ecd48:;
  /* 116ecd48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116ecd4f:;
  /* 116ecd4f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 116ecd53 push eax */
  push32((uint32_t)(EAX));
  /* 116ecd54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecd57 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecd58 call 0x116ecd90 */
  push32(0x116ecd5du); f_116ecd90();
  /* 116ecd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecd60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ecd63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecd67 je 0x116ecd75 */
  if (C.zf) goto L_116ecd75;
  /* 116ecd69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116ecd6b call 0x116e78c0 */
  push32(0x116ecd70u); f_116e78c0();
  /* 116ecd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecd73 jmp 0x116ecd80 */
  goto L_116ecd80;
L_116ecd75:;
  /* 116ecd75 push 0x1170f9bc */
  push32((uint32_t)(0x1170f9bcu));
  /* 116ecd7a call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116ecd80u);
L_116ecd80:;
  /* 116ecd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ecd83 mov esp, ebp */
  ESP = (EBP);
  /* 116ecd85 pop ebp */
  EBP = (pop32());
  /* 116ecd86 ret  */
  ESPCHK(0x116ecd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd90 @ 0x116ecd90 (160 bytes, 50 insns) */
void f_116ecd90(void) {
  FTRACE(0x116ecd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecd90 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecd91 mov ebp, esp */
  EBP = (ESP);
  /* 116ecd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ecd96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecd9a jne 0x116ecda3 */
  if (!C.zf) goto L_116ecda3;
  /* 116ecd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ecd9e jmp 0x116ece2c */
  goto L_116ece2c;
L_116ecda3:;
  /* 116ecda3 cmp dword ptr [0x1170f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecdaa jne 0x116ecdda */
  if (!C.zf) goto L_116ecdda;
  /* 116ecdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ecdaf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ecdb4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecdb9 jle 0x116ecdcb */
  if ((C.zf||C.sf!=C.of)) goto L_116ecdcb;
  /* 116ecdbb call 0x116ebcf0 */
  push32(0x116ecdc0u); f_116ebcf0();
  /* 116ecdc0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 116ecdc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ecdc9 jmp 0x116ece2c */
  goto L_116ece2c;
L_116ecdcb:;
  /* 116ecdcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecdce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 116ecdd1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 116ecdd3 mov eax, 1 */
  EAX = (0x1u);
  /* 116ecdd8 jmp 0x116ece2c */
  goto L_116ece2c;
L_116ecdda:;
  /* 116ecdda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ecde1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116ecde4 push eax */
  push32((uint32_t)(EAX));
  /* 116ecde5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ecde7 mov ecx, dword ptr [0x1170dea4] */
  ECX = (r32((uint32_t)(0x1170dea4)));
  /* 116ecded push ecx */
  push32((uint32_t)(ECX));
  /* 116ecdee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecdf1 push edx */
  push32((uint32_t)(EDX));
  /* 116ecdf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ecdf4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 116ecdf7 push eax */
  push32((uint32_t)(EAX));
  /* 116ecdf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116ecdfd mov ecx, dword ptr [0x1170f840] */
  ECX = (r32((uint32_t)(0x1170f840)));
  /* 116ece03 push ecx */
  push32((uint32_t)(ECX));
  /* 116ece04 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116ece0au);
  /* 116ece0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ece0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ece11 je 0x116ece19 */
  if (C.zf) goto L_116ece19;
  /* 116ece13 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ece17 je 0x116ece29 */
  if (C.zf) goto L_116ece29;
L_116ece19:;
  /* 116ece19 call 0x116ebcf0 */
  push32(0x116ece1eu); f_116ebcf0();
  /* 116ece1e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 116ece24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ece27 jmp 0x116ece2c */
  goto L_116ece2c;
L_116ece29:;
  /* 116ece29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ece2c:;
  /* 116ece2c mov esp, ebp */
  ESP = (EBP);
  /* 116ece2e pop ebp */
  EBP = (pop32());
  /* 116ece2f ret  */
  ESPCHK(0x116ecd90u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x116ece30 (32 bytes, 18 insns) */
void f_116ece30(void) {
  FTRACE(0x116ece30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ece30 push ebp */
  push32((uint32_t)(EBP));
  /* 116ece31 mov ebp, esp */
  EBP = (ESP);
  /* 116ece33 push ebx */
  push32((uint32_t)(EBX));
  /* 116ece34 push esi */
  push32((uint32_t)(ESI));
  /* 116ece35 push edi */
  push32((uint32_t)(EDI));
  /* 116ece36 push ebp */
  push32((uint32_t)(EBP));
  /* 116ece37 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ece39 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ece3b push 0x116ece48 */
  push32((uint32_t)(0x116ece48u));
  /* 116ece40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 116ece43 call 0x116f457c */
  push32(0x116ece48u); f_116f457c();
  /* 116ece48 pop ebp */
  EBP = (pop32());
  /* 116ece49 pop edi */
  EDI = (pop32());
  /* 116ece4a pop esi */
  ESI = (pop32());
  /* 116ece4b pop ebx */
  EBX = (pop32());
  /* 116ece4c mov esp, ebp */
  ESP = (EBP);
  /* 116ece4e pop ebp */
  EBP = (pop32());
  /* 116ece4f ret  */
  ESPCHK(0x116ece30u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x116ece72 (104 bytes, 33 insns) */
void f_116ece72(void) {
  FTRACE(0x116ece72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ece72 push ebx */
  push32((uint32_t)(EBX));
  /* 116ece73 push esi */
  push32((uint32_t)(ESI));
  /* 116ece74 push edi */
  push32((uint32_t)(EDI));
  /* 116ece75 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116ece79 push eax */
  push32((uint32_t)(EAX));
  /* 116ece7a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 116ece7c push 0x116ece50 */
  push32((uint32_t)(0x116ece50u));
  /* 116ece81 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 116ece88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_116ece8f:;
  /* 116ece8f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 116ece93 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ece96 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 116ece99 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ece9c je 0x116ececc */
  if (C.zf) goto L_116ececc;
  /* 116ece9e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ecea2 je 0x116ececc */
  if (C.zf) goto L_116ececc;
  /* 116ecea4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 116ecea7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 116eceaa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 116eceae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 116eceb1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eceb6 jne 0x116ececa */
  if (!C.zf) goto L_116ececa;
  /* 116eceb8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 116ecebd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 116ecec1 call 0x116ecf06 */
  push32(0x116ecec6u); f_116ecf06();
  /* 116ecec6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x116ececau);
L_116ececa:;
  /* 116ececa jmp 0x116ece8f */
  goto L_116ece8f;
L_116ececc:;
  /* 116ececc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 116eced3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eced6 pop edi */
  EDI = (pop32());
  /* 116eced7 pop esi */
  ESI = (pop32());
  /* 116eced8 pop ebx */
  EBX = (pop32());
  /* 116eced9 ret  */
  ESPCHK(0x116ece72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf06 @ 0x116ecf06 (24 bytes, 10 insns) */
void f_116ecf06(void) {
  FTRACE(0x116ecf06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecf06 push ebx */
  push32((uint32_t)(EBX));
  /* 116ecf07 push ecx */
  push32((uint32_t)(ECX));
  /* 116ecf08 mov ebx, 0x1170e3b8 */
  EBX = (0x1170e3b8u);
  /* 116ecf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ecf10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 116ecf13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 116ecf16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 116ecf19 pop ecx */
  ECX = (pop32());
  /* 116ecf1a pop ebx */
  EBX = (pop32());
  /* 116ecf1b ret 4 */
  ESPCHK(0x116ecf06u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cfe5 @ 0x116ecfe5 (27 bytes, 11 insns) */
void f_116ecfe5(void) {
  FTRACE(0x116ecfe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ecfe5 push ebp */
  push32((uint32_t)(EBP));
  /* 116ecfe6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 116ecfea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 116ecfec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116ecfef push eax */
  push32((uint32_t)(EAX));
  /* 116ecff0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 116ecff3 push eax */
  push32((uint32_t)(EAX));
  /* 116ecff4 call 0x116ece72 */
  push32(0x116ecff9u); f_116ece72();
  /* 116ecff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ecffc pop ebp */
  EBP = (pop32());
  /* 116ecffd ret 4 */
  ESPCHK(0x116ecfe5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d000 @ 0x116ed000 (482 bytes, 138 insns) */
void f_116ed000(void) {
  FTRACE(0x116ed000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed000 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed001 mov ebp, esp */
  EBP = (ESP);
  /* 116ed003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed006 push esi */
  push32((uint32_t)(ESI));
  /* 116ed007 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 116ed00e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 116ed010 call 0x116e7820 */
  push32(0x116ed015u); f_116e7820();
  /* 116ed015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed018 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ed01f jmp 0x116ed02a */
  goto L_116ed02a;
L_116ed021:;
  /* 116ed021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ed02a:;
  /* 116ed02a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed02e jge 0x116ed1d0 */
  if ((C.sf==C.of)) goto L_116ed1d0;
  /* 116ed034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed037 cmp dword ptr [ecx*4 + 0x11711000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11711000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed03f je 0x116ed136 */
  if (C.zf) goto L_116ed136;
  /* 116ed045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed048 mov eax, dword ptr [edx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ed04f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ed052 jmp 0x116ed05d */
  goto L_116ed05d;
L_116ed054:;
  /* 116ed054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed057 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed05a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116ed05d:;
  /* 116ed05d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed060 mov eax, dword ptr [edx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ed067 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed06c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed06f jae 0x116ed126 */
  if (!C.cf) goto L_116ed126;
  /* 116ed075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed078 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116ed07c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ed081 jne 0x116ed121 */
  if (!C.zf) goto L_116ed121;
  /* 116ed087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed08a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed08e jne 0x116ed0c9 */
  if (!C.zf) goto L_116ed0c9;
  /* 116ed090 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ed092 call 0x116e7820 */
  push32(0x116ed097u); f_116e7820();
  /* 116ed097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed09d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed0a1 jne 0x116ed0bf */
  if (!C.zf) goto L_116ed0bf;
  /* 116ed0a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed0a9 push edx */
  push32((uint32_t)(EDX));
  /* 116ed0aa call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116ed0b0u);
  /* 116ed0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ed0b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_116ed0bf:;
  /* 116ed0bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ed0c1 call 0x116e78c0 */
  push32(0x116ed0c6u); f_116e78c0();
  /* 116ed0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ed0c9:;
  /* 116ed0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed0cf push eax */
  push32((uint32_t)(EAX));
  /* 116ed0d0 call dword ptr [0x1171231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171231c))), 0x116ed0d6u);
  /* 116ed0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116ed0dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed0e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ed0e2 je 0x116ed0f6 */
  if (C.zf) goto L_116ed0f6;
  /* 116ed0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed0ea push eax */
  push32((uint32_t)(EAX));
  /* 116ed0eb call dword ptr [0x11712318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712318))), 0x116ed0f1u);
  /* 116ed0f1 jmp 0x116ed054 */
  goto L_116ed054;
L_116ed0f6:;
  /* 116ed0f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed0f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116ed0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed102 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ed105 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed10b sub eax, dword ptr [edx*4 + 0x11711000] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11711000))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed112 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116ed113 mov esi, 0x24 */
  ESI = (0x24u);
  /* 116ed118 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116ed11a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ed11f jmp 0x116ed126 */
  goto L_116ed126;
L_116ed121:;
  /* 116ed121 jmp 0x116ed054 */
  goto L_116ed054;
L_116ed126:;
  /* 116ed126 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed12a je 0x116ed131 */
  if (C.zf) goto L_116ed131;
  /* 116ed12c jmp 0x116ed1d0 */
  goto L_116ed1d0;
L_116ed131:;
  /* 116ed131 jmp 0x116ed1cb */
  goto L_116ed1cb;
L_116ed136:;
  /* 116ed136 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 116ed138 push 0x1170b03c */
  push32((uint32_t)(0x1170b03cu));
  /* 116ed13d push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed13f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116ed144 call 0x116e3e20 */
  push32(0x116ed149u); f_116e3e20();
  /* 116ed149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed14c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ed14f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed153 je 0x116ed1c9 */
  if (C.zf) goto L_116ed1c9;
  /* 116ed155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed15b mov dword ptr [eax*4 + 0x11711000], ecx */
  w32((uint32_t)(EAX*4 + 0x11711000), (ECX));
  /* 116ed162 mov edx, dword ptr [0x1171113c] */
  EDX = (r32((uint32_t)(0x1171113c)));
  /* 116ed168 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed16b mov dword ptr [0x1171113c], edx */
  w32((uint32_t)(0x1171113c), (EDX));
  /* 116ed171 jmp 0x116ed17c */
  goto L_116ed17c;
L_116ed173:;
  /* 116ed173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed176 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ed17c:;
  /* 116ed17c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed17f mov edx, dword ptr [ecx*4 + 0x11711000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ed186 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed18c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed18f jae 0x116ed1b4 */
  if (!C.cf) goto L_116ed1b4;
  /* 116ed191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed194 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 116ed198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed19b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116ed1a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed1a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 116ed1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed1ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116ed1b2 jmp 0x116ed173 */
  goto L_116ed173;
L_116ed1b4:;
  /* 116ed1b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed1b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ed1ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ed1bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed1c0 push edx */
  push32((uint32_t)(EDX));
  /* 116ed1c1 call 0x116ed510 */
  push32(0x116ed1c6u); f_116ed510();
  /* 116ed1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ed1c9:;
  /* 116ed1c9 jmp 0x116ed1d0 */
  goto L_116ed1d0;
L_116ed1cb:;
  /* 116ed1cb jmp 0x116ed021 */
  goto L_116ed021;
L_116ed1d0:;
  /* 116ed1d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 116ed1d2 call 0x116e78c0 */
  push32(0x116ed1d7u); f_116e78c0();
  /* 116ed1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed1dd pop esi */
  ESI = (pop32());
  /* 116ed1de mov esp, ebp */
  ESP = (EBP);
  /* 116ed1e0 pop ebp */
  EBP = (pop32());
  /* 116ed1e1 ret  */
  ESPCHK(0x116ed000u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x116ed1f0 (183 bytes, 57 insns) */
void f_116ed1f0(void) {
  FTRACE(0x116ed1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed1f1 mov ebp, esp */
  EBP = (ESP);
  /* 116ed1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed1f7 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed1fd jae 0x116ed28a */
  if (!C.cf) goto L_116ed28a;
  /* 116ed203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed206 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ed209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed20c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ed20f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed212 mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ed219 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed21d jne 0x116ed28a */
  if (!C.zf) goto L_116ed28a;
  /* 116ed21f cmp dword ptr [0x1170f624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed226 jne 0x116ed26a */
  if (!C.zf) goto L_116ed26a;
  /* 116ed228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed22b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ed22e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed232 je 0x116ed242 */
  if (C.zf) goto L_116ed242;
  /* 116ed234 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed238 je 0x116ed250 */
  if (C.zf) goto L_116ed250;
  /* 116ed23a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed23e je 0x116ed25e */
  if (C.zf) goto L_116ed25e;
  /* 116ed240 jmp 0x116ed26a */
  goto L_116ed26a;
L_116ed242:;
  /* 116ed242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed245 push edx */
  push32((uint32_t)(EDX));
  /* 116ed246 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 116ed248 call dword ptr [0x117122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e4))), 0x116ed24eu);
  /* 116ed24e jmp 0x116ed26a */
  goto L_116ed26a;
L_116ed250:;
  /* 116ed250 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed253 push eax */
  push32((uint32_t)(EAX));
  /* 116ed254 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 116ed256 call dword ptr [0x117122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e4))), 0x116ed25cu);
  /* 116ed25c jmp 0x116ed26a */
  goto L_116ed26a;
L_116ed25e:;
  /* 116ed25e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed261 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed262 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116ed264 call dword ptr [0x117122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e4))), 0x116ed26au);
L_116ed26a:;
  /* 116ed26a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed26d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ed270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed273 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ed276 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed279 mov ecx, dword ptr [edx*4 + 0x11711000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ed280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed283 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 116ed286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ed288 jmp 0x116ed2a3 */
  goto L_116ed2a3;
L_116ed28a:;
  /* 116ed28a call 0x116ebcf0 */
  push32(0x116ed28fu); f_116ebcf0();
  /* 116ed28f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ed295 call 0x116ebd00 */
  push32(0x116ed29au); f_116ebd00();
  /* 116ed29a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ed2a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ed2a3:;
  /* 116ed2a3 mov esp, ebp */
  ESP = (EBP);
  /* 116ed2a5 pop ebp */
  EBP = (pop32());
  /* 116ed2a6 ret  */
  ESPCHK(0x116ed1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x116ed2b0 (216 bytes, 63 insns) */
void f_116ed2b0(void) {
  FTRACE(0x116ed2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed2b1 mov ebp, esp */
  EBP = (ESP);
  /* 116ed2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed2b7 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed2bd jae 0x116ed36b */
  if (!C.cf) goto L_116ed36b;
  /* 116ed2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed2c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ed2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed2cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ed2cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed2d2 mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ed2d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ed2de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed2e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ed2e3 je 0x116ed36b */
  if (C.zf) goto L_116ed36b;
  /* 116ed2e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed2ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ed2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed2f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ed2f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed2f8 mov ecx, dword ptr [edx*4 + 0x11711000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ed2ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed303 je 0x116ed36b */
  if (C.zf) goto L_116ed36b;
  /* 116ed305 cmp dword ptr [0x1170f624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed30c jne 0x116ed34a */
  if (!C.zf) goto L_116ed34a;
  /* 116ed30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed311 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ed314 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed318 je 0x116ed328 */
  if (C.zf) goto L_116ed328;
  /* 116ed31a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed31e je 0x116ed334 */
  if (C.zf) goto L_116ed334;
  /* 116ed320 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed324 je 0x116ed340 */
  if (C.zf) goto L_116ed340;
  /* 116ed326 jmp 0x116ed34a */
  goto L_116ed34a;
L_116ed328:;
  /* 116ed328 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ed32a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 116ed32c call dword ptr [0x117122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e4))), 0x116ed332u);
  /* 116ed332 jmp 0x116ed34a */
  goto L_116ed34a;
L_116ed334:;
  /* 116ed334 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ed336 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 116ed338 call dword ptr [0x117122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e4))), 0x116ed33eu);
  /* 116ed33e jmp 0x116ed34a */
  goto L_116ed34a;
L_116ed340:;
  /* 116ed340 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ed342 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116ed344 call dword ptr [0x117122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122e4))), 0x116ed34au);
L_116ed34a:;
  /* 116ed34a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ed350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed353 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ed356 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed359 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ed360 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 116ed367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ed369 jmp 0x116ed384 */
  goto L_116ed384;
L_116ed36b:;
  /* 116ed36b call 0x116ebcf0 */
  push32(0x116ed370u); f_116ebcf0();
  /* 116ed370 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ed376 call 0x116ebd00 */
  push32(0x116ed37bu); f_116ebd00();
  /* 116ed37b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ed381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ed384:;
  /* 116ed384 mov esp, ebp */
  ESP = (EBP);
  /* 116ed386 pop ebp */
  EBP = (pop32());
  /* 116ed387 ret  */
  ESPCHK(0x116ed2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x116ed390 (102 bytes, 30 insns) */
void f_116ed390(void) {
  FTRACE(0x116ed390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed390 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed391 mov ebp, esp */
  EBP = (ESP);
  /* 116ed393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed396 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed39c jae 0x116ed3db */
  if (!C.cf) goto L_116ed3db;
  /* 116ed39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed3a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ed3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed3a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ed3aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed3ad mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ed3b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ed3b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed3bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ed3be je 0x116ed3db */
  if (C.zf) goto L_116ed3db;
  /* 116ed3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed3c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 116ed3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed3c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 116ed3cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed3cf mov ecx, dword ptr [edx*4 + 0x11711000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116ed3d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 116ed3d9 jmp 0x116ed3f4 */
  goto L_116ed3f4;
L_116ed3db:;
  /* 116ed3db call 0x116ebcf0 */
  push32(0x116ed3e0u); f_116ebcf0();
  /* 116ed3e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ed3e6 call 0x116ebd00 */
  push32(0x116ed3ebu); f_116ebd00();
  /* 116ed3eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ed3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116ed3f4:;
  /* 116ed3f4 pop ebp */
  EBP = (pop32());
  /* 116ed3f5 ret  */
  ESPCHK(0x116ed390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x116ed400 (260 bytes, 83 insns) */
void f_116ed400(void) {
  FTRACE(0x116ed400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed400 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed401 mov ebp, esp */
  EBP = (ESP);
  /* 116ed403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed406 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ed40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed40d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 116ed410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ed412 je 0x116ed41d */
  if (C.zf) goto L_116ed41d;
  /* 116ed414 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed417 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116ed41a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_116ed41d:;
  /* 116ed41d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed420 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ed428 je 0x116ed432 */
  if (C.zf) goto L_116ed432;
  /* 116ed42a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed42d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 116ed42f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_116ed432:;
  /* 116ed432 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed435 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed43b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ed43d je 0x116ed448 */
  if (C.zf) goto L_116ed448;
  /* 116ed43f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed442 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 116ed445 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_116ed448:;
  /* 116ed448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed44b push eax */
  push32((uint32_t)(EAX));
  /* 116ed44c call dword ptr [0x1171238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171238c))), 0x116ed452u);
  /* 116ed452 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ed455 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed459 jne 0x116ed472 */
  if (!C.zf) goto L_116ed472;
  /* 116ed45b call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116ed461u);
  /* 116ed461 push eax */
  push32((uint32_t)(EAX));
  /* 116ed462 call 0x116ebc50 */
  push32(0x116ed467u); f_116ebc50();
  /* 116ed467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed46a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ed46d jmp 0x116ed500 */
  goto L_116ed500;
L_116ed472:;
  /* 116ed472 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed476 jne 0x116ed483 */
  if (!C.zf) goto L_116ed483;
  /* 116ed478 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed47b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 116ed47e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 116ed481 jmp 0x116ed492 */
  goto L_116ed492;
L_116ed483:;
  /* 116ed483 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed487 jne 0x116ed492 */
  if (!C.zf) goto L_116ed492;
  /* 116ed489 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed48c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 116ed48f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_116ed492:;
  /* 116ed492 call 0x116ed000 */
  push32(0x116ed497u); f_116ed000();
  /* 116ed497 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ed49a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed49e jne 0x116ed4bb */
  if (!C.zf) goto L_116ed4bb;
  /* 116ed4a0 call 0x116ebcf0 */
  push32(0x116ed4a5u); f_116ebcf0();
  /* 116ed4a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 116ed4ab call 0x116ebd00 */
  push32(0x116ed4b0u); f_116ebd00();
  /* 116ed4b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116ed4b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ed4b9 jmp 0x116ed500 */
  goto L_116ed500;
L_116ed4bb:;
  /* 116ed4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed4be push eax */
  push32((uint32_t)(EAX));
  /* 116ed4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed4c3 call 0x116ed1f0 */
  push32(0x116ed4c8u); f_116ed1f0();
  /* 116ed4c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed4cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed4ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 116ed4d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 116ed4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed4d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ed4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed4dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ed4e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed4e3 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ed4ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 116ed4ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 116ed4f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed4f5 call 0x116ed5a0 */
  push32(0x116ed4fau); f_116ed5a0();
  /* 116ed4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed4fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ed500:;
  /* 116ed500 mov esp, ebp */
  ESP = (EBP);
  /* 116ed502 pop ebp */
  EBP = (pop32());
  /* 116ed503 ret  */
  ESPCHK(0x116ed400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d510 @ 0x116ed510 (134 bytes, 44 insns) */
void f_116ed510(void) {
  FTRACE(0x116ed510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed510 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed511 mov ebp, esp */
  EBP = (ESP);
  /* 116ed513 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed517 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ed51a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed51d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ed520 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed523 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ed52a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed52c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116ed52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed532 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed536 jne 0x116ed571 */
  if (!C.zf) goto L_116ed571;
  /* 116ed538 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ed53a call 0x116e7820 */
  push32(0x116ed53fu); f_116e7820();
  /* 116ed53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed545 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed549 jne 0x116ed567 */
  if (!C.zf) goto L_116ed567;
  /* 116ed54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed54e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed551 push edx */
  push32((uint32_t)(EDX));
  /* 116ed552 call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116ed558u);
  /* 116ed558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed55b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ed55e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_116ed567:;
  /* 116ed567 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116ed569 call 0x116e78c0 */
  push32(0x116ed56eu); f_116e78c0();
  /* 116ed56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ed571:;
  /* 116ed571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed574 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ed577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed57a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ed57d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed580 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ed587 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 116ed58b push eax */
  push32((uint32_t)(EAX));
  /* 116ed58c call dword ptr [0x1171231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171231c))), 0x116ed592u);
  /* 116ed592 mov esp, ebp */
  ESP = (EBP);
  /* 116ed594 pop ebp */
  EBP = (pop32());
  /* 116ed595 ret  */
  ESPCHK(0x116ed510u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x116ed5a0 (38 bytes, 13 insns) */
void f_116ed5a0(void) {
  FTRACE(0x116ed5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed5a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ed5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ed5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ed5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed5b2 mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ed5b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 116ed5bd push eax */
  push32((uint32_t)(EAX));
  /* 116ed5be call dword ptr [0x11712318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712318))), 0x116ed5c4u);
  /* 116ed5c4 pop ebp */
  EBP = (pop32());
  /* 116ed5c5 ret  */
  ESPCHK(0x116ed5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5d0 @ 0x116ed5d0 (218 bytes, 63 insns) */
void f_116ed5d0(void) {
  FTRACE(0x116ed5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed5d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ed5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ed5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed5df call 0x116e7820 */
  push32(0x116ed5e4u); f_116e7820();
  /* 116ed5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed5e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 116ed5ee jmp 0x116ed5f9 */
  goto L_116ed5f9;
L_116ed5f0:;
  /* 116ed5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed5f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed5f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116ed5f9:;
  /* 116ed5f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed5fc cmp ecx, dword ptr [0x11710d00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710d00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed602 jge 0x116ed699 */
  if ((C.sf==C.of)) goto L_116ed699;
  /* 116ed608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed60b mov eax, dword ptr [0x1170f9c0] */
  EAX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed610 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed614 je 0x116ed694 */
  if (C.zf) goto L_116ed694;
  /* 116ed616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed619 mov edx, dword ptr [0x1170f9c0] */
  EDX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed61f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116ed622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ed625 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ed62d je 0x116ed651 */
  if (C.zf) goto L_116ed651;
  /* 116ed62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed632 mov eax, dword ptr [0x1170f9c0] */
  EAX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed637 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116ed63a push ecx */
  push32((uint32_t)(ECX));
  /* 116ed63b call 0x116ee3c0 */
  push32(0x116ed640u); f_116ee3c0();
  /* 116ed640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed643 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed646 je 0x116ed651 */
  if (C.zf) goto L_116ed651;
  /* 116ed648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed64e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116ed651:;
  /* 116ed651 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed655 jl 0x116ed694 */
  if ((C.sf!=C.of)) goto L_116ed694;
  /* 116ed657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed65a mov ecx, dword ptr [0x1170f9c0] */
  ECX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed660 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ed663 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed666 push edx */
  push32((uint32_t)(EDX));
  /* 116ed667 call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116ed66du);
  /* 116ed66d push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed66f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed672 mov ecx, dword ptr [0x1170f9c0] */
  ECX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed678 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ed67b push edx */
  push32((uint32_t)(EDX));
  /* 116ed67c call 0x116e48b0 */
  push32(0x116ed681u); f_116e48b0();
  /* 116ed681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed687 mov ecx, dword ptr [0x1170f9c0] */
  ECX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed68d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_116ed694:;
  /* 116ed694 jmp 0x116ed5f0 */
  goto L_116ed5f0;
L_116ed699:;
  /* 116ed699 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed69b call 0x116e78c0 */
  push32(0x116ed6a0u); f_116e78c0();
  /* 116ed6a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed6a6 mov esp, ebp */
  ESP = (EBP);
  /* 116ed6a8 pop ebp */
  EBP = (pop32());
  /* 116ed6a9 ret  */
  ESPCHK(0x116ed5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6b0 @ 0x116ed6b0 (68 bytes, 26 insns) */
void f_116ed6b0(void) {
  FTRACE(0x116ed6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed6b1 mov ebp, esp */
  EBP = (ESP);
  /* 116ed6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed6b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed6b8 jne 0x116ed6c6 */
  if (!C.zf) goto L_116ed6c6;
  /* 116ed6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 116ed6bc call 0x116ed820 */
  push32(0x116ed6c1u); f_116ed820();
  /* 116ed6c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed6c4 jmp 0x116ed6f0 */
  goto L_116ed6f0;
L_116ed6c6:;
  /* 116ed6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed6c9 push eax */
  push32((uint32_t)(EAX));
  /* 116ed6ca call 0x116ecc30 */
  push32(0x116ed6cfu); f_116ecc30();
  /* 116ed6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed6d6 call 0x116ed700 */
  push32(0x116ed6dbu); f_116ed700();
  /* 116ed6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed6de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ed6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed6e4 push edx */
  push32((uint32_t)(EDX));
  /* 116ed6e5 call 0x116ecca0 */
  push32(0x116ed6eau); f_116ecca0();
  /* 116ed6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed6ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ed6f0:;
  /* 116ed6f0 mov esp, ebp */
  ESP = (EBP);
  /* 116ed6f2 pop ebp */
  EBP = (pop32());
  /* 116ed6f3 ret  */
  ESPCHK(0x116ed6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d700 @ 0x116ed700 (65 bytes, 26 insns) */
void f_116ed700(void) {
  FTRACE(0x116ed700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed700 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed701 mov ebp, esp */
  EBP = (ESP);
  /* 116ed703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed706 push eax */
  push32((uint32_t)(EAX));
  /* 116ed707 call 0x116ed750 */
  push32(0x116ed70cu); f_116ed750();
  /* 116ed70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ed711 je 0x116ed718 */
  if (C.zf) goto L_116ed718;
  /* 116ed713 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ed716 jmp 0x116ed73f */
  goto L_116ed73f;
L_116ed718:;
  /* 116ed718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed71b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ed71e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ed726 je 0x116ed73d */
  if (C.zf) goto L_116ed73d;
  /* 116ed728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed72b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116ed72e push ecx */
  push32((uint32_t)(ECX));
  /* 116ed72f call 0x116ee510 */
  push32(0x116ed734u); f_116ee510();
  /* 116ed734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed737 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116ed739 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed73b jmp 0x116ed73f */
  goto L_116ed73f;
L_116ed73d:;
  /* 116ed73d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ed73f:;
  /* 116ed73f pop ebp */
  EBP = (pop32());
  /* 116ed740 ret  */
  ESPCHK(0x116ed700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d750 @ 0x116ed750 (183 bytes, 62 insns) */
void f_116ed750(void) {
  FTRACE(0x116ed750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed750 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed751 mov ebp, esp */
  EBP = (ESP);
  /* 116ed753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ed75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed760 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116ed763 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed766 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ed769 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed76c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed76f jne 0x116ed7eb */
  if (!C.zf) goto L_116ed7eb;
  /* 116ed771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed774 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ed777 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed77d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ed77f je 0x116ed7eb */
  if (C.zf) goto L_116ed7eb;
  /* 116ed781 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed787 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 116ed789 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ed78f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed793 jle 0x116ed7eb */
  if ((C.zf||C.sf!=C.of)) goto L_116ed7eb;
  /* 116ed795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed798 push edx */
  push32((uint32_t)(EDX));
  /* 116ed799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed79c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ed79f push ecx */
  push32((uint32_t)(ECX));
  /* 116ed7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116ed7a6 push eax */
  push32((uint32_t)(EAX));
  /* 116ed7a7 call 0x116ec6c0 */
  push32(0x116ed7acu); f_116ec6c0();
  /* 116ed7ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed7af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed7b2 jne 0x116ed7d5 */
  if (!C.zf) goto L_116ed7d5;
  /* 116ed7b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ed7ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ed7c2 je 0x116ed7d3 */
  if (C.zf) goto L_116ed7d3;
  /* 116ed7c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ed7ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 116ed7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_116ed7d3:;
  /* 116ed7d3 jmp 0x116ed7eb */
  goto L_116ed7eb;
L_116ed7d5:;
  /* 116ed7d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ed7db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed7de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 116ed7e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ed7eb:;
  /* 116ed7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116ed7f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116ed7f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ed7f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116ed800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed803 mov esp, ebp */
  ESP = (EBP);
  /* 116ed805 pop ebp */
  EBP = (pop32());
  /* 116ed806 ret  */
  ESPCHK(0x116ed750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d810 @ 0x116ed810 (15 bytes, 7 insns) */
void f_116ed810(void) {
  FTRACE(0x116ed810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed810 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed811 mov ebp, esp */
  EBP = (ESP);
  /* 116ed813 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ed815 call 0x116ed820 */
  push32(0x116ed81au); f_116ed820();
  /* 116ed81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed81d pop ebp */
  EBP = (pop32());
  /* 116ed81e ret  */
  ESPCHK(0x116ed810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x116ed820 (319 bytes, 94 insns) */
void f_116ed820(void) {
  FTRACE(0x116ed820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed820 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed821 mov ebp, esp */
  EBP = (ESP);
  /* 116ed823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ed82d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ed834 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed836 call 0x116e7820 */
  push32(0x116ed83bu); f_116e7820();
  /* 116ed83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed83e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ed845 jmp 0x116ed850 */
  goto L_116ed850;
L_116ed847:;
  /* 116ed847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed84d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116ed850:;
  /* 116ed850 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed853 cmp ecx, dword ptr [0x11710d00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11710d00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed859 jge 0x116ed943 */
  if ((C.sf==C.of)) goto L_116ed943;
  /* 116ed85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed862 mov eax, dword ptr [0x1170f9c0] */
  EAX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed867 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed86b je 0x116ed93e */
  if (C.zf) goto L_116ed93e;
  /* 116ed871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed874 mov edx, dword ptr [0x1170f9c0] */
  EDX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed87a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116ed87d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116ed880 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 116ed886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ed888 je 0x116ed93e */
  if (C.zf) goto L_116ed93e;
  /* 116ed88e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed891 mov eax, dword ptr [0x1170f9c0] */
  EAX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed896 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116ed899 push ecx */
  push32((uint32_t)(ECX));
  /* 116ed89a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed89d push edx */
  push32((uint32_t)(EDX));
  /* 116ed89e call 0x116ecc70 */
  push32(0x116ed8a3u); f_116ecc70();
  /* 116ed8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed8a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed8a9 mov ecx, dword ptr [0x1170f9c0] */
  ECX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed8af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ed8b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116ed8b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 116ed8ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ed8bc je 0x116ed925 */
  if (C.zf) goto L_116ed925;
  /* 116ed8be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed8c2 jne 0x116ed8e9 */
  if (!C.zf) goto L_116ed8e9;
  /* 116ed8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed8c7 mov edx, dword ptr [0x1170f9c0] */
  EDX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed8cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116ed8d0 push eax */
  push32((uint32_t)(EAX));
  /* 116ed8d1 call 0x116ed700 */
  push32(0x116ed8d6u); f_116ed700();
  /* 116ed8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed8d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed8dc je 0x116ed8e7 */
  if (C.zf) goto L_116ed8e7;
  /* 116ed8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed8e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed8e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116ed8e7:;
  /* 116ed8e7 jmp 0x116ed925 */
  goto L_116ed925;
L_116ed8e9:;
  /* 116ed8e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed8ed jne 0x116ed925 */
  if (!C.zf) goto L_116ed925;
  /* 116ed8ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed8f2 mov eax, dword ptr [0x1170f9c0] */
  EAX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed8f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116ed8fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ed8fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116ed900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ed902 je 0x116ed925 */
  if (C.zf) goto L_116ed925;
  /* 116ed904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed907 mov ecx, dword ptr [0x1170f9c0] */
  ECX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed90d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ed910 push edx */
  push32((uint32_t)(EDX));
  /* 116ed911 call 0x116ed700 */
  push32(0x116ed916u); f_116ed700();
  /* 116ed916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed919 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed91c jne 0x116ed925 */
  if (!C.zf) goto L_116ed925;
  /* 116ed91e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_116ed925:;
  /* 116ed925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed928 mov ecx, dword ptr [0x1170f9c0] */
  ECX = (r32((uint32_t)(0x1170f9c0)));
  /* 116ed92e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116ed931 push edx */
  push32((uint32_t)(EDX));
  /* 116ed932 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ed935 push eax */
  push32((uint32_t)(EAX));
  /* 116ed936 call 0x116ecce0 */
  push32(0x116ed93bu); f_116ecce0();
  /* 116ed93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ed93e:;
  /* 116ed93e jmp 0x116ed847 */
  goto L_116ed847;
L_116ed943:;
  /* 116ed943 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed945 call 0x116e78c0 */
  push32(0x116ed94au); f_116e78c0();
  /* 116ed94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed94d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed951 jne 0x116ed958 */
  if (!C.zf) goto L_116ed958;
  /* 116ed953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ed956 jmp 0x116ed95b */
  goto L_116ed95b;
L_116ed958:;
  /* 116ed958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ed95b:;
  /* 116ed95b mov esp, ebp */
  ESP = (EBP);
  /* 116ed95d pop ebp */
  EBP = (pop32());
  /* 116ed95e ret  */
  ESPCHK(0x116ed820u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x116ed960 (15 bytes, 7 insns) */
void f_116ed960(void) {
  FTRACE(0x116ed960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed960 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed961 mov ebp, esp */
  EBP = (ESP);
  /* 116ed963 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ed965 call 0x116e2d90 */
  push32(0x116ed96au); f_116e2d90();
  /* 116ed96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed96d pop ebp */
  EBP = (pop32());
  /* 116ed96e ret  */
  ESPCHK(0x116ed960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d970 @ 0x116ed970 (1007 bytes, 269 insns) */
void f_116ed970(void) {
  FTRACE(0x116ed970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ed970 push ebp */
  push32((uint32_t)(EBP));
  /* 116ed971 mov ebp, esp */
  EBP = (ESP);
  /* 116ed973 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ed979 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed97d jl 0x116ed985 */
  if ((C.sf!=C.of)) goto L_116ed985;
  /* 116ed97f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed983 jle 0x116ed98c */
  if ((C.zf||C.sf!=C.of)) goto L_116ed98c;
L_116ed985:;
  /* 116ed985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ed987 jmp 0x116edd5b */
  goto L_116edd5b;
L_116ed98c:;
  /* 116ed98c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116ed98e call 0x116e7820 */
  push32(0x116ed993u); f_116e7820();
  /* 116ed993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed996 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116ed99d mov eax, dword ptr [0x1170f9ac] */
  EAX = (r32((uint32_t)(0x1170f9ac)));
  /* 116ed9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed9a5 mov dword ptr [0x1170f9ac], eax */
  w32((uint32_t)(0x1170f9ac), (EAX));
L_116ed9aa:;
  /* 116ed9aa cmp dword ptr [0x1170f9bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f9bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed9b1 je 0x116ed9bd */
  if (C.zf) goto L_116ed9bd;
  /* 116ed9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ed9b5 call dword ptr [0x117122d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122d4))), 0x116ed9bbu);
  /* 116ed9bb jmp 0x116ed9aa */
  goto L_116ed9aa;
L_116ed9bd:;
  /* 116ed9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed9c1 je 0x116eda01 */
  if (C.zf) goto L_116eda01;
  /* 116ed9c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ed9c7 je 0x116ed9e1 */
  if (C.zf) goto L_116ed9e1;
  /* 116ed9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ed9cc push ecx */
  push32((uint32_t)(ECX));
  /* 116ed9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed9d0 push edx */
  push32((uint32_t)(EDX));
  /* 116ed9d1 call 0x116edd60 */
  push32(0x116ed9d6u); f_116edd60();
  /* 116ed9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ed9d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 116ed9df jmp 0x116ed9f3 */
  goto L_116ed9f3;
L_116ed9e1:;
  /* 116ed9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ed9e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ed9e7 mov ecx, dword ptr [eax + 0x1170e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1170e4dc)));
  /* 116ed9ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_116ed9f3:;
  /* 116ed9f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 116ed9f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116ed9fc jmp 0x116edd3b */
  goto L_116edd3b;
L_116eda01:;
  /* 116eda01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 116eda08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116eda0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda13 je 0x116edd33 */
  if (C.zf) goto L_116edd33;
  /* 116eda19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eda1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116eda1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda22 jne 0x116edc44 */
  if (!C.zf) goto L_116edc44;
  /* 116eda28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eda2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116eda2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda32 jne 0x116edc44 */
  if (!C.zf) goto L_116edc44;
  /* 116eda38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eda3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 116eda3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda42 jne 0x116edc44 */
  if (!C.zf) goto L_116edc44;
  /* 116eda48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116eda4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_116eda51:;
  /* 116eda51 push 0x1170b08c */
  push32((uint32_t)(0x1170b08cu));
  /* 116eda56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116eda5c push ecx */
  push32((uint32_t)(ECX));
  /* 116eda5d call 0x116efbc0 */
  push32(0x116eda62u); f_116efbc0();
  /* 116eda62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eda65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 116eda6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda72 je 0x116eda9d */
  if (C.zf) goto L_116eda9d;
  /* 116eda74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116eda7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eda80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 116eda86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda8d je 0x116eda9d */
  if (C.zf) goto L_116eda9d;
  /* 116eda8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116eda95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116eda98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eda9b jne 0x116edac3 */
  if (!C.zf) goto L_116edac3;
L_116eda9d:;
  /* 116eda9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edaa1 je 0x116edabc */
  if (C.zf) goto L_116edabc;
  /* 116edaa3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116edaa5 call 0x116e78c0 */
  push32(0x116edaaau); f_116e78c0();
  /* 116edaaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edaad mov edx, dword ptr [0x1170f9ac] */
  EDX = (r32((uint32_t)(0x1170f9ac)));
  /* 116edab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116edab6 mov dword ptr [0x1170f9ac], edx */
  w32((uint32_t)(0x1170f9ac), (EDX));
L_116edabc:;
  /* 116edabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116edabe jmp 0x116edd5b */
  goto L_116edd5b;
L_116edac3:;
  /* 116edac3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116edaca jmp 0x116edad5 */
  goto L_116edad5;
L_116edacc:;
  /* 116edacc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edacf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edad2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116edad5:;
  /* 116edad5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edad9 jg 0x116edb23 */
  if ((!C.zf&&C.sf==C.of)) goto L_116edb23;
  /* 116edadb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116edae1 push ecx */
  push32((uint32_t)(ECX));
  /* 116edae2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116edae8 push edx */
  push32((uint32_t)(EDX));
  /* 116edae9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edaec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edaef mov ecx, dword ptr [eax + 0x1170e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1170e4d8)));
  /* 116edaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 116edaf6 call 0x116efb80 */
  push32(0x116edafbu); f_116efb80();
  /* 116edafb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edb00 jne 0x116edb21 */
  if (!C.zf) goto L_116edb21;
  /* 116edb02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edb05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edb08 mov eax, dword ptr [edx + 0x1170e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1170e4d8)));
  /* 116edb0e push eax */
  push32((uint32_t)(EAX));
  /* 116edb0f call 0x116e6c50 */
  push32(0x116edb14u); f_116e6c50();
  /* 116edb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edb17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edb1d jne 0x116edb21 */
  if (!C.zf) goto L_116edb21;
  /* 116edb1f jmp 0x116edb23 */
  goto L_116edb23;
L_116edb21:;
  /* 116edb21 jmp 0x116edacc */
  goto L_116edacc;
L_116edb23:;
  /* 116edb23 push 0x1170b088 */
  push32((uint32_t)(0x1170b088u));
  /* 116edb28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116edb2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edb31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 116edb37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116edb3d push edx */
  push32((uint32_t)(EDX));
  /* 116edb3e call 0x116efb40 */
  push32(0x116edb43u); f_116efb40();
  /* 116edb43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edb46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 116edb4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edb53 jne 0x116edb89 */
  if (!C.zf) goto L_116edb89;
  /* 116edb55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116edb5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116edb5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edb61 je 0x116edb89 */
  if (C.zf) goto L_116edb89;
  /* 116edb63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edb67 je 0x116edb82 */
  if (C.zf) goto L_116edb82;
  /* 116edb69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116edb6b call 0x116e78c0 */
  push32(0x116edb70u); f_116e78c0();
  /* 116edb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edb73 mov edx, dword ptr [0x1170f9ac] */
  EDX = (r32((uint32_t)(0x1170f9ac)));
  /* 116edb79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116edb7c mov dword ptr [0x1170f9ac], edx */
  w32((uint32_t)(0x1170f9ac), (EDX));
L_116edb82:;
  /* 116edb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116edb84 jmp 0x116edd5b */
  goto L_116edd5b;
L_116edb89:;
  /* 116edb89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edb8d jg 0x116edbda */
  if ((!C.zf&&C.sf==C.of)) goto L_116edbda;
  /* 116edb8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116edb95 push eax */
  push32((uint32_t)(EAX));
  /* 116edb96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116edb9c push ecx */
  push32((uint32_t)(ECX));
  /* 116edb9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 116edba3 push edx */
  push32((uint32_t)(EDX));
  /* 116edba4 call 0x116e7640 */
  push32(0x116edba9u); f_116e7640();
  /* 116edba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edbac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 116edbb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 116edbba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 116edbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 116edbc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edbc4 push edx */
  push32((uint32_t)(EDX));
  /* 116edbc5 call 0x116edd60 */
  push32(0x116edbcau); f_116edd60();
  /* 116edbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edbcf je 0x116edbda */
  if (C.zf) goto L_116edbda;
  /* 116edbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116edbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edbd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116edbda:;
  /* 116edbda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116edbe0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edbe6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 116edbec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116edbf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116edbf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edbf7 je 0x116edc08 */
  if (C.zf) goto L_116edc08;
  /* 116edbf9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116edbff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edc02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_116edc08:;
  /* 116edc08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116edc0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116edc11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edc13 jne 0x116eda51 */
  if (!C.zf) goto L_116eda51;
  /* 116edc19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edc1d je 0x116edc2c */
  if (C.zf) goto L_116edc2c;
  /* 116edc1f call 0x116edf00 */
  push32(0x116edc24u); f_116edf00();
  /* 116edc24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 116edc2a jmp 0x116edc36 */
  goto L_116edc36;
L_116edc2c:;
  /* 116edc2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_116edc36:;
  /* 116edc36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 116edc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116edc3f jmp 0x116edd31 */
  goto L_116edd31;
L_116edc44:;
  /* 116edc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116edc47 push edx */
  push32((uint32_t)(EDX));
  /* 116edc48 push 0 */
  push32((uint32_t)(0x0u));
  /* 116edc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 116edc4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 116edc52 push eax */
  push32((uint32_t)(EAX));
  /* 116edc53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116edc56 push ecx */
  push32((uint32_t)(ECX));
  /* 116edc57 call 0x116ee000 */
  push32(0x116edc5cu); f_116ee000();
  /* 116edc5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edc5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116edc62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edc66 je 0x116edd31 */
  if (C.zf) goto L_116edd31;
  /* 116edc6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116edc73 jmp 0x116edc7e */
  goto L_116edc7e;
L_116edc75:;
  /* 116edc75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edc78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edc7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_116edc7e:;
  /* 116edc7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edc82 jg 0x116edce0 */
  if ((!C.zf&&C.sf==C.of)) goto L_116edce0;
  /* 116edc84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edc88 je 0x116edcde */
  if (C.zf) goto L_116edcde;
  /* 116edc8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edc8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edc90 mov ecx, dword ptr [eax + 0x1170e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1170e4dc)));
  /* 116edc96 push ecx */
  push32((uint32_t)(ECX));
  /* 116edc97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 116edc9d push edx */
  push32((uint32_t)(EDX));
  /* 116edc9e call 0x116efab0 */
  push32(0x116edca3u); f_116efab0();
  /* 116edca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edca8 je 0x116edcd5 */
  if (C.zf) goto L_116edcd5;
  /* 116edcaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 116edcb0 push eax */
  push32((uint32_t)(EAX));
  /* 116edcb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116edcb4 push ecx */
  push32((uint32_t)(ECX));
  /* 116edcb5 call 0x116edd60 */
  push32(0x116edcbau); f_116edd60();
  /* 116edcba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edcbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edcbf je 0x116edccc */
  if (C.zf) goto L_116edccc;
  /* 116edcc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116edcc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edcc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116edcca jmp 0x116edcd3 */
  goto L_116edcd3;
L_116edccc:;
  /* 116edccc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_116edcd3:;
  /* 116edcd3 jmp 0x116edcde */
  goto L_116edcde;
L_116edcd5:;
  /* 116edcd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116edcd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edcdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116edcde:;
  /* 116edcde jmp 0x116edc75 */
  goto L_116edc75;
L_116edce0:;
  /* 116edce0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edce4 je 0x116edd0b */
  if (C.zf) goto L_116edd0b;
  /* 116edce6 call 0x116edf00 */
  push32(0x116edcebu); f_116edf00();
  /* 116edceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116edcee push 2 */
  push32((uint32_t)(0x2u));
  /* 116edcf0 mov ecx, dword ptr [0x1170e4dc] */
  ECX = (r32((uint32_t)(0x1170e4dc)));
  /* 116edcf6 push ecx */
  push32((uint32_t)(ECX));
  /* 116edcf7 call 0x116e48b0 */
  push32(0x116edcfcu); f_116e48b0();
  /* 116edcfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edcff mov dword ptr [0x1170e4dc], 0 */
  w32((uint32_t)(0x1170e4dc), (0x0u));
  /* 116edd09 jmp 0x116edd31 */
  goto L_116edd31;
L_116edd0b:;
  /* 116edd0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edd0f je 0x116edd1e */
  if (C.zf) goto L_116edd1e;
  /* 116edd11 call 0x116edf00 */
  push32(0x116edd16u); f_116edf00();
  /* 116edd16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 116edd1c jmp 0x116edd28 */
  goto L_116edd28;
L_116edd1e:;
  /* 116edd1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_116edd28:;
  /* 116edd28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 116edd2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116edd31:;
  /* 116edd31 jmp 0x116edd3b */
  goto L_116edd3b;
L_116edd33:;
  /* 116edd33 call 0x116edf00 */
  push32(0x116edd38u); f_116edf00();
  /* 116edd38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116edd3b:;
  /* 116edd3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edd3f je 0x116edd58 */
  if (C.zf) goto L_116edd58;
  /* 116edd41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116edd43 call 0x116e78c0 */
  push32(0x116edd48u); f_116e78c0();
  /* 116edd48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edd4b mov eax, dword ptr [0x1170f9ac] */
  EAX = (r32((uint32_t)(0x1170f9ac)));
  /* 116edd50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116edd53 mov dword ptr [0x1170f9ac], eax */
  w32((uint32_t)(0x1170f9ac), (EAX));
L_116edd58:;
  /* 116edd58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116edd5b:;
  /* 116edd5b mov esp, ebp */
  ESP = (EBP);
  /* 116edd5d pop ebp */
  EBP = (pop32());
  /* 116edd5e ret  */
  ESPCHK(0x116ed970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x116edd60 (403 bytes, 117 insns) */
void f_116edd60(void) {
  FTRACE(0x116edd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116edd60 push ebp */
  push32((uint32_t)(EBP));
  /* 116edd61 mov ebp, esp */
  EBP = (ESP);
  /* 116edd63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116edd69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116edd6c push eax */
  push32((uint32_t)(EAX));
  /* 116edd6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 116edd73 push ecx */
  push32((uint32_t)(ECX));
  /* 116edd74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 116edd7a push edx */
  push32((uint32_t)(EDX));
  /* 116edd7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 116edd81 push eax */
  push32((uint32_t)(EAX));
  /* 116edd82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116edd85 push ecx */
  push32((uint32_t)(ECX));
  /* 116edd86 call 0x116ee000 */
  push32(0x116edd8bu); f_116ee000();
  /* 116edd8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edd90 jne 0x116edd99 */
  if (!C.zf) goto L_116edd99;
  /* 116edd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116edd94 jmp 0x116edeef */
  goto L_116edeef;
L_116edd99:;
  /* 116edd99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 116edd9e push 0x1170b090 */
  push32((uint32_t)(0x1170b090u));
  /* 116edda3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116edda5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 116eddab push edx */
  push32((uint32_t)(EDX));
  /* 116eddac call 0x116e6c50 */
  push32(0x116eddb1u); f_116e6c50();
  /* 116eddb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eddb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eddb7 push eax */
  push32((uint32_t)(EAX));
  /* 116eddb8 call 0x116e3e20 */
  push32(0x116eddbdu); f_116e3e20();
  /* 116eddbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eddc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116eddc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eddc7 jne 0x116eddd0 */
  if (!C.zf) goto L_116eddd0;
  /* 116eddc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eddcb jmp 0x116edeef */
  goto L_116edeef;
L_116eddd0:;
  /* 116eddd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eddd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116eddd6 mov ecx, dword ptr [eax + 0x1170e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1170e4dc)));
  /* 116edddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116edddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116edde2 mov eax, dword ptr [edx*4 + 0x1170f828] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1170f828)));
  /* 116edde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eddec push 6 */
  push32((uint32_t)(0x6u));
  /* 116eddee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eddf1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116eddf4 add ecx, 0x1170f878 */
  { uint32_t _a=(ECX),_b=(0x1170f878u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eddfa push ecx */
  push32((uint32_t)(ECX));
  /* 116eddfb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 116eddfe push edx */
  push32((uint32_t)(EDX));
  /* 116eddff call 0x116ea700 */
  push32(0x116ede04u); f_116ea700();
  /* 116ede04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ede07 mov eax, dword ptr [0x1170f840] */
  EAX = (r32((uint32_t)(0x1170f840)));
  /* 116ede0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116ede0f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 116ede15 push ecx */
  push32((uint32_t)(ECX));
  /* 116ede16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ede19 push edx */
  push32((uint32_t)(EDX));
  /* 116ede1a call 0x116e6dd0 */
  push32(0x116ede1fu); f_116e6dd0();
  /* 116ede1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ede22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ede25 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ede28 mov dword ptr [ecx + 0x1170e4dc], eax */
  w32((uint32_t)(ECX + 0x1170e4dc), (EAX));
  /* 116ede2e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 116ede34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ede3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ede3d mov dword ptr [eax*4 + 0x1170f828], edx */
  w32((uint32_t)(EAX*4 + 0x1170f828), (EDX));
  /* 116ede44 push 6 */
  push32((uint32_t)(0x6u));
  /* 116ede46 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 116ede4c push ecx */
  push32((uint32_t)(ECX));
  /* 116ede4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ede50 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ede53 add edx, 0x1170f878 */
  { uint32_t _a=(EDX),_b=(0x1170f878u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ede59 push edx */
  push32((uint32_t)(EDX));
  /* 116ede5a call 0x116ea700 */
  push32(0x116ede5fu); f_116ea700();
  /* 116ede5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ede62 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ede66 jne 0x116ede73 */
  if (!C.zf) goto L_116ede73;
  /* 116ede68 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116ede6e mov dword ptr [0x1170f840], eax */
  w32((uint32_t)(0x1170f840), (EAX));
L_116ede73:;
  /* 116ede73 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ede77 jne 0x116ede85 */
  if (!C.zf) goto L_116ede85;
  /* 116ede79 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 116ede7f mov dword ptr [0x1170f844], ecx */
  w32((uint32_t)(0x1170f844), (ECX));
L_116ede85:;
  /* 116ede85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ede88 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ede8b call dword ptr [edx + 0x1170e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1170e4e0))), 0x116ede91u);
  /* 116ede91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ede93 je 0x116edecc */
  if (C.zf) goto L_116edecc;
  /* 116ede95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ede98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ede9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ede9e mov dword ptr [eax + 0x1170e4dc], ecx */
  w32((uint32_t)(EAX + 0x1170e4dc), (ECX));
  /* 116edea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116edea6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116edea9 push edx */
  push32((uint32_t)(EDX));
  /* 116edeaa call 0x116e48b0 */
  push32(0x116edeafu); f_116e48b0();
  /* 116edeaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edeb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116edeb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116edeb8 mov dword ptr [eax*4 + 0x1170f828], ecx */
  w32((uint32_t)(EAX*4 + 0x1170f828), (ECX));
  /* 116edebf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116edec2 mov dword ptr [0x1170f840], edx */
  w32((uint32_t)(0x1170f840), (EDX));
  /* 116edec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116edeca jmp 0x116edeef */
  goto L_116edeef;
L_116edecc:;
  /* 116edecc cmp dword ptr [ebp - 0xc], 0x1170e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1170e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eded3 je 0x116edee3 */
  if (C.zf) goto L_116edee3;
  /* 116eded5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eded7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ededa push eax */
  push32((uint32_t)(EAX));
  /* 116ededb call 0x116e48b0 */
  push32(0x116edee0u); f_116e48b0();
  /* 116edee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116edee3:;
  /* 116edee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116edee6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edee9 mov eax, dword ptr [ecx + 0x1170e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1170e4dc)));
L_116edeef:;
  /* 116edeef mov esp, ebp */
  ESP = (EBP);
  /* 116edef1 pop ebp */
  EBP = (pop32());
  /* 116edef2 ret  */
  ESPCHK(0x116edd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df00 @ 0x116edf00 (256 bytes, 72 insns) */
void f_116edf00(void) {
  FTRACE(0x116edf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116edf00 push ebp */
  push32((uint32_t)(EBP));
  /* 116edf01 mov ebp, esp */
  EBP = (ESP);
  /* 116edf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116edf06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116edf0d cmp dword ptr [0x1170e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edf14 jne 0x116edf34 */
  if (!C.zf) goto L_116edf34;
  /* 116edf16 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 116edf1b push 0x1170b090 */
  push32((uint32_t)(0x1170b090u));
  /* 116edf20 push 2 */
  push32((uint32_t)(0x2u));
  /* 116edf22 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 116edf27 call 0x116e3e20 */
  push32(0x116edf2cu); f_116e3e20();
  /* 116edf2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edf2f mov dword ptr [0x1170e4dc], eax */
  w32((uint32_t)(0x1170e4dc), (EAX));
L_116edf34:;
  /* 116edf34 mov eax, dword ptr [0x1170e4dc] */
  EAX = (r32((uint32_t)(0x1170e4dc)));
  /* 116edf39 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116edf3c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116edf43 jmp 0x116edf4e */
  goto L_116edf4e;
L_116edf45:;
  /* 116edf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116edf48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116edf4e:;
  /* 116edf4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116edf51 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edf54 mov eax, dword ptr [edx + 0x1170e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1170e4dc)));
  /* 116edf5a push eax */
  push32((uint32_t)(EAX));
  /* 116edf5b push 0x1170b09c */
  push32((uint32_t)(0x1170b09cu));
  /* 116edf60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116edf63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edf66 mov edx, dword ptr [ecx + 0x1170e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1170e4d8)));
  /* 116edf6c push edx */
  push32((uint32_t)(EDX));
  /* 116edf6d push 3 */
  push32((uint32_t)(0x3u));
  /* 116edf6f mov eax, dword ptr [0x1170e4dc] */
  EAX = (r32((uint32_t)(0x1170e4dc)));
  /* 116edf74 push eax */
  push32((uint32_t)(EAX));
  /* 116edf75 call 0x116ee1a0 */
  push32(0x116edf7au); f_116ee1a0();
  /* 116edf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edf7d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edf81 jge 0x116edfc9 */
  if ((C.sf==C.of)) goto L_116edfc9;
  /* 116edf83 push 0x1170b088 */
  push32((uint32_t)(0x1170b088u));
  /* 116edf88 mov ecx, dword ptr [0x1170e4dc] */
  ECX = (r32((uint32_t)(0x1170e4dc)));
  /* 116edf8e push ecx */
  push32((uint32_t)(ECX));
  /* 116edf8f call 0x116e6de0 */
  push32(0x116edf94u); f_116e6de0();
  /* 116edf94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edf97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116edf9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116edf9d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edfa0 mov eax, dword ptr [edx + 0x1170e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1170e4dc)));
  /* 116edfa6 push eax */
  push32((uint32_t)(EAX));
  /* 116edfa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116edfaa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116edfad mov edx, dword ptr [ecx + 0x1170e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1170e4dc)));
  /* 116edfb3 push edx */
  push32((uint32_t)(EDX));
  /* 116edfb4 call 0x116efab0 */
  push32(0x116edfb9u); f_116efab0();
  /* 116edfb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edfbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116edfbe je 0x116edfc7 */
  if (C.zf) goto L_116edfc7;
  /* 116edfc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116edfc7:;
  /* 116edfc7 jmp 0x116edff7 */
  goto L_116edff7;
L_116edfc9:;
  /* 116edfc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116edfcd jne 0x116edfd6 */
  if (!C.zf) goto L_116edfd6;
  /* 116edfcf mov eax, dword ptr [0x1170e4dc] */
  EAX = (r32((uint32_t)(0x1170e4dc)));
  /* 116edfd4 jmp 0x116edffc */
  goto L_116edffc;
L_116edfd6:;
  /* 116edfd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116edfd8 mov eax, dword ptr [0x1170e4dc] */
  EAX = (r32((uint32_t)(0x1170e4dc)));
  /* 116edfdd push eax */
  push32((uint32_t)(EAX));
  /* 116edfde call 0x116e48b0 */
  push32(0x116edfe3u); f_116e48b0();
  /* 116edfe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116edfe6 mov dword ptr [0x1170e4dc], 0 */
  w32((uint32_t)(0x1170e4dc), (0x0u));
  /* 116edff0 mov eax, dword ptr [0x1170e4f4] */
  EAX = (r32((uint32_t)(0x1170e4f4)));
  /* 116edff5 jmp 0x116edffc */
  goto L_116edffc;
L_116edff7:;
  /* 116edff7 jmp 0x116edf45 */
  goto L_116edf45;
L_116edffc:;
  /* 116edffc mov esp, ebp */
  ESP = (EBP);
  /* 116edffe pop ebp */
  EBP = (pop32());
  /* 116edfff ret  */
  ESPCHK(0x116edf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e000 @ 0x116ee000 (388 bytes, 115 insns) */
void f_116ee000(void) {
  FTRACE(0x116ee000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee000 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee001 mov ebp, esp */
  EBP = (ESP);
  /* 116ee003 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ee009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee00d jne 0x116ee016 */
  if (!C.zf) goto L_116ee016;
  /* 116ee00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee011 jmp 0x116ee180 */
  goto L_116ee180;
L_116ee016:;
  /* 116ee016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ee01c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee01f jne 0x116ee070 */
  if (!C.zf) goto L_116ee070;
  /* 116ee021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee024 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116ee028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee02a jne 0x116ee070 */
  if (!C.zf) goto L_116ee070;
  /* 116ee02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee02f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 116ee032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee035 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 116ee039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee03d je 0x116ee059 */
  if (C.zf) goto L_116ee059;
  /* 116ee03f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ee042 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 116ee047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ee04a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 116ee050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ee053 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_116ee059:;
  /* 116ee059 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee05d je 0x116ee068 */
  if (C.zf) goto L_116ee068;
  /* 116ee05f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ee062 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116ee068:;
  /* 116ee068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee06b jmp 0x116ee180 */
  goto L_116ee180;
L_116ee070:;
  /* 116ee070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee073 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee074 push 0x1170e450 */
  push32((uint32_t)(0x1170e450u));
  /* 116ee079 call 0x116efab0 */
  push32(0x116ee07eu); f_116efab0();
  /* 116ee07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee083 je 0x116ee138 */
  if (C.zf) goto L_116ee138;
  /* 116ee089 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee08c push edx */
  push32((uint32_t)(EDX));
  /* 116ee08d push 0x1170e3cc */
  push32((uint32_t)(0x1170e3ccu));
  /* 116ee092 call 0x116efab0 */
  push32(0x116ee097u); f_116efab0();
  /* 116ee097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee09c je 0x116ee138 */
  if (C.zf) goto L_116ee138;
  /* 116ee0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee0a5 push eax */
  push32((uint32_t)(EAX));
  /* 116ee0a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 116ee0ac push ecx */
  push32((uint32_t)(ECX));
  /* 116ee0ad call 0x116ee1f0 */
  push32(0x116ee0b2u); f_116ee1f0();
  /* 116ee0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee0b7 je 0x116ee0c0 */
  if (C.zf) goto L_116ee0c0;
  /* 116ee0b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee0bb jmp 0x116ee180 */
  goto L_116ee180;
L_116ee0c0:;
  /* 116ee0c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 116ee0c6 push edx */
  push32((uint32_t)(EDX));
  /* 116ee0c7 push 0x1170f850 */
  push32((uint32_t)(0x1170f850u));
  /* 116ee0cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 116ee0d2 push eax */
  push32((uint32_t)(EAX));
  /* 116ee0d3 call 0x116efc00 */
  push32(0x116ee0d8u); f_116efc00();
  /* 116ee0d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee0dd jne 0x116ee0e6 */
  if (!C.zf) goto L_116ee0e6;
  /* 116ee0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee0e1 jmp 0x116ee180 */
  goto L_116ee180;
L_116ee0e6:;
  /* 116ee0e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee0e8 mov cx, word ptr [0x1170f854] */
  CX = (r16((uint32_t)(0x1170f854)));
  /* 116ee0ef mov dword ptr [0x1170f858], ecx */
  w32((uint32_t)(0x1170f858), (ECX));
  /* 116ee0f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 116ee0fb push edx */
  push32((uint32_t)(EDX));
  /* 116ee0fc push 0x1170e450 */
  push32((uint32_t)(0x1170e450u));
  /* 116ee101 call 0x116ee350 */
  push32(0x116ee106u); f_116ee350();
  /* 116ee106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee10c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ee10f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ee111 je 0x116ee126 */
  if (C.zf) goto L_116ee126;
  /* 116ee113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee116 push edx */
  push32((uint32_t)(EDX));
  /* 116ee117 push 0x1170e3cc */
  push32((uint32_t)(0x1170e3ccu));
  /* 116ee11c call 0x116e6dd0 */
  push32(0x116ee121u); f_116e6dd0();
  /* 116ee121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee124 jmp 0x116ee138 */
  goto L_116ee138;
L_116ee126:;
  /* 116ee126 push 0x1170e450 */
  push32((uint32_t)(0x1170e450u));
  /* 116ee12b push 0x1170e3cc */
  push32((uint32_t)(0x1170e3ccu));
  /* 116ee130 call 0x116e6dd0 */
  push32(0x116ee135u); f_116e6dd0();
  /* 116ee135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ee138:;
  /* 116ee138 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee13c je 0x116ee151 */
  if (C.zf) goto L_116ee151;
  /* 116ee13e push 6 */
  push32((uint32_t)(0x6u));
  /* 116ee140 push 0x1170f850 */
  push32((uint32_t)(0x1170f850u));
  /* 116ee145 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116ee148 push eax */
  push32((uint32_t)(EAX));
  /* 116ee149 call 0x116ea700 */
  push32(0x116ee14eu); f_116ea700();
  /* 116ee14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ee151:;
  /* 116ee151 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee155 je 0x116ee16a */
  if (C.zf) goto L_116ee16a;
  /* 116ee157 push 4 */
  push32((uint32_t)(0x4u));
  /* 116ee159 push 0x1170f858 */
  push32((uint32_t)(0x1170f858u));
  /* 116ee15e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116ee161 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee162 call 0x116ea700 */
  push32(0x116ee167u); f_116ea700();
  /* 116ee167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ee16a:;
  /* 116ee16a push 0x1170e450 */
  push32((uint32_t)(0x1170e450u));
  /* 116ee16f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee172 push edx */
  push32((uint32_t)(EDX));
  /* 116ee173 call 0x116e6dd0 */
  push32(0x116ee178u); f_116e6dd0();
  /* 116ee178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee17b mov eax, 0x1170e450 */
  EAX = (0x1170e450u);
L_116ee180:;
  /* 116ee180 mov esp, ebp */
  ESP = (EBP);
  /* 116ee182 pop ebp */
  EBP = (pop32());
  /* 116ee183 ret  */
  ESPCHK(0x116ee000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x116ee190 (7 bytes, 5 insns) */
void f_116ee190(void) {
  FTRACE(0x116ee190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee190 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee191 mov ebp, esp */
  EBP = (ESP);
  /* 116ee193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee195 pop ebp */
  EBP = (pop32());
  /* 116ee196 ret  */
  ESPCHK(0x116ee190u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x116ee1a0 (79 bytes, 28 insns) */
void f_116ee1a0(void) {
  FTRACE(0x116ee1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee1a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ee1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ee1a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 116ee1a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee1ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ee1b3 jmp 0x116ee1be */
  goto L_116ee1be;
L_116ee1b5:;
  /* 116ee1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee1b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116ee1be:;
  /* 116ee1be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee1c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee1c4 jge 0x116ee1e4 */
  if ((C.sf==C.of)) goto L_116ee1e4;
  /* 116ee1c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee1c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee1d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 116ee1d5 push edx */
  push32((uint32_t)(EDX));
  /* 116ee1d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee1d9 push eax */
  push32((uint32_t)(EAX));
  /* 116ee1da call 0x116e6de0 */
  push32(0x116ee1dfu); f_116e6de0();
  /* 116ee1df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee1e2 jmp 0x116ee1b5 */
  goto L_116ee1b5;
L_116ee1e4:;
  /* 116ee1e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ee1eb mov esp, ebp */
  ESP = (EBP);
  /* 116ee1ed pop ebp */
  EBP = (pop32());
  /* 116ee1ee ret  */
  ESPCHK(0x116ee1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x116ee1f0 (349 bytes, 122 insns) */
void f_116ee1f0(void) {
  FTRACE(0x116ee1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee1f1 mov ebp, esp */
  EBP = (ESP);
  /* 116ee1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ee1f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 116ee1fb push 0 */
  push32((uint32_t)(0x0u));
  /* 116ee1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee200 push eax */
  push32((uint32_t)(EAX));
  /* 116ee201 call 0x116e7b90 */
  push32(0x116ee206u); f_116e7b90();
  /* 116ee206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee20c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ee20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ee211 jne 0x116ee21a */
  if (!C.zf) goto L_116ee21a;
  /* 116ee213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee215 jmp 0x116ee349 */
  goto L_116ee349;
L_116ee21a:;
  /* 116ee21a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee21d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ee220 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee223 jne 0x116ee250 */
  if (!C.zf) goto L_116ee250;
  /* 116ee225 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee228 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116ee22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee22e je 0x116ee250 */
  if (C.zf) goto L_116ee250;
  /* 116ee230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee233 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee236 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee23a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee240 push edx */
  push32((uint32_t)(EDX));
  /* 116ee241 call 0x116e6dd0 */
  push32(0x116ee246u); f_116e6dd0();
  /* 116ee246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee24b jmp 0x116ee349 */
  goto L_116ee349;
L_116ee250:;
  /* 116ee250 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116ee257 jmp 0x116ee262 */
  goto L_116ee262;
L_116ee259:;
  /* 116ee259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee25c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ee262:;
  /* 116ee262 push 0x1170b0a0 */
  push32((uint32_t)(0x1170b0a0u));
  /* 116ee267 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee26a push ecx */
  push32((uint32_t)(ECX));
  /* 116ee26b call 0x116efb40 */
  push32(0x116ee270u); f_116efb40();
  /* 116ee270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee273 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116ee276 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee27a jne 0x116ee284 */
  if (!C.zf) goto L_116ee284;
  /* 116ee27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ee27f jmp 0x116ee349 */
  goto L_116ee349;
L_116ee284:;
  /* 116ee284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee287 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee28a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ee28c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 116ee28f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee293 jne 0x116ee2ba */
  if (!C.zf) goto L_116ee2ba;
  /* 116ee295 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee299 jge 0x116ee2ba */
  if ((C.sf==C.of)) goto L_116ee2ba;
  /* 116ee29b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ee29f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee2a2 je 0x116ee2ba */
  if (C.zf) goto L_116ee2ba;
  /* 116ee2a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee2a7 push edx */
  push32((uint32_t)(EDX));
  /* 116ee2a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee2ab push eax */
  push32((uint32_t)(EAX));
  /* 116ee2ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee2af push ecx */
  push32((uint32_t)(ECX));
  /* 116ee2b0 call 0x116e7640 */
  push32(0x116ee2b5u); f_116e7640();
  /* 116ee2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee2b8 jmp 0x116ee320 */
  goto L_116ee320;
L_116ee2ba:;
  /* 116ee2ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee2be jne 0x116ee2e8 */
  if (!C.zf) goto L_116ee2e8;
  /* 116ee2c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee2c4 jge 0x116ee2e8 */
  if ((C.sf==C.of)) goto L_116ee2e8;
  /* 116ee2c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ee2ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee2cd je 0x116ee2e8 */
  if (C.zf) goto L_116ee2e8;
  /* 116ee2cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee2d2 push eax */
  push32((uint32_t)(EAX));
  /* 116ee2d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee2da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee2dd push edx */
  push32((uint32_t)(EDX));
  /* 116ee2de call 0x116e7640 */
  push32(0x116ee2e3u); f_116e7640();
  /* 116ee2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee2e6 jmp 0x116ee320 */
  goto L_116ee320;
L_116ee2e8:;
  /* 116ee2e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee2ec jne 0x116ee31b */
  if (!C.zf) goto L_116ee31b;
  /* 116ee2ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ee2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee2f4 je 0x116ee2ff */
  if (C.zf) goto L_116ee2ff;
  /* 116ee2f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ee2fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee2fd jne 0x116ee31b */
  if (!C.zf) goto L_116ee31b;
L_116ee2ff:;
  /* 116ee2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee302 push edx */
  push32((uint32_t)(EDX));
  /* 116ee303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee306 push eax */
  push32((uint32_t)(EAX));
  /* 116ee307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee30a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee310 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee311 call 0x116e7640 */
  push32(0x116ee316u); f_116e7640();
  /* 116ee316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee319 jmp 0x116ee320 */
  goto L_116ee320;
L_116ee31b:;
  /* 116ee31b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ee31e jmp 0x116ee349 */
  goto L_116ee349;
L_116ee320:;
  /* 116ee320 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ee324 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee327 jne 0x116ee32b */
  if (!C.zf) goto L_116ee32b;
  /* 116ee329 jmp 0x116ee347 */
  goto L_116ee347;
L_116ee32b:;
  /* 116ee32b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116ee32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee331 jne 0x116ee335 */
  if (!C.zf) goto L_116ee335;
  /* 116ee333 jmp 0x116ee347 */
  goto L_116ee347;
L_116ee335:;
  /* 116ee335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee33b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 116ee33f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116ee342 jmp 0x116ee259 */
  goto L_116ee259;
L_116ee347:;
  /* 116ee347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ee349:;
  /* 116ee349 mov esp, ebp */
  ESP = (EBP);
  /* 116ee34b pop ebp */
  EBP = (pop32());
  /* 116ee34c ret  */
  ESPCHK(0x116ee1f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x116ee350 (101 bytes, 36 insns) */
void f_116ee350(void) {
  FTRACE(0x116ee350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee350 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee351 mov ebp, esp */
  EBP = (ESP);
  /* 116ee353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee356 push eax */
  push32((uint32_t)(EAX));
  /* 116ee357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee35a push ecx */
  push32((uint32_t)(ECX));
  /* 116ee35b call 0x116e6dd0 */
  push32(0x116ee360u); f_116e6dd0();
  /* 116ee360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee366 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 116ee36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee36c je 0x116ee388 */
  if (C.zf) goto L_116ee388;
  /* 116ee36e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee371 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee374 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee375 push 0x1170b0a8 */
  push32((uint32_t)(0x1170b0a8u));
  /* 116ee37a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee37f push edx */
  push32((uint32_t)(EDX));
  /* 116ee380 call 0x116ee1a0 */
  push32(0x116ee385u); f_116ee1a0();
  /* 116ee385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ee388:;
  /* 116ee388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee38b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 116ee392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ee394 je 0x116ee3b3 */
  if (C.zf) goto L_116ee3b3;
  /* 116ee396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116ee399 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee39f push edx */
  push32((uint32_t)(EDX));
  /* 116ee3a0 push 0x1170b0a4 */
  push32((uint32_t)(0x1170b0a4u));
  /* 116ee3a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee3aa push eax */
  push32((uint32_t)(EAX));
  /* 116ee3ab call 0x116ee1a0 */
  push32(0x116ee3b0u); f_116ee1a0();
  /* 116ee3b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ee3b3:;
  /* 116ee3b3 pop ebp */
  EBP = (pop32());
  /* 116ee3b4 ret  */
  ESPCHK(0x116ee350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x116ee3c0 (130 bytes, 50 insns) */
void f_116ee3c0(void) {
  FTRACE(0x116ee3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee3c1 mov ebp, esp */
  EBP = (ESP);
  /* 116ee3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 116ee3c5 push esi */
  push32((uint32_t)(ESI));
  /* 116ee3c6 push edi */
  push32((uint32_t)(EDI));
  /* 116ee3c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ee3ce:;
  /* 116ee3ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee3d2 jne 0x116ee3f2 */
  if (!C.zf) goto L_116ee3f2;
  /* 116ee3d4 push 0x1170b0b8 */
  push32((uint32_t)(0x1170b0b8u));
  /* 116ee3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ee3db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 116ee3dd push 0x1170b0ac */
  push32((uint32_t)(0x1170b0acu));
  /* 116ee3e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee3e4 call 0x116e2ee0 */
  push32(0x116ee3e9u); f_116e2ee0();
  /* 116ee3e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee3ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee3ef jne 0x116ee3f2 */
  if (!C.zf) goto L_116ee3f2;
  /* 116ee3f1 int3  */
  x86_unimpl("int3 @ 0x116ee3f1");
L_116ee3f2:;
  /* 116ee3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee3f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee3f6 jne 0x116ee3ce */
  if (!C.zf) goto L_116ee3ce;
  /* 116ee3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ee3fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 116ee401 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ee403 je 0x116ee411 */
  if (C.zf) goto L_116ee411;
  /* 116ee405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee408 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 116ee40f jmp 0x116ee438 */
  goto L_116ee438;
L_116ee411:;
  /* 116ee411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee414 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee415 call 0x116ecc30 */
  push32(0x116ee41au); f_116ecc30();
  /* 116ee41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee420 push edx */
  push32((uint32_t)(EDX));
  /* 116ee421 call 0x116ee450 */
  push32(0x116ee426u); f_116ee450();
  /* 116ee426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee42f push eax */
  push32((uint32_t)(EAX));
  /* 116ee430 call 0x116ecca0 */
  push32(0x116ee435u); f_116ecca0();
  /* 116ee435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ee438:;
  /* 116ee438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee43b pop edi */
  EDI = (pop32());
  /* 116ee43c pop esi */
  ESI = (pop32());
  /* 116ee43d pop ebx */
  EBX = (pop32());
  /* 116ee43e mov esp, ebp */
  ESP = (EBP);
  /* 116ee440 pop ebp */
  EBP = (pop32());
  /* 116ee441 ret  */
  ESPCHK(0x116ee3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e450 @ 0x116ee450 (190 bytes, 67 insns) */
void f_116ee450(void) {
  FTRACE(0x116ee450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee450 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee451 mov ebp, esp */
  EBP = (ESP);
  /* 116ee453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ee456 push ebx */
  push32((uint32_t)(EBX));
  /* 116ee457 push esi */
  push32((uint32_t)(ESI));
  /* 116ee458 push edi */
  push32((uint32_t)(EDI));
  /* 116ee459 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116ee460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116ee466:;
  /* 116ee466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee46a jne 0x116ee48a */
  if (!C.zf) goto L_116ee48a;
  /* 116ee46c push 0x1170af58 */
  push32((uint32_t)(0x1170af58u));
  /* 116ee471 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ee473 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 116ee475 push 0x1170b0ac */
  push32((uint32_t)(0x1170b0acu));
  /* 116ee47a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee47c call 0x116e2ee0 */
  push32(0x116ee481u); f_116e2ee0();
  /* 116ee481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee487 jne 0x116ee48a */
  if (!C.zf) goto L_116ee48a;
  /* 116ee489 int3  */
  x86_unimpl("int3 @ 0x116ee489");
L_116ee48a:;
  /* 116ee48a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ee48e jne 0x116ee466 */
  if (!C.zf) goto L_116ee466;
  /* 116ee490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee493 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116ee496 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 116ee49b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee49d je 0x116ee4fa */
  if (C.zf) goto L_116ee4fa;
  /* 116ee49f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4a2 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee4a3 call 0x116ed750 */
  push32(0x116ee4a8u); f_116ed750();
  /* 116ee4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee4ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4b1 push edx */
  push32((uint32_t)(EDX));
  /* 116ee4b2 call 0x116f0ad0 */
  push32(0x116ee4b7u); f_116f0ad0();
  /* 116ee4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee4ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116ee4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee4c1 call 0x116f09a0 */
  push32(0x116ee4c6u); f_116f09a0();
  /* 116ee4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee4cb jge 0x116ee4d6 */
  if ((C.sf==C.of)) goto L_116ee4d6;
  /* 116ee4cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116ee4d4 jmp 0x116ee4fa */
  goto L_116ee4fa;
L_116ee4d6:;
  /* 116ee4d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee4dd je 0x116ee4fa */
  if (C.zf) goto L_116ee4fa;
  /* 116ee4df push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee4e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116ee4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee4e8 call 0x116e48b0 */
  push32(0x116ee4edu); f_116e48b0();
  /* 116ee4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee4f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_116ee4fa:;
  /* 116ee4fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ee4fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 116ee504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee507 pop edi */
  EDI = (pop32());
  /* 116ee508 pop esi */
  ESI = (pop32());
  /* 116ee509 pop ebx */
  EBX = (pop32());
  /* 116ee50a mov esp, ebp */
  ESP = (EBP);
  /* 116ee50c pop ebp */
  EBP = (pop32());
  /* 116ee50d ret  */
  ESPCHK(0x116ee450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e510 @ 0x116ee510 (210 bytes, 63 insns) */
void f_116ee510(void) {
  FTRACE(0x116ee510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee510 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee511 mov ebp, esp */
  EBP = (ESP);
  /* 116ee513 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee517 cmp eax, dword ptr [0x1171113c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1171113c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee51d jae 0x116ee541 */
  if (!C.cf) goto L_116ee541;
  /* 116ee51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee522 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116ee525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee528 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116ee52b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ee52e mov eax, dword ptr [ecx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116ee535 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116ee53a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116ee53d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ee53f jne 0x116ee554 */
  if (!C.zf) goto L_116ee554;
L_116ee541:;
  /* 116ee541 call 0x116ebcf0 */
  push32(0x116ee546u); f_116ebcf0();
  /* 116ee546 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ee54c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ee54f jmp 0x116ee5de */
  goto L_116ee5de;
L_116ee554:;
  /* 116ee554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee557 push edx */
  push32((uint32_t)(EDX));
  /* 116ee558 call 0x116ed510 */
  push32(0x116ee55du); f_116ed510();
  /* 116ee55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee563 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116ee566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee569 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116ee56c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116ee56f mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116ee576 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116ee57b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116ee57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee580 je 0x116ee5bd */
  if (C.zf) goto L_116ee5bd;
  /* 116ee582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee585 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee586 call 0x116ed390 */
  push32(0x116ee58bu); f_116ed390();
  /* 116ee58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee58e push eax */
  push32((uint32_t)(EAX));
  /* 116ee58f call dword ptr [0x117122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122d0))), 0x116ee595u);
  /* 116ee595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee597 jne 0x116ee5a4 */
  if (!C.zf) goto L_116ee5a4;
  /* 116ee599 call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116ee59fu);
  /* 116ee59f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee5a2 jmp 0x116ee5ab */
  goto L_116ee5ab;
L_116ee5a4:;
  /* 116ee5a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116ee5ab:;
  /* 116ee5ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee5af jne 0x116ee5b3 */
  if (!C.zf) goto L_116ee5b3;
  /* 116ee5b1 jmp 0x116ee5cf */
  goto L_116ee5cf;
L_116ee5b3:;
  /* 116ee5b3 call 0x116ebd00 */
  push32(0x116ee5b8u); f_116ebd00();
  /* 116ee5b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee5bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116ee5bd:;
  /* 116ee5bd call 0x116ebcf0 */
  push32(0x116ee5c2u); f_116ebcf0();
  /* 116ee5c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116ee5c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116ee5cf:;
  /* 116ee5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee5d2 push eax */
  push32((uint32_t)(EAX));
  /* 116ee5d3 call 0x116ed5a0 */
  push32(0x116ee5d8u); f_116ed5a0();
  /* 116ee5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116ee5de:;
  /* 116ee5de mov esp, ebp */
  ESP = (EBP);
  /* 116ee5e0 pop ebp */
  EBP = (pop32());
  /* 116ee5e1 ret  */
  ESPCHK(0x116ee510u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x116ee5f0 (219 bytes, 64 insns) */
void f_116ee5f0(void) {
  FTRACE(0x116ee5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee5f1 mov ebp, esp */
  EBP = (ESP);
  /* 116ee5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee5f4 cmp dword ptr [0x1170f83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee5fb je 0x116ee691 */
  if (C.zf) goto L_116ee691;
  /* 116ee601 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 116ee603 push 0x1170b0c8 */
  push32((uint32_t)(0x1170b0c8u));
  /* 116ee608 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee60a push 0xac */
  push32((uint32_t)(0xacu));
  /* 116ee60f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee611 call 0x116e4230 */
  push32(0x116ee616u); f_116e4230();
  /* 116ee616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee620 jne 0x116ee62c */
  if (!C.zf) goto L_116ee62c;
  /* 116ee622 mov eax, 1 */
  EAX = (0x1u);
  /* 116ee627 jmp 0x116ee6c7 */
  goto L_116ee6c7;
L_116ee62c:;
  /* 116ee62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee62f push eax */
  push32((uint32_t)(EAX));
  /* 116ee630 call 0x116ee6d0 */
  push32(0x116ee635u); f_116ee6d0();
  /* 116ee635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ee63a je 0x116ee65d */
  if (C.zf) goto L_116ee65d;
  /* 116ee63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee63f push ecx */
  push32((uint32_t)(ECX));
  /* 116ee640 call 0x116eec60 */
  push32(0x116ee645u); f_116eec60();
  /* 116ee645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee648 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee64a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee64d push edx */
  push32((uint32_t)(EDX));
  /* 116ee64e call 0x116e48b0 */
  push32(0x116ee653u); f_116e48b0();
  /* 116ee653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee656 mov eax, 1 */
  EAX = (0x1u);
  /* 116ee65b jmp 0x116ee6c7 */
  goto L_116ee6c7;
L_116ee65d:;
  /* 116ee65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee660 mov dword ptr [0x1170ec98], eax */
  w32((uint32_t)(0x1170ec98), (EAX));
  /* 116ee665 mov ecx, dword ptr [0x1170f85c] */
  ECX = (r32((uint32_t)(0x1170f85c)));
  /* 116ee66b push ecx */
  push32((uint32_t)(ECX));
  /* 116ee66c call 0x116eec60 */
  push32(0x116ee671u); f_116eec60();
  /* 116ee671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee674 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee676 mov edx, dword ptr [0x1170f85c] */
  EDX = (r32((uint32_t)(0x1170f85c)));
  /* 116ee67c push edx */
  push32((uint32_t)(EDX));
  /* 116ee67d call 0x116e48b0 */
  push32(0x116ee682u); f_116e48b0();
  /* 116ee682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee688 mov dword ptr [0x1170f85c], eax */
  w32((uint32_t)(0x1170f85c), (EAX));
  /* 116ee68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee68f jmp 0x116ee6c7 */
  goto L_116ee6c7;
L_116ee691:;
  /* 116ee691 mov dword ptr [0x1170ec98], 0x1170eca0 */
  w32((uint32_t)(0x1170ec98), (0x1170eca0u));
  /* 116ee69b mov ecx, dword ptr [0x1170f85c] */
  ECX = (r32((uint32_t)(0x1170f85c)));
  /* 116ee6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 116ee6a2 call 0x116eec60 */
  push32(0x116ee6a7u); f_116eec60();
  /* 116ee6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 116ee6ac mov edx, dword ptr [0x1170f85c] */
  EDX = (r32((uint32_t)(0x1170f85c)));
  /* 116ee6b2 push edx */
  push32((uint32_t)(EDX));
  /* 116ee6b3 call 0x116e48b0 */
  push32(0x116ee6b8u); f_116e48b0();
  /* 116ee6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee6bb mov dword ptr [0x1170f85c], 0 */
  w32((uint32_t)(0x1170f85c), (0x0u));
  /* 116ee6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ee6c7:;
  /* 116ee6c7 mov esp, ebp */
  ESP = (EBP);
  /* 116ee6c9 pop ebp */
  EBP = (pop32());
  /* 116ee6ca ret  */
  ESPCHK(0x116ee5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6d0 @ 0x116ee6d0 (1423 bytes, 533 insns) */
void f_116ee6d0(void) {
  FTRACE(0x116ee6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ee6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ee6d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ee6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ee6d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116ee6dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ee6df mov ax, word ptr [0x1170f896] */
  AX = (r16((uint32_t)(0x1170f896)));
  /* 116ee6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ee6e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee6ea mov cx, word ptr [0x1170f898] */
  CX = (r16((uint32_t)(0x1170f898)));
  /* 116ee6f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ee6f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ee6f8 jne 0x116ee702 */
  if (!C.zf) goto L_116ee702;
  /* 116ee6fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ee6fd jmp 0x116eec5b */
  goto L_116eec5b;
L_116ee702:;
  /* 116ee702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee705 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee708 push edx */
  push32((uint32_t)(EDX));
  /* 116ee709 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 116ee70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee70e push eax */
  push32((uint32_t)(EAX));
  /* 116ee70f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee711 call 0x116f1fe0 */
  push32(0x116ee716u); f_116f1fe0();
  /* 116ee716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee71e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee724 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee727 push edx */
  push32((uint32_t)(EDX));
  /* 116ee728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 116ee72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee72d push eax */
  push32((uint32_t)(EAX));
  /* 116ee72e push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee730 call 0x116f1fe0 */
  push32(0x116ee735u); f_116f1fe0();
  /* 116ee735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee738 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee73b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee73d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee743 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee746 push edx */
  push32((uint32_t)(EDX));
  /* 116ee747 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 116ee749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee74c push eax */
  push32((uint32_t)(EAX));
  /* 116ee74d push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee74f call 0x116f1fe0 */
  push32(0x116ee754u); f_116f1fe0();
  /* 116ee754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee757 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee75a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee75c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee762 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee765 push edx */
  push32((uint32_t)(EDX));
  /* 116ee766 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 116ee768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee76b push eax */
  push32((uint32_t)(EAX));
  /* 116ee76c push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee76e call 0x116f1fe0 */
  push32(0x116ee773u); f_116f1fe0();
  /* 116ee773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee779 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee77b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee781 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee784 push edx */
  push32((uint32_t)(EDX));
  /* 116ee785 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 116ee787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee78a push eax */
  push32((uint32_t)(EAX));
  /* 116ee78b push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee78d call 0x116f1fe0 */
  push32(0x116ee792u); f_116f1fe0();
  /* 116ee792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee79a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee7a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee7a3 push edx */
  push32((uint32_t)(EDX));
  /* 116ee7a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 116ee7a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee7a9 push eax */
  push32((uint32_t)(EAX));
  /* 116ee7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee7ac call 0x116f1fe0 */
  push32(0x116ee7b1u); f_116f1fe0();
  /* 116ee7b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee7b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee7b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee7bf push edx */
  push32((uint32_t)(EDX));
  /* 116ee7c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 116ee7c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee7c5 push eax */
  push32((uint32_t)(EAX));
  /* 116ee7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee7c8 call 0x116f1fe0 */
  push32(0x116ee7cdu); f_116f1fe0();
  /* 116ee7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee7d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee7d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee7d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee7db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee7de push edx */
  push32((uint32_t)(EDX));
  /* 116ee7df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 116ee7e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee7e4 push eax */
  push32((uint32_t)(EAX));
  /* 116ee7e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee7e7 call 0x116f1fe0 */
  push32(0x116ee7ecu); f_116f1fe0();
  /* 116ee7ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee7ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee7f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee7f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee7f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee7fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee7fd push edx */
  push32((uint32_t)(EDX));
  /* 116ee7fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 116ee800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee803 push eax */
  push32((uint32_t)(EAX));
  /* 116ee804 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee806 call 0x116f1fe0 */
  push32(0x116ee80bu); f_116f1fe0();
  /* 116ee80b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee80e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee811 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee813 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee819 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee81c push edx */
  push32((uint32_t)(EDX));
  /* 116ee81d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 116ee81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee822 push eax */
  push32((uint32_t)(EAX));
  /* 116ee823 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee825 call 0x116f1fe0 */
  push32(0x116ee82au); f_116f1fe0();
  /* 116ee82a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee838 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee83b push edx */
  push32((uint32_t)(EDX));
  /* 116ee83c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 116ee83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee841 push eax */
  push32((uint32_t)(EAX));
  /* 116ee842 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee844 call 0x116f1fe0 */
  push32(0x116ee849u); f_116f1fe0();
  /* 116ee849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee84c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee84f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee851 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee857 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee85a push edx */
  push32((uint32_t)(EDX));
  /* 116ee85b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 116ee85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee860 push eax */
  push32((uint32_t)(EAX));
  /* 116ee861 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee863 call 0x116f1fe0 */
  push32(0x116ee868u); f_116f1fe0();
  /* 116ee868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee86b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee86e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee876 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee879 push edx */
  push32((uint32_t)(EDX));
  /* 116ee87a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 116ee87c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee87f push eax */
  push32((uint32_t)(EAX));
  /* 116ee880 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee882 call 0x116f1fe0 */
  push32(0x116ee887u); f_116f1fe0();
  /* 116ee887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee88a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee88d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee88f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee898 push edx */
  push32((uint32_t)(EDX));
  /* 116ee899 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116ee89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee89e push eax */
  push32((uint32_t)(EAX));
  /* 116ee89f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee8a1 call 0x116f1fe0 */
  push32(0x116ee8a6u); f_116f1fe0();
  /* 116ee8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee8b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee8b7 push edx */
  push32((uint32_t)(EDX));
  /* 116ee8b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 116ee8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee8bd push eax */
  push32((uint32_t)(EAX));
  /* 116ee8be push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee8c0 call 0x116f1fe0 */
  push32(0x116ee8c5u); f_116f1fe0();
  /* 116ee8c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee8c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee8cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee8cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee8d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee8d6 push edx */
  push32((uint32_t)(EDX));
  /* 116ee8d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 116ee8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee8dc push eax */
  push32((uint32_t)(EAX));
  /* 116ee8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee8df call 0x116f1fe0 */
  push32(0x116ee8e4u); f_116f1fe0();
  /* 116ee8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee8e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee8f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee8f5 push edx */
  push32((uint32_t)(EDX));
  /* 116ee8f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 116ee8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee8fb push eax */
  push32((uint32_t)(EAX));
  /* 116ee8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee8fe call 0x116f1fe0 */
  push32(0x116ee903u); f_116f1fe0();
  /* 116ee903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee909 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee90b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee911 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee914 push edx */
  push32((uint32_t)(EDX));
  /* 116ee915 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 116ee917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee91a push eax */
  push32((uint32_t)(EAX));
  /* 116ee91b push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee91d call 0x116f1fe0 */
  push32(0x116ee922u); f_116f1fe0();
  /* 116ee922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee92a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee930 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee933 push edx */
  push32((uint32_t)(EDX));
  /* 116ee934 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 116ee936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee939 push eax */
  push32((uint32_t)(EAX));
  /* 116ee93a push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee93c call 0x116f1fe0 */
  push32(0x116ee941u); f_116f1fe0();
  /* 116ee941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee949 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee94f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee952 push edx */
  push32((uint32_t)(EDX));
  /* 116ee953 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 116ee955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee958 push eax */
  push32((uint32_t)(EAX));
  /* 116ee959 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee95b call 0x116f1fe0 */
  push32(0x116ee960u); f_116f1fe0();
  /* 116ee960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee966 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee968 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee96e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee971 push edx */
  push32((uint32_t)(EDX));
  /* 116ee972 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 116ee974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee977 push eax */
  push32((uint32_t)(EAX));
  /* 116ee978 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee97a call 0x116f1fe0 */
  push32(0x116ee97fu); f_116f1fe0();
  /* 116ee97f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee982 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee985 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee987 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee98d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee990 push edx */
  push32((uint32_t)(EDX));
  /* 116ee991 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 116ee993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee996 push eax */
  push32((uint32_t)(EAX));
  /* 116ee997 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee999 call 0x116f1fe0 */
  push32(0x116ee99eu); f_116f1fe0();
  /* 116ee99e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee9a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee9a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee9a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee9ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9af push edx */
  push32((uint32_t)(EDX));
  /* 116ee9b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 116ee9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee9b5 push eax */
  push32((uint32_t)(EAX));
  /* 116ee9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee9b8 call 0x116f1fe0 */
  push32(0x116ee9bdu); f_116f1fe0();
  /* 116ee9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee9c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee9cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9ce push edx */
  push32((uint32_t)(EDX));
  /* 116ee9cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 116ee9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee9d4 push eax */
  push32((uint32_t)(EAX));
  /* 116ee9d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee9d7 call 0x116f1fe0 */
  push32(0x116ee9dcu); f_116f1fe0();
  /* 116ee9dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116ee9e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ee9e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116ee9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ee9ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9ed push edx */
  push32((uint32_t)(EDX));
  /* 116ee9ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 116ee9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ee9f3 push eax */
  push32((uint32_t)(EAX));
  /* 116ee9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ee9f6 call 0x116f1fe0 */
  push32(0x116ee9fbu); f_116f1fe0();
  /* 116ee9fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ee9fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eea01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eea03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eea06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eea09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea0c push edx */
  push32((uint32_t)(EDX));
  /* 116eea0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 116eea0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eea12 push eax */
  push32((uint32_t)(EAX));
  /* 116eea13 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eea15 call 0x116f1fe0 */
  push32(0x116eea1au); f_116f1fe0();
  /* 116eea1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eea20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eea22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eea25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eea28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea2b push edx */
  push32((uint32_t)(EDX));
  /* 116eea2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 116eea2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eea31 push eax */
  push32((uint32_t)(EAX));
  /* 116eea32 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eea34 call 0x116f1fe0 */
  push32(0x116eea39u); f_116f1fe0();
  /* 116eea39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eea3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eea41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eea44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eea47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea4a push edx */
  push32((uint32_t)(EDX));
  /* 116eea4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 116eea4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eea50 push eax */
  push32((uint32_t)(EAX));
  /* 116eea51 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eea53 call 0x116f1fe0 */
  push32(0x116eea58u); f_116f1fe0();
  /* 116eea58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eea5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eea60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eea63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eea66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea69 push edx */
  push32((uint32_t)(EDX));
  /* 116eea6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 116eea6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eea6f push eax */
  push32((uint32_t)(EAX));
  /* 116eea70 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eea72 call 0x116f1fe0 */
  push32(0x116eea77u); f_116f1fe0();
  /* 116eea77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eea7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eea7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eea82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eea85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea88 push edx */
  push32((uint32_t)(EDX));
  /* 116eea89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 116eea8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eea8e push eax */
  push32((uint32_t)(EAX));
  /* 116eea8f push 1 */
  push32((uint32_t)(0x1u));
  /* 116eea91 call 0x116f1fe0 */
  push32(0x116eea96u); f_116f1fe0();
  /* 116eea96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eea99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eea9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eea9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeaa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeaa4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeaa7 push edx */
  push32((uint32_t)(EDX));
  /* 116eeaa8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 116eeaaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeaad push eax */
  push32((uint32_t)(EAX));
  /* 116eeaae push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeab0 call 0x116f1fe0 */
  push32(0x116eeab5u); f_116f1fe0();
  /* 116eeab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeac3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeac6 push edx */
  push32((uint32_t)(EDX));
  /* 116eeac7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116eeac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeacc push eax */
  push32((uint32_t)(EAX));
  /* 116eeacd push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeacf call 0x116f1fe0 */
  push32(0x116eead4u); f_116f1fe0();
  /* 116eead4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eead7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeae2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeae8 push edx */
  push32((uint32_t)(EDX));
  /* 116eeae9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 116eeaeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeaee push eax */
  push32((uint32_t)(EAX));
  /* 116eeaef push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeaf1 call 0x116f1fe0 */
  push32(0x116eeaf6u); f_116f1fe0();
  /* 116eeaf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeaf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeafc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeafe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeb01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeb04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb0a push edx */
  push32((uint32_t)(EDX));
  /* 116eeb0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116eeb0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeb10 push eax */
  push32((uint32_t)(EAX));
  /* 116eeb11 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeb13 call 0x116f1fe0 */
  push32(0x116eeb18u); f_116f1fe0();
  /* 116eeb18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeb1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeb20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeb23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeb26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb2c push edx */
  push32((uint32_t)(EDX));
  /* 116eeb2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116eeb2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeb32 push eax */
  push32((uint32_t)(EAX));
  /* 116eeb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeb35 call 0x116f1fe0 */
  push32(0x116eeb3au); f_116f1fe0();
  /* 116eeb3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeb40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeb42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeb48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb4e push edx */
  push32((uint32_t)(EDX));
  /* 116eeb4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 116eeb51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeb54 push eax */
  push32((uint32_t)(EAX));
  /* 116eeb55 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeb57 call 0x116f1fe0 */
  push32(0x116eeb5cu); f_116f1fe0();
  /* 116eeb5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeb62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeb64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeb67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeb6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb70 push edx */
  push32((uint32_t)(EDX));
  /* 116eeb71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 116eeb73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeb76 push eax */
  push32((uint32_t)(EAX));
  /* 116eeb77 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeb79 call 0x116f1fe0 */
  push32(0x116eeb7eu); f_116f1fe0();
  /* 116eeb7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeb84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeb86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eeb89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeb8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeb92 push edx */
  push32((uint32_t)(EDX));
  /* 116eeb93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 116eeb95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eeb98 push eax */
  push32((uint32_t)(EAX));
  /* 116eeb99 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eeb9b call 0x116f1fe0 */
  push32(0x116eeba0u); f_116f1fe0();
  /* 116eeba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeba3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eeba6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eeba8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eebab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eebae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eebb4 push edx */
  push32((uint32_t)(EDX));
  /* 116eebb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 116eebb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eebba push eax */
  push32((uint32_t)(EAX));
  /* 116eebbb push 1 */
  push32((uint32_t)(0x1u));
  /* 116eebbd call 0x116f1fe0 */
  push32(0x116eebc2u); f_116f1fe0();
  /* 116eebc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eebc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eebc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eebca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eebcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eebd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eebd6 push edx */
  push32((uint32_t)(EDX));
  /* 116eebd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 116eebd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eebdc push eax */
  push32((uint32_t)(EAX));
  /* 116eebdd push 1 */
  push32((uint32_t)(0x1u));
  /* 116eebdf call 0x116f1fe0 */
  push32(0x116eebe4u); f_116f1fe0();
  /* 116eebe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eebe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eebea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eebec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eebef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eebf2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eebf8 push edx */
  push32((uint32_t)(EDX));
  /* 116eebf9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 116eebfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eebfe push eax */
  push32((uint32_t)(EAX));
  /* 116eebff push 1 */
  push32((uint32_t)(0x1u));
  /* 116eec01 call 0x116f1fe0 */
  push32(0x116eec06u); f_116f1fe0();
  /* 116eec06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eec0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eec0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eec11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eec14 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec1a push edx */
  push32((uint32_t)(EDX));
  /* 116eec1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116eec1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eec20 push eax */
  push32((uint32_t)(EAX));
  /* 116eec21 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eec23 call 0x116f1fe0 */
  push32(0x116eec28u); f_116f1fe0();
  /* 116eec28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eec2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eec30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eec33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eec36 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec3c push edx */
  push32((uint32_t)(EDX));
  /* 116eec3d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 116eec42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eec45 push eax */
  push32((uint32_t)(EAX));
  /* 116eec46 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eec48 call 0x116f1fe0 */
  push32(0x116eec4du); f_116f1fe0();
  /* 116eec4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116eec53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eec55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116eec58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_116eec5b:;
  /* 116eec5b mov esp, ebp */
  ESP = (EBP);
  /* 116eec5d pop ebp */
  EBP = (pop32());
  /* 116eec5e ret  */
  ESPCHK(0x116ee6d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x116eec60 (779 bytes, 265 insns) */
void f_116eec60(void) {
  FTRACE(0x116eec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eec60 push ebp */
  push32((uint32_t)(EBP));
  /* 116eec61 mov ebp, esp */
  EBP = (ESP);
  /* 116eec63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eec67 jne 0x116eec6e */
  if (!C.zf) goto L_116eec6e;
  /* 116eec69 jmp 0x116eef69 */
  goto L_116eef69;
L_116eec6e:;
  /* 116eec6e push 2 */
  push32((uint32_t)(0x2u));
  /* 116eec70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eec73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116eec76 push ecx */
  push32((uint32_t)(ECX));
  /* 116eec77 call 0x116e48b0 */
  push32(0x116eec7cu); f_116e48b0();
  /* 116eec7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec7f push 2 */
  push32((uint32_t)(0x2u));
  /* 116eec81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eec84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116eec87 push eax */
  push32((uint32_t)(EAX));
  /* 116eec88 call 0x116e48b0 */
  push32(0x116eec8du); f_116e48b0();
  /* 116eec8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eec90 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eec92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eec95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116eec98 push edx */
  push32((uint32_t)(EDX));
  /* 116eec99 call 0x116e48b0 */
  push32(0x116eec9eu); f_116e48b0();
  /* 116eec9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116eeca9 push ecx */
  push32((uint32_t)(ECX));
  /* 116eecaa call 0x116e48b0 */
  push32(0x116eecafu); f_116e48b0();
  /* 116eecaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eecb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eecb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eecb7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116eecba push eax */
  push32((uint32_t)(EAX));
  /* 116eecbb call 0x116e48b0 */
  push32(0x116eecc0u); f_116e48b0();
  /* 116eecc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eecc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eecc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eecc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116eeccb push edx */
  push32((uint32_t)(EDX));
  /* 116eeccc call 0x116e48b0 */
  push32(0x116eecd1u); f_116e48b0();
  /* 116eecd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eecd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eecd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eecd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116eecdb push ecx */
  push32((uint32_t)(ECX));
  /* 116eecdc call 0x116e48b0 */
  push32(0x116eece1u); f_116e48b0();
  /* 116eece1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eece4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eece6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eece9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 116eecec push eax */
  push32((uint32_t)(EAX));
  /* 116eeced call 0x116e48b0 */
  push32(0x116eecf2u); f_116e48b0();
  /* 116eecf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eecf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eecf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eecfa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 116eecfd push edx */
  push32((uint32_t)(EDX));
  /* 116eecfe call 0x116e48b0 */
  push32(0x116eed03u); f_116e48b0();
  /* 116eed03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed06 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed0b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 116eed0e push ecx */
  push32((uint32_t)(ECX));
  /* 116eed0f call 0x116e48b0 */
  push32(0x116eed14u); f_116e48b0();
  /* 116eed14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed17 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed1c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 116eed1f push eax */
  push32((uint32_t)(EAX));
  /* 116eed20 call 0x116e48b0 */
  push32(0x116eed25u); f_116e48b0();
  /* 116eed25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed28 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed2d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 116eed30 push edx */
  push32((uint32_t)(EDX));
  /* 116eed31 call 0x116e48b0 */
  push32(0x116eed36u); f_116e48b0();
  /* 116eed36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed39 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed3e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 116eed41 push ecx */
  push32((uint32_t)(ECX));
  /* 116eed42 call 0x116e48b0 */
  push32(0x116eed47u); f_116e48b0();
  /* 116eed47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed4a push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed4f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116eed52 push eax */
  push32((uint32_t)(EAX));
  /* 116eed53 call 0x116e48b0 */
  push32(0x116eed58u); f_116e48b0();
  /* 116eed58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed5b push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed60 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 116eed63 push edx */
  push32((uint32_t)(EDX));
  /* 116eed64 call 0x116e48b0 */
  push32(0x116eed69u); f_116e48b0();
  /* 116eed69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed6c push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed71 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 116eed74 push ecx */
  push32((uint32_t)(ECX));
  /* 116eed75 call 0x116e48b0 */
  push32(0x116eed7au); f_116e48b0();
  /* 116eed7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed7d push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed82 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 116eed85 push eax */
  push32((uint32_t)(EAX));
  /* 116eed86 call 0x116e48b0 */
  push32(0x116eed8bu); f_116e48b0();
  /* 116eed8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed8e push 2 */
  push32((uint32_t)(0x2u));
  /* 116eed90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eed93 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 116eed96 push edx */
  push32((uint32_t)(EDX));
  /* 116eed97 call 0x116e48b0 */
  push32(0x116eed9cu); f_116e48b0();
  /* 116eed9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eed9f push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeda1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeda4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 116eeda7 push ecx */
  push32((uint32_t)(ECX));
  /* 116eeda8 call 0x116e48b0 */
  push32(0x116eedadu); f_116e48b0();
  /* 116eedad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eedb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eedb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eedb5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 116eedb8 push eax */
  push32((uint32_t)(EAX));
  /* 116eedb9 call 0x116e48b0 */
  push32(0x116eedbeu); f_116e48b0();
  /* 116eedbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eedc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eedc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eedc6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116eedc9 push edx */
  push32((uint32_t)(EDX));
  /* 116eedca call 0x116e48b0 */
  push32(0x116eedcfu); f_116e48b0();
  /* 116eedcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eedd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eedd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eedd7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 116eedda push ecx */
  push32((uint32_t)(ECX));
  /* 116eeddb call 0x116e48b0 */
  push32(0x116eede0u); f_116e48b0();
  /* 116eede0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eede3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eede5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eede8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 116eedeb push eax */
  push32((uint32_t)(EAX));
  /* 116eedec call 0x116e48b0 */
  push32(0x116eedf1u); f_116e48b0();
  /* 116eedf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eedf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eedf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eedf9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 116eedfc push edx */
  push32((uint32_t)(EDX));
  /* 116eedfd call 0x116e48b0 */
  push32(0x116eee02u); f_116e48b0();
  /* 116eee02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee05 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee0a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 116eee0d push ecx */
  push32((uint32_t)(ECX));
  /* 116eee0e call 0x116e48b0 */
  push32(0x116eee13u); f_116e48b0();
  /* 116eee13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee16 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee1b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 116eee1e push eax */
  push32((uint32_t)(EAX));
  /* 116eee1f call 0x116e48b0 */
  push32(0x116eee24u); f_116e48b0();
  /* 116eee24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee27 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee2c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 116eee2f push edx */
  push32((uint32_t)(EDX));
  /* 116eee30 call 0x116e48b0 */
  push32(0x116eee35u); f_116e48b0();
  /* 116eee35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee38 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee3d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 116eee40 push ecx */
  push32((uint32_t)(ECX));
  /* 116eee41 call 0x116e48b0 */
  push32(0x116eee46u); f_116e48b0();
  /* 116eee46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee49 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee4e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 116eee51 push eax */
  push32((uint32_t)(EAX));
  /* 116eee52 call 0x116e48b0 */
  push32(0x116eee57u); f_116e48b0();
  /* 116eee57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee5a push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee5f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 116eee62 push edx */
  push32((uint32_t)(EDX));
  /* 116eee63 call 0x116e48b0 */
  push32(0x116eee68u); f_116e48b0();
  /* 116eee68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee6b push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee70 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 116eee73 push ecx */
  push32((uint32_t)(ECX));
  /* 116eee74 call 0x116e48b0 */
  push32(0x116eee79u); f_116e48b0();
  /* 116eee79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee7c push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee81 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 116eee84 push eax */
  push32((uint32_t)(EAX));
  /* 116eee85 call 0x116e48b0 */
  push32(0x116eee8au); f_116e48b0();
  /* 116eee8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eee8d push 2 */
  push32((uint32_t)(0x2u));
  /* 116eee8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eee92 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 116eee98 push edx */
  push32((uint32_t)(EDX));
  /* 116eee99 call 0x116e48b0 */
  push32(0x116eee9eu); f_116e48b0();
  /* 116eee9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeea6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 116eeeac push ecx */
  push32((uint32_t)(ECX));
  /* 116eeead call 0x116e48b0 */
  push32(0x116eeeb2u); f_116e48b0();
  /* 116eeeb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeeb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeeb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeeba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 116eeec0 push eax */
  push32((uint32_t)(EAX));
  /* 116eeec1 call 0x116e48b0 */
  push32(0x116eeec6u); f_116e48b0();
  /* 116eeec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeece mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 116eeed4 push edx */
  push32((uint32_t)(EDX));
  /* 116eeed5 call 0x116e48b0 */
  push32(0x116eeedau); f_116e48b0();
  /* 116eeeda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeedd push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeedf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeee2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 116eeee8 push ecx */
  push32((uint32_t)(ECX));
  /* 116eeee9 call 0x116e48b0 */
  push32(0x116eeeeeu); f_116e48b0();
  /* 116eeeee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eeef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eeef6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 116eeefc push eax */
  push32((uint32_t)(EAX));
  /* 116eeefd call 0x116e48b0 */
  push32(0x116eef02u); f_116e48b0();
  /* 116eef02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eef05 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eef07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eef0a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 116eef10 push edx */
  push32((uint32_t)(EDX));
  /* 116eef11 call 0x116e48b0 */
  push32(0x116eef16u); f_116e48b0();
  /* 116eef16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eef19 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eef1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eef1e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 116eef24 push ecx */
  push32((uint32_t)(ECX));
  /* 116eef25 call 0x116e48b0 */
  push32(0x116eef2au); f_116e48b0();
  /* 116eef2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eef2d push 2 */
  push32((uint32_t)(0x2u));
  /* 116eef2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eef32 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 116eef38 push eax */
  push32((uint32_t)(EAX));
  /* 116eef39 call 0x116e48b0 */
  push32(0x116eef3eu); f_116e48b0();
  /* 116eef3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eef41 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eef43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eef46 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 116eef4c push edx */
  push32((uint32_t)(EDX));
  /* 116eef4d call 0x116e48b0 */
  push32(0x116eef52u); f_116e48b0();
  /* 116eef52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eef55 push 2 */
  push32((uint32_t)(0x2u));
  /* 116eef57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eef5a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 116eef60 push ecx */
  push32((uint32_t)(ECX));
  /* 116eef61 call 0x116e48b0 */
  push32(0x116eef66u); f_116e48b0();
  /* 116eef66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116eef69:;
  /* 116eef69 pop ebp */
  EBP = (pop32());
  /* 116eef6a ret  */
  ESPCHK(0x116eec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x116eef70 (678 bytes, 180 insns) */
void f_116eef70(void) {
  FTRACE(0x116eef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eef70 push ebp */
  push32((uint32_t)(EBP));
  /* 116eef71 mov ebp, esp */
  EBP = (ESP);
  /* 116eef73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eef76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116eef7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116eef7f mov ax, word ptr [0x1170f892] */
  AX = (r16((uint32_t)(0x1170f892)));
  /* 116eef85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116eef88 cmp dword ptr [0x1170f838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eef8f je 0x116ef0ea */
  if (C.zf) goto L_116ef0ea;
  /* 116eef95 push 0x1170f860 */
  push32((uint32_t)(0x1170f860u));
  /* 116eef9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 116eef9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eef9f push ecx */
  push32((uint32_t)(ECX));
  /* 116eefa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eefa2 call 0x116f1fe0 */
  push32(0x116eefa7u); f_116f1fe0();
  /* 116eefa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eefaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eefad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116eefaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116eefb2 push 0x1170f864 */
  push32((uint32_t)(0x1170f864u));
  /* 116eefb7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 116eefb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eefbc push eax */
  push32((uint32_t)(EAX));
  /* 116eefbd push 1 */
  push32((uint32_t)(0x1u));
  /* 116eefbf call 0x116f1fe0 */
  push32(0x116eefc4u); f_116f1fe0();
  /* 116eefc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eefc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eefca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eefcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116eefcf push 0x1170f868 */
  push32((uint32_t)(0x1170f868u));
  /* 116eefd4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116eefd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116eefd9 push edx */
  push32((uint32_t)(EDX));
  /* 116eefda push 1 */
  push32((uint32_t)(0x1u));
  /* 116eefdc call 0x116f1fe0 */
  push32(0x116eefe1u); f_116f1fe0();
  /* 116eefe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eefe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116eefe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116eefe9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116eefec mov edx, dword ptr [0x1170f868] */
  EDX = (r32((uint32_t)(0x1170f868)));
  /* 116eeff2 push edx */
  push32((uint32_t)(EDX));
  /* 116eeff3 call 0x116ef220 */
  push32(0x116eeff8u); f_116ef220();
  /* 116eeff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eeffb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116eefff je 0x116ef059 */
  if (C.zf) goto L_116ef059;
  /* 116ef001 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef003 mov eax, dword ptr [0x1170f860] */
  EAX = (r32((uint32_t)(0x1170f860)));
  /* 116ef008 push eax */
  push32((uint32_t)(EAX));
  /* 116ef009 call 0x116e48b0 */
  push32(0x116ef00eu); f_116e48b0();
  /* 116ef00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef011 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef013 mov ecx, dword ptr [0x1170f864] */
  ECX = (r32((uint32_t)(0x1170f864)));
  /* 116ef019 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef01a call 0x116e48b0 */
  push32(0x116ef01fu); f_116e48b0();
  /* 116ef01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef022 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef024 mov edx, dword ptr [0x1170f868] */
  EDX = (r32((uint32_t)(0x1170f868)));
  /* 116ef02a push edx */
  push32((uint32_t)(EDX));
  /* 116ef02b call 0x116e48b0 */
  push32(0x116ef030u); f_116e48b0();
  /* 116ef030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef033 mov dword ptr [0x1170f860], 0 */
  w32((uint32_t)(0x1170f860), (0x0u));
  /* 116ef03d mov dword ptr [0x1170f864], 0 */
  w32((uint32_t)(0x1170f864), (0x0u));
  /* 116ef047 mov dword ptr [0x1170f868], 0 */
  w32((uint32_t)(0x1170f868), (0x0u));
  /* 116ef051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ef054 jmp 0x116ef212 */
  goto L_116ef212;
L_116ef059:;
  /* 116ef059 mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef05e cmp dword ptr [eax], 0x1170ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1170ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef064 je 0x116ef0a0 */
  if (C.zf) goto L_116ef0a0;
  /* 116ef066 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef068 mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef06e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ef070 push edx */
  push32((uint32_t)(EDX));
  /* 116ef071 call 0x116e48b0 */
  push32(0x116ef076u); f_116e48b0();
  /* 116ef076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef079 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef07b mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef080 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116ef083 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef084 call 0x116e48b0 */
  push32(0x116ef089u); f_116e48b0();
  /* 116ef089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef08c push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef08e mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef094 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116ef097 push eax */
  push32((uint32_t)(EAX));
  /* 116ef098 call 0x116e48b0 */
  push32(0x116ef09du); f_116e48b0();
  /* 116ef09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ef0a0:;
  /* 116ef0a0 mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef0a6 mov edx, dword ptr [0x1170f860] */
  EDX = (r32((uint32_t)(0x1170f860)));
  /* 116ef0ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116ef0ae mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef0b3 mov ecx, dword ptr [0x1170f864] */
  ECX = (r32((uint32_t)(0x1170f864)));
  /* 116ef0b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116ef0bc mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef0c2 mov eax, dword ptr [0x1170f868] */
  EAX = (r32((uint32_t)(0x1170f868)));
  /* 116ef0c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116ef0ca mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef0d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ef0d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ef0d4 mov byte ptr [0x1170dea8], al */
  w8((uint32_t)(0x1170dea8), (AL));
  /* 116ef0d9 mov dword ptr [0x1170deac], 1 */
  w32((uint32_t)(0x1170deac), (0x1u));
  /* 116ef0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef0e5 jmp 0x116ef212 */
  goto L_116ef212;
L_116ef0ea:;
  /* 116ef0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef0ec mov ecx, dword ptr [0x1170f860] */
  ECX = (r32((uint32_t)(0x1170f860)));
  /* 116ef0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef0f3 call 0x116e48b0 */
  push32(0x116ef0f8u); f_116e48b0();
  /* 116ef0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef0fd mov edx, dword ptr [0x1170f864] */
  EDX = (r32((uint32_t)(0x1170f864)));
  /* 116ef103 push edx */
  push32((uint32_t)(EDX));
  /* 116ef104 call 0x116e48b0 */
  push32(0x116ef109u); f_116e48b0();
  /* 116ef109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef10c push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef10e mov eax, dword ptr [0x1170f868] */
  EAX = (r32((uint32_t)(0x1170f868)));
  /* 116ef113 push eax */
  push32((uint32_t)(EAX));
  /* 116ef114 call 0x116e48b0 */
  push32(0x116ef119u); f_116e48b0();
  /* 116ef119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef11c mov dword ptr [0x1170f860], 0 */
  w32((uint32_t)(0x1170f860), (0x0u));
  /* 116ef126 mov dword ptr [0x1170f864], 0 */
  w32((uint32_t)(0x1170f864), (0x0u));
  /* 116ef130 mov dword ptr [0x1170f868], 0 */
  w32((uint32_t)(0x1170f868), (0x0u));
  /* 116ef13a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 116ef13f push 0x1170b0d4 */
  push32((uint32_t)(0x1170b0d4u));
  /* 116ef144 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef146 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef148 call 0x116e3e20 */
  push32(0x116ef14du); f_116e3e20();
  /* 116ef14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef150 mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef156 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116ef158 mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef15e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef161 jne 0x116ef16b */
  if (!C.zf) goto L_116ef16b;
  /* 116ef163 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ef166 jmp 0x116ef212 */
  goto L_116ef212;
L_116ef16b:;
  /* 116ef16b push 0x1170b0a4 */
  push32((uint32_t)(0x1170b0a4u));
  /* 116ef170 mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef175 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116ef177 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef178 call 0x116e6dd0 */
  push32(0x116ef17du); f_116e6dd0();
  /* 116ef17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef180 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 116ef185 push 0x1170b0d4 */
  push32((uint32_t)(0x1170b0d4u));
  /* 116ef18a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef18c push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef18e call 0x116e3e20 */
  push32(0x116ef193u); f_116e3e20();
  /* 116ef193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef196 mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef19c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116ef19f mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef1a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef1a8 jne 0x116ef1af */
  if (!C.zf) goto L_116ef1af;
  /* 116ef1aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ef1ad jmp 0x116ef212 */
  goto L_116ef212;
L_116ef1af:;
  /* 116ef1af mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef1b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116ef1b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116ef1bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 116ef1c0 push 0x1170b0d4 */
  push32((uint32_t)(0x1170b0d4u));
  /* 116ef1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef1c9 call 0x116e3e20 */
  push32(0x116ef1ceu); f_116e3e20();
  /* 116ef1ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef1d1 mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef1d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116ef1da mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef1e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef1e4 jne 0x116ef1eb */
  if (!C.zf) goto L_116ef1eb;
  /* 116ef1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ef1e9 jmp 0x116ef212 */
  goto L_116ef212;
L_116ef1eb:;
  /* 116ef1eb mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef1f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116ef1f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116ef1f6 mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef1fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116ef1fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ef200 mov byte ptr [0x1170dea8], cl */
  w8((uint32_t)(0x1170dea8), (CL));
  /* 116ef206 mov dword ptr [0x1170deac], 1 */
  w32((uint32_t)(0x1170deac), (0x1u));
  /* 116ef210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ef212:;
  /* 116ef212 mov esp, ebp */
  ESP = (EBP);
  /* 116ef214 pop ebp */
  EBP = (pop32());
  /* 116ef215 ret  */
  ESPCHK(0x116eef70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x116ef220 (125 bytes, 49 insns) */
void f_116ef220(void) {
  FTRACE(0x116ef220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ef220 push ebp */
  push32((uint32_t)(EBP));
  /* 116ef221 mov ebp, esp */
  EBP = (ESP);
  /* 116ef223 push ecx */
  push32((uint32_t)(ECX));
L_116ef224:;
  /* 116ef224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ef22a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ef22c je 0x116ef299 */
  if (C.zf) goto L_116ef299;
  /* 116ef22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef231 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ef234 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef237 jl 0x116ef25d */
  if ((C.sf!=C.of)) goto L_116ef25d;
  /* 116ef239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef23c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ef23f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef242 jg 0x116ef25d */
  if ((!C.zf&&C.sf==C.of)) goto L_116ef25d;
  /* 116ef244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ef24a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ef24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef250 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116ef252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116ef25b jmp 0x116ef297 */
  goto L_116ef297;
L_116ef25d:;
  /* 116ef25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ef263 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef266 jne 0x116ef28e */
  if (!C.zf) goto L_116ef28e;
  /* 116ef268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef26b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ef26e:;
  /* 116ef26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef274 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116ef277 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116ef279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef27c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef27f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ef282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ef288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef28a jne 0x116ef26e */
  if (!C.zf) goto L_116ef26e;
  /* 116ef28c jmp 0x116ef297 */
  goto L_116ef297;
L_116ef28e:;
  /* 116ef28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116ef297:;
  /* 116ef297 jmp 0x116ef224 */
  goto L_116ef224;
L_116ef299:;
  /* 116ef299 mov esp, ebp */
  ESP = (EBP);
  /* 116ef29b pop ebp */
  EBP = (pop32());
  /* 116ef29c ret  */
  ESPCHK(0x116ef220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2a0 @ 0x116ef2a0 (304 bytes, 85 insns) */
void f_116ef2a0(void) {
  FTRACE(0x116ef2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ef2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ef2a1 mov ebp, esp */
  EBP = (ESP);
  /* 116ef2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef2a4 cmp dword ptr [0x1170f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef2ab je 0x116ef36c */
  if (C.zf) goto L_116ef36c;
  /* 116ef2b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 116ef2b3 push 0x1170b0e0 */
  push32((uint32_t)(0x1170b0e0u));
  /* 116ef2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef2ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116ef2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef2be call 0x116e4230 */
  push32(0x116ef2c3u); f_116e4230();
  /* 116ef2c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef2c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ef2c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef2cd jne 0x116ef2d9 */
  if (!C.zf) goto L_116ef2d9;
  /* 116ef2cf mov eax, 1 */
  EAX = (0x1u);
  /* 116ef2d4 jmp 0x116ef3cc */
  goto L_116ef3cc;
L_116ef2d9:;
  /* 116ef2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef2dc push eax */
  push32((uint32_t)(EAX));
  /* 116ef2dd call 0x116ef3d0 */
  push32(0x116ef2e2u); f_116ef3d0();
  /* 116ef2e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef2e7 je 0x116ef30d */
  if (C.zf) goto L_116ef30d;
  /* 116ef2e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef2ec push ecx */
  push32((uint32_t)(ECX));
  /* 116ef2ed call 0x116ef660 */
  push32(0x116ef2f2u); f_116ef660();
  /* 116ef2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef2fa push edx */
  push32((uint32_t)(EDX));
  /* 116ef2fb call 0x116e48b0 */
  push32(0x116ef300u); f_116e48b0();
  /* 116ef300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef303 mov eax, 1 */
  EAX = (0x1u);
  /* 116ef308 jmp 0x116ef3cc */
  goto L_116ef3cc;
L_116ef30d:;
  /* 116ef30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef310 mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ef318 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116ef31a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef31d mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef323 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116ef326 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116ef329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef32c mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef332 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116ef335 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116ef338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef33b mov dword ptr [0x1170ed88], eax */
  w32((uint32_t)(0x1170ed88), (EAX));
  /* 116ef340 mov ecx, dword ptr [0x1170f86c] */
  ECX = (r32((uint32_t)(0x1170f86c)));
  /* 116ef346 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef347 call 0x116ef660 */
  push32(0x116ef34cu); f_116ef660();
  /* 116ef34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef34f push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef351 mov edx, dword ptr [0x1170f86c] */
  EDX = (r32((uint32_t)(0x1170f86c)));
  /* 116ef357 push edx */
  push32((uint32_t)(EDX));
  /* 116ef358 call 0x116e48b0 */
  push32(0x116ef35du); f_116e48b0();
  /* 116ef35d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef363 mov dword ptr [0x1170f86c], eax */
  w32((uint32_t)(0x1170f86c), (EAX));
  /* 116ef368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef36a jmp 0x116ef3cc */
  goto L_116ef3cc;
L_116ef36c:;
  /* 116ef36c mov ecx, dword ptr [0x1170ed88] */
  ECX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116ef374 mov dword ptr [0x1170ed58], edx */
  w32((uint32_t)(0x1170ed58), (EDX));
  /* 116ef37a mov eax, dword ptr [0x1170ed88] */
  EAX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef37f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116ef382 mov dword ptr [0x1170ed5c], ecx */
  w32((uint32_t)(0x1170ed5c), (ECX));
  /* 116ef388 mov edx, dword ptr [0x1170ed88] */
  EDX = (r32((uint32_t)(0x1170ed88)));
  /* 116ef38e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116ef391 mov dword ptr [0x1170ed60], eax */
  w32((uint32_t)(0x1170ed60), (EAX));
  /* 116ef396 mov dword ptr [0x1170ed88], 0x1170ed58 */
  w32((uint32_t)(0x1170ed88), (0x1170ed58u));
  /* 116ef3a0 mov ecx, dword ptr [0x1170f86c] */
  ECX = (r32((uint32_t)(0x1170f86c)));
  /* 116ef3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef3a7 call 0x116ef660 */
  push32(0x116ef3acu); f_116ef660();
  /* 116ef3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef3af push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef3b1 mov edx, dword ptr [0x1170f86c] */
  EDX = (r32((uint32_t)(0x1170f86c)));
  /* 116ef3b7 push edx */
  push32((uint32_t)(EDX));
  /* 116ef3b8 call 0x116e48b0 */
  push32(0x116ef3bdu); f_116e48b0();
  /* 116ef3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef3c0 mov dword ptr [0x1170f86c], 0 */
  w32((uint32_t)(0x1170f86c), (0x0u));
  /* 116ef3ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116ef3cc:;
  /* 116ef3cc mov esp, ebp */
  ESP = (EBP);
  /* 116ef3ce pop ebp */
  EBP = (pop32());
  /* 116ef3cf ret  */
  ESPCHK(0x116ef2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3d0 @ 0x116ef3d0 (525 bytes, 200 insns) */
void f_116ef3d0(void) {
  FTRACE(0x116ef3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ef3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ef3d1 mov ebp, esp */
  EBP = (ESP);
  /* 116ef3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ef3d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116ef3dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef3df mov ax, word ptr [0x1170f88c] */
  AX = (r16((uint32_t)(0x1170f88c)));
  /* 116ef3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116ef3e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef3ec jne 0x116ef3f6 */
  if (!C.zf) goto L_116ef3f6;
  /* 116ef3ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116ef3f1 jmp 0x116ef5d9 */
  goto L_116ef5d9;
L_116ef3f6:;
  /* 116ef3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef3f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef3fc push ecx */
  push32((uint32_t)(ECX));
  /* 116ef3fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 116ef3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef402 push edx */
  push32((uint32_t)(EDX));
  /* 116ef403 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef405 call 0x116f1fe0 */
  push32(0x116ef40au); f_116f1fe0();
  /* 116ef40a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef40d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef410 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef412 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef418 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef41b push edx */
  push32((uint32_t)(EDX));
  /* 116ef41c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 116ef41e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef421 push eax */
  push32((uint32_t)(EAX));
  /* 116ef422 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef424 call 0x116f1fe0 */
  push32(0x116ef429u); f_116f1fe0();
  /* 116ef429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef42c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef42f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef431 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef43a push edx */
  push32((uint32_t)(EDX));
  /* 116ef43b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116ef43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef440 push eax */
  push32((uint32_t)(EAX));
  /* 116ef441 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef443 call 0x116f1fe0 */
  push32(0x116ef448u); f_116f1fe0();
  /* 116ef448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef44b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef44e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef450 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef456 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef459 push edx */
  push32((uint32_t)(EDX));
  /* 116ef45a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 116ef45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef45f push eax */
  push32((uint32_t)(EAX));
  /* 116ef460 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef462 call 0x116f1fe0 */
  push32(0x116ef467u); f_116f1fe0();
  /* 116ef467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef46a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef46d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef475 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef478 push edx */
  push32((uint32_t)(EDX));
  /* 116ef479 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 116ef47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef47e push eax */
  push32((uint32_t)(EAX));
  /* 116ef47f push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef481 call 0x116f1fe0 */
  push32(0x116ef486u); f_116f1fe0();
  /* 116ef486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef48c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef48e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef494 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116ef497 push eax */
  push32((uint32_t)(EAX));
  /* 116ef498 call 0x116ef5e0 */
  push32(0x116ef49du); f_116ef5e0();
  /* 116ef49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef4a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef4a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 116ef4a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef4ac push edx */
  push32((uint32_t)(EDX));
  /* 116ef4ad push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef4af call 0x116f1fe0 */
  push32(0x116ef4b4u); f_116f1fe0();
  /* 116ef4b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef4ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef4bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef4c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4c5 push edx */
  push32((uint32_t)(EDX));
  /* 116ef4c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 116ef4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef4cb push eax */
  push32((uint32_t)(EAX));
  /* 116ef4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef4ce call 0x116f1fe0 */
  push32(0x116ef4d3u); f_116f1fe0();
  /* 116ef4d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef4d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef4db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef4e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4e4 push edx */
  push32((uint32_t)(EDX));
  /* 116ef4e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116ef4e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef4ea push eax */
  push32((uint32_t)(EAX));
  /* 116ef4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef4ed call 0x116f1fe0 */
  push32(0x116ef4f2u); f_116f1fe0();
  /* 116ef4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef4f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef4fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef4fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef500 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef503 push edx */
  push32((uint32_t)(EDX));
  /* 116ef504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116ef506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef509 push eax */
  push32((uint32_t)(EAX));
  /* 116ef50a push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef50c call 0x116f1fe0 */
  push32(0x116ef511u); f_116f1fe0();
  /* 116ef511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef514 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef517 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef519 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef51f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef522 push edx */
  push32((uint32_t)(EDX));
  /* 116ef523 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 116ef525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef528 push eax */
  push32((uint32_t)(EAX));
  /* 116ef529 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef52b call 0x116f1fe0 */
  push32(0x116ef530u); f_116f1fe0();
  /* 116ef530 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef536 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef53b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef53e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef541 push edx */
  push32((uint32_t)(EDX));
  /* 116ef542 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 116ef544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef547 push eax */
  push32((uint32_t)(EAX));
  /* 116ef548 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef54a call 0x116f1fe0 */
  push32(0x116ef54fu); f_116f1fe0();
  /* 116ef54f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef555 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef557 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef55a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef55d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef560 push edx */
  push32((uint32_t)(EDX));
  /* 116ef561 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 116ef563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef566 push eax */
  push32((uint32_t)(EAX));
  /* 116ef567 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef569 call 0x116f1fe0 */
  push32(0x116ef56eu); f_116f1fe0();
  /* 116ef56e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef574 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef576 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef57c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef57f push edx */
  push32((uint32_t)(EDX));
  /* 116ef580 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 116ef582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef585 push eax */
  push32((uint32_t)(EAX));
  /* 116ef586 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef588 call 0x116f1fe0 */
  push32(0x116ef58du); f_116f1fe0();
  /* 116ef58d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef593 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef59b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef59e push edx */
  push32((uint32_t)(EDX));
  /* 116ef59f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 116ef5a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef5a4 push eax */
  push32((uint32_t)(EAX));
  /* 116ef5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef5a7 call 0x116f1fe0 */
  push32(0x116ef5acu); f_116f1fe0();
  /* 116ef5ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef5af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef5b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef5b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef5ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef5bd push edx */
  push32((uint32_t)(EDX));
  /* 116ef5be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 116ef5c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef5c3 push eax */
  push32((uint32_t)(EAX));
  /* 116ef5c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef5c6 call 0x116f1fe0 */
  push32(0x116ef5cbu); f_116f1fe0();
  /* 116ef5cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef5ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116ef5d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef5d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116ef5d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116ef5d9:;
  /* 116ef5d9 mov esp, ebp */
  ESP = (EBP);
  /* 116ef5db pop ebp */
  EBP = (pop32());
  /* 116ef5dc ret  */
  ESPCHK(0x116ef3d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x116ef5e0 (125 bytes, 49 insns) */
void f_116ef5e0(void) {
  FTRACE(0x116ef5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ef5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116ef5e1 mov ebp, esp */
  EBP = (ESP);
  /* 116ef5e3 push ecx */
  push32((uint32_t)(ECX));
L_116ef5e4:;
  /* 116ef5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef5e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ef5ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ef5ec je 0x116ef659 */
  if (C.zf) goto L_116ef659;
  /* 116ef5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef5f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ef5f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef5f7 jl 0x116ef61d */
  if ((C.sf!=C.of)) goto L_116ef61d;
  /* 116ef5f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef5fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ef5ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef602 jg 0x116ef61d */
  if ((!C.zf&&C.sf==C.of)) goto L_116ef61d;
  /* 116ef604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116ef60a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ef60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef610 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116ef612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef618 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116ef61b jmp 0x116ef657 */
  goto L_116ef657;
L_116ef61d:;
  /* 116ef61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef620 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116ef623 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef626 jne 0x116ef64e */
  if (!C.zf) goto L_116ef64e;
  /* 116ef628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef62b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116ef62e:;
  /* 116ef62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef634 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116ef637 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116ef639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef63c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef63f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116ef642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116ef645 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116ef648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef64a jne 0x116ef62e */
  if (!C.zf) goto L_116ef62e;
  /* 116ef64c jmp 0x116ef657 */
  goto L_116ef657;
L_116ef64e:;
  /* 116ef64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef654 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116ef657:;
  /* 116ef657 jmp 0x116ef5e4 */
  goto L_116ef5e4;
L_116ef659:;
  /* 116ef659 mov esp, ebp */
  ESP = (EBP);
  /* 116ef65b pop ebp */
  EBP = (pop32());
  /* 116ef65c ret  */
  ESPCHK(0x116ef5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f660 @ 0x116ef660 (147 bytes, 52 insns) */
void f_116ef660(void) {
  FTRACE(0x116ef660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ef660 push ebp */
  push32((uint32_t)(EBP));
  /* 116ef661 mov ebp, esp */
  EBP = (ESP);
  /* 116ef663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef667 jne 0x116ef66e */
  if (!C.zf) goto L_116ef66e;
  /* 116ef669 jmp 0x116ef6f1 */
  goto L_116ef6f1;
L_116ef66e:;
  /* 116ef66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef671 cmp dword ptr [eax + 0xc], 0x1170f8c8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1170f8c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef678 je 0x116ef6f1 */
  if (C.zf) goto L_116ef6f1;
  /* 116ef67a push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef67f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116ef682 push edx */
  push32((uint32_t)(EDX));
  /* 116ef683 call 0x116e48b0 */
  push32(0x116ef688u); f_116e48b0();
  /* 116ef688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef68b push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef68d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef690 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116ef693 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef694 call 0x116e48b0 */
  push32(0x116ef699u); f_116e48b0();
  /* 116ef699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef69c push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef6a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116ef6a4 push eax */
  push32((uint32_t)(EAX));
  /* 116ef6a5 call 0x116e48b0 */
  push32(0x116ef6aau); f_116e48b0();
  /* 116ef6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef6af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef6b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116ef6b5 push edx */
  push32((uint32_t)(EDX));
  /* 116ef6b6 call 0x116e48b0 */
  push32(0x116ef6bbu); f_116e48b0();
  /* 116ef6bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef6be push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef6c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 116ef6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116ef6c7 call 0x116e48b0 */
  push32(0x116ef6ccu); f_116e48b0();
  /* 116ef6cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef6d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 116ef6d7 push eax */
  push32((uint32_t)(EAX));
  /* 116ef6d8 call 0x116e48b0 */
  push32(0x116ef6ddu); f_116e48b0();
  /* 116ef6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef6e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef6e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116ef6e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 116ef6e8 push edx */
  push32((uint32_t)(EDX));
  /* 116ef6e9 call 0x116e48b0 */
  push32(0x116ef6eeu); f_116e48b0();
  /* 116ef6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ef6f1:;
  /* 116ef6f1 pop ebp */
  EBP = (pop32());
  /* 116ef6f2 ret  */
  ESPCHK(0x116ef660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f700 @ 0x116ef700 (928 bytes, 284 insns) */
void f_116ef700(void) {
  FTRACE(0x116ef700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116ef700 push ebp */
  push32((uint32_t)(EBP));
  /* 116ef701 mov ebp, esp */
  EBP = (ESP);
  /* 116ef703 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116ef706 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 116ef70d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 116ef714 cmp dword ptr [0x1170f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef71b je 0x116efa51 */
  if (C.zf) goto L_116efa51;
  /* 116ef721 cmp dword ptr [0x1170f840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef728 jne 0x116ef750 */
  if (!C.zf) goto L_116ef750;
  /* 116ef72a push 0x1170f840 */
  push32((uint32_t)(0x1170f840u));
  /* 116ef72f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 116ef734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef736 mov ax, word ptr [0x1170f884] */
  AX = (r16((uint32_t)(0x1170f884)));
  /* 116ef73c push eax */
  push32((uint32_t)(EAX));
  /* 116ef73d push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef73f call 0x116f1fe0 */
  push32(0x116ef744u); f_116f1fe0();
  /* 116ef744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef749 je 0x116ef750 */
  if (C.zf) goto L_116ef750;
  /* 116ef74b jmp 0x116efa12 */
  goto L_116efa12;
L_116ef750:;
  /* 116ef750 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 116ef752 push 0x1170b0ec */
  push32((uint32_t)(0x1170b0ecu));
  /* 116ef757 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef759 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116ef75e call 0x116e3e20 */
  push32(0x116ef763u); f_116e3e20();
  /* 116ef763 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef766 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116ef769 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116ef76b push 0x1170b0ec */
  push32((uint32_t)(0x1170b0ecu));
  /* 116ef770 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef772 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116ef777 call 0x116e3e20 */
  push32(0x116ef77cu); f_116e3e20();
  /* 116ef77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef77f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116ef782 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 116ef784 push 0x1170b0ec */
  push32((uint32_t)(0x1170b0ecu));
  /* 116ef789 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef78b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 116ef790 call 0x116e3e20 */
  push32(0x116ef795u); f_116e3e20();
  /* 116ef795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef798 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116ef79b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 116ef79d push 0x1170b0ec */
  push32((uint32_t)(0x1170b0ecu));
  /* 116ef7a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef7a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116ef7a9 call 0x116e3e20 */
  push32(0x116ef7aeu); f_116e3e20();
  /* 116ef7ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef7b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116ef7b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef7b8 je 0x116ef7cc */
  if (C.zf) goto L_116ef7cc;
  /* 116ef7ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef7be je 0x116ef7cc */
  if (C.zf) goto L_116ef7cc;
  /* 116ef7c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef7c4 je 0x116ef7cc */
  if (C.zf) goto L_116ef7cc;
  /* 116ef7c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef7ca jne 0x116ef7d1 */
  if (!C.zf) goto L_116ef7d1;
L_116ef7cc:;
  /* 116ef7cc jmp 0x116efa12 */
  goto L_116efa12;
L_116ef7d1:;
  /* 116ef7d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ef7d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116ef7d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116ef7de jmp 0x116ef7e9 */
  goto L_116ef7e9;
L_116ef7e0:;
  /* 116ef7e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ef7e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef7e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116ef7e9:;
  /* 116ef7e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef7f0 jge 0x116ef805 */
  if ((C.sf==C.of)) goto L_116ef805;
  /* 116ef7f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef7f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 116ef7f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116ef7fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef7fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef800 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116ef803 jmp 0x116ef7e0 */
  goto L_116ef7e0;
L_116ef805:;
  /* 116ef805 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 116ef808 push eax */
  push32((uint32_t)(EAX));
  /* 116ef809 mov ecx, dword ptr [0x1170f840] */
  ECX = (r32((uint32_t)(0x1170f840)));
  /* 116ef80f push ecx */
  push32((uint32_t)(ECX));
  /* 116ef810 call dword ptr [0x11712300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712300))), 0x116ef816u);
  /* 116ef816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef818 jne 0x116ef81f */
  if (!C.zf) goto L_116ef81f;
  /* 116ef81a jmp 0x116efa12 */
  goto L_116efa12;
L_116ef81f:;
  /* 116ef81f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef823 jbe 0x116ef82a */
  if ((C.cf||C.zf)) goto L_116ef82a;
  /* 116ef825 jmp 0x116efa12 */
  goto L_116efa12;
L_116ef82a:;
  /* 116ef82a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116ef82d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116ef833 mov dword ptr [0x1170dea4], edx */
  w32((uint32_t)(0x1170dea4), (EDX));
  /* 116ef839 cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef840 jle 0x116ef899 */
  if ((C.zf||C.sf!=C.of)) goto L_116ef899;
  /* 116ef842 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 116ef845 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116ef848 jmp 0x116ef853 */
  goto L_116ef853;
L_116ef84a:;
  /* 116ef84a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef84d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef850 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_116ef853:;
  /* 116ef853 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef858 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ef85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef85c je 0x116ef899 */
  if (C.zf) goto L_116ef899;
  /* 116ef85e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef861 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ef863 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116ef866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ef868 je 0x116ef899 */
  if (C.zf) goto L_116ef899;
  /* 116ef86a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116ef871 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116ef874 jmp 0x116ef87f */
  goto L_116ef87f;
L_116ef876:;
  /* 116ef876 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ef879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef87c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116ef87f:;
  /* 116ef87f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef884 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116ef887 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef88a jg 0x116ef897 */
  if ((!C.zf&&C.sf==C.of)) goto L_116ef897;
  /* 116ef88c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ef88f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef892 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116ef895 jmp 0x116ef876 */
  goto L_116ef876;
L_116ef897:;
  /* 116ef897 jmp 0x116ef84a */
  goto L_116ef84a;
L_116ef899:;
  /* 116ef899 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef89b push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef89d push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef89f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ef8a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef8a5 push eax */
  push32((uint32_t)(EAX));
  /* 116ef8a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ef8ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ef8ae push ecx */
  push32((uint32_t)(ECX));
  /* 116ef8af push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef8b1 call 0x116ec050 */
  push32(0x116ef8b6u); f_116ec050();
  /* 116ef8b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef8bb jne 0x116ef8c2 */
  if (!C.zf) goto L_116ef8c2;
  /* 116ef8bd jmp 0x116efa12 */
  goto L_116efa12;
L_116ef8c2:;
  /* 116ef8c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ef8c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 116ef8ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ef8cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116ef8d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116ef8d7 jmp 0x116ef8e2 */
  goto L_116ef8e2;
L_116ef8d9:;
  /* 116ef8d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ef8dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116ef8e2:;
  /* 116ef8e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef8e9 jge 0x116ef900 */
  if ((C.sf==C.of)) goto L_116ef900;
  /* 116ef8eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ef8ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 116ef8f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 116ef8f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116ef8f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef8fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116ef8fe jmp 0x116ef8d9 */
  goto L_116ef8d9;
L_116ef900:;
  /* 116ef900 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef902 push 0 */
  push32((uint32_t)(0x0u));
  /* 116ef904 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ef907 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef90a push edx */
  push32((uint32_t)(EDX));
  /* 116ef90b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116ef910 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116ef913 push eax */
  push32((uint32_t)(EAX));
  /* 116ef914 push 1 */
  push32((uint32_t)(0x1u));
  /* 116ef916 call 0x116f2280 */
  push32(0x116ef91bu); f_116f2280();
  /* 116ef91b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116ef920 jne 0x116ef927 */
  if (!C.zf) goto L_116ef927;
  /* 116ef922 jmp 0x116efa12 */
  goto L_116efa12;
L_116ef927:;
  /* 116ef927 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ef92a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 116ef92f cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef936 jle 0x116ef993 */
  if ((C.zf||C.sf!=C.of)) goto L_116ef993;
  /* 116ef938 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 116ef93b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116ef93e jmp 0x116ef949 */
  goto L_116ef949;
L_116ef940:;
  /* 116ef940 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef943 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef946 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116ef949:;
  /* 116ef949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef94c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116ef94e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116ef950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116ef952 je 0x116ef993 */
  if (C.zf) goto L_116ef993;
  /* 116ef954 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef957 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116ef959 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116ef95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116ef95e je 0x116ef993 */
  if (C.zf) goto L_116ef993;
  /* 116ef960 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef965 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116ef967 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116ef96a jmp 0x116ef975 */
  goto L_116ef975;
L_116ef96c:;
  /* 116ef96c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ef96f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef972 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_116ef975:;
  /* 116ef975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116ef978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116ef97a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116ef97d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef980 jg 0x116ef991 */
  if ((!C.zf&&C.sf==C.of)) goto L_116ef991;
  /* 116ef982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116ef985 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ef988 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 116ef98f jmp 0x116ef96c */
  goto L_116ef96c;
L_116ef991:;
  /* 116ef991 jmp 0x116ef940 */
  goto L_116ef940;
L_116ef993:;
  /* 116ef993 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ef996 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef999 mov dword ptr [0x1170dc98], eax */
  w32((uint32_t)(0x1170dc98), (EAX));
  /* 116ef99e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ef9a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef9a4 mov dword ptr [0x1170dc9c], ecx */
  w32((uint32_t)(0x1170dc9c), (ECX));
  /* 116ef9aa cmp dword ptr [0x1170f870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef9b1 je 0x116ef9c4 */
  if (C.zf) goto L_116ef9c4;
  /* 116ef9b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef9b5 mov edx, dword ptr [0x1170f870] */
  EDX = (r32((uint32_t)(0x1170f870)));
  /* 116ef9bb push edx */
  push32((uint32_t)(EDX));
  /* 116ef9bc call 0x116e48b0 */
  push32(0x116ef9c1u); f_116e48b0();
  /* 116ef9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ef9c4:;
  /* 116ef9c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116ef9c7 mov dword ptr [0x1170f870], eax */
  w32((uint32_t)(0x1170f870), (EAX));
  /* 116ef9cc cmp dword ptr [0x1170f874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116ef9d3 je 0x116ef9e6 */
  if (C.zf) goto L_116ef9e6;
  /* 116ef9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef9d7 mov ecx, dword ptr [0x1170f874] */
  ECX = (r32((uint32_t)(0x1170f874)));
  /* 116ef9dd push ecx */
  push32((uint32_t)(ECX));
  /* 116ef9de call 0x116e48b0 */
  push32(0x116ef9e3u); f_116e48b0();
  /* 116ef9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116ef9e6:;
  /* 116ef9e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116ef9e9 mov dword ptr [0x1170f874], edx */
  w32((uint32_t)(0x1170f874), (EDX));
  /* 116ef9ef push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef9f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116ef9f4 push eax */
  push32((uint32_t)(EAX));
  /* 116ef9f5 call 0x116e48b0 */
  push32(0x116ef9fau); f_116e48b0();
  /* 116ef9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116ef9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 116ef9ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116efa02 push ecx */
  push32((uint32_t)(ECX));
  /* 116efa03 call 0x116e48b0 */
  push32(0x116efa08u); f_116e48b0();
  /* 116efa08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efa0d jmp 0x116efa9c */
  goto L_116efa9c;
L_116efa12:;
  /* 116efa12 push 2 */
  push32((uint32_t)(0x2u));
  /* 116efa14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116efa17 push edx */
  push32((uint32_t)(EDX));
  /* 116efa18 call 0x116e48b0 */
  push32(0x116efa1du); f_116e48b0();
  /* 116efa1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa20 push 2 */
  push32((uint32_t)(0x2u));
  /* 116efa22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116efa25 push eax */
  push32((uint32_t)(EAX));
  /* 116efa26 call 0x116e48b0 */
  push32(0x116efa2bu); f_116e48b0();
  /* 116efa2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa2e push 2 */
  push32((uint32_t)(0x2u));
  /* 116efa30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116efa33 push ecx */
  push32((uint32_t)(ECX));
  /* 116efa34 call 0x116e48b0 */
  push32(0x116efa39u); f_116e48b0();
  /* 116efa39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa3c push 2 */
  push32((uint32_t)(0x2u));
  /* 116efa3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116efa41 push edx */
  push32((uint32_t)(EDX));
  /* 116efa42 call 0x116e48b0 */
  push32(0x116efa47u); f_116e48b0();
  /* 116efa47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa4a mov eax, 1 */
  EAX = (0x1u);
  /* 116efa4f jmp 0x116efa9c */
  goto L_116efa9c;
L_116efa51:;
  /* 116efa51 mov dword ptr [0x1170dc98], 0x1170dca2 */
  w32((uint32_t)(0x1170dc98), (0x1170dca2u));
  /* 116efa5b mov dword ptr [0x1170dc9c], 0x1170dca2 */
  w32((uint32_t)(0x1170dc9c), (0x1170dca2u));
  /* 116efa65 push 2 */
  push32((uint32_t)(0x2u));
  /* 116efa67 mov eax, dword ptr [0x1170f870] */
  EAX = (r32((uint32_t)(0x1170f870)));
  /* 116efa6c push eax */
  push32((uint32_t)(EAX));
  /* 116efa6d call 0x116e48b0 */
  push32(0x116efa72u); f_116e48b0();
  /* 116efa72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa75 push 2 */
  push32((uint32_t)(0x2u));
  /* 116efa77 mov ecx, dword ptr [0x1170f874] */
  ECX = (r32((uint32_t)(0x1170f874)));
  /* 116efa7d push ecx */
  push32((uint32_t)(ECX));
  /* 116efa7e call 0x116e48b0 */
  push32(0x116efa83u); f_116e48b0();
  /* 116efa83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efa86 mov dword ptr [0x1170f870], 0 */
  w32((uint32_t)(0x1170f870), (0x0u));
  /* 116efa90 mov dword ptr [0x1170f874], 0 */
  w32((uint32_t)(0x1170f874), (0x0u));
  /* 116efa9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116efa9c:;
  /* 116efa9c mov esp, ebp */
  ESP = (EBP);
  /* 116efa9e pop ebp */
  EBP = (pop32());
  /* 116efa9f ret  */
  ESPCHK(0x116ef700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x116efaa0 (7 bytes, 5 insns) */
void f_116efaa0(void) {
  FTRACE(0x116efaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 116efaa1 mov ebp, esp */
  EBP = (ESP);
  /* 116efaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efaa5 pop ebp */
  EBP = (pop32());
  /* 116efaa6 ret  */
  ESPCHK(0x116efaa0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x116efab0 (129 bytes, 56 insns) */
void f_116efab0(void) {
  FTRACE(0x116efab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efab0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 116efab4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 116efab8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 116efabe jne 0x116efafc */
  if (!C.zf) goto L_116efafc;
L_116efac0:;
  /* 116efac0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116efac2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efac4 jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efac8 je 0x116efaf0 */
  if (C.zf) goto L_116efaf0;
  /* 116efaca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efacd jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efacf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116efad1 je 0x116efaf0 */
  if (C.zf) goto L_116efaf0;
  /* 116efad3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116efad6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efad9 jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efadb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efadd je 0x116efaf0 */
  if (C.zf) goto L_116efaf0;
  /* 116efadf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efae2 jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efae4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efae7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efaea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116efaec jne 0x116efac0 */
  if (!C.zf) goto L_116efac0;
  /* 116efaee mov edi, edi */
  EDI = (EDI);
L_116efaf0:;
  /* 116efaf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efaf2 ret  */
  ESPCHK(0x116efab0u, _esp0);
  ESP += 4; return;
  /* 116efaf3 nop  */
  /* nop */
L_116efaf4:;
  /* 116efaf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116efaf6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116efaf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116efaf9 ret  */
  ESPCHK(0x116efab0u, _esp0);
  ESP += 4; return;
  /* 116efafa mov edi, edi */
  EDI = (EDI);
L_116efafc:;
  /* 116efafc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 116efb02 je 0x116efb18 */
  if (C.zf) goto L_116efb18;
  /* 116efb04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116efb06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116efb07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efb09 jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efb0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116efb0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efb0e je 0x116efaf0 */
  if (C.zf) goto L_116efaf0;
  /* 116efb10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 116efb16 je 0x116efac0 */
  if (C.zf) goto L_116efac0;
L_116efb18:;
  /* 116efb18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116efb1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efb1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efb20 jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efb22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efb24 je 0x116efaf0 */
  if (C.zf) goto L_116efaf0;
  /* 116efb26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efb29 jne 0x116efaf4 */
  if (!C.zf) goto L_116efaf4;
  /* 116efb2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116efb2d je 0x116efaf0 */
  if (C.zf) goto L_116efaf0;
  /* 116efb2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efb32 jmp 0x116efac0 */
  goto L_116efac0;
}

/* FUN_1000fb40 @ 0x116efb40 (62 bytes, 35 insns) */
void f_116efb40(void) {
  FTRACE(0x116efb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efb40 push ebp */
  push32((uint32_t)(EBP));
  /* 116efb41 mov ebp, esp */
  EBP = (ESP);
  /* 116efb43 push esi */
  push32((uint32_t)(ESI));
  /* 116efb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efb46 push eax */
  push32((uint32_t)(EAX));
  /* 116efb47 push eax */
  push32((uint32_t)(EAX));
  /* 116efb48 push eax */
  push32((uint32_t)(EAX));
  /* 116efb49 push eax */
  push32((uint32_t)(EAX));
  /* 116efb4a push eax */
  push32((uint32_t)(EAX));
  /* 116efb4b push eax */
  push32((uint32_t)(EAX));
  /* 116efb4c push eax */
  push32((uint32_t)(EAX));
  /* 116efb4d push eax */
  push32((uint32_t)(EAX));
  /* 116efb4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116efb51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116efb54:;
  /* 116efb54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116efb56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efb58 je 0x116efb61 */
  if (C.zf) goto L_116efb61;
  /* 116efb5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116efb5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x116efb5b");
  /* 116efb5f jmp 0x116efb54 */
  goto L_116efb54;
L_116efb61:;
  /* 116efb61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 116efb64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116efb67 nop  */
  /* nop */
L_116efb68:;
  /* 116efb68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116efb69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116efb6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efb6d je 0x116efb76 */
  if (C.zf) goto L_116efb76;
  /* 116efb6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116efb70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x116efb70");
  /* 116efb74 jae 0x116efb68 */
  if (!C.cf) goto L_116efb68;
L_116efb76:;
  /* 116efb76 mov eax, ecx */
  EAX = (ECX);
  /* 116efb78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efb7b pop esi */
  ESI = (pop32());
  /* 116efb7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116efb7d ret  */
  ESPCHK(0x116efb40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x116efb80 (56 bytes, 31 insns) */
void f_116efb80(void) {
  FTRACE(0x116efb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efb80 push ebp */
  push32((uint32_t)(EBP));
  /* 116efb81 mov ebp, esp */
  EBP = (ESP);
  /* 116efb83 push edi */
  push32((uint32_t)(EDI));
  /* 116efb84 push esi */
  push32((uint32_t)(ESI));
  /* 116efb85 push ebx */
  push32((uint32_t)(EBX));
  /* 116efb86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116efb89 jecxz 0x116efbb1 */
  x86_unimpl("jecxz @ 0x116efb89");
  /* 116efb8b mov ebx, ecx */
  EBX = (ECX);
  /* 116efb8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116efb90 mov esi, edi */
  ESI = (EDI);
  /* 116efb92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efb94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 116efb96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116efb98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efb9a mov edi, esi */
  EDI = (ESI);
  /* 116efb9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116efb9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 116efba1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 116efba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116efba6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116efba9 ja 0x116efbaf */
  if ((!C.cf&&!C.zf)) goto L_116efbaf;
  /* 116efbab je 0x116efbb1 */
  if (C.zf) goto L_116efbb1;
  /* 116efbad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116efbae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_116efbaf:;
  /* 116efbaf not ecx */
  ECX = (~(ECX));
L_116efbb1:;
  /* 116efbb1 mov eax, ecx */
  EAX = (ECX);
  /* 116efbb3 pop ebx */
  EBX = (pop32());
  /* 116efbb4 pop esi */
  ESI = (pop32());
  /* 116efbb5 pop edi */
  EDI = (pop32());
  /* 116efbb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116efbb7 ret  */
  ESPCHK(0x116efb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x116efbc0 (58 bytes, 32 insns) */
void f_116efbc0(void) {
  FTRACE(0x116efbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 116efbc1 mov ebp, esp */
  EBP = (ESP);
  /* 116efbc3 push esi */
  push32((uint32_t)(ESI));
  /* 116efbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efbc6 push eax */
  push32((uint32_t)(EAX));
  /* 116efbc7 push eax */
  push32((uint32_t)(EAX));
  /* 116efbc8 push eax */
  push32((uint32_t)(EAX));
  /* 116efbc9 push eax */
  push32((uint32_t)(EAX));
  /* 116efbca push eax */
  push32((uint32_t)(EAX));
  /* 116efbcb push eax */
  push32((uint32_t)(EAX));
  /* 116efbcc push eax */
  push32((uint32_t)(EAX));
  /* 116efbcd push eax */
  push32((uint32_t)(EAX));
  /* 116efbce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116efbd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116efbd4:;
  /* 116efbd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116efbd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efbd8 je 0x116efbe1 */
  if (C.zf) goto L_116efbe1;
  /* 116efbda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116efbdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x116efbdb");
  /* 116efbdf jmp 0x116efbd4 */
  goto L_116efbd4;
L_116efbe1:;
  /* 116efbe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_116efbe4:;
  /* 116efbe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116efbe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116efbe8 je 0x116efbf4 */
  if (C.zf) goto L_116efbf4;
  /* 116efbea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116efbeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x116efbeb");
  /* 116efbef jae 0x116efbe4 */
  if (!C.cf) goto L_116efbe4;
  /* 116efbf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_116efbf4:;
  /* 116efbf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efbf7 pop esi */
  ESI = (pop32());
  /* 116efbf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116efbf9 ret  */
  ESPCHK(0x116efbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x116efc00 (512 bytes, 147 insns) */
void f_116efc00(void) {
  FTRACE(0x116efc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efc00 push ebp */
  push32((uint32_t)(EBP));
  /* 116efc01 mov ebp, esp */
  EBP = (ESP);
  /* 116efc03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116efc06 cmp dword ptr [0x1170f8bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efc0d jne 0x116efc32 */
  if (!C.zf) goto L_116efc32;
  /* 116efc0f call 0x116f06d0 */
  push32(0x116efc14u); f_116f06d0();
  /* 116efc14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116efc16 je 0x116efc22 */
  if (C.zf) goto L_116efc22;
  /* 116efc18 mov eax, dword ptr [0x117122c4] */
  EAX = (r32((uint32_t)(0x117122c4)));
  /* 116efc1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116efc20 jmp 0x116efc29 */
  goto L_116efc29;
L_116efc22:;
  /* 116efc22 mov dword ptr [ebp - 8], 0x116f0720 */
  w32((uint32_t)(EBP + -0x8), (0x116f0720u));
L_116efc29:;
  /* 116efc29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116efc2c mov dword ptr [0x1170f8bc], ecx */
  w32((uint32_t)(0x1170f8bc), (ECX));
L_116efc32:;
  /* 116efc32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efc36 jne 0x116efc42 */
  if (!C.zf) goto L_116efc42;
  /* 116efc38 call 0x116f0520 */
  push32(0x116efc3du); f_116f0520();
  /* 116efc3d jmp 0x116efd0e */
  goto L_116efd0e;
L_116efc42:;
  /* 116efc42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116efc45 mov dword ptr [0x1170f8ac], edx */
  w32((uint32_t)(0x1170f8ac), (EDX));
  /* 116efc4b cmp dword ptr [0x1170f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efc52 je 0x116efc74 */
  if (C.zf) goto L_116efc74;
  /* 116efc54 mov eax, dword ptr [0x1170f8ac] */
  EAX = (r32((uint32_t)(0x1170f8ac)));
  /* 116efc59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116efc5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116efc5e je 0x116efc74 */
  if (C.zf) goto L_116efc74;
  /* 116efc60 push 0x1170f8ac */
  push32((uint32_t)(0x1170f8acu));
  /* 116efc65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116efc67 push 0x1170ea90 */
  push32((uint32_t)(0x1170ea90u));
  /* 116efc6c call 0x116efe00 */
  push32(0x116efc71u); f_116efe00();
  /* 116efc71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116efc74:;
  /* 116efc74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116efc77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efc7a mov dword ptr [0x1170f8b0], edx */
  w32((uint32_t)(0x1170f8b0), (EDX));
  /* 116efc80 cmp dword ptr [0x1170f8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efc87 je 0x116efca9 */
  if (C.zf) goto L_116efca9;
  /* 116efc89 mov eax, dword ptr [0x1170f8b0] */
  EAX = (r32((uint32_t)(0x1170f8b0)));
  /* 116efc8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116efc91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116efc93 je 0x116efca9 */
  if (C.zf) goto L_116efca9;
  /* 116efc95 push 0x1170f8b0 */
  push32((uint32_t)(0x1170f8b0u));
  /* 116efc9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116efc9c push 0x1170e9d8 */
  push32((uint32_t)(0x1170e9d8u));
  /* 116efca1 call 0x116efe00 */
  push32(0x116efca6u); f_116efe00();
  /* 116efca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116efca9:;
  /* 116efca9 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
  /* 116efcb3 cmp dword ptr [0x1170f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efcba je 0x116efced */
  if (C.zf) goto L_116efced;
  /* 116efcbc mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116efcc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116efcc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116efcc7 je 0x116efced */
  if (C.zf) goto L_116efced;
  /* 116efcc9 cmp dword ptr [0x1170f8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efcd0 je 0x116efce6 */
  if (C.zf) goto L_116efce6;
  /* 116efcd2 mov ecx, dword ptr [0x1170f8b0] */
  ECX = (r32((uint32_t)(0x1170f8b0)));
  /* 116efcd8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116efcdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116efcdd je 0x116efce6 */
  if (C.zf) goto L_116efce6;
  /* 116efcdf call 0x116efe90 */
  push32(0x116efce4u); f_116efe90();
  /* 116efce4 jmp 0x116efceb */
  goto L_116efceb;
L_116efce6:;
  /* 116efce6 call 0x116f0280 */
  push32(0x116efcebu); f_116f0280();
L_116efceb:;
  /* 116efceb jmp 0x116efd0e */
  goto L_116efd0e;
L_116efced:;
  /* 116efced cmp dword ptr [0x1170f8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efcf4 je 0x116efd09 */
  if (C.zf) goto L_116efd09;
  /* 116efcf6 mov eax, dword ptr [0x1170f8b0] */
  EAX = (r32((uint32_t)(0x1170f8b0)));
  /* 116efcfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116efcfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116efd00 je 0x116efd09 */
  if (C.zf) goto L_116efd09;
  /* 116efd02 call 0x116f0420 */
  push32(0x116efd07u); f_116f0420();
  /* 116efd07 jmp 0x116efd0e */
  goto L_116efd0e;
L_116efd09:;
  /* 116efd09 call 0x116f0520 */
  push32(0x116efd0eu); f_116f0520();
L_116efd0e:;
  /* 116efd0e cmp dword ptr [0x1170f8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efd15 jne 0x116efd1e */
  if (!C.zf) goto L_116efd1e;
  /* 116efd17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efd19 jmp 0x116efdfc */
  goto L_116efdfc;
L_116efd1e:;
  /* 116efd1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116efd21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efd27 push edx */
  push32((uint32_t)(EDX));
  /* 116efd28 call 0x116f0550 */
  push32(0x116efd2du); f_116f0550();
  /* 116efd2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efd30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116efd33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efd37 je 0x116efd4c */
  if (C.zf) goto L_116efd4c;
  /* 116efd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efd3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116efd41 push eax */
  push32((uint32_t)(EAX));
  /* 116efd42 call dword ptr [0x117122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122c8))), 0x116efd48u);
  /* 116efd48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116efd4a jne 0x116efd53 */
  if (!C.zf) goto L_116efd53;
L_116efd4c:;
  /* 116efd4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efd4e jmp 0x116efdfc */
  goto L_116efdfc;
L_116efd53:;
  /* 116efd53 push 1 */
  push32((uint32_t)(0x1u));
  /* 116efd55 mov ecx, dword ptr [0x1170f89c] */
  ECX = (r32((uint32_t)(0x1170f89c)));
  /* 116efd5b push ecx */
  push32((uint32_t)(ECX));
  /* 116efd5c call dword ptr [0x117122d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122d8))), 0x116efd62u);
  /* 116efd62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116efd64 jne 0x116efd6d */
  if (!C.zf) goto L_116efd6d;
  /* 116efd66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efd68 jmp 0x116efdfc */
  goto L_116efdfc;
L_116efd6d:;
  /* 116efd6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efd71 je 0x116efd98 */
  if (C.zf) goto L_116efd98;
  /* 116efd73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116efd76 mov ax, word ptr [0x1170f89c] */
  AX = (r16((uint32_t)(0x1170f89c)));
  /* 116efd7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 116efd7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116efd82 mov dx, word ptr [0x1170f8b8] */
  DX = (r16((uint32_t)(0x1170f8b8)));
  /* 116efd89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 116efd8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116efd90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116efd94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_116efd98:;
  /* 116efd98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efd9c je 0x116efdf7 */
  if (C.zf) goto L_116efdf7;
  /* 116efd9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116efda0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116efda3 push edx */
  push32((uint32_t)(EDX));
  /* 116efda4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 116efda9 mov eax, dword ptr [0x1170f89c] */
  EAX = (r32((uint32_t)(0x1170f89c)));
  /* 116efdae push eax */
  push32((uint32_t)(EAX));
  /* 116efdaf call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116efdb5u);
  /* 116efdb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116efdb7 jne 0x116efdbd */
  if (!C.zf) goto L_116efdbd;
  /* 116efdb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efdbb jmp 0x116efdfc */
  goto L_116efdfc;
L_116efdbd:;
  /* 116efdbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116efdbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116efdc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efdc5 push ecx */
  push32((uint32_t)(ECX));
  /* 116efdc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 116efdcb mov edx, dword ptr [0x1170f8b8] */
  EDX = (r32((uint32_t)(0x1170f8b8)));
  /* 116efdd1 push edx */
  push32((uint32_t)(EDX));
  /* 116efdd2 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116efdd8u);
  /* 116efdd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116efdda jne 0x116efde0 */
  if (!C.zf) goto L_116efde0;
  /* 116efddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116efdde jmp 0x116efdfc */
  goto L_116efdfc;
L_116efde0:;
  /* 116efde0 push 0xa */
  push32((uint32_t)(0xau));
  /* 116efde2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116efde5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efdea push eax */
  push32((uint32_t)(EAX));
  /* 116efdeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efdee push ecx */
  push32((uint32_t)(ECX));
  /* 116efdef call 0x116e6960 */
  push32(0x116efdf4u); f_116e6960();
  /* 116efdf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116efdf7:;
  /* 116efdf7 mov eax, 1 */
  EAX = (0x1u);
L_116efdfc:;
  /* 116efdfc mov esp, ebp */
  ESP = (EBP);
  /* 116efdfe pop ebp */
  EBP = (pop32());
  /* 116efdff ret  */
  ESPCHK(0x116efc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe00 @ 0x116efe00 (130 bytes, 47 insns) */
void f_116efe00(void) {
  FTRACE(0x116efe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efe00 push ebp */
  push32((uint32_t)(EBP));
  /* 116efe01 mov ebp, esp */
  EBP = (ESP);
  /* 116efe03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116efe06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116efe0d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116efe14:;
  /* 116efe14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116efe17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efe1a jg 0x116efe7e */
  if ((!C.zf&&C.sf==C.of)) goto L_116efe7e;
  /* 116efe1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efe20 je 0x116efe7e */
  if (C.zf) goto L_116efe7e;
  /* 116efe22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116efe25 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efe28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116efe29 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116efe2b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116efe2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116efe30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efe33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116efe36 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 116efe39 push eax */
  push32((uint32_t)(EAX));
  /* 116efe3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116efe3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116efe3f push edx */
  push32((uint32_t)(EDX));
  /* 116efe40 call 0x116f24f0 */
  push32(0x116efe45u); f_116f24f0();
  /* 116efe45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efe48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116efe4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efe4f jne 0x116efe62 */
  if (!C.zf) goto L_116efe62;
  /* 116efe51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efe54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116efe57 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 116efe5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116efe5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116efe60 jmp 0x116efe7c */
  goto L_116efe7c;
L_116efe62:;
  /* 116efe62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efe66 jge 0x116efe73 */
  if ((C.sf==C.of)) goto L_116efe73;
  /* 116efe68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efe6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116efe6e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116efe71 jmp 0x116efe7c */
  goto L_116efe7c;
L_116efe73:;
  /* 116efe73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efe76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116efe79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116efe7c:;
  /* 116efe7c jmp 0x116efe14 */
  goto L_116efe14;
L_116efe7e:;
  /* 116efe7e mov esp, ebp */
  ESP = (EBP);
  /* 116efe80 pop ebp */
  EBP = (pop32());
  /* 116efe81 ret  */
  ESPCHK(0x116efe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x116efe90 (186 bytes, 50 insns) */
void f_116efe90(void) {
  FTRACE(0x116efe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116efe90 push ebp */
  push32((uint32_t)(EBP));
  /* 116efe91 mov ebp, esp */
  EBP = (ESP);
  /* 116efe93 push ecx */
  push32((uint32_t)(ECX));
  /* 116efe94 mov eax, dword ptr [0x1170f8ac] */
  EAX = (r32((uint32_t)(0x1170f8ac)));
  /* 116efe99 push eax */
  push32((uint32_t)(EAX));
  /* 116efe9a call 0x116e6c50 */
  push32(0x116efe9fu); f_116e6c50();
  /* 116efe9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116efea4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efea7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116efeaa mov dword ptr [0x1170f8a8], ecx */
  w32((uint32_t)(0x1170f8a8), (ECX));
  /* 116efeb0 mov edx, dword ptr [0x1170f8b0] */
  EDX = (r32((uint32_t)(0x1170f8b0)));
  /* 116efeb6 push edx */
  push32((uint32_t)(EDX));
  /* 116efeb7 call 0x116e6c50 */
  push32(0x116efebcu); f_116e6c50();
  /* 116efebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116efec1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efec4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116efec7 mov dword ptr [0x1170f8a0], ecx */
  w32((uint32_t)(0x1170f8a0), (ECX));
  /* 116efecd mov dword ptr [0x1170f89c], 0 */
  w32((uint32_t)(0x1170f89c), (0x0u));
  /* 116efed7 cmp dword ptr [0x1170f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116efede je 0x116efee9 */
  if (C.zf) goto L_116efee9;
  /* 116efee0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116efee7 jmp 0x116efefb */
  goto L_116efefb;
L_116efee9:;
  /* 116efee9 mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116efeef push edx */
  push32((uint32_t)(EDX));
  /* 116efef0 call 0x116f0930 */
  push32(0x116efef5u); f_116f0930();
  /* 116efef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116efef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116efefb:;
  /* 116efefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116efefe mov dword ptr [0x1170f8a4], eax */
  w32((uint32_t)(0x1170f8a4), (EAX));
  /* 116eff03 push 1 */
  push32((uint32_t)(0x1u));
  /* 116eff05 push 0x116eff50 */
  push32((uint32_t)(0x116eff50u));
  /* 116eff0a call dword ptr [0x117122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122cc))), 0x116eff10u);
  /* 116eff10 mov ecx, dword ptr [0x1170f8b4] */
  ECX = (r32((uint32_t)(0x1170f8b4)));
  /* 116eff16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 116eff1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116eff1e je 0x116eff3c */
  if (C.zf) goto L_116eff3c;
  /* 116eff20 mov edx, dword ptr [0x1170f8b4] */
  EDX = (r32((uint32_t)(0x1170f8b4)));
  /* 116eff26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 116eff2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116eff2e je 0x116eff3c */
  if (C.zf) goto L_116eff3c;
  /* 116eff30 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116eff35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 116eff38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eff3a jne 0x116eff46 */
  if (!C.zf) goto L_116eff46;
L_116eff3c:;
  /* 116eff3c mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
L_116eff46:;
  /* 116eff46 mov esp, ebp */
  ESP = (EBP);
  /* 116eff48 pop ebp */
  EBP = (pop32());
  /* 116eff49 ret  */
  ESPCHK(0x116efe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x116eff50 (804 bytes, 220 insns) */
void f_116eff50(void) {
  FTRACE(0x116eff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116eff50 push ebp */
  push32((uint32_t)(EBP));
  /* 116eff51 mov ebp, esp */
  EBP = (ESP);
  /* 116eff53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eff56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116eff59 push eax */
  push32((uint32_t)(EAX));
  /* 116eff5a call 0x116f08b0 */
  push32(0x116eff5fu); f_116f08b0();
  /* 116eff5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116eff62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116eff65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116eff67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116eff6a push ecx */
  push32((uint32_t)(ECX));
  /* 116eff6b mov edx, dword ptr [0x1170f8a0] */
  EDX = (r32((uint32_t)(0x1170f8a0)));
  /* 116eff71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116eff73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116eff75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 116eff7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116eff81 push edx */
  push32((uint32_t)(EDX));
  /* 116eff82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116eff85 push eax */
  push32((uint32_t)(EAX));
  /* 116eff86 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116eff8cu);
  /* 116eff8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116eff8e jne 0x116effa4 */
  if (!C.zf) goto L_116effa4;
  /* 116eff90 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
  /* 116eff9a mov eax, 1 */
  EAX = (0x1u);
  /* 116eff9f jmp 0x116f026e */
  goto L_116f026e;
L_116effa4:;
  /* 116effa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116effa7 push ecx */
  push32((uint32_t)(ECX));
  /* 116effa8 mov edx, dword ptr [0x1170f8b0] */
  EDX = (r32((uint32_t)(0x1170f8b0)));
  /* 116effae push edx */
  push32((uint32_t)(EDX));
  /* 116effaf call 0x116f24f0 */
  push32(0x116effb4u); f_116f24f0();
  /* 116effb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116effb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116effb9 jne 0x116f00df */
  if (!C.zf) goto L_116f00df;
  /* 116effbf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116effc1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116effc4 push eax */
  push32((uint32_t)(EAX));
  /* 116effc5 mov ecx, dword ptr [0x1170f8a8] */
  ECX = (r32((uint32_t)(0x1170f8a8)));
  /* 116effcb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116effcd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116effcf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 116effd5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116effdb push ecx */
  push32((uint32_t)(ECX));
  /* 116effdc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116effdf push edx */
  push32((uint32_t)(EDX));
  /* 116effe0 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116effe6u);
  /* 116effe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116effe8 jne 0x116efffe */
  if (!C.zf) goto L_116efffe;
  /* 116effea mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
  /* 116efff4 mov eax, 1 */
  EAX = (0x1u);
  /* 116efff9 jmp 0x116f026e */
  goto L_116f026e;
L_116efffe:;
  /* 116efffe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116f0001 push eax */
  push32((uint32_t)(EAX));
  /* 116f0002 mov ecx, dword ptr [0x1170f8ac] */
  ECX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f0008 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0009 call 0x116f24f0 */
  push32(0x116f000eu); f_116f24f0();
  /* 116f000e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0013 jne 0x116f0040 */
  if (!C.zf) goto L_116f0040;
  /* 116f0015 mov edx, dword ptr [0x1170f8b4] */
  EDX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f001b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 116f0021 mov dword ptr [0x1170f8b4], edx */
  w32((uint32_t)(0x1170f8b4), (EDX));
  /* 116f0027 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f002a mov dword ptr [0x1170f8b8], eax */
  w32((uint32_t)(0x1170f8b8), (EAX));
  /* 116f002f mov ecx, dword ptr [0x1170f8b8] */
  ECX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f0035 mov dword ptr [0x1170f89c], ecx */
  w32((uint32_t)(0x1170f89c), (ECX));
  /* 116f003b jmp 0x116f00df */
  goto L_116f00df;
L_116f0040:;
  /* 116f0040 mov edx, dword ptr [0x1170f8b4] */
  EDX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0046 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116f0049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f004b jne 0x116f00df */
  if (!C.zf) goto L_116f00df;
  /* 116f0051 cmp dword ptr [0x1170f8a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0058 je 0x116f00ad */
  if (C.zf) goto L_116f00ad;
  /* 116f005a mov eax, dword ptr [0x1170f8a4] */
  EAX = (r32((uint32_t)(0x1170f8a4)));
  /* 116f005f push eax */
  push32((uint32_t)(EAX));
  /* 116f0060 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116f0063 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0064 mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f006a push edx */
  push32((uint32_t)(EDX));
  /* 116f006b call 0x116f25c0 */
  push32(0x116f0070u); f_116f25c0();
  /* 116f0070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0075 jne 0x116f00ad */
  if (!C.zf) goto L_116f00ad;
  /* 116f0077 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f007c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 116f007e mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
  /* 116f0083 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0086 mov dword ptr [0x1170f8b8], ecx */
  w32((uint32_t)(0x1170f8b8), (ECX));
  /* 116f008c mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f0092 push edx */
  push32((uint32_t)(EDX));
  /* 116f0093 call 0x116e6c50 */
  push32(0x116f0098u); f_116e6c50();
  /* 116f0098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f009b cmp eax, dword ptr [0x1170f8a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170f8a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f00a1 jne 0x116f00ab */
  if (!C.zf) goto L_116f00ab;
  /* 116f00a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f00a6 mov dword ptr [0x1170f89c], eax */
  w32((uint32_t)(0x1170f89c), (EAX));
L_116f00ab:;
  /* 116f00ab jmp 0x116f00df */
  goto L_116f00df;
L_116f00ad:;
  /* 116f00ad mov ecx, dword ptr [0x1170f8b4] */
  ECX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f00b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116f00b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f00b8 jne 0x116f00df */
  if (!C.zf) goto L_116f00df;
  /* 116f00ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f00bd push edx */
  push32((uint32_t)(EDX));
  /* 116f00be call 0x116f05f0 */
  push32(0x116f00c3u); f_116f05f0();
  /* 116f00c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f00c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f00c8 je 0x116f00df */
  if (C.zf) goto L_116f00df;
  /* 116f00ca mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f00cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116f00d1 mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
  /* 116f00d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f00d9 mov dword ptr [0x1170f8b8], ecx */
  w32((uint32_t)(0x1170f8b8), (ECX));
L_116f00df:;
  /* 116f00df mov edx, dword ptr [0x1170f8b4] */
  EDX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f00e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 116f00eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f00f1 je 0x116f0261 */
  if (C.zf) goto L_116f0261;
  /* 116f00f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116f00f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116f00fc push eax */
  push32((uint32_t)(EAX));
  /* 116f00fd mov ecx, dword ptr [0x1170f8a8] */
  ECX = (r32((uint32_t)(0x1170f8a8)));
  /* 116f0103 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f0105 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0107 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 116f010d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0113 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0114 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0117 push edx */
  push32((uint32_t)(EDX));
  /* 116f0118 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116f011eu);
  /* 116f011e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0120 jne 0x116f0136 */
  if (!C.zf) goto L_116f0136;
  /* 116f0122 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
  /* 116f012c mov eax, 1 */
  EAX = (0x1u);
  /* 116f0131 jmp 0x116f026e */
  goto L_116f026e;
L_116f0136:;
  /* 116f0136 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116f0139 push eax */
  push32((uint32_t)(EAX));
  /* 116f013a mov ecx, dword ptr [0x1170f8ac] */
  ECX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f0140 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0141 call 0x116f24f0 */
  push32(0x116f0146u); f_116f24f0();
  /* 116f0146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f014b jne 0x116f0200 */
  if (!C.zf) goto L_116f0200;
  /* 116f0151 mov edx, dword ptr [0x1170f8b4] */
  EDX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0157 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116f015a mov dword ptr [0x1170f8b4], edx */
  w32((uint32_t)(0x1170f8b4), (EDX));
  /* 116f0160 cmp dword ptr [0x1170f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0167 je 0x116f018a */
  if (C.zf) goto L_116f018a;
  /* 116f0169 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f016e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116f0171 mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
  /* 116f0176 cmp dword ptr [0x1170f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f017d jne 0x116f0188 */
  if (!C.zf) goto L_116f0188;
  /* 116f017f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0182 mov dword ptr [0x1170f89c], ecx */
  w32((uint32_t)(0x1170f89c), (ECX));
L_116f0188:;
  /* 116f0188 jmp 0x116f01fe */
  goto L_116f01fe;
L_116f018a:;
  /* 116f018a cmp dword ptr [0x1170f8a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0191 je 0x116f01df */
  if (C.zf) goto L_116f01df;
  /* 116f0193 mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f0199 push edx */
  push32((uint32_t)(EDX));
  /* 116f019a call 0x116e6c50 */
  push32(0x116f019fu); f_116e6c50();
  /* 116f019f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f01a2 cmp eax, dword ptr [0x1170f8a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170f8a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f01a8 jne 0x116f01df */
  if (!C.zf) goto L_116f01df;
  /* 116f01aa push 1 */
  push32((uint32_t)(0x1u));
  /* 116f01ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f01af push eax */
  push32((uint32_t)(EAX));
  /* 116f01b0 call 0x116f0640 */
  push32(0x116f01b5u); f_116f0640();
  /* 116f01b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f01b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f01ba je 0x116f01dd */
  if (C.zf) goto L_116f01dd;
  /* 116f01bc mov ecx, dword ptr [0x1170f8b4] */
  ECX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f01c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116f01c5 mov dword ptr [0x1170f8b4], ecx */
  w32((uint32_t)(0x1170f8b4), (ECX));
  /* 116f01cb cmp dword ptr [0x1170f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f01d2 jne 0x116f01dd */
  if (!C.zf) goto L_116f01dd;
  /* 116f01d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f01d7 mov dword ptr [0x1170f89c], edx */
  w32((uint32_t)(0x1170f89c), (EDX));
L_116f01dd:;
  /* 116f01dd jmp 0x116f01fe */
  goto L_116f01fe;
L_116f01df:;
  /* 116f01df mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f01e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116f01e7 mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
  /* 116f01ec cmp dword ptr [0x1170f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f01f3 jne 0x116f01fe */
  if (!C.zf) goto L_116f01fe;
  /* 116f01f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f01f8 mov dword ptr [0x1170f89c], ecx */
  w32((uint32_t)(0x1170f89c), (ECX));
L_116f01fe:;
  /* 116f01fe jmp 0x116f0261 */
  goto L_116f0261;
L_116f0200:;
  /* 116f0200 cmp dword ptr [0x1170f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0207 jne 0x116f0261 */
  if (!C.zf) goto L_116f0261;
  /* 116f0209 cmp dword ptr [0x1170f8a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0210 je 0x116f0261 */
  if (C.zf) goto L_116f0261;
  /* 116f0212 mov edx, dword ptr [0x1170f8a4] */
  EDX = (r32((uint32_t)(0x1170f8a4)));
  /* 116f0218 push edx */
  push32((uint32_t)(EDX));
  /* 116f0219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116f021c push eax */
  push32((uint32_t)(EAX));
  /* 116f021d mov ecx, dword ptr [0x1170f8ac] */
  ECX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f0223 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0224 call 0x116f25c0 */
  push32(0x116f0229u); f_116f25c0();
  /* 116f0229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f022c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f022e jne 0x116f0261 */
  if (!C.zf) goto L_116f0261;
  /* 116f0230 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f0232 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0235 push edx */
  push32((uint32_t)(EDX));
  /* 116f0236 call 0x116f0640 */
  push32(0x116f023bu); f_116f0640();
  /* 116f023b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f023e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0240 je 0x116f0261 */
  if (C.zf) goto L_116f0261;
  /* 116f0242 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0247 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116f024a mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
  /* 116f024f cmp dword ptr [0x1170f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0256 jne 0x116f0261 */
  if (!C.zf) goto L_116f0261;
  /* 116f0258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f025b mov dword ptr [0x1170f89c], ecx */
  w32((uint32_t)(0x1170f89c), (ECX));
L_116f0261:;
  /* 116f0261 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116f0269 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f026b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f026d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116f026e:;
  /* 116f026e mov esp, ebp */
  ESP = (EBP);
  /* 116f0270 pop ebp */
  EBP = (pop32());
  /* 116f0271 ret 4 */
  ESPCHK(0x116eff50u, _esp0);
  ESP += 8; return;
}

/* FUN_10010280 @ 0x116f0280 (116 bytes, 33 insns) */
void f_116f0280(void) {
  FTRACE(0x116f0280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0280 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0281 mov ebp, esp */
  EBP = (ESP);
  /* 116f0283 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0284 mov eax, dword ptr [0x1170f8ac] */
  EAX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f0289 push eax */
  push32((uint32_t)(EAX));
  /* 116f028a call 0x116e6c50 */
  push32(0x116f028fu); f_116e6c50();
  /* 116f028f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f0294 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0297 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116f029a mov dword ptr [0x1170f8a8], ecx */
  w32((uint32_t)(0x1170f8a8), (ECX));
  /* 116f02a0 cmp dword ptr [0x1170f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f02a7 je 0x116f02b2 */
  if (C.zf) goto L_116f02b2;
  /* 116f02a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116f02b0 jmp 0x116f02c4 */
  goto L_116f02c4;
L_116f02b2:;
  /* 116f02b2 mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f02b8 push edx */
  push32((uint32_t)(EDX));
  /* 116f02b9 call 0x116f0930 */
  push32(0x116f02beu); f_116f0930();
  /* 116f02be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f02c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116f02c4:;
  /* 116f02c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116f02c7 mov dword ptr [0x1170f8a4], eax */
  w32((uint32_t)(0x1170f8a4), (EAX));
  /* 116f02cc push 1 */
  push32((uint32_t)(0x1u));
  /* 116f02ce push 0x116f0300 */
  push32((uint32_t)(0x116f0300u));
  /* 116f02d3 call dword ptr [0x117122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122cc))), 0x116f02d9u);
  /* 116f02d9 mov ecx, dword ptr [0x1170f8b4] */
  ECX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f02df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116f02e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f02e4 jne 0x116f02f0 */
  if (!C.zf) goto L_116f02f0;
  /* 116f02e6 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
L_116f02f0:;
  /* 116f02f0 mov esp, ebp */
  ESP = (EBP);
  /* 116f02f2 pop ebp */
  EBP = (pop32());
  /* 116f02f3 ret  */
  ESPCHK(0x116f0280u, _esp0);
  ESP += 4; return;
}

/* FUN_10010300 @ 0x116f0300 (287 bytes, 86 insns) */
void f_116f0300(void) {
  FTRACE(0x116f0300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0300 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0301 mov ebp, esp */
  EBP = (ESP);
  /* 116f0303 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0309 push eax */
  push32((uint32_t)(EAX));
  /* 116f030a call 0x116f08b0 */
  push32(0x116f030fu); f_116f08b0();
  /* 116f030f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0312 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116f0315 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116f0317 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116f031a push ecx */
  push32((uint32_t)(ECX));
  /* 116f031b mov edx, dword ptr [0x1170f8a8] */
  EDX = (r32((uint32_t)(0x1170f8a8)));
  /* 116f0321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f0323 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0325 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 116f032b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0331 push edx */
  push32((uint32_t)(EDX));
  /* 116f0332 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0335 push eax */
  push32((uint32_t)(EAX));
  /* 116f0336 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116f033cu);
  /* 116f033c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f033e jne 0x116f0354 */
  if (!C.zf) goto L_116f0354;
  /* 116f0340 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
  /* 116f034a mov eax, 1 */
  EAX = (0x1u);
  /* 116f034f jmp 0x116f0419 */
  goto L_116f0419;
L_116f0354:;
  /* 116f0354 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116f0357 push ecx */
  push32((uint32_t)(ECX));
  /* 116f0358 mov edx, dword ptr [0x1170f8ac] */
  EDX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f035e push edx */
  push32((uint32_t)(EDX));
  /* 116f035f call 0x116f24f0 */
  push32(0x116f0364u); f_116f24f0();
  /* 116f0364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0369 jne 0x116f03a9 */
  if (!C.zf) goto L_116f03a9;
  /* 116f036b cmp dword ptr [0x1170f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0372 jne 0x116f0386 */
  if (!C.zf) goto L_116f0386;
  /* 116f0374 push 1 */
  push32((uint32_t)(0x1u));
  /* 116f0376 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0379 push eax */
  push32((uint32_t)(EAX));
  /* 116f037a call 0x116f0640 */
  push32(0x116f037fu); f_116f0640();
  /* 116f037f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0384 je 0x116f03a7 */
  if (C.zf) goto L_116f03a7;
L_116f0386:;
  /* 116f0386 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f0389 mov dword ptr [0x1170f8b8], ecx */
  w32((uint32_t)(0x1170f8b8), (ECX));
  /* 116f038f mov edx, dword ptr [0x1170f8b8] */
  EDX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f0395 mov dword ptr [0x1170f89c], edx */
  w32((uint32_t)(0x1170f89c), (EDX));
  /* 116f039b mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f03a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116f03a2 mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
L_116f03a7:;
  /* 116f03a7 jmp 0x116f040c */
  goto L_116f040c;
L_116f03a9:;
  /* 116f03a9 cmp dword ptr [0x1170f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f03b0 jne 0x116f040c */
  if (!C.zf) goto L_116f040c;
  /* 116f03b2 cmp dword ptr [0x1170f8a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f8a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f03b9 je 0x116f040c */
  if (C.zf) goto L_116f040c;
  /* 116f03bb mov ecx, dword ptr [0x1170f8a4] */
  ECX = (r32((uint32_t)(0x1170f8a4)));
  /* 116f03c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116f03c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 116f03c5 push edx */
  push32((uint32_t)(EDX));
  /* 116f03c6 mov eax, dword ptr [0x1170f8ac] */
  EAX = (r32((uint32_t)(0x1170f8ac)));
  /* 116f03cb push eax */
  push32((uint32_t)(EAX));
  /* 116f03cc call 0x116f25c0 */
  push32(0x116f03d1u); f_116f25c0();
  /* 116f03d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f03d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f03d6 jne 0x116f040c */
  if (!C.zf) goto L_116f040c;
  /* 116f03d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116f03da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f03dd push ecx */
  push32((uint32_t)(ECX));
  /* 116f03de call 0x116f0640 */
  push32(0x116f03e3u); f_116f0640();
  /* 116f03e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f03e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f03e8 je 0x116f040c */
  if (C.zf) goto L_116f040c;
  /* 116f03ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f03ed mov dword ptr [0x1170f8b8], edx */
  w32((uint32_t)(0x1170f8b8), (EDX));
  /* 116f03f3 mov eax, dword ptr [0x1170f8b8] */
  EAX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f03f8 mov dword ptr [0x1170f89c], eax */
  w32((uint32_t)(0x1170f89c), (EAX));
  /* 116f03fd mov ecx, dword ptr [0x1170f8b4] */
  ECX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0403 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116f0406 mov dword ptr [0x1170f8b4], ecx */
  w32((uint32_t)(0x1170f8b4), (ECX));
L_116f040c:;
  /* 116f040c mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116f0414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f0416 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0418 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116f0419:;
  /* 116f0419 mov esp, ebp */
  ESP = (EBP);
  /* 116f041b pop ebp */
  EBP = (pop32());
  /* 116f041c ret 4 */
  ESPCHK(0x116f0300u, _esp0);
  ESP += 8; return;
}

/* FUN_10010420 @ 0x116f0420 (69 bytes, 20 insns) */
void f_116f0420(void) {
  FTRACE(0x116f0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0420 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0421 mov ebp, esp */
  EBP = (ESP);
  /* 116f0423 mov eax, dword ptr [0x1170f8b0] */
  EAX = (r32((uint32_t)(0x1170f8b0)));
  /* 116f0428 push eax */
  push32((uint32_t)(EAX));
  /* 116f0429 call 0x116e6c50 */
  push32(0x116f042eu); f_116e6c50();
  /* 116f042e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116f0433 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f0436 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116f0439 mov dword ptr [0x1170f8a0], ecx */
  w32((uint32_t)(0x1170f8a0), (ECX));
  /* 116f043f push 1 */
  push32((uint32_t)(0x1u));
  /* 116f0441 push 0x116f0470 */
  push32((uint32_t)(0x116f0470u));
  /* 116f0446 call dword ptr [0x117122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122cc))), 0x116f044cu);
  /* 116f044c mov edx, dword ptr [0x1170f8b4] */
  EDX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0452 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116f0455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116f0457 jne 0x116f0463 */
  if (!C.zf) goto L_116f0463;
  /* 116f0459 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
L_116f0463:;
  /* 116f0463 pop ebp */
  EBP = (pop32());
  /* 116f0464 ret  */
  ESPCHK(0x116f0420u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x116f0470 (172 bytes, 54 insns) */
void f_116f0470(void) {
  FTRACE(0x116f0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0470 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0471 mov ebp, esp */
  EBP = (ESP);
  /* 116f0473 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f0479 push eax */
  push32((uint32_t)(EAX));
  /* 116f047a call 0x116f08b0 */
  push32(0x116f047fu); f_116f08b0();
  /* 116f047f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0482 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116f0485 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116f0487 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116f048a push ecx */
  push32((uint32_t)(ECX));
  /* 116f048b mov edx, dword ptr [0x1170f8a0] */
  EDX = (r32((uint32_t)(0x1170f8a0)));
  /* 116f0491 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f0493 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0495 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 116f049b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116f04a1 push edx */
  push32((uint32_t)(EDX));
  /* 116f04a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f04a5 push eax */
  push32((uint32_t)(EAX));
  /* 116f04a6 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116f04acu);
  /* 116f04ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f04ae jne 0x116f04c1 */
  if (!C.zf) goto L_116f04c1;
  /* 116f04b0 mov dword ptr [0x1170f8b4], 0 */
  w32((uint32_t)(0x1170f8b4), (0x0u));
  /* 116f04ba mov eax, 1 */
  EAX = (0x1u);
  /* 116f04bf jmp 0x116f0516 */
  goto L_116f0516;
L_116f04c1:;
  /* 116f04c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116f04c4 push ecx */
  push32((uint32_t)(ECX));
  /* 116f04c5 mov edx, dword ptr [0x1170f8b0] */
  EDX = (r32((uint32_t)(0x1170f8b0)));
  /* 116f04cb push edx */
  push32((uint32_t)(EDX));
  /* 116f04cc call 0x116f24f0 */
  push32(0x116f04d1u); f_116f24f0();
  /* 116f04d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f04d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f04d6 jne 0x116f0509 */
  if (!C.zf) goto L_116f0509;
  /* 116f04d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f04db push eax */
  push32((uint32_t)(EAX));
  /* 116f04dc call 0x116f05f0 */
  push32(0x116f04e1u); f_116f05f0();
  /* 116f04e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f04e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f04e6 je 0x116f0509 */
  if (C.zf) goto L_116f0509;
  /* 116f04e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116f04eb mov dword ptr [0x1170f8b8], ecx */
  w32((uint32_t)(0x1170f8b8), (ECX));
  /* 116f04f1 mov edx, dword ptr [0x1170f8b8] */
  EDX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f04f7 mov dword ptr [0x1170f89c], edx */
  w32((uint32_t)(0x1170f89c), (EDX));
  /* 116f04fd mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0502 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116f0504 mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
L_116f0509:;
  /* 116f0509 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f050e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116f0511 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116f0513 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0515 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116f0516:;
  /* 116f0516 mov esp, ebp */
  ESP = (EBP);
  /* 116f0518 pop ebp */
  EBP = (pop32());
  /* 116f0519 ret 4 */
  ESPCHK(0x116f0470u, _esp0);
  ESP += 8; return;
}

/* FUN_10010520 @ 0x116f0520 (43 bytes, 11 insns) */
void f_116f0520(void) {
  FTRACE(0x116f0520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0520 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0521 mov ebp, esp */
  EBP = (ESP);
  /* 116f0523 mov eax, dword ptr [0x1170f8b4] */
  EAX = (r32((uint32_t)(0x1170f8b4)));
  /* 116f0528 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 116f052d mov dword ptr [0x1170f8b4], eax */
  w32((uint32_t)(0x1170f8b4), (EAX));
  /* 116f0532 call dword ptr [0x117122bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122bc))), 0x116f0538u);
  /* 116f0538 mov dword ptr [0x1170f8b8], eax */
  w32((uint32_t)(0x1170f8b8), (EAX));
  /* 116f053d mov ecx, dword ptr [0x1170f8b8] */
  ECX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f0543 mov dword ptr [0x1170f89c], ecx */
  w32((uint32_t)(0x1170f89c), (ECX));
  /* 116f0549 pop ebp */
  EBP = (pop32());
  /* 116f054a ret  */
  ESPCHK(0x116f0520u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x116f0550 (155 bytes, 57 insns) */
void f_116f0550(void) {
  FTRACE(0x116f0550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116f0550 push ebp */
  push32((uint32_t)(EBP));
  /* 116f0551 mov ebp, esp */
  EBP = (ESP);
  /* 116f0553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116f0556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116f055a je 0x116f057b */
  if (C.zf) goto L_116f057b;
  /* 116f055c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f055f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116f0562 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116f0564 je 0x116f057b */
  if (C.zf) goto L_116f057b;
  /* 116f0566 push 0x1170b77c */
  push32((uint32_t)(0x1170b77cu));
  /* 116f056b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f056e push edx */
  push32((uint32_t)(EDX));
  /* 116f056f call 0x116efab0 */
  push32(0x116f0574u); f_116efab0();
  /* 116f0574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f0577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0579 jne 0x116f05a3 */
  if (!C.zf) goto L_116f05a3;
L_116f057b:;
  /* 116f057b push 8 */
  push32((uint32_t)(0x8u));
  /* 116f057d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116f0580 push eax */
  push32((uint32_t)(EAX));
  /* 116f0581 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 116f0586 mov ecx, dword ptr [0x1170f8b8] */
  ECX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f058c push ecx */
  push32((uint32_t)(ECX));
  /* 116f058d call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116f0593u);
  /* 116f0593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f0595 jne 0x116f059b */
  if (!C.zf) goto L_116f059b;
  /* 116f0597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f0599 jmp 0x116f05e7 */
  goto L_116f05e7;
L_116f059b:;
  /* 116f059b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 116f059e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116f05a1 jmp 0x116f05db */
  goto L_116f05db;
L_116f05a3:;
  /* 116f05a3 push 0x1170b778 */
  push32((uint32_t)(0x1170b778u));
  /* 116f05a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f05ab push eax */
  push32((uint32_t)(EAX));
  /* 116f05ac call 0x116efab0 */
  push32(0x116f05b1u); f_116efab0();
  /* 116f05b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116f05b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f05b6 jne 0x116f05db */
  if (!C.zf) goto L_116f05db;
  /* 116f05b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 116f05ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116f05bd push ecx */
  push32((uint32_t)(ECX));
  /* 116f05be push 0xb */
  push32((uint32_t)(0xbu));
  /* 116f05c0 mov edx, dword ptr [0x1170f8b8] */
  EDX = (r32((uint32_t)(0x1170f8b8)));
  /* 116f05c6 push edx */
  push32((uint32_t)(EDX));
  /* 116f05c7 call dword ptr [0x1170f8bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f8bc))), 0x116f05cdu);
  /* 116f05cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116f05cf jne 0x116f05d5 */
  if (!C.zf) goto L_116f05d5;
  /* 116f05d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116f05d3 jmp 0x116f05e7 */
  goto L_116f05e7;
L_116f05d5:;
  /* 116f05d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116f05d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116f05db:;
  /* 116f05db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116f05de push ecx */
  push32((uint32_t)(ECX));
  /* 116f05df call 0x116f26d0 */
  push32(0x116f05e4u); f_116f26d0();
  /* 116f05e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116f05e7:;
  /* 116f05e7 mov esp, ebp */
  ESP = (EBP);
  /* 116f05e9 pop ebp */
  EBP = (pop32());
  /* 116f05ea ret  */
  ESPCHK(0x116f0550u, _esp0);
  ESP += 4; return;
}

