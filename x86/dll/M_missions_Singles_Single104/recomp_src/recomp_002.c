#include "recomp.h"

/* FUN_10016b40 @ 0x10fe6b40 (878 bytes, 273 insns) */
void f_10fe6b40(void) {
  FTRACE(0x10fe6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6b41 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6b43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6b46 push esi */
  push32((uint32_t)(ESI));
  /* 10fe6b47 mov eax, dword ptr [0x11004c98] */
  EAX = (r32((uint32_t)(0x11004c98)));
  /* 10fe6b4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe6b4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe6b56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe6b5d jmp 0x10fe6b68 */
  goto L_10fe6b68;
L_10fe6b5f:;
  /* 10fe6b5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6b62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fe6b68:;
  /* 10fe6b68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6b6c jae 0x10fe6ba1 */
  if (!C.cf) goto L_10fe6ba1;
  /* 10fe6b6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6b71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6b74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fe6b77 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6b78 call 0x10fdc9c0 */
  push32(0x10fe6b7du); f_10fdc9c0();
  /* 10fe6b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b80 mov esi, eax */
  ESI = (EAX);
  /* 10fe6b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6b85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6b88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10fe6b8c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6b8d call 0x10fdc9c0 */
  push32(0x10fe6b92u); f_10fdc9c0();
  /* 10fe6b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fe6b9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe6b9f jmp 0x10fe6b5f */
  goto L_10fe6b5f;
L_10fe6ba1:;
  /* 10fe6ba1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe6ba8 jmp 0x10fe6bb3 */
  goto L_10fe6bb3;
L_10fe6baa:;
  /* 10fe6baa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6bad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6bb0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fe6bb3:;
  /* 10fe6bb3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6bb7 jae 0x10fe6bed */
  if (!C.cf) goto L_10fe6bed;
  /* 10fe6bb9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6bbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6bbf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10fe6bc3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6bc4 call 0x10fdc9c0 */
  push32(0x10fe6bc9u); f_10fdc9c0();
  /* 10fe6bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6bcc mov esi, eax */
  ESI = (EAX);
  /* 10fe6bce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6bd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6bd4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fe6bd8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6bd9 call 0x10fdc9c0 */
  push32(0x10fe6bdeu); f_10fdc9c0();
  /* 10fe6bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6be1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6be4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fe6be8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe6beb jmp 0x10fe6baa */
  goto L_10fe6baa;
L_10fe6bed:;
  /* 10fe6bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6bf0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10fe6bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6bf7 call 0x10fdc9c0 */
  push32(0x10fe6bfcu); f_10fdc9c0();
  /* 10fe6bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6bff mov esi, eax */
  ESI = (EAX);
  /* 10fe6c01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6c04 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10fe6c0a push edx */
  push32((uint32_t)(EDX));
  /* 10fe6c0b call 0x10fdc9c0 */
  push32(0x10fe6c10u); f_10fdc9c0();
  /* 10fe6c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c13 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c16 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fe6c1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe6c1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6c20 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10fe6c26 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6c27 call 0x10fdc9c0 */
  push32(0x10fe6c2cu); f_10fdc9c0();
  /* 10fe6c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6c32 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fe6c36 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe6c39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6c3c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10fe6c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6c43 call 0x10fdc9c0 */
  push32(0x10fe6c48u); f_10fdc9c0();
  /* 10fe6c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6c4e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fe6c52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe6c55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6c58 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10fe6c5e push edx */
  push32((uint32_t)(EDX));
  /* 10fe6c5f call 0x10fdc9c0 */
  push32(0x10fe6c64u); f_10fdc9c0();
  /* 10fe6c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6c6a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fe6c6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe6c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6c74 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c79 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6c7a call 0x10fd9b70 */
  push32(0x10fe6c7fu); f_10fd9b70();
  /* 10fe6c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe6c85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6c89 je 0x10fe6ea6 */
  if (C.zf) goto L_10fe6ea6;
  /* 10fe6c8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6c92 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fe6c95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6c98 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6c9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe6ca1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10fe6ca6 mov eax, dword ptr [0x11004c98] */
  EAX = (r32((uint32_t)(0x11004c98)));
  /* 10fe6cab push eax */
  push32((uint32_t)(EAX));
  /* 10fe6cac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6caf push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6cb0 call 0x10fe0470 */
  push32(0x10fe6cb5u); f_10fe0470();
  /* 10fe6cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6cb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe6cbf jmp 0x10fe6cca */
  goto L_10fe6cca;
L_10fe6cc1:;
  /* 10fe6cc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6cc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6cc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe6cca:;
  /* 10fe6cca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6cce jae 0x10fe6d3e */
  if (!C.cf) goto L_10fe6d3e;
  /* 10fe6cd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6cd3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6cd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6cd9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10fe6cdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6cdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6ce2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe6ce5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6ce6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ce9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6cea call 0x10fdcb40 */
  push32(0x10fe6cefu); f_10fdcb40();
  /* 10fe6cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6cf2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6cf3 call 0x10fdc9c0 */
  push32(0x10fe6cf8u); f_10fdc9c0();
  /* 10fe6cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6cfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6cfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fe6d02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe6d05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6d0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10fe6d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6d18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10fe6d1c push edx */
  push32((uint32_t)(EDX));
  /* 10fe6d1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d20 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6d21 call 0x10fdcb40 */
  push32(0x10fe6d26u); f_10fdcb40();
  /* 10fe6d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6d29 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6d2a call 0x10fdc9c0 */
  push32(0x10fe6d2fu); f_10fdc9c0();
  /* 10fe6d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6d32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fe6d39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe6d3c jmp 0x10fe6cc1 */
  goto L_10fe6cc1;
L_10fe6d3e:;
  /* 10fe6d3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe6d45 jmp 0x10fe6d50 */
  goto L_10fe6d50;
L_10fe6d47:;
  /* 10fe6d47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6d4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fe6d50:;
  /* 10fe6d50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6d54 jae 0x10fe6dc6 */
  if (!C.cf) goto L_10fe6dc6;
  /* 10fe6d56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6d5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10fe6d63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6d69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10fe6d6d push eax */
  push32((uint32_t)(EAX));
  /* 10fe6d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d71 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6d72 call 0x10fdcb40 */
  push32(0x10fe6d77u); f_10fdcb40();
  /* 10fe6d77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6d7a push eax */
  push32((uint32_t)(EAX));
  /* 10fe6d7b call 0x10fdc9c0 */
  push32(0x10fe6d80u); f_10fdc9c0();
  /* 10fe6d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6d83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fe6d8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe6d8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6d93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6d96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10fe6d9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6d9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6da0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fe6da4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6da5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6da8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6da9 call 0x10fdcb40 */
  push32(0x10fe6daeu); f_10fdcb40();
  /* 10fe6dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6db1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6db2 call 0x10fdc9c0 */
  push32(0x10fe6db7u); f_10fdc9c0();
  /* 10fe6db7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6dba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6dbd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fe6dc1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe6dc4 jmp 0x10fe6d47 */
  goto L_10fe6d47;
L_10fe6dc6:;
  /* 10fe6dc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6dc9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6dcc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10fe6dd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6dd5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10fe6ddb push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6ddc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ddf push edx */
  push32((uint32_t)(EDX));
  /* 10fe6de0 call 0x10fdcb40 */
  push32(0x10fe6de5u); f_10fdcb40();
  /* 10fe6de5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6de8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6de9 call 0x10fdc9c0 */
  push32(0x10fe6deeu); f_10fdc9c0();
  /* 10fe6dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6df1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6df4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fe6df8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe6dfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6dfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10fe6e07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6e0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10fe6e10 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6e11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e14 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6e15 call 0x10fdcb40 */
  push32(0x10fe6e1au); f_10fdcb40();
  /* 10fe6e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6e1d push eax */
  push32((uint32_t)(EAX));
  /* 10fe6e1e call 0x10fdc9c0 */
  push32(0x10fe6e23u); f_10fdc9c0();
  /* 10fe6e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6e26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fe6e2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe6e30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6e33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10fe6e3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6e3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10fe6e45 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6e46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e49 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6e4a call 0x10fdcb40 */
  push32(0x10fe6e4fu); f_10fdcb40();
  /* 10fe6e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6e52 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6e53 call 0x10fdc9c0 */
  push32(0x10fe6e58u); f_10fdc9c0();
  /* 10fe6e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6e5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fe6e62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe6e65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6e68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10fe6e71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6e74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10fe6e7a push eax */
  push32((uint32_t)(EAX));
  /* 10fe6e7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e7e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6e7f call 0x10fdcb40 */
  push32(0x10fe6e84u); f_10fdcb40();
  /* 10fe6e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6e87 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6e88 call 0x10fdc9c0 */
  push32(0x10fe6e8du); f_10fdc9c0();
  /* 10fe6e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6e90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6e93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fe6e97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe6e9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe6e9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ea0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10fe6ea6:;
  /* 10fe6ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6ea9 pop esi */
  ESI = (pop32());
  /* 10fe6eaa mov esp, ebp */
  ESP = (EBP);
  /* 10fe6eac pop ebp */
  EBP = (pop32());
  /* 10fe6ead ret  */
  ESPCHK(0x10fe6b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016eb0 @ 0x10fe6eb0 (31 bytes, 15 insns) */
void f_10fe6eb0(void) {
  FTRACE(0x10fe6eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe6eb5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe6eb8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6eb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6ebc push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6ebd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe6ec0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6ec4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6ec5 call 0x10fe6ed0 */
  push32(0x10fe6ecau); f_10fe6ed0();
  /* 10fe6eca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6ecd pop ebp */
  EBP = (pop32());
  /* 10fe6ece ret  */
  ESPCHK(0x10fe6eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ed0 @ 0x10fe6ed0 (393 bytes, 123 insns) */
void f_10fe6ed0(void) {
  FTRACE(0x10fe6ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6ed3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6ed6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6eda jne 0x10fe6ee6 */
  if (!C.zf) goto L_10fe6ee6;
  /* 10fe6edc mov eax, dword ptr [0x11004c98] */
  EAX = (r32((uint32_t)(0x11004c98)));
  /* 10fe6ee1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe6ee4 jmp 0x10fe6eec */
  goto L_10fe6eec;
L_10fe6ee6:;
  /* 10fe6ee6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe6ee9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fe6eec:;
  /* 10fe6eec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6eef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe6ef2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe6ef5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe6ef8 push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe6efd call dword ptr [0x110083a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083a4))), 0x10fe6f03u);
  /* 10fe6f03 cmp dword ptr [0x11005b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6f0a je 0x10fe6f2a */
  if (C.zf) goto L_10fe6f2a;
  /* 10fe6f0c push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe6f11 call dword ptr [0x11008394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008394))), 0x10fe6f17u);
  /* 10fe6f17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe6f19 call 0x10fdd590 */
  push32(0x10fe6f1eu); f_10fdd590();
  /* 10fe6f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6f21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fe6f28 jmp 0x10fe6f31 */
  goto L_10fe6f31;
L_10fe6f2a:;
  /* 10fe6f2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fe6f31:;
  /* 10fe6f31 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6f35 jbe 0x10fe7022 */
  if ((C.cf||C.zf)) goto L_10fe7022;
  /* 10fe6f3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6f3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe6f40 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10fe6f43 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe6f47 je 0x10fe6f51 */
  if (C.zf) goto L_10fe6f51;
  /* 10fe6f49 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe6f4d je 0x10fe6f56 */
  if (C.zf) goto L_10fe6f56;
  /* 10fe6f4f jmp 0x10fe6fb0 */
  goto L_10fe6fb0;
L_10fe6f51:;
  /* 10fe6f51 jmp 0x10fe7022 */
  goto L_10fe7022;
L_10fe6f56:;
  /* 10fe6f56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6f5c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10fe6f5f mov dword ptr [0x11005b20], 0 */
  w32((uint32_t)(0x11005b20), (0x0u));
  /* 10fe6f69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6f6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe6f6f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6f72 jne 0x10fe6f87 */
  if (!C.zf) goto L_10fe6f87;
  /* 10fe6f74 mov dword ptr [0x11005b20], 1 */
  w32((uint32_t)(0x11005b20), (0x1u));
  /* 10fe6f7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6f81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6f84 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10fe6f87:;
  /* 10fe6f87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6f8a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6f8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10fe6f8e push edx */
  push32((uint32_t)(EDX));
  /* 10fe6f8f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10fe6f92 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6f93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe6f96 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6f97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6f9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe6f9c push eax */
  push32((uint32_t)(EAX));
  /* 10fe6f9d call 0x10fe7060 */
  push32(0x10fe6fa2u); f_10fe7060();
  /* 10fe6fa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6fa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6fa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6fab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10fe6fae jmp 0x10fe701d */
  goto L_10fe701d;
L_10fe6fb0:;
  /* 10fe6fb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe6fb5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe6fb7 mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe6fbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe6fbf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe6fc3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe6fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe6fcb je 0x10fe6ff8 */
  if (C.zf) goto L_10fe6ff8;
  /* 10fe6fcd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6fd1 jbe 0x10fe6ff8 */
  if ((C.cf||C.zf)) goto L_10fe6ff8;
  /* 10fe6fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6fd9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe6fdb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fe6fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6fe3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe6fe6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6fe9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6fec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10fe6fef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6ff2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6ff5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fe6ff8:;
  /* 10fe6ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6ffb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe6ffe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe7000 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fe7002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7008 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe700b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe700e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7011 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10fe7014 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7017 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe701a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fe701d:;
  /* 10fe701d jmp 0x10fe6f31 */
  goto L_10fe6f31;
L_10fe7022:;
  /* 10fe7022 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7026 je 0x10fe7034 */
  if (C.zf) goto L_10fe7034;
  /* 10fe7028 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe702a call 0x10fdd630 */
  push32(0x10fe702fu); f_10fdd630();
  /* 10fe702f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7032 jmp 0x10fe703f */
  goto L_10fe703f;
L_10fe7034:;
  /* 10fe7034 push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe7039 call dword ptr [0x11008394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008394))), 0x10fe703fu);
L_10fe703f:;
  /* 10fe703f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7043 jbe 0x10fe7053 */
  if ((C.cf||C.zf)) goto L_10fe7053;
  /* 10fe7045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7048 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fe704b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe704e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7051 jmp 0x10fe7055 */
  goto L_10fe7055;
L_10fe7053:;
  /* 10fe7053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe7055:;
  /* 10fe7055 mov esp, ebp */
  ESP = (EBP);
  /* 10fe7057 pop ebp */
  EBP = (pop32());
  /* 10fe7058 ret  */
  ESPCHK(0x10fe6ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017060 @ 0x10fe7060 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10fe7060(void) {
  FTRACE(0x10fe7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7060 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7061 mov ebp, esp */
  EBP = (ESP);
  /* 10fe7063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7066 push esi */
  push32((uint32_t)(ESI));
  /* 10fe7067 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10fe706b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe706e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7071 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7074 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe7077 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe707b ja 0x10fe75c8 */
  if ((!C.cf&&!C.zf)) goto L_10fe75c8;
  /* 10fe7081 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7086 mov dl, byte ptr [eax + 0x10fe7629] */
  DL = (r8((uint32_t)(EAX + 0x10fe7629)));
  /* 10fe708c jmp dword ptr [edx*4 + 0x10fe75cd] */
  switch (EDX) {
    case 0: goto L_10fe75a6;
    case 1: goto L_10fe70b5;
    case 2: goto L_10fe70fb;
    case 3: goto L_10fe7248;
    case 4: goto L_10fe7270;
    case 5: goto L_10fe730f;
    case 6: goto L_10fe737b;
    case 7: goto L_10fe73a4;
    case 8: goto L_10fe73e5;
    case 9: goto L_10fe74c7;
    case 10: goto L_10fe752e;
    case 11: goto L_10fe757b;
    case 12: goto L_10fe7093;
    case 13: goto L_10fe70d8;
    case 14: goto L_10fe711e;
    case 15: goto L_10fe721e;
    case 16: goto L_10fe72b5;
    case 17: goto L_10fe72e2;
    case 18: goto L_10fe7337;
    case 19: goto L_10fe73bb;
    case 20: goto L_10fe7469;
    case 21: goto L_10fe74f8;
    case 22: goto L_10fe75c8;
    default: x86_unimpl("switch@0x10fe708c out of table"); return;
  }
L_10fe7093:;
  /* 10fe7093 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7096 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7097 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe709a push edx */
  push32((uint32_t)(EDX));
  /* 10fe709b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe709e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10fe70a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe70a4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fe70a7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe70a8 call 0x10fe7680 */
  push32(0x10fe70adu); f_10fe7680();
  /* 10fe70ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe70b0 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe70b5:;
  /* 10fe70b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe70b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe70b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe70bc push edx */
  push32((uint32_t)(EDX));
  /* 10fe70bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe70c0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10fe70c3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe70c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10fe70ca push eax */
  push32((uint32_t)(EAX));
  /* 10fe70cb call 0x10fe7680 */
  push32(0x10fe70d0u); f_10fe7680();
  /* 10fe70d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe70d3 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe70d8:;
  /* 10fe70d8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe70db push ecx */
  push32((uint32_t)(ECX));
  /* 10fe70dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe70df push edx */
  push32((uint32_t)(EDX));
  /* 10fe70e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe70e3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fe70e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe70e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10fe70ed push eax */
  push32((uint32_t)(EAX));
  /* 10fe70ee call 0x10fe7680 */
  push32(0x10fe70f3u); f_10fe7680();
  /* 10fe70f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe70f6 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe70fb:;
  /* 10fe70fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe70fe push ecx */
  push32((uint32_t)(ECX));
  /* 10fe70ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7102 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7106 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fe7109 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe710c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fe7110 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7111 call 0x10fe7680 */
  push32(0x10fe7116u); f_10fe7680();
  /* 10fe7116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7119 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe711e:;
  /* 10fe711e cmp dword ptr [0x11005b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7125 je 0x10fe71a6 */
  if (C.zf) goto L_10fe71a6;
  /* 10fe7127 mov dword ptr [0x11005b20], 0 */
  w32((uint32_t)(0x11005b20), (0x0u));
  /* 10fe7131 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7134 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7135 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7138 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe713c push eax */
  push32((uint32_t)(EAX));
  /* 10fe713d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7140 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7141 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7144 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10fe714a push eax */
  push32((uint32_t)(EAX));
  /* 10fe714b call 0x10fe7830 */
  push32(0x10fe7150u); f_10fe7830();
  /* 10fe7150 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7153 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7156 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7159 jne 0x10fe7160 */
  if (!C.zf) goto L_10fe7160;
  /* 10fe715b jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe7160:;
  /* 10fe7160 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7163 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7165 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10fe7168 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe716b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe716d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7170 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7173 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe7175 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7178 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe717a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe717d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7180 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe7182 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7185 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7186 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7189 push edx */
  push32((uint32_t)(EDX));
  /* 10fe718a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe718d push eax */
  push32((uint32_t)(EAX));
  /* 10fe718e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7191 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7192 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7195 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10fe719b push eax */
  push32((uint32_t)(EAX));
  /* 10fe719c call 0x10fe7830 */
  push32(0x10fe71a1u); f_10fe7830();
  /* 10fe71a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe71a4 jmp 0x10fe7219 */
  goto L_10fe7219;
L_10fe71a6:;
  /* 10fe71a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe71a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe71aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe71ad push edx */
  push32((uint32_t)(EDX));
  /* 10fe71ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe71b1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe71b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe71b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe71b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe71b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10fe71bf push eax */
  push32((uint32_t)(EAX));
  /* 10fe71c0 call 0x10fe7830 */
  push32(0x10fe71c5u); f_10fe7830();
  /* 10fe71c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe71c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe71cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe71ce jne 0x10fe71d5 */
  if (!C.zf) goto L_10fe71d5;
  /* 10fe71d0 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe71d5:;
  /* 10fe71d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe71d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe71da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10fe71dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe71e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe71e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe71e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe71e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe71ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe71ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe71ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe71f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe71f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe71f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe71fa push ecx */
  push32((uint32_t)(ECX));
  /* 10fe71fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe71fe push edx */
  push32((uint32_t)(EDX));
  /* 10fe71ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7202 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7203 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7206 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7207 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe720a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10fe7210 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7211 call 0x10fe7830 */
  push32(0x10fe7216u); f_10fe7830();
  /* 10fe7216 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe7219:;
  /* 10fe7219 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe721e:;
  /* 10fe721e mov ecx, dword ptr [0x11005b20] */
  ECX = (r32((uint32_t)(0x11005b20)));
  /* 10fe7224 mov dword ptr [0x11005b30], ecx */
  w32((uint32_t)(0x11005b30), (ECX));
  /* 10fe722a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe722d push edx */
  push32((uint32_t)(EDX));
  /* 10fe722e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7231 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7232 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7234 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7237 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe723a push edx */
  push32((uint32_t)(EDX));
  /* 10fe723b call 0x10fe76d0 */
  push32(0x10fe7240u); f_10fe76d0();
  /* 10fe7240 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7243 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe7248:;
  /* 10fe7248 mov eax, dword ptr [0x11005b20] */
  EAX = (r32((uint32_t)(0x11005b20)));
  /* 10fe724d mov dword ptr [0x11005b30], eax */
  w32((uint32_t)(0x11005b30), (EAX));
  /* 10fe7252 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7255 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7256 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7259 push edx */
  push32((uint32_t)(EDX));
  /* 10fe725a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe725c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe725f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe7262 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7263 call 0x10fe76d0 */
  push32(0x10fe7268u); f_10fe76d0();
  /* 10fe7268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe726b jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe7270:;
  /* 10fe7270 mov edx, dword ptr [0x11005b20] */
  EDX = (r32((uint32_t)(0x11005b20)));
  /* 10fe7276 mov dword ptr [0x11005b30], edx */
  w32((uint32_t)(0x11005b30), (EDX));
  /* 10fe727c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe727f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe7282 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7283 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10fe7288 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe728a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe728d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7291 jne 0x10fe729a */
  if (!C.zf) goto L_10fe729a;
  /* 10fe7293 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10fe729a:;
  /* 10fe729a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe729d push edx */
  push32((uint32_t)(EDX));
  /* 10fe729e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe72a1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe72a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe72a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe72a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe72a8 call 0x10fe76d0 */
  push32(0x10fe72adu); f_10fe76d0();
  /* 10fe72ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe72b0 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe72b5:;
  /* 10fe72b5 mov edx, dword ptr [0x11005b20] */
  EDX = (r32((uint32_t)(0x11005b20)));
  /* 10fe72bb mov dword ptr [0x11005b30], edx */
  w32((uint32_t)(0x11005b30), (EDX));
  /* 10fe72c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe72c4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe72c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe72c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe72c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10fe72cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe72ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe72d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe72d4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe72d5 call 0x10fe76d0 */
  push32(0x10fe72dau); f_10fe76d0();
  /* 10fe72da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe72dd jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe72e2:;
  /* 10fe72e2 mov ecx, dword ptr [0x11005b20] */
  ECX = (r32((uint32_t)(0x11005b20)));
  /* 10fe72e8 mov dword ptr [0x11005b30], ecx */
  w32((uint32_t)(0x11005b30), (ECX));
  /* 10fe72ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe72f1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe72f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe72f5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe72f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe72f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe72fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10fe72fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7301 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7302 call 0x10fe76d0 */
  push32(0x10fe7307u); f_10fe76d0();
  /* 10fe7307 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe730a jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe730f:;
  /* 10fe730f mov eax, dword ptr [0x11005b20] */
  EAX = (r32((uint32_t)(0x11005b20)));
  /* 10fe7314 mov dword ptr [0x11005b30], eax */
  w32((uint32_t)(0x11005b30), (EAX));
  /* 10fe7319 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe731c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe731d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7320 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7321 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7323 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7326 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fe7329 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe732a call 0x10fe76d0 */
  push32(0x10fe732fu); f_10fe76d0();
  /* 10fe732f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7332 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe7337:;
  /* 10fe7337 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe733a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe733e jg 0x10fe735c */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe735c;
  /* 10fe7340 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7343 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7344 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7347 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7348 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe734b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10fe7351 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7352 call 0x10fe7680 */
  push32(0x10fe7357u); f_10fe7680();
  /* 10fe7357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe735a jmp 0x10fe7376 */
  goto L_10fe7376;
L_10fe735c:;
  /* 10fe735c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe735f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7363 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7364 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7367 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10fe736d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe736e call 0x10fe7680 */
  push32(0x10fe7373u); f_10fe7680();
  /* 10fe7373 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe7376:;
  /* 10fe7376 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe737b:;
  /* 10fe737b mov edx, dword ptr [0x11005b20] */
  EDX = (r32((uint32_t)(0x11005b20)));
  /* 10fe7381 mov dword ptr [0x11005b30], edx */
  w32((uint32_t)(0x11005b30), (EDX));
  /* 10fe7387 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe738a push eax */
  push32((uint32_t)(EAX));
  /* 10fe738b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe738e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe738f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7391 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7394 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7396 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7397 call 0x10fe76d0 */
  push32(0x10fe739cu); f_10fe76d0();
  /* 10fe739c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe739f jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe73a4:;
  /* 10fe73a4 mov ecx, dword ptr [0x11005b20] */
  ECX = (r32((uint32_t)(0x11005b20)));
  /* 10fe73aa mov dword ptr [0x11005b30], ecx */
  w32((uint32_t)(0x11005b30), (ECX));
  /* 10fe73b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe73b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10fe73b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe73b9 jmp 0x10fe740d */
  goto L_10fe740d;
L_10fe73bb:;
  /* 10fe73bb mov ecx, dword ptr [0x11005b20] */
  ECX = (r32((uint32_t)(0x11005b20)));
  /* 10fe73c1 mov dword ptr [0x11005b30], ecx */
  w32((uint32_t)(0x11005b30), (ECX));
  /* 10fe73c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe73ca push edx */
  push32((uint32_t)(EDX));
  /* 10fe73cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe73ce push eax */
  push32((uint32_t)(EAX));
  /* 10fe73cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe73d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe73d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fe73d7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe73d8 call 0x10fe76d0 */
  push32(0x10fe73ddu); f_10fe76d0();
  /* 10fe73dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe73e0 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe73e5:;
  /* 10fe73e5 mov eax, dword ptr [0x11005b20] */
  EAX = (r32((uint32_t)(0x11005b20)));
  /* 10fe73ea mov dword ptr [0x11005b30], eax */
  w32((uint32_t)(0x11005b30), (EAX));
  /* 10fe73ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe73f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe73f6 jne 0x10fe7401 */
  if (!C.zf) goto L_10fe7401;
  /* 10fe73f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10fe73ff jmp 0x10fe740d */
  goto L_10fe740d;
L_10fe7401:;
  /* 10fe7401 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7404 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10fe7407 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe740a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe740d:;
  /* 10fe740d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7410 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fe7413 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7416 jge 0x10fe7421 */
  if ((C.sf==C.of)) goto L_10fe7421;
  /* 10fe7418 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe741f jmp 0x10fe744e */
  goto L_10fe744e;
L_10fe7421:;
  /* 10fe7421 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7424 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fe7427 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7428 mov ecx, 7 */
  ECX = (0x7u);
  /* 10fe742d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe742f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe7432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7435 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe7438 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7439 mov ecx, 7 */
  ECX = (0x7u);
  /* 10fe743e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe7440 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7443 jl 0x10fe744e */
  if ((C.sf!=C.of)) goto L_10fe744e;
  /* 10fe7445 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7448 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe744b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe744e:;
  /* 10fe744e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7451 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7452 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7455 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7456 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe745b push edx */
  push32((uint32_t)(EDX));
  /* 10fe745c call 0x10fe76d0 */
  push32(0x10fe7461u); f_10fe76d0();
  /* 10fe7461 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7464 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe7469:;
  /* 10fe7469 cmp dword ptr [0x11005b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7470 je 0x10fe74a0 */
  if (C.zf) goto L_10fe74a0;
  /* 10fe7472 mov dword ptr [0x11005b20], 0 */
  w32((uint32_t)(0x11005b20), (0x0u));
  /* 10fe747c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe747f push eax */
  push32((uint32_t)(EAX));
  /* 10fe7480 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7483 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7484 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7487 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7488 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe748b push eax */
  push32((uint32_t)(EAX));
  /* 10fe748c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe748f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10fe7495 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7496 call 0x10fe7830 */
  push32(0x10fe749bu); f_10fe7830();
  /* 10fe749b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe749e jmp 0x10fe74c2 */
  goto L_10fe74c2;
L_10fe74a0:;
  /* 10fe74a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe74a3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe74a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe74a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe74a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe74ab push edx */
  push32((uint32_t)(EDX));
  /* 10fe74ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe74af push eax */
  push32((uint32_t)(EAX));
  /* 10fe74b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe74b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10fe74b9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe74ba call 0x10fe7830 */
  push32(0x10fe74bfu); f_10fe7830();
  /* 10fe74bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe74c2:;
  /* 10fe74c2 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe74c7:;
  /* 10fe74c7 mov dword ptr [0x11005b20], 0 */
  w32((uint32_t)(0x11005b20), (0x0u));
  /* 10fe74d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe74d4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe74d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe74d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe74d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe74dc push edx */
  push32((uint32_t)(EDX));
  /* 10fe74dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe74e0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe74e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe74e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10fe74ea push edx */
  push32((uint32_t)(EDX));
  /* 10fe74eb call 0x10fe7830 */
  push32(0x10fe74f0u); f_10fe7830();
  /* 10fe74f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe74f3 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe74f8:;
  /* 10fe74f8 mov eax, dword ptr [0x11005b20] */
  EAX = (r32((uint32_t)(0x11005b20)));
  /* 10fe74fd mov dword ptr [0x11005b30], eax */
  w32((uint32_t)(0x11005b30), (EAX));
  /* 10fe7502 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7505 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10fe7508 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7509 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10fe750e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe7510 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe7513 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7516 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7517 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe751a push eax */
  push32((uint32_t)(EAX));
  /* 10fe751b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe751d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7520 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7521 call 0x10fe76d0 */
  push32(0x10fe7526u); f_10fe76d0();
  /* 10fe7526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7529 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe752e:;
  /* 10fe752e mov edx, dword ptr [0x11005b20] */
  EDX = (r32((uint32_t)(0x11005b20)));
  /* 10fe7534 mov dword ptr [0x11005b30], edx */
  w32((uint32_t)(0x11005b30), (EDX));
  /* 10fe753a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe753d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fe7540 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7541 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10fe7546 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe7548 mov ecx, eax */
  ECX = (EAX);
  /* 10fe754a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe754d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe7550 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7553 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fe7556 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7557 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10fe755c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe755e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7560 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe7563 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7566 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7567 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe756a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe756b push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe756d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7570 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7571 call 0x10fe76d0 */
  push32(0x10fe7576u); f_10fe76d0();
  /* 10fe7576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7579 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe757b:;
  /* 10fe757b call 0x10fe8690 */
  push32(0x10fe7580u); f_10fe8690();
  /* 10fe7580 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7583 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7584 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7587 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7588 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe758b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe758d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7591 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10fe7594 mov ecx, dword ptr [eax*4 + 0x11004e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11004e1c)));
  /* 10fe759b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe759c call 0x10fe7680 */
  push32(0x10fe75a1u); f_10fe7680();
  /* 10fe75a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe75a4 jmp 0x10fe75c8 */
  goto L_10fe75c8;
L_10fe75a6:;
  /* 10fe75a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe75a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe75ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10fe75ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe75b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe75b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe75b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe75b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe75bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe75be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe75c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe75c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe75c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fe75c8:;
  /* 10fe75c8 pop esi */
  ESI = (pop32());
  /* 10fe75c9 mov esp, ebp */
  ESP = (EBP);
  /* 10fe75cb pop ebp */
  EBP = (pop32());
  /* 10fe75cc ret  */
  ESPCHK(0x10fe7060u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10fe7680 (72 bytes, 30 insns) */
void f_10fe7680(void) {
  FTRACE(0x10fe7680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7680 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7681 mov ebp, esp */
  EBP = (ESP);
L_10fe7683:;
  /* 10fe7683 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7686 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7689 je 0x10fe76c6 */
  if (C.zf) goto L_10fe76c6;
  /* 10fe768b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe768e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe7691 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe7693 je 0x10fe76c6 */
  if (C.zf) goto L_10fe76c6;
  /* 10fe7695 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7698 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe769a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe769d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe769f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe76a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe76a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe76a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe76a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe76ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe76ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe76b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe76b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fe76b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe76ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe76bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe76bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe76c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe76c4 jmp 0x10fe7683 */
  goto L_10fe7683;
L_10fe76c6:;
  /* 10fe76c6 pop ebp */
  EBP = (pop32());
  /* 10fe76c7 ret  */
  ESPCHK(0x10fe7680u, _esp0);
  ESP += 4; return;
}

/* FUN_100176d0 @ 0x10fe76d0 (173 bytes, 64 insns) */
void f_10fe76d0(void) {
  FTRACE(0x10fe76d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe76d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe76d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe76d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe76d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe76db cmp dword ptr [0x11005b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe76e2 je 0x10fe76fa */
  if (C.zf) goto L_10fe76fa;
  /* 10fe76e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe76e7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe76e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe76eb push ecx */
  push32((uint32_t)(ECX));
  /* 10fe76ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe76ef push edx */
  push32((uint32_t)(EDX));
  /* 10fe76f0 call 0x10fe7780 */
  push32(0x10fe76f5u); f_10fe7780();
  /* 10fe76f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe76f8 jmp 0x10fe7779 */
  goto L_10fe7779;
L_10fe76fa:;
  /* 10fe76fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe76fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7700 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7702 jae 0x10fe7770 */
  if (!C.cf) goto L_10fe7770;
  /* 10fe7704 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7707 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe770a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10fe770d jmp 0x10fe7718 */
  goto L_10fe7718;
L_10fe770f:;
  /* 10fe770f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7712 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7715 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10fe7718:;
  /* 10fe7718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe771b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe771e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe7720 je 0x10fe7754 */
  if (C.zf) goto L_10fe7754;
  /* 10fe7722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe7726 mov ecx, 0xa */
  ECX = (0xau);
  /* 10fe772b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe772d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7730 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7733 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7735 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7738 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10fe773b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe773e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe773f mov ecx, 0xa */
  ECX = (0xau);
  /* 10fe7744 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe7746 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe7749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe774c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe774f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe7752 jmp 0x10fe770f */
  goto L_10fe770f;
L_10fe7754:;
  /* 10fe7754 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7757 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7759 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe775c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe775f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe7761 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7764 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7766 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7769 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe776c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe776e jmp 0x10fe7779 */
  goto L_10fe7779;
L_10fe7770:;
  /* 10fe7770 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7773 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10fe7779:;
  /* 10fe7779 mov esp, ebp */
  ESP = (EBP);
  /* 10fe777b pop ebp */
  EBP = (pop32());
  /* 10fe777c ret  */
  ESPCHK(0x10fe76d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10fe7780 (172 bytes, 65 insns) */
void f_10fe7780(void) {
  FTRACE(0x10fe7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7780 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7781 mov ebp, esp */
  EBP = (ESP);
  /* 10fe7783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7789 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe778b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe778e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7791 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7794 jbe 0x10fe77db */
  if ((C.cf||C.zf)) goto L_10fe77db;
L_10fe7796:;
  /* 10fe7796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7799 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe779a mov ecx, 0xa */
  ECX = (0xau);
  /* 10fe779f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe77a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe77a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe77a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fe77a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe77ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe77af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe77b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe77b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe77b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe77ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe77bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe77bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe77c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe77c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10fe77c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe77ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe77cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe77d1 jle 0x10fe77db */
  if ((C.zf||C.sf!=C.of)) goto L_10fe77db;
  /* 10fe77d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe77d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe77d9 ja 0x10fe7796 */
  if ((!C.cf&&!C.zf)) goto L_10fe7796;
L_10fe77db:;
  /* 10fe77db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe77de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe77e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe77e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe77e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe77e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fe77eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe77ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe77f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe77f4:;
  /* 10fe77f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe77f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe77f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10fe77fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe77ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe7802 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe7804 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe7806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7809 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe780c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe780f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe7812 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe7815 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10fe7817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe781a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe781d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe7820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe7823 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7826 jb 0x10fe77f4 */
  if (C.cf) goto L_10fe77f4;
  /* 10fe7828 mov esp, ebp */
  ESP = (EBP);
  /* 10fe782a pop ebp */
  EBP = (pop32());
  /* 10fe782b ret  */
  ESPCHK(0x10fe7780u, _esp0);
  ESP += 4; return;
}

/* FUN_10017830 @ 0x10fe7830 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10fe7830(void) {
  FTRACE(0x10fe7830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7830 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7831 mov ebp, esp */
  EBP = (ESP);
  /* 10fe7833 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10fe7836:;
  /* 10fe7836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7839 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe783c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe783e je 0x10fe7cac */
  if (C.zf) goto L_10fe7cac;
  /* 10fe7844 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7847 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe784a je 0x10fe7cac */
  if (C.zf) goto L_10fe7cac;
  /* 10fe7850 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe7854 mov dword ptr [0x11005b30], 0 */
  w32((uint32_t)(0x11005b30), (0x0u));
  /* 10fe785e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe7865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7868 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe786b jmp 0x10fe7876 */
  goto L_10fe7876;
L_10fe786d:;
  /* 10fe786d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10fe7876:;
  /* 10fe7876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7879 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe787c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe787f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe7882 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7888 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe788b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe788d jne 0x10fe7891 */
  if (!C.zf) goto L_10fe7891;
  /* 10fe788f jmp 0x10fe786d */
  goto L_10fe786d;
L_10fe7891:;
  /* 10fe7891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7894 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7897 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe789a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe789d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe78a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe78a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe78a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe78a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe78ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe78b0 ja 0x10fe7c00 */
  if ((!C.cf&&!C.zf)) goto L_10fe7c00;
  /* 10fe78b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe78b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe78bb mov al, byte ptr [ecx + 0x10fe7cdc] */
  AL = (r8((uint32_t)(ECX + 0x10fe7cdc)));
  /* 10fe78c1 jmp dword ptr [eax*4 + 0x10fe7cb0] */
  switch (EAX) {
    case 0: goto L_10fe7b1f;
    case 1: goto L_10fe7a03;
    case 2: goto L_10fe798e;
    case 3: goto L_10fe78c8;
    case 4: goto L_10fe7906;
    case 5: goto L_10fe7967;
    case 6: goto L_10fe79b5;
    case 7: goto L_10fe79dc;
    case 8: goto L_10fe7a4a;
    case 9: goto L_10fe7944;
    case 10: goto L_10fe7c00;
    default: x86_unimpl("switch@0x10fe78c1 out of table"); return;
  }
L_10fe78c8:;
  /* 10fe78c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe78cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fe78ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe78d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe78d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fe78d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe78db ja 0x10fe7901 */
  if ((!C.cf&&!C.zf)) goto L_10fe7901;
  /* 10fe78dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe78e0 jmp dword ptr [ecx*4 + 0x10fe7d2f] */
  switch (ECX) {
    case 0: goto L_10fe78e7;
    case 1: goto L_10fe78f1;
    case 2: goto L_10fe78f7;
    case 3: goto L_10fe78fd;
    case 4: goto L_10fe7925;
    case 5: goto L_10fe792f;
    case 6: goto L_10fe7935;
    case 7: goto L_10fe793b;
    default: x86_unimpl("switch@0x10fe78e0 out of table"); return;
  }
L_10fe78e7:;
  /* 10fe78e7 mov dword ptr [0x11005b30], 1 */
  w32((uint32_t)(0x11005b30), (0x1u));
L_10fe78f1:;
  /* 10fe78f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10fe78f5 jmp 0x10fe7901 */
  goto L_10fe7901;
L_10fe78f7:;
  /* 10fe78f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10fe78fb jmp 0x10fe7901 */
  goto L_10fe7901;
L_10fe78fd:;
  /* 10fe78fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10fe7901:;
  /* 10fe7901 jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe7906:;
  /* 10fe7906 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7909 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10fe790c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe790f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7912 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fe7915 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7919 ja 0x10fe793f */
  if ((!C.cf&&!C.zf)) goto L_10fe793f;
  /* 10fe791b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe791e jmp dword ptr [ecx*4 + 0x10fe7d3f] */
  switch (ECX) {
    case 0: goto L_10fe7925;
    case 1: goto L_10fe792f;
    case 2: goto L_10fe7935;
    case 3: goto L_10fe793b;
    default: x86_unimpl("switch@0x10fe791e out of table"); return;
  }
L_10fe7925:;
  /* 10fe7925 mov dword ptr [0x11005b30], 1 */
  w32((uint32_t)(0x11005b30), (0x1u));
L_10fe792f:;
  /* 10fe792f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10fe7933 jmp 0x10fe793f */
  goto L_10fe793f;
L_10fe7935:;
  /* 10fe7935 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10fe7939 jmp 0x10fe793f */
  goto L_10fe793f;
L_10fe793b:;
  /* 10fe793b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10fe793f:;
  /* 10fe793f jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe7944:;
  /* 10fe7944 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7947 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fe794a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe794e je 0x10fe7958 */
  if (C.zf) goto L_10fe7958;
  /* 10fe7950 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7954 je 0x10fe795e */
  if (C.zf) goto L_10fe795e;
  /* 10fe7956 jmp 0x10fe7962 */
  goto L_10fe7962;
L_10fe7958:;
  /* 10fe7958 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10fe795c jmp 0x10fe7962 */
  goto L_10fe7962;
L_10fe795e:;
  /* 10fe795e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10fe7962:;
  /* 10fe7962 jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe7967:;
  /* 10fe7967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe796a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe796d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7971 je 0x10fe797b */
  if (C.zf) goto L_10fe797b;
  /* 10fe7973 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7977 je 0x10fe7985 */
  if (C.zf) goto L_10fe7985;
  /* 10fe7979 jmp 0x10fe7989 */
  goto L_10fe7989;
L_10fe797b:;
  /* 10fe797b mov dword ptr [0x11005b30], 1 */
  w32((uint32_t)(0x11005b30), (0x1u));
L_10fe7985:;
  /* 10fe7985 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10fe7989:;
  /* 10fe7989 jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe798e:;
  /* 10fe798e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7991 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10fe7994 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7998 je 0x10fe79a2 */
  if (C.zf) goto L_10fe79a2;
  /* 10fe799a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe799e je 0x10fe79ac */
  if (C.zf) goto L_10fe79ac;
  /* 10fe79a0 jmp 0x10fe79b0 */
  goto L_10fe79b0;
L_10fe79a2:;
  /* 10fe79a2 mov dword ptr [0x11005b30], 1 */
  w32((uint32_t)(0x11005b30), (0x1u));
L_10fe79ac:;
  /* 10fe79ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10fe79b0:;
  /* 10fe79b0 jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe79b5:;
  /* 10fe79b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe79b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10fe79bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe79bf je 0x10fe79c9 */
  if (C.zf) goto L_10fe79c9;
  /* 10fe79c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe79c5 je 0x10fe79d3 */
  if (C.zf) goto L_10fe79d3;
  /* 10fe79c7 jmp 0x10fe79d7 */
  goto L_10fe79d7;
L_10fe79c9:;
  /* 10fe79c9 mov dword ptr [0x11005b30], 1 */
  w32((uint32_t)(0x11005b30), (0x1u));
L_10fe79d3:;
  /* 10fe79d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10fe79d7:;
  /* 10fe79d7 jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe79dc:;
  /* 10fe79dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe79df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10fe79e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe79e6 je 0x10fe79f0 */
  if (C.zf) goto L_10fe79f0;
  /* 10fe79e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe79ec je 0x10fe79fa */
  if (C.zf) goto L_10fe79fa;
  /* 10fe79ee jmp 0x10fe79fe */
  goto L_10fe79fe;
L_10fe79f0:;
  /* 10fe79f0 mov dword ptr [0x11005b30], 1 */
  w32((uint32_t)(0x11005b30), (0x1u));
L_10fe79fa:;
  /* 10fe79fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10fe79fe:;
  /* 10fe79fe jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe7a03:;
  /* 10fe7a03 push 0x11001eac */
  push32((uint32_t)(0x11001eacu));
  /* 10fe7a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7a0b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7a0c call 0x10fe8260 */
  push32(0x10fe7a11u); f_10fe8260();
  /* 10fe7a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe7a16 jne 0x10fe7a23 */
  if (!C.zf) goto L_10fe7a23;
  /* 10fe7a18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7a1b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7a1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe7a21 jmp 0x10fe7a41 */
  goto L_10fe7a41;
L_10fe7a23:;
  /* 10fe7a23 push 0x11001ea8 */
  push32((uint32_t)(0x11001ea8u));
  /* 10fe7a28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7a2b push eax */
  push32((uint32_t)(EAX));
  /* 10fe7a2c call 0x10fe8260 */
  push32(0x10fe7a31u); f_10fe8260();
  /* 10fe7a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe7a36 jne 0x10fe7a41 */
  if (!C.zf) goto L_10fe7a41;
  /* 10fe7a38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7a3b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7a3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe7a41:;
  /* 10fe7a41 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10fe7a45 jmp 0x10fe7c00 */
  goto L_10fe7c00;
L_10fe7a4a:;
  /* 10fe7a4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7a4d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7a51 jg 0x10fe7a61 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe7a61;
  /* 10fe7a53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7a56 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10fe7a5c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fe7a5f jmp 0x10fe7a6d */
  goto L_10fe7a6d;
L_10fe7a61:;
  /* 10fe7a61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7a64 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10fe7a6a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fe7a6d:;
  /* 10fe7a6d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7a71 jle 0x10fe7b14 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe7b14;
  /* 10fe7a77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7a7a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7a7d jbe 0x10fe7b14 */
  if ((C.cf||C.zf)) goto L_10fe7b14;
  /* 10fe7a83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe7a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7a88 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe7a8a mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe7a90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7a92 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe7a96 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7a9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe7a9e je 0x10fe7ad7 */
  if (C.zf) goto L_10fe7ad7;
  /* 10fe7aa0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7aa3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7aa6 jbe 0x10fe7ad7 */
  if ((C.cf||C.zf)) goto L_10fe7ad7;
  /* 10fe7aa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7aab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe7aad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe7ab0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe7ab2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fe7ab4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7ab7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7abc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7abf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe7ac1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe7ac4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7ac7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fe7aca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7acd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7acf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7ad2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7ad5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fe7ad7:;
  /* 10fe7ad7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7ada mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe7adf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe7ae1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe7ae3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7ae6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe7ae8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7aeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7aee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe7af0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe7af3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7af6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fe7af9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7afc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7afe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7b01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7b04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe7b06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7b09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7b0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fe7b0f jmp 0x10fe7a6d */
  goto L_10fe7a6d;
L_10fe7b14:;
  /* 10fe7b14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7b17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe7b1a jmp 0x10fe7836 */
  goto L_10fe7836;
L_10fe7b1f:;
  /* 10fe7b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7b22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe7b25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe7b27 je 0x10fe7bf2 */
  if (C.zf) goto L_10fe7bf2;
  /* 10fe7b2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7b30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7b33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10fe7b36:;
  /* 10fe7b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7b39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe7b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe7b3e je 0x10fe7bf0 */
  if (C.zf) goto L_10fe7bf0;
  /* 10fe7b44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7b47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7b4a je 0x10fe7bf0 */
  if (C.zf) goto L_10fe7bf0;
  /* 10fe7b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7b53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe7b56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7b59 jne 0x10fe7b69 */
  if (!C.zf) goto L_10fe7b69;
  /* 10fe7b5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7b5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7b61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fe7b64 jmp 0x10fe7bf0 */
  goto L_10fe7bf0;
L_10fe7b69:;
  /* 10fe7b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7b6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe7b6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe7b70 mov edx, dword ptr [0x11003c98] */
  EDX = (r32((uint32_t)(0x11003c98)));
  /* 10fe7b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7b78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10fe7b7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe7b83 je 0x10fe7bbc */
  if (C.zf) goto L_10fe7bbc;
  /* 10fe7b85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7b88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7b8b jbe 0x10fe7bbc */
  if ((C.cf||C.zf)) goto L_10fe7bbc;
  /* 10fe7b8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7b90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7b95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe7b97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fe7b99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7b9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7ba1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7ba4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe7ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7ba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7bac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe7baf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7bb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe7bb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7bb7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7bba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fe7bbc:;
  /* 10fe7bbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7bbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe7bc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7bc4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe7bc6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fe7bc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7bcb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7bd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7bd3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe7bd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7bd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7bdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fe7bde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7be1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7be3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7be6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7be9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe7beb jmp 0x10fe7b36 */
  goto L_10fe7b36;
L_10fe7bf0:;
  /* 10fe7bf0 jmp 0x10fe7bfb */
  goto L_10fe7bfb;
L_10fe7bf2:;
  /* 10fe7bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7bf5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7bf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fe7bfb:;
  /* 10fe7bfb jmp 0x10fe7836 */
  goto L_10fe7836;
L_10fe7c00:;
  /* 10fe7c00 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe7c04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe7c06 je 0x10fe7c2c */
  if (C.zf) goto L_10fe7c2c;
  /* 10fe7c08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe7c0b push edx */
  push32((uint32_t)(EDX));
  /* 10fe7c0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7c0f push eax */
  push32((uint32_t)(EAX));
  /* 10fe7c10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7c14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7c17 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7c18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10fe7c1b push eax */
  push32((uint32_t)(EAX));
  /* 10fe7c1c call 0x10fe7060 */
  push32(0x10fe7c21u); f_10fe7060();
  /* 10fe7c21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7c24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe7c27 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fe7c2a jmp 0x10fe7ca7 */
  goto L_10fe7ca7;
L_10fe7c2c:;
  /* 10fe7c2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7c31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe7c33 mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe7c39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7c3b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe7c3f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7c45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe7c47 je 0x10fe7c78 */
  if (C.zf) goto L_10fe7c78;
  /* 10fe7c49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7c51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe7c53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe7c55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe7c5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7c5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe7c62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7c68 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fe7c6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7c6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7c70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7c73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7c76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10fe7c78:;
  /* 10fe7c78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe7c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7c80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe7c82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fe7c84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7c89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7c8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7c8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe7c91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe7c94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7c97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe7c9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7c9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe7c9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7ca2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7ca5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fe7ca7:;
  /* 10fe7ca7 jmp 0x10fe7836 */
  goto L_10fe7836;
L_10fe7cac:;
  /* 10fe7cac mov esp, ebp */
  ESP = (EBP);
  /* 10fe7cae pop ebp */
  EBP = (pop32());
  /* 10fe7caf ret  */
  ESPCHK(0x10fe7830u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d50 @ 0x10fe7d50 (650 bytes, 178 insns) */
void f_10fe7d50(void) {
  FTRACE(0x10fe7d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7d51 mov ebp, esp */
  EBP = (ESP);
  /* 10fe7d53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe7d59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7d5d jne 0x10fe7eb9 */
  if (!C.zf) goto L_10fe7eb9;
  /* 10fe7d63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7d66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10fe7d6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10fe7d72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe7d75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe7d7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10fe7d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe7d88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10fe7d8e push edx */
  push32((uint32_t)(EDX));
  /* 10fe7d8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7d92 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7d93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7d96 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7d97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7d9a push edx */
  push32((uint32_t)(EDX));
  /* 10fe7d9b call 0x10fe9170 */
  push32(0x10fe7da0u); f_10fe9170();
  /* 10fe7da0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7da3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe7da6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7daa jne 0x10fe7e3f */
  if (!C.zf) goto L_10fe7e3f;
  /* 10fe7db0 call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe7db6u);
  /* 10fe7db6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7db9 je 0x10fe7dc0 */
  if (C.zf) goto L_10fe7dc0;
  /* 10fe7dbb jmp 0x10fe7e9d */
  goto L_10fe7e9d;
L_10fe7dc0:;
  /* 10fe7dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe7dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe7dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe7dc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7dca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7dcd push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7dce call 0x10fe9170 */
  push32(0x10fe7dd3u); f_10fe9170();
  /* 10fe7dd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7dd6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10fe7ddc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7de3 jne 0x10fe7dea */
  if (!C.zf) goto L_10fe7dea;
  /* 10fe7de5 jmp 0x10fe7e9d */
  goto L_10fe7e9d;
L_10fe7dea:;
  /* 10fe7dea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10fe7dec push 0x11001eb4 */
  push32((uint32_t)(0x11001eb4u));
  /* 10fe7df1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7df3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10fe7df9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7dfa call 0x10fd9b90 */
  push32(0x10fe7dffu); f_10fd9b90();
  /* 10fe7dff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7e02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe7e05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7e09 jne 0x10fe7e10 */
  if (!C.zf) goto L_10fe7e10;
  /* 10fe7e0b jmp 0x10fe7e9d */
  goto L_10fe7e9d;
L_10fe7e10:;
  /* 10fe7e10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe7e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe7e19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10fe7e1f push eax */
  push32((uint32_t)(EAX));
  /* 10fe7e20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7e23 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7e24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7e27 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7e28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7e2b push eax */
  push32((uint32_t)(EAX));
  /* 10fe7e2c call 0x10fe9170 */
  push32(0x10fe7e31u); f_10fe9170();
  /* 10fe7e31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7e34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe7e37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7e3b jne 0x10fe7e3f */
  if (!C.zf) goto L_10fe7e3f;
  /* 10fe7e3d jmp 0x10fe7e9d */
  goto L_10fe7e9d;
L_10fe7e3f:;
  /* 10fe7e3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10fe7e41 push 0x11001eb4 */
  push32((uint32_t)(0x11001eb4u));
  /* 10fe7e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7e48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe7e4b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7e4c call 0x10fd9b90 */
  push32(0x10fe7e51u); f_10fd9b90();
  /* 10fe7e51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7e54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10fe7e5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fe7e5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10fe7e62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7e65 jne 0x10fe7e69 */
  if (!C.zf) goto L_10fe7e69;
  /* 10fe7e67 jmp 0x10fe7e9d */
  goto L_10fe7e9d;
L_10fe7e69:;
  /* 10fe7e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe7e6c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7e6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7e70 push edx */
  push32((uint32_t)(EDX));
  /* 10fe7e71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10fe7e77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe7e79 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7e7a call 0x10fdd3b0 */
  push32(0x10fe7e7fu); f_10fdd3b0();
  /* 10fe7e7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7e82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7e86 je 0x10fe7e96 */
  if (C.zf) goto L_10fe7e96;
  /* 10fe7e88 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7e8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7e8d push edx */
  push32((uint32_t)(EDX));
  /* 10fe7e8e call 0x10fda620 */
  push32(0x10fe7e93u); f_10fda620();
  /* 10fe7e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe7e96:;
  /* 10fe7e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7e98 jmp 0x10fe7fd6 */
  goto L_10fe7fd6;
L_10fe7e9d:;
  /* 10fe7e9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7ea1 je 0x10fe7eb1 */
  if (C.zf) goto L_10fe7eb1;
  /* 10fe7ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe7ea5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe7ea8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7ea9 call 0x10fda620 */
  push32(0x10fe7eaeu); f_10fda620();
  /* 10fe7eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe7eb1:;
  /* 10fe7eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7eb4 jmp 0x10fe7fd6 */
  goto L_10fe7fd6;
L_10fe7eb9:;
  /* 10fe7eb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7ebd jne 0x10fe7fd3 */
  if (!C.zf) goto L_10fe7fd3;
  /* 10fe7ec3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10fe7ecd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe7ed0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10fe7ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe7ed8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fe7ede push edx */
  push32((uint32_t)(EDX));
  /* 10fe7edf push 0x11005a48 */
  push32((uint32_t)(0x11005a48u));
  /* 10fe7ee4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe7ee7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe7ee8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe7eeb push ecx */
  push32((uint32_t)(ECX));
  /* 10fe7eec call 0x10fe8fd0 */
  push32(0x10fe7ef1u); f_10fe8fd0();
  /* 10fe7ef1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe7ef6 jne 0x10fe7f00 */
  if (!C.zf) goto L_10fe7f00;
  /* 10fe7ef8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7efb jmp 0x10fe7fd6 */
  goto L_10fe7fd6;
L_10fe7f00:;
  /* 10fe7f00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe7f06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10fe7f09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10fe7f13 jmp 0x10fe7f24 */
  goto L_10fe7f24;
L_10fe7f15:;
  /* 10fe7f15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe7f1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7f1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10fe7f24:;
  /* 10fe7f24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7f2b jge 0x10fe7fcf */
  if ((C.sf==C.of)) goto L_10fe7fcf;
  /* 10fe7f31 cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7f38 jle 0x10fe7f6b */
  if ((C.zf||C.sf!=C.of)) goto L_10fe7f6b;
  /* 10fe7f3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe7f3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe7f42 mov dl, byte ptr [ecx*2 + 0x11005a48] */
  DL = (r8((uint32_t)(ECX*2 + 0x11005a48)));
  /* 10fe7f49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10fe7f4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10fe7f55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7f5a push eax */
  push32((uint32_t)(EAX));
  /* 10fe7f5b call 0x10fdfba0 */
  push32(0x10fe7f60u); f_10fdfba0();
  /* 10fe7f60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe7f63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10fe7f69 jmp 0x10fe7f9e */
  goto L_10fe7f9e;
L_10fe7f6b:;
  /* 10fe7f6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe7f71 mov dl, byte ptr [ecx*2 + 0x11005a48] */
  DL = (r8((uint32_t)(ECX*2 + 0x11005a48)));
  /* 10fe7f78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10fe7f7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10fe7f84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7f89 mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe7f8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7f91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe7f95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe7f98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10fe7f9e:;
  /* 10fe7f9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe7fa5 je 0x10fe7fc8 */
  if (C.zf) goto L_10fe7fc8;
  /* 10fe7fa7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe7fad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe7fb0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe7fb3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10fe7fba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10fe7fbe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe7fc4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe7fc6 jmp 0x10fe7fca */
  goto L_10fe7fca;
L_10fe7fc8:;
  /* 10fe7fc8 jmp 0x10fe7fcf */
  goto L_10fe7fcf;
L_10fe7fca:;
  /* 10fe7fca jmp 0x10fe7f15 */
  goto L_10fe7f15;
L_10fe7fcf:;
  /* 10fe7fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe7fd1 jmp 0x10fe7fd6 */
  goto L_10fe7fd6;
L_10fe7fd3:;
  /* 10fe7fd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fe7fd6:;
  /* 10fe7fd6 mov esp, ebp */
  ESP = (EBP);
  /* 10fe7fd8 pop ebp */
  EBP = (pop32());
  /* 10fe7fd9 ret  */
  ESPCHK(0x10fe7d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fe0 @ 0x10fe7fe0 (10 bytes, 5 insns) */
void f_10fe7fe0(void) {
  FTRACE(0x10fe7fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe7fe3 mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe7fe8 pop ebp */
  EBP = (pop32());
  /* 10fe7fe9 ret  */
  ESPCHK(0x10fe7fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ff0 @ 0x10fe7ff0 (575 bytes, 196 insns) */
void f_10fe7ff0(void) {
  FTRACE(0x10fe7ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe7ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe7ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe7ff3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe7ff5 push 0x11001ec0 */
  push32((uint32_t)(0x11001ec0u));
  /* 10fe7ffa push 0x10fe2c98 */
  push32((uint32_t)(0x10fe2c98u));
  /* 10fe7fff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fe8005 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8006 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fe800d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8010 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe8011 push esi */
  push32((uint32_t)(ESI));
  /* 10fe8012 push edi */
  push32((uint32_t)(EDI));
  /* 10fe8013 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe8016 cmp dword ptr [0x11005a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe801d jne 0x10fe806e */
  if (!C.zf) goto L_10fe806e;
  /* 10fe801f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10fe8022 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8023 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8025 push 0x110015f4 */
  push32((uint32_t)(0x110015f4u));
  /* 10fe802a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe802c call dword ptr [0x1100831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100831c))), 0x10fe8032u);
  /* 10fe8032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe8034 je 0x10fe8042 */
  if (C.zf) goto L_10fe8042;
  /* 10fe8036 mov dword ptr [0x11005a54], 1 */
  w32((uint32_t)(0x11005a54), (0x1u));
  /* 10fe8040 jmp 0x10fe806e */
  goto L_10fe806e;
L_10fe8042:;
  /* 10fe8042 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10fe8045 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8046 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8048 push 0x110015f0 */
  push32((uint32_t)(0x110015f0u));
  /* 10fe804d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe804f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8051 call dword ptr [0x11008320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008320))), 0x10fe8057u);
  /* 10fe8057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe8059 je 0x10fe8067 */
  if (C.zf) goto L_10fe8067;
  /* 10fe805b mov dword ptr [0x11005a54], 2 */
  w32((uint32_t)(0x11005a54), (0x2u));
  /* 10fe8065 jmp 0x10fe806e */
  goto L_10fe806e;
L_10fe8067:;
  /* 10fe8067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8069 jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe806e:;
  /* 10fe806e cmp dword ptr [0x11005a54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11005a54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8075 jne 0x10fe8092 */
  if (!C.zf) goto L_10fe8092;
  /* 10fe8077 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe807a push edx */
  push32((uint32_t)(EDX));
  /* 10fe807b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe807e push eax */
  push32((uint32_t)(EAX));
  /* 10fe807f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe8082 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8086 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8087 call dword ptr [0x1100831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100831c))), 0x10fe808du);
  /* 10fe808d jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe8092:;
  /* 10fe8092 cmp dword ptr [0x11005a54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11005a54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8099 jne 0x10fe8247 */
  if (!C.zf) goto L_10fe8247;
  /* 10fe809f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe80a3 jne 0x10fe80ad */
  if (!C.zf) goto L_10fe80ad;
  /* 10fe80a5 mov eax, dword ptr [0x110059c8] */
  EAX = (r32((uint32_t)(0x110059c8)));
  /* 10fe80aa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10fe80ad:;
  /* 10fe80ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe80af push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe80b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe80b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe80b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe80b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe80b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe80bc push edx */
  push32((uint32_t)(EDX));
  /* 10fe80bd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe80c2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe80c5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe80c6 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe80ccu);
  /* 10fe80cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fe80cf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe80d3 jne 0x10fe80dc */
  if (!C.zf) goto L_10fe80dc;
  /* 10fe80d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe80d7 jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe80dc:;
  /* 10fe80dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe80e3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe80e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe80e9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe80eb call 0x10fdcd30 */
  push32(0x10fe80f0u); f_10fdcd30();
  /* 10fe80f0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10fe80f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe80f6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe80f9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fe80fc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe80ff push edx */
  push32((uint32_t)(EDX));
  /* 10fe8100 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8102 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe8105 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8106 call 0x10fdd900 */
  push32(0x10fe810bu); f_10fdd900();
  /* 10fe810b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe810e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe8115 jmp 0x10fe812e */
  goto L_10fe812e;
  /* 10fe8117 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe811c ret  */
  ESPCHK(0x10fe7ff0u, _esp0);
  ESP += 4; return;
  /* 10fe811d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe8120 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10fe8127 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe812e:;
  /* 10fe812e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8132 jne 0x10fe813b */
  if (!C.zf) goto L_10fe813b;
  /* 10fe8134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8136 jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe813b:;
  /* 10fe813b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe813d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe813f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe8142 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8143 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe8146 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8147 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe814a push eax */
  push32((uint32_t)(EAX));
  /* 10fe814b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe814e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe814f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe8154 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe8157 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8158 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe815eu);
  /* 10fe815e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe8160 jne 0x10fe8169 */
  if (!C.zf) goto L_10fe8169;
  /* 10fe8162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8164 jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe8169:;
  /* 10fe8169 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe8170 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe8173 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10fe8177 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe817a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe817c call 0x10fdcd30 */
  push32(0x10fe8181u); f_10fdcd30();
  /* 10fe8181 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10fe8184 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe8187 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fe818a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fe818d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe8194 jmp 0x10fe81ad */
  goto L_10fe81ad;
  /* 10fe8196 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe819b ret  */
  ESPCHK(0x10fe7ff0u, _esp0);
  ESP += 4; return;
  /* 10fe819c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe819f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fe81a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe81ad:;
  /* 10fe81ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe81b1 jne 0x10fe81ba */
  if (!C.zf) goto L_10fe81ba;
  /* 10fe81b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe81b5 jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe81ba:;
  /* 10fe81ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe81be jne 0x10fe81c9 */
  if (!C.zf) goto L_10fe81c9;
  /* 10fe81c0 mov edx, dword ptr [0x110059b8] */
  EDX = (r32((uint32_t)(0x110059b8)));
  /* 10fe81c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10fe81c9:;
  /* 10fe81c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe81cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe81cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10fe81d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe81d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe81db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10fe81e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe81e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe81e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe81e9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe81ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe81ed push eax */
  push32((uint32_t)(EAX));
  /* 10fe81ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe81f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe81f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe81f5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe81f6 call dword ptr [0x11008320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008320))), 0x10fe81fcu);
  /* 10fe81fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe81ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8202 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe8205 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8207 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10fe820c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8212 je 0x10fe8228 */
  if (C.zf) goto L_10fe8228;
  /* 10fe8214 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8217 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe821a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe821c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe8220 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8226 je 0x10fe822c */
  if (C.zf) goto L_10fe822c;
L_10fe8228:;
  /* 10fe8228 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe822a jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe822c:;
  /* 10fe822c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe822f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe8231 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8232 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe8235 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8239 push edx */
  push32((uint32_t)(EDX));
  /* 10fe823a call 0x10fe1a80 */
  push32(0x10fe823fu); f_10fe1a80();
  /* 10fe823f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8242 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe8245 jmp 0x10fe8249 */
  goto L_10fe8249;
L_10fe8247:;
  /* 10fe8247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe8249:;
  /* 10fe8249 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10fe824c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe824f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fe8256 pop edi */
  EDI = (pop32());
  /* 10fe8257 pop esi */
  ESI = (pop32());
  /* 10fe8258 pop ebx */
  EBX = (pop32());
  /* 10fe8259 mov esp, ebp */
  ESP = (EBP);
  /* 10fe825b pop ebp */
  EBP = (pop32());
  /* 10fe825c ret  */
  ESPCHK(0x10fe7ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018260 @ 0x10fe8260 (208 bytes, 85 insns) */
void f_10fe8260(void) {
  FTRACE(0x10fe8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8260 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8261 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8263 push edi */
  push32((uint32_t)(EDI));
  /* 10fe8264 push esi */
  push32((uint32_t)(ESI));
  /* 10fe8265 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe8266 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe8269 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe826c lea eax, [0x110059b0] */
  EAX = ((uint32_t)(0x110059b0));
  /* 10fe8272 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8276 jne 0x10fe82b3 */
  if (!C.zf) goto L_10fe82b3;
  /* 10fe8278 mov al, 0xff */
  AL = (0xffu);
  /* 10fe827a mov edi, edi */
  EDI = (EDI);
L_10fe827c:;
  /* 10fe827c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe827e je 0x10fe82ae */
  if (C.zf) goto L_10fe82ae;
  /* 10fe8280 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe8282 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe8283 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10fe8285 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fe8286 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe8288 je 0x10fe827c */
  if (C.zf) goto L_10fe827c;
  /* 10fe828a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fe828c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe828e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fe8290 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fe8293 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe8295 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe8297 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10fe8299 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fe829b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe829d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fe829f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fe82a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe82a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe82a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe82a8 je 0x10fe827c */
  if (C.zf) goto L_10fe827c;
  /* 10fe82aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fe82ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10fe82ae:;
  /* 10fe82ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10fe82b1 jmp 0x10fe832b */
  goto L_10fe832b;
L_10fe82b3:;
  /* 10fe82b3 lock inc dword ptr [0x11005b44] */
  x86_unimpl("lock inc @ 0x10fe82b3");
  /* 10fe82ba cmp dword ptr [0x11005b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe82c1 jg 0x10fe82c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe82c7;
  /* 10fe82c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe82c5 jmp 0x10fe82dc */
  goto L_10fe82dc;
L_10fe82c7:;
  /* 10fe82c7 lock dec dword ptr [0x11005b44] */
  x86_unimpl("lock dec @ 0x10fe82c7");
  /* 10fe82ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe82d0 call 0x10fdd590 */
  push32(0x10fe82d5u); f_10fdd590();
  /* 10fe82d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10fe82dc:;
  /* 10fe82dc mov eax, 0xff */
  EAX = (0xffu);
  /* 10fe82e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10fe82e3 nop  */
  /* nop */
L_10fe82e4:;
  /* 10fe82e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe82e6 je 0x10fe830f */
  if (C.zf) goto L_10fe830f;
  /* 10fe82e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe82ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe82eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10fe82ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fe82ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe82f0 je 0x10fe82e4 */
  if (C.zf) goto L_10fe82e4;
  /* 10fe82f2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe82f3 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe82f4 call 0x10fe93d0 */
  push32(0x10fe82f9u); f_10fe93d0();
  /* 10fe82f9 mov ebx, eax */
  EBX = (EAX);
  /* 10fe82fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe82fe call 0x10fe93d0 */
  push32(0x10fe8303u); f_10fe93d0();
  /* 10fe8303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8306 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe8308 je 0x10fe82e4 */
  if (C.zf) goto L_10fe82e4;
  /* 10fe830a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe830c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10fe830f:;
  /* 10fe830f mov ebx, eax */
  EBX = (EAX);
  /* 10fe8311 pop eax */
  EAX = (pop32());
  /* 10fe8312 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8314 jne 0x10fe831f */
  if (!C.zf) goto L_10fe831f;
  /* 10fe8316 lock dec dword ptr [0x11005b44] */
  x86_unimpl("lock dec @ 0x10fe8316");
  /* 10fe831d jmp 0x10fe8329 */
  goto L_10fe8329;
L_10fe831f:;
  /* 10fe831f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe8321 call 0x10fdd630 */
  push32(0x10fe8326u); f_10fdd630();
  /* 10fe8326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe8329:;
  /* 10fe8329 mov eax, ebx */
  EAX = (EBX);
L_10fe832b:;
  /* 10fe832b pop ebx */
  EBX = (pop32());
  /* 10fe832c pop esi */
  ESI = (pop32());
  /* 10fe832d pop edi */
  EDI = (pop32());
  /* 10fe832e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe832f ret  */
  ESPCHK(0x10fe8260u, _esp0);
  ESP += 4; return;
}

/* FUN_10018330 @ 0x10fe8330 (257 bytes, 103 insns) */
void f_10fe8330(void) {
  FTRACE(0x10fe8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8330 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8331 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8333 push edi */
  push32((uint32_t)(EDI));
  /* 10fe8334 push esi */
  push32((uint32_t)(ESI));
  /* 10fe8335 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe8336 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8339 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe833b je 0x10fe842a */
  if (C.zf) goto L_10fe842a;
  /* 10fe8341 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8344 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe8347 lea eax, [0x110059b0] */
  EAX = ((uint32_t)(0x110059b0));
  /* 10fe834d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8351 jne 0x10fe83a1 */
  if (!C.zf) goto L_10fe83a1;
  /* 10fe8353 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10fe8355 mov bl, 0x5a */
  BL = (0x5au);
  /* 10fe8357 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10fe8359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe835c:;
  /* 10fe835c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10fe835e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fe8360 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10fe8362 je 0x10fe8385 */
  if (C.zf) goto L_10fe8385;
  /* 10fe8364 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe8366 je 0x10fe8385 */
  if (C.zf) goto L_10fe8385;
  /* 10fe8368 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe8369 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fe836a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe836c jb 0x10fe8374 */
  if (C.cf) goto L_10fe8374;
  /* 10fe836e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe8370 ja 0x10fe8374 */
  if ((!C.cf&&!C.zf)) goto L_10fe8374;
  /* 10fe8372 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10fe8374:;
  /* 10fe8374 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe8376 jb 0x10fe837e */
  if (C.cf) goto L_10fe837e;
  /* 10fe8378 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe837a ja 0x10fe837e */
  if ((!C.cf&&!C.zf)) goto L_10fe837e;
  /* 10fe837c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10fe837e:;
  /* 10fe837e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe8380 jne 0x10fe838f */
  if (!C.zf) goto L_10fe838f;
  /* 10fe8382 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10fe8383 jne 0x10fe835c */
  if (!C.zf) goto L_10fe835c;
L_10fe8385:;
  /* 10fe8385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8387 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe8389 je 0x10fe842a */
  if (C.zf) goto L_10fe842a;
L_10fe838f:;
  /* 10fe838f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10fe8394 jb 0x10fe842a */
  if (C.cf) goto L_10fe842a;
  /* 10fe839a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe839c jmp 0x10fe842a */
  goto L_10fe842a;
L_10fe83a1:;
  /* 10fe83a1 lock inc dword ptr [0x11005b44] */
  x86_unimpl("lock inc @ 0x10fe83a1");
  /* 10fe83a8 cmp dword ptr [0x11005b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe83af jg 0x10fe83b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe83b5;
  /* 10fe83b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe83b3 jmp 0x10fe83ce */
  goto L_10fe83ce;
L_10fe83b5:;
  /* 10fe83b5 lock dec dword ptr [0x11005b44] */
  x86_unimpl("lock dec @ 0x10fe83b5");
  /* 10fe83bc mov ebx, ecx */
  EBX = (ECX);
  /* 10fe83be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe83c0 call 0x10fdd590 */
  push32(0x10fe83c5u); f_10fdd590();
  /* 10fe83c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10fe83cc mov ecx, ebx */
  ECX = (EBX);
L_10fe83ce:;
  /* 10fe83ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe83d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10fe83d2 mov edi, edi */
  EDI = (EDI);
L_10fe83d4:;
  /* 10fe83d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe83d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe83d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10fe83da je 0x10fe83ff */
  if (C.zf) goto L_10fe83ff;
  /* 10fe83dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10fe83de je 0x10fe83ff */
  if (C.zf) goto L_10fe83ff;
  /* 10fe83e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe83e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fe83e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe83e3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe83e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe83e5 call 0x10fe93d0 */
  push32(0x10fe83eau); f_10fe93d0();
  /* 10fe83ea mov ebx, eax */
  EBX = (EAX);
  /* 10fe83ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe83ef call 0x10fe93d0 */
  push32(0x10fe83f4u); f_10fe93d0();
  /* 10fe83f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe83f7 pop ecx */
  ECX = (pop32());
  /* 10fe83f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe83fa jne 0x10fe8405 */
  if (!C.zf) goto L_10fe8405;
  /* 10fe83fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10fe83fd jne 0x10fe83d4 */
  if (!C.zf) goto L_10fe83d4;
L_10fe83ff:;
  /* 10fe83ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8401 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8403 je 0x10fe840e */
  if (C.zf) goto L_10fe840e;
L_10fe8405:;
  /* 10fe8405 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10fe840a jb 0x10fe840e */
  if (C.cf) goto L_10fe840e;
  /* 10fe840c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10fe840e:;
  /* 10fe840e pop eax */
  EAX = (pop32());
  /* 10fe840f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8411 jne 0x10fe841c */
  if (!C.zf) goto L_10fe841c;
  /* 10fe8413 lock dec dword ptr [0x11005b44] */
  x86_unimpl("lock dec @ 0x10fe8413");
  /* 10fe841a jmp 0x10fe842a */
  goto L_10fe842a;
L_10fe841c:;
  /* 10fe841c mov ebx, ecx */
  EBX = (ECX);
  /* 10fe841e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe8420 call 0x10fdd630 */
  push32(0x10fe8425u); f_10fdd630();
  /* 10fe8425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8428 mov ecx, ebx */
  ECX = (EBX);
L_10fe842a:;
  /* 10fe842a mov eax, ecx */
  EAX = (ECX);
  /* 10fe842c pop ebx */
  EBX = (pop32());
  /* 10fe842d pop esi */
  ESI = (pop32());
  /* 10fe842e pop edi */
  EDI = (pop32());
  /* 10fe842f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe8430 ret  */
  ESPCHK(0x10fe8330u, _esp0);
  ESP += 4; return;
}

/* FUN_10018440 @ 0x10fe8440 (255 bytes, 88 insns) */
void f_10fe8440(void) {
  FTRACE(0x10fe8440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8440 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8441 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10fe8446:;
  /* 10fe8446 cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe844d jle 0x10fe8466 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8466;
  /* 10fe844f push 8 */
  push32((uint32_t)(0x8u));
  /* 10fe8451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8454 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8456 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe8458 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8459 call 0x10fdfba0 */
  push32(0x10fe845eu); f_10fdfba0();
  /* 10fe845e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8461 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe8464 jmp 0x10fe847f */
  goto L_10fe847f;
L_10fe8466:;
  /* 10fe8466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe846b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe846d mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe8473 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8475 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe8479 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe847c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe847f:;
  /* 10fe847f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8483 je 0x10fe8490 */
  if (C.zf) goto L_10fe8490;
  /* 10fe8485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe848b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe848e jmp 0x10fe8446 */
  goto L_10fe8446;
L_10fe8490:;
  /* 10fe8490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8493 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8495 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe8497 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe849a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe849d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe84a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe84a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe84a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe84a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe84ad je 0x10fe84b5 */
  if (C.zf) goto L_10fe84b5;
  /* 10fe84af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe84b3 jne 0x10fe84c8 */
  if (!C.zf) goto L_10fe84c8;
L_10fe84b5:;
  /* 10fe84b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe84b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe84ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe84bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe84bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe84c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe84c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fe84c8:;
  /* 10fe84c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fe84cf:;
  /* 10fe84cf cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe84d6 jle 0x10fe84eb */
  if ((C.zf||C.sf!=C.of)) goto L_10fe84eb;
  /* 10fe84d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe84da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe84dd push edx */
  push32((uint32_t)(EDX));
  /* 10fe84de call 0x10fdfba0 */
  push32(0x10fe84e3u); f_10fdfba0();
  /* 10fe84e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe84e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe84e9 jmp 0x10fe8500 */
  goto L_10fe8500;
L_10fe84eb:;
  /* 10fe84eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe84ee mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe84f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe84f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe84fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe84fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10fe8500:;
  /* 10fe8500 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8504 je 0x10fe852b */
  if (C.zf) goto L_10fe852b;
  /* 10fe8506 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8509 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe850c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe850f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10fe8513 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe8516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8519 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe851b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe851d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe8520 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8523 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8526 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fe8529 jmp 0x10fe84cf */
  goto L_10fe84cf;
L_10fe852b:;
  /* 10fe852b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe852f jne 0x10fe8538 */
  if (!C.zf) goto L_10fe8538;
  /* 10fe8531 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8534 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe8536 jmp 0x10fe853b */
  goto L_10fe853b;
L_10fe8538:;
  /* 10fe8538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fe853b:;
  /* 10fe853b mov esp, ebp */
  ESP = (EBP);
  /* 10fe853d pop ebp */
  EBP = (pop32());
  /* 10fe853e ret  */
  ESPCHK(0x10fe8440u, _esp0);
  ESP += 4; return;
}

/* FUN_10018540 @ 0x10fe8540 (17 bytes, 8 insns) */
void f_10fe8540(void) {
  FTRACE(0x10fe8540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8540 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8541 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8546 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8547 call 0x10fe8440 */
  push32(0x10fe854cu); f_10fe8440();
  /* 10fe854c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe854f pop ebp */
  EBP = (pop32());
  /* 10fe8550 ret  */
  ESPCHK(0x10fe8540u, _esp0);
  ESP += 4; return;
}

/* FUN_10018560 @ 0x10fe8560 (297 bytes, 106 insns) */
void f_10fe8560(void) {
  FTRACE(0x10fe8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8560 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8561 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8566 push esi */
  push32((uint32_t)(ESI));
L_10fe8567:;
  /* 10fe8567 cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe856e jle 0x10fe8587 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8587;
  /* 10fe8570 push 8 */
  push32((uint32_t)(0x8u));
  /* 10fe8572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8577 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe8579 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe857a call 0x10fdfba0 */
  push32(0x10fe857fu); f_10fdfba0();
  /* 10fe857f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8582 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe8585 jmp 0x10fe85a0 */
  goto L_10fe85a0;
L_10fe8587:;
  /* 10fe8587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe858a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe858c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe858e mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe8594 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8596 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe859a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe859d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10fe85a0:;
  /* 10fe85a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe85a4 je 0x10fe85b1 */
  if (C.zf) goto L_10fe85b1;
  /* 10fe85a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe85a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe85ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe85af jmp 0x10fe8567 */
  goto L_10fe8567;
L_10fe85b1:;
  /* 10fe85b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe85b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe85b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe85b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe85bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe85be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe85c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe85c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe85c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fe85ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe85ce je 0x10fe85d6 */
  if (C.zf) goto L_10fe85d6;
  /* 10fe85d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe85d4 jne 0x10fe85e9 */
  if (!C.zf) goto L_10fe85e9;
L_10fe85d6:;
  /* 10fe85d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe85d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe85db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe85dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe85e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe85e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe85e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fe85e9:;
  /* 10fe85e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe85f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fe85f7:;
  /* 10fe85f7 cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe85fe jle 0x10fe8613 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8613;
  /* 10fe8600 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe8602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8605 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8606 call 0x10fdfba0 */
  push32(0x10fe860bu); f_10fdfba0();
  /* 10fe860b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe860e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fe8611 jmp 0x10fe8628 */
  goto L_10fe8628;
L_10fe8613:;
  /* 10fe8613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8616 mov ecx, dword ptr [0x11003c98] */
  ECX = (r32((uint32_t)(0x11003c98)));
  /* 10fe861c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe861e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fe8622 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8625 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10fe8628:;
  /* 10fe8628 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe862c je 0x10fe8669 */
  if (C.zf) goto L_10fe8669;
  /* 10fe862e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8630 push 0xa */
  push32((uint32_t)(0xau));
  /* 10fe8632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8635 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8639 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe863a call 0x10fe9500 */
  push32(0x10fe863fu); f_10fe9500();
  /* 10fe863f mov ecx, eax */
  ECX = (EAX);
  /* 10fe8641 mov esi, edx */
  ESI = (EDX);
  /* 10fe8643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8646 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8649 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe864a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe864c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe864e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe8651 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10fe8654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8659 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe865b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe865e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8661 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8664 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fe8667 jmp 0x10fe85f7 */
  goto L_10fe85f7;
L_10fe8669:;
  /* 10fe8669 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe866d jne 0x10fe867e */
  if (!C.zf) goto L_10fe867e;
  /* 10fe866f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8672 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe8674 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8677 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe867a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe867c jmp 0x10fe8684 */
  goto L_10fe8684;
L_10fe867e:;
  /* 10fe867e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8681 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10fe8684:;
  /* 10fe8684 pop esi */
  ESI = (pop32());
  /* 10fe8685 mov esp, ebp */
  ESP = (EBP);
  /* 10fe8687 pop ebp */
  EBP = (pop32());
  /* 10fe8688 ret  */
  ESPCHK(0x10fe8560u, _esp0);
  ESP += 4; return;
}

/* FUN_10018690 @ 0x10fe8690 (61 bytes, 18 insns) */
void f_10fe8690(void) {
  FTRACE(0x10fe8690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8690 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8691 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8693 cmp dword ptr [0x11005b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe869a jne 0x10fe86cb */
  if (!C.zf) goto L_10fe86cb;
  /* 10fe869c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe869e call 0x10fdd590 */
  push32(0x10fe86a3u); f_10fdd590();
  /* 10fe86a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe86a6 cmp dword ptr [0x11005b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe86ad jne 0x10fe86c1 */
  if (!C.zf) goto L_10fe86c1;
  /* 10fe86af call 0x10fe86f0 */
  push32(0x10fe86b4u); f_10fe86f0();
  /* 10fe86b4 mov eax, dword ptr [0x11005b10] */
  EAX = (r32((uint32_t)(0x11005b10)));
  /* 10fe86b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe86bc mov dword ptr [0x11005b10], eax */
  w32((uint32_t)(0x11005b10), (EAX));
L_10fe86c1:;
  /* 10fe86c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe86c3 call 0x10fdd630 */
  push32(0x10fe86c8u); f_10fdd630();
  /* 10fe86c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe86cb:;
  /* 10fe86cb pop ebp */
  EBP = (pop32());
  /* 10fe86cc ret  */
  ESPCHK(0x10fe8690u, _esp0);
  ESP += 4; return;
}

/* FUN_100186d0 @ 0x10fe86d0 (30 bytes, 11 insns) */
void f_10fe86d0(void) {
  FTRACE(0x10fe86d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe86d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe86d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe86d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe86d5 call 0x10fdd590 */
  push32(0x10fe86dau); f_10fdd590();
  /* 10fe86da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe86dd call 0x10fe86f0 */
  push32(0x10fe86e2u); f_10fe86f0();
  /* 10fe86e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe86e4 call 0x10fdd630 */
  push32(0x10fe86e9u); f_10fdd630();
  /* 10fe86e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe86ec pop ebp */
  EBP = (pop32());
  /* 10fe86ed ret  */
  ESPCHK(0x10fe86d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100186f0 @ 0x10fe86f0 (939 bytes, 266 insns) */
void f_10fe86f0(void) {
  FTRACE(0x10fe86f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe86f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe86f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe86f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe86f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe86fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe86ff call 0x10fdd590 */
  push32(0x10fe8704u); f_10fdd590();
  /* 10fe8704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8707 mov dword ptr [0x11005a58], 0 */
  w32((uint32_t)(0x11005a58), (0x0u));
  /* 10fe8711 mov dword ptr [0x11004e38], 0xffffffff */
  w32((uint32_t)(0x11004e38), (0xffffffffu));
  /* 10fe871b mov eax, dword ptr [0x11004e38] */
  EAX = (r32((uint32_t)(0x11004e38)));
  /* 10fe8720 mov dword ptr [0x11004e28], eax */
  w32((uint32_t)(0x11004e28), (EAX));
  /* 10fe8725 push 0x11001f20 */
  push32((uint32_t)(0x11001f20u));
  /* 10fe872a call 0x10fe9570 */
  push32(0x10fe872fu); f_10fe9570();
  /* 10fe872f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8732 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe8735 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8739 jne 0x10fe8873 */
  if (!C.zf) goto L_10fe8873;
  /* 10fe873f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe8741 call 0x10fdd630 */
  push32(0x10fe8746u); f_10fdd630();
  /* 10fe8746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8749 push 0x11005a60 */
  push32((uint32_t)(0x11005a60u));
  /* 10fe874e call dword ptr [0x110082e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082e0))), 0x10fe8754u);
  /* 10fe8754 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8757 je 0x10fe886e */
  if (C.zf) goto L_10fe886e;
  /* 10fe875d mov dword ptr [0x11005a58], 1 */
  w32((uint32_t)(0x11005a58), (0x1u));
  /* 10fe8767 mov ecx, dword ptr [0x11005a60] */
  ECX = (r32((uint32_t)(0x11005a60)));
  /* 10fe876d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8770 mov dword ptr [0x11004d90], ecx */
  w32((uint32_t)(0x11004d90), (ECX));
  /* 10fe8776 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8778 mov dx, word ptr [0x11005aa6] */
  DX = (r16((uint32_t)(0x11005aa6)));
  /* 10fe877f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe8781 je 0x10fe8799 */
  if (C.zf) goto L_10fe8799;
  /* 10fe8783 mov eax, dword ptr [0x11005ab4] */
  EAX = (r32((uint32_t)(0x11005ab4)));
  /* 10fe8788 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe878b mov ecx, dword ptr [0x11004d90] */
  ECX = (r32((uint32_t)(0x11004d90)));
  /* 10fe8791 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8793 mov dword ptr [0x11004d90], ecx */
  w32((uint32_t)(0x11004d90), (ECX));
L_10fe8799:;
  /* 10fe8799 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe879b mov dx, word ptr [0x11005afa] */
  DX = (r16((uint32_t)(0x11005afa)));
  /* 10fe87a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe87a4 je 0x10fe87ce */
  if (C.zf) goto L_10fe87ce;
  /* 10fe87a6 cmp dword ptr [0x11005b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe87ad je 0x10fe87ce */
  if (C.zf) goto L_10fe87ce;
  /* 10fe87af mov dword ptr [0x11004d94], 1 */
  w32((uint32_t)(0x11004d94), (0x1u));
  /* 10fe87b9 mov eax, dword ptr [0x11005b08] */
  EAX = (r32((uint32_t)(0x11005b08)));
  /* 10fe87be sub eax, dword ptr [0x11005ab4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11005ab4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe87c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe87c7 mov dword ptr [0x11004d98], eax */
  w32((uint32_t)(0x11004d98), (EAX));
  /* 10fe87cc jmp 0x10fe87e2 */
  goto L_10fe87e2;
L_10fe87ce:;
  /* 10fe87ce mov dword ptr [0x11004d94], 0 */
  w32((uint32_t)(0x11004d94), (0x0u));
  /* 10fe87d8 mov dword ptr [0x11004d98], 0 */
  w32((uint32_t)(0x11004d98), (0x0u));
L_10fe87e2:;
  /* 10fe87e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10fe87e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe87e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe87e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10fe87ea mov edx, dword ptr [0x11004e1c] */
  EDX = (r32((uint32_t)(0x11004e1c)));
  /* 10fe87f0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe87f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe87f3 push 0x11005a64 */
  push32((uint32_t)(0x11005a64u));
  /* 10fe87f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe87fd mov eax, dword ptr [0x110059c8] */
  EAX = (r32((uint32_t)(0x110059c8)));
  /* 10fe8802 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8803 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe8809u);
  /* 10fe8809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe880b je 0x10fe881f */
  if (C.zf) goto L_10fe881f;
  /* 10fe880d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8811 jne 0x10fe881f */
  if (!C.zf) goto L_10fe881f;
  /* 10fe8813 mov ecx, dword ptr [0x11004e1c] */
  ECX = (r32((uint32_t)(0x11004e1c)));
  /* 10fe8819 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10fe881d jmp 0x10fe8828 */
  goto L_10fe8828;
L_10fe881f:;
  /* 10fe881f mov edx, dword ptr [0x11004e1c] */
  EDX = (r32((uint32_t)(0x11004e1c)));
  /* 10fe8825 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10fe8828:;
  /* 10fe8828 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fe882b push eax */
  push32((uint32_t)(EAX));
  /* 10fe882c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe882e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10fe8830 mov ecx, dword ptr [0x11004e20] */
  ECX = (r32((uint32_t)(0x11004e20)));
  /* 10fe8836 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8837 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe8839 push 0x11005ab8 */
  push32((uint32_t)(0x11005ab8u));
  /* 10fe883e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe8843 mov edx, dword ptr [0x110059c8] */
  EDX = (r32((uint32_t)(0x110059c8)));
  /* 10fe8849 push edx */
  push32((uint32_t)(EDX));
  /* 10fe884a call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe8850u);
  /* 10fe8850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe8852 je 0x10fe8865 */
  if (C.zf) goto L_10fe8865;
  /* 10fe8854 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8858 jne 0x10fe8865 */
  if (!C.zf) goto L_10fe8865;
  /* 10fe885a mov eax, dword ptr [0x11004e20] */
  EAX = (r32((uint32_t)(0x11004e20)));
  /* 10fe885f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10fe8863 jmp 0x10fe886e */
  goto L_10fe886e;
L_10fe8865:;
  /* 10fe8865 mov ecx, dword ptr [0x11004e20] */
  ECX = (r32((uint32_t)(0x11004e20)));
  /* 10fe886b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10fe886e:;
  /* 10fe886e jmp 0x10fe8a97 */
  goto L_10fe8a97;
L_10fe8873:;
  /* 10fe8873 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8876 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe8879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe887b je 0x10fe889d */
  if (C.zf) goto L_10fe889d;
  /* 10fe887d cmp dword ptr [0x11005b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8884 je 0x10fe88ac */
  if (C.zf) goto L_10fe88ac;
  /* 10fe8886 mov ecx, dword ptr [0x11005b0c] */
  ECX = (r32((uint32_t)(0x11005b0c)));
  /* 10fe888c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe888d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8890 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8891 call 0x10fe5820 */
  push32(0x10fe8896u); f_10fe5820();
  /* 10fe8896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe889b jne 0x10fe88ac */
  if (!C.zf) goto L_10fe88ac;
L_10fe889d:;
  /* 10fe889d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe889f call 0x10fdd630 */
  push32(0x10fe88a4u); f_10fdd630();
  /* 10fe88a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe88a7 jmp 0x10fe8a97 */
  goto L_10fe8a97;
L_10fe88ac:;
  /* 10fe88ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe88ae mov eax, dword ptr [0x11005b0c] */
  EAX = (r32((uint32_t)(0x11005b0c)));
  /* 10fe88b3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe88b4 call 0x10fda620 */
  push32(0x10fe88b9u); f_10fda620();
  /* 10fe88b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe88bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10fe88c1 push 0x11001f18 */
  push32((uint32_t)(0x11001f18u));
  /* 10fe88c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe88c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe88cb push ecx */
  push32((uint32_t)(ECX));
  /* 10fe88cc call 0x10fdc9c0 */
  push32(0x10fe88d1u); f_10fdc9c0();
  /* 10fe88d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe88d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe88d7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe88d8 call 0x10fd9b90 */
  push32(0x10fe88ddu); f_10fd9b90();
  /* 10fe88dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe88e0 mov dword ptr [0x11005b0c], eax */
  w32((uint32_t)(0x11005b0c), (EAX));
  /* 10fe88e5 cmp dword ptr [0x11005b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe88ec jne 0x10fe88fd */
  if (!C.zf) goto L_10fe88fd;
  /* 10fe88ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe88f0 call 0x10fdd630 */
  push32(0x10fe88f5u); f_10fdd630();
  /* 10fe88f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe88f8 jmp 0x10fe8a97 */
  goto L_10fe8a97;
L_10fe88fd:;
  /* 10fe88fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8900 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8901 mov eax, dword ptr [0x11005b0c] */
  EAX = (r32((uint32_t)(0x11005b0c)));
  /* 10fe8906 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8907 call 0x10fdcb40 */
  push32(0x10fe890cu); f_10fdcb40();
  /* 10fe890c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe890f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe8911 call 0x10fdd630 */
  push32(0x10fe8916u); f_10fdd630();
  /* 10fe8916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8919 push 3 */
  push32((uint32_t)(0x3u));
  /* 10fe891b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe891e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe891f mov edx, dword ptr [0x11004e1c] */
  EDX = (r32((uint32_t)(0x11004e1c)));
  /* 10fe8925 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8926 call 0x10fdd3b0 */
  push32(0x10fe892bu); f_10fdd3b0();
  /* 10fe892b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe892e mov eax, dword ptr [0x11004e1c] */
  EAX = (r32((uint32_t)(0x11004e1c)));
  /* 10fe8933 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10fe8937 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe893a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe893d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe8940 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8943 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe8946 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8949 jne 0x10fe895d */
  if (!C.zf) goto L_10fe895d;
  /* 10fe894b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe894e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8951 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe8954 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8957 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe895a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fe895d:;
  /* 10fe895d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8960 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8961 call 0x10fe8440 */
  push32(0x10fe8966u); f_10fe8440();
  /* 10fe8966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8969 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe896f mov dword ptr [0x11004d90], eax */
  w32((uint32_t)(0x11004d90), (EAX));
L_10fe8974:;
  /* 10fe8974 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8977 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe897a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe897d je 0x10fe8995 */
  if (C.zf) goto L_10fe8995;
  /* 10fe897f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8982 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe8985 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8988 jl 0x10fe89a0 */
  if ((C.sf!=C.of)) goto L_10fe89a0;
  /* 10fe898a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe898d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe8990 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8993 jg 0x10fe89a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe89a0;
L_10fe8995:;
  /* 10fe8995 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8998 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe899b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe899e jmp 0x10fe8974 */
  goto L_10fe8974;
L_10fe89a0:;
  /* 10fe89a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe89a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe89a9 jne 0x10fe8a45 */
  if (!C.zf) goto L_10fe8a45;
  /* 10fe89af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe89b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe89b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89bb push edx */
  push32((uint32_t)(EDX));
  /* 10fe89bc call 0x10fe8440 */
  push32(0x10fe89c1u); f_10fe8440();
  /* 10fe89c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe89c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe89c7 mov ecx, dword ptr [0x11004d90] */
  ECX = (r32((uint32_t)(0x11004d90)));
  /* 10fe89cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe89cf mov dword ptr [0x11004d90], ecx */
  w32((uint32_t)(0x11004d90), (ECX));
L_10fe89d5:;
  /* 10fe89d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe89db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe89de jl 0x10fe89f6 */
  if ((C.sf!=C.of)) goto L_10fe89f6;
  /* 10fe89e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe89e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe89e9 jg 0x10fe89f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe89f6;
  /* 10fe89eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe89f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe89f4 jmp 0x10fe89d5 */
  goto L_10fe89d5;
L_10fe89f6:;
  /* 10fe89f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe89f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe89fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe89ff jne 0x10fe8a45 */
  if (!C.zf) goto L_10fe8a45;
  /* 10fe8a01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8a07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe8a0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a0d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8a0e call 0x10fe8440 */
  push32(0x10fe8a13u); f_10fe8440();
  /* 10fe8a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8a16 mov edx, dword ptr [0x11004d90] */
  EDX = (r32((uint32_t)(0x11004d90)));
  /* 10fe8a1c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8a1e mov dword ptr [0x11004d90], edx */
  w32((uint32_t)(0x11004d90), (EDX));
L_10fe8a24:;
  /* 10fe8a24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe8a2a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8a2d jl 0x10fe8a45 */
  if ((C.sf!=C.of)) goto L_10fe8a45;
  /* 10fe8a2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe8a35 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8a38 jg 0x10fe8a45 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe8a45;
  /* 10fe8a3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8a40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe8a43 jmp 0x10fe8a24 */
  goto L_10fe8a24;
L_10fe8a45:;
  /* 10fe8a45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8a49 je 0x10fe8a59 */
  if (C.zf) goto L_10fe8a59;
  /* 10fe8a4b mov edx, dword ptr [0x11004d90] */
  EDX = (r32((uint32_t)(0x11004d90)));
  /* 10fe8a51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe8a53 mov dword ptr [0x11004d90], edx */
  w32((uint32_t)(0x11004d90), (EDX));
L_10fe8a59:;
  /* 10fe8a59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe8a5f mov dword ptr [0x11004d94], ecx */
  w32((uint32_t)(0x11004d94), (ECX));
  /* 10fe8a65 cmp dword ptr [0x11004d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11004d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8a6c je 0x10fe8a8e */
  if (C.zf) goto L_10fe8a8e;
  /* 10fe8a6e push 3 */
  push32((uint32_t)(0x3u));
  /* 10fe8a70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8a73 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8a74 mov eax, dword ptr [0x11004e20] */
  EAX = (r32((uint32_t)(0x11004e20)));
  /* 10fe8a79 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8a7a call 0x10fdd3b0 */
  push32(0x10fe8a7fu); f_10fdd3b0();
  /* 10fe8a7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8a82 mov ecx, dword ptr [0x11004e20] */
  ECX = (r32((uint32_t)(0x11004e20)));
  /* 10fe8a88 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10fe8a8c jmp 0x10fe8a97 */
  goto L_10fe8a97;
L_10fe8a8e:;
  /* 10fe8a8e mov edx, dword ptr [0x11004e20] */
  EDX = (r32((uint32_t)(0x11004e20)));
  /* 10fe8a94 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10fe8a97:;
  /* 10fe8a97 mov esp, ebp */
  ESP = (EBP);
  /* 10fe8a99 pop ebp */
  EBP = (pop32());
  /* 10fe8a9a ret  */
  ESPCHK(0x10fe86f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018aa0 @ 0x10fe8aa0 (46 bytes, 18 insns) */
void f_10fe8aa0(void) {
  FTRACE(0x10fe8aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8aa4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe8aa6 call 0x10fdd590 */
  push32(0x10fe8aabu); f_10fdd590();
  /* 10fe8aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8ab2 call 0x10fe8ad0 */
  push32(0x10fe8ab7u); f_10fe8ad0();
  /* 10fe8ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8aba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe8abd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe8abf call 0x10fdd630 */
  push32(0x10fe8ac4u); f_10fdd630();
  /* 10fe8ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8aca mov esp, ebp */
  ESP = (EBP);
  /* 10fe8acc pop ebp */
  EBP = (pop32());
  /* 10fe8acd ret  */
  ESPCHK(0x10fe8aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ad0 @ 0x10fe8ad0 (762 bytes, 246 insns) */
void f_10fe8ad0(void) {
  FTRACE(0x10fe8ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8ad4 cmp dword ptr [0x11004d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11004d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8adb jne 0x10fe8ae4 */
  if (!C.zf) goto L_10fe8ae4;
  /* 10fe8add xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8adf jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8ae4:;
  /* 10fe8ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8ae7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fe8aea cmp ecx, dword ptr [0x11004e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11004e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8af0 jne 0x10fe8b04 */
  if (!C.zf) goto L_10fe8b04;
  /* 10fe8af2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8af5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fe8af8 cmp eax, dword ptr [0x11004e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11004e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8afe je 0x10fe8ccb */
  if (C.zf) goto L_10fe8ccb;
L_10fe8b04:;
  /* 10fe8b04 cmp dword ptr [0x11005a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8b0b je 0x10fe8c85 */
  if (C.zf) goto L_10fe8c85;
  /* 10fe8b11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8b13 mov cx, word ptr [0x11005af8] */
  CX = (r16((uint32_t)(0x11005af8)));
  /* 10fe8b1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe8b1c jne 0x10fe8b79 */
  if (!C.zf) goto L_10fe8b79;
  /* 10fe8b1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8b20 mov dx, word ptr [0x11005b06] */
  DX = (r16((uint32_t)(0x11005b06)));
  /* 10fe8b27 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8b2a mov ax, word ptr [0x11005b04] */
  AX = (r16((uint32_t)(0x11005b04)));
  /* 10fe8b30 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8b31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8b33 mov cx, word ptr [0x11005b02] */
  CX = (r16((uint32_t)(0x11005b02)));
  /* 10fe8b3a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8b3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8b3d mov dx, word ptr [0x11005b00] */
  DX = (r16((uint32_t)(0x11005b00)));
  /* 10fe8b44 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8b49 mov ax, word ptr [0x11005afc] */
  AX = (r16((uint32_t)(0x11005afc)));
  /* 10fe8b4f push eax */
  push32((uint32_t)(EAX));
  /* 10fe8b50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8b52 mov cx, word ptr [0x11005afe] */
  CX = (r16((uint32_t)(0x11005afe)));
  /* 10fe8b59 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8b5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8b5c mov dx, word ptr [0x11005afa] */
  DX = (r16((uint32_t)(0x11005afa)));
  /* 10fe8b63 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8b67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fe8b6a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8b6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8b6f call 0x10fe8dd0 */
  push32(0x10fe8b74u); f_10fe8dd0();
  /* 10fe8b74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8b77 jmp 0x10fe8bca */
  goto L_10fe8bca;
L_10fe8b79:;
  /* 10fe8b79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8b7b mov dx, word ptr [0x11005b06] */
  DX = (r16((uint32_t)(0x11005b06)));
  /* 10fe8b82 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8b85 mov ax, word ptr [0x11005b04] */
  AX = (r16((uint32_t)(0x11005b04)));
  /* 10fe8b8b push eax */
  push32((uint32_t)(EAX));
  /* 10fe8b8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8b8e mov cx, word ptr [0x11005b02] */
  CX = (r16((uint32_t)(0x11005b02)));
  /* 10fe8b95 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8b96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8b98 mov dx, word ptr [0x11005b00] */
  DX = (r16((uint32_t)(0x11005b00)));
  /* 10fe8b9f push edx */
  push32((uint32_t)(EDX));
  /* 10fe8ba0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8ba2 mov ax, word ptr [0x11005afe] */
  AX = (r16((uint32_t)(0x11005afe)));
  /* 10fe8ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8bab push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8bad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8baf mov cx, word ptr [0x11005afa] */
  CX = (r16((uint32_t)(0x11005afa)));
  /* 10fe8bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8bba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fe8bbd push eax */
  push32((uint32_t)(EAX));
  /* 10fe8bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8bc2 call 0x10fe8dd0 */
  push32(0x10fe8bc7u); f_10fe8dd0();
  /* 10fe8bc7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe8bca:;
  /* 10fe8bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8bcc mov cx, word ptr [0x11005aa4] */
  CX = (r16((uint32_t)(0x11005aa4)));
  /* 10fe8bd3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe8bd5 jne 0x10fe8c32 */
  if (!C.zf) goto L_10fe8c32;
  /* 10fe8bd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8bd9 mov dx, word ptr [0x11005ab2] */
  DX = (r16((uint32_t)(0x11005ab2)));
  /* 10fe8be0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8be3 mov ax, word ptr [0x11005ab0] */
  AX = (r16((uint32_t)(0x11005ab0)));
  /* 10fe8be9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8bea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8bec mov cx, word ptr [0x11005aae] */
  CX = (r16((uint32_t)(0x11005aae)));
  /* 10fe8bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8bf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8bf6 mov dx, word ptr [0x11005aac] */
  DX = (r16((uint32_t)(0x11005aac)));
  /* 10fe8bfd push edx */
  push32((uint32_t)(EDX));
  /* 10fe8bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8c02 mov ax, word ptr [0x11005aa8] */
  AX = (r16((uint32_t)(0x11005aa8)));
  /* 10fe8c08 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8c09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8c0b mov cx, word ptr [0x11005aaa] */
  CX = (r16((uint32_t)(0x11005aaa)));
  /* 10fe8c12 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8c13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8c15 mov dx, word ptr [0x11005aa6] */
  DX = (r16((uint32_t)(0x11005aa6)));
  /* 10fe8c1c push edx */
  push32((uint32_t)(EDX));
  /* 10fe8c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8c20 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fe8c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c28 call 0x10fe8dd0 */
  push32(0x10fe8c2du); f_10fe8dd0();
  /* 10fe8c2d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8c30 jmp 0x10fe8c83 */
  goto L_10fe8c83;
L_10fe8c32:;
  /* 10fe8c32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8c34 mov dx, word ptr [0x11005ab2] */
  DX = (r16((uint32_t)(0x11005ab2)));
  /* 10fe8c3b push edx */
  push32((uint32_t)(EDX));
  /* 10fe8c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8c3e mov ax, word ptr [0x11005ab0] */
  AX = (r16((uint32_t)(0x11005ab0)));
  /* 10fe8c44 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8c45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8c47 mov cx, word ptr [0x11005aae] */
  CX = (r16((uint32_t)(0x11005aae)));
  /* 10fe8c4e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8c4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8c51 mov dx, word ptr [0x11005aac] */
  DX = (r16((uint32_t)(0x11005aac)));
  /* 10fe8c58 push edx */
  push32((uint32_t)(EDX));
  /* 10fe8c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8c5b mov ax, word ptr [0x11005aaa] */
  AX = (r16((uint32_t)(0x11005aaa)));
  /* 10fe8c61 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8c68 mov cx, word ptr [0x11005aa6] */
  CX = (r16((uint32_t)(0x11005aa6)));
  /* 10fe8c6f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8c70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8c73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fe8c76 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c7b call 0x10fe8dd0 */
  push32(0x10fe8c80u); f_10fe8dd0();
  /* 10fe8c80 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe8c83:;
  /* 10fe8c83 jmp 0x10fe8ccb */
  goto L_10fe8ccb;
L_10fe8c85:;
  /* 10fe8c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe8c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8c91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8c93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe8c95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8c98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10fe8c9b push edx */
  push32((uint32_t)(EDX));
  /* 10fe8c9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8c9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8ca0 call 0x10fe8dd0 */
  push32(0x10fe8ca5u); f_10fe8dd0();
  /* 10fe8ca5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8cac push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8cae push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe8cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8cb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10fe8cb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10fe8cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8cbb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fe8cbe push ecx */
  push32((uint32_t)(ECX));
  /* 10fe8cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe8cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe8cc3 call 0x10fe8dd0 */
  push32(0x10fe8cc8u); f_10fe8dd0();
  /* 10fe8cc8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe8ccb:;
  /* 10fe8ccb mov edx, dword ptr [0x11004e2c] */
  EDX = (r32((uint32_t)(0x11004e2c)));
  /* 10fe8cd1 cmp edx, dword ptr [0x11004e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11004e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8cd7 jge 0x10fe8d24 */
  if ((C.sf==C.of)) goto L_10fe8d24;
  /* 10fe8cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8cdc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fe8cdf cmp ecx, dword ptr [0x11004e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11004e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8ce5 jl 0x10fe8cf5 */
  if ((C.sf!=C.of)) goto L_10fe8cf5;
  /* 10fe8ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8cea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe8ced cmp eax, dword ptr [0x11004e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11004e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8cf3 jle 0x10fe8cfc */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8cfc;
L_10fe8cf5:;
  /* 10fe8cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8cf7 jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8cfc:;
  /* 10fe8cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8cff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fe8d02 cmp edx, dword ptr [0x11004e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11004e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d08 jle 0x10fe8d22 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8d22;
  /* 10fe8d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d0d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fe8d10 cmp ecx, dword ptr [0x11004e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11004e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d16 jge 0x10fe8d22 */
  if ((C.sf==C.of)) goto L_10fe8d22;
  /* 10fe8d18 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe8d1d jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8d22:;
  /* 10fe8d22 jmp 0x10fe8d67 */
  goto L_10fe8d67;
L_10fe8d24:;
  /* 10fe8d24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d27 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe8d2a cmp eax, dword ptr [0x11004e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11004e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d30 jl 0x10fe8d40 */
  if ((C.sf!=C.of)) goto L_10fe8d40;
  /* 10fe8d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d35 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fe8d38 cmp edx, dword ptr [0x11004e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11004e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d3e jle 0x10fe8d47 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8d47;
L_10fe8d40:;
  /* 10fe8d40 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe8d45 jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8d47:;
  /* 10fe8d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d4a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fe8d4d cmp ecx, dword ptr [0x11004e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11004e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d53 jle 0x10fe8d67 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8d67;
  /* 10fe8d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d58 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe8d5b cmp eax, dword ptr [0x11004e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11004e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d61 jge 0x10fe8d67 */
  if ((C.sf==C.of)) goto L_10fe8d67;
  /* 10fe8d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8d65 jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8d67:;
  /* 10fe8d67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fe8d6d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe8d75 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8d77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d7a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe8d7d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8d83 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8d85 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8d8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe8d8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe8d91 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fe8d94 cmp edx, dword ptr [0x11004e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11004e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8d9a jne 0x10fe8db2 */
  if (!C.zf) goto L_10fe8db2;
  /* 10fe8d9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8d9f cmp eax, dword ptr [0x11004e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11004e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8da5 jl 0x10fe8dae */
  if ((C.sf!=C.of)) goto L_10fe8dae;
  /* 10fe8da7 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe8dac jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8dae:;
  /* 10fe8dae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8db0 jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8db2:;
  /* 10fe8db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8db5 cmp ecx, dword ptr [0x11004e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11004e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8dbb jge 0x10fe8dc4 */
  if ((C.sf==C.of)) goto L_10fe8dc4;
  /* 10fe8dbd mov eax, 1 */
  EAX = (0x1u);
  /* 10fe8dc2 jmp 0x10fe8dc6 */
  goto L_10fe8dc6;
L_10fe8dc4:;
  /* 10fe8dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe8dc6:;
  /* 10fe8dc6 mov esp, ebp */
  ESP = (EBP);
  /* 10fe8dc8 pop ebp */
  EBP = (pop32());
  /* 10fe8dc9 ret  */
  ESPCHK(0x10fe8ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018dd0 @ 0x10fe8dd0 (504 bytes, 145 insns) */
void f_10fe8dd0(void) {
  FTRACE(0x10fe8dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8dd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8dd6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8dda jne 0x10fe8eac */
  if (!C.zf) goto L_10fe8eac;
  /* 10fe8de0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8de3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe8de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe8de8 jne 0x10fe8df9 */
  if (!C.zf) goto L_10fe8df9;
  /* 10fe8dea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8ded mov edx, dword ptr [ecx*4 + 0x11004e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11004e4c)));
  /* 10fe8df4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fe8df7 jmp 0x10fe8e06 */
  goto L_10fe8e06;
L_10fe8df9:;
  /* 10fe8df9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8dfc mov ecx, dword ptr [eax*4 + 0x11004e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11004e80)));
  /* 10fe8e03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10fe8e06:;
  /* 10fe8e06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe8e09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8e0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe8e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8e12 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8e15 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8e1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8e1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8e20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8e23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8e26 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10fe8e29 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10fe8e2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe8e2e mov ecx, 7 */
  ECX = (0x7u);
  /* 10fe8e33 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe8e35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe8e38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe8e3b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8e3e jge 0x10fe8e59 */
  if ((C.sf==C.of)) goto L_10fe8e59;
  /* 10fe8e40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe8e43 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8e46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe8e49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8e4c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8e4f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8e52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8e54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe8e57 jmp 0x10fe8e6d */
  goto L_10fe8e6d;
L_10fe8e59:;
  /* 10fe8e59 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe8e5c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8e5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe8e62 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8e65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8e68 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8e6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe8e6d:;
  /* 10fe8e6d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8e71 jne 0x10fe8eaa */
  if (!C.zf) goto L_10fe8eaa;
  /* 10fe8e73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8e76 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe8e79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe8e7b jne 0x10fe8e8c */
  if (!C.zf) goto L_10fe8e8c;
  /* 10fe8e7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8e80 mov eax, dword ptr [edx*4 + 0x11004e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11004e50)));
  /* 10fe8e87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe8e8a jmp 0x10fe8e99 */
  goto L_10fe8e99;
L_10fe8e8c:;
  /* 10fe8e8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8e8f mov edx, dword ptr [ecx*4 + 0x11004e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11004e84)));
  /* 10fe8e96 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe8e99:;
  /* 10fe8e99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8e9c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8e9f jle 0x10fe8eaa */
  if ((C.zf||C.sf!=C.of)) goto L_10fe8eaa;
  /* 10fe8ea1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8ea4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8ea7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fe8eaa:;
  /* 10fe8eaa jmp 0x10fe8ee1 */
  goto L_10fe8ee1;
L_10fe8eac:;
  /* 10fe8eac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8eaf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe8eb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe8eb4 jne 0x10fe8ec5 */
  if (!C.zf) goto L_10fe8ec5;
  /* 10fe8eb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8eb9 mov ecx, dword ptr [eax*4 + 0x11004e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11004e4c)));
  /* 10fe8ec0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe8ec3 jmp 0x10fe8ed2 */
  goto L_10fe8ed2;
L_10fe8ec5:;
  /* 10fe8ec5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe8ec8 mov eax, dword ptr [edx*4 + 0x11004e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11004e80)));
  /* 10fe8ecf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10fe8ed2:;
  /* 10fe8ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe8ed5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe8ed8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8edb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8ede mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10fe8ee1:;
  /* 10fe8ee1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8ee5 jne 0x10fe8f21 */
  if (!C.zf) goto L_10fe8f21;
  /* 10fe8ee7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8eea mov dword ptr [0x11004e2c], eax */
  w32((uint32_t)(0x11004e2c), (EAX));
  /* 10fe8eef mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10fe8ef2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8ef5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10fe8ef8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8efa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8efd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10fe8f00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8f08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10fe8f0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f0d mov dword ptr [0x11004e30], ecx */
  w32((uint32_t)(0x11004e30), (ECX));
  /* 10fe8f13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8f16 mov dword ptr [0x11004e28], edx */
  w32((uint32_t)(0x11004e28), (EDX));
  /* 10fe8f1c jmp 0x10fe8fc4 */
  goto L_10fe8fc4;
L_10fe8f21:;
  /* 10fe8f21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe8f24 mov dword ptr [0x11004e3c], eax */
  w32((uint32_t)(0x11004e3c), (EAX));
  /* 10fe8f29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10fe8f2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8f2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10fe8f32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8f37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10fe8f3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8f42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10fe8f45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f47 mov dword ptr [0x11004e40], ecx */
  w32((uint32_t)(0x11004e40), (ECX));
  /* 10fe8f4d mov edx, dword ptr [0x11004d98] */
  EDX = (r32((uint32_t)(0x11004d98)));
  /* 10fe8f53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe8f59 mov eax, dword ptr [0x11004e40] */
  EAX = (r32((uint32_t)(0x11004e40)));
  /* 10fe8f5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f60 mov dword ptr [0x11004e40], eax */
  w32((uint32_t)(0x11004e40), (EAX));
  /* 10fe8f65 cmp dword ptr [0x11004e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11004e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8f6c jge 0x10fe8f91 */
  if ((C.sf==C.of)) goto L_10fe8f91;
  /* 10fe8f6e mov ecx, dword ptr [0x11004e40] */
  ECX = (r32((uint32_t)(0x11004e40)));
  /* 10fe8f74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8f7a mov dword ptr [0x11004e40], ecx */
  w32((uint32_t)(0x11004e40), (ECX));
  /* 10fe8f80 mov edx, dword ptr [0x11004e3c] */
  EDX = (r32((uint32_t)(0x11004e3c)));
  /* 10fe8f86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8f89 mov dword ptr [0x11004e3c], edx */
  w32((uint32_t)(0x11004e3c), (EDX));
  /* 10fe8f8f jmp 0x10fe8fbb */
  goto L_10fe8fbb;
L_10fe8f91:;
  /* 10fe8f91 cmp dword ptr [0x11004e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11004e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8f9b jl 0x10fe8fbb */
  if ((C.sf!=C.of)) goto L_10fe8fbb;
  /* 10fe8f9d mov eax, dword ptr [0x11004e40] */
  EAX = (r32((uint32_t)(0x11004e40)));
  /* 10fe8fa2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe8fa7 mov dword ptr [0x11004e40], eax */
  w32((uint32_t)(0x11004e40), (EAX));
  /* 10fe8fac mov ecx, dword ptr [0x11004e3c] */
  ECX = (r32((uint32_t)(0x11004e3c)));
  /* 10fe8fb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8fb5 mov dword ptr [0x11004e3c], ecx */
  w32((uint32_t)(0x11004e3c), (ECX));
L_10fe8fbb:;
  /* 10fe8fbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe8fbe mov dword ptr [0x11004e38], edx */
  w32((uint32_t)(0x11004e38), (EDX));
L_10fe8fc4:;
  /* 10fe8fc4 mov esp, ebp */
  ESP = (EBP);
  /* 10fe8fc6 pop ebp */
  EBP = (pop32());
  /* 10fe8fc7 ret  */
  ESPCHK(0x10fe8dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x10fe8fd0 (382 bytes, 135 insns) */
void f_10fe8fd0(void) {
  FTRACE(0x10fe8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe8fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe8fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe8fd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe8fd5 push 0x11001f28 */
  push32((uint32_t)(0x11001f28u));
  /* 10fe8fda push 0x10fe2c98 */
  push32((uint32_t)(0x10fe2c98u));
  /* 10fe8fdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fe8fe5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe8fe6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fe8fed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe8ff0 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe8ff1 push esi */
  push32((uint32_t)(ESI));
  /* 10fe8ff2 push edi */
  push32((uint32_t)(EDI));
  /* 10fe8ff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe8ff6 cmp dword ptr [0x11005b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe8ffd jne 0x10fe9042 */
  if (!C.zf) goto L_10fe9042;
  /* 10fe8fff push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9001 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9003 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9007 call dword ptr [0x110082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082dc))), 0x10fe900du);
  /* 10fe900d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe900f je 0x10fe901d */
  if (C.zf) goto L_10fe901d;
  /* 10fe9011 mov dword ptr [0x11005b14], 1 */
  w32((uint32_t)(0x11005b14), (0x1u));
  /* 10fe901b jmp 0x10fe9042 */
  goto L_10fe9042;
L_10fe901d:;
  /* 10fe901d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe901f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9021 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9025 call dword ptr [0x110082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f4))), 0x10fe902bu);
  /* 10fe902b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe902d je 0x10fe903b */
  if (C.zf) goto L_10fe903b;
  /* 10fe902f mov dword ptr [0x11005b14], 2 */
  w32((uint32_t)(0x11005b14), (0x2u));
  /* 10fe9039 jmp 0x10fe9042 */
  goto L_10fe9042;
L_10fe903b:;
  /* 10fe903b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe903d jmp 0x10fe9151 */
  goto L_10fe9151;
L_10fe9042:;
  /* 10fe9042 cmp dword ptr [0x11005b14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11005b14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9049 jne 0x10fe9066 */
  if (!C.zf) goto L_10fe9066;
  /* 10fe904b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe904e push eax */
  push32((uint32_t)(EAX));
  /* 10fe904f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe9052 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9056 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe905a push eax */
  push32((uint32_t)(EAX));
  /* 10fe905b call dword ptr [0x110082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082dc))), 0x10fe9061u);
  /* 10fe9061 jmp 0x10fe9151 */
  goto L_10fe9151;
L_10fe9066:;
  /* 10fe9066 cmp dword ptr [0x11005b14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11005b14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe906d jne 0x10fe914f */
  if (!C.zf) goto L_10fe914f;
  /* 10fe9073 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9077 jne 0x10fe9082 */
  if (!C.zf) goto L_10fe9082;
  /* 10fe9079 mov ecx, dword ptr [0x110059c8] */
  ECX = (r32((uint32_t)(0x110059c8)));
  /* 10fe907f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10fe9082:;
  /* 10fe9082 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9084 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9086 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9089 push edx */
  push32((uint32_t)(EDX));
  /* 10fe908a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe908d push eax */
  push32((uint32_t)(EAX));
  /* 10fe908e call dword ptr [0x110082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f4))), 0x10fe9094u);
  /* 10fe9094 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fe9097 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe909b jne 0x10fe90a4 */
  if (!C.zf) goto L_10fe90a4;
  /* 10fe909d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe909f jmp 0x10fe9151 */
  goto L_10fe9151;
L_10fe90a4:;
  /* 10fe90a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe90ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe90ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe90b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe90b3 call 0x10fdcd30 */
  push32(0x10fe90b8u); f_10fdcd30();
  /* 10fe90b8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10fe90bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe90be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe90c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fe90c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe90cb jmp 0x10fe90e4 */
  goto L_10fe90e4;
  /* 10fe90cd mov eax, 1 */
  EAX = (0x1u);
  /* 10fe90d2 ret  */
  ESPCHK(0x10fe8fd0u, _esp0);
  ESP += 4; return;
  /* 10fe90d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe90d6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fe90dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe90e4:;
  /* 10fe90e4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe90e8 jne 0x10fe90ee */
  if (!C.zf) goto L_10fe90ee;
  /* 10fe90ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe90ec jmp 0x10fe9151 */
  goto L_10fe9151;
L_10fe90ee:;
  /* 10fe90ee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe90f1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe90f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe90f5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe90f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe90f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe90fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe90fd push edx */
  push32((uint32_t)(EDX));
  /* 10fe90fe call dword ptr [0x110082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f4))), 0x10fe9104u);
  /* 10fe9104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9106 jne 0x10fe910c */
  if (!C.zf) goto L_10fe910c;
  /* 10fe9108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe910a jmp 0x10fe9151 */
  goto L_10fe9151;
L_10fe910c:;
  /* 10fe910c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9110 jne 0x10fe912d */
  if (!C.zf) goto L_10fe912d;
  /* 10fe9112 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9114 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9116 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe9118 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe911b push eax */
  push32((uint32_t)(EAX));
  /* 10fe911c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe911e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe9121 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9122 call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe9128u);
  /* 10fe9128 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe912b jmp 0x10fe914a */
  goto L_10fe914a;
L_10fe912d:;
  /* 10fe912d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe9130 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9131 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe9134 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9135 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe9137 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe913a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe913b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe913d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe9140 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9141 call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe9147u);
  /* 10fe9147 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fe914a:;
  /* 10fe914a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe914d jmp 0x10fe9151 */
  goto L_10fe9151;
L_10fe914f:;
  /* 10fe914f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe9151:;
  /* 10fe9151 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10fe9154 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9157 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fe915e pop edi */
  EDI = (pop32());
  /* 10fe915f pop esi */
  ESI = (pop32());
  /* 10fe9160 pop ebx */
  EBX = (pop32());
  /* 10fe9161 mov esp, ebp */
  ESP = (EBP);
  /* 10fe9163 pop ebp */
  EBP = (pop32());
  /* 10fe9164 ret  */
  ESPCHK(0x10fe8fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019170 @ 0x10fe9170 (398 bytes, 140 insns) */
void f_10fe9170(void) {
  FTRACE(0x10fe9170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9170 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9171 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe9175 push 0x11001f38 */
  push32((uint32_t)(0x11001f38u));
  /* 10fe917a push 0x10fe2c98 */
  push32((uint32_t)(0x10fe2c98u));
  /* 10fe917f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fe9185 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fe918d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9190 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe9191 push esi */
  push32((uint32_t)(ESI));
  /* 10fe9192 push edi */
  push32((uint32_t)(EDI));
  /* 10fe9193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe9196 cmp dword ptr [0x11005b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe919d jne 0x10fe91e2 */
  if (!C.zf) goto L_10fe91e2;
  /* 10fe919f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe91a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe91a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe91a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe91a7 call dword ptr [0x110082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082dc))), 0x10fe91adu);
  /* 10fe91ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe91af je 0x10fe91bd */
  if (C.zf) goto L_10fe91bd;
  /* 10fe91b1 mov dword ptr [0x11005b18], 1 */
  w32((uint32_t)(0x11005b18), (0x1u));
  /* 10fe91bb jmp 0x10fe91e2 */
  goto L_10fe91e2;
L_10fe91bd:;
  /* 10fe91bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe91bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe91c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe91c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe91c5 call dword ptr [0x110082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f4))), 0x10fe91cbu);
  /* 10fe91cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe91cd je 0x10fe91db */
  if (C.zf) goto L_10fe91db;
  /* 10fe91cf mov dword ptr [0x11005b18], 2 */
  w32((uint32_t)(0x11005b18), (0x2u));
  /* 10fe91d9 jmp 0x10fe91e2 */
  goto L_10fe91e2;
L_10fe91db:;
  /* 10fe91db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe91dd jmp 0x10fe9301 */
  goto L_10fe9301;
L_10fe91e2:;
  /* 10fe91e2 cmp dword ptr [0x11005b18], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11005b18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe91e9 jne 0x10fe9206 */
  if (!C.zf) goto L_10fe9206;
  /* 10fe91eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe91ee push eax */
  push32((uint32_t)(EAX));
  /* 10fe91ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe91f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe91f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe91f6 push edx */
  push32((uint32_t)(EDX));
  /* 10fe91f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe91fa push eax */
  push32((uint32_t)(EAX));
  /* 10fe91fb call dword ptr [0x110082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f4))), 0x10fe9201u);
  /* 10fe9201 jmp 0x10fe9301 */
  goto L_10fe9301;
L_10fe9206:;
  /* 10fe9206 cmp dword ptr [0x11005b18], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11005b18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe920d jne 0x10fe92ff */
  if (!C.zf) goto L_10fe92ff;
  /* 10fe9213 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9217 jne 0x10fe9222 */
  if (!C.zf) goto L_10fe9222;
  /* 10fe9219 mov ecx, dword ptr [0x110059c8] */
  ECX = (r32((uint32_t)(0x110059c8)));
  /* 10fe921f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10fe9222:;
  /* 10fe9222 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9229 push edx */
  push32((uint32_t)(EDX));
  /* 10fe922a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe922d push eax */
  push32((uint32_t)(EAX));
  /* 10fe922e call dword ptr [0x110082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082dc))), 0x10fe9234u);
  /* 10fe9234 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fe9237 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe923b jne 0x10fe9244 */
  if (!C.zf) goto L_10fe9244;
  /* 10fe923d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe923f jmp 0x10fe9301 */
  goto L_10fe9301;
L_10fe9244:;
  /* 10fe9244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe924b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe924e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe9250 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9253 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe9255 call 0x10fdcd30 */
  push32(0x10fe925au); f_10fdcd30();
  /* 10fe925a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10fe925d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe9260 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe9263 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fe9266 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe926d jmp 0x10fe9286 */
  goto L_10fe9286;
  /* 10fe926f mov eax, 1 */
  EAX = (0x1u);
  /* 10fe9274 ret  */
  ESPCHK(0x10fe9170u, _esp0);
  ESP += 4; return;
  /* 10fe9275 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe9278 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fe927f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe9286:;
  /* 10fe9286 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe928a jne 0x10fe9290 */
  if (!C.zf) goto L_10fe9290;
  /* 10fe928c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe928e jmp 0x10fe9301 */
  goto L_10fe9301;
L_10fe9290:;
  /* 10fe9290 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe9293 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9294 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe9297 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9298 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe929b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe929c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe929f push edx */
  push32((uint32_t)(EDX));
  /* 10fe92a0 call dword ptr [0x110082dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082dc))), 0x10fe92a6u);
  /* 10fe92a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe92a8 jne 0x10fe92ae */
  if (!C.zf) goto L_10fe92ae;
  /* 10fe92aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe92ac jmp 0x10fe9301 */
  goto L_10fe9301;
L_10fe92ae:;
  /* 10fe92ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe92b2 jne 0x10fe92d6 */
  if (!C.zf) goto L_10fe92d6;
  /* 10fe92b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe92b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe92b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe92ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe92bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe92be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe92c1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe92c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe92c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe92ca push ecx */
  push32((uint32_t)(ECX));
  /* 10fe92cb call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe92d1u);
  /* 10fe92d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe92d4 jmp 0x10fe92fa */
  goto L_10fe92fa;
L_10fe92d6:;
  /* 10fe92d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe92d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe92da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe92dd push edx */
  push32((uint32_t)(EDX));
  /* 10fe92de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe92e1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe92e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe92e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe92e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe92e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe92ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe92f0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe92f1 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe92f7u);
  /* 10fe92f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fe92fa:;
  /* 10fe92fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe92fd jmp 0x10fe9301 */
  goto L_10fe9301;
L_10fe92ff:;
  /* 10fe92ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe9301:;
  /* 10fe9301 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10fe9304 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9307 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fe930e pop edi */
  EDI = (pop32());
  /* 10fe930f pop esi */
  ESI = (pop32());
  /* 10fe9310 pop ebx */
  EBX = (pop32());
  /* 10fe9311 mov esp, ebp */
  ESP = (EBP);
  /* 10fe9313 pop ebp */
  EBP = (pop32());
  /* 10fe9314 ret  */
  ESPCHK(0x10fe9170u, _esp0);
  ESP += 4; return;
}

/* FUN_10019320 @ 0x10fe9320 (11 bytes, 6 insns) */
void f_10fe9320(void) {
  FTRACE(0x10fe9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9320 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9321 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9326 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9329 pop ebp */
  EBP = (pop32());
  /* 10fe932a ret  */
  ESPCHK(0x10fe9320u, _esp0);
  ESP += 4; return;
}

/* FUN_10019330 @ 0x10fe9330 (147 bytes, 43 insns) */
void f_10fe9330(void) {
  FTRACE(0x10fe9330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9330 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9331 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9333 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9334 cmp dword ptr [0x110059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe933b jne 0x10fe9357 */
  if (!C.zf) goto L_10fe9357;
  /* 10fe933d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9341 jl 0x10fe9352 */
  if ((C.sf!=C.of)) goto L_10fe9352;
  /* 10fe9343 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9347 jg 0x10fe9352 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe9352;
  /* 10fe9349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe934c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe934f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fe9352:;
  /* 10fe9352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9355 jmp 0x10fe93bf */
  goto L_10fe93bf;
L_10fe9357:;
  /* 10fe9357 push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe935c call dword ptr [0x110083a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083a4))), 0x10fe9362u);
  /* 10fe9362 cmp dword ptr [0x11005b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9369 je 0x10fe9389 */
  if (C.zf) goto L_10fe9389;
  /* 10fe936b push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe9370 call dword ptr [0x11008394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008394))), 0x10fe9376u);
  /* 10fe9376 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe9378 call 0x10fdd590 */
  push32(0x10fe937du); f_10fdd590();
  /* 10fe937d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9380 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe9387 jmp 0x10fe9390 */
  goto L_10fe9390;
L_10fe9389:;
  /* 10fe9389 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fe9390:;
  /* 10fe9390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9393 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9394 call 0x10fe93d0 */
  push32(0x10fe9399u); f_10fe93d0();
  /* 10fe9399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe939c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe939f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe93a3 je 0x10fe93b1 */
  if (C.zf) goto L_10fe93b1;
  /* 10fe93a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe93a7 call 0x10fdd630 */
  push32(0x10fe93acu); f_10fdd630();
  /* 10fe93ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe93af jmp 0x10fe93bc */
  goto L_10fe93bc;
L_10fe93b1:;
  /* 10fe93b1 push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe93b6 call dword ptr [0x11008394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008394))), 0x10fe93bcu);
L_10fe93bc:;
  /* 10fe93bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10fe93bf:;
  /* 10fe93bf mov esp, ebp */
  ESP = (EBP);
  /* 10fe93c1 pop ebp */
  EBP = (pop32());
  /* 10fe93c2 ret  */
  ESPCHK(0x10fe9330u, _esp0);
  ESP += 4; return;
}

/* FUN_100193d0 @ 0x10fe93d0 (299 bytes, 91 insns) */
void f_10fe93d0(void) {
  FTRACE(0x10fe93d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe93d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe93d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe93d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe93d6 cmp dword ptr [0x110059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe93dd jne 0x10fe93fc */
  if (!C.zf) goto L_10fe93fc;
  /* 10fe93df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe93e3 jl 0x10fe93f4 */
  if ((C.sf!=C.of)) goto L_10fe93f4;
  /* 10fe93e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe93e9 jg 0x10fe93f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe93f4;
  /* 10fe93eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe93ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe93f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fe93f4:;
  /* 10fe93f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe93f7 jmp 0x10fe94f7 */
  goto L_10fe94f7;
L_10fe93fc:;
  /* 10fe93fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9403 jge 0x10fe9443 */
  if ((C.sf==C.of)) goto L_10fe9443;
  /* 10fe9405 cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe940c jle 0x10fe9421 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe9421;
  /* 10fe940e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9413 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9414 call 0x10fdfba0 */
  push32(0x10fe9419u); f_10fdfba0();
  /* 10fe9419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe941c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe941f jmp 0x10fe9435 */
  goto L_10fe9435;
L_10fe9421:;
  /* 10fe9421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9424 mov eax, dword ptr [0x11003c98] */
  EAX = (r32((uint32_t)(0x11003c98)));
  /* 10fe9429 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe942b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10fe942f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe9432 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fe9435:;
  /* 10fe9435 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9439 jne 0x10fe9443 */
  if (!C.zf) goto L_10fe9443;
  /* 10fe943b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe943e jmp 0x10fe94f7 */
  goto L_10fe94f7;
L_10fe9443:;
  /* 10fe9443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9446 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10fe9449 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe944f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe9455 mov eax, dword ptr [0x11003c98] */
  EAX = (r32((uint32_t)(0x11003c98)));
  /* 10fe945a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe945c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10fe9460 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe9466 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe9468 je 0x10fe948c */
  if (C.zf) goto L_10fe948c;
  /* 10fe946a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe946d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10fe9470 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe9476 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10fe9479 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fe947c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10fe947f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10fe9483 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10fe948a jmp 0x10fe949d */
  goto L_10fe949d;
L_10fe948c:;
  /* 10fe948c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fe948f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10fe9492 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10fe9496 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10fe949d:;
  /* 10fe949d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe949f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe94a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10fe94a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10fe94a6 push edx */
  push32((uint32_t)(EDX));
  /* 10fe94a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe94aa push eax */
  push32((uint32_t)(EAX));
  /* 10fe94ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10fe94ae push ecx */
  push32((uint32_t)(ECX));
  /* 10fe94af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe94b4 mov edx, dword ptr [0x110059b8] */
  EDX = (r32((uint32_t)(0x110059b8)));
  /* 10fe94ba push edx */
  push32((uint32_t)(EDX));
  /* 10fe94bb call 0x10fe1f80 */
  push32(0x10fe94c0u); f_10fe1f80();
  /* 10fe94c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe94c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe94c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe94ca jne 0x10fe94d1 */
  if (!C.zf) goto L_10fe94d1;
  /* 10fe94cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe94cf jmp 0x10fe94f7 */
  goto L_10fe94f7;
L_10fe94d1:;
  /* 10fe94d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe94d5 jne 0x10fe94e1 */
  if (!C.zf) goto L_10fe94e1;
  /* 10fe94d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe94da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe94df jmp 0x10fe94f7 */
  goto L_10fe94f7;
L_10fe94e1:;
  /* 10fe94e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe94e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe94e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10fe94ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe94f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10fe94f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10fe94f7:;
  /* 10fe94f7 mov esp, ebp */
  ESP = (EBP);
  /* 10fe94f9 pop ebp */
  EBP = (pop32());
  /* 10fe94fa ret  */
  ESPCHK(0x10fe93d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10fe9500 (52 bytes, 19 insns) */
void f_10fe9500(void) {
  FTRACE(0x10fe9500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9500 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fe9504 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fe9508 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe950a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10fe950e jne 0x10fe9519 */
  if (!C.zf) goto L_10fe9519;
  /* 10fe9510 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10fe9514 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe9516 ret 0x10 */
  ESPCHK(0x10fe9500u, _esp0);
  ESP += 20; return;
L_10fe9519:;
  /* 10fe9519 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe951a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe951c mov ebx, eax */
  EBX = (EAX);
  /* 10fe951e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fe9522 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe9526 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9528 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fe952c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe952e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9530 pop ebx */
  EBX = (pop32());
  /* 10fe9531 ret 0x10 */
  ESPCHK(0x10fe9500u, _esp0);
  ESP += 20; return;
}

/* FUN_10019540 @ 0x10fe9540 (46 bytes, 18 insns) */
void f_10fe9540(void) {
  FTRACE(0x10fe9540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9540 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9541 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9543 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9544 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe9546 call 0x10fdd590 */
  push32(0x10fe954bu); f_10fdd590();
  /* 10fe954b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe954e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9551 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9552 call 0x10fe9570 */
  push32(0x10fe9557u); f_10fe9570();
  /* 10fe9557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe955a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe955d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fe955f call 0x10fdd630 */
  push32(0x10fe9564u); f_10fdd630();
  /* 10fe9564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe956a mov esp, ebp */
  ESP = (EBP);
  /* 10fe956c pop ebp */
  EBP = (pop32());
  /* 10fe956d ret  */
  ESPCHK(0x10fe9540u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10fe9570 (198 bytes, 69 insns) */
void f_10fe9570(void) {
  FTRACE(0x10fe9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9570 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9571 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9576 mov eax, dword ptr [0x110057d4] */
  EAX = (r32((uint32_t)(0x110057d4)));
  /* 10fe957b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe957e cmp dword ptr [0x110072e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110072e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9585 jne 0x10fe958e */
  if (!C.zf) goto L_10fe958e;
  /* 10fe9587 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9589 jmp 0x10fe9632 */
  goto L_10fe9632;
L_10fe958e:;
  /* 10fe958e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9592 jne 0x10fe95b6 */
  if (!C.zf) goto L_10fe95b6;
  /* 10fe9594 cmp dword ptr [0x110057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe959b je 0x10fe95b6 */
  if (C.zf) goto L_10fe95b6;
  /* 10fe959d call 0x10fe9690 */
  push32(0x10fe95a2u); f_10fe9690();
  /* 10fe95a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe95a4 je 0x10fe95ad */
  if (C.zf) goto L_10fe95ad;
  /* 10fe95a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe95a8 jmp 0x10fe9632 */
  goto L_10fe9632;
L_10fe95ad:;
  /* 10fe95ad mov ecx, dword ptr [0x110057d4] */
  ECX = (r32((uint32_t)(0x110057d4)));
  /* 10fe95b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fe95b6:;
  /* 10fe95b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe95ba je 0x10fe9630 */
  if (C.zf) goto L_10fe9630;
  /* 10fe95bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe95c0 je 0x10fe9630 */
  if (C.zf) goto L_10fe9630;
  /* 10fe95c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe95c5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe95c6 call 0x10fdc9c0 */
  push32(0x10fe95cbu); f_10fdc9c0();
  /* 10fe95cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe95ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe95d1:;
  /* 10fe95d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe95d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe95d7 je 0x10fe9630 */
  if (C.zf) goto L_10fe9630;
  /* 10fe95d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe95dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe95de push edx */
  push32((uint32_t)(EDX));
  /* 10fe95df call 0x10fdc9c0 */
  push32(0x10fe95e4u); f_10fdc9c0();
  /* 10fe95e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe95e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe95ea jbe 0x10fe9625 */
  if ((C.cf||C.zf)) goto L_10fe9625;
  /* 10fe95ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe95ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe95f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe95f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10fe95f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe95fb jne 0x10fe9625 */
  if (!C.zf) goto L_10fe9625;
  /* 10fe95fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9600 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9604 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9608 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe960a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe960b call 0x10fe9640 */
  push32(0x10fe9610u); f_10fe9640();
  /* 10fe9610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9615 jne 0x10fe9625 */
  if (!C.zf) goto L_10fe9625;
  /* 10fe9617 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe961a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe961c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe961f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10fe9623 jmp 0x10fe9632 */
  goto L_10fe9632;
L_10fe9625:;
  /* 10fe9625 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9628 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe962b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe962e jmp 0x10fe95d1 */
  goto L_10fe95d1;
L_10fe9630:;
  /* 10fe9630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe9632:;
  /* 10fe9632 mov esp, ebp */
  ESP = (EBP);
  /* 10fe9634 pop ebp */
  EBP = (pop32());
  /* 10fe9635 ret  */
  ESPCHK(0x10fe9570u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10fe9640 (79 bytes, 32 insns) */
void f_10fe9640(void) {
  FTRACE(0x10fe9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9640 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9641 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9643 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9644 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9648 jne 0x10fe964e */
  if (!C.zf) goto L_10fe964e;
  /* 10fe964a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe964c jmp 0x10fe968b */
  goto L_10fe968b;
L_10fe964e:;
  /* 10fe964e mov eax, dword ptr [0x11006ea4] */
  EAX = (r32((uint32_t)(0x11006ea4)));
  /* 10fe9653 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9654 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe9657 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9658 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe965b push edx */
  push32((uint32_t)(EDX));
  /* 10fe965c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe965f push eax */
  push32((uint32_t)(EAX));
  /* 10fe9660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9663 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9664 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9666 mov edx, dword ptr [0x11007144] */
  EDX = (r32((uint32_t)(0x11007144)));
  /* 10fe966c push edx */
  push32((uint32_t)(EDX));
  /* 10fe966d call 0x10fe9740 */
  push32(0x10fe9672u); f_10fe9740();
  /* 10fe9672 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9675 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe9678 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe967c jne 0x10fe9685 */
  if (!C.zf) goto L_10fe9685;
  /* 10fe967e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10fe9683 jmp 0x10fe968b */
  goto L_10fe968b;
L_10fe9685:;
  /* 10fe9685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9688 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10fe968b:;
  /* 10fe968b mov esp, ebp */
  ESP = (EBP);
  /* 10fe968d pop ebp */
  EBP = (pop32());
  /* 10fe968e ret  */
  ESPCHK(0x10fe9640u, _esp0);
  ESP += 4; return;
}

/* FUN_10019690 @ 0x10fe9690 (174 bytes, 66 insns) */
void f_10fe9690(void) {
  FTRACE(0x10fe9690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9690 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9691 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9696 mov eax, dword ptr [0x110057dc] */
  EAX = (r32((uint32_t)(0x110057dc)));
  /* 10fe969b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe969e:;
  /* 10fe969e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe96a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe96a4 je 0x10fe9738 */
  if (C.zf) goto L_10fe9738;
  /* 10fe96aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe96b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe96b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe96b9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe96ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe96be call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe96c4u);
  /* 10fe96c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe96c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe96cb jne 0x10fe96d2 */
  if (!C.zf) goto L_10fe96d2;
  /* 10fe96cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe96d0 jmp 0x10fe973a */
  goto L_10fe973a;
L_10fe96d2:;
  /* 10fe96d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10fe96d4 push 0x11001f44 */
  push32((uint32_t)(0x11001f44u));
  /* 10fe96d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe96db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe96de push ecx */
  push32((uint32_t)(ECX));
  /* 10fe96df call 0x10fd9b90 */
  push32(0x10fe96e4u); f_10fd9b90();
  /* 10fe96e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe96e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe96ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe96ee jne 0x10fe96f5 */
  if (!C.zf) goto L_10fe96f5;
  /* 10fe96f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe96f3 jmp 0x10fe973a */
  goto L_10fe973a;
L_10fe96f5:;
  /* 10fe96f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe96f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe96fc push edx */
  push32((uint32_t)(EDX));
  /* 10fe96fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9700 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9701 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe9703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9706 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe9708 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9709 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe970b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe970d call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe9713u);
  /* 10fe9713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9715 jne 0x10fe971c */
  if (!C.zf) goto L_10fe971c;
  /* 10fe9717 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe971a jmp 0x10fe973a */
  goto L_10fe973a;
L_10fe971c:;
  /* 10fe971c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe971e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9721 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9722 call 0x10fe9b90 */
  push32(0x10fe9727u); f_10fe9b90();
  /* 10fe9727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe972a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe972d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9730 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe9733 jmp 0x10fe969e */
  goto L_10fe969e;
L_10fe9738:;
  /* 10fe9738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe973a:;
  /* 10fe973a mov esp, ebp */
  ESP = (EBP);
  /* 10fe973c pop ebp */
  EBP = (pop32());
  /* 10fe973d ret  */
  ESPCHK(0x10fe9690u, _esp0);
  ESP += 4; return;
}

/* FUN_10019740 @ 0x10fe9740 (970 bytes, 340 insns) */
void f_10fe9740(void) {
  FTRACE(0x10fe9740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9740 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9741 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9743 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe9745 push 0x11001f98 */
  push32((uint32_t)(0x11001f98u));
  /* 10fe974a push 0x10fe2c98 */
  push32((uint32_t)(0x10fe2c98u));
  /* 10fe974f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fe9755 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9756 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fe975d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9760 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe9761 push esi */
  push32((uint32_t)(ESI));
  /* 10fe9762 push edi */
  push32((uint32_t)(EDI));
  /* 10fe9763 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe9766 cmp dword ptr [0x11005b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe976d jne 0x10fe97c6 */
  if (!C.zf) goto L_10fe97c6;
  /* 10fe976f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9771 push 0x110015f4 */
  push32((uint32_t)(0x110015f4u));
  /* 10fe9776 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9778 push 0x110015f4 */
  push32((uint32_t)(0x110015f4u));
  /* 10fe977d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe977f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9781 call dword ptr [0x110082d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082d4))), 0x10fe9787u);
  /* 10fe9787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9789 je 0x10fe9797 */
  if (C.zf) goto L_10fe9797;
  /* 10fe978b mov dword ptr [0x11005b1c], 1 */
  w32((uint32_t)(0x11005b1c), (0x1u));
  /* 10fe9795 jmp 0x10fe97c6 */
  goto L_10fe97c6;
L_10fe9797:;
  /* 10fe9797 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9799 push 0x110015f0 */
  push32((uint32_t)(0x110015f0u));
  /* 10fe979e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe97a0 push 0x110015f0 */
  push32((uint32_t)(0x110015f0u));
  /* 10fe97a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe97a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe97a9 call dword ptr [0x110082d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082d8))), 0x10fe97afu);
  /* 10fe97af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe97b1 je 0x10fe97bf */
  if (C.zf) goto L_10fe97bf;
  /* 10fe97b3 mov dword ptr [0x11005b1c], 2 */
  w32((uint32_t)(0x11005b1c), (0x2u));
  /* 10fe97bd jmp 0x10fe97c6 */
  goto L_10fe97c6;
L_10fe97bf:;
  /* 10fe97bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe97c1 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe97c6:;
  /* 10fe97c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe97ca jle 0x10fe97df */
  if ((C.zf||C.sf!=C.of)) goto L_10fe97df;
  /* 10fe97cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe97cf push eax */
  push32((uint32_t)(EAX));
  /* 10fe97d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe97d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe97d4 call 0x10fe9b40 */
  push32(0x10fe97d9u); f_10fe9b40();
  /* 10fe97d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe97dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10fe97df:;
  /* 10fe97df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe97e3 jle 0x10fe97f8 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe97f8;
  /* 10fe97e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe97e8 push edx */
  push32((uint32_t)(EDX));
  /* 10fe97e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe97ec push eax */
  push32((uint32_t)(EAX));
  /* 10fe97ed call 0x10fe9b40 */
  push32(0x10fe97f2u); f_10fe9b40();
  /* 10fe97f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe97f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10fe97f8:;
  /* 10fe97f8 cmp dword ptr [0x11005b1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11005b1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe97ff jne 0x10fe9824 */
  if (!C.zf) goto L_10fe9824;
  /* 10fe9801 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe9804 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9805 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe9808 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9809 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe980c push eax */
  push32((uint32_t)(EAX));
  /* 10fe980d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe9810 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9811 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9814 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9818 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9819 call dword ptr [0x110082d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082d8))), 0x10fe981fu);
  /* 10fe981f jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9824:;
  /* 10fe9824 cmp dword ptr [0x11005b1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11005b1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe982b jne 0x10fe9b22 */
  if (!C.zf) goto L_10fe9b22;
  /* 10fe9831 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9835 jne 0x10fe9840 */
  if (!C.zf) goto L_10fe9840;
  /* 10fe9837 mov ecx, dword ptr [0x110059c8] */
  ECX = (r32((uint32_t)(0x110059c8)));
  /* 10fe983d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10fe9840:;
  /* 10fe9840 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9844 je 0x10fe9850 */
  if (C.zf) goto L_10fe9850;
  /* 10fe9846 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe984a jne 0x10fe99cc */
  if (!C.zf) goto L_10fe99cc;
L_10fe9850:;
  /* 10fe9850 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe9853 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9856 jne 0x10fe9862 */
  if (!C.zf) goto L_10fe9862;
  /* 10fe9858 mov eax, 2 */
  EAX = (0x2u);
  /* 10fe985d jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9862:;
  /* 10fe9862 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9866 jle 0x10fe9872 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe9872;
  /* 10fe9868 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe986d jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9872:;
  /* 10fe9872 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9876 jle 0x10fe9882 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe9882;
  /* 10fe9878 mov eax, 3 */
  EAX = (0x3u);
  /* 10fe987d jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9882:;
  /* 10fe9882 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10fe9885 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9886 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe9889 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe988a call dword ptr [0x11008330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008330))), 0x10fe9890u);
  /* 10fe9890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9892 jne 0x10fe989b */
  if (!C.zf) goto L_10fe989b;
  /* 10fe9894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9896 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe989b:;
  /* 10fe989b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe989f jne 0x10fe98a7 */
  if (!C.zf) goto L_10fe98a7;
  /* 10fe98a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe98a5 je 0x10fe98d4 */
  if (C.zf) goto L_10fe98d4;
L_10fe98a7:;
  /* 10fe98a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe98ab jne 0x10fe98b3 */
  if (!C.zf) goto L_10fe98b3;
  /* 10fe98ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe98b1 je 0x10fe98d4 */
  if (C.zf) goto L_10fe98d4;
L_10fe98b3:;
  /* 10fe98b3 push 0x11001f58 */
  push32((uint32_t)(0x11001f58u));
  /* 10fe98b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe98ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10fe98bf push 0x11001f50 */
  push32((uint32_t)(0x11001f50u));
  /* 10fe98c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe98c6 call 0x10fd8c50 */
  push32(0x10fe98cbu); f_10fd8c50();
  /* 10fe98cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe98ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe98d1 jne 0x10fe98d4 */
  if (!C.zf) goto L_10fe98d4;
  /* 10fe98d3 int3  */
  x86_unimpl("int3 @ 0x10fe98d3");
L_10fe98d4:;
  /* 10fe98d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe98d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe98d8 jne 0x10fe989b */
  if (!C.zf) goto L_10fe989b;
  /* 10fe98da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe98de jle 0x10fe9953 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe9953;
  /* 10fe98e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe98e4 jae 0x10fe98f0 */
  if (!C.cf) goto L_10fe98f0;
  /* 10fe98e6 mov eax, 3 */
  EAX = (0x3u);
  /* 10fe98eb jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe98f0:;
  /* 10fe98f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10fe98f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10fe98f6 jmp 0x10fe9901 */
  goto L_10fe9901;
L_10fe98f8:;
  /* 10fe98f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe98fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe98fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10fe9901:;
  /* 10fe9901 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe9904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9906 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe9908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe990a je 0x10fe9949 */
  if (C.zf) goto L_10fe9949;
  /* 10fe990c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe990f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe9911 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10fe9914 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9916 je 0x10fe9949 */
  if (C.zf) goto L_10fe9949;
  /* 10fe9918 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe991b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe991d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe991f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe9922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9924 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe9926 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9928 jl 0x10fe9947 */
  if ((C.sf!=C.of)) goto L_10fe9947;
  /* 10fe992a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe992d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe992f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe9931 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe9934 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe9936 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fe9939 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe993b jg 0x10fe9947 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe9947;
  /* 10fe993d mov eax, 2 */
  EAX = (0x2u);
  /* 10fe9942 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9947:;
  /* 10fe9947 jmp 0x10fe98f8 */
  goto L_10fe98f8;
L_10fe9949:;
  /* 10fe9949 mov eax, 3 */
  EAX = (0x3u);
  /* 10fe994e jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9953:;
  /* 10fe9953 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9957 jle 0x10fe99cc */
  if ((C.zf||C.sf!=C.of)) goto L_10fe99cc;
  /* 10fe9959 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe995d jae 0x10fe9969 */
  if (!C.cf) goto L_10fe9969;
  /* 10fe995f mov eax, 1 */
  EAX = (0x1u);
  /* 10fe9964 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9969:;
  /* 10fe9969 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10fe996c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10fe996f jmp 0x10fe997a */
  goto L_10fe997a;
L_10fe9971:;
  /* 10fe9971 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe9974 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9977 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10fe997a:;
  /* 10fe997a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe997d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe997f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe9981 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9983 je 0x10fe99c2 */
  if (C.zf) goto L_10fe99c2;
  /* 10fe9985 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe9988 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe998a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fe998d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe998f je 0x10fe99c2 */
  if (C.zf) goto L_10fe99c2;
  /* 10fe9991 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe9994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9996 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe9998 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe999b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe999d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe999f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe99a1 jl 0x10fe99c0 */
  if ((C.sf!=C.of)) goto L_10fe99c0;
  /* 10fe99a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe99a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe99a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe99aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fe99ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe99af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fe99b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe99b4 jg 0x10fe99c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe99c0;
  /* 10fe99b6 mov eax, 2 */
  EAX = (0x2u);
  /* 10fe99bb jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe99c0:;
  /* 10fe99c0 jmp 0x10fe9971 */
  goto L_10fe9971;
L_10fe99c2:;
  /* 10fe99c2 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe99c7 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe99cc:;
  /* 10fe99cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe99ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe99d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe99d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe99d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe99d7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe99d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10fe99da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe99dd push eax */
  push32((uint32_t)(EAX));
  /* 10fe99de call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe99e4u);
  /* 10fe99e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fe99e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe99eb jne 0x10fe99f4 */
  if (!C.zf) goto L_10fe99f4;
  /* 10fe99ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe99ef jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe99f4:;
  /* 10fe99f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe99fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe99fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe9a00 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9a03 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe9a05 call 0x10fdcd30 */
  push32(0x10fe9a0au); f_10fdcd30();
  /* 10fe9a0a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10fe9a0d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe9a10 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10fe9a13 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fe9a16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe9a1d jmp 0x10fe9a36 */
  goto L_10fe9a36;
  /* 10fe9a1f mov eax, 1 */
  EAX = (0x1u);
  /* 10fe9a24 ret  */
  ESPCHK(0x10fe9740u, _esp0);
  ESP += 4; return;
  /* 10fe9a25 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe9a28 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fe9a2f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe9a36:;
  /* 10fe9a36 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9a3a jne 0x10fe9a43 */
  if (!C.zf) goto L_10fe9a43;
  /* 10fe9a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9a3e jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9a43:;
  /* 10fe9a43 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe9a46 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9a47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe9a4a push eax */
  push32((uint32_t)(EAX));
  /* 10fe9a4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe9a4e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9a4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe9a52 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9a55 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe9a58 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9a59 call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe9a5fu);
  /* 10fe9a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9a61 jne 0x10fe9a6a */
  if (!C.zf) goto L_10fe9a6a;
  /* 10fe9a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9a65 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9a6a:;
  /* 10fe9a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe9a6e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe9a71 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9a72 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe9a75 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9a76 push 9 */
  push32((uint32_t)(0x9u));
  /* 10fe9a78 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe9a7b push eax */
  push32((uint32_t)(EAX));
  /* 10fe9a7c call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe9a82u);
  /* 10fe9a82 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe9a85 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9a89 jne 0x10fe9a92 */
  if (!C.zf) goto L_10fe9a92;
  /* 10fe9a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9a8d jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9a92:;
  /* 10fe9a92 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe9a99 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe9a9c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe9a9e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9aa1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe9aa3 call 0x10fdcd30 */
  push32(0x10fe9aa8u); f_10fdcd30();
  /* 10fe9aa8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10fe9aab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe9aae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10fe9ab1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10fe9ab4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe9abb jmp 0x10fe9ad4 */
  goto L_10fe9ad4;
  /* 10fe9abd mov eax, 1 */
  EAX = (0x1u);
  /* 10fe9ac2 ret  */
  ESPCHK(0x10fe9740u, _esp0);
  ESP += 4; return;
  /* 10fe9ac3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe9ac6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10fe9acd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe9ad4:;
  /* 10fe9ad4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9ad8 jne 0x10fe9ade */
  if (!C.zf) goto L_10fe9ade;
  /* 10fe9ada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9adc jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9ade:;
  /* 10fe9ade mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe9ae1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9ae2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe9ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9ae6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe9ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9aea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe9aed push edx */
  push32((uint32_t)(EDX));
  /* 10fe9aee push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe9af0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe9af3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9af4 call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe9afau);
  /* 10fe9afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9afc jne 0x10fe9b02 */
  if (!C.zf) goto L_10fe9b02;
  /* 10fe9afe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9b00 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9b02:;
  /* 10fe9b02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe9b05 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9b06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe9b09 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9b0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe9b0d push eax */
  push32((uint32_t)(EAX));
  /* 10fe9b0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe9b11 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9b12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9b15 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9b19 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9b1a call dword ptr [0x110082d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082d4))), 0x10fe9b20u);
  /* 10fe9b20 jmp 0x10fe9b24 */
  goto L_10fe9b24;
L_10fe9b22:;
  /* 10fe9b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe9b24:;
  /* 10fe9b24 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10fe9b27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9b2a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fe9b31 pop edi */
  EDI = (pop32());
  /* 10fe9b32 pop esi */
  ESI = (pop32());
  /* 10fe9b33 pop ebx */
  EBX = (pop32());
  /* 10fe9b34 mov esp, ebp */
  ESP = (EBP);
  /* 10fe9b36 pop ebp */
  EBP = (pop32());
  /* 10fe9b37 ret  */
  ESPCHK(0x10fe9740u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b40 @ 0x10fe9b40 (80 bytes, 32 insns) */
void f_10fe9b40(void) {
  FTRACE(0x10fe9b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9b41 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9b46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9b49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe9b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9b4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe9b52:;
  /* 10fe9b52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9b55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9b58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9b5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe9b5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9b60 je 0x10fe9b77 */
  if (C.zf) goto L_10fe9b77;
  /* 10fe9b62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9b65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe9b68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9b6a je 0x10fe9b77 */
  if (C.zf) goto L_10fe9b77;
  /* 10fe9b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9b6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9b72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe9b75 jmp 0x10fe9b52 */
  goto L_10fe9b52;
L_10fe9b77:;
  /* 10fe9b77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9b7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe9b7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9b7f jne 0x10fe9b89 */
  if (!C.zf) goto L_10fe9b89;
  /* 10fe9b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9b84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9b87 jmp 0x10fe9b8c */
  goto L_10fe9b8c;
L_10fe9b89:;
  /* 10fe9b89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10fe9b8c:;
  /* 10fe9b8c mov esp, ebp */
  ESP = (EBP);
  /* 10fe9b8e pop ebp */
  EBP = (pop32());
  /* 10fe9b8f ret  */
  ESPCHK(0x10fe9b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b90 @ 0x10fe9b90 (736 bytes, 224 insns) */
void f_10fe9b90(void) {
  FTRACE(0x10fe9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9b91 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9b93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9b96 push esi */
  push32((uint32_t)(ESI));
  /* 10fe9b97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9b9b je 0x10fe9bbc */
  if (C.zf) goto L_10fe9bbc;
  /* 10fe9b9d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10fe9b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9ba2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9ba3 call 0x10fe9fe0 */
  push32(0x10fe9ba8u); f_10fe9fe0();
  /* 10fe9ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9bab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fe9bae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9bb2 je 0x10fe9bbc */
  if (C.zf) goto L_10fe9bbc;
  /* 10fe9bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9bb7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9bba jne 0x10fe9bc4 */
  if (!C.zf) goto L_10fe9bc4;
L_10fe9bbc:;
  /* 10fe9bbc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9bbf jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9bc4:;
  /* 10fe9bc4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe9bc7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fe9bcb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe9bcd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9bcf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10fe9bd0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe9bd3 mov ecx, dword ptr [0x110057d4] */
  ECX = (r32((uint32_t)(0x110057d4)));
  /* 10fe9bd9 cmp ecx, dword ptr [0x110057d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110057d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9bdf jne 0x10fe9bf5 */
  if (!C.zf) goto L_10fe9bf5;
  /* 10fe9be1 mov edx, dword ptr [0x110057d4] */
  EDX = (r32((uint32_t)(0x110057d4)));
  /* 10fe9be7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9be8 call 0x10fe9ef0 */
  push32(0x10fe9bedu); f_10fe9ef0();
  /* 10fe9bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9bf0 mov dword ptr [0x110057d4], eax */
  w32((uint32_t)(0x110057d4), (EAX));
L_10fe9bf5:;
  /* 10fe9bf5 cmp dword ptr [0x110057d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9bfc jne 0x10fe9cb5 */
  if (!C.zf) goto L_10fe9cb5;
  /* 10fe9c02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c06 je 0x10fe9c27 */
  if (C.zf) goto L_10fe9c27;
  /* 10fe9c08 cmp dword ptr [0x110057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c0f je 0x10fe9c27 */
  if (C.zf) goto L_10fe9c27;
  /* 10fe9c11 call 0x10fe9690 */
  push32(0x10fe9c16u); f_10fe9690();
  /* 10fe9c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9c18 je 0x10fe9c22 */
  if (C.zf) goto L_10fe9c22;
  /* 10fe9c1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9c1d jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9c22:;
  /* 10fe9c22 jmp 0x10fe9cb5 */
  goto L_10fe9cb5;
L_10fe9c27:;
  /* 10fe9c27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c2b je 0x10fe9c34 */
  if (C.zf) goto L_10fe9c34;
  /* 10fe9c2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9c2f jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9c34:;
  /* 10fe9c34 cmp dword ptr [0x110057d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c3b jne 0x10fe9c74 */
  if (!C.zf) goto L_10fe9c74;
  /* 10fe9c3d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10fe9c42 push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9c49 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe9c4b call 0x10fd9b90 */
  push32(0x10fe9c50u); f_10fd9b90();
  /* 10fe9c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9c53 mov dword ptr [0x110057d4], eax */
  w32((uint32_t)(0x110057d4), (EAX));
  /* 10fe9c58 cmp dword ptr [0x110057d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c5f jne 0x10fe9c69 */
  if (!C.zf) goto L_10fe9c69;
  /* 10fe9c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9c64 jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9c69:;
  /* 10fe9c69 mov eax, dword ptr [0x110057d4] */
  EAX = (r32((uint32_t)(0x110057d4)));
  /* 10fe9c6e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10fe9c74:;
  /* 10fe9c74 cmp dword ptr [0x110057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c7b jne 0x10fe9cb5 */
  if (!C.zf) goto L_10fe9cb5;
  /* 10fe9c7d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10fe9c82 push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9c89 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe9c8b call 0x10fd9b90 */
  push32(0x10fe9c90u); f_10fd9b90();
  /* 10fe9c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9c93 mov dword ptr [0x110057dc], eax */
  w32((uint32_t)(0x110057dc), (EAX));
  /* 10fe9c98 cmp dword ptr [0x110057dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110057dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9c9f jne 0x10fe9ca9 */
  if (!C.zf) goto L_10fe9ca9;
  /* 10fe9ca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9ca4 jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9ca9:;
  /* 10fe9ca9 mov ecx, dword ptr [0x110057dc] */
  ECX = (r32((uint32_t)(0x110057dc)));
  /* 10fe9caf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10fe9cb5:;
  /* 10fe9cb5 mov edx, dword ptr [0x110057d4] */
  EDX = (r32((uint32_t)(0x110057d4)));
  /* 10fe9cbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fe9cbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe9cc1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9cc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9cc9 call 0x10fe9e70 */
  push32(0x10fe9cceu); f_10fe9e70();
  /* 10fe9cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9cd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe9cd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9cd8 jl 0x10fe9d71 */
  if ((C.sf!=C.of)) goto L_10fe9d71;
  /* 10fe9cde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9ce1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9ce4 je 0x10fe9d71 */
  if (C.zf) goto L_10fe9d71;
  /* 10fe9cea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9cee je 0x10fe9d63 */
  if (C.zf) goto L_10fe9d63;
  /* 10fe9cf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9cf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9cf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9cf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe9cfb push edx */
  push32((uint32_t)(EDX));
  /* 10fe9cfc call 0x10fda620 */
  push32(0x10fe9d01u); f_10fda620();
  /* 10fe9d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9d04 jmp 0x10fe9d0f */
  goto L_10fe9d0f;
L_10fe9d06:;
  /* 10fe9d06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9d0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe9d0f:;
  /* 10fe9d0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9d19 je 0x10fe9d30 */
  if (C.zf) goto L_10fe9d30;
  /* 10fe9d1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10fe9d2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10fe9d2e jmp 0x10fe9d06 */
  goto L_10fe9d06;
L_10fe9d30:;
  /* 10fe9d30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10fe9d35 push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9d3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10fe9d42 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9d43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d46 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9d47 call 0x10fda020 */
  push32(0x10fe9d4cu); f_10fda020();
  /* 10fe9d4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9d4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe9d52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9d56 je 0x10fe9d61 */
  if (C.zf) goto L_10fe9d61;
  /* 10fe9d58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d5b mov dword ptr [0x110057d4], edx */
  w32((uint32_t)(0x110057d4), (EDX));
L_10fe9d61:;
  /* 10fe9d61 jmp 0x10fe9d6f */
  goto L_10fe9d6f;
L_10fe9d63:;
  /* 10fe9d63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9d6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10fe9d6f:;
  /* 10fe9d6f jmp 0x10fe9de4 */
  goto L_10fe9de4;
L_10fe9d71:;
  /* 10fe9d71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9d75 jne 0x10fe9ddd */
  if (!C.zf) goto L_10fe9ddd;
  /* 10fe9d77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9d7b jge 0x10fe9d85 */
  if ((C.sf==C.of)) goto L_10fe9d85;
  /* 10fe9d7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe9d82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe9d85:;
  /* 10fe9d85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10fe9d8a push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9d8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9d91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9d94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10fe9d9b push edx */
  push32((uint32_t)(EDX));
  /* 10fe9d9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9d9f push eax */
  push32((uint32_t)(EAX));
  /* 10fe9da0 call 0x10fda020 */
  push32(0x10fe9da5u); f_10fda020();
  /* 10fe9da5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9da8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe9dab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9daf jne 0x10fe9db9 */
  if (!C.zf) goto L_10fe9db9;
  /* 10fe9db1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9db4 jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9db9:;
  /* 10fe9db9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9dbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9dc2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10fe9dc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9dc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9dcb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10fe9dd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9dd6 mov dword ptr [0x110057d4], eax */
  w32((uint32_t)(0x110057d4), (EAX));
  /* 10fe9ddb jmp 0x10fe9de4 */
  goto L_10fe9de4;
L_10fe9ddd:;
  /* 10fe9ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9ddf jmp 0x10fe9e6b */
  goto L_10fe9e6b;
L_10fe9de4:;
  /* 10fe9de4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9de8 je 0x10fe9e69 */
  if (C.zf) goto L_10fe9e69;
  /* 10fe9dea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10fe9def push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9df4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9df9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9dfa call 0x10fdc9c0 */
  push32(0x10fe9dffu); f_10fdc9c0();
  /* 10fe9dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e05 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9e06 call 0x10fd9b90 */
  push32(0x10fe9e0bu); f_10fd9b90();
  /* 10fe9e0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe9e11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9e15 je 0x10fe9e69 */
  if (C.zf) goto L_10fe9e69;
  /* 10fe9e17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9e1a push edx */
  push32((uint32_t)(EDX));
  /* 10fe9e1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9e1e push eax */
  push32((uint32_t)(EAX));
  /* 10fe9e1f call 0x10fdcb40 */
  push32(0x10fe9e24u); f_10fdcb40();
  /* 10fe9e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe9e2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9e2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9e30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe9e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9e38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fe9e3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9e3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe9e44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe9e47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe9e49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9e4b not edx */
  EDX = (~(EDX));
  /* 10fe9e4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10fe9e50 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9e51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9e54 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9e55 call dword ptr [0x110082d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082d0))), 0x10fe9e5bu);
  /* 10fe9e5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9e5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9e61 call 0x10fda620 */
  push32(0x10fe9e66u); f_10fda620();
  /* 10fe9e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe9e69:;
  /* 10fe9e69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe9e6b:;
  /* 10fe9e6b pop esi */
  ESI = (pop32());
  /* 10fe9e6c mov esp, ebp */
  ESP = (EBP);
  /* 10fe9e6e pop ebp */
  EBP = (pop32());
  /* 10fe9e6f ret  */
  ESPCHK(0x10fe9b90u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10fe9e70 (124 bytes, 47 insns) */
void f_10fe9e70(void) {
  FTRACE(0x10fe9e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9e71 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9e74 mov eax, dword ptr [0x110057d4] */
  EAX = (r32((uint32_t)(0x110057d4)));
  /* 10fe9e79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe9e7c jmp 0x10fe9e87 */
  goto L_10fe9e87;
L_10fe9e7e:;
  /* 10fe9e7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9e81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9e84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe9e87:;
  /* 10fe9e87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9e8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9e8d je 0x10fe9eda */
  if (C.zf) goto L_10fe9eda;
  /* 10fe9e8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9e92 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9e93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9e96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe9e98 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9e9c push eax */
  push32((uint32_t)(EAX));
  /* 10fe9e9d call 0x10fe9640 */
  push32(0x10fe9ea2u); f_10fe9640();
  /* 10fe9ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe9ea7 jne 0x10fe9ed8 */
  if (!C.zf) goto L_10fe9ed8;
  /* 10fe9ea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9eac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe9eae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9eb1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10fe9eb5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9eb8 je 0x10fe9eca */
  if (C.zf) goto L_10fe9eca;
  /* 10fe9eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9ebd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe9ebf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9ec2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10fe9ec6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9ec8 jne 0x10fe9ed8 */
  if (!C.zf) goto L_10fe9ed8;
L_10fe9eca:;
  /* 10fe9eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9ecd sub eax, dword ptr [0x110057d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110057d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9ed3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10fe9ed6 jmp 0x10fe9ee8 */
  goto L_10fe9ee8;
L_10fe9ed8:;
  /* 10fe9ed8 jmp 0x10fe9e7e */
  goto L_10fe9e7e;
L_10fe9eda:;
  /* 10fe9eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe9edd sub eax, dword ptr [0x110057d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110057d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9ee3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10fe9ee6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10fe9ee8:;
  /* 10fe9ee8 mov esp, ebp */
  ESP = (EBP);
  /* 10fe9eea pop ebp */
  EBP = (pop32());
  /* 10fe9eeb ret  */
  ESPCHK(0x10fe9e70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10fe9ef0 (238 bytes, 80 insns) */
void f_10fe9ef0(void) {
  FTRACE(0x10fe9ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe9ef6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe9efd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9f00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe9f03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9f07 jne 0x10fe9f10 */
  if (!C.zf) goto L_10fe9f10;
  /* 10fe9f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe9f0b jmp 0x10fe9fda */
  goto L_10fe9fda;
L_10fe9f10:;
  /* 10fe9f10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9f13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe9f15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9f18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9f1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe9f1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe9f20 je 0x10fe9f2d */
  if (C.zf) goto L_10fe9f2d;
  /* 10fe9f22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9f25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9f28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fe9f2b jmp 0x10fe9f10 */
  goto L_10fe9f10;
L_10fe9f2d:;
  /* 10fe9f2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10fe9f32 push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9f39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe9f3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10fe9f43 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9f44 call 0x10fd9b90 */
  push32(0x10fe9f49u); f_10fd9b90();
  /* 10fe9f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9f4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe9f4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9f52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe9f55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9f59 jne 0x10fe9f65 */
  if (!C.zf) goto L_10fe9f65;
  /* 10fe9f5b push 9 */
  push32((uint32_t)(0x9u));
  /* 10fe9f5d call 0x10fd8b00 */
  push32(0x10fe9f62u); f_10fd8b00();
  /* 10fe9f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe9f65:;
  /* 10fe9f65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9f68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fe9f6b:;
  /* 10fe9f6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9f6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9f71 je 0x10fe9fce */
  if (C.zf) goto L_10fe9fce;
  /* 10fe9f73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10fe9f78 push 0x11001fb0 */
  push32((uint32_t)(0x11001fb0u));
  /* 10fe9f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe9f7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9f82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe9f84 push edx */
  push32((uint32_t)(EDX));
  /* 10fe9f85 call 0x10fdc9c0 */
  push32(0x10fe9f8au); f_10fdc9c0();
  /* 10fe9f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9f8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9f90 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9f91 call 0x10fd9b90 */
  push32(0x10fe9f96u); f_10fd9b90();
  /* 10fe9f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9f99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9f9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe9f9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9fa1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9fa4 je 0x10fe9fba */
  if (C.zf) goto L_10fe9fba;
  /* 10fe9fa6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9fa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe9fab push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9fac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9faf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe9fb1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9fb2 call 0x10fdcb40 */
  push32(0x10fe9fb7u); f_10fdcb40();
  /* 10fe9fb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe9fba:;
  /* 10fe9fba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe9fbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9fc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe9fc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9fc6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9fc9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe9fcc jmp 0x10fe9f6b */
  goto L_10fe9f6b;
L_10fe9fce:;
  /* 10fe9fce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe9fd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe9fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe9fda:;
  /* 10fe9fda mov esp, ebp */
  ESP = (EBP);
  /* 10fe9fdc pop ebp */
  EBP = (pop32());
  /* 10fe9fdd ret  */
  ESPCHK(0x10fe9ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fe0 @ 0x10fe9fe0 (237 bytes, 81 insns) */
void f_10fe9fe0(void) {
  FTRACE(0x10fe9fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe9fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe9fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe9fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9fe4 cmp dword ptr [0x11006f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11006f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe9feb jne 0x10fea002 */
  if (!C.zf) goto L_10fea002;
  /* 10fe9fed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe9ff0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe9ff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe9ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe9ff5 call 0x10fea0e0 */
  push32(0x10fe9ffau); f_10fea0e0();
  /* 10fe9ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe9ffd jmp 0x10fea0c9 */
  goto L_10fea0c9;
L_10fea002:;
  /* 10fea002 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fea004 call 0x10fdd590 */
  push32(0x10fea009u); f_10fdd590();
  /* 10fea009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea00c jmp 0x10fea017 */
  goto L_10fea017;
L_10fea00e:;
  /* 10fea00e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea011 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea014 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10fea017:;
  /* 10fea017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea01a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10fea01e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10fea022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fea025 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fea02b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fea02d je 0x10fea0ab */
  if (C.zf) goto L_10fea0ab;
  /* 10fea02f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fea032 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fea037 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fea039 mov cl, byte ptr [eax + 0x11007041] */
  CL = (r8((uint32_t)(EAX + 0x11007041)));
  /* 10fea03f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10fea042 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fea044 je 0x10fea096 */
  if (C.zf) goto L_10fea096;
  /* 10fea046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea049 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea04c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fea04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea052 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fea054 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fea056 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fea058 jne 0x10fea068 */
  if (!C.zf) goto L_10fea068;
  /* 10fea05a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fea05c call 0x10fdd630 */
  push32(0x10fea061u); f_10fdd630();
  /* 10fea061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fea066 jmp 0x10fea0c9 */
  goto L_10fea0c9;
L_10fea068:;
  /* 10fea068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fea06b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fea071 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10fea074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea077 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fea079 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fea07b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fea07d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fea080 jne 0x10fea094 */
  if (!C.zf) goto L_10fea094;
  /* 10fea082 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fea084 call 0x10fdd630 */
  push32(0x10fea089u); f_10fdd630();
  /* 10fea089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea08c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea08f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fea092 jmp 0x10fea0c9 */
  goto L_10fea0c9;
L_10fea094:;
  /* 10fea094 jmp 0x10fea0a6 */
  goto L_10fea0a6;
L_10fea096:;
  /* 10fea096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fea099 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fea09f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fea0a2 jne 0x10fea0a6 */
  if (!C.zf) goto L_10fea0a6;
  /* 10fea0a4 jmp 0x10fea0ab */
  goto L_10fea0ab;
L_10fea0a6:;
  /* 10fea0a6 jmp 0x10fea00e */
  goto L_10fea00e;
L_10fea0ab:;
  /* 10fea0ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fea0ad call 0x10fdd630 */
  push32(0x10fea0b2u); f_10fdd630();
  /* 10fea0b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea0b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fea0b8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fea0bd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fea0c0 jne 0x10fea0c7 */
  if (!C.zf) goto L_10fea0c7;
  /* 10fea0c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fea0c5 jmp 0x10fea0c9 */
  goto L_10fea0c9;
L_10fea0c7:;
  /* 10fea0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fea0c9:;
  /* 10fea0c9 mov esp, ebp */
  ESP = (EBP);
  /* 10fea0cb pop ebp */
  EBP = (pop32());
  /* 10fea0cc ret  */
  ESPCHK(0x10fe9fe0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10fea0e0 (193 bytes, 87 insns) */
void f_10fea0e0(void) {
  FTRACE(0x10fea0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fea0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fea0e2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10fea0e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10fea0e7 mov ebx, eax */
  EBX = (EAX);
  /* 10fea0e9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10fea0ec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fea0f0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10fea0f6 je 0x10fea10b */
  if (C.zf) goto L_10fea10b;
L_10fea0f8:;
  /* 10fea0f8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10fea0fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fea0fb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fea0fd je 0x10fea0d0 */
  if (C.zf) { jmp_ind(0x10fea0d0u); return; }
  /* 10fea0ff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10fea101 je 0x10fea154 */
  if (C.zf) goto L_10fea154;
  /* 10fea103 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10fea109 jne 0x10fea0f8 */
  if (!C.zf) goto L_10fea0f8;
L_10fea10b:;
  /* 10fea10b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10fea10d push edi */
  push32((uint32_t)(EDI));
  /* 10fea10e mov eax, ebx */
  EAX = (EBX);
  /* 10fea110 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10fea113 push esi */
  push32((uint32_t)(ESI));
  /* 10fea114 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10fea116:;
  /* 10fea116 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10fea118 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10fea11d mov eax, ecx */
  EAX = (ECX);
  /* 10fea11f mov esi, edi */
  ESI = (EDI);
  /* 10fea121 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10fea123 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea125 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea127 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fea12a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fea12d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10fea12f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10fea131 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fea134 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10fea13a jne 0x10fea158 */
  if (!C.zf) goto L_10fea158;
  /* 10fea13c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10fea141 je 0x10fea116 */
  if (C.zf) goto L_10fea116;
  /* 10fea143 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10fea148 jne 0x10fea152 */
  if (!C.zf) goto L_10fea152;
  /* 10fea14a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10fea150 jne 0x10fea116 */
  if (!C.zf) goto L_10fea116;
L_10fea152:;
  /* 10fea152 pop esi */
  ESI = (pop32());
  /* 10fea153 pop edi */
  EDI = (pop32());
L_10fea154:;
  /* 10fea154 pop ebx */
  EBX = (pop32());
  /* 10fea155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fea157 ret  */
  ESPCHK(0x10fea0e0u, _esp0);
  ESP += 4; return;
L_10fea158:;
  /* 10fea158 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10fea15b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fea15d je 0x10fea195 */
  if (C.zf) goto L_10fea195;
  /* 10fea15f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10fea161 je 0x10fea152 */
  if (C.zf) goto L_10fea152;
  /* 10fea163 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fea165 je 0x10fea18e */
  if (C.zf) goto L_10fea18e;
  /* 10fea167 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10fea169 je 0x10fea152 */
  if (C.zf) goto L_10fea152;
  /* 10fea16b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10fea16e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fea170 je 0x10fea187 */
  if (C.zf) goto L_10fea187;
  /* 10fea172 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10fea174 je 0x10fea152 */
  if (C.zf) goto L_10fea152;
  /* 10fea176 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fea178 je 0x10fea180 */
  if (C.zf) goto L_10fea180;
  /* 10fea17a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10fea17c je 0x10fea152 */
  if (C.zf) goto L_10fea152;
  /* 10fea17e jmp 0x10fea116 */
  goto L_10fea116;
L_10fea180:;
  /* 10fea180 pop esi */
  ESI = (pop32());
  /* 10fea181 pop edi */
  EDI = (pop32());
  /* 10fea182 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10fea185 pop ebx */
  EBX = (pop32());
  /* 10fea186 ret  */
  ESPCHK(0x10fea0e0u, _esp0);
  ESP += 4; return;
L_10fea187:;
  /* 10fea187 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10fea18a pop esi */
  ESI = (pop32());
  /* 10fea18b pop edi */
  EDI = (pop32());
  /* 10fea18c pop ebx */
  EBX = (pop32());
  /* 10fea18d ret  */
  ESPCHK(0x10fea0e0u, _esp0);
  ESP += 4; return;
L_10fea18e:;
  /* 10fea18e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10fea191 pop esi */
  ESI = (pop32());
  /* 10fea192 pop edi */
  EDI = (pop32());
  /* 10fea193 pop ebx */
  EBX = (pop32());
  /* 10fea194 ret  */
  ESPCHK(0x10fea0e0u, _esp0);
  ESP += 4; return;
L_10fea195:;
  /* 10fea195 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10fea198 pop esi */
  ESI = (pop32());
  /* 10fea199 pop edi */
  EDI = (pop32());
  /* 10fea19a pop ebx */
  EBX = (pop32());
  /* 10fea19b ret  */
  ESPCHK(0x10fea0e0u, _esp0);
  ESP += 4; return;
  /* 10fea19c jmp dword ptr [0x11008380] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11008380)))); return;
}

/* RtlUnwind @ 0x10fea2ec (6 bytes, 1 insns) */
void f_10fea2ec(void) {
  FTRACE(0x10fea2ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fea2ec jmp dword ptr [0x1100830c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1100830c)))); return;
}

