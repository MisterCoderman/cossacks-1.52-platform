#include "recomp.h"

/* FUN_10016b40 @ 0x121e6b40 (878 bytes, 273 insns) */
void f_121e6b40(void) {
  FTRACE(0x121e6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6b41 mov ebp, esp */
  EBP = (ESP);
  /* 121e6b43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6b46 push esi */
  push32((uint32_t)(ESI));
  /* 121e6b47 mov eax, dword ptr [0x12204c98] */
  EAX = (r32((uint32_t)(0x12204c98)));
  /* 121e6b4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e6b4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e6b56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e6b5d jmp 0x121e6b68 */
  goto L_121e6b68;
L_121e6b5f:;
  /* 121e6b5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6b62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121e6b68:;
  /* 121e6b68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6b6c jae 0x121e6ba1 */
  if (!C.cf) goto L_121e6ba1;
  /* 121e6b6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6b71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6b74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121e6b77 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6b78 call 0x121dc9c0 */
  push32(0x121e6b7du); f_121dc9c0();
  /* 121e6b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b80 mov esi, eax */
  ESI = (EAX);
  /* 121e6b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6b85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6b88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 121e6b8c push ecx */
  push32((uint32_t)(ECX));
  /* 121e6b8d call 0x121dc9c0 */
  push32(0x121e6b92u); f_121dc9c0();
  /* 121e6b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121e6b9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e6b9f jmp 0x121e6b5f */
  goto L_121e6b5f;
L_121e6ba1:;
  /* 121e6ba1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e6ba8 jmp 0x121e6bb3 */
  goto L_121e6bb3;
L_121e6baa:;
  /* 121e6baa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6bad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6bb0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121e6bb3:;
  /* 121e6bb3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6bb7 jae 0x121e6bed */
  if (!C.cf) goto L_121e6bed;
  /* 121e6bb9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6bbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6bbf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121e6bc3 push eax */
  push32((uint32_t)(EAX));
  /* 121e6bc4 call 0x121dc9c0 */
  push32(0x121e6bc9u); f_121dc9c0();
  /* 121e6bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6bcc mov esi, eax */
  ESI = (EAX);
  /* 121e6bce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6bd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6bd4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121e6bd8 push eax */
  push32((uint32_t)(EAX));
  /* 121e6bd9 call 0x121dc9c0 */
  push32(0x121e6bdeu); f_121dc9c0();
  /* 121e6bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6be1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6be4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121e6be8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e6beb jmp 0x121e6baa */
  goto L_121e6baa;
L_121e6bed:;
  /* 121e6bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6bf0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 121e6bf6 push eax */
  push32((uint32_t)(EAX));
  /* 121e6bf7 call 0x121dc9c0 */
  push32(0x121e6bfcu); f_121dc9c0();
  /* 121e6bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6bff mov esi, eax */
  ESI = (EAX);
  /* 121e6c01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6c04 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 121e6c0a push edx */
  push32((uint32_t)(EDX));
  /* 121e6c0b call 0x121dc9c0 */
  push32(0x121e6c10u); f_121dc9c0();
  /* 121e6c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c13 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c16 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121e6c1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e6c1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6c20 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 121e6c26 push edx */
  push32((uint32_t)(EDX));
  /* 121e6c27 call 0x121dc9c0 */
  push32(0x121e6c2cu); f_121dc9c0();
  /* 121e6c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6c32 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121e6c36 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e6c39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6c3c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 121e6c42 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6c43 call 0x121dc9c0 */
  push32(0x121e6c48u); f_121dc9c0();
  /* 121e6c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6c4e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121e6c52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e6c55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6c58 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 121e6c5e push edx */
  push32((uint32_t)(EDX));
  /* 121e6c5f call 0x121dc9c0 */
  push32(0x121e6c64u); f_121dc9c0();
  /* 121e6c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6c6a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121e6c6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e6c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6c74 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c79 push eax */
  push32((uint32_t)(EAX));
  /* 121e6c7a call 0x121d9b70 */
  push32(0x121e6c7fu); f_121d9b70();
  /* 121e6c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e6c85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6c89 je 0x121e6ea6 */
  if (C.zf) goto L_121e6ea6;
  /* 121e6c8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6c92 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121e6c95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6c98 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6c9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e6ca1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 121e6ca6 mov eax, dword ptr [0x12204c98] */
  EAX = (r32((uint32_t)(0x12204c98)));
  /* 121e6cab push eax */
  push32((uint32_t)(EAX));
  /* 121e6cac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6caf push ecx */
  push32((uint32_t)(ECX));
  /* 121e6cb0 call 0x121e0470 */
  push32(0x121e6cb5u); f_121e0470();
  /* 121e6cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6cb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e6cbf jmp 0x121e6cca */
  goto L_121e6cca;
L_121e6cc1:;
  /* 121e6cc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6cc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6cc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e6cca:;
  /* 121e6cca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6cce jae 0x121e6d3e */
  if (!C.cf) goto L_121e6d3e;
  /* 121e6cd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6cd3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6cd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6cd9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 121e6cdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6cdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6ce2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e6ce5 push edx */
  push32((uint32_t)(EDX));
  /* 121e6ce6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ce9 push eax */
  push32((uint32_t)(EAX));
  /* 121e6cea call 0x121dcb40 */
  push32(0x121e6cefu); f_121dcb40();
  /* 121e6cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6cf2 push eax */
  push32((uint32_t)(EAX));
  /* 121e6cf3 call 0x121dc9c0 */
  push32(0x121e6cf8u); f_121dc9c0();
  /* 121e6cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6cfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6cfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121e6d02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e6d05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6d0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 121e6d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6d18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 121e6d1c push edx */
  push32((uint32_t)(EDX));
  /* 121e6d1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d20 push eax */
  push32((uint32_t)(EAX));
  /* 121e6d21 call 0x121dcb40 */
  push32(0x121e6d26u); f_121dcb40();
  /* 121e6d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6d29 push eax */
  push32((uint32_t)(EAX));
  /* 121e6d2a call 0x121dc9c0 */
  push32(0x121e6d2fu); f_121dc9c0();
  /* 121e6d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6d32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121e6d39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e6d3c jmp 0x121e6cc1 */
  goto L_121e6cc1;
L_121e6d3e:;
  /* 121e6d3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e6d45 jmp 0x121e6d50 */
  goto L_121e6d50;
L_121e6d47:;
  /* 121e6d47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6d4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121e6d50:;
  /* 121e6d50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6d54 jae 0x121e6dc6 */
  if (!C.cf) goto L_121e6dc6;
  /* 121e6d56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6d5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 121e6d63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6d69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121e6d6d push eax */
  push32((uint32_t)(EAX));
  /* 121e6d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d71 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6d72 call 0x121dcb40 */
  push32(0x121e6d77u); f_121dcb40();
  /* 121e6d77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6d7a push eax */
  push32((uint32_t)(EAX));
  /* 121e6d7b call 0x121dc9c0 */
  push32(0x121e6d80u); f_121dc9c0();
  /* 121e6d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6d83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121e6d8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e6d8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6d93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6d96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 121e6d9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6d9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6da0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121e6da4 push eax */
  push32((uint32_t)(EAX));
  /* 121e6da5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6da8 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6da9 call 0x121dcb40 */
  push32(0x121e6daeu); f_121dcb40();
  /* 121e6dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6db1 push eax */
  push32((uint32_t)(EAX));
  /* 121e6db2 call 0x121dc9c0 */
  push32(0x121e6db7u); f_121dc9c0();
  /* 121e6db7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6dba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6dbd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121e6dc1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e6dc4 jmp 0x121e6d47 */
  goto L_121e6d47;
L_121e6dc6:;
  /* 121e6dc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6dc9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6dcc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 121e6dd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6dd5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 121e6ddb push ecx */
  push32((uint32_t)(ECX));
  /* 121e6ddc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ddf push edx */
  push32((uint32_t)(EDX));
  /* 121e6de0 call 0x121dcb40 */
  push32(0x121e6de5u); f_121dcb40();
  /* 121e6de5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6de8 push eax */
  push32((uint32_t)(EAX));
  /* 121e6de9 call 0x121dc9c0 */
  push32(0x121e6deeu); f_121dc9c0();
  /* 121e6dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6df1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6df4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121e6df8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e6dfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6dfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 121e6e07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6e0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 121e6e10 push eax */
  push32((uint32_t)(EAX));
  /* 121e6e11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e14 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6e15 call 0x121dcb40 */
  push32(0x121e6e1au); f_121dcb40();
  /* 121e6e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6e1d push eax */
  push32((uint32_t)(EAX));
  /* 121e6e1e call 0x121dc9c0 */
  push32(0x121e6e23u); f_121dc9c0();
  /* 121e6e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6e26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121e6e2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e6e30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6e33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 121e6e3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6e3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 121e6e45 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6e46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e49 push edx */
  push32((uint32_t)(EDX));
  /* 121e6e4a call 0x121dcb40 */
  push32(0x121e6e4fu); f_121dcb40();
  /* 121e6e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6e52 push eax */
  push32((uint32_t)(EAX));
  /* 121e6e53 call 0x121dc9c0 */
  push32(0x121e6e58u); f_121dc9c0();
  /* 121e6e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6e5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121e6e62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e6e65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6e68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 121e6e71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6e74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 121e6e7a push eax */
  push32((uint32_t)(EAX));
  /* 121e6e7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e7e push ecx */
  push32((uint32_t)(ECX));
  /* 121e6e7f call 0x121dcb40 */
  push32(0x121e6e84u); f_121dcb40();
  /* 121e6e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6e87 push eax */
  push32((uint32_t)(EAX));
  /* 121e6e88 call 0x121dc9c0 */
  push32(0x121e6e8du); f_121dc9c0();
  /* 121e6e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6e90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6e93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121e6e97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e6e9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e6e9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ea0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_121e6ea6:;
  /* 121e6ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6ea9 pop esi */
  ESI = (pop32());
  /* 121e6eaa mov esp, ebp */
  ESP = (EBP);
  /* 121e6eac pop ebp */
  EBP = (pop32());
  /* 121e6ead ret  */
  ESPCHK(0x121e6b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016eb0 @ 0x121e6eb0 (31 bytes, 15 insns) */
void f_121e6eb0(void) {
  FTRACE(0x121e6eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6eb1 mov ebp, esp */
  EBP = (ESP);
  /* 121e6eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e6eb5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e6eb8 push eax */
  push32((uint32_t)(EAX));
  /* 121e6eb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6ebc push ecx */
  push32((uint32_t)(ECX));
  /* 121e6ebd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e6ec0 push edx */
  push32((uint32_t)(EDX));
  /* 121e6ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6ec4 push eax */
  push32((uint32_t)(EAX));
  /* 121e6ec5 call 0x121e6ed0 */
  push32(0x121e6ecau); f_121e6ed0();
  /* 121e6eca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6ecd pop ebp */
  EBP = (pop32());
  /* 121e6ece ret  */
  ESPCHK(0x121e6eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ed0 @ 0x121e6ed0 (393 bytes, 123 insns) */
void f_121e6ed0(void) {
  FTRACE(0x121e6ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6ed1 mov ebp, esp */
  EBP = (ESP);
  /* 121e6ed3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6ed6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6eda jne 0x121e6ee6 */
  if (!C.zf) goto L_121e6ee6;
  /* 121e6edc mov eax, dword ptr [0x12204c98] */
  EAX = (r32((uint32_t)(0x12204c98)));
  /* 121e6ee1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e6ee4 jmp 0x121e6eec */
  goto L_121e6eec;
L_121e6ee6:;
  /* 121e6ee6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e6ee9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121e6eec:;
  /* 121e6eec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6eef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e6ef2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e6ef5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e6ef8 push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e6efd call dword ptr [0x122083a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083a4))), 0x121e6f03u);
  /* 121e6f03 cmp dword ptr [0x12205b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6f0a je 0x121e6f2a */
  if (C.zf) goto L_121e6f2a;
  /* 121e6f0c push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e6f11 call dword ptr [0x12208394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208394))), 0x121e6f17u);
  /* 121e6f17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e6f19 call 0x121dd590 */
  push32(0x121e6f1eu); f_121dd590();
  /* 121e6f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6f21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121e6f28 jmp 0x121e6f31 */
  goto L_121e6f31;
L_121e6f2a:;
  /* 121e6f2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121e6f31:;
  /* 121e6f31 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6f35 jbe 0x121e7022 */
  if ((C.cf||C.zf)) goto L_121e7022;
  /* 121e6f3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6f3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e6f40 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 121e6f43 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e6f47 je 0x121e6f51 */
  if (C.zf) goto L_121e6f51;
  /* 121e6f49 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e6f4d je 0x121e6f56 */
  if (C.zf) goto L_121e6f56;
  /* 121e6f4f jmp 0x121e6fb0 */
  goto L_121e6fb0;
L_121e6f51:;
  /* 121e6f51 jmp 0x121e7022 */
  goto L_121e7022;
L_121e6f56:;
  /* 121e6f56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6f5c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 121e6f5f mov dword ptr [0x12205b20], 0 */
  w32((uint32_t)(0x12205b20), (0x0u));
  /* 121e6f69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6f6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e6f6f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6f72 jne 0x121e6f87 */
  if (!C.zf) goto L_121e6f87;
  /* 121e6f74 mov dword ptr [0x12205b20], 1 */
  w32((uint32_t)(0x12205b20), (0x1u));
  /* 121e6f7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6f81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6f84 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_121e6f87:;
  /* 121e6f87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6f8a push ecx */
  push32((uint32_t)(ECX));
  /* 121e6f8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 121e6f8e push edx */
  push32((uint32_t)(EDX));
  /* 121e6f8f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 121e6f92 push eax */
  push32((uint32_t)(EAX));
  /* 121e6f93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e6f96 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6f97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6f9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e6f9c push eax */
  push32((uint32_t)(EAX));
  /* 121e6f9d call 0x121e7060 */
  push32(0x121e6fa2u); f_121e7060();
  /* 121e6fa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6fa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6fa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6fab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121e6fae jmp 0x121e701d */
  goto L_121e701d;
L_121e6fb0:;
  /* 121e6fb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e6fb5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e6fb7 mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e6fbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e6fbf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e6fc3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121e6fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e6fcb je 0x121e6ff8 */
  if (C.zf) goto L_121e6ff8;
  /* 121e6fcd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6fd1 jbe 0x121e6ff8 */
  if ((C.cf||C.zf)) goto L_121e6ff8;
  /* 121e6fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6fd9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e6fdb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121e6fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6fe3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e6fe6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6fe9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6fec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121e6fef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6ff2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6ff5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121e6ff8:;
  /* 121e6ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6ffb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e6ffe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e7000 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121e7002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7008 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e700b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e700e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7011 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121e7014 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7017 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e701a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121e701d:;
  /* 121e701d jmp 0x121e6f31 */
  goto L_121e6f31;
L_121e7022:;
  /* 121e7022 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7026 je 0x121e7034 */
  if (C.zf) goto L_121e7034;
  /* 121e7028 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e702a call 0x121dd630 */
  push32(0x121e702fu); f_121dd630();
  /* 121e702f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7032 jmp 0x121e703f */
  goto L_121e703f;
L_121e7034:;
  /* 121e7034 push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e7039 call dword ptr [0x12208394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208394))), 0x121e703fu);
L_121e703f:;
  /* 121e703f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7043 jbe 0x121e7053 */
  if ((C.cf||C.zf)) goto L_121e7053;
  /* 121e7045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7048 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121e704b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e704e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7051 jmp 0x121e7055 */
  goto L_121e7055;
L_121e7053:;
  /* 121e7053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e7055:;
  /* 121e7055 mov esp, ebp */
  ESP = (EBP);
  /* 121e7057 pop ebp */
  EBP = (pop32());
  /* 121e7058 ret  */
  ESPCHK(0x121e6ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017060 @ 0x121e7060 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_121e7060(void) {
  FTRACE(0x121e7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7060 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7061 mov ebp, esp */
  EBP = (ESP);
  /* 121e7063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7066 push esi */
  push32((uint32_t)(ESI));
  /* 121e7067 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 121e706b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e706e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7071 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7074 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e7077 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e707b ja 0x121e75c8 */
  if ((!C.cf&&!C.zf)) goto L_121e75c8;
  /* 121e7081 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e7086 mov dl, byte ptr [eax + 0x121e7629] */
  DL = (r8((uint32_t)(EAX + 0x121e7629)));
  /* 121e708c jmp dword ptr [edx*4 + 0x121e75cd] */
  switch (EDX) {
    case 0: goto L_121e75a6;
    case 1: goto L_121e70b5;
    case 2: goto L_121e70fb;
    case 3: goto L_121e7248;
    case 4: goto L_121e7270;
    case 5: goto L_121e730f;
    case 6: goto L_121e737b;
    case 7: goto L_121e73a4;
    case 8: goto L_121e73e5;
    case 9: goto L_121e74c7;
    case 10: goto L_121e752e;
    case 11: goto L_121e757b;
    case 12: goto L_121e7093;
    case 13: goto L_121e70d8;
    case 14: goto L_121e711e;
    case 15: goto L_121e721e;
    case 16: goto L_121e72b5;
    case 17: goto L_121e72e2;
    case 18: goto L_121e7337;
    case 19: goto L_121e73bb;
    case 20: goto L_121e7469;
    case 21: goto L_121e74f8;
    case 22: goto L_121e75c8;
    default: x86_unimpl("switch@0x121e708c out of table"); return;
  }
L_121e7093:;
  /* 121e7093 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7096 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7097 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e709a push edx */
  push32((uint32_t)(EDX));
  /* 121e709b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e709e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121e70a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e70a4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121e70a7 push eax */
  push32((uint32_t)(EAX));
  /* 121e70a8 call 0x121e7680 */
  push32(0x121e70adu); f_121e7680();
  /* 121e70ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e70b0 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e70b5:;
  /* 121e70b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e70b8 push ecx */
  push32((uint32_t)(ECX));
  /* 121e70b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e70bc push edx */
  push32((uint32_t)(EDX));
  /* 121e70bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e70c0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121e70c3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e70c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 121e70ca push eax */
  push32((uint32_t)(EAX));
  /* 121e70cb call 0x121e7680 */
  push32(0x121e70d0u); f_121e7680();
  /* 121e70d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e70d3 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e70d8:;
  /* 121e70d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e70db push ecx */
  push32((uint32_t)(ECX));
  /* 121e70dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e70df push edx */
  push32((uint32_t)(EDX));
  /* 121e70e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e70e3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121e70e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e70e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121e70ed push eax */
  push32((uint32_t)(EAX));
  /* 121e70ee call 0x121e7680 */
  push32(0x121e70f3u); f_121e7680();
  /* 121e70f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e70f6 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e70fb:;
  /* 121e70fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e70fe push ecx */
  push32((uint32_t)(ECX));
  /* 121e70ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7102 push edx */
  push32((uint32_t)(EDX));
  /* 121e7103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7106 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121e7109 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e710c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121e7110 push eax */
  push32((uint32_t)(EAX));
  /* 121e7111 call 0x121e7680 */
  push32(0x121e7116u); f_121e7680();
  /* 121e7116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7119 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e711e:;
  /* 121e711e cmp dword ptr [0x12205b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7125 je 0x121e71a6 */
  if (C.zf) goto L_121e71a6;
  /* 121e7127 mov dword ptr [0x12205b20], 0 */
  w32((uint32_t)(0x12205b20), (0x0u));
  /* 121e7131 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7134 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7135 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7138 push edx */
  push32((uint32_t)(EDX));
  /* 121e7139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e713c push eax */
  push32((uint32_t)(EAX));
  /* 121e713d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7140 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7141 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7144 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 121e714a push eax */
  push32((uint32_t)(EAX));
  /* 121e714b call 0x121e7830 */
  push32(0x121e7150u); f_121e7830();
  /* 121e7150 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7153 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7156 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7159 jne 0x121e7160 */
  if (!C.zf) goto L_121e7160;
  /* 121e715b jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e7160:;
  /* 121e7160 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7163 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7165 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 121e7168 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e716b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e716d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7170 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7173 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e7175 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7178 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e717a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e717d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7180 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e7182 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7185 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7186 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7189 push edx */
  push32((uint32_t)(EDX));
  /* 121e718a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e718d push eax */
  push32((uint32_t)(EAX));
  /* 121e718e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7191 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7192 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7195 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 121e719b push eax */
  push32((uint32_t)(EAX));
  /* 121e719c call 0x121e7830 */
  push32(0x121e71a1u); f_121e7830();
  /* 121e71a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e71a4 jmp 0x121e7219 */
  goto L_121e7219;
L_121e71a6:;
  /* 121e71a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e71a9 push ecx */
  push32((uint32_t)(ECX));
  /* 121e71aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e71ad push edx */
  push32((uint32_t)(EDX));
  /* 121e71ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e71b1 push eax */
  push32((uint32_t)(EAX));
  /* 121e71b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e71b5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e71b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e71b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 121e71bf push eax */
  push32((uint32_t)(EAX));
  /* 121e71c0 call 0x121e7830 */
  push32(0x121e71c5u); f_121e7830();
  /* 121e71c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e71c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e71cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e71ce jne 0x121e71d5 */
  if (!C.zf) goto L_121e71d5;
  /* 121e71d0 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e71d5:;
  /* 121e71d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e71d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e71da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 121e71dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e71e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e71e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e71e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e71e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e71ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e71ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e71ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e71f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e71f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e71f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e71fa push ecx */
  push32((uint32_t)(ECX));
  /* 121e71fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e71fe push edx */
  push32((uint32_t)(EDX));
  /* 121e71ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7202 push eax */
  push32((uint32_t)(EAX));
  /* 121e7203 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7206 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7207 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e720a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 121e7210 push eax */
  push32((uint32_t)(EAX));
  /* 121e7211 call 0x121e7830 */
  push32(0x121e7216u); f_121e7830();
  /* 121e7216 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e7219:;
  /* 121e7219 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e721e:;
  /* 121e721e mov ecx, dword ptr [0x12205b20] */
  ECX = (r32((uint32_t)(0x12205b20)));
  /* 121e7224 mov dword ptr [0x12205b30], ecx */
  w32((uint32_t)(0x12205b30), (ECX));
  /* 121e722a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e722d push edx */
  push32((uint32_t)(EDX));
  /* 121e722e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7231 push eax */
  push32((uint32_t)(EAX));
  /* 121e7232 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7234 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7237 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e723a push edx */
  push32((uint32_t)(EDX));
  /* 121e723b call 0x121e76d0 */
  push32(0x121e7240u); f_121e76d0();
  /* 121e7240 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7243 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e7248:;
  /* 121e7248 mov eax, dword ptr [0x12205b20] */
  EAX = (r32((uint32_t)(0x12205b20)));
  /* 121e724d mov dword ptr [0x12205b30], eax */
  w32((uint32_t)(0x12205b30), (EAX));
  /* 121e7252 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7255 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7256 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7259 push edx */
  push32((uint32_t)(EDX));
  /* 121e725a push 2 */
  push32((uint32_t)(0x2u));
  /* 121e725c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e725f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e7262 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7263 call 0x121e76d0 */
  push32(0x121e7268u); f_121e76d0();
  /* 121e7268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e726b jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e7270:;
  /* 121e7270 mov edx, dword ptr [0x12205b20] */
  EDX = (r32((uint32_t)(0x12205b20)));
  /* 121e7276 mov dword ptr [0x12205b30], edx */
  w32((uint32_t)(0x12205b30), (EDX));
  /* 121e727c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e727f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e7282 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7283 mov ecx, 0xc */
  ECX = (0xcu);
  /* 121e7288 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e728a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e728d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7291 jne 0x121e729a */
  if (!C.zf) goto L_121e729a;
  /* 121e7293 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_121e729a:;
  /* 121e729a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e729d push edx */
  push32((uint32_t)(EDX));
  /* 121e729e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e72a1 push eax */
  push32((uint32_t)(EAX));
  /* 121e72a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e72a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e72a7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e72a8 call 0x121e76d0 */
  push32(0x121e72adu); f_121e76d0();
  /* 121e72ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e72b0 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e72b5:;
  /* 121e72b5 mov edx, dword ptr [0x12205b20] */
  EDX = (r32((uint32_t)(0x12205b20)));
  /* 121e72bb mov dword ptr [0x12205b30], edx */
  w32((uint32_t)(0x12205b30), (EDX));
  /* 121e72c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e72c4 push eax */
  push32((uint32_t)(EAX));
  /* 121e72c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e72c8 push ecx */
  push32((uint32_t)(ECX));
  /* 121e72c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 121e72cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e72ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e72d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e72d4 push eax */
  push32((uint32_t)(EAX));
  /* 121e72d5 call 0x121e76d0 */
  push32(0x121e72dau); f_121e76d0();
  /* 121e72da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e72dd jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e72e2:;
  /* 121e72e2 mov ecx, dword ptr [0x12205b20] */
  ECX = (r32((uint32_t)(0x12205b20)));
  /* 121e72e8 mov dword ptr [0x12205b30], ecx */
  w32((uint32_t)(0x12205b30), (ECX));
  /* 121e72ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e72f1 push edx */
  push32((uint32_t)(EDX));
  /* 121e72f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e72f5 push eax */
  push32((uint32_t)(EAX));
  /* 121e72f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e72f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e72fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121e72fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7301 push edx */
  push32((uint32_t)(EDX));
  /* 121e7302 call 0x121e76d0 */
  push32(0x121e7307u); f_121e76d0();
  /* 121e7307 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e730a jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e730f:;
  /* 121e730f mov eax, dword ptr [0x12205b20] */
  EAX = (r32((uint32_t)(0x12205b20)));
  /* 121e7314 mov dword ptr [0x12205b30], eax */
  w32((uint32_t)(0x12205b30), (EAX));
  /* 121e7319 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e731c push ecx */
  push32((uint32_t)(ECX));
  /* 121e731d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7320 push edx */
  push32((uint32_t)(EDX));
  /* 121e7321 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7323 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7326 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121e7329 push ecx */
  push32((uint32_t)(ECX));
  /* 121e732a call 0x121e76d0 */
  push32(0x121e732fu); f_121e76d0();
  /* 121e732f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7332 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e7337:;
  /* 121e7337 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e733a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e733e jg 0x121e735c */
  if ((!C.zf&&C.sf==C.of)) goto L_121e735c;
  /* 121e7340 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7343 push eax */
  push32((uint32_t)(EAX));
  /* 121e7344 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7347 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7348 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e734b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 121e7351 push eax */
  push32((uint32_t)(EAX));
  /* 121e7352 call 0x121e7680 */
  push32(0x121e7357u); f_121e7680();
  /* 121e7357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e735a jmp 0x121e7376 */
  goto L_121e7376;
L_121e735c:;
  /* 121e735c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e735f push ecx */
  push32((uint32_t)(ECX));
  /* 121e7360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7363 push edx */
  push32((uint32_t)(EDX));
  /* 121e7364 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7367 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 121e736d push ecx */
  push32((uint32_t)(ECX));
  /* 121e736e call 0x121e7680 */
  push32(0x121e7373u); f_121e7680();
  /* 121e7373 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e7376:;
  /* 121e7376 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e737b:;
  /* 121e737b mov edx, dword ptr [0x12205b20] */
  EDX = (r32((uint32_t)(0x12205b20)));
  /* 121e7381 mov dword ptr [0x12205b30], edx */
  w32((uint32_t)(0x12205b30), (EDX));
  /* 121e7387 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e738a push eax */
  push32((uint32_t)(EAX));
  /* 121e738b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e738e push ecx */
  push32((uint32_t)(ECX));
  /* 121e738f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7391 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7394 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7396 push eax */
  push32((uint32_t)(EAX));
  /* 121e7397 call 0x121e76d0 */
  push32(0x121e739cu); f_121e76d0();
  /* 121e739c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e739f jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e73a4:;
  /* 121e73a4 mov ecx, dword ptr [0x12205b20] */
  ECX = (r32((uint32_t)(0x12205b20)));
  /* 121e73aa mov dword ptr [0x12205b30], ecx */
  w32((uint32_t)(0x12205b30), (ECX));
  /* 121e73b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e73b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 121e73b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e73b9 jmp 0x121e740d */
  goto L_121e740d;
L_121e73bb:;
  /* 121e73bb mov ecx, dword ptr [0x12205b20] */
  ECX = (r32((uint32_t)(0x12205b20)));
  /* 121e73c1 mov dword ptr [0x12205b30], ecx */
  w32((uint32_t)(0x12205b30), (ECX));
  /* 121e73c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e73ca push edx */
  push32((uint32_t)(EDX));
  /* 121e73cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e73ce push eax */
  push32((uint32_t)(EAX));
  /* 121e73cf push 1 */
  push32((uint32_t)(0x1u));
  /* 121e73d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e73d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121e73d7 push edx */
  push32((uint32_t)(EDX));
  /* 121e73d8 call 0x121e76d0 */
  push32(0x121e73ddu); f_121e76d0();
  /* 121e73dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e73e0 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e73e5:;
  /* 121e73e5 mov eax, dword ptr [0x12205b20] */
  EAX = (r32((uint32_t)(0x12205b20)));
  /* 121e73ea mov dword ptr [0x12205b30], eax */
  w32((uint32_t)(0x12205b30), (EAX));
  /* 121e73ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e73f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e73f6 jne 0x121e7401 */
  if (!C.zf) goto L_121e7401;
  /* 121e73f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 121e73ff jmp 0x121e740d */
  goto L_121e740d;
L_121e7401:;
  /* 121e7401 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7404 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 121e7407 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e740a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e740d:;
  /* 121e740d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7410 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121e7413 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7416 jge 0x121e7421 */
  if ((C.sf==C.of)) goto L_121e7421;
  /* 121e7418 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e741f jmp 0x121e744e */
  goto L_121e744e;
L_121e7421:;
  /* 121e7421 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7424 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121e7427 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7428 mov ecx, 7 */
  ECX = (0x7u);
  /* 121e742d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e742f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e7432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7435 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e7438 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7439 mov ecx, 7 */
  ECX = (0x7u);
  /* 121e743e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e7440 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7443 jl 0x121e744e */
  if ((C.sf!=C.of)) goto L_121e744e;
  /* 121e7445 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7448 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e744b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e744e:;
  /* 121e744e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7451 push eax */
  push32((uint32_t)(EAX));
  /* 121e7452 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7455 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7456 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e745b push edx */
  push32((uint32_t)(EDX));
  /* 121e745c call 0x121e76d0 */
  push32(0x121e7461u); f_121e76d0();
  /* 121e7461 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7464 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e7469:;
  /* 121e7469 cmp dword ptr [0x12205b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7470 je 0x121e74a0 */
  if (C.zf) goto L_121e74a0;
  /* 121e7472 mov dword ptr [0x12205b20], 0 */
  w32((uint32_t)(0x12205b20), (0x0u));
  /* 121e747c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e747f push eax */
  push32((uint32_t)(EAX));
  /* 121e7480 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7483 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7484 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7487 push edx */
  push32((uint32_t)(EDX));
  /* 121e7488 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e748b push eax */
  push32((uint32_t)(EAX));
  /* 121e748c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e748f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 121e7495 push edx */
  push32((uint32_t)(EDX));
  /* 121e7496 call 0x121e7830 */
  push32(0x121e749bu); f_121e7830();
  /* 121e749b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e749e jmp 0x121e74c2 */
  goto L_121e74c2;
L_121e74a0:;
  /* 121e74a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e74a3 push eax */
  push32((uint32_t)(EAX));
  /* 121e74a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e74a7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e74a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e74ab push edx */
  push32((uint32_t)(EDX));
  /* 121e74ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e74af push eax */
  push32((uint32_t)(EAX));
  /* 121e74b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e74b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 121e74b9 push edx */
  push32((uint32_t)(EDX));
  /* 121e74ba call 0x121e7830 */
  push32(0x121e74bfu); f_121e7830();
  /* 121e74bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e74c2:;
  /* 121e74c2 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e74c7:;
  /* 121e74c7 mov dword ptr [0x12205b20], 0 */
  w32((uint32_t)(0x12205b20), (0x0u));
  /* 121e74d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e74d4 push eax */
  push32((uint32_t)(EAX));
  /* 121e74d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e74d8 push ecx */
  push32((uint32_t)(ECX));
  /* 121e74d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e74dc push edx */
  push32((uint32_t)(EDX));
  /* 121e74dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e74e0 push eax */
  push32((uint32_t)(EAX));
  /* 121e74e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e74e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 121e74ea push edx */
  push32((uint32_t)(EDX));
  /* 121e74eb call 0x121e7830 */
  push32(0x121e74f0u); f_121e7830();
  /* 121e74f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e74f3 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e74f8:;
  /* 121e74f8 mov eax, dword ptr [0x12205b20] */
  EAX = (r32((uint32_t)(0x12205b20)));
  /* 121e74fd mov dword ptr [0x12205b30], eax */
  w32((uint32_t)(0x12205b30), (EAX));
  /* 121e7502 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7505 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 121e7508 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7509 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 121e750e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e7510 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e7513 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7516 push edx */
  push32((uint32_t)(EDX));
  /* 121e7517 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e751a push eax */
  push32((uint32_t)(EAX));
  /* 121e751b push 2 */
  push32((uint32_t)(0x2u));
  /* 121e751d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7520 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7521 call 0x121e76d0 */
  push32(0x121e7526u); f_121e76d0();
  /* 121e7526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7529 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e752e:;
  /* 121e752e mov edx, dword ptr [0x12205b20] */
  EDX = (r32((uint32_t)(0x12205b20)));
  /* 121e7534 mov dword ptr [0x12205b30], edx */
  w32((uint32_t)(0x12205b30), (EDX));
  /* 121e753a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e753d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 121e7540 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7541 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 121e7546 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e7548 mov ecx, eax */
  ECX = (EAX);
  /* 121e754a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e754d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e7550 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7553 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121e7556 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7557 mov esi, 0x64 */
  ESI = (0x64u);
  /* 121e755c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e755e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7560 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e7563 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7566 push eax */
  push32((uint32_t)(EAX));
  /* 121e7567 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e756a push ecx */
  push32((uint32_t)(ECX));
  /* 121e756b push 4 */
  push32((uint32_t)(0x4u));
  /* 121e756d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7570 push edx */
  push32((uint32_t)(EDX));
  /* 121e7571 call 0x121e76d0 */
  push32(0x121e7576u); f_121e76d0();
  /* 121e7576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7579 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e757b:;
  /* 121e757b call 0x121e8690 */
  push32(0x121e7580u); f_121e8690();
  /* 121e7580 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7583 push eax */
  push32((uint32_t)(EAX));
  /* 121e7584 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7587 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7588 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e758b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e758d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7591 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 121e7594 mov ecx, dword ptr [eax*4 + 0x12204e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12204e1c)));
  /* 121e759b push ecx */
  push32((uint32_t)(ECX));
  /* 121e759c call 0x121e7680 */
  push32(0x121e75a1u); f_121e7680();
  /* 121e75a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e75a4 jmp 0x121e75c8 */
  goto L_121e75c8;
L_121e75a6:;
  /* 121e75a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e75a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e75ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 121e75ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e75b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e75b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e75b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e75b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e75bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e75be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e75c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e75c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e75c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121e75c8:;
  /* 121e75c8 pop esi */
  ESI = (pop32());
  /* 121e75c9 mov esp, ebp */
  ESP = (EBP);
  /* 121e75cb pop ebp */
  EBP = (pop32());
  /* 121e75cc ret  */
  ESPCHK(0x121e7060u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x121e7680 (72 bytes, 30 insns) */
void f_121e7680(void) {
  FTRACE(0x121e7680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7680 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7681 mov ebp, esp */
  EBP = (ESP);
L_121e7683:;
  /* 121e7683 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7686 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7689 je 0x121e76c6 */
  if (C.zf) goto L_121e76c6;
  /* 121e768b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e768e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e7691 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e7693 je 0x121e76c6 */
  if (C.zf) goto L_121e76c6;
  /* 121e7695 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7698 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e769a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e769d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e769f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e76a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e76a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e76a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e76a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e76ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e76ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e76b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e76b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121e76b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e76ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e76bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e76bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e76c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e76c4 jmp 0x121e7683 */
  goto L_121e7683;
L_121e76c6:;
  /* 121e76c6 pop ebp */
  EBP = (pop32());
  /* 121e76c7 ret  */
  ESPCHK(0x121e7680u, _esp0);
  ESP += 4; return;
}

/* FUN_100176d0 @ 0x121e76d0 (173 bytes, 64 insns) */
void f_121e76d0(void) {
  FTRACE(0x121e76d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e76d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e76d1 mov ebp, esp */
  EBP = (ESP);
  /* 121e76d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e76d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e76db cmp dword ptr [0x12205b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e76e2 je 0x121e76fa */
  if (C.zf) goto L_121e76fa;
  /* 121e76e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e76e7 push eax */
  push32((uint32_t)(EAX));
  /* 121e76e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e76eb push ecx */
  push32((uint32_t)(ECX));
  /* 121e76ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e76ef push edx */
  push32((uint32_t)(EDX));
  /* 121e76f0 call 0x121e7780 */
  push32(0x121e76f5u); f_121e7780();
  /* 121e76f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e76f8 jmp 0x121e7779 */
  goto L_121e7779;
L_121e76fa:;
  /* 121e76fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e76fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7700 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7702 jae 0x121e7770 */
  if (!C.cf) goto L_121e7770;
  /* 121e7704 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7707 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e770a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 121e770d jmp 0x121e7718 */
  goto L_121e7718;
L_121e770f:;
  /* 121e770f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7712 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7715 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_121e7718:;
  /* 121e7718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e771b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e771e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e7720 je 0x121e7754 */
  if (C.zf) goto L_121e7754;
  /* 121e7722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e7726 mov ecx, 0xa */
  ECX = (0xau);
  /* 121e772b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e772d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7730 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7733 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7735 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7738 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 121e773b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e773e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e773f mov ecx, 0xa */
  ECX = (0xau);
  /* 121e7744 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e7746 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e7749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e774c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e774f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e7752 jmp 0x121e770f */
  goto L_121e770f;
L_121e7754:;
  /* 121e7754 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7757 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7759 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e775c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e775f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e7761 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7764 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7766 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7769 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e776c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e776e jmp 0x121e7779 */
  goto L_121e7779;
L_121e7770:;
  /* 121e7770 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7773 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121e7779:;
  /* 121e7779 mov esp, ebp */
  ESP = (EBP);
  /* 121e777b pop ebp */
  EBP = (pop32());
  /* 121e777c ret  */
  ESPCHK(0x121e76d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x121e7780 (172 bytes, 65 insns) */
void f_121e7780(void) {
  FTRACE(0x121e7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7780 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7781 mov ebp, esp */
  EBP = (ESP);
  /* 121e7783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7789 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e778b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e778e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7791 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7794 jbe 0x121e77db */
  if ((C.cf||C.zf)) goto L_121e77db;
L_121e7796:;
  /* 121e7796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7799 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e779a mov ecx, 0xa */
  ECX = (0xau);
  /* 121e779f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e77a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e77a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e77a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121e77a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e77ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e77af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e77b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e77b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e77b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e77ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e77bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e77bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e77c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e77c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 121e77c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e77ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e77cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e77d1 jle 0x121e77db */
  if ((C.zf||C.sf!=C.of)) goto L_121e77db;
  /* 121e77d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e77d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e77d9 ja 0x121e7796 */
  if ((!C.cf&&!C.zf)) goto L_121e7796;
L_121e77db:;
  /* 121e77db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e77de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e77e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e77e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e77e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e77e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121e77eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e77ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e77f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e77f4:;
  /* 121e77f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e77f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e77f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 121e77fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e77ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e7802 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e7804 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e7806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7809 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e780c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e780f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e7812 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e7815 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121e7817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e781a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e781d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e7820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e7823 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7826 jb 0x121e77f4 */
  if (C.cf) goto L_121e77f4;
  /* 121e7828 mov esp, ebp */
  ESP = (EBP);
  /* 121e782a pop ebp */
  EBP = (pop32());
  /* 121e782b ret  */
  ESPCHK(0x121e7780u, _esp0);
  ESP += 4; return;
}

/* FUN_10017830 @ 0x121e7830 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_121e7830(void) {
  FTRACE(0x121e7830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7830 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7831 mov ebp, esp */
  EBP = (ESP);
  /* 121e7833 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_121e7836:;
  /* 121e7836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7839 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e783c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e783e je 0x121e7cac */
  if (C.zf) goto L_121e7cac;
  /* 121e7844 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7847 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e784a je 0x121e7cac */
  if (C.zf) goto L_121e7cac;
  /* 121e7850 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e7854 mov dword ptr [0x12205b30], 0 */
  w32((uint32_t)(0x12205b30), (0x0u));
  /* 121e785e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e7865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7868 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e786b jmp 0x121e7876 */
  goto L_121e7876;
L_121e786d:;
  /* 121e786d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_121e7876:;
  /* 121e7876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7879 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e787c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e787f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e7882 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7888 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e788b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e788d jne 0x121e7891 */
  if (!C.zf) goto L_121e7891;
  /* 121e788f jmp 0x121e786d */
  goto L_121e786d;
L_121e7891:;
  /* 121e7891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7894 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7897 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e789a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e789d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e78a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e78a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e78a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e78a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e78ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e78b0 ja 0x121e7c00 */
  if ((!C.cf&&!C.zf)) goto L_121e7c00;
  /* 121e78b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e78b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e78bb mov al, byte ptr [ecx + 0x121e7cdc] */
  AL = (r8((uint32_t)(ECX + 0x121e7cdc)));
  /* 121e78c1 jmp dword ptr [eax*4 + 0x121e7cb0] */
  switch (EAX) {
    case 0: goto L_121e7b1f;
    case 1: goto L_121e7a03;
    case 2: goto L_121e798e;
    case 3: goto L_121e78c8;
    case 4: goto L_121e7906;
    case 5: goto L_121e7967;
    case 6: goto L_121e79b5;
    case 7: goto L_121e79dc;
    case 8: goto L_121e7a4a;
    case 9: goto L_121e7944;
    case 10: goto L_121e7c00;
    default: x86_unimpl("switch@0x121e78c1 out of table"); return;
  }
L_121e78c8:;
  /* 121e78c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e78cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121e78ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e78d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e78d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121e78d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e78db ja 0x121e7901 */
  if ((!C.cf&&!C.zf)) goto L_121e7901;
  /* 121e78dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e78e0 jmp dword ptr [ecx*4 + 0x121e7d2f] */
  switch (ECX) {
    case 0: goto L_121e78e7;
    case 1: goto L_121e78f1;
    case 2: goto L_121e78f7;
    case 3: goto L_121e78fd;
    case 4: goto L_121e7925;
    case 5: goto L_121e792f;
    case 6: goto L_121e7935;
    case 7: goto L_121e793b;
    default: x86_unimpl("switch@0x121e78e0 out of table"); return;
  }
L_121e78e7:;
  /* 121e78e7 mov dword ptr [0x12205b30], 1 */
  w32((uint32_t)(0x12205b30), (0x1u));
L_121e78f1:;
  /* 121e78f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 121e78f5 jmp 0x121e7901 */
  goto L_121e7901;
L_121e78f7:;
  /* 121e78f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 121e78fb jmp 0x121e7901 */
  goto L_121e7901;
L_121e78fd:;
  /* 121e78fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_121e7901:;
  /* 121e7901 jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e7906:;
  /* 121e7906 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7909 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 121e790c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e790f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7912 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121e7915 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7919 ja 0x121e793f */
  if ((!C.cf&&!C.zf)) goto L_121e793f;
  /* 121e791b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e791e jmp dword ptr [ecx*4 + 0x121e7d3f] */
  switch (ECX) {
    case 0: goto L_121e7925;
    case 1: goto L_121e792f;
    case 2: goto L_121e7935;
    case 3: goto L_121e793b;
    default: x86_unimpl("switch@0x121e791e out of table"); return;
  }
L_121e7925:;
  /* 121e7925 mov dword ptr [0x12205b30], 1 */
  w32((uint32_t)(0x12205b30), (0x1u));
L_121e792f:;
  /* 121e792f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 121e7933 jmp 0x121e793f */
  goto L_121e793f;
L_121e7935:;
  /* 121e7935 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 121e7939 jmp 0x121e793f */
  goto L_121e793f;
L_121e793b:;
  /* 121e793b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_121e793f:;
  /* 121e793f jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e7944:;
  /* 121e7944 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7947 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121e794a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e794e je 0x121e7958 */
  if (C.zf) goto L_121e7958;
  /* 121e7950 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7954 je 0x121e795e */
  if (C.zf) goto L_121e795e;
  /* 121e7956 jmp 0x121e7962 */
  goto L_121e7962;
L_121e7958:;
  /* 121e7958 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 121e795c jmp 0x121e7962 */
  goto L_121e7962;
L_121e795e:;
  /* 121e795e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_121e7962:;
  /* 121e7962 jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e7967:;
  /* 121e7967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e796a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e796d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7971 je 0x121e797b */
  if (C.zf) goto L_121e797b;
  /* 121e7973 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7977 je 0x121e7985 */
  if (C.zf) goto L_121e7985;
  /* 121e7979 jmp 0x121e7989 */
  goto L_121e7989;
L_121e797b:;
  /* 121e797b mov dword ptr [0x12205b30], 1 */
  w32((uint32_t)(0x12205b30), (0x1u));
L_121e7985:;
  /* 121e7985 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_121e7989:;
  /* 121e7989 jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e798e:;
  /* 121e798e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7991 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 121e7994 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7998 je 0x121e79a2 */
  if (C.zf) goto L_121e79a2;
  /* 121e799a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e799e je 0x121e79ac */
  if (C.zf) goto L_121e79ac;
  /* 121e79a0 jmp 0x121e79b0 */
  goto L_121e79b0;
L_121e79a2:;
  /* 121e79a2 mov dword ptr [0x12205b30], 1 */
  w32((uint32_t)(0x12205b30), (0x1u));
L_121e79ac:;
  /* 121e79ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_121e79b0:;
  /* 121e79b0 jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e79b5:;
  /* 121e79b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e79b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 121e79bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e79bf je 0x121e79c9 */
  if (C.zf) goto L_121e79c9;
  /* 121e79c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e79c5 je 0x121e79d3 */
  if (C.zf) goto L_121e79d3;
  /* 121e79c7 jmp 0x121e79d7 */
  goto L_121e79d7;
L_121e79c9:;
  /* 121e79c9 mov dword ptr [0x12205b30], 1 */
  w32((uint32_t)(0x12205b30), (0x1u));
L_121e79d3:;
  /* 121e79d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_121e79d7:;
  /* 121e79d7 jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e79dc:;
  /* 121e79dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e79df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121e79e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e79e6 je 0x121e79f0 */
  if (C.zf) goto L_121e79f0;
  /* 121e79e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e79ec je 0x121e79fa */
  if (C.zf) goto L_121e79fa;
  /* 121e79ee jmp 0x121e79fe */
  goto L_121e79fe;
L_121e79f0:;
  /* 121e79f0 mov dword ptr [0x12205b30], 1 */
  w32((uint32_t)(0x12205b30), (0x1u));
L_121e79fa:;
  /* 121e79fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_121e79fe:;
  /* 121e79fe jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e7a03:;
  /* 121e7a03 push 0x12201eac */
  push32((uint32_t)(0x12201eacu));
  /* 121e7a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7a0b push ecx */
  push32((uint32_t)(ECX));
  /* 121e7a0c call 0x121e8260 */
  push32(0x121e7a11u); f_121e8260();
  /* 121e7a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e7a16 jne 0x121e7a23 */
  if (!C.zf) goto L_121e7a23;
  /* 121e7a18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7a1b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7a1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e7a21 jmp 0x121e7a41 */
  goto L_121e7a41;
L_121e7a23:;
  /* 121e7a23 push 0x12201ea8 */
  push32((uint32_t)(0x12201ea8u));
  /* 121e7a28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7a2b push eax */
  push32((uint32_t)(EAX));
  /* 121e7a2c call 0x121e8260 */
  push32(0x121e7a31u); f_121e8260();
  /* 121e7a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e7a36 jne 0x121e7a41 */
  if (!C.zf) goto L_121e7a41;
  /* 121e7a38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7a3b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7a3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e7a41:;
  /* 121e7a41 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 121e7a45 jmp 0x121e7c00 */
  goto L_121e7c00;
L_121e7a4a:;
  /* 121e7a4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7a4d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7a51 jg 0x121e7a61 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e7a61;
  /* 121e7a53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7a56 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 121e7a5c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121e7a5f jmp 0x121e7a6d */
  goto L_121e7a6d;
L_121e7a61:;
  /* 121e7a61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7a64 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 121e7a6a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121e7a6d:;
  /* 121e7a6d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7a71 jle 0x121e7b14 */
  if ((C.zf||C.sf!=C.of)) goto L_121e7b14;
  /* 121e7a77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7a7a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7a7d jbe 0x121e7b14 */
  if ((C.cf||C.zf)) goto L_121e7b14;
  /* 121e7a83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e7a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e7a88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e7a8a mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e7a90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e7a92 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e7a96 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121e7a9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e7a9e je 0x121e7ad7 */
  if (C.zf) goto L_121e7ad7;
  /* 121e7aa0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7aa3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7aa6 jbe 0x121e7ad7 */
  if ((C.cf||C.zf)) goto L_121e7ad7;
  /* 121e7aa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7aab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e7aad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e7ab0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e7ab2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121e7ab4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7ab7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7abc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7abf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e7ac1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e7ac4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7ac7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121e7aca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7acd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7acf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7ad2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7ad5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121e7ad7:;
  /* 121e7ad7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7ada mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e7adf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e7ae1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e7ae3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7ae6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e7ae8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7aeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7aee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e7af0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e7af3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7af6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121e7af9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7afc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7afe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7b01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7b04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e7b06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7b09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7b0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121e7b0f jmp 0x121e7a6d */
  goto L_121e7a6d;
L_121e7b14:;
  /* 121e7b14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7b17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e7b1a jmp 0x121e7836 */
  goto L_121e7836;
L_121e7b1f:;
  /* 121e7b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7b22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e7b25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e7b27 je 0x121e7bf2 */
  if (C.zf) goto L_121e7bf2;
  /* 121e7b2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7b30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7b33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121e7b36:;
  /* 121e7b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7b39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e7b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e7b3e je 0x121e7bf0 */
  if (C.zf) goto L_121e7bf0;
  /* 121e7b44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7b47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7b4a je 0x121e7bf0 */
  if (C.zf) goto L_121e7bf0;
  /* 121e7b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7b53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e7b56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7b59 jne 0x121e7b69 */
  if (!C.zf) goto L_121e7b69;
  /* 121e7b5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7b5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7b61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121e7b64 jmp 0x121e7bf0 */
  goto L_121e7bf0;
L_121e7b69:;
  /* 121e7b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7b6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e7b6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e7b70 mov edx, dword ptr [0x12203c98] */
  EDX = (r32((uint32_t)(0x12203c98)));
  /* 121e7b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e7b78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 121e7b7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 121e7b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e7b83 je 0x121e7bbc */
  if (C.zf) goto L_121e7bbc;
  /* 121e7b85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7b88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7b8b jbe 0x121e7bbc */
  if ((C.cf||C.zf)) goto L_121e7bbc;
  /* 121e7b8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7b90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7b95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e7b97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121e7b99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7b9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7ba1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7ba4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e7ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7ba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7bac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e7baf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7bb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e7bb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7bb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7bba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121e7bbc:;
  /* 121e7bbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7bbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e7bc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7bc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e7bc6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121e7bc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7bcb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7bd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7bd3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e7bd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7bd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7bdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121e7bde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7be1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7be3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7be6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7be9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e7beb jmp 0x121e7b36 */
  goto L_121e7b36;
L_121e7bf0:;
  /* 121e7bf0 jmp 0x121e7bfb */
  goto L_121e7bfb;
L_121e7bf2:;
  /* 121e7bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7bf5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7bf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121e7bfb:;
  /* 121e7bfb jmp 0x121e7836 */
  goto L_121e7836;
L_121e7c00:;
  /* 121e7c00 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e7c04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e7c06 je 0x121e7c2c */
  if (C.zf) goto L_121e7c2c;
  /* 121e7c08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e7c0b push edx */
  push32((uint32_t)(EDX));
  /* 121e7c0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7c0f push eax */
  push32((uint32_t)(EAX));
  /* 121e7c10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c13 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7c14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7c17 push edx */
  push32((uint32_t)(EDX));
  /* 121e7c18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 121e7c1b push eax */
  push32((uint32_t)(EAX));
  /* 121e7c1c call 0x121e7060 */
  push32(0x121e7c21u); f_121e7060();
  /* 121e7c21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7c24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e7c27 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121e7c2a jmp 0x121e7ca7 */
  goto L_121e7ca7;
L_121e7c2c:;
  /* 121e7c2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e7c31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e7c33 mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e7c39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e7c3b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e7c3f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121e7c45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e7c47 je 0x121e7c78 */
  if (C.zf) goto L_121e7c78;
  /* 121e7c49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7c51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e7c53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e7c55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e7c5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7c5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e7c62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7c68 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121e7c6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7c6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7c70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7c73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7c76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_121e7c78:;
  /* 121e7c78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e7c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7c80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e7c82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121e7c84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7c89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7c8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7c8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e7c91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e7c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7c97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e7c9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7c9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e7c9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7ca2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7ca5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121e7ca7:;
  /* 121e7ca7 jmp 0x121e7836 */
  goto L_121e7836;
L_121e7cac:;
  /* 121e7cac mov esp, ebp */
  ESP = (EBP);
  /* 121e7cae pop ebp */
  EBP = (pop32());
  /* 121e7caf ret  */
  ESPCHK(0x121e7830u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d50 @ 0x121e7d50 (650 bytes, 178 insns) */
void f_121e7d50(void) {
  FTRACE(0x121e7d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7d50 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7d51 mov ebp, esp */
  EBP = (ESP);
  /* 121e7d53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e7d59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7d5d jne 0x121e7eb9 */
  if (!C.zf) goto L_121e7eb9;
  /* 121e7d63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7d66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 121e7d6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 121e7d72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e7d75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e7d7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 121e7d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e7d88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 121e7d8e push edx */
  push32((uint32_t)(EDX));
  /* 121e7d8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7d92 push eax */
  push32((uint32_t)(EAX));
  /* 121e7d93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7d96 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7d97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7d9a push edx */
  push32((uint32_t)(EDX));
  /* 121e7d9b call 0x121e9170 */
  push32(0x121e7da0u); f_121e9170();
  /* 121e7da0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7da3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e7da6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7daa jne 0x121e7e3f */
  if (!C.zf) goto L_121e7e3f;
  /* 121e7db0 call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e7db6u);
  /* 121e7db6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7db9 je 0x121e7dc0 */
  if (C.zf) goto L_121e7dc0;
  /* 121e7dbb jmp 0x121e7e9d */
  goto L_121e7e9d;
L_121e7dc0:;
  /* 121e7dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e7dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e7dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e7dc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7dc9 push eax */
  push32((uint32_t)(EAX));
  /* 121e7dca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7dcd push ecx */
  push32((uint32_t)(ECX));
  /* 121e7dce call 0x121e9170 */
  push32(0x121e7dd3u); f_121e9170();
  /* 121e7dd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7dd6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 121e7ddc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7de3 jne 0x121e7dea */
  if (!C.zf) goto L_121e7dea;
  /* 121e7de5 jmp 0x121e7e9d */
  goto L_121e7e9d;
L_121e7dea:;
  /* 121e7dea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 121e7dec push 0x12201eb4 */
  push32((uint32_t)(0x12201eb4u));
  /* 121e7df1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7df3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 121e7df9 push edx */
  push32((uint32_t)(EDX));
  /* 121e7dfa call 0x121d9b90 */
  push32(0x121e7dffu); f_121d9b90();
  /* 121e7dff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7e02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e7e05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7e09 jne 0x121e7e10 */
  if (!C.zf) goto L_121e7e10;
  /* 121e7e0b jmp 0x121e7e9d */
  goto L_121e7e9d;
L_121e7e10:;
  /* 121e7e10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e7e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e7e19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 121e7e1f push eax */
  push32((uint32_t)(EAX));
  /* 121e7e20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7e23 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7e24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7e27 push edx */
  push32((uint32_t)(EDX));
  /* 121e7e28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7e2b push eax */
  push32((uint32_t)(EAX));
  /* 121e7e2c call 0x121e9170 */
  push32(0x121e7e31u); f_121e9170();
  /* 121e7e31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7e34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e7e37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7e3b jne 0x121e7e3f */
  if (!C.zf) goto L_121e7e3f;
  /* 121e7e3d jmp 0x121e7e9d */
  goto L_121e7e9d;
L_121e7e3f:;
  /* 121e7e3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 121e7e41 push 0x12201eb4 */
  push32((uint32_t)(0x12201eb4u));
  /* 121e7e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7e48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e7e4b push ecx */
  push32((uint32_t)(ECX));
  /* 121e7e4c call 0x121d9b90 */
  push32(0x121e7e51u); f_121d9b90();
  /* 121e7e51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7e54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 121e7e5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121e7e5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 121e7e62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7e65 jne 0x121e7e69 */
  if (!C.zf) goto L_121e7e69;
  /* 121e7e67 jmp 0x121e7e9d */
  goto L_121e7e9d;
L_121e7e69:;
  /* 121e7e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e7e6c push ecx */
  push32((uint32_t)(ECX));
  /* 121e7e6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7e70 push edx */
  push32((uint32_t)(EDX));
  /* 121e7e71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 121e7e77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e7e79 push ecx */
  push32((uint32_t)(ECX));
  /* 121e7e7a call 0x121dd3b0 */
  push32(0x121e7e7fu); f_121dd3b0();
  /* 121e7e7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7e82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7e86 je 0x121e7e96 */
  if (C.zf) goto L_121e7e96;
  /* 121e7e88 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7e8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7e8d push edx */
  push32((uint32_t)(EDX));
  /* 121e7e8e call 0x121da620 */
  push32(0x121e7e93u); f_121da620();
  /* 121e7e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e7e96:;
  /* 121e7e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e7e98 jmp 0x121e7fd6 */
  goto L_121e7fd6;
L_121e7e9d:;
  /* 121e7e9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7ea1 je 0x121e7eb1 */
  if (C.zf) goto L_121e7eb1;
  /* 121e7ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e7ea5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e7ea8 push eax */
  push32((uint32_t)(EAX));
  /* 121e7ea9 call 0x121da620 */
  push32(0x121e7eaeu); f_121da620();
  /* 121e7eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e7eb1:;
  /* 121e7eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e7eb4 jmp 0x121e7fd6 */
  goto L_121e7fd6;
L_121e7eb9:;
  /* 121e7eb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7ebd jne 0x121e7fd3 */
  if (!C.zf) goto L_121e7fd3;
  /* 121e7ec3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 121e7ecd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e7ed0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 121e7ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e7ed8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121e7ede push edx */
  push32((uint32_t)(EDX));
  /* 121e7edf push 0x12205a48 */
  push32((uint32_t)(0x12205a48u));
  /* 121e7ee4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e7ee7 push eax */
  push32((uint32_t)(EAX));
  /* 121e7ee8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e7eeb push ecx */
  push32((uint32_t)(ECX));
  /* 121e7eec call 0x121e8fd0 */
  push32(0x121e7ef1u); f_121e8fd0();
  /* 121e7ef1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e7ef6 jne 0x121e7f00 */
  if (!C.zf) goto L_121e7f00;
  /* 121e7ef8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e7efb jmp 0x121e7fd6 */
  goto L_121e7fd6;
L_121e7f00:;
  /* 121e7f00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e7f06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121e7f09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 121e7f13 jmp 0x121e7f24 */
  goto L_121e7f24;
L_121e7f15:;
  /* 121e7f15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e7f1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7f1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_121e7f24:;
  /* 121e7f24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7f2b jge 0x121e7fcf */
  if ((C.sf==C.of)) goto L_121e7fcf;
  /* 121e7f31 cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7f38 jle 0x121e7f6b */
  if ((C.zf||C.sf!=C.of)) goto L_121e7f6b;
  /* 121e7f3a push 4 */
  push32((uint32_t)(0x4u));
  /* 121e7f3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e7f42 mov dl, byte ptr [ecx*2 + 0x12205a48] */
  DL = (r8((uint32_t)(ECX*2 + 0x12205a48)));
  /* 121e7f49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 121e7f4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 121e7f55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e7f5a push eax */
  push32((uint32_t)(EAX));
  /* 121e7f5b call 0x121dfba0 */
  push32(0x121e7f60u); f_121dfba0();
  /* 121e7f60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e7f63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 121e7f69 jmp 0x121e7f9e */
  goto L_121e7f9e;
L_121e7f6b:;
  /* 121e7f6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e7f71 mov dl, byte ptr [ecx*2 + 0x12205a48] */
  DL = (r8((uint32_t)(ECX*2 + 0x12205a48)));
  /* 121e7f78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 121e7f7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 121e7f84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e7f89 mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e7f8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e7f91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e7f95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e7f98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_121e7f9e:;
  /* 121e7f9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e7fa5 je 0x121e7fc8 */
  if (C.zf) goto L_121e7fc8;
  /* 121e7fa7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e7fad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e7fb0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e7fb3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 121e7fba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 121e7fbe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e7fc4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e7fc6 jmp 0x121e7fca */
  goto L_121e7fca;
L_121e7fc8:;
  /* 121e7fc8 jmp 0x121e7fcf */
  goto L_121e7fcf;
L_121e7fca:;
  /* 121e7fca jmp 0x121e7f15 */
  goto L_121e7f15;
L_121e7fcf:;
  /* 121e7fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e7fd1 jmp 0x121e7fd6 */
  goto L_121e7fd6;
L_121e7fd3:;
  /* 121e7fd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121e7fd6:;
  /* 121e7fd6 mov esp, ebp */
  ESP = (EBP);
  /* 121e7fd8 pop ebp */
  EBP = (pop32());
  /* 121e7fd9 ret  */
  ESPCHK(0x121e7d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fe0 @ 0x121e7fe0 (10 bytes, 5 insns) */
void f_121e7fe0(void) {
  FTRACE(0x121e7fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7fe1 mov ebp, esp */
  EBP = (ESP);
  /* 121e7fe3 mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e7fe8 pop ebp */
  EBP = (pop32());
  /* 121e7fe9 ret  */
  ESPCHK(0x121e7fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ff0 @ 0x121e7ff0 (575 bytes, 196 insns) */
void f_121e7ff0(void) {
  FTRACE(0x121e7ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e7ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e7ff1 mov ebp, esp */
  EBP = (ESP);
  /* 121e7ff3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e7ff5 push 0x12201ec0 */
  push32((uint32_t)(0x12201ec0u));
  /* 121e7ffa push 0x121e2c98 */
  push32((uint32_t)(0x121e2c98u));
  /* 121e7fff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121e8005 push eax */
  push32((uint32_t)(EAX));
  /* 121e8006 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121e800d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8010 push ebx */
  push32((uint32_t)(EBX));
  /* 121e8011 push esi */
  push32((uint32_t)(ESI));
  /* 121e8012 push edi */
  push32((uint32_t)(EDI));
  /* 121e8013 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e8016 cmp dword ptr [0x12205a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e801d jne 0x121e806e */
  if (!C.zf) goto L_121e806e;
  /* 121e801f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 121e8022 push eax */
  push32((uint32_t)(EAX));
  /* 121e8023 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8025 push 0x122015f4 */
  push32((uint32_t)(0x122015f4u));
  /* 121e802a push 1 */
  push32((uint32_t)(0x1u));
  /* 121e802c call dword ptr [0x1220831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220831c))), 0x121e8032u);
  /* 121e8032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e8034 je 0x121e8042 */
  if (C.zf) goto L_121e8042;
  /* 121e8036 mov dword ptr [0x12205a54], 1 */
  w32((uint32_t)(0x12205a54), (0x1u));
  /* 121e8040 jmp 0x121e806e */
  goto L_121e806e;
L_121e8042:;
  /* 121e8042 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 121e8045 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8046 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8048 push 0x122015f0 */
  push32((uint32_t)(0x122015f0u));
  /* 121e804d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e804f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8051 call dword ptr [0x12208320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208320))), 0x121e8057u);
  /* 121e8057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e8059 je 0x121e8067 */
  if (C.zf) goto L_121e8067;
  /* 121e805b mov dword ptr [0x12205a54], 2 */
  w32((uint32_t)(0x12205a54), (0x2u));
  /* 121e8065 jmp 0x121e806e */
  goto L_121e806e;
L_121e8067:;
  /* 121e8067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8069 jmp 0x121e8249 */
  goto L_121e8249;
L_121e806e:;
  /* 121e806e cmp dword ptr [0x12205a54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12205a54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8075 jne 0x121e8092 */
  if (!C.zf) goto L_121e8092;
  /* 121e8077 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e807a push edx */
  push32((uint32_t)(EDX));
  /* 121e807b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e807e push eax */
  push32((uint32_t)(EAX));
  /* 121e807f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e8082 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8086 push edx */
  push32((uint32_t)(EDX));
  /* 121e8087 call dword ptr [0x1220831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220831c))), 0x121e808du);
  /* 121e808d jmp 0x121e8249 */
  goto L_121e8249;
L_121e8092:;
  /* 121e8092 cmp dword ptr [0x12205a54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12205a54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8099 jne 0x121e8247 */
  if (!C.zf) goto L_121e8247;
  /* 121e809f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e80a3 jne 0x121e80ad */
  if (!C.zf) goto L_121e80ad;
  /* 121e80a5 mov eax, dword ptr [0x122059c8] */
  EAX = (r32((uint32_t)(0x122059c8)));
  /* 121e80aa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_121e80ad:;
  /* 121e80ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121e80af push 0 */
  push32((uint32_t)(0x0u));
  /* 121e80b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e80b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e80b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e80b8 push ecx */
  push32((uint32_t)(ECX));
  /* 121e80b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e80bc push edx */
  push32((uint32_t)(EDX));
  /* 121e80bd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e80c2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e80c5 push eax */
  push32((uint32_t)(EAX));
  /* 121e80c6 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e80ccu);
  /* 121e80cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121e80cf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e80d3 jne 0x121e80dc */
  if (!C.zf) goto L_121e80dc;
  /* 121e80d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e80d7 jmp 0x121e8249 */
  goto L_121e8249;
L_121e80dc:;
  /* 121e80dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e80e3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e80e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e80e9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e80eb call 0x121dcd30 */
  push32(0x121e80f0u); f_121dcd30();
  /* 121e80f0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 121e80f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e80f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e80f9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121e80fc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e80ff push edx */
  push32((uint32_t)(EDX));
  /* 121e8100 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8102 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e8105 push eax */
  push32((uint32_t)(EAX));
  /* 121e8106 call 0x121dd900 */
  push32(0x121e810bu); f_121dd900();
  /* 121e810b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e810e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e8115 jmp 0x121e812e */
  goto L_121e812e;
  /* 121e8117 mov eax, 1 */
  EAX = (0x1u);
  /* 121e811c ret  */
  ESPCHK(0x121e7ff0u, _esp0);
  ESP += 4; return;
  /* 121e811d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e8120 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 121e8127 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e812e:;
  /* 121e812e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8132 jne 0x121e813b */
  if (!C.zf) goto L_121e813b;
  /* 121e8134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8136 jmp 0x121e8249 */
  goto L_121e8249;
L_121e813b:;
  /* 121e813b push 0 */
  push32((uint32_t)(0x0u));
  /* 121e813d push 0 */
  push32((uint32_t)(0x0u));
  /* 121e813f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e8142 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8143 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e8146 push edx */
  push32((uint32_t)(EDX));
  /* 121e8147 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e814a push eax */
  push32((uint32_t)(EAX));
  /* 121e814b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e814e push ecx */
  push32((uint32_t)(ECX));
  /* 121e814f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e8154 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e8157 push edx */
  push32((uint32_t)(EDX));
  /* 121e8158 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e815eu);
  /* 121e815e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e8160 jne 0x121e8169 */
  if (!C.zf) goto L_121e8169;
  /* 121e8162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8164 jmp 0x121e8249 */
  goto L_121e8249;
L_121e8169:;
  /* 121e8169 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e8170 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e8173 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 121e8177 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e817a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e817c call 0x121dcd30 */
  push32(0x121e8181u); f_121dcd30();
  /* 121e8181 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 121e8184 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e8187 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 121e818a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121e818d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e8194 jmp 0x121e81ad */
  goto L_121e81ad;
  /* 121e8196 mov eax, 1 */
  EAX = (0x1u);
  /* 121e819b ret  */
  ESPCHK(0x121e7ff0u, _esp0);
  ESP += 4; return;
  /* 121e819c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e819f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121e81a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e81ad:;
  /* 121e81ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e81b1 jne 0x121e81ba */
  if (!C.zf) goto L_121e81ba;
  /* 121e81b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e81b5 jmp 0x121e8249 */
  goto L_121e8249;
L_121e81ba:;
  /* 121e81ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e81be jne 0x121e81c9 */
  if (!C.zf) goto L_121e81c9;
  /* 121e81c0 mov edx, dword ptr [0x122059b8] */
  EDX = (r32((uint32_t)(0x122059b8)));
  /* 121e81c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_121e81c9:;
  /* 121e81c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e81cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e81cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 121e81d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e81d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e81db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 121e81e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e81e5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e81e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e81e9 push edx */
  push32((uint32_t)(EDX));
  /* 121e81ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e81ed push eax */
  push32((uint32_t)(EAX));
  /* 121e81ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e81f1 push ecx */
  push32((uint32_t)(ECX));
  /* 121e81f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e81f5 push edx */
  push32((uint32_t)(EDX));
  /* 121e81f6 call dword ptr [0x12208320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208320))), 0x121e81fcu);
  /* 121e81fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e81ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8202 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e8205 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8207 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 121e820c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8212 je 0x121e8228 */
  if (C.zf) goto L_121e8228;
  /* 121e8214 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8217 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e821a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e821c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e8220 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8226 je 0x121e822c */
  if (C.zf) goto L_121e822c;
L_121e8228:;
  /* 121e8228 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e822a jmp 0x121e8249 */
  goto L_121e8249;
L_121e822c:;
  /* 121e822c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e822f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e8231 push eax */
  push32((uint32_t)(EAX));
  /* 121e8232 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e8235 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8239 push edx */
  push32((uint32_t)(EDX));
  /* 121e823a call 0x121e1a80 */
  push32(0x121e823fu); f_121e1a80();
  /* 121e823f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8242 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e8245 jmp 0x121e8249 */
  goto L_121e8249;
L_121e8247:;
  /* 121e8247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e8249:;
  /* 121e8249 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 121e824c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e824f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121e8256 pop edi */
  EDI = (pop32());
  /* 121e8257 pop esi */
  ESI = (pop32());
  /* 121e8258 pop ebx */
  EBX = (pop32());
  /* 121e8259 mov esp, ebp */
  ESP = (EBP);
  /* 121e825b pop ebp */
  EBP = (pop32());
  /* 121e825c ret  */
  ESPCHK(0x121e7ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018260 @ 0x121e8260 (208 bytes, 85 insns) */
void f_121e8260(void) {
  FTRACE(0x121e8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8260 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8261 mov ebp, esp */
  EBP = (ESP);
  /* 121e8263 push edi */
  push32((uint32_t)(EDI));
  /* 121e8264 push esi */
  push32((uint32_t)(ESI));
  /* 121e8265 push ebx */
  push32((uint32_t)(EBX));
  /* 121e8266 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121e8269 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 121e826c lea eax, [0x122059b0] */
  EAX = ((uint32_t)(0x122059b0));
  /* 121e8272 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8276 jne 0x121e82b3 */
  if (!C.zf) goto L_121e82b3;
  /* 121e8278 mov al, 0xff */
  AL = (0xffu);
  /* 121e827a mov edi, edi */
  EDI = (EDI);
L_121e827c:;
  /* 121e827c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e827e je 0x121e82ae */
  if (C.zf) goto L_121e82ae;
  /* 121e8280 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e8282 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e8283 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 121e8285 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121e8286 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e8288 je 0x121e827c */
  if (C.zf) goto L_121e827c;
  /* 121e828a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121e828c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e828e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121e8290 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121e8293 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e8295 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e8297 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 121e8299 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121e829b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e829d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121e829f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121e82a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e82a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e82a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e82a8 je 0x121e827c */
  if (C.zf) goto L_121e827c;
  /* 121e82aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121e82ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_121e82ae:;
  /* 121e82ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 121e82b1 jmp 0x121e832b */
  goto L_121e832b;
L_121e82b3:;
  /* 121e82b3 lock inc dword ptr [0x12205b44] */
  x86_unimpl("lock inc @ 0x121e82b3");
  /* 121e82ba cmp dword ptr [0x12205b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e82c1 jg 0x121e82c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e82c7;
  /* 121e82c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e82c5 jmp 0x121e82dc */
  goto L_121e82dc;
L_121e82c7:;
  /* 121e82c7 lock dec dword ptr [0x12205b44] */
  x86_unimpl("lock dec @ 0x121e82c7");
  /* 121e82ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e82d0 call 0x121dd590 */
  push32(0x121e82d5u); f_121dd590();
  /* 121e82d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_121e82dc:;
  /* 121e82dc mov eax, 0xff */
  EAX = (0xffu);
  /* 121e82e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121e82e3 nop  */
  /* nop */
L_121e82e4:;
  /* 121e82e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e82e6 je 0x121e830f */
  if (C.zf) goto L_121e830f;
  /* 121e82e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e82ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e82eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121e82ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121e82ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e82f0 je 0x121e82e4 */
  if (C.zf) goto L_121e82e4;
  /* 121e82f2 push eax */
  push32((uint32_t)(EAX));
  /* 121e82f3 push ebx */
  push32((uint32_t)(EBX));
  /* 121e82f4 call 0x121e93d0 */
  push32(0x121e82f9u); f_121e93d0();
  /* 121e82f9 mov ebx, eax */
  EBX = (EAX);
  /* 121e82fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e82fe call 0x121e93d0 */
  push32(0x121e8303u); f_121e93d0();
  /* 121e8303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8306 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e8308 je 0x121e82e4 */
  if (C.zf) goto L_121e82e4;
  /* 121e830a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e830c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121e830f:;
  /* 121e830f mov ebx, eax */
  EBX = (EAX);
  /* 121e8311 pop eax */
  EAX = (pop32());
  /* 121e8312 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8314 jne 0x121e831f */
  if (!C.zf) goto L_121e831f;
  /* 121e8316 lock dec dword ptr [0x12205b44] */
  x86_unimpl("lock dec @ 0x121e8316");
  /* 121e831d jmp 0x121e8329 */
  goto L_121e8329;
L_121e831f:;
  /* 121e831f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e8321 call 0x121dd630 */
  push32(0x121e8326u); f_121dd630();
  /* 121e8326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e8329:;
  /* 121e8329 mov eax, ebx */
  EAX = (EBX);
L_121e832b:;
  /* 121e832b pop ebx */
  EBX = (pop32());
  /* 121e832c pop esi */
  ESI = (pop32());
  /* 121e832d pop edi */
  EDI = (pop32());
  /* 121e832e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e832f ret  */
  ESPCHK(0x121e8260u, _esp0);
  ESP += 4; return;
}

/* FUN_10018330 @ 0x121e8330 (257 bytes, 103 insns) */
void f_121e8330(void) {
  FTRACE(0x121e8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8330 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8331 mov ebp, esp */
  EBP = (ESP);
  /* 121e8333 push edi */
  push32((uint32_t)(EDI));
  /* 121e8334 push esi */
  push32((uint32_t)(ESI));
  /* 121e8335 push ebx */
  push32((uint32_t)(EBX));
  /* 121e8336 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8339 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e833b je 0x121e842a */
  if (C.zf) goto L_121e842a;
  /* 121e8341 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8344 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 121e8347 lea eax, [0x122059b0] */
  EAX = ((uint32_t)(0x122059b0));
  /* 121e834d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8351 jne 0x121e83a1 */
  if (!C.zf) goto L_121e83a1;
  /* 121e8353 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 121e8355 mov bl, 0x5a */
  BL = (0x5au);
  /* 121e8357 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 121e8359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e835c:;
  /* 121e835c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 121e835e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121e8360 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 121e8362 je 0x121e8385 */
  if (C.zf) goto L_121e8385;
  /* 121e8364 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e8366 je 0x121e8385 */
  if (C.zf) goto L_121e8385;
  /* 121e8368 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e8369 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121e836a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e836c jb 0x121e8374 */
  if (C.cf) goto L_121e8374;
  /* 121e836e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e8370 ja 0x121e8374 */
  if ((!C.cf&&!C.zf)) goto L_121e8374;
  /* 121e8372 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_121e8374:;
  /* 121e8374 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e8376 jb 0x121e837e */
  if (C.cf) goto L_121e837e;
  /* 121e8378 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e837a ja 0x121e837e */
  if ((!C.cf&&!C.zf)) goto L_121e837e;
  /* 121e837c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_121e837e:;
  /* 121e837e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e8380 jne 0x121e838f */
  if (!C.zf) goto L_121e838f;
  /* 121e8382 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121e8383 jne 0x121e835c */
  if (!C.zf) goto L_121e835c;
L_121e8385:;
  /* 121e8385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8387 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e8389 je 0x121e842a */
  if (C.zf) goto L_121e842a;
L_121e838f:;
  /* 121e838f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 121e8394 jb 0x121e842a */
  if (C.cf) goto L_121e842a;
  /* 121e839a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e839c jmp 0x121e842a */
  goto L_121e842a;
L_121e83a1:;
  /* 121e83a1 lock inc dword ptr [0x12205b44] */
  x86_unimpl("lock inc @ 0x121e83a1");
  /* 121e83a8 cmp dword ptr [0x12205b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e83af jg 0x121e83b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e83b5;
  /* 121e83b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e83b3 jmp 0x121e83ce */
  goto L_121e83ce;
L_121e83b5:;
  /* 121e83b5 lock dec dword ptr [0x12205b44] */
  x86_unimpl("lock dec @ 0x121e83b5");
  /* 121e83bc mov ebx, ecx */
  EBX = (ECX);
  /* 121e83be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e83c0 call 0x121dd590 */
  push32(0x121e83c5u); f_121dd590();
  /* 121e83c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 121e83cc mov ecx, ebx */
  ECX = (EBX);
L_121e83ce:;
  /* 121e83ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e83d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121e83d2 mov edi, edi */
  EDI = (EDI);
L_121e83d4:;
  /* 121e83d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e83d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e83d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121e83da je 0x121e83ff */
  if (C.zf) goto L_121e83ff;
  /* 121e83dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121e83de je 0x121e83ff */
  if (C.zf) goto L_121e83ff;
  /* 121e83e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e83e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121e83e2 push ecx */
  push32((uint32_t)(ECX));
  /* 121e83e3 push eax */
  push32((uint32_t)(EAX));
  /* 121e83e4 push ebx */
  push32((uint32_t)(EBX));
  /* 121e83e5 call 0x121e93d0 */
  push32(0x121e83eau); f_121e93d0();
  /* 121e83ea mov ebx, eax */
  EBX = (EAX);
  /* 121e83ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e83ef call 0x121e93d0 */
  push32(0x121e83f4u); f_121e93d0();
  /* 121e83f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e83f7 pop ecx */
  ECX = (pop32());
  /* 121e83f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e83fa jne 0x121e8405 */
  if (!C.zf) goto L_121e8405;
  /* 121e83fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121e83fd jne 0x121e83d4 */
  if (!C.zf) goto L_121e83d4;
L_121e83ff:;
  /* 121e83ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8401 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8403 je 0x121e840e */
  if (C.zf) goto L_121e840e;
L_121e8405:;
  /* 121e8405 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 121e840a jb 0x121e840e */
  if (C.cf) goto L_121e840e;
  /* 121e840c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_121e840e:;
  /* 121e840e pop eax */
  EAX = (pop32());
  /* 121e840f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8411 jne 0x121e841c */
  if (!C.zf) goto L_121e841c;
  /* 121e8413 lock dec dword ptr [0x12205b44] */
  x86_unimpl("lock dec @ 0x121e8413");
  /* 121e841a jmp 0x121e842a */
  goto L_121e842a;
L_121e841c:;
  /* 121e841c mov ebx, ecx */
  EBX = (ECX);
  /* 121e841e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e8420 call 0x121dd630 */
  push32(0x121e8425u); f_121dd630();
  /* 121e8425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8428 mov ecx, ebx */
  ECX = (EBX);
L_121e842a:;
  /* 121e842a mov eax, ecx */
  EAX = (ECX);
  /* 121e842c pop ebx */
  EBX = (pop32());
  /* 121e842d pop esi */
  ESI = (pop32());
  /* 121e842e pop edi */
  EDI = (pop32());
  /* 121e842f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e8430 ret  */
  ESPCHK(0x121e8330u, _esp0);
  ESP += 4; return;
}

/* FUN_10018440 @ 0x121e8440 (255 bytes, 88 insns) */
void f_121e8440(void) {
  FTRACE(0x121e8440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8440 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8441 mov ebp, esp */
  EBP = (ESP);
  /* 121e8443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_121e8446:;
  /* 121e8446 cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e844d jle 0x121e8466 */
  if ((C.zf||C.sf!=C.of)) goto L_121e8466;
  /* 121e844f push 8 */
  push32((uint32_t)(0x8u));
  /* 121e8451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8454 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8456 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e8458 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8459 call 0x121dfba0 */
  push32(0x121e845eu); f_121dfba0();
  /* 121e845e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8461 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e8464 jmp 0x121e847f */
  goto L_121e847f;
L_121e8466:;
  /* 121e8466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e846b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e846d mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e8473 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8475 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e8479 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 121e847c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e847f:;
  /* 121e847f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8483 je 0x121e8490 */
  if (C.zf) goto L_121e8490;
  /* 121e8485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e848b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e848e jmp 0x121e8446 */
  goto L_121e8446;
L_121e8490:;
  /* 121e8490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8493 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8495 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e8497 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e849a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e849d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e84a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e84a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e84a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e84a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e84ad je 0x121e84b5 */
  if (C.zf) goto L_121e84b5;
  /* 121e84af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e84b3 jne 0x121e84c8 */
  if (!C.zf) goto L_121e84c8;
L_121e84b5:;
  /* 121e84b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e84b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e84ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e84bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e84bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e84c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e84c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121e84c8:;
  /* 121e84c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121e84cf:;
  /* 121e84cf cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e84d6 jle 0x121e84eb */
  if ((C.zf||C.sf!=C.of)) goto L_121e84eb;
  /* 121e84d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e84da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e84dd push edx */
  push32((uint32_t)(EDX));
  /* 121e84de call 0x121dfba0 */
  push32(0x121e84e3u); f_121dfba0();
  /* 121e84e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e84e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e84e9 jmp 0x121e8500 */
  goto L_121e8500;
L_121e84eb:;
  /* 121e84eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e84ee mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e84f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e84f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e84fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e84fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_121e8500:;
  /* 121e8500 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8504 je 0x121e852b */
  if (C.zf) goto L_121e852b;
  /* 121e8506 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8509 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e850c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e850f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 121e8513 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e8516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8519 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e851b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e851d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e8520 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8523 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8526 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121e8529 jmp 0x121e84cf */
  goto L_121e84cf;
L_121e852b:;
  /* 121e852b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e852f jne 0x121e8538 */
  if (!C.zf) goto L_121e8538;
  /* 121e8531 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8534 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e8536 jmp 0x121e853b */
  goto L_121e853b;
L_121e8538:;
  /* 121e8538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121e853b:;
  /* 121e853b mov esp, ebp */
  ESP = (EBP);
  /* 121e853d pop ebp */
  EBP = (pop32());
  /* 121e853e ret  */
  ESPCHK(0x121e8440u, _esp0);
  ESP += 4; return;
}

/* FUN_10018540 @ 0x121e8540 (17 bytes, 8 insns) */
void f_121e8540(void) {
  FTRACE(0x121e8540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8540 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8541 mov ebp, esp */
  EBP = (ESP);
  /* 121e8543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8546 push eax */
  push32((uint32_t)(EAX));
  /* 121e8547 call 0x121e8440 */
  push32(0x121e854cu); f_121e8440();
  /* 121e854c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e854f pop ebp */
  EBP = (pop32());
  /* 121e8550 ret  */
  ESPCHK(0x121e8540u, _esp0);
  ESP += 4; return;
}

/* FUN_10018560 @ 0x121e8560 (297 bytes, 106 insns) */
void f_121e8560(void) {
  FTRACE(0x121e8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8560 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8561 mov ebp, esp */
  EBP = (ESP);
  /* 121e8563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8566 push esi */
  push32((uint32_t)(ESI));
L_121e8567:;
  /* 121e8567 cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e856e jle 0x121e8587 */
  if ((C.zf||C.sf!=C.of)) goto L_121e8587;
  /* 121e8570 push 8 */
  push32((uint32_t)(0x8u));
  /* 121e8572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8577 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e8579 push ecx */
  push32((uint32_t)(ECX));
  /* 121e857a call 0x121dfba0 */
  push32(0x121e857fu); f_121dfba0();
  /* 121e857f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8582 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e8585 jmp 0x121e85a0 */
  goto L_121e85a0;
L_121e8587:;
  /* 121e8587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e858a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e858c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e858e mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e8594 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8596 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e859a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 121e859d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_121e85a0:;
  /* 121e85a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e85a4 je 0x121e85b1 */
  if (C.zf) goto L_121e85b1;
  /* 121e85a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e85a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e85ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e85af jmp 0x121e8567 */
  goto L_121e8567;
L_121e85b1:;
  /* 121e85b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e85b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e85b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e85b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e85bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e85be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e85c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e85c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e85c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121e85ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e85ce je 0x121e85d6 */
  if (C.zf) goto L_121e85d6;
  /* 121e85d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e85d4 jne 0x121e85e9 */
  if (!C.zf) goto L_121e85e9;
L_121e85d6:;
  /* 121e85d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e85d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e85db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e85dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e85e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e85e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e85e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121e85e9:;
  /* 121e85e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e85f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121e85f7:;
  /* 121e85f7 cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e85fe jle 0x121e8613 */
  if ((C.zf||C.sf!=C.of)) goto L_121e8613;
  /* 121e8600 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e8602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8605 push edx */
  push32((uint32_t)(EDX));
  /* 121e8606 call 0x121dfba0 */
  push32(0x121e860bu); f_121dfba0();
  /* 121e860b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e860e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121e8611 jmp 0x121e8628 */
  goto L_121e8628;
L_121e8613:;
  /* 121e8613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8616 mov ecx, dword ptr [0x12203c98] */
  ECX = (r32((uint32_t)(0x12203c98)));
  /* 121e861c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e861e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121e8622 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e8625 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_121e8628:;
  /* 121e8628 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e862c je 0x121e8669 */
  if (C.zf) goto L_121e8669;
  /* 121e862e push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8630 push 0xa */
  push32((uint32_t)(0xau));
  /* 121e8632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8635 push eax */
  push32((uint32_t)(EAX));
  /* 121e8636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8639 push ecx */
  push32((uint32_t)(ECX));
  /* 121e863a call 0x121e9500 */
  push32(0x121e863fu); f_121e9500();
  /* 121e863f mov ecx, eax */
  ECX = (EAX);
  /* 121e8641 mov esi, edx */
  ESI = (EDX);
  /* 121e8643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8646 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8649 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e864a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e864c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e864e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e8651 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 121e8654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8659 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e865b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e865e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8661 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8664 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121e8667 jmp 0x121e85f7 */
  goto L_121e85f7;
L_121e8669:;
  /* 121e8669 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e866d jne 0x121e867e */
  if (!C.zf) goto L_121e867e;
  /* 121e866f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8672 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e8674 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8677 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e867a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e867c jmp 0x121e8684 */
  goto L_121e8684;
L_121e867e:;
  /* 121e867e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8681 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_121e8684:;
  /* 121e8684 pop esi */
  ESI = (pop32());
  /* 121e8685 mov esp, ebp */
  ESP = (EBP);
  /* 121e8687 pop ebp */
  EBP = (pop32());
  /* 121e8688 ret  */
  ESPCHK(0x121e8560u, _esp0);
  ESP += 4; return;
}

/* FUN_10018690 @ 0x121e8690 (61 bytes, 18 insns) */
void f_121e8690(void) {
  FTRACE(0x121e8690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8690 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8691 mov ebp, esp */
  EBP = (ESP);
  /* 121e8693 cmp dword ptr [0x12205b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e869a jne 0x121e86cb */
  if (!C.zf) goto L_121e86cb;
  /* 121e869c push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e869e call 0x121dd590 */
  push32(0x121e86a3u); f_121dd590();
  /* 121e86a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e86a6 cmp dword ptr [0x12205b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e86ad jne 0x121e86c1 */
  if (!C.zf) goto L_121e86c1;
  /* 121e86af call 0x121e86f0 */
  push32(0x121e86b4u); f_121e86f0();
  /* 121e86b4 mov eax, dword ptr [0x12205b10] */
  EAX = (r32((uint32_t)(0x12205b10)));
  /* 121e86b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e86bc mov dword ptr [0x12205b10], eax */
  w32((uint32_t)(0x12205b10), (EAX));
L_121e86c1:;
  /* 121e86c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e86c3 call 0x121dd630 */
  push32(0x121e86c8u); f_121dd630();
  /* 121e86c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e86cb:;
  /* 121e86cb pop ebp */
  EBP = (pop32());
  /* 121e86cc ret  */
  ESPCHK(0x121e8690u, _esp0);
  ESP += 4; return;
}

/* FUN_100186d0 @ 0x121e86d0 (30 bytes, 11 insns) */
void f_121e86d0(void) {
  FTRACE(0x121e86d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e86d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e86d1 mov ebp, esp */
  EBP = (ESP);
  /* 121e86d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e86d5 call 0x121dd590 */
  push32(0x121e86dau); f_121dd590();
  /* 121e86da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e86dd call 0x121e86f0 */
  push32(0x121e86e2u); f_121e86f0();
  /* 121e86e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e86e4 call 0x121dd630 */
  push32(0x121e86e9u); f_121dd630();
  /* 121e86e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e86ec pop ebp */
  EBP = (pop32());
  /* 121e86ed ret  */
  ESPCHK(0x121e86d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100186f0 @ 0x121e86f0 (939 bytes, 266 insns) */
void f_121e86f0(void) {
  FTRACE(0x121e86f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e86f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e86f1 mov ebp, esp */
  EBP = (ESP);
  /* 121e86f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e86f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e86fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e86ff call 0x121dd590 */
  push32(0x121e8704u); f_121dd590();
  /* 121e8704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8707 mov dword ptr [0x12205a58], 0 */
  w32((uint32_t)(0x12205a58), (0x0u));
  /* 121e8711 mov dword ptr [0x12204e38], 0xffffffff */
  w32((uint32_t)(0x12204e38), (0xffffffffu));
  /* 121e871b mov eax, dword ptr [0x12204e38] */
  EAX = (r32((uint32_t)(0x12204e38)));
  /* 121e8720 mov dword ptr [0x12204e28], eax */
  w32((uint32_t)(0x12204e28), (EAX));
  /* 121e8725 push 0x12201f20 */
  push32((uint32_t)(0x12201f20u));
  /* 121e872a call 0x121e9570 */
  push32(0x121e872fu); f_121e9570();
  /* 121e872f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8732 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e8735 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8739 jne 0x121e8873 */
  if (!C.zf) goto L_121e8873;
  /* 121e873f push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e8741 call 0x121dd630 */
  push32(0x121e8746u); f_121dd630();
  /* 121e8746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8749 push 0x12205a60 */
  push32((uint32_t)(0x12205a60u));
  /* 121e874e call dword ptr [0x122082e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082e0))), 0x121e8754u);
  /* 121e8754 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8757 je 0x121e886e */
  if (C.zf) goto L_121e886e;
  /* 121e875d mov dword ptr [0x12205a58], 1 */
  w32((uint32_t)(0x12205a58), (0x1u));
  /* 121e8767 mov ecx, dword ptr [0x12205a60] */
  ECX = (r32((uint32_t)(0x12205a60)));
  /* 121e876d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8770 mov dword ptr [0x12204d90], ecx */
  w32((uint32_t)(0x12204d90), (ECX));
  /* 121e8776 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8778 mov dx, word ptr [0x12205aa6] */
  DX = (r16((uint32_t)(0x12205aa6)));
  /* 121e877f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e8781 je 0x121e8799 */
  if (C.zf) goto L_121e8799;
  /* 121e8783 mov eax, dword ptr [0x12205ab4] */
  EAX = (r32((uint32_t)(0x12205ab4)));
  /* 121e8788 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e878b mov ecx, dword ptr [0x12204d90] */
  ECX = (r32((uint32_t)(0x12204d90)));
  /* 121e8791 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8793 mov dword ptr [0x12204d90], ecx */
  w32((uint32_t)(0x12204d90), (ECX));
L_121e8799:;
  /* 121e8799 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e879b mov dx, word ptr [0x12205afa] */
  DX = (r16((uint32_t)(0x12205afa)));
  /* 121e87a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e87a4 je 0x121e87ce */
  if (C.zf) goto L_121e87ce;
  /* 121e87a6 cmp dword ptr [0x12205b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e87ad je 0x121e87ce */
  if (C.zf) goto L_121e87ce;
  /* 121e87af mov dword ptr [0x12204d94], 1 */
  w32((uint32_t)(0x12204d94), (0x1u));
  /* 121e87b9 mov eax, dword ptr [0x12205b08] */
  EAX = (r32((uint32_t)(0x12205b08)));
  /* 121e87be sub eax, dword ptr [0x12205ab4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12205ab4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e87c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e87c7 mov dword ptr [0x12204d98], eax */
  w32((uint32_t)(0x12204d98), (EAX));
  /* 121e87cc jmp 0x121e87e2 */
  goto L_121e87e2;
L_121e87ce:;
  /* 121e87ce mov dword ptr [0x12204d94], 0 */
  w32((uint32_t)(0x12204d94), (0x0u));
  /* 121e87d8 mov dword ptr [0x12204d98], 0 */
  w32((uint32_t)(0x12204d98), (0x0u));
L_121e87e2:;
  /* 121e87e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121e87e5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e87e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e87e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121e87ea mov edx, dword ptr [0x12204e1c] */
  EDX = (r32((uint32_t)(0x12204e1c)));
  /* 121e87f0 push edx */
  push32((uint32_t)(EDX));
  /* 121e87f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e87f3 push 0x12205a64 */
  push32((uint32_t)(0x12205a64u));
  /* 121e87f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e87fd mov eax, dword ptr [0x122059c8] */
  EAX = (r32((uint32_t)(0x122059c8)));
  /* 121e8802 push eax */
  push32((uint32_t)(EAX));
  /* 121e8803 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e8809u);
  /* 121e8809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e880b je 0x121e881f */
  if (C.zf) goto L_121e881f;
  /* 121e880d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8811 jne 0x121e881f */
  if (!C.zf) goto L_121e881f;
  /* 121e8813 mov ecx, dword ptr [0x12204e1c] */
  ECX = (r32((uint32_t)(0x12204e1c)));
  /* 121e8819 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 121e881d jmp 0x121e8828 */
  goto L_121e8828;
L_121e881f:;
  /* 121e881f mov edx, dword ptr [0x12204e1c] */
  EDX = (r32((uint32_t)(0x12204e1c)));
  /* 121e8825 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_121e8828:;
  /* 121e8828 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121e882b push eax */
  push32((uint32_t)(EAX));
  /* 121e882c push 0 */
  push32((uint32_t)(0x0u));
  /* 121e882e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121e8830 mov ecx, dword ptr [0x12204e20] */
  ECX = (r32((uint32_t)(0x12204e20)));
  /* 121e8836 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8837 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e8839 push 0x12205ab8 */
  push32((uint32_t)(0x12205ab8u));
  /* 121e883e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e8843 mov edx, dword ptr [0x122059c8] */
  EDX = (r32((uint32_t)(0x122059c8)));
  /* 121e8849 push edx */
  push32((uint32_t)(EDX));
  /* 121e884a call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e8850u);
  /* 121e8850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e8852 je 0x121e8865 */
  if (C.zf) goto L_121e8865;
  /* 121e8854 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8858 jne 0x121e8865 */
  if (!C.zf) goto L_121e8865;
  /* 121e885a mov eax, dword ptr [0x12204e20] */
  EAX = (r32((uint32_t)(0x12204e20)));
  /* 121e885f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 121e8863 jmp 0x121e886e */
  goto L_121e886e;
L_121e8865:;
  /* 121e8865 mov ecx, dword ptr [0x12204e20] */
  ECX = (r32((uint32_t)(0x12204e20)));
  /* 121e886b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_121e886e:;
  /* 121e886e jmp 0x121e8a97 */
  goto L_121e8a97;
L_121e8873:;
  /* 121e8873 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8876 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e8879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e887b je 0x121e889d */
  if (C.zf) goto L_121e889d;
  /* 121e887d cmp dword ptr [0x12205b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8884 je 0x121e88ac */
  if (C.zf) goto L_121e88ac;
  /* 121e8886 mov ecx, dword ptr [0x12205b0c] */
  ECX = (r32((uint32_t)(0x12205b0c)));
  /* 121e888c push ecx */
  push32((uint32_t)(ECX));
  /* 121e888d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8890 push edx */
  push32((uint32_t)(EDX));
  /* 121e8891 call 0x121e5820 */
  push32(0x121e8896u); f_121e5820();
  /* 121e8896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e889b jne 0x121e88ac */
  if (!C.zf) goto L_121e88ac;
L_121e889d:;
  /* 121e889d push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e889f call 0x121dd630 */
  push32(0x121e88a4u); f_121dd630();
  /* 121e88a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e88a7 jmp 0x121e8a97 */
  goto L_121e8a97;
L_121e88ac:;
  /* 121e88ac push 2 */
  push32((uint32_t)(0x2u));
  /* 121e88ae mov eax, dword ptr [0x12205b0c] */
  EAX = (r32((uint32_t)(0x12205b0c)));
  /* 121e88b3 push eax */
  push32((uint32_t)(EAX));
  /* 121e88b4 call 0x121da620 */
  push32(0x121e88b9u); f_121da620();
  /* 121e88b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e88bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 121e88c1 push 0x12201f18 */
  push32((uint32_t)(0x12201f18u));
  /* 121e88c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e88c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e88cb push ecx */
  push32((uint32_t)(ECX));
  /* 121e88cc call 0x121dc9c0 */
  push32(0x121e88d1u); f_121dc9c0();
  /* 121e88d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e88d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e88d7 push eax */
  push32((uint32_t)(EAX));
  /* 121e88d8 call 0x121d9b90 */
  push32(0x121e88ddu); f_121d9b90();
  /* 121e88dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e88e0 mov dword ptr [0x12205b0c], eax */
  w32((uint32_t)(0x12205b0c), (EAX));
  /* 121e88e5 cmp dword ptr [0x12205b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e88ec jne 0x121e88fd */
  if (!C.zf) goto L_121e88fd;
  /* 121e88ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e88f0 call 0x121dd630 */
  push32(0x121e88f5u); f_121dd630();
  /* 121e88f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e88f8 jmp 0x121e8a97 */
  goto L_121e8a97;
L_121e88fd:;
  /* 121e88fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8900 push edx */
  push32((uint32_t)(EDX));
  /* 121e8901 mov eax, dword ptr [0x12205b0c] */
  EAX = (r32((uint32_t)(0x12205b0c)));
  /* 121e8906 push eax */
  push32((uint32_t)(EAX));
  /* 121e8907 call 0x121dcb40 */
  push32(0x121e890cu); f_121dcb40();
  /* 121e890c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e890f push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e8911 call 0x121dd630 */
  push32(0x121e8916u); f_121dd630();
  /* 121e8916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8919 push 3 */
  push32((uint32_t)(0x3u));
  /* 121e891b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e891e push ecx */
  push32((uint32_t)(ECX));
  /* 121e891f mov edx, dword ptr [0x12204e1c] */
  EDX = (r32((uint32_t)(0x12204e1c)));
  /* 121e8925 push edx */
  push32((uint32_t)(EDX));
  /* 121e8926 call 0x121dd3b0 */
  push32(0x121e892bu); f_121dd3b0();
  /* 121e892b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e892e mov eax, dword ptr [0x12204e1c] */
  EAX = (r32((uint32_t)(0x12204e1c)));
  /* 121e8933 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 121e8937 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e893a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e893d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e8940 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8943 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e8946 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8949 jne 0x121e895d */
  if (!C.zf) goto L_121e895d;
  /* 121e894b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e894e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8951 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e8954 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8957 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e895a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121e895d:;
  /* 121e895d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8960 push eax */
  push32((uint32_t)(EAX));
  /* 121e8961 call 0x121e8440 */
  push32(0x121e8966u); f_121e8440();
  /* 121e8966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8969 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e896f mov dword ptr [0x12204d90], eax */
  w32((uint32_t)(0x12204d90), (EAX));
L_121e8974:;
  /* 121e8974 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8977 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e897a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e897d je 0x121e8995 */
  if (C.zf) goto L_121e8995;
  /* 121e897f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8982 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e8985 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8988 jl 0x121e89a0 */
  if ((C.sf!=C.of)) goto L_121e89a0;
  /* 121e898a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e898d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e8990 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8993 jg 0x121e89a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e89a0;
L_121e8995:;
  /* 121e8995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8998 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e899b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e899e jmp 0x121e8974 */
  goto L_121e8974;
L_121e89a0:;
  /* 121e89a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e89a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e89a9 jne 0x121e8a45 */
  if (!C.zf) goto L_121e8a45;
  /* 121e89af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e89b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e89b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89bb push edx */
  push32((uint32_t)(EDX));
  /* 121e89bc call 0x121e8440 */
  push32(0x121e89c1u); f_121e8440();
  /* 121e89c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e89c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e89c7 mov ecx, dword ptr [0x12204d90] */
  ECX = (r32((uint32_t)(0x12204d90)));
  /* 121e89cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e89cf mov dword ptr [0x12204d90], ecx */
  w32((uint32_t)(0x12204d90), (ECX));
L_121e89d5:;
  /* 121e89d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e89db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e89de jl 0x121e89f6 */
  if ((C.sf!=C.of)) goto L_121e89f6;
  /* 121e89e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e89e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e89e9 jg 0x121e89f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e89f6;
  /* 121e89eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e89f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e89f4 jmp 0x121e89d5 */
  goto L_121e89d5;
L_121e89f6:;
  /* 121e89f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e89f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e89fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e89ff jne 0x121e8a45 */
  if (!C.zf) goto L_121e8a45;
  /* 121e8a01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8a07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e8a0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a0d push ecx */
  push32((uint32_t)(ECX));
  /* 121e8a0e call 0x121e8440 */
  push32(0x121e8a13u); f_121e8440();
  /* 121e8a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8a16 mov edx, dword ptr [0x12204d90] */
  EDX = (r32((uint32_t)(0x12204d90)));
  /* 121e8a1c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8a1e mov dword ptr [0x12204d90], edx */
  w32((uint32_t)(0x12204d90), (EDX));
L_121e8a24:;
  /* 121e8a24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e8a2a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8a2d jl 0x121e8a45 */
  if ((C.sf!=C.of)) goto L_121e8a45;
  /* 121e8a2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e8a35 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8a38 jg 0x121e8a45 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e8a45;
  /* 121e8a3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8a40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e8a43 jmp 0x121e8a24 */
  goto L_121e8a24;
L_121e8a45:;
  /* 121e8a45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8a49 je 0x121e8a59 */
  if (C.zf) goto L_121e8a59;
  /* 121e8a4b mov edx, dword ptr [0x12204d90] */
  EDX = (r32((uint32_t)(0x12204d90)));
  /* 121e8a51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e8a53 mov dword ptr [0x12204d90], edx */
  w32((uint32_t)(0x12204d90), (EDX));
L_121e8a59:;
  /* 121e8a59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e8a5f mov dword ptr [0x12204d94], ecx */
  w32((uint32_t)(0x12204d94), (ECX));
  /* 121e8a65 cmp dword ptr [0x12204d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12204d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8a6c je 0x121e8a8e */
  if (C.zf) goto L_121e8a8e;
  /* 121e8a6e push 3 */
  push32((uint32_t)(0x3u));
  /* 121e8a70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8a73 push edx */
  push32((uint32_t)(EDX));
  /* 121e8a74 mov eax, dword ptr [0x12204e20] */
  EAX = (r32((uint32_t)(0x12204e20)));
  /* 121e8a79 push eax */
  push32((uint32_t)(EAX));
  /* 121e8a7a call 0x121dd3b0 */
  push32(0x121e8a7fu); f_121dd3b0();
  /* 121e8a7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8a82 mov ecx, dword ptr [0x12204e20] */
  ECX = (r32((uint32_t)(0x12204e20)));
  /* 121e8a88 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 121e8a8c jmp 0x121e8a97 */
  goto L_121e8a97;
L_121e8a8e:;
  /* 121e8a8e mov edx, dword ptr [0x12204e20] */
  EDX = (r32((uint32_t)(0x12204e20)));
  /* 121e8a94 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_121e8a97:;
  /* 121e8a97 mov esp, ebp */
  ESP = (EBP);
  /* 121e8a99 pop ebp */
  EBP = (pop32());
  /* 121e8a9a ret  */
  ESPCHK(0x121e86f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018aa0 @ 0x121e8aa0 (46 bytes, 18 insns) */
void f_121e8aa0(void) {
  FTRACE(0x121e8aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8aa1 mov ebp, esp */
  EBP = (ESP);
  /* 121e8aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8aa4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e8aa6 call 0x121dd590 */
  push32(0x121e8aabu); f_121dd590();
  /* 121e8aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8ab1 push eax */
  push32((uint32_t)(EAX));
  /* 121e8ab2 call 0x121e8ad0 */
  push32(0x121e8ab7u); f_121e8ad0();
  /* 121e8ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8aba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e8abd push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e8abf call 0x121dd630 */
  push32(0x121e8ac4u); f_121dd630();
  /* 121e8ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8aca mov esp, ebp */
  ESP = (EBP);
  /* 121e8acc pop ebp */
  EBP = (pop32());
  /* 121e8acd ret  */
  ESPCHK(0x121e8aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ad0 @ 0x121e8ad0 (762 bytes, 246 insns) */
void f_121e8ad0(void) {
  FTRACE(0x121e8ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8ad1 mov ebp, esp */
  EBP = (ESP);
  /* 121e8ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8ad4 cmp dword ptr [0x12204d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12204d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8adb jne 0x121e8ae4 */
  if (!C.zf) goto L_121e8ae4;
  /* 121e8add xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8adf jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8ae4:;
  /* 121e8ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8ae7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121e8aea cmp ecx, dword ptr [0x12204e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12204e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8af0 jne 0x121e8b04 */
  if (!C.zf) goto L_121e8b04;
  /* 121e8af2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8af5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121e8af8 cmp eax, dword ptr [0x12204e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12204e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8afe je 0x121e8ccb */
  if (C.zf) goto L_121e8ccb;
L_121e8b04:;
  /* 121e8b04 cmp dword ptr [0x12205a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8b0b je 0x121e8c85 */
  if (C.zf) goto L_121e8c85;
  /* 121e8b11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8b13 mov cx, word ptr [0x12205af8] */
  CX = (r16((uint32_t)(0x12205af8)));
  /* 121e8b1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e8b1c jne 0x121e8b79 */
  if (!C.zf) goto L_121e8b79;
  /* 121e8b1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8b20 mov dx, word ptr [0x12205b06] */
  DX = (r16((uint32_t)(0x12205b06)));
  /* 121e8b27 push edx */
  push32((uint32_t)(EDX));
  /* 121e8b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8b2a mov ax, word ptr [0x12205b04] */
  AX = (r16((uint32_t)(0x12205b04)));
  /* 121e8b30 push eax */
  push32((uint32_t)(EAX));
  /* 121e8b31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8b33 mov cx, word ptr [0x12205b02] */
  CX = (r16((uint32_t)(0x12205b02)));
  /* 121e8b3a push ecx */
  push32((uint32_t)(ECX));
  /* 121e8b3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8b3d mov dx, word ptr [0x12205b00] */
  DX = (r16((uint32_t)(0x12205b00)));
  /* 121e8b44 push edx */
  push32((uint32_t)(EDX));
  /* 121e8b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8b49 mov ax, word ptr [0x12205afc] */
  AX = (r16((uint32_t)(0x12205afc)));
  /* 121e8b4f push eax */
  push32((uint32_t)(EAX));
  /* 121e8b50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8b52 mov cx, word ptr [0x12205afe] */
  CX = (r16((uint32_t)(0x12205afe)));
  /* 121e8b59 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8b5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8b5c mov dx, word ptr [0x12205afa] */
  DX = (r16((uint32_t)(0x12205afa)));
  /* 121e8b63 push edx */
  push32((uint32_t)(EDX));
  /* 121e8b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8b67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121e8b6a push ecx */
  push32((uint32_t)(ECX));
  /* 121e8b6b push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8b6f call 0x121e8dd0 */
  push32(0x121e8b74u); f_121e8dd0();
  /* 121e8b74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8b77 jmp 0x121e8bca */
  goto L_121e8bca;
L_121e8b79:;
  /* 121e8b79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8b7b mov dx, word ptr [0x12205b06] */
  DX = (r16((uint32_t)(0x12205b06)));
  /* 121e8b82 push edx */
  push32((uint32_t)(EDX));
  /* 121e8b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8b85 mov ax, word ptr [0x12205b04] */
  AX = (r16((uint32_t)(0x12205b04)));
  /* 121e8b8b push eax */
  push32((uint32_t)(EAX));
  /* 121e8b8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8b8e mov cx, word ptr [0x12205b02] */
  CX = (r16((uint32_t)(0x12205b02)));
  /* 121e8b95 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8b96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8b98 mov dx, word ptr [0x12205b00] */
  DX = (r16((uint32_t)(0x12205b00)));
  /* 121e8b9f push edx */
  push32((uint32_t)(EDX));
  /* 121e8ba0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8ba2 mov ax, word ptr [0x12205afe] */
  AX = (r16((uint32_t)(0x12205afe)));
  /* 121e8ba8 push eax */
  push32((uint32_t)(EAX));
  /* 121e8ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8bab push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8bad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8baf mov cx, word ptr [0x12205afa] */
  CX = (r16((uint32_t)(0x12205afa)));
  /* 121e8bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8bba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121e8bbd push eax */
  push32((uint32_t)(EAX));
  /* 121e8bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8bc2 call 0x121e8dd0 */
  push32(0x121e8bc7u); f_121e8dd0();
  /* 121e8bc7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e8bca:;
  /* 121e8bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8bcc mov cx, word ptr [0x12205aa4] */
  CX = (r16((uint32_t)(0x12205aa4)));
  /* 121e8bd3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e8bd5 jne 0x121e8c32 */
  if (!C.zf) goto L_121e8c32;
  /* 121e8bd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8bd9 mov dx, word ptr [0x12205ab2] */
  DX = (r16((uint32_t)(0x12205ab2)));
  /* 121e8be0 push edx */
  push32((uint32_t)(EDX));
  /* 121e8be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8be3 mov ax, word ptr [0x12205ab0] */
  AX = (r16((uint32_t)(0x12205ab0)));
  /* 121e8be9 push eax */
  push32((uint32_t)(EAX));
  /* 121e8bea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8bec mov cx, word ptr [0x12205aae] */
  CX = (r16((uint32_t)(0x12205aae)));
  /* 121e8bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8bf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8bf6 mov dx, word ptr [0x12205aac] */
  DX = (r16((uint32_t)(0x12205aac)));
  /* 121e8bfd push edx */
  push32((uint32_t)(EDX));
  /* 121e8bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8c02 mov ax, word ptr [0x12205aa8] */
  AX = (r16((uint32_t)(0x12205aa8)));
  /* 121e8c08 push eax */
  push32((uint32_t)(EAX));
  /* 121e8c09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8c0b mov cx, word ptr [0x12205aaa] */
  CX = (r16((uint32_t)(0x12205aaa)));
  /* 121e8c12 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8c13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8c15 mov dx, word ptr [0x12205aa6] */
  DX = (r16((uint32_t)(0x12205aa6)));
  /* 121e8c1c push edx */
  push32((uint32_t)(EDX));
  /* 121e8c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8c20 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121e8c23 push ecx */
  push32((uint32_t)(ECX));
  /* 121e8c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c28 call 0x121e8dd0 */
  push32(0x121e8c2du); f_121e8dd0();
  /* 121e8c2d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8c30 jmp 0x121e8c83 */
  goto L_121e8c83;
L_121e8c32:;
  /* 121e8c32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8c34 mov dx, word ptr [0x12205ab2] */
  DX = (r16((uint32_t)(0x12205ab2)));
  /* 121e8c3b push edx */
  push32((uint32_t)(EDX));
  /* 121e8c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8c3e mov ax, word ptr [0x12205ab0] */
  AX = (r16((uint32_t)(0x12205ab0)));
  /* 121e8c44 push eax */
  push32((uint32_t)(EAX));
  /* 121e8c45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8c47 mov cx, word ptr [0x12205aae] */
  CX = (r16((uint32_t)(0x12205aae)));
  /* 121e8c4e push ecx */
  push32((uint32_t)(ECX));
  /* 121e8c4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e8c51 mov dx, word ptr [0x12205aac] */
  DX = (r16((uint32_t)(0x12205aac)));
  /* 121e8c58 push edx */
  push32((uint32_t)(EDX));
  /* 121e8c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8c5b mov ax, word ptr [0x12205aaa] */
  AX = (r16((uint32_t)(0x12205aaa)));
  /* 121e8c61 push eax */
  push32((uint32_t)(EAX));
  /* 121e8c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e8c68 mov cx, word ptr [0x12205aa6] */
  CX = (r16((uint32_t)(0x12205aa6)));
  /* 121e8c6f push ecx */
  push32((uint32_t)(ECX));
  /* 121e8c70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8c73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121e8c76 push eax */
  push32((uint32_t)(EAX));
  /* 121e8c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c7b call 0x121e8dd0 */
  push32(0x121e8c80u); f_121e8dd0();
  /* 121e8c80 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e8c83:;
  /* 121e8c83 jmp 0x121e8ccb */
  goto L_121e8ccb;
L_121e8c85:;
  /* 121e8c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 121e8c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8c91 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8c93 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e8c95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8c98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121e8c9b push edx */
  push32((uint32_t)(EDX));
  /* 121e8c9c push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8c9e push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8ca0 call 0x121e8dd0 */
  push32(0x121e8ca5u); f_121e8dd0();
  /* 121e8ca5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8caa push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8cac push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8cae push 2 */
  push32((uint32_t)(0x2u));
  /* 121e8cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8cb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 121e8cb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 121e8cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8cbb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121e8cbe push ecx */
  push32((uint32_t)(ECX));
  /* 121e8cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 121e8cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e8cc3 call 0x121e8dd0 */
  push32(0x121e8cc8u); f_121e8dd0();
  /* 121e8cc8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e8ccb:;
  /* 121e8ccb mov edx, dword ptr [0x12204e2c] */
  EDX = (r32((uint32_t)(0x12204e2c)));
  /* 121e8cd1 cmp edx, dword ptr [0x12204e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12204e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8cd7 jge 0x121e8d24 */
  if ((C.sf==C.of)) goto L_121e8d24;
  /* 121e8cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8cdc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121e8cdf cmp ecx, dword ptr [0x12204e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12204e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8ce5 jl 0x121e8cf5 */
  if ((C.sf!=C.of)) goto L_121e8cf5;
  /* 121e8ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8cea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e8ced cmp eax, dword ptr [0x12204e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12204e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8cf3 jle 0x121e8cfc */
  if ((C.zf||C.sf!=C.of)) goto L_121e8cfc;
L_121e8cf5:;
  /* 121e8cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8cf7 jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8cfc:;
  /* 121e8cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8cff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121e8d02 cmp edx, dword ptr [0x12204e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12204e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d08 jle 0x121e8d22 */
  if ((C.zf||C.sf!=C.of)) goto L_121e8d22;
  /* 121e8d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d0d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121e8d10 cmp ecx, dword ptr [0x12204e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12204e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d16 jge 0x121e8d22 */
  if ((C.sf==C.of)) goto L_121e8d22;
  /* 121e8d18 mov eax, 1 */
  EAX = (0x1u);
  /* 121e8d1d jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8d22:;
  /* 121e8d22 jmp 0x121e8d67 */
  goto L_121e8d67;
L_121e8d24:;
  /* 121e8d24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d27 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e8d2a cmp eax, dword ptr [0x12204e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12204e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d30 jl 0x121e8d40 */
  if ((C.sf!=C.of)) goto L_121e8d40;
  /* 121e8d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d35 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121e8d38 cmp edx, dword ptr [0x12204e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12204e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d3e jle 0x121e8d47 */
  if ((C.zf||C.sf!=C.of)) goto L_121e8d47;
L_121e8d40:;
  /* 121e8d40 mov eax, 1 */
  EAX = (0x1u);
  /* 121e8d45 jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8d47:;
  /* 121e8d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d4a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121e8d4d cmp ecx, dword ptr [0x12204e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12204e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d53 jle 0x121e8d67 */
  if ((C.zf||C.sf!=C.of)) goto L_121e8d67;
  /* 121e8d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d58 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e8d5b cmp eax, dword ptr [0x12204e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12204e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d61 jge 0x121e8d67 */
  if ((C.sf==C.of)) goto L_121e8d67;
  /* 121e8d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8d65 jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8d67:;
  /* 121e8d67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121e8d6d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e8d75 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8d77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d7a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e8d7d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8d83 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8d85 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8d8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e8d8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e8d91 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121e8d94 cmp edx, dword ptr [0x12204e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12204e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8d9a jne 0x121e8db2 */
  if (!C.zf) goto L_121e8db2;
  /* 121e8d9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8d9f cmp eax, dword ptr [0x12204e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12204e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8da5 jl 0x121e8dae */
  if ((C.sf!=C.of)) goto L_121e8dae;
  /* 121e8da7 mov eax, 1 */
  EAX = (0x1u);
  /* 121e8dac jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8dae:;
  /* 121e8dae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e8db0 jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8db2:;
  /* 121e8db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8db5 cmp ecx, dword ptr [0x12204e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12204e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8dbb jge 0x121e8dc4 */
  if ((C.sf==C.of)) goto L_121e8dc4;
  /* 121e8dbd mov eax, 1 */
  EAX = (0x1u);
  /* 121e8dc2 jmp 0x121e8dc6 */
  goto L_121e8dc6;
L_121e8dc4:;
  /* 121e8dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e8dc6:;
  /* 121e8dc6 mov esp, ebp */
  ESP = (EBP);
  /* 121e8dc8 pop ebp */
  EBP = (pop32());
  /* 121e8dc9 ret  */
  ESPCHK(0x121e8ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018dd0 @ 0x121e8dd0 (504 bytes, 145 insns) */
void f_121e8dd0(void) {
  FTRACE(0x121e8dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8dd1 mov ebp, esp */
  EBP = (ESP);
  /* 121e8dd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8dd6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8dda jne 0x121e8eac */
  if (!C.zf) goto L_121e8eac;
  /* 121e8de0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8de3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 121e8de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e8de8 jne 0x121e8df9 */
  if (!C.zf) goto L_121e8df9;
  /* 121e8dea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8ded mov edx, dword ptr [ecx*4 + 0x12204e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12204e4c)));
  /* 121e8df4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121e8df7 jmp 0x121e8e06 */
  goto L_121e8e06;
L_121e8df9:;
  /* 121e8df9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8dfc mov ecx, dword ptr [eax*4 + 0x12204e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12204e80)));
  /* 121e8e03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_121e8e06:;
  /* 121e8e06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e8e09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8e0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e8e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8e12 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8e15 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8e1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8e1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8e20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8e23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8e26 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 121e8e29 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 121e8e2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e8e2e mov ecx, 7 */
  ECX = (0x7u);
  /* 121e8e33 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e8e35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e8e38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e8e3b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8e3e jge 0x121e8e59 */
  if ((C.sf==C.of)) goto L_121e8e59;
  /* 121e8e40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e8e43 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8e46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e8e49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8e4c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8e4f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8e52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8e54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e8e57 jmp 0x121e8e6d */
  goto L_121e8e6d;
L_121e8e59:;
  /* 121e8e59 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e8e5c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8e5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e8e62 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8e65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8e68 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8e6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e8e6d:;
  /* 121e8e6d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8e71 jne 0x121e8eaa */
  if (!C.zf) goto L_121e8eaa;
  /* 121e8e73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8e76 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 121e8e79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e8e7b jne 0x121e8e8c */
  if (!C.zf) goto L_121e8e8c;
  /* 121e8e7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8e80 mov eax, dword ptr [edx*4 + 0x12204e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12204e50)));
  /* 121e8e87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e8e8a jmp 0x121e8e99 */
  goto L_121e8e99;
L_121e8e8c:;
  /* 121e8e8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8e8f mov edx, dword ptr [ecx*4 + 0x12204e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12204e84)));
  /* 121e8e96 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e8e99:;
  /* 121e8e99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8e9c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8e9f jle 0x121e8eaa */
  if ((C.zf||C.sf!=C.of)) goto L_121e8eaa;
  /* 121e8ea1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8ea4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8ea7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121e8eaa:;
  /* 121e8eaa jmp 0x121e8ee1 */
  goto L_121e8ee1;
L_121e8eac:;
  /* 121e8eac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8eaf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121e8eb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e8eb4 jne 0x121e8ec5 */
  if (!C.zf) goto L_121e8ec5;
  /* 121e8eb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8eb9 mov ecx, dword ptr [eax*4 + 0x12204e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12204e4c)));
  /* 121e8ec0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e8ec3 jmp 0x121e8ed2 */
  goto L_121e8ed2;
L_121e8ec5:;
  /* 121e8ec5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e8ec8 mov eax, dword ptr [edx*4 + 0x12204e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12204e80)));
  /* 121e8ecf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_121e8ed2:;
  /* 121e8ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e8ed5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e8ed8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8edb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8ede mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121e8ee1:;
  /* 121e8ee1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8ee5 jne 0x121e8f21 */
  if (!C.zf) goto L_121e8f21;
  /* 121e8ee7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8eea mov dword ptr [0x12204e2c], eax */
  w32((uint32_t)(0x12204e2c), (EAX));
  /* 121e8eef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 121e8ef2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8ef5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 121e8ef8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8efa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8efd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 121e8f00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8f08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 121e8f0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f0d mov dword ptr [0x12204e30], ecx */
  w32((uint32_t)(0x12204e30), (ECX));
  /* 121e8f13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8f16 mov dword ptr [0x12204e28], edx */
  w32((uint32_t)(0x12204e28), (EDX));
  /* 121e8f1c jmp 0x121e8fc4 */
  goto L_121e8fc4;
L_121e8f21:;
  /* 121e8f21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e8f24 mov dword ptr [0x12204e3c], eax */
  w32((uint32_t)(0x12204e3c), (EAX));
  /* 121e8f29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 121e8f2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8f2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 121e8f32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8f37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 121e8f3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8f42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 121e8f45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f47 mov dword ptr [0x12204e40], ecx */
  w32((uint32_t)(0x12204e40), (ECX));
  /* 121e8f4d mov edx, dword ptr [0x12204d98] */
  EDX = (r32((uint32_t)(0x12204d98)));
  /* 121e8f53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e8f59 mov eax, dword ptr [0x12204e40] */
  EAX = (r32((uint32_t)(0x12204e40)));
  /* 121e8f5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f60 mov dword ptr [0x12204e40], eax */
  w32((uint32_t)(0x12204e40), (EAX));
  /* 121e8f65 cmp dword ptr [0x12204e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12204e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8f6c jge 0x121e8f91 */
  if ((C.sf==C.of)) goto L_121e8f91;
  /* 121e8f6e mov ecx, dword ptr [0x12204e40] */
  ECX = (r32((uint32_t)(0x12204e40)));
  /* 121e8f74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8f7a mov dword ptr [0x12204e40], ecx */
  w32((uint32_t)(0x12204e40), (ECX));
  /* 121e8f80 mov edx, dword ptr [0x12204e3c] */
  EDX = (r32((uint32_t)(0x12204e3c)));
  /* 121e8f86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8f89 mov dword ptr [0x12204e3c], edx */
  w32((uint32_t)(0x12204e3c), (EDX));
  /* 121e8f8f jmp 0x121e8fbb */
  goto L_121e8fbb;
L_121e8f91:;
  /* 121e8f91 cmp dword ptr [0x12204e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12204e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8f9b jl 0x121e8fbb */
  if ((C.sf!=C.of)) goto L_121e8fbb;
  /* 121e8f9d mov eax, dword ptr [0x12204e40] */
  EAX = (r32((uint32_t)(0x12204e40)));
  /* 121e8fa2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e8fa7 mov dword ptr [0x12204e40], eax */
  w32((uint32_t)(0x12204e40), (EAX));
  /* 121e8fac mov ecx, dword ptr [0x12204e3c] */
  ECX = (r32((uint32_t)(0x12204e3c)));
  /* 121e8fb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8fb5 mov dword ptr [0x12204e3c], ecx */
  w32((uint32_t)(0x12204e3c), (ECX));
L_121e8fbb:;
  /* 121e8fbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e8fbe mov dword ptr [0x12204e38], edx */
  w32((uint32_t)(0x12204e38), (EDX));
L_121e8fc4:;
  /* 121e8fc4 mov esp, ebp */
  ESP = (EBP);
  /* 121e8fc6 pop ebp */
  EBP = (pop32());
  /* 121e8fc7 ret  */
  ESPCHK(0x121e8dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x121e8fd0 (382 bytes, 135 insns) */
void f_121e8fd0(void) {
  FTRACE(0x121e8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e8fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e8fd1 mov ebp, esp */
  EBP = (ESP);
  /* 121e8fd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e8fd5 push 0x12201f28 */
  push32((uint32_t)(0x12201f28u));
  /* 121e8fda push 0x121e2c98 */
  push32((uint32_t)(0x121e2c98u));
  /* 121e8fdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121e8fe5 push eax */
  push32((uint32_t)(EAX));
  /* 121e8fe6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121e8fed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e8ff0 push ebx */
  push32((uint32_t)(EBX));
  /* 121e8ff1 push esi */
  push32((uint32_t)(ESI));
  /* 121e8ff2 push edi */
  push32((uint32_t)(EDI));
  /* 121e8ff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e8ff6 cmp dword ptr [0x12205b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e8ffd jne 0x121e9042 */
  if (!C.zf) goto L_121e9042;
  /* 121e8fff push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9001 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9003 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9005 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9007 call dword ptr [0x122082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082dc))), 0x121e900du);
  /* 121e900d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e900f je 0x121e901d */
  if (C.zf) goto L_121e901d;
  /* 121e9011 mov dword ptr [0x12205b14], 1 */
  w32((uint32_t)(0x12205b14), (0x1u));
  /* 121e901b jmp 0x121e9042 */
  goto L_121e9042;
L_121e901d:;
  /* 121e901d push 0 */
  push32((uint32_t)(0x0u));
  /* 121e901f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9021 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9023 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9025 call dword ptr [0x122082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f4))), 0x121e902bu);
  /* 121e902b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e902d je 0x121e903b */
  if (C.zf) goto L_121e903b;
  /* 121e902f mov dword ptr [0x12205b14], 2 */
  w32((uint32_t)(0x12205b14), (0x2u));
  /* 121e9039 jmp 0x121e9042 */
  goto L_121e9042;
L_121e903b:;
  /* 121e903b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e903d jmp 0x121e9151 */
  goto L_121e9151;
L_121e9042:;
  /* 121e9042 cmp dword ptr [0x12205b14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12205b14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9049 jne 0x121e9066 */
  if (!C.zf) goto L_121e9066;
  /* 121e904b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e904e push eax */
  push32((uint32_t)(EAX));
  /* 121e904f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e9052 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9056 push edx */
  push32((uint32_t)(EDX));
  /* 121e9057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e905a push eax */
  push32((uint32_t)(EAX));
  /* 121e905b call dword ptr [0x122082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082dc))), 0x121e9061u);
  /* 121e9061 jmp 0x121e9151 */
  goto L_121e9151;
L_121e9066:;
  /* 121e9066 cmp dword ptr [0x12205b14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12205b14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e906d jne 0x121e914f */
  if (!C.zf) goto L_121e914f;
  /* 121e9073 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9077 jne 0x121e9082 */
  if (!C.zf) goto L_121e9082;
  /* 121e9079 mov ecx, dword ptr [0x122059c8] */
  ECX = (r32((uint32_t)(0x122059c8)));
  /* 121e907f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_121e9082:;
  /* 121e9082 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9084 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9086 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9089 push edx */
  push32((uint32_t)(EDX));
  /* 121e908a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e908d push eax */
  push32((uint32_t)(EAX));
  /* 121e908e call dword ptr [0x122082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f4))), 0x121e9094u);
  /* 121e9094 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121e9097 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e909b jne 0x121e90a4 */
  if (!C.zf) goto L_121e90a4;
  /* 121e909d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e909f jmp 0x121e9151 */
  goto L_121e9151;
L_121e90a4:;
  /* 121e90a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e90ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e90ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e90b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e90b3 call 0x121dcd30 */
  push32(0x121e90b8u); f_121dcd30();
  /* 121e90b8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 121e90bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e90be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e90c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121e90c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e90cb jmp 0x121e90e4 */
  goto L_121e90e4;
  /* 121e90cd mov eax, 1 */
  EAX = (0x1u);
  /* 121e90d2 ret  */
  ESPCHK(0x121e8fd0u, _esp0);
  ESP += 4; return;
  /* 121e90d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e90d6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121e90dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e90e4:;
  /* 121e90e4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e90e8 jne 0x121e90ee */
  if (!C.zf) goto L_121e90ee;
  /* 121e90ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e90ec jmp 0x121e9151 */
  goto L_121e9151;
L_121e90ee:;
  /* 121e90ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e90f1 push edx */
  push32((uint32_t)(EDX));
  /* 121e90f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e90f5 push eax */
  push32((uint32_t)(EAX));
  /* 121e90f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e90f9 push ecx */
  push32((uint32_t)(ECX));
  /* 121e90fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e90fd push edx */
  push32((uint32_t)(EDX));
  /* 121e90fe call dword ptr [0x122082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f4))), 0x121e9104u);
  /* 121e9104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9106 jne 0x121e910c */
  if (!C.zf) goto L_121e910c;
  /* 121e9108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e910a jmp 0x121e9151 */
  goto L_121e9151;
L_121e910c:;
  /* 121e910c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9110 jne 0x121e912d */
  if (!C.zf) goto L_121e912d;
  /* 121e9112 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9114 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9116 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e9118 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e911b push eax */
  push32((uint32_t)(EAX));
  /* 121e911c push 1 */
  push32((uint32_t)(0x1u));
  /* 121e911e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e9121 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9122 call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e9128u);
  /* 121e9128 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e912b jmp 0x121e914a */
  goto L_121e914a;
L_121e912d:;
  /* 121e912d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e9130 push edx */
  push32((uint32_t)(EDX));
  /* 121e9131 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e9134 push eax */
  push32((uint32_t)(EAX));
  /* 121e9135 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e9137 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e913a push ecx */
  push32((uint32_t)(ECX));
  /* 121e913b push 1 */
  push32((uint32_t)(0x1u));
  /* 121e913d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e9140 push edx */
  push32((uint32_t)(EDX));
  /* 121e9141 call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e9147u);
  /* 121e9147 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121e914a:;
  /* 121e914a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e914d jmp 0x121e9151 */
  goto L_121e9151;
L_121e914f:;
  /* 121e914f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e9151:;
  /* 121e9151 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 121e9154 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9157 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121e915e pop edi */
  EDI = (pop32());
  /* 121e915f pop esi */
  ESI = (pop32());
  /* 121e9160 pop ebx */
  EBX = (pop32());
  /* 121e9161 mov esp, ebp */
  ESP = (EBP);
  /* 121e9163 pop ebp */
  EBP = (pop32());
  /* 121e9164 ret  */
  ESPCHK(0x121e8fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019170 @ 0x121e9170 (398 bytes, 140 insns) */
void f_121e9170(void) {
  FTRACE(0x121e9170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9170 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9171 mov ebp, esp */
  EBP = (ESP);
  /* 121e9173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e9175 push 0x12201f38 */
  push32((uint32_t)(0x12201f38u));
  /* 121e917a push 0x121e2c98 */
  push32((uint32_t)(0x121e2c98u));
  /* 121e917f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121e9185 push eax */
  push32((uint32_t)(EAX));
  /* 121e9186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121e918d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9190 push ebx */
  push32((uint32_t)(EBX));
  /* 121e9191 push esi */
  push32((uint32_t)(ESI));
  /* 121e9192 push edi */
  push32((uint32_t)(EDI));
  /* 121e9193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e9196 cmp dword ptr [0x12205b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e919d jne 0x121e91e2 */
  if (!C.zf) goto L_121e91e2;
  /* 121e919f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e91a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e91a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e91a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e91a7 call dword ptr [0x122082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082dc))), 0x121e91adu);
  /* 121e91ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e91af je 0x121e91bd */
  if (C.zf) goto L_121e91bd;
  /* 121e91b1 mov dword ptr [0x12205b18], 1 */
  w32((uint32_t)(0x12205b18), (0x1u));
  /* 121e91bb jmp 0x121e91e2 */
  goto L_121e91e2;
L_121e91bd:;
  /* 121e91bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121e91bf push 0 */
  push32((uint32_t)(0x0u));
  /* 121e91c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e91c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e91c5 call dword ptr [0x122082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f4))), 0x121e91cbu);
  /* 121e91cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e91cd je 0x121e91db */
  if (C.zf) goto L_121e91db;
  /* 121e91cf mov dword ptr [0x12205b18], 2 */
  w32((uint32_t)(0x12205b18), (0x2u));
  /* 121e91d9 jmp 0x121e91e2 */
  goto L_121e91e2;
L_121e91db:;
  /* 121e91db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e91dd jmp 0x121e9301 */
  goto L_121e9301;
L_121e91e2:;
  /* 121e91e2 cmp dword ptr [0x12205b18], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12205b18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e91e9 jne 0x121e9206 */
  if (!C.zf) goto L_121e9206;
  /* 121e91eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e91ee push eax */
  push32((uint32_t)(EAX));
  /* 121e91ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e91f2 push ecx */
  push32((uint32_t)(ECX));
  /* 121e91f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e91f6 push edx */
  push32((uint32_t)(EDX));
  /* 121e91f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e91fa push eax */
  push32((uint32_t)(EAX));
  /* 121e91fb call dword ptr [0x122082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f4))), 0x121e9201u);
  /* 121e9201 jmp 0x121e9301 */
  goto L_121e9301;
L_121e9206:;
  /* 121e9206 cmp dword ptr [0x12205b18], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12205b18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e920d jne 0x121e92ff */
  if (!C.zf) goto L_121e92ff;
  /* 121e9213 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9217 jne 0x121e9222 */
  if (!C.zf) goto L_121e9222;
  /* 121e9219 mov ecx, dword ptr [0x122059c8] */
  ECX = (r32((uint32_t)(0x122059c8)));
  /* 121e921f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_121e9222:;
  /* 121e9222 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9224 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9229 push edx */
  push32((uint32_t)(EDX));
  /* 121e922a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e922d push eax */
  push32((uint32_t)(EAX));
  /* 121e922e call dword ptr [0x122082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082dc))), 0x121e9234u);
  /* 121e9234 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121e9237 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e923b jne 0x121e9244 */
  if (!C.zf) goto L_121e9244;
  /* 121e923d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e923f jmp 0x121e9301 */
  goto L_121e9301;
L_121e9244:;
  /* 121e9244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e924b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e924e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e9250 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9253 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e9255 call 0x121dcd30 */
  push32(0x121e925au); f_121dcd30();
  /* 121e925a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 121e925d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e9260 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e9263 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121e9266 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e926d jmp 0x121e9286 */
  goto L_121e9286;
  /* 121e926f mov eax, 1 */
  EAX = (0x1u);
  /* 121e9274 ret  */
  ESPCHK(0x121e9170u, _esp0);
  ESP += 4; return;
  /* 121e9275 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e9278 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121e927f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e9286:;
  /* 121e9286 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e928a jne 0x121e9290 */
  if (!C.zf) goto L_121e9290;
  /* 121e928c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e928e jmp 0x121e9301 */
  goto L_121e9301;
L_121e9290:;
  /* 121e9290 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e9293 push edx */
  push32((uint32_t)(EDX));
  /* 121e9294 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e9297 push eax */
  push32((uint32_t)(EAX));
  /* 121e9298 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e929b push ecx */
  push32((uint32_t)(ECX));
  /* 121e929c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e929f push edx */
  push32((uint32_t)(EDX));
  /* 121e92a0 call dword ptr [0x122082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082dc))), 0x121e92a6u);
  /* 121e92a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e92a8 jne 0x121e92ae */
  if (!C.zf) goto L_121e92ae;
  /* 121e92aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e92ac jmp 0x121e9301 */
  goto L_121e9301;
L_121e92ae:;
  /* 121e92ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e92b2 jne 0x121e92d6 */
  if (!C.zf) goto L_121e92d6;
  /* 121e92b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e92b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e92b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e92ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121e92bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e92be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e92c1 push eax */
  push32((uint32_t)(EAX));
  /* 121e92c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e92c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e92ca push ecx */
  push32((uint32_t)(ECX));
  /* 121e92cb call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e92d1u);
  /* 121e92d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e92d4 jmp 0x121e92fa */
  goto L_121e92fa;
L_121e92d6:;
  /* 121e92d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e92d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e92da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e92dd push edx */
  push32((uint32_t)(EDX));
  /* 121e92de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e92e1 push eax */
  push32((uint32_t)(EAX));
  /* 121e92e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e92e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e92e7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e92e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e92ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e92f0 push edx */
  push32((uint32_t)(EDX));
  /* 121e92f1 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e92f7u);
  /* 121e92f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121e92fa:;
  /* 121e92fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e92fd jmp 0x121e9301 */
  goto L_121e9301;
L_121e92ff:;
  /* 121e92ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e9301:;
  /* 121e9301 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 121e9304 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9307 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121e930e pop edi */
  EDI = (pop32());
  /* 121e930f pop esi */
  ESI = (pop32());
  /* 121e9310 pop ebx */
  EBX = (pop32());
  /* 121e9311 mov esp, ebp */
  ESP = (EBP);
  /* 121e9313 pop ebp */
  EBP = (pop32());
  /* 121e9314 ret  */
  ESPCHK(0x121e9170u, _esp0);
  ESP += 4; return;
}

/* FUN_10019320 @ 0x121e9320 (11 bytes, 6 insns) */
void f_121e9320(void) {
  FTRACE(0x121e9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9320 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9321 mov ebp, esp */
  EBP = (ESP);
  /* 121e9323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9326 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9329 pop ebp */
  EBP = (pop32());
  /* 121e932a ret  */
  ESPCHK(0x121e9320u, _esp0);
  ESP += 4; return;
}

/* FUN_10019330 @ 0x121e9330 (147 bytes, 43 insns) */
void f_121e9330(void) {
  FTRACE(0x121e9330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9330 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9331 mov ebp, esp */
  EBP = (ESP);
  /* 121e9333 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9334 cmp dword ptr [0x122059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e933b jne 0x121e9357 */
  if (!C.zf) goto L_121e9357;
  /* 121e933d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9341 jl 0x121e9352 */
  if ((C.sf!=C.of)) goto L_121e9352;
  /* 121e9343 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9347 jg 0x121e9352 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e9352;
  /* 121e9349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e934c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e934f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121e9352:;
  /* 121e9352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9355 jmp 0x121e93bf */
  goto L_121e93bf;
L_121e9357:;
  /* 121e9357 push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e935c call dword ptr [0x122083a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083a4))), 0x121e9362u);
  /* 121e9362 cmp dword ptr [0x12205b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9369 je 0x121e9389 */
  if (C.zf) goto L_121e9389;
  /* 121e936b push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e9370 call dword ptr [0x12208394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208394))), 0x121e9376u);
  /* 121e9376 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e9378 call 0x121dd590 */
  push32(0x121e937du); f_121dd590();
  /* 121e937d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9380 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e9387 jmp 0x121e9390 */
  goto L_121e9390;
L_121e9389:;
  /* 121e9389 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121e9390:;
  /* 121e9390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9393 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9394 call 0x121e93d0 */
  push32(0x121e9399u); f_121e93d0();
  /* 121e9399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e939c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e939f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e93a3 je 0x121e93b1 */
  if (C.zf) goto L_121e93b1;
  /* 121e93a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e93a7 call 0x121dd630 */
  push32(0x121e93acu); f_121dd630();
  /* 121e93ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e93af jmp 0x121e93bc */
  goto L_121e93bc;
L_121e93b1:;
  /* 121e93b1 push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e93b6 call dword ptr [0x12208394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208394))), 0x121e93bcu);
L_121e93bc:;
  /* 121e93bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_121e93bf:;
  /* 121e93bf mov esp, ebp */
  ESP = (EBP);
  /* 121e93c1 pop ebp */
  EBP = (pop32());
  /* 121e93c2 ret  */
  ESPCHK(0x121e9330u, _esp0);
  ESP += 4; return;
}

/* FUN_100193d0 @ 0x121e93d0 (299 bytes, 91 insns) */
void f_121e93d0(void) {
  FTRACE(0x121e93d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e93d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e93d1 mov ebp, esp */
  EBP = (ESP);
  /* 121e93d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e93d6 cmp dword ptr [0x122059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e93dd jne 0x121e93fc */
  if (!C.zf) goto L_121e93fc;
  /* 121e93df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e93e3 jl 0x121e93f4 */
  if ((C.sf!=C.of)) goto L_121e93f4;
  /* 121e93e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e93e9 jg 0x121e93f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e93f4;
  /* 121e93eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e93ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e93f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121e93f4:;
  /* 121e93f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e93f7 jmp 0x121e94f7 */
  goto L_121e94f7;
L_121e93fc:;
  /* 121e93fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9403 jge 0x121e9443 */
  if ((C.sf==C.of)) goto L_121e9443;
  /* 121e9405 cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e940c jle 0x121e9421 */
  if ((C.zf||C.sf!=C.of)) goto L_121e9421;
  /* 121e940e push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9413 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9414 call 0x121dfba0 */
  push32(0x121e9419u); f_121dfba0();
  /* 121e9419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e941c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e941f jmp 0x121e9435 */
  goto L_121e9435;
L_121e9421:;
  /* 121e9421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9424 mov eax, dword ptr [0x12203c98] */
  EAX = (r32((uint32_t)(0x12203c98)));
  /* 121e9429 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e942b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 121e942f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e9432 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121e9435:;
  /* 121e9435 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9439 jne 0x121e9443 */
  if (!C.zf) goto L_121e9443;
  /* 121e943b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e943e jmp 0x121e94f7 */
  goto L_121e94f7;
L_121e9443:;
  /* 121e9443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9446 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 121e9449 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e944f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e9455 mov eax, dword ptr [0x12203c98] */
  EAX = (r32((uint32_t)(0x12203c98)));
  /* 121e945a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e945c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 121e9460 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 121e9466 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e9468 je 0x121e948c */
  if (C.zf) goto L_121e948c;
  /* 121e946a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e946d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 121e9470 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e9476 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 121e9479 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 121e947c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 121e947f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 121e9483 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 121e948a jmp 0x121e949d */
  goto L_121e949d;
L_121e948c:;
  /* 121e948c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 121e948f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 121e9492 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 121e9496 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_121e949d:;
  /* 121e949d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e949f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e94a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 121e94a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 121e94a6 push edx */
  push32((uint32_t)(EDX));
  /* 121e94a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e94aa push eax */
  push32((uint32_t)(EAX));
  /* 121e94ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121e94ae push ecx */
  push32((uint32_t)(ECX));
  /* 121e94af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e94b4 mov edx, dword ptr [0x122059b8] */
  EDX = (r32((uint32_t)(0x122059b8)));
  /* 121e94ba push edx */
  push32((uint32_t)(EDX));
  /* 121e94bb call 0x121e1f80 */
  push32(0x121e94c0u); f_121e1f80();
  /* 121e94c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e94c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e94c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e94ca jne 0x121e94d1 */
  if (!C.zf) goto L_121e94d1;
  /* 121e94cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e94cf jmp 0x121e94f7 */
  goto L_121e94f7;
L_121e94d1:;
  /* 121e94d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e94d5 jne 0x121e94e1 */
  if (!C.zf) goto L_121e94e1;
  /* 121e94d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e94da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e94df jmp 0x121e94f7 */
  goto L_121e94f7;
L_121e94e1:;
  /* 121e94e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e94e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e94e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 121e94ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121e94f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 121e94f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_121e94f7:;
  /* 121e94f7 mov esp, ebp */
  ESP = (EBP);
  /* 121e94f9 pop ebp */
  EBP = (pop32());
  /* 121e94fa ret  */
  ESPCHK(0x121e93d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x121e9500 (52 bytes, 19 insns) */
void f_121e9500(void) {
  FTRACE(0x121e9500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9500 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121e9504 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 121e9508 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e950a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 121e950e jne 0x121e9519 */
  if (!C.zf) goto L_121e9519;
  /* 121e9510 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 121e9514 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e9516 ret 0x10 */
  ESPCHK(0x121e9500u, _esp0);
  ESP += 20; return;
L_121e9519:;
  /* 121e9519 push ebx */
  push32((uint32_t)(EBX));
  /* 121e951a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e951c mov ebx, eax */
  EBX = (EAX);
  /* 121e951e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121e9522 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e9526 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9528 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121e952c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e952e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9530 pop ebx */
  EBX = (pop32());
  /* 121e9531 ret 0x10 */
  ESPCHK(0x121e9500u, _esp0);
  ESP += 20; return;
}

/* FUN_10019540 @ 0x121e9540 (46 bytes, 18 insns) */
void f_121e9540(void) {
  FTRACE(0x121e9540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9540 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9541 mov ebp, esp */
  EBP = (ESP);
  /* 121e9543 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9544 push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e9546 call 0x121dd590 */
  push32(0x121e954bu); f_121dd590();
  /* 121e954b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e954e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9551 push eax */
  push32((uint32_t)(EAX));
  /* 121e9552 call 0x121e9570 */
  push32(0x121e9557u); f_121e9570();
  /* 121e9557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e955a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e955d push 0xc */
  push32((uint32_t)(0xcu));
  /* 121e955f call 0x121dd630 */
  push32(0x121e9564u); f_121dd630();
  /* 121e9564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e956a mov esp, ebp */
  ESP = (EBP);
  /* 121e956c pop ebp */
  EBP = (pop32());
  /* 121e956d ret  */
  ESPCHK(0x121e9540u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x121e9570 (198 bytes, 69 insns) */
void f_121e9570(void) {
  FTRACE(0x121e9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9570 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9571 mov ebp, esp */
  EBP = (ESP);
  /* 121e9573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9576 mov eax, dword ptr [0x122057d4] */
  EAX = (r32((uint32_t)(0x122057d4)));
  /* 121e957b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e957e cmp dword ptr [0x122072e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122072e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9585 jne 0x121e958e */
  if (!C.zf) goto L_121e958e;
  /* 121e9587 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9589 jmp 0x121e9632 */
  goto L_121e9632;
L_121e958e:;
  /* 121e958e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9592 jne 0x121e95b6 */
  if (!C.zf) goto L_121e95b6;
  /* 121e9594 cmp dword ptr [0x122057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e959b je 0x121e95b6 */
  if (C.zf) goto L_121e95b6;
  /* 121e959d call 0x121e9690 */
  push32(0x121e95a2u); f_121e9690();
  /* 121e95a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e95a4 je 0x121e95ad */
  if (C.zf) goto L_121e95ad;
  /* 121e95a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e95a8 jmp 0x121e9632 */
  goto L_121e9632;
L_121e95ad:;
  /* 121e95ad mov ecx, dword ptr [0x122057d4] */
  ECX = (r32((uint32_t)(0x122057d4)));
  /* 121e95b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121e95b6:;
  /* 121e95b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e95ba je 0x121e9630 */
  if (C.zf) goto L_121e9630;
  /* 121e95bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e95c0 je 0x121e9630 */
  if (C.zf) goto L_121e9630;
  /* 121e95c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e95c5 push edx */
  push32((uint32_t)(EDX));
  /* 121e95c6 call 0x121dc9c0 */
  push32(0x121e95cbu); f_121dc9c0();
  /* 121e95cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e95ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e95d1:;
  /* 121e95d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e95d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e95d7 je 0x121e9630 */
  if (C.zf) goto L_121e9630;
  /* 121e95d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e95dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e95de push edx */
  push32((uint32_t)(EDX));
  /* 121e95df call 0x121dc9c0 */
  push32(0x121e95e4u); f_121dc9c0();
  /* 121e95e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e95e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e95ea jbe 0x121e9625 */
  if ((C.cf||C.zf)) goto L_121e9625;
  /* 121e95ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e95ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e95f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e95f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 121e95f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e95fb jne 0x121e9625 */
  if (!C.zf) goto L_121e9625;
  /* 121e95fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9600 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9604 push edx */
  push32((uint32_t)(EDX));
  /* 121e9605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9608 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e960a push ecx */
  push32((uint32_t)(ECX));
  /* 121e960b call 0x121e9640 */
  push32(0x121e9610u); f_121e9640();
  /* 121e9610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9615 jne 0x121e9625 */
  if (!C.zf) goto L_121e9625;
  /* 121e9617 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e961a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e961c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e961f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 121e9623 jmp 0x121e9632 */
  goto L_121e9632;
L_121e9625:;
  /* 121e9625 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9628 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e962b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e962e jmp 0x121e95d1 */
  goto L_121e95d1;
L_121e9630:;
  /* 121e9630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e9632:;
  /* 121e9632 mov esp, ebp */
  ESP = (EBP);
  /* 121e9634 pop ebp */
  EBP = (pop32());
  /* 121e9635 ret  */
  ESPCHK(0x121e9570u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x121e9640 (79 bytes, 32 insns) */
void f_121e9640(void) {
  FTRACE(0x121e9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9640 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9641 mov ebp, esp */
  EBP = (ESP);
  /* 121e9643 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9644 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9648 jne 0x121e964e */
  if (!C.zf) goto L_121e964e;
  /* 121e964a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e964c jmp 0x121e968b */
  goto L_121e968b;
L_121e964e:;
  /* 121e964e mov eax, dword ptr [0x12206ea4] */
  EAX = (r32((uint32_t)(0x12206ea4)));
  /* 121e9653 push eax */
  push32((uint32_t)(EAX));
  /* 121e9654 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e9657 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9658 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e965b push edx */
  push32((uint32_t)(EDX));
  /* 121e965c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e965f push eax */
  push32((uint32_t)(EAX));
  /* 121e9660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9663 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9664 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9666 mov edx, dword ptr [0x12207144] */
  EDX = (r32((uint32_t)(0x12207144)));
  /* 121e966c push edx */
  push32((uint32_t)(EDX));
  /* 121e966d call 0x121e9740 */
  push32(0x121e9672u); f_121e9740();
  /* 121e9672 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9675 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e9678 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e967c jne 0x121e9685 */
  if (!C.zf) goto L_121e9685;
  /* 121e967e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 121e9683 jmp 0x121e968b */
  goto L_121e968b;
L_121e9685:;
  /* 121e9685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9688 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121e968b:;
  /* 121e968b mov esp, ebp */
  ESP = (EBP);
  /* 121e968d pop ebp */
  EBP = (pop32());
  /* 121e968e ret  */
  ESPCHK(0x121e9640u, _esp0);
  ESP += 4; return;
}

/* FUN_10019690 @ 0x121e9690 (174 bytes, 66 insns) */
void f_121e9690(void) {
  FTRACE(0x121e9690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9690 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9691 mov ebp, esp */
  EBP = (ESP);
  /* 121e9693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9696 mov eax, dword ptr [0x122057dc] */
  EAX = (r32((uint32_t)(0x122057dc)));
  /* 121e969b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e969e:;
  /* 121e969e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e96a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e96a4 je 0x121e9738 */
  if (C.zf) goto L_121e9738;
  /* 121e96aa push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96ac push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e96b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e96b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e96b9 push eax */
  push32((uint32_t)(EAX));
  /* 121e96ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96bc push 1 */
  push32((uint32_t)(0x1u));
  /* 121e96be call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e96c4u);
  /* 121e96c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e96c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e96cb jne 0x121e96d2 */
  if (!C.zf) goto L_121e96d2;
  /* 121e96cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e96d0 jmp 0x121e973a */
  goto L_121e973a;
L_121e96d2:;
  /* 121e96d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121e96d4 push 0x12201f44 */
  push32((uint32_t)(0x12201f44u));
  /* 121e96d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e96db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e96de push ecx */
  push32((uint32_t)(ECX));
  /* 121e96df call 0x121d9b90 */
  push32(0x121e96e4u); f_121d9b90();
  /* 121e96e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e96e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e96ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e96ee jne 0x121e96f5 */
  if (!C.zf) goto L_121e96f5;
  /* 121e96f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e96f3 jmp 0x121e973a */
  goto L_121e973a;
L_121e96f5:;
  /* 121e96f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e96f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e96fc push edx */
  push32((uint32_t)(EDX));
  /* 121e96fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9700 push eax */
  push32((uint32_t)(EAX));
  /* 121e9701 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e9703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9706 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e9708 push edx */
  push32((uint32_t)(EDX));
  /* 121e9709 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e970b push 1 */
  push32((uint32_t)(0x1u));
  /* 121e970d call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e9713u);
  /* 121e9713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9715 jne 0x121e971c */
  if (!C.zf) goto L_121e971c;
  /* 121e9717 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e971a jmp 0x121e973a */
  goto L_121e973a;
L_121e971c:;
  /* 121e971c push 0 */
  push32((uint32_t)(0x0u));
  /* 121e971e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9721 push eax */
  push32((uint32_t)(EAX));
  /* 121e9722 call 0x121e9b90 */
  push32(0x121e9727u); f_121e9b90();
  /* 121e9727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e972a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e972d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9730 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e9733 jmp 0x121e969e */
  goto L_121e969e;
L_121e9738:;
  /* 121e9738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e973a:;
  /* 121e973a mov esp, ebp */
  ESP = (EBP);
  /* 121e973c pop ebp */
  EBP = (pop32());
  /* 121e973d ret  */
  ESPCHK(0x121e9690u, _esp0);
  ESP += 4; return;
}

/* FUN_10019740 @ 0x121e9740 (970 bytes, 340 insns) */
void f_121e9740(void) {
  FTRACE(0x121e9740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9740 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9741 mov ebp, esp */
  EBP = (ESP);
  /* 121e9743 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e9745 push 0x12201f98 */
  push32((uint32_t)(0x12201f98u));
  /* 121e974a push 0x121e2c98 */
  push32((uint32_t)(0x121e2c98u));
  /* 121e974f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121e9755 push eax */
  push32((uint32_t)(EAX));
  /* 121e9756 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121e975d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9760 push ebx */
  push32((uint32_t)(EBX));
  /* 121e9761 push esi */
  push32((uint32_t)(ESI));
  /* 121e9762 push edi */
  push32((uint32_t)(EDI));
  /* 121e9763 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e9766 cmp dword ptr [0x12205b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e976d jne 0x121e97c6 */
  if (!C.zf) goto L_121e97c6;
  /* 121e976f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9771 push 0x122015f4 */
  push32((uint32_t)(0x122015f4u));
  /* 121e9776 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9778 push 0x122015f4 */
  push32((uint32_t)(0x122015f4u));
  /* 121e977d push 0 */
  push32((uint32_t)(0x0u));
  /* 121e977f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9781 call dword ptr [0x122082d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082d4))), 0x121e9787u);
  /* 121e9787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9789 je 0x121e9797 */
  if (C.zf) goto L_121e9797;
  /* 121e978b mov dword ptr [0x12205b1c], 1 */
  w32((uint32_t)(0x12205b1c), (0x1u));
  /* 121e9795 jmp 0x121e97c6 */
  goto L_121e97c6;
L_121e9797:;
  /* 121e9797 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9799 push 0x122015f0 */
  push32((uint32_t)(0x122015f0u));
  /* 121e979e push 1 */
  push32((uint32_t)(0x1u));
  /* 121e97a0 push 0x122015f0 */
  push32((uint32_t)(0x122015f0u));
  /* 121e97a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e97a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e97a9 call dword ptr [0x122082d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082d8))), 0x121e97afu);
  /* 121e97af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e97b1 je 0x121e97bf */
  if (C.zf) goto L_121e97bf;
  /* 121e97b3 mov dword ptr [0x12205b1c], 2 */
  w32((uint32_t)(0x12205b1c), (0x2u));
  /* 121e97bd jmp 0x121e97c6 */
  goto L_121e97c6;
L_121e97bf:;
  /* 121e97bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e97c1 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e97c6:;
  /* 121e97c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e97ca jle 0x121e97df */
  if ((C.zf||C.sf!=C.of)) goto L_121e97df;
  /* 121e97cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e97cf push eax */
  push32((uint32_t)(EAX));
  /* 121e97d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e97d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e97d4 call 0x121e9b40 */
  push32(0x121e97d9u); f_121e9b40();
  /* 121e97d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e97dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_121e97df:;
  /* 121e97df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e97e3 jle 0x121e97f8 */
  if ((C.zf||C.sf!=C.of)) goto L_121e97f8;
  /* 121e97e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e97e8 push edx */
  push32((uint32_t)(EDX));
  /* 121e97e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e97ec push eax */
  push32((uint32_t)(EAX));
  /* 121e97ed call 0x121e9b40 */
  push32(0x121e97f2u); f_121e9b40();
  /* 121e97f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e97f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_121e97f8:;
  /* 121e97f8 cmp dword ptr [0x12205b1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12205b1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e97ff jne 0x121e9824 */
  if (!C.zf) goto L_121e9824;
  /* 121e9801 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e9804 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9805 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e9808 push edx */
  push32((uint32_t)(EDX));
  /* 121e9809 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e980c push eax */
  push32((uint32_t)(EAX));
  /* 121e980d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e9810 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9811 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9814 push edx */
  push32((uint32_t)(EDX));
  /* 121e9815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9818 push eax */
  push32((uint32_t)(EAX));
  /* 121e9819 call dword ptr [0x122082d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082d8))), 0x121e981fu);
  /* 121e981f jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9824:;
  /* 121e9824 cmp dword ptr [0x12205b1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12205b1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e982b jne 0x121e9b22 */
  if (!C.zf) goto L_121e9b22;
  /* 121e9831 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9835 jne 0x121e9840 */
  if (!C.zf) goto L_121e9840;
  /* 121e9837 mov ecx, dword ptr [0x122059c8] */
  ECX = (r32((uint32_t)(0x122059c8)));
  /* 121e983d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_121e9840:;
  /* 121e9840 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9844 je 0x121e9850 */
  if (C.zf) goto L_121e9850;
  /* 121e9846 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e984a jne 0x121e99cc */
  if (!C.zf) goto L_121e99cc;
L_121e9850:;
  /* 121e9850 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e9853 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9856 jne 0x121e9862 */
  if (!C.zf) goto L_121e9862;
  /* 121e9858 mov eax, 2 */
  EAX = (0x2u);
  /* 121e985d jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9862:;
  /* 121e9862 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9866 jle 0x121e9872 */
  if ((C.zf||C.sf!=C.of)) goto L_121e9872;
  /* 121e9868 mov eax, 1 */
  EAX = (0x1u);
  /* 121e986d jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9872:;
  /* 121e9872 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9876 jle 0x121e9882 */
  if ((C.zf||C.sf!=C.of)) goto L_121e9882;
  /* 121e9878 mov eax, 3 */
  EAX = (0x3u);
  /* 121e987d jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9882:;
  /* 121e9882 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 121e9885 push eax */
  push32((uint32_t)(EAX));
  /* 121e9886 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e9889 push ecx */
  push32((uint32_t)(ECX));
  /* 121e988a call dword ptr [0x12208330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208330))), 0x121e9890u);
  /* 121e9890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9892 jne 0x121e989b */
  if (!C.zf) goto L_121e989b;
  /* 121e9894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9896 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e989b:;
  /* 121e989b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e989f jne 0x121e98a7 */
  if (!C.zf) goto L_121e98a7;
  /* 121e98a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e98a5 je 0x121e98d4 */
  if (C.zf) goto L_121e98d4;
L_121e98a7:;
  /* 121e98a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e98ab jne 0x121e98b3 */
  if (!C.zf) goto L_121e98b3;
  /* 121e98ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e98b1 je 0x121e98d4 */
  if (C.zf) goto L_121e98d4;
L_121e98b3:;
  /* 121e98b3 push 0x12201f58 */
  push32((uint32_t)(0x12201f58u));
  /* 121e98b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e98ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 121e98bf push 0x12201f50 */
  push32((uint32_t)(0x12201f50u));
  /* 121e98c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e98c6 call 0x121d8c50 */
  push32(0x121e98cbu); f_121d8c50();
  /* 121e98cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e98ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e98d1 jne 0x121e98d4 */
  if (!C.zf) goto L_121e98d4;
  /* 121e98d3 int3  */
  x86_unimpl("int3 @ 0x121e98d3");
L_121e98d4:;
  /* 121e98d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e98d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e98d8 jne 0x121e989b */
  if (!C.zf) goto L_121e989b;
  /* 121e98da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e98de jle 0x121e9953 */
  if ((C.zf||C.sf!=C.of)) goto L_121e9953;
  /* 121e98e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e98e4 jae 0x121e98f0 */
  if (!C.cf) goto L_121e98f0;
  /* 121e98e6 mov eax, 3 */
  EAX = (0x3u);
  /* 121e98eb jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e98f0:;
  /* 121e98f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 121e98f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 121e98f6 jmp 0x121e9901 */
  goto L_121e9901;
L_121e98f8:;
  /* 121e98f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e98fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e98fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_121e9901:;
  /* 121e9901 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e9904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9906 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e9908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e990a je 0x121e9949 */
  if (C.zf) goto L_121e9949;
  /* 121e990c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e990f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e9911 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121e9914 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9916 je 0x121e9949 */
  if (C.zf) goto L_121e9949;
  /* 121e9918 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e991b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e991d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e991f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e9922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9924 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e9926 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9928 jl 0x121e9947 */
  if ((C.sf!=C.of)) goto L_121e9947;
  /* 121e992a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e992d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e992f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e9931 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e9934 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e9936 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121e9939 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e993b jg 0x121e9947 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e9947;
  /* 121e993d mov eax, 2 */
  EAX = (0x2u);
  /* 121e9942 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9947:;
  /* 121e9947 jmp 0x121e98f8 */
  goto L_121e98f8;
L_121e9949:;
  /* 121e9949 mov eax, 3 */
  EAX = (0x3u);
  /* 121e994e jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9953:;
  /* 121e9953 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9957 jle 0x121e99cc */
  if ((C.zf||C.sf!=C.of)) goto L_121e99cc;
  /* 121e9959 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e995d jae 0x121e9969 */
  if (!C.cf) goto L_121e9969;
  /* 121e995f mov eax, 1 */
  EAX = (0x1u);
  /* 121e9964 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9969:;
  /* 121e9969 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 121e996c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 121e996f jmp 0x121e997a */
  goto L_121e997a;
L_121e9971:;
  /* 121e9971 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e9974 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9977 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_121e997a:;
  /* 121e997a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e997d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e997f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e9981 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9983 je 0x121e99c2 */
  if (C.zf) goto L_121e99c2;
  /* 121e9985 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e9988 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e998a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121e998d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e998f je 0x121e99c2 */
  if (C.zf) goto L_121e99c2;
  /* 121e9991 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e9994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9996 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e9998 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e999b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e999d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e999f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e99a1 jl 0x121e99c0 */
  if ((C.sf!=C.of)) goto L_121e99c0;
  /* 121e99a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e99a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e99a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e99aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121e99ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e99af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121e99b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e99b4 jg 0x121e99c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e99c0;
  /* 121e99b6 mov eax, 2 */
  EAX = (0x2u);
  /* 121e99bb jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e99c0:;
  /* 121e99c0 jmp 0x121e9971 */
  goto L_121e9971;
L_121e99c2:;
  /* 121e99c2 mov eax, 1 */
  EAX = (0x1u);
  /* 121e99c7 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e99cc:;
  /* 121e99cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121e99ce push 0 */
  push32((uint32_t)(0x0u));
  /* 121e99d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e99d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e99d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e99d7 push edx */
  push32((uint32_t)(EDX));
  /* 121e99d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 121e99da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e99dd push eax */
  push32((uint32_t)(EAX));
  /* 121e99de call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e99e4u);
  /* 121e99e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121e99e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e99eb jne 0x121e99f4 */
  if (!C.zf) goto L_121e99f4;
  /* 121e99ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e99ef jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e99f4:;
  /* 121e99f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e99fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e99fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e9a00 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9a03 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e9a05 call 0x121dcd30 */
  push32(0x121e9a0au); f_121dcd30();
  /* 121e9a0a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 121e9a0d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e9a10 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 121e9a13 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121e9a16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e9a1d jmp 0x121e9a36 */
  goto L_121e9a36;
  /* 121e9a1f mov eax, 1 */
  EAX = (0x1u);
  /* 121e9a24 ret  */
  ESPCHK(0x121e9740u, _esp0);
  ESP += 4; return;
  /* 121e9a25 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e9a28 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121e9a2f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e9a36:;
  /* 121e9a36 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9a3a jne 0x121e9a43 */
  if (!C.zf) goto L_121e9a43;
  /* 121e9a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9a3e jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9a43:;
  /* 121e9a43 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e9a46 push edx */
  push32((uint32_t)(EDX));
  /* 121e9a47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e9a4a push eax */
  push32((uint32_t)(EAX));
  /* 121e9a4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e9a4e push ecx */
  push32((uint32_t)(ECX));
  /* 121e9a4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e9a52 push edx */
  push32((uint32_t)(EDX));
  /* 121e9a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9a55 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e9a58 push eax */
  push32((uint32_t)(EAX));
  /* 121e9a59 call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e9a5fu);
  /* 121e9a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9a61 jne 0x121e9a6a */
  if (!C.zf) goto L_121e9a6a;
  /* 121e9a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9a65 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9a6a:;
  /* 121e9a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 121e9a6e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e9a71 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9a72 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e9a75 push edx */
  push32((uint32_t)(EDX));
  /* 121e9a76 push 9 */
  push32((uint32_t)(0x9u));
  /* 121e9a78 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e9a7b push eax */
  push32((uint32_t)(EAX));
  /* 121e9a7c call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e9a82u);
  /* 121e9a82 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e9a85 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9a89 jne 0x121e9a92 */
  if (!C.zf) goto L_121e9a92;
  /* 121e9a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9a8d jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9a92:;
  /* 121e9a92 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e9a99 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e9a9c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e9a9e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9aa1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e9aa3 call 0x121dcd30 */
  push32(0x121e9aa8u); f_121dcd30();
  /* 121e9aa8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 121e9aab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e9aae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 121e9ab1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 121e9ab4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e9abb jmp 0x121e9ad4 */
  goto L_121e9ad4;
  /* 121e9abd mov eax, 1 */
  EAX = (0x1u);
  /* 121e9ac2 ret  */
  ESPCHK(0x121e9740u, _esp0);
  ESP += 4; return;
  /* 121e9ac3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e9ac6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 121e9acd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e9ad4:;
  /* 121e9ad4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9ad8 jne 0x121e9ade */
  if (!C.zf) goto L_121e9ade;
  /* 121e9ada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9adc jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9ade:;
  /* 121e9ade mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e9ae1 push edx */
  push32((uint32_t)(EDX));
  /* 121e9ae2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e9ae5 push eax */
  push32((uint32_t)(EAX));
  /* 121e9ae6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e9ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9aea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e9aed push edx */
  push32((uint32_t)(EDX));
  /* 121e9aee push 1 */
  push32((uint32_t)(0x1u));
  /* 121e9af0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e9af3 push eax */
  push32((uint32_t)(EAX));
  /* 121e9af4 call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e9afau);
  /* 121e9afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9afc jne 0x121e9b02 */
  if (!C.zf) goto L_121e9b02;
  /* 121e9afe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9b00 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9b02:;
  /* 121e9b02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e9b05 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9b06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e9b09 push edx */
  push32((uint32_t)(EDX));
  /* 121e9b0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e9b0d push eax */
  push32((uint32_t)(EAX));
  /* 121e9b0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e9b11 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9b12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9b15 push edx */
  push32((uint32_t)(EDX));
  /* 121e9b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9b19 push eax */
  push32((uint32_t)(EAX));
  /* 121e9b1a call dword ptr [0x122082d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082d4))), 0x121e9b20u);
  /* 121e9b20 jmp 0x121e9b24 */
  goto L_121e9b24;
L_121e9b22:;
  /* 121e9b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e9b24:;
  /* 121e9b24 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 121e9b27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9b2a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121e9b31 pop edi */
  EDI = (pop32());
  /* 121e9b32 pop esi */
  ESI = (pop32());
  /* 121e9b33 pop ebx */
  EBX = (pop32());
  /* 121e9b34 mov esp, ebp */
  ESP = (EBP);
  /* 121e9b36 pop ebp */
  EBP = (pop32());
  /* 121e9b37 ret  */
  ESPCHK(0x121e9740u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b40 @ 0x121e9b40 (80 bytes, 32 insns) */
void f_121e9b40(void) {
  FTRACE(0x121e9b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9b40 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9b41 mov ebp, esp */
  EBP = (ESP);
  /* 121e9b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9b46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9b49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e9b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9b4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e9b52:;
  /* 121e9b52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9b55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9b58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9b5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e9b5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9b60 je 0x121e9b77 */
  if (C.zf) goto L_121e9b77;
  /* 121e9b62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9b65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e9b68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9b6a je 0x121e9b77 */
  if (C.zf) goto L_121e9b77;
  /* 121e9b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9b6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9b72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e9b75 jmp 0x121e9b52 */
  goto L_121e9b52;
L_121e9b77:;
  /* 121e9b77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9b7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e9b7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9b7f jne 0x121e9b89 */
  if (!C.zf) goto L_121e9b89;
  /* 121e9b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9b84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9b87 jmp 0x121e9b8c */
  goto L_121e9b8c;
L_121e9b89:;
  /* 121e9b89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_121e9b8c:;
  /* 121e9b8c mov esp, ebp */
  ESP = (EBP);
  /* 121e9b8e pop ebp */
  EBP = (pop32());
  /* 121e9b8f ret  */
  ESPCHK(0x121e9b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b90 @ 0x121e9b90 (736 bytes, 224 insns) */
void f_121e9b90(void) {
  FTRACE(0x121e9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9b90 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9b91 mov ebp, esp */
  EBP = (ESP);
  /* 121e9b93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9b96 push esi */
  push32((uint32_t)(ESI));
  /* 121e9b97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9b9b je 0x121e9bbc */
  if (C.zf) goto L_121e9bbc;
  /* 121e9b9d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121e9b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9ba2 push eax */
  push32((uint32_t)(EAX));
  /* 121e9ba3 call 0x121e9fe0 */
  push32(0x121e9ba8u); f_121e9fe0();
  /* 121e9ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9bab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121e9bae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9bb2 je 0x121e9bbc */
  if (C.zf) goto L_121e9bbc;
  /* 121e9bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9bb7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9bba jne 0x121e9bc4 */
  if (!C.zf) goto L_121e9bc4;
L_121e9bbc:;
  /* 121e9bbc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e9bbf jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9bc4:;
  /* 121e9bc4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e9bc7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121e9bcb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e9bcd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9bcf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 121e9bd0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e9bd3 mov ecx, dword ptr [0x122057d4] */
  ECX = (r32((uint32_t)(0x122057d4)));
  /* 121e9bd9 cmp ecx, dword ptr [0x122057d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122057d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9bdf jne 0x121e9bf5 */
  if (!C.zf) goto L_121e9bf5;
  /* 121e9be1 mov edx, dword ptr [0x122057d4] */
  EDX = (r32((uint32_t)(0x122057d4)));
  /* 121e9be7 push edx */
  push32((uint32_t)(EDX));
  /* 121e9be8 call 0x121e9ef0 */
  push32(0x121e9bedu); f_121e9ef0();
  /* 121e9bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9bf0 mov dword ptr [0x122057d4], eax */
  w32((uint32_t)(0x122057d4), (EAX));
L_121e9bf5:;
  /* 121e9bf5 cmp dword ptr [0x122057d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9bfc jne 0x121e9cb5 */
  if (!C.zf) goto L_121e9cb5;
  /* 121e9c02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c06 je 0x121e9c27 */
  if (C.zf) goto L_121e9c27;
  /* 121e9c08 cmp dword ptr [0x122057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c0f je 0x121e9c27 */
  if (C.zf) goto L_121e9c27;
  /* 121e9c11 call 0x121e9690 */
  push32(0x121e9c16u); f_121e9690();
  /* 121e9c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9c18 je 0x121e9c22 */
  if (C.zf) goto L_121e9c22;
  /* 121e9c1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e9c1d jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9c22:;
  /* 121e9c22 jmp 0x121e9cb5 */
  goto L_121e9cb5;
L_121e9c27:;
  /* 121e9c27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c2b je 0x121e9c34 */
  if (C.zf) goto L_121e9c34;
  /* 121e9c2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9c2f jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9c34:;
  /* 121e9c34 cmp dword ptr [0x122057d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c3b jne 0x121e9c74 */
  if (!C.zf) goto L_121e9c74;
  /* 121e9c3d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 121e9c42 push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9c49 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e9c4b call 0x121d9b90 */
  push32(0x121e9c50u); f_121d9b90();
  /* 121e9c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9c53 mov dword ptr [0x122057d4], eax */
  w32((uint32_t)(0x122057d4), (EAX));
  /* 121e9c58 cmp dword ptr [0x122057d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c5f jne 0x121e9c69 */
  if (!C.zf) goto L_121e9c69;
  /* 121e9c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e9c64 jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9c69:;
  /* 121e9c69 mov eax, dword ptr [0x122057d4] */
  EAX = (r32((uint32_t)(0x122057d4)));
  /* 121e9c6e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121e9c74:;
  /* 121e9c74 cmp dword ptr [0x122057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c7b jne 0x121e9cb5 */
  if (!C.zf) goto L_121e9cb5;
  /* 121e9c7d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 121e9c82 push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9c89 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e9c8b call 0x121d9b90 */
  push32(0x121e9c90u); f_121d9b90();
  /* 121e9c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9c93 mov dword ptr [0x122057dc], eax */
  w32((uint32_t)(0x122057dc), (EAX));
  /* 121e9c98 cmp dword ptr [0x122057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9c9f jne 0x121e9ca9 */
  if (!C.zf) goto L_121e9ca9;
  /* 121e9ca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e9ca4 jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9ca9:;
  /* 121e9ca9 mov ecx, dword ptr [0x122057dc] */
  ECX = (r32((uint32_t)(0x122057dc)));
  /* 121e9caf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_121e9cb5:;
  /* 121e9cb5 mov edx, dword ptr [0x122057d4] */
  EDX = (r32((uint32_t)(0x122057d4)));
  /* 121e9cbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121e9cbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e9cc1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9cc4 push eax */
  push32((uint32_t)(EAX));
  /* 121e9cc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9cc9 call 0x121e9e70 */
  push32(0x121e9cceu); f_121e9e70();
  /* 121e9cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9cd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e9cd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9cd8 jl 0x121e9d71 */
  if ((C.sf!=C.of)) goto L_121e9d71;
  /* 121e9cde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9ce1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9ce4 je 0x121e9d71 */
  if (C.zf) goto L_121e9d71;
  /* 121e9cea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9cee je 0x121e9d63 */
  if (C.zf) goto L_121e9d63;
  /* 121e9cf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9cf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9cf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9cf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e9cfb push edx */
  push32((uint32_t)(EDX));
  /* 121e9cfc call 0x121da620 */
  push32(0x121e9d01u); f_121da620();
  /* 121e9d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9d04 jmp 0x121e9d0f */
  goto L_121e9d0f;
L_121e9d06:;
  /* 121e9d06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9d0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e9d0f:;
  /* 121e9d0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9d19 je 0x121e9d30 */
  if (C.zf) goto L_121e9d30;
  /* 121e9d1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 121e9d2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 121e9d2e jmp 0x121e9d06 */
  goto L_121e9d06;
L_121e9d30:;
  /* 121e9d30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 121e9d35 push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9d3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121e9d42 push eax */
  push32((uint32_t)(EAX));
  /* 121e9d43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d46 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9d47 call 0x121da020 */
  push32(0x121e9d4cu); f_121da020();
  /* 121e9d4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9d4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e9d52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9d56 je 0x121e9d61 */
  if (C.zf) goto L_121e9d61;
  /* 121e9d58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d5b mov dword ptr [0x122057d4], edx */
  w32((uint32_t)(0x122057d4), (EDX));
L_121e9d61:;
  /* 121e9d61 jmp 0x121e9d6f */
  goto L_121e9d6f;
L_121e9d63:;
  /* 121e9d63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9d6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_121e9d6f:;
  /* 121e9d6f jmp 0x121e9de4 */
  goto L_121e9de4;
L_121e9d71:;
  /* 121e9d71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9d75 jne 0x121e9ddd */
  if (!C.zf) goto L_121e9ddd;
  /* 121e9d77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9d7b jge 0x121e9d85 */
  if ((C.sf==C.of)) goto L_121e9d85;
  /* 121e9d7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e9d82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e9d85:;
  /* 121e9d85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 121e9d8a push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9d8f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9d91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9d94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 121e9d9b push edx */
  push32((uint32_t)(EDX));
  /* 121e9d9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9d9f push eax */
  push32((uint32_t)(EAX));
  /* 121e9da0 call 0x121da020 */
  push32(0x121e9da5u); f_121da020();
  /* 121e9da5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9da8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e9dab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9daf jne 0x121e9db9 */
  if (!C.zf) goto L_121e9db9;
  /* 121e9db1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e9db4 jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9db9:;
  /* 121e9db9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9dbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9dc2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 121e9dc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9dc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9dcb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 121e9dd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9dd6 mov dword ptr [0x122057d4], eax */
  w32((uint32_t)(0x122057d4), (EAX));
  /* 121e9ddb jmp 0x121e9de4 */
  goto L_121e9de4;
L_121e9ddd:;
  /* 121e9ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9ddf jmp 0x121e9e6b */
  goto L_121e9e6b;
L_121e9de4:;
  /* 121e9de4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9de8 je 0x121e9e69 */
  if (C.zf) goto L_121e9e69;
  /* 121e9dea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 121e9def push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9df4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9df9 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9dfa call 0x121dc9c0 */
  push32(0x121e9dffu); f_121dc9c0();
  /* 121e9dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e05 push eax */
  push32((uint32_t)(EAX));
  /* 121e9e06 call 0x121d9b90 */
  push32(0x121e9e0bu); f_121d9b90();
  /* 121e9e0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e9e11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9e15 je 0x121e9e69 */
  if (C.zf) goto L_121e9e69;
  /* 121e9e17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9e1a push edx */
  push32((uint32_t)(EDX));
  /* 121e9e1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9e1e push eax */
  push32((uint32_t)(EAX));
  /* 121e9e1f call 0x121dcb40 */
  push32(0x121e9e24u); f_121dcb40();
  /* 121e9e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e9e2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9e2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9e30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e9e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9e38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121e9e3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9e3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e9e44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e9e47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e9e49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9e4b not edx */
  EDX = (~(EDX));
  /* 121e9e4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 121e9e50 push edx */
  push32((uint32_t)(EDX));
  /* 121e9e51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9e54 push eax */
  push32((uint32_t)(EAX));
  /* 121e9e55 call dword ptr [0x122082d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082d0))), 0x121e9e5bu);
  /* 121e9e5b push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9e5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9e60 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9e61 call 0x121da620 */
  push32(0x121e9e66u); f_121da620();
  /* 121e9e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e9e69:;
  /* 121e9e69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e9e6b:;
  /* 121e9e6b pop esi */
  ESI = (pop32());
  /* 121e9e6c mov esp, ebp */
  ESP = (EBP);
  /* 121e9e6e pop ebp */
  EBP = (pop32());
  /* 121e9e6f ret  */
  ESPCHK(0x121e9b90u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x121e9e70 (124 bytes, 47 insns) */
void f_121e9e70(void) {
  FTRACE(0x121e9e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9e70 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9e71 mov ebp, esp */
  EBP = (ESP);
  /* 121e9e73 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9e74 mov eax, dword ptr [0x122057d4] */
  EAX = (r32((uint32_t)(0x122057d4)));
  /* 121e9e79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e9e7c jmp 0x121e9e87 */
  goto L_121e9e87;
L_121e9e7e:;
  /* 121e9e7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9e81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9e84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e9e87:;
  /* 121e9e87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9e8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9e8d je 0x121e9eda */
  if (C.zf) goto L_121e9eda;
  /* 121e9e8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9e92 push eax */
  push32((uint32_t)(EAX));
  /* 121e9e93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9e96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e9e98 push edx */
  push32((uint32_t)(EDX));
  /* 121e9e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9e9c push eax */
  push32((uint32_t)(EAX));
  /* 121e9e9d call 0x121e9640 */
  push32(0x121e9ea2u); f_121e9640();
  /* 121e9ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e9ea7 jne 0x121e9ed8 */
  if (!C.zf) goto L_121e9ed8;
  /* 121e9ea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9eac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e9eae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9eb1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 121e9eb5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9eb8 je 0x121e9eca */
  if (C.zf) goto L_121e9eca;
  /* 121e9eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9ebd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e9ebf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9ec2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 121e9ec6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9ec8 jne 0x121e9ed8 */
  if (!C.zf) goto L_121e9ed8;
L_121e9eca:;
  /* 121e9eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9ecd sub eax, dword ptr [0x122057d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122057d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9ed3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121e9ed6 jmp 0x121e9ee8 */
  goto L_121e9ee8;
L_121e9ed8:;
  /* 121e9ed8 jmp 0x121e9e7e */
  goto L_121e9e7e;
L_121e9eda:;
  /* 121e9eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e9edd sub eax, dword ptr [0x122057d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122057d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9ee3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121e9ee6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_121e9ee8:;
  /* 121e9ee8 mov esp, ebp */
  ESP = (EBP);
  /* 121e9eea pop ebp */
  EBP = (pop32());
  /* 121e9eeb ret  */
  ESPCHK(0x121e9e70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x121e9ef0 (238 bytes, 80 insns) */
void f_121e9ef0(void) {
  FTRACE(0x121e9ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9ef1 mov ebp, esp */
  EBP = (ESP);
  /* 121e9ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e9ef6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e9efd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9f00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e9f03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9f07 jne 0x121e9f10 */
  if (!C.zf) goto L_121e9f10;
  /* 121e9f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e9f0b jmp 0x121e9fda */
  goto L_121e9fda;
L_121e9f10:;
  /* 121e9f10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9f13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e9f15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9f18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9f1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e9f1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e9f20 je 0x121e9f2d */
  if (C.zf) goto L_121e9f2d;
  /* 121e9f22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9f25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9f28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121e9f2b jmp 0x121e9f10 */
  goto L_121e9f10;
L_121e9f2d:;
  /* 121e9f2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 121e9f32 push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9f39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e9f3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 121e9f43 push eax */
  push32((uint32_t)(EAX));
  /* 121e9f44 call 0x121d9b90 */
  push32(0x121e9f49u); f_121d9b90();
  /* 121e9f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9f4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e9f4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9f52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e9f55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9f59 jne 0x121e9f65 */
  if (!C.zf) goto L_121e9f65;
  /* 121e9f5b push 9 */
  push32((uint32_t)(0x9u));
  /* 121e9f5d call 0x121d8b00 */
  push32(0x121e9f62u); f_121d8b00();
  /* 121e9f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e9f65:;
  /* 121e9f65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9f68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121e9f6b:;
  /* 121e9f6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9f6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9f71 je 0x121e9fce */
  if (C.zf) goto L_121e9fce;
  /* 121e9f73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 121e9f78 push 0x12201fb0 */
  push32((uint32_t)(0x12201fb0u));
  /* 121e9f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e9f7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9f82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e9f84 push edx */
  push32((uint32_t)(EDX));
  /* 121e9f85 call 0x121dc9c0 */
  push32(0x121e9f8au); f_121dc9c0();
  /* 121e9f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9f8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9f90 push eax */
  push32((uint32_t)(EAX));
  /* 121e9f91 call 0x121d9b90 */
  push32(0x121e9f96u); f_121d9b90();
  /* 121e9f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9f99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9f9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e9f9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9fa1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9fa4 je 0x121e9fba */
  if (C.zf) goto L_121e9fba;
  /* 121e9fa6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9fa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e9fab push ecx */
  push32((uint32_t)(ECX));
  /* 121e9fac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9faf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e9fb1 push eax */
  push32((uint32_t)(EAX));
  /* 121e9fb2 call 0x121dcb40 */
  push32(0x121e9fb7u); f_121dcb40();
  /* 121e9fb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e9fba:;
  /* 121e9fba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e9fbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9fc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e9fc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9fc6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9fc9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e9fcc jmp 0x121e9f6b */
  goto L_121e9f6b;
L_121e9fce:;
  /* 121e9fce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e9fd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e9fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e9fda:;
  /* 121e9fda mov esp, ebp */
  ESP = (EBP);
  /* 121e9fdc pop ebp */
  EBP = (pop32());
  /* 121e9fdd ret  */
  ESPCHK(0x121e9ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fe0 @ 0x121e9fe0 (237 bytes, 81 insns) */
void f_121e9fe0(void) {
  FTRACE(0x121e9fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e9fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e9fe1 mov ebp, esp */
  EBP = (ESP);
  /* 121e9fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9fe4 cmp dword ptr [0x12206f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12206f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e9feb jne 0x121ea002 */
  if (!C.zf) goto L_121ea002;
  /* 121e9fed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e9ff0 push eax */
  push32((uint32_t)(EAX));
  /* 121e9ff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e9ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 121e9ff5 call 0x121ea0e0 */
  push32(0x121e9ffau); f_121ea0e0();
  /* 121e9ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e9ffd jmp 0x121ea0c9 */
  goto L_121ea0c9;
L_121ea002:;
  /* 121ea002 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121ea004 call 0x121dd590 */
  push32(0x121ea009u); f_121dd590();
  /* 121ea009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea00c jmp 0x121ea017 */
  goto L_121ea017;
L_121ea00e:;
  /* 121ea00e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea011 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea014 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121ea017:;
  /* 121ea017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea01a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 121ea01e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 121ea022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ea025 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121ea02b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121ea02d je 0x121ea0ab */
  if (C.zf) goto L_121ea0ab;
  /* 121ea02f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ea032 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121ea037 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121ea039 mov cl, byte ptr [eax + 0x12207041] */
  CL = (r8((uint32_t)(EAX + 0x12207041)));
  /* 121ea03f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 121ea042 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121ea044 je 0x121ea096 */
  if (C.zf) goto L_121ea096;
  /* 121ea046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea049 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea04c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121ea04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea052 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121ea054 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121ea056 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121ea058 jne 0x121ea068 */
  if (!C.zf) goto L_121ea068;
  /* 121ea05a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121ea05c call 0x121dd630 */
  push32(0x121ea061u); f_121dd630();
  /* 121ea061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121ea066 jmp 0x121ea0c9 */
  goto L_121ea0c9;
L_121ea068:;
  /* 121ea068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ea06b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121ea071 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 121ea074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea077 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121ea079 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121ea07b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121ea07d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ea080 jne 0x121ea094 */
  if (!C.zf) goto L_121ea094;
  /* 121ea082 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121ea084 call 0x121dd630 */
  push32(0x121ea089u); f_121dd630();
  /* 121ea089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea08c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea08f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ea092 jmp 0x121ea0c9 */
  goto L_121ea0c9;
L_121ea094:;
  /* 121ea094 jmp 0x121ea0a6 */
  goto L_121ea0a6;
L_121ea096:;
  /* 121ea096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ea099 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121ea09f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ea0a2 jne 0x121ea0a6 */
  if (!C.zf) goto L_121ea0a6;
  /* 121ea0a4 jmp 0x121ea0ab */
  goto L_121ea0ab;
L_121ea0a6:;
  /* 121ea0a6 jmp 0x121ea00e */
  goto L_121ea00e;
L_121ea0ab:;
  /* 121ea0ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121ea0ad call 0x121dd630 */
  push32(0x121ea0b2u); f_121dd630();
  /* 121ea0b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea0b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ea0b8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121ea0bd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ea0c0 jne 0x121ea0c7 */
  if (!C.zf) goto L_121ea0c7;
  /* 121ea0c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ea0c5 jmp 0x121ea0c9 */
  goto L_121ea0c9;
L_121ea0c7:;
  /* 121ea0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121ea0c9:;
  /* 121ea0c9 mov esp, ebp */
  ESP = (EBP);
  /* 121ea0cb pop ebp */
  EBP = (pop32());
  /* 121ea0cc ret  */
  ESPCHK(0x121e9fe0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x121ea0e0 (193 bytes, 87 insns) */
void f_121ea0e0(void) {
  FTRACE(0x121ea0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121ea0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121ea0e2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 121ea0e6 push ebx */
  push32((uint32_t)(EBX));
  /* 121ea0e7 mov ebx, eax */
  EBX = (EAX);
  /* 121ea0e9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 121ea0ec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 121ea0f0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121ea0f6 je 0x121ea10b */
  if (C.zf) goto L_121ea10b;
L_121ea0f8:;
  /* 121ea0f8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 121ea0fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121ea0fb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121ea0fd je 0x121ea0d0 */
  if (C.zf) { jmp_ind(0x121ea0d0u); return; }
  /* 121ea0ff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 121ea101 je 0x121ea154 */
  if (C.zf) goto L_121ea154;
  /* 121ea103 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121ea109 jne 0x121ea0f8 */
  if (!C.zf) goto L_121ea0f8;
L_121ea10b:;
  /* 121ea10b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 121ea10d push edi */
  push32((uint32_t)(EDI));
  /* 121ea10e mov eax, ebx */
  EAX = (EBX);
  /* 121ea110 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 121ea113 push esi */
  push32((uint32_t)(ESI));
  /* 121ea114 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_121ea116:;
  /* 121ea116 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 121ea118 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 121ea11d mov eax, ecx */
  EAX = (ECX);
  /* 121ea11f mov esi, edi */
  ESI = (EDI);
  /* 121ea121 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 121ea123 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea125 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea127 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121ea12a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121ea12d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 121ea12f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 121ea131 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ea134 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 121ea13a jne 0x121ea158 */
  if (!C.zf) goto L_121ea158;
  /* 121ea13c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 121ea141 je 0x121ea116 */
  if (C.zf) goto L_121ea116;
  /* 121ea143 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 121ea148 jne 0x121ea152 */
  if (!C.zf) goto L_121ea152;
  /* 121ea14a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 121ea150 jne 0x121ea116 */
  if (!C.zf) goto L_121ea116;
L_121ea152:;
  /* 121ea152 pop esi */
  ESI = (pop32());
  /* 121ea153 pop edi */
  EDI = (pop32());
L_121ea154:;
  /* 121ea154 pop ebx */
  EBX = (pop32());
  /* 121ea155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121ea157 ret  */
  ESPCHK(0x121ea0e0u, _esp0);
  ESP += 4; return;
L_121ea158:;
  /* 121ea158 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 121ea15b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121ea15d je 0x121ea195 */
  if (C.zf) goto L_121ea195;
  /* 121ea15f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121ea161 je 0x121ea152 */
  if (C.zf) goto L_121ea152;
  /* 121ea163 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121ea165 je 0x121ea18e */
  if (C.zf) goto L_121ea18e;
  /* 121ea167 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 121ea169 je 0x121ea152 */
  if (C.zf) goto L_121ea152;
  /* 121ea16b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121ea16e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121ea170 je 0x121ea187 */
  if (C.zf) goto L_121ea187;
  /* 121ea172 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121ea174 je 0x121ea152 */
  if (C.zf) goto L_121ea152;
  /* 121ea176 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121ea178 je 0x121ea180 */
  if (C.zf) goto L_121ea180;
  /* 121ea17a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 121ea17c je 0x121ea152 */
  if (C.zf) goto L_121ea152;
  /* 121ea17e jmp 0x121ea116 */
  goto L_121ea116;
L_121ea180:;
  /* 121ea180 pop esi */
  ESI = (pop32());
  /* 121ea181 pop edi */
  EDI = (pop32());
  /* 121ea182 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 121ea185 pop ebx */
  EBX = (pop32());
  /* 121ea186 ret  */
  ESPCHK(0x121ea0e0u, _esp0);
  ESP += 4; return;
L_121ea187:;
  /* 121ea187 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 121ea18a pop esi */
  ESI = (pop32());
  /* 121ea18b pop edi */
  EDI = (pop32());
  /* 121ea18c pop ebx */
  EBX = (pop32());
  /* 121ea18d ret  */
  ESPCHK(0x121ea0e0u, _esp0);
  ESP += 4; return;
L_121ea18e:;
  /* 121ea18e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 121ea191 pop esi */
  ESI = (pop32());
  /* 121ea192 pop edi */
  EDI = (pop32());
  /* 121ea193 pop ebx */
  EBX = (pop32());
  /* 121ea194 ret  */
  ESPCHK(0x121ea0e0u, _esp0);
  ESP += 4; return;
L_121ea195:;
  /* 121ea195 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 121ea198 pop esi */
  ESI = (pop32());
  /* 121ea199 pop edi */
  EDI = (pop32());
  /* 121ea19a pop ebx */
  EBX = (pop32());
  /* 121ea19b ret  */
  ESPCHK(0x121ea0e0u, _esp0);
  ESP += 4; return;
  /* 121ea19c jmp dword ptr [0x12208380] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12208380)))); return;
}

/* RtlUnwind @ 0x121ea2ec (6 bytes, 1 insns) */
void f_121ea2ec(void) {
  FTRACE(0x121ea2ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121ea2ec jmp dword ptr [0x1220830c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1220830c)))); return;
}

