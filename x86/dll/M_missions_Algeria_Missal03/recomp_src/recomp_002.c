#include "recomp.h"

/* FUN_10011b00 @ 0x10281b00 (878 bytes, 273 insns) */
void f_10281b00(void) {
  FTRACE(0x10281b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10281b01 mov ebp, esp */
  EBP = (ESP);
  /* 10281b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281b06 push esi */
  push32((uint32_t)(ESI));
  /* 10281b07 mov eax, dword ptr [0x1029fc98] */
  EAX = (r32((uint32_t)(0x1029fc98)));
  /* 10281b0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10281b0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10281b16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10281b1d jmp 0x10281b28 */
  goto L_10281b28;
L_10281b1f:;
  /* 10281b1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281b22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281b25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10281b28:;
  /* 10281b28 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281b2c jae 0x10281b61 */
  if (!C.cf) goto L_10281b61;
  /* 10281b2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281b31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281b34 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10281b37 push ecx */
  push32((uint32_t)(ECX));
  /* 10281b38 call 0x10277980 */
  push32(0x10281b3du); f_10277980();
  /* 10281b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281b40 mov esi, eax */
  ESI = (EAX);
  /* 10281b42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281b45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281b48 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10281b4c push ecx */
  push32((uint32_t)(ECX));
  /* 10281b4d call 0x10277980 */
  push32(0x10281b52u); f_10277980();
  /* 10281b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281b55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281b58 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10281b5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10281b5f jmp 0x10281b1f */
  goto L_10281b1f;
L_10281b61:;
  /* 10281b61 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10281b68 jmp 0x10281b73 */
  goto L_10281b73;
L_10281b6a:;
  /* 10281b6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281b70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10281b73:;
  /* 10281b73 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281b77 jae 0x10281bad */
  if (!C.cf) goto L_10281bad;
  /* 10281b79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281b7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281b7f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10281b83 push eax */
  push32((uint32_t)(EAX));
  /* 10281b84 call 0x10277980 */
  push32(0x10281b89u); f_10277980();
  /* 10281b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281b8c mov esi, eax */
  ESI = (EAX);
  /* 10281b8e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281b91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281b94 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10281b98 push eax */
  push32((uint32_t)(EAX));
  /* 10281b99 call 0x10277980 */
  push32(0x10281b9eu); f_10277980();
  /* 10281b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ba1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ba4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10281ba8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10281bab jmp 0x10281b6a */
  goto L_10281b6a;
L_10281bad:;
  /* 10281bad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281bb0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10281bb6 push eax */
  push32((uint32_t)(EAX));
  /* 10281bb7 call 0x10277980 */
  push32(0x10281bbcu); f_10277980();
  /* 10281bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281bbf mov esi, eax */
  ESI = (EAX);
  /* 10281bc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281bc4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10281bca push edx */
  push32((uint32_t)(EDX));
  /* 10281bcb call 0x10277980 */
  push32(0x10281bd0u); f_10277980();
  /* 10281bd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281bd3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281bd6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10281bda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10281bdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281be0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10281be6 push edx */
  push32((uint32_t)(EDX));
  /* 10281be7 call 0x10277980 */
  push32(0x10281becu); f_10277980();
  /* 10281bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281bef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281bf2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10281bf6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10281bf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281bfc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10281c02 push ecx */
  push32((uint32_t)(ECX));
  /* 10281c03 call 0x10277980 */
  push32(0x10281c08u); f_10277980();
  /* 10281c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281c0e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10281c12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10281c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281c18 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10281c1e push edx */
  push32((uint32_t)(EDX));
  /* 10281c1f call 0x10277980 */
  push32(0x10281c24u); f_10277980();
  /* 10281c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281c2a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10281c2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10281c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10281c34 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c39 push eax */
  push32((uint32_t)(EAX));
  /* 10281c3a call 0x10274b30 */
  push32(0x10281c3fu); f_10274b30();
  /* 10281c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10281c45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281c49 je 0x10281e66 */
  if (C.zf) goto L_10281e66;
  /* 10281c4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281c52 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10281c55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281c58 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c5e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10281c61 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10281c66 mov eax, dword ptr [0x1029fc98] */
  EAX = (r32((uint32_t)(0x1029fc98)));
  /* 10281c6b push eax */
  push32((uint32_t)(EAX));
  /* 10281c6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281c6f push ecx */
  push32((uint32_t)(ECX));
  /* 10281c70 call 0x1027b430 */
  push32(0x10281c75u); f_1027b430();
  /* 10281c75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10281c7f jmp 0x10281c8a */
  goto L_10281c8a;
L_10281c81:;
  /* 10281c81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281c84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281c87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10281c8a:;
  /* 10281c8a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281c8e jae 0x10281cfe */
  if (!C.cf) goto L_10281cfe;
  /* 10281c90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281c93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281c96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281c99 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10281c9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281c9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281ca2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10281ca5 push edx */
  push32((uint32_t)(EDX));
  /* 10281ca6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281ca9 push eax */
  push32((uint32_t)(EAX));
  /* 10281caa call 0x10277b00 */
  push32(0x10281cafu); f_10277b00();
  /* 10281caf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281cb2 push eax */
  push32((uint32_t)(EAX));
  /* 10281cb3 call 0x10277980 */
  push32(0x10281cb8u); f_10277980();
  /* 10281cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281cbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281cbe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10281cc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10281cc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281cc8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281ccb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281cce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10281cd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281cd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281cd8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10281cdc push edx */
  push32((uint32_t)(EDX));
  /* 10281cdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10281ce1 call 0x10277b00 */
  push32(0x10281ce6u); f_10277b00();
  /* 10281ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ce9 push eax */
  push32((uint32_t)(EAX));
  /* 10281cea call 0x10277980 */
  push32(0x10281cefu); f_10277980();
  /* 10281cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281cf2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281cf5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10281cf9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10281cfc jmp 0x10281c81 */
  goto L_10281c81;
L_10281cfe:;
  /* 10281cfe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10281d05 jmp 0x10281d10 */
  goto L_10281d10;
L_10281d07:;
  /* 10281d07 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281d0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281d0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10281d10:;
  /* 10281d10 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281d14 jae 0x10281d86 */
  if (!C.cf) goto L_10281d86;
  /* 10281d16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281d19 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281d1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d1f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10281d23 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281d26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281d29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10281d2d push eax */
  push32((uint32_t)(EAX));
  /* 10281d2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d31 push ecx */
  push32((uint32_t)(ECX));
  /* 10281d32 call 0x10277b00 */
  push32(0x10281d37u); f_10277b00();
  /* 10281d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281d3a push eax */
  push32((uint32_t)(EAX));
  /* 10281d3b call 0x10277980 */
  push32(0x10281d40u); f_10277980();
  /* 10281d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281d43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d46 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10281d4a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10281d4d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281d50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281d53 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d56 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10281d5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281d5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281d60 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10281d64 push eax */
  push32((uint32_t)(EAX));
  /* 10281d65 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d68 push ecx */
  push32((uint32_t)(ECX));
  /* 10281d69 call 0x10277b00 */
  push32(0x10281d6eu); f_10277b00();
  /* 10281d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281d71 push eax */
  push32((uint32_t)(EAX));
  /* 10281d72 call 0x10277980 */
  push32(0x10281d77u); f_10277980();
  /* 10281d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281d7a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d7d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10281d81 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10281d84 jmp 0x10281d07 */
  goto L_10281d07;
L_10281d86:;
  /* 10281d86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281d89 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d8c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10281d92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281d95 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10281d9b push ecx */
  push32((uint32_t)(ECX));
  /* 10281d9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281d9f push edx */
  push32((uint32_t)(EDX));
  /* 10281da0 call 0x10277b00 */
  push32(0x10281da5u); f_10277b00();
  /* 10281da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281da8 push eax */
  push32((uint32_t)(EAX));
  /* 10281da9 call 0x10277980 */
  push32(0x10281daeu); f_10277980();
  /* 10281dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281db1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281db4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10281db8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10281dbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281dbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281dc1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10281dc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281dca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10281dd0 push eax */
  push32((uint32_t)(EAX));
  /* 10281dd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281dd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10281dd5 call 0x10277b00 */
  push32(0x10281ddau); f_10277b00();
  /* 10281dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ddd push eax */
  push32((uint32_t)(EAX));
  /* 10281dde call 0x10277980 */
  push32(0x10281de3u); f_10277980();
  /* 10281de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281de6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281de9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10281ded mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10281df0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281df3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281df6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10281dfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281dff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10281e05 push ecx */
  push32((uint32_t)(ECX));
  /* 10281e06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281e09 push edx */
  push32((uint32_t)(EDX));
  /* 10281e0a call 0x10277b00 */
  push32(0x10281e0fu); f_10277b00();
  /* 10281e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281e12 push eax */
  push32((uint32_t)(EAX));
  /* 10281e13 call 0x10277980 */
  push32(0x10281e18u); f_10277980();
  /* 10281e18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281e1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281e1e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10281e22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10281e25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281e28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281e2b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10281e31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281e34 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10281e3a push eax */
  push32((uint32_t)(EAX));
  /* 10281e3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281e3e push ecx */
  push32((uint32_t)(ECX));
  /* 10281e3f call 0x10277b00 */
  push32(0x10281e44u); f_10277b00();
  /* 10281e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281e47 push eax */
  push32((uint32_t)(EAX));
  /* 10281e48 call 0x10277980 */
  push32(0x10281e4du); f_10277980();
  /* 10281e4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281e50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281e53 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10281e57 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10281e5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10281e5d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10281e60 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10281e66:;
  /* 10281e66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281e69 pop esi */
  ESI = (pop32());
  /* 10281e6a mov esp, ebp */
  ESP = (EBP);
  /* 10281e6c pop ebp */
  EBP = (pop32());
  /* 10281e6d ret  */
  ESPCHK(0x10281b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e70 @ 0x10281e70 (31 bytes, 15 insns) */
void f_10281e70(void) {
  FTRACE(0x10281e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10281e71 mov ebp, esp */
  EBP = (ESP);
  /* 10281e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10281e75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10281e78 push eax */
  push32((uint32_t)(EAX));
  /* 10281e79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281e7c push ecx */
  push32((uint32_t)(ECX));
  /* 10281e7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10281e80 push edx */
  push32((uint32_t)(EDX));
  /* 10281e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281e84 push eax */
  push32((uint32_t)(EAX));
  /* 10281e85 call 0x10281e90 */
  push32(0x10281e8au); f_10281e90();
  /* 10281e8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281e8d pop ebp */
  EBP = (pop32());
  /* 10281e8e ret  */
  ESPCHK(0x10281e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x10281e90 (393 bytes, 123 insns) */
void f_10281e90(void) {
  FTRACE(0x10281e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10281e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10281e91 mov ebp, esp */
  EBP = (ESP);
  /* 10281e93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281e96 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281e9a jne 0x10281ea6 */
  if (!C.zf) goto L_10281ea6;
  /* 10281e9c mov eax, dword ptr [0x1029fc98] */
  EAX = (r32((uint32_t)(0x1029fc98)));
  /* 10281ea1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10281ea4 jmp 0x10281eac */
  goto L_10281eac;
L_10281ea6:;
  /* 10281ea6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10281ea9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10281eac:;
  /* 10281eac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10281eaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10281eb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10281eb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10281eb8 push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 10281ebd call dword ptr [0x102a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a330c))), 0x10281ec3u);
  /* 10281ec3 cmp dword ptr [0x102a0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281eca je 0x10281eea */
  if (C.zf) goto L_10281eea;
  /* 10281ecc push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 10281ed1 call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10281ed7u);
  /* 10281ed7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10281ed9 call 0x10278550 */
  push32(0x10281edeu); f_10278550();
  /* 10281ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ee1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10281ee8 jmp 0x10281ef1 */
  goto L_10281ef1;
L_10281eea:;
  /* 10281eea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10281ef1:;
  /* 10281ef1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281ef5 jbe 0x10281fe2 */
  if ((C.cf||C.zf)) goto L_10281fe2;
  /* 10281efb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281efe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10281f00 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10281f03 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10281f07 je 0x10281f11 */
  if (C.zf) goto L_10281f11;
  /* 10281f09 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10281f0d je 0x10281f16 */
  if (C.zf) goto L_10281f16;
  /* 10281f0f jmp 0x10281f70 */
  goto L_10281f70;
L_10281f11:;
  /* 10281f11 jmp 0x10281fe2 */
  goto L_10281fe2;
L_10281f16:;
  /* 10281f16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281f1c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10281f1f mov dword ptr [0x102a0910], 0 */
  w32((uint32_t)(0x102a0910), (0x0u));
  /* 10281f29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10281f2f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281f32 jne 0x10281f47 */
  if (!C.zf) goto L_10281f47;
  /* 10281f34 mov dword ptr [0x102a0910], 1 */
  w32((uint32_t)(0x102a0910), (0x1u));
  /* 10281f3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281f44 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10281f47:;
  /* 10281f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10281f4a push ecx */
  push32((uint32_t)(ECX));
  /* 10281f4b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10281f4e push edx */
  push32((uint32_t)(EDX));
  /* 10281f4f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10281f52 push eax */
  push32((uint32_t)(EAX));
  /* 10281f53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10281f56 push ecx */
  push32((uint32_t)(ECX));
  /* 10281f57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10281f5c push eax */
  push32((uint32_t)(EAX));
  /* 10281f5d call 0x10282020 */
  push32(0x10281f62u); f_10282020();
  /* 10281f62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281f6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10281f6e jmp 0x10281fdd */
  goto L_10281fdd;
L_10281f70:;
  /* 10281f70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10281f75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10281f77 mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 10281f7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10281f7f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10281f83 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10281f89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10281f8b je 0x10281fb8 */
  if (C.zf) goto L_10281fb8;
  /* 10281f8d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281f91 jbe 0x10281fb8 */
  if ((C.cf||C.zf)) goto L_10281fb8;
  /* 10281f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281f96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281f99 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10281f9b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10281f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281fa3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10281fa6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281fa9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281fac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10281faf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281fb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281fb5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10281fb8:;
  /* 10281fb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281fbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281fbe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10281fc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10281fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10281fc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281fc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10281fcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10281fce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10281fd1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10281fd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10281fd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10281fda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10281fdd:;
  /* 10281fdd jmp 0x10281ef1 */
  goto L_10281ef1;
L_10281fe2:;
  /* 10281fe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10281fe6 je 0x10281ff4 */
  if (C.zf) goto L_10281ff4;
  /* 10281fe8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10281fea call 0x102785f0 */
  push32(0x10281fefu); f_102785f0();
  /* 10281fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10281ff2 jmp 0x10281fff */
  goto L_10281fff;
L_10281ff4:;
  /* 10281ff4 push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 10281ff9 call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10281fffu);
L_10281fff:;
  /* 10281fff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282003 jbe 0x10282013 */
  if ((C.cf||C.zf)) goto L_10282013;
  /* 10282005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282008 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1028200b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028200e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282011 jmp 0x10282015 */
  goto L_10282015;
L_10282013:;
  /* 10282013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10282015:;
  /* 10282015 mov esp, ebp */
  ESP = (EBP);
  /* 10282017 pop ebp */
  EBP = (pop32());
  /* 10282018 ret  */
  ESPCHK(0x10281e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x10282020 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10282020(void) {
  FTRACE(0x10282020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282020 push ebp */
  push32((uint32_t)(EBP));
  /* 10282021 mov ebp, esp */
  EBP = (ESP);
  /* 10282023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282026 push esi */
  push32((uint32_t)(ESI));
  /* 10282027 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1028202b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1028202e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282031 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282034 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10282037 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028203b ja 0x10282588 */
  if ((!C.cf&&!C.zf)) goto L_10282588;
  /* 10282041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10282046 mov dl, byte ptr [eax + 0x102825e9] */
  DL = (r8((uint32_t)(EAX + 0x102825e9)));
  /* 1028204c jmp dword ptr [edx*4 + 0x1028258d] */
  switch (EDX) {
    case 0: goto L_10282566;
    case 1: goto L_10282075;
    case 2: goto L_102820bb;
    case 3: goto L_10282208;
    case 4: goto L_10282230;
    case 5: goto L_102822cf;
    case 6: goto L_1028233b;
    case 7: goto L_10282364;
    case 8: goto L_102823a5;
    case 9: goto L_10282487;
    case 10: goto L_102824ee;
    case 11: goto L_1028253b;
    case 12: goto L_10282053;
    case 13: goto L_10282098;
    case 14: goto L_102820de;
    case 15: goto L_102821de;
    case 16: goto L_10282275;
    case 17: goto L_102822a2;
    case 18: goto L_102822f7;
    case 19: goto L_1028237b;
    case 20: goto L_10282429;
    case 21: goto L_102824b8;
    case 22: goto L_10282588;
    default: x86_unimpl("switch@0x1028204c out of table"); return;
  }
L_10282053:;
  /* 10282053 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282056 push ecx */
  push32((uint32_t)(ECX));
  /* 10282057 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028205a push edx */
  push32((uint32_t)(EDX));
  /* 1028205b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028205e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10282061 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282064 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10282067 push eax */
  push32((uint32_t)(EAX));
  /* 10282068 call 0x10282640 */
  push32(0x1028206du); f_10282640();
  /* 1028206d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282070 jmp 0x10282588 */
  goto L_10282588;
L_10282075:;
  /* 10282075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282078 push ecx */
  push32((uint32_t)(ECX));
  /* 10282079 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028207c push edx */
  push32((uint32_t)(EDX));
  /* 1028207d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282080 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10282083 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282086 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1028208a push eax */
  push32((uint32_t)(EAX));
  /* 1028208b call 0x10282640 */
  push32(0x10282090u); f_10282640();
  /* 10282090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282093 jmp 0x10282588 */
  goto L_10282588;
L_10282098:;
  /* 10282098 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028209b push ecx */
  push32((uint32_t)(ECX));
  /* 1028209c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028209f push edx */
  push32((uint32_t)(EDX));
  /* 102820a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102820a3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102820a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102820a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 102820ad push eax */
  push32((uint32_t)(EAX));
  /* 102820ae call 0x10282640 */
  push32(0x102820b3u); f_10282640();
  /* 102820b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102820b6 jmp 0x10282588 */
  goto L_10282588;
L_102820bb:;
  /* 102820bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 102820be push ecx */
  push32((uint32_t)(ECX));
  /* 102820bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 102820c2 push edx */
  push32((uint32_t)(EDX));
  /* 102820c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102820c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102820c9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102820cc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 102820d0 push eax */
  push32((uint32_t)(EAX));
  /* 102820d1 call 0x10282640 */
  push32(0x102820d6u); f_10282640();
  /* 102820d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102820d9 jmp 0x10282588 */
  goto L_10282588;
L_102820de:;
  /* 102820de cmp dword ptr [0x102a0910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102820e5 je 0x10282166 */
  if (C.zf) goto L_10282166;
  /* 102820e7 mov dword ptr [0x102a0910], 0 */
  w32((uint32_t)(0x102a0910), (0x0u));
  /* 102820f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102820f4 push ecx */
  push32((uint32_t)(ECX));
  /* 102820f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102820f8 push edx */
  push32((uint32_t)(EDX));
  /* 102820f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102820fc push eax */
  push32((uint32_t)(EAX));
  /* 102820fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282100 push ecx */
  push32((uint32_t)(ECX));
  /* 10282101 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282104 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1028210a push eax */
  push32((uint32_t)(EAX));
  /* 1028210b call 0x102827f0 */
  push32(0x10282110u); f_102827f0();
  /* 10282110 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282113 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282116 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282119 jne 0x10282120 */
  if (!C.zf) goto L_10282120;
  /* 1028211b jmp 0x10282588 */
  goto L_10282588;
L_10282120:;
  /* 10282120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282123 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282125 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10282128 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028212b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1028212d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282130 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282133 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10282135 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282138 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1028213a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1028213d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282140 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10282142 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282145 push ecx */
  push32((uint32_t)(ECX));
  /* 10282146 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282149 push edx */
  push32((uint32_t)(EDX));
  /* 1028214a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028214d push eax */
  push32((uint32_t)(EAX));
  /* 1028214e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282151 push ecx */
  push32((uint32_t)(ECX));
  /* 10282152 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282155 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1028215b push eax */
  push32((uint32_t)(EAX));
  /* 1028215c call 0x102827f0 */
  push32(0x10282161u); f_102827f0();
  /* 10282161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282164 jmp 0x102821d9 */
  goto L_102821d9;
L_10282166:;
  /* 10282166 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282169 push ecx */
  push32((uint32_t)(ECX));
  /* 1028216a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028216d push edx */
  push32((uint32_t)(EDX));
  /* 1028216e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282171 push eax */
  push32((uint32_t)(EAX));
  /* 10282172 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282175 push ecx */
  push32((uint32_t)(ECX));
  /* 10282176 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282179 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1028217f push eax */
  push32((uint32_t)(EAX));
  /* 10282180 call 0x102827f0 */
  push32(0x10282185u); f_102827f0();
  /* 10282185 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282188 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028218b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028218e jne 0x10282195 */
  if (!C.zf) goto L_10282195;
  /* 10282190 jmp 0x10282588 */
  goto L_10282588;
L_10282195:;
  /* 10282195 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282198 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1028219a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1028219d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102821a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102821a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102821a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102821a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 102821aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 102821ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102821af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102821b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102821b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 102821b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102821ba push ecx */
  push32((uint32_t)(ECX));
  /* 102821bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102821be push edx */
  push32((uint32_t)(EDX));
  /* 102821bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102821c2 push eax */
  push32((uint32_t)(EAX));
  /* 102821c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102821c6 push ecx */
  push32((uint32_t)(ECX));
  /* 102821c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102821ca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 102821d0 push eax */
  push32((uint32_t)(EAX));
  /* 102821d1 call 0x102827f0 */
  push32(0x102821d6u); f_102827f0();
  /* 102821d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102821d9:;
  /* 102821d9 jmp 0x10282588 */
  goto L_10282588;
L_102821de:;
  /* 102821de mov ecx, dword ptr [0x102a0910] */
  ECX = (r32((uint32_t)(0x102a0910)));
  /* 102821e4 mov dword ptr [0x102a0920], ecx */
  w32((uint32_t)(0x102a0920), (ECX));
  /* 102821ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102821ed push edx */
  push32((uint32_t)(EDX));
  /* 102821ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102821f1 push eax */
  push32((uint32_t)(EAX));
  /* 102821f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 102821f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102821f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 102821fa push edx */
  push32((uint32_t)(EDX));
  /* 102821fb call 0x10282690 */
  push32(0x10282200u); f_10282690();
  /* 10282200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282203 jmp 0x10282588 */
  goto L_10282588;
L_10282208:;
  /* 10282208 mov eax, dword ptr [0x102a0910] */
  EAX = (r32((uint32_t)(0x102a0910)));
  /* 1028220d mov dword ptr [0x102a0920], eax */
  w32((uint32_t)(0x102a0920), (EAX));
  /* 10282212 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282215 push ecx */
  push32((uint32_t)(ECX));
  /* 10282216 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282219 push edx */
  push32((uint32_t)(EDX));
  /* 1028221a push 2 */
  push32((uint32_t)(0x2u));
  /* 1028221c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028221f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10282222 push ecx */
  push32((uint32_t)(ECX));
  /* 10282223 call 0x10282690 */
  push32(0x10282228u); f_10282690();
  /* 10282228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028222b jmp 0x10282588 */
  goto L_10282588;
L_10282230:;
  /* 10282230 mov edx, dword ptr [0x102a0910] */
  EDX = (r32((uint32_t)(0x102a0910)));
  /* 10282236 mov dword ptr [0x102a0920], edx */
  w32((uint32_t)(0x102a0920), (EDX));
  /* 1028223c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028223f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10282242 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10282243 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10282248 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1028224a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1028224d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282251 jne 0x1028225a */
  if (!C.zf) goto L_1028225a;
  /* 10282253 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1028225a:;
  /* 1028225a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028225d push edx */
  push32((uint32_t)(EDX));
  /* 1028225e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282261 push eax */
  push32((uint32_t)(EAX));
  /* 10282262 push 2 */
  push32((uint32_t)(0x2u));
  /* 10282264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282267 push ecx */
  push32((uint32_t)(ECX));
  /* 10282268 call 0x10282690 */
  push32(0x1028226du); f_10282690();
  /* 1028226d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282270 jmp 0x10282588 */
  goto L_10282588;
L_10282275:;
  /* 10282275 mov edx, dword ptr [0x102a0910] */
  EDX = (r32((uint32_t)(0x102a0910)));
  /* 1028227b mov dword ptr [0x102a0920], edx */
  w32((uint32_t)(0x102a0920), (EDX));
  /* 10282281 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282284 push eax */
  push32((uint32_t)(EAX));
  /* 10282285 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282288 push ecx */
  push32((uint32_t)(ECX));
  /* 10282289 push 3 */
  push32((uint32_t)(0x3u));
  /* 1028228b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028228e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10282291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282294 push eax */
  push32((uint32_t)(EAX));
  /* 10282295 call 0x10282690 */
  push32(0x1028229au); f_10282690();
  /* 1028229a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028229d jmp 0x10282588 */
  goto L_10282588;
L_102822a2:;
  /* 102822a2 mov ecx, dword ptr [0x102a0910] */
  ECX = (r32((uint32_t)(0x102a0910)));
  /* 102822a8 mov dword ptr [0x102a0920], ecx */
  w32((uint32_t)(0x102a0920), (ECX));
  /* 102822ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102822b1 push edx */
  push32((uint32_t)(EDX));
  /* 102822b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102822b5 push eax */
  push32((uint32_t)(EAX));
  /* 102822b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102822b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102822bb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 102822be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102822c1 push edx */
  push32((uint32_t)(EDX));
  /* 102822c2 call 0x10282690 */
  push32(0x102822c7u); f_10282690();
  /* 102822c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102822ca jmp 0x10282588 */
  goto L_10282588;
L_102822cf:;
  /* 102822cf mov eax, dword ptr [0x102a0910] */
  EAX = (r32((uint32_t)(0x102a0910)));
  /* 102822d4 mov dword ptr [0x102a0920], eax */
  w32((uint32_t)(0x102a0920), (EAX));
  /* 102822d9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 102822dc push ecx */
  push32((uint32_t)(ECX));
  /* 102822dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 102822e0 push edx */
  push32((uint32_t)(EDX));
  /* 102822e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 102822e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102822e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102822e9 push ecx */
  push32((uint32_t)(ECX));
  /* 102822ea call 0x10282690 */
  push32(0x102822efu); f_10282690();
  /* 102822ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102822f2 jmp 0x10282588 */
  goto L_10282588;
L_102822f7:;
  /* 102822f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102822fa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102822fe jg 0x1028231c */
  if ((!C.zf&&C.sf==C.of)) goto L_1028231c;
  /* 10282300 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282303 push eax */
  push32((uint32_t)(EAX));
  /* 10282304 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282307 push ecx */
  push32((uint32_t)(ECX));
  /* 10282308 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1028230b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10282311 push eax */
  push32((uint32_t)(EAX));
  /* 10282312 call 0x10282640 */
  push32(0x10282317u); f_10282640();
  /* 10282317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028231a jmp 0x10282336 */
  goto L_10282336;
L_1028231c:;
  /* 1028231c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028231f push ecx */
  push32((uint32_t)(ECX));
  /* 10282320 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282323 push edx */
  push32((uint32_t)(EDX));
  /* 10282324 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282327 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1028232d push ecx */
  push32((uint32_t)(ECX));
  /* 1028232e call 0x10282640 */
  push32(0x10282333u); f_10282640();
  /* 10282333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10282336:;
  /* 10282336 jmp 0x10282588 */
  goto L_10282588;
L_1028233b:;
  /* 1028233b mov edx, dword ptr [0x102a0910] */
  EDX = (r32((uint32_t)(0x102a0910)));
  /* 10282341 mov dword ptr [0x102a0920], edx */
  w32((uint32_t)(0x102a0920), (EDX));
  /* 10282347 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028234a push eax */
  push32((uint32_t)(EAX));
  /* 1028234b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028234e push ecx */
  push32((uint32_t)(ECX));
  /* 1028234f push 2 */
  push32((uint32_t)(0x2u));
  /* 10282351 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282354 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282356 push eax */
  push32((uint32_t)(EAX));
  /* 10282357 call 0x10282690 */
  push32(0x1028235cu); f_10282690();
  /* 1028235c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028235f jmp 0x10282588 */
  goto L_10282588;
L_10282364:;
  /* 10282364 mov ecx, dword ptr [0x102a0910] */
  ECX = (r32((uint32_t)(0x102a0910)));
  /* 1028236a mov dword ptr [0x102a0920], ecx */
  w32((uint32_t)(0x102a0920), (ECX));
  /* 10282370 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282373 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10282376 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10282379 jmp 0x102823cd */
  goto L_102823cd;
L_1028237b:;
  /* 1028237b mov ecx, dword ptr [0x102a0910] */
  ECX = (r32((uint32_t)(0x102a0910)));
  /* 10282381 mov dword ptr [0x102a0920], ecx */
  w32((uint32_t)(0x102a0920), (ECX));
  /* 10282387 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028238a push edx */
  push32((uint32_t)(EDX));
  /* 1028238b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028238e push eax */
  push32((uint32_t)(EAX));
  /* 1028238f push 1 */
  push32((uint32_t)(0x1u));
  /* 10282391 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282394 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10282397 push edx */
  push32((uint32_t)(EDX));
  /* 10282398 call 0x10282690 */
  push32(0x1028239du); f_10282690();
  /* 1028239d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102823a0 jmp 0x10282588 */
  goto L_10282588;
L_102823a5:;
  /* 102823a5 mov eax, dword ptr [0x102a0910] */
  EAX = (r32((uint32_t)(0x102a0910)));
  /* 102823aa mov dword ptr [0x102a0920], eax */
  w32((uint32_t)(0x102a0920), (EAX));
  /* 102823af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102823b2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102823b6 jne 0x102823c1 */
  if (!C.zf) goto L_102823c1;
  /* 102823b8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 102823bf jmp 0x102823cd */
  goto L_102823cd;
L_102823c1:;
  /* 102823c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102823c4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 102823c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102823ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102823cd:;
  /* 102823cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102823d0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 102823d3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102823d6 jge 0x102823e1 */
  if ((C.sf==C.of)) goto L_102823e1;
  /* 102823d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102823df jmp 0x1028240e */
  goto L_1028240e;
L_102823e1:;
  /* 102823e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102823e4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 102823e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102823e8 mov ecx, 7 */
  ECX = (0x7u);
  /* 102823ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102823ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102823f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102823f5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 102823f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102823f9 mov ecx, 7 */
  ECX = (0x7u);
  /* 102823fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10282400 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282403 jl 0x1028240e */
  if ((C.sf!=C.of)) goto L_1028240e;
  /* 10282405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282408 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028240b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1028240e:;
  /* 1028240e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282411 push eax */
  push32((uint32_t)(EAX));
  /* 10282412 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282415 push ecx */
  push32((uint32_t)(ECX));
  /* 10282416 push 2 */
  push32((uint32_t)(0x2u));
  /* 10282418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028241b push edx */
  push32((uint32_t)(EDX));
  /* 1028241c call 0x10282690 */
  push32(0x10282421u); f_10282690();
  /* 10282421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282424 jmp 0x10282588 */
  goto L_10282588;
L_10282429:;
  /* 10282429 cmp dword ptr [0x102a0910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282430 je 0x10282460 */
  if (C.zf) goto L_10282460;
  /* 10282432 mov dword ptr [0x102a0910], 0 */
  w32((uint32_t)(0x102a0910), (0x0u));
  /* 1028243c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1028243f push eax */
  push32((uint32_t)(EAX));
  /* 10282440 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282443 push ecx */
  push32((uint32_t)(ECX));
  /* 10282444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282447 push edx */
  push32((uint32_t)(EDX));
  /* 10282448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028244b push eax */
  push32((uint32_t)(EAX));
  /* 1028244c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1028244f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10282455 push edx */
  push32((uint32_t)(EDX));
  /* 10282456 call 0x102827f0 */
  push32(0x1028245bu); f_102827f0();
  /* 1028245b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028245e jmp 0x10282482 */
  goto L_10282482;
L_10282460:;
  /* 10282460 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282463 push eax */
  push32((uint32_t)(EAX));
  /* 10282464 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282467 push ecx */
  push32((uint32_t)(ECX));
  /* 10282468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028246b push edx */
  push32((uint32_t)(EDX));
  /* 1028246c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028246f push eax */
  push32((uint32_t)(EAX));
  /* 10282470 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282473 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10282479 push edx */
  push32((uint32_t)(EDX));
  /* 1028247a call 0x102827f0 */
  push32(0x1028247fu); f_102827f0();
  /* 1028247f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10282482:;
  /* 10282482 jmp 0x10282588 */
  goto L_10282588;
L_10282487:;
  /* 10282487 mov dword ptr [0x102a0910], 0 */
  w32((uint32_t)(0x102a0910), (0x0u));
  /* 10282491 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282494 push eax */
  push32((uint32_t)(EAX));
  /* 10282495 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282498 push ecx */
  push32((uint32_t)(ECX));
  /* 10282499 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028249c push edx */
  push32((uint32_t)(EDX));
  /* 1028249d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102824a0 push eax */
  push32((uint32_t)(EAX));
  /* 102824a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102824a4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 102824aa push edx */
  push32((uint32_t)(EDX));
  /* 102824ab call 0x102827f0 */
  push32(0x102824b0u); f_102827f0();
  /* 102824b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102824b3 jmp 0x10282588 */
  goto L_10282588;
L_102824b8:;
  /* 102824b8 mov eax, dword ptr [0x102a0910] */
  EAX = (r32((uint32_t)(0x102a0910)));
  /* 102824bd mov dword ptr [0x102a0920], eax */
  w32((uint32_t)(0x102a0920), (EAX));
  /* 102824c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102824c5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 102824c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102824c9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 102824ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102824d0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102824d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102824d6 push edx */
  push32((uint32_t)(EDX));
  /* 102824d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102824da push eax */
  push32((uint32_t)(EAX));
  /* 102824db push 2 */
  push32((uint32_t)(0x2u));
  /* 102824dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102824e0 push ecx */
  push32((uint32_t)(ECX));
  /* 102824e1 call 0x10282690 */
  push32(0x102824e6u); f_10282690();
  /* 102824e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102824e9 jmp 0x10282588 */
  goto L_10282588;
L_102824ee:;
  /* 102824ee mov edx, dword ptr [0x102a0910] */
  EDX = (r32((uint32_t)(0x102a0910)));
  /* 102824f4 mov dword ptr [0x102a0920], edx */
  w32((uint32_t)(0x102a0920), (EDX));
  /* 102824fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102824fd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10282500 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10282501 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10282506 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10282508 mov ecx, eax */
  ECX = (EAX);
  /* 1028250a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028250d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10282510 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282513 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10282516 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10282517 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1028251c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1028251e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282520 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10282523 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282526 push eax */
  push32((uint32_t)(EAX));
  /* 10282527 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028252a push ecx */
  push32((uint32_t)(ECX));
  /* 1028252b push 4 */
  push32((uint32_t)(0x4u));
  /* 1028252d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282530 push edx */
  push32((uint32_t)(EDX));
  /* 10282531 call 0x10282690 */
  push32(0x10282536u); f_10282690();
  /* 10282536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282539 jmp 0x10282588 */
  goto L_10282588;
L_1028253b:;
  /* 1028253b call 0x10283650 */
  push32(0x10282540u); f_10283650();
  /* 10282540 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282543 push eax */
  push32((uint32_t)(EAX));
  /* 10282544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282547 push ecx */
  push32((uint32_t)(ECX));
  /* 10282548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028254b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028254d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282551 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10282554 mov ecx, dword ptr [eax*4 + 0x1029fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029fe1c)));
  /* 1028255b push ecx */
  push32((uint32_t)(ECX));
  /* 1028255c call 0x10282640 */
  push32(0x10282561u); f_10282640();
  /* 10282561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282564 jmp 0x10282588 */
  goto L_10282588;
L_10282566:;
  /* 10282566 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282569 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1028256b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1028256e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282571 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282573 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282579 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1028257b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028257e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282580 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282586 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10282588:;
  /* 10282588 pop esi */
  ESI = (pop32());
  /* 10282589 mov esp, ebp */
  ESP = (EBP);
  /* 1028258b pop ebp */
  EBP = (pop32());
  /* 1028258c ret  */
  ESPCHK(0x10282020u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10282640 (72 bytes, 30 insns) */
void f_10282640(void) {
  FTRACE(0x10282640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282640 push ebp */
  push32((uint32_t)(EBP));
  /* 10282641 mov ebp, esp */
  EBP = (ESP);
L_10282643:;
  /* 10282643 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282646 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282649 je 0x10282686 */
  if (C.zf) goto L_10282686;
  /* 1028264b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028264e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10282651 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10282653 je 0x10282686 */
  if (C.zf) goto L_10282686;
  /* 10282655 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282658 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1028265a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028265d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028265f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10282661 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282664 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282666 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282669 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028266c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1028266e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282671 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282674 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10282677 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028267a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1028267c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1028267f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282682 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10282684 jmp 0x10282643 */
  goto L_10282643;
L_10282686:;
  /* 10282686 pop ebp */
  EBP = (pop32());
  /* 10282687 ret  */
  ESPCHK(0x10282640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x10282690 (173 bytes, 64 insns) */
void f_10282690(void) {
  FTRACE(0x10282690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282690 push ebp */
  push32((uint32_t)(EBP));
  /* 10282691 mov ebp, esp */
  EBP = (ESP);
  /* 10282693 push ecx */
  push32((uint32_t)(ECX));
  /* 10282694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1028269b cmp dword ptr [0x102a0920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102826a2 je 0x102826ba */
  if (C.zf) goto L_102826ba;
  /* 102826a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102826a7 push eax */
  push32((uint32_t)(EAX));
  /* 102826a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102826ab push ecx */
  push32((uint32_t)(ECX));
  /* 102826ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102826af push edx */
  push32((uint32_t)(EDX));
  /* 102826b0 call 0x10282740 */
  push32(0x102826b5u); f_10282740();
  /* 102826b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102826b8 jmp 0x10282739 */
  goto L_10282739;
L_102826ba:;
  /* 102826ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102826bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102826c0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102826c2 jae 0x10282730 */
  if (!C.cf) goto L_10282730;
  /* 102826c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102826c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102826ca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102826cd jmp 0x102826d8 */
  goto L_102826d8;
L_102826cf:;
  /* 102826cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102826d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102826d5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102826d8:;
  /* 102826d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102826db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102826de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102826e0 je 0x10282714 */
  if (C.zf) goto L_10282714;
  /* 102826e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102826e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102826e6 mov ecx, 0xa */
  ECX = (0xau);
  /* 102826eb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102826ed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102826f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102826f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102826f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102826f8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 102826fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102826fe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102826ff mov ecx, 0xa */
  ECX = (0xau);
  /* 10282704 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10282706 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10282709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028270c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028270f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10282712 jmp 0x102826cf */
  goto L_102826cf;
L_10282714:;
  /* 10282714 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282719 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028271c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028271f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10282721 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282724 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282726 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282729 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028272c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1028272e jmp 0x10282739 */
  goto L_10282739;
L_10282730:;
  /* 10282730 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282733 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10282739:;
  /* 10282739 mov esp, ebp */
  ESP = (EBP);
  /* 1028273b pop ebp */
  EBP = (pop32());
  /* 1028273c ret  */
  ESPCHK(0x10282690u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10282740 (172 bytes, 65 insns) */
void f_10282740(void) {
  FTRACE(0x10282740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282740 push ebp */
  push32((uint32_t)(EBP));
  /* 10282741 mov ebp, esp */
  EBP = (ESP);
  /* 10282743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282749 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1028274b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1028274e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282751 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282754 jbe 0x1028279b */
  if ((C.cf||C.zf)) goto L_1028279b;
L_10282756:;
  /* 10282756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282759 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1028275a mov ecx, 0xa */
  ECX = (0xau);
  /* 1028275f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10282761 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282767 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10282769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028276c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028276f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10282772 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282775 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282777 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1028277a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028277d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1028277f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282782 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10282783 mov ecx, 0xa */
  ECX = (0xau);
  /* 10282788 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1028278a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1028278d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282791 jle 0x1028279b */
  if ((C.zf||C.sf!=C.of)) goto L_1028279b;
  /* 10282793 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282796 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282799 ja 0x10282756 */
  if ((!C.cf&&!C.zf)) goto L_10282756;
L_1028279b:;
  /* 1028279b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028279e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102827a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102827a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102827a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102827a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 102827ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102827ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102827b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_102827b4:;
  /* 102827b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102827b7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102827b9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 102827bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102827bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102827c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102827c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 102827c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102827c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102827cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102827cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102827d2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 102827d5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 102827d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102827da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102827dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102827e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102827e3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102827e6 jb 0x102827b4 */
  if (C.cf) goto L_102827b4;
  /* 102827e8 mov esp, ebp */
  ESP = (EBP);
  /* 102827ea pop ebp */
  EBP = (pop32());
  /* 102827eb ret  */
  ESPCHK(0x10282740u, _esp0);
  ESP += 4; return;
}

/* FUN_100127f0 @ 0x102827f0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_102827f0(void) {
  FTRACE(0x102827f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102827f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102827f1 mov ebp, esp */
  EBP = (ESP);
  /* 102827f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_102827f6:;
  /* 102827f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102827f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 102827fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102827fe je 0x10282c6c */
  if (C.zf) goto L_10282c6c;
  /* 10282804 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282807 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028280a je 0x10282c6c */
  if (C.zf) goto L_10282c6c;
  /* 10282810 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10282814 mov dword ptr [0x102a0920], 0 */
  w32((uint32_t)(0x102a0920), (0x0u));
  /* 1028281e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10282825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282828 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1028282b jmp 0x10282836 */
  goto L_10282836;
L_1028282d:;
  /* 1028282d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282830 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282833 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10282836:;
  /* 10282836 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282839 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1028283c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028283f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10282842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282848 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1028284b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028284d jne 0x10282851 */
  if (!C.zf) goto L_10282851;
  /* 1028284f jmp 0x1028282d */
  goto L_1028282d;
L_10282851:;
  /* 10282851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282854 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282857 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1028285a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028285d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10282860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10282863 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10282866 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282869 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1028286c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282870 ja 0x10282bc0 */
  if ((!C.cf&&!C.zf)) goto L_10282bc0;
  /* 10282876 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10282879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028287b mov al, byte ptr [ecx + 0x10282c9c] */
  AL = (r8((uint32_t)(ECX + 0x10282c9c)));
  /* 10282881 jmp dword ptr [eax*4 + 0x10282c70] */
  switch (EAX) {
    case 0: goto L_10282adf;
    case 1: goto L_102829c3;
    case 2: goto L_1028294e;
    case 3: goto L_10282888;
    case 4: goto L_102828c6;
    case 5: goto L_10282927;
    case 6: goto L_10282975;
    case 7: goto L_1028299c;
    case 8: goto L_10282a0a;
    case 9: goto L_10282904;
    case 10: goto L_10282bc0;
    default: x86_unimpl("switch@0x10282881 out of table"); return;
  }
L_10282888:;
  /* 10282888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028288b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1028288e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10282891 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282894 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10282897 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028289b ja 0x102828c1 */
  if ((!C.cf&&!C.zf)) goto L_102828c1;
  /* 1028289d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102828a0 jmp dword ptr [ecx*4 + 0x10282cef] */
  switch (ECX) {
    case 0: goto L_102828a7;
    case 1: goto L_102828b1;
    case 2: goto L_102828b7;
    case 3: goto L_102828bd;
    case 4: goto L_102828e5;
    case 5: goto L_102828ef;
    case 6: goto L_102828f5;
    case 7: goto L_102828fb;
    default: x86_unimpl("switch@0x102828a0 out of table"); return;
  }
L_102828a7:;
  /* 102828a7 mov dword ptr [0x102a0920], 1 */
  w32((uint32_t)(0x102a0920), (0x1u));
L_102828b1:;
  /* 102828b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 102828b5 jmp 0x102828c1 */
  goto L_102828c1;
L_102828b7:;
  /* 102828b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 102828bb jmp 0x102828c1 */
  goto L_102828c1;
L_102828bd:;
  /* 102828bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_102828c1:;
  /* 102828c1 jmp 0x10282bc0 */
  goto L_10282bc0;
L_102828c6:;
  /* 102828c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102828c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 102828cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102828cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102828d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 102828d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102828d9 ja 0x102828ff */
  if ((!C.cf&&!C.zf)) goto L_102828ff;
  /* 102828db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102828de jmp dword ptr [ecx*4 + 0x10282cff] */
  switch (ECX) {
    case 0: goto L_102828e5;
    case 1: goto L_102828ef;
    case 2: goto L_102828f5;
    case 3: goto L_102828fb;
    default: x86_unimpl("switch@0x102828de out of table"); return;
  }
L_102828e5:;
  /* 102828e5 mov dword ptr [0x102a0920], 1 */
  w32((uint32_t)(0x102a0920), (0x1u));
L_102828ef:;
  /* 102828ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 102828f3 jmp 0x102828ff */
  goto L_102828ff;
L_102828f5:;
  /* 102828f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 102828f9 jmp 0x102828ff */
  goto L_102828ff;
L_102828fb:;
  /* 102828fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_102828ff:;
  /* 102828ff jmp 0x10282bc0 */
  goto L_10282bc0;
L_10282904:;
  /* 10282904 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282907 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1028290a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028290e je 0x10282918 */
  if (C.zf) goto L_10282918;
  /* 10282910 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282914 je 0x1028291e */
  if (C.zf) goto L_1028291e;
  /* 10282916 jmp 0x10282922 */
  goto L_10282922;
L_10282918:;
  /* 10282918 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1028291c jmp 0x10282922 */
  goto L_10282922;
L_1028291e:;
  /* 1028291e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10282922:;
  /* 10282922 jmp 0x10282bc0 */
  goto L_10282bc0;
L_10282927:;
  /* 10282927 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028292a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1028292d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282931 je 0x1028293b */
  if (C.zf) goto L_1028293b;
  /* 10282933 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282937 je 0x10282945 */
  if (C.zf) goto L_10282945;
  /* 10282939 jmp 0x10282949 */
  goto L_10282949;
L_1028293b:;
  /* 1028293b mov dword ptr [0x102a0920], 1 */
  w32((uint32_t)(0x102a0920), (0x1u));
L_10282945:;
  /* 10282945 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10282949:;
  /* 10282949 jmp 0x10282bc0 */
  goto L_10282bc0;
L_1028294e:;
  /* 1028294e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282951 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10282954 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282958 je 0x10282962 */
  if (C.zf) goto L_10282962;
  /* 1028295a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028295e je 0x1028296c */
  if (C.zf) goto L_1028296c;
  /* 10282960 jmp 0x10282970 */
  goto L_10282970;
L_10282962:;
  /* 10282962 mov dword ptr [0x102a0920], 1 */
  w32((uint32_t)(0x102a0920), (0x1u));
L_1028296c:;
  /* 1028296c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10282970:;
  /* 10282970 jmp 0x10282bc0 */
  goto L_10282bc0;
L_10282975:;
  /* 10282975 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282978 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1028297b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028297f je 0x10282989 */
  if (C.zf) goto L_10282989;
  /* 10282981 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282985 je 0x10282993 */
  if (C.zf) goto L_10282993;
  /* 10282987 jmp 0x10282997 */
  goto L_10282997;
L_10282989:;
  /* 10282989 mov dword ptr [0x102a0920], 1 */
  w32((uint32_t)(0x102a0920), (0x1u));
L_10282993:;
  /* 10282993 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10282997:;
  /* 10282997 jmp 0x10282bc0 */
  goto L_10282bc0;
L_1028299c:;
  /* 1028299c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028299f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 102829a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102829a6 je 0x102829b0 */
  if (C.zf) goto L_102829b0;
  /* 102829a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102829ac je 0x102829ba */
  if (C.zf) goto L_102829ba;
  /* 102829ae jmp 0x102829be */
  goto L_102829be;
L_102829b0:;
  /* 102829b0 mov dword ptr [0x102a0920], 1 */
  w32((uint32_t)(0x102a0920), (0x1u));
L_102829ba:;
  /* 102829ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_102829be:;
  /* 102829be jmp 0x10282bc0 */
  goto L_10282bc0;
L_102829c3:;
  /* 102829c3 push 0x1029c89c */
  push32((uint32_t)(0x1029c89cu));
  /* 102829c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102829cb push ecx */
  push32((uint32_t)(ECX));
  /* 102829cc call 0x10283220 */
  push32(0x102829d1u); f_10283220();
  /* 102829d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102829d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102829d6 jne 0x102829e3 */
  if (!C.zf) goto L_102829e3;
  /* 102829d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102829db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102829de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102829e1 jmp 0x10282a01 */
  goto L_10282a01;
L_102829e3:;
  /* 102829e3 push 0x1029c898 */
  push32((uint32_t)(0x1029c898u));
  /* 102829e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102829eb push eax */
  push32((uint32_t)(EAX));
  /* 102829ec call 0x10283220 */
  push32(0x102829f1u); f_10283220();
  /* 102829f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102829f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102829f6 jne 0x10282a01 */
  if (!C.zf) goto L_10282a01;
  /* 102829f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102829fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102829fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10282a01:;
  /* 10282a01 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10282a05 jmp 0x10282bc0 */
  goto L_10282bc0;
L_10282a0a:;
  /* 10282a0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282a0d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282a11 jg 0x10282a21 */
  if ((!C.zf&&C.sf==C.of)) goto L_10282a21;
  /* 10282a13 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282a16 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10282a1c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10282a1f jmp 0x10282a2d */
  goto L_10282a2d;
L_10282a21:;
  /* 10282a21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282a24 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10282a2a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10282a2d:;
  /* 10282a2d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282a31 jle 0x10282ad4 */
  if ((C.zf||C.sf!=C.of)) goto L_10282ad4;
  /* 10282a37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282a3a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282a3d jbe 0x10282ad4 */
  if ((C.cf||C.zf)) goto L_10282ad4;
  /* 10282a43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10282a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10282a48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10282a4a mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 10282a50 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10282a52 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10282a56 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10282a5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10282a5e je 0x10282a97 */
  if (C.zf) goto L_10282a97;
  /* 10282a60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282a63 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282a66 jbe 0x10282a97 */
  if ((C.cf||C.zf)) goto L_10282a97;
  /* 10282a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282a6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282a6d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10282a70 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10282a72 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10282a74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282a77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282a79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282a7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282a7f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10282a81 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10282a84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282a87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10282a8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282a8d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282a8f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282a92 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282a95 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10282a97:;
  /* 10282a97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282a9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282a9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10282a9f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10282aa1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10282aa3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282aa6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282aa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282aab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282aae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10282ab0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10282ab3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282ab6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10282ab9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282abc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282abe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282ac1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282ac4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10282ac6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282ac9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282acc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10282acf jmp 0x10282a2d */
  goto L_10282a2d;
L_10282ad4:;
  /* 10282ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282ad7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10282ada jmp 0x102827f6 */
  goto L_102827f6;
L_10282adf:;
  /* 10282adf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282ae2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10282ae5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10282ae7 je 0x10282bb2 */
  if (C.zf) goto L_10282bb2;
  /* 10282aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282af0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282af3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10282af6:;
  /* 10282af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282af9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10282afc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10282afe je 0x10282bb0 */
  if (C.zf) goto L_10282bb0;
  /* 10282b04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282b07 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282b0a je 0x10282bb0 */
  if (C.zf) goto L_10282bb0;
  /* 10282b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b13 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10282b16 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282b19 jne 0x10282b29 */
  if (!C.zf) goto L_10282b29;
  /* 10282b1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282b21 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10282b24 jmp 0x10282bb0 */
  goto L_10282bb0;
L_10282b29:;
  /* 10282b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10282b2e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10282b30 mov edx, dword ptr [0x1029ec98] */
  EDX = (r32((uint32_t)(0x1029ec98)));
  /* 10282b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10282b38 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10282b3c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10282b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10282b43 je 0x10282b7c */
  if (C.zf) goto L_10282b7c;
  /* 10282b45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282b48 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282b4b jbe 0x10282b7c */
  if ((C.cf||C.zf)) goto L_10282b7c;
  /* 10282b4d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282b50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282b52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10282b57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10282b59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282b5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282b61 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282b64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10282b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282b6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10282b6f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282b72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282b74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282b77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282b7a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10282b7c:;
  /* 10282b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282b7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282b81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10282b86 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10282b88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282b8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282b8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282b90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282b93 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10282b95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282b9b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10282b9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282ba1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282ba3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282ba6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282ba9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10282bab jmp 0x10282af6 */
  goto L_10282af6;
L_10282bb0:;
  /* 10282bb0 jmp 0x10282bbb */
  goto L_10282bbb;
L_10282bb2:;
  /* 10282bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282bb5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282bb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10282bbb:;
  /* 10282bbb jmp 0x102827f6 */
  goto L_102827f6;
L_10282bc0:;
  /* 10282bc0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10282bc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10282bc6 je 0x10282bec */
  if (C.zf) goto L_10282bec;
  /* 10282bc8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10282bcb push edx */
  push32((uint32_t)(EDX));
  /* 10282bcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282bcf push eax */
  push32((uint32_t)(EAX));
  /* 10282bd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10282bd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10282bd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10282bdb push eax */
  push32((uint32_t)(EAX));
  /* 10282bdc call 0x10282020 */
  push32(0x10282be1u); f_10282020();
  /* 10282be1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282be4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10282be7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10282bea jmp 0x10282c67 */
  goto L_10282c67;
L_10282bec:;
  /* 10282bec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10282bf1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10282bf3 mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 10282bf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10282bfb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10282bff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10282c05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10282c07 je 0x10282c38 */
  if (C.zf) goto L_10282c38;
  /* 10282c09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282c0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282c0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282c11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10282c13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10282c15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282c18 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282c1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282c1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282c20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10282c22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282c25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282c28 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10282c2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282c2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282c30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282c33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282c36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10282c38:;
  /* 10282c38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282c3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10282c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282c40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10282c42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10282c44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282c47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282c49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282c4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282c4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10282c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10282c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282c57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10282c5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10282c5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282c62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282c65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10282c67:;
  /* 10282c67 jmp 0x102827f6 */
  goto L_102827f6;
L_10282c6c:;
  /* 10282c6c mov esp, ebp */
  ESP = (EBP);
  /* 10282c6e pop ebp */
  EBP = (pop32());
  /* 10282c6f ret  */
  ESPCHK(0x102827f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d10 @ 0x10282d10 (650 bytes, 178 insns) */
void f_10282d10(void) {
  FTRACE(0x10282d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10282d11 mov ebp, esp */
  EBP = (ESP);
  /* 10282d13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10282d19 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282d1d jne 0x10282e79 */
  if (!C.zf) goto L_10282e79;
  /* 10282d23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282d26 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10282d2c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10282d32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10282d35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10282d3c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10282d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10282d48 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10282d4e push edx */
  push32((uint32_t)(EDX));
  /* 10282d4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282d52 push eax */
  push32((uint32_t)(EAX));
  /* 10282d53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282d56 push ecx */
  push32((uint32_t)(ECX));
  /* 10282d57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282d5a push edx */
  push32((uint32_t)(EDX));
  /* 10282d5b call 0x10284130 */
  push32(0x10282d60u); f_10284130();
  /* 10282d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282d63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10282d66 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282d6a jne 0x10282dff */
  if (!C.zf) goto L_10282dff;
  /* 10282d70 call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x10282d76u);
  /* 10282d76 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282d79 je 0x10282d80 */
  if (C.zf) goto L_10282d80;
  /* 10282d7b jmp 0x10282e5d */
  goto L_10282e5d;
L_10282d80:;
  /* 10282d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10282d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10282d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10282d86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282d89 push eax */
  push32((uint32_t)(EAX));
  /* 10282d8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282d8d push ecx */
  push32((uint32_t)(ECX));
  /* 10282d8e call 0x10284130 */
  push32(0x10282d93u); f_10284130();
  /* 10282d93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282d96 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10282d9c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282da3 jne 0x10282daa */
  if (!C.zf) goto L_10282daa;
  /* 10282da5 jmp 0x10282e5d */
  goto L_10282e5d;
L_10282daa:;
  /* 10282daa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10282dac push 0x1029c8a4 */
  push32((uint32_t)(0x1029c8a4u));
  /* 10282db1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10282db3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10282db9 push edx */
  push32((uint32_t)(EDX));
  /* 10282dba call 0x10274b50 */
  push32(0x10282dbfu); f_10274b50();
  /* 10282dbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282dc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10282dc5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282dc9 jne 0x10282dd0 */
  if (!C.zf) goto L_10282dd0;
  /* 10282dcb jmp 0x10282e5d */
  goto L_10282e5d;
L_10282dd0:;
  /* 10282dd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10282dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10282dd9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10282ddf push eax */
  push32((uint32_t)(EAX));
  /* 10282de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10282de4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282de7 push edx */
  push32((uint32_t)(EDX));
  /* 10282de8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282deb push eax */
  push32((uint32_t)(EAX));
  /* 10282dec call 0x10284130 */
  push32(0x10282df1u); f_10284130();
  /* 10282df1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282df4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10282df7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282dfb jne 0x10282dff */
  if (!C.zf) goto L_10282dff;
  /* 10282dfd jmp 0x10282e5d */
  goto L_10282e5d;
L_10282dff:;
  /* 10282dff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10282e01 push 0x1029c8a4 */
  push32((uint32_t)(0x1029c8a4u));
  /* 10282e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10282e08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10282e0b push ecx */
  push32((uint32_t)(ECX));
  /* 10282e0c call 0x10274b50 */
  push32(0x10282e11u); f_10274b50();
  /* 10282e11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282e14 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10282e1a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10282e1c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10282e22 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282e25 jne 0x10282e29 */
  if (!C.zf) goto L_10282e29;
  /* 10282e27 jmp 0x10282e5d */
  goto L_10282e5d;
L_10282e29:;
  /* 10282e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10282e2c push ecx */
  push32((uint32_t)(ECX));
  /* 10282e2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282e30 push edx */
  push32((uint32_t)(EDX));
  /* 10282e31 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10282e37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10282e39 push ecx */
  push32((uint32_t)(ECX));
  /* 10282e3a call 0x10278370 */
  push32(0x10282e3fu); f_10278370();
  /* 10282e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282e42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282e46 je 0x10282e56 */
  if (C.zf) goto L_10282e56;
  /* 10282e48 push 2 */
  push32((uint32_t)(0x2u));
  /* 10282e4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282e4d push edx */
  push32((uint32_t)(EDX));
  /* 10282e4e call 0x102755e0 */
  push32(0x10282e53u); f_102755e0();
  /* 10282e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10282e56:;
  /* 10282e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10282e58 jmp 0x10282f96 */
  goto L_10282f96;
L_10282e5d:;
  /* 10282e5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282e61 je 0x10282e71 */
  if (C.zf) goto L_10282e71;
  /* 10282e63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10282e65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10282e68 push eax */
  push32((uint32_t)(EAX));
  /* 10282e69 call 0x102755e0 */
  push32(0x10282e6eu); f_102755e0();
  /* 10282e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10282e71:;
  /* 10282e71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10282e74 jmp 0x10282f96 */
  goto L_10282f96;
L_10282e79:;
  /* 10282e79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282e7d jne 0x10282f93 */
  if (!C.zf) goto L_10282f93;
  /* 10282e83 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10282e8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10282e90 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10282e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10282e98 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10282e9e push edx */
  push32((uint32_t)(EDX));
  /* 10282e9f push 0x102a0838 */
  push32((uint32_t)(0x102a0838u));
  /* 10282ea4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10282ea7 push eax */
  push32((uint32_t)(EAX));
  /* 10282ea8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10282eab push ecx */
  push32((uint32_t)(ECX));
  /* 10282eac call 0x10283f90 */
  push32(0x10282eb1u); f_10283f90();
  /* 10282eb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10282eb6 jne 0x10282ec0 */
  if (!C.zf) goto L_10282ec0;
  /* 10282eb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10282ebb jmp 0x10282f96 */
  goto L_10282f96;
L_10282ec0:;
  /* 10282ec0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10282ec6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10282ec9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10282ed3 jmp 0x10282ee4 */
  goto L_10282ee4;
L_10282ed5:;
  /* 10282ed5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10282edb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10282ede mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10282ee4:;
  /* 10282ee4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282eeb jge 0x10282f8f */
  if ((C.sf==C.of)) goto L_10282f8f;
  /* 10282ef1 cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282ef8 jle 0x10282f2b */
  if ((C.zf||C.sf!=C.of)) goto L_10282f2b;
  /* 10282efa push 4 */
  push32((uint32_t)(0x4u));
  /* 10282efc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10282f02 mov dl, byte ptr [ecx*2 + 0x102a0838] */
  DL = (r8((uint32_t)(ECX*2 + 0x102a0838)));
  /* 10282f09 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10282f0f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10282f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10282f1a push eax */
  push32((uint32_t)(EAX));
  /* 10282f1b call 0x1027ab60 */
  push32(0x10282f20u); f_1027ab60();
  /* 10282f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282f23 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10282f29 jmp 0x10282f5e */
  goto L_10282f5e;
L_10282f2b:;
  /* 10282f2b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10282f31 mov dl, byte ptr [ecx*2 + 0x102a0838] */
  DL = (r8((uint32_t)(ECX*2 + 0x102a0838)));
  /* 10282f38 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10282f3e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10282f44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10282f49 mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 10282f4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10282f51 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10282f55 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10282f58 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10282f5e:;
  /* 10282f5e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282f65 je 0x10282f88 */
  if (C.zf) goto L_10282f88;
  /* 10282f67 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10282f6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10282f70 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10282f73 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10282f7a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10282f7e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10282f84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10282f86 jmp 0x10282f8a */
  goto L_10282f8a;
L_10282f88:;
  /* 10282f88 jmp 0x10282f8f */
  goto L_10282f8f;
L_10282f8a:;
  /* 10282f8a jmp 0x10282ed5 */
  goto L_10282ed5;
L_10282f8f:;
  /* 10282f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10282f91 jmp 0x10282f96 */
  goto L_10282f96;
L_10282f93:;
  /* 10282f93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10282f96:;
  /* 10282f96 mov esp, ebp */
  ESP = (EBP);
  /* 10282f98 pop ebp */
  EBP = (pop32());
  /* 10282f99 ret  */
  ESPCHK(0x10282d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fa0 @ 0x10282fa0 (10 bytes, 5 insns) */
void f_10282fa0(void) {
  FTRACE(0x10282fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10282fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10282fa3 mov eax, dword ptr [0x1029fd88] */
  EAX = (r32((uint32_t)(0x1029fd88)));
  /* 10282fa8 pop ebp */
  EBP = (pop32());
  /* 10282fa9 ret  */
  ESPCHK(0x10282fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fb0 @ 0x10282fb0 (575 bytes, 196 insns) */
void f_10282fb0(void) {
  FTRACE(0x10282fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10282fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10282fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10282fb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10282fb5 push 0x1029c8b0 */
  push32((uint32_t)(0x1029c8b0u));
  /* 10282fba push 0x1027dc58 */
  push32((uint32_t)(0x1027dc58u));
  /* 10282fbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10282fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10282fc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10282fcd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10282fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 10282fd1 push esi */
  push32((uint32_t)(ESI));
  /* 10282fd2 push edi */
  push32((uint32_t)(EDI));
  /* 10282fd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10282fd6 cmp dword ptr [0x102a0844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10282fdd jne 0x1028302e */
  if (!C.zf) goto L_1028302e;
  /* 10282fdf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10282fe2 push eax */
  push32((uint32_t)(EAX));
  /* 10282fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10282fe5 push 0x1029bfe0 */
  push32((uint32_t)(0x1029bfe0u));
  /* 10282fea push 1 */
  push32((uint32_t)(0x1u));
  /* 10282fec call dword ptr [0x102a32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c4))), 0x10282ff2u);
  /* 10282ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10282ff4 je 0x10283002 */
  if (C.zf) goto L_10283002;
  /* 10282ff6 mov dword ptr [0x102a0844], 1 */
  w32((uint32_t)(0x102a0844), (0x1u));
  /* 10283000 jmp 0x1028302e */
  goto L_1028302e;
L_10283002:;
  /* 10283002 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10283005 push ecx */
  push32((uint32_t)(ECX));
  /* 10283006 push 1 */
  push32((uint32_t)(0x1u));
  /* 10283008 push 0x1029bfdc */
  push32((uint32_t)(0x1029bfdcu));
  /* 1028300d push 1 */
  push32((uint32_t)(0x1u));
  /* 1028300f push 0 */
  push32((uint32_t)(0x0u));
  /* 10283011 call dword ptr [0x102a32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d4))), 0x10283017u);
  /* 10283017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10283019 je 0x10283027 */
  if (C.zf) goto L_10283027;
  /* 1028301b mov dword ptr [0x102a0844], 2 */
  w32((uint32_t)(0x102a0844), (0x2u));
  /* 10283025 jmp 0x1028302e */
  goto L_1028302e;
L_10283027:;
  /* 10283027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283029 jmp 0x10283209 */
  goto L_10283209;
L_1028302e:;
  /* 1028302e cmp dword ptr [0x102a0844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283035 jne 0x10283052 */
  if (!C.zf) goto L_10283052;
  /* 10283037 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028303a push edx */
  push32((uint32_t)(EDX));
  /* 1028303b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028303e push eax */
  push32((uint32_t)(EAX));
  /* 1028303f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10283042 push ecx */
  push32((uint32_t)(ECX));
  /* 10283043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283046 push edx */
  push32((uint32_t)(EDX));
  /* 10283047 call dword ptr [0x102a32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32c4))), 0x1028304du);
  /* 1028304d jmp 0x10283209 */
  goto L_10283209;
L_10283052:;
  /* 10283052 cmp dword ptr [0x102a0844], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a0844))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283059 jne 0x10283207 */
  if (!C.zf) goto L_10283207;
  /* 1028305f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283063 jne 0x1028306d */
  if (!C.zf) goto L_1028306d;
  /* 10283065 mov eax, dword ptr [0x102a07b8] */
  EAX = (r32((uint32_t)(0x102a07b8)));
  /* 1028306a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1028306d:;
  /* 1028306d push 0 */
  push32((uint32_t)(0x0u));
  /* 1028306f push 0 */
  push32((uint32_t)(0x0u));
  /* 10283071 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283075 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283078 push ecx */
  push32((uint32_t)(ECX));
  /* 10283079 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028307c push edx */
  push32((uint32_t)(EDX));
  /* 1028307d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10283082 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10283085 push eax */
  push32((uint32_t)(EAX));
  /* 10283086 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x1028308cu);
  /* 1028308c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1028308f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283093 jne 0x1028309c */
  if (!C.zf) goto L_1028309c;
  /* 10283095 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283097 jmp 0x10283209 */
  goto L_10283209;
L_1028309c:;
  /* 1028309c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102830a3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 102830a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102830a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102830ab call 0x10277cf0 */
  push32(0x102830b0u); f_10277cf0();
  /* 102830b0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 102830b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102830b6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 102830b9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 102830bc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 102830bf push edx */
  push32((uint32_t)(EDX));
  /* 102830c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102830c2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 102830c5 push eax */
  push32((uint32_t)(EAX));
  /* 102830c6 call 0x102788c0 */
  push32(0x102830cbu); f_102788c0();
  /* 102830cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102830ce mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 102830d5 jmp 0x102830ee */
  goto L_102830ee;
  /* 102830d7 mov eax, 1 */
  EAX = (0x1u);
  /* 102830dc ret  */
  ESPCHK(0x10282fb0u, _esp0);
  ESP += 4; return;
  /* 102830dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102830e0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 102830e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_102830ee:;
  /* 102830ee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102830f2 jne 0x102830fb */
  if (!C.zf) goto L_102830fb;
  /* 102830f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102830f6 jmp 0x10283209 */
  goto L_10283209;
L_102830fb:;
  /* 102830fb push 0 */
  push32((uint32_t)(0x0u));
  /* 102830fd push 0 */
  push32((uint32_t)(0x0u));
  /* 102830ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10283102 push ecx */
  push32((uint32_t)(ECX));
  /* 10283103 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10283106 push edx */
  push32((uint32_t)(EDX));
  /* 10283107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028310a push eax */
  push32((uint32_t)(EAX));
  /* 1028310b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028310e push ecx */
  push32((uint32_t)(ECX));
  /* 1028310f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10283114 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10283117 push edx */
  push32((uint32_t)(EDX));
  /* 10283118 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x1028311eu);
  /* 1028311e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10283120 jne 0x10283129 */
  if (!C.zf) goto L_10283129;
  /* 10283122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283124 jmp 0x10283209 */
  goto L_10283209;
L_10283129:;
  /* 10283129 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10283130 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10283133 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10283137 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028313a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1028313c call 0x10277cf0 */
  push32(0x10283141u); f_10277cf0();
  /* 10283141 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10283144 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10283147 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1028314a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1028314d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10283154 jmp 0x1028316d */
  goto L_1028316d;
  /* 10283156 mov eax, 1 */
  EAX = (0x1u);
  /* 1028315b ret  */
  ESPCHK(0x10282fb0u, _esp0);
  ESP += 4; return;
  /* 1028315c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1028315f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10283166 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1028316d:;
  /* 1028316d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283171 jne 0x1028317a */
  if (!C.zf) goto L_1028317a;
  /* 10283173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283175 jmp 0x10283209 */
  goto L_10283209;
L_1028317a:;
  /* 1028317a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028317e jne 0x10283189 */
  if (!C.zf) goto L_10283189;
  /* 10283180 mov edx, dword ptr [0x102a07a8] */
  EDX = (r32((uint32_t)(0x102a07a8)));
  /* 10283186 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10283189:;
  /* 10283189 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028318c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1028318f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10283195 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283198 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1028319b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 102831a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 102831a5 push ecx */
  push32((uint32_t)(ECX));
  /* 102831a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 102831a9 push edx */
  push32((uint32_t)(EDX));
  /* 102831aa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 102831ad push eax */
  push32((uint32_t)(EAX));
  /* 102831ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102831b1 push ecx */
  push32((uint32_t)(ECX));
  /* 102831b2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102831b5 push edx */
  push32((uint32_t)(EDX));
  /* 102831b6 call dword ptr [0x102a32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d4))), 0x102831bcu);
  /* 102831bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102831bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102831c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 102831c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102831c7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 102831cc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102831d2 je 0x102831e8 */
  if (C.zf) goto L_102831e8;
  /* 102831d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102831d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 102831da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102831dc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 102831e0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102831e6 je 0x102831ec */
  if (C.zf) goto L_102831ec;
L_102831e8:;
  /* 102831e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102831ea jmp 0x10283209 */
  goto L_10283209;
L_102831ec:;
  /* 102831ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102831ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102831f1 push eax */
  push32((uint32_t)(EAX));
  /* 102831f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 102831f5 push ecx */
  push32((uint32_t)(ECX));
  /* 102831f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102831f9 push edx */
  push32((uint32_t)(EDX));
  /* 102831fa call 0x1027ca40 */
  push32(0x102831ffu); f_1027ca40();
  /* 102831ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283202 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10283205 jmp 0x10283209 */
  goto L_10283209;
L_10283207:;
  /* 10283207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10283209:;
  /* 10283209 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1028320c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1028320f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10283216 pop edi */
  EDI = (pop32());
  /* 10283217 pop esi */
  ESI = (pop32());
  /* 10283218 pop ebx */
  EBX = (pop32());
  /* 10283219 mov esp, ebp */
  ESP = (EBP);
  /* 1028321b pop ebp */
  EBP = (pop32());
  /* 1028321c ret  */
  ESPCHK(0x10282fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013220 @ 0x10283220 (208 bytes, 85 insns) */
void f_10283220(void) {
  FTRACE(0x10283220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283220 push ebp */
  push32((uint32_t)(EBP));
  /* 10283221 mov ebp, esp */
  EBP = (ESP);
  /* 10283223 push edi */
  push32((uint32_t)(EDI));
  /* 10283224 push esi */
  push32((uint32_t)(ESI));
  /* 10283225 push ebx */
  push32((uint32_t)(EBX));
  /* 10283226 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10283229 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1028322c lea eax, [0x102a07a0] */
  EAX = ((uint32_t)(0x102a07a0));
  /* 10283232 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283236 jne 0x10283273 */
  if (!C.zf) goto L_10283273;
  /* 10283238 mov al, 0xff */
  AL = (0xffu);
  /* 1028323a mov edi, edi */
  EDI = (EDI);
L_1028323c:;
  /* 1028323c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1028323e je 0x1028326e */
  if (C.zf) goto L_1028326e;
  /* 10283240 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10283242 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10283243 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10283245 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10283246 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10283248 je 0x1028323c */
  if (C.zf) goto L_1028323c;
  /* 1028324a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1028324c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1028324e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10283250 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10283253 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10283255 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10283257 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10283259 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1028325b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1028325d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1028325f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10283262 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10283264 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10283266 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10283268 je 0x1028323c */
  if (C.zf) goto L_1028323c;
  /* 1028326a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1028326c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1028326e:;
  /* 1028326e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10283271 jmp 0x102832eb */
  goto L_102832eb;
L_10283273:;
  /* 10283273 lock inc dword ptr [0x102a0934] */
  x86_unimpl("lock inc @ 0x10283273");
  /* 1028327a cmp dword ptr [0x102a0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283281 jg 0x10283287 */
  if ((!C.zf&&C.sf==C.of)) goto L_10283287;
  /* 10283283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283285 jmp 0x1028329c */
  goto L_1028329c;
L_10283287:;
  /* 10283287 lock dec dword ptr [0x102a0934] */
  x86_unimpl("lock dec @ 0x10283287");
  /* 1028328e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10283290 call 0x10278550 */
  push32(0x10283295u); f_10278550();
  /* 10283295 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1028329c:;
  /* 1028329c mov eax, 0xff */
  EAX = (0xffu);
  /* 102832a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102832a3 nop  */
  /* nop */
L_102832a4:;
  /* 102832a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102832a6 je 0x102832cf */
  if (C.zf) goto L_102832cf;
  /* 102832a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102832aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102832ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102832ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102832ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102832b0 je 0x102832a4 */
  if (C.zf) goto L_102832a4;
  /* 102832b2 push eax */
  push32((uint32_t)(EAX));
  /* 102832b3 push ebx */
  push32((uint32_t)(EBX));
  /* 102832b4 call 0x10284390 */
  push32(0x102832b9u); f_10284390();
  /* 102832b9 mov ebx, eax */
  EBX = (EAX);
  /* 102832bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102832be call 0x10284390 */
  push32(0x102832c3u); f_10284390();
  /* 102832c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102832c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102832c8 je 0x102832a4 */
  if (C.zf) goto L_102832a4;
  /* 102832ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102832cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102832cf:;
  /* 102832cf mov ebx, eax */
  EBX = (EAX);
  /* 102832d1 pop eax */
  EAX = (pop32());
  /* 102832d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102832d4 jne 0x102832df */
  if (!C.zf) goto L_102832df;
  /* 102832d6 lock dec dword ptr [0x102a0934] */
  x86_unimpl("lock dec @ 0x102832d6");
  /* 102832dd jmp 0x102832e9 */
  goto L_102832e9;
L_102832df:;
  /* 102832df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102832e1 call 0x102785f0 */
  push32(0x102832e6u); f_102785f0();
  /* 102832e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102832e9:;
  /* 102832e9 mov eax, ebx */
  EAX = (EBX);
L_102832eb:;
  /* 102832eb pop ebx */
  EBX = (pop32());
  /* 102832ec pop esi */
  ESI = (pop32());
  /* 102832ed pop edi */
  EDI = (pop32());
  /* 102832ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102832ef ret  */
  ESPCHK(0x10283220u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x102832f0 (257 bytes, 103 insns) */
void f_102832f0(void) {
  FTRACE(0x102832f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102832f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102832f1 mov ebp, esp */
  EBP = (ESP);
  /* 102832f3 push edi */
  push32((uint32_t)(EDI));
  /* 102832f4 push esi */
  push32((uint32_t)(ESI));
  /* 102832f5 push ebx */
  push32((uint32_t)(EBX));
  /* 102832f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102832f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102832fb je 0x102833ea */
  if (C.zf) goto L_102833ea;
  /* 10283301 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10283304 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10283307 lea eax, [0x102a07a0] */
  EAX = ((uint32_t)(0x102a07a0));
  /* 1028330d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283311 jne 0x10283361 */
  if (!C.zf) goto L_10283361;
  /* 10283313 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10283315 mov bl, 0x5a */
  BL = (0x5au);
  /* 10283317 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10283319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1028331c:;
  /* 1028331c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1028331e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10283320 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10283322 je 0x10283345 */
  if (C.zf) goto L_10283345;
  /* 10283324 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10283326 je 0x10283345 */
  if (C.zf) goto L_10283345;
  /* 10283328 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10283329 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1028332a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1028332c jb 0x10283334 */
  if (C.cf) goto L_10283334;
  /* 1028332e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10283330 ja 0x10283334 */
  if ((!C.cf&&!C.zf)) goto L_10283334;
  /* 10283332 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10283334:;
  /* 10283334 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10283336 jb 0x1028333e */
  if (C.cf) goto L_1028333e;
  /* 10283338 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1028333a ja 0x1028333e */
  if ((!C.cf&&!C.zf)) goto L_1028333e;
  /* 1028333c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1028333e:;
  /* 1028333e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10283340 jne 0x1028334f */
  if (!C.zf) goto L_1028334f;
  /* 10283342 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10283343 jne 0x1028331c */
  if (!C.zf) goto L_1028331c;
L_10283345:;
  /* 10283345 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283347 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10283349 je 0x102833ea */
  if (C.zf) goto L_102833ea;
L_1028334f:;
  /* 1028334f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10283354 jb 0x102833ea */
  if (C.cf) goto L_102833ea;
  /* 1028335a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1028335c jmp 0x102833ea */
  goto L_102833ea;
L_10283361:;
  /* 10283361 lock inc dword ptr [0x102a0934] */
  x86_unimpl("lock inc @ 0x10283361");
  /* 10283368 cmp dword ptr [0x102a0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028336f jg 0x10283375 */
  if ((!C.zf&&C.sf==C.of)) goto L_10283375;
  /* 10283371 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283373 jmp 0x1028338e */
  goto L_1028338e;
L_10283375:;
  /* 10283375 lock dec dword ptr [0x102a0934] */
  x86_unimpl("lock dec @ 0x10283375");
  /* 1028337c mov ebx, ecx */
  EBX = (ECX);
  /* 1028337e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10283380 call 0x10278550 */
  push32(0x10283385u); f_10278550();
  /* 10283385 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1028338c mov ecx, ebx */
  ECX = (EBX);
L_1028338e:;
  /* 1028338e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283390 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10283392 mov edi, edi */
  EDI = (EDI);
L_10283394:;
  /* 10283394 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10283396 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283398 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1028339a je 0x102833bf */
  if (C.zf) goto L_102833bf;
  /* 1028339c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1028339e je 0x102833bf */
  if (C.zf) goto L_102833bf;
  /* 102833a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102833a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102833a2 push ecx */
  push32((uint32_t)(ECX));
  /* 102833a3 push eax */
  push32((uint32_t)(EAX));
  /* 102833a4 push ebx */
  push32((uint32_t)(EBX));
  /* 102833a5 call 0x10284390 */
  push32(0x102833aau); f_10284390();
  /* 102833aa mov ebx, eax */
  EBX = (EAX);
  /* 102833ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102833af call 0x10284390 */
  push32(0x102833b4u); f_10284390();
  /* 102833b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102833b7 pop ecx */
  ECX = (pop32());
  /* 102833b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102833ba jne 0x102833c5 */
  if (!C.zf) goto L_102833c5;
  /* 102833bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102833bd jne 0x10283394 */
  if (!C.zf) goto L_10283394;
L_102833bf:;
  /* 102833bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102833c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102833c3 je 0x102833ce */
  if (C.zf) goto L_102833ce;
L_102833c5:;
  /* 102833c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 102833ca jb 0x102833ce */
  if (C.cf) goto L_102833ce;
  /* 102833cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_102833ce:;
  /* 102833ce pop eax */
  EAX = (pop32());
  /* 102833cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102833d1 jne 0x102833dc */
  if (!C.zf) goto L_102833dc;
  /* 102833d3 lock dec dword ptr [0x102a0934] */
  x86_unimpl("lock dec @ 0x102833d3");
  /* 102833da jmp 0x102833ea */
  goto L_102833ea;
L_102833dc:;
  /* 102833dc mov ebx, ecx */
  EBX = (ECX);
  /* 102833de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102833e0 call 0x102785f0 */
  push32(0x102833e5u); f_102785f0();
  /* 102833e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102833e8 mov ecx, ebx */
  ECX = (EBX);
L_102833ea:;
  /* 102833ea mov eax, ecx */
  EAX = (ECX);
  /* 102833ec pop ebx */
  EBX = (pop32());
  /* 102833ed pop esi */
  ESI = (pop32());
  /* 102833ee pop edi */
  EDI = (pop32());
  /* 102833ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102833f0 ret  */
  ESPCHK(0x102832f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x10283400 (255 bytes, 88 insns) */
void f_10283400(void) {
  FTRACE(0x10283400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283400 push ebp */
  push32((uint32_t)(EBP));
  /* 10283401 mov ebp, esp */
  EBP = (ESP);
  /* 10283403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10283406:;
  /* 10283406 cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028340d jle 0x10283426 */
  if ((C.zf||C.sf!=C.of)) goto L_10283426;
  /* 1028340f push 8 */
  push32((uint32_t)(0x8u));
  /* 10283411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283416 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10283418 push ecx */
  push32((uint32_t)(ECX));
  /* 10283419 call 0x1027ab60 */
  push32(0x1028341eu); f_1027ab60();
  /* 1028341e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283421 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10283424 jmp 0x1028343f */
  goto L_1028343f;
L_10283426:;
  /* 10283426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028342b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028342d mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 10283433 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283435 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10283439 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1028343c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1028343f:;
  /* 1028343f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283443 je 0x10283450 */
  if (C.zf) goto L_10283450;
  /* 10283445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028344b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1028344e jmp 0x10283406 */
  goto L_10283406;
L_10283450:;
  /* 10283450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283453 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283455 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10283457 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1028345a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028345d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283460 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10283463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283466 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10283469 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028346d je 0x10283475 */
  if (C.zf) goto L_10283475;
  /* 1028346f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283473 jne 0x10283488 */
  if (!C.zf) goto L_10283488;
L_10283475:;
  /* 10283475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028347a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028347c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1028347f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283482 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283485 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10283488:;
  /* 10283488 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1028348f:;
  /* 1028348f cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283496 jle 0x102834ab */
  if ((C.zf||C.sf!=C.of)) goto L_102834ab;
  /* 10283498 push 4 */
  push32((uint32_t)(0x4u));
  /* 1028349a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028349d push edx */
  push32((uint32_t)(EDX));
  /* 1028349e call 0x1027ab60 */
  push32(0x102834a3u); f_1027ab60();
  /* 102834a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102834a6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 102834a9 jmp 0x102834c0 */
  goto L_102834c0;
L_102834ab:;
  /* 102834ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102834ae mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 102834b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102834b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 102834ba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 102834bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_102834c0:;
  /* 102834c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102834c4 je 0x102834eb */
  if (C.zf) goto L_102834eb;
  /* 102834c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102834c9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102834cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102834cf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 102834d3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102834d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102834d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102834db mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 102834dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102834e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102834e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102834e6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 102834e9 jmp 0x1028348f */
  goto L_1028348f;
L_102834eb:;
  /* 102834eb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102834ef jne 0x102834f8 */
  if (!C.zf) goto L_102834f8;
  /* 102834f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102834f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102834f6 jmp 0x102834fb */
  goto L_102834fb;
L_102834f8:;
  /* 102834f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_102834fb:;
  /* 102834fb mov esp, ebp */
  ESP = (EBP);
  /* 102834fd pop ebp */
  EBP = (pop32());
  /* 102834fe ret  */
  ESPCHK(0x10283400u, _esp0);
  ESP += 4; return;
}

/* FUN_10013500 @ 0x10283500 (17 bytes, 8 insns) */
void f_10283500(void) {
  FTRACE(0x10283500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283500 push ebp */
  push32((uint32_t)(EBP));
  /* 10283501 mov ebp, esp */
  EBP = (ESP);
  /* 10283503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283506 push eax */
  push32((uint32_t)(EAX));
  /* 10283507 call 0x10283400 */
  push32(0x1028350cu); f_10283400();
  /* 1028350c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028350f pop ebp */
  EBP = (pop32());
  /* 10283510 ret  */
  ESPCHK(0x10283500u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x10283520 (297 bytes, 106 insns) */
void f_10283520(void) {
  FTRACE(0x10283520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283520 push ebp */
  push32((uint32_t)(EBP));
  /* 10283521 mov ebp, esp */
  EBP = (ESP);
  /* 10283523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283526 push esi */
  push32((uint32_t)(ESI));
L_10283527:;
  /* 10283527 cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028352e jle 0x10283547 */
  if ((C.zf||C.sf!=C.of)) goto L_10283547;
  /* 10283530 push 8 */
  push32((uint32_t)(0x8u));
  /* 10283532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283537 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10283539 push ecx */
  push32((uint32_t)(ECX));
  /* 1028353a call 0x1027ab60 */
  push32(0x1028353fu); f_1027ab60();
  /* 1028353f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283542 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10283545 jmp 0x10283560 */
  goto L_10283560;
L_10283547:;
  /* 10283547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028354a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028354c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028354e mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 10283554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283556 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1028355a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1028355d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10283560:;
  /* 10283560 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283564 je 0x10283571 */
  if (C.zf) goto L_10283571;
  /* 10283566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028356c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1028356f jmp 0x10283527 */
  goto L_10283527;
L_10283571:;
  /* 10283571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283576 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10283578 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1028357b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028357e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283581 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10283584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283587 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1028358a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028358e je 0x10283596 */
  if (C.zf) goto L_10283596;
  /* 10283590 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283594 jne 0x102835a9 */
  if (!C.zf) goto L_102835a9;
L_10283596:;
  /* 10283596 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028359b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028359d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102835a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102835a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102835a6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_102835a9:;
  /* 102835a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 102835b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_102835b7:;
  /* 102835b7 cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102835be jle 0x102835d3 */
  if ((C.zf||C.sf!=C.of)) goto L_102835d3;
  /* 102835c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102835c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102835c5 push edx */
  push32((uint32_t)(EDX));
  /* 102835c6 call 0x1027ab60 */
  push32(0x102835cbu); f_1027ab60();
  /* 102835cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102835ce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 102835d1 jmp 0x102835e8 */
  goto L_102835e8;
L_102835d3:;
  /* 102835d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102835d6 mov ecx, dword ptr [0x1029ec98] */
  ECX = (r32((uint32_t)(0x1029ec98)));
  /* 102835dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102835de mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 102835e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 102835e5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_102835e8:;
  /* 102835e8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102835ec je 0x10283629 */
  if (C.zf) goto L_10283629;
  /* 102835ee push 0 */
  push32((uint32_t)(0x0u));
  /* 102835f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 102835f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102835f5 push eax */
  push32((uint32_t)(EAX));
  /* 102835f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102835f9 push ecx */
  push32((uint32_t)(ECX));
  /* 102835fa call 0x102844c0 */
  push32(0x102835ffu); f_102844c0();
  /* 102835ff mov ecx, eax */
  ECX = (EAX);
  /* 10283601 mov esi, edx */
  ESI = (EDX);
  /* 10283603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283606 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283609 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1028360a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028360c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1028360e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10283611 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10283614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283619 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1028361b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1028361e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10283627 jmp 0x102835b7 */
  goto L_102835b7;
L_10283629:;
  /* 10283629 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028362d jne 0x1028363e */
  if (!C.zf) goto L_1028363e;
  /* 1028362f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283632 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10283634 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283637 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028363a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1028363c jmp 0x10283644 */
  goto L_10283644;
L_1028363e:;
  /* 1028363e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10283644:;
  /* 10283644 pop esi */
  ESI = (pop32());
  /* 10283645 mov esp, ebp */
  ESP = (EBP);
  /* 10283647 pop ebp */
  EBP = (pop32());
  /* 10283648 ret  */
  ESPCHK(0x10283520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013650 @ 0x10283650 (61 bytes, 18 insns) */
void f_10283650(void) {
  FTRACE(0x10283650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283650 push ebp */
  push32((uint32_t)(EBP));
  /* 10283651 mov ebp, esp */
  EBP = (ESP);
  /* 10283653 cmp dword ptr [0x102a0900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028365a jne 0x1028368b */
  if (!C.zf) goto L_1028368b;
  /* 1028365c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1028365e call 0x10278550 */
  push32(0x10283663u); f_10278550();
  /* 10283663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283666 cmp dword ptr [0x102a0900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028366d jne 0x10283681 */
  if (!C.zf) goto L_10283681;
  /* 1028366f call 0x102836b0 */
  push32(0x10283674u); f_102836b0();
  /* 10283674 mov eax, dword ptr [0x102a0900] */
  EAX = (r32((uint32_t)(0x102a0900)));
  /* 10283679 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028367c mov dword ptr [0x102a0900], eax */
  w32((uint32_t)(0x102a0900), (EAX));
L_10283681:;
  /* 10283681 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10283683 call 0x102785f0 */
  push32(0x10283688u); f_102785f0();
  /* 10283688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1028368b:;
  /* 1028368b pop ebp */
  EBP = (pop32());
  /* 1028368c ret  */
  ESPCHK(0x10283650u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x10283690 (30 bytes, 11 insns) */
void f_10283690(void) {
  FTRACE(0x10283690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283690 push ebp */
  push32((uint32_t)(EBP));
  /* 10283691 mov ebp, esp */
  EBP = (ESP);
  /* 10283693 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10283695 call 0x10278550 */
  push32(0x1028369au); f_10278550();
  /* 1028369a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028369d call 0x102836b0 */
  push32(0x102836a2u); f_102836b0();
  /* 102836a2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102836a4 call 0x102785f0 */
  push32(0x102836a9u); f_102785f0();
  /* 102836a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102836ac pop ebp */
  EBP = (pop32());
  /* 102836ad ret  */
  ESPCHK(0x10283690u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x102836b0 (939 bytes, 266 insns) */
void f_102836b0(void) {
  FTRACE(0x102836b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102836b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102836b1 mov ebp, esp */
  EBP = (ESP);
  /* 102836b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102836b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102836bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 102836bf call 0x10278550 */
  push32(0x102836c4u); f_10278550();
  /* 102836c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102836c7 mov dword ptr [0x102a0848], 0 */
  w32((uint32_t)(0x102a0848), (0x0u));
  /* 102836d1 mov dword ptr [0x1029fe38], 0xffffffff */
  w32((uint32_t)(0x1029fe38), (0xffffffffu));
  /* 102836db mov eax, dword ptr [0x1029fe38] */
  EAX = (r32((uint32_t)(0x1029fe38)));
  /* 102836e0 mov dword ptr [0x1029fe28], eax */
  w32((uint32_t)(0x1029fe28), (EAX));
  /* 102836e5 push 0x1029c910 */
  push32((uint32_t)(0x1029c910u));
  /* 102836ea call 0x10284530 */
  push32(0x102836efu); f_10284530();
  /* 102836ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102836f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102836f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102836f9 jne 0x10283833 */
  if (!C.zf) goto L_10283833;
  /* 102836ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 10283701 call 0x102785f0 */
  push32(0x10283706u); f_102785f0();
  /* 10283706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283709 push 0x102a0850 */
  push32((uint32_t)(0x102a0850u));
  /* 1028370e call dword ptr [0x102a3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3288))), 0x10283714u);
  /* 10283714 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283717 je 0x1028382e */
  if (C.zf) goto L_1028382e;
  /* 1028371d mov dword ptr [0x102a0848], 1 */
  w32((uint32_t)(0x102a0848), (0x1u));
  /* 10283727 mov ecx, dword ptr [0x102a0850] */
  ECX = (r32((uint32_t)(0x102a0850)));
  /* 1028372d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283730 mov dword ptr [0x1029fd90], ecx */
  w32((uint32_t)(0x1029fd90), (ECX));
  /* 10283736 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283738 mov dx, word ptr [0x102a0896] */
  DX = (r16((uint32_t)(0x102a0896)));
  /* 1028373f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10283741 je 0x10283759 */
  if (C.zf) goto L_10283759;
  /* 10283743 mov eax, dword ptr [0x102a08a4] */
  EAX = (r32((uint32_t)(0x102a08a4)));
  /* 10283748 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028374b mov ecx, dword ptr [0x1029fd90] */
  ECX = (r32((uint32_t)(0x1029fd90)));
  /* 10283751 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283753 mov dword ptr [0x1029fd90], ecx */
  w32((uint32_t)(0x1029fd90), (ECX));
L_10283759:;
  /* 10283759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1028375b mov dx, word ptr [0x102a08ea] */
  DX = (r16((uint32_t)(0x102a08ea)));
  /* 10283762 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10283764 je 0x1028378e */
  if (C.zf) goto L_1028378e;
  /* 10283766 cmp dword ptr [0x102a08f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a08f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028376d je 0x1028378e */
  if (C.zf) goto L_1028378e;
  /* 1028376f mov dword ptr [0x1029fd94], 1 */
  w32((uint32_t)(0x1029fd94), (0x1u));
  /* 10283779 mov eax, dword ptr [0x102a08f8] */
  EAX = (r32((uint32_t)(0x102a08f8)));
  /* 1028377e sub eax, dword ptr [0x102a08a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a08a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283784 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283787 mov dword ptr [0x1029fd98], eax */
  w32((uint32_t)(0x1029fd98), (EAX));
  /* 1028378c jmp 0x102837a2 */
  goto L_102837a2;
L_1028378e:;
  /* 1028378e mov dword ptr [0x1029fd94], 0 */
  w32((uint32_t)(0x1029fd94), (0x0u));
  /* 10283798 mov dword ptr [0x1029fd98], 0 */
  w32((uint32_t)(0x1029fd98), (0x0u));
L_102837a2:;
  /* 102837a2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 102837a5 push ecx */
  push32((uint32_t)(ECX));
  /* 102837a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102837a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102837aa mov edx, dword ptr [0x1029fe1c] */
  EDX = (r32((uint32_t)(0x1029fe1c)));
  /* 102837b0 push edx */
  push32((uint32_t)(EDX));
  /* 102837b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102837b3 push 0x102a0854 */
  push32((uint32_t)(0x102a0854u));
  /* 102837b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102837bd mov eax, dword ptr [0x102a07b8] */
  EAX = (r32((uint32_t)(0x102a07b8)));
  /* 102837c2 push eax */
  push32((uint32_t)(EAX));
  /* 102837c3 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x102837c9u);
  /* 102837c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102837cb je 0x102837df */
  if (C.zf) goto L_102837df;
  /* 102837cd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102837d1 jne 0x102837df */
  if (!C.zf) goto L_102837df;
  /* 102837d3 mov ecx, dword ptr [0x1029fe1c] */
  ECX = (r32((uint32_t)(0x1029fe1c)));
  /* 102837d9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 102837dd jmp 0x102837e8 */
  goto L_102837e8;
L_102837df:;
  /* 102837df mov edx, dword ptr [0x1029fe1c] */
  EDX = (r32((uint32_t)(0x1029fe1c)));
  /* 102837e5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_102837e8:;
  /* 102837e8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102837eb push eax */
  push32((uint32_t)(EAX));
  /* 102837ec push 0 */
  push32((uint32_t)(0x0u));
  /* 102837ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102837f0 mov ecx, dword ptr [0x1029fe20] */
  ECX = (r32((uint32_t)(0x1029fe20)));
  /* 102837f6 push ecx */
  push32((uint32_t)(ECX));
  /* 102837f7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102837f9 push 0x102a08a8 */
  push32((uint32_t)(0x102a08a8u));
  /* 102837fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10283803 mov edx, dword ptr [0x102a07b8] */
  EDX = (r32((uint32_t)(0x102a07b8)));
  /* 10283809 push edx */
  push32((uint32_t)(EDX));
  /* 1028380a call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x10283810u);
  /* 10283810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10283812 je 0x10283825 */
  if (C.zf) goto L_10283825;
  /* 10283814 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283818 jne 0x10283825 */
  if (!C.zf) goto L_10283825;
  /* 1028381a mov eax, dword ptr [0x1029fe20] */
  EAX = (r32((uint32_t)(0x1029fe20)));
  /* 1028381f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10283823 jmp 0x1028382e */
  goto L_1028382e;
L_10283825:;
  /* 10283825 mov ecx, dword ptr [0x1029fe20] */
  ECX = (r32((uint32_t)(0x1029fe20)));
  /* 1028382b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1028382e:;
  /* 1028382e jmp 0x10283a57 */
  goto L_10283a57;
L_10283833:;
  /* 10283833 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283836 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10283839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028383b je 0x1028385d */
  if (C.zf) goto L_1028385d;
  /* 1028383d cmp dword ptr [0x102a08fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a08fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283844 je 0x1028386c */
  if (C.zf) goto L_1028386c;
  /* 10283846 mov ecx, dword ptr [0x102a08fc] */
  ECX = (r32((uint32_t)(0x102a08fc)));
  /* 1028384c push ecx */
  push32((uint32_t)(ECX));
  /* 1028384d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283850 push edx */
  push32((uint32_t)(EDX));
  /* 10283851 call 0x102807e0 */
  push32(0x10283856u); f_102807e0();
  /* 10283856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028385b jne 0x1028386c */
  if (!C.zf) goto L_1028386c;
L_1028385d:;
  /* 1028385d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1028385f call 0x102785f0 */
  push32(0x10283864u); f_102785f0();
  /* 10283864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283867 jmp 0x10283a57 */
  goto L_10283a57;
L_1028386c:;
  /* 1028386c push 2 */
  push32((uint32_t)(0x2u));
  /* 1028386e mov eax, dword ptr [0x102a08fc] */
  EAX = (r32((uint32_t)(0x102a08fc)));
  /* 10283873 push eax */
  push32((uint32_t)(EAX));
  /* 10283874 call 0x102755e0 */
  push32(0x10283879u); f_102755e0();
  /* 10283879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028387c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10283881 push 0x1029c908 */
  push32((uint32_t)(0x1029c908u));
  /* 10283886 push 2 */
  push32((uint32_t)(0x2u));
  /* 10283888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028388b push ecx */
  push32((uint32_t)(ECX));
  /* 1028388c call 0x10277980 */
  push32(0x10283891u); f_10277980();
  /* 10283891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283894 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283897 push eax */
  push32((uint32_t)(EAX));
  /* 10283898 call 0x10274b50 */
  push32(0x1028389du); f_10274b50();
  /* 1028389d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102838a0 mov dword ptr [0x102a08fc], eax */
  w32((uint32_t)(0x102a08fc), (EAX));
  /* 102838a5 cmp dword ptr [0x102a08fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a08fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102838ac jne 0x102838bd */
  if (!C.zf) goto L_102838bd;
  /* 102838ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 102838b0 call 0x102785f0 */
  push32(0x102838b5u); f_102785f0();
  /* 102838b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102838b8 jmp 0x10283a57 */
  goto L_10283a57;
L_102838bd:;
  /* 102838bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102838c0 push edx */
  push32((uint32_t)(EDX));
  /* 102838c1 mov eax, dword ptr [0x102a08fc] */
  EAX = (r32((uint32_t)(0x102a08fc)));
  /* 102838c6 push eax */
  push32((uint32_t)(EAX));
  /* 102838c7 call 0x10277b00 */
  push32(0x102838ccu); f_10277b00();
  /* 102838cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102838cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 102838d1 call 0x102785f0 */
  push32(0x102838d6u); f_102785f0();
  /* 102838d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102838d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 102838db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102838de push ecx */
  push32((uint32_t)(ECX));
  /* 102838df mov edx, dword ptr [0x1029fe1c] */
  EDX = (r32((uint32_t)(0x1029fe1c)));
  /* 102838e5 push edx */
  push32((uint32_t)(EDX));
  /* 102838e6 call 0x10278370 */
  push32(0x102838ebu); f_10278370();
  /* 102838eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102838ee mov eax, dword ptr [0x1029fe1c] */
  EAX = (r32((uint32_t)(0x1029fe1c)));
  /* 102838f3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 102838f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102838fa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102838fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10283900 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283903 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10283906 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283909 jne 0x1028391d */
  if (!C.zf) goto L_1028391d;
  /* 1028390b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028390e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283911 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10283914 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028391a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1028391d:;
  /* 1028391d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283920 push eax */
  push32((uint32_t)(EAX));
  /* 10283921 call 0x10283400 */
  push32(0x10283926u); f_10283400();
  /* 10283926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283929 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1028392f mov dword ptr [0x1029fd90], eax */
  w32((uint32_t)(0x1029fd90), (EAX));
L_10283934:;
  /* 10283934 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283937 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1028393a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028393d je 0x10283955 */
  if (C.zf) goto L_10283955;
  /* 1028393f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283942 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10283945 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283948 jl 0x10283960 */
  if ((C.sf!=C.of)) goto L_10283960;
  /* 1028394a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028394d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10283950 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283953 jg 0x10283960 */
  if ((!C.zf&&C.sf==C.of)) goto L_10283960;
L_10283955:;
  /* 10283955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283958 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028395b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1028395e jmp 0x10283934 */
  goto L_10283934;
L_10283960:;
  /* 10283960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283963 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10283966 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283969 jne 0x10283a05 */
  if (!C.zf) goto L_10283a05;
  /* 1028396f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283975 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10283978 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028397b push edx */
  push32((uint32_t)(EDX));
  /* 1028397c call 0x10283400 */
  push32(0x10283981u); f_10283400();
  /* 10283981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283984 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283987 mov ecx, dword ptr [0x1029fd90] */
  ECX = (r32((uint32_t)(0x1029fd90)));
  /* 1028398d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028398f mov dword ptr [0x1029fd90], ecx */
  w32((uint32_t)(0x1029fd90), (ECX));
L_10283995:;
  /* 10283995 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283998 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1028399b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028399e jl 0x102839b6 */
  if ((C.sf!=C.of)) goto L_102839b6;
  /* 102839a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 102839a6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102839a9 jg 0x102839b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_102839b6;
  /* 102839ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102839b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102839b4 jmp 0x10283995 */
  goto L_10283995;
L_102839b6:;
  /* 102839b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 102839bc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102839bf jne 0x10283a05 */
  if (!C.zf) goto L_10283a05;
  /* 102839c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102839c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102839ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839cd push ecx */
  push32((uint32_t)(ECX));
  /* 102839ce call 0x10283400 */
  push32(0x102839d3u); f_10283400();
  /* 102839d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102839d6 mov edx, dword ptr [0x1029fd90] */
  EDX = (r32((uint32_t)(0x1029fd90)));
  /* 102839dc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102839de mov dword ptr [0x1029fd90], edx */
  w32((uint32_t)(0x1029fd90), (EDX));
L_102839e4:;
  /* 102839e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 102839ea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102839ed jl 0x10283a05 */
  if ((C.sf!=C.of)) goto L_10283a05;
  /* 102839ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 102839f5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102839f8 jg 0x10283a05 */
  if ((!C.zf&&C.sf==C.of)) goto L_10283a05;
  /* 102839fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102839fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283a00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10283a03 jmp 0x102839e4 */
  goto L_102839e4;
L_10283a05:;
  /* 10283a05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283a09 je 0x10283a19 */
  if (C.zf) goto L_10283a19;
  /* 10283a0b mov edx, dword ptr [0x1029fd90] */
  EDX = (r32((uint32_t)(0x1029fd90)));
  /* 10283a11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10283a13 mov dword ptr [0x1029fd90], edx */
  w32((uint32_t)(0x1029fd90), (EDX));
L_10283a19:;
  /* 10283a19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283a1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10283a1f mov dword ptr [0x1029fd94], ecx */
  w32((uint32_t)(0x1029fd94), (ECX));
  /* 10283a25 cmp dword ptr [0x1029fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1029fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283a2c je 0x10283a4e */
  if (C.zf) goto L_10283a4e;
  /* 10283a2e push 3 */
  push32((uint32_t)(0x3u));
  /* 10283a30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283a33 push edx */
  push32((uint32_t)(EDX));
  /* 10283a34 mov eax, dword ptr [0x1029fe20] */
  EAX = (r32((uint32_t)(0x1029fe20)));
  /* 10283a39 push eax */
  push32((uint32_t)(EAX));
  /* 10283a3a call 0x10278370 */
  push32(0x10283a3fu); f_10278370();
  /* 10283a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283a42 mov ecx, dword ptr [0x1029fe20] */
  ECX = (r32((uint32_t)(0x1029fe20)));
  /* 10283a48 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10283a4c jmp 0x10283a57 */
  goto L_10283a57;
L_10283a4e:;
  /* 10283a4e mov edx, dword ptr [0x1029fe20] */
  EDX = (r32((uint32_t)(0x1029fe20)));
  /* 10283a54 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10283a57:;
  /* 10283a57 mov esp, ebp */
  ESP = (EBP);
  /* 10283a59 pop ebp */
  EBP = (pop32());
  /* 10283a5a ret  */
  ESPCHK(0x102836b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a60 @ 0x10283a60 (46 bytes, 18 insns) */
void f_10283a60(void) {
  FTRACE(0x10283a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10283a61 mov ebp, esp */
  EBP = (ESP);
  /* 10283a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10283a64 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10283a66 call 0x10278550 */
  push32(0x10283a6bu); f_10278550();
  /* 10283a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283a71 push eax */
  push32((uint32_t)(EAX));
  /* 10283a72 call 0x10283a90 */
  push32(0x10283a77u); f_10283a90();
  /* 10283a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283a7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10283a7d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10283a7f call 0x102785f0 */
  push32(0x10283a84u); f_102785f0();
  /* 10283a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283a8a mov esp, ebp */
  ESP = (EBP);
  /* 10283a8c pop ebp */
  EBP = (pop32());
  /* 10283a8d ret  */
  ESPCHK(0x10283a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x10283a90 (762 bytes, 246 insns) */
void f_10283a90(void) {
  FTRACE(0x10283a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10283a91 mov ebp, esp */
  EBP = (ESP);
  /* 10283a93 push ecx */
  push32((uint32_t)(ECX));
  /* 10283a94 cmp dword ptr [0x1029fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1029fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283a9b jne 0x10283aa4 */
  if (!C.zf) goto L_10283aa4;
  /* 10283a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283a9f jmp 0x10283d86 */
  goto L_10283d86;
L_10283aa4:;
  /* 10283aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283aa7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10283aaa cmp ecx, dword ptr [0x1029fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283ab0 jne 0x10283ac4 */
  if (!C.zf) goto L_10283ac4;
  /* 10283ab2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283ab5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10283ab8 cmp eax, dword ptr [0x1029fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283abe je 0x10283c8b */
  if (C.zf) goto L_10283c8b;
L_10283ac4:;
  /* 10283ac4 cmp dword ptr [0x102a0848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283acb je 0x10283c45 */
  if (C.zf) goto L_10283c45;
  /* 10283ad1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283ad3 mov cx, word ptr [0x102a08e8] */
  CX = (r16((uint32_t)(0x102a08e8)));
  /* 10283ada test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10283adc jne 0x10283b39 */
  if (!C.zf) goto L_10283b39;
  /* 10283ade xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283ae0 mov dx, word ptr [0x102a08f6] */
  DX = (r16((uint32_t)(0x102a08f6)));
  /* 10283ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10283ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283aea mov ax, word ptr [0x102a08f4] */
  AX = (r16((uint32_t)(0x102a08f4)));
  /* 10283af0 push eax */
  push32((uint32_t)(EAX));
  /* 10283af1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283af3 mov cx, word ptr [0x102a08f2] */
  CX = (r16((uint32_t)(0x102a08f2)));
  /* 10283afa push ecx */
  push32((uint32_t)(ECX));
  /* 10283afb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283afd mov dx, word ptr [0x102a08f0] */
  DX = (r16((uint32_t)(0x102a08f0)));
  /* 10283b04 push edx */
  push32((uint32_t)(EDX));
  /* 10283b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283b09 mov ax, word ptr [0x102a08ec] */
  AX = (r16((uint32_t)(0x102a08ec)));
  /* 10283b0f push eax */
  push32((uint32_t)(EAX));
  /* 10283b10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283b12 mov cx, word ptr [0x102a08ee] */
  CX = (r16((uint32_t)(0x102a08ee)));
  /* 10283b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10283b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283b1c mov dx, word ptr [0x102a08ea] */
  DX = (r16((uint32_t)(0x102a08ea)));
  /* 10283b23 push edx */
  push32((uint32_t)(EDX));
  /* 10283b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283b27 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10283b2a push ecx */
  push32((uint32_t)(ECX));
  /* 10283b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10283b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10283b2f call 0x10283d90 */
  push32(0x10283b34u); f_10283d90();
  /* 10283b34 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283b37 jmp 0x10283b8a */
  goto L_10283b8a;
L_10283b39:;
  /* 10283b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283b3b mov dx, word ptr [0x102a08f6] */
  DX = (r16((uint32_t)(0x102a08f6)));
  /* 10283b42 push edx */
  push32((uint32_t)(EDX));
  /* 10283b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283b45 mov ax, word ptr [0x102a08f4] */
  AX = (r16((uint32_t)(0x102a08f4)));
  /* 10283b4b push eax */
  push32((uint32_t)(EAX));
  /* 10283b4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283b4e mov cx, word ptr [0x102a08f2] */
  CX = (r16((uint32_t)(0x102a08f2)));
  /* 10283b55 push ecx */
  push32((uint32_t)(ECX));
  /* 10283b56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283b58 mov dx, word ptr [0x102a08f0] */
  DX = (r16((uint32_t)(0x102a08f0)));
  /* 10283b5f push edx */
  push32((uint32_t)(EDX));
  /* 10283b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283b62 mov ax, word ptr [0x102a08ee] */
  AX = (r16((uint32_t)(0x102a08ee)));
  /* 10283b68 push eax */
  push32((uint32_t)(EAX));
  /* 10283b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10283b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283b6f mov cx, word ptr [0x102a08ea] */
  CX = (r16((uint32_t)(0x102a08ea)));
  /* 10283b76 push ecx */
  push32((uint32_t)(ECX));
  /* 10283b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283b7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10283b7d push eax */
  push32((uint32_t)(EAX));
  /* 10283b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10283b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10283b82 call 0x10283d90 */
  push32(0x10283b87u); f_10283d90();
  /* 10283b87 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10283b8a:;
  /* 10283b8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283b8c mov cx, word ptr [0x102a0894] */
  CX = (r16((uint32_t)(0x102a0894)));
  /* 10283b93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10283b95 jne 0x10283bf2 */
  if (!C.zf) goto L_10283bf2;
  /* 10283b97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283b99 mov dx, word ptr [0x102a08a2] */
  DX = (r16((uint32_t)(0x102a08a2)));
  /* 10283ba0 push edx */
  push32((uint32_t)(EDX));
  /* 10283ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283ba3 mov ax, word ptr [0x102a08a0] */
  AX = (r16((uint32_t)(0x102a08a0)));
  /* 10283ba9 push eax */
  push32((uint32_t)(EAX));
  /* 10283baa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283bac mov cx, word ptr [0x102a089e] */
  CX = (r16((uint32_t)(0x102a089e)));
  /* 10283bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10283bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283bb6 mov dx, word ptr [0x102a089c] */
  DX = (r16((uint32_t)(0x102a089c)));
  /* 10283bbd push edx */
  push32((uint32_t)(EDX));
  /* 10283bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10283bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283bc2 mov ax, word ptr [0x102a0898] */
  AX = (r16((uint32_t)(0x102a0898)));
  /* 10283bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10283bc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283bcb mov cx, word ptr [0x102a089a] */
  CX = (r16((uint32_t)(0x102a089a)));
  /* 10283bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10283bd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283bd5 mov dx, word ptr [0x102a0896] */
  DX = (r16((uint32_t)(0x102a0896)));
  /* 10283bdc push edx */
  push32((uint32_t)(EDX));
  /* 10283bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283be0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10283be3 push ecx */
  push32((uint32_t)(ECX));
  /* 10283be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10283be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283be8 call 0x10283d90 */
  push32(0x10283bedu); f_10283d90();
  /* 10283bed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283bf0 jmp 0x10283c43 */
  goto L_10283c43;
L_10283bf2:;
  /* 10283bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283bf4 mov dx, word ptr [0x102a08a2] */
  DX = (r16((uint32_t)(0x102a08a2)));
  /* 10283bfb push edx */
  push32((uint32_t)(EDX));
  /* 10283bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283bfe mov ax, word ptr [0x102a08a0] */
  AX = (r16((uint32_t)(0x102a08a0)));
  /* 10283c04 push eax */
  push32((uint32_t)(EAX));
  /* 10283c05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283c07 mov cx, word ptr [0x102a089e] */
  CX = (r16((uint32_t)(0x102a089e)));
  /* 10283c0e push ecx */
  push32((uint32_t)(ECX));
  /* 10283c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10283c11 mov dx, word ptr [0x102a089c] */
  DX = (r16((uint32_t)(0x102a089c)));
  /* 10283c18 push edx */
  push32((uint32_t)(EDX));
  /* 10283c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283c1b mov ax, word ptr [0x102a089a] */
  AX = (r16((uint32_t)(0x102a089a)));
  /* 10283c21 push eax */
  push32((uint32_t)(EAX));
  /* 10283c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10283c28 mov cx, word ptr [0x102a0896] */
  CX = (r16((uint32_t)(0x102a0896)));
  /* 10283c2f push ecx */
  push32((uint32_t)(ECX));
  /* 10283c30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283c33 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10283c36 push eax */
  push32((uint32_t)(EAX));
  /* 10283c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c3b call 0x10283d90 */
  push32(0x10283c40u); f_10283d90();
  /* 10283c40 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10283c43:;
  /* 10283c43 jmp 0x10283c8b */
  goto L_10283c8b;
L_10283c45:;
  /* 10283c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10283c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10283c53 push 4 */
  push32((uint32_t)(0x4u));
  /* 10283c55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283c58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10283c5b push edx */
  push32((uint32_t)(EDX));
  /* 10283c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10283c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10283c60 call 0x10283d90 */
  push32(0x10283c65u); f_10283d90();
  /* 10283c65 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 10283c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c74 push 5 */
  push32((uint32_t)(0x5u));
  /* 10283c76 push 0xa */
  push32((uint32_t)(0xau));
  /* 10283c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283c7b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10283c7e push ecx */
  push32((uint32_t)(ECX));
  /* 10283c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10283c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283c83 call 0x10283d90 */
  push32(0x10283c88u); f_10283d90();
  /* 10283c88 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10283c8b:;
  /* 10283c8b mov edx, dword ptr [0x1029fe2c] */
  EDX = (r32((uint32_t)(0x1029fe2c)));
  /* 10283c91 cmp edx, dword ptr [0x1029fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1029fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283c97 jge 0x10283ce4 */
  if ((C.sf==C.of)) goto L_10283ce4;
  /* 10283c99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283c9c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10283c9f cmp ecx, dword ptr [0x1029fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283ca5 jl 0x10283cb5 */
  if ((C.sf!=C.of)) goto L_10283cb5;
  /* 10283ca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283caa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10283cad cmp eax, dword ptr [0x1029fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283cb3 jle 0x10283cbc */
  if ((C.zf||C.sf!=C.of)) goto L_10283cbc;
L_10283cb5:;
  /* 10283cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283cb7 jmp 0x10283d86 */
  goto L_10283d86;
L_10283cbc:;
  /* 10283cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283cbf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10283cc2 cmp edx, dword ptr [0x1029fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1029fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283cc8 jle 0x10283ce2 */
  if ((C.zf||C.sf!=C.of)) goto L_10283ce2;
  /* 10283cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283ccd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10283cd0 cmp ecx, dword ptr [0x1029fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283cd6 jge 0x10283ce2 */
  if ((C.sf==C.of)) goto L_10283ce2;
  /* 10283cd8 mov eax, 1 */
  EAX = (0x1u);
  /* 10283cdd jmp 0x10283d86 */
  goto L_10283d86;
L_10283ce2:;
  /* 10283ce2 jmp 0x10283d27 */
  goto L_10283d27;
L_10283ce4:;
  /* 10283ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283ce7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10283cea cmp eax, dword ptr [0x1029fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283cf0 jl 0x10283d00 */
  if ((C.sf!=C.of)) goto L_10283d00;
  /* 10283cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283cf5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10283cf8 cmp edx, dword ptr [0x1029fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1029fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283cfe jle 0x10283d07 */
  if ((C.zf||C.sf!=C.of)) goto L_10283d07;
L_10283d00:;
  /* 10283d00 mov eax, 1 */
  EAX = (0x1u);
  /* 10283d05 jmp 0x10283d86 */
  goto L_10283d86;
L_10283d07:;
  /* 10283d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283d0a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10283d0d cmp ecx, dword ptr [0x1029fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283d13 jle 0x10283d27 */
  if ((C.zf||C.sf!=C.of)) goto L_10283d27;
  /* 10283d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283d18 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10283d1b cmp eax, dword ptr [0x1029fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283d21 jge 0x10283d27 */
  if ((C.sf==C.of)) goto L_10283d27;
  /* 10283d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283d25 jmp 0x10283d86 */
  goto L_10283d86;
L_10283d27:;
  /* 10283d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283d2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10283d2d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283d33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10283d35 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283d37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283d3a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10283d3d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283d43 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283d45 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283d4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10283d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10283d51 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10283d54 cmp edx, dword ptr [0x1029fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1029fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283d5a jne 0x10283d72 */
  if (!C.zf) goto L_10283d72;
  /* 10283d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283d5f cmp eax, dword ptr [0x1029fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283d65 jl 0x10283d6e */
  if ((C.sf!=C.of)) goto L_10283d6e;
  /* 10283d67 mov eax, 1 */
  EAX = (0x1u);
  /* 10283d6c jmp 0x10283d86 */
  goto L_10283d86;
L_10283d6e:;
  /* 10283d6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283d70 jmp 0x10283d86 */
  goto L_10283d86;
L_10283d72:;
  /* 10283d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283d75 cmp ecx, dword ptr [0x1029fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283d7b jge 0x10283d84 */
  if ((C.sf==C.of)) goto L_10283d84;
  /* 10283d7d mov eax, 1 */
  EAX = (0x1u);
  /* 10283d82 jmp 0x10283d86 */
  goto L_10283d86;
L_10283d84:;
  /* 10283d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10283d86:;
  /* 10283d86 mov esp, ebp */
  ESP = (EBP);
  /* 10283d88 pop ebp */
  EBP = (pop32());
  /* 10283d89 ret  */
  ESPCHK(0x10283a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d90 @ 0x10283d90 (504 bytes, 145 insns) */
void f_10283d90(void) {
  FTRACE(0x10283d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10283d91 mov ebp, esp */
  EBP = (ESP);
  /* 10283d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283d96 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283d9a jne 0x10283e6c */
  if (!C.zf) goto L_10283e6c;
  /* 10283da0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283da3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10283da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10283da8 jne 0x10283db9 */
  if (!C.zf) goto L_10283db9;
  /* 10283daa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10283dad mov edx, dword ptr [ecx*4 + 0x1029fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029fe4c)));
  /* 10283db4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10283db7 jmp 0x10283dc6 */
  goto L_10283dc6;
L_10283db9:;
  /* 10283db9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10283dbc mov ecx, dword ptr [eax*4 + 0x1029fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029fe80)));
  /* 10283dc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10283dc6:;
  /* 10283dc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10283dc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283dcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10283dcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283dd2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283dd5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283ddb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283dde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283de0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283de3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283de6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10283de9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10283ded cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10283dee mov ecx, 7 */
  ECX = (0x7u);
  /* 10283df3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10283df5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10283df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10283dfb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283dfe jge 0x10283e19 */
  if ((C.sf==C.of)) goto L_10283e19;
  /* 10283e00 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10283e03 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283e06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10283e09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283e0c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283e0f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283e12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283e14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10283e17 jmp 0x10283e2d */
  goto L_10283e2d;
L_10283e19:;
  /* 10283e19 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10283e1c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283e1f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10283e22 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283e25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283e28 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283e2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10283e2d:;
  /* 10283e2d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283e31 jne 0x10283e6a */
  if (!C.zf) goto L_10283e6a;
  /* 10283e33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283e36 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10283e39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10283e3b jne 0x10283e4c */
  if (!C.zf) goto L_10283e4c;
  /* 10283e3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10283e40 mov eax, dword ptr [edx*4 + 0x1029fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1029fe50)));
  /* 10283e47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10283e4a jmp 0x10283e59 */
  goto L_10283e59;
L_10283e4c:;
  /* 10283e4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10283e4f mov edx, dword ptr [ecx*4 + 0x1029fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029fe84)));
  /* 10283e56 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10283e59:;
  /* 10283e59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283e5c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283e5f jle 0x10283e6a */
  if ((C.zf||C.sf!=C.of)) goto L_10283e6a;
  /* 10283e61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283e64 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283e67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10283e6a:;
  /* 10283e6a jmp 0x10283ea1 */
  goto L_10283ea1;
L_10283e6c:;
  /* 10283e6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283e6f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10283e72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10283e74 jne 0x10283e85 */
  if (!C.zf) goto L_10283e85;
  /* 10283e76 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10283e79 mov ecx, dword ptr [eax*4 + 0x1029fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029fe4c)));
  /* 10283e80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10283e83 jmp 0x10283e92 */
  goto L_10283e92;
L_10283e85:;
  /* 10283e85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10283e88 mov eax, dword ptr [edx*4 + 0x1029fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1029fe80)));
  /* 10283e8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10283e92:;
  /* 10283e92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10283e95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10283e98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283e9b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283e9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10283ea1:;
  /* 10283ea1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283ea5 jne 0x10283ee1 */
  if (!C.zf) goto L_10283ee1;
  /* 10283ea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283eaa mov dword ptr [0x1029fe2c], eax */
  w32((uint32_t)(0x1029fe2c), (EAX));
  /* 10283eaf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10283eb2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283eb5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10283eb8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283eba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283ebd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10283ec0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283ec2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283ec8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10283ecb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283ecd mov dword ptr [0x1029fe30], ecx */
  w32((uint32_t)(0x1029fe30), (ECX));
  /* 10283ed3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283ed6 mov dword ptr [0x1029fe28], edx */
  w32((uint32_t)(0x1029fe28), (EDX));
  /* 10283edc jmp 0x10283f84 */
  goto L_10283f84;
L_10283ee1:;
  /* 10283ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10283ee4 mov dword ptr [0x1029fe3c], eax */
  w32((uint32_t)(0x1029fe3c), (EAX));
  /* 10283ee9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10283eec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283eef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10283ef2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283ef4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283ef7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10283efa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283efc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283f02 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10283f05 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283f07 mov dword ptr [0x1029fe40], ecx */
  w32((uint32_t)(0x1029fe40), (ECX));
  /* 10283f0d mov edx, dword ptr [0x1029fd98] */
  EDX = (r32((uint32_t)(0x1029fd98)));
  /* 10283f13 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10283f19 mov eax, dword ptr [0x1029fe40] */
  EAX = (r32((uint32_t)(0x1029fe40)));
  /* 10283f1e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283f20 mov dword ptr [0x1029fe40], eax */
  w32((uint32_t)(0x1029fe40), (EAX));
  /* 10283f25 cmp dword ptr [0x1029fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1029fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283f2c jge 0x10283f51 */
  if ((C.sf==C.of)) goto L_10283f51;
  /* 10283f2e mov ecx, dword ptr [0x1029fe40] */
  ECX = (r32((uint32_t)(0x1029fe40)));
  /* 10283f34 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283f3a mov dword ptr [0x1029fe40], ecx */
  w32((uint32_t)(0x1029fe40), (ECX));
  /* 10283f40 mov edx, dword ptr [0x1029fe3c] */
  EDX = (r32((uint32_t)(0x1029fe3c)));
  /* 10283f46 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283f49 mov dword ptr [0x1029fe3c], edx */
  w32((uint32_t)(0x1029fe3c), (EDX));
  /* 10283f4f jmp 0x10283f7b */
  goto L_10283f7b;
L_10283f51:;
  /* 10283f51 cmp dword ptr [0x1029fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1029fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283f5b jl 0x10283f7b */
  if ((C.sf!=C.of)) goto L_10283f7b;
  /* 10283f5d mov eax, dword ptr [0x1029fe40] */
  EAX = (r32((uint32_t)(0x1029fe40)));
  /* 10283f62 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10283f67 mov dword ptr [0x1029fe40], eax */
  w32((uint32_t)(0x1029fe40), (EAX));
  /* 10283f6c mov ecx, dword ptr [0x1029fe3c] */
  ECX = (r32((uint32_t)(0x1029fe3c)));
  /* 10283f72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10283f75 mov dword ptr [0x1029fe3c], ecx */
  w32((uint32_t)(0x1029fe3c), (ECX));
L_10283f7b:;
  /* 10283f7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10283f7e mov dword ptr [0x1029fe38], edx */
  w32((uint32_t)(0x1029fe38), (EDX));
L_10283f84:;
  /* 10283f84 mov esp, ebp */
  ESP = (EBP);
  /* 10283f86 pop ebp */
  EBP = (pop32());
  /* 10283f87 ret  */
  ESPCHK(0x10283d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f90 @ 0x10283f90 (382 bytes, 135 insns) */
void f_10283f90(void) {
  FTRACE(0x10283f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10283f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10283f91 mov ebp, esp */
  EBP = (ESP);
  /* 10283f93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10283f95 push 0x1029c918 */
  push32((uint32_t)(0x1029c918u));
  /* 10283f9a push 0x1027dc58 */
  push32((uint32_t)(0x1027dc58u));
  /* 10283f9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10283fa5 push eax */
  push32((uint32_t)(EAX));
  /* 10283fa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10283fad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10283fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10283fb1 push esi */
  push32((uint32_t)(ESI));
  /* 10283fb2 push edi */
  push32((uint32_t)(EDI));
  /* 10283fb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10283fb6 cmp dword ptr [0x102a0904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10283fbd jne 0x10284002 */
  if (!C.zf) goto L_10284002;
  /* 10283fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10283fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10283fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283fc7 call dword ptr [0x102a3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3284))), 0x10283fcdu);
  /* 10283fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10283fcf je 0x10283fdd */
  if (C.zf) goto L_10283fdd;
  /* 10283fd1 mov dword ptr [0x102a0904], 1 */
  w32((uint32_t)(0x102a0904), (0x1u));
  /* 10283fdb jmp 0x10284002 */
  goto L_10284002;
L_10283fdd:;
  /* 10283fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10283fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10283fe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10283fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10283fe5 call dword ptr [0x102a329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a329c))), 0x10283febu);
  /* 10283feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10283fed je 0x10283ffb */
  if (C.zf) goto L_10283ffb;
  /* 10283fef mov dword ptr [0x102a0904], 2 */
  w32((uint32_t)(0x102a0904), (0x2u));
  /* 10283ff9 jmp 0x10284002 */
  goto L_10284002;
L_10283ffb:;
  /* 10283ffb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10283ffd jmp 0x10284111 */
  goto L_10284111;
L_10284002:;
  /* 10284002 cmp dword ptr [0x102a0904], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0904))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284009 jne 0x10284026 */
  if (!C.zf) goto L_10284026;
  /* 1028400b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028400e push eax */
  push32((uint32_t)(EAX));
  /* 1028400f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10284012 push ecx */
  push32((uint32_t)(ECX));
  /* 10284013 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284016 push edx */
  push32((uint32_t)(EDX));
  /* 10284017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028401a push eax */
  push32((uint32_t)(EAX));
  /* 1028401b call dword ptr [0x102a3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3284))), 0x10284021u);
  /* 10284021 jmp 0x10284111 */
  goto L_10284111;
L_10284026:;
  /* 10284026 cmp dword ptr [0x102a0904], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a0904))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028402d jne 0x1028410f */
  if (!C.zf) goto L_1028410f;
  /* 10284033 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284037 jne 0x10284042 */
  if (!C.zf) goto L_10284042;
  /* 10284039 mov ecx, dword ptr [0x102a07b8] */
  ECX = (r32((uint32_t)(0x102a07b8)));
  /* 1028403f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10284042:;
  /* 10284042 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284044 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284046 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284049 push edx */
  push32((uint32_t)(EDX));
  /* 1028404a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028404d push eax */
  push32((uint32_t)(EAX));
  /* 1028404e call dword ptr [0x102a329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a329c))), 0x10284054u);
  /* 10284054 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10284057 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028405b jne 0x10284064 */
  if (!C.zf) goto L_10284064;
  /* 1028405d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028405f jmp 0x10284111 */
  goto L_10284111;
L_10284064:;
  /* 10284064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1028406b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1028406e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284071 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10284073 call 0x10277cf0 */
  push32(0x10284078u); f_10277cf0();
  /* 10284078 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1028407b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1028407e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10284081 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10284084 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1028408b jmp 0x102840a4 */
  goto L_102840a4;
  /* 1028408d mov eax, 1 */
  EAX = (0x1u);
  /* 10284092 ret  */
  ESPCHK(0x10283f90u, _esp0);
  ESP += 4; return;
  /* 10284093 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10284096 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1028409d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_102840a4:;
  /* 102840a4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102840a8 jne 0x102840ae */
  if (!C.zf) goto L_102840ae;
  /* 102840aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102840ac jmp 0x10284111 */
  goto L_10284111;
L_102840ae:;
  /* 102840ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102840b1 push edx */
  push32((uint32_t)(EDX));
  /* 102840b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 102840b5 push eax */
  push32((uint32_t)(EAX));
  /* 102840b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102840b9 push ecx */
  push32((uint32_t)(ECX));
  /* 102840ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102840bd push edx */
  push32((uint32_t)(EDX));
  /* 102840be call dword ptr [0x102a329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a329c))), 0x102840c4u);
  /* 102840c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102840c6 jne 0x102840cc */
  if (!C.zf) goto L_102840cc;
  /* 102840c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102840ca jmp 0x10284111 */
  goto L_10284111;
L_102840cc:;
  /* 102840cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102840d0 jne 0x102840ed */
  if (!C.zf) goto L_102840ed;
  /* 102840d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102840d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102840d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102840d8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 102840db push eax */
  push32((uint32_t)(EAX));
  /* 102840dc push 1 */
  push32((uint32_t)(0x1u));
  /* 102840de mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102840e1 push ecx */
  push32((uint32_t)(ECX));
  /* 102840e2 call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x102840e8u);
  /* 102840e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102840eb jmp 0x1028410a */
  goto L_1028410a;
L_102840ed:;
  /* 102840ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102840f0 push edx */
  push32((uint32_t)(EDX));
  /* 102840f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102840f4 push eax */
  push32((uint32_t)(EAX));
  /* 102840f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102840f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 102840fa push ecx */
  push32((uint32_t)(ECX));
  /* 102840fb push 1 */
  push32((uint32_t)(0x1u));
  /* 102840fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10284100 push edx */
  push32((uint32_t)(EDX));
  /* 10284101 call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x10284107u);
  /* 10284107 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1028410a:;
  /* 1028410a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1028410d jmp 0x10284111 */
  goto L_10284111;
L_1028410f:;
  /* 1028410f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10284111:;
  /* 10284111 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10284114 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284117 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1028411e pop edi */
  EDI = (pop32());
  /* 1028411f pop esi */
  ESI = (pop32());
  /* 10284120 pop ebx */
  EBX = (pop32());
  /* 10284121 mov esp, ebp */
  ESP = (EBP);
  /* 10284123 pop ebp */
  EBP = (pop32());
  /* 10284124 ret  */
  ESPCHK(0x10283f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014130 @ 0x10284130 (398 bytes, 140 insns) */
void f_10284130(void) {
  FTRACE(0x10284130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284130 push ebp */
  push32((uint32_t)(EBP));
  /* 10284131 mov ebp, esp */
  EBP = (ESP);
  /* 10284133 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10284135 push 0x1029c928 */
  push32((uint32_t)(0x1029c928u));
  /* 1028413a push 0x1027dc58 */
  push32((uint32_t)(0x1027dc58u));
  /* 1028413f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10284145 push eax */
  push32((uint32_t)(EAX));
  /* 10284146 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1028414d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284150 push ebx */
  push32((uint32_t)(EBX));
  /* 10284151 push esi */
  push32((uint32_t)(ESI));
  /* 10284152 push edi */
  push32((uint32_t)(EDI));
  /* 10284153 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10284156 cmp dword ptr [0x102a0908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028415d jne 0x102841a2 */
  if (!C.zf) goto L_102841a2;
  /* 1028415f push 0 */
  push32((uint32_t)(0x0u));
  /* 10284161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284163 push 1 */
  push32((uint32_t)(0x1u));
  /* 10284165 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284167 call dword ptr [0x102a3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3284))), 0x1028416du);
  /* 1028416d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028416f je 0x1028417d */
  if (C.zf) goto L_1028417d;
  /* 10284171 mov dword ptr [0x102a0908], 1 */
  w32((uint32_t)(0x102a0908), (0x1u));
  /* 1028417b jmp 0x102841a2 */
  goto L_102841a2;
L_1028417d:;
  /* 1028417d push 0 */
  push32((uint32_t)(0x0u));
  /* 1028417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10284181 push 1 */
  push32((uint32_t)(0x1u));
  /* 10284183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284185 call dword ptr [0x102a329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a329c))), 0x1028418bu);
  /* 1028418b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1028418d je 0x1028419b */
  if (C.zf) goto L_1028419b;
  /* 1028418f mov dword ptr [0x102a0908], 2 */
  w32((uint32_t)(0x102a0908), (0x2u));
  /* 10284199 jmp 0x102841a2 */
  goto L_102841a2;
L_1028419b:;
  /* 1028419b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028419d jmp 0x102842c1 */
  goto L_102842c1;
L_102841a2:;
  /* 102841a2 cmp dword ptr [0x102a0908], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a0908))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102841a9 jne 0x102841c6 */
  if (!C.zf) goto L_102841c6;
  /* 102841ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102841ae push eax */
  push32((uint32_t)(EAX));
  /* 102841af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102841b2 push ecx */
  push32((uint32_t)(ECX));
  /* 102841b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102841b6 push edx */
  push32((uint32_t)(EDX));
  /* 102841b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102841ba push eax */
  push32((uint32_t)(EAX));
  /* 102841bb call dword ptr [0x102a329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a329c))), 0x102841c1u);
  /* 102841c1 jmp 0x102842c1 */
  goto L_102842c1;
L_102841c6:;
  /* 102841c6 cmp dword ptr [0x102a0908], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0908))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102841cd jne 0x102842bf */
  if (!C.zf) goto L_102842bf;
  /* 102841d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102841d7 jne 0x102841e2 */
  if (!C.zf) goto L_102841e2;
  /* 102841d9 mov ecx, dword ptr [0x102a07b8] */
  ECX = (r32((uint32_t)(0x102a07b8)));
  /* 102841df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_102841e2:;
  /* 102841e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102841e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102841e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102841e9 push edx */
  push32((uint32_t)(EDX));
  /* 102841ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102841ed push eax */
  push32((uint32_t)(EAX));
  /* 102841ee call dword ptr [0x102a3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3284))), 0x102841f4u);
  /* 102841f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 102841f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102841fb jne 0x10284204 */
  if (!C.zf) goto L_10284204;
  /* 102841fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102841ff jmp 0x102842c1 */
  goto L_102842c1;
L_10284204:;
  /* 10284204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1028420b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1028420e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10284210 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284213 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10284215 call 0x10277cf0 */
  push32(0x1028421au); f_10277cf0();
  /* 1028421a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1028421d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10284220 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10284223 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10284226 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1028422d jmp 0x10284246 */
  goto L_10284246;
  /* 1028422f mov eax, 1 */
  EAX = (0x1u);
  /* 10284234 ret  */
  ESPCHK(0x10284130u, _esp0);
  ESP += 4; return;
  /* 10284235 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10284238 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1028423f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10284246:;
  /* 10284246 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028424a jne 0x10284250 */
  if (!C.zf) goto L_10284250;
  /* 1028424c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028424e jmp 0x102842c1 */
  goto L_102842c1;
L_10284250:;
  /* 10284250 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10284253 push edx */
  push32((uint32_t)(EDX));
  /* 10284254 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10284257 push eax */
  push32((uint32_t)(EAX));
  /* 10284258 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028425b push ecx */
  push32((uint32_t)(ECX));
  /* 1028425c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028425f push edx */
  push32((uint32_t)(EDX));
  /* 10284260 call dword ptr [0x102a3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3284))), 0x10284266u);
  /* 10284266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284268 jne 0x1028426e */
  if (!C.zf) goto L_1028426e;
  /* 1028426a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028426c jmp 0x102842c1 */
  goto L_102842c1;
L_1028426e:;
  /* 1028426e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284272 jne 0x10284296 */
  if (!C.zf) goto L_10284296;
  /* 10284274 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1028427a push 0 */
  push32((uint32_t)(0x0u));
  /* 1028427c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1028427e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10284281 push eax */
  push32((uint32_t)(EAX));
  /* 10284282 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10284287 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1028428a push ecx */
  push32((uint32_t)(ECX));
  /* 1028428b call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x10284291u);
  /* 10284291 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10284294 jmp 0x102842ba */
  goto L_102842ba;
L_10284296:;
  /* 10284296 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284298 push 0 */
  push32((uint32_t)(0x0u));
  /* 1028429a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028429d push edx */
  push32((uint32_t)(EDX));
  /* 1028429e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102842a1 push eax */
  push32((uint32_t)(EAX));
  /* 102842a2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102842a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 102842a7 push ecx */
  push32((uint32_t)(ECX));
  /* 102842a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102842ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102842b0 push edx */
  push32((uint32_t)(EDX));
  /* 102842b1 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x102842b7u);
  /* 102842b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_102842ba:;
  /* 102842ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 102842bd jmp 0x102842c1 */
  goto L_102842c1;
L_102842bf:;
  /* 102842bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102842c1:;
  /* 102842c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 102842c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102842c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102842ce pop edi */
  EDI = (pop32());
  /* 102842cf pop esi */
  ESI = (pop32());
  /* 102842d0 pop ebx */
  EBX = (pop32());
  /* 102842d1 mov esp, ebp */
  ESP = (EBP);
  /* 102842d3 pop ebp */
  EBP = (pop32());
  /* 102842d4 ret  */
  ESPCHK(0x10284130u, _esp0);
  ESP += 4; return;
}

/* FUN_100142e0 @ 0x102842e0 (11 bytes, 6 insns) */
void f_102842e0(void) {
  FTRACE(0x102842e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102842e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102842e1 mov ebp, esp */
  EBP = (ESP);
  /* 102842e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102842e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102842e9 pop ebp */
  EBP = (pop32());
  /* 102842ea ret  */
  ESPCHK(0x102842e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100142f0 @ 0x102842f0 (147 bytes, 43 insns) */
void f_102842f0(void) {
  FTRACE(0x102842f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102842f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102842f1 mov ebp, esp */
  EBP = (ESP);
  /* 102842f3 push ecx */
  push32((uint32_t)(ECX));
  /* 102842f4 cmp dword ptr [0x102a07a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102842fb jne 0x10284317 */
  if (!C.zf) goto L_10284317;
  /* 102842fd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284301 jl 0x10284312 */
  if ((C.sf!=C.of)) goto L_10284312;
  /* 10284303 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284307 jg 0x10284312 */
  if ((!C.zf&&C.sf==C.of)) goto L_10284312;
  /* 10284309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028430c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028430f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10284312:;
  /* 10284312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284315 jmp 0x1028437f */
  goto L_1028437f;
L_10284317:;
  /* 10284317 push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 1028431c call dword ptr [0x102a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a330c))), 0x10284322u);
  /* 10284322 cmp dword ptr [0x102a0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284329 je 0x10284349 */
  if (C.zf) goto L_10284349;
  /* 1028432b push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 10284330 call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10284336u);
  /* 10284336 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10284338 call 0x10278550 */
  push32(0x1028433du); f_10278550();
  /* 1028433d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284340 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10284347 jmp 0x10284350 */
  goto L_10284350;
L_10284349:;
  /* 10284349 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10284350:;
  /* 10284350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284353 push ecx */
  push32((uint32_t)(ECX));
  /* 10284354 call 0x10284390 */
  push32(0x10284359u); f_10284390();
  /* 10284359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028435c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1028435f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284363 je 0x10284371 */
  if (C.zf) goto L_10284371;
  /* 10284365 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10284367 call 0x102785f0 */
  push32(0x1028436cu); f_102785f0();
  /* 1028436c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028436f jmp 0x1028437c */
  goto L_1028437c;
L_10284371:;
  /* 10284371 push 0x102a0934 */
  push32((uint32_t)(0x102a0934u));
  /* 10284376 call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x1028437cu);
L_1028437c:;
  /* 1028437c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1028437f:;
  /* 1028437f mov esp, ebp */
  ESP = (EBP);
  /* 10284381 pop ebp */
  EBP = (pop32());
  /* 10284382 ret  */
  ESPCHK(0x102842f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014390 @ 0x10284390 (299 bytes, 91 insns) */
void f_10284390(void) {
  FTRACE(0x10284390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284390 push ebp */
  push32((uint32_t)(EBP));
  /* 10284391 mov ebp, esp */
  EBP = (ESP);
  /* 10284393 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284396 cmp dword ptr [0x102a07a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a07a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028439d jne 0x102843bc */
  if (!C.zf) goto L_102843bc;
  /* 1028439f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102843a3 jl 0x102843b4 */
  if ((C.sf!=C.of)) goto L_102843b4;
  /* 102843a5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102843a9 jg 0x102843b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_102843b4;
  /* 102843ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102843ae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102843b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_102843b4:;
  /* 102843b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102843b7 jmp 0x102844b7 */
  goto L_102844b7;
L_102843bc:;
  /* 102843bc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102843c3 jge 0x10284403 */
  if ((C.sf==C.of)) goto L_10284403;
  /* 102843c5 cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102843cc jle 0x102843e1 */
  if ((C.zf||C.sf!=C.of)) goto L_102843e1;
  /* 102843ce push 1 */
  push32((uint32_t)(0x1u));
  /* 102843d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102843d3 push ecx */
  push32((uint32_t)(ECX));
  /* 102843d4 call 0x1027ab60 */
  push32(0x102843d9u); f_1027ab60();
  /* 102843d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102843dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102843df jmp 0x102843f5 */
  goto L_102843f5;
L_102843e1:;
  /* 102843e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102843e4 mov eax, dword ptr [0x1029ec98] */
  EAX = (r32((uint32_t)(0x1029ec98)));
  /* 102843e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102843eb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 102843ef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102843f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_102843f5:;
  /* 102843f5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102843f9 jne 0x10284403 */
  if (!C.zf) goto L_10284403;
  /* 102843fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102843fe jmp 0x102844b7 */
  goto L_102844b7;
L_10284403:;
  /* 10284403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284406 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10284409 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1028440f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10284415 mov eax, dword ptr [0x1029ec98] */
  EAX = (r32((uint32_t)(0x1029ec98)));
  /* 1028441a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1028441c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10284420 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10284426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10284428 je 0x1028444c */
  if (C.zf) goto L_1028444c;
  /* 1028442a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028442d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10284430 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10284436 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10284439 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1028443c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1028443f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10284443 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1028444a jmp 0x1028445d */
  goto L_1028445d;
L_1028444c:;
  /* 1028444c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1028444f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10284452 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10284456 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1028445d:;
  /* 1028445d push 1 */
  push32((uint32_t)(0x1u));
  /* 1028445f push 0 */
  push32((uint32_t)(0x0u));
  /* 10284461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10284463 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10284466 push edx */
  push32((uint32_t)(EDX));
  /* 10284467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028446a push eax */
  push32((uint32_t)(EAX));
  /* 1028446b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1028446e push ecx */
  push32((uint32_t)(ECX));
  /* 1028446f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10284474 mov edx, dword ptr [0x102a07a8] */
  EDX = (r32((uint32_t)(0x102a07a8)));
  /* 1028447a push edx */
  push32((uint32_t)(EDX));
  /* 1028447b call 0x1027cf40 */
  push32(0x10284480u); f_1027cf40();
  /* 10284480 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10284486 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028448a jne 0x10284491 */
  if (!C.zf) goto L_10284491;
  /* 1028448c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028448f jmp 0x102844b7 */
  goto L_102844b7;
L_10284491:;
  /* 10284491 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284495 jne 0x102844a1 */
  if (!C.zf) goto L_102844a1;
  /* 10284497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028449a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1028449f jmp 0x102844b7 */
  goto L_102844b7;
L_102844a1:;
  /* 102844a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102844a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102844a9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 102844ac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 102844b2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 102844b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_102844b7:;
  /* 102844b7 mov esp, ebp */
  ESP = (EBP);
  /* 102844b9 pop ebp */
  EBP = (pop32());
  /* 102844ba ret  */
  ESPCHK(0x10284390u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x102844c0 (52 bytes, 19 insns) */
void f_102844c0(void) {
  FTRACE(0x102844c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102844c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102844c4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 102844c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102844ca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102844ce jne 0x102844d9 */
  if (!C.zf) goto L_102844d9;
  /* 102844d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102844d4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102844d6 ret 0x10 */
  ESPCHK(0x102844c0u, _esp0);
  ESP += 20; return;
L_102844d9:;
  /* 102844d9 push ebx */
  push32((uint32_t)(EBX));
  /* 102844da mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102844dc mov ebx, eax */
  EBX = (EAX);
  /* 102844de mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102844e2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102844e6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102844e8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102844ec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102844ee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102844f0 pop ebx */
  EBX = (pop32());
  /* 102844f1 ret 0x10 */
  ESPCHK(0x102844c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014500 @ 0x10284500 (46 bytes, 18 insns) */
void f_10284500(void) {
  FTRACE(0x10284500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284500 push ebp */
  push32((uint32_t)(EBP));
  /* 10284501 mov ebp, esp */
  EBP = (ESP);
  /* 10284503 push ecx */
  push32((uint32_t)(ECX));
  /* 10284504 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10284506 call 0x10278550 */
  push32(0x1028450bu); f_10278550();
  /* 1028450b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028450e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284511 push eax */
  push32((uint32_t)(EAX));
  /* 10284512 call 0x10284530 */
  push32(0x10284517u); f_10284530();
  /* 10284517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028451a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1028451d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1028451f call 0x102785f0 */
  push32(0x10284524u); f_102785f0();
  /* 10284524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028452a mov esp, ebp */
  ESP = (EBP);
  /* 1028452c pop ebp */
  EBP = (pop32());
  /* 1028452d ret  */
  ESPCHK(0x10284500u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10284530 (198 bytes, 69 insns) */
void f_10284530(void) {
  FTRACE(0x10284530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284530 push ebp */
  push32((uint32_t)(EBP));
  /* 10284531 mov ebp, esp */
  EBP = (ESP);
  /* 10284533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284536 mov eax, dword ptr [0x102a05c4] */
  EAX = (r32((uint32_t)(0x102a05c4)));
  /* 1028453b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1028453e cmp dword ptr [0x102a20c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284545 jne 0x1028454e */
  if (!C.zf) goto L_1028454e;
  /* 10284547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284549 jmp 0x102845f2 */
  goto L_102845f2;
L_1028454e:;
  /* 1028454e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284552 jne 0x10284576 */
  if (!C.zf) goto L_10284576;
  /* 10284554 cmp dword ptr [0x102a05cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028455b je 0x10284576 */
  if (C.zf) goto L_10284576;
  /* 1028455d call 0x10284650 */
  push32(0x10284562u); f_10284650();
  /* 10284562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284564 je 0x1028456d */
  if (C.zf) goto L_1028456d;
  /* 10284566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284568 jmp 0x102845f2 */
  goto L_102845f2;
L_1028456d:;
  /* 1028456d mov ecx, dword ptr [0x102a05c4] */
  ECX = (r32((uint32_t)(0x102a05c4)));
  /* 10284573 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10284576:;
  /* 10284576 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028457a je 0x102845f0 */
  if (C.zf) goto L_102845f0;
  /* 1028457c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284580 je 0x102845f0 */
  if (C.zf) goto L_102845f0;
  /* 10284582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284585 push edx */
  push32((uint32_t)(EDX));
  /* 10284586 call 0x10277980 */
  push32(0x1028458bu); f_10277980();
  /* 1028458b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028458e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10284591:;
  /* 10284591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284594 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284597 je 0x102845f0 */
  if (C.zf) goto L_102845f0;
  /* 10284599 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1028459c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1028459e push edx */
  push32((uint32_t)(EDX));
  /* 1028459f call 0x10277980 */
  push32(0x102845a4u); f_10277980();
  /* 102845a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102845a7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102845aa jbe 0x102845e5 */
  if ((C.cf||C.zf)) goto L_102845e5;
  /* 102845ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102845af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102845b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102845b4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 102845b8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102845bb jne 0x102845e5 */
  if (!C.zf) goto L_102845e5;
  /* 102845bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102845c0 push ecx */
  push32((uint32_t)(ECX));
  /* 102845c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102845c4 push edx */
  push32((uint32_t)(EDX));
  /* 102845c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102845c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102845ca push ecx */
  push32((uint32_t)(ECX));
  /* 102845cb call 0x10284600 */
  push32(0x102845d0u); f_10284600();
  /* 102845d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102845d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102845d5 jne 0x102845e5 */
  if (!C.zf) goto L_102845e5;
  /* 102845d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102845da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 102845dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102845df lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 102845e3 jmp 0x102845f2 */
  goto L_102845f2;
L_102845e5:;
  /* 102845e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102845e8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102845eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102845ee jmp 0x10284591 */
  goto L_10284591;
L_102845f0:;
  /* 102845f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102845f2:;
  /* 102845f2 mov esp, ebp */
  ESP = (EBP);
  /* 102845f4 pop ebp */
  EBP = (pop32());
  /* 102845f5 ret  */
  ESPCHK(0x10284530u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10284600 (79 bytes, 32 insns) */
void f_10284600(void) {
  FTRACE(0x10284600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284600 push ebp */
  push32((uint32_t)(EBP));
  /* 10284601 mov ebp, esp */
  EBP = (ESP);
  /* 10284603 push ecx */
  push32((uint32_t)(ECX));
  /* 10284604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284608 jne 0x1028460e */
  if (!C.zf) goto L_1028460e;
  /* 1028460a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028460c jmp 0x1028464b */
  goto L_1028464b;
L_1028460e:;
  /* 1028460e mov eax, dword ptr [0x102a1c84] */
  EAX = (r32((uint32_t)(0x102a1c84)));
  /* 10284613 push eax */
  push32((uint32_t)(EAX));
  /* 10284614 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10284617 push ecx */
  push32((uint32_t)(ECX));
  /* 10284618 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1028461b push edx */
  push32((uint32_t)(EDX));
  /* 1028461c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1028461f push eax */
  push32((uint32_t)(EAX));
  /* 10284620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284623 push ecx */
  push32((uint32_t)(ECX));
  /* 10284624 push 1 */
  push32((uint32_t)(0x1u));
  /* 10284626 mov edx, dword ptr [0x102a1f24] */
  EDX = (r32((uint32_t)(0x102a1f24)));
  /* 1028462c push edx */
  push32((uint32_t)(EDX));
  /* 1028462d call 0x10284700 */
  push32(0x10284632u); f_10284700();
  /* 10284632 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10284638 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028463c jne 0x10284645 */
  if (!C.zf) goto L_10284645;
  /* 1028463e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10284643 jmp 0x1028464b */
  goto L_1028464b;
L_10284645:;
  /* 10284645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284648 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1028464b:;
  /* 1028464b mov esp, ebp */
  ESP = (EBP);
  /* 1028464d pop ebp */
  EBP = (pop32());
  /* 1028464e ret  */
  ESPCHK(0x10284600u, _esp0);
  ESP += 4; return;
}

/* FUN_10014650 @ 0x10284650 (174 bytes, 66 insns) */
void f_10284650(void) {
  FTRACE(0x10284650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284650 push ebp */
  push32((uint32_t)(EBP));
  /* 10284651 mov ebp, esp */
  EBP = (ESP);
  /* 10284653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284656 mov eax, dword ptr [0x102a05cc] */
  EAX = (r32((uint32_t)(0x102a05cc)));
  /* 1028465b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1028465e:;
  /* 1028465e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284661 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284664 je 0x102846f8 */
  if (C.zf) goto L_102846f8;
  /* 1028466a push 0 */
  push32((uint32_t)(0x0u));
  /* 1028466c push 0 */
  push32((uint32_t)(0x0u));
  /* 1028466e push 0 */
  push32((uint32_t)(0x0u));
  /* 10284670 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284672 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10284674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284677 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10284679 push eax */
  push32((uint32_t)(EAX));
  /* 1028467a push 0 */
  push32((uint32_t)(0x0u));
  /* 1028467c push 1 */
  push32((uint32_t)(0x1u));
  /* 1028467e call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x10284684u);
  /* 10284684 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10284687 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028468b jne 0x10284692 */
  if (!C.zf) goto L_10284692;
  /* 1028468d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284690 jmp 0x102846fa */
  goto L_102846fa;
L_10284692:;
  /* 10284692 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10284694 push 0x1029c934 */
  push32((uint32_t)(0x1029c934u));
  /* 10284699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1028469b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1028469e push ecx */
  push32((uint32_t)(ECX));
  /* 1028469f call 0x10274b50 */
  push32(0x102846a4u); f_10274b50();
  /* 102846a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102846a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102846aa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102846ae jne 0x102846b5 */
  if (!C.zf) goto L_102846b5;
  /* 102846b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102846b3 jmp 0x102846fa */
  goto L_102846fa;
L_102846b5:;
  /* 102846b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102846b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102846b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102846bc push edx */
  push32((uint32_t)(EDX));
  /* 102846bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102846c0 push eax */
  push32((uint32_t)(EAX));
  /* 102846c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102846c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102846c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102846c8 push edx */
  push32((uint32_t)(EDX));
  /* 102846c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102846cb push 1 */
  push32((uint32_t)(0x1u));
  /* 102846cd call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x102846d3u);
  /* 102846d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102846d5 jne 0x102846dc */
  if (!C.zf) goto L_102846dc;
  /* 102846d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102846da jmp 0x102846fa */
  goto L_102846fa;
L_102846dc:;
  /* 102846dc push 0 */
  push32((uint32_t)(0x0u));
  /* 102846de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102846e1 push eax */
  push32((uint32_t)(EAX));
  /* 102846e2 call 0x10284b50 */
  push32(0x102846e7u); f_10284b50();
  /* 102846e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102846ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102846ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102846f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102846f3 jmp 0x1028465e */
  goto L_1028465e;
L_102846f8:;
  /* 102846f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102846fa:;
  /* 102846fa mov esp, ebp */
  ESP = (EBP);
  /* 102846fc pop ebp */
  EBP = (pop32());
  /* 102846fd ret  */
  ESPCHK(0x10284650u, _esp0);
  ESP += 4; return;
}

/* FUN_10014700 @ 0x10284700 (970 bytes, 340 insns) */
void f_10284700(void) {
  FTRACE(0x10284700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284700 push ebp */
  push32((uint32_t)(EBP));
  /* 10284701 mov ebp, esp */
  EBP = (ESP);
  /* 10284703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10284705 push 0x1029c988 */
  push32((uint32_t)(0x1029c988u));
  /* 1028470a push 0x1027dc58 */
  push32((uint32_t)(0x1027dc58u));
  /* 1028470f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10284715 push eax */
  push32((uint32_t)(EAX));
  /* 10284716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1028471d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284720 push ebx */
  push32((uint32_t)(EBX));
  /* 10284721 push esi */
  push32((uint32_t)(ESI));
  /* 10284722 push edi */
  push32((uint32_t)(EDI));
  /* 10284723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10284726 cmp dword ptr [0x102a090c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a090c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028472d jne 0x10284786 */
  if (!C.zf) goto L_10284786;
  /* 1028472f push 1 */
  push32((uint32_t)(0x1u));
  /* 10284731 push 0x1029bfe0 */
  push32((uint32_t)(0x1029bfe0u));
  /* 10284736 push 1 */
  push32((uint32_t)(0x1u));
  /* 10284738 push 0x1029bfe0 */
  push32((uint32_t)(0x1029bfe0u));
  /* 1028473d push 0 */
  push32((uint32_t)(0x0u));
  /* 1028473f push 0 */
  push32((uint32_t)(0x0u));
  /* 10284741 call dword ptr [0x102a3280] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3280))), 0x10284747u);
  /* 10284747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284749 je 0x10284757 */
  if (C.zf) goto L_10284757;
  /* 1028474b mov dword ptr [0x102a090c], 1 */
  w32((uint32_t)(0x102a090c), (0x1u));
  /* 10284755 jmp 0x10284786 */
  goto L_10284786;
L_10284757:;
  /* 10284757 push 1 */
  push32((uint32_t)(0x1u));
  /* 10284759 push 0x1029bfdc */
  push32((uint32_t)(0x1029bfdcu));
  /* 1028475e push 1 */
  push32((uint32_t)(0x1u));
  /* 10284760 push 0x1029bfdc */
  push32((uint32_t)(0x1029bfdcu));
  /* 10284765 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284767 push 0 */
  push32((uint32_t)(0x0u));
  /* 10284769 call dword ptr [0x102a328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a328c))), 0x1028476fu);
  /* 1028476f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284771 je 0x1028477f */
  if (C.zf) goto L_1028477f;
  /* 10284773 mov dword ptr [0x102a090c], 2 */
  w32((uint32_t)(0x102a090c), (0x2u));
  /* 1028477d jmp 0x10284786 */
  goto L_10284786;
L_1028477f:;
  /* 1028477f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284781 jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284786:;
  /* 10284786 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028478a jle 0x1028479f */
  if ((C.zf||C.sf!=C.of)) goto L_1028479f;
  /* 1028478c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1028478f push eax */
  push32((uint32_t)(EAX));
  /* 10284790 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10284793 push ecx */
  push32((uint32_t)(ECX));
  /* 10284794 call 0x10284b00 */
  push32(0x10284799u); f_10284b00();
  /* 10284799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028479c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1028479f:;
  /* 1028479f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102847a3 jle 0x102847b8 */
  if ((C.zf||C.sf!=C.of)) goto L_102847b8;
  /* 102847a5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102847a8 push edx */
  push32((uint32_t)(EDX));
  /* 102847a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 102847ac push eax */
  push32((uint32_t)(EAX));
  /* 102847ad call 0x10284b00 */
  push32(0x102847b2u); f_10284b00();
  /* 102847b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102847b5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_102847b8:;
  /* 102847b8 cmp dword ptr [0x102a090c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a090c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102847bf jne 0x102847e4 */
  if (!C.zf) goto L_102847e4;
  /* 102847c1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102847c4 push ecx */
  push32((uint32_t)(ECX));
  /* 102847c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102847c8 push edx */
  push32((uint32_t)(EDX));
  /* 102847c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102847cc push eax */
  push32((uint32_t)(EAX));
  /* 102847cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102847d0 push ecx */
  push32((uint32_t)(ECX));
  /* 102847d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102847d4 push edx */
  push32((uint32_t)(EDX));
  /* 102847d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102847d8 push eax */
  push32((uint32_t)(EAX));
  /* 102847d9 call dword ptr [0x102a328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a328c))), 0x102847dfu);
  /* 102847df jmp 0x10284ae4 */
  goto L_10284ae4;
L_102847e4:;
  /* 102847e4 cmp dword ptr [0x102a090c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a090c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102847eb jne 0x10284ae2 */
  if (!C.zf) goto L_10284ae2;
  /* 102847f1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102847f5 jne 0x10284800 */
  if (!C.zf) goto L_10284800;
  /* 102847f7 mov ecx, dword ptr [0x102a07b8] */
  ECX = (r32((uint32_t)(0x102a07b8)));
  /* 102847fd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10284800:;
  /* 10284800 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284804 je 0x10284810 */
  if (C.zf) goto L_10284810;
  /* 10284806 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028480a jne 0x1028498c */
  if (!C.zf) goto L_1028498c;
L_10284810:;
  /* 10284810 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10284813 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284816 jne 0x10284822 */
  if (!C.zf) goto L_10284822;
  /* 10284818 mov eax, 2 */
  EAX = (0x2u);
  /* 1028481d jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284822:;
  /* 10284822 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284826 jle 0x10284832 */
  if ((C.zf||C.sf!=C.of)) goto L_10284832;
  /* 10284828 mov eax, 1 */
  EAX = (0x1u);
  /* 1028482d jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284832:;
  /* 10284832 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284836 jle 0x10284842 */
  if ((C.zf||C.sf!=C.of)) goto L_10284842;
  /* 10284838 mov eax, 3 */
  EAX = (0x3u);
  /* 1028483d jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284842:;
  /* 10284842 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10284845 push eax */
  push32((uint32_t)(EAX));
  /* 10284846 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10284849 push ecx */
  push32((uint32_t)(ECX));
  /* 1028484a call dword ptr [0x102a32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32d8))), 0x10284850u);
  /* 10284850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284852 jne 0x1028485b */
  if (!C.zf) goto L_1028485b;
  /* 10284854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284856 jmp 0x10284ae4 */
  goto L_10284ae4;
L_1028485b:;
  /* 1028485b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028485f jne 0x10284867 */
  if (!C.zf) goto L_10284867;
  /* 10284861 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284865 je 0x10284894 */
  if (C.zf) goto L_10284894;
L_10284867:;
  /* 10284867 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028486b jne 0x10284873 */
  if (!C.zf) goto L_10284873;
  /* 1028486d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284871 je 0x10284894 */
  if (C.zf) goto L_10284894;
L_10284873:;
  /* 10284873 push 0x1029c948 */
  push32((uint32_t)(0x1029c948u));
  /* 10284878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1028487a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1028487f push 0x1029c940 */
  push32((uint32_t)(0x1029c940u));
  /* 10284884 push 2 */
  push32((uint32_t)(0x2u));
  /* 10284886 call 0x10273c10 */
  push32(0x1028488bu); f_10273c10();
  /* 1028488b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028488e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284891 jne 0x10284894 */
  if (!C.zf) goto L_10284894;
  /* 10284893 int3  */
  x86_unimpl("int3 @ 0x10284893");
L_10284894:;
  /* 10284894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10284896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284898 jne 0x1028485b */
  if (!C.zf) goto L_1028485b;
  /* 1028489a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028489e jle 0x10284913 */
  if ((C.zf||C.sf!=C.of)) goto L_10284913;
  /* 102848a0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102848a4 jae 0x102848b0 */
  if (!C.cf) goto L_102848b0;
  /* 102848a6 mov eax, 3 */
  EAX = (0x3u);
  /* 102848ab jmp 0x10284ae4 */
  goto L_10284ae4;
L_102848b0:;
  /* 102848b0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 102848b3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 102848b6 jmp 0x102848c1 */
  goto L_102848c1;
L_102848b8:;
  /* 102848b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 102848bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102848be mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_102848c1:;
  /* 102848c1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 102848c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102848c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102848c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102848ca je 0x10284909 */
  if (C.zf) goto L_10284909;
  /* 102848cc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 102848cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102848d1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102848d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102848d6 je 0x10284909 */
  if (C.zf) goto L_10284909;
  /* 102848d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102848db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102848dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 102848df mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 102848e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102848e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102848e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102848e8 jl 0x10284907 */
  if ((C.sf!=C.of)) goto L_10284907;
  /* 102848ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102848ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102848ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102848f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 102848f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102848f6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 102848f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102848fb jg 0x10284907 */
  if ((!C.zf&&C.sf==C.of)) goto L_10284907;
  /* 102848fd mov eax, 2 */
  EAX = (0x2u);
  /* 10284902 jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284907:;
  /* 10284907 jmp 0x102848b8 */
  goto L_102848b8;
L_10284909:;
  /* 10284909 mov eax, 3 */
  EAX = (0x3u);
  /* 1028490e jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284913:;
  /* 10284913 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284917 jle 0x1028498c */
  if ((C.zf||C.sf!=C.of)) goto L_1028498c;
  /* 10284919 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1028491d jae 0x10284929 */
  if (!C.cf) goto L_10284929;
  /* 1028491f mov eax, 1 */
  EAX = (0x1u);
  /* 10284924 jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284929:;
  /* 10284929 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1028492c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1028492f jmp 0x1028493a */
  goto L_1028493a;
L_10284931:;
  /* 10284931 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10284934 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284937 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1028493a:;
  /* 1028493a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1028493d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1028493f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10284941 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284943 je 0x10284982 */
  if (C.zf) goto L_10284982;
  /* 10284945 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10284948 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1028494a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1028494d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1028494f je 0x10284982 */
  if (C.zf) goto L_10284982;
  /* 10284951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10284954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284956 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10284958 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1028495b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1028495d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1028495f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284961 jl 0x10284980 */
  if ((C.sf!=C.of)) goto L_10284980;
  /* 10284963 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10284966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10284968 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1028496a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1028496d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1028496f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10284972 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284974 jg 0x10284980 */
  if ((!C.zf&&C.sf==C.of)) goto L_10284980;
  /* 10284976 mov eax, 2 */
  EAX = (0x2u);
  /* 1028497b jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284980:;
  /* 10284980 jmp 0x10284931 */
  goto L_10284931;
L_10284982:;
  /* 10284982 mov eax, 1 */
  EAX = (0x1u);
  /* 10284987 jmp 0x10284ae4 */
  goto L_10284ae4;
L_1028498c:;
  /* 1028498c push 0 */
  push32((uint32_t)(0x0u));
  /* 1028498e push 0 */
  push32((uint32_t)(0x0u));
  /* 10284990 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10284993 push ecx */
  push32((uint32_t)(ECX));
  /* 10284994 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10284997 push edx */
  push32((uint32_t)(EDX));
  /* 10284998 push 9 */
  push32((uint32_t)(0x9u));
  /* 1028499a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1028499d push eax */
  push32((uint32_t)(EAX));
  /* 1028499e call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x102849a4u);
  /* 102849a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 102849a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102849ab jne 0x102849b4 */
  if (!C.zf) goto L_102849b4;
  /* 102849ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102849af jmp 0x10284ae4 */
  goto L_10284ae4;
L_102849b4:;
  /* 102849b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102849bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102849be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102849c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102849c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102849c5 call 0x10277cf0 */
  push32(0x102849cau); f_10277cf0();
  /* 102849ca mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 102849cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102849d0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 102849d3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 102849d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 102849dd jmp 0x102849f6 */
  goto L_102849f6;
  /* 102849df mov eax, 1 */
  EAX = (0x1u);
  /* 102849e4 ret  */
  ESPCHK(0x10284700u, _esp0);
  ESP += 4; return;
  /* 102849e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102849e8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 102849ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_102849f6:;
  /* 102849f6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102849fa jne 0x10284a03 */
  if (!C.zf) goto L_10284a03;
  /* 102849fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102849fe jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284a03:;
  /* 10284a03 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10284a06 push edx */
  push32((uint32_t)(EDX));
  /* 10284a07 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10284a0a push eax */
  push32((uint32_t)(EAX));
  /* 10284a0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10284a0e push ecx */
  push32((uint32_t)(ECX));
  /* 10284a0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10284a12 push edx */
  push32((uint32_t)(EDX));
  /* 10284a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10284a15 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10284a18 push eax */
  push32((uint32_t)(EAX));
  /* 10284a19 call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x10284a1fu);
  /* 10284a1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284a21 jne 0x10284a2a */
  if (!C.zf) goto L_10284a2a;
  /* 10284a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284a25 jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284a2a:;
  /* 10284a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10284a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10284a2e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10284a31 push ecx */
  push32((uint32_t)(ECX));
  /* 10284a32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10284a35 push edx */
  push32((uint32_t)(EDX));
  /* 10284a36 push 9 */
  push32((uint32_t)(0x9u));
  /* 10284a38 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10284a3b push eax */
  push32((uint32_t)(EAX));
  /* 10284a3c call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x10284a42u);
  /* 10284a42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10284a45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284a49 jne 0x10284a52 */
  if (!C.zf) goto L_10284a52;
  /* 10284a4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284a4d jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284a52:;
  /* 10284a52 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10284a59 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10284a5c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10284a5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284a61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10284a63 call 0x10277cf0 */
  push32(0x10284a68u); f_10277cf0();
  /* 10284a68 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10284a6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10284a6e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10284a71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10284a74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10284a7b jmp 0x10284a94 */
  goto L_10284a94;
  /* 10284a7d mov eax, 1 */
  EAX = (0x1u);
  /* 10284a82 ret  */
  ESPCHK(0x10284700u, _esp0);
  ESP += 4; return;
  /* 10284a83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10284a86 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10284a8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10284a94:;
  /* 10284a94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284a98 jne 0x10284a9e */
  if (!C.zf) goto L_10284a9e;
  /* 10284a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284a9c jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284a9e:;
  /* 10284a9e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10284aa1 push edx */
  push32((uint32_t)(EDX));
  /* 10284aa2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10284aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10284aa6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10284aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 10284aaa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10284aad push edx */
  push32((uint32_t)(EDX));
  /* 10284aae push 1 */
  push32((uint32_t)(0x1u));
  /* 10284ab0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10284ab3 push eax */
  push32((uint32_t)(EAX));
  /* 10284ab4 call dword ptr [0x102a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32cc))), 0x10284abau);
  /* 10284aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284abc jne 0x10284ac2 */
  if (!C.zf) goto L_10284ac2;
  /* 10284abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284ac0 jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284ac2:;
  /* 10284ac2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10284ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 10284ac6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10284ac9 push edx */
  push32((uint32_t)(EDX));
  /* 10284aca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10284acd push eax */
  push32((uint32_t)(EAX));
  /* 10284ace mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10284ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 10284ad2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284ad5 push edx */
  push32((uint32_t)(EDX));
  /* 10284ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10284ada call dword ptr [0x102a3280] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3280))), 0x10284ae0u);
  /* 10284ae0 jmp 0x10284ae4 */
  goto L_10284ae4;
L_10284ae2:;
  /* 10284ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10284ae4:;
  /* 10284ae4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10284ae7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284aea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10284af1 pop edi */
  EDI = (pop32());
  /* 10284af2 pop esi */
  ESI = (pop32());
  /* 10284af3 pop ebx */
  EBX = (pop32());
  /* 10284af4 mov esp, ebp */
  ESP = (EBP);
  /* 10284af6 pop ebp */
  EBP = (pop32());
  /* 10284af7 ret  */
  ESPCHK(0x10284700u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b00 @ 0x10284b00 (80 bytes, 32 insns) */
void f_10284b00(void) {
  FTRACE(0x10284b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10284b01 mov ebp, esp */
  EBP = (ESP);
  /* 10284b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284b06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284b09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10284b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284b0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10284b12:;
  /* 10284b12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284b15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284b18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10284b1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284b20 je 0x10284b37 */
  if (C.zf) goto L_10284b37;
  /* 10284b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284b25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10284b28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284b2a je 0x10284b37 */
  if (C.zf) goto L_10284b37;
  /* 10284b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284b2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284b32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10284b35 jmp 0x10284b12 */
  goto L_10284b12;
L_10284b37:;
  /* 10284b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284b3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10284b3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284b3f jne 0x10284b49 */
  if (!C.zf) goto L_10284b49;
  /* 10284b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284b44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284b47 jmp 0x10284b4c */
  goto L_10284b4c;
L_10284b49:;
  /* 10284b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10284b4c:;
  /* 10284b4c mov esp, ebp */
  ESP = (EBP);
  /* 10284b4e pop ebp */
  EBP = (pop32());
  /* 10284b4f ret  */
  ESPCHK(0x10284b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b50 @ 0x10284b50 (736 bytes, 224 insns) */
void f_10284b50(void) {
  FTRACE(0x10284b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10284b51 mov ebp, esp */
  EBP = (ESP);
  /* 10284b53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284b56 push esi */
  push32((uint32_t)(ESI));
  /* 10284b57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284b5b je 0x10284b7c */
  if (C.zf) goto L_10284b7c;
  /* 10284b5d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10284b5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284b62 push eax */
  push32((uint32_t)(EAX));
  /* 10284b63 call 0x10284fa0 */
  push32(0x10284b68u); f_10284fa0();
  /* 10284b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284b6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10284b6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284b72 je 0x10284b7c */
  if (C.zf) goto L_10284b7c;
  /* 10284b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284b77 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284b7a jne 0x10284b84 */
  if (!C.zf) goto L_10284b84;
L_10284b7c:;
  /* 10284b7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284b7f jmp 0x10284e2b */
  goto L_10284e2b;
L_10284b84:;
  /* 10284b84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10284b87 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10284b8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10284b8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10284b90 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10284b93 mov ecx, dword ptr [0x102a05c4] */
  ECX = (r32((uint32_t)(0x102a05c4)));
  /* 10284b99 cmp ecx, dword ptr [0x102a05c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a05c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284b9f jne 0x10284bb5 */
  if (!C.zf) goto L_10284bb5;
  /* 10284ba1 mov edx, dword ptr [0x102a05c4] */
  EDX = (r32((uint32_t)(0x102a05c4)));
  /* 10284ba7 push edx */
  push32((uint32_t)(EDX));
  /* 10284ba8 call 0x10284eb0 */
  push32(0x10284badu); f_10284eb0();
  /* 10284bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284bb0 mov dword ptr [0x102a05c4], eax */
  w32((uint32_t)(0x102a05c4), (EAX));
L_10284bb5:;
  /* 10284bb5 cmp dword ptr [0x102a05c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284bbc jne 0x10284c75 */
  if (!C.zf) goto L_10284c75;
  /* 10284bc2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284bc6 je 0x10284be7 */
  if (C.zf) goto L_10284be7;
  /* 10284bc8 cmp dword ptr [0x102a05cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284bcf je 0x10284be7 */
  if (C.zf) goto L_10284be7;
  /* 10284bd1 call 0x10284650 */
  push32(0x10284bd6u); f_10284650();
  /* 10284bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284bd8 je 0x10284be2 */
  if (C.zf) goto L_10284be2;
  /* 10284bda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284bdd jmp 0x10284e2b */
  goto L_10284e2b;
L_10284be2:;
  /* 10284be2 jmp 0x10284c75 */
  goto L_10284c75;
L_10284be7:;
  /* 10284be7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284beb je 0x10284bf4 */
  if (C.zf) goto L_10284bf4;
  /* 10284bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284bef jmp 0x10284e2b */
  goto L_10284e2b;
L_10284bf4:;
  /* 10284bf4 cmp dword ptr [0x102a05c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284bfb jne 0x10284c34 */
  if (!C.zf) goto L_10284c34;
  /* 10284bfd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10284c02 push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10284c09 push 4 */
  push32((uint32_t)(0x4u));
  /* 10284c0b call 0x10274b50 */
  push32(0x10284c10u); f_10274b50();
  /* 10284c10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284c13 mov dword ptr [0x102a05c4], eax */
  w32((uint32_t)(0x102a05c4), (EAX));
  /* 10284c18 cmp dword ptr [0x102a05c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284c1f jne 0x10284c29 */
  if (!C.zf) goto L_10284c29;
  /* 10284c21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284c24 jmp 0x10284e2b */
  goto L_10284e2b;
L_10284c29:;
  /* 10284c29 mov eax, dword ptr [0x102a05c4] */
  EAX = (r32((uint32_t)(0x102a05c4)));
  /* 10284c2e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10284c34:;
  /* 10284c34 cmp dword ptr [0x102a05cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284c3b jne 0x10284c75 */
  if (!C.zf) goto L_10284c75;
  /* 10284c3d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10284c42 push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10284c49 push 4 */
  push32((uint32_t)(0x4u));
  /* 10284c4b call 0x10274b50 */
  push32(0x10284c50u); f_10274b50();
  /* 10284c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284c53 mov dword ptr [0x102a05cc], eax */
  w32((uint32_t)(0x102a05cc), (EAX));
  /* 10284c58 cmp dword ptr [0x102a05cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284c5f jne 0x10284c69 */
  if (!C.zf) goto L_10284c69;
  /* 10284c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284c64 jmp 0x10284e2b */
  goto L_10284e2b;
L_10284c69:;
  /* 10284c69 mov ecx, dword ptr [0x102a05cc] */
  ECX = (r32((uint32_t)(0x102a05cc)));
  /* 10284c6f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10284c75:;
  /* 10284c75 mov edx, dword ptr [0x102a05c4] */
  EDX = (r32((uint32_t)(0x102a05c4)));
  /* 10284c7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10284c7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10284c81 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284c84 push eax */
  push32((uint32_t)(EAX));
  /* 10284c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284c88 push ecx */
  push32((uint32_t)(ECX));
  /* 10284c89 call 0x10284e30 */
  push32(0x10284c8eu); f_10284e30();
  /* 10284c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284c91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10284c94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284c98 jl 0x10284d31 */
  if ((C.sf!=C.of)) goto L_10284d31;
  /* 10284c9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284ca1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284ca4 je 0x10284d31 */
  if (C.zf) goto L_10284d31;
  /* 10284caa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284cae je 0x10284d23 */
  if (C.zf) goto L_10284d23;
  /* 10284cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10284cb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284cb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284cb8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10284cbb push edx */
  push32((uint32_t)(EDX));
  /* 10284cbc call 0x102755e0 */
  push32(0x10284cc1u); f_102755e0();
  /* 10284cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284cc4 jmp 0x10284ccf */
  goto L_10284ccf;
L_10284cc6:;
  /* 10284cc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284cc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284ccc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10284ccf:;
  /* 10284ccf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284cd2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284cd5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284cd9 je 0x10284cf0 */
  if (C.zf) goto L_10284cf0;
  /* 10284cdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284cde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284ce1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284ce4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10284ce7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10284ceb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10284cee jmp 0x10284cc6 */
  goto L_10284cc6;
L_10284cf0:;
  /* 10284cf0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10284cf5 push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10284cfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284cff shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10284d02 push eax */
  push32((uint32_t)(EAX));
  /* 10284d03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d06 push ecx */
  push32((uint32_t)(ECX));
  /* 10284d07 call 0x10274fe0 */
  push32(0x10284d0cu); f_10274fe0();
  /* 10284d0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284d0f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10284d12 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284d16 je 0x10284d21 */
  if (C.zf) goto L_10284d21;
  /* 10284d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d1b mov dword ptr [0x102a05c4], edx */
  w32((uint32_t)(0x102a05c4), (EDX));
L_10284d21:;
  /* 10284d21 jmp 0x10284d2f */
  goto L_10284d2f;
L_10284d23:;
  /* 10284d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284d26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284d2c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10284d2f:;
  /* 10284d2f jmp 0x10284da4 */
  goto L_10284da4;
L_10284d31:;
  /* 10284d31 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284d35 jne 0x10284d9d */
  if (!C.zf) goto L_10284d9d;
  /* 10284d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284d3b jge 0x10284d45 */
  if ((C.sf==C.of)) goto L_10284d45;
  /* 10284d3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284d40 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10284d42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10284d45:;
  /* 10284d45 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10284d4a push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10284d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284d54 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10284d5b push edx */
  push32((uint32_t)(EDX));
  /* 10284d5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d5f push eax */
  push32((uint32_t)(EAX));
  /* 10284d60 call 0x10274fe0 */
  push32(0x10284d65u); f_10274fe0();
  /* 10284d65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284d68 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10284d6b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284d6f jne 0x10284d79 */
  if (!C.zf) goto L_10284d79;
  /* 10284d71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284d74 jmp 0x10284e2b */
  goto L_10284e2b;
L_10284d79:;
  /* 10284d79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284d7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284d82 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10284d85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284d88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d8b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10284d93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284d96 mov dword ptr [0x102a05c4], eax */
  w32((uint32_t)(0x102a05c4), (EAX));
  /* 10284d9b jmp 0x10284da4 */
  goto L_10284da4;
L_10284d9d:;
  /* 10284d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284d9f jmp 0x10284e2b */
  goto L_10284e2b;
L_10284da4:;
  /* 10284da4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284da8 je 0x10284e29 */
  if (C.zf) goto L_10284e29;
  /* 10284daa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10284daf push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10284db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284db9 push ecx */
  push32((uint32_t)(ECX));
  /* 10284dba call 0x10277980 */
  push32(0x10284dbfu); f_10277980();
  /* 10284dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284dc2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284dc5 push eax */
  push32((uint32_t)(EAX));
  /* 10284dc6 call 0x10274b50 */
  push32(0x10284dcbu); f_10274b50();
  /* 10284dcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284dce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10284dd1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284dd5 je 0x10284e29 */
  if (C.zf) goto L_10284e29;
  /* 10284dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284dda push edx */
  push32((uint32_t)(EDX));
  /* 10284ddb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284dde push eax */
  push32((uint32_t)(EAX));
  /* 10284ddf call 0x10277b00 */
  push32(0x10284de4u); f_10277b00();
  /* 10284de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284de7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10284dea sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284ded mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284df0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284df2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10284df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284df8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10284dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284dfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284e01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10284e04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10284e07 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10284e09 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284e0b not edx */
  EDX = (~(EDX));
  /* 10284e0d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10284e10 push edx */
  push32((uint32_t)(EDX));
  /* 10284e11 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284e14 push eax */
  push32((uint32_t)(EAX));
  /* 10284e15 call dword ptr [0x102a327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a327c))), 0x10284e1bu);
  /* 10284e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10284e1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284e20 push ecx */
  push32((uint32_t)(ECX));
  /* 10284e21 call 0x102755e0 */
  push32(0x10284e26u); f_102755e0();
  /* 10284e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10284e29:;
  /* 10284e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10284e2b:;
  /* 10284e2b pop esi */
  ESI = (pop32());
  /* 10284e2c mov esp, ebp */
  ESP = (EBP);
  /* 10284e2e pop ebp */
  EBP = (pop32());
  /* 10284e2f ret  */
  ESPCHK(0x10284b50u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10284e30 (124 bytes, 47 insns) */
void f_10284e30(void) {
  FTRACE(0x10284e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10284e31 mov ebp, esp */
  EBP = (ESP);
  /* 10284e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10284e34 mov eax, dword ptr [0x102a05c4] */
  EAX = (r32((uint32_t)(0x102a05c4)));
  /* 10284e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10284e3c jmp 0x10284e47 */
  goto L_10284e47;
L_10284e3e:;
  /* 10284e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e41 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284e44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10284e47:;
  /* 10284e47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e4a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284e4d je 0x10284e9a */
  if (C.zf) goto L_10284e9a;
  /* 10284e4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284e52 push eax */
  push32((uint32_t)(EAX));
  /* 10284e53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10284e58 push edx */
  push32((uint32_t)(EDX));
  /* 10284e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284e5c push eax */
  push32((uint32_t)(EAX));
  /* 10284e5d call 0x10284600 */
  push32(0x10284e62u); f_10284600();
  /* 10284e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10284e67 jne 0x10284e98 */
  if (!C.zf) goto L_10284e98;
  /* 10284e69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e6c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10284e6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284e71 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10284e75 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284e78 je 0x10284e8a */
  if (C.zf) goto L_10284e8a;
  /* 10284e7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e7d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10284e7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284e82 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10284e86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284e88 jne 0x10284e98 */
  if (!C.zf) goto L_10284e98;
L_10284e8a:;
  /* 10284e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e8d sub eax, dword ptr [0x102a05c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a05c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284e93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10284e96 jmp 0x10284ea8 */
  goto L_10284ea8;
L_10284e98:;
  /* 10284e98 jmp 0x10284e3e */
  goto L_10284e3e;
L_10284e9a:;
  /* 10284e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284e9d sub eax, dword ptr [0x102a05c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102a05c4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284ea3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10284ea6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10284ea8:;
  /* 10284ea8 mov esp, ebp */
  ESP = (EBP);
  /* 10284eaa pop ebp */
  EBP = (pop32());
  /* 10284eab ret  */
  ESPCHK(0x10284e30u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10284eb0 (238 bytes, 80 insns) */
void f_10284eb0(void) {
  FTRACE(0x10284eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10284eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10284eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10284eb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10284ebd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284ec0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10284ec3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284ec7 jne 0x10284ed0 */
  if (!C.zf) goto L_10284ed0;
  /* 10284ec9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10284ecb jmp 0x10284f9a */
  goto L_10284f9a;
L_10284ed0:;
  /* 10284ed0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284ed3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10284ed5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284ed8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284edb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10284ede test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284ee0 je 0x10284eed */
  if (C.zf) goto L_10284eed;
  /* 10284ee2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284ee5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284ee8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10284eeb jmp 0x10284ed0 */
  goto L_10284ed0;
L_10284eed:;
  /* 10284eed push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10284ef2 push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284ef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10284ef9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10284efc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10284f03 push eax */
  push32((uint32_t)(EAX));
  /* 10284f04 call 0x10274b50 */
  push32(0x10284f09u); f_10274b50();
  /* 10284f09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284f0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10284f0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284f12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10284f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284f19 jne 0x10284f25 */
  if (!C.zf) goto L_10284f25;
  /* 10284f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 10284f1d call 0x10273ac0 */
  push32(0x10284f22u); f_10273ac0();
  /* 10284f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10284f25:;
  /* 10284f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284f28 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10284f2b:;
  /* 10284f2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284f2e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284f31 je 0x10284f8e */
  if (C.zf) goto L_10284f8e;
  /* 10284f33 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10284f38 push 0x1029c9a0 */
  push32((uint32_t)(0x1029c9a0u));
  /* 10284f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10284f3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284f42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10284f44 push edx */
  push32((uint32_t)(EDX));
  /* 10284f45 call 0x10277980 */
  push32(0x10284f4au); f_10277980();
  /* 10284f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284f4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284f50 push eax */
  push32((uint32_t)(EAX));
  /* 10284f51 call 0x10274b50 */
  push32(0x10284f56u); f_10274b50();
  /* 10284f56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284f59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284f5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10284f5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284f61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284f64 je 0x10284f7a */
  if (C.zf) goto L_10284f7a;
  /* 10284f66 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284f69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10284f6b push ecx */
  push32((uint32_t)(ECX));
  /* 10284f6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284f6f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10284f71 push eax */
  push32((uint32_t)(EAX));
  /* 10284f72 call 0x10277b00 */
  push32(0x10284f77u); f_10277b00();
  /* 10284f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10284f7a:;
  /* 10284f7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10284f7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284f80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10284f83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284f86 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284f89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10284f8c jmp 0x10284f2b */
  goto L_10284f2b;
L_10284f8e:;
  /* 10284f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10284f91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10284f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10284f9a:;
  /* 10284f9a mov esp, ebp */
  ESP = (EBP);
  /* 10284f9c pop ebp */
  EBP = (pop32());
  /* 10284f9d ret  */
  ESPCHK(0x10284eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fa0 @ 0x10284fa0 (237 bytes, 81 insns) */
void f_10284fa0(void) {
  FTRACE(0x10284fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10284fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10284fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10284fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10284fa4 cmp dword ptr [0x102a1d0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1d0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10284fab jne 0x10284fc2 */
  if (!C.zf) goto L_10284fc2;
  /* 10284fad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10284fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10284fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10284fb5 call 0x102850a0 */
  push32(0x10284fbau); f_102850a0();
  /* 10284fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284fbd jmp 0x10285089 */
  goto L_10285089;
L_10284fc2:;
  /* 10284fc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10284fc4 call 0x10278550 */
  push32(0x10284fc9u); f_10278550();
  /* 10284fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10284fcc jmp 0x10284fd7 */
  goto L_10284fd7;
L_10284fce:;
  /* 10284fce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284fd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10284fd4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10284fd7:;
  /* 10284fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10284fda movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10284fde mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10284fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284fe5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10284feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10284fed je 0x1028506b */
  if (C.zf) goto L_1028506b;
  /* 10284fef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10284ff2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10284ff7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10284ff9 mov cl, byte ptr [eax + 0x102a1e21] */
  CL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 10284fff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10285002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10285004 je 0x10285056 */
  if (C.zf) goto L_10285056;
  /* 10285006 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10285009 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1028500c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1028500f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10285012 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10285014 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10285016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10285018 jne 0x10285028 */
  if (!C.zf) goto L_10285028;
  /* 1028501a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1028501c call 0x102785f0 */
  push32(0x10285021u); f_102785f0();
  /* 10285021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10285024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10285026 jmp 0x10285089 */
  goto L_10285089;
L_10285028:;
  /* 10285028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1028502b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10285031 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10285034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10285037 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10285039 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1028503b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1028503d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10285040 jne 0x10285054 */
  if (!C.zf) goto L_10285054;
  /* 10285042 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10285044 call 0x102785f0 */
  push32(0x10285049u); f_102785f0();
  /* 10285049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1028504c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1028504f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10285052 jmp 0x10285089 */
  goto L_10285089;
L_10285054:;
  /* 10285054 jmp 0x10285066 */
  goto L_10285066;
L_10285056:;
  /* 10285056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10285059 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1028505f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10285062 jne 0x10285066 */
  if (!C.zf) goto L_10285066;
  /* 10285064 jmp 0x1028506b */
  goto L_1028506b;
L_10285066:;
  /* 10285066 jmp 0x10284fce */
  goto L_10284fce;
L_1028506b:;
  /* 1028506b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1028506d call 0x102785f0 */
  push32(0x10285072u); f_102785f0();
  /* 10285072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10285075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10285078 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1028507d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10285080 jne 0x10285087 */
  if (!C.zf) goto L_10285087;
  /* 10285082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10285085 jmp 0x10285089 */
  goto L_10285089;
L_10285087:;
  /* 10285087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10285089:;
  /* 10285089 mov esp, ebp */
  ESP = (EBP);
  /* 1028508b pop ebp */
  EBP = (pop32());
  /* 1028508c ret  */
  ESPCHK(0x10284fa0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x102850a0 (193 bytes, 87 insns) */
void f_102850a0(void) {
  FTRACE(0x102850a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102850a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102850a2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102850a6 push ebx */
  push32((uint32_t)(EBX));
  /* 102850a7 mov ebx, eax */
  EBX = (EAX);
  /* 102850a9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102850ac mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102850b0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 102850b6 je 0x102850cb */
  if (C.zf) goto L_102850cb;
L_102850b8:;
  /* 102850b8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 102850ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102850bb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102850bd je 0x10285090 */
  if (C.zf) { jmp_ind(0x10285090u); return; }
  /* 102850bf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 102850c1 je 0x10285114 */
  if (C.zf) goto L_10285114;
  /* 102850c3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 102850c9 jne 0x102850b8 */
  if (!C.zf) goto L_102850b8;
L_102850cb:;
  /* 102850cb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 102850cd push edi */
  push32((uint32_t)(EDI));
  /* 102850ce mov eax, ebx */
  EAX = (EBX);
  /* 102850d0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 102850d3 push esi */
  push32((uint32_t)(ESI));
  /* 102850d4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_102850d6:;
  /* 102850d6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 102850d8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 102850dd mov eax, ecx */
  EAX = (ECX);
  /* 102850df mov esi, edi */
  ESI = (EDI);
  /* 102850e1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 102850e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102850e5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102850e7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 102850ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102850ed xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102850ef xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 102850f1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102850f4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 102850fa jne 0x10285118 */
  if (!C.zf) goto L_10285118;
  /* 102850fc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10285101 je 0x102850d6 */
  if (C.zf) goto L_102850d6;
  /* 10285103 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10285108 jne 0x10285112 */
  if (!C.zf) goto L_10285112;
  /* 1028510a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10285110 jne 0x102850d6 */
  if (!C.zf) goto L_102850d6;
L_10285112:;
  /* 10285112 pop esi */
  ESI = (pop32());
  /* 10285113 pop edi */
  EDI = (pop32());
L_10285114:;
  /* 10285114 pop ebx */
  EBX = (pop32());
  /* 10285115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10285117 ret  */
  ESPCHK(0x102850a0u, _esp0);
  ESP += 4; return;
L_10285118:;
  /* 10285118 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1028511b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1028511d je 0x10285155 */
  if (C.zf) goto L_10285155;
  /* 1028511f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10285121 je 0x10285112 */
  if (C.zf) goto L_10285112;
  /* 10285123 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10285125 je 0x1028514e */
  if (C.zf) goto L_1028514e;
  /* 10285127 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10285129 je 0x10285112 */
  if (C.zf) goto L_10285112;
  /* 1028512b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1028512e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10285130 je 0x10285147 */
  if (C.zf) goto L_10285147;
  /* 10285132 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10285134 je 0x10285112 */
  if (C.zf) goto L_10285112;
  /* 10285136 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10285138 je 0x10285140 */
  if (C.zf) goto L_10285140;
  /* 1028513a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1028513c je 0x10285112 */
  if (C.zf) goto L_10285112;
  /* 1028513e jmp 0x102850d6 */
  goto L_102850d6;
L_10285140:;
  /* 10285140 pop esi */
  ESI = (pop32());
  /* 10285141 pop edi */
  EDI = (pop32());
  /* 10285142 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10285145 pop ebx */
  EBX = (pop32());
  /* 10285146 ret  */
  ESPCHK(0x102850a0u, _esp0);
  ESP += 4; return;
L_10285147:;
  /* 10285147 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1028514a pop esi */
  ESI = (pop32());
  /* 1028514b pop edi */
  EDI = (pop32());
  /* 1028514c pop ebx */
  EBX = (pop32());
  /* 1028514d ret  */
  ESPCHK(0x102850a0u, _esp0);
  ESP += 4; return;
L_1028514e:;
  /* 1028514e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10285151 pop esi */
  ESI = (pop32());
  /* 10285152 pop edi */
  EDI = (pop32());
  /* 10285153 pop ebx */
  EBX = (pop32());
  /* 10285154 ret  */
  ESPCHK(0x102850a0u, _esp0);
  ESP += 4; return;
L_10285155:;
  /* 10285155 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10285158 pop esi */
  ESI = (pop32());
  /* 10285159 pop edi */
  EDI = (pop32());
  /* 1028515a pop ebx */
  EBX = (pop32());
  /* 1028515b ret  */
  ESPCHK(0x102850a0u, _esp0);
  ESP += 4; return;
  /* 1028515c jmp dword ptr [0x102a32e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102a32e8)))); return;
}

/* RtlUnwind @ 0x102852ac (6 bytes, 1 insns) */
void f_102852ac(void) {
  FTRACE(0x102852acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102852ac jmp dword ptr [0x102a32b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102a32b4)))); return;
}

