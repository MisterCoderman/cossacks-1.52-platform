#include "recomp.h"

/* FUN_10007a80 @ 0x10567a80 (490 bytes, 165 insns) */
void f_10567a80(void) {
  FTRACE(0x10567a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10567a81 mov ebp, esp */
  EBP = (ESP);
  /* 10567a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567a86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567a8a jne 0x10567a9d */
  if (!C.zf) goto L_10567a9d;
  /* 10567a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567a8f push eax */
  push32((uint32_t)(EAX));
  /* 10567a90 call 0x105678d0 */
  push32(0x10567a95u); f_105678d0();
  /* 10567a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567a98 jmp 0x10567c66 */
  goto L_10567c66;
L_10567a9d:;
  /* 10567a9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567aa1 jne 0x10567ab6 */
  if (!C.zf) goto L_10567ab6;
  /* 10567aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10567aa7 call 0x10567c70 */
  push32(0x10567aacu); f_10567c70();
  /* 10567aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10567ab1 jmp 0x10567c66 */
  goto L_10567c66;
L_10567ab6:;
  /* 10567ab6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10567abd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567ac1 ja 0x10567c39 */
  if ((!C.cf&&!C.zf)) goto L_10567c39;
  /* 10567ac7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567ac9 call 0x10567500 */
  push32(0x10567aceu); f_10567500();
  /* 10567ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567ad4 push edx */
  push32((uint32_t)(EDX));
  /* 10567ad5 call 0x10567e00 */
  push32(0x10567adau); f_10567e00();
  /* 10567ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567add mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10567ae0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567ae4 je 0x10567bfc */
  if (C.zf) goto L_10567bfc;
  /* 10567aea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567aed cmp eax, dword ptr [0x1058dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567af3 ja 0x10567b70 */
  if ((!C.cf&&!C.zf)) goto L_10567b70;
  /* 10567af5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567af8 push ecx */
  push32((uint32_t)(ECX));
  /* 10567af9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567afc push edx */
  push32((uint32_t)(EDX));
  /* 10567afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567b00 push eax */
  push32((uint32_t)(EAX));
  /* 10567b01 call 0x10568cd0 */
  push32(0x10567b06u); f_10568cd0();
  /* 10567b06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10567b0b je 0x10567b15 */
  if (C.zf) goto L_10567b15;
  /* 10567b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567b10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10567b13 jmp 0x10567b70 */
  goto L_10567b70;
L_10567b15:;
  /* 10567b15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567b18 push edx */
  push32((uint32_t)(EDX));
  /* 10567b19 call 0x10568490 */
  push32(0x10567b1eu); f_10568490();
  /* 10567b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567b21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10567b24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567b28 je 0x10567b70 */
  if (C.zf) goto L_10567b70;
  /* 10567b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567b2d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10567b30 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567b33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10567b36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567b39 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567b3c jae 0x10567b46 */
  if (!C.cf) goto L_10567b46;
  /* 10567b3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567b41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10567b44 jmp 0x10567b4c */
  goto L_10567b4c;
L_10567b46:;
  /* 10567b46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567b49 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10567b4c:;
  /* 10567b4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567b4f push edx */
  push32((uint32_t)(EDX));
  /* 10567b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567b53 push eax */
  push32((uint32_t)(EAX));
  /* 10567b54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567b57 push ecx */
  push32((uint32_t)(ECX));
  /* 10567b58 call 0x1056a3e0 */
  push32(0x10567b5du); f_1056a3e0();
  /* 10567b5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567b60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567b63 push edx */
  push32((uint32_t)(EDX));
  /* 10567b64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567b67 push eax */
  push32((uint32_t)(EAX));
  /* 10567b68 call 0x10567ec0 */
  push32(0x10567b6du); f_10567ec0();
  /* 10567b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10567b70:;
  /* 10567b70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567b74 jne 0x10567bf0 */
  if (!C.zf) goto L_10567bf0;
  /* 10567b76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567b7a jne 0x10567b83 */
  if (!C.zf) goto L_10567b83;
  /* 10567b7c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10567b83:;
  /* 10567b83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567b86 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567b89 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10567b8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10567b8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567b92 push edx */
  push32((uint32_t)(EDX));
  /* 10567b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10567b95 mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 10567b9a push eax */
  push32((uint32_t)(EAX));
  /* 10567b9b call dword ptr [0x1059237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059237c))), 0x10567ba1u);
  /* 10567ba1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10567ba4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567ba8 je 0x10567bf0 */
  if (C.zf) goto L_10567bf0;
  /* 10567baa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567bad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10567bb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567bb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10567bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567bb9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567bbc jae 0x10567bc6 */
  if (!C.cf) goto L_10567bc6;
  /* 10567bbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567bc1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10567bc4 jmp 0x10567bcc */
  goto L_10567bcc;
L_10567bc6:;
  /* 10567bc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567bc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10567bcc:;
  /* 10567bcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10567bcf push eax */
  push32((uint32_t)(EAX));
  /* 10567bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10567bd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10567bd8 call 0x1056a3e0 */
  push32(0x10567bddu); f_1056a3e0();
  /* 10567bdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567be3 push eax */
  push32((uint32_t)(EAX));
  /* 10567be4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567be7 push ecx */
  push32((uint32_t)(ECX));
  /* 10567be8 call 0x10567ec0 */
  push32(0x10567bedu); f_10567ec0();
  /* 10567bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10567bf0:;
  /* 10567bf0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567bf2 call 0x105675a0 */
  push32(0x10567bf7u); f_105675a0();
  /* 10567bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567bfa jmp 0x10567c39 */
  goto L_10567c39;
L_10567bfc:;
  /* 10567bfc push 9 */
  push32((uint32_t)(0x9u));
  /* 10567bfe call 0x105675a0 */
  push32(0x10567c03u); f_105675a0();
  /* 10567c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567c0a jne 0x10567c13 */
  if (!C.zf) goto L_10567c13;
  /* 10567c0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10567c13:;
  /* 10567c13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567c16 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567c19 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10567c1c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10567c1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567c22 push eax */
  push32((uint32_t)(EAX));
  /* 10567c23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10567c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10567c29 mov edx, dword ptr [0x10590ecc] */
  EDX = (r32((uint32_t)(0x10590ecc)));
  /* 10567c2f push edx */
  push32((uint32_t)(EDX));
  /* 10567c30 call dword ptr [0x10592380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592380))), 0x10567c36u);
  /* 10567c36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10567c39:;
  /* 10567c39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567c3d jne 0x10567c48 */
  if (!C.zf) goto L_10567c48;
  /* 10567c3f cmp dword ptr [0x1058f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567c46 jne 0x10567c4d */
  if (!C.zf) goto L_10567c4d;
L_10567c48:;
  /* 10567c48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567c4b jmp 0x10567c66 */
  goto L_10567c66;
L_10567c4d:;
  /* 10567c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567c50 push eax */
  push32((uint32_t)(EAX));
  /* 10567c51 call 0x10567840 */
  push32(0x10567c56u); f_10567840();
  /* 10567c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10567c5b jne 0x10567c61 */
  if (!C.zf) goto L_10567c61;
  /* 10567c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10567c5f jmp 0x10567c66 */
  goto L_10567c66;
L_10567c61:;
  /* 10567c61 jmp 0x10567ab6 */
  goto L_10567ab6;
L_10567c66:;
  /* 10567c66 mov esp, ebp */
  ESP = (EBP);
  /* 10567c68 pop ebp */
  EBP = (pop32());
  /* 10567c69 ret  */
  ESPCHK(0x10567a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x10567c70 (104 bytes, 38 insns) */
void f_10567c70(void) {
  FTRACE(0x10567c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10567c71 mov ebp, esp */
  EBP = (ESP);
  /* 10567c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10567c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567c78 jne 0x10567c7c */
  if (!C.zf) goto L_10567c7c;
  /* 10567c7a jmp 0x10567cd4 */
  goto L_10567cd4;
L_10567c7c:;
  /* 10567c7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10567c7e call 0x10567500 */
  push32(0x10567c83u); f_10567500();
  /* 10567c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567c89 push eax */
  push32((uint32_t)(EAX));
  /* 10567c8a call 0x10567e00 */
  push32(0x10567c8fu); f_10567e00();
  /* 10567c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567c92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10567c95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567c99 je 0x10567cb7 */
  if (C.zf) goto L_10567cb7;
  /* 10567c9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10567c9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567ca2 push edx */
  push32((uint32_t)(EDX));
  /* 10567ca3 call 0x10567ec0 */
  push32(0x10567ca8u); f_10567ec0();
  /* 10567ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567cab push 9 */
  push32((uint32_t)(0x9u));
  /* 10567cad call 0x105675a0 */
  push32(0x10567cb2u); f_105675a0();
  /* 10567cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567cb5 jmp 0x10567cd4 */
  goto L_10567cd4;
L_10567cb7:;
  /* 10567cb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567cb9 call 0x105675a0 */
  push32(0x10567cbeu); f_105675a0();
  /* 10567cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10567cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10567cc7 mov ecx, dword ptr [0x10590ecc] */
  ECX = (r32((uint32_t)(0x10590ecc)));
  /* 10567ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10567cce call dword ptr [0x10592360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592360))), 0x10567cd4u);
L_10567cd4:;
  /* 10567cd4 mov esp, ebp */
  ESP = (EBP);
  /* 10567cd6 pop ebp */
  EBP = (pop32());
  /* 10567cd7 ret  */
  ESPCHK(0x10567c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x10567ce0 (116 bytes, 34 insns) */
void f_10567ce0(void) {
  FTRACE(0x10567ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10567ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10567ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10567ce4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10567ceb push 9 */
  push32((uint32_t)(0x9u));
  /* 10567ced call 0x10567500 */
  push32(0x10567cf2u); f_10567500();
  /* 10567cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567cf5 call 0x105693f0 */
  push32(0x10567cfau); f_105693f0();
  /* 10567cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10567cfc jge 0x10567d05 */
  if ((C.sf==C.of)) goto L_10567d05;
  /* 10567cfe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10567d05:;
  /* 10567d05 push 9 */
  push32((uint32_t)(0x9u));
  /* 10567d07 call 0x105675a0 */
  push32(0x10567d0cu); f_105675a0();
  /* 10567d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10567d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10567d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10567d13 mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 10567d18 push eax */
  push32((uint32_t)(EAX));
  /* 10567d19 call dword ptr [0x10592340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592340))), 0x10567d1fu);
  /* 10567d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10567d21 jne 0x10567d4d */
  if (!C.zf) goto L_10567d4d;
  /* 10567d23 call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x10567d29u);
  /* 10567d29 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567d2c jne 0x10567d46 */
  if (!C.zf) goto L_10567d46;
  /* 10567d2e call 0x1056b9e0 */
  push32(0x10567d33u); f_1056b9e0();
  /* 10567d33 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10567d39 call 0x1056b9d0 */
  push32(0x10567d3eu); f_1056b9d0();
  /* 10567d3e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10567d44 jmp 0x10567d4d */
  goto L_10567d4d;
L_10567d46:;
  /* 10567d46 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10567d4d:;
  /* 10567d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567d50 mov esp, ebp */
  ESP = (EBP);
  /* 10567d52 pop ebp */
  EBP = (pop32());
  /* 10567d53 ret  */
  ESPCHK(0x10567ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x10567d60 (10 bytes, 5 insns) */
void f_10567d60(void) {
  FTRACE(0x10567d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10567d61 mov ebp, esp */
  EBP = (ESP);
  /* 10567d63 call 0x10567ce0 */
  push32(0x10567d68u); f_10567ce0();
  /* 10567d68 pop ebp */
  EBP = (pop32());
  /* 10567d69 ret  */
  ESPCHK(0x10567d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d70 @ 0x10567d70 (10 bytes, 5 insns) */
void f_10567d70(void) {
  FTRACE(0x10567d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10567d71 mov ebp, esp */
  EBP = (ESP);
  /* 10567d73 mov eax, dword ptr [0x1058dc94] */
  EAX = (r32((uint32_t)(0x1058dc94)));
  /* 10567d78 pop ebp */
  EBP = (pop32());
  /* 10567d79 ret  */
  ESPCHK(0x10567d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x10567d80 (31 bytes, 11 insns) */
void f_10567d80(void) {
  FTRACE(0x10567d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10567d81 mov ebp, esp */
  EBP = (ESP);
  /* 10567d83 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567d8a jbe 0x10567d90 */
  if ((C.cf||C.zf)) goto L_10567d90;
  /* 10567d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10567d8e jmp 0x10567d9d */
  goto L_10567d9d;
L_10567d90:;
  /* 10567d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567d93 mov dword ptr [0x1058dc94], eax */
  w32((uint32_t)(0x1058dc94), (EAX));
  /* 10567d98 mov eax, 1 */
  EAX = (0x1u);
L_10567d9d:;
  /* 10567d9d pop ebp */
  EBP = (pop32());
  /* 10567d9e ret  */
  ESPCHK(0x10567d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x10567da0 (89 bytes, 20 insns) */
void f_10567da0(void) {
  FTRACE(0x10567da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10567da1 mov ebp, esp */
  EBP = (ESP);
  /* 10567da3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10567da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10567daa mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 10567daf push eax */
  push32((uint32_t)(EAX));
  /* 10567db0 call dword ptr [0x1059237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059237c))), 0x10567db6u);
  /* 10567db6 mov dword ptr [0x10590ec8], eax */
  w32((uint32_t)(0x10590ec8), (EAX));
  /* 10567dbb cmp dword ptr [0x10590ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567dc2 jne 0x10567dc8 */
  if (!C.zf) goto L_10567dc8;
  /* 10567dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10567dc6 jmp 0x10567df7 */
  goto L_10567df7;
L_10567dc8:;
  /* 10567dc8 mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 10567dce mov dword ptr [0x10590ebc], ecx */
  w32((uint32_t)(0x10590ebc), (ECX));
  /* 10567dd4 mov dword ptr [0x10590ec0], 0 */
  w32((uint32_t)(0x10590ec0), (0x0u));
  /* 10567dde mov dword ptr [0x10590ec4], 0 */
  w32((uint32_t)(0x10590ec4), (0x0u));
  /* 10567de8 mov dword ptr [0x10590ea8], 0x10 */
  w32((uint32_t)(0x10590ea8), (0x10u));
  /* 10567df2 mov eax, 1 */
  EAX = (0x1u);
L_10567df7:;
  /* 10567df7 pop ebp */
  EBP = (pop32());
  /* 10567df8 ret  */
  ESPCHK(0x10567da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x10567e00 (85 bytes, 29 insns) */
void f_10567e00(void) {
  FTRACE(0x10567e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10567e01 mov ebp, esp */
  EBP = (ESP);
  /* 10567e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567e06 mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 10567e0b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10567e0e mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 10567e14 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567e16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10567e19 mov edx, dword ptr [0x10590ec8] */
  EDX = (r32((uint32_t)(0x10590ec8)));
  /* 10567e1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10567e22:;
  /* 10567e22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e25 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567e28 jae 0x10567e4f */
  if (!C.cf) goto L_10567e4f;
  /* 10567e2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567e30 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567e33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10567e36 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567e3d jae 0x10567e44 */
  if (!C.cf) goto L_10567e44;
  /* 10567e3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e42 jmp 0x10567e51 */
  goto L_10567e51;
L_10567e44:;
  /* 10567e44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e47 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567e4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10567e4d jmp 0x10567e22 */
  goto L_10567e22;
L_10567e4f:;
  /* 10567e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10567e51:;
  /* 10567e51 mov esp, ebp */
  ESP = (EBP);
  /* 10567e53 pop ebp */
  EBP = (pop32());
  /* 10567e54 ret  */
  ESPCHK(0x10567e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x10567e60 (95 bytes, 33 insns) */
void f_10567e60(void) {
  FTRACE(0x10567e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10567e61 mov ebp, esp */
  EBP = (ESP);
  /* 10567e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567e69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567e6c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567e6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10567e72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e75 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10567e78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10567e7b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10567e80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567e83 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10567e85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567e88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10567e8b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10567e8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10567e8f jne 0x10567eb1 */
  if (!C.zf) goto L_10567eb1;
  /* 10567e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e94 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10567e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10567e99 jne 0x10567eb1 */
  if (!C.zf) goto L_10567eb1;
  /* 10567e9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10567e9e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10567ea4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10567ea6 je 0x10567eb1 */
  if (C.zf) goto L_10567eb1;
  /* 10567ea8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10567eaf jmp 0x10567eb8 */
  goto L_10567eb8;
L_10567eb1:;
  /* 10567eb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10567eb8:;
  /* 10567eb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10567ebb mov esp, ebp */
  ESP = (EBP);
  /* 10567ebd pop ebp */
  EBP = (pop32());
  /* 10567ebe ret  */
  ESPCHK(0x10567e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x10567ec0 (1485 bytes, 453 insns) */
void f_10567ec0(void) {
  FTRACE(0x10567ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10567ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10567ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10567ec3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10567ecc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10567ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567ed2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567ed5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567ed8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10567edb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10567ede shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10567ee1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10567ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567ee7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10567eed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567ef0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10567ef7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10567efa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10567efd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567f00 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10567f03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10567f06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10567f08 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567f0b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10567f0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10567f11 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567f14 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10567f17 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10567f1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10567f1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10567f1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10567f22 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10567f25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10567f28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10567f2b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10567f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10567f30 jne 0x10568058 */
  if (!C.zf) goto L_10568058;
  /* 10567f36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10567f39 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10567f3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567f3f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10567f42 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567f46 jbe 0x10567f4f */
  if ((C.cf||C.zf)) goto L_10567f4f;
  /* 10567f48 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10567f4f:;
  /* 10567f4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10567f52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10567f55 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10567f58 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567f5b jne 0x10568031 */
  if (!C.zf) goto L_10568031;
  /* 10567f61 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10567f65 jae 0x10567fc6 */
  if (!C.cf) goto L_10567fc6;
  /* 10567f67 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10567f6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10567f6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10567f71 not eax */
  EAX = (~(EAX));
  /* 10567f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567f76 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567f79 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10567f7d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10567f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567f82 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567f85 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10567f89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567f8c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567f8f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10567f92 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10567f95 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567f98 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567f9b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10567f9e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567fa1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567fa4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10567fa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10567faa jne 0x10567fc4 */
  if (!C.zf) goto L_10567fc4;
  /* 10567fac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10567fb1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10567fb4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10567fb6 not eax */
  EAX = (~(EAX));
  /* 10567fb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567fbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10567fbd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10567fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10567fc2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10567fc4:;
  /* 10567fc4 jmp 0x10568031 */
  goto L_10568031;
L_10567fc6:;
  /* 10567fc6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10567fc9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10567fcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10567fd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10567fd3 not edx */
  EDX = (~(EDX));
  /* 10567fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567fd8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567fdb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10567fe2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10567fe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10567fe7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567fea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10567ff1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10567ff4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10567ff7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10567ffa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10567ffd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568000 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568003 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10568006 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568009 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056800c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10568010 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10568012 jne 0x10568031 */
  if (!C.zf) goto L_10568031;
  /* 10568014 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10568017 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056801a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1056801f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568021 not edx */
  EDX = (~(EDX));
  /* 10568023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568026 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568029 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1056802b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056802e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10568031:;
  /* 10568031 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568034 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10568037 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056803a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1056803d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10568040 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568043 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568046 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568049 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056804c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1056804f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568052 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568055 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10568058:;
  /* 10568058 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056805b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1056805e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568061 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10568064 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568068 jbe 0x10568071 */
  if ((C.cf||C.zf)) goto L_10568071;
  /* 1056806a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10568071:;
  /* 10568071 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568074 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10568077 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10568079 jne 0x105681d5 */
  if (!C.zf) goto L_105681d5;
  /* 1056807f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568082 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568085 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10568088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056808b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1056808e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568091 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10568094 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568098 jbe 0x105680a1 */
  if ((C.cf||C.zf)) goto L_105680a1;
  /* 1056809a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_105680a1:;
  /* 105680a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105680a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105680a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 105680aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105680ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105680b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105680b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105680b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105680ba jbe 0x105680c3 */
  if ((C.cf||C.zf)) goto L_105680c3;
  /* 105680bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_105680c3:;
  /* 105680c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105680c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105680c9 je 0x105681cf */
  if (C.zf) goto L_105681cf;
  /* 105680cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105680d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105680d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105680d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105680db jne 0x105681b1 */
  if (!C.zf) goto L_105681b1;
  /* 105680e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105680e5 jae 0x10568146 */
  if (!C.cf) goto L_10568146;
  /* 105680e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105680ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105680ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105680f1 not edx */
  EDX = (~(EDX));
  /* 105680f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105680f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105680f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105680fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105680ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568102 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568105 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10568109 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1056810c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056810f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10568112 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10568115 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568118 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056811b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1056811e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568121 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568124 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10568128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056812a jne 0x10568144 */
  if (!C.zf) goto L_10568144;
  /* 1056812c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568131 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568134 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568136 not edx */
  EDX = (~(EDX));
  /* 10568138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056813b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056813d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1056813f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568142 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10568144:;
  /* 10568144 jmp 0x105681b1 */
  goto L_105681b1;
L_10568146:;
  /* 10568146 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568149 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056814c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568151 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10568153 not eax */
  EAX = (~(EAX));
  /* 10568155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568158 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1056815b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10568162 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568167 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1056816a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10568171 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568174 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568177 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1056817a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1056817d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568180 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568183 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10568186 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568189 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056818c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10568190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568192 jne 0x105681b1 */
  if (!C.zf) goto L_105681b1;
  /* 10568194 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568197 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056819a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1056819f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105681a1 not eax */
  EAX = (~(EAX));
  /* 105681a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105681a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105681a9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105681ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105681ae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105681b1:;
  /* 105681b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105681b4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105681b7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105681ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105681bd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105681c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105681c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105681c6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105681c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105681cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_105681cf:;
  /* 105681cf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105681d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_105681d5:;
  /* 105681d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105681d8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105681db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105681dd jne 0x105681eb */
  if (!C.zf) goto L_105681eb;
  /* 105681df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105681e2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105681e5 je 0x105682fb */
  if (C.zf) goto L_105682fb;
L_105681eb:;
  /* 105681eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105681ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105681f1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 105681f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105681f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105681fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105681fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568200 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10568203 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568206 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568209 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1056820c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056820f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568212 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10568215 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568218 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056821b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056821e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10568221 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568224 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568227 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056822a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056822d jne 0x105682fb */
  if (!C.zf) goto L_105682fb;
  /* 10568233 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568237 jae 0x10568294 */
  if (!C.cf) goto L_10568294;
  /* 10568239 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1056823c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056823f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10568243 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568246 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568249 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1056824c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1056824f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568252 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568255 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10568258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056825a jne 0x10568272 */
  if (!C.zf) goto L_10568272;
  /* 1056825c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568261 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568264 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056826b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1056826d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568270 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10568272:;
  /* 10568272 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568277 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056827a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1056827c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056827f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568282 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10568286 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056828b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1056828e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10568292 jmp 0x105682fb */
  goto L_105682fb;
L_10568294:;
  /* 10568294 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10568297 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056829a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1056829e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105682a1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105682a4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105682a7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105682aa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105682ad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105682b0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105682b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105682b5 jne 0x105682d2 */
  if (!C.zf) goto L_105682d2;
  /* 105682b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105682ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105682bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105682c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105682c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105682c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105682ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105682cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105682cf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105682d2:;
  /* 105682d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105682d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105682d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105682dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105682df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105682e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105682e5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105682ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105682ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105682f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105682f4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_105682fb:;
  /* 105682fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105682fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568301 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10568303 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568306 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568309 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056830c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1056830f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10568312 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10568314 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056831a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1056831c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056831f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568322 jne 0x10568489 */
  if (!C.zf) goto L_10568489;
  /* 10568328 cmp dword ptr [0x10590ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056832f je 0x10568478 */
  if (C.zf) goto L_10568478;
  /* 10568335 mov eax, dword ptr [0x10590eb8] */
  EAX = (r32((uint32_t)(0x10590eb8)));
  /* 1056833a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1056833d mov ecx, dword ptr [0x10590ec0] */
  ECX = (r32((uint32_t)(0x10590ec0)));
  /* 10568343 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10568346 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568348 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1056834b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10568350 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10568355 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568358 push eax */
  push32((uint32_t)(EAX));
  /* 10568359 call dword ptr [0x10592364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592364))), 0x1056835fu);
  /* 1056835f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568364 mov ecx, dword ptr [0x10590eb8] */
  ECX = (r32((uint32_t)(0x10590eb8)));
  /* 1056836a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1056836c mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 10568371 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10568374 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10568376 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 1056837c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1056837f mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 10568384 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10568387 mov edx, dword ptr [0x10590eb8] */
  EDX = (r32((uint32_t)(0x10590eb8)));
  /* 1056838d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10568398 mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 1056839d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105683a0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 105683a3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105683a6 mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 105683ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105683ae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 105683b1 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 105683b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105683ba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 105683be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105683c0 jne 0x105683d6 */
  if (!C.zf) goto L_105683d6;
  /* 105683c2 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 105683c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105683cb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 105683cd mov ecx, dword ptr [0x10590ec0] */
  ECX = (r32((uint32_t)(0x10590ec0)));
  /* 105683d3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_105683d6:;
  /* 105683d6 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 105683dc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105683e0 jne 0x10568478 */
  if (!C.zf) goto L_10568478;
  /* 105683e6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105683eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105683ed mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 105683f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105683f5 push ecx */
  push32((uint32_t)(ECX));
  /* 105683f6 call dword ptr [0x10592364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592364))), 0x105683fcu);
  /* 105683fc mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 10568402 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10568405 push eax */
  push32((uint32_t)(EAX));
  /* 10568406 push 0 */
  push32((uint32_t)(0x0u));
  /* 10568408 mov ecx, dword ptr [0x10590ecc] */
  ECX = (r32((uint32_t)(0x10590ecc)));
  /* 1056840e push ecx */
  push32((uint32_t)(ECX));
  /* 1056840f call dword ptr [0x10592360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592360))), 0x10568415u);
  /* 10568415 mov edx, dword ptr [0x10590ec4] */
  EDX = (r32((uint32_t)(0x10590ec4)));
  /* 1056841b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056841e mov eax, dword ptr [0x10590ec8] */
  EAX = (r32((uint32_t)(0x10590ec8)));
  /* 10568423 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568425 mov ecx, dword ptr [0x10590ec0] */
  ECX = (r32((uint32_t)(0x10590ec0)));
  /* 1056842b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056842e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568430 push eax */
  push32((uint32_t)(EAX));
  /* 10568431 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 10568437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056843a push edx */
  push32((uint32_t)(EDX));
  /* 1056843b mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 10568440 push eax */
  push32((uint32_t)(EAX));
  /* 10568441 call 0x1056b9f0 */
  push32(0x10568446u); f_1056b9f0();
  /* 10568446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10568449 mov ecx, dword ptr [0x10590ec4] */
  ECX = (r32((uint32_t)(0x10590ec4)));
  /* 1056844f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568452 mov dword ptr [0x10590ec4], ecx */
  w32((uint32_t)(0x10590ec4), (ECX));
  /* 10568458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056845b cmp edx, dword ptr [0x10590ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10590ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568461 jbe 0x1056846c */
  if ((C.cf||C.zf)) goto L_1056846c;
  /* 10568463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568466 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568469 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1056846c:;
  /* 1056846c mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 10568472 mov dword ptr [0x10590ebc], ecx */
  w32((uint32_t)(0x10590ebc), (ECX));
L_10568478:;
  /* 10568478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056847b mov dword ptr [0x10590ec0], edx */
  w32((uint32_t)(0x10590ec0), (EDX));
  /* 10568481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568484 mov dword ptr [0x10590eb8], eax */
  w32((uint32_t)(0x10590eb8), (EAX));
L_10568489:;
  /* 10568489 mov esp, ebp */
  ESP = (EBP);
  /* 1056848b pop ebp */
  EBP = (pop32());
  /* 1056848c ret  */
  ESPCHK(0x10567ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008490 @ 0x10568490 (1334 bytes, 427 insns) */
void f_10568490(void) {
  FTRACE(0x10568490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10568490 push ebp */
  push32((uint32_t)(EBP));
  /* 10568491 mov ebp, esp */
  EBP = (ESP);
  /* 10568493 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568496 push esi */
  push32((uint32_t)(ESI));
  /* 10568497 mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 1056849c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056849f mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 105684a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105684a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105684aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105684ad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105684b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105684b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105684b6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105684b9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105684bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105684bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105684c2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105684c6 jge 0x105684dc */
  if ((C.sf==C.of)) goto L_105684dc;
  /* 105684c8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105684cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105684ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105684d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105684d3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 105684da jmp 0x105684f1 */
  goto L_105684f1;
L_105684dc:;
  /* 105684dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105684e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105684e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105684e9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105684ec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105684ee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_105684f1:;
  /* 105684f1 mov ecx, dword ptr [0x10590ebc] */
  ECX = (r32((uint32_t)(0x10590ebc)));
  /* 105684f7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_105684fa:;
  /* 105684fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105684fd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568500 jae 0x10568526 */
  if (!C.cf) goto L_10568526;
  /* 10568502 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568505 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10568508 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1056850a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056850d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10568510 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10568513 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10568517 je 0x1056851b */
  if (C.zf) goto L_1056851b;
  /* 10568519 jmp 0x10568526 */
  goto L_10568526;
L_1056851b:;
  /* 1056851b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056851e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568521 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10568524 jmp 0x105684fa */
  goto L_105684fa;
L_10568526:;
  /* 10568526 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568529 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056852c jne 0x1056860d */
  if (!C.zf) goto L_1056860d;
  /* 10568532 mov eax, dword ptr [0x10590ec8] */
  EAX = (r32((uint32_t)(0x10590ec8)));
  /* 10568537 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1056853a:;
  /* 1056853a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056853d cmp ecx, dword ptr [0x10590ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568543 jae 0x10568569 */
  if (!C.cf) goto L_10568569;
  /* 10568545 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568548 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056854b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1056854d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568550 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10568553 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10568556 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10568558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056855a je 0x1056855e */
  if (C.zf) goto L_1056855e;
  /* 1056855c jmp 0x10568569 */
  goto L_10568569;
L_1056855e:;
  /* 1056855e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568561 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568564 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10568567 jmp 0x1056853a */
  goto L_1056853a;
L_10568569:;
  /* 10568569 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056856c cmp ecx, dword ptr [0x10590ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568572 jne 0x1056860d */
  if (!C.zf) goto L_1056860d;
L_10568578:;
  /* 10568578 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056857b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056857e jae 0x10568596 */
  if (!C.cf) goto L_10568596;
  /* 10568580 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568583 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568587 je 0x1056858b */
  if (C.zf) goto L_1056858b;
  /* 10568589 jmp 0x10568596 */
  goto L_10568596;
L_1056858b:;
  /* 1056858b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056858e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568591 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10568594 jmp 0x10568578 */
  goto L_10568578;
L_10568596:;
  /* 10568596 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568599 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056859c jne 0x105685e7 */
  if (!C.zf) goto L_105685e7;
  /* 1056859e mov eax, dword ptr [0x10590ec8] */
  EAX = (r32((uint32_t)(0x10590ec8)));
  /* 105685a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105685a6:;
  /* 105685a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685a9 cmp ecx, dword ptr [0x10590ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105685af jae 0x105685c7 */
  if (!C.cf) goto L_105685c7;
  /* 105685b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685b4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105685b8 je 0x105685bc */
  if (C.zf) goto L_105685bc;
  /* 105685ba jmp 0x105685c7 */
  goto L_105685c7;
L_105685bc:;
  /* 105685bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685bf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105685c2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105685c5 jmp 0x105685a6 */
  goto L_105685a6;
L_105685c7:;
  /* 105685c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685ca cmp ecx, dword ptr [0x10590ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105685d0 jne 0x105685e7 */
  if (!C.zf) goto L_105685e7;
  /* 105685d2 call 0x105689d0 */
  push32(0x105685d7u); f_105689d0();
  /* 105685d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105685da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105685de jne 0x105685e7 */
  if (!C.zf) goto L_105685e7;
  /* 105685e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105685e2 jmp 0x105689c1 */
  goto L_105689c1;
L_105685e7:;
  /* 105685e7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685ea push edx */
  push32((uint32_t)(EDX));
  /* 105685eb call 0x10568ae0 */
  push32(0x105685f0u); f_10568ae0();
  /* 105685f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105685f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685f6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105685f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105685fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105685fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10568601 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568604 jne 0x1056860d */
  if (!C.zf) goto L_1056860d;
  /* 10568606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10568608 jmp 0x105689c1 */
  goto L_105689c1;
L_1056860d:;
  /* 1056860d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568610 mov dword ptr [0x10590ebc], edx */
  w32((uint32_t)(0x10590ebc), (EDX));
  /* 10568616 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568619 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056861c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1056861f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568622 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10568624 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10568627 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056862b je 0x10568650 */
  if (C.zf) goto L_10568650;
  /* 1056862d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568630 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568633 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10568636 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1056863a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056863d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568640 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10568643 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1056864a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1056864c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056864e jne 0x10568685 */
  if (!C.zf) goto L_10568685;
L_10568650:;
  /* 10568650 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10568657:;
  /* 10568657 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056865a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056865d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10568660 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10568664 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568667 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056866a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1056866d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10568674 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10568676 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568678 jne 0x10568685 */
  if (!C.zf) goto L_10568685;
  /* 1056867a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056867d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568680 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10568683 jmp 0x10568657 */
  goto L_10568657;
L_10568685:;
  /* 10568685 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568688 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056868e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568691 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10568698 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056869b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105686a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105686a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105686a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105686ab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 105686af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105686b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105686b6 jne 0x105686d2 */
  if (!C.zf) goto L_105686d2;
  /* 105686b8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 105686bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105686c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105686c5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105686c8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 105686cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_105686d2:;
  /* 105686d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105686d6 jl 0x105686eb */
  if ((C.sf!=C.of)) goto L_105686eb;
  /* 105686d8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105686db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105686dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105686e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105686e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105686e6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105686e9 jmp 0x105686d2 */
  goto L_105686d2;
L_105686eb:;
  /* 105686eb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105686ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105686f1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 105686f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105686f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105686fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105686fd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568700 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10568703 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10568706 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10568709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056870c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1056870f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568713 jle 0x1056871c */
  if ((C.zf||C.sf!=C.of)) goto L_1056871c;
  /* 10568715 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1056871c:;
  /* 1056871c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056871f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568722 je 0x10568940 */
  if (C.zf) goto L_10568940;
  /* 10568728 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056872b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056872e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568731 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568734 jne 0x1056880a */
  if (!C.zf) goto L_1056880a;
  /* 1056873a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056873e jge 0x1056879f */
  if ((C.sf==C.of)) goto L_1056879f;
  /* 10568740 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568745 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568748 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1056874a not eax */
  EAX = (~(EAX));
  /* 1056874c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056874f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568752 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10568756 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568758 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056875b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056875e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10568762 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568765 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568768 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1056876b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1056876e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568771 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568774 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10568777 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056877a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056877d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10568781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568783 jne 0x1056879d */
  if (!C.zf) goto L_1056879d;
  /* 10568785 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1056878a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056878d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1056878f not eax */
  EAX = (~(EAX));
  /* 10568791 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568794 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10568796 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10568798 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056879b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1056879d:;
  /* 1056879d jmp 0x1056880a */
  goto L_1056880a;
L_1056879f:;
  /* 1056879f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105687a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105687a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105687aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105687ac not edx */
  EDX = (~(EDX));
  /* 105687ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105687b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105687b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105687bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105687bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105687c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105687c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 105687ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105687cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105687d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105687d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105687d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105687d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105687dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105687df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105687e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105687e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105687e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105687eb jne 0x1056880a */
  if (!C.zf) goto L_1056880a;
  /* 105687ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105687f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105687f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105687f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105687fa not edx */
  EDX = (~(EDX));
  /* 105687fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105687ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568802 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10568804 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568807 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1056880a:;
  /* 1056880a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056880d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10568810 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568813 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10568816 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10568819 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056881c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056881f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568822 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10568825 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10568828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056882c je 0x10568940 */
  if (C.zf) goto L_10568940;
  /* 10568832 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568838 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1056883b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056883e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568844 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1056884a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056884d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568850 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10568853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568856 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568859 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1056885c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056885f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568862 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568865 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10568868 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056886b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056886e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568871 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568874 jne 0x10568940 */
  if (!C.zf) goto L_10568940;
  /* 1056887a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056887e jge 0x105688da */
  if ((C.sf==C.of)) goto L_105688da;
  /* 10568880 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568883 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568886 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1056888a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056888d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568890 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10568893 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10568895 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568898 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056889b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1056889e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105688a0 jne 0x105688b8 */
  if (!C.zf) goto L_105688b8;
  /* 105688a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105688a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105688aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105688ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105688af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105688b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105688b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105688b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105688b8:;
  /* 105688b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105688bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105688c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105688c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105688c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105688c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105688cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105688ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105688d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105688d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105688d8 jmp 0x10568940 */
  goto L_10568940;
L_105688da:;
  /* 105688da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105688dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105688e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105688e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105688e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105688ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105688ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105688ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105688f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105688f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105688f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105688fa jne 0x10568917 */
  if (!C.zf) goto L_10568917;
  /* 105688fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105688ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568902 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568907 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10568909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056890c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056890f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10568911 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568914 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10568917:;
  /* 10568917 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056891a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056891d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568922 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568924 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568927 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1056892a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10568931 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10568933 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568936 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10568939 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10568940:;
  /* 10568940 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568944 je 0x1056895a */
  if (C.zf) goto L_1056895a;
  /* 10568946 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056894c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1056894e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568951 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568954 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10568957 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1056895a:;
  /* 1056895a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056895d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568960 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10568963 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568966 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568969 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056896c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1056896e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568971 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568974 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568977 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056897a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1056897d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568980 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10568982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568985 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10568987 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056898a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056898d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1056898f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10568991 jne 0x105689b3 */
  if (!C.zf) goto L_105689b3;
  /* 10568993 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568996 cmp eax, dword ptr [0x10590ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10590ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056899c jne 0x105689b3 */
  if (!C.zf) goto L_105689b3;
  /* 1056899e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105689a1 cmp ecx, dword ptr [0x10590eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105689a7 jne 0x105689b3 */
  if (!C.zf) goto L_105689b3;
  /* 105689a9 mov dword ptr [0x10590ec0], 0 */
  w32((uint32_t)(0x10590ec0), (0x0u));
L_105689b3:;
  /* 105689b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105689b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105689b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105689bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105689be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_105689c1:;
  /* 105689c1 pop esi */
  ESI = (pop32());
  /* 105689c2 mov esp, ebp */
  ESP = (EBP);
  /* 105689c4 pop ebp */
  EBP = (pop32());
  /* 105689c5 ret  */
  ESPCHK(0x10568490u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x105689d0 (271 bytes, 78 insns) */
void f_105689d0(void) {
  FTRACE(0x105689d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105689d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105689d1 mov ebp, esp */
  EBP = (ESP);
  /* 105689d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105689d4 mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 105689d9 cmp eax, dword ptr [0x10590ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10590ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105689df jne 0x10568a2b */
  if (!C.zf) goto L_10568a2b;
  /* 105689e1 mov ecx, dword ptr [0x10590ea8] */
  ECX = (r32((uint32_t)(0x10590ea8)));
  /* 105689e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105689ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105689ed push ecx */
  push32((uint32_t)(ECX));
  /* 105689ee mov edx, dword ptr [0x10590ec8] */
  EDX = (r32((uint32_t)(0x10590ec8)));
  /* 105689f4 push edx */
  push32((uint32_t)(EDX));
  /* 105689f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105689f7 mov eax, dword ptr [0x10590ecc] */
  EAX = (r32((uint32_t)(0x10590ecc)));
  /* 105689fc push eax */
  push32((uint32_t)(EAX));
  /* 105689fd call dword ptr [0x10592380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592380))), 0x10568a03u);
  /* 10568a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10568a06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568a0a jne 0x10568a13 */
  if (!C.zf) goto L_10568a13;
  /* 10568a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10568a0e jmp 0x10568adb */
  goto L_10568adb;
L_10568a13:;
  /* 10568a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568a16 mov dword ptr [0x10590ec8], ecx */
  w32((uint32_t)(0x10590ec8), (ECX));
  /* 10568a1c mov edx, dword ptr [0x10590ea8] */
  EDX = (r32((uint32_t)(0x10590ea8)));
  /* 10568a22 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568a25 mov dword ptr [0x10590ea8], edx */
  w32((uint32_t)(0x10590ea8), (EDX));
L_10568a2b:;
  /* 10568a2b mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 10568a30 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10568a33 mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 10568a39 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568a3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10568a3e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10568a43 push 8 */
  push32((uint32_t)(0x8u));
  /* 10568a45 mov edx, dword ptr [0x10590ecc] */
  EDX = (r32((uint32_t)(0x10590ecc)));
  /* 10568a4b push edx */
  push32((uint32_t)(EDX));
  /* 10568a4c call dword ptr [0x1059237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059237c))), 0x10568a52u);
  /* 10568a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568a55 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10568a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568a5b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568a5f jne 0x10568a65 */
  if (!C.zf) goto L_10568a65;
  /* 10568a61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10568a63 jmp 0x10568adb */
  goto L_10568adb;
L_10568a65:;
  /* 10568a65 push 4 */
  push32((uint32_t)(0x4u));
  /* 10568a67 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10568a6c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10568a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10568a73 call dword ptr [0x10592384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592384))), 0x10568a79u);
  /* 10568a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568a7c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10568a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568a82 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568a86 jne 0x10568aa2 */
  if (!C.zf) goto L_10568aa2;
  /* 10568a88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568a8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10568a8e push ecx */
  push32((uint32_t)(ECX));
  /* 10568a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10568a91 mov edx, dword ptr [0x10590ecc] */
  EDX = (r32((uint32_t)(0x10590ecc)));
  /* 10568a97 push edx */
  push32((uint32_t)(EDX));
  /* 10568a98 call dword ptr [0x10592360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592360))), 0x10568a9eu);
  /* 10568a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10568aa0 jmp 0x10568adb */
  goto L_10568adb;
L_10568aa2:;
  /* 10568aa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568aa5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10568aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568aae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10568ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568ab8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10568abf mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 10568ac4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568ac7 mov dword ptr [0x10590ec4], eax */
  w32((uint32_t)(0x10590ec4), (EAX));
  /* 10568acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568acf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10568ad2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10568ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10568adb:;
  /* 10568adb mov esp, ebp */
  ESP = (EBP);
  /* 10568add pop ebp */
  EBP = (pop32());
  /* 10568ade ret  */
  ESPCHK(0x105689d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x10568ae0 (494 bytes, 149 insns) */
void f_10568ae0(void) {
  FTRACE(0x10568ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10568ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10568ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10568ae3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568ae9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10568aec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10568aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568af2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10568af5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10568af8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10568aff:;
  /* 10568aff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568b03 jl 0x10568b18 */
  if ((C.sf!=C.of)) goto L_10568b18;
  /* 10568b05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10568b08 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10568b0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10568b0d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568b10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568b13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10568b16 jmp 0x10568aff */
  goto L_10568aff;
L_10568b18:;
  /* 10568b18 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568b1b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10568b21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568b24 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10568b2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10568b2e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10568b35 jmp 0x10568b40 */
  goto L_10568b40;
L_10568b37:;
  /* 10568b37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568b3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568b3d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10568b40:;
  /* 10568b40 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568b44 jge 0x10568b66 */
  if ((C.sf==C.of)) goto L_10568b66;
  /* 10568b46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568b49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568b4c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10568b4f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10568b52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568b55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568b58 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10568b5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568b5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568b61 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10568b64 jmp 0x10568b37 */
  goto L_10568b37;
L_10568b66:;
  /* 10568b66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568b69 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10568b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568b6f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10568b72 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568b74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10568b77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10568b79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10568b7e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10568b83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568b86 push edx */
  push32((uint32_t)(EDX));
  /* 10568b87 call dword ptr [0x10592384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592384))), 0x10568b8du);
  /* 10568b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10568b8f jne 0x10568b99 */
  if (!C.zf) goto L_10568b99;
  /* 10568b91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10568b94 jmp 0x10568cca */
  goto L_10568cca;
L_10568b99:;
  /* 10568b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568b9c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568ba1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10568ba4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568ba7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10568baa jmp 0x10568bb8 */
  goto L_10568bb8;
L_10568bac:;
  /* 10568bac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568baf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568bb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10568bb8:;
  /* 10568bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568bbb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568bbe ja 0x10568c1d */
  if ((!C.cf&&!C.zf)) goto L_10568c1d;
  /* 10568bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568bc3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10568bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568bcd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10568bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568bda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568bdd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10568be0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568be3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10568be9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568bec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568bf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568bf5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10568bf8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568bfb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568c01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568c04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10568c07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568c0a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568c0f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10568c12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10568c15 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10568c1b jmp 0x10568bac */
  goto L_10568bac;
L_10568c1d:;
  /* 10568c1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568c20 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568c26 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10568c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568c2c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568c2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568c32 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10568c35 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568c38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10568c3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10568c3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568c41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568c44 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10568c47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568c4a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568c4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568c50 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10568c53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568c56 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10568c59 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10568c5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568c5f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568c62 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10568c65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568c68 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568c6b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10568c73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568c76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568c79 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10568c84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568c87 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10568c8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568c8e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10568c91 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10568c94 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568c97 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10568c9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568c9c jne 0x10568cad */
  if (!C.zf) goto L_10568cad;
  /* 10568c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568ca1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568ca4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10568ca7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568caa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10568cad:;
  /* 10568cad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568cb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568cb5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568cb7 not edx */
  EDX = (~(EDX));
  /* 10568cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568cbc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10568cbf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10568cc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568cc4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10568cc7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10568cca:;
  /* 10568cca mov esp, ebp */
  ESP = (EBP);
  /* 10568ccc pop ebp */
  EBP = (pop32());
  /* 10568ccd ret  */
  ESPCHK(0x10568ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x10568cd0 (1515 bytes, 489 insns) */
void f_10568cd0(void) {
  FTRACE(0x10568cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10568cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10568cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10568cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568cd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10568cd9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568cdc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10568cde mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10568ce1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568ce4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10568ce7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10568cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568ced mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10568cf0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568cf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10568cf6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10568cf9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10568cfc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10568cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568d02 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10568d08 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568d0b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10568d12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10568d15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10568d18 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568d1b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10568d1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568d21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10568d23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568d26 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10568d29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568d2c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568d2f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10568d32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568d35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10568d37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10568d3a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568d3d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568d40 jle 0x10568ff6 */
  if ((C.zf||C.sf!=C.of)) goto L_10568ff6;
  /* 10568d46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568d49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10568d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10568d4e jne 0x10568d5b */
  if (!C.zf) goto L_10568d5b;
  /* 10568d50 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568d53 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568d56 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568d59 jle 0x10568d62 */
  if ((C.zf||C.sf!=C.of)) goto L_10568d62;
L_10568d5b:;
  /* 10568d5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10568d5d jmp 0x105692b7 */
  goto L_105692b7;
L_10568d62:;
  /* 10568d62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568d65 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10568d68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568d6b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10568d6e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568d72 jbe 0x10568d7b */
  if ((C.cf||C.zf)) goto L_10568d7b;
  /* 10568d74 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10568d7b:;
  /* 10568d7b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568d7e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568d81 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568d84 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568d87 jne 0x10568e5d */
  if (!C.zf) goto L_10568e5d;
  /* 10568d8d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568d91 jae 0x10568df2 */
  if (!C.cf) goto L_10568df2;
  /* 10568d93 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568d98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568d9b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568d9d not edx */
  EDX = (~(EDX));
  /* 10568d9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568da2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568da5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10568da9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10568dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568dae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568db1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10568db5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568db8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568dbb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10568dbe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10568dc1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568dc4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568dc7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10568dca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568dcd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568dd0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10568dd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10568dd6 jne 0x10568df0 */
  if (!C.zf) goto L_10568df0;
  /* 10568dd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568ddd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568de0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568de2 not edx */
  EDX = (~(EDX));
  /* 10568de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10568de9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10568deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568dee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10568df0:;
  /* 10568df0 jmp 0x10568e5d */
  goto L_10568e5d;
L_10568df2:;
  /* 10568df2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568df5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568df8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568dfd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10568dff not eax */
  EAX = (~(EAX));
  /* 10568e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568e04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568e07 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10568e0e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568e10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568e13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568e16 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10568e1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568e20 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568e23 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10568e26 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10568e29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568e2c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568e2f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10568e32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568e35 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568e38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10568e3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568e3e jne 0x10568e5d */
  if (!C.zf) goto L_10568e5d;
  /* 10568e40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568e43 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568e46 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568e4b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10568e4d not eax */
  EAX = (~(EAX));
  /* 10568e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568e52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568e55 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10568e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568e5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10568e5d:;
  /* 10568e5d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568e60 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10568e63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568e66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568e69 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10568e6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568e6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10568e72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568e75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10568e78 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10568e7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10568e7e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568e81 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568e84 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10568e87 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568e8b jle 0x10568fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10568fd7;
  /* 10568e91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568e94 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568e97 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10568e9a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568e9d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10568ea0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568ea3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10568ea6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568eaa jbe 0x10568eb3 */
  if ((C.cf||C.zf)) goto L_10568eb3;
  /* 10568eac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10568eb3:;
  /* 10568eb3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568eb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10568eb9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10568ebc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10568ebf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568ec2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568ec5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568ec8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10568ecb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568ece mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568ed1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10568ed4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10568ed7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568eda mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10568edd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568ee0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568ee3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568ee6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10568ee9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568eec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568eef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10568ef2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568ef5 jne 0x10568fc3 */
  if (!C.zf) goto L_10568fc3;
  /* 10568efb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568eff jae 0x10568f5c */
  if (!C.cf) goto L_10568f5c;
  /* 10568f01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f04 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568f07 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10568f0b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f0e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568f11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10568f14 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10568f17 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f1a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568f1d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10568f20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568f22 jne 0x10568f3a */
  if (!C.zf) goto L_10568f3a;
  /* 10568f24 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568f29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568f2c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568f31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10568f33 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10568f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568f38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10568f3a:;
  /* 10568f3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568f3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568f42 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10568f44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568f47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f4a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10568f4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568f50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568f53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f56 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10568f5a jmp 0x10568fc3 */
  goto L_10568fc3;
L_10568f5c:;
  /* 10568f5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f5f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568f62 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10568f66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f69 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568f6c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10568f6f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10568f72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568f75 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568f78 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10568f7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10568f7d jne 0x10568f9a */
  if (!C.zf) goto L_10568f9a;
  /* 10568f7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568f82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568f85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10568f8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10568f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568f8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10568f92 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10568f94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10568f97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10568f9a:;
  /* 10568f9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10568f9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10568fa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10568fa5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10568fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568faa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568fad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10568fb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10568fb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10568fb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10568fbc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10568fc3:;
  /* 10568fc3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568fc6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568fc9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10568fcb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10568fce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568fd1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10568fd4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10568fd7:;
  /* 10568fd7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568fda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568fdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568fe0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10568fe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568fe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568fe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10568feb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10568fee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10568ff1 jmp 0x105692b2 */
  goto L_105692b2;
L_10568ff6:;
  /* 10568ff6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10568ff9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10568ffc jge 0x105692b2 */
  if ((C.sf==C.of)) goto L_105692b2;
  /* 10569002 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10569005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569008 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056900b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1056900d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10569010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569013 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10569016 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569019 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1056901c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056901f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569022 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10569025 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569028 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056902b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1056902e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569031 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10569034 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569037 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1056903a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056903e jbe 0x10569047 */
  if ((C.cf||C.zf)) goto L_10569047;
  /* 10569040 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10569047:;
  /* 10569047 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056904a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1056904d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056904f jne 0x10569190 */
  if (!C.zf) goto L_10569190;
  /* 10569055 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10569058 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1056905b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056905e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10569061 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569065 jbe 0x1056906e */
  if ((C.cf||C.zf)) goto L_1056906e;
  /* 10569067 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1056906e:;
  /* 1056906e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569071 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569074 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10569077 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056907a jne 0x10569150 */
  if (!C.zf) goto L_10569150;
  /* 10569080 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569084 jae 0x105690e5 */
  if (!C.cf) goto L_105690e5;
  /* 10569086 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1056908b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056908e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10569090 not edx */
  EDX = (~(EDX));
  /* 10569092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569095 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569098 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1056909c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1056909e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105690a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105690a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105690a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105690ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105690ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105690b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105690b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105690b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105690ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105690bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105690c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105690c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105690c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105690c9 jne 0x105690e3 */
  if (!C.zf) goto L_105690e3;
  /* 105690cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105690d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105690d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105690d5 not edx */
  EDX = (~(EDX));
  /* 105690d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105690da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105690dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105690de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105690e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105690e3:;
  /* 105690e3 jmp 0x10569150 */
  goto L_10569150;
L_105690e5:;
  /* 105690e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105690e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105690eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105690f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105690f2 not eax */
  EAX = (~(EAX));
  /* 105690f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105690f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105690fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10569101 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10569103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569106 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569109 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10569110 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569113 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569116 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10569119 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1056911c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056911f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569122 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10569125 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569128 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056912b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1056912f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10569131 jne 0x10569150 */
  if (!C.zf) goto L_10569150;
  /* 10569133 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10569136 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569139 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1056913e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10569140 not eax */
  EAX = (~(EAX));
  /* 10569142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569145 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10569148 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1056914a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056914d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10569150:;
  /* 10569150 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569153 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10569156 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569159 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056915c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1056915f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569162 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10569165 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569168 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1056916b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1056916e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569171 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569174 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10569177 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056917a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1056917d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569180 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10569183 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569187 jbe 0x10569190 */
  if ((C.cf||C.zf)) goto L_10569190;
  /* 10569189 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10569190:;
  /* 10569190 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569196 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10569199 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1056919c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056919f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105691a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105691a5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105691a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105691ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105691ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105691b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105691b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105691b7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105691ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105691bd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105691c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105691c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105691c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105691c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105691cc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105691cf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105691d2 jne 0x1056929e */
  if (!C.zf) goto L_1056929e;
  /* 105691d8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105691dc jae 0x10569238 */
  if (!C.cf) goto L_10569238;
  /* 105691de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105691e1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105691e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105691e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105691eb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105691ee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105691f1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105691f3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105691f6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105691f9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105691fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105691fe jne 0x10569216 */
  if (!C.zf) goto L_10569216;
  /* 10569200 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10569205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569208 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1056920a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056920d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056920f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10569211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569214 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10569216:;
  /* 10569216 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1056921b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056921e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10569220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569223 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569226 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1056922a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1056922c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056922f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569232 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10569236 jmp 0x1056929e */
  goto L_1056929e;
L_10569238:;
  /* 10569238 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056923b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056923e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10569242 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569245 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569248 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1056924b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1056924d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569250 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569253 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10569256 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10569258 jne 0x10569275 */
  if (!C.zf) goto L_10569275;
  /* 1056925a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056925d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569260 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10569265 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10569267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056926a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056926d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1056926f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569272 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10569275:;
  /* 10569275 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569278 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056927b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10569280 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10569282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569285 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569288 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1056928f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10569291 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569294 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10569297 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1056929e:;
  /* 1056929e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105692a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105692a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105692a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105692a9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105692ac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105692af mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_105692b2:;
  /* 105692b2 mov eax, 1 */
  EAX = (0x1u);
L_105692b7:;
  /* 105692b7 mov esp, ebp */
  ESP = (EBP);
  /* 105692b9 pop ebp */
  EBP = (pop32());
  /* 105692ba ret  */
  ESPCHK(0x10568cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092c0 @ 0x105692c0 (304 bytes, 79 insns) */
void f_105692c0(void) {
  FTRACE(0x105692c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105692c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105692c1 mov ebp, esp */
  EBP = (ESP);
  /* 105692c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105692c4 cmp dword ptr [0x10590ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105692cb je 0x105693ec */
  if (C.zf) goto L_105693ec;
  /* 105692d1 mov eax, dword ptr [0x10590eb8] */
  EAX = (r32((uint32_t)(0x10590eb8)));
  /* 105692d6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 105692d9 mov ecx, dword ptr [0x10590ec0] */
  ECX = (r32((uint32_t)(0x10590ec0)));
  /* 105692df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105692e2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105692e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105692e7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105692ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105692f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105692f4 push eax */
  push32((uint32_t)(EAX));
  /* 105692f5 call dword ptr [0x10592364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592364))), 0x105692fbu);
  /* 105692fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10569300 mov ecx, dword ptr [0x10590eb8] */
  ECX = (r32((uint32_t)(0x10590eb8)));
  /* 10569306 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10569308 mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 1056930d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10569310 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10569312 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 10569318 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1056931b mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 10569320 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10569323 mov edx, dword ptr [0x10590eb8] */
  EDX = (r32((uint32_t)(0x10590eb8)));
  /* 10569329 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10569334 mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 10569339 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056933c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1056933f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10569342 mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 10569347 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056934a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1056934d mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 10569353 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10569356 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1056935a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056935c jne 0x10569372 */
  if (!C.zf) goto L_10569372;
  /* 1056935e mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 10569364 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10569367 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10569369 mov ecx, dword ptr [0x10590ec0] */
  ECX = (r32((uint32_t)(0x10590ec0)));
  /* 1056936f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10569372:;
  /* 10569372 mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 10569378 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056937c jne 0x105693e2 */
  if (!C.zf) goto L_105693e2;
  /* 1056937e cmp dword ptr [0x10590ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10590ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569385 jle 0x105693e2 */
  if ((C.zf||C.sf!=C.of)) goto L_105693e2;
  /* 10569387 mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 1056938c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056938f push ecx */
  push32((uint32_t)(ECX));
  /* 10569390 push 0 */
  push32((uint32_t)(0x0u));
  /* 10569392 mov edx, dword ptr [0x10590ecc] */
  EDX = (r32((uint32_t)(0x10590ecc)));
  /* 10569398 push edx */
  push32((uint32_t)(EDX));
  /* 10569399 call dword ptr [0x10592360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592360))), 0x1056939fu);
  /* 1056939f mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 105693a4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105693a7 mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 105693ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105693af mov edx, dword ptr [0x10590ec0] */
  EDX = (r32((uint32_t)(0x10590ec0)));
  /* 105693b5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105693b8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105693ba push ecx */
  push32((uint32_t)(ECX));
  /* 105693bb mov eax, dword ptr [0x10590ec0] */
  EAX = (r32((uint32_t)(0x10590ec0)));
  /* 105693c0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105693c3 push eax */
  push32((uint32_t)(EAX));
  /* 105693c4 mov ecx, dword ptr [0x10590ec0] */
  ECX = (r32((uint32_t)(0x10590ec0)));
  /* 105693ca push ecx */
  push32((uint32_t)(ECX));
  /* 105693cb call 0x1056b9f0 */
  push32(0x105693d0u); f_1056b9f0();
  /* 105693d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105693d3 mov edx, dword ptr [0x10590ec4] */
  EDX = (r32((uint32_t)(0x10590ec4)));
  /* 105693d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105693dc mov dword ptr [0x10590ec4], edx */
  w32((uint32_t)(0x10590ec4), (EDX));
L_105693e2:;
  /* 105693e2 mov dword ptr [0x10590ec0], 0 */
  w32((uint32_t)(0x10590ec0), (0x0u));
L_105693ec:;
  /* 105693ec mov esp, ebp */
  ESP = (EBP);
  /* 105693ee pop ebp */
  EBP = (pop32());
  /* 105693ef ret  */
  ESPCHK(0x105692c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x105693f0 (1565 bytes, 343 insns) */
void f_105693f0(void) {
  FTRACE(0x105693f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105693f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105693f1 mov ebp, esp */
  EBP = (ESP);
  /* 105693f3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105693f9 mov eax, dword ptr [0x10590ec4] */
  EAX = (r32((uint32_t)(0x10590ec4)));
  /* 105693fe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10569401 push eax */
  push32((uint32_t)(EAX));
  /* 10569402 mov ecx, dword ptr [0x10590ec8] */
  ECX = (r32((uint32_t)(0x10590ec8)));
  /* 10569408 push ecx */
  push32((uint32_t)(ECX));
  /* 10569409 call dword ptr [0x10592338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592338))), 0x1056940fu);
  /* 1056940f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569411 je 0x1056941b */
  if (C.zf) goto L_1056941b;
  /* 10569413 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10569416 jmp 0x10569a09 */
  goto L_10569a09;
L_1056941b:;
  /* 1056941b mov edx, dword ptr [0x10590ec8] */
  EDX = (r32((uint32_t)(0x10590ec8)));
  /* 10569421 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10569427 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10569431 jmp 0x10569442 */
  goto L_10569442;
L_10569433:;
  /* 10569433 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10569439 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056943c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10569442:;
  /* 10569442 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10569448 cmp ecx, dword ptr [0x10590ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056944e jge 0x10569a07 */
  if ((C.sf==C.of)) goto L_10569a07;
  /* 10569454 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1056945a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056945d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10569463 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10569468 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1056946e push ecx */
  push32((uint32_t)(ECX));
  /* 1056946f call dword ptr [0x10592338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592338))), 0x10569475u);
  /* 10569475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569477 je 0x10569483 */
  if (C.zf) goto L_10569483;
  /* 10569479 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1056947e jmp 0x10569a09 */
  goto L_10569a09;
L_10569483:;
  /* 10569483 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10569489 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056948c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10569492 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10569498 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056949e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105694a1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105694a7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105694aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105694ad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 105694b7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 105694c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105694c8 jmp 0x105694d3 */
  goto L_105694d3;
L_105694ca:;
  /* 105694ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105694cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105694d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105694d3:;
  /* 105694d3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105694d7 jge 0x105699cb */
  if ((C.sf==C.of)) goto L_105699cb;
  /* 105694dd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 105694e7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 105694f1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 105694fb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10569505 jmp 0x10569516 */
  goto L_10569516;
L_10569507:;
  /* 10569507 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1056950d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569510 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10569516:;
  /* 10569516 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056951d jge 0x10569532 */
  if ((C.sf==C.of)) goto L_10569532;
  /* 1056951f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10569525 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10569530 jmp 0x10569507 */
  goto L_10569507;
L_10569532:;
  /* 10569532 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569536 jl 0x1056996d */
  if ((C.sf!=C.of)) goto L_1056996d;
  /* 1056953c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10569541 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10569547 push ecx */
  push32((uint32_t)(ECX));
  /* 10569548 call dword ptr [0x10592338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592338))), 0x1056954eu);
  /* 1056954e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569550 je 0x1056955c */
  if (C.zf) goto L_1056955c;
  /* 10569552 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10569557 jmp 0x10569a09 */
  goto L_10569a09;
L_1056955c:;
  /* 1056955c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10569562 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10569565 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1056956f jmp 0x10569580 */
  goto L_10569580;
L_10569571:;
  /* 10569571 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10569577 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056957a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10569580:;
  /* 10569580 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569587 jge 0x10569704 */
  if ((C.sf==C.of)) goto L_10569704;
  /* 1056958d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569590 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569593 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10569599 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1056959f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105695a5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 105695ab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105695b1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105695b5 jne 0x105695c2 */
  if (!C.zf) goto L_105695c2;
  /* 105695b7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 105695bd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105695c0 je 0x105695cc */
  if (C.zf) goto L_105695cc;
L_105695c2:;
  /* 105695c2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 105695c7 jmp 0x10569a09 */
  goto L_10569a09;
L_105695cc:;
  /* 105695cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105695d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105695d4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 105695da mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 105695e0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 105695e6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 105695ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105695ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105695f1 je 0x10569629 */
  if (C.zf) goto L_10569629;
  /* 105695f3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 105695f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105695fc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10569602 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056960c jle 0x10569618 */
  if ((C.zf||C.sf!=C.of)) goto L_10569618;
  /* 1056960e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10569613 jmp 0x10569a09 */
  goto L_10569a09;
L_10569618:;
  /* 10569618 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1056961e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569621 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10569627 jmp 0x1056966b */
  goto L_1056966b;
L_10569629:;
  /* 10569629 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1056962f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10569632 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569635 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1056963b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569642 jle 0x1056964e */
  if ((C.zf||C.sf!=C.of)) goto L_1056964e;
  /* 10569644 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1056964e:;
  /* 1056964e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10569654 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1056965b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056965e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10569664 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1056966b:;
  /* 1056966b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569672 jl 0x1056968d */
  if ((C.sf!=C.of)) goto L_1056968d;
  /* 10569674 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1056967a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1056967d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056967f jne 0x1056968d */
  if (!C.zf) goto L_1056968d;
  /* 10569681 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056968b jle 0x10569697 */
  if ((C.zf||C.sf!=C.of)) goto L_10569697;
L_1056968d:;
  /* 1056968d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10569692 jmp 0x10569a09 */
  goto L_10569a09;
L_10569697:;
  /* 10569697 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1056969d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105696a3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105696a6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105696ac je 0x105696b8 */
  if (C.zf) goto L_105696b8;
  /* 105696ae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105696b3 jmp 0x10569a09 */
  goto L_10569a09;
L_105696b8:;
  /* 105696b8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105696be add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105696c4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 105696ca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105696d0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105696d6 jb 0x105695cc */
  if (C.cf) goto L_105695cc;
  /* 105696dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105696e2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105696e8 je 0x105696f4 */
  if (C.zf) goto L_105696f4;
  /* 105696ea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105696ef jmp 0x10569a09 */
  goto L_10569a09;
L_105696f4:;
  /* 105696f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105696f7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105696fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105696ff jmp 0x10569571 */
  goto L_10569571;
L_10569704:;
  /* 10569704 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10569707 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10569709 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056970f je 0x1056971b */
  if (C.zf) goto L_1056971b;
  /* 10569711 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10569716 jmp 0x10569a09 */
  goto L_10569a09;
L_1056971b:;
  /* 1056971b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056971e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10569724 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1056972b jmp 0x10569736 */
  goto L_10569736;
L_1056972d:;
  /* 1056972d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10569730 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569733 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10569736:;
  /* 10569736 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056973a jge 0x1056996d */
  if ((C.sf==C.of)) goto L_1056996d;
  /* 10569740 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1056974a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10569750 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10569756:;
  /* 10569756 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1056975c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056975f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10569765 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1056976b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569771 je 0x1056989a */
  if (C.zf) goto L_1056989a;
  /* 10569777 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056977a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10569780 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569787 je 0x1056989a */
  if (C.zf) goto L_1056989a;
  /* 1056978d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10569793 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569799 jb 0x105697ae */
  if (C.cf) goto L_105697ae;
  /* 1056979b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 105697a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105697a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105697ac jb 0x105697b8 */
  if (C.cf) goto L_105697b8;
L_105697ae:;
  /* 105697ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 105697b3 jmp 0x10569a09 */
  goto L_10569a09;
L_105697b8:;
  /* 105697b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105697be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 105697c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 105697ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 105697d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105697d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105697d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105697d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105697de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_105697e4:;
  /* 105697e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105697e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105697ed je 0x1056980e */
  if (C.zf) goto L_1056980e;
  /* 105697ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105697f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105697f8 jne 0x105697fc */
  if (!C.zf) goto L_105697fc;
  /* 105697fa jmp 0x1056980e */
  goto L_1056980e;
L_105697fc:;
  /* 105697fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105697ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10569801 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10569804 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10569807 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569809 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1056980c jmp 0x105697e4 */
  goto L_105697e4;
L_1056980e:;
  /* 1056980e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10569811 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569817 jne 0x10569823 */
  if (!C.zf) goto L_10569823;
  /* 10569819 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1056981e jmp 0x10569a09 */
  goto L_10569a09;
L_10569823:;
  /* 10569823 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10569829 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056982b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1056982e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569831 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10569837 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056983e jle 0x1056984a */
  if ((C.zf||C.sf!=C.of)) goto L_1056984a;
  /* 10569840 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1056984a:;
  /* 1056984a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10569850 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569853 je 0x1056985f */
  if (C.zf) goto L_1056985f;
  /* 10569855 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1056985a jmp 0x10569a09 */
  goto L_10569a09;
L_1056985f:;
  /* 1056985f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10569865 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10569868 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056986e je 0x1056987a */
  if (C.zf) goto L_1056987a;
  /* 10569870 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10569875 jmp 0x10569a09 */
  goto L_10569a09;
L_1056987a:;
  /* 1056987a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10569880 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10569886 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1056988c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056988f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10569895 jmp 0x10569756 */
  goto L_10569756;
L_1056989a:;
  /* 1056989a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105698a1 je 0x10569911 */
  if (C.zf) goto L_10569911;
  /* 105698a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105698a7 jge 0x105698db */
  if ((C.sf==C.of)) goto L_105698db;
  /* 105698a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105698ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105698b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105698b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 105698b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105698bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 105698c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105698c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105698c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105698cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105698d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105698d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 105698d9 jmp 0x10569911 */
  goto L_10569911;
L_105698db:;
  /* 105698db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105698de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105698e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105698e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105698e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 105698ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105698f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 105698f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105698f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105698fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10569901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10569903 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10569909 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1056990b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10569911:;
  /* 10569911 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10569917 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056991a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569920 jne 0x10569934 */
  if (!C.zf) goto L_10569934;
  /* 10569922 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10569925 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1056992b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569932 je 0x1056993e */
  if (C.zf) goto L_1056993e;
L_10569934:;
  /* 10569934 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10569939 jmp 0x10569a09 */
  goto L_10569a09;
L_1056993e:;
  /* 1056993e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10569944 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10569947 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056994d je 0x10569959 */
  if (C.zf) goto L_10569959;
  /* 1056994f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10569954 jmp 0x10569a09 */
  goto L_10569a09;
L_10569959:;
  /* 10569959 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1056995f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569962 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10569968 jmp 0x1056972d */
  goto L_1056972d;
L_1056996d:;
  /* 1056996d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569970 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10569976 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1056997c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569980 jne 0x1056999a */
  if (!C.zf) goto L_1056999a;
  /* 10569982 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569985 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1056998b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10569991 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569998 je 0x105699a1 */
  if (C.zf) goto L_105699a1;
L_1056999a:;
  /* 1056999a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1056999f jmp 0x10569a09 */
  goto L_10569a09;
L_105699a1:;
  /* 105699a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 105699a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105699ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 105699b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105699b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105699bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105699be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105699c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105699c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105699c6 jmp 0x105694ca */
  goto L_105694ca;
L_105699cb:;
  /* 105699cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105699d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105699d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105699d9 jne 0x105699ec */
  if (!C.zf) goto L_105699ec;
  /* 105699db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105699e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 105699e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105699ea je 0x105699f3 */
  if (C.zf) goto L_105699f3;
L_105699ec:;
  /* 105699ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 105699f1 jmp 0x10569a09 */
  goto L_10569a09;
L_105699f3:;
  /* 105699f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105699f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105699fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10569a02 jmp 0x10569433 */
  goto L_10569433;
L_10569a07:;
  /* 10569a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10569a09:;
  /* 10569a09 mov esp, ebp */
  ESP = (EBP);
  /* 10569a0b pop ebp */
  EBP = (pop32());
  /* 10569a0c ret  */
  ESPCHK(0x105693f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a10 @ 0x10569a10 (250 bytes, 92 insns) */
void f_10569a10(void) {
  FTRACE(0x10569a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10569a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10569a11 mov ebp, esp */
  EBP = (ESP);
  /* 10569a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569a16 push ebx */
  push32((uint32_t)(EBX));
  /* 10569a17 push esi */
  push32((uint32_t)(ESI));
  /* 10569a18 push edi */
  push32((uint32_t)(EDI));
  /* 10569a19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10569a1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10569a1f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10569a22 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10569a25:;
  /* 10569a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569a29 jne 0x10569a49 */
  if (!C.zf) goto L_10569a49;
  /* 10569a2b push 0x1058afb4 */
  push32((uint32_t)(0x1058afb4u));
  /* 10569a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10569a32 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10569a34 push 0x1058afa8 */
  push32((uint32_t)(0x1058afa8u));
  /* 10569a39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10569a3b call 0x10562bc0 */
  push32(0x10569a40u); f_10562bc0();
  /* 10569a40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569a43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569a46 jne 0x10569a49 */
  if (!C.zf) goto L_10569a49;
  /* 10569a48 int3  */
  x86_unimpl("int3 @ 0x10569a48");
L_10569a49:;
  /* 10569a49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10569a4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10569a4d jne 0x10569a25 */
  if (!C.zf) goto L_10569a25;
L_10569a4f:;
  /* 10569a4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569a53 jne 0x10569a73 */
  if (!C.zf) goto L_10569a73;
  /* 10569a55 push 0x1058af98 */
  push32((uint32_t)(0x1058af98u));
  /* 10569a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10569a5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10569a5e push 0x1058afa8 */
  push32((uint32_t)(0x1058afa8u));
  /* 10569a63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10569a65 call 0x10562bc0 */
  push32(0x10569a6au); f_10562bc0();
  /* 10569a6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569a6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569a70 jne 0x10569a73 */
  if (!C.zf) goto L_10569a73;
  /* 10569a72 int3  */
  x86_unimpl("int3 @ 0x10569a72");
L_10569a73:;
  /* 10569a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569a77 jne 0x10569a4f */
  if (!C.zf) goto L_10569a4f;
  /* 10569a79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569a7c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10569a83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569a89 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10569a8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569a92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10569a94 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569a97 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10569a9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10569aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10569aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10569aa5 push edx */
  push32((uint32_t)(EDX));
  /* 10569aa6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569aa9 push eax */
  push32((uint32_t)(EAX));
  /* 10569aaa call 0x1056aa90 */
  push32(0x10569aafu); f_1056aa90();
  /* 10569aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569ab2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10569ab5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569ab8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10569abb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569abe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569ac1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10569ac4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569ac7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569acb jl 0x10569aef */
  if ((C.sf!=C.of)) goto L_10569aef;
  /* 10569acd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569ad0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10569ad2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10569ad5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10569ad7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10569add mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10569ae0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569ae3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10569ae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569ae8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569aeb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10569aed jmp 0x10569b00 */
  goto L_10569b00;
L_10569aef:;
  /* 10569aef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569af2 push edx */
  push32((uint32_t)(EDX));
  /* 10569af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10569af5 call 0x1056a810 */
  push32(0x10569afau); f_1056a810();
  /* 10569afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569afd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10569b00:;
  /* 10569b00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569b03 pop edi */
  EDI = (pop32());
  /* 10569b04 pop esi */
  ESI = (pop32());
  /* 10569b05 pop ebx */
  EBX = (pop32());
  /* 10569b06 mov esp, ebp */
  ESP = (EBP);
  /* 10569b08 pop ebp */
  EBP = (pop32());
  /* 10569b09 ret  */
  ESPCHK(0x10569a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x10569b10 (183 bytes, 58 insns) */
void f_10569b10(void) {
  FTRACE(0x10569b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10569b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10569b11 mov ebp, esp */
  EBP = (ESP);
  /* 10569b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569b1c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569b21 ja 0x10569b3a */
  if ((!C.cf&&!C.zf)) goto L_10569b3a;
  /* 10569b23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569b26 mov edx, dword ptr [0x1058dc98] */
  EDX = (r32((uint32_t)(0x1058dc98)));
  /* 10569b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569b2e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10569b32 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10569b35 jmp 0x10569bc3 */
  goto L_10569bc3;
L_10569b3a:;
  /* 10569b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569b3d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10569b40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10569b46 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10569b4c mov edx, dword ptr [0x1058dc98] */
  EDX = (r32((uint32_t)(0x1058dc98)));
  /* 10569b52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569b54 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10569b58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10569b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569b5f je 0x10569b83 */
  if (C.zf) goto L_10569b83;
  /* 10569b61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569b64 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10569b67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10569b6d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10569b70 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10569b73 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10569b76 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10569b7a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10569b81 jmp 0x10569b94 */
  goto L_10569b94;
L_10569b83:;
  /* 10569b83 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10569b86 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10569b89 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10569b8d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10569b94:;
  /* 10569b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10569b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10569b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10569b9a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10569b9d push ecx */
  push32((uint32_t)(ECX));
  /* 10569b9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569ba1 push edx */
  push32((uint32_t)(EDX));
  /* 10569ba2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10569ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10569ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10569ba8 call 0x1056bd30 */
  push32(0x10569badu); f_1056bd30();
  /* 10569bad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569bb2 jne 0x10569bb8 */
  if (!C.zf) goto L_10569bb8;
  /* 10569bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569bb6 jmp 0x10569bc3 */
  goto L_10569bc3;
L_10569bb8:;
  /* 10569bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569bbb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10569bc0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10569bc3:;
  /* 10569bc3 mov esp, ebp */
  ESP = (EBP);
  /* 10569bc5 pop ebp */
  EBP = (pop32());
  /* 10569bc6 ret  */
  ESPCHK(0x10569b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x10569bd0 (836 bytes, 238 insns) */
void f_10569bd0(void) {
  FTRACE(0x10569bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10569bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10569bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10569bd3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569bd6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569bd8 call 0x10567500 */
  push32(0x10569bddu); f_10567500();
  /* 10569bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569be3 push eax */
  push32((uint32_t)(EAX));
  /* 10569be4 call 0x10569f20 */
  push32(0x10569be9u); f_10569f20();
  /* 10569be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569bec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10569bef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569bf2 cmp ecx, dword ptr [0x10590c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569bf8 jne 0x10569c0b */
  if (!C.zf) goto L_10569c0b;
  /* 10569bfa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569bfc call 0x105675a0 */
  push32(0x10569c01u); f_105675a0();
  /* 10569c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569c06 jmp 0x10569f10 */
  goto L_10569f10;
L_10569c0b:;
  /* 10569c0b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569c0f jne 0x10569c2c */
  if (!C.zf) goto L_10569c2c;
  /* 10569c11 call 0x1056a000 */
  push32(0x10569c16u); f_1056a000();
  /* 10569c16 call 0x1056a080 */
  push32(0x10569c1bu); f_1056a080();
  /* 10569c1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569c1d call 0x105675a0 */
  push32(0x10569c22u); f_105675a0();
  /* 10569c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569c27 jmp 0x10569f10 */
  goto L_10569f10;
L_10569c2c:;
  /* 10569c2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10569c33 jmp 0x10569c3e */
  goto L_10569c3e;
L_10569c35:;
  /* 10569c35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569c3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10569c3e:;
  /* 10569c3e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569c42 jae 0x10569d8f */
  if (!C.cf) goto L_10569d8f;
  /* 10569c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569c4b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10569c4e mov ecx, dword ptr [eax + 0x1058deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1058deb8)));
  /* 10569c54 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569c57 jne 0x10569d8a */
  if (!C.zf) goto L_10569d8a;
  /* 10569c5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10569c64 jmp 0x10569c6f */
  goto L_10569c6f;
L_10569c66:;
  /* 10569c66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569c69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569c6c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10569c6f:;
  /* 10569c6f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569c76 jae 0x10569c84 */
  if (!C.cf) goto L_10569c84;
  /* 10569c78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569c7b mov byte ptr [eax + 0x10590da0], 0 */
  w8((uint32_t)(EAX + 0x10590da0), (0x0u));
  /* 10569c82 jmp 0x10569c66 */
  goto L_10569c66;
L_10569c84:;
  /* 10569c84 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10569c8b jmp 0x10569c96 */
  goto L_10569c96;
L_10569c8d:;
  /* 10569c8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569c90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569c93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10569c96:;
  /* 10569c96 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569c9a jae 0x10569d17 */
  if (!C.cf) goto L_10569d17;
  /* 10569c9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569c9f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10569ca2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569ca5 lea ecx, [edx + eax*8 + 0x1058dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1058dec8));
  /* 10569cac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10569caf jmp 0x10569cba */
  goto L_10569cba;
L_10569cb1:;
  /* 10569cb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569cb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569cb7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10569cba:;
  /* 10569cba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569cbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10569cbf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10569cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10569cc3 je 0x10569d12 */
  if (C.zf) goto L_10569d12;
  /* 10569cc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569cca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10569ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569ccf je 0x10569d12 */
  if (C.zf) goto L_10569d12;
  /* 10569cd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10569cd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10569cd8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10569cdb jmp 0x10569ce6 */
  goto L_10569ce6;
L_10569cdd:;
  /* 10569cdd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569ce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569ce3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10569ce6:;
  /* 10569ce6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10569ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10569ceb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10569cee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569cf1 ja 0x10569d10 */
  if ((!C.cf&&!C.zf)) goto L_10569d10;
  /* 10569cf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569cf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569cf9 mov dl, byte ptr [eax + 0x10590da1] */
  DL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 10569cff or dl, byte ptr [ecx + 0x1058deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1058deb0))); DL = (_r); fl_logic(_r,8); }
  /* 10569d05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569d08 mov byte ptr [eax + 0x10590da1], dl */
  w8((uint32_t)(EAX + 0x10590da1), (DL));
  /* 10569d0e jmp 0x10569cdd */
  goto L_10569cdd;
L_10569d10:;
  /* 10569d10 jmp 0x10569cb1 */
  goto L_10569cb1;
L_10569d12:;
  /* 10569d12 jmp 0x10569c8d */
  goto L_10569c8d;
L_10569d17:;
  /* 10569d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569d1a mov dword ptr [0x10590c04], ecx */
  w32((uint32_t)(0x10590c04), (ECX));
  /* 10569d20 mov dword ptr [0x10590c8c], 1 */
  w32((uint32_t)(0x10590c8c), (0x1u));
  /* 10569d2a mov edx, dword ptr [0x10590c04] */
  EDX = (r32((uint32_t)(0x10590c04)));
  /* 10569d30 push edx */
  push32((uint32_t)(EDX));
  /* 10569d31 call 0x10569f80 */
  push32(0x10569d36u); f_10569f80();
  /* 10569d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569d39 mov dword ptr [0x10590ea4], eax */
  w32((uint32_t)(0x10590ea4), (EAX));
  /* 10569d3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10569d45 jmp 0x10569d50 */
  goto L_10569d50;
L_10569d47:;
  /* 10569d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569d4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10569d50:;
  /* 10569d50 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569d54 jae 0x10569d74 */
  if (!C.cf) goto L_10569d74;
  /* 10569d56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569d59 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10569d5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569d5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569d62 mov cx, word ptr [ecx + eax*2 + 0x1058debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1058debc)));
  /* 10569d6a mov word ptr [edx*2 + 0x10590c80], cx */
  w16((uint32_t)(EDX*2 + 0x10590c80), (CX));
  /* 10569d72 jmp 0x10569d47 */
  goto L_10569d47;
L_10569d74:;
  /* 10569d74 call 0x1056a080 */
  push32(0x10569d79u); f_1056a080();
  /* 10569d79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569d7b call 0x105675a0 */
  push32(0x10569d80u); f_105675a0();
  /* 10569d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569d85 jmp 0x10569f10 */
  goto L_10569f10;
L_10569d8a:;
  /* 10569d8a jmp 0x10569c35 */
  goto L_10569c35;
L_10569d8f:;
  /* 10569d8f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10569d92 push edx */
  push32((uint32_t)(EDX));
  /* 10569d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569d96 push eax */
  push32((uint32_t)(EAX));
  /* 10569d97 call dword ptr [0x10592328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592328))), 0x10569d9du);
  /* 10569d9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569da0 jne 0x10569ee2 */
  if (!C.zf) goto L_10569ee2;
  /* 10569da6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10569dad jmp 0x10569db8 */
  goto L_10569db8;
L_10569daf:;
  /* 10569daf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569db5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10569db8:;
  /* 10569db8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569dbf jae 0x10569dcd */
  if (!C.cf) goto L_10569dcd;
  /* 10569dc1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569dc4 mov byte ptr [edx + 0x10590da0], 0 */
  w8((uint32_t)(EDX + 0x10590da0), (0x0u));
  /* 10569dcb jmp 0x10569daf */
  goto L_10569daf;
L_10569dcd:;
  /* 10569dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569dd0 mov dword ptr [0x10590c04], eax */
  w32((uint32_t)(0x10590c04), (EAX));
  /* 10569dd5 mov dword ptr [0x10590ea4], 0 */
  w32((uint32_t)(0x10590ea4), (0x0u));
  /* 10569ddf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569de3 jbe 0x10569e9e */
  if ((C.cf||C.zf)) goto L_10569e9e;
  /* 10569de9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10569dec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10569def jmp 0x10569dfa */
  goto L_10569dfa;
L_10569df1:;
  /* 10569df1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569df4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569df7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10569dfa:;
  /* 10569dfa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10569dff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10569e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10569e03 je 0x10569e4c */
  if (C.zf) goto L_10569e4c;
  /* 10569e05 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569e0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10569e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10569e0f je 0x10569e4c */
  if (C.zf) goto L_10569e4c;
  /* 10569e11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10569e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10569e18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10569e1b jmp 0x10569e26 */
  goto L_10569e26;
L_10569e1d:;
  /* 10569e1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569e23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10569e26:;
  /* 10569e26 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10569e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10569e2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10569e2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569e31 ja 0x10569e4a */
  if ((!C.cf&&!C.zf)) goto L_10569e4a;
  /* 10569e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569e36 mov cl, byte ptr [eax + 0x10590da1] */
  CL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 10569e3c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10569e3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569e42 mov byte ptr [edx + 0x10590da1], cl */
  w8((uint32_t)(EDX + 0x10590da1), (CL));
  /* 10569e48 jmp 0x10569e1d */
  goto L_10569e1d;
L_10569e4a:;
  /* 10569e4a jmp 0x10569df1 */
  goto L_10569df1;
L_10569e4c:;
  /* 10569e4c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10569e53 jmp 0x10569e5e */
  goto L_10569e5e;
L_10569e55:;
  /* 10569e55 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569e58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569e5b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10569e5e:;
  /* 10569e5e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569e65 jae 0x10569e7e */
  if (!C.cf) goto L_10569e7e;
  /* 10569e67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569e6a mov dl, byte ptr [ecx + 0x10590da1] */
  DL = (r8((uint32_t)(ECX + 0x10590da1)));
  /* 10569e70 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10569e73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10569e76 mov byte ptr [eax + 0x10590da1], dl */
  w8((uint32_t)(EAX + 0x10590da1), (DL));
  /* 10569e7c jmp 0x10569e55 */
  goto L_10569e55;
L_10569e7e:;
  /* 10569e7e mov ecx, dword ptr [0x10590c04] */
  ECX = (r32((uint32_t)(0x10590c04)));
  /* 10569e84 push ecx */
  push32((uint32_t)(ECX));
  /* 10569e85 call 0x10569f80 */
  push32(0x10569e8au); f_10569f80();
  /* 10569e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569e8d mov dword ptr [0x10590ea4], eax */
  w32((uint32_t)(0x10590ea4), (EAX));
  /* 10569e92 mov dword ptr [0x10590c8c], 1 */
  w32((uint32_t)(0x10590c8c), (0x1u));
  /* 10569e9c jmp 0x10569ea8 */
  goto L_10569ea8;
L_10569e9e:;
  /* 10569e9e mov dword ptr [0x10590c8c], 0 */
  w32((uint32_t)(0x10590c8c), (0x0u));
L_10569ea8:;
  /* 10569ea8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10569eaf jmp 0x10569eba */
  goto L_10569eba;
L_10569eb1:;
  /* 10569eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569eb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10569eb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10569eba:;
  /* 10569eba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569ebe jae 0x10569ecf */
  if (!C.cf) goto L_10569ecf;
  /* 10569ec0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10569ec3 mov word ptr [eax*2 + 0x10590c80], 0 */
  w16((uint32_t)(EAX*2 + 0x10590c80), (0x0u));
  /* 10569ecd jmp 0x10569eb1 */
  goto L_10569eb1;
L_10569ecf:;
  /* 10569ecf call 0x1056a080 */
  push32(0x10569ed4u); f_1056a080();
  /* 10569ed4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569ed6 call 0x105675a0 */
  push32(0x10569edbu); f_105675a0();
  /* 10569edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569ede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569ee0 jmp 0x10569f10 */
  goto L_10569f10;
L_10569ee2:;
  /* 10569ee2 cmp dword ptr [0x1058f708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569ee9 je 0x10569f03 */
  if (C.zf) goto L_10569f03;
  /* 10569eeb call 0x1056a000 */
  push32(0x10569ef0u); f_1056a000();
  /* 10569ef0 call 0x1056a080 */
  push32(0x10569ef5u); f_1056a080();
  /* 10569ef5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569ef7 call 0x105675a0 */
  push32(0x10569efcu); f_105675a0();
  /* 10569efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10569f01 jmp 0x10569f10 */
  goto L_10569f10;
L_10569f03:;
  /* 10569f03 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10569f05 call 0x105675a0 */
  push32(0x10569f0au); f_105675a0();
  /* 10569f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10569f0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10569f10:;
  /* 10569f10 mov esp, ebp */
  ESP = (EBP);
  /* 10569f12 pop ebp */
  EBP = (pop32());
  /* 10569f13 ret  */
  ESPCHK(0x10569bd0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10569f20 (89 bytes, 21 insns) */
void f_10569f20(void) {
  FTRACE(0x10569f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10569f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10569f21 mov ebp, esp */
  EBP = (ESP);
  /* 10569f23 mov dword ptr [0x1058f708], 0 */
  w32((uint32_t)(0x1058f708), (0x0u));
  /* 10569f2d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569f31 jne 0x10569f45 */
  if (!C.zf) goto L_10569f45;
  /* 10569f33 mov dword ptr [0x1058f708], 1 */
  w32((uint32_t)(0x1058f708), (0x1u));
  /* 10569f3d call dword ptr [0x105922c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c8))), 0x10569f43u);
  /* 10569f43 jmp 0x10569f77 */
  goto L_10569f77;
L_10569f45:;
  /* 10569f45 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569f49 jne 0x10569f5d */
  if (!C.zf) goto L_10569f5d;
  /* 10569f4b mov dword ptr [0x1058f708], 1 */
  w32((uint32_t)(0x1058f708), (0x1u));
  /* 10569f55 call dword ptr [0x105922cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922cc))), 0x10569f5bu);
  /* 10569f5b jmp 0x10569f77 */
  goto L_10569f77;
L_10569f5d:;
  /* 10569f5d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569f61 jne 0x10569f74 */
  if (!C.zf) goto L_10569f74;
  /* 10569f63 mov dword ptr [0x1058f708], 1 */
  w32((uint32_t)(0x1058f708), (0x1u));
  /* 10569f6d mov eax, dword ptr [0x1058f728] */
  EAX = (r32((uint32_t)(0x1058f728)));
  /* 10569f72 jmp 0x10569f77 */
  goto L_10569f77;
L_10569f74:;
  /* 10569f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10569f77:;
  /* 10569f77 pop ebp */
  EBP = (pop32());
  /* 10569f78 ret  */
  ESPCHK(0x10569f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f80 @ 0x10569f80 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10569f80(void) {
  FTRACE(0x10569f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10569f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10569f81 mov ebp, esp */
  EBP = (ESP);
  /* 10569f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10569f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10569f87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10569f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569f8d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10569f93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10569f96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10569f9a ja 0x10569fca */
  if ((!C.cf&&!C.zf)) goto L_10569fca;
  /* 10569f9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10569f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10569fa1 mov dl, byte ptr [eax + 0x10569fe4] */
  DL = (r8((uint32_t)(EAX + 0x10569fe4)));
  /* 10569fa7 jmp dword ptr [edx*4 + 0x10569fd0] */
  switch (EDX) {
    case 0: goto L_10569fae;
    case 1: goto L_10569fb5;
    case 2: goto L_10569fbc;
    case 3: goto L_10569fc3;
    case 4: goto L_10569fca;
    default: x86_unimpl("switch@0x10569fa7 out of table"); return;
  }
L_10569fae:;
  /* 10569fae mov eax, 0x411 */
  EAX = (0x411u);
  /* 10569fb3 jmp 0x10569fcc */
  goto L_10569fcc;
L_10569fb5:;
  /* 10569fb5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10569fba jmp 0x10569fcc */
  goto L_10569fcc;
L_10569fbc:;
  /* 10569fbc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10569fc1 jmp 0x10569fcc */
  goto L_10569fcc;
L_10569fc3:;
  /* 10569fc3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10569fc8 jmp 0x10569fcc */
  goto L_10569fcc;
L_10569fca:;
  /* 10569fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10569fcc:;
  /* 10569fcc mov esp, ebp */
  ESP = (EBP);
  /* 10569fce pop ebp */
  EBP = (pop32());
  /* 10569fcf ret  */
  ESPCHK(0x10569f80u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1056a000 (116 bytes, 29 insns) */
void f_1056a000(void) {
  FTRACE(0x1056a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1056a001 mov ebp, esp */
  EBP = (ESP);
  /* 1056a003 push ecx */
  push32((uint32_t)(ECX));
  /* 1056a004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056a00b jmp 0x1056a016 */
  goto L_1056a016;
L_1056a00d:;
  /* 1056a00d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056a016:;
  /* 1056a016 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a01d jge 0x1056a02b */
  if ((C.sf==C.of)) goto L_1056a02b;
  /* 1056a01f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a022 mov byte ptr [ecx + 0x10590da0], 0 */
  w8((uint32_t)(ECX + 0x10590da0), (0x0u));
  /* 1056a029 jmp 0x1056a00d */
  goto L_1056a00d;
L_1056a02b:;
  /* 1056a02b mov dword ptr [0x10590c04], 0 */
  w32((uint32_t)(0x10590c04), (0x0u));
  /* 1056a035 mov dword ptr [0x10590c8c], 0 */
  w32((uint32_t)(0x10590c8c), (0x0u));
  /* 1056a03f mov dword ptr [0x10590ea4], 0 */
  w32((uint32_t)(0x10590ea4), (0x0u));
  /* 1056a049 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056a050 jmp 0x1056a05b */
  goto L_1056a05b;
L_1056a052:;
  /* 1056a052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a055 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a058 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056a05b:;
  /* 1056a05b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a05f jge 0x1056a070 */
  if ((C.sf==C.of)) goto L_1056a070;
  /* 1056a061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a064 mov word ptr [eax*2 + 0x10590c80], 0 */
  w16((uint32_t)(EAX*2 + 0x10590c80), (0x0u));
  /* 1056a06e jmp 0x1056a052 */
  goto L_1056a052;
L_1056a070:;
  /* 1056a070 mov esp, ebp */
  ESP = (EBP);
  /* 1056a072 pop ebp */
  EBP = (pop32());
  /* 1056a073 ret  */
  ESPCHK(0x1056a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x1056a080 (770 bytes, 175 insns) */
void f_1056a080(void) {
  FTRACE(0x1056a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a080 push ebp */
  push32((uint32_t)(EBP));
  /* 1056a081 mov ebp, esp */
  EBP = (ESP);
  /* 1056a083 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a089 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1056a08f push eax */
  push32((uint32_t)(EAX));
  /* 1056a090 mov ecx, dword ptr [0x10590c04] */
  ECX = (r32((uint32_t)(0x10590c04)));
  /* 1056a096 push ecx */
  push32((uint32_t)(ECX));
  /* 1056a097 call dword ptr [0x10592328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592328))), 0x1056a09du);
  /* 1056a09d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a0a0 jne 0x1056a2b9 */
  if (!C.zf) goto L_1056a2b9;
  /* 1056a0a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1056a0b0 jmp 0x1056a0c1 */
  goto L_1056a0c1;
L_1056a0b2:;
  /* 1056a0b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a0b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a0bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1056a0c1:;
  /* 1056a0c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a0cb jae 0x1056a0e2 */
  if (!C.cf) goto L_1056a0e2;
  /* 1056a0cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a0d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1056a0d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1056a0e0 jmp 0x1056a0b2 */
  goto L_1056a0b2;
L_1056a0e2:;
  /* 1056a0e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1056a0e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1056a0ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056a0f2 jmp 0x1056a0fd */
  goto L_1056a0fd;
L_1056a0f4:;
  /* 1056a0f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a0f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a0fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056a0fd:;
  /* 1056a0fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a100 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a102 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1056a104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056a106 je 0x1056a148 */
  if (C.zf) goto L_1056a148;
  /* 1056a108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a10b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056a10d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1056a10f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1056a115 jmp 0x1056a126 */
  goto L_1056a126;
L_1056a117:;
  /* 1056a117 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a11d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a120 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1056a126:;
  /* 1056a126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a129 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056a12b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1056a12e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a134 ja 0x1056a146 */
  if ((!C.cf&&!C.zf)) goto L_1056a146;
  /* 1056a136 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a13c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1056a144 jmp 0x1056a117 */
  goto L_1056a117;
L_1056a146:;
  /* 1056a146 jmp 0x1056a0f4 */
  goto L_1056a0f4;
L_1056a148:;
  /* 1056a148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056a14a mov eax, dword ptr [0x10590ea4] */
  EAX = (r32((uint32_t)(0x10590ea4)));
  /* 1056a14f push eax */
  push32((uint32_t)(EAX));
  /* 1056a150 mov ecx, dword ptr [0x10590c04] */
  ECX = (r32((uint32_t)(0x10590c04)));
  /* 1056a156 push ecx */
  push32((uint32_t)(ECX));
  /* 1056a157 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1056a15d push edx */
  push32((uint32_t)(EDX));
  /* 1056a15e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056a163 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1056a169 push eax */
  push32((uint32_t)(EAX));
  /* 1056a16a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056a16c call 0x1056bd30 */
  push32(0x1056a171u); f_1056bd30();
  /* 1056a171 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a174 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056a176 mov ecx, dword ptr [0x10590c04] */
  ECX = (r32((uint32_t)(0x10590c04)));
  /* 1056a17c push ecx */
  push32((uint32_t)(ECX));
  /* 1056a17d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056a182 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1056a188 push edx */
  push32((uint32_t)(EDX));
  /* 1056a189 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056a18e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1056a194 push eax */
  push32((uint32_t)(EAX));
  /* 1056a195 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056a19a mov ecx, dword ptr [0x10590ea4] */
  ECX = (r32((uint32_t)(0x10590ea4)));
  /* 1056a1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1056a1a1 call 0x1056bef0 */
  push32(0x1056a1a6u); f_1056bef0();
  /* 1056a1a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a1a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056a1ab mov edx, dword ptr [0x10590c04] */
  EDX = (r32((uint32_t)(0x10590c04)));
  /* 1056a1b1 push edx */
  push32((uint32_t)(EDX));
  /* 1056a1b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056a1b7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1056a1bd push eax */
  push32((uint32_t)(EAX));
  /* 1056a1be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056a1c3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1056a1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1056a1ca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1056a1cf mov edx, dword ptr [0x10590ea4] */
  EDX = (r32((uint32_t)(0x10590ea4)));
  /* 1056a1d5 push edx */
  push32((uint32_t)(EDX));
  /* 1056a1d6 call 0x1056bef0 */
  push32(0x1056a1dbu); f_1056bef0();
  /* 1056a1db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a1de mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1056a1e8 jmp 0x1056a1f9 */
  goto L_1056a1f9;
L_1056a1ea:;
  /* 1056a1ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a1f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a1f3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1056a1f9:;
  /* 1056a1f9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a203 jae 0x1056a2b4 */
  if (!C.cf) goto L_1056a2b4;
  /* 1056a209 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a20f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a211 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1056a219 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a21c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056a21e je 0x1056a256 */
  if (C.zf) goto L_1056a256;
  /* 1056a220 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a226 mov cl, byte ptr [eax + 0x10590da1] */
  CL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 1056a22c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1056a22f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a235 mov byte ptr [edx + 0x10590da1], cl */
  w8((uint32_t)(EDX + 0x10590da1), (CL));
  /* 1056a23b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a241 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a247 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1056a24e mov byte ptr [eax + 0x10590ca0], dl */
  w8((uint32_t)(EAX + 0x10590ca0), (DL));
  /* 1056a254 jmp 0x1056a2af */
  goto L_1056a2af;
L_1056a256:;
  /* 1056a256 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a25c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056a25e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1056a266 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1056a269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056a26b je 0x1056a2a2 */
  if (C.zf) goto L_1056a2a2;
  /* 1056a26d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a273 mov al, byte ptr [edx + 0x10590da1] */
  AL = (r8((uint32_t)(EDX + 0x10590da1)));
  /* 1056a279 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1056a27b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a281 mov byte ptr [ecx + 0x10590da1], al */
  w8((uint32_t)(ECX + 0x10590da1), (AL));
  /* 1056a287 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a28d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a293 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1056a29a mov byte ptr [edx + 0x10590ca0], cl */
  w8((uint32_t)(EDX + 0x10590ca0), (CL));
  /* 1056a2a0 jmp 0x1056a2af */
  goto L_1056a2af;
L_1056a2a2:;
  /* 1056a2a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a2a8 mov byte ptr [edx + 0x10590ca0], 0 */
  w8((uint32_t)(EDX + 0x10590ca0), (0x0u));
L_1056a2af:;
  /* 1056a2af jmp 0x1056a1ea */
  goto L_1056a1ea;
L_1056a2b4:;
  /* 1056a2b4 jmp 0x1056a37e */
  goto L_1056a37e;
L_1056a2b9:;
  /* 1056a2b9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1056a2c3 jmp 0x1056a2d4 */
  goto L_1056a2d4;
L_1056a2c5:;
  /* 1056a2c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a2cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a2ce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1056a2d4:;
  /* 1056a2d4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a2de jae 0x1056a37e */
  if (!C.cf) goto L_1056a37e;
  /* 1056a2e4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a2eb jb 0x1056a328 */
  if (C.cf) goto L_1056a328;
  /* 1056a2ed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a2f4 ja 0x1056a328 */
  if ((!C.cf&&!C.zf)) goto L_1056a328;
  /* 1056a2f6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a2fc mov dl, byte ptr [ecx + 0x10590da1] */
  DL = (r8((uint32_t)(ECX + 0x10590da1)));
  /* 1056a302 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1056a305 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a30b mov byte ptr [eax + 0x10590da1], dl */
  w8((uint32_t)(EAX + 0x10590da1), (DL));
  /* 1056a311 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a317 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a31a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a320 mov byte ptr [edx + 0x10590ca0], cl */
  w8((uint32_t)(EDX + 0x10590ca0), (CL));
  /* 1056a326 jmp 0x1056a379 */
  goto L_1056a379;
L_1056a328:;
  /* 1056a328 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a32f jb 0x1056a36c */
  if (C.cf) goto L_1056a36c;
  /* 1056a331 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a338 ja 0x1056a36c */
  if ((!C.cf&&!C.zf)) goto L_1056a36c;
  /* 1056a33a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a340 mov cl, byte ptr [eax + 0x10590da1] */
  CL = (r8((uint32_t)(EAX + 0x10590da1)));
  /* 1056a346 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1056a349 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a34f mov byte ptr [edx + 0x10590da1], cl */
  w8((uint32_t)(EDX + 0x10590da1), (CL));
  /* 1056a355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a35b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a35e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a364 mov byte ptr [ecx + 0x10590ca0], al */
  w8((uint32_t)(ECX + 0x10590ca0), (AL));
  /* 1056a36a jmp 0x1056a379 */
  goto L_1056a379;
L_1056a36c:;
  /* 1056a36c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1056a372 mov byte ptr [edx + 0x10590ca0], 0 */
  w8((uint32_t)(EDX + 0x10590ca0), (0x0u));
L_1056a379:;
  /* 1056a379 jmp 0x1056a2c5 */
  goto L_1056a2c5;
L_1056a37e:;
  /* 1056a37e mov esp, ebp */
  ESP = (EBP);
  /* 1056a380 pop ebp */
  EBP = (pop32());
  /* 1056a381 ret  */
  ESPCHK(0x1056a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a390 @ 0x1056a390 (23 bytes, 9 insns) */
void f_1056a390(void) {
  FTRACE(0x1056a390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a390 push ebp */
  push32((uint32_t)(EBP));
  /* 1056a391 mov ebp, esp */
  EBP = (ESP);
  /* 1056a393 cmp dword ptr [0x10590c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a39a je 0x1056a3a3 */
  if (C.zf) goto L_1056a3a3;
  /* 1056a39c mov eax, dword ptr [0x10590c04] */
  EAX = (r32((uint32_t)(0x10590c04)));
  /* 1056a3a1 jmp 0x1056a3a5 */
  goto L_1056a3a5;
L_1056a3a3:;
  /* 1056a3a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056a3a5:;
  /* 1056a3a5 pop ebp */
  EBP = (pop32());
  /* 1056a3a6 ret  */
  ESPCHK(0x1056a390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b0 @ 0x1056a3b0 (34 bytes, 10 insns) */
void f_1056a3b0(void) {
  FTRACE(0x1056a3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056a3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1056a3b3 cmp dword ptr [0x10591050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10591050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a3ba jne 0x1056a3d0 */
  if (!C.zf) goto L_1056a3d0;
  /* 1056a3bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1056a3be call 0x10569bd0 */
  push32(0x1056a3c3u); f_10569bd0();
  /* 1056a3c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a3c6 mov dword ptr [0x10591050], 1 */
  w32((uint32_t)(0x10591050), (0x1u));
L_1056a3d0:;
  /* 1056a3d0 pop ebp */
  EBP = (pop32());
  /* 1056a3d1 ret  */
  ESPCHK(0x1056a3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e0 @ 0x1056a3e0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1056a3e0(void) {
  FTRACE(0x1056a3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056a3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056a3e3 push edi */
  push32((uint32_t)(EDI));
  /* 1056a3e4 push esi */
  push32((uint32_t)(ESI));
  /* 1056a3e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1056a3e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056a3eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a3ee mov eax, ecx */
  EAX = (ECX);
  /* 1056a3f0 mov edx, ecx */
  EDX = (ECX);
  /* 1056a3f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a3f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a3f6 jbe 0x1056a400 */
  if ((C.cf||C.zf)) goto L_1056a400;
  /* 1056a3f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a3fa jb 0x1056a578 */
  if (C.cf) goto L_1056a578;
L_1056a400:;
  /* 1056a400 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1056a406 jne 0x1056a41c */
  if (!C.zf) goto L_1056a41c;
  /* 1056a408 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a40b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a40e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a411 jb 0x1056a43c */
  if (C.cf) goto L_1056a43c;
  /* 1056a413 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a415 jmp dword ptr [edx*4 + 0x1056a528] */
  switch (EDX) {
    case 0: goto L_1056a538;
    case 1: goto L_1056a540;
    case 2: goto L_1056a54c;
    case 3: goto L_1056a560;
    default: x86_unimpl("switch@0x1056a415 out of table"); return;
  }
L_1056a41c:;
  /* 1056a41c mov eax, edi */
  EAX = (EDI);
  /* 1056a41e mov edx, 3 */
  EDX = (0x3u);
  /* 1056a423 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a426 jb 0x1056a434 */
  if (C.cf) goto L_1056a434;
  /* 1056a428 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1056a42b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a42d jmp dword ptr [eax*4 + 0x1056a440] */
  switch (EAX) {
    case 1: goto L_1056a450;
    case 2: goto L_1056a47c;
    case 3: goto L_1056a4a0;
    default: x86_unimpl("switch@0x1056a42d out of table"); return;
  }
L_1056a434:;
  /* 1056a434 jmp dword ptr [ecx*4 + 0x1056a538] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1056a538)))); return;
  /* 1056a43b nop  */
  /* nop */
L_1056a43c:;
  /* 1056a43c jmp dword ptr [ecx*4 + 0x1056a4bc] */
  switch (ECX) {
    case 0: goto L_1056a51f;
    case 1: goto L_1056a50c;
    case 2: goto L_1056a504;
    case 3: goto L_1056a4fc;
    case 4: goto L_1056a4f4;
    case 5: goto L_1056a4ec;
    case 6: goto L_1056a4e4;
    case 7: goto L_1056a4dc;
    default: x86_unimpl("switch@0x1056a43c out of table"); return;
  }
  /* 1056a443 nop  */
  /* nop */
L_1056a450:;
  /* 1056a450 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a452 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056a454 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056a456 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056a459 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056a45c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056a45f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a462 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056a465 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a468 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a46b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a46e jb 0x1056a43c */
  if (C.cf) goto L_1056a43c;
  /* 1056a470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a472 jmp dword ptr [edx*4 + 0x1056a528] */
  switch (EDX) {
    case 0: goto L_1056a538;
    case 1: goto L_1056a540;
    case 2: goto L_1056a54c;
    case 3: goto L_1056a560;
    default: x86_unimpl("switch@0x1056a472 out of table"); return;
  }
  /* 1056a479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056a47c:;
  /* 1056a47c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a47e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056a480 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056a482 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056a485 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a488 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056a48b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a48e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a491 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a494 jb 0x1056a43c */
  if (C.cf) goto L_1056a43c;
  /* 1056a496 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a498 jmp dword ptr [edx*4 + 0x1056a528] */
  switch (EDX) {
    case 0: goto L_1056a538;
    case 1: goto L_1056a540;
    case 2: goto L_1056a54c;
    case 3: goto L_1056a560;
    default: x86_unimpl("switch@0x1056a498 out of table"); return;
  }
  /* 1056a49f nop  */
  /* nop */
L_1056a4a0:;
  /* 1056a4a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a4a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056a4a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056a4a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1056a4a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a4aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1056a4ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a4ae jb 0x1056a43c */
  if (C.cf) goto L_1056a43c;
  /* 1056a4b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a4b2 jmp dword ptr [edx*4 + 0x1056a528] */
  switch (EDX) {
    case 0: goto L_1056a538;
    case 1: goto L_1056a540;
    case 2: goto L_1056a54c;
    case 3: goto L_1056a560;
    default: x86_unimpl("switch@0x1056a4b2 out of table"); return;
  }
  /* 1056a4b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056a4dc:;
  /* 1056a4dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1056a4e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1056a4e4:;
  /* 1056a4e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1056a4e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1056a4ec:;
  /* 1056a4ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1056a4f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1056a4f4:;
  /* 1056a4f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1056a4f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1056a4fc:;
  /* 1056a4fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1056a500 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1056a504:;
  /* 1056a504 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1056a508 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1056a50c:;
  /* 1056a50c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1056a510 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1056a514 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1056a51b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a51d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1056a51f:;
  /* 1056a51f jmp dword ptr [edx*4 + 0x1056a528] */
  switch (EDX) {
    case 0: goto L_1056a538;
    case 1: goto L_1056a540;
    case 2: goto L_1056a54c;
    case 3: goto L_1056a560;
    default: x86_unimpl("switch@0x1056a51f out of table"); return;
  }
  /* 1056a526 mov edi, edi */
  EDI = (EDI);
L_1056a538:;
  /* 1056a538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a53b pop esi */
  ESI = (pop32());
  /* 1056a53c pop edi */
  EDI = (pop32());
  /* 1056a53d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a53e ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a53f nop  */
  /* nop */
L_1056a540:;
  /* 1056a540 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056a542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056a544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a547 pop esi */
  ESI = (pop32());
  /* 1056a548 pop edi */
  EDI = (pop32());
  /* 1056a549 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a54a ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a54b nop  */
  /* nop */
L_1056a54c:;
  /* 1056a54c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056a54e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056a550 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056a553 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056a556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a559 pop esi */
  ESI = (pop32());
  /* 1056a55a pop edi */
  EDI = (pop32());
  /* 1056a55b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a55c ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a55d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056a560:;
  /* 1056a560 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056a562 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056a564 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056a567 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056a56a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056a56d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056a570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a573 pop esi */
  ESI = (pop32());
  /* 1056a574 pop edi */
  EDI = (pop32());
  /* 1056a575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a576 ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a577 nop  */
  /* nop */
L_1056a578:;
  /* 1056a578 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1056a57c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1056a580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1056a586 jne 0x1056a5ac */
  if (!C.zf) goto L_1056a5ac;
  /* 1056a588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a58b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a58e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a591 jb 0x1056a5a0 */
  if (C.cf) goto L_1056a5a0;
  /* 1056a593 std  */
  C.df=1;
  /* 1056a594 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a596 cld  */
  C.df=0;
  /* 1056a597 jmp dword ptr [edx*4 + 0x1056a6c0] */
  switch (EDX) {
    case 0: goto L_1056a6d0;
    case 1: goto L_1056a6d8;
    case 2: goto L_1056a6e8;
    case 3: goto L_1056a6fc;
    default: x86_unimpl("switch@0x1056a597 out of table"); return;
  }
  /* 1056a59e mov edi, edi */
  EDI = (EDI);
L_1056a5a0:;
  /* 1056a5a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056a5a2 jmp dword ptr [ecx*4 + 0x1056a670] */
  switch (ECX) {
    case 0: goto L_1056a6b7;
    default: x86_unimpl("switch@0x1056a5a2 out of table"); return;
  }
  /* 1056a5a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056a5ac:;
  /* 1056a5ac mov eax, edi */
  EAX = (EDI);
  /* 1056a5ae mov edx, 3 */
  EDX = (0x3u);
  /* 1056a5b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a5b6 jb 0x1056a5c4 */
  if (C.cf) goto L_1056a5c4;
  /* 1056a5b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1056a5bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a5bd jmp dword ptr [eax*4 + 0x1056a5c8] */
  switch (EAX) {
    case 1: goto L_1056a5d8;
    case 2: goto L_1056a5f8;
    case 3: goto L_1056a620;
    default: x86_unimpl("switch@0x1056a5bd out of table"); return;
  }
L_1056a5c4:;
  /* 1056a5c4 jmp dword ptr [ecx*4 + 0x1056a6c0] */
  switch (ECX) {
    case 0: goto L_1056a6d0;
    case 1: goto L_1056a6d8;
    case 2: goto L_1056a6e8;
    case 3: goto L_1056a6fc;
    default: x86_unimpl("switch@0x1056a5c4 out of table"); return;
  }
  /* 1056a5cb nop  */
  /* nop */
L_1056a5d8:;
  /* 1056a5d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056a5db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a5dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056a5e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1056a5e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a5e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1056a5e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a5e8 jb 0x1056a5a0 */
  if (C.cf) goto L_1056a5a0;
  /* 1056a5ea std  */
  C.df=1;
  /* 1056a5eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a5ed cld  */
  C.df=0;
  /* 1056a5ee jmp dword ptr [edx*4 + 0x1056a6c0] */
  switch (EDX) {
    case 0: goto L_1056a6d0;
    case 1: goto L_1056a6d8;
    case 2: goto L_1056a6e8;
    case 3: goto L_1056a6fc;
    default: x86_unimpl("switch@0x1056a5ee out of table"); return;
  }
  /* 1056a5f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056a5f8:;
  /* 1056a5f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056a5fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a5fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056a600 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056a603 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a606 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056a609 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a60c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a60f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a612 jb 0x1056a5a0 */
  if (C.cf) goto L_1056a5a0;
  /* 1056a614 std  */
  C.df=1;
  /* 1056a615 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a617 cld  */
  C.df=0;
  /* 1056a618 jmp dword ptr [edx*4 + 0x1056a6c0] */
  switch (EDX) {
    case 0: goto L_1056a6d0;
    case 1: goto L_1056a6d8;
    case 2: goto L_1056a6e8;
    case 3: goto L_1056a6fc;
    default: x86_unimpl("switch@0x1056a618 out of table"); return;
  }
  /* 1056a61f nop  */
  /* nop */
L_1056a620:;
  /* 1056a620 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056a623 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a625 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056a628 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056a62b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056a62e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056a631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056a634 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056a637 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a63a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a63d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a640 jb 0x1056a5a0 */
  if (C.cf) goto L_1056a5a0;
  /* 1056a646 std  */
  C.df=1;
  /* 1056a647 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056a649 cld  */
  C.df=0;
  /* 1056a64a jmp dword ptr [edx*4 + 0x1056a6c0] */
  switch (EDX) {
    case 0: goto L_1056a6d0;
    case 1: goto L_1056a6d8;
    case 2: goto L_1056a6e8;
    case 3: goto L_1056a6fc;
    default: x86_unimpl("switch@0x1056a64a out of table"); return;
  }
  /* 1056a651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1056a654 je 0x1056a5fc */
  if (C.zf) goto L_1056a5fc;
  /* 1056a656 push esi */
  push32((uint32_t)(ESI));
  /* 1056a657 adc byte ptr [esi + 0x56], bh */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x56))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + 0x56), (_r)); fl_add(_a,_b,_r,8); }
  /* 1056a65b adc byte ptr [esi - 0x5973efaa], al */
  { uint32_t _a=(r8((uint32_t)(ESI + -0x5973efaa))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + -0x5973efaa), (_r)); fl_add(_a,_b,_r,8); }
  /* 1056a662 push esi */
  push32((uint32_t)(ESI));
  /* 1056a663 adc byte ptr [esi - 0x5963efaa], dl */
  { uint32_t _a=(r8((uint32_t)(ESI + -0x5963efaa))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + -0x5963efaa), (_r)); fl_add(_a,_b,_r,8); }
  /* 1056a66a push esi */
  push32((uint32_t)(ESI));
  /* 1056a66c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1056a66d cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1056a66e push esi */
  push32((uint32_t)(ESI));
  /* 1056a674 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1056a678 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1056a67c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1056a680 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1056a684 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1056a688 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1056a68c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1056a690 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1056a694 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1056a698 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1056a69c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1056a6a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1056a6a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1056a6a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1056a6ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1056a6b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a6b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1056a6b7:;
  /* 1056a6b7 jmp dword ptr [edx*4 + 0x1056a6c0] */
  switch (EDX) {
    case 0: goto L_1056a6d0;
    case 1: goto L_1056a6d8;
    case 2: goto L_1056a6e8;
    case 3: goto L_1056a6fc;
    default: x86_unimpl("switch@0x1056a6b7 out of table"); return;
  }
  /* 1056a6be mov edi, edi */
  EDI = (EDI);
L_1056a6d0:;
  /* 1056a6d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a6d3 pop esi */
  ESI = (pop32());
  /* 1056a6d4 pop edi */
  EDI = (pop32());
  /* 1056a6d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a6d6 ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a6d7 nop  */
  /* nop */
L_1056a6d8:;
  /* 1056a6d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056a6db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056a6de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a6e1 pop esi */
  ESI = (pop32());
  /* 1056a6e2 pop edi */
  EDI = (pop32());
  /* 1056a6e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a6e4 ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a6e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056a6e8:;
  /* 1056a6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056a6eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056a6ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056a6f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056a6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a6f7 pop esi */
  ESI = (pop32());
  /* 1056a6f8 pop edi */
  EDI = (pop32());
  /* 1056a6f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a6fa ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
  /* 1056a6fb nop  */
  /* nop */
L_1056a6fc:;
  /* 1056a6fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056a6ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056a702 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056a705 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056a708 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056a70b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056a70e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056a711 pop esi */
  ESI = (pop32());
  /* 1056a712 pop edi */
  EDI = (pop32());
  /* 1056a713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056a714 ret  */
  ESPCHK(0x1056a3e0u, _esp0);
  ESP += 4; return;
L_1056a5fc: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1056a5fc (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1056a720 (104 bytes, 43 insns) */
void f_1056a720(void) {
  FTRACE(0x1056a720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a720 push ebx */
  push32((uint32_t)(EBX));
  /* 1056a721 push esi */
  push32((uint32_t)(ESI));
  /* 1056a722 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1056a726 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056a728 jne 0x1056a742 */
  if (!C.zf) goto L_1056a742;
  /* 1056a72a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1056a72e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1056a732 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a734 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056a736 mov ebx, eax */
  EBX = (EAX);
  /* 1056a738 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1056a73c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056a73e mov edx, ebx */
  EDX = (EBX);
  /* 1056a740 jmp 0x1056a783 */
  goto L_1056a783;
L_1056a742:;
  /* 1056a742 mov ecx, eax */
  ECX = (EAX);
  /* 1056a744 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1056a748 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1056a74c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1056a750:;
  /* 1056a750 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1056a752 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1056a754 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1056a756 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1056a758 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056a75a jne 0x1056a750 */
  if (!C.zf) goto L_1056a750;
  /* 1056a75c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056a75e mov esi, eax */
  ESI = (EAX);
  /* 1056a760 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1056a764 mov ecx, eax */
  ECX = (EAX);
  /* 1056a766 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1056a76a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1056a76c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a76e jb 0x1056a77e */
  if (C.cf) goto L_1056a77e;
  /* 1056a770 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a774 ja 0x1056a77e */
  if ((!C.cf&&!C.zf)) goto L_1056a77e;
  /* 1056a776 jb 0x1056a77f */
  if (C.cf) goto L_1056a77f;
  /* 1056a778 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a77c jbe 0x1056a77f */
  if ((C.cf||C.zf)) goto L_1056a77f;
L_1056a77e:;
  /* 1056a77e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1056a77f:;
  /* 1056a77f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a781 mov eax, esi */
  EAX = (ESI);
L_1056a783:;
  /* 1056a783 pop esi */
  ESI = (pop32());
  /* 1056a784 pop ebx */
  EBX = (pop32());
  /* 1056a785 ret 0x10 */
  ESPCHK(0x1056a720u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1056a790 (117 bytes, 44 insns) */
void f_1056a790(void) {
  FTRACE(0x1056a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a790 push ebx */
  push32((uint32_t)(EBX));
  /* 1056a791 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1056a795 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056a797 jne 0x1056a7b1 */
  if (!C.zf) goto L_1056a7b1;
  /* 1056a799 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1056a79d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1056a7a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a7a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056a7a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1056a7a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056a7ab mov eax, edx */
  EAX = (EDX);
  /* 1056a7ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056a7af jmp 0x1056a801 */
  goto L_1056a801;
L_1056a7b1:;
  /* 1056a7b1 mov ecx, eax */
  ECX = (EAX);
  /* 1056a7b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1056a7b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1056a7bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1056a7bf:;
  /* 1056a7bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1056a7c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1056a7c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1056a7c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1056a7c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056a7c9 jne 0x1056a7bf */
  if (!C.zf) goto L_1056a7bf;
  /* 1056a7cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056a7cd mov ecx, eax */
  ECX = (EAX);
  /* 1056a7cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1056a7d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1056a7d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1056a7d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a7da jb 0x1056a7ea */
  if (C.cf) goto L_1056a7ea;
  /* 1056a7dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a7e0 ja 0x1056a7ea */
  if ((!C.cf&&!C.zf)) goto L_1056a7ea;
  /* 1056a7e2 jb 0x1056a7f2 */
  if (C.cf) goto L_1056a7f2;
  /* 1056a7e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a7e8 jbe 0x1056a7f2 */
  if ((C.cf||C.zf)) goto L_1056a7f2;
L_1056a7ea:;
  /* 1056a7ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a7ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1056a7f2:;
  /* 1056a7f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a7f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a7fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056a7fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056a7fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1056a801:;
  /* 1056a801 pop ebx */
  EBX = (pop32());
  /* 1056a802 ret 0x10 */
  ESPCHK(0x1056a790u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a810 @ 0x1056a810 (628 bytes, 214 insns) */
void f_1056a810(void) {
  FTRACE(0x1056a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1056a811 mov ebp, esp */
  EBP = (ESP);
  /* 1056a813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a816 push ebx */
  push32((uint32_t)(EBX));
  /* 1056a817 push esi */
  push32((uint32_t)(ESI));
  /* 1056a818 push edi */
  push32((uint32_t)(EDI));
L_1056a819:;
  /* 1056a819 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a81d jne 0x1056a83d */
  if (!C.zf) goto L_1056a83d;
  /* 1056a81f push 0x1058b060 */
  push32((uint32_t)(0x1058b060u));
  /* 1056a824 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056a826 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1056a828 push 0x1058b054 */
  push32((uint32_t)(0x1058b054u));
  /* 1056a82d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056a82f call 0x10562bc0 */
  push32(0x1056a834u); f_10562bc0();
  /* 1056a834 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a837 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a83a jne 0x1056a83d */
  if (!C.zf) goto L_1056a83d;
  /* 1056a83c int3  */
  x86_unimpl("int3 @ 0x1056a83c");
L_1056a83d:;
  /* 1056a83d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056a83f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056a841 jne 0x1056a819 */
  if (!C.zf) goto L_1056a819;
  /* 1056a843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056a846 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056a849 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a84c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056a84f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1056a852 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a855 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056a858 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a85e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056a860 je 0x1056a86f */
  if (C.zf) goto L_1056a86f;
  /* 1056a862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a865 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056a868 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1056a86b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056a86d je 0x1056a885 */
  if (C.zf) goto L_1056a885;
L_1056a86f:;
  /* 1056a86f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a872 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056a875 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1056a877 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a87a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1056a87d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056a880 jmp 0x1056aa7d */
  goto L_1056aa7d;
L_1056a885:;
  /* 1056a885 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a888 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056a88b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1056a88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056a890 je 0x1056a8dc */
  if (C.zf) goto L_1056a8dc;
  /* 1056a892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a895 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1056a89c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a89f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056a8a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1056a8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056a8a7 je 0x1056a8c5 */
  if (C.zf) goto L_1056a8c5;
  /* 1056a8a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056a8b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1056a8b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056a8ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1056a8bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1056a8c3 jmp 0x1056a8dc */
  goto L_1056a8dc;
L_1056a8c5:;
  /* 1056a8c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056a8cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a8ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1056a8d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056a8d7 jmp 0x1056aa7d */
  goto L_1056aa7d;
L_1056a8dc:;
  /* 1056a8dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056a8e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a8e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1056a8eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056a8f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1056a8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1056a8fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a8fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1056a904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056a90b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a90e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1056a911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a914 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056a917 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1056a91d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056a91f jne 0x1056a94f */
  if (!C.zf) goto L_1056a94f;
  /* 1056a921 cmp dword ptr [ebp - 8], 0x1058e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1058e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a928 je 0x1056a933 */
  if (C.zf) goto L_1056a933;
  /* 1056a92a cmp dword ptr [ebp - 8], 0x1058e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1058e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a931 jne 0x1056a943 */
  if (!C.zf) goto L_1056a943;
L_1056a933:;
  /* 1056a933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056a936 push edx */
  push32((uint32_t)(EDX));
  /* 1056a937 call 0x1056c780 */
  push32(0x1056a93cu); f_1056c780();
  /* 1056a93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056a941 jne 0x1056a94f */
  if (!C.zf) goto L_1056a94f;
L_1056a943:;
  /* 1056a943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a946 push eax */
  push32((uint32_t)(EAX));
  /* 1056a947 call 0x1056c6b0 */
  push32(0x1056a94cu); f_1056c6b0();
  /* 1056a94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056a94f:;
  /* 1056a94f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a952 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056a955 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1056a95b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056a95d je 0x1056aa3b */
  if (C.zf) goto L_1056aa3b;
L_1056a963:;
  /* 1056a963 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a966 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a969 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1056a96b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a96e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056a970 jge 0x1056a993 */
  if ((C.sf==C.of)) goto L_1056a993;
  /* 1056a972 push 0x1058b014 */
  push32((uint32_t)(0x1058b014u));
  /* 1056a977 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056a979 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1056a97e push 0x1058b054 */
  push32((uint32_t)(0x1058b054u));
  /* 1056a983 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056a985 call 0x10562bc0 */
  push32(0x1056a98au); f_10562bc0();
  /* 1056a98a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a98d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a990 jne 0x1056a993 */
  if (!C.zf) goto L_1056a993;
  /* 1056a992 int3  */
  x86_unimpl("int3 @ 0x1056a992");
L_1056a993:;
  /* 1056a993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056a995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056a997 jne 0x1056a963 */
  if (!C.zf) goto L_1056a963;
  /* 1056a999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a99c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a99f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1056a9a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a9a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056a9a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a9aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1056a9ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a9b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a9b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1056a9b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a9b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1056a9bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056a9be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a9c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1056a9c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a9c8 jle 0x1056a9e6 */
  if ((C.zf||C.sf!=C.of)) goto L_1056a9e6;
  /* 1056a9ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056a9cd push ecx */
  push32((uint32_t)(ECX));
  /* 1056a9ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056a9d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056a9d4 push eax */
  push32((uint32_t)(EAX));
  /* 1056a9d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056a9d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1056a9d9 call 0x1056c3a0 */
  push32(0x1056a9deu); f_1056c3a0();
  /* 1056a9de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056a9e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1056a9e4 jmp 0x1056aa2e */
  goto L_1056aa2e;
L_1056a9e6:;
  /* 1056a9e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056a9ea je 0x1056aa09 */
  if (C.zf) goto L_1056aa09;
  /* 1056a9ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056a9ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1056a9f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056a9f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1056a9f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056a9fb mov ecx, dword ptr [edx*4 + 0x10590f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056aa02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056aa04 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1056aa07 jmp 0x1056aa10 */
  goto L_1056aa10;
L_1056aa09:;
  /* 1056aa09 mov dword ptr [ebp - 0x14], 0x1058da60 */
  w32((uint32_t)(EBP + -0x14), (0x1058da60u));
L_1056aa10:;
  /* 1056aa10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056aa13 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1056aa17 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1056aa1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056aa1c je 0x1056aa2e */
  if (C.zf) goto L_1056aa2e;
  /* 1056aa1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1056aa20 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056aa22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056aa25 push ecx */
  push32((uint32_t)(ECX));
  /* 1056aa26 call 0x1056c250 */
  push32(0x1056aa2bu); f_1056c250();
  /* 1056aa2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056aa2e:;
  /* 1056aa2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056aa31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056aa34 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1056aa37 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1056aa39 jmp 0x1056aa59 */
  goto L_1056aa59;
L_1056aa3b:;
  /* 1056aa3b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1056aa42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056aa45 push edx */
  push32((uint32_t)(EDX));
  /* 1056aa46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1056aa49 push eax */
  push32((uint32_t)(EAX));
  /* 1056aa4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056aa4d push ecx */
  push32((uint32_t)(ECX));
  /* 1056aa4e call 0x1056c3a0 */
  push32(0x1056aa53u); f_1056c3a0();
  /* 1056aa53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056aa56 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056aa59:;
  /* 1056aa59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056aa5c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aa5f je 0x1056aa75 */
  if (C.zf) goto L_1056aa75;
  /* 1056aa61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056aa64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056aa67 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1056aa6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056aa6d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1056aa70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056aa73 jmp 0x1056aa7d */
  goto L_1056aa7d;
L_1056aa75:;
  /* 1056aa75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056aa78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1056aa7d:;
  /* 1056aa7d pop edi */
  EDI = (pop32());
  /* 1056aa7e pop esi */
  ESI = (pop32());
  /* 1056aa7f pop ebx */
  EBX = (pop32());
  /* 1056aa80 mov esp, ebp */
  ESP = (EBP);
  /* 1056aa82 pop ebp */
  EBP = (pop32());
  /* 1056aa83 ret  */
  ESPCHK(0x1056a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa90 @ 0x1056aa90 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1056aa90(void) {
  FTRACE(0x1056aa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056aa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1056aa91 mov ebp, esp */
  EBP = (ESP);
  /* 1056aa93 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056aa99 push ebx */
  push32((uint32_t)(EBX));
  /* 1056aa9a push esi */
  push32((uint32_t)(ESI));
  /* 1056aa9b push edi */
  push32((uint32_t)(EDI));
  /* 1056aa9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1056aaa3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1056aaad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1056aab4:;
  /* 1056aab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056aab7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1056aab9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1056aabc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056aac0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056aac3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056aac6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1056aac9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056aacb je 0x1056b6a7 */
  if (C.zf) goto L_1056b6a7;
  /* 1056aad1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aad8 jl 0x1056b6a7 */
  if ((C.sf!=C.of)) goto L_1056b6a7;
  /* 1056aade movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056aae2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aae5 jl 0x1056ab06 */
  if ((C.sf!=C.of)) goto L_1056ab06;
  /* 1056aae7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056aaeb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aaee jg 0x1056ab06 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056ab06;
  /* 1056aaf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056aaf4 movsx ecx, byte ptr [eax + 0x1058b04c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1058b04c))));
  /* 1056aafb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1056aafe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1056ab04 jmp 0x1056ab10 */
  goto L_1056ab10;
L_1056ab06:;
  /* 1056ab06 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1056ab10:;
  /* 1056ab10 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1056ab16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1056ab19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056ab1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056ab1f movsx edx, byte ptr [ecx + eax*8 + 0x1058b06c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1058b06c))));
  /* 1056ab27 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1056ab2a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1056ab2d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056ab30 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1056ab36 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ab3d ja 0x1056b6a2 */
  if ((!C.cf&&!C.zf)) goto L_1056b6a2;
  /* 1056ab43 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1056ab49 jmp dword ptr [ecx*4 + 0x1056b6b4] */
  switch (ECX) {
    case 0: goto L_1056ab50;
    case 1: goto L_1056abea;
    case 2: goto L_1056ac2c;
    case 3: goto L_1056ac9b;
    case 4: goto L_1056acf3;
    case 5: goto L_1056ad02;
    case 6: goto L_1056ad4e;
    case 7: goto L_1056ade1;
    case 8: goto L_1056ac78;
    case 9: goto L_1056ac83;
    case 10: goto L_1056ac6e;
    case 11: goto L_1056ac63;
    case 12: goto L_1056ac8e;
    case 13: goto L_1056ac96;
    default: x86_unimpl("switch@0x1056ab49 out of table"); return;
  }
L_1056ab50:;
  /* 1056ab50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1056ab57 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056ab5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056ab60 mov eax, dword ptr [0x1058dc98] */
  EAX = (r32((uint32_t)(0x1058dc98)));
  /* 1056ab65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056ab67 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1056ab6b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1056ab71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056ab73 je 0x1056abcd */
  if (C.zf) goto L_1056abcd;
  /* 1056ab75 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1056ab7b push edx */
  push32((uint32_t)(EDX));
  /* 1056ab7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ab7f push eax */
  push32((uint32_t)(EAX));
  /* 1056ab80 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ab84 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ab85 call 0x1056b7c0 */
  push32(0x1056ab8au); f_1056b7c0();
  /* 1056ab8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ab8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056ab90 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056ab92 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1056ab95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056ab98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ab9b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1056ab9e:;
  /* 1056ab9e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056aba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056aba4 jne 0x1056abc7 */
  if (!C.zf) goto L_1056abc7;
  /* 1056aba6 push 0x1058b0ec */
  push32((uint32_t)(0x1058b0ecu));
  /* 1056abab push 0 */
  push32((uint32_t)(0x0u));
  /* 1056abad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1056abb2 push 0x1058b0e0 */
  push32((uint32_t)(0x1058b0e0u));
  /* 1056abb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056abb9 call 0x10562bc0 */
  push32(0x1056abbeu); f_10562bc0();
  /* 1056abbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056abc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056abc4 jne 0x1056abc7 */
  if (!C.zf) goto L_1056abc7;
  /* 1056abc6 int3  */
  x86_unimpl("int3 @ 0x1056abc6");
L_1056abc7:;
  /* 1056abc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056abc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056abcb jne 0x1056ab9e */
  if (!C.zf) goto L_1056ab9e;
L_1056abcd:;
  /* 1056abcd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1056abd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056abd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056abd7 push edx */
  push32((uint32_t)(EDX));
  /* 1056abd8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056abdc push eax */
  push32((uint32_t)(EAX));
  /* 1056abdd call 0x1056b7c0 */
  push32(0x1056abe2u); f_1056b7c0();
  /* 1056abe2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056abe5 jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056abea:;
  /* 1056abea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1056abf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056abf4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1056abfa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1056ac00 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1056ac06 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1056ac0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1056ac0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056ac16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1056ac20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1056ac27 jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056ac2c:;
  /* 1056ac2c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ac30 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1056ac36 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1056ac3c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ac3f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1056ac45 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ac4c ja 0x1056ac96 */
  if ((!C.cf&&!C.zf)) goto L_1056ac96;
  /* 1056ac4e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1056ac54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056ac56 mov al, byte ptr [ecx + 0x1056b6ec] */
  AL = (r8((uint32_t)(ECX + 0x1056b6ec)));
  /* 1056ac5c jmp dword ptr [eax*4 + 0x1056b6d4] */
  switch (EAX) {
    case 0: goto L_1056ac78;
    case 1: goto L_1056ac83;
    case 2: goto L_1056ac6e;
    case 3: goto L_1056ac63;
    case 4: goto L_1056ac8e;
    case 5: goto L_1056ac96;
    default: x86_unimpl("switch@0x1056ac5c out of table"); return;
  }
L_1056ac63:;
  /* 1056ac63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ac66 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1056ac69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056ac6c jmp 0x1056ac96 */
  goto L_1056ac96;
L_1056ac6e:;
  /* 1056ac6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ac71 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1056ac73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056ac76 jmp 0x1056ac96 */
  goto L_1056ac96;
L_1056ac78:;
  /* 1056ac78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ac7b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1056ac7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056ac81 jmp 0x1056ac96 */
  goto L_1056ac96;
L_1056ac83:;
  /* 1056ac83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ac86 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1056ac89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056ac8c jmp 0x1056ac96 */
  goto L_1056ac96;
L_1056ac8e:;
  /* 1056ac8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ac91 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1056ac93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056ac96:;
  /* 1056ac96 jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056ac9b:;
  /* 1056ac9b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ac9f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aca2 jne 0x1056acd7 */
  if (!C.zf) goto L_1056acd7;
  /* 1056aca4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1056aca7 push edx */
  push32((uint32_t)(EDX));
  /* 1056aca8 call 0x1056b8d0 */
  push32(0x1056acadu); f_1056b8d0();
  /* 1056acad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056acb0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1056acb6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056acbd jge 0x1056acd5 */
  if ((C.sf==C.of)) goto L_1056acd5;
  /* 1056acbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056acc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1056acc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056acc7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1056accd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056accf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1056acd5:;
  /* 1056acd5 jmp 0x1056acee */
  goto L_1056acee;
L_1056acd7:;
  /* 1056acd7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1056acdd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056ace0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ace4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1056ace8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1056acee:;
  /* 1056acee jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056acf3:;
  /* 1056acf3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1056acfd jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056ad02:;
  /* 1056ad02 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ad06 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ad09 jne 0x1056ad32 */
  if (!C.zf) goto L_1056ad32;
  /* 1056ad0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1056ad0e push eax */
  push32((uint32_t)(EAX));
  /* 1056ad0f call 0x1056b8d0 */
  push32(0x1056ad14u); f_1056b8d0();
  /* 1056ad14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ad17 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1056ad1d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ad24 jge 0x1056ad30 */
  if ((C.sf==C.of)) goto L_1056ad30;
  /* 1056ad26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1056ad30:;
  /* 1056ad30 jmp 0x1056ad49 */
  goto L_1056ad49;
L_1056ad32:;
  /* 1056ad32 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1056ad38 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056ad3b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ad3f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1056ad43 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1056ad49:;
  /* 1056ad49 jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056ad4e:;
  /* 1056ad4e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ad52 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1056ad58 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1056ad5e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ad61 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1056ad67 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ad6e ja 0x1056addc */
  if ((!C.cf&&!C.zf)) goto L_1056addc;
  /* 1056ad70 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1056ad76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056ad78 mov al, byte ptr [ecx + 0x1056b711] */
  AL = (r8((uint32_t)(ECX + 0x1056b711)));
  /* 1056ad7e jmp dword ptr [eax*4 + 0x1056b6fd] */
  switch (EAX) {
    case 0: goto L_1056ad90;
    case 1: goto L_1056adc9;
    case 2: goto L_1056ad85;
    case 3: goto L_1056add3;
    case 4: goto L_1056addc;
    default: x86_unimpl("switch@0x1056ad7e out of table"); return;
  }
L_1056ad85:;
  /* 1056ad85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ad88 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1056ad8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056ad8e jmp 0x1056addc */
  goto L_1056addc;
L_1056ad90:;
  /* 1056ad90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056ad93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056ad96 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ad99 jne 0x1056adbb */
  if (!C.zf) goto L_1056adbb;
  /* 1056ad9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056ad9e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1056ada2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ada5 jne 0x1056adbb */
  if (!C.zf) goto L_1056adbb;
  /* 1056ada7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056adaa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056adad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1056adb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056adb3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1056adb6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056adb9 jmp 0x1056adc7 */
  goto L_1056adc7;
L_1056adbb:;
  /* 1056adbb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1056adc2 jmp 0x1056ab50 */
  goto L_1056ab50;
L_1056adc7:;
  /* 1056adc7 jmp 0x1056addc */
  goto L_1056addc;
L_1056adc9:;
  /* 1056adc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056adcc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1056adce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056add1 jmp 0x1056addc */
  goto L_1056addc;
L_1056add3:;
  /* 1056add3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056add6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1056add9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1056addc:;
  /* 1056addc jmp 0x1056b6a2 */
  goto L_1056b6a2;
L_1056ade1:;
  /* 1056ade1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056ade5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1056adeb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1056adf1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056adf4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1056adfa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ae01 ja 0x1056b4c7 */
  if ((!C.cf&&!C.zf)) goto L_1056b4c7;
  /* 1056ae07 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1056ae0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056ae0f mov cl, byte ptr [edx + 0x1056b77c] */
  CL = (r8((uint32_t)(EDX + 0x1056b77c)));
  /* 1056ae15 jmp dword ptr [ecx*4 + 0x1056b740] */
  switch (ECX) {
    case 0: goto L_1056ae1c;
    case 1: goto L_1056b0b0;
    case 2: goto L_1056af40;
    case 3: goto L_1056b1e9;
    case 4: goto L_1056aeab;
    case 5: goto L_1056ae31;
    case 6: goto L_1056b1bb;
    case 7: goto L_1056b0c0;
    case 8: goto L_1056b065;
    case 9: goto L_1056b235;
    case 10: goto L_1056b1df;
    case 11: goto L_1056af56;
    case 12: goto L_1056b1d3;
    case 13: goto L_1056b1f5;
    case 14: goto L_1056b4c7;
    default: x86_unimpl("switch@0x1056ae15 out of table"); return;
  }
L_1056ae1c:;
  /* 1056ae1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ae1f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1056ae24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056ae26 jne 0x1056ae31 */
  if (!C.zf) goto L_1056ae31;
  /* 1056ae28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ae2b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1056ae2e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1056ae31:;
  /* 1056ae31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ae34 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1056ae3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056ae3c je 0x1056ae77 */
  if (C.zf) goto L_1056ae77;
  /* 1056ae3e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1056ae41 push eax */
  push32((uint32_t)(EAX));
  /* 1056ae42 call 0x1056b910 */
  push32(0x1056ae47u); f_1056b910();
  /* 1056ae47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ae4a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1056ae4e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1056ae52 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ae53 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1056ae59 push edx */
  push32((uint32_t)(EDX));
  /* 1056ae5a call 0x1056c9f0 */
  push32(0x1056ae5fu); f_1056c9f0();
  /* 1056ae5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ae62 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1056ae65 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ae69 jge 0x1056ae75 */
  if ((C.sf==C.of)) goto L_1056ae75;
  /* 1056ae6b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1056ae75:;
  /* 1056ae75 jmp 0x1056ae9d */
  goto L_1056ae9d;
L_1056ae77:;
  /* 1056ae77 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1056ae7a push eax */
  push32((uint32_t)(EAX));
  /* 1056ae7b call 0x1056b8d0 */
  push32(0x1056ae80u); f_1056b8d0();
  /* 1056ae80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ae83 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1056ae8a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1056ae90 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1056ae96 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1056ae9d:;
  /* 1056ae9d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1056aea3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1056aea6 jmp 0x1056b4c7 */
  goto L_1056b4c7;
L_1056aeab:;
  /* 1056aeab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1056aeae push eax */
  push32((uint32_t)(EAX));
  /* 1056aeaf call 0x1056b8d0 */
  push32(0x1056aeb4u); f_1056b8d0();
  /* 1056aeb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056aeb7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1056aebd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aec4 je 0x1056aed2 */
  if (C.zf) goto L_1056aed2;
  /* 1056aec6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1056aecc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056aed0 jne 0x1056aeec */
  if (!C.zf) goto L_1056aeec;
L_1056aed2:;
  /* 1056aed2 mov edx, dword ptr [0x1058dfb0] */
  EDX = (r32((uint32_t)(0x1058dfb0)));
  /* 1056aed8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1056aedb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056aede push eax */
  push32((uint32_t)(EAX));
  /* 1056aedf call 0x10566930 */
  push32(0x1056aee4u); f_10566930();
  /* 1056aee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056aee7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1056aeea jmp 0x1056af3b */
  goto L_1056af3b;
L_1056aeec:;
  /* 1056aeec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056aeef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1056aef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056aef7 je 0x1056af1c */
  if (C.zf) goto L_1056af1c;
  /* 1056aef9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1056aeff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1056af02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1056af05 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1056af0b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1056af0e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1056af10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1056af13 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1056af1a jmp 0x1056af3b */
  goto L_1056af3b;
L_1056af1c:;
  /* 1056af1c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1056af23 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1056af29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056af2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1056af2f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1056af35 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1056af38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1056af3b:;
  /* 1056af3b jmp 0x1056b4c7 */
  goto L_1056b4c7;
L_1056af40:;
  /* 1056af40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056af43 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1056af49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056af4b jne 0x1056af56 */
  if (!C.zf) goto L_1056af56;
  /* 1056af4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056af50 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1056af53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056af56:;
  /* 1056af56 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056af5d jne 0x1056af6b */
  if (!C.zf) goto L_1056af6b;
  /* 1056af5f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1056af69 jmp 0x1056af77 */
  goto L_1056af77;
L_1056af6b:;
  /* 1056af6b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1056af71 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1056af77:;
  /* 1056af77 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1056af7d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1056af83 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1056af86 push edx */
  push32((uint32_t)(EDX));
  /* 1056af87 call 0x1056b8d0 */
  push32(0x1056af8cu); f_1056b8d0();
  /* 1056af8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056af8f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1056af92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056af95 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1056af9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056af9c je 0x1056b006 */
  if (C.zf) goto L_1056b006;
  /* 1056af9e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056afa2 jne 0x1056afad */
  if (!C.zf) goto L_1056afad;
  /* 1056afa4 mov ecx, dword ptr [0x1058dfb4] */
  ECX = (r32((uint32_t)(0x1058dfb4)));
  /* 1056afaa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1056afad:;
  /* 1056afad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1056afb4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056afb7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1056afbd:;
  /* 1056afbd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1056afc3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1056afc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056afcc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1056afd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056afd4 je 0x1056aff6 */
  if (C.zf) goto L_1056aff6;
  /* 1056afd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1056afdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056afde mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1056afe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056afe3 je 0x1056aff6 */
  if (C.zf) goto L_1056aff6;
  /* 1056afe5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1056afeb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056afee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1056aff4 jmp 0x1056afbd */
  goto L_1056afbd;
L_1056aff6:;
  /* 1056aff6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1056affc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056afff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1056b001 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1056b004 jmp 0x1056b060 */
  goto L_1056b060;
L_1056b006:;
  /* 1056b006 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b00a jne 0x1056b014 */
  if (!C.zf) goto L_1056b014;
  /* 1056b00c mov eax, dword ptr [0x1058dfb0] */
  EAX = (r32((uint32_t)(0x1058dfb0)));
  /* 1056b011 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1056b014:;
  /* 1056b014 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b017 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1056b01d:;
  /* 1056b01d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1056b023 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1056b029 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b02c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1056b032 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b034 je 0x1056b054 */
  if (C.zf) goto L_1056b054;
  /* 1056b036 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1056b03c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056b03f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b041 je 0x1056b054 */
  if (C.zf) goto L_1056b054;
  /* 1056b043 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1056b049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b04c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1056b052 jmp 0x1056b01d */
  goto L_1056b01d;
L_1056b054:;
  /* 1056b054 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1056b05a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b05d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1056b060:;
  /* 1056b060 jmp 0x1056b4c7 */
  goto L_1056b4c7;
L_1056b065:;
  /* 1056b065 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1056b068 push edx */
  push32((uint32_t)(EDX));
  /* 1056b069 call 0x1056b8d0 */
  push32(0x1056b06eu); f_1056b8d0();
  /* 1056b06e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b071 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1056b077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b07a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b07f je 0x1056b093 */
  if (C.zf) goto L_1056b093;
  /* 1056b081 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1056b087 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1056b08e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1056b091 jmp 0x1056b0a1 */
  goto L_1056b0a1;
L_1056b093:;
  /* 1056b093 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1056b099 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1056b09f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1056b0a1:;
  /* 1056b0a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1056b0ab jmp 0x1056b4c7 */
  goto L_1056b4c7;
L_1056b0b0:;
  /* 1056b0b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1056b0b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1056b0ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1056b0bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1056b0c0:;
  /* 1056b0c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b0c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1056b0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056b0c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1056b0ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1056b0d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b0d8 jge 0x1056b0e6 */
  if ((C.sf==C.of)) goto L_1056b0e6;
  /* 1056b0da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1056b0e4 jmp 0x1056b102 */
  goto L_1056b102;
L_1056b0e6:;
  /* 1056b0e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b0ed jne 0x1056b102 */
  if (!C.zf) goto L_1056b102;
  /* 1056b0ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056b0f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b0f6 jne 0x1056b102 */
  if (!C.zf) goto L_1056b102;
  /* 1056b0f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1056b102:;
  /* 1056b102 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b105 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b108 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1056b10b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b10e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b111 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056b113 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056b116 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1056b11c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1056b122 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056b125 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b126 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1056b12c push edx */
  push32((uint32_t)(EDX));
  /* 1056b12d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056b131 push eax */
  push32((uint32_t)(EAX));
  /* 1056b132 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b135 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b136 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1056b13c push edx */
  push32((uint32_t)(EDX));
  /* 1056b13d call dword ptr [0x1058e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058e3a0))), 0x1056b143u);
  /* 1056b143 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b149 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b14e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b150 je 0x1056b168 */
  if (C.zf) goto L_1056b168;
  /* 1056b152 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b159 jne 0x1056b168 */
  if (!C.zf) goto L_1056b168;
  /* 1056b15b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b15e push ecx */
  push32((uint32_t)(ECX));
  /* 1056b15f call dword ptr [0x1058e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058e3ac))), 0x1056b165u);
  /* 1056b165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056b168:;
  /* 1056b168 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1056b16c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b16f jne 0x1056b18a */
  if (!C.zf) goto L_1056b18a;
  /* 1056b171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b174 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b17b jne 0x1056b18a */
  if (!C.zf) goto L_1056b18a;
  /* 1056b17d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b180 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b181 call dword ptr [0x1058e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058e3a4))), 0x1056b187u);
  /* 1056b187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056b18a:;
  /* 1056b18a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b18d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056b190 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b193 jne 0x1056b1a7 */
  if (!C.zf) goto L_1056b1a7;
  /* 1056b195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b198 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1056b19b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056b19e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b1a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b1a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1056b1a7:;
  /* 1056b1a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b1aa push eax */
  push32((uint32_t)(EAX));
  /* 1056b1ab call 0x10566930 */
  push32(0x1056b1b0u); f_10566930();
  /* 1056b1b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b1b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1056b1b6 jmp 0x1056b4c7 */
  goto L_1056b4c7;
L_1056b1bb:;
  /* 1056b1bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b1be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1056b1c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056b1c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1056b1ce jmp 0x1056b255 */
  goto L_1056b255;
L_1056b1d3:;
  /* 1056b1d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1056b1dd jmp 0x1056b255 */
  goto L_1056b255;
L_1056b1df:;
  /* 1056b1df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1056b1e9:;
  /* 1056b1e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1056b1f3 jmp 0x1056b1ff */
  goto L_1056b1ff;
L_1056b1f5:;
  /* 1056b1f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1056b1ff:;
  /* 1056b1ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1056b209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b20c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b214 je 0x1056b233 */
  if (C.zf) goto L_1056b233;
  /* 1056b216 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1056b21d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1056b223 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b226 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1056b22c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1056b233:;
  /* 1056b233 jmp 0x1056b255 */
  goto L_1056b255;
L_1056b235:;
  /* 1056b235 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1056b23f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b242 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1056b248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056b24a je 0x1056b255 */
  if (C.zf) goto L_1056b255;
  /* 1056b24c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b24f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1056b252 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056b255:;
  /* 1056b255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b258 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b25f je 0x1056b27e */
  if (C.zf) goto L_1056b27e;
  /* 1056b261 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1056b264 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b265 call 0x1056b8f0 */
  push32(0x1056b26au); f_1056b8f0();
  /* 1056b26a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b26d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1056b273 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1056b279 jmp 0x1056b30f */
  goto L_1056b30f;
L_1056b27e:;
  /* 1056b27e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b281 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b284 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b286 je 0x1056b2d0 */
  if (C.zf) goto L_1056b2d0;
  /* 1056b288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b28b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b290 je 0x1056b2b0 */
  if (C.zf) goto L_1056b2b0;
  /* 1056b292 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1056b295 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b296 call 0x1056b8d0 */
  push32(0x1056b29bu); f_1056b8d0();
  /* 1056b29b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b29e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1056b2a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056b2a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1056b2a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1056b2ae jmp 0x1056b2ce */
  goto L_1056b2ce;
L_1056b2b0:;
  /* 1056b2b0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1056b2b3 push edx */
  push32((uint32_t)(EDX));
  /* 1056b2b4 call 0x1056b8d0 */
  push32(0x1056b2b9u); f_1056b8d0();
  /* 1056b2b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b2bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056b2c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056b2c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1056b2c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1056b2ce:;
  /* 1056b2ce jmp 0x1056b30f */
  goto L_1056b30f;
L_1056b2d0:;
  /* 1056b2d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b2d3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b2d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b2d8 je 0x1056b2f5 */
  if (C.zf) goto L_1056b2f5;
  /* 1056b2da lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1056b2dd push ecx */
  push32((uint32_t)(ECX));
  /* 1056b2de call 0x1056b8d0 */
  push32(0x1056b2e3u); f_1056b8d0();
  /* 1056b2e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b2e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056b2e7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1056b2ed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1056b2f3 jmp 0x1056b30f */
  goto L_1056b30f;
L_1056b2f5:;
  /* 1056b2f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1056b2f8 push edx */
  push32((uint32_t)(EDX));
  /* 1056b2f9 call 0x1056b8d0 */
  push32(0x1056b2feu); f_1056b8d0();
  /* 1056b2fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b301 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056b303 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1056b309 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1056b30f:;
  /* 1056b30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b312 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b317 je 0x1056b357 */
  if (C.zf) goto L_1056b357;
  /* 1056b319 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b320 jg 0x1056b357 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056b357;
  /* 1056b322 jl 0x1056b32d */
  if ((C.sf!=C.of)) goto L_1056b32d;
  /* 1056b324 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b32b jae 0x1056b357 */
  if (!C.cf) goto L_1056b357;
L_1056b32d:;
  /* 1056b32d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1056b333 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056b335 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1056b33b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b33e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056b340 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1056b346 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1056b34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b34f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1056b352 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056b355 jmp 0x1056b36f */
  goto L_1056b36f;
L_1056b357:;
  /* 1056b357 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1056b35d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1056b363 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1056b369 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1056b36f:;
  /* 1056b36f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b372 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b378 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b37a jne 0x1056b397 */
  if (!C.zf) goto L_1056b397;
  /* 1056b37c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1056b382 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1056b388 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1056b38b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1056b391 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1056b397:;
  /* 1056b397 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b39e jge 0x1056b3ac */
  if ((C.sf==C.of)) goto L_1056b3ac;
  /* 1056b3a0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1056b3aa jmp 0x1056b3b5 */
  goto L_1056b3b5;
L_1056b3ac:;
  /* 1056b3ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b3af and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b3b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056b3b5:;
  /* 1056b3b5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1056b3bb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1056b3c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b3c3 jne 0x1056b3cc */
  if (!C.zf) goto L_1056b3cc;
  /* 1056b3c5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1056b3cc:;
  /* 1056b3cc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1056b3cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1056b3d2:;
  /* 1056b3d2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1056b3d8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1056b3de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b3e1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1056b3e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b3e9 jg 0x1056b3ff */
  if ((!C.zf&&C.sf==C.of)) goto L_1056b3ff;
  /* 1056b3eb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1056b3f1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1056b3f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056b3f9 je 0x1056b480 */
  if (C.zf) goto L_1056b480;
L_1056b3ff:;
  /* 1056b3ff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1056b405 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056b406 push edx */
  push32((uint32_t)(EDX));
  /* 1056b407 push eax */
  push32((uint32_t)(EAX));
  /* 1056b408 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1056b40e push edx */
  push32((uint32_t)(EDX));
  /* 1056b40f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1056b415 push eax */
  push32((uint32_t)(EAX));
  /* 1056b416 call 0x1056a790 */
  push32(0x1056b41bu); f_1056a790();
  /* 1056b41b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b41e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1056b424 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1056b42a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056b42b push edx */
  push32((uint32_t)(EDX));
  /* 1056b42c push eax */
  push32((uint32_t)(EAX));
  /* 1056b42d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1056b433 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b434 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1056b43a push edx */
  push32((uint32_t)(EDX));
  /* 1056b43b call 0x1056a720 */
  push32(0x1056b440u); f_1056a720();
  /* 1056b440 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1056b446 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1056b44c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b453 jle 0x1056b467 */
  if ((C.zf||C.sf!=C.of)) goto L_1056b467;
  /* 1056b455 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1056b45b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b461 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1056b467:;
  /* 1056b467 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b46a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1056b470 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1056b472 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b475 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b478 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1056b47b jmp 0x1056b3d2 */
  goto L_1056b3d2;
L_1056b480:;
  /* 1056b480 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1056b483 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b486 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1056b489 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b48c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b48f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1056b492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b495 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b49a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b49c je 0x1056b4c7 */
  if (C.zf) goto L_1056b4c7;
  /* 1056b49e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b4a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056b4a4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b4a7 jne 0x1056b4af */
  if (!C.zf) goto L_1056b4af;
  /* 1056b4a9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b4ad jne 0x1056b4c7 */
  if (!C.zf) goto L_1056b4c7;
L_1056b4af:;
  /* 1056b4af mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b4b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b4b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1056b4b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b4bb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1056b4be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056b4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b4c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1056b4c7:;
  /* 1056b4c7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b4ce jne 0x1056b6a2 */
  if (!C.zf) goto L_1056b6a2;
  /* 1056b4d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b4d7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b4dc je 0x1056b52d */
  if (C.zf) goto L_1056b52d;
  /* 1056b4de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b4e1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1056b4e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056b4e9 je 0x1056b4fb */
  if (C.zf) goto L_1056b4fb;
  /* 1056b4eb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1056b4f2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1056b4f9 jmp 0x1056b52d */
  goto L_1056b52d;
L_1056b4fb:;
  /* 1056b4fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b4fe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b503 je 0x1056b515 */
  if (C.zf) goto L_1056b515;
  /* 1056b505 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1056b50c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1056b513 jmp 0x1056b52d */
  goto L_1056b52d;
L_1056b515:;
  /* 1056b515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b518 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1056b51b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b51d je 0x1056b52d */
  if (C.zf) goto L_1056b52d;
  /* 1056b51f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1056b526 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1056b52d:;
  /* 1056b52d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1056b533 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b536 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b539 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1056b53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b542 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1056b545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b547 jne 0x1056b565 */
  if (!C.zf) goto L_1056b565;
  /* 1056b549 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1056b54f push eax */
  push32((uint32_t)(EAX));
  /* 1056b550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b553 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b554 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1056b55a push edx */
  push32((uint32_t)(EDX));
  /* 1056b55b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1056b55d call 0x1056b840 */
  push32(0x1056b562u); f_1056b840();
  /* 1056b562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056b565:;
  /* 1056b565 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1056b56b push eax */
  push32((uint32_t)(EAX));
  /* 1056b56c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b56f push ecx */
  push32((uint32_t)(ECX));
  /* 1056b570 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056b573 push edx */
  push32((uint32_t)(EDX));
  /* 1056b574 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1056b57a push eax */
  push32((uint32_t)(EAX));
  /* 1056b57b call 0x1056b880 */
  push32(0x1056b580u); f_1056b880();
  /* 1056b580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b586 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1056b589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056b58b je 0x1056b5b3 */
  if (C.zf) goto L_1056b5b3;
  /* 1056b58d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b590 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b593 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b595 jne 0x1056b5b3 */
  if (!C.zf) goto L_1056b5b3;
  /* 1056b597 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1056b59d push eax */
  push32((uint32_t)(EAX));
  /* 1056b59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b5a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b5a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1056b5a8 push edx */
  push32((uint32_t)(EDX));
  /* 1056b5a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1056b5ab call 0x1056b840 */
  push32(0x1056b5b0u); f_1056b840();
  /* 1056b5b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056b5b3:;
  /* 1056b5b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b5b7 je 0x1056b661 */
  if (C.zf) goto L_1056b661;
  /* 1056b5bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b5c1 jle 0x1056b661 */
  if ((C.zf||C.sf!=C.of)) goto L_1056b661;
  /* 1056b5c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b5ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1056b5d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056b5d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1056b5d9:;
  /* 1056b5d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1056b5df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1056b5e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b5e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1056b5ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b5f0 je 0x1056b65f */
  if (C.zf) goto L_1056b65f;
  /* 1056b5f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1056b5f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1056b5fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1056b602 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1056b609 push eax */
  push32((uint32_t)(EAX));
  /* 1056b60a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1056b610 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b611 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1056b617 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b61a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1056b620 call 0x1056c9f0 */
  push32(0x1056b625u); f_1056c9f0();
  /* 1056b625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b628 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1056b62e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b635 jg 0x1056b639 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056b639;
  /* 1056b637 jmp 0x1056b65f */
  goto L_1056b65f;
L_1056b639:;
  /* 1056b639 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1056b63f push eax */
  push32((uint32_t)(EAX));
  /* 1056b640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b643 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b644 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1056b64a push edx */
  push32((uint32_t)(EDX));
  /* 1056b64b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1056b651 push eax */
  push32((uint32_t)(EAX));
  /* 1056b652 call 0x1056b880 */
  push32(0x1056b657u); f_1056b880();
  /* 1056b657 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b65a jmp 0x1056b5d9 */
  goto L_1056b5d9;
L_1056b65f:;
  /* 1056b65f jmp 0x1056b67c */
  goto L_1056b67c;
L_1056b661:;
  /* 1056b661 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1056b667 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b66b push edx */
  push32((uint32_t)(EDX));
  /* 1056b66c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056b66f push eax */
  push32((uint32_t)(EAX));
  /* 1056b670 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056b673 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b674 call 0x1056b880 */
  push32(0x1056b679u); f_1056b880();
  /* 1056b679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056b67c:;
  /* 1056b67c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b67f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1056b682 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056b684 je 0x1056b6a2 */
  if (C.zf) goto L_1056b6a2;
  /* 1056b686 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1056b68c push eax */
  push32((uint32_t)(EAX));
  /* 1056b68d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b690 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b691 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1056b697 push edx */
  push32((uint32_t)(EDX));
  /* 1056b698 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1056b69a call 0x1056b840 */
  push32(0x1056b69fu); f_1056b840();
  /* 1056b69f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056b6a2:;
  /* 1056b6a2 jmp 0x1056aab4 */
  goto L_1056aab4;
L_1056b6a7:;
  /* 1056b6a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1056b6ad pop edi */
  EDI = (pop32());
  /* 1056b6ae pop esi */
  ESI = (pop32());
  /* 1056b6af pop ebx */
  EBX = (pop32());
  /* 1056b6b0 mov esp, ebp */
  ESP = (EBP);
  /* 1056b6b2 pop ebp */
  EBP = (pop32());
  /* 1056b6b3 ret  */
  ESPCHK(0x1056aa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x1056b7c0 (119 bytes, 44 insns) */
void f_1056b7c0(void) {
  FTRACE(0x1056b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1056b7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b7c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b7c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056b7ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b7cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b7d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1056b7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b7d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b7da jl 0x1056b802 */
  if ((C.sf!=C.of)) goto L_1056b802;
  /* 1056b7dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b7df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056b7e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1056b7e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1056b7e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1056b7ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1056b7f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056b7f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b7f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1056b7f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b7fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b7fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1056b800 jmp 0x1056b815 */
  goto L_1056b815;
L_1056b802:;
  /* 1056b802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b805 push edx */
  push32((uint32_t)(EDX));
  /* 1056b806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b809 push eax */
  push32((uint32_t)(EAX));
  /* 1056b80a call 0x1056a810 */
  push32(0x1056b80fu); f_1056a810();
  /* 1056b80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056b815:;
  /* 1056b815 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b819 jne 0x1056b826 */
  if (!C.zf) goto L_1056b826;
  /* 1056b81b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b81e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1056b824 jmp 0x1056b833 */
  goto L_1056b833;
L_1056b826:;
  /* 1056b826 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b829 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1056b82b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b82e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b831 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1056b833:;
  /* 1056b833 mov esp, ebp */
  ESP = (EBP);
  /* 1056b835 pop ebp */
  EBP = (pop32());
  /* 1056b836 ret  */
  ESPCHK(0x1056b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x1056b840 (53 bytes, 23 insns) */
void f_1056b840(void) {
  FTRACE(0x1056b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b840 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b841 mov ebp, esp */
  EBP = (ESP);
L_1056b843:;
  /* 1056b843 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b846 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b84c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1056b84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b851 jle 0x1056b873 */
  if ((C.zf||C.sf!=C.of)) goto L_1056b873;
  /* 1056b853 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056b856 push edx */
  push32((uint32_t)(EDX));
  /* 1056b857 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b85a push eax */
  push32((uint32_t)(EAX));
  /* 1056b85b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b85e push ecx */
  push32((uint32_t)(ECX));
  /* 1056b85f call 0x1056b7c0 */
  push32(0x1056b864u); f_1056b7c0();
  /* 1056b864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056b86a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b86d jne 0x1056b871 */
  if (!C.zf) goto L_1056b871;
  /* 1056b86f jmp 0x1056b873 */
  goto L_1056b873;
L_1056b871:;
  /* 1056b871 jmp 0x1056b843 */
  goto L_1056b843;
L_1056b873:;
  /* 1056b873 pop ebp */
  EBP = (pop32());
  /* 1056b874 ret  */
  ESPCHK(0x1056b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x1056b880 (74 bytes, 31 insns) */
void f_1056b880(void) {
  FTRACE(0x1056b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b880 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b881 mov ebp, esp */
  EBP = (ESP);
  /* 1056b883 push ecx */
  push32((uint32_t)(ECX));
L_1056b884:;
  /* 1056b884 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b887 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b88a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b88d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1056b890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056b892 jle 0x1056b8c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1056b8c6;
  /* 1056b894 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056b897 push edx */
  push32((uint32_t)(EDX));
  /* 1056b898 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b89b push eax */
  push32((uint32_t)(EAX));
  /* 1056b89c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b89f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056b8a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056b8a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1056b8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b8ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b8af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1056b8b2 call 0x1056b7c0 */
  push32(0x1056b8b7u); f_1056b7c0();
  /* 1056b8b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b8ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056b8bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b8c0 jne 0x1056b8c4 */
  if (!C.zf) goto L_1056b8c4;
  /* 1056b8c2 jmp 0x1056b8c6 */
  goto L_1056b8c6;
L_1056b8c4:;
  /* 1056b8c4 jmp 0x1056b884 */
  goto L_1056b884;
L_1056b8c6:;
  /* 1056b8c6 mov esp, ebp */
  ESP = (EBP);
  /* 1056b8c8 pop ebp */
  EBP = (pop32());
  /* 1056b8c9 ret  */
  ESPCHK(0x1056b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d0 @ 0x1056b8d0 (26 bytes, 12 insns) */
void f_1056b8d0(void) {
  FTRACE(0x1056b8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1056b8d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b8d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056b8d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b8de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1056b8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b8e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056b8e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1056b8e8 pop ebp */
  EBP = (pop32());
  /* 1056b8e9 ret  */
  ESPCHK(0x1056b8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x1056b8f0 (31 bytes, 14 insns) */
void f_1056b8f0(void) {
  FTRACE(0x1056b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056b8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b8f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056b8f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b8fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b8fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1056b900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056b905 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056b908 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1056b90a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056b90d pop ebp */
  EBP = (pop32());
  /* 1056b90e ret  */
  ESPCHK(0x1056b8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b910 @ 0x1056b910 (27 bytes, 12 insns) */
void f_1056b910(void) {
  FTRACE(0x1056b910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b910 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b911 mov ebp, esp */
  EBP = (ESP);
  /* 1056b913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b916 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056b918 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b91e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1056b920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b923 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056b925 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1056b929 pop ebp */
  EBP = (pop32());
  /* 1056b92a ret  */
  ESPCHK(0x1056b910u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1056b930 (145 bytes, 42 insns) */
void f_1056b930(void) {
  FTRACE(0x1056b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b931 mov ebp, esp */
  EBP = (ESP);
  /* 1056b933 push ecx */
  push32((uint32_t)(ECX));
  /* 1056b934 call 0x1056b9e0 */
  push32(0x1056b939u); f_1056b9e0();
  /* 1056b939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b93c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1056b93e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056b945 jmp 0x1056b950 */
  goto L_1056b950;
L_1056b947:;
  /* 1056b947 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b94a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b94d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056b950:;
  /* 1056b950 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b954 jae 0x1056b97a */
  if (!C.cf) goto L_1056b97a;
  /* 1056b956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b95c cmp ecx, dword ptr [eax*8 + 0x1058dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1058dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b963 jne 0x1056b978 */
  if (!C.zf) goto L_1056b978;
  /* 1056b965 call 0x1056b9d0 */
  push32(0x1056b96au); f_1056b9d0();
  /* 1056b96a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056b96d mov ecx, dword ptr [edx*8 + 0x1058dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1058dfbc)));
  /* 1056b974 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1056b976 jmp 0x1056b9bd */
  goto L_1056b9bd;
L_1056b978:;
  /* 1056b978 jmp 0x1056b947 */
  goto L_1056b947;
L_1056b97a:;
  /* 1056b97a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b97e jb 0x1056b993 */
  if (C.cf) goto L_1056b993;
  /* 1056b980 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b984 ja 0x1056b993 */
  if ((!C.cf&&!C.zf)) goto L_1056b993;
  /* 1056b986 call 0x1056b9d0 */
  push32(0x1056b98bu); f_1056b9d0();
  /* 1056b98b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1056b991 jmp 0x1056b9bd */
  goto L_1056b9bd;
L_1056b993:;
  /* 1056b993 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b99a jb 0x1056b9b2 */
  if (C.cf) goto L_1056b9b2;
  /* 1056b99c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056b9a3 ja 0x1056b9b2 */
  if ((!C.cf&&!C.zf)) goto L_1056b9b2;
  /* 1056b9a5 call 0x1056b9d0 */
  push32(0x1056b9aau); f_1056b9d0();
  /* 1056b9aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1056b9b0 jmp 0x1056b9bd */
  goto L_1056b9bd;
L_1056b9b2:;
  /* 1056b9b2 call 0x1056b9d0 */
  push32(0x1056b9b7u); f_1056b9d0();
  /* 1056b9b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1056b9bd:;
  /* 1056b9bd mov esp, ebp */
  ESP = (EBP);
  /* 1056b9bf pop ebp */
  EBP = (pop32());
  /* 1056b9c0 ret  */
  ESPCHK(0x1056b930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x1056b9d0 (13 bytes, 6 insns) */
void f_1056b9d0(void) {
  FTRACE(0x1056b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1056b9d3 call 0x10563540 */
  push32(0x1056b9d8u); f_10563540();
  /* 1056b9d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b9db pop ebp */
  EBP = (pop32());
  /* 1056b9dc ret  */
  ESPCHK(0x1056b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x1056b9e0 (13 bytes, 6 insns) */
void f_1056b9e0(void) {
  FTRACE(0x1056b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056b9e3 call 0x10563540 */
  push32(0x1056b9e8u); f_10563540();
  /* 1056b9e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056b9eb pop ebp */
  EBP = (pop32());
  /* 1056b9ec ret  */
  ESPCHK(0x1056b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x1056b9f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1056b9f0(void) {
  FTRACE(0x1056b9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056b9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056b9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056b9f3 push edi */
  push32((uint32_t)(EDI));
  /* 1056b9f4 push esi */
  push32((uint32_t)(ESI));
  /* 1056b9f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1056b9f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056b9fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1056b9fe mov eax, ecx */
  EAX = (ECX);
  /* 1056ba00 mov edx, ecx */
  EDX = (ECX);
  /* 1056ba02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ba04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ba06 jbe 0x1056ba10 */
  if ((C.cf||C.zf)) goto L_1056ba10;
  /* 1056ba08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ba0a jb 0x1056bb88 */
  if (C.cf) goto L_1056bb88;
L_1056ba10:;
  /* 1056ba10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1056ba16 jne 0x1056ba2c */
  if (!C.zf) goto L_1056ba2c;
  /* 1056ba18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056ba1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1056ba1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ba21 jb 0x1056ba4c */
  if (C.cf) goto L_1056ba4c;
  /* 1056ba23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056ba25 jmp dword ptr [edx*4 + 0x1056bb38] */
  switch (EDX) {
    case 0: goto L_1056bb48;
    case 1: goto L_1056bb50;
    case 2: goto L_1056bb5c;
    case 3: goto L_1056bb70;
    default: x86_unimpl("switch@0x1056ba25 out of table"); return;
  }
L_1056ba2c:;
  /* 1056ba2c mov eax, edi */
  EAX = (EDI);
  /* 1056ba2e mov edx, 3 */
  EDX = (0x3u);
  /* 1056ba33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ba36 jb 0x1056ba44 */
  if (C.cf) goto L_1056ba44;
  /* 1056ba38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1056ba3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ba3d jmp dword ptr [eax*4 + 0x1056ba50] */
  switch (EAX) {
    case 1: goto L_1056ba60;
    case 2: goto L_1056ba8c;
    case 3: goto L_1056bab0;
    default: x86_unimpl("switch@0x1056ba3d out of table"); return;
  }
L_1056ba44:;
  /* 1056ba44 jmp dword ptr [ecx*4 + 0x1056bb48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1056bb48)))); return;
  /* 1056ba4b nop  */
  /* nop */
L_1056ba4c:;
  /* 1056ba4c jmp dword ptr [ecx*4 + 0x1056bacc] */
  switch (ECX) {
    case 0: goto L_1056bb2f;
    case 1: goto L_1056bb1c;
    case 2: goto L_1056bb14;
    case 3: goto L_1056bb0c;
    case 4: goto L_1056bb04;
    case 5: goto L_1056bafc;
    case 6: goto L_1056baf4;
    case 7: goto L_1056baec;
    default: x86_unimpl("switch@0x1056ba4c out of table"); return;
  }
  /* 1056ba53 nop  */
  /* nop */
L_1056ba60:;
  /* 1056ba60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056ba62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056ba64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056ba66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056ba69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056ba6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056ba6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056ba72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056ba75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ba78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ba7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ba7e jb 0x1056ba4c */
  if (C.cf) goto L_1056ba4c;
  /* 1056ba80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056ba82 jmp dword ptr [edx*4 + 0x1056bb38] */
  switch (EDX) {
    case 0: goto L_1056bb48;
    case 1: goto L_1056bb50;
    case 2: goto L_1056bb5c;
    case 3: goto L_1056bb70;
    default: x86_unimpl("switch@0x1056ba82 out of table"); return;
  }
  /* 1056ba89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056ba8c:;
  /* 1056ba8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056ba8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056ba90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056ba92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056ba95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056ba98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056ba9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ba9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056baa1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056baa4 jb 0x1056ba4c */
  if (C.cf) goto L_1056ba4c;
  /* 1056baa6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056baa8 jmp dword ptr [edx*4 + 0x1056bb38] */
  switch (EDX) {
    case 0: goto L_1056bb48;
    case 1: goto L_1056bb50;
    case 2: goto L_1056bb5c;
    case 3: goto L_1056bb70;
    default: x86_unimpl("switch@0x1056baa8 out of table"); return;
  }
  /* 1056baaf nop  */
  /* nop */
L_1056bab0:;
  /* 1056bab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056bab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056bab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056bab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1056bab7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056baba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1056babb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056babe jb 0x1056ba4c */
  if (C.cf) goto L_1056ba4c;
  /* 1056bac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056bac2 jmp dword ptr [edx*4 + 0x1056bb38] */
  switch (EDX) {
    case 0: goto L_1056bb48;
    case 1: goto L_1056bb50;
    case 2: goto L_1056bb5c;
    case 3: goto L_1056bb70;
    default: x86_unimpl("switch@0x1056bac2 out of table"); return;
  }
  /* 1056bac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056baec:;
  /* 1056baec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1056baf0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1056baf4:;
  /* 1056baf4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1056baf8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1056bafc:;
  /* 1056bafc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1056bb00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1056bb04:;
  /* 1056bb04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1056bb08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1056bb0c:;
  /* 1056bb0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1056bb10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1056bb14:;
  /* 1056bb14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1056bb18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1056bb1c:;
  /* 1056bb1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1056bb20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1056bb24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1056bb2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056bb2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1056bb2f:;
  /* 1056bb2f jmp dword ptr [edx*4 + 0x1056bb38] */
  switch (EDX) {
    case 0: goto L_1056bb48;
    case 1: goto L_1056bb50;
    case 2: goto L_1056bb5c;
    case 3: goto L_1056bb70;
    default: x86_unimpl("switch@0x1056bb2f out of table"); return;
  }
  /* 1056bb36 mov edi, edi */
  EDI = (EDI);
L_1056bb48:;
  /* 1056bb48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bb4b pop esi */
  ESI = (pop32());
  /* 1056bb4c pop edi */
  EDI = (pop32());
  /* 1056bb4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bb4e ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bb4f nop  */
  /* nop */
L_1056bb50:;
  /* 1056bb50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056bb52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056bb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bb57 pop esi */
  ESI = (pop32());
  /* 1056bb58 pop edi */
  EDI = (pop32());
  /* 1056bb59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bb5a ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bb5b nop  */
  /* nop */
L_1056bb5c:;
  /* 1056bb5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056bb5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056bb60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056bb63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056bb66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bb69 pop esi */
  ESI = (pop32());
  /* 1056bb6a pop edi */
  EDI = (pop32());
  /* 1056bb6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bb6c ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bb6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056bb70:;
  /* 1056bb70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056bb72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1056bb74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056bb77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056bb7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056bb7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056bb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bb83 pop esi */
  ESI = (pop32());
  /* 1056bb84 pop edi */
  EDI = (pop32());
  /* 1056bb85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bb86 ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bb87 nop  */
  /* nop */
L_1056bb88:;
  /* 1056bb88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1056bb8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1056bb90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1056bb96 jne 0x1056bbbc */
  if (!C.zf) goto L_1056bbbc;
  /* 1056bb98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056bb9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1056bb9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bba1 jb 0x1056bbb0 */
  if (C.cf) goto L_1056bbb0;
  /* 1056bba3 std  */
  C.df=1;
  /* 1056bba4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056bba6 cld  */
  C.df=0;
  /* 1056bba7 jmp dword ptr [edx*4 + 0x1056bcd0] */
  switch (EDX) {
    case 0: goto L_1056bce0;
    case 1: goto L_1056bce8;
    case 2: goto L_1056bcf8;
    case 3: goto L_1056bd0c;
    default: x86_unimpl("switch@0x1056bba7 out of table"); return;
  }
  /* 1056bbae mov edi, edi */
  EDI = (EDI);
L_1056bbb0:;
  /* 1056bbb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056bbb2 jmp dword ptr [ecx*4 + 0x1056bc80] */
  switch (ECX) {
    case 0: goto L_1056bcc7;
    default: x86_unimpl("switch@0x1056bbb2 out of table"); return;
  }
  /* 1056bbb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056bbbc:;
  /* 1056bbbc mov eax, edi */
  EAX = (EDI);
  /* 1056bbbe mov edx, 3 */
  EDX = (0x3u);
  /* 1056bbc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bbc6 jb 0x1056bbd4 */
  if (C.cf) goto L_1056bbd4;
  /* 1056bbc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1056bbcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056bbcd jmp dword ptr [eax*4 + 0x1056bbd8] */
  switch (EAX) {
    case 1: goto L_1056bbe8;
    case 2: goto L_1056bc08;
    case 3: goto L_1056bc30;
    default: x86_unimpl("switch@0x1056bbcd out of table"); return;
  }
L_1056bbd4:;
  /* 1056bbd4 jmp dword ptr [ecx*4 + 0x1056bcd0] */
  switch (ECX) {
    case 0: goto L_1056bce0;
    case 1: goto L_1056bce8;
    case 2: goto L_1056bcf8;
    case 3: goto L_1056bd0c;
    default: x86_unimpl("switch@0x1056bbd4 out of table"); return;
  }
  /* 1056bbdb nop  */
  /* nop */
L_1056bbe8:;
  /* 1056bbe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056bbeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056bbed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056bbf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1056bbf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056bbf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1056bbf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bbf8 jb 0x1056bbb0 */
  if (C.cf) goto L_1056bbb0;
  /* 1056bbfa std  */
  C.df=1;
  /* 1056bbfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056bbfd cld  */
  C.df=0;
  /* 1056bbfe jmp dword ptr [edx*4 + 0x1056bcd0] */
  switch (EDX) {
    case 0: goto L_1056bce0;
    case 1: goto L_1056bce8;
    case 2: goto L_1056bcf8;
    case 3: goto L_1056bd0c;
    default: x86_unimpl("switch@0x1056bbfe out of table"); return;
  }
  /* 1056bc05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056bc08:;
  /* 1056bc08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056bc0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056bc0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056bc10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056bc13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056bc16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056bc19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056bc1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056bc1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bc22 jb 0x1056bbb0 */
  if (C.cf) goto L_1056bbb0;
  /* 1056bc24 std  */
  C.df=1;
  /* 1056bc25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056bc27 cld  */
  C.df=0;
  /* 1056bc28 jmp dword ptr [edx*4 + 0x1056bcd0] */
  switch (EDX) {
    case 0: goto L_1056bce0;
    case 1: goto L_1056bce8;
    case 2: goto L_1056bcf8;
    case 3: goto L_1056bd0c;
    default: x86_unimpl("switch@0x1056bc28 out of table"); return;
  }
  /* 1056bc2f nop  */
  /* nop */
L_1056bc30:;
  /* 1056bc30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056bc33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1056bc35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056bc38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056bc3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056bc3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056bc41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1056bc44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056bc47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056bc4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056bc4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bc50 jb 0x1056bbb0 */
  if (C.cf) goto L_1056bbb0;
  /* 1056bc56 std  */
  C.df=1;
  /* 1056bc57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1056bc59 cld  */
  C.df=0;
  /* 1056bc5a jmp dword ptr [edx*4 + 0x1056bcd0] */
  switch (EDX) {
    case 0: goto L_1056bce0;
    case 1: goto L_1056bce8;
    case 2: goto L_1056bcf8;
    case 3: goto L_1056bd0c;
    default: x86_unimpl("switch@0x1056bc5a out of table"); return;
  }
  /* 1056bc61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1056bc64 test byte ptr [esi + edx*2 + 0x56bc8c10], bh */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x56bc8c10)))&(C.b.b.h); fl_logic(_r,8); }
  /* 1056bc6b adc byte ptr [esp + edi*4 - 0x4363efaa], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*4 + -0x4363efaa))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*4 + -0x4363efaa), (_r)); fl_add(_a,_b,_r,8); }
  /* 1056bc72 push esi */
  push32((uint32_t)(ESI));
  /* 1056bc73 adc byte ptr [esp + edi*4 - 0x4353efaa], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*4 + -0x4353efaa))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*4 + -0x4353efaa), (_r)); fl_add(_a,_b,_r,8); }
  /* 1056bc7a push esi */
  push32((uint32_t)(ESI));
  /* 1056bc7c mov ah, 0xbc */
  AH = (0xbcu);
  /* 1056bc7e push esi */
  push32((uint32_t)(ESI));
  /* 1056bc84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1056bc88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1056bc8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1056bc90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1056bc94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1056bc98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1056bc9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1056bca0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1056bca4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1056bca8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1056bcac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1056bcb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1056bcb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1056bcb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1056bcbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1056bcc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1056bcc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1056bcc7:;
  /* 1056bcc7 jmp dword ptr [edx*4 + 0x1056bcd0] */
  switch (EDX) {
    case 0: goto L_1056bce0;
    case 1: goto L_1056bce8;
    case 2: goto L_1056bcf8;
    case 3: goto L_1056bd0c;
    default: x86_unimpl("switch@0x1056bcc7 out of table"); return;
  }
  /* 1056bcce mov edi, edi */
  EDI = (EDI);
L_1056bce0:;
  /* 1056bce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bce3 pop esi */
  ESI = (pop32());
  /* 1056bce4 pop edi */
  EDI = (pop32());
  /* 1056bce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bce6 ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bce7 nop  */
  /* nop */
L_1056bce8:;
  /* 1056bce8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056bceb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056bcee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bcf1 pop esi */
  ESI = (pop32());
  /* 1056bcf2 pop edi */
  EDI = (pop32());
  /* 1056bcf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bcf4 ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bcf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056bcf8:;
  /* 1056bcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056bcfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056bcfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056bd01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056bd04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bd07 pop esi */
  ESI = (pop32());
  /* 1056bd08 pop edi */
  EDI = (pop32());
  /* 1056bd09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bd0a ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
  /* 1056bd0b nop  */
  /* nop */
L_1056bd0c:;
  /* 1056bd0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1056bd0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1056bd12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1056bd15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1056bd18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1056bd1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1056bd1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bd21 pop esi */
  ESI = (pop32());
  /* 1056bd22 pop edi */
  EDI = (pop32());
  /* 1056bd23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056bd24 ret  */
  ESPCHK(0x1056b9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd30 @ 0x1056bd30 (421 bytes, 148 insns) */
void f_1056bd30(void) {
  FTRACE(0x1056bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1056bd31 mov ebp, esp */
  EBP = (ESP);
  /* 1056bd33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1056bd35 push 0x1058b108 */
  push32((uint32_t)(0x1058b108u));
  /* 1056bd3a push 0x1056cc08 */
  push32((uint32_t)(0x1056cc08u));
  /* 1056bd3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1056bd45 push eax */
  push32((uint32_t)(EAX));
  /* 1056bd46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1056bd4d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056bd50 push ebx */
  push32((uint32_t)(EBX));
  /* 1056bd51 push esi */
  push32((uint32_t)(ESI));
  /* 1056bd52 push edi */
  push32((uint32_t)(EDI));
  /* 1056bd53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1056bd56 cmp dword ptr [0x1058f70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bd5d jne 0x1056bdae */
  if (!C.zf) goto L_1056bdae;
  /* 1056bd5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1056bd62 push eax */
  push32((uint32_t)(EAX));
  /* 1056bd63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bd65 push 0x1058b100 */
  push32((uint32_t)(0x1058b100u));
  /* 1056bd6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bd6c call dword ptr [0x105922bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922bc))), 0x1056bd72u);
  /* 1056bd72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056bd74 je 0x1056bd82 */
  if (C.zf) goto L_1056bd82;
  /* 1056bd76 mov dword ptr [0x1058f70c], 1 */
  w32((uint32_t)(0x1058f70c), (0x1u));
  /* 1056bd80 jmp 0x1056bdae */
  goto L_1056bdae;
L_1056bd82:;
  /* 1056bd82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1056bd85 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bd86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bd88 push 0x1058b0fc */
  push32((uint32_t)(0x1058b0fcu));
  /* 1056bd8d push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bd8f push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bd91 call dword ptr [0x105922c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c0))), 0x1056bd97u);
  /* 1056bd97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056bd99 je 0x1056bda7 */
  if (C.zf) goto L_1056bda7;
  /* 1056bd9b mov dword ptr [0x1058f70c], 2 */
  w32((uint32_t)(0x1058f70c), (0x2u));
  /* 1056bda5 jmp 0x1056bdae */
  goto L_1056bdae;
L_1056bda7:;
  /* 1056bda7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056bda9 jmp 0x1056bed8 */
  goto L_1056bed8;
L_1056bdae:;
  /* 1056bdae cmp dword ptr [0x1058f70c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f70c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bdb5 jne 0x1056bde5 */
  if (!C.zf) goto L_1056bde5;
  /* 1056bdb7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bdbb jne 0x1056bdc6 */
  if (!C.zf) goto L_1056bdc6;
  /* 1056bdbd mov edx, dword ptr [0x1058f718] */
  EDX = (r32((uint32_t)(0x1058f718)));
  /* 1056bdc3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1056bdc6:;
  /* 1056bdc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056bdc9 push eax */
  push32((uint32_t)(EAX));
  /* 1056bdca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056bdcd push ecx */
  push32((uint32_t)(ECX));
  /* 1056bdce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056bdd1 push edx */
  push32((uint32_t)(EDX));
  /* 1056bdd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bdd5 push eax */
  push32((uint32_t)(EAX));
  /* 1056bdd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1056bdd9 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bdda call dword ptr [0x105922c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c0))), 0x1056bde0u);
  /* 1056bde0 jmp 0x1056bed8 */
  goto L_1056bed8;
L_1056bde5:;
  /* 1056bde5 cmp dword ptr [0x1058f70c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f70c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bdec jne 0x1056bed6 */
  if (!C.zf) goto L_1056bed6;
  /* 1056bdf2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bdf6 jne 0x1056be01 */
  if (!C.zf) goto L_1056be01;
  /* 1056bdf8 mov edx, dword ptr [0x1058f728] */
  EDX = (r32((uint32_t)(0x1058f728)));
  /* 1056bdfe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1056be01:;
  /* 1056be01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056be03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056be05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056be08 push eax */
  push32((uint32_t)(EAX));
  /* 1056be09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056be0c push ecx */
  push32((uint32_t)(ECX));
  /* 1056be0d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1056be10 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056be12 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056be14 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1056be17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056be1a push edx */
  push32((uint32_t)(EDX));
  /* 1056be1b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056be1e push eax */
  push32((uint32_t)(EAX));
  /* 1056be1f call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x1056be25u);
  /* 1056be25 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1056be28 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056be2c jne 0x1056be35 */
  if (!C.zf) goto L_1056be35;
  /* 1056be2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056be30 jmp 0x1056bed8 */
  goto L_1056bed8;
L_1056be35:;
  /* 1056be35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056be3c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056be3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1056be41 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056be44 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1056be46 call 0x10566ca0 */
  push32(0x1056be4bu); f_10566ca0();
  /* 1056be4b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1056be4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1056be51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056be54 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1056be57 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056be5a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1056be5c push edx */
  push32((uint32_t)(EDX));
  /* 1056be5d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056be5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056be62 push eax */
  push32((uint32_t)(EAX));
  /* 1056be63 call 0x10567870 */
  push32(0x1056be68u); f_10567870();
  /* 1056be68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056be6b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1056be72 jmp 0x1056be8b */
  goto L_1056be8b;
  /* 1056be74 mov eax, 1 */
  EAX = (0x1u);
  /* 1056be79 ret  */
  ESPCHK(0x1056bd30u, _esp0);
  ESP += 4; return;
  /* 1056be7a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1056be7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1056be84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1056be8b:;
  /* 1056be8b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056be8f jne 0x1056be95 */
  if (!C.zf) goto L_1056be95;
  /* 1056be91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056be93 jmp 0x1056bed8 */
  goto L_1056bed8;
L_1056be95:;
  /* 1056be95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056be98 push ecx */
  push32((uint32_t)(ECX));
  /* 1056be99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056be9c push edx */
  push32((uint32_t)(EDX));
  /* 1056be9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056bea0 push eax */
  push32((uint32_t)(EAX));
  /* 1056bea1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056bea4 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bea7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056beaa push edx */
  push32((uint32_t)(EDX));
  /* 1056beab call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x1056beb1u);
  /* 1056beb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1056beb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056beb8 jne 0x1056bebe */
  if (!C.zf) goto L_1056bebe;
  /* 1056beba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056bebc jmp 0x1056bed8 */
  goto L_1056bed8;
L_1056bebe:;
  /* 1056bebe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056bec1 push eax */
  push32((uint32_t)(EAX));
  /* 1056bec2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056bec5 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bec6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056bec9 push edx */
  push32((uint32_t)(EDX));
  /* 1056beca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056becd push eax */
  push32((uint32_t)(EAX));
  /* 1056bece call dword ptr [0x105922bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922bc))), 0x1056bed4u);
  /* 1056bed4 jmp 0x1056bed8 */
  goto L_1056bed8;
L_1056bed6:;
  /* 1056bed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056bed8:;
  /* 1056bed8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1056bedb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056bede mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1056bee5 pop edi */
  EDI = (pop32());
  /* 1056bee6 pop esi */
  ESI = (pop32());
  /* 1056bee7 pop ebx */
  EBX = (pop32());
  /* 1056bee8 mov esp, ebp */
  ESP = (EBP);
  /* 1056beea pop ebp */
  EBP = (pop32());
  /* 1056beeb ret  */
  ESPCHK(0x1056bd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef0 @ 0x1056bef0 (727 bytes, 263 insns) */
void f_1056bef0(void) {
  FTRACE(0x1056bef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056bef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056bef1 mov ebp, esp */
  EBP = (ESP);
  /* 1056bef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1056bef5 push 0x1058b118 */
  push32((uint32_t)(0x1058b118u));
  /* 1056befa push 0x1056cc08 */
  push32((uint32_t)(0x1056cc08u));
  /* 1056beff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1056bf05 push eax */
  push32((uint32_t)(EAX));
  /* 1056bf06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1056bf0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056bf10 push ebx */
  push32((uint32_t)(EBX));
  /* 1056bf11 push esi */
  push32((uint32_t)(ESI));
  /* 1056bf12 push edi */
  push32((uint32_t)(EDI));
  /* 1056bf13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1056bf16 cmp dword ptr [0x1058f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bf1d jne 0x1056bf76 */
  if (!C.zf) goto L_1056bf76;
  /* 1056bf1f push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bf21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bf23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bf25 push 0x1058b100 */
  push32((uint32_t)(0x1058b100u));
  /* 1056bf2a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056bf2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bf31 call dword ptr [0x105922b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b4))), 0x1056bf37u);
  /* 1056bf37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056bf39 je 0x1056bf47 */
  if (C.zf) goto L_1056bf47;
  /* 1056bf3b mov dword ptr [0x1058f730], 1 */
  w32((uint32_t)(0x1058f730), (0x1u));
  /* 1056bf45 jmp 0x1056bf76 */
  goto L_1056bf76;
L_1056bf47:;
  /* 1056bf47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bf49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bf4b push 1 */
  push32((uint32_t)(0x1u));
  /* 1056bf4d push 0x1058b0fc */
  push32((uint32_t)(0x1058b0fcu));
  /* 1056bf52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056bf57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bf59 call dword ptr [0x105922b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b8))), 0x1056bf5fu);
  /* 1056bf5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056bf61 je 0x1056bf6f */
  if (C.zf) goto L_1056bf6f;
  /* 1056bf63 mov dword ptr [0x1058f730], 2 */
  w32((uint32_t)(0x1058f730), (0x2u));
  /* 1056bf6d jmp 0x1056bf76 */
  goto L_1056bf76;
L_1056bf6f:;
  /* 1056bf6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056bf71 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056bf76:;
  /* 1056bf76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bf7a jle 0x1056bf8f */
  if ((C.zf||C.sf!=C.of)) goto L_1056bf8f;
  /* 1056bf7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056bf7f push eax */
  push32((uint32_t)(EAX));
  /* 1056bf80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056bf83 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bf84 call 0x1056c200 */
  push32(0x1056bf89u); f_1056c200();
  /* 1056bf89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056bf8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1056bf8f:;
  /* 1056bf8f cmp dword ptr [0x1058f730], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1058f730))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bf96 jne 0x1056bfbb */
  if (!C.zf) goto L_1056bfbb;
  /* 1056bf98 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1056bf9b push edx */
  push32((uint32_t)(EDX));
  /* 1056bf9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056bf9f push eax */
  push32((uint32_t)(EAX));
  /* 1056bfa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056bfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bfa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056bfa7 push edx */
  push32((uint32_t)(EDX));
  /* 1056bfa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056bfab push eax */
  push32((uint32_t)(EAX));
  /* 1056bfac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056bfaf push ecx */
  push32((uint32_t)(ECX));
  /* 1056bfb0 call dword ptr [0x105922b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b8))), 0x1056bfb6u);
  /* 1056bfb6 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056bfbb:;
  /* 1056bfbb cmp dword ptr [0x1058f730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bfc2 jne 0x1056c1df */
  if (!C.zf) goto L_1056c1df;
  /* 1056bfc8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056bfcc jne 0x1056bfd7 */
  if (!C.zf) goto L_1056bfd7;
  /* 1056bfce mov edx, dword ptr [0x1058f728] */
  EDX = (r32((uint32_t)(0x1058f728)));
  /* 1056bfd4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1056bfd7:;
  /* 1056bfd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bfd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056bfdb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056bfde push eax */
  push32((uint32_t)(EAX));
  /* 1056bfdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056bfe2 push ecx */
  push32((uint32_t)(ECX));
  /* 1056bfe3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1056bfe6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056bfe8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056bfea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1056bfed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056bff0 push edx */
  push32((uint32_t)(EDX));
  /* 1056bff1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1056bff4 push eax */
  push32((uint32_t)(EAX));
  /* 1056bff5 call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x1056bffbu);
  /* 1056bffb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1056bffe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c002 jne 0x1056c00b */
  if (!C.zf) goto L_1056c00b;
  /* 1056c004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c006 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c00b:;
  /* 1056c00b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056c012 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056c015 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1056c017 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c01a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1056c01c call 0x10566ca0 */
  push32(0x1056c021u); f_10566ca0();
  /* 1056c021 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1056c024 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1056c027 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056c02a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1056c02d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1056c034 jmp 0x1056c04d */
  goto L_1056c04d;
  /* 1056c036 mov eax, 1 */
  EAX = (0x1u);
  /* 1056c03b ret  */
  ESPCHK(0x1056bef0u, _esp0);
  ESP += 4; return;
  /* 1056c03c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1056c03f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1056c046 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1056c04d:;
  /* 1056c04d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c051 jne 0x1056c05a */
  if (!C.zf) goto L_1056c05a;
  /* 1056c053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c055 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c05a:;
  /* 1056c05a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056c05d push edx */
  push32((uint32_t)(EDX));
  /* 1056c05e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056c061 push eax */
  push32((uint32_t)(EAX));
  /* 1056c062 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056c065 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c066 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056c069 push edx */
  push32((uint32_t)(EDX));
  /* 1056c06a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056c06c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1056c06f push eax */
  push32((uint32_t)(EAX));
  /* 1056c070 call dword ptr [0x105922c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922c4))), 0x1056c076u);
  /* 1056c076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c078 jne 0x1056c081 */
  if (!C.zf) goto L_1056c081;
  /* 1056c07a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c07c jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c081:;
  /* 1056c081 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c083 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c085 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056c088 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c089 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056c08c push edx */
  push32((uint32_t)(EDX));
  /* 1056c08d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c090 push eax */
  push32((uint32_t)(EAX));
  /* 1056c091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c094 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c095 call dword ptr [0x105922b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b4))), 0x1056c09bu);
  /* 1056c09b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1056c09e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c0a2 jne 0x1056c0ab */
  if (!C.zf) goto L_1056c0ab;
  /* 1056c0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c0a6 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c0ab:;
  /* 1056c0ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c0ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1056c0b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056c0b6 je 0x1056c0fb */
  if (C.zf) goto L_1056c0fb;
  /* 1056c0b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c0bc je 0x1056c0f6 */
  if (C.zf) goto L_1056c0f6;
  /* 1056c0be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056c0c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c0c4 jle 0x1056c0cd */
  if ((C.zf||C.sf!=C.of)) goto L_1056c0cd;
  /* 1056c0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c0c8 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c0cd:;
  /* 1056c0cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1056c0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c0d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056c0d4 push edx */
  push32((uint32_t)(EDX));
  /* 1056c0d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056c0d8 push eax */
  push32((uint32_t)(EAX));
  /* 1056c0d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056c0dc push ecx */
  push32((uint32_t)(ECX));
  /* 1056c0dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c0e0 push edx */
  push32((uint32_t)(EDX));
  /* 1056c0e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c0e4 push eax */
  push32((uint32_t)(EAX));
  /* 1056c0e5 call dword ptr [0x105922b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b4))), 0x1056c0ebu);
  /* 1056c0eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c0ed jne 0x1056c0f6 */
  if (!C.zf) goto L_1056c0f6;
  /* 1056c0ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c0f1 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c0f6:;
  /* 1056c0f6 jmp 0x1056c1da */
  goto L_1056c1da;
L_1056c0fb:;
  /* 1056c0fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056c0fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1056c101 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1056c108 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056c10b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1056c10d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c110 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1056c112 call 0x10566ca0 */
  push32(0x1056c117u); f_10566ca0();
  /* 1056c117 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1056c11a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1056c11d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1056c120 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1056c123 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1056c12a jmp 0x1056c143 */
  goto L_1056c143;
  /* 1056c12c mov eax, 1 */
  EAX = (0x1u);
  /* 1056c131 ret  */
  ESPCHK(0x1056bef0u, _esp0);
  ESP += 4; return;
  /* 1056c132 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1056c135 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1056c13c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1056c143:;
  /* 1056c143 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c147 jne 0x1056c150 */
  if (!C.zf) goto L_1056c150;
  /* 1056c149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c14b jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c150:;
  /* 1056c150 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056c153 push eax */
  push32((uint32_t)(EAX));
  /* 1056c154 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056c157 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c158 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056c15b push edx */
  push32((uint32_t)(EDX));
  /* 1056c15c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056c15f push eax */
  push32((uint32_t)(EAX));
  /* 1056c160 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c163 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c167 push edx */
  push32((uint32_t)(EDX));
  /* 1056c168 call dword ptr [0x105922b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b4))), 0x1056c16eu);
  /* 1056c16e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c170 jne 0x1056c176 */
  if (!C.zf) goto L_1056c176;
  /* 1056c172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c174 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c176:;
  /* 1056c176 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c17a jne 0x1056c1aa */
  if (!C.zf) goto L_1056c1aa;
  /* 1056c17c push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c17e push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c180 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c182 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c184 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056c187 push eax */
  push32((uint32_t)(EAX));
  /* 1056c188 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056c18b push ecx */
  push32((uint32_t)(ECX));
  /* 1056c18c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1056c191 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1056c194 push edx */
  push32((uint32_t)(EDX));
  /* 1056c195 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x1056c19bu);
  /* 1056c19b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1056c19e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c1a2 jne 0x1056c1a8 */
  if (!C.zf) goto L_1056c1a8;
  /* 1056c1a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c1a6 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c1a8:;
  /* 1056c1a8 jmp 0x1056c1da */
  goto L_1056c1da;
L_1056c1aa:;
  /* 1056c1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c1ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c1ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1056c1b1 push eax */
  push32((uint32_t)(EAX));
  /* 1056c1b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1056c1b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c1b6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056c1b9 push edx */
  push32((uint32_t)(EDX));
  /* 1056c1ba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056c1bd push eax */
  push32((uint32_t)(EAX));
  /* 1056c1be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1056c1c3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1056c1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c1c7 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x1056c1cdu);
  /* 1056c1cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1056c1d0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c1d4 jne 0x1056c1da */
  if (!C.zf) goto L_1056c1da;
  /* 1056c1d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c1d8 jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c1da:;
  /* 1056c1da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056c1dd jmp 0x1056c1e1 */
  goto L_1056c1e1;
L_1056c1df:;
  /* 1056c1df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056c1e1:;
  /* 1056c1e1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1056c1e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056c1e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1056c1ee pop edi */
  EDI = (pop32());
  /* 1056c1ef pop esi */
  ESI = (pop32());
  /* 1056c1f0 pop ebx */
  EBX = (pop32());
  /* 1056c1f1 mov esp, ebp */
  ESP = (EBP);
  /* 1056c1f3 pop ebp */
  EBP = (pop32());
  /* 1056c1f4 ret  */
  ESPCHK(0x1056bef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c200 @ 0x1056c200 (80 bytes, 32 insns) */
void f_1056c200(void) {
  FTRACE(0x1056c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c200 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c201 mov ebp, esp */
  EBP = (ESP);
  /* 1056c203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c209 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056c20c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c20f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1056c212:;
  /* 1056c212 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c218 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c21b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056c21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056c220 je 0x1056c237 */
  if (C.zf) goto L_1056c237;
  /* 1056c222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c225 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056c228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056c22a je 0x1056c237 */
  if (C.zf) goto L_1056c237;
  /* 1056c22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c22f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c232 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056c235 jmp 0x1056c212 */
  goto L_1056c212;
L_1056c237:;
  /* 1056c237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c23a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056c23d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056c23f jne 0x1056c249 */
  if (!C.zf) goto L_1056c249;
  /* 1056c241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c244 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c247 jmp 0x1056c24c */
  goto L_1056c24c;
L_1056c249:;
  /* 1056c249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1056c24c:;
  /* 1056c24c mov esp, ebp */
  ESP = (EBP);
  /* 1056c24e pop ebp */
  EBP = (pop32());
  /* 1056c24f ret  */
  ESPCHK(0x1056c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c250 @ 0x1056c250 (130 bytes, 43 insns) */
void f_1056c250(void) {
  FTRACE(0x1056c250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c250 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c251 mov ebp, esp */
  EBP = (ESP);
  /* 1056c253 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c257 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c25d jae 0x1056c281 */
  if (!C.cf) goto L_1056c281;
  /* 1056c25f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c262 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c268 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c26b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c26e mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c275 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056c27a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1056c27d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056c27f jne 0x1056c29c */
  if (!C.zf) goto L_1056c29c;
L_1056c281:;
  /* 1056c281 call 0x1056b9d0 */
  push32(0x1056c286u); f_1056b9d0();
  /* 1056c286 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056c28c call 0x1056b9e0 */
  push32(0x1056c291u); f_1056b9e0();
  /* 1056c291 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056c297 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c29a jmp 0x1056c2ce */
  goto L_1056c2ce;
L_1056c29c:;
  /* 1056c29c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c29f push edx */
  push32((uint32_t)(EDX));
  /* 1056c2a0 call 0x1056d1f0 */
  push32(0x1056c2a5u); f_1056d1f0();
  /* 1056c2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c2a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056c2ab push eax */
  push32((uint32_t)(EAX));
  /* 1056c2ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c2af push ecx */
  push32((uint32_t)(ECX));
  /* 1056c2b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c2b3 push edx */
  push32((uint32_t)(EDX));
  /* 1056c2b4 call 0x1056c2e0 */
  push32(0x1056c2b9u); f_1056c2e0();
  /* 1056c2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c2bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056c2bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1056c2c3 call 0x1056d280 */
  push32(0x1056c2c8u); f_1056d280();
  /* 1056c2c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1056c2ce:;
  /* 1056c2ce mov esp, ebp */
  ESP = (EBP);
  /* 1056c2d0 pop ebp */
  EBP = (pop32());
  /* 1056c2d1 ret  */
  ESPCHK(0x1056c250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2e0 @ 0x1056c2e0 (178 bytes, 56 insns) */
void f_1056c2e0(void) {
  FTRACE(0x1056c2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c2e9 push eax */
  push32((uint32_t)(EAX));
  /* 1056c2ea call 0x1056d070 */
  push32(0x1056c2efu); f_1056d070();
  /* 1056c2ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c2f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1056c2f5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c2f9 jne 0x1056c30e */
  if (!C.zf) goto L_1056c30e;
  /* 1056c2fb call 0x1056b9d0 */
  push32(0x1056c300u); f_1056b9d0();
  /* 1056c300 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056c306 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c309 jmp 0x1056c38e */
  goto L_1056c38e;
L_1056c30e:;
  /* 1056c30e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056c311 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c312 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c314 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c317 push edx */
  push32((uint32_t)(EDX));
  /* 1056c318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056c31b push eax */
  push32((uint32_t)(EAX));
  /* 1056c31c call dword ptr [0x105922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922b0))), 0x1056c322u);
  /* 1056c322 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056c325 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c329 jne 0x1056c336 */
  if (!C.zf) goto L_1056c336;
  /* 1056c32b call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x1056c331u);
  /* 1056c331 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056c334 jmp 0x1056c33d */
  goto L_1056c33d;
L_1056c336:;
  /* 1056c336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1056c33d:;
  /* 1056c33d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c341 je 0x1056c354 */
  if (C.zf) goto L_1056c354;
  /* 1056c343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c346 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c347 call 0x1056b930 */
  push32(0x1056c34cu); f_1056b930();
  /* 1056c34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c34f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c352 jmp 0x1056c38e */
  goto L_1056c38e;
L_1056c354:;
  /* 1056c354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c357 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1056c35a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c35d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c360 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c363 mov ecx, dword ptr [edx*4 + 0x10590f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056c36a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1056c36e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1056c371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c374 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c37a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056c37d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c380 mov eax, dword ptr [eax*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056c387 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1056c38b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1056c38e:;
  /* 1056c38e mov esp, ebp */
  ESP = (EBP);
  /* 1056c390 pop ebp */
  EBP = (pop32());
  /* 1056c391 ret  */
  ESPCHK(0x1056c2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a0 @ 0x1056c3a0 (130 bytes, 43 insns) */
void f_1056c3a0(void) {
  FTRACE(0x1056c3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c3a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c3a7 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c3ad jae 0x1056c3d1 */
  if (!C.cf) goto L_1056c3d1;
  /* 1056c3af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c3b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c3b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c3b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c3bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c3be mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c3c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056c3ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1056c3cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056c3cf jne 0x1056c3ec */
  if (!C.zf) goto L_1056c3ec;
L_1056c3d1:;
  /* 1056c3d1 call 0x1056b9d0 */
  push32(0x1056c3d6u); f_1056b9d0();
  /* 1056c3d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056c3dc call 0x1056b9e0 */
  push32(0x1056c3e1u); f_1056b9e0();
  /* 1056c3e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056c3e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c3ea jmp 0x1056c41e */
  goto L_1056c41e;
L_1056c3ec:;
  /* 1056c3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c3ef push edx */
  push32((uint32_t)(EDX));
  /* 1056c3f0 call 0x1056d1f0 */
  push32(0x1056c3f5u); f_1056d1f0();
  /* 1056c3f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c3f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056c3fb push eax */
  push32((uint32_t)(EAX));
  /* 1056c3fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c3ff push ecx */
  push32((uint32_t)(ECX));
  /* 1056c400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c403 push edx */
  push32((uint32_t)(EDX));
  /* 1056c404 call 0x1056c430 */
  push32(0x1056c409u); f_1056c430();
  /* 1056c409 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c40c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056c40f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c412 push eax */
  push32((uint32_t)(EAX));
  /* 1056c413 call 0x1056d280 */
  push32(0x1056c418u); f_1056d280();
  /* 1056c418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c41b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1056c41e:;
  /* 1056c41e mov esp, ebp */
  ESP = (EBP);
  /* 1056c420 pop ebp */
  EBP = (pop32());
  /* 1056c421 ret  */
  ESPCHK(0x1056c3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1056c430 (627 bytes, 182 insns) */
void f_1056c430(void) {
  FTRACE(0x1056c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c431 mov ebp, esp */
  EBP = (ESP);
  /* 1056c433 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c439 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1056c440 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056c443 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1056c449 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c44d jne 0x1056c456 */
  if (!C.zf) goto L_1056c456;
  /* 1056c44f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c451 jmp 0x1056c69f */
  goto L_1056c69f;
L_1056c456:;
  /* 1056c456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c459 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c45c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c45f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c462 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c465 mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c46c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056c471 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1056c474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056c476 je 0x1056c488 */
  if (C.zf) goto L_1056c488;
  /* 1056c478 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056c47a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c47c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c47f push edx */
  push32((uint32_t)(EDX));
  /* 1056c480 call 0x1056c2e0 */
  push32(0x1056c485u); f_1056c2e0();
  /* 1056c485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056c488:;
  /* 1056c488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c48b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c491 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056c494 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c497 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056c49e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1056c4a3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1056c4a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c4aa je 0x1056c5bc */
  if (C.zf) goto L_1056c5bc;
  /* 1056c4b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c4b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056c4b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1056c4bd:;
  /* 1056c4bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c4c0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c4c3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c4c6 jae 0x1056c5ba */
  if (!C.cf) goto L_1056c5ba;
  /* 1056c4cc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1056c4d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1056c4d5:;
  /* 1056c4d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c4d8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1056c4de sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c4e0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c4e6 jge 0x1056c547 */
  if ((C.sf==C.of)) goto L_1056c547;
  /* 1056c4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c4eb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c4ee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c4f1 jae 0x1056c547 */
  if (!C.cf) goto L_1056c547;
  /* 1056c4f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c4f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1056c4f8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1056c4fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c501 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c504 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056c507 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1056c50e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c511 jne 0x1056c531 */
  if (!C.zf) goto L_1056c531;
  /* 1056c513 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1056c519 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c51c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1056c522 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c525 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1056c528 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c52b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c52e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1056c531:;
  /* 1056c531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c534 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1056c53a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1056c53c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c53f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c542 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056c545 jmp 0x1056c4d5 */
  goto L_1056c4d5;
L_1056c547:;
  /* 1056c547 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c549 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1056c54f push edx */
  push32((uint32_t)(EDX));
  /* 1056c550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c553 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1056c559 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c55b push eax */
  push32((uint32_t)(EAX));
  /* 1056c55c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1056c562 push edx */
  push32((uint32_t)(EDX));
  /* 1056c563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c566 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c56c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056c56f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c572 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056c579 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1056c57c push eax */
  push32((uint32_t)(EAX));
  /* 1056c57d call dword ptr [0x105922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e0))), 0x1056c583u);
  /* 1056c583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c585 je 0x1056c5aa */
  if (C.zf) goto L_1056c5aa;
  /* 1056c587 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056c58a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c590 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1056c593 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056c596 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1056c59c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c59e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c5a4 jge 0x1056c5a8 */
  if ((C.sf==C.of)) goto L_1056c5a8;
  /* 1056c5a6 jmp 0x1056c5ba */
  goto L_1056c5ba;
L_1056c5a8:;
  /* 1056c5a8 jmp 0x1056c5b5 */
  goto L_1056c5b5;
L_1056c5aa:;
  /* 1056c5aa call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x1056c5b0u);
  /* 1056c5b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1056c5b3 jmp 0x1056c5ba */
  goto L_1056c5ba;
L_1056c5b5:;
  /* 1056c5b5 jmp 0x1056c4bd */
  goto L_1056c4bd;
L_1056c5ba:;
  /* 1056c5ba jmp 0x1056c60c */
  goto L_1056c60c;
L_1056c5bc:;
  /* 1056c5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c5be lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1056c5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c5c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056c5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1056c5c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c5cc push eax */
  push32((uint32_t)(EAX));
  /* 1056c5cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c5d0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c5d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c5d6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c5d9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c5dc mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c5e3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1056c5e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c5e7 call dword ptr [0x105922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e0))), 0x1056c5edu);
  /* 1056c5ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c5ef je 0x1056c603 */
  if (C.zf) goto L_1056c603;
  /* 1056c5f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1056c5f8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1056c5fe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1056c601 jmp 0x1056c60c */
  goto L_1056c60c;
L_1056c603:;
  /* 1056c603 call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x1056c609u);
  /* 1056c609 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056c60c:;
  /* 1056c60c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c610 jne 0x1056c696 */
  if (!C.zf) goto L_1056c696;
  /* 1056c616 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c61a je 0x1056c64a */
  if (C.zf) goto L_1056c64a;
  /* 1056c61c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c620 jne 0x1056c639 */
  if (!C.zf) goto L_1056c639;
  /* 1056c622 call 0x1056b9d0 */
  push32(0x1056c627u); f_1056b9d0();
  /* 1056c627 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056c62d call 0x1056b9e0 */
  push32(0x1056c632u); f_1056b9e0();
  /* 1056c632 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056c635 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1056c637 jmp 0x1056c645 */
  goto L_1056c645;
L_1056c639:;
  /* 1056c639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056c63c push edx */
  push32((uint32_t)(EDX));
  /* 1056c63d call 0x1056b930 */
  push32(0x1056c642u); f_1056b930();
  /* 1056c642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056c645:;
  /* 1056c645 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c648 jmp 0x1056c69f */
  goto L_1056c69f;
L_1056c64a:;
  /* 1056c64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c64d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c653 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056c656 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c659 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056c660 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1056c665 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1056c668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c66a je 0x1056c67b */
  if (C.zf) goto L_1056c67b;
  /* 1056c66c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c66f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056c672 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c675 jne 0x1056c67b */
  if (!C.zf) goto L_1056c67b;
  /* 1056c677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c679 jmp 0x1056c69f */
  goto L_1056c69f;
L_1056c67b:;
  /* 1056c67b call 0x1056b9d0 */
  push32(0x1056c680u); f_1056b9d0();
  /* 1056c680 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1056c686 call 0x1056b9e0 */
  push32(0x1056c68bu); f_1056b9e0();
  /* 1056c68b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056c691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056c694 jmp 0x1056c69f */
  goto L_1056c69f;
L_1056c696:;
  /* 1056c696 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056c699 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1056c69f:;
  /* 1056c69f mov esp, ebp */
  ESP = (EBP);
  /* 1056c6a1 pop ebp */
  EBP = (pop32());
  /* 1056c6a2 ret  */
  ESPCHK(0x1056c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x1056c6b0 (199 bytes, 68 insns) */
void f_1056c6b0(void) {
  FTRACE(0x1056c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c6b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1056c6b5 push esi */
  push32((uint32_t)(ESI));
  /* 1056c6b6 push edi */
  push32((uint32_t)(EDI));
L_1056c6b7:;
  /* 1056c6b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c6bb jne 0x1056c6db */
  if (!C.zf) goto L_1056c6db;
  /* 1056c6bd push 0x1058b060 */
  push32((uint32_t)(0x1058b060u));
  /* 1056c6c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056c6c4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1056c6c6 push 0x1058b130 */
  push32((uint32_t)(0x1058b130u));
  /* 1056c6cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1056c6cd call 0x10562bc0 */
  push32(0x1056c6d2u); f_10562bc0();
  /* 1056c6d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c6d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c6d8 jne 0x1056c6db */
  if (!C.zf) goto L_1056c6db;
  /* 1056c6da int3  */
  x86_unimpl("int3 @ 0x1056c6da");
L_1056c6db:;
  /* 1056c6db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c6dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c6df jne 0x1056c6b7 */
  if (!C.zf) goto L_1056c6b7;
  /* 1056c6e1 mov ecx, dword ptr [0x1058f734] */
  ECX = (r32((uint32_t)(0x1058f734)));
  /* 1056c6e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c6ea mov dword ptr [0x1058f734], ecx */
  w32((uint32_t)(0x1058f734), (ECX));
  /* 1056c6f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c6f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056c6f6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1056c6f8 push 0x1058b130 */
  push32((uint32_t)(0x1058b130u));
  /* 1056c6fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1056c6ff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1056c704 call 0x10563b00 */
  push32(0x1056c709u); f_10563b00();
  /* 1056c709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1056c712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c715 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c719 je 0x1056c736 */
  if (C.zf) goto L_1056c736;
  /* 1056c71b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c71e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056c721 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1056c724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c727 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1056c72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c72d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1056c734 jmp 0x1056c75b */
  goto L_1056c75b;
L_1056c736:;
  /* 1056c736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c739 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056c73c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1056c73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c742 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1056c745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c748 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c74b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c74e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1056c751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c754 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1056c75b:;
  /* 1056c75b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c75e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c761 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056c764 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1056c766 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c769 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1056c770 pop edi */
  EDI = (pop32());
  /* 1056c771 pop esi */
  ESI = (pop32());
  /* 1056c772 pop ebx */
  EBX = (pop32());
  /* 1056c773 mov esp, ebp */
  ESP = (EBP);
  /* 1056c775 pop ebp */
  EBP = (pop32());
  /* 1056c776 ret  */
  ESPCHK(0x1056c6b0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1056c780 (50 bytes, 17 insns) */
void f_1056c780(void) {
  FTRACE(0x1056c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c780 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c781 mov ebp, esp */
  EBP = (ESP);
  /* 1056c783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c786 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c78c jb 0x1056c792 */
  if (C.cf) goto L_1056c792;
  /* 1056c78e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056c790 jmp 0x1056c7b0 */
  goto L_1056c7b0;
L_1056c792:;
  /* 1056c792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c795 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c79b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c79e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c7a1 mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c7a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056c7ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1056c7b0:;
  /* 1056c7b0 pop ebp */
  EBP = (pop32());
  /* 1056c7b1 ret  */
  ESPCHK(0x1056c780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x1056c7c0 (300 bytes, 80 insns) */
void f_1056c7c0(void) {
  FTRACE(0x1056c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c7c4 cmp dword ptr [0x10590c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10590c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c7cb jne 0x1056c7d9 */
  if (!C.zf) goto L_1056c7d9;
  /* 1056c7cd mov dword ptr [0x10590c00], 0x200 */
  w32((uint32_t)(0x10590c00), (0x200u));
  /* 1056c7d7 jmp 0x1056c7ec */
  goto L_1056c7ec;
L_1056c7d9:;
  /* 1056c7d9 cmp dword ptr [0x10590c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10590c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c7e0 jge 0x1056c7ec */
  if ((C.sf==C.of)) goto L_1056c7ec;
  /* 1056c7e2 mov dword ptr [0x10590c00], 0x14 */
  w32((uint32_t)(0x10590c00), (0x14u));
L_1056c7ec:;
  /* 1056c7ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1056c7f1 push 0x1058b13c */
  push32((uint32_t)(0x1058b13cu));
  /* 1056c7f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056c7f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1056c7fa mov eax, dword ptr [0x10590c00] */
  EAX = (r32((uint32_t)(0x10590c00)));
  /* 1056c7ff push eax */
  push32((uint32_t)(EAX));
  /* 1056c800 call 0x10563f10 */
  push32(0x1056c805u); f_10563f10();
  /* 1056c805 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c808 mov dword ptr [0x1058f8a8], eax */
  w32((uint32_t)(0x1058f8a8), (EAX));
  /* 1056c80d cmp dword ptr [0x1058f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c814 jne 0x1056c855 */
  if (!C.zf) goto L_1056c855;
  /* 1056c816 mov dword ptr [0x10590c00], 0x14 */
  w32((uint32_t)(0x10590c00), (0x14u));
  /* 1056c820 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1056c825 push 0x1058b13c */
  push32((uint32_t)(0x1058b13cu));
  /* 1056c82a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056c82c push 4 */
  push32((uint32_t)(0x4u));
  /* 1056c82e mov ecx, dword ptr [0x10590c00] */
  ECX = (r32((uint32_t)(0x10590c00)));
  /* 1056c834 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c835 call 0x10563f10 */
  push32(0x1056c83au); f_10563f10();
  /* 1056c83a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c83d mov dword ptr [0x1058f8a8], eax */
  w32((uint32_t)(0x1058f8a8), (EAX));
  /* 1056c842 cmp dword ptr [0x1058f8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c849 jne 0x1056c855 */
  if (!C.zf) goto L_1056c855;
  /* 1056c84b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1056c84d call 0x10562a70 */
  push32(0x1056c852u); f_10562a70();
  /* 1056c852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056c855:;
  /* 1056c855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056c85c jmp 0x1056c867 */
  goto L_1056c867;
L_1056c85e:;
  /* 1056c85e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c864 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056c867:;
  /* 1056c867 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c86b jge 0x1056c886 */
  if ((C.sf==C.of)) goto L_1056c886;
  /* 1056c86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c870 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c873 add eax, 0x1058e120 */
  { uint32_t _a=(EAX),_b=(0x1058e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c87b mov edx, dword ptr [0x1058f8a8] */
  EDX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056c881 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1056c884 jmp 0x1056c85e */
  goto L_1056c85e;
L_1056c886:;
  /* 1056c886 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056c88d jmp 0x1056c898 */
  goto L_1056c898;
L_1056c88f:;
  /* 1056c88f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c892 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056c898:;
  /* 1056c898 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c89c jge 0x1056c8e8 */
  if ((C.sf==C.of)) goto L_1056c8e8;
  /* 1056c89e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c8a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c8a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c8a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c8aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c8ad mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c8b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c8b8 je 0x1056c8d6 */
  if (C.zf) goto L_1056c8d6;
  /* 1056c8ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c8bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c8c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c8c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056c8c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056c8c9 mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056c8d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c8d4 jne 0x1056c8e6 */
  if (!C.zf) goto L_1056c8e6;
L_1056c8d6:;
  /* 1056c8d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056c8d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056c8dc mov dword ptr [ecx + 0x1058e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1058e130), (0xffffffffu));
L_1056c8e6:;
  /* 1056c8e6 jmp 0x1056c88f */
  goto L_1056c88f;
L_1056c8e8:;
  /* 1056c8e8 mov esp, ebp */
  ESP = (EBP);
  /* 1056c8ea pop ebp */
  EBP = (pop32());
  /* 1056c8eb ret  */
  ESPCHK(0x1056c7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8f0 @ 0x1056c8f0 (26 bytes, 9 insns) */
void f_1056c8f0(void) {
  FTRACE(0x1056c8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c8f3 call 0x1056d4f0 */
  push32(0x1056c8f8u); f_1056d4f0();
  /* 1056c8f8 movsx eax, byte ptr [0x1058f54c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1058f54c))));
  /* 1056c8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056c901 je 0x1056c908 */
  if (C.zf) goto L_1056c908;
  /* 1056c903 call 0x1056d2b0 */
  push32(0x1056c908u); f_1056d2b0();
L_1056c908:;
  /* 1056c908 pop ebp */
  EBP = (pop32());
  /* 1056c909 ret  */
  ESPCHK(0x1056c8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x1056c910 (61 bytes, 20 insns) */
void f_1056c910(void) {
  FTRACE(0x1056c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c910 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c911 mov ebp, esp */
  EBP = (ESP);
  /* 1056c913 cmp dword ptr [ebp + 8], 0x1058e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1058e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c91a jb 0x1056c93e */
  if (C.cf) goto L_1056c93e;
  /* 1056c91c cmp dword ptr [ebp + 8], 0x1058e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1058e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c923 ja 0x1056c93e */
  if ((!C.cf&&!C.zf)) goto L_1056c93e;
  /* 1056c925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c928 sub eax, 0x1058e120 */
  { uint32_t _a=(EAX),_b=(0x1058e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c933 push eax */
  push32((uint32_t)(EAX));
  /* 1056c934 call 0x10567500 */
  push32(0x1056c939u); f_10567500();
  /* 1056c939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c93c jmp 0x1056c94b */
  goto L_1056c94b;
L_1056c93e:;
  /* 1056c93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c944 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c945 call dword ptr [0x10592370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592370))), 0x1056c94bu);
L_1056c94b:;
  /* 1056c94b pop ebp */
  EBP = (pop32());
  /* 1056c94c ret  */
  ESPCHK(0x1056c910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x1056c950 (41 bytes, 16 insns) */
void f_1056c950(void) {
  FTRACE(0x1056c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c950 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c951 mov ebp, esp */
  EBP = (ESP);
  /* 1056c953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c957 jge 0x1056c96a */
  if ((C.sf==C.of)) goto L_1056c96a;
  /* 1056c959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c95c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c95f push eax */
  push32((uint32_t)(EAX));
  /* 1056c960 call 0x10567500 */
  push32(0x1056c965u); f_10567500();
  /* 1056c965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c968 jmp 0x1056c977 */
  goto L_1056c977;
L_1056c96a:;
  /* 1056c96a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c96d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c970 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c971 call dword ptr [0x10592370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592370))), 0x1056c977u);
L_1056c977:;
  /* 1056c977 pop ebp */
  EBP = (pop32());
  /* 1056c978 ret  */
  ESPCHK(0x1056c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x1056c980 (61 bytes, 20 insns) */
void f_1056c980(void) {
  FTRACE(0x1056c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c980 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c981 mov ebp, esp */
  EBP = (ESP);
  /* 1056c983 cmp dword ptr [ebp + 8], 0x1058e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1058e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c98a jb 0x1056c9ae */
  if (C.cf) goto L_1056c9ae;
  /* 1056c98c cmp dword ptr [ebp + 8], 0x1058e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1058e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c993 ja 0x1056c9ae */
  if ((!C.cf&&!C.zf)) goto L_1056c9ae;
  /* 1056c995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c998 sub eax, 0x1058e120 */
  { uint32_t _a=(EAX),_b=(0x1058e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c99d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056c9a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1056c9a4 call 0x105675a0 */
  push32(0x1056c9a9u); f_105675a0();
  /* 1056c9a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c9ac jmp 0x1056c9bb */
  goto L_1056c9bb;
L_1056c9ae:;
  /* 1056c9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c9b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c9b5 call dword ptr [0x1059235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059235c))), 0x1056c9bbu);
L_1056c9bb:;
  /* 1056c9bb pop ebp */
  EBP = (pop32());
  /* 1056c9bc ret  */
  ESPCHK(0x1056c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1056c9c0 (41 bytes, 16 insns) */
void f_1056c9c0(void) {
  FTRACE(0x1056c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c9c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056c9c7 jge 0x1056c9da */
  if ((C.sf==C.of)) goto L_1056c9da;
  /* 1056c9c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056c9cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c9cf push eax */
  push32((uint32_t)(EAX));
  /* 1056c9d0 call 0x105675a0 */
  push32(0x1056c9d5u); f_105675a0();
  /* 1056c9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c9d8 jmp 0x1056c9e7 */
  goto L_1056c9e7;
L_1056c9da:;
  /* 1056c9da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056c9dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056c9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1056c9e1 call dword ptr [0x1059235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059235c))), 0x1056c9e7u);
L_1056c9e7:;
  /* 1056c9e7 pop ebp */
  EBP = (pop32());
  /* 1056c9e8 ret  */
  ESPCHK(0x1056c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x1056c9f0 (119 bytes, 34 insns) */
void f_1056c9f0(void) {
  FTRACE(0x1056c9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056c9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056c9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056c9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056c9f6 push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 1056c9fb call dword ptr [0x105922f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922f4))), 0x1056ca01u);
  /* 1056ca01 cmp dword ptr [0x1058f894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ca08 je 0x1056ca28 */
  if (C.zf) goto L_1056ca28;
  /* 1056ca0a push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 1056ca0f call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x1056ca15u);
  /* 1056ca15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1056ca17 call 0x10567500 */
  push32(0x1056ca1cu); f_10567500();
  /* 1056ca1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ca1f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1056ca26 jmp 0x1056ca2f */
  goto L_1056ca2f;
L_1056ca28:;
  /* 1056ca28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1056ca2f:;
  /* 1056ca2f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1056ca33 push eax */
  push32((uint32_t)(EAX));
  /* 1056ca34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ca37 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ca38 call 0x1056ca70 */
  push32(0x1056ca3du); f_1056ca70();
  /* 1056ca3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ca40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056ca43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ca47 je 0x1056ca55 */
  if (C.zf) goto L_1056ca55;
  /* 1056ca49 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1056ca4b call 0x105675a0 */
  push32(0x1056ca50u); f_105675a0();
  /* 1056ca50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ca53 jmp 0x1056ca60 */
  goto L_1056ca60;
L_1056ca55:;
  /* 1056ca55 push 0x1058f8a4 */
  push32((uint32_t)(0x1058f8a4u));
  /* 1056ca5a call dword ptr [0x105922e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922e4))), 0x1056ca60u);
L_1056ca60:;
  /* 1056ca60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056ca63 mov esp, ebp */
  ESP = (EBP);
  /* 1056ca65 pop ebp */
  EBP = (pop32());
  /* 1056ca66 ret  */
  ESPCHK(0x1056c9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca70 @ 0x1056ca70 (160 bytes, 50 insns) */
void f_1056ca70(void) {
  FTRACE(0x1056ca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ca70 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ca71 mov ebp, esp */
  EBP = (ESP);
  /* 1056ca73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ca76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ca7a jne 0x1056ca83 */
  if (!C.zf) goto L_1056ca83;
  /* 1056ca7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056ca7e jmp 0x1056cb0c */
  goto L_1056cb0c;
L_1056ca83:;
  /* 1056ca83 cmp dword ptr [0x1058f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ca8a jne 0x1056caba */
  if (!C.zf) goto L_1056caba;
  /* 1056ca8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056ca8f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056ca94 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ca99 jle 0x1056caab */
  if ((C.zf||C.sf!=C.of)) goto L_1056caab;
  /* 1056ca9b call 0x1056b9d0 */
  push32(0x1056caa0u); f_1056b9d0();
  /* 1056caa0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1056caa6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056caa9 jmp 0x1056cb0c */
  goto L_1056cb0c;
L_1056caab:;
  /* 1056caab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056caae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1056cab1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1056cab3 mov eax, 1 */
  EAX = (0x1u);
  /* 1056cab8 jmp 0x1056cb0c */
  goto L_1056cb0c;
L_1056caba:;
  /* 1056caba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1056cac1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1056cac4 push eax */
  push32((uint32_t)(EAX));
  /* 1056cac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056cac7 mov ecx, dword ptr [0x1058dea4] */
  ECX = (r32((uint32_t)(0x1058dea4)));
  /* 1056cacd push ecx */
  push32((uint32_t)(ECX));
  /* 1056cace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cad1 push edx */
  push32((uint32_t)(EDX));
  /* 1056cad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056cad4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1056cad7 push eax */
  push32((uint32_t)(EAX));
  /* 1056cad8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1056cadd mov ecx, dword ptr [0x1058f728] */
  ECX = (r32((uint32_t)(0x1058f728)));
  /* 1056cae3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056cae4 call dword ptr [0x1059234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059234c))), 0x1056caeau);
  /* 1056caea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056caed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056caf1 je 0x1056caf9 */
  if (C.zf) goto L_1056caf9;
  /* 1056caf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056caf7 je 0x1056cb09 */
  if (C.zf) goto L_1056cb09;
L_1056caf9:;
  /* 1056caf9 call 0x1056b9d0 */
  push32(0x1056cafeu); f_1056b9d0();
  /* 1056cafe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1056cb04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056cb07 jmp 0x1056cb0c */
  goto L_1056cb0c;
L_1056cb09:;
  /* 1056cb09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1056cb0c:;
  /* 1056cb0c mov esp, ebp */
  ESP = (EBP);
  /* 1056cb0e pop ebp */
  EBP = (pop32());
  /* 1056cb0f ret  */
  ESPCHK(0x1056ca70u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1056cb10 (32 bytes, 18 insns) */
void f_1056cb10(void) {
  FTRACE(0x1056cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1056cb11 mov ebp, esp */
  EBP = (ESP);
  /* 1056cb13 push ebx */
  push32((uint32_t)(EBX));
  /* 1056cb14 push esi */
  push32((uint32_t)(ESI));
  /* 1056cb15 push edi */
  push32((uint32_t)(EDI));
  /* 1056cb16 push ebp */
  push32((uint32_t)(EBP));
  /* 1056cb17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056cb19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056cb1b push 0x1056cb28 */
  push32((uint32_t)(0x1056cb28u));
  /* 1056cb20 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1056cb23 call 0x1057425c */
  push32(0x1056cb28u); f_1057425c();
  /* 1056cb28 pop ebp */
  EBP = (pop32());
  /* 1056cb29 pop edi */
  EDI = (pop32());
  /* 1056cb2a pop esi */
  ESI = (pop32());
  /* 1056cb2b pop ebx */
  EBX = (pop32());
  /* 1056cb2c mov esp, ebp */
  ESP = (EBP);
  /* 1056cb2e pop ebp */
  EBP = (pop32());
  /* 1056cb2f ret  */
  ESPCHK(0x1056cb10u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1056cb52 (104 bytes, 33 insns) */
void f_1056cb52(void) {
  FTRACE(0x1056cb52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056cb52 push ebx */
  push32((uint32_t)(EBX));
  /* 1056cb53 push esi */
  push32((uint32_t)(ESI));
  /* 1056cb54 push edi */
  push32((uint32_t)(EDI));
  /* 1056cb55 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1056cb59 push eax */
  push32((uint32_t)(EAX));
  /* 1056cb5a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1056cb5c push 0x1056cb30 */
  push32((uint32_t)(0x1056cb30u));
  /* 1056cb61 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1056cb68 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1056cb6f:;
  /* 1056cb6f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1056cb73 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056cb76 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1056cb79 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cb7c je 0x1056cbac */
  if (C.zf) goto L_1056cbac;
  /* 1056cb7e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cb82 je 0x1056cbac */
  if (C.zf) goto L_1056cbac;
  /* 1056cb84 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1056cb87 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1056cb8a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1056cb8e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1056cb91 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cb96 jne 0x1056cbaa */
  if (!C.zf) goto L_1056cbaa;
  /* 1056cb98 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1056cb9d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1056cba1 call 0x1056cbe6 */
  push32(0x1056cba6u); f_1056cbe6();
  /* 1056cba6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1056cbaau);
L_1056cbaa:;
  /* 1056cbaa jmp 0x1056cb6f */
  goto L_1056cb6f;
L_1056cbac:;
  /* 1056cbac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1056cbb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cbb6 pop edi */
  EDI = (pop32());
  /* 1056cbb7 pop esi */
  ESI = (pop32());
  /* 1056cbb8 pop ebx */
  EBX = (pop32());
  /* 1056cbb9 ret  */
  ESPCHK(0x1056cb52u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe6 @ 0x1056cbe6 (24 bytes, 10 insns) */
void f_1056cbe6(void) {
  FTRACE(0x1056cbe6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056cbe6 push ebx */
  push32((uint32_t)(EBX));
  /* 1056cbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 1056cbe8 mov ebx, 0x1058e3b8 */
  EBX = (0x1058e3b8u);
  /* 1056cbed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cbf0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1056cbf3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1056cbf6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1056cbf9 pop ecx */
  ECX = (pop32());
  /* 1056cbfa pop ebx */
  EBX = (pop32());
  /* 1056cbfb ret 4 */
  ESPCHK(0x1056cbe6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ccc5 @ 0x1056ccc5 (27 bytes, 11 insns) */
void f_1056ccc5(void) {
  FTRACE(0x1056ccc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ccc5 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ccc6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1056ccca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1056cccc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1056cccf push eax */
  push32((uint32_t)(EAX));
  /* 1056ccd0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1056ccd3 push eax */
  push32((uint32_t)(EAX));
  /* 1056ccd4 call 0x1056cb52 */
  push32(0x1056ccd9u); f_1056cb52();
  /* 1056ccd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ccdc pop ebp */
  EBP = (pop32());
  /* 1056ccdd ret 4 */
  ESPCHK(0x1056ccc5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cce0 @ 0x1056cce0 (482 bytes, 138 insns) */
void f_1056cce0(void) {
  FTRACE(0x1056cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056cce1 mov ebp, esp */
  EBP = (ESP);
  /* 1056cce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056cce6 push esi */
  push32((uint32_t)(ESI));
  /* 1056cce7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1056ccee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1056ccf0 call 0x10567500 */
  push32(0x1056ccf5u); f_10567500();
  /* 1056ccf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ccf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1056ccff jmp 0x1056cd0a */
  goto L_1056cd0a;
L_1056cd01:;
  /* 1056cd01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056cd04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cd07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056cd0a:;
  /* 1056cd0a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cd0e jge 0x1056ceb0 */
  if ((C.sf==C.of)) goto L_1056ceb0;
  /* 1056cd14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056cd17 cmp dword ptr [ecx*4 + 0x10590f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10590f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cd1f je 0x1056ce16 */
  if (C.zf) goto L_1056ce16;
  /* 1056cd25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056cd28 mov eax, dword ptr [edx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056cd2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056cd32 jmp 0x1056cd3d */
  goto L_1056cd3d;
L_1056cd34:;
  /* 1056cd34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd37 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cd3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1056cd3d:;
  /* 1056cd3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056cd40 mov eax, dword ptr [edx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056cd47 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cd4c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cd4f jae 0x1056ce06 */
  if (!C.cf) goto L_1056ce06;
  /* 1056cd55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1056cd5c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1056cd5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056cd61 jne 0x1056ce01 */
  if (!C.zf) goto L_1056ce01;
  /* 1056cd67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd6a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cd6e jne 0x1056cda9 */
  if (!C.zf) goto L_1056cda9;
  /* 1056cd70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1056cd72 call 0x10567500 */
  push32(0x1056cd77u); f_10567500();
  /* 1056cd77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cd7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd7d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cd81 jne 0x1056cd9f */
  if (!C.zf) goto L_1056cd9f;
  /* 1056cd83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd86 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cd89 push edx */
  push32((uint32_t)(EDX));
  /* 1056cd8a call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x1056cd90u);
  /* 1056cd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056cd96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cd99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cd9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1056cd9f:;
  /* 1056cd9f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1056cda1 call 0x105675a0 */
  push32(0x1056cda6u); f_105675a0();
  /* 1056cda6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056cda9:;
  /* 1056cda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cdac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cdaf push eax */
  push32((uint32_t)(EAX));
  /* 1056cdb0 call dword ptr [0x10592370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592370))), 0x1056cdb6u);
  /* 1056cdb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cdb9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1056cdbd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1056cdc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056cdc2 je 0x1056cdd6 */
  if (C.zf) goto L_1056cdd6;
  /* 1056cdc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cdc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cdca push eax */
  push32((uint32_t)(EAX));
  /* 1056cdcb call dword ptr [0x1059235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059235c))), 0x1056cdd1u);
  /* 1056cdd1 jmp 0x1056cd34 */
  goto L_1056cd34;
L_1056cdd6:;
  /* 1056cdd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cdd9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1056cddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056cde2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056cde5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056cde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056cdeb sub eax, dword ptr [edx*4 + 0x10590f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10590f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056cdf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056cdf3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1056cdf8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1056cdfa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056cdfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056cdff jmp 0x1056ce06 */
  goto L_1056ce06;
L_1056ce01:;
  /* 1056ce01 jmp 0x1056cd34 */
  goto L_1056cd34;
L_1056ce06:;
  /* 1056ce06 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ce0a je 0x1056ce11 */
  if (C.zf) goto L_1056ce11;
  /* 1056ce0c jmp 0x1056ceb0 */
  goto L_1056ceb0;
L_1056ce11:;
  /* 1056ce11 jmp 0x1056ceab */
  goto L_1056ceab;
L_1056ce16:;
  /* 1056ce16 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1056ce18 push 0x1058b144 */
  push32((uint32_t)(0x1058b144u));
  /* 1056ce1d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ce1f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1056ce24 call 0x10563b00 */
  push32(0x1056ce29u); f_10563b00();
  /* 1056ce29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ce2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056ce2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ce33 je 0x1056cea9 */
  if (C.zf) goto L_1056cea9;
  /* 1056ce35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056ce38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ce3b mov dword ptr [eax*4 + 0x10590f00], ecx */
  w32((uint32_t)(EAX*4 + 0x10590f00), (ECX));
  /* 1056ce42 mov edx, dword ptr [0x1059103c] */
  EDX = (r32((uint32_t)(0x1059103c)));
  /* 1056ce48 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ce4b mov dword ptr [0x1059103c], edx */
  w32((uint32_t)(0x1059103c), (EDX));
  /* 1056ce51 jmp 0x1056ce5c */
  goto L_1056ce5c;
L_1056ce53:;
  /* 1056ce53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ce56 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ce59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056ce5c:;
  /* 1056ce5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056ce5f mov edx, dword ptr [ecx*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056ce66 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ce6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ce6f jae 0x1056ce94 */
  if (!C.cf) goto L_1056ce94;
  /* 1056ce71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ce74 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1056ce78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ce7b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1056ce81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ce84 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1056ce88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ce8b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1056ce92 jmp 0x1056ce53 */
  goto L_1056ce53;
L_1056ce94:;
  /* 1056ce94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056ce97 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056ce9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056ce9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056cea0 push edx */
  push32((uint32_t)(EDX));
  /* 1056cea1 call 0x1056d1f0 */
  push32(0x1056cea6u); f_1056d1f0();
  /* 1056cea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056cea9:;
  /* 1056cea9 jmp 0x1056ceb0 */
  goto L_1056ceb0;
L_1056ceab:;
  /* 1056ceab jmp 0x1056cd01 */
  goto L_1056cd01;
L_1056ceb0:;
  /* 1056ceb0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1056ceb2 call 0x105675a0 */
  push32(0x1056ceb7u); f_105675a0();
  /* 1056ceb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ceba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056cebd pop esi */
  ESI = (pop32());
  /* 1056cebe mov esp, ebp */
  ESP = (EBP);
  /* 1056cec0 pop ebp */
  EBP = (pop32());
  /* 1056cec1 ret  */
  ESPCHK(0x1056cce0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1056ced0 (183 bytes, 57 insns) */
void f_1056ced0(void) {
  FTRACE(0x1056ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ced1 mov ebp, esp */
  EBP = (ESP);
  /* 1056ced3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ced4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ced7 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cedd jae 0x1056cf6a */
  if (!C.cf) goto L_1056cf6a;
  /* 1056cee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cee6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056cee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ceec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056ceef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056cef2 mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056cef9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cefd jne 0x1056cf6a */
  if (!C.zf) goto L_1056cf6a;
  /* 1056ceff cmp dword ptr [0x1058f50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cf06 jne 0x1056cf4a */
  if (!C.zf) goto L_1056cf4a;
  /* 1056cf08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cf0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056cf0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cf12 je 0x1056cf22 */
  if (C.zf) goto L_1056cf22;
  /* 1056cf14 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cf18 je 0x1056cf30 */
  if (C.zf) goto L_1056cf30;
  /* 1056cf1a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cf1e je 0x1056cf3e */
  if (C.zf) goto L_1056cf3e;
  /* 1056cf20 jmp 0x1056cf4a */
  goto L_1056cf4a;
L_1056cf22:;
  /* 1056cf22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056cf25 push edx */
  push32((uint32_t)(EDX));
  /* 1056cf26 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1056cf28 call dword ptr [0x105922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a8))), 0x1056cf2eu);
  /* 1056cf2e jmp 0x1056cf4a */
  goto L_1056cf4a;
L_1056cf30:;
  /* 1056cf30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056cf33 push eax */
  push32((uint32_t)(EAX));
  /* 1056cf34 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1056cf36 call dword ptr [0x105922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a8))), 0x1056cf3cu);
  /* 1056cf3c jmp 0x1056cf4a */
  goto L_1056cf4a;
L_1056cf3e:;
  /* 1056cf3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056cf41 push ecx */
  push32((uint32_t)(ECX));
  /* 1056cf42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1056cf44 call dword ptr [0x105922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a8))), 0x1056cf4au);
L_1056cf4a:;
  /* 1056cf4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cf4d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1056cf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cf53 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1056cf56 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056cf59 mov ecx, dword ptr [edx*4 + 0x10590f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056cf60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056cf63 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1056cf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056cf68 jmp 0x1056cf83 */
  goto L_1056cf83;
L_1056cf6a:;
  /* 1056cf6a call 0x1056b9d0 */
  push32(0x1056cf6fu); f_1056b9d0();
  /* 1056cf6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056cf75 call 0x1056b9e0 */
  push32(0x1056cf7au); f_1056b9e0();
  /* 1056cf7a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056cf80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1056cf83:;
  /* 1056cf83 mov esp, ebp */
  ESP = (EBP);
  /* 1056cf85 pop ebp */
  EBP = (pop32());
  /* 1056cf86 ret  */
  ESPCHK(0x1056ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf90 @ 0x1056cf90 (216 bytes, 63 insns) */
void f_1056cf90(void) {
  FTRACE(0x1056cf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056cf90 push ebp */
  push32((uint32_t)(EBP));
  /* 1056cf91 mov ebp, esp */
  EBP = (ESP);
  /* 1056cf93 push ecx */
  push32((uint32_t)(ECX));
  /* 1056cf94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cf97 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cf9d jae 0x1056d04b */
  if (!C.cf) goto L_1056d04b;
  /* 1056cfa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cfa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056cfa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cfac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056cfaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056cfb2 mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056cfb9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056cfbe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1056cfc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056cfc3 je 0x1056d04b */
  if (C.zf) goto L_1056d04b;
  /* 1056cfc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cfcc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1056cfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cfd2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1056cfd5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056cfd8 mov ecx, dword ptr [edx*4 + 0x10590f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056cfdf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cfe3 je 0x1056d04b */
  if (C.zf) goto L_1056d04b;
  /* 1056cfe5 cmp dword ptr [0x1058f50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058f50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cfec jne 0x1056d02a */
  if (!C.zf) goto L_1056d02a;
  /* 1056cfee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056cff1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056cff4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cff8 je 0x1056d008 */
  if (C.zf) goto L_1056d008;
  /* 1056cffa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056cffe je 0x1056d014 */
  if (C.zf) goto L_1056d014;
  /* 1056d000 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d004 je 0x1056d020 */
  if (C.zf) goto L_1056d020;
  /* 1056d006 jmp 0x1056d02a */
  goto L_1056d02a;
L_1056d008:;
  /* 1056d008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056d00a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1056d00c call dword ptr [0x105922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a8))), 0x1056d012u);
  /* 1056d012 jmp 0x1056d02a */
  goto L_1056d02a;
L_1056d014:;
  /* 1056d014 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056d016 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1056d018 call dword ptr [0x105922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a8))), 0x1056d01eu);
  /* 1056d01e jmp 0x1056d02a */
  goto L_1056d02a;
L_1056d020:;
  /* 1056d020 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056d022 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1056d024 call dword ptr [0x105922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a8))), 0x1056d02au);
L_1056d02a:;
  /* 1056d02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d02d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056d030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d033 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056d036 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d039 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056d040 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1056d047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056d049 jmp 0x1056d064 */
  goto L_1056d064;
L_1056d04b:;
  /* 1056d04b call 0x1056b9d0 */
  push32(0x1056d050u); f_1056b9d0();
  /* 1056d050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056d056 call 0x1056b9e0 */
  push32(0x1056d05bu); f_1056b9e0();
  /* 1056d05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056d061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1056d064:;
  /* 1056d064 mov esp, ebp */
  ESP = (EBP);
  /* 1056d066 pop ebp */
  EBP = (pop32());
  /* 1056d067 ret  */
  ESPCHK(0x1056cf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x1056d070 (102 bytes, 30 insns) */
void f_1056d070(void) {
  FTRACE(0x1056d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d071 mov ebp, esp */
  EBP = (ESP);
  /* 1056d073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d076 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d07c jae 0x1056d0bb */
  if (!C.cf) goto L_1056d0bb;
  /* 1056d07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d081 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056d084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d087 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056d08a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d08d mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056d094 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056d099 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1056d09c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056d09e je 0x1056d0bb */
  if (C.zf) goto L_1056d0bb;
  /* 1056d0a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d0a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1056d0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1056d0ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d0af mov ecx, dword ptr [edx*4 + 0x10590f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10590f00)));
  /* 1056d0b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1056d0b9 jmp 0x1056d0d4 */
  goto L_1056d0d4;
L_1056d0bb:;
  /* 1056d0bb call 0x1056b9d0 */
  push32(0x1056d0c0u); f_1056b9d0();
  /* 1056d0c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056d0c6 call 0x1056b9e0 */
  push32(0x1056d0cbu); f_1056b9e0();
  /* 1056d0cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056d0d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1056d0d4:;
  /* 1056d0d4 pop ebp */
  EBP = (pop32());
  /* 1056d0d5 ret  */
  ESPCHK(0x1056d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0e0 @ 0x1056d0e0 (260 bytes, 83 insns) */
void f_1056d0e0(void) {
  FTRACE(0x1056d0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056d0e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d0e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1056d0ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d0ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1056d0f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d0f2 je 0x1056d0fd */
  if (C.zf) goto L_1056d0fd;
  /* 1056d0f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d0f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1056d0fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1056d0fd:;
  /* 1056d0fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d100 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1056d106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056d108 je 0x1056d112 */
  if (C.zf) goto L_1056d112;
  /* 1056d10a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d10d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1056d10f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1056d112:;
  /* 1056d112 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d115 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1056d11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056d11d je 0x1056d128 */
  if (C.zf) goto L_1056d128;
  /* 1056d11f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d122 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1056d125 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1056d128:;
  /* 1056d128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d12b push eax */
  push32((uint32_t)(EAX));
  /* 1056d12c call dword ptr [0x10592268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592268))), 0x1056d132u);
  /* 1056d132 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056d135 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d139 jne 0x1056d152 */
  if (!C.zf) goto L_1056d152;
  /* 1056d13b call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x1056d141u);
  /* 1056d141 push eax */
  push32((uint32_t)(EAX));
  /* 1056d142 call 0x1056b930 */
  push32(0x1056d147u); f_1056b930();
  /* 1056d147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d14a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056d14d jmp 0x1056d1e0 */
  goto L_1056d1e0;
L_1056d152:;
  /* 1056d152 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d156 jne 0x1056d163 */
  if (!C.zf) goto L_1056d163;
  /* 1056d158 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d15b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1056d15e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1056d161 jmp 0x1056d172 */
  goto L_1056d172;
L_1056d163:;
  /* 1056d163 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d167 jne 0x1056d172 */
  if (!C.zf) goto L_1056d172;
  /* 1056d169 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d16c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1056d16f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1056d172:;
  /* 1056d172 call 0x1056cce0 */
  push32(0x1056d177u); f_1056cce0();
  /* 1056d177 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056d17a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d17e jne 0x1056d19b */
  if (!C.zf) goto L_1056d19b;
  /* 1056d180 call 0x1056b9d0 */
  push32(0x1056d185u); f_1056b9d0();
  /* 1056d185 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1056d18b call 0x1056b9e0 */
  push32(0x1056d190u); f_1056b9e0();
  /* 1056d190 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1056d196 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056d199 jmp 0x1056d1e0 */
  goto L_1056d1e0;
L_1056d19b:;
  /* 1056d19b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d19e push eax */
  push32((uint32_t)(EAX));
  /* 1056d19f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d1a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d1a3 call 0x1056ced0 */
  push32(0x1056d1a8u); f_1056ced0();
  /* 1056d1a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d1ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d1ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1056d1b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1056d1b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d1b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056d1ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d1bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056d1c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d1c3 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056d1ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1056d1cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1056d1d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d1d5 call 0x1056d280 */
  push32(0x1056d1dau); f_1056d280();
  /* 1056d1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d1dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1056d1e0:;
  /* 1056d1e0 mov esp, ebp */
  ESP = (EBP);
  /* 1056d1e2 pop ebp */
  EBP = (pop32());
  /* 1056d1e3 ret  */
  ESPCHK(0x1056d0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x1056d1f0 (134 bytes, 44 insns) */
void f_1056d1f0(void) {
  FTRACE(0x1056d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056d1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d1f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056d1fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d1fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056d200 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d203 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056d20a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d20c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1056d20f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d212 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d216 jne 0x1056d251 */
  if (!C.zf) goto L_1056d251;
  /* 1056d218 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1056d21a call 0x10567500 */
  push32(0x1056d21fu); f_10567500();
  /* 1056d21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d225 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d229 jne 0x1056d247 */
  if (!C.zf) goto L_1056d247;
  /* 1056d22b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d22e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d231 push edx */
  push32((uint32_t)(EDX));
  /* 1056d232 call dword ptr [0x1059236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059236c))), 0x1056d238u);
  /* 1056d238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d23b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056d23e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d244 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1056d247:;
  /* 1056d247 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1056d249 call 0x105675a0 */
  push32(0x1056d24eu); f_105675a0();
  /* 1056d24e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056d251:;
  /* 1056d251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d254 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056d257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d25a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056d25d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d260 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056d267 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1056d26b push eax */
  push32((uint32_t)(EAX));
  /* 1056d26c call dword ptr [0x10592370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592370))), 0x1056d272u);
  /* 1056d272 mov esp, ebp */
  ESP = (EBP);
  /* 1056d274 pop ebp */
  EBP = (pop32());
  /* 1056d275 ret  */
  ESPCHK(0x1056d1f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1056d280 (38 bytes, 13 insns) */
void f_1056d280(void) {
  FTRACE(0x1056d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d280 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d281 mov ebp, esp */
  EBP = (ESP);
  /* 1056d283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d286 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056d289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d28c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056d28f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d292 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056d299 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1056d29d push eax */
  push32((uint32_t)(EAX));
  /* 1056d29e call dword ptr [0x1059235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059235c))), 0x1056d2a4u);
  /* 1056d2a4 pop ebp */
  EBP = (pop32());
  /* 1056d2a5 ret  */
  ESPCHK(0x1056d280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x1056d2b0 (218 bytes, 63 insns) */
void f_1056d2b0(void) {
  FTRACE(0x1056d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1056d2b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d2b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056d2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d2bf call 0x10567500 */
  push32(0x1056d2c4u); f_10567500();
  /* 1056d2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d2c7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1056d2ce jmp 0x1056d2d9 */
  goto L_1056d2d9;
L_1056d2d0:;
  /* 1056d2d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d2d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d2d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1056d2d9:;
  /* 1056d2d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d2dc cmp ecx, dword ptr [0x10590c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d2e2 jge 0x1056d379 */
  if ((C.sf==C.of)) goto L_1056d379;
  /* 1056d2e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d2eb mov eax, dword ptr [0x1058f8a8] */
  EAX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d2f0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d2f4 je 0x1056d374 */
  if (C.zf) goto L_1056d374;
  /* 1056d2f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d2f9 mov edx, dword ptr [0x1058f8a8] */
  EDX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d2ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1056d302 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056d305 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1056d30b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056d30d je 0x1056d331 */
  if (C.zf) goto L_1056d331;
  /* 1056d30f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d312 mov eax, dword ptr [0x1058f8a8] */
  EAX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d317 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1056d31a push ecx */
  push32((uint32_t)(ECX));
  /* 1056d31b call 0x1056e0a0 */
  push32(0x1056d320u); f_1056e0a0();
  /* 1056d320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d323 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d326 je 0x1056d331 */
  if (C.zf) goto L_1056d331;
  /* 1056d328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d32b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d32e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1056d331:;
  /* 1056d331 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d335 jl 0x1056d374 */
  if ((C.sf!=C.of)) goto L_1056d374;
  /* 1056d337 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d33a mov ecx, dword ptr [0x1058f8a8] */
  ECX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d340 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1056d343 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d346 push edx */
  push32((uint32_t)(EDX));
  /* 1056d347 call dword ptr [0x10592334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592334))), 0x1056d34du);
  /* 1056d34d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d34f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d352 mov ecx, dword ptr [0x1058f8a8] */
  ECX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d358 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1056d35b push edx */
  push32((uint32_t)(EDX));
  /* 1056d35c call 0x10564590 */
  push32(0x1056d361u); f_10564590();
  /* 1056d361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d364 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d367 mov ecx, dword ptr [0x1058f8a8] */
  ECX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d36d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1056d374:;
  /* 1056d374 jmp 0x1056d2d0 */
  goto L_1056d2d0;
L_1056d379:;
  /* 1056d379 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d37b call 0x105675a0 */
  push32(0x1056d380u); f_105675a0();
  /* 1056d380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d386 mov esp, ebp */
  ESP = (EBP);
  /* 1056d388 pop ebp */
  EBP = (pop32());
  /* 1056d389 ret  */
  ESPCHK(0x1056d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1056d390 (68 bytes, 26 insns) */
void f_1056d390(void) {
  FTRACE(0x1056d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d391 mov ebp, esp */
  EBP = (ESP);
  /* 1056d393 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d394 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d398 jne 0x1056d3a6 */
  if (!C.zf) goto L_1056d3a6;
  /* 1056d39a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056d39c call 0x1056d500 */
  push32(0x1056d3a1u); f_1056d500();
  /* 1056d3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d3a4 jmp 0x1056d3d0 */
  goto L_1056d3d0;
L_1056d3a6:;
  /* 1056d3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d3a9 push eax */
  push32((uint32_t)(EAX));
  /* 1056d3aa call 0x1056c910 */
  push32(0x1056d3afu); f_1056c910();
  /* 1056d3af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d3b6 call 0x1056d3e0 */
  push32(0x1056d3bbu); f_1056d3e0();
  /* 1056d3bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d3be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056d3c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d3c4 push edx */
  push32((uint32_t)(EDX));
  /* 1056d3c5 call 0x1056c980 */
  push32(0x1056d3cau); f_1056c980();
  /* 1056d3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d3cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1056d3d0:;
  /* 1056d3d0 mov esp, ebp */
  ESP = (EBP);
  /* 1056d3d2 pop ebp */
  EBP = (pop32());
  /* 1056d3d3 ret  */
  ESPCHK(0x1056d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x1056d3e0 (65 bytes, 26 insns) */
void f_1056d3e0(void) {
  FTRACE(0x1056d3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056d3e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d3e6 push eax */
  push32((uint32_t)(EAX));
  /* 1056d3e7 call 0x1056d430 */
  push32(0x1056d3ecu); f_1056d430();
  /* 1056d3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d3f1 je 0x1056d3f8 */
  if (C.zf) goto L_1056d3f8;
  /* 1056d3f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056d3f6 jmp 0x1056d41f */
  goto L_1056d41f;
L_1056d3f8:;
  /* 1056d3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056d3fe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1056d404 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056d406 je 0x1056d41d */
  if (C.zf) goto L_1056d41d;
  /* 1056d408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d40b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056d40e push ecx */
  push32((uint32_t)(ECX));
  /* 1056d40f call 0x1056e1f0 */
  push32(0x1056d414u); f_1056e1f0();
  /* 1056d414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d417 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056d419 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d41b jmp 0x1056d41f */
  goto L_1056d41f;
L_1056d41d:;
  /* 1056d41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056d41f:;
  /* 1056d41f pop ebp */
  EBP = (pop32());
  /* 1056d420 ret  */
  ESPCHK(0x1056d3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1056d430 (183 bytes, 62 insns) */
void f_1056d430(void) {
  FTRACE(0x1056d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d431 mov ebp, esp */
  EBP = (ESP);
  /* 1056d433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056d43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d440 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056d443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d446 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056d449 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1056d44c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d44f jne 0x1056d4cb */
  if (!C.zf) goto L_1056d4cb;
  /* 1056d451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d454 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056d457 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1056d45d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056d45f je 0x1056d4cb */
  if (C.zf) goto L_1056d4cb;
  /* 1056d461 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d467 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1056d469 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d46c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056d46f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d473 jle 0x1056d4cb */
  if ((C.zf||C.sf!=C.of)) goto L_1056d4cb;
  /* 1056d475 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d478 push edx */
  push32((uint32_t)(EDX));
  /* 1056d479 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d47c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056d47f push ecx */
  push32((uint32_t)(ECX));
  /* 1056d480 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d483 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1056d486 push eax */
  push32((uint32_t)(EAX));
  /* 1056d487 call 0x1056c3a0 */
  push32(0x1056d48cu); f_1056c3a0();
  /* 1056d48c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d48f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d492 jne 0x1056d4b5 */
  if (!C.zf) goto L_1056d4b5;
  /* 1056d494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d497 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056d49a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1056d4a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056d4a2 je 0x1056d4b3 */
  if (C.zf) goto L_1056d4b3;
  /* 1056d4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4a7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056d4aa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1056d4ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4b0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1056d4b3:;
  /* 1056d4b3 jmp 0x1056d4cb */
  goto L_1056d4cb;
L_1056d4b5:;
  /* 1056d4b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056d4bb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1056d4be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4c1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1056d4c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1056d4cb:;
  /* 1056d4cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4d1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1056d4d4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1056d4d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056d4d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1056d4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d4e3 mov esp, ebp */
  ESP = (EBP);
  /* 1056d4e5 pop ebp */
  EBP = (pop32());
  /* 1056d4e6 ret  */
  ESPCHK(0x1056d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4f0 @ 0x1056d4f0 (15 bytes, 7 insns) */
void f_1056d4f0(void) {
  FTRACE(0x1056d4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056d4f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056d4f5 call 0x1056d500 */
  push32(0x1056d4fau); f_1056d500();
  /* 1056d4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d4fd pop ebp */
  EBP = (pop32());
  /* 1056d4fe ret  */
  ESPCHK(0x1056d4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d500 @ 0x1056d500 (319 bytes, 94 insns) */
void f_1056d500(void) {
  FTRACE(0x1056d500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d500 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d501 mov ebp, esp */
  EBP = (ESP);
  /* 1056d503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d506 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056d50d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1056d514 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d516 call 0x10567500 */
  push32(0x1056d51bu); f_10567500();
  /* 1056d51b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d51e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1056d525 jmp 0x1056d530 */
  goto L_1056d530;
L_1056d527:;
  /* 1056d527 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d52a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d52d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056d530:;
  /* 1056d530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d533 cmp ecx, dword ptr [0x10590c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10590c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d539 jge 0x1056d623 */
  if ((C.sf==C.of)) goto L_1056d623;
  /* 1056d53f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d542 mov eax, dword ptr [0x1058f8a8] */
  EAX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d547 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d54b je 0x1056d61e */
  if (C.zf) goto L_1056d61e;
  /* 1056d551 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d554 mov edx, dword ptr [0x1058f8a8] */
  EDX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d55a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1056d55d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1056d560 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1056d566 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056d568 je 0x1056d61e */
  if (C.zf) goto L_1056d61e;
  /* 1056d56e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d571 mov eax, dword ptr [0x1058f8a8] */
  EAX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d576 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1056d579 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d57a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d57d push edx */
  push32((uint32_t)(EDX));
  /* 1056d57e call 0x1056c950 */
  push32(0x1056d583u); f_1056c950();
  /* 1056d583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d586 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d589 mov ecx, dword ptr [0x1058f8a8] */
  ECX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d58f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1056d592 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056d595 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1056d59a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d59c je 0x1056d605 */
  if (C.zf) goto L_1056d605;
  /* 1056d59e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d5a2 jne 0x1056d5c9 */
  if (!C.zf) goto L_1056d5c9;
  /* 1056d5a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d5a7 mov edx, dword ptr [0x1058f8a8] */
  EDX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d5ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1056d5b0 push eax */
  push32((uint32_t)(EAX));
  /* 1056d5b1 call 0x1056d3e0 */
  push32(0x1056d5b6u); f_1056d3e0();
  /* 1056d5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d5b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d5bc je 0x1056d5c7 */
  if (C.zf) goto L_1056d5c7;
  /* 1056d5be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d5c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d5c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1056d5c7:;
  /* 1056d5c7 jmp 0x1056d605 */
  goto L_1056d605;
L_1056d5c9:;
  /* 1056d5c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d5cd jne 0x1056d605 */
  if (!C.zf) goto L_1056d605;
  /* 1056d5cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d5d2 mov eax, dword ptr [0x1058f8a8] */
  EAX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d5d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1056d5da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056d5dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1056d5e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056d5e2 je 0x1056d605 */
  if (C.zf) goto L_1056d605;
  /* 1056d5e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d5e7 mov ecx, dword ptr [0x1058f8a8] */
  ECX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d5ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1056d5f0 push edx */
  push32((uint32_t)(EDX));
  /* 1056d5f1 call 0x1056d3e0 */
  push32(0x1056d5f6u); f_1056d3e0();
  /* 1056d5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d5f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d5fc jne 0x1056d605 */
  if (!C.zf) goto L_1056d605;
  /* 1056d5fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1056d605:;
  /* 1056d605 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d608 mov ecx, dword ptr [0x1058f8a8] */
  ECX = (r32((uint32_t)(0x1058f8a8)));
  /* 1056d60e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1056d611 push edx */
  push32((uint32_t)(EDX));
  /* 1056d612 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d615 push eax */
  push32((uint32_t)(EAX));
  /* 1056d616 call 0x1056c9c0 */
  push32(0x1056d61bu); f_1056c9c0();
  /* 1056d61b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056d61e:;
  /* 1056d61e jmp 0x1056d527 */
  goto L_1056d527;
L_1056d623:;
  /* 1056d623 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d625 call 0x105675a0 */
  push32(0x1056d62au); f_105675a0();
  /* 1056d62a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d62d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d631 jne 0x1056d638 */
  if (!C.zf) goto L_1056d638;
  /* 1056d633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056d636 jmp 0x1056d63b */
  goto L_1056d63b;
L_1056d638:;
  /* 1056d638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1056d63b:;
  /* 1056d63b mov esp, ebp */
  ESP = (EBP);
  /* 1056d63d pop ebp */
  EBP = (pop32());
  /* 1056d63e ret  */
  ESPCHK(0x1056d500u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1056d640 (15 bytes, 7 insns) */
void f_1056d640(void) {
  FTRACE(0x1056d640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d640 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d641 mov ebp, esp */
  EBP = (ESP);
  /* 1056d643 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d645 call 0x10562a70 */
  push32(0x1056d64au); f_10562a70();
  /* 1056d64a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d64d pop ebp */
  EBP = (pop32());
  /* 1056d64e ret  */
  ESPCHK(0x1056d640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d650 @ 0x1056d650 (1007 bytes, 269 insns) */
void f_1056d650(void) {
  FTRACE(0x1056d650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056d650 push ebp */
  push32((uint32_t)(EBP));
  /* 1056d651 mov ebp, esp */
  EBP = (ESP);
  /* 1056d653 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d65d jl 0x1056d665 */
  if ((C.sf!=C.of)) goto L_1056d665;
  /* 1056d65f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d663 jle 0x1056d66c */
  if ((C.zf||C.sf!=C.of)) goto L_1056d66c;
L_1056d665:;
  /* 1056d665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056d667 jmp 0x1056da3b */
  goto L_1056da3b;
L_1056d66c:;
  /* 1056d66c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1056d66e call 0x10567500 */
  push32(0x1056d673u); f_10567500();
  /* 1056d673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d676 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1056d67d mov eax, dword ptr [0x1058f894] */
  EAX = (r32((uint32_t)(0x1058f894)));
  /* 1056d682 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d685 mov dword ptr [0x1058f894], eax */
  w32((uint32_t)(0x1058f894), (EAX));
L_1056d68a:;
  /* 1056d68a cmp dword ptr [0x1058f8a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f8a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d691 je 0x1056d69d */
  if (C.zf) goto L_1056d69d;
  /* 1056d693 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056d695 call dword ptr [0x105922a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a4))), 0x1056d69bu);
  /* 1056d69b jmp 0x1056d68a */
  goto L_1056d68a;
L_1056d69d:;
  /* 1056d69d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d6a1 je 0x1056d6e1 */
  if (C.zf) goto L_1056d6e1;
  /* 1056d6a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d6a7 je 0x1056d6c1 */
  if (C.zf) goto L_1056d6c1;
  /* 1056d6a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d6ac push ecx */
  push32((uint32_t)(ECX));
  /* 1056d6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1056d6b1 call 0x1056da40 */
  push32(0x1056d6b6u); f_1056da40();
  /* 1056d6b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d6b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1056d6bf jmp 0x1056d6d3 */
  goto L_1056d6d3;
L_1056d6c1:;
  /* 1056d6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d6c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d6c7 mov ecx, dword ptr [eax + 0x1058e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1058e4dc)));
  /* 1056d6cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1056d6d3:;
  /* 1056d6d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1056d6d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1056d6dc jmp 0x1056da1b */
  goto L_1056da1b;
L_1056d6e1:;
  /* 1056d6e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1056d6e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1056d6ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d6f3 je 0x1056da13 */
  if (C.zf) goto L_1056da13;
  /* 1056d6f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d6fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056d6ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d702 jne 0x1056d924 */
  if (!C.zf) goto L_1056d924;
  /* 1056d708 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d70b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1056d70f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d712 jne 0x1056d924 */
  if (!C.zf) goto L_1056d924;
  /* 1056d718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d71b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1056d71f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d722 jne 0x1056d924 */
  if (!C.zf) goto L_1056d924;
  /* 1056d728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d72b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1056d731:;
  /* 1056d731 push 0x1058b194 */
  push32((uint32_t)(0x1058b194u));
  /* 1056d736 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1056d73c push ecx */
  push32((uint32_t)(ECX));
  /* 1056d73d call 0x1056f8a0 */
  push32(0x1056d742u); f_1056f8a0();
  /* 1056d742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d745 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1056d74b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d752 je 0x1056d77d */
  if (C.zf) goto L_1056d77d;
  /* 1056d754 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d75a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d760 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1056d766 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d76d je 0x1056d77d */
  if (C.zf) goto L_1056d77d;
  /* 1056d76f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d775 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056d778 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d77b jne 0x1056d7a3 */
  if (!C.zf) goto L_1056d7a3;
L_1056d77d:;
  /* 1056d77d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d781 je 0x1056d79c */
  if (C.zf) goto L_1056d79c;
  /* 1056d783 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1056d785 call 0x105675a0 */
  push32(0x1056d78au); f_105675a0();
  /* 1056d78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d78d mov edx, dword ptr [0x1058f894] */
  EDX = (r32((uint32_t)(0x1058f894)));
  /* 1056d793 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d796 mov dword ptr [0x1058f894], edx */
  w32((uint32_t)(0x1058f894), (EDX));
L_1056d79c:;
  /* 1056d79c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056d79e jmp 0x1056da3b */
  goto L_1056da3b;
L_1056d7a3:;
  /* 1056d7a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1056d7aa jmp 0x1056d7b5 */
  goto L_1056d7b5;
L_1056d7ac:;
  /* 1056d7ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d7af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d7b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1056d7b5:;
  /* 1056d7b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d7b9 jg 0x1056d803 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056d803;
  /* 1056d7bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1056d7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d7c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1056d7c8 push edx */
  push32((uint32_t)(EDX));
  /* 1056d7c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d7cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d7cf mov ecx, dword ptr [eax + 0x1058e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1058e4d8)));
  /* 1056d7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d7d6 call 0x1056f860 */
  push32(0x1056d7dbu); f_1056f860();
  /* 1056d7db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d7de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d7e0 jne 0x1056d801 */
  if (!C.zf) goto L_1056d801;
  /* 1056d7e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d7e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d7e8 mov eax, dword ptr [edx + 0x1058e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1058e4d8)));
  /* 1056d7ee push eax */
  push32((uint32_t)(EAX));
  /* 1056d7ef call 0x10566930 */
  push32(0x1056d7f4u); f_10566930();
  /* 1056d7f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d7f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d7fd jne 0x1056d801 */
  if (!C.zf) goto L_1056d801;
  /* 1056d7ff jmp 0x1056d803 */
  goto L_1056d803;
L_1056d801:;
  /* 1056d801 jmp 0x1056d7ac */
  goto L_1056d7ac;
L_1056d803:;
  /* 1056d803 push 0x1058b190 */
  push32((uint32_t)(0x1058b190u));
  /* 1056d808 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d80e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d811 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1056d817 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d81d push edx */
  push32((uint32_t)(EDX));
  /* 1056d81e call 0x1056f820 */
  push32(0x1056d823u); f_1056f820();
  /* 1056d823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d826 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1056d82c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d833 jne 0x1056d869 */
  if (!C.zf) goto L_1056d869;
  /* 1056d835 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d83b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056d83e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d841 je 0x1056d869 */
  if (C.zf) goto L_1056d869;
  /* 1056d843 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d847 je 0x1056d862 */
  if (C.zf) goto L_1056d862;
  /* 1056d849 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1056d84b call 0x105675a0 */
  push32(0x1056d850u); f_105675a0();
  /* 1056d850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d853 mov edx, dword ptr [0x1058f894] */
  EDX = (r32((uint32_t)(0x1058f894)));
  /* 1056d859 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056d85c mov dword ptr [0x1058f894], edx */
  w32((uint32_t)(0x1058f894), (EDX));
L_1056d862:;
  /* 1056d862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056d864 jmp 0x1056da3b */
  goto L_1056da3b;
L_1056d869:;
  /* 1056d869 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d86d jg 0x1056d8ba */
  if ((!C.zf&&C.sf==C.of)) goto L_1056d8ba;
  /* 1056d86f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1056d875 push eax */
  push32((uint32_t)(EAX));
  /* 1056d876 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d87c push ecx */
  push32((uint32_t)(ECX));
  /* 1056d87d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1056d883 push edx */
  push32((uint32_t)(EDX));
  /* 1056d884 call 0x10567320 */
  push32(0x1056d889u); f_10567320();
  /* 1056d889 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d88c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1056d892 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1056d89a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1056d8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d8a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d8a4 push edx */
  push32((uint32_t)(EDX));
  /* 1056d8a5 call 0x1056da40 */
  push32(0x1056d8aau); f_1056da40();
  /* 1056d8aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d8af je 0x1056d8ba */
  if (C.zf) goto L_1056d8ba;
  /* 1056d8b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d8b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056d8ba:;
  /* 1056d8ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056d8c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d8c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1056d8cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1056d8d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056d8d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d8d7 je 0x1056d8e8 */
  if (C.zf) goto L_1056d8e8;
  /* 1056d8d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1056d8df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d8e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1056d8e8:;
  /* 1056d8e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1056d8ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056d8f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d8f3 jne 0x1056d731 */
  if (!C.zf) goto L_1056d731;
  /* 1056d8f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d8fd je 0x1056d90c */
  if (C.zf) goto L_1056d90c;
  /* 1056d8ff call 0x1056dbe0 */
  push32(0x1056d904u); f_1056dbe0();
  /* 1056d904 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1056d90a jmp 0x1056d916 */
  goto L_1056d916;
L_1056d90c:;
  /* 1056d90c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1056d916:;
  /* 1056d916 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1056d91c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056d91f jmp 0x1056da11 */
  goto L_1056da11;
L_1056d924:;
  /* 1056d924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056d927 push edx */
  push32((uint32_t)(EDX));
  /* 1056d928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056d92a push 0 */
  push32((uint32_t)(0x0u));
  /* 1056d92c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1056d932 push eax */
  push32((uint32_t)(EAX));
  /* 1056d933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056d936 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d937 call 0x1056dce0 */
  push32(0x1056d93cu); f_1056dce0();
  /* 1056d93c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d93f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056d942 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d946 je 0x1056da11 */
  if (C.zf) goto L_1056da11;
  /* 1056d94c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1056d953 jmp 0x1056d95e */
  goto L_1056d95e;
L_1056d955:;
  /* 1056d955 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d958 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d95b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1056d95e:;
  /* 1056d95e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d962 jg 0x1056d9c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056d9c0;
  /* 1056d964 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d968 je 0x1056d9be */
  if (C.zf) goto L_1056d9be;
  /* 1056d96a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d96d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056d970 mov ecx, dword ptr [eax + 0x1058e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1058e4dc)));
  /* 1056d976 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d977 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1056d97d push edx */
  push32((uint32_t)(EDX));
  /* 1056d97e call 0x1056f790 */
  push32(0x1056d983u); f_1056f790();
  /* 1056d983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d988 je 0x1056d9b5 */
  if (C.zf) goto L_1056d9b5;
  /* 1056d98a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1056d990 push eax */
  push32((uint32_t)(EAX));
  /* 1056d991 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1056d994 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d995 call 0x1056da40 */
  push32(0x1056d99au); f_1056da40();
  /* 1056d99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056d99f je 0x1056d9ac */
  if (C.zf) goto L_1056d9ac;
  /* 1056d9a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d9a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d9a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1056d9aa jmp 0x1056d9b3 */
  goto L_1056d9b3;
L_1056d9ac:;
  /* 1056d9ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1056d9b3:;
  /* 1056d9b3 jmp 0x1056d9be */
  goto L_1056d9be;
L_1056d9b5:;
  /* 1056d9b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056d9b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d9bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1056d9be:;
  /* 1056d9be jmp 0x1056d955 */
  goto L_1056d955;
L_1056d9c0:;
  /* 1056d9c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d9c4 je 0x1056d9eb */
  if (C.zf) goto L_1056d9eb;
  /* 1056d9c6 call 0x1056dbe0 */
  push32(0x1056d9cbu); f_1056dbe0();
  /* 1056d9cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056d9ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1056d9d0 mov ecx, dword ptr [0x1058e4dc] */
  ECX = (r32((uint32_t)(0x1058e4dc)));
  /* 1056d9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1056d9d7 call 0x10564590 */
  push32(0x1056d9dcu); f_10564590();
  /* 1056d9dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056d9df mov dword ptr [0x1058e4dc], 0 */
  w32((uint32_t)(0x1058e4dc), (0x0u));
  /* 1056d9e9 jmp 0x1056da11 */
  goto L_1056da11;
L_1056d9eb:;
  /* 1056d9eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056d9ef je 0x1056d9fe */
  if (C.zf) goto L_1056d9fe;
  /* 1056d9f1 call 0x1056dbe0 */
  push32(0x1056d9f6u); f_1056dbe0();
  /* 1056d9f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1056d9fc jmp 0x1056da08 */
  goto L_1056da08;
L_1056d9fe:;
  /* 1056d9fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1056da08:;
  /* 1056da08 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1056da0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1056da11:;
  /* 1056da11 jmp 0x1056da1b */
  goto L_1056da1b;
L_1056da13:;
  /* 1056da13 call 0x1056dbe0 */
  push32(0x1056da18u); f_1056dbe0();
  /* 1056da18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1056da1b:;
  /* 1056da1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056da1f je 0x1056da38 */
  if (C.zf) goto L_1056da38;
  /* 1056da21 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1056da23 call 0x105675a0 */
  push32(0x1056da28u); f_105675a0();
  /* 1056da28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056da2b mov eax, dword ptr [0x1058f894] */
  EAX = (r32((uint32_t)(0x1058f894)));
  /* 1056da30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056da33 mov dword ptr [0x1058f894], eax */
  w32((uint32_t)(0x1058f894), (EAX));
L_1056da38:;
  /* 1056da38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1056da3b:;
  /* 1056da3b mov esp, ebp */
  ESP = (EBP);
  /* 1056da3d pop ebp */
  EBP = (pop32());
  /* 1056da3e ret  */
  ESPCHK(0x1056d650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1056da40 (403 bytes, 117 insns) */
void f_1056da40(void) {
  FTRACE(0x1056da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1056da41 mov ebp, esp */
  EBP = (ESP);
  /* 1056da43 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056da49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056da4c push eax */
  push32((uint32_t)(EAX));
  /* 1056da4d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1056da53 push ecx */
  push32((uint32_t)(ECX));
  /* 1056da54 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1056da5a push edx */
  push32((uint32_t)(EDX));
  /* 1056da5b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1056da61 push eax */
  push32((uint32_t)(EAX));
  /* 1056da62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056da65 push ecx */
  push32((uint32_t)(ECX));
  /* 1056da66 call 0x1056dce0 */
  push32(0x1056da6bu); f_1056dce0();
  /* 1056da6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056da6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056da70 jne 0x1056da79 */
  if (!C.zf) goto L_1056da79;
  /* 1056da72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056da74 jmp 0x1056dbcf */
  goto L_1056dbcf;
L_1056da79:;
  /* 1056da79 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1056da7e push 0x1058b198 */
  push32((uint32_t)(0x1058b198u));
  /* 1056da83 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056da85 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1056da8b push edx */
  push32((uint32_t)(EDX));
  /* 1056da8c call 0x10566930 */
  push32(0x1056da91u); f_10566930();
  /* 1056da91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056da94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056da97 push eax */
  push32((uint32_t)(EAX));
  /* 1056da98 call 0x10563b00 */
  push32(0x1056da9du); f_10563b00();
  /* 1056da9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056daa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056daa3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056daa7 jne 0x1056dab0 */
  if (!C.zf) goto L_1056dab0;
  /* 1056daa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056daab jmp 0x1056dbcf */
  goto L_1056dbcf;
L_1056dab0:;
  /* 1056dab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dab3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dab6 mov ecx, dword ptr [eax + 0x1058e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1058e4dc)));
  /* 1056dabc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056dabf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dac2 mov eax, dword ptr [edx*4 + 0x1058f710] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1058f710)));
  /* 1056dac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056dacc push 6 */
  push32((uint32_t)(0x6u));
  /* 1056dace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dad1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dad4 add ecx, 0x1058f760 */
  { uint32_t _a=(ECX),_b=(0x1058f760u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dada push ecx */
  push32((uint32_t)(ECX));
  /* 1056dadb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1056dade push edx */
  push32((uint32_t)(EDX));
  /* 1056dadf call 0x1056a3e0 */
  push32(0x1056dae4u); f_1056a3e0();
  /* 1056dae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dae7 mov eax, dword ptr [0x1058f728] */
  EAX = (r32((uint32_t)(0x1058f728)));
  /* 1056daec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1056daef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1056daf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1056daf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056daf9 push edx */
  push32((uint32_t)(EDX));
  /* 1056dafa call 0x10566ab0 */
  push32(0x1056daffu); f_10566ab0();
  /* 1056daff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056db02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056db05 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056db08 mov dword ptr [ecx + 0x1058e4dc], eax */
  w32((uint32_t)(ECX + 0x1058e4dc), (EAX));
  /* 1056db0e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1056db14 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056db1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056db1d mov dword ptr [eax*4 + 0x1058f710], edx */
  w32((uint32_t)(EAX*4 + 0x1058f710), (EDX));
  /* 1056db24 push 6 */
  push32((uint32_t)(0x6u));
  /* 1056db26 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1056db2c push ecx */
  push32((uint32_t)(ECX));
  /* 1056db2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056db30 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056db33 add edx, 0x1058f760 */
  { uint32_t _a=(EDX),_b=(0x1058f760u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056db39 push edx */
  push32((uint32_t)(EDX));
  /* 1056db3a call 0x1056a3e0 */
  push32(0x1056db3fu); f_1056a3e0();
  /* 1056db3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056db42 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056db46 jne 0x1056db53 */
  if (!C.zf) goto L_1056db53;
  /* 1056db48 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056db4e mov dword ptr [0x1058f728], eax */
  w32((uint32_t)(0x1058f728), (EAX));
L_1056db53:;
  /* 1056db53 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056db57 jne 0x1056db65 */
  if (!C.zf) goto L_1056db65;
  /* 1056db59 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1056db5f mov dword ptr [0x1058f72c], ecx */
  w32((uint32_t)(0x1058f72c), (ECX));
L_1056db65:;
  /* 1056db65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056db68 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056db6b call dword ptr [edx + 0x1058e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1058e4e0))), 0x1056db71u);
  /* 1056db71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056db73 je 0x1056dbac */
  if (C.zf) goto L_1056dbac;
  /* 1056db75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056db78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056db7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056db7e mov dword ptr [eax + 0x1058e4dc], ecx */
  w32((uint32_t)(EAX + 0x1058e4dc), (ECX));
  /* 1056db84 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056db86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056db89 push edx */
  push32((uint32_t)(EDX));
  /* 1056db8a call 0x10564590 */
  push32(0x1056db8fu); f_10564590();
  /* 1056db8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056db92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056db95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056db98 mov dword ptr [eax*4 + 0x1058f710], ecx */
  w32((uint32_t)(EAX*4 + 0x1058f710), (ECX));
  /* 1056db9f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056dba2 mov dword ptr [0x1058f728], edx */
  w32((uint32_t)(0x1058f728), (EDX));
  /* 1056dba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056dbaa jmp 0x1056dbcf */
  goto L_1056dbcf;
L_1056dbac:;
  /* 1056dbac cmp dword ptr [ebp - 0xc], 0x1058e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1058e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dbb3 je 0x1056dbc3 */
  if (C.zf) goto L_1056dbc3;
  /* 1056dbb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056dbb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056dbba push eax */
  push32((uint32_t)(EAX));
  /* 1056dbbb call 0x10564590 */
  push32(0x1056dbc0u); f_10564590();
  /* 1056dbc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056dbc3:;
  /* 1056dbc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dbc6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dbc9 mov eax, dword ptr [ecx + 0x1058e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1058e4dc)));
L_1056dbcf:;
  /* 1056dbcf mov esp, ebp */
  ESP = (EBP);
  /* 1056dbd1 pop ebp */
  EBP = (pop32());
  /* 1056dbd2 ret  */
  ESPCHK(0x1056da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbe0 @ 0x1056dbe0 (256 bytes, 72 insns) */
void f_1056dbe0(void) {
  FTRACE(0x1056dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056dbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1056dbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056dbe6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1056dbed cmp dword ptr [0x1058e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dbf4 jne 0x1056dc14 */
  if (!C.zf) goto L_1056dc14;
  /* 1056dbf6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1056dbfb push 0x1058b198 */
  push32((uint32_t)(0x1058b198u));
  /* 1056dc00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056dc02 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1056dc07 call 0x10563b00 */
  push32(0x1056dc0cu); f_10563b00();
  /* 1056dc0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dc0f mov dword ptr [0x1058e4dc], eax */
  w32((uint32_t)(0x1058e4dc), (EAX));
L_1056dc14:;
  /* 1056dc14 mov eax, dword ptr [0x1058e4dc] */
  EAX = (r32((uint32_t)(0x1058e4dc)));
  /* 1056dc19 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1056dc1c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1056dc23 jmp 0x1056dc2e */
  goto L_1056dc2e;
L_1056dc25:;
  /* 1056dc25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056dc28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dc2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1056dc2e:;
  /* 1056dc2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056dc31 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dc34 mov eax, dword ptr [edx + 0x1058e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1058e4dc)));
  /* 1056dc3a push eax */
  push32((uint32_t)(EAX));
  /* 1056dc3b push 0x1058b1a4 */
  push32((uint32_t)(0x1058b1a4u));
  /* 1056dc40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056dc43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dc46 mov edx, dword ptr [ecx + 0x1058e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1058e4d8)));
  /* 1056dc4c push edx */
  push32((uint32_t)(EDX));
  /* 1056dc4d push 3 */
  push32((uint32_t)(0x3u));
  /* 1056dc4f mov eax, dword ptr [0x1058e4dc] */
  EAX = (r32((uint32_t)(0x1058e4dc)));
  /* 1056dc54 push eax */
  push32((uint32_t)(EAX));
  /* 1056dc55 call 0x1056de80 */
  push32(0x1056dc5au); f_1056de80();
  /* 1056dc5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dc5d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dc61 jge 0x1056dca9 */
  if ((C.sf==C.of)) goto L_1056dca9;
  /* 1056dc63 push 0x1058b190 */
  push32((uint32_t)(0x1058b190u));
  /* 1056dc68 mov ecx, dword ptr [0x1058e4dc] */
  ECX = (r32((uint32_t)(0x1058e4dc)));
  /* 1056dc6e push ecx */
  push32((uint32_t)(ECX));
  /* 1056dc6f call 0x10566ac0 */
  push32(0x1056dc74u); f_10566ac0();
  /* 1056dc74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dc77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056dc7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dc7d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dc80 mov eax, dword ptr [edx + 0x1058e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1058e4dc)));
  /* 1056dc86 push eax */
  push32((uint32_t)(EAX));
  /* 1056dc87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056dc8a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056dc8d mov edx, dword ptr [ecx + 0x1058e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1058e4dc)));
  /* 1056dc93 push edx */
  push32((uint32_t)(EDX));
  /* 1056dc94 call 0x1056f790 */
  push32(0x1056dc99u); f_1056f790();
  /* 1056dc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dc9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056dc9e je 0x1056dca7 */
  if (C.zf) goto L_1056dca7;
  /* 1056dca0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1056dca7:;
  /* 1056dca7 jmp 0x1056dcd7 */
  goto L_1056dcd7;
L_1056dca9:;
  /* 1056dca9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dcad jne 0x1056dcb6 */
  if (!C.zf) goto L_1056dcb6;
  /* 1056dcaf mov eax, dword ptr [0x1058e4dc] */
  EAX = (r32((uint32_t)(0x1058e4dc)));
  /* 1056dcb4 jmp 0x1056dcdc */
  goto L_1056dcdc;
L_1056dcb6:;
  /* 1056dcb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056dcb8 mov eax, dword ptr [0x1058e4dc] */
  EAX = (r32((uint32_t)(0x1058e4dc)));
  /* 1056dcbd push eax */
  push32((uint32_t)(EAX));
  /* 1056dcbe call 0x10564590 */
  push32(0x1056dcc3u); f_10564590();
  /* 1056dcc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dcc6 mov dword ptr [0x1058e4dc], 0 */
  w32((uint32_t)(0x1058e4dc), (0x0u));
  /* 1056dcd0 mov eax, dword ptr [0x1058e4f4] */
  EAX = (r32((uint32_t)(0x1058e4f4)));
  /* 1056dcd5 jmp 0x1056dcdc */
  goto L_1056dcdc;
L_1056dcd7:;
  /* 1056dcd7 jmp 0x1056dc25 */
  goto L_1056dc25;
L_1056dcdc:;
  /* 1056dcdc mov esp, ebp */
  ESP = (EBP);
  /* 1056dcde pop ebp */
  EBP = (pop32());
  /* 1056dcdf ret  */
  ESPCHK(0x1056dbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x1056dce0 (388 bytes, 115 insns) */
void f_1056dce0(void) {
  FTRACE(0x1056dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1056dce3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056dce9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dced jne 0x1056dcf6 */
  if (!C.zf) goto L_1056dcf6;
  /* 1056dcef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056dcf1 jmp 0x1056de60 */
  goto L_1056de60;
L_1056dcf6:;
  /* 1056dcf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dcf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056dcfc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dcff jne 0x1056dd50 */
  if (!C.zf) goto L_1056dd50;
  /* 1056dd01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dd04 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1056dd08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056dd0a jne 0x1056dd50 */
  if (!C.zf) goto L_1056dd50;
  /* 1056dd0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056dd0f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1056dd12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056dd15 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1056dd19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dd1d je 0x1056dd39 */
  if (C.zf) goto L_1056dd39;
  /* 1056dd1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056dd22 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1056dd27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056dd2a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1056dd30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056dd33 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1056dd39:;
  /* 1056dd39 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dd3d je 0x1056dd48 */
  if (C.zf) goto L_1056dd48;
  /* 1056dd3f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056dd42 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1056dd48:;
  /* 1056dd48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056dd4b jmp 0x1056de60 */
  goto L_1056de60;
L_1056dd50:;
  /* 1056dd50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1056dd54 push 0x1058e450 */
  push32((uint32_t)(0x1058e450u));
  /* 1056dd59 call 0x1056f790 */
  push32(0x1056dd5eu); f_1056f790();
  /* 1056dd5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dd61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056dd63 je 0x1056de18 */
  if (C.zf) goto L_1056de18;
  /* 1056dd69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dd6c push edx */
  push32((uint32_t)(EDX));
  /* 1056dd6d push 0x1058e3cc */
  push32((uint32_t)(0x1058e3ccu));
  /* 1056dd72 call 0x1056f790 */
  push32(0x1056dd77u); f_1056f790();
  /* 1056dd77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dd7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056dd7c je 0x1056de18 */
  if (C.zf) goto L_1056de18;
  /* 1056dd82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dd85 push eax */
  push32((uint32_t)(EAX));
  /* 1056dd86 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1056dd8c push ecx */
  push32((uint32_t)(ECX));
  /* 1056dd8d call 0x1056ded0 */
  push32(0x1056dd92u); f_1056ded0();
  /* 1056dd92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dd95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056dd97 je 0x1056dda0 */
  if (C.zf) goto L_1056dda0;
  /* 1056dd99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056dd9b jmp 0x1056de60 */
  goto L_1056de60;
L_1056dda0:;
  /* 1056dda0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1056dda6 push edx */
  push32((uint32_t)(EDX));
  /* 1056dda7 push 0x1058f738 */
  push32((uint32_t)(0x1058f738u));
  /* 1056ddac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1056ddb2 push eax */
  push32((uint32_t)(EAX));
  /* 1056ddb3 call 0x1056f8e0 */
  push32(0x1056ddb8u); f_1056f8e0();
  /* 1056ddb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ddbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056ddbd jne 0x1056ddc6 */
  if (!C.zf) goto L_1056ddc6;
  /* 1056ddbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056ddc1 jmp 0x1056de60 */
  goto L_1056de60;
L_1056ddc6:;
  /* 1056ddc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056ddc8 mov cx, word ptr [0x1058f73c] */
  CX = (r16((uint32_t)(0x1058f73c)));
  /* 1056ddcf mov dword ptr [0x1058f740], ecx */
  w32((uint32_t)(0x1058f740), (ECX));
  /* 1056ddd5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1056dddb push edx */
  push32((uint32_t)(EDX));
  /* 1056dddc push 0x1058e450 */
  push32((uint32_t)(0x1058e450u));
  /* 1056dde1 call 0x1056e030 */
  push32(0x1056dde6u); f_1056e030();
  /* 1056dde6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dde9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ddec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056ddef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056ddf1 je 0x1056de06 */
  if (C.zf) goto L_1056de06;
  /* 1056ddf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ddf6 push edx */
  push32((uint32_t)(EDX));
  /* 1056ddf7 push 0x1058e3cc */
  push32((uint32_t)(0x1058e3ccu));
  /* 1056ddfc call 0x10566ab0 */
  push32(0x1056de01u); f_10566ab0();
  /* 1056de01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056de04 jmp 0x1056de18 */
  goto L_1056de18;
L_1056de06:;
  /* 1056de06 push 0x1058e450 */
  push32((uint32_t)(0x1058e450u));
  /* 1056de0b push 0x1058e3cc */
  push32((uint32_t)(0x1058e3ccu));
  /* 1056de10 call 0x10566ab0 */
  push32(0x1056de15u); f_10566ab0();
  /* 1056de15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056de18:;
  /* 1056de18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056de1c je 0x1056de31 */
  if (C.zf) goto L_1056de31;
  /* 1056de1e push 6 */
  push32((uint32_t)(0x6u));
  /* 1056de20 push 0x1058f738 */
  push32((uint32_t)(0x1058f738u));
  /* 1056de25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056de28 push eax */
  push32((uint32_t)(EAX));
  /* 1056de29 call 0x1056a3e0 */
  push32(0x1056de2eu); f_1056a3e0();
  /* 1056de2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056de31:;
  /* 1056de31 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056de35 je 0x1056de4a */
  if (C.zf) goto L_1056de4a;
  /* 1056de37 push 4 */
  push32((uint32_t)(0x4u));
  /* 1056de39 push 0x1058f740 */
  push32((uint32_t)(0x1058f740u));
  /* 1056de3e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1056de41 push ecx */
  push32((uint32_t)(ECX));
  /* 1056de42 call 0x1056a3e0 */
  push32(0x1056de47u); f_1056a3e0();
  /* 1056de47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056de4a:;
  /* 1056de4a push 0x1058e450 */
  push32((uint32_t)(0x1058e450u));
  /* 1056de4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056de52 push edx */
  push32((uint32_t)(EDX));
  /* 1056de53 call 0x10566ab0 */
  push32(0x1056de58u); f_10566ab0();
  /* 1056de58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056de5b mov eax, 0x1058e450 */
  EAX = (0x1058e450u);
L_1056de60:;
  /* 1056de60 mov esp, ebp */
  ESP = (EBP);
  /* 1056de62 pop ebp */
  EBP = (pop32());
  /* 1056de63 ret  */
  ESPCHK(0x1056dce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de70 @ 0x1056de70 (7 bytes, 5 insns) */
void f_1056de70(void) {
  FTRACE(0x1056de70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056de70 push ebp */
  push32((uint32_t)(EBP));
  /* 1056de71 mov ebp, esp */
  EBP = (ESP);
  /* 1056de73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056de75 pop ebp */
  EBP = (pop32());
  /* 1056de76 ret  */
  ESPCHK(0x1056de70u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1056de80 (79 bytes, 28 insns) */
void f_1056de80(void) {
  FTRACE(0x1056de80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056de80 push ebp */
  push32((uint32_t)(EBP));
  /* 1056de81 mov ebp, esp */
  EBP = (ESP);
  /* 1056de83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056de86 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1056de89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056de8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1056de93 jmp 0x1056de9e */
  goto L_1056de9e;
L_1056de95:;
  /* 1056de95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056de98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056de9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1056de9e:;
  /* 1056de9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056dea1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dea4 jge 0x1056dec4 */
  if ((C.sf==C.of)) goto L_1056dec4;
  /* 1056dea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056dea9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056deac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056deaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056deb2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1056deb5 push edx */
  push32((uint32_t)(EDX));
  /* 1056deb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056deb9 push eax */
  push32((uint32_t)(EAX));
  /* 1056deba call 0x10566ac0 */
  push32(0x1056debfu); f_10566ac0();
  /* 1056debf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dec2 jmp 0x1056de95 */
  goto L_1056de95;
L_1056dec4:;
  /* 1056dec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056decb mov esp, ebp */
  ESP = (EBP);
  /* 1056decd pop ebp */
  EBP = (pop32());
  /* 1056dece ret  */
  ESPCHK(0x1056de80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x1056ded0 (349 bytes, 122 insns) */
void f_1056ded0(void) {
  FTRACE(0x1056ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ded0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ded1 mov ebp, esp */
  EBP = (ESP);
  /* 1056ded3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ded6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1056dedb push 0 */
  push32((uint32_t)(0x0u));
  /* 1056dedd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dee0 push eax */
  push32((uint32_t)(EAX));
  /* 1056dee1 call 0x10567870 */
  push32(0x1056dee6u); f_10567870();
  /* 1056dee6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dee9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056deec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056deef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056def1 jne 0x1056defa */
  if (!C.zf) goto L_1056defa;
  /* 1056def3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056def5 jmp 0x1056e029 */
  goto L_1056e029;
L_1056defa:;
  /* 1056defa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056defd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056df00 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056df03 jne 0x1056df30 */
  if (!C.zf) goto L_1056df30;
  /* 1056df05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056df08 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1056df0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056df0e je 0x1056df30 */
  if (C.zf) goto L_1056df30;
  /* 1056df10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056df13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df16 push ecx */
  push32((uint32_t)(ECX));
  /* 1056df17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056df1a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df20 push edx */
  push32((uint32_t)(EDX));
  /* 1056df21 call 0x10566ab0 */
  push32(0x1056df26u); f_10566ab0();
  /* 1056df26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056df2b jmp 0x1056e029 */
  goto L_1056e029;
L_1056df30:;
  /* 1056df30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1056df37 jmp 0x1056df42 */
  goto L_1056df42;
L_1056df39:;
  /* 1056df39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056df3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056df42:;
  /* 1056df42 push 0x1058b1a8 */
  push32((uint32_t)(0x1058b1a8u));
  /* 1056df47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056df4a push ecx */
  push32((uint32_t)(ECX));
  /* 1056df4b call 0x1056f820 */
  push32(0x1056df50u); f_1056f820();
  /* 1056df50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df53 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1056df56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056df5a jne 0x1056df64 */
  if (!C.zf) goto L_1056df64;
  /* 1056df5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056df5f jmp 0x1056e029 */
  goto L_1056e029;
L_1056df64:;
  /* 1056df64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056df67 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056df6c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1056df6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056df73 jne 0x1056df9a */
  if (!C.zf) goto L_1056df9a;
  /* 1056df75 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056df79 jge 0x1056df9a */
  if ((C.sf==C.of)) goto L_1056df9a;
  /* 1056df7b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1056df7f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056df82 je 0x1056df9a */
  if (C.zf) goto L_1056df9a;
  /* 1056df84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056df87 push edx */
  push32((uint32_t)(EDX));
  /* 1056df88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056df8b push eax */
  push32((uint32_t)(EAX));
  /* 1056df8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056df8f push ecx */
  push32((uint32_t)(ECX));
  /* 1056df90 call 0x10567320 */
  push32(0x1056df95u); f_10567320();
  /* 1056df95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056df98 jmp 0x1056e000 */
  goto L_1056e000;
L_1056df9a:;
  /* 1056df9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056df9e jne 0x1056dfc8 */
  if (!C.zf) goto L_1056dfc8;
  /* 1056dfa0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dfa4 jge 0x1056dfc8 */
  if ((C.sf==C.of)) goto L_1056dfc8;
  /* 1056dfa6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1056dfaa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dfad je 0x1056dfc8 */
  if (C.zf) goto L_1056dfc8;
  /* 1056dfaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056dfb2 push eax */
  push32((uint32_t)(EAX));
  /* 1056dfb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056dfb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1056dfb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dfba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dfbd push edx */
  push32((uint32_t)(EDX));
  /* 1056dfbe call 0x10567320 */
  push32(0x1056dfc3u); f_10567320();
  /* 1056dfc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dfc6 jmp 0x1056e000 */
  goto L_1056e000;
L_1056dfc8:;
  /* 1056dfc8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dfcc jne 0x1056dffb */
  if (!C.zf) goto L_1056dffb;
  /* 1056dfce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1056dfd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056dfd4 je 0x1056dfdf */
  if (C.zf) goto L_1056dfdf;
  /* 1056dfd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1056dfda cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056dfdd jne 0x1056dffb */
  if (!C.zf) goto L_1056dffb;
L_1056dfdf:;
  /* 1056dfdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056dfe2 push edx */
  push32((uint32_t)(EDX));
  /* 1056dfe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056dfe6 push eax */
  push32((uint32_t)(EAX));
  /* 1056dfe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056dfea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dff0 push ecx */
  push32((uint32_t)(ECX));
  /* 1056dff1 call 0x10567320 */
  push32(0x1056dff6u); f_10567320();
  /* 1056dff6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056dff9 jmp 0x1056e000 */
  goto L_1056e000;
L_1056dffb:;
  /* 1056dffb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056dffe jmp 0x1056e029 */
  goto L_1056e029;
L_1056e000:;
  /* 1056e000 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1056e004 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e007 jne 0x1056e00b */
  if (!C.zf) goto L_1056e00b;
  /* 1056e009 jmp 0x1056e027 */
  goto L_1056e027;
L_1056e00b:;
  /* 1056e00b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1056e00f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e011 jne 0x1056e015 */
  if (!C.zf) goto L_1056e015;
  /* 1056e013 jmp 0x1056e027 */
  goto L_1056e027;
L_1056e015:;
  /* 1056e015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e018 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056e01b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1056e01f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1056e022 jmp 0x1056df39 */
  goto L_1056df39;
L_1056e027:;
  /* 1056e027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056e029:;
  /* 1056e029 mov esp, ebp */
  ESP = (EBP);
  /* 1056e02b pop ebp */
  EBP = (pop32());
  /* 1056e02c ret  */
  ESPCHK(0x1056ded0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1056e030 (101 bytes, 36 insns) */
void f_1056e030(void) {
  FTRACE(0x1056e030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e030 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e031 mov ebp, esp */
  EBP = (ESP);
  /* 1056e033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056e036 push eax */
  push32((uint32_t)(EAX));
  /* 1056e037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e03a push ecx */
  push32((uint32_t)(ECX));
  /* 1056e03b call 0x10566ab0 */
  push32(0x1056e040u); f_10566ab0();
  /* 1056e040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056e046 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1056e04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e04c je 0x1056e068 */
  if (C.zf) goto L_1056e068;
  /* 1056e04e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056e051 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e054 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e055 push 0x1058b1b0 */
  push32((uint32_t)(0x1058b1b0u));
  /* 1056e05a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e05f push edx */
  push32((uint32_t)(EDX));
  /* 1056e060 call 0x1056de80 */
  push32(0x1056e065u); f_1056de80();
  /* 1056e065 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056e068:;
  /* 1056e068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056e06b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1056e072 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056e074 je 0x1056e093 */
  if (C.zf) goto L_1056e093;
  /* 1056e076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056e079 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e07f push edx */
  push32((uint32_t)(EDX));
  /* 1056e080 push 0x1058b1ac */
  push32((uint32_t)(0x1058b1acu));
  /* 1056e085 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e08a push eax */
  push32((uint32_t)(EAX));
  /* 1056e08b call 0x1056de80 */
  push32(0x1056e090u); f_1056de80();
  /* 1056e090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056e093:;
  /* 1056e093 pop ebp */
  EBP = (pop32());
  /* 1056e094 ret  */
  ESPCHK(0x1056e030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x1056e0a0 (130 bytes, 50 insns) */
void f_1056e0a0(void) {
  FTRACE(0x1056e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1056e0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e0a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1056e0a5 push esi */
  push32((uint32_t)(ESI));
  /* 1056e0a6 push edi */
  push32((uint32_t)(EDI));
  /* 1056e0a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1056e0ae:;
  /* 1056e0ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e0b2 jne 0x1056e0d2 */
  if (!C.zf) goto L_1056e0d2;
  /* 1056e0b4 push 0x1058b1c0 */
  push32((uint32_t)(0x1058b1c0u));
  /* 1056e0b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056e0bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1056e0bd push 0x1058b1b4 */
  push32((uint32_t)(0x1058b1b4u));
  /* 1056e0c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e0c4 call 0x10562bc0 */
  push32(0x1056e0c9u); f_10562bc0();
  /* 1056e0c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e0cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e0cf jne 0x1056e0d2 */
  if (!C.zf) goto L_1056e0d2;
  /* 1056e0d1 int3  */
  x86_unimpl("int3 @ 0x1056e0d1");
L_1056e0d2:;
  /* 1056e0d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056e0d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e0d6 jne 0x1056e0ae */
  if (!C.zf) goto L_1056e0ae;
  /* 1056e0d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e0db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056e0de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1056e0e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056e0e3 je 0x1056e0f1 */
  if (C.zf) goto L_1056e0f1;
  /* 1056e0e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e0e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1056e0ef jmp 0x1056e118 */
  goto L_1056e118;
L_1056e0f1:;
  /* 1056e0f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e0f5 call 0x1056c910 */
  push32(0x1056e0fau); f_1056c910();
  /* 1056e0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e100 push edx */
  push32((uint32_t)(EDX));
  /* 1056e101 call 0x1056e130 */
  push32(0x1056e106u); f_1056e130();
  /* 1056e106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056e10c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e10f push eax */
  push32((uint32_t)(EAX));
  /* 1056e110 call 0x1056c980 */
  push32(0x1056e115u); f_1056c980();
  /* 1056e115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056e118:;
  /* 1056e118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e11b pop edi */
  EDI = (pop32());
  /* 1056e11c pop esi */
  ESI = (pop32());
  /* 1056e11d pop ebx */
  EBX = (pop32());
  /* 1056e11e mov esp, ebp */
  ESP = (EBP);
  /* 1056e120 pop ebp */
  EBP = (pop32());
  /* 1056e121 ret  */
  ESPCHK(0x1056e0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x1056e130 (190 bytes, 67 insns) */
void f_1056e130(void) {
  FTRACE(0x1056e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e131 mov ebp, esp */
  EBP = (ESP);
  /* 1056e133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056e136 push ebx */
  push32((uint32_t)(EBX));
  /* 1056e137 push esi */
  push32((uint32_t)(ESI));
  /* 1056e138 push edi */
  push32((uint32_t)(EDI));
  /* 1056e139 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1056e140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1056e146:;
  /* 1056e146 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e14a jne 0x1056e16a */
  if (!C.zf) goto L_1056e16a;
  /* 1056e14c push 0x1058b060 */
  push32((uint32_t)(0x1058b060u));
  /* 1056e151 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056e153 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1056e155 push 0x1058b1b4 */
  push32((uint32_t)(0x1058b1b4u));
  /* 1056e15a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e15c call 0x10562bc0 */
  push32(0x1056e161u); f_10562bc0();
  /* 1056e161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e167 jne 0x1056e16a */
  if (!C.zf) goto L_1056e16a;
  /* 1056e169 int3  */
  x86_unimpl("int3 @ 0x1056e169");
L_1056e16a:;
  /* 1056e16a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e16c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056e16e jne 0x1056e146 */
  if (!C.zf) goto L_1056e146;
  /* 1056e170 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e173 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1056e176 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1056e17b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e17d je 0x1056e1da */
  if (C.zf) goto L_1056e1da;
  /* 1056e17f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e182 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e183 call 0x1056d430 */
  push32(0x1056e188u); f_1056d430();
  /* 1056e188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e18b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056e18e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e191 push edx */
  push32((uint32_t)(EDX));
  /* 1056e192 call 0x105707b0 */
  push32(0x1056e197u); f_105707b0();
  /* 1056e197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e19a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e19d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056e1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e1a1 call 0x10570680 */
  push32(0x1056e1a6u); f_10570680();
  /* 1056e1a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e1a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e1ab jge 0x1056e1b6 */
  if ((C.sf==C.of)) goto L_1056e1b6;
  /* 1056e1ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1056e1b4 jmp 0x1056e1da */
  goto L_1056e1da;
L_1056e1b6:;
  /* 1056e1b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e1b9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e1bd je 0x1056e1da */
  if (C.zf) goto L_1056e1da;
  /* 1056e1bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e1c4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1056e1c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e1c8 call 0x10564590 */
  push32(0x1056e1cdu); f_10564590();
  /* 1056e1cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e1d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e1d3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1056e1da:;
  /* 1056e1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e1dd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1056e1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e1e7 pop edi */
  EDI = (pop32());
  /* 1056e1e8 pop esi */
  ESI = (pop32());
  /* 1056e1e9 pop ebx */
  EBX = (pop32());
  /* 1056e1ea mov esp, ebp */
  ESP = (EBP);
  /* 1056e1ec pop ebp */
  EBP = (pop32());
  /* 1056e1ed ret  */
  ESPCHK(0x1056e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x1056e1f0 (210 bytes, 63 insns) */
void f_1056e1f0(void) {
  FTRACE(0x1056e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1056e1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e1f7 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e1fd jae 0x1056e221 */
  if (!C.cf) goto L_1056e221;
  /* 1056e1ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e202 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1056e205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e208 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1056e20b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056e20e mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 1056e215 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1056e21a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1056e21d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056e21f jne 0x1056e234 */
  if (!C.zf) goto L_1056e234;
L_1056e221:;
  /* 1056e221 call 0x1056b9d0 */
  push32(0x1056e226u); f_1056b9d0();
  /* 1056e226 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056e22c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056e22f jmp 0x1056e2be */
  goto L_1056e2be;
L_1056e234:;
  /* 1056e234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e237 push edx */
  push32((uint32_t)(EDX));
  /* 1056e238 call 0x1056d1f0 */
  push32(0x1056e23du); f_1056d1f0();
  /* 1056e23d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e243 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1056e246 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e249 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1056e24c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1056e24f mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 1056e256 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1056e25b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1056e25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e260 je 0x1056e29d */
  if (C.zf) goto L_1056e29d;
  /* 1056e262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e265 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e266 call 0x1056d070 */
  push32(0x1056e26bu); f_1056d070();
  /* 1056e26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e26e push eax */
  push32((uint32_t)(EAX));
  /* 1056e26f call dword ptr [0x105922a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105922a0))), 0x1056e275u);
  /* 1056e275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e277 jne 0x1056e284 */
  if (!C.zf) goto L_1056e284;
  /* 1056e279 call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x1056e27fu);
  /* 1056e27f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056e282 jmp 0x1056e28b */
  goto L_1056e28b;
L_1056e284:;
  /* 1056e284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1056e28b:;
  /* 1056e28b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e28f jne 0x1056e293 */
  if (!C.zf) goto L_1056e293;
  /* 1056e291 jmp 0x1056e2af */
  goto L_1056e2af;
L_1056e293:;
  /* 1056e293 call 0x1056b9e0 */
  push32(0x1056e298u); f_1056b9e0();
  /* 1056e298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e29b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1056e29d:;
  /* 1056e29d call 0x1056b9d0 */
  push32(0x1056e2a2u); f_1056b9d0();
  /* 1056e2a2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1056e2a8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1056e2af:;
  /* 1056e2af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e2b2 push eax */
  push32((uint32_t)(EAX));
  /* 1056e2b3 call 0x1056d280 */
  push32(0x1056e2b8u); f_1056d280();
  /* 1056e2b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e2bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1056e2be:;
  /* 1056e2be mov esp, ebp */
  ESP = (EBP);
  /* 1056e2c0 pop ebp */
  EBP = (pop32());
  /* 1056e2c1 ret  */
  ESPCHK(0x1056e1f0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1056e2d0 (219 bytes, 64 insns) */
void f_1056e2d0(void) {
  FTRACE(0x1056e2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1056e2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e2d4 cmp dword ptr [0x1058f724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e2db je 0x1056e371 */
  if (C.zf) goto L_1056e371;
  /* 1056e2e1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1056e2e3 push 0x1058b1d0 */
  push32((uint32_t)(0x1058b1d0u));
  /* 1056e2e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e2ea push 0xac */
  push32((uint32_t)(0xacu));
  /* 1056e2ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e2f1 call 0x10563f10 */
  push32(0x1056e2f6u); f_10563f10();
  /* 1056e2f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e2f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056e2fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e300 jne 0x1056e30c */
  if (!C.zf) goto L_1056e30c;
  /* 1056e302 mov eax, 1 */
  EAX = (0x1u);
  /* 1056e307 jmp 0x1056e3a7 */
  goto L_1056e3a7;
L_1056e30c:;
  /* 1056e30c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e30f push eax */
  push32((uint32_t)(EAX));
  /* 1056e310 call 0x1056e3b0 */
  push32(0x1056e315u); f_1056e3b0();
  /* 1056e315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056e31a je 0x1056e33d */
  if (C.zf) goto L_1056e33d;
  /* 1056e31c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e31f push ecx */
  push32((uint32_t)(ECX));
  /* 1056e320 call 0x1056e940 */
  push32(0x1056e325u); f_1056e940();
  /* 1056e325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e328 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e32a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e32d push edx */
  push32((uint32_t)(EDX));
  /* 1056e32e call 0x10564590 */
  push32(0x1056e333u); f_10564590();
  /* 1056e333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e336 mov eax, 1 */
  EAX = (0x1u);
  /* 1056e33b jmp 0x1056e3a7 */
  goto L_1056e3a7;
L_1056e33d:;
  /* 1056e33d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e340 mov dword ptr [0x1058ec98], eax */
  w32((uint32_t)(0x1058ec98), (EAX));
  /* 1056e345 mov ecx, dword ptr [0x1058f744] */
  ECX = (r32((uint32_t)(0x1058f744)));
  /* 1056e34b push ecx */
  push32((uint32_t)(ECX));
  /* 1056e34c call 0x1056e940 */
  push32(0x1056e351u); f_1056e940();
  /* 1056e351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e354 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e356 mov edx, dword ptr [0x1058f744] */
  EDX = (r32((uint32_t)(0x1058f744)));
  /* 1056e35c push edx */
  push32((uint32_t)(EDX));
  /* 1056e35d call 0x10564590 */
  push32(0x1056e362u); f_10564590();
  /* 1056e362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e368 mov dword ptr [0x1058f744], eax */
  w32((uint32_t)(0x1058f744), (EAX));
  /* 1056e36d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056e36f jmp 0x1056e3a7 */
  goto L_1056e3a7;
L_1056e371:;
  /* 1056e371 mov dword ptr [0x1058ec98], 0x1058eca0 */
  w32((uint32_t)(0x1058ec98), (0x1058eca0u));
  /* 1056e37b mov ecx, dword ptr [0x1058f744] */
  ECX = (r32((uint32_t)(0x1058f744)));
  /* 1056e381 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e382 call 0x1056e940 */
  push32(0x1056e387u); f_1056e940();
  /* 1056e387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e38a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e38c mov edx, dword ptr [0x1058f744] */
  EDX = (r32((uint32_t)(0x1058f744)));
  /* 1056e392 push edx */
  push32((uint32_t)(EDX));
  /* 1056e393 call 0x10564590 */
  push32(0x1056e398u); f_10564590();
  /* 1056e398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e39b mov dword ptr [0x1058f744], 0 */
  w32((uint32_t)(0x1058f744), (0x0u));
  /* 1056e3a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056e3a7:;
  /* 1056e3a7 mov esp, ebp */
  ESP = (EBP);
  /* 1056e3a9 pop ebp */
  EBP = (pop32());
  /* 1056e3aa ret  */
  ESPCHK(0x1056e2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3b0 @ 0x1056e3b0 (1423 bytes, 533 insns) */
void f_1056e3b0(void) {
  FTRACE(0x1056e3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1056e3b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056e3b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1056e3bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056e3bf mov ax, word ptr [0x1058f77e] */
  AX = (r16((uint32_t)(0x1058f77e)));
  /* 1056e3c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056e3c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e3ca mov cx, word ptr [0x1058f780] */
  CX = (r16((uint32_t)(0x1058f780)));
  /* 1056e3d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056e3d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e3d8 jne 0x1056e3e2 */
  if (!C.zf) goto L_1056e3e2;
  /* 1056e3da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056e3dd jmp 0x1056e93b */
  goto L_1056e93b;
L_1056e3e2:;
  /* 1056e3e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e3e5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e3e8 push edx */
  push32((uint32_t)(EDX));
  /* 1056e3e9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1056e3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e3ee push eax */
  push32((uint32_t)(EAX));
  /* 1056e3ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e3f1 call 0x10571cc0 */
  push32(0x1056e3f6u); f_10571cc0();
  /* 1056e3f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e3f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e3fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e3fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e404 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e407 push edx */
  push32((uint32_t)(EDX));
  /* 1056e408 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1056e40a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e40d push eax */
  push32((uint32_t)(EAX));
  /* 1056e40e push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e410 call 0x10571cc0 */
  push32(0x1056e415u); f_10571cc0();
  /* 1056e415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e41b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e41d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e423 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e426 push edx */
  push32((uint32_t)(EDX));
  /* 1056e427 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1056e429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e42c push eax */
  push32((uint32_t)(EAX));
  /* 1056e42d push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e42f call 0x10571cc0 */
  push32(0x1056e434u); f_10571cc0();
  /* 1056e434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e43a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e442 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e445 push edx */
  push32((uint32_t)(EDX));
  /* 1056e446 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1056e448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e44b push eax */
  push32((uint32_t)(EAX));
  /* 1056e44c push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e44e call 0x10571cc0 */
  push32(0x1056e453u); f_10571cc0();
  /* 1056e453 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e459 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e45b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e45e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e461 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e464 push edx */
  push32((uint32_t)(EDX));
  /* 1056e465 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1056e467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e46a push eax */
  push32((uint32_t)(EAX));
  /* 1056e46b push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e46d call 0x10571cc0 */
  push32(0x1056e472u); f_10571cc0();
  /* 1056e472 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e478 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e47a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e47d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e480 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e483 push edx */
  push32((uint32_t)(EDX));
  /* 1056e484 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1056e486 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e489 push eax */
  push32((uint32_t)(EAX));
  /* 1056e48a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e48c call 0x10571cc0 */
  push32(0x1056e491u); f_10571cc0();
  /* 1056e491 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e497 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e499 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e49f push edx */
  push32((uint32_t)(EDX));
  /* 1056e4a0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1056e4a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e4a5 push eax */
  push32((uint32_t)(EAX));
  /* 1056e4a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e4a8 call 0x10571cc0 */
  push32(0x1056e4adu); f_10571cc0();
  /* 1056e4ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e4b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e4b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e4b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e4b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e4bb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e4be push edx */
  push32((uint32_t)(EDX));
  /* 1056e4bf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1056e4c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e4c4 push eax */
  push32((uint32_t)(EAX));
  /* 1056e4c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e4c7 call 0x10571cc0 */
  push32(0x1056e4ccu); f_10571cc0();
  /* 1056e4cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e4cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e4d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e4d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e4d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e4da add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e4dd push edx */
  push32((uint32_t)(EDX));
  /* 1056e4de push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1056e4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e4e3 push eax */
  push32((uint32_t)(EAX));
  /* 1056e4e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e4e6 call 0x10571cc0 */
  push32(0x1056e4ebu); f_10571cc0();
  /* 1056e4eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e4ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e4f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e4f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e4f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e4f9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e4fc push edx */
  push32((uint32_t)(EDX));
  /* 1056e4fd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1056e4ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e502 push eax */
  push32((uint32_t)(EAX));
  /* 1056e503 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e505 call 0x10571cc0 */
  push32(0x1056e50au); f_10571cc0();
  /* 1056e50a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e50d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e510 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e512 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e518 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e51b push edx */
  push32((uint32_t)(EDX));
  /* 1056e51c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1056e51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e521 push eax */
  push32((uint32_t)(EAX));
  /* 1056e522 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e524 call 0x10571cc0 */
  push32(0x1056e529u); f_10571cc0();
  /* 1056e529 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e52c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e52f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e531 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e537 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e53a push edx */
  push32((uint32_t)(EDX));
  /* 1056e53b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1056e53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e540 push eax */
  push32((uint32_t)(EAX));
  /* 1056e541 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e543 call 0x10571cc0 */
  push32(0x1056e548u); f_10571cc0();
  /* 1056e548 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e54b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e54e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e550 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e556 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e559 push edx */
  push32((uint32_t)(EDX));
  /* 1056e55a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1056e55c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e55f push eax */
  push32((uint32_t)(EAX));
  /* 1056e560 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e562 call 0x10571cc0 */
  push32(0x1056e567u); f_10571cc0();
  /* 1056e567 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e56a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e56d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e56f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e575 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e578 push edx */
  push32((uint32_t)(EDX));
  /* 1056e579 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1056e57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e57e push eax */
  push32((uint32_t)(EAX));
  /* 1056e57f push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e581 call 0x10571cc0 */
  push32(0x1056e586u); f_10571cc0();
  /* 1056e586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e58c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e58e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e594 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e597 push edx */
  push32((uint32_t)(EDX));
  /* 1056e598 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1056e59a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e59d push eax */
  push32((uint32_t)(EAX));
  /* 1056e59e push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e5a0 call 0x10571cc0 */
  push32(0x1056e5a5u); f_10571cc0();
  /* 1056e5a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e5a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e5ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e5ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e5b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e5b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e5b6 push edx */
  push32((uint32_t)(EDX));
  /* 1056e5b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1056e5b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e5bc push eax */
  push32((uint32_t)(EAX));
  /* 1056e5bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e5bf call 0x10571cc0 */
  push32(0x1056e5c4u); f_10571cc0();
  /* 1056e5c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e5c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e5ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e5cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e5d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e5d5 push edx */
  push32((uint32_t)(EDX));
  /* 1056e5d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1056e5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e5db push eax */
  push32((uint32_t)(EAX));
  /* 1056e5dc push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e5de call 0x10571cc0 */
  push32(0x1056e5e3u); f_10571cc0();
  /* 1056e5e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e5e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e5e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e5eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e5f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e5f4 push edx */
  push32((uint32_t)(EDX));
  /* 1056e5f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1056e5f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e5fa push eax */
  push32((uint32_t)(EAX));
  /* 1056e5fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e5fd call 0x10571cc0 */
  push32(0x1056e602u); f_10571cc0();
  /* 1056e602 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e608 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e60a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e610 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e613 push edx */
  push32((uint32_t)(EDX));
  /* 1056e614 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1056e616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e619 push eax */
  push32((uint32_t)(EAX));
  /* 1056e61a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e61c call 0x10571cc0 */
  push32(0x1056e621u); f_10571cc0();
  /* 1056e621 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e624 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e627 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e629 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e62c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e62f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e632 push edx */
  push32((uint32_t)(EDX));
  /* 1056e633 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1056e635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e638 push eax */
  push32((uint32_t)(EAX));
  /* 1056e639 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e63b call 0x10571cc0 */
  push32(0x1056e640u); f_10571cc0();
  /* 1056e640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e643 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e646 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e64b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e64e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e651 push edx */
  push32((uint32_t)(EDX));
  /* 1056e652 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1056e654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e657 push eax */
  push32((uint32_t)(EAX));
  /* 1056e658 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e65a call 0x10571cc0 */
  push32(0x1056e65fu); f_10571cc0();
  /* 1056e65f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e662 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e665 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e667 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e66a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e66d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e670 push edx */
  push32((uint32_t)(EDX));
  /* 1056e671 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1056e673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e676 push eax */
  push32((uint32_t)(EAX));
  /* 1056e677 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e679 call 0x10571cc0 */
  push32(0x1056e67eu); f_10571cc0();
  /* 1056e67e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e681 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e684 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e686 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e68c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e68f push edx */
  push32((uint32_t)(EDX));
  /* 1056e690 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1056e692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e695 push eax */
  push32((uint32_t)(EAX));
  /* 1056e696 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e698 call 0x10571cc0 */
  push32(0x1056e69du); f_10571cc0();
  /* 1056e69d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e6a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e6a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e6a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e6ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6ae push edx */
  push32((uint32_t)(EDX));
  /* 1056e6af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1056e6b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e6b4 push eax */
  push32((uint32_t)(EAX));
  /* 1056e6b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e6b7 call 0x10571cc0 */
  push32(0x1056e6bcu); f_10571cc0();
  /* 1056e6bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e6c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e6c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e6ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6cd push edx */
  push32((uint32_t)(EDX));
  /* 1056e6ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1056e6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1056e6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e6d6 call 0x10571cc0 */
  push32(0x1056e6dbu); f_10571cc0();
  /* 1056e6db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e6e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e6e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e6e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e6e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6ec push edx */
  push32((uint32_t)(EDX));
  /* 1056e6ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1056e6ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1056e6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e6f5 call 0x10571cc0 */
  push32(0x1056e6fau); f_10571cc0();
  /* 1056e6fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e6fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e700 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e702 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e708 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e70b push edx */
  push32((uint32_t)(EDX));
  /* 1056e70c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1056e70e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e711 push eax */
  push32((uint32_t)(EAX));
  /* 1056e712 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e714 call 0x10571cc0 */
  push32(0x1056e719u); f_10571cc0();
  /* 1056e719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e71c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e71f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e721 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e727 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e72a push edx */
  push32((uint32_t)(EDX));
  /* 1056e72b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1056e72d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e730 push eax */
  push32((uint32_t)(EAX));
  /* 1056e731 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e733 call 0x10571cc0 */
  push32(0x1056e738u); f_10571cc0();
  /* 1056e738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e73b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e73e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e746 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e749 push edx */
  push32((uint32_t)(EDX));
  /* 1056e74a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1056e74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e74f push eax */
  push32((uint32_t)(EAX));
  /* 1056e750 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e752 call 0x10571cc0 */
  push32(0x1056e757u); f_10571cc0();
  /* 1056e757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e75a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e75d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e75f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e765 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e768 push edx */
  push32((uint32_t)(EDX));
  /* 1056e769 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1056e76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e76e push eax */
  push32((uint32_t)(EAX));
  /* 1056e76f push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e771 call 0x10571cc0 */
  push32(0x1056e776u); f_10571cc0();
  /* 1056e776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e779 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e77c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e77e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e784 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e787 push edx */
  push32((uint32_t)(EDX));
  /* 1056e788 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1056e78a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e78d push eax */
  push32((uint32_t)(EAX));
  /* 1056e78e push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e790 call 0x10571cc0 */
  push32(0x1056e795u); f_10571cc0();
  /* 1056e795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e798 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e79b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e79d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e7a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e7a6 push edx */
  push32((uint32_t)(EDX));
  /* 1056e7a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1056e7a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e7ac push eax */
  push32((uint32_t)(EAX));
  /* 1056e7ad push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e7af call 0x10571cc0 */
  push32(0x1056e7b4u); f_10571cc0();
  /* 1056e7b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e7b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e7ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e7bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e7bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e7c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e7c8 push edx */
  push32((uint32_t)(EDX));
  /* 1056e7c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1056e7cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e7ce push eax */
  push32((uint32_t)(EAX));
  /* 1056e7cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e7d1 call 0x10571cc0 */
  push32(0x1056e7d6u); f_10571cc0();
  /* 1056e7d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e7d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e7dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e7de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e7e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e7e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e7ea push edx */
  push32((uint32_t)(EDX));
  /* 1056e7eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1056e7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e7f0 push eax */
  push32((uint32_t)(EAX));
  /* 1056e7f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e7f3 call 0x10571cc0 */
  push32(0x1056e7f8u); f_10571cc0();
  /* 1056e7f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e7fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e7fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e800 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e806 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e80c push edx */
  push32((uint32_t)(EDX));
  /* 1056e80d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1056e80f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e812 push eax */
  push32((uint32_t)(EAX));
  /* 1056e813 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e815 call 0x10571cc0 */
  push32(0x1056e81au); f_10571cc0();
  /* 1056e81a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e81d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e820 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e822 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e828 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e82e push edx */
  push32((uint32_t)(EDX));
  /* 1056e82f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1056e831 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e834 push eax */
  push32((uint32_t)(EAX));
  /* 1056e835 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e837 call 0x10571cc0 */
  push32(0x1056e83cu); f_10571cc0();
  /* 1056e83c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e83f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e842 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e844 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e84a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e850 push edx */
  push32((uint32_t)(EDX));
  /* 1056e851 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1056e853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e856 push eax */
  push32((uint32_t)(EAX));
  /* 1056e857 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e859 call 0x10571cc0 */
  push32(0x1056e85eu); f_10571cc0();
  /* 1056e85e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e861 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e866 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e86c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e872 push edx */
  push32((uint32_t)(EDX));
  /* 1056e873 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1056e875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e878 push eax */
  push32((uint32_t)(EAX));
  /* 1056e879 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e87b call 0x10571cc0 */
  push32(0x1056e880u); f_10571cc0();
  /* 1056e880 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e883 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e886 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e888 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e88b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e88e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e894 push edx */
  push32((uint32_t)(EDX));
  /* 1056e895 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1056e897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e89a push eax */
  push32((uint32_t)(EAX));
  /* 1056e89b push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e89d call 0x10571cc0 */
  push32(0x1056e8a2u); f_10571cc0();
  /* 1056e8a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e8a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e8a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e8aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e8ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e8b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e8b6 push edx */
  push32((uint32_t)(EDX));
  /* 1056e8b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1056e8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056e8bc push eax */
  push32((uint32_t)(EAX));
  /* 1056e8bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e8bf call 0x10571cc0 */
  push32(0x1056e8c4u); f_10571cc0();
  /* 1056e8c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e8c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e8ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e8cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e8cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e8d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e8d8 push edx */
  push32((uint32_t)(EDX));
  /* 1056e8d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1056e8db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e8de push eax */
  push32((uint32_t)(EAX));
  /* 1056e8df push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e8e1 call 0x10571cc0 */
  push32(0x1056e8e6u); f_10571cc0();
  /* 1056e8e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e8e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e8ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e8ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e8f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e8fa push edx */
  push32((uint32_t)(EDX));
  /* 1056e8fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1056e8fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e900 push eax */
  push32((uint32_t)(EAX));
  /* 1056e901 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e903 call 0x10571cc0 */
  push32(0x1056e908u); f_10571cc0();
  /* 1056e908 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e90b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e90e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e913 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e916 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e91c push edx */
  push32((uint32_t)(EDX));
  /* 1056e91d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1056e922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056e925 push eax */
  push32((uint32_t)(EAX));
  /* 1056e926 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056e928 call 0x10571cc0 */
  push32(0x1056e92du); f_10571cc0();
  /* 1056e92d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056e933 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056e935 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1056e938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1056e93b:;
  /* 1056e93b mov esp, ebp */
  ESP = (EBP);
  /* 1056e93d pop ebp */
  EBP = (pop32());
  /* 1056e93e ret  */
  ESPCHK(0x1056e3b0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1056e940 (779 bytes, 265 insns) */
void f_1056e940(void) {
  FTRACE(0x1056e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056e940 push ebp */
  push32((uint32_t)(EBP));
  /* 1056e941 mov ebp, esp */
  EBP = (ESP);
  /* 1056e943 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056e947 jne 0x1056e94e */
  if (!C.zf) goto L_1056e94e;
  /* 1056e949 jmp 0x1056ec49 */
  goto L_1056ec49;
L_1056e94e:;
  /* 1056e94e push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e953 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056e956 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e957 call 0x10564590 */
  push32(0x1056e95cu); f_10564590();
  /* 1056e95c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e95f push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e964 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056e967 push eax */
  push32((uint32_t)(EAX));
  /* 1056e968 call 0x10564590 */
  push32(0x1056e96du); f_10564590();
  /* 1056e96d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e970 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e975 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056e978 push edx */
  push32((uint32_t)(EDX));
  /* 1056e979 call 0x10564590 */
  push32(0x1056e97eu); f_10564590();
  /* 1056e97e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e981 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e986 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056e989 push ecx */
  push32((uint32_t)(ECX));
  /* 1056e98a call 0x10564590 */
  push32(0x1056e98fu); f_10564590();
  /* 1056e98f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e992 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e997 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1056e99a push eax */
  push32((uint32_t)(EAX));
  /* 1056e99b call 0x10564590 */
  push32(0x1056e9a0u); f_10564590();
  /* 1056e9a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e9a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e9a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e9a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1056e9ab push edx */
  push32((uint32_t)(EDX));
  /* 1056e9ac call 0x10564590 */
  push32(0x1056e9b1u); f_10564590();
  /* 1056e9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e9b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e9b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056e9bb push ecx */
  push32((uint32_t)(ECX));
  /* 1056e9bc call 0x10564590 */
  push32(0x1056e9c1u); f_10564590();
  /* 1056e9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e9c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e9c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e9c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1056e9cc push eax */
  push32((uint32_t)(EAX));
  /* 1056e9cd call 0x10564590 */
  push32(0x1056e9d2u); f_10564590();
  /* 1056e9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e9d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e9da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1056e9dd push edx */
  push32((uint32_t)(EDX));
  /* 1056e9de call 0x10564590 */
  push32(0x1056e9e3u); f_10564590();
  /* 1056e9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e9e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e9eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1056e9ee push ecx */
  push32((uint32_t)(ECX));
  /* 1056e9ef call 0x10564590 */
  push32(0x1056e9f4u); f_10564590();
  /* 1056e9f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056e9f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056e9f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056e9fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1056e9ff push eax */
  push32((uint32_t)(EAX));
  /* 1056ea00 call 0x10564590 */
  push32(0x1056ea05u); f_10564590();
  /* 1056ea05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea08 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea0d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1056ea10 push edx */
  push32((uint32_t)(EDX));
  /* 1056ea11 call 0x10564590 */
  push32(0x1056ea16u); f_10564590();
  /* 1056ea16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea1e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1056ea21 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ea22 call 0x10564590 */
  push32(0x1056ea27u); f_10564590();
  /* 1056ea27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea2f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1056ea32 push eax */
  push32((uint32_t)(EAX));
  /* 1056ea33 call 0x10564590 */
  push32(0x1056ea38u); f_10564590();
  /* 1056ea38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea3b push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea40 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1056ea43 push edx */
  push32((uint32_t)(EDX));
  /* 1056ea44 call 0x10564590 */
  push32(0x1056ea49u); f_10564590();
  /* 1056ea49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea4c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea51 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1056ea54 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ea55 call 0x10564590 */
  push32(0x1056ea5au); f_10564590();
  /* 1056ea5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea62 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1056ea65 push eax */
  push32((uint32_t)(EAX));
  /* 1056ea66 call 0x10564590 */
  push32(0x1056ea6bu); f_10564590();
  /* 1056ea6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea6e push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea73 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1056ea76 push edx */
  push32((uint32_t)(EDX));
  /* 1056ea77 call 0x10564590 */
  push32(0x1056ea7cu); f_10564590();
  /* 1056ea7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea84 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1056ea87 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ea88 call 0x10564590 */
  push32(0x1056ea8du); f_10564590();
  /* 1056ea8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ea90 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ea92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ea95 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1056ea98 push eax */
  push32((uint32_t)(EAX));
  /* 1056ea99 call 0x10564590 */
  push32(0x1056ea9eu); f_10564590();
  /* 1056ea9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eaa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eaa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eaa6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1056eaa9 push edx */
  push32((uint32_t)(EDX));
  /* 1056eaaa call 0x10564590 */
  push32(0x1056eaafu); f_10564590();
  /* 1056eaaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eab7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1056eaba push ecx */
  push32((uint32_t)(ECX));
  /* 1056eabb call 0x10564590 */
  push32(0x1056eac0u); f_10564590();
  /* 1056eac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eac8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1056eacb push eax */
  push32((uint32_t)(EAX));
  /* 1056eacc call 0x10564590 */
  push32(0x1056ead1u); f_10564590();
  /* 1056ead1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ead4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ead6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ead9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1056eadc push edx */
  push32((uint32_t)(EDX));
  /* 1056eadd call 0x10564590 */
  push32(0x1056eae2u); f_10564590();
  /* 1056eae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eae7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eaea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1056eaed push ecx */
  push32((uint32_t)(ECX));
  /* 1056eaee call 0x10564590 */
  push32(0x1056eaf3u); f_10564590();
  /* 1056eaf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eaf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eaf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eafb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1056eafe push eax */
  push32((uint32_t)(EAX));
  /* 1056eaff call 0x10564590 */
  push32(0x1056eb04u); f_10564590();
  /* 1056eb04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb0c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1056eb0f push edx */
  push32((uint32_t)(EDX));
  /* 1056eb10 call 0x10564590 */
  push32(0x1056eb15u); f_10564590();
  /* 1056eb15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb1d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1056eb20 push ecx */
  push32((uint32_t)(ECX));
  /* 1056eb21 call 0x10564590 */
  push32(0x1056eb26u); f_10564590();
  /* 1056eb26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb2e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1056eb31 push eax */
  push32((uint32_t)(EAX));
  /* 1056eb32 call 0x10564590 */
  push32(0x1056eb37u); f_10564590();
  /* 1056eb37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb3f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1056eb42 push edx */
  push32((uint32_t)(EDX));
  /* 1056eb43 call 0x10564590 */
  push32(0x1056eb48u); f_10564590();
  /* 1056eb48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb50 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1056eb53 push ecx */
  push32((uint32_t)(ECX));
  /* 1056eb54 call 0x10564590 */
  push32(0x1056eb59u); f_10564590();
  /* 1056eb59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb61 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1056eb64 push eax */
  push32((uint32_t)(EAX));
  /* 1056eb65 call 0x10564590 */
  push32(0x1056eb6au); f_10564590();
  /* 1056eb6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb72 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1056eb78 push edx */
  push32((uint32_t)(EDX));
  /* 1056eb79 call 0x10564590 */
  push32(0x1056eb7eu); f_10564590();
  /* 1056eb7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb81 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb86 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1056eb8c push ecx */
  push32((uint32_t)(ECX));
  /* 1056eb8d call 0x10564590 */
  push32(0x1056eb92u); f_10564590();
  /* 1056eb92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eb95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eb97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056eb9a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1056eba0 push eax */
  push32((uint32_t)(EAX));
  /* 1056eba1 call 0x10564590 */
  push32(0x1056eba6u); f_10564590();
  /* 1056eba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ebab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ebae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1056ebb4 push edx */
  push32((uint32_t)(EDX));
  /* 1056ebb5 call 0x10564590 */
  push32(0x1056ebbau); f_10564590();
  /* 1056ebba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ebbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ebbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ebc2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1056ebc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ebc9 call 0x10564590 */
  push32(0x1056ebceu); f_10564590();
  /* 1056ebce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ebd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ebd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ebd6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1056ebdc push eax */
  push32((uint32_t)(EAX));
  /* 1056ebdd call 0x10564590 */
  push32(0x1056ebe2u); f_10564590();
  /* 1056ebe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ebe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ebe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ebea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1056ebf0 push edx */
  push32((uint32_t)(EDX));
  /* 1056ebf1 call 0x10564590 */
  push32(0x1056ebf6u); f_10564590();
  /* 1056ebf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ebf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ebfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ebfe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1056ec04 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ec05 call 0x10564590 */
  push32(0x1056ec0au); f_10564590();
  /* 1056ec0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ec0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ec0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ec12 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1056ec18 push eax */
  push32((uint32_t)(EAX));
  /* 1056ec19 call 0x10564590 */
  push32(0x1056ec1eu); f_10564590();
  /* 1056ec1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ec21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ec23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ec26 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1056ec2c push edx */
  push32((uint32_t)(EDX));
  /* 1056ec2d call 0x10564590 */
  push32(0x1056ec32u); f_10564590();
  /* 1056ec32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ec35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ec37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ec3a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1056ec40 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ec41 call 0x10564590 */
  push32(0x1056ec46u); f_10564590();
  /* 1056ec46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056ec49:;
  /* 1056ec49 pop ebp */
  EBP = (pop32());
  /* 1056ec4a ret  */
  ESPCHK(0x1056e940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec50 @ 0x1056ec50 (678 bytes, 180 insns) */
void f_1056ec50(void) {
  FTRACE(0x1056ec50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ec50 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ec51 mov ebp, esp */
  EBP = (ESP);
  /* 1056ec53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ec56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1056ec5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056ec5f mov ax, word ptr [0x1058f77a] */
  AX = (r16((uint32_t)(0x1058f77a)));
  /* 1056ec65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056ec68 cmp dword ptr [0x1058f720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ec6f je 0x1056edca */
  if (C.zf) goto L_1056edca;
  /* 1056ec75 push 0x1058f748 */
  push32((uint32_t)(0x1058f748u));
  /* 1056ec7a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1056ec7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ec7f push ecx */
  push32((uint32_t)(ECX));
  /* 1056ec80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056ec82 call 0x10571cc0 */
  push32(0x1056ec87u); f_10571cc0();
  /* 1056ec87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ec8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056ec8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1056ec8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1056ec92 push 0x1058f74c */
  push32((uint32_t)(0x1058f74cu));
  /* 1056ec97 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1056ec99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ec9c push eax */
  push32((uint32_t)(EAX));
  /* 1056ec9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1056ec9f call 0x10571cc0 */
  push32(0x1056eca4u); f_10571cc0();
  /* 1056eca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056ecaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056ecac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056ecaf push 0x1058f750 */
  push32((uint32_t)(0x1058f750u));
  /* 1056ecb4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1056ecb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ecb9 push edx */
  push32((uint32_t)(EDX));
  /* 1056ecba push 1 */
  push32((uint32_t)(0x1u));
  /* 1056ecbc call 0x10571cc0 */
  push32(0x1056ecc1u); f_10571cc0();
  /* 1056ecc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ecc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056ecc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056ecc9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056eccc mov edx, dword ptr [0x1058f750] */
  EDX = (r32((uint32_t)(0x1058f750)));
  /* 1056ecd2 push edx */
  push32((uint32_t)(EDX));
  /* 1056ecd3 call 0x1056ef00 */
  push32(0x1056ecd8u); f_1056ef00();
  /* 1056ecd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ecdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ecdf je 0x1056ed39 */
  if (C.zf) goto L_1056ed39;
  /* 1056ece1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ece3 mov eax, dword ptr [0x1058f748] */
  EAX = (r32((uint32_t)(0x1058f748)));
  /* 1056ece8 push eax */
  push32((uint32_t)(EAX));
  /* 1056ece9 call 0x10564590 */
  push32(0x1056eceeu); f_10564590();
  /* 1056ecee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ecf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ecf3 mov ecx, dword ptr [0x1058f74c] */
  ECX = (r32((uint32_t)(0x1058f74c)));
  /* 1056ecf9 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ecfa call 0x10564590 */
  push32(0x1056ecffu); f_10564590();
  /* 1056ecff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ed02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ed04 mov edx, dword ptr [0x1058f750] */
  EDX = (r32((uint32_t)(0x1058f750)));
  /* 1056ed0a push edx */
  push32((uint32_t)(EDX));
  /* 1056ed0b call 0x10564590 */
  push32(0x1056ed10u); f_10564590();
  /* 1056ed10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ed13 mov dword ptr [0x1058f748], 0 */
  w32((uint32_t)(0x1058f748), (0x0u));
  /* 1056ed1d mov dword ptr [0x1058f74c], 0 */
  w32((uint32_t)(0x1058f74c), (0x0u));
  /* 1056ed27 mov dword ptr [0x1058f750], 0 */
  w32((uint32_t)(0x1058f750), (0x0u));
  /* 1056ed31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056ed34 jmp 0x1056eef2 */
  goto L_1056eef2;
L_1056ed39:;
  /* 1056ed39 mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ed3e cmp dword ptr [eax], 0x1058ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1058ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ed44 je 0x1056ed80 */
  if (C.zf) goto L_1056ed80;
  /* 1056ed46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ed48 mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ed4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056ed50 push edx */
  push32((uint32_t)(EDX));
  /* 1056ed51 call 0x10564590 */
  push32(0x1056ed56u); f_10564590();
  /* 1056ed56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ed59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ed5b mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ed60 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056ed63 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ed64 call 0x10564590 */
  push32(0x1056ed69u); f_10564590();
  /* 1056ed69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ed6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ed6e mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ed74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056ed77 push eax */
  push32((uint32_t)(EAX));
  /* 1056ed78 call 0x10564590 */
  push32(0x1056ed7du); f_10564590();
  /* 1056ed7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056ed80:;
  /* 1056ed80 mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ed86 mov edx, dword ptr [0x1058f748] */
  EDX = (r32((uint32_t)(0x1058f748)));
  /* 1056ed8c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1056ed8e mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ed93 mov ecx, dword ptr [0x1058f74c] */
  ECX = (r32((uint32_t)(0x1058f74c)));
  /* 1056ed99 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1056ed9c mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056eda2 mov eax, dword ptr [0x1058f750] */
  EAX = (r32((uint32_t)(0x1058f750)));
  /* 1056eda7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1056edaa mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056edb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056edb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056edb4 mov byte ptr [0x1058dea8], al */
  w8((uint32_t)(0x1058dea8), (AL));
  /* 1056edb9 mov dword ptr [0x1058deac], 1 */
  w32((uint32_t)(0x1058deac), (0x1u));
  /* 1056edc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056edc5 jmp 0x1056eef2 */
  goto L_1056eef2;
L_1056edca:;
  /* 1056edca push 2 */
  push32((uint32_t)(0x2u));
  /* 1056edcc mov ecx, dword ptr [0x1058f748] */
  ECX = (r32((uint32_t)(0x1058f748)));
  /* 1056edd2 push ecx */
  push32((uint32_t)(ECX));
  /* 1056edd3 call 0x10564590 */
  push32(0x1056edd8u); f_10564590();
  /* 1056edd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eddb push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eddd mov edx, dword ptr [0x1058f74c] */
  EDX = (r32((uint32_t)(0x1058f74c)));
  /* 1056ede3 push edx */
  push32((uint32_t)(EDX));
  /* 1056ede4 call 0x10564590 */
  push32(0x1056ede9u); f_10564590();
  /* 1056ede9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056edec push 2 */
  push32((uint32_t)(0x2u));
  /* 1056edee mov eax, dword ptr [0x1058f750] */
  EAX = (r32((uint32_t)(0x1058f750)));
  /* 1056edf3 push eax */
  push32((uint32_t)(EAX));
  /* 1056edf4 call 0x10564590 */
  push32(0x1056edf9u); f_10564590();
  /* 1056edf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056edfc mov dword ptr [0x1058f748], 0 */
  w32((uint32_t)(0x1058f748), (0x0u));
  /* 1056ee06 mov dword ptr [0x1058f74c], 0 */
  w32((uint32_t)(0x1058f74c), (0x0u));
  /* 1056ee10 mov dword ptr [0x1058f750], 0 */
  w32((uint32_t)(0x1058f750), (0x0u));
  /* 1056ee1a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1056ee1f push 0x1058b1dc */
  push32((uint32_t)(0x1058b1dcu));
  /* 1056ee24 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ee26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ee28 call 0x10563b00 */
  push32(0x1056ee2du); f_10563b00();
  /* 1056ee2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ee30 mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ee36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1056ee38 mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ee3e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ee41 jne 0x1056ee4b */
  if (!C.zf) goto L_1056ee4b;
  /* 1056ee43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056ee46 jmp 0x1056eef2 */
  goto L_1056eef2;
L_1056ee4b:;
  /* 1056ee4b push 0x1058b1ac */
  push32((uint32_t)(0x1058b1acu));
  /* 1056ee50 mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ee55 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1056ee57 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ee58 call 0x10566ab0 */
  push32(0x1056ee5du); f_10566ab0();
  /* 1056ee5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ee60 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1056ee65 push 0x1058b1dc */
  push32((uint32_t)(0x1058b1dcu));
  /* 1056ee6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ee6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ee6e call 0x10563b00 */
  push32(0x1056ee73u); f_10563b00();
  /* 1056ee73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ee76 mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ee7c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1056ee7f mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ee84 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ee88 jne 0x1056ee8f */
  if (!C.zf) goto L_1056ee8f;
  /* 1056ee8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056ee8d jmp 0x1056eef2 */
  goto L_1056eef2;
L_1056ee8f:;
  /* 1056ee8f mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056ee95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056ee98 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1056ee9b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1056eea0 push 0x1058b1dc */
  push32((uint32_t)(0x1058b1dcu));
  /* 1056eea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056eea9 call 0x10563b00 */
  push32(0x1056eeaeu); f_10563b00();
  /* 1056eeae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056eeb1 mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056eeb7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1056eeba mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056eec0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056eec4 jne 0x1056eecb */
  if (!C.zf) goto L_1056eecb;
  /* 1056eec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056eec9 jmp 0x1056eef2 */
  goto L_1056eef2;
L_1056eecb:;
  /* 1056eecb mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056eed0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1056eed3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1056eed6 mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056eedc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1056eede mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1056eee0 mov byte ptr [0x1058dea8], cl */
  w8((uint32_t)(0x1058dea8), (CL));
  /* 1056eee6 mov dword ptr [0x1058deac], 1 */
  w32((uint32_t)(0x1058deac), (0x1u));
  /* 1056eef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056eef2:;
  /* 1056eef2 mov esp, ebp */
  ESP = (EBP);
  /* 1056eef4 pop ebp */
  EBP = (pop32());
  /* 1056eef5 ret  */
  ESPCHK(0x1056ec50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1056ef00 (125 bytes, 49 insns) */
void f_1056ef00(void) {
  FTRACE(0x1056ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1056ef03 push ecx */
  push32((uint32_t)(ECX));
L_1056ef04:;
  /* 1056ef04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056ef0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056ef0c je 0x1056ef79 */
  if (C.zf) goto L_1056ef79;
  /* 1056ef0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056ef14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ef17 jl 0x1056ef3d */
  if ((C.sf!=C.of)) goto L_1056ef3d;
  /* 1056ef19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056ef1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ef22 jg 0x1056ef3d */
  if ((!C.zf&&C.sf==C.of)) goto L_1056ef3d;
  /* 1056ef24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056ef2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ef2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1056ef32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ef38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1056ef3b jmp 0x1056ef77 */
  goto L_1056ef77;
L_1056ef3d:;
  /* 1056ef3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056ef43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ef46 jne 0x1056ef6e */
  if (!C.zf) goto L_1056ef6e;
  /* 1056ef48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056ef4e:;
  /* 1056ef4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ef51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ef54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1056ef57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1056ef59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ef5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ef5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056ef62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ef65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056ef68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056ef6a jne 0x1056ef4e */
  if (!C.zf) goto L_1056ef4e;
  /* 1056ef6c jmp 0x1056ef77 */
  goto L_1056ef77;
L_1056ef6e:;
  /* 1056ef6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ef71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ef74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1056ef77:;
  /* 1056ef77 jmp 0x1056ef04 */
  goto L_1056ef04;
L_1056ef79:;
  /* 1056ef79 mov esp, ebp */
  ESP = (EBP);
  /* 1056ef7b pop ebp */
  EBP = (pop32());
  /* 1056ef7c ret  */
  ESPCHK(0x1056ef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x1056ef80 (304 bytes, 85 insns) */
void f_1056ef80(void) {
  FTRACE(0x1056ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1056ef83 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ef84 cmp dword ptr [0x1058f71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ef8b je 0x1056f04c */
  if (C.zf) goto L_1056f04c;
  /* 1056ef91 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1056ef93 push 0x1058b1e8 */
  push32((uint32_t)(0x1058b1e8u));
  /* 1056ef98 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056ef9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1056ef9c push 1 */
  push32((uint32_t)(0x1u));
  /* 1056ef9e call 0x10563f10 */
  push32(0x1056efa3u); f_10563f10();
  /* 1056efa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056efa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056efa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056efad jne 0x1056efb9 */
  if (!C.zf) goto L_1056efb9;
  /* 1056efaf mov eax, 1 */
  EAX = (0x1u);
  /* 1056efb4 jmp 0x1056f0ac */
  goto L_1056f0ac;
L_1056efb9:;
  /* 1056efb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056efbc push eax */
  push32((uint32_t)(EAX));
  /* 1056efbd call 0x1056f0b0 */
  push32(0x1056efc2u); f_1056f0b0();
  /* 1056efc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056efc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056efc7 je 0x1056efed */
  if (C.zf) goto L_1056efed;
  /* 1056efc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056efcc push ecx */
  push32((uint32_t)(ECX));
  /* 1056efcd call 0x1056f340 */
  push32(0x1056efd2u); f_1056f340();
  /* 1056efd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056efd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056efd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056efda push edx */
  push32((uint32_t)(EDX));
  /* 1056efdb call 0x10564590 */
  push32(0x1056efe0u); f_10564590();
  /* 1056efe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056efe3 mov eax, 1 */
  EAX = (0x1u);
  /* 1056efe8 jmp 0x1056f0ac */
  goto L_1056f0ac;
L_1056efed:;
  /* 1056efed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056eff0 mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056eff6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056eff8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1056effa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056effd mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056f003 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1056f006 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1056f009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f00c mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056f012 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1056f015 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1056f018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f01b mov dword ptr [0x1058ed88], eax */
  w32((uint32_t)(0x1058ed88), (EAX));
  /* 1056f020 mov ecx, dword ptr [0x1058f754] */
  ECX = (r32((uint32_t)(0x1058f754)));
  /* 1056f026 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f027 call 0x1056f340 */
  push32(0x1056f02cu); f_1056f340();
  /* 1056f02c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f02f push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f031 mov edx, dword ptr [0x1058f754] */
  EDX = (r32((uint32_t)(0x1058f754)));
  /* 1056f037 push edx */
  push32((uint32_t)(EDX));
  /* 1056f038 call 0x10564590 */
  push32(0x1056f03du); f_10564590();
  /* 1056f03d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f043 mov dword ptr [0x1058f754], eax */
  w32((uint32_t)(0x1058f754), (EAX));
  /* 1056f048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f04a jmp 0x1056f0ac */
  goto L_1056f0ac;
L_1056f04c:;
  /* 1056f04c mov ecx, dword ptr [0x1058ed88] */
  ECX = (r32((uint32_t)(0x1058ed88)));
  /* 1056f052 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056f054 mov dword ptr [0x1058ed58], edx */
  w32((uint32_t)(0x1058ed58), (EDX));
  /* 1056f05a mov eax, dword ptr [0x1058ed88] */
  EAX = (r32((uint32_t)(0x1058ed88)));
  /* 1056f05f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1056f062 mov dword ptr [0x1058ed5c], ecx */
  w32((uint32_t)(0x1058ed5c), (ECX));
  /* 1056f068 mov edx, dword ptr [0x1058ed88] */
  EDX = (r32((uint32_t)(0x1058ed88)));
  /* 1056f06e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1056f071 mov dword ptr [0x1058ed60], eax */
  w32((uint32_t)(0x1058ed60), (EAX));
  /* 1056f076 mov dword ptr [0x1058ed88], 0x1058ed58 */
  w32((uint32_t)(0x1058ed88), (0x1058ed58u));
  /* 1056f080 mov ecx, dword ptr [0x1058f754] */
  ECX = (r32((uint32_t)(0x1058f754)));
  /* 1056f086 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f087 call 0x1056f340 */
  push32(0x1056f08cu); f_1056f340();
  /* 1056f08c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f08f push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f091 mov edx, dword ptr [0x1058f754] */
  EDX = (r32((uint32_t)(0x1058f754)));
  /* 1056f097 push edx */
  push32((uint32_t)(EDX));
  /* 1056f098 call 0x10564590 */
  push32(0x1056f09du); f_10564590();
  /* 1056f09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f0a0 mov dword ptr [0x1058f754], 0 */
  w32((uint32_t)(0x1058f754), (0x0u));
  /* 1056f0aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056f0ac:;
  /* 1056f0ac mov esp, ebp */
  ESP = (EBP);
  /* 1056f0ae pop ebp */
  EBP = (pop32());
  /* 1056f0af ret  */
  ESPCHK(0x1056ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x1056f0b0 (525 bytes, 200 insns) */
void f_1056f0b0(void) {
  FTRACE(0x1056f0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1056f0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056f0b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1056f0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f0bf mov ax, word ptr [0x1058f774] */
  AX = (r16((uint32_t)(0x1058f774)));
  /* 1056f0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056f0c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f0cc jne 0x1056f0d6 */
  if (!C.zf) goto L_1056f0d6;
  /* 1056f0ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056f0d1 jmp 0x1056f2b9 */
  goto L_1056f2b9;
L_1056f0d6:;
  /* 1056f0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f0d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f0dc push ecx */
  push32((uint32_t)(ECX));
  /* 1056f0dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1056f0df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f0e2 push edx */
  push32((uint32_t)(EDX));
  /* 1056f0e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f0e5 call 0x10571cc0 */
  push32(0x1056f0eau); f_10571cc0();
  /* 1056f0ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f0ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f0f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f0f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f0f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f0f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f0fb push edx */
  push32((uint32_t)(EDX));
  /* 1056f0fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1056f0fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f101 push eax */
  push32((uint32_t)(EAX));
  /* 1056f102 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f104 call 0x10571cc0 */
  push32(0x1056f109u); f_10571cc0();
  /* 1056f109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f10c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f10f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f111 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f117 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f11a push edx */
  push32((uint32_t)(EDX));
  /* 1056f11b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1056f11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f120 push eax */
  push32((uint32_t)(EAX));
  /* 1056f121 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f123 call 0x10571cc0 */
  push32(0x1056f128u); f_10571cc0();
  /* 1056f128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f12b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f12e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f130 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f136 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f139 push edx */
  push32((uint32_t)(EDX));
  /* 1056f13a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1056f13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f13f push eax */
  push32((uint32_t)(EAX));
  /* 1056f140 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f142 call 0x10571cc0 */
  push32(0x1056f147u); f_10571cc0();
  /* 1056f147 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f14d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f14f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f152 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f155 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f158 push edx */
  push32((uint32_t)(EDX));
  /* 1056f159 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1056f15b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f15e push eax */
  push32((uint32_t)(EAX));
  /* 1056f15f push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f161 call 0x10571cc0 */
  push32(0x1056f166u); f_10571cc0();
  /* 1056f166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f16c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f16e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f174 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1056f177 push eax */
  push32((uint32_t)(EAX));
  /* 1056f178 call 0x1056f2c0 */
  push32(0x1056f17du); f_1056f2c0();
  /* 1056f17d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f183 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f186 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f187 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1056f189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f18c push edx */
  push32((uint32_t)(EDX));
  /* 1056f18d push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f18f call 0x10571cc0 */
  push32(0x1056f194u); f_10571cc0();
  /* 1056f194 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f197 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f19a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f19f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f1a2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f1a5 push edx */
  push32((uint32_t)(EDX));
  /* 1056f1a6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1056f1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f1ab push eax */
  push32((uint32_t)(EAX));
  /* 1056f1ac push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f1ae call 0x10571cc0 */
  push32(0x1056f1b3u); f_10571cc0();
  /* 1056f1b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f1b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f1be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f1c1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f1c4 push edx */
  push32((uint32_t)(EDX));
  /* 1056f1c5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1056f1c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f1ca push eax */
  push32((uint32_t)(EAX));
  /* 1056f1cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f1cd call 0x10571cc0 */
  push32(0x1056f1d2u); f_10571cc0();
  /* 1056f1d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f1d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f1d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f1da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f1dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f1e0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f1e3 push edx */
  push32((uint32_t)(EDX));
  /* 1056f1e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1056f1e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f1e9 push eax */
  push32((uint32_t)(EAX));
  /* 1056f1ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f1ec call 0x10571cc0 */
  push32(0x1056f1f1u); f_10571cc0();
  /* 1056f1f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f1f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f1f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f1f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f1fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f1ff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f202 push edx */
  push32((uint32_t)(EDX));
  /* 1056f203 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1056f205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f208 push eax */
  push32((uint32_t)(EAX));
  /* 1056f209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f20b call 0x10571cc0 */
  push32(0x1056f210u); f_10571cc0();
  /* 1056f210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f213 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f216 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f218 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f21b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f21e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f221 push edx */
  push32((uint32_t)(EDX));
  /* 1056f222 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1056f224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f227 push eax */
  push32((uint32_t)(EAX));
  /* 1056f228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f22a call 0x10571cc0 */
  push32(0x1056f22fu); f_10571cc0();
  /* 1056f22f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f235 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f237 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f23a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f23d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f240 push edx */
  push32((uint32_t)(EDX));
  /* 1056f241 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1056f243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f246 push eax */
  push32((uint32_t)(EAX));
  /* 1056f247 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f249 call 0x10571cc0 */
  push32(0x1056f24eu); f_10571cc0();
  /* 1056f24e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f251 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f254 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f256 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f25c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f25f push edx */
  push32((uint32_t)(EDX));
  /* 1056f260 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1056f262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f265 push eax */
  push32((uint32_t)(EAX));
  /* 1056f266 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f268 call 0x10571cc0 */
  push32(0x1056f26du); f_10571cc0();
  /* 1056f26d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f270 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f273 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f275 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f27b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f27e push edx */
  push32((uint32_t)(EDX));
  /* 1056f27f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1056f281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f284 push eax */
  push32((uint32_t)(EAX));
  /* 1056f285 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f287 call 0x10571cc0 */
  push32(0x1056f28cu); f_10571cc0();
  /* 1056f28c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f28f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f292 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f294 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f29a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f29d push edx */
  push32((uint32_t)(EDX));
  /* 1056f29e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1056f2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f2a3 push eax */
  push32((uint32_t)(EAX));
  /* 1056f2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f2a6 call 0x10571cc0 */
  push32(0x1056f2abu); f_10571cc0();
  /* 1056f2ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f2ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f2b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f2b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1056f2b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1056f2b9:;
  /* 1056f2b9 mov esp, ebp */
  ESP = (EBP);
  /* 1056f2bb pop ebp */
  EBP = (pop32());
  /* 1056f2bc ret  */
  ESPCHK(0x1056f0b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1056f2c0 (125 bytes, 49 insns) */
void f_1056f2c0(void) {
  FTRACE(0x1056f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1056f2c3 push ecx */
  push32((uint32_t)(ECX));
L_1056f2c4:;
  /* 1056f2c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f2c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056f2ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056f2cc je 0x1056f339 */
  if (C.zf) goto L_1056f339;
  /* 1056f2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f2d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056f2d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f2d7 jl 0x1056f2fd */
  if ((C.sf!=C.of)) goto L_1056f2fd;
  /* 1056f2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f2dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056f2df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f2e2 jg 0x1056f2fd */
  if ((!C.zf&&C.sf==C.of)) goto L_1056f2fd;
  /* 1056f2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f2e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056f2ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056f2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f2f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1056f2f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f2f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f2f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1056f2fb jmp 0x1056f337 */
  goto L_1056f337;
L_1056f2fd:;
  /* 1056f2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f300 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056f303 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f306 jne 0x1056f32e */
  if (!C.zf) goto L_1056f32e;
  /* 1056f308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f30b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056f30e:;
  /* 1056f30e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f314 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1056f317 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1056f319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f31c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f31f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1056f322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056f325 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056f328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f32a jne 0x1056f30e */
  if (!C.zf) goto L_1056f30e;
  /* 1056f32c jmp 0x1056f337 */
  goto L_1056f337;
L_1056f32e:;
  /* 1056f32e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f334 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1056f337:;
  /* 1056f337 jmp 0x1056f2c4 */
  goto L_1056f2c4;
L_1056f339:;
  /* 1056f339 mov esp, ebp */
  ESP = (EBP);
  /* 1056f33b pop ebp */
  EBP = (pop32());
  /* 1056f33c ret  */
  ESPCHK(0x1056f2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x1056f340 (147 bytes, 52 insns) */
void f_1056f340(void) {
  FTRACE(0x1056f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f340 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f341 mov ebp, esp */
  EBP = (ESP);
  /* 1056f343 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f347 jne 0x1056f34e */
  if (!C.zf) goto L_1056f34e;
  /* 1056f349 jmp 0x1056f3d1 */
  goto L_1056f3d1;
L_1056f34e:;
  /* 1056f34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f351 cmp dword ptr [eax + 0xc], 0x1058f7b0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1058f7b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f358 je 0x1056f3d1 */
  if (C.zf) goto L_1056f3d1;
  /* 1056f35a push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f35c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f35f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1056f362 push edx */
  push32((uint32_t)(EDX));
  /* 1056f363 call 0x10564590 */
  push32(0x1056f368u); f_10564590();
  /* 1056f368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f36b push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f36d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f370 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1056f373 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f374 call 0x10564590 */
  push32(0x1056f379u); f_10564590();
  /* 1056f379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f37c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f381 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1056f384 push eax */
  push32((uint32_t)(EAX));
  /* 1056f385 call 0x10564590 */
  push32(0x1056f38au); f_10564590();
  /* 1056f38a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f38d push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f38f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f392 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1056f395 push edx */
  push32((uint32_t)(EDX));
  /* 1056f396 call 0x10564590 */
  push32(0x1056f39bu); f_10564590();
  /* 1056f39b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f39e push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f3a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f3a3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1056f3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f3a7 call 0x10564590 */
  push32(0x1056f3acu); f_10564590();
  /* 1056f3ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f3af push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f3b4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1056f3b7 push eax */
  push32((uint32_t)(EAX));
  /* 1056f3b8 call 0x10564590 */
  push32(0x1056f3bdu); f_10564590();
  /* 1056f3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f3c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f3c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f3c5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1056f3c8 push edx */
  push32((uint32_t)(EDX));
  /* 1056f3c9 call 0x10564590 */
  push32(0x1056f3ceu); f_10564590();
  /* 1056f3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056f3d1:;
  /* 1056f3d1 pop ebp */
  EBP = (pop32());
  /* 1056f3d2 ret  */
  ESPCHK(0x1056f340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3e0 @ 0x1056f3e0 (928 bytes, 284 insns) */
void f_1056f3e0(void) {
  FTRACE(0x1056f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056f3e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056f3e6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1056f3ed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1056f3f4 cmp dword ptr [0x1058f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f3fb je 0x1056f731 */
  if (C.zf) goto L_1056f731;
  /* 1056f401 cmp dword ptr [0x1058f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f408 jne 0x1056f430 */
  if (!C.zf) goto L_1056f430;
  /* 1056f40a push 0x1058f728 */
  push32((uint32_t)(0x1058f728u));
  /* 1056f40f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1056f414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f416 mov ax, word ptr [0x1058f76c] */
  AX = (r16((uint32_t)(0x1058f76c)));
  /* 1056f41c push eax */
  push32((uint32_t)(EAX));
  /* 1056f41d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f41f call 0x10571cc0 */
  push32(0x1056f424u); f_10571cc0();
  /* 1056f424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f429 je 0x1056f430 */
  if (C.zf) goto L_1056f430;
  /* 1056f42b jmp 0x1056f6f2 */
  goto L_1056f6f2;
L_1056f430:;
  /* 1056f430 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1056f432 push 0x1058b1f4 */
  push32((uint32_t)(0x1058b1f4u));
  /* 1056f437 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f439 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1056f43e call 0x10563b00 */
  push32(0x1056f443u); f_10563b00();
  /* 1056f443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f446 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1056f449 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1056f44b push 0x1058b1f4 */
  push32((uint32_t)(0x1058b1f4u));
  /* 1056f450 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f452 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1056f457 call 0x10563b00 */
  push32(0x1056f45cu); f_10563b00();
  /* 1056f45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f45f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1056f462 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1056f464 push 0x1058b1f4 */
  push32((uint32_t)(0x1058b1f4u));
  /* 1056f469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f46b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1056f470 call 0x10563b00 */
  push32(0x1056f475u); f_10563b00();
  /* 1056f475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f478 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1056f47b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1056f47d push 0x1058b1f4 */
  push32((uint32_t)(0x1058b1f4u));
  /* 1056f482 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f484 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1056f489 call 0x10563b00 */
  push32(0x1056f48eu); f_10563b00();
  /* 1056f48e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f491 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1056f494 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f498 je 0x1056f4ac */
  if (C.zf) goto L_1056f4ac;
  /* 1056f49a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f49e je 0x1056f4ac */
  if (C.zf) goto L_1056f4ac;
  /* 1056f4a0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f4a4 je 0x1056f4ac */
  if (C.zf) goto L_1056f4ac;
  /* 1056f4a6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f4aa jne 0x1056f4b1 */
  if (!C.zf) goto L_1056f4b1;
L_1056f4ac:;
  /* 1056f4ac jmp 0x1056f6f2 */
  goto L_1056f6f2;
L_1056f4b1:;
  /* 1056f4b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056f4b4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1056f4b7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1056f4be jmp 0x1056f4c9 */
  goto L_1056f4c9;
L_1056f4c0:;
  /* 1056f4c0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056f4c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f4c6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1056f4c9:;
  /* 1056f4c9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f4d0 jge 0x1056f4e5 */
  if ((C.sf==C.of)) goto L_1056f4e5;
  /* 1056f4d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f4d5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1056f4d8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1056f4da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f4dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f4e0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1056f4e3 jmp 0x1056f4c0 */
  goto L_1056f4c0;
L_1056f4e5:;
  /* 1056f4e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1056f4e8 push eax */
  push32((uint32_t)(EAX));
  /* 1056f4e9 mov ecx, dword ptr [0x1058f728] */
  ECX = (r32((uint32_t)(0x1058f728)));
  /* 1056f4ef push ecx */
  push32((uint32_t)(ECX));
  /* 1056f4f0 call dword ptr [0x10592328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592328))), 0x1056f4f6u);
  /* 1056f4f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f4f8 jne 0x1056f4ff */
  if (!C.zf) goto L_1056f4ff;
  /* 1056f4fa jmp 0x1056f6f2 */
  goto L_1056f6f2;
L_1056f4ff:;
  /* 1056f4ff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f503 jbe 0x1056f50a */
  if ((C.cf||C.zf)) goto L_1056f50a;
  /* 1056f505 jmp 0x1056f6f2 */
  goto L_1056f6f2;
L_1056f50a:;
  /* 1056f50a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1056f50d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1056f513 mov dword ptr [0x1058dea4], edx */
  w32((uint32_t)(0x1058dea4), (EDX));
  /* 1056f519 cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f520 jle 0x1056f579 */
  if ((C.zf||C.sf!=C.of)) goto L_1056f579;
  /* 1056f522 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1056f525 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1056f528 jmp 0x1056f533 */
  goto L_1056f533;
L_1056f52a:;
  /* 1056f52a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f52d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f530 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1056f533:;
  /* 1056f533 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f538 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056f53a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f53c je 0x1056f579 */
  if (C.zf) goto L_1056f579;
  /* 1056f53e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f541 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056f543 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1056f546 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056f548 je 0x1056f579 */
  if (C.zf) goto L_1056f579;
  /* 1056f54a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f54d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f54f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1056f551 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1056f554 jmp 0x1056f55f */
  goto L_1056f55f;
L_1056f556:;
  /* 1056f556 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056f559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f55c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1056f55f:;
  /* 1056f55f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f562 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f564 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1056f567 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f56a jg 0x1056f577 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056f577;
  /* 1056f56c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056f56f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f572 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1056f575 jmp 0x1056f556 */
  goto L_1056f556;
L_1056f577:;
  /* 1056f577 jmp 0x1056f52a */
  goto L_1056f52a;
L_1056f579:;
  /* 1056f579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f57b push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f57d push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f57f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056f582 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f585 push eax */
  push32((uint32_t)(EAX));
  /* 1056f586 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056f58b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056f58e push ecx */
  push32((uint32_t)(ECX));
  /* 1056f58f push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f591 call 0x1056bd30 */
  push32(0x1056f596u); f_1056bd30();
  /* 1056f596 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f59b jne 0x1056f5a2 */
  if (!C.zf) goto L_1056f5a2;
  /* 1056f59d jmp 0x1056f6f2 */
  goto L_1056f6f2;
L_1056f5a2:;
  /* 1056f5a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056f5a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1056f5aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056f5ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1056f5b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1056f5b7 jmp 0x1056f5c2 */
  goto L_1056f5c2;
L_1056f5b9:;
  /* 1056f5b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056f5bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f5bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1056f5c2:;
  /* 1056f5c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f5c9 jge 0x1056f5e0 */
  if ((C.sf==C.of)) goto L_1056f5e0;
  /* 1056f5cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056f5ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1056f5d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1056f5d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1056f5d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f5db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1056f5de jmp 0x1056f5b9 */
  goto L_1056f5b9;
L_1056f5e0:;
  /* 1056f5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f5e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056f5e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056f5e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f5ea push edx */
  push32((uint32_t)(EDX));
  /* 1056f5eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1056f5f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056f5f3 push eax */
  push32((uint32_t)(EAX));
  /* 1056f5f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056f5f6 call 0x10571f60 */
  push32(0x1056f5fbu); f_10571f60();
  /* 1056f5fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f600 jne 0x1056f607 */
  if (!C.zf) goto L_1056f607;
  /* 1056f602 jmp 0x1056f6f2 */
  goto L_1056f6f2;
L_1056f607:;
  /* 1056f607 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056f60a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1056f60f cmp dword ptr [0x1058dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1058dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f616 jle 0x1056f673 */
  if ((C.zf||C.sf!=C.of)) goto L_1056f673;
  /* 1056f618 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1056f61b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1056f61e jmp 0x1056f629 */
  goto L_1056f629;
L_1056f620:;
  /* 1056f620 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f623 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f626 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1056f629:;
  /* 1056f629 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f62c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1056f62e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1056f630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056f632 je 0x1056f673 */
  if (C.zf) goto L_1056f673;
  /* 1056f634 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f637 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f639 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1056f63c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056f63e je 0x1056f673 */
  if (C.zf) goto L_1056f673;
  /* 1056f640 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f645 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056f647 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1056f64a jmp 0x1056f655 */
  goto L_1056f655;
L_1056f64c:;
  /* 1056f64c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056f64f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f652 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1056f655:;
  /* 1056f655 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1056f658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f65a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1056f65d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f660 jg 0x1056f671 */
  if ((!C.zf&&C.sf==C.of)) goto L_1056f671;
  /* 1056f662 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1056f665 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056f668 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1056f66f jmp 0x1056f64c */
  goto L_1056f64c;
L_1056f671:;
  /* 1056f671 jmp 0x1056f620 */
  goto L_1056f620;
L_1056f673:;
  /* 1056f673 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056f676 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f679 mov dword ptr [0x1058dc98], eax */
  w32((uint32_t)(0x1058dc98), (EAX));
  /* 1056f67e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056f681 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f684 mov dword ptr [0x1058dc9c], ecx */
  w32((uint32_t)(0x1058dc9c), (ECX));
  /* 1056f68a cmp dword ptr [0x1058f758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f691 je 0x1056f6a4 */
  if (C.zf) goto L_1056f6a4;
  /* 1056f693 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f695 mov edx, dword ptr [0x1058f758] */
  EDX = (r32((uint32_t)(0x1058f758)));
  /* 1056f69b push edx */
  push32((uint32_t)(EDX));
  /* 1056f69c call 0x10564590 */
  push32(0x1056f6a1u); f_10564590();
  /* 1056f6a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056f6a4:;
  /* 1056f6a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056f6a7 mov dword ptr [0x1058f758], eax */
  w32((uint32_t)(0x1058f758), (EAX));
  /* 1056f6ac cmp dword ptr [0x1058f75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f6b3 je 0x1056f6c6 */
  if (C.zf) goto L_1056f6c6;
  /* 1056f6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f6b7 mov ecx, dword ptr [0x1058f75c] */
  ECX = (r32((uint32_t)(0x1058f75c)));
  /* 1056f6bd push ecx */
  push32((uint32_t)(ECX));
  /* 1056f6be call 0x10564590 */
  push32(0x1056f6c3u); f_10564590();
  /* 1056f6c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056f6c6:;
  /* 1056f6c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056f6c9 mov dword ptr [0x1058f75c], edx */
  w32((uint32_t)(0x1058f75c), (EDX));
  /* 1056f6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f6d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056f6d4 push eax */
  push32((uint32_t)(EAX));
  /* 1056f6d5 call 0x10564590 */
  push32(0x1056f6dau); f_10564590();
  /* 1056f6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f6df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056f6e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f6e3 call 0x10564590 */
  push32(0x1056f6e8u); f_10564590();
  /* 1056f6e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f6eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f6ed jmp 0x1056f77c */
  goto L_1056f77c;
L_1056f6f2:;
  /* 1056f6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f6f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1056f6f7 push edx */
  push32((uint32_t)(EDX));
  /* 1056f6f8 call 0x10564590 */
  push32(0x1056f6fdu); f_10564590();
  /* 1056f6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f700 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f702 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1056f705 push eax */
  push32((uint32_t)(EAX));
  /* 1056f706 call 0x10564590 */
  push32(0x1056f70bu); f_10564590();
  /* 1056f70b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f70e push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f710 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1056f713 push ecx */
  push32((uint32_t)(ECX));
  /* 1056f714 call 0x10564590 */
  push32(0x1056f719u); f_10564590();
  /* 1056f719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f71c push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f71e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1056f721 push edx */
  push32((uint32_t)(EDX));
  /* 1056f722 call 0x10564590 */
  push32(0x1056f727u); f_10564590();
  /* 1056f727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f72a mov eax, 1 */
  EAX = (0x1u);
  /* 1056f72f jmp 0x1056f77c */
  goto L_1056f77c;
L_1056f731:;
  /* 1056f731 mov dword ptr [0x1058dc98], 0x1058dca2 */
  w32((uint32_t)(0x1058dc98), (0x1058dca2u));
  /* 1056f73b mov dword ptr [0x1058dc9c], 0x1058dca2 */
  w32((uint32_t)(0x1058dc9c), (0x1058dca2u));
  /* 1056f745 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f747 mov eax, dword ptr [0x1058f758] */
  EAX = (r32((uint32_t)(0x1058f758)));
  /* 1056f74c push eax */
  push32((uint32_t)(EAX));
  /* 1056f74d call 0x10564590 */
  push32(0x1056f752u); f_10564590();
  /* 1056f752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f755 push 2 */
  push32((uint32_t)(0x2u));
  /* 1056f757 mov ecx, dword ptr [0x1058f75c] */
  ECX = (r32((uint32_t)(0x1058f75c)));
  /* 1056f75d push ecx */
  push32((uint32_t)(ECX));
  /* 1056f75e call 0x10564590 */
  push32(0x1056f763u); f_10564590();
  /* 1056f763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f766 mov dword ptr [0x1058f758], 0 */
  w32((uint32_t)(0x1058f758), (0x0u));
  /* 1056f770 mov dword ptr [0x1058f75c], 0 */
  w32((uint32_t)(0x1058f75c), (0x0u));
  /* 1056f77a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1056f77c:;
  /* 1056f77c mov esp, ebp */
  ESP = (EBP);
  /* 1056f77e pop ebp */
  EBP = (pop32());
  /* 1056f77f ret  */
  ESPCHK(0x1056f3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x1056f780 (7 bytes, 5 insns) */
void f_1056f780(void) {
  FTRACE(0x1056f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f780 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f781 mov ebp, esp */
  EBP = (ESP);
  /* 1056f783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f785 pop ebp */
  EBP = (pop32());
  /* 1056f786 ret  */
  ESPCHK(0x1056f780u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1056f790 (129 bytes, 56 insns) */
void f_1056f790(void) {
  FTRACE(0x1056f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f790 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1056f794 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1056f798 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1056f79e jne 0x1056f7dc */
  if (!C.zf) goto L_1056f7dc;
L_1056f7a0:;
  /* 1056f7a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1056f7a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f7a4 jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f7a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f7a8 je 0x1056f7d0 */
  if (C.zf) goto L_1056f7d0;
  /* 1056f7aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f7ad jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f7af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1056f7b1 je 0x1056f7d0 */
  if (C.zf) goto L_1056f7d0;
  /* 1056f7b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1056f7b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f7b9 jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f7bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f7bd je 0x1056f7d0 */
  if (C.zf) goto L_1056f7d0;
  /* 1056f7bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f7c2 jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f7c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f7c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f7ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1056f7cc jne 0x1056f7a0 */
  if (!C.zf) goto L_1056f7a0;
  /* 1056f7ce mov edi, edi */
  EDI = (EDI);
L_1056f7d0:;
  /* 1056f7d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f7d2 ret  */
  ESPCHK(0x1056f790u, _esp0);
  ESP += 4; return;
  /* 1056f7d3 nop  */
  /* nop */
L_1056f7d4:;
  /* 1056f7d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056f7d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1056f7d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1056f7d9 ret  */
  ESPCHK(0x1056f790u, _esp0);
  ESP += 4; return;
  /* 1056f7da mov edi, edi */
  EDI = (EDI);
L_1056f7dc:;
  /* 1056f7dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1056f7e2 je 0x1056f7f8 */
  if (C.zf) goto L_1056f7f8;
  /* 1056f7e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056f7e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1056f7e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f7e9 jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f7eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1056f7ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f7ee je 0x1056f7d0 */
  if (C.zf) goto L_1056f7d0;
  /* 1056f7f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1056f7f6 je 0x1056f7a0 */
  if (C.zf) goto L_1056f7a0;
L_1056f7f8:;
  /* 1056f7f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1056f7fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f7fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f800 jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f802 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f804 je 0x1056f7d0 */
  if (C.zf) goto L_1056f7d0;
  /* 1056f806 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f809 jne 0x1056f7d4 */
  if (!C.zf) goto L_1056f7d4;
  /* 1056f80b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1056f80d je 0x1056f7d0 */
  if (C.zf) goto L_1056f7d0;
  /* 1056f80f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f812 jmp 0x1056f7a0 */
  goto L_1056f7a0;
}

/* FUN_1000f820 @ 0x1056f820 (62 bytes, 35 insns) */
void f_1056f820(void) {
  FTRACE(0x1056f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f820 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f821 mov ebp, esp */
  EBP = (ESP);
  /* 1056f823 push esi */
  push32((uint32_t)(ESI));
  /* 1056f824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f826 push eax */
  push32((uint32_t)(EAX));
  /* 1056f827 push eax */
  push32((uint32_t)(EAX));
  /* 1056f828 push eax */
  push32((uint32_t)(EAX));
  /* 1056f829 push eax */
  push32((uint32_t)(EAX));
  /* 1056f82a push eax */
  push32((uint32_t)(EAX));
  /* 1056f82b push eax */
  push32((uint32_t)(EAX));
  /* 1056f82c push eax */
  push32((uint32_t)(EAX));
  /* 1056f82d push eax */
  push32((uint32_t)(EAX));
  /* 1056f82e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056f831 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056f834:;
  /* 1056f834 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056f836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f838 je 0x1056f841 */
  if (C.zf) goto L_1056f841;
  /* 1056f83a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1056f83b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1056f83b");
  /* 1056f83f jmp 0x1056f834 */
  goto L_1056f834;
L_1056f841:;
  /* 1056f841 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f844 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1056f847 nop  */
  /* nop */
L_1056f848:;
  /* 1056f848 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1056f849 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056f84b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f84d je 0x1056f856 */
  if (C.zf) goto L_1056f856;
  /* 1056f84f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1056f850 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1056f850");
  /* 1056f854 jae 0x1056f848 */
  if (!C.cf) goto L_1056f848;
L_1056f856:;
  /* 1056f856 mov eax, ecx */
  EAX = (ECX);
  /* 1056f858 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f85b pop esi */
  ESI = (pop32());
  /* 1056f85c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056f85d ret  */
  ESPCHK(0x1056f820u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1056f860 (56 bytes, 31 insns) */
void f_1056f860(void) {
  FTRACE(0x1056f860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f860 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f861 mov ebp, esp */
  EBP = (ESP);
  /* 1056f863 push edi */
  push32((uint32_t)(EDI));
  /* 1056f864 push esi */
  push32((uint32_t)(ESI));
  /* 1056f865 push ebx */
  push32((uint32_t)(EBX));
  /* 1056f866 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056f869 jecxz 0x1056f891 */
  x86_unimpl("jecxz @ 0x1056f869");
  /* 1056f86b mov ebx, ecx */
  EBX = (ECX);
  /* 1056f86d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f870 mov esi, edi */
  ESI = (EDI);
  /* 1056f872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f874 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1056f876 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056f878 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f87a mov edi, esi */
  EDI = (ESI);
  /* 1056f87c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1056f87f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1056f881 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1056f884 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056f886 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1056f889 ja 0x1056f88f */
  if ((!C.cf&&!C.zf)) goto L_1056f88f;
  /* 1056f88b je 0x1056f891 */
  if (C.zf) goto L_1056f891;
  /* 1056f88d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1056f88e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1056f88f:;
  /* 1056f88f not ecx */
  ECX = (~(ECX));
L_1056f891:;
  /* 1056f891 mov eax, ecx */
  EAX = (ECX);
  /* 1056f893 pop ebx */
  EBX = (pop32());
  /* 1056f894 pop esi */
  ESI = (pop32());
  /* 1056f895 pop edi */
  EDI = (pop32());
  /* 1056f896 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056f897 ret  */
  ESPCHK(0x1056f860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x1056f8a0 (58 bytes, 32 insns) */
void f_1056f8a0(void) {
  FTRACE(0x1056f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1056f8a3 push esi */
  push32((uint32_t)(ESI));
  /* 1056f8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f8a6 push eax */
  push32((uint32_t)(EAX));
  /* 1056f8a7 push eax */
  push32((uint32_t)(EAX));
  /* 1056f8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1056f8a9 push eax */
  push32((uint32_t)(EAX));
  /* 1056f8aa push eax */
  push32((uint32_t)(EAX));
  /* 1056f8ab push eax */
  push32((uint32_t)(EAX));
  /* 1056f8ac push eax */
  push32((uint32_t)(EAX));
  /* 1056f8ad push eax */
  push32((uint32_t)(EAX));
  /* 1056f8ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056f8b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1056f8b4:;
  /* 1056f8b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1056f8b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f8b8 je 0x1056f8c1 */
  if (C.zf) goto L_1056f8c1;
  /* 1056f8ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1056f8bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1056f8bb");
  /* 1056f8bf jmp 0x1056f8b4 */
  goto L_1056f8b4;
L_1056f8c1:;
  /* 1056f8c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1056f8c4:;
  /* 1056f8c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1056f8c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1056f8c8 je 0x1056f8d4 */
  if (C.zf) goto L_1056f8d4;
  /* 1056f8ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1056f8cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1056f8cb");
  /* 1056f8cf jae 0x1056f8c4 */
  if (!C.cf) goto L_1056f8c4;
  /* 1056f8d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1056f8d4:;
  /* 1056f8d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f8d7 pop esi */
  ESI = (pop32());
  /* 1056f8d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1056f8d9 ret  */
  ESPCHK(0x1056f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8e0 @ 0x1056f8e0 (512 bytes, 147 insns) */
void f_1056f8e0(void) {
  FTRACE(0x1056f8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056f8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056f8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1056f8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056f8e6 cmp dword ptr [0x1058f7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f8ed jne 0x1056f912 */
  if (!C.zf) goto L_1056f912;
  /* 1056f8ef call 0x105703b0 */
  push32(0x1056f8f4u); f_105703b0();
  /* 1056f8f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f8f6 je 0x1056f902 */
  if (C.zf) goto L_1056f902;
  /* 1056f8f8 mov eax, dword ptr [0x10592294] */
  EAX = (r32((uint32_t)(0x10592294)));
  /* 1056f8fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056f900 jmp 0x1056f909 */
  goto L_1056f909;
L_1056f902:;
  /* 1056f902 mov dword ptr [ebp - 8], 0x10570400 */
  w32((uint32_t)(EBP + -0x8), (0x10570400u));
L_1056f909:;
  /* 1056f909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1056f90c mov dword ptr [0x1058f7a4], ecx */
  w32((uint32_t)(0x1058f7a4), (ECX));
L_1056f912:;
  /* 1056f912 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f916 jne 0x1056f922 */
  if (!C.zf) goto L_1056f922;
  /* 1056f918 call 0x10570200 */
  push32(0x1056f91du); f_10570200();
  /* 1056f91d jmp 0x1056f9ee */
  goto L_1056f9ee;
L_1056f922:;
  /* 1056f922 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f925 mov dword ptr [0x1058f794], edx */
  w32((uint32_t)(0x1058f794), (EDX));
  /* 1056f92b cmp dword ptr [0x1058f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f932 je 0x1056f954 */
  if (C.zf) goto L_1056f954;
  /* 1056f934 mov eax, dword ptr [0x1058f794] */
  EAX = (r32((uint32_t)(0x1058f794)));
  /* 1056f939 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056f93c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056f93e je 0x1056f954 */
  if (C.zf) goto L_1056f954;
  /* 1056f940 push 0x1058f794 */
  push32((uint32_t)(0x1058f794u));
  /* 1056f945 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1056f947 push 0x1058ea90 */
  push32((uint32_t)(0x1058ea90u));
  /* 1056f94c call 0x1056fae0 */
  push32(0x1056f951u); f_1056fae0();
  /* 1056f951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056f954:;
  /* 1056f954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056f957 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056f95a mov dword ptr [0x1058f798], edx */
  w32((uint32_t)(0x1058f798), (EDX));
  /* 1056f960 cmp dword ptr [0x1058f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f967 je 0x1056f989 */
  if (C.zf) goto L_1056f989;
  /* 1056f969 mov eax, dword ptr [0x1058f798] */
  EAX = (r32((uint32_t)(0x1058f798)));
  /* 1056f96e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056f971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056f973 je 0x1056f989 */
  if (C.zf) goto L_1056f989;
  /* 1056f975 push 0x1058f798 */
  push32((uint32_t)(0x1058f798u));
  /* 1056f97a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1056f97c push 0x1058e9d8 */
  push32((uint32_t)(0x1058e9d8u));
  /* 1056f981 call 0x1056fae0 */
  push32(0x1056f986u); f_1056fae0();
  /* 1056f986 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056f989:;
  /* 1056f989 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
  /* 1056f993 cmp dword ptr [0x1058f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f99a je 0x1056f9cd */
  if (C.zf) goto L_1056f9cd;
  /* 1056f99c mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1056f9a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1056f9a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056f9a7 je 0x1056f9cd */
  if (C.zf) goto L_1056f9cd;
  /* 1056f9a9 cmp dword ptr [0x1058f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f9b0 je 0x1056f9c6 */
  if (C.zf) goto L_1056f9c6;
  /* 1056f9b2 mov ecx, dword ptr [0x1058f798] */
  ECX = (r32((uint32_t)(0x1058f798)));
  /* 1056f9b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1056f9bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056f9bd je 0x1056f9c6 */
  if (C.zf) goto L_1056f9c6;
  /* 1056f9bf call 0x1056fb70 */
  push32(0x1056f9c4u); f_1056fb70();
  /* 1056f9c4 jmp 0x1056f9cb */
  goto L_1056f9cb;
L_1056f9c6:;
  /* 1056f9c6 call 0x1056ff60 */
  push32(0x1056f9cbu); f_1056ff60();
L_1056f9cb:;
  /* 1056f9cb jmp 0x1056f9ee */
  goto L_1056f9ee;
L_1056f9cd:;
  /* 1056f9cd cmp dword ptr [0x1058f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f9d4 je 0x1056f9e9 */
  if (C.zf) goto L_1056f9e9;
  /* 1056f9d6 mov eax, dword ptr [0x1058f798] */
  EAX = (r32((uint32_t)(0x1058f798)));
  /* 1056f9db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1056f9de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056f9e0 je 0x1056f9e9 */
  if (C.zf) goto L_1056f9e9;
  /* 1056f9e2 call 0x10570100 */
  push32(0x1056f9e7u); f_10570100();
  /* 1056f9e7 jmp 0x1056f9ee */
  goto L_1056f9ee;
L_1056f9e9:;
  /* 1056f9e9 call 0x10570200 */
  push32(0x1056f9eeu); f_10570200();
L_1056f9ee:;
  /* 1056f9ee cmp dword ptr [0x1058f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056f9f5 jne 0x1056f9fe */
  if (!C.zf) goto L_1056f9fe;
  /* 1056f9f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056f9f9 jmp 0x1056fadc */
  goto L_1056fadc;
L_1056f9fe:;
  /* 1056f9fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056fa01 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fa07 push edx */
  push32((uint32_t)(EDX));
  /* 1056fa08 call 0x10570230 */
  push32(0x1056fa0du); f_10570230();
  /* 1056fa0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fa10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056fa13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fa17 je 0x1056fa2c */
  if (C.zf) goto L_1056fa2c;
  /* 1056fa19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056fa1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1056fa21 push eax */
  push32((uint32_t)(EAX));
  /* 1056fa22 call dword ptr [0x10592298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592298))), 0x1056fa28u);
  /* 1056fa28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fa2a jne 0x1056fa33 */
  if (!C.zf) goto L_1056fa33;
L_1056fa2c:;
  /* 1056fa2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056fa2e jmp 0x1056fadc */
  goto L_1056fadc;
L_1056fa33:;
  /* 1056fa33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056fa35 mov ecx, dword ptr [0x1058f784] */
  ECX = (r32((uint32_t)(0x1058f784)));
  /* 1056fa3b push ecx */
  push32((uint32_t)(ECX));
  /* 1056fa3c call dword ptr [0x1059229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059229c))), 0x1056fa42u);
  /* 1056fa42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fa44 jne 0x1056fa4d */
  if (!C.zf) goto L_1056fa4d;
  /* 1056fa46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056fa48 jmp 0x1056fadc */
  goto L_1056fadc;
L_1056fa4d:;
  /* 1056fa4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fa51 je 0x1056fa78 */
  if (C.zf) goto L_1056fa78;
  /* 1056fa53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056fa56 mov ax, word ptr [0x1058f784] */
  AX = (r16((uint32_t)(0x1058f784)));
  /* 1056fa5c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1056fa5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056fa62 mov dx, word ptr [0x1058f7a0] */
  DX = (r16((uint32_t)(0x1058f7a0)));
  /* 1056fa69 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1056fa6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1056fa70 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1056fa74 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1056fa78:;
  /* 1056fa78 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fa7c je 0x1056fad7 */
  if (C.zf) goto L_1056fad7;
  /* 1056fa7e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1056fa80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056fa83 push edx */
  push32((uint32_t)(EDX));
  /* 1056fa84 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1056fa89 mov eax, dword ptr [0x1058f784] */
  EAX = (r32((uint32_t)(0x1058f784)));
  /* 1056fa8e push eax */
  push32((uint32_t)(EAX));
  /* 1056fa8f call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1056fa95u);
  /* 1056fa95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fa97 jne 0x1056fa9d */
  if (!C.zf) goto L_1056fa9d;
  /* 1056fa99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056fa9b jmp 0x1056fadc */
  goto L_1056fadc;
L_1056fa9d:;
  /* 1056fa9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1056fa9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056faa2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056faa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1056faa6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1056faab mov edx, dword ptr [0x1058f7a0] */
  EDX = (r32((uint32_t)(0x1058f7a0)));
  /* 1056fab1 push edx */
  push32((uint32_t)(EDX));
  /* 1056fab2 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1056fab8u);
  /* 1056fab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056faba jne 0x1056fac0 */
  if (!C.zf) goto L_1056fac0;
  /* 1056fabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1056fabe jmp 0x1056fadc */
  goto L_1056fadc;
L_1056fac0:;
  /* 1056fac0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1056fac2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056fac5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056faca push eax */
  push32((uint32_t)(EAX));
  /* 1056facb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056face push ecx */
  push32((uint32_t)(ECX));
  /* 1056facf call 0x10566640 */
  push32(0x1056fad4u); f_10566640();
  /* 1056fad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1056fad7:;
  /* 1056fad7 mov eax, 1 */
  EAX = (0x1u);
L_1056fadc:;
  /* 1056fadc mov esp, ebp */
  ESP = (EBP);
  /* 1056fade pop ebp */
  EBP = (pop32());
  /* 1056fadf ret  */
  ESPCHK(0x1056f8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x1056fae0 (130 bytes, 47 insns) */
void f_1056fae0(void) {
  FTRACE(0x1056fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056fae1 mov ebp, esp */
  EBP = (ESP);
  /* 1056fae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fae6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1056faed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1056faf4:;
  /* 1056faf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056faf7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fafa jg 0x1056fb5e */
  if ((!C.zf&&C.sf==C.of)) goto L_1056fb5e;
  /* 1056fafc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fb00 je 0x1056fb5e */
  if (C.zf) goto L_1056fb5e;
  /* 1056fb02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1056fb05 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fb08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1056fb09 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fb0b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1056fb0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1056fb10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056fb13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056fb16 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1056fb19 push eax */
  push32((uint32_t)(EAX));
  /* 1056fb1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056fb1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1056fb1f push edx */
  push32((uint32_t)(EDX));
  /* 1056fb20 call 0x105721d0 */
  push32(0x1056fb25u); f_105721d0();
  /* 1056fb25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fb28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1056fb2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fb2f jne 0x1056fb42 */
  if (!C.zf) goto L_1056fb42;
  /* 1056fb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056fb34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056fb37 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1056fb3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1056fb3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1056fb40 jmp 0x1056fb5c */
  goto L_1056fb5c;
L_1056fb42:;
  /* 1056fb42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fb46 jge 0x1056fb53 */
  if ((C.sf==C.of)) goto L_1056fb53;
  /* 1056fb48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056fb4b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fb4e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1056fb51 jmp 0x1056fb5c */
  goto L_1056fb5c;
L_1056fb53:;
  /* 1056fb53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056fb56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fb59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1056fb5c:;
  /* 1056fb5c jmp 0x1056faf4 */
  goto L_1056faf4;
L_1056fb5e:;
  /* 1056fb5e mov esp, ebp */
  ESP = (EBP);
  /* 1056fb60 pop ebp */
  EBP = (pop32());
  /* 1056fb61 ret  */
  ESPCHK(0x1056fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x1056fb70 (186 bytes, 50 insns) */
void f_1056fb70(void) {
  FTRACE(0x1056fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1056fb71 mov ebp, esp */
  EBP = (ESP);
  /* 1056fb73 push ecx */
  push32((uint32_t)(ECX));
  /* 1056fb74 mov eax, dword ptr [0x1058f794] */
  EAX = (r32((uint32_t)(0x1058f794)));
  /* 1056fb79 push eax */
  push32((uint32_t)(EAX));
  /* 1056fb7a call 0x10566930 */
  push32(0x1056fb7fu); f_10566930();
  /* 1056fb7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fb82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056fb84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fb87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1056fb8a mov dword ptr [0x1058f790], ecx */
  w32((uint32_t)(0x1058f790), (ECX));
  /* 1056fb90 mov edx, dword ptr [0x1058f798] */
  EDX = (r32((uint32_t)(0x1058f798)));
  /* 1056fb96 push edx */
  push32((uint32_t)(EDX));
  /* 1056fb97 call 0x10566930 */
  push32(0x1056fb9cu); f_10566930();
  /* 1056fb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fb9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056fba1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fba4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1056fba7 mov dword ptr [0x1058f788], ecx */
  w32((uint32_t)(0x1058f788), (ECX));
  /* 1056fbad mov dword ptr [0x1058f784], 0 */
  w32((uint32_t)(0x1058f784), (0x0u));
  /* 1056fbb7 cmp dword ptr [0x1058f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fbbe je 0x1056fbc9 */
  if (C.zf) goto L_1056fbc9;
  /* 1056fbc0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1056fbc7 jmp 0x1056fbdb */
  goto L_1056fbdb;
L_1056fbc9:;
  /* 1056fbc9 mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1056fbcf push edx */
  push32((uint32_t)(EDX));
  /* 1056fbd0 call 0x10570610 */
  push32(0x1056fbd5u); f_10570610();
  /* 1056fbd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fbd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056fbdb:;
  /* 1056fbdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056fbde mov dword ptr [0x1058f78c], eax */
  w32((uint32_t)(0x1058f78c), (EAX));
  /* 1056fbe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1056fbe5 push 0x1056fc30 */
  push32((uint32_t)(0x1056fc30u));
  /* 1056fbea call dword ptr [0x10592290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592290))), 0x1056fbf0u);
  /* 1056fbf0 mov ecx, dword ptr [0x1058f79c] */
  ECX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fbf6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1056fbfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056fbfe je 0x1056fc1c */
  if (C.zf) goto L_1056fc1c;
  /* 1056fc00 mov edx, dword ptr [0x1058f79c] */
  EDX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fc06 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1056fc0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056fc0e je 0x1056fc1c */
  if (C.zf) goto L_1056fc1c;
  /* 1056fc10 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fc15 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1056fc18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fc1a jne 0x1056fc26 */
  if (!C.zf) goto L_1056fc26;
L_1056fc1c:;
  /* 1056fc1c mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
L_1056fc26:;
  /* 1056fc26 mov esp, ebp */
  ESP = (EBP);
  /* 1056fc28 pop ebp */
  EBP = (pop32());
  /* 1056fc29 ret  */
  ESPCHK(0x1056fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x1056fc30 (804 bytes, 220 insns) */
void f_1056fc30(void) {
  FTRACE(0x1056fc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056fc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1056fc31 mov ebp, esp */
  EBP = (ESP);
  /* 1056fc33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056fc39 push eax */
  push32((uint32_t)(EAX));
  /* 1056fc3a call 0x10570590 */
  push32(0x1056fc3fu); f_10570590();
  /* 1056fc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fc42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1056fc45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1056fc47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1056fc4a push ecx */
  push32((uint32_t)(ECX));
  /* 1056fc4b mov edx, dword ptr [0x1058f788] */
  EDX = (r32((uint32_t)(0x1058f788)));
  /* 1056fc51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056fc53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fc55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1056fc5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fc61 push edx */
  push32((uint32_t)(EDX));
  /* 1056fc62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fc65 push eax */
  push32((uint32_t)(EAX));
  /* 1056fc66 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1056fc6cu);
  /* 1056fc6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fc6e jne 0x1056fc84 */
  if (!C.zf) goto L_1056fc84;
  /* 1056fc70 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
  /* 1056fc7a mov eax, 1 */
  EAX = (0x1u);
  /* 1056fc7f jmp 0x1056ff4e */
  goto L_1056ff4e;
L_1056fc84:;
  /* 1056fc84 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1056fc87 push ecx */
  push32((uint32_t)(ECX));
  /* 1056fc88 mov edx, dword ptr [0x1058f798] */
  EDX = (r32((uint32_t)(0x1058f798)));
  /* 1056fc8e push edx */
  push32((uint32_t)(EDX));
  /* 1056fc8f call 0x105721d0 */
  push32(0x1056fc94u); f_105721d0();
  /* 1056fc94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fc97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fc99 jne 0x1056fdbf */
  if (!C.zf) goto L_1056fdbf;
  /* 1056fc9f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1056fca1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1056fca4 push eax */
  push32((uint32_t)(EAX));
  /* 1056fca5 mov ecx, dword ptr [0x1058f790] */
  ECX = (r32((uint32_t)(0x1058f790)));
  /* 1056fcab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056fcad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fcaf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1056fcb5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fcbb push ecx */
  push32((uint32_t)(ECX));
  /* 1056fcbc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fcbf push edx */
  push32((uint32_t)(EDX));
  /* 1056fcc0 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1056fcc6u);
  /* 1056fcc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fcc8 jne 0x1056fcde */
  if (!C.zf) goto L_1056fcde;
  /* 1056fcca mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
  /* 1056fcd4 mov eax, 1 */
  EAX = (0x1u);
  /* 1056fcd9 jmp 0x1056ff4e */
  goto L_1056ff4e;
L_1056fcde:;
  /* 1056fcde lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1056fce1 push eax */
  push32((uint32_t)(EAX));
  /* 1056fce2 mov ecx, dword ptr [0x1058f794] */
  ECX = (r32((uint32_t)(0x1058f794)));
  /* 1056fce8 push ecx */
  push32((uint32_t)(ECX));
  /* 1056fce9 call 0x105721d0 */
  push32(0x1056fceeu); f_105721d0();
  /* 1056fcee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fcf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fcf3 jne 0x1056fd20 */
  if (!C.zf) goto L_1056fd20;
  /* 1056fcf5 mov edx, dword ptr [0x1058f79c] */
  EDX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fcfb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1056fd01 mov dword ptr [0x1058f79c], edx */
  w32((uint32_t)(0x1058f79c), (EDX));
  /* 1056fd07 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fd0a mov dword ptr [0x1058f7a0], eax */
  w32((uint32_t)(0x1058f7a0), (EAX));
  /* 1056fd0f mov ecx, dword ptr [0x1058f7a0] */
  ECX = (r32((uint32_t)(0x1058f7a0)));
  /* 1056fd15 mov dword ptr [0x1058f784], ecx */
  w32((uint32_t)(0x1058f784), (ECX));
  /* 1056fd1b jmp 0x1056fdbf */
  goto L_1056fdbf;
L_1056fd20:;
  /* 1056fd20 mov edx, dword ptr [0x1058f79c] */
  EDX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fd26 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1056fd29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1056fd2b jne 0x1056fdbf */
  if (!C.zf) goto L_1056fdbf;
  /* 1056fd31 cmp dword ptr [0x1058f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fd38 je 0x1056fd8d */
  if (C.zf) goto L_1056fd8d;
  /* 1056fd3a mov eax, dword ptr [0x1058f78c] */
  EAX = (r32((uint32_t)(0x1058f78c)));
  /* 1056fd3f push eax */
  push32((uint32_t)(EAX));
  /* 1056fd40 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1056fd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1056fd44 mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1056fd4a push edx */
  push32((uint32_t)(EDX));
  /* 1056fd4b call 0x105722a0 */
  push32(0x1056fd50u); f_105722a0();
  /* 1056fd50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fd53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fd55 jne 0x1056fd8d */
  if (!C.zf) goto L_1056fd8d;
  /* 1056fd57 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fd5c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1056fd5e mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
  /* 1056fd63 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fd66 mov dword ptr [0x1058f7a0], ecx */
  w32((uint32_t)(0x1058f7a0), (ECX));
  /* 1056fd6c mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1056fd72 push edx */
  push32((uint32_t)(EDX));
  /* 1056fd73 call 0x10566930 */
  push32(0x1056fd78u); f_10566930();
  /* 1056fd78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fd7b cmp eax, dword ptr [0x1058f78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058f78c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fd81 jne 0x1056fd8b */
  if (!C.zf) goto L_1056fd8b;
  /* 1056fd83 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fd86 mov dword ptr [0x1058f784], eax */
  w32((uint32_t)(0x1058f784), (EAX));
L_1056fd8b:;
  /* 1056fd8b jmp 0x1056fdbf */
  goto L_1056fdbf;
L_1056fd8d:;
  /* 1056fd8d mov ecx, dword ptr [0x1058f79c] */
  ECX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fd93 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1056fd96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056fd98 jne 0x1056fdbf */
  if (!C.zf) goto L_1056fdbf;
  /* 1056fd9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fd9d push edx */
  push32((uint32_t)(EDX));
  /* 1056fd9e call 0x105702d0 */
  push32(0x1056fda3u); f_105702d0();
  /* 1056fda3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fda8 je 0x1056fdbf */
  if (C.zf) goto L_1056fdbf;
  /* 1056fdaa mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fdaf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1056fdb1 mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
  /* 1056fdb6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fdb9 mov dword ptr [0x1058f7a0], ecx */
  w32((uint32_t)(0x1058f7a0), (ECX));
L_1056fdbf:;
  /* 1056fdbf mov edx, dword ptr [0x1058f79c] */
  EDX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fdc5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1056fdcb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fdd1 je 0x1056ff41 */
  if (C.zf) goto L_1056ff41;
  /* 1056fdd7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1056fdd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1056fddc push eax */
  push32((uint32_t)(EAX));
  /* 1056fddd mov ecx, dword ptr [0x1058f790] */
  ECX = (r32((uint32_t)(0x1058f790)));
  /* 1056fde3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056fde5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056fde7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1056fded add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1056fdf4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fdf7 push edx */
  push32((uint32_t)(EDX));
  /* 1056fdf8 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1056fdfeu);
  /* 1056fdfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fe00 jne 0x1056fe16 */
  if (!C.zf) goto L_1056fe16;
  /* 1056fe02 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
  /* 1056fe0c mov eax, 1 */
  EAX = (0x1u);
  /* 1056fe11 jmp 0x1056ff4e */
  goto L_1056ff4e;
L_1056fe16:;
  /* 1056fe16 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1056fe19 push eax */
  push32((uint32_t)(EAX));
  /* 1056fe1a mov ecx, dword ptr [0x1058f794] */
  ECX = (r32((uint32_t)(0x1058f794)));
  /* 1056fe20 push ecx */
  push32((uint32_t)(ECX));
  /* 1056fe21 call 0x105721d0 */
  push32(0x1056fe26u); f_105721d0();
  /* 1056fe26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fe29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fe2b jne 0x1056fee0 */
  if (!C.zf) goto L_1056fee0;
  /* 1056fe31 mov edx, dword ptr [0x1058f79c] */
  EDX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fe37 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1056fe3a mov dword ptr [0x1058f79c], edx */
  w32((uint32_t)(0x1058f79c), (EDX));
  /* 1056fe40 cmp dword ptr [0x1058f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fe47 je 0x1056fe6a */
  if (C.zf) goto L_1056fe6a;
  /* 1056fe49 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fe4e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1056fe51 mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
  /* 1056fe56 cmp dword ptr [0x1058f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fe5d jne 0x1056fe68 */
  if (!C.zf) goto L_1056fe68;
  /* 1056fe5f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fe62 mov dword ptr [0x1058f784], ecx */
  w32((uint32_t)(0x1058f784), (ECX));
L_1056fe68:;
  /* 1056fe68 jmp 0x1056fede */
  goto L_1056fede;
L_1056fe6a:;
  /* 1056fe6a cmp dword ptr [0x1058f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fe71 je 0x1056febf */
  if (C.zf) goto L_1056febf;
  /* 1056fe73 mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1056fe79 push edx */
  push32((uint32_t)(EDX));
  /* 1056fe7a call 0x10566930 */
  push32(0x1056fe7fu); f_10566930();
  /* 1056fe7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fe82 cmp eax, dword ptr [0x1058f78c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1058f78c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fe88 jne 0x1056febf */
  if (!C.zf) goto L_1056febf;
  /* 1056fe8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1056fe8c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fe8f push eax */
  push32((uint32_t)(EAX));
  /* 1056fe90 call 0x10570320 */
  push32(0x1056fe95u); f_10570320();
  /* 1056fe95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fe98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056fe9a je 0x1056febd */
  if (C.zf) goto L_1056febd;
  /* 1056fe9c mov ecx, dword ptr [0x1058f79c] */
  ECX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fea2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1056fea5 mov dword ptr [0x1058f79c], ecx */
  w32((uint32_t)(0x1058f79c), (ECX));
  /* 1056feab cmp dword ptr [0x1058f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056feb2 jne 0x1056febd */
  if (!C.zf) goto L_1056febd;
  /* 1056feb4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056feb7 mov dword ptr [0x1058f784], edx */
  w32((uint32_t)(0x1058f784), (EDX));
L_1056febd:;
  /* 1056febd jmp 0x1056fede */
  goto L_1056fede;
L_1056febf:;
  /* 1056febf mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056fec4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1056fec7 mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
  /* 1056fecc cmp dword ptr [0x1058f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fed3 jne 0x1056fede */
  if (!C.zf) goto L_1056fede;
  /* 1056fed5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056fed8 mov dword ptr [0x1058f784], ecx */
  w32((uint32_t)(0x1058f784), (ECX));
L_1056fede:;
  /* 1056fede jmp 0x1056ff41 */
  goto L_1056ff41;
L_1056fee0:;
  /* 1056fee0 cmp dword ptr [0x1058f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fee7 jne 0x1056ff41 */
  if (!C.zf) goto L_1056ff41;
  /* 1056fee9 cmp dword ptr [0x1058f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056fef0 je 0x1056ff41 */
  if (C.zf) goto L_1056ff41;
  /* 1056fef2 mov edx, dword ptr [0x1058f78c] */
  EDX = (r32((uint32_t)(0x1058f78c)));
  /* 1056fef8 push edx */
  push32((uint32_t)(EDX));
  /* 1056fef9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1056fefc push eax */
  push32((uint32_t)(EAX));
  /* 1056fefd mov ecx, dword ptr [0x1058f794] */
  ECX = (r32((uint32_t)(0x1058f794)));
  /* 1056ff03 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ff04 call 0x105722a0 */
  push32(0x1056ff09u); f_105722a0();
  /* 1056ff09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ff0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056ff0e jne 0x1056ff41 */
  if (!C.zf) goto L_1056ff41;
  /* 1056ff10 push 0 */
  push32((uint32_t)(0x0u));
  /* 1056ff12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056ff15 push edx */
  push32((uint32_t)(EDX));
  /* 1056ff16 call 0x10570320 */
  push32(0x1056ff1bu); f_10570320();
  /* 1056ff1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ff1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1056ff20 je 0x1056ff41 */
  if (C.zf) goto L_1056ff41;
  /* 1056ff22 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056ff27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1056ff2a mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
  /* 1056ff2f cmp dword ptr [0x1058f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ff36 jne 0x1056ff41 */
  if (!C.zf) goto L_1056ff41;
  /* 1056ff38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1056ff3b mov dword ptr [0x1058f784], ecx */
  w32((uint32_t)(0x1058f784), (ECX));
L_1056ff41:;
  /* 1056ff41 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 1056ff46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1056ff49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1056ff4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ff4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1056ff4e:;
  /* 1056ff4e mov esp, ebp */
  ESP = (EBP);
  /* 1056ff50 pop ebp */
  EBP = (pop32());
  /* 1056ff51 ret 4 */
  ESPCHK(0x1056fc30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ff60 @ 0x1056ff60 (116 bytes, 33 insns) */
void f_1056ff60(void) {
  FTRACE(0x1056ff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ff60 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ff61 mov ebp, esp */
  EBP = (ESP);
  /* 1056ff63 push ecx */
  push32((uint32_t)(ECX));
  /* 1056ff64 mov eax, dword ptr [0x1058f794] */
  EAX = (r32((uint32_t)(0x1058f794)));
  /* 1056ff69 push eax */
  push32((uint32_t)(EAX));
  /* 1056ff6a call 0x10566930 */
  push32(0x1056ff6fu); f_10566930();
  /* 1056ff6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ff72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1056ff74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ff77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1056ff7a mov dword ptr [0x1058f790], ecx */
  w32((uint32_t)(0x1058f790), (ECX));
  /* 1056ff80 cmp dword ptr [0x1058f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1056ff87 je 0x1056ff92 */
  if (C.zf) goto L_1056ff92;
  /* 1056ff89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1056ff90 jmp 0x1056ffa4 */
  goto L_1056ffa4;
L_1056ff92:;
  /* 1056ff92 mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1056ff98 push edx */
  push32((uint32_t)(EDX));
  /* 1056ff99 call 0x10570610 */
  push32(0x1056ff9eu); f_10570610();
  /* 1056ff9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056ffa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1056ffa4:;
  /* 1056ffa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1056ffa7 mov dword ptr [0x1058f78c], eax */
  w32((uint32_t)(0x1058f78c), (EAX));
  /* 1056ffac push 1 */
  push32((uint32_t)(0x1u));
  /* 1056ffae push 0x1056ffe0 */
  push32((uint32_t)(0x1056ffe0u));
  /* 1056ffb3 call dword ptr [0x10592290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592290))), 0x1056ffb9u);
  /* 1056ffb9 mov ecx, dword ptr [0x1058f79c] */
  ECX = (r32((uint32_t)(0x1058f79c)));
  /* 1056ffbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1056ffc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1056ffc4 jne 0x1056ffd0 */
  if (!C.zf) goto L_1056ffd0;
  /* 1056ffc6 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
L_1056ffd0:;
  /* 1056ffd0 mov esp, ebp */
  ESP = (EBP);
  /* 1056ffd2 pop ebp */
  EBP = (pop32());
  /* 1056ffd3 ret  */
  ESPCHK(0x1056ff60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffe0 @ 0x1056ffe0 (287 bytes, 86 insns) */
void f_1056ffe0(void) {
  FTRACE(0x1056ffe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1056ffe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1056ffe1 mov ebp, esp */
  EBP = (ESP);
  /* 1056ffe3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1056ffe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1056ffe9 push eax */
  push32((uint32_t)(EAX));
  /* 1056ffea call 0x10570590 */
  push32(0x1056ffefu); f_10570590();
  /* 1056ffef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1056fff2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1056fff5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1056fff7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1056fffa push ecx */
  push32((uint32_t)(ECX));
  /* 1056fffb mov edx, dword ptr [0x1058f790] */
  EDX = (r32((uint32_t)(0x1058f790)));
  /* 10570001 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10570003 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570005 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1057000b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570011 push edx */
  push32((uint32_t)(EDX));
  /* 10570012 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10570015 push eax */
  push32((uint32_t)(EAX));
  /* 10570016 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1057001cu);
  /* 1057001c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057001e jne 0x10570034 */
  if (!C.zf) goto L_10570034;
  /* 10570020 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
  /* 1057002a mov eax, 1 */
  EAX = (0x1u);
  /* 1057002f jmp 0x105700f9 */
  goto L_105700f9;
L_10570034:;
  /* 10570034 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10570037 push ecx */
  push32((uint32_t)(ECX));
  /* 10570038 mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1057003e push edx */
  push32((uint32_t)(EDX));
  /* 1057003f call 0x105721d0 */
  push32(0x10570044u); f_105721d0();
  /* 10570044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570049 jne 0x10570089 */
  if (!C.zf) goto L_10570089;
  /* 1057004b cmp dword ptr [0x1058f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570052 jne 0x10570066 */
  if (!C.zf) goto L_10570066;
  /* 10570054 push 1 */
  push32((uint32_t)(0x1u));
  /* 10570056 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10570059 push eax */
  push32((uint32_t)(EAX));
  /* 1057005a call 0x10570320 */
  push32(0x1057005fu); f_10570320();
  /* 1057005f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570064 je 0x10570087 */
  if (C.zf) goto L_10570087;
L_10570066:;
  /* 10570066 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10570069 mov dword ptr [0x1058f7a0], ecx */
  w32((uint32_t)(0x1058f7a0), (ECX));
  /* 1057006f mov edx, dword ptr [0x1058f7a0] */
  EDX = (r32((uint32_t)(0x1058f7a0)));
  /* 10570075 mov dword ptr [0x1058f784], edx */
  w32((uint32_t)(0x1058f784), (EDX));
  /* 1057007b mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 10570080 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10570082 mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
L_10570087:;
  /* 10570087 jmp 0x105700ec */
  goto L_105700ec;
L_10570089:;
  /* 10570089 cmp dword ptr [0x1058f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570090 jne 0x105700ec */
  if (!C.zf) goto L_105700ec;
  /* 10570092 cmp dword ptr [0x1058f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1058f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570099 je 0x105700ec */
  if (C.zf) goto L_105700ec;
  /* 1057009b mov ecx, dword ptr [0x1058f78c] */
  ECX = (r32((uint32_t)(0x1058f78c)));
  /* 105700a1 push ecx */
  push32((uint32_t)(ECX));
  /* 105700a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 105700a5 push edx */
  push32((uint32_t)(EDX));
  /* 105700a6 mov eax, dword ptr [0x1058f794] */
  EAX = (r32((uint32_t)(0x1058f794)));
  /* 105700ab push eax */
  push32((uint32_t)(EAX));
  /* 105700ac call 0x105722a0 */
  push32(0x105700b1u); f_105722a0();
  /* 105700b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105700b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105700b6 jne 0x105700ec */
  if (!C.zf) goto L_105700ec;
  /* 105700b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105700ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105700bd push ecx */
  push32((uint32_t)(ECX));
  /* 105700be call 0x10570320 */
  push32(0x105700c3u); f_10570320();
  /* 105700c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105700c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105700c8 je 0x105700ec */
  if (C.zf) goto L_105700ec;
  /* 105700ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105700cd mov dword ptr [0x1058f7a0], edx */
  w32((uint32_t)(0x1058f7a0), (EDX));
  /* 105700d3 mov eax, dword ptr [0x1058f7a0] */
  EAX = (r32((uint32_t)(0x1058f7a0)));
  /* 105700d8 mov dword ptr [0x1058f784], eax */
  w32((uint32_t)(0x1058f784), (EAX));
  /* 105700dd mov ecx, dword ptr [0x1058f79c] */
  ECX = (r32((uint32_t)(0x1058f79c)));
  /* 105700e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105700e6 mov dword ptr [0x1058f79c], ecx */
  w32((uint32_t)(0x1058f79c), (ECX));
L_105700ec:;
  /* 105700ec mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 105700f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105700f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105700f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105700f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105700f9:;
  /* 105700f9 mov esp, ebp */
  ESP = (EBP);
  /* 105700fb pop ebp */
  EBP = (pop32());
  /* 105700fc ret 4 */
  ESPCHK(0x1056ffe0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010100 @ 0x10570100 (69 bytes, 20 insns) */
void f_10570100(void) {
  FTRACE(0x10570100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570100 push ebp */
  push32((uint32_t)(EBP));
  /* 10570101 mov ebp, esp */
  EBP = (ESP);
  /* 10570103 mov eax, dword ptr [0x1058f798] */
  EAX = (r32((uint32_t)(0x1058f798)));
  /* 10570108 push eax */
  push32((uint32_t)(EAX));
  /* 10570109 call 0x10566930 */
  push32(0x1057010eu); f_10566930();
  /* 1057010e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570111 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10570113 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570116 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10570119 mov dword ptr [0x1058f788], ecx */
  w32((uint32_t)(0x1058f788), (ECX));
  /* 1057011f push 1 */
  push32((uint32_t)(0x1u));
  /* 10570121 push 0x10570150 */
  push32((uint32_t)(0x10570150u));
  /* 10570126 call dword ptr [0x10592290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592290))), 0x1057012cu);
  /* 1057012c mov edx, dword ptr [0x1058f79c] */
  EDX = (r32((uint32_t)(0x1058f79c)));
  /* 10570132 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10570135 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10570137 jne 0x10570143 */
  if (!C.zf) goto L_10570143;
  /* 10570139 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
L_10570143:;
  /* 10570143 pop ebp */
  EBP = (pop32());
  /* 10570144 ret  */
  ESPCHK(0x10570100u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x10570150 (172 bytes, 54 insns) */
void f_10570150(void) {
  FTRACE(0x10570150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570150 push ebp */
  push32((uint32_t)(EBP));
  /* 10570151 mov ebp, esp */
  EBP = (ESP);
  /* 10570153 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570159 push eax */
  push32((uint32_t)(EAX));
  /* 1057015a call 0x10570590 */
  push32(0x1057015fu); f_10570590();
  /* 1057015f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570162 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10570165 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10570167 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1057016a push ecx */
  push32((uint32_t)(ECX));
  /* 1057016b mov edx, dword ptr [0x1058f788] */
  EDX = (r32((uint32_t)(0x1058f788)));
  /* 10570171 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10570173 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570175 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1057017b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570181 push edx */
  push32((uint32_t)(EDX));
  /* 10570182 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10570185 push eax */
  push32((uint32_t)(EAX));
  /* 10570186 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x1057018cu);
  /* 1057018c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1057018e jne 0x105701a1 */
  if (!C.zf) goto L_105701a1;
  /* 10570190 mov dword ptr [0x1058f79c], 0 */
  w32((uint32_t)(0x1058f79c), (0x0u));
  /* 1057019a mov eax, 1 */
  EAX = (0x1u);
  /* 1057019f jmp 0x105701f6 */
  goto L_105701f6;
L_105701a1:;
  /* 105701a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105701a4 push ecx */
  push32((uint32_t)(ECX));
  /* 105701a5 mov edx, dword ptr [0x1058f798] */
  EDX = (r32((uint32_t)(0x1058f798)));
  /* 105701ab push edx */
  push32((uint32_t)(EDX));
  /* 105701ac call 0x105721d0 */
  push32(0x105701b1u); f_105721d0();
  /* 105701b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105701b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105701b6 jne 0x105701e9 */
  if (!C.zf) goto L_105701e9;
  /* 105701b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105701bb push eax */
  push32((uint32_t)(EAX));
  /* 105701bc call 0x105702d0 */
  push32(0x105701c1u); f_105702d0();
  /* 105701c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105701c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105701c6 je 0x105701e9 */
  if (C.zf) goto L_105701e9;
  /* 105701c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105701cb mov dword ptr [0x1058f7a0], ecx */
  w32((uint32_t)(0x1058f7a0), (ECX));
  /* 105701d1 mov edx, dword ptr [0x1058f7a0] */
  EDX = (r32((uint32_t)(0x1058f7a0)));
  /* 105701d7 mov dword ptr [0x1058f784], edx */
  w32((uint32_t)(0x1058f784), (EDX));
  /* 105701dd mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 105701e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 105701e4 mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
L_105701e9:;
  /* 105701e9 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 105701ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105701f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105701f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105701f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105701f6:;
  /* 105701f6 mov esp, ebp */
  ESP = (EBP);
  /* 105701f8 pop ebp */
  EBP = (pop32());
  /* 105701f9 ret 4 */
  ESPCHK(0x10570150u, _esp0);
  ESP += 8; return;
}

/* FUN_10010200 @ 0x10570200 (43 bytes, 11 insns) */
void f_10570200(void) {
  FTRACE(0x10570200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570200 push ebp */
  push32((uint32_t)(EBP));
  /* 10570201 mov ebp, esp */
  EBP = (ESP);
  /* 10570203 mov eax, dword ptr [0x1058f79c] */
  EAX = (r32((uint32_t)(0x1058f79c)));
  /* 10570208 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1057020d mov dword ptr [0x1058f79c], eax */
  w32((uint32_t)(0x1058f79c), (EAX));
  /* 10570212 call dword ptr [0x1059228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1059228c))), 0x10570218u);
  /* 10570218 mov dword ptr [0x1058f7a0], eax */
  w32((uint32_t)(0x1058f7a0), (EAX));
  /* 1057021d mov ecx, dword ptr [0x1058f7a0] */
  ECX = (r32((uint32_t)(0x1058f7a0)));
  /* 10570223 mov dword ptr [0x1058f784], ecx */
  w32((uint32_t)(0x1058f784), (ECX));
  /* 10570229 pop ebp */
  EBP = (pop32());
  /* 1057022a ret  */
  ESPCHK(0x10570200u, _esp0);
  ESP += 4; return;
}

/* FUN_10010230 @ 0x10570230 (155 bytes, 57 insns) */
void f_10570230(void) {
  FTRACE(0x10570230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570230 push ebp */
  push32((uint32_t)(EBP));
  /* 10570231 mov ebp, esp */
  EBP = (ESP);
  /* 10570233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570236 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057023a je 0x1057025b */
  if (C.zf) goto L_1057025b;
  /* 1057023c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057023f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10570242 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10570244 je 0x1057025b */
  if (C.zf) goto L_1057025b;
  /* 10570246 push 0x1058b884 */
  push32((uint32_t)(0x1058b884u));
  /* 1057024b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057024e push edx */
  push32((uint32_t)(EDX));
  /* 1057024f call 0x1056f790 */
  push32(0x10570254u); f_1056f790();
  /* 10570254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570259 jne 0x10570283 */
  if (!C.zf) goto L_10570283;
L_1057025b:;
  /* 1057025b push 8 */
  push32((uint32_t)(0x8u));
  /* 1057025d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10570260 push eax */
  push32((uint32_t)(EAX));
  /* 10570261 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10570266 mov ecx, dword ptr [0x1058f7a0] */
  ECX = (r32((uint32_t)(0x1058f7a0)));
  /* 1057026c push ecx */
  push32((uint32_t)(ECX));
  /* 1057026d call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x10570273u);
  /* 10570273 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570275 jne 0x1057027b */
  if (!C.zf) goto L_1057027b;
  /* 10570277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10570279 jmp 0x105702c7 */
  goto L_105702c7;
L_1057027b:;
  /* 1057027b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1057027e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10570281 jmp 0x105702bb */
  goto L_105702bb;
L_10570283:;
  /* 10570283 push 0x1058b880 */
  push32((uint32_t)(0x1058b880u));
  /* 10570288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057028b push eax */
  push32((uint32_t)(EAX));
  /* 1057028c call 0x1056f790 */
  push32(0x10570291u); f_1056f790();
  /* 10570291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570296 jne 0x105702bb */
  if (!C.zf) goto L_105702bb;
  /* 10570298 push 8 */
  push32((uint32_t)(0x8u));
  /* 1057029a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1057029d push ecx */
  push32((uint32_t)(ECX));
  /* 1057029e push 0xb */
  push32((uint32_t)(0xbu));
  /* 105702a0 mov edx, dword ptr [0x1058f7a0] */
  EDX = (r32((uint32_t)(0x1058f7a0)));
  /* 105702a6 push edx */
  push32((uint32_t)(EDX));
  /* 105702a7 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x105702adu);
  /* 105702ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105702af jne 0x105702b5 */
  if (!C.zf) goto L_105702b5;
  /* 105702b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105702b3 jmp 0x105702c7 */
  goto L_105702c7;
L_105702b5:;
  /* 105702b5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105702b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105702bb:;
  /* 105702bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105702be push ecx */
  push32((uint32_t)(ECX));
  /* 105702bf call 0x105723b0 */
  push32(0x105702c4u); f_105723b0();
  /* 105702c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105702c7:;
  /* 105702c7 mov esp, ebp */
  ESP = (EBP);
  /* 105702c9 pop ebp */
  EBP = (pop32());
  /* 105702ca ret  */
  ESPCHK(0x10570230u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x105702d0 (79 bytes, 26 insns) */
void f_105702d0(void) {
  FTRACE(0x105702d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105702d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105702d1 mov ebp, esp */
  EBP = (ESP);
  /* 105702d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105702d6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 105702da mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 105702de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105702e5 jmp 0x105702f0 */
  goto L_105702f0;
L_105702e7:;
  /* 105702e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105702ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105702ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105702f0:;
  /* 105702f0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105702f4 jae 0x10570316 */
  if (!C.cf) goto L_10570316;
  /* 105702f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105702f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105702ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10570304 mov cx, word ptr [eax*2 + 0x1058e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1058e9c4)));
  /* 1057030c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057030e jne 0x10570314 */
  if (!C.zf) goto L_10570314;
  /* 10570310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10570312 jmp 0x1057031b */
  goto L_1057031b;
L_10570314:;
  /* 10570314 jmp 0x105702e7 */
  goto L_105702e7;
L_10570316:;
  /* 10570316 mov eax, 1 */
  EAX = (0x1u);
L_1057031b:;
  /* 1057031b mov esp, ebp */
  ESP = (EBP);
  /* 1057031d pop ebp */
  EBP = (pop32());
  /* 1057031e ret  */
  ESPCHK(0x105702d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x10570320 (135 bytes, 48 insns) */
void f_10570320(void) {
  FTRACE(0x10570320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570320 push ebp */
  push32((uint32_t)(EBP));
  /* 10570321 mov ebp, esp */
  EBP = (ESP);
  /* 10570323 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570326 push esi */
  push32((uint32_t)(ESI));
  /* 10570327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057032a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1057032f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10570334 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10570339 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1057033c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10570341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10570344 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10570346 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10570349 push ecx */
  push32((uint32_t)(ECX));
  /* 1057034a push 1 */
  push32((uint32_t)(0x1u));
  /* 1057034c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1057034f push edx */
  push32((uint32_t)(EDX));
  /* 10570350 call dword ptr [0x1058f7a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1058f7a4))), 0x10570356u);
  /* 10570356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570358 jne 0x1057035e */
  if (!C.zf) goto L_1057035e;
  /* 1057035a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057035c jmp 0x105703a2 */
  goto L_105703a2;
L_1057035e:;
  /* 1057035e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10570361 push eax */
  push32((uint32_t)(EAX));
  /* 10570362 call 0x10570590 */
  push32(0x10570367u); f_10570590();
  /* 10570367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057036a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057036d je 0x1057039d */
  if (C.zf) goto L_1057039d;
  /* 1057036f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570373 je 0x1057039d */
  if (C.zf) goto L_1057039d;
  /* 10570375 mov ecx, dword ptr [0x1058f794] */
  ECX = (r32((uint32_t)(0x1058f794)));
  /* 1057037b push ecx */
  push32((uint32_t)(ECX));
  /* 1057037c call 0x10570610 */
  push32(0x10570381u); f_10570610();
  /* 10570381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570384 mov esi, eax */
  ESI = (EAX);
  /* 10570386 mov edx, dword ptr [0x1058f794] */
  EDX = (r32((uint32_t)(0x1058f794)));
  /* 1057038c push edx */
  push32((uint32_t)(EDX));
  /* 1057038d call 0x10566930 */
  push32(0x10570392u); f_10566930();
  /* 10570392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570395 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570397 jne 0x1057039d */
  if (!C.zf) goto L_1057039d;
  /* 10570399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1057039b jmp 0x105703a2 */
  goto L_105703a2;
L_1057039d:;
  /* 1057039d mov eax, 1 */
  EAX = (0x1u);
L_105703a2:;
  /* 105703a2 pop esi */
  ESI = (pop32());
  /* 105703a3 mov esp, ebp */
  ESP = (EBP);
  /* 105703a5 pop ebp */
  EBP = (pop32());
  /* 105703a6 ret  */
  ESPCHK(0x10570320u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x105703b0 (77 bytes, 18 insns) */
void f_105703b0(void) {
  FTRACE(0x105703b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105703b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105703b1 mov ebp, esp */
  EBP = (ESP);
  /* 105703b3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105703b9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 105703c3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 105703c9 push eax */
  push32((uint32_t)(EAX));
  /* 105703ca call dword ptr [0x10592288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592288))), 0x105703d0u);
  /* 105703d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105703d2 je 0x105703e9 */
  if (C.zf) goto L_105703e9;
  /* 105703d4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105703db jne 0x105703e9 */
  if (!C.zf) goto L_105703e9;
  /* 105703dd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 105703e7 jmp 0x105703f3 */
  goto L_105703f3;
L_105703e9:;
  /* 105703e9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_105703f3:;
  /* 105703f3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105703f9 mov esp, ebp */
  ESP = (EBP);
  /* 105703fb pop ebp */
  EBP = (pop32());
  /* 105703fc ret  */
  ESPCHK(0x105703b0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10570400 (388 bytes, 118 insns) */
void f_10570400(void) {
  FTRACE(0x10570400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570400 push ebp */
  push32((uint32_t)(EBP));
  /* 10570401 mov ebp, esp */
  EBP = (ESP);
  /* 10570403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570406 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1057040d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10570414 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1057041b:;
  /* 1057041b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1057041e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570421 jg 0x10570568 */
  if ((!C.zf&&C.sf==C.of)) goto L_10570568;
  /* 10570427 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1057042a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057042d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1057042e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570430 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10570432 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10570435 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570438 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1057043b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057043e cmp edx, dword ptr [ecx + 0x1058e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1058e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570444 jne 0x1057053e */
  if (!C.zf) goto L_1057053e;
  /* 1057044a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1057044d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10570450 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570454 ja 0x10570477 */
  if ((!C.cf&&!C.zf)) goto L_10570477;
  /* 10570456 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057045a je 0x105704e9 */
  if (C.zf) goto L_105704e9;
  /* 10570460 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570464 je 0x10570494 */
  if (C.zf) goto L_10570494;
  /* 10570466 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057046a je 0x105704b6 */
  if (C.zf) goto L_105704b6;
  /* 1057046c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570470 je 0x105704d8 */
  if (C.zf) goto L_105704d8;
  /* 10570472 jmp 0x10570508 */
  goto L_10570508;
L_10570477:;
  /* 10570477 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057047e je 0x105704a5 */
  if (C.zf) goto L_105704a5;
  /* 10570480 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570487 je 0x105704c7 */
  if (C.zf) goto L_105704c7;
  /* 10570489 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570490 je 0x105704fa */
  if (C.zf) goto L_105704fa;
  /* 10570492 jmp 0x10570508 */
  goto L_10570508;
L_10570494:;
  /* 10570494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570497 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1057049a add ecx, 0x1058e524 */
  { uint32_t _a=(ECX),_b=(0x1058e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105704a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105704a3 jmp 0x10570508 */
  goto L_10570508;
L_105704a5:;
  /* 105704a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105704a8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105704ab mov eax, dword ptr [edx + 0x1058e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1058e52c)));
  /* 105704b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105704b4 jmp 0x10570508 */
  goto L_10570508;
L_105704b6:;
  /* 105704b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105704b9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105704bc add ecx, 0x1058e530 */
  { uint32_t _a=(ECX),_b=(0x1058e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105704c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105704c5 jmp 0x10570508 */
  goto L_10570508;
L_105704c7:;
  /* 105704c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105704ca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105704cd mov eax, dword ptr [edx + 0x1058e534] */
  EAX = (r32((uint32_t)(EDX + 0x1058e534)));
  /* 105704d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105704d6 jmp 0x10570508 */
  goto L_10570508;
L_105704d8:;
  /* 105704d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105704db imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105704de add ecx, 0x1058e538 */
  { uint32_t _a=(ECX),_b=(0x1058e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105704e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105704e7 jmp 0x10570508 */
  goto L_10570508;
L_105704e9:;
  /* 105704e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105704ec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105704ef add edx, 0x1058e53c */
  { uint32_t _a=(EDX),_b=(0x1058e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105704f5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105704f8 jmp 0x10570508 */
  goto L_10570508;
L_105704fa:;
  /* 105704fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105704fd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10570500 add eax, 0x1058e544 */
  { uint32_t _a=(EAX),_b=(0x1058e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570505 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10570508:;
  /* 10570508 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057050c je 0x10570514 */
  if (C.zf) goto L_10570514;
  /* 1057050e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570512 jge 0x10570516 */
  if ((C.sf==C.of)) goto L_10570516;
L_10570514:;
  /* 10570514 jmp 0x10570568 */
  goto L_10570568;
L_10570516:;
  /* 10570516 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10570519 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1057051c push ecx */
  push32((uint32_t)(ECX));
  /* 1057051d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570520 push edx */
  push32((uint32_t)(EDX));
  /* 10570521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570524 push eax */
  push32((uint32_t)(EAX));
  /* 10570525 call 0x10567320 */
  push32(0x1057052au); f_10567320();
  /* 1057052a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057052d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10570530 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570533 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10570537 mov eax, 1 */
  EAX = (0x1u);
  /* 1057053c jmp 0x1057057e */
  goto L_1057057e;
L_1057053e:;
  /* 1057053e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570541 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10570544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570547 cmp eax, dword ptr [edx + 0x1058e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1058e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057054d jae 0x1057055a */
  if (!C.cf) goto L_1057055a;
  /* 1057054f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10570552 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570555 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10570558 jmp 0x10570563 */
  goto L_10570563;
L_1057055a:;
  /* 1057055a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1057055d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570560 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10570563:;
  /* 10570563 jmp 0x1057041b */
  goto L_1057041b;
L_10570568:;
  /* 10570568 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1057056b push eax */
  push32((uint32_t)(EAX));
  /* 1057056c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1057056f push ecx */
  push32((uint32_t)(ECX));
  /* 10570570 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10570573 push edx */
  push32((uint32_t)(EDX));
  /* 10570574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570577 push eax */
  push32((uint32_t)(EAX));
  /* 10570578 call dword ptr [0x10592294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592294))), 0x1057057eu);
L_1057057e:;
  /* 1057057e mov esp, ebp */
  ESP = (EBP);
  /* 10570580 pop ebp */
  EBP = (pop32());
  /* 10570581 ret 0x10 */
  ESPCHK(0x10570400u, _esp0);
  ESP += 20; return;
}

/* FUN_10010590 @ 0x10570590 (118 bytes, 42 insns) */
void f_10570590(void) {
  FTRACE(0x10570590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570590 push ebp */
  push32((uint32_t)(EBP));
  /* 10570591 mov ebp, esp */
  EBP = (ESP);
  /* 10570593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1057059d:;
  /* 1057059d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105705a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105705a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 105705a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105705a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105705ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105705af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105705b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105705b4 je 0x105705ff */
  if (C.zf) goto L_105705ff;
  /* 105705b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105705ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105705bd jl 0x105705d2 */
  if ((C.sf!=C.of)) goto L_105705d2;
  /* 105705bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105705c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105705c6 jg 0x105705d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_105705d2;
  /* 105705c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105705cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105705cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 105705d0 jmp 0x105705ec */
  goto L_105705ec;
L_105705d2:;
  /* 105705d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105705d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105705d9 jl 0x105705ec */
  if ((C.sf!=C.of)) goto L_105705ec;
  /* 105705db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105705df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105705e2 jg 0x105705ec */
  if ((!C.zf&&C.sf==C.of)) goto L_105705ec;
  /* 105705e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105705e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105705e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_105705ec:;
  /* 105705ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105705ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105705f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105705f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 105705fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105705fd jmp 0x1057059d */
  goto L_1057059d;
L_105705ff:;
  /* 105705ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570602 mov esp, ebp */
  ESP = (EBP);
  /* 10570604 pop ebp */
  EBP = (pop32());
  /* 10570605 ret  */
  ESPCHK(0x10570590u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10570610 (101 bytes, 36 insns) */
void f_10570610(void) {
  FTRACE(0x10570610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570610 push ebp */
  push32((uint32_t)(EBP));
  /* 10570611 mov ebp, esp */
  EBP = (ESP);
  /* 10570613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10570616 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1057061d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570620 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10570622 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10570625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1057062b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1057062e:;
  /* 1057062e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10570632 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570635 jl 0x10570640 */
  if ((C.sf!=C.of)) goto L_10570640;
  /* 10570637 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1057063b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057063e jle 0x10570652 */
  if ((C.zf||C.sf!=C.of)) goto L_10570652;
L_10570640:;
  /* 10570640 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10570644 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570647 jl 0x1057066e */
  if ((C.sf!=C.of)) goto L_1057066e;
  /* 10570649 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1057064d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570650 jg 0x1057066e */
  if ((!C.zf&&C.sf==C.of)) goto L_1057066e;
L_10570652:;
  /* 10570652 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1057065b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057065e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10570660 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10570663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570666 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10570669 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1057066c jmp 0x1057062e */
  goto L_1057062e;
L_1057066e:;
  /* 1057066e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10570671 mov esp, ebp */
  ESP = (EBP);
  /* 10570673 pop ebp */
  EBP = (pop32());
  /* 10570674 ret  */
  ESPCHK(0x10570610u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x10570680 (122 bytes, 39 insns) */
void f_10570680(void) {
  FTRACE(0x10570680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570680 push ebp */
  push32((uint32_t)(EBP));
  /* 10570681 mov ebp, esp */
  EBP = (ESP);
  /* 10570683 push ecx */
  push32((uint32_t)(ECX));
  /* 10570684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570687 cmp eax, dword ptr [0x1059103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1059103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057068d jae 0x105706b1 */
  if (!C.cf) goto L_105706b1;
  /* 1057068f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570692 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10570695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570698 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1057069b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1057069e mov eax, dword ptr [ecx*4 + 0x10590f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10590f00)));
  /* 105706a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105706aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105706ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105706af jne 0x105706cc */
  if (!C.zf) goto L_105706cc;
L_105706b1:;
  /* 105706b1 call 0x1056b9d0 */
  push32(0x105706b6u); f_1056b9d0();
  /* 105706b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105706bc call 0x1056b9e0 */
  push32(0x105706c1u); f_1056b9e0();
  /* 105706c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105706c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105706ca jmp 0x105706f6 */
  goto L_105706f6;
L_105706cc:;
  /* 105706cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105706cf push edx */
  push32((uint32_t)(EDX));
  /* 105706d0 call 0x1056d1f0 */
  push32(0x105706d5u); f_1056d1f0();
  /* 105706d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105706d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105706db push eax */
  push32((uint32_t)(EAX));
  /* 105706dc call 0x10570700 */
  push32(0x105706e1u); f_10570700();
  /* 105706e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105706e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105706e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105706ea push ecx */
  push32((uint32_t)(ECX));
  /* 105706eb call 0x1056d280 */
  push32(0x105706f0u); f_1056d280();
  /* 105706f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105706f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105706f6:;
  /* 105706f6 mov esp, ebp */
  ESP = (EBP);
  /* 105706f8 pop ebp */
  EBP = (pop32());
  /* 105706f9 ret  */
  ESPCHK(0x10570680u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10570700 (170 bytes, 59 insns) */
void f_10570700(void) {
  FTRACE(0x10570700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10570700 push ebp */
  push32((uint32_t)(EBP));
  /* 10570701 mov ebp, esp */
  EBP = (ESP);
  /* 10570703 push ecx */
  push32((uint32_t)(ECX));
  /* 10570704 push esi */
  push32((uint32_t)(ESI));
  /* 10570705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570708 push eax */
  push32((uint32_t)(EAX));
  /* 10570709 call 0x1056d070 */
  push32(0x1057070eu); f_1056d070();
  /* 1057070e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570711 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570714 je 0x10570753 */
  if (C.zf) goto L_10570753;
  /* 10570716 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057071a je 0x10570722 */
  if (C.zf) goto L_10570722;
  /* 1057071c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570720 jne 0x1057073c */
  if (!C.zf) goto L_1057073c;
L_10570722:;
  /* 10570722 push 1 */
  push32((uint32_t)(0x1u));
  /* 10570724 call 0x1056d070 */
  push32(0x10570729u); f_1056d070();
  /* 10570729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057072c mov esi, eax */
  ESI = (EAX);
  /* 1057072e push 2 */
  push32((uint32_t)(0x2u));
  /* 10570730 call 0x1056d070 */
  push32(0x10570735u); f_1056d070();
  /* 10570735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570738 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1057073a je 0x10570753 */
  if (C.zf) goto L_10570753;
L_1057073c:;
  /* 1057073c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057073f push ecx */
  push32((uint32_t)(ECX));
  /* 10570740 call 0x1056d070 */
  push32(0x10570745u); f_1056d070();
  /* 10570745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570748 push eax */
  push32((uint32_t)(EAX));
  /* 10570749 call dword ptr [0x10592284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592284))), 0x1057074fu);
  /* 1057074f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10570751 je 0x1057075c */
  if (C.zf) goto L_1057075c;
L_10570753:;
  /* 10570753 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1057075a jmp 0x10570765 */
  goto L_10570765;
L_1057075c:;
  /* 1057075c call dword ptr [0x10592320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10592320))), 0x10570762u);
  /* 10570762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10570765:;
  /* 10570765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570768 push edx */
  push32((uint32_t)(EDX));
  /* 10570769 call 0x1056cf90 */
  push32(0x1057076eu); f_1056cf90();
  /* 1057076e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10570771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570774 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10570777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057077a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1057077d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10570780 mov edx, dword ptr [eax*4 + 0x10590f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10590f00)));
  /* 10570787 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1057078c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10570790 je 0x105707a3 */
  if (C.zf) goto L_105707a3;
  /* 10570792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10570795 push eax */
  push32((uint32_t)(EAX));
  /* 10570796 call 0x1056b930 */
  push32(0x1057079bu); f_1056b930();
  /* 1057079b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057079e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105707a1 jmp 0x105707a5 */
  goto L_105707a5;
L_105707a3:;
  /* 105707a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105707a5:;
  /* 105707a5 pop esi */
  ESI = (pop32());
  /* 105707a6 mov esp, ebp */
  ESP = (EBP);
  /* 105707a8 pop ebp */
  EBP = (pop32());
  /* 105707a9 ret  */
  ESPCHK(0x10570700u, _esp0);
  ESP += 4; return;
}

/* FUN_100107b0 @ 0x105707b0 (146 bytes, 52 insns) */
void f_105707b0(void) {
  FTRACE(0x105707b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105707b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105707b1 mov ebp, esp */
  EBP = (ESP);
  /* 105707b3 push ebx */
  push32((uint32_t)(EBX));
  /* 105707b4 push esi */
  push32((uint32_t)(ESI));
  /* 105707b5 push edi */
  push32((uint32_t)(EDI));
L_105707b6:;
  /* 105707b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105707ba jne 0x105707da */
  if (!C.zf) goto L_105707da;
  /* 105707bc push 0x1058b1c0 */
  push32((uint32_t)(0x1058b1c0u));
  /* 105707c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105707c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105707c5 push 0x1058b888 */
  push32((uint32_t)(0x1058b888u));
  /* 105707ca push 2 */
  push32((uint32_t)(0x2u));
  /* 105707cc call 0x10562bc0 */
  push32(0x105707d1u); f_10562bc0();
  /* 105707d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105707d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105707d7 jne 0x105707da */
  if (!C.zf) goto L_105707da;
  /* 105707d9 int3  */
  x86_unimpl("int3 @ 0x105707d9");
L_105707da:;
  /* 105707da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105707dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105707de jne 0x105707b6 */
  if (!C.zf) goto L_105707b6;
  /* 105707e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105707e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105707e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 105707ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105707ee je 0x1057083d */
  if (C.zf) goto L_1057083d;
  /* 105707f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105707f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105707f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 105707f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105707fb je 0x1057083d */
  if (C.zf) goto L_1057083d;
  /* 105707fd push 2 */
  push32((uint32_t)(0x2u));
  /* 105707ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570802 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10570805 push eax */
  push32((uint32_t)(EAX));
  /* 10570806 call 0x10564590 */
  push32(0x1057080bu); f_10564590();
  /* 1057080b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1057080e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570811 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10570814 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1057081a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057081d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10570820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570823 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10570829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1057082c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10570833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10570836 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1057083d:;
  /* 1057083d pop edi */
  EDI = (pop32());
  /* 1057083e pop esi */
  ESI = (pop32());
  /* 1057083f pop ebx */
  EBX = (pop32());
  /* 10570840 pop ebp */
  EBP = (pop32());
  /* 10570841 ret  */
  ESPCHK(0x105707b0u, _esp0);
  ESP += 4; return;
}

