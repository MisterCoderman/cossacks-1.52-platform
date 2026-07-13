#include "recomp.h"

/* FUN_10010a40 @ 0x10de0a40 (878 bytes, 273 insns) */
void f_10de0a40(void) {
  FTRACE(0x10de0a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0a41 mov ebp, esp */
  EBP = (ESP);
  /* 10de0a43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0a46 push esi */
  push32((uint32_t)(ESI));
  /* 10de0a47 mov eax, dword ptr [0x10dfec98] */
  EAX = (r32((uint32_t)(0x10dfec98)));
  /* 10de0a4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de0a4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10de0a56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de0a5d jmp 0x10de0a68 */
  goto L_10de0a68;
L_10de0a5f:;
  /* 10de0a5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10de0a68:;
  /* 10de0a68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0a6c jae 0x10de0aa1 */
  if (!C.cf) goto L_10de0aa1;
  /* 10de0a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0a74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10de0a77 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0a78 call 0x10dd68c0 */
  push32(0x10de0a7du); f_10dd68c0();
  /* 10de0a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a80 mov esi, eax */
  ESI = (EAX);
  /* 10de0a82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0a85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0a88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10de0a8c push ecx */
  push32((uint32_t)(ECX));
  /* 10de0a8d call 0x10dd68c0 */
  push32(0x10de0a92u); f_10dd68c0();
  /* 10de0a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0a98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10de0a9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de0a9f jmp 0x10de0a5f */
  goto L_10de0a5f;
L_10de0aa1:;
  /* 10de0aa1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de0aa8 jmp 0x10de0ab3 */
  goto L_10de0ab3;
L_10de0aaa:;
  /* 10de0aaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0aad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ab0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10de0ab3:;
  /* 10de0ab3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0ab7 jae 0x10de0aed */
  if (!C.cf) goto L_10de0aed;
  /* 10de0ab9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0abc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0abf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10de0ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10de0ac4 call 0x10dd68c0 */
  push32(0x10de0ac9u); f_10dd68c0();
  /* 10de0ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0acc mov esi, eax */
  ESI = (EAX);
  /* 10de0ace mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0ad1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0ad4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10de0ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10de0ad9 call 0x10dd68c0 */
  push32(0x10de0adeu); f_10dd68c0();
  /* 10de0ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ae1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ae4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10de0ae8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de0aeb jmp 0x10de0aaa */
  goto L_10de0aaa;
L_10de0aed:;
  /* 10de0aed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0af0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10de0af6 push eax */
  push32((uint32_t)(EAX));
  /* 10de0af7 call 0x10dd68c0 */
  push32(0x10de0afcu); f_10dd68c0();
  /* 10de0afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0aff mov esi, eax */
  ESI = (EAX);
  /* 10de0b01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0b04 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10de0b0a push edx */
  push32((uint32_t)(EDX));
  /* 10de0b0b call 0x10dd68c0 */
  push32(0x10de0b10u); f_10dd68c0();
  /* 10de0b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b13 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b16 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10de0b1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de0b1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0b20 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10de0b26 push edx */
  push32((uint32_t)(EDX));
  /* 10de0b27 call 0x10dd68c0 */
  push32(0x10de0b2cu); f_10dd68c0();
  /* 10de0b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0b32 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10de0b36 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de0b39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0b3c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10de0b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0b43 call 0x10dd68c0 */
  push32(0x10de0b48u); f_10dd68c0();
  /* 10de0b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0b4e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10de0b52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de0b55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0b58 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10de0b5e push edx */
  push32((uint32_t)(EDX));
  /* 10de0b5f call 0x10dd68c0 */
  push32(0x10de0b64u); f_10dd68c0();
  /* 10de0b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0b6a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10de0b6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de0b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de0b74 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b79 push eax */
  push32((uint32_t)(EAX));
  /* 10de0b7a call 0x10dd3a70 */
  push32(0x10de0b7fu); f_10dd3a70();
  /* 10de0b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de0b85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0b89 je 0x10de0da6 */
  if (C.zf) goto L_10de0da6;
  /* 10de0b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0b92 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10de0b95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0b98 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0b9e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de0ba1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10de0ba6 mov eax, dword ptr [0x10dfec98] */
  EAX = (r32((uint32_t)(0x10dfec98)));
  /* 10de0bab push eax */
  push32((uint32_t)(EAX));
  /* 10de0bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0baf push ecx */
  push32((uint32_t)(ECX));
  /* 10de0bb0 call 0x10dda370 */
  push32(0x10de0bb5u); f_10dda370();
  /* 10de0bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0bb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de0bbf jmp 0x10de0bca */
  goto L_10de0bca;
L_10de0bc1:;
  /* 10de0bc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0bc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0bc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de0bca:;
  /* 10de0bca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0bce jae 0x10de0c3e */
  if (!C.cf) goto L_10de0c3e;
  /* 10de0bd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0bd3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0bd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0bd9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10de0bdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0bdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0be2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10de0be5 push edx */
  push32((uint32_t)(EDX));
  /* 10de0be6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0be9 push eax */
  push32((uint32_t)(EAX));
  /* 10de0bea call 0x10dd6a40 */
  push32(0x10de0befu); f_10dd6a40();
  /* 10de0bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0bf2 push eax */
  push32((uint32_t)(EAX));
  /* 10de0bf3 call 0x10dd68c0 */
  push32(0x10de0bf8u); f_10dd68c0();
  /* 10de0bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0bfe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10de0c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de0c05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0c0b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c0e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10de0c12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0c18 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10de0c1c push edx */
  push32((uint32_t)(EDX));
  /* 10de0c1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c20 push eax */
  push32((uint32_t)(EAX));
  /* 10de0c21 call 0x10dd6a40 */
  push32(0x10de0c26u); f_10dd6a40();
  /* 10de0c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0c29 push eax */
  push32((uint32_t)(EAX));
  /* 10de0c2a call 0x10dd68c0 */
  push32(0x10de0c2fu); f_10dd68c0();
  /* 10de0c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0c32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c35 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10de0c39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de0c3c jmp 0x10de0bc1 */
  goto L_10de0bc1;
L_10de0c3e:;
  /* 10de0c3e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de0c45 jmp 0x10de0c50 */
  goto L_10de0c50;
L_10de0c47:;
  /* 10de0c47 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0c4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10de0c50:;
  /* 10de0c50 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0c54 jae 0x10de0cc6 */
  if (!C.cf) goto L_10de0cc6;
  /* 10de0c56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0c5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c5f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10de0c63 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0c69 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10de0c6d push eax */
  push32((uint32_t)(EAX));
  /* 10de0c6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c71 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0c72 call 0x10dd6a40 */
  push32(0x10de0c77u); f_10dd6a40();
  /* 10de0c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0c7a push eax */
  push32((uint32_t)(EAX));
  /* 10de0c7b call 0x10dd68c0 */
  push32(0x10de0c80u); f_10dd68c0();
  /* 10de0c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0c83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c86 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10de0c8a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de0c8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c90 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0c93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0c96 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10de0c9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0c9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0ca0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10de0ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10de0ca5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0ca9 call 0x10dd6a40 */
  push32(0x10de0caeu); f_10dd6a40();
  /* 10de0cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0cb1 push eax */
  push32((uint32_t)(EAX));
  /* 10de0cb2 call 0x10dd68c0 */
  push32(0x10de0cb7u); f_10dd68c0();
  /* 10de0cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0cba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0cbd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10de0cc1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de0cc4 jmp 0x10de0c47 */
  goto L_10de0c47;
L_10de0cc6:;
  /* 10de0cc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0cc9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0ccc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10de0cd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0cd5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10de0cdb push ecx */
  push32((uint32_t)(ECX));
  /* 10de0cdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0cdf push edx */
  push32((uint32_t)(EDX));
  /* 10de0ce0 call 0x10dd6a40 */
  push32(0x10de0ce5u); f_10dd6a40();
  /* 10de0ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10de0ce9 call 0x10dd68c0 */
  push32(0x10de0ceeu); f_10dd68c0();
  /* 10de0cee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0cf1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0cf4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10de0cf8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de0cfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0cfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d01 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10de0d07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0d0a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10de0d10 push eax */
  push32((uint32_t)(EAX));
  /* 10de0d11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d14 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0d15 call 0x10dd6a40 */
  push32(0x10de0d1au); f_10dd6a40();
  /* 10de0d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0d1d push eax */
  push32((uint32_t)(EAX));
  /* 10de0d1e call 0x10dd68c0 */
  push32(0x10de0d23u); f_10dd68c0();
  /* 10de0d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0d26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d29 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10de0d2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de0d30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0d33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d36 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10de0d3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0d3f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10de0d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0d46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d49 push edx */
  push32((uint32_t)(EDX));
  /* 10de0d4a call 0x10dd6a40 */
  push32(0x10de0d4fu); f_10dd6a40();
  /* 10de0d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0d52 push eax */
  push32((uint32_t)(EAX));
  /* 10de0d53 call 0x10dd68c0 */
  push32(0x10de0d58u); f_10dd68c0();
  /* 10de0d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0d5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10de0d62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de0d65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0d68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d6b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10de0d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0d74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10de0d7a push eax */
  push32((uint32_t)(EAX));
  /* 10de0d7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d7e push ecx */
  push32((uint32_t)(ECX));
  /* 10de0d7f call 0x10dd6a40 */
  push32(0x10de0d84u); f_10dd6a40();
  /* 10de0d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0d87 push eax */
  push32((uint32_t)(EAX));
  /* 10de0d88 call 0x10dd68c0 */
  push32(0x10de0d8du); f_10dd68c0();
  /* 10de0d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0d90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0d93 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10de0d97 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de0d9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de0d9d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de0da0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10de0da6:;
  /* 10de0da6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0da9 pop esi */
  ESI = (pop32());
  /* 10de0daa mov esp, ebp */
  ESP = (EBP);
  /* 10de0dac pop ebp */
  EBP = (pop32());
  /* 10de0dad ret  */
  ESPCHK(0x10de0a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010db0 @ 0x10de0db0 (31 bytes, 15 insns) */
void f_10de0db0(void) {
  FTRACE(0x10de0db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0db1 mov ebp, esp */
  EBP = (ESP);
  /* 10de0db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de0db5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de0db8 push eax */
  push32((uint32_t)(EAX));
  /* 10de0db9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0dbc push ecx */
  push32((uint32_t)(ECX));
  /* 10de0dbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0dc0 push edx */
  push32((uint32_t)(EDX));
  /* 10de0dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0dc4 push eax */
  push32((uint32_t)(EAX));
  /* 10de0dc5 call 0x10de0dd0 */
  push32(0x10de0dcau); f_10de0dd0();
  /* 10de0dca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0dcd pop ebp */
  EBP = (pop32());
  /* 10de0dce ret  */
  ESPCHK(0x10de0db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x10de0dd0 (394 bytes, 123 insns) */
void f_10de0dd0(void) {
  FTRACE(0x10de0dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10de0dd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0dd9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de0ddc push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10de0de1 call dword ptr [0x10e022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f4))), 0x10de0de7u);
  /* 10de0de7 cmp dword ptr [0x10dff91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0dee je 0x10de0e0e */
  if (C.zf) goto L_10de0e0e;
  /* 10de0df0 push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10de0df5 call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10de0dfbu);
  /* 10de0dfb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de0dfd call 0x10dd7490 */
  push32(0x10de0e02u); f_10dd7490();
  /* 10de0e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0e05 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10de0e0c jmp 0x10de0e15 */
  goto L_10de0e15;
L_10de0e0e:;
  /* 10de0e0e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10de0e15:;
  /* 10de0e15 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0e19 jne 0x10de0e26 */
  if (!C.zf) goto L_10de0e26;
  /* 10de0e1b mov ecx, dword ptr [0x10dfec98] */
  ECX = (r32((uint32_t)(0x10dfec98)));
  /* 10de0e21 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10de0e24 jmp 0x10de0e2c */
  goto L_10de0e2c;
L_10de0e26:;
  /* 10de0e26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de0e29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de0e2c:;
  /* 10de0e2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de0e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10de0e32:;
  /* 10de0e32 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0e36 jbe 0x10de0f23 */
  if ((C.cf||C.zf)) goto L_10de0f23;
  /* 10de0e3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0e3f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de0e41 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10de0e44 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de0e48 je 0x10de0e52 */
  if (C.zf) goto L_10de0e52;
  /* 10de0e4a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de0e4e je 0x10de0e57 */
  if (C.zf) goto L_10de0e57;
  /* 10de0e50 jmp 0x10de0eb1 */
  goto L_10de0eb1;
L_10de0e52:;
  /* 10de0e52 jmp 0x10de0f23 */
  goto L_10de0f23;
L_10de0e57:;
  /* 10de0e57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0e5d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10de0e60 mov dword ptr [0x10dff908], 0 */
  w32((uint32_t)(0x10dff908), (0x0u));
  /* 10de0e6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0e6d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de0e70 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0e73 jne 0x10de0e88 */
  if (!C.zf) goto L_10de0e88;
  /* 10de0e75 mov dword ptr [0x10dff908], 1 */
  w32((uint32_t)(0x10dff908), (0x1u));
  /* 10de0e7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0e82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0e85 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10de0e88:;
  /* 10de0e88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de0e8b push ecx */
  push32((uint32_t)(ECX));
  /* 10de0e8c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10de0e8f push edx */
  push32((uint32_t)(EDX));
  /* 10de0e90 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10de0e93 push eax */
  push32((uint32_t)(EAX));
  /* 10de0e94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de0e97 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0e98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0e9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de0e9d push eax */
  push32((uint32_t)(EAX));
  /* 10de0e9e call 0x10de0f60 */
  push32(0x10de0ea3u); f_10de0f60();
  /* 10de0ea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ea6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0ea9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0eac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10de0eaf jmp 0x10de0f1e */
  goto L_10de0f1e;
L_10de0eb1:;
  /* 10de0eb1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de0eb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de0eb8 mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de0ebe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de0ec0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de0ec4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10de0eca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de0ecc je 0x10de0ef9 */
  if (C.zf) goto L_10de0ef9;
  /* 10de0ece cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0ed2 jbe 0x10de0ef9 */
  if ((C.cf||C.zf)) goto L_10de0ef9;
  /* 10de0ed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0ed7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0eda mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de0edc mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10de0ede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0ee1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ee4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de0ee7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0eea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0eed mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10de0ef0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0ef3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0ef6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10de0ef9:;
  /* 10de0ef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0efc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0eff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de0f01 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10de0f03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0f06 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0f09 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de0f0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0f0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0f12 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10de0f15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0f18 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0f1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10de0f1e:;
  /* 10de0f1e jmp 0x10de0e32 */
  goto L_10de0e32;
L_10de0f23:;
  /* 10de0f23 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0f27 je 0x10de0f35 */
  if (C.zf) goto L_10de0f35;
  /* 10de0f29 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de0f2b call 0x10dd7530 */
  push32(0x10de0f30u); f_10dd7530();
  /* 10de0f30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0f33 jmp 0x10de0f40 */
  goto L_10de0f40;
L_10de0f35:;
  /* 10de0f35 push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10de0f3a call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10de0f40u);
L_10de0f40:;
  /* 10de0f40 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0f44 jbe 0x10de0f54 */
  if ((C.cf||C.zf)) goto L_10de0f54;
  /* 10de0f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de0f49 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10de0f4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0f4f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0f52 jmp 0x10de0f56 */
  goto L_10de0f56;
L_10de0f54:;
  /* 10de0f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de0f56:;
  /* 10de0f56 mov esp, ebp */
  ESP = (EBP);
  /* 10de0f58 pop ebp */
  EBP = (pop32());
  /* 10de0f59 ret  */
  ESPCHK(0x10de0dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x10de0f60 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10de0f60(void) {
  FTRACE(0x10de0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10de0f61 mov ebp, esp */
  EBP = (ESP);
  /* 10de0f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0f66 push esi */
  push32((uint32_t)(ESI));
  /* 10de0f67 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10de0f6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de0f6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0f71 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de0f74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de0f77 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de0f7b ja 0x10de14c8 */
  if ((!C.cf&&!C.zf)) goto L_10de14c8;
  /* 10de0f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de0f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de0f86 mov dl, byte ptr [eax + 0x10de1529] */
  DL = (r8((uint32_t)(EAX + 0x10de1529)));
  /* 10de0f8c jmp dword ptr [edx*4 + 0x10de14cd] */
  switch (EDX) {
    case 0: goto L_10de14a6;
    case 1: goto L_10de0fb5;
    case 2: goto L_10de0ffb;
    case 3: goto L_10de1148;
    case 4: goto L_10de1170;
    case 5: goto L_10de120f;
    case 6: goto L_10de127b;
    case 7: goto L_10de12a4;
    case 8: goto L_10de12e5;
    case 9: goto L_10de13c7;
    case 10: goto L_10de142e;
    case 11: goto L_10de147b;
    case 12: goto L_10de0f93;
    case 13: goto L_10de0fd8;
    case 14: goto L_10de101e;
    case 15: goto L_10de111e;
    case 16: goto L_10de11b5;
    case 17: goto L_10de11e2;
    case 18: goto L_10de1237;
    case 19: goto L_10de12bb;
    case 20: goto L_10de1369;
    case 21: goto L_10de13f8;
    case 22: goto L_10de14c8;
    default: x86_unimpl("switch@0x10de0f8c out of table"); return;
  }
L_10de0f93:;
  /* 10de0f93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de0f96 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0f97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0f9a push edx */
  push32((uint32_t)(EDX));
  /* 10de0f9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0f9e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10de0fa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de0fa4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10de0fa7 push eax */
  push32((uint32_t)(EAX));
  /* 10de0fa8 call 0x10de1580 */
  push32(0x10de0fadu); f_10de1580();
  /* 10de0fad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0fb0 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de0fb5:;
  /* 10de0fb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de0fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10de0fb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0fbc push edx */
  push32((uint32_t)(EDX));
  /* 10de0fbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0fc0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10de0fc3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de0fc6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10de0fca push eax */
  push32((uint32_t)(EAX));
  /* 10de0fcb call 0x10de1580 */
  push32(0x10de0fd0u); f_10de1580();
  /* 10de0fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0fd3 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de0fd8:;
  /* 10de0fd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de0fdb push ecx */
  push32((uint32_t)(ECX));
  /* 10de0fdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de0fdf push edx */
  push32((uint32_t)(EDX));
  /* 10de0fe0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de0fe3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10de0fe6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de0fe9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10de0fed push eax */
  push32((uint32_t)(EAX));
  /* 10de0fee call 0x10de1580 */
  push32(0x10de0ff3u); f_10de1580();
  /* 10de0ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de0ff6 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de0ffb:;
  /* 10de0ffb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de0ffe push ecx */
  push32((uint32_t)(ECX));
  /* 10de0fff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1002 push edx */
  push32((uint32_t)(EDX));
  /* 10de1003 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1006 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10de1009 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de100c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10de1010 push eax */
  push32((uint32_t)(EAX));
  /* 10de1011 call 0x10de1580 */
  push32(0x10de1016u); f_10de1580();
  /* 10de1016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1019 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de101e:;
  /* 10de101e cmp dword ptr [0x10dff908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1025 je 0x10de10a6 */
  if (C.zf) goto L_10de10a6;
  /* 10de1027 mov dword ptr [0x10dff908], 0 */
  w32((uint32_t)(0x10dff908), (0x0u));
  /* 10de1031 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1034 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1035 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1038 push edx */
  push32((uint32_t)(EDX));
  /* 10de1039 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de103c push eax */
  push32((uint32_t)(EAX));
  /* 10de103d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1040 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1041 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1044 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10de104a push eax */
  push32((uint32_t)(EAX));
  /* 10de104b call 0x10de1730 */
  push32(0x10de1050u); f_10de1730();
  /* 10de1050 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1053 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1056 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1059 jne 0x10de1060 */
  if (!C.zf) goto L_10de1060;
  /* 10de105b jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de1060:;
  /* 10de1060 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1063 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de1065 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10de1068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de106b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de106d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1073 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de1075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1078 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de107a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de107d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1080 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de1082 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1085 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1086 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1089 push edx */
  push32((uint32_t)(EDX));
  /* 10de108a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de108d push eax */
  push32((uint32_t)(EAX));
  /* 10de108e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1091 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1092 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1095 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10de109b push eax */
  push32((uint32_t)(EAX));
  /* 10de109c call 0x10de1730 */
  push32(0x10de10a1u); f_10de1730();
  /* 10de10a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de10a4 jmp 0x10de1119 */
  goto L_10de1119;
L_10de10a6:;
  /* 10de10a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de10a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10de10aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de10ad push edx */
  push32((uint32_t)(EDX));
  /* 10de10ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de10b1 push eax */
  push32((uint32_t)(EAX));
  /* 10de10b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de10b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10de10b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de10b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10de10bf push eax */
  push32((uint32_t)(EAX));
  /* 10de10c0 call 0x10de1730 */
  push32(0x10de10c5u); f_10de1730();
  /* 10de10c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de10c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de10cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de10ce jne 0x10de10d5 */
  if (!C.zf) goto L_10de10d5;
  /* 10de10d0 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de10d5:;
  /* 10de10d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de10d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de10da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10de10dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de10e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de10e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de10e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de10e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de10ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de10ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de10ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de10f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de10f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de10f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de10fa push ecx */
  push32((uint32_t)(ECX));
  /* 10de10fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de10fe push edx */
  push32((uint32_t)(EDX));
  /* 10de10ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1102 push eax */
  push32((uint32_t)(EAX));
  /* 10de1103 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1106 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1107 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de110a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10de1110 push eax */
  push32((uint32_t)(EAX));
  /* 10de1111 call 0x10de1730 */
  push32(0x10de1116u); f_10de1730();
  /* 10de1116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de1119:;
  /* 10de1119 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de111e:;
  /* 10de111e mov ecx, dword ptr [0x10dff908] */
  ECX = (r32((uint32_t)(0x10dff908)));
  /* 10de1124 mov dword ptr [0x10dff918], ecx */
  w32((uint32_t)(0x10dff918), (ECX));
  /* 10de112a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de112d push edx */
  push32((uint32_t)(EDX));
  /* 10de112e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1131 push eax */
  push32((uint32_t)(EAX));
  /* 10de1132 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1134 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1137 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10de113a push edx */
  push32((uint32_t)(EDX));
  /* 10de113b call 0x10de15d0 */
  push32(0x10de1140u); f_10de15d0();
  /* 10de1140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1143 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de1148:;
  /* 10de1148 mov eax, dword ptr [0x10dff908] */
  EAX = (r32((uint32_t)(0x10dff908)));
  /* 10de114d mov dword ptr [0x10dff918], eax */
  w32((uint32_t)(0x10dff918), (EAX));
  /* 10de1152 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1155 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1156 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1159 push edx */
  push32((uint32_t)(EDX));
  /* 10de115a push 2 */
  push32((uint32_t)(0x2u));
  /* 10de115c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de115f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10de1162 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1163 call 0x10de15d0 */
  push32(0x10de1168u); f_10de15d0();
  /* 10de1168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de116b jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de1170:;
  /* 10de1170 mov edx, dword ptr [0x10dff908] */
  EDX = (r32((uint32_t)(0x10dff908)));
  /* 10de1176 mov dword ptr [0x10dff918], edx */
  w32((uint32_t)(0x10dff918), (EDX));
  /* 10de117c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de117f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10de1182 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1183 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10de1188 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de118a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de118d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1191 jne 0x10de119a */
  if (!C.zf) goto L_10de119a;
  /* 10de1193 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10de119a:;
  /* 10de119a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de119d push edx */
  push32((uint32_t)(EDX));
  /* 10de119e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de11a1 push eax */
  push32((uint32_t)(EAX));
  /* 10de11a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de11a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de11a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10de11a8 call 0x10de15d0 */
  push32(0x10de11adu); f_10de15d0();
  /* 10de11ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de11b0 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de11b5:;
  /* 10de11b5 mov edx, dword ptr [0x10dff908] */
  EDX = (r32((uint32_t)(0x10dff908)));
  /* 10de11bb mov dword ptr [0x10dff918], edx */
  w32((uint32_t)(0x10dff918), (EDX));
  /* 10de11c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de11c4 push eax */
  push32((uint32_t)(EAX));
  /* 10de11c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de11c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10de11c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10de11cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de11ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10de11d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de11d4 push eax */
  push32((uint32_t)(EAX));
  /* 10de11d5 call 0x10de15d0 */
  push32(0x10de11dau); f_10de15d0();
  /* 10de11da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de11dd jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de11e2:;
  /* 10de11e2 mov ecx, dword ptr [0x10dff908] */
  ECX = (r32((uint32_t)(0x10dff908)));
  /* 10de11e8 mov dword ptr [0x10dff918], ecx */
  w32((uint32_t)(0x10dff918), (ECX));
  /* 10de11ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de11f1 push edx */
  push32((uint32_t)(EDX));
  /* 10de11f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de11f5 push eax */
  push32((uint32_t)(EAX));
  /* 10de11f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de11f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de11fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10de11fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1201 push edx */
  push32((uint32_t)(EDX));
  /* 10de1202 call 0x10de15d0 */
  push32(0x10de1207u); f_10de15d0();
  /* 10de1207 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de120a jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de120f:;
  /* 10de120f mov eax, dword ptr [0x10dff908] */
  EAX = (r32((uint32_t)(0x10dff908)));
  /* 10de1214 mov dword ptr [0x10dff918], eax */
  w32((uint32_t)(0x10dff918), (EAX));
  /* 10de1219 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de121c push ecx */
  push32((uint32_t)(ECX));
  /* 10de121d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1220 push edx */
  push32((uint32_t)(EDX));
  /* 10de1221 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1226 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10de1229 push ecx */
  push32((uint32_t)(ECX));
  /* 10de122a call 0x10de15d0 */
  push32(0x10de122fu); f_10de15d0();
  /* 10de122f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1232 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de1237:;
  /* 10de1237 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de123a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de123e jg 0x10de125c */
  if ((!C.zf&&C.sf==C.of)) goto L_10de125c;
  /* 10de1240 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1243 push eax */
  push32((uint32_t)(EAX));
  /* 10de1244 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1247 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1248 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de124b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10de1251 push eax */
  push32((uint32_t)(EAX));
  /* 10de1252 call 0x10de1580 */
  push32(0x10de1257u); f_10de1580();
  /* 10de1257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de125a jmp 0x10de1276 */
  goto L_10de1276;
L_10de125c:;
  /* 10de125c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de125f push ecx */
  push32((uint32_t)(ECX));
  /* 10de1260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1263 push edx */
  push32((uint32_t)(EDX));
  /* 10de1264 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1267 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10de126d push ecx */
  push32((uint32_t)(ECX));
  /* 10de126e call 0x10de1580 */
  push32(0x10de1273u); f_10de1580();
  /* 10de1273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de1276:;
  /* 10de1276 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de127b:;
  /* 10de127b mov edx, dword ptr [0x10dff908] */
  EDX = (r32((uint32_t)(0x10dff908)));
  /* 10de1281 mov dword ptr [0x10dff918], edx */
  w32((uint32_t)(0x10dff918), (EDX));
  /* 10de1287 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de128a push eax */
  push32((uint32_t)(EAX));
  /* 10de128b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de128e push ecx */
  push32((uint32_t)(ECX));
  /* 10de128f push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1291 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1294 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de1296 push eax */
  push32((uint32_t)(EAX));
  /* 10de1297 call 0x10de15d0 */
  push32(0x10de129cu); f_10de15d0();
  /* 10de129c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de129f jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de12a4:;
  /* 10de12a4 mov ecx, dword ptr [0x10dff908] */
  ECX = (r32((uint32_t)(0x10dff908)));
  /* 10de12aa mov dword ptr [0x10dff918], ecx */
  w32((uint32_t)(0x10dff918), (ECX));
  /* 10de12b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de12b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10de12b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de12b9 jmp 0x10de130d */
  goto L_10de130d;
L_10de12bb:;
  /* 10de12bb mov ecx, dword ptr [0x10dff908] */
  ECX = (r32((uint32_t)(0x10dff908)));
  /* 10de12c1 mov dword ptr [0x10dff918], ecx */
  w32((uint32_t)(0x10dff918), (ECX));
  /* 10de12c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de12ca push edx */
  push32((uint32_t)(EDX));
  /* 10de12cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de12ce push eax */
  push32((uint32_t)(EAX));
  /* 10de12cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10de12d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de12d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10de12d7 push edx */
  push32((uint32_t)(EDX));
  /* 10de12d8 call 0x10de15d0 */
  push32(0x10de12ddu); f_10de15d0();
  /* 10de12dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de12e0 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de12e5:;
  /* 10de12e5 mov eax, dword ptr [0x10dff908] */
  EAX = (r32((uint32_t)(0x10dff908)));
  /* 10de12ea mov dword ptr [0x10dff918], eax */
  w32((uint32_t)(0x10dff918), (EAX));
  /* 10de12ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de12f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de12f6 jne 0x10de1301 */
  if (!C.zf) goto L_10de1301;
  /* 10de12f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10de12ff jmp 0x10de130d */
  goto L_10de130d;
L_10de1301:;
  /* 10de1301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1304 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10de1307 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de130a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10de130d:;
  /* 10de130d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1310 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10de1313 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1316 jge 0x10de1321 */
  if ((C.sf==C.of)) goto L_10de1321;
  /* 10de1318 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de131f jmp 0x10de134e */
  goto L_10de134e;
L_10de1321:;
  /* 10de1321 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1324 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10de1327 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1328 mov ecx, 7 */
  ECX = (0x7u);
  /* 10de132d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de132f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de1332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1335 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10de1338 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1339 mov ecx, 7 */
  ECX = (0x7u);
  /* 10de133e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de1340 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1343 jl 0x10de134e */
  if ((C.sf!=C.of)) goto L_10de134e;
  /* 10de1345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de134b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10de134e:;
  /* 10de134e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1351 push eax */
  push32((uint32_t)(EAX));
  /* 10de1352 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1355 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1356 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1358 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de135b push edx */
  push32((uint32_t)(EDX));
  /* 10de135c call 0x10de15d0 */
  push32(0x10de1361u); f_10de15d0();
  /* 10de1361 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1364 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de1369:;
  /* 10de1369 cmp dword ptr [0x10dff908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1370 je 0x10de13a0 */
  if (C.zf) goto L_10de13a0;
  /* 10de1372 mov dword ptr [0x10dff908], 0 */
  w32((uint32_t)(0x10dff908), (0x0u));
  /* 10de137c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de137f push eax */
  push32((uint32_t)(EAX));
  /* 10de1380 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1383 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1384 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1387 push edx */
  push32((uint32_t)(EDX));
  /* 10de1388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de138b push eax */
  push32((uint32_t)(EAX));
  /* 10de138c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de138f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10de1395 push edx */
  push32((uint32_t)(EDX));
  /* 10de1396 call 0x10de1730 */
  push32(0x10de139bu); f_10de1730();
  /* 10de139b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de139e jmp 0x10de13c2 */
  goto L_10de13c2;
L_10de13a0:;
  /* 10de13a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de13a3 push eax */
  push32((uint32_t)(EAX));
  /* 10de13a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de13a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10de13a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de13ab push edx */
  push32((uint32_t)(EDX));
  /* 10de13ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de13af push eax */
  push32((uint32_t)(EAX));
  /* 10de13b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de13b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10de13b9 push edx */
  push32((uint32_t)(EDX));
  /* 10de13ba call 0x10de1730 */
  push32(0x10de13bfu); f_10de1730();
  /* 10de13bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de13c2:;
  /* 10de13c2 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de13c7:;
  /* 10de13c7 mov dword ptr [0x10dff908], 0 */
  w32((uint32_t)(0x10dff908), (0x0u));
  /* 10de13d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de13d4 push eax */
  push32((uint32_t)(EAX));
  /* 10de13d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de13d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10de13d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de13dc push edx */
  push32((uint32_t)(EDX));
  /* 10de13dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de13e0 push eax */
  push32((uint32_t)(EAX));
  /* 10de13e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de13e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10de13ea push edx */
  push32((uint32_t)(EDX));
  /* 10de13eb call 0x10de1730 */
  push32(0x10de13f0u); f_10de1730();
  /* 10de13f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de13f3 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de13f8:;
  /* 10de13f8 mov eax, dword ptr [0x10dff908] */
  EAX = (r32((uint32_t)(0x10dff908)));
  /* 10de13fd mov dword ptr [0x10dff918], eax */
  w32((uint32_t)(0x10dff918), (EAX));
  /* 10de1402 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1405 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10de1408 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1409 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10de140e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de1410 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de1413 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1416 push edx */
  push32((uint32_t)(EDX));
  /* 10de1417 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de141a push eax */
  push32((uint32_t)(EAX));
  /* 10de141b push 2 */
  push32((uint32_t)(0x2u));
  /* 10de141d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1420 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1421 call 0x10de15d0 */
  push32(0x10de1426u); f_10de15d0();
  /* 10de1426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1429 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de142e:;
  /* 10de142e mov edx, dword ptr [0x10dff908] */
  EDX = (r32((uint32_t)(0x10dff908)));
  /* 10de1434 mov dword ptr [0x10dff918], edx */
  w32((uint32_t)(0x10dff918), (EDX));
  /* 10de143a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de143d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10de1440 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1441 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10de1446 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de1448 mov ecx, eax */
  ECX = (EAX);
  /* 10de144a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de144d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de1450 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1453 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10de1456 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1457 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10de145c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de145e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1460 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de1463 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1466 push eax */
  push32((uint32_t)(EAX));
  /* 10de1467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de146a push ecx */
  push32((uint32_t)(ECX));
  /* 10de146b push 4 */
  push32((uint32_t)(0x4u));
  /* 10de146d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1470 push edx */
  push32((uint32_t)(EDX));
  /* 10de1471 call 0x10de15d0 */
  push32(0x10de1476u); f_10de15d0();
  /* 10de1476 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1479 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de147b:;
  /* 10de147b call 0x10de2590 */
  push32(0x10de1480u); f_10de2590();
  /* 10de1480 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1483 push eax */
  push32((uint32_t)(EAX));
  /* 10de1484 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1487 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1488 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de148b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de148d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1491 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10de1494 mov ecx, dword ptr [eax*4 + 0x10dfee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfee1c)));
  /* 10de149b push ecx */
  push32((uint32_t)(ECX));
  /* 10de149c call 0x10de1580 */
  push32(0x10de14a1u); f_10de1580();
  /* 10de14a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de14a4 jmp 0x10de14c8 */
  goto L_10de14c8;
L_10de14a6:;
  /* 10de14a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de14a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de14ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10de14ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de14b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de14b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de14b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de14b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de14bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de14be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de14c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de14c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de14c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10de14c8:;
  /* 10de14c8 pop esi */
  ESI = (pop32());
  /* 10de14c9 mov esp, ebp */
  ESP = (EBP);
  /* 10de14cb pop ebp */
  EBP = (pop32());
  /* 10de14cc ret  */
  ESPCHK(0x10de0f60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10de1580 (72 bytes, 30 insns) */
void f_10de1580(void) {
  FTRACE(0x10de1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de1580 push ebp */
  push32((uint32_t)(EBP));
  /* 10de1581 mov ebp, esp */
  EBP = (ESP);
L_10de1583:;
  /* 10de1583 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1586 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1589 je 0x10de15c6 */
  if (C.zf) goto L_10de15c6;
  /* 10de158b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de158e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de1591 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de1593 je 0x10de15c6 */
  if (C.zf) goto L_10de15c6;
  /* 10de1595 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1598 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de159a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de159d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de159f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10de15a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de15a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de15a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de15a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de15ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de15ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de15b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de15b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10de15b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de15ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de15bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de15bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de15c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10de15c4 jmp 0x10de1583 */
  goto L_10de1583;
L_10de15c6:;
  /* 10de15c6 pop ebp */
  EBP = (pop32());
  /* 10de15c7 ret  */
  ESPCHK(0x10de1580u, _esp0);
  ESP += 4; return;
}

/* FUN_100115d0 @ 0x10de15d0 (173 bytes, 64 insns) */
void f_10de15d0(void) {
  FTRACE(0x10de15d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de15d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de15d1 mov ebp, esp */
  EBP = (ESP);
  /* 10de15d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de15d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de15db cmp dword ptr [0x10dff918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de15e2 je 0x10de15fa */
  if (C.zf) goto L_10de15fa;
  /* 10de15e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de15e7 push eax */
  push32((uint32_t)(EAX));
  /* 10de15e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de15eb push ecx */
  push32((uint32_t)(ECX));
  /* 10de15ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de15ef push edx */
  push32((uint32_t)(EDX));
  /* 10de15f0 call 0x10de1680 */
  push32(0x10de15f5u); f_10de1680();
  /* 10de15f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de15f8 jmp 0x10de1679 */
  goto L_10de1679;
L_10de15fa:;
  /* 10de15fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de15fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1600 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1602 jae 0x10de1670 */
  if (!C.cf) goto L_10de1670;
  /* 10de1604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1607 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de160a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10de160d jmp 0x10de1618 */
  goto L_10de1618;
L_10de160f:;
  /* 10de160f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1612 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1615 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10de1618:;
  /* 10de1618 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de161b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de161e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de1620 je 0x10de1654 */
  if (C.zf) goto L_10de1654;
  /* 10de1622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1625 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de1626 mov ecx, 0xa */
  ECX = (0xau);
  /* 10de162b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de162d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1630 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1633 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1635 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1638 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10de163b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de163e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de163f mov ecx, 0xa */
  ECX = (0xau);
  /* 10de1644 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de1646 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de1649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de164c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de164f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de1652 jmp 0x10de160f */
  goto L_10de160f;
L_10de1654:;
  /* 10de1654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1657 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1659 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de165c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de165f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10de1661 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1664 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1666 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1669 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de166c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10de166e jmp 0x10de1679 */
  goto L_10de1679;
L_10de1670:;
  /* 10de1670 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1673 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10de1679:;
  /* 10de1679 mov esp, ebp */
  ESP = (EBP);
  /* 10de167b pop ebp */
  EBP = (pop32());
  /* 10de167c ret  */
  ESPCHK(0x10de15d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10de1680 (172 bytes, 65 insns) */
void f_10de1680(void) {
  FTRACE(0x10de1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de1680 push ebp */
  push32((uint32_t)(EBP));
  /* 10de1681 mov ebp, esp */
  EBP = (ESP);
  /* 10de1683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1686 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1689 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de168b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de168e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1691 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1694 jbe 0x10de16db */
  if ((C.cf||C.zf)) goto L_10de16db;
L_10de1696:;
  /* 10de1696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1699 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de169a mov ecx, 0xa */
  ECX = (0xau);
  /* 10de169f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de16a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de16a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de16a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10de16a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de16ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de16af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de16b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de16b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de16b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de16ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de16bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10de16bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de16c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de16c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10de16c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de16ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de16cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de16d1 jle 0x10de16db */
  if ((C.zf||C.sf!=C.of)) goto L_10de16db;
  /* 10de16d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de16d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de16d9 ja 0x10de1696 */
  if ((!C.cf&&!C.zf)) goto L_10de1696;
L_10de16db:;
  /* 10de16db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de16de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de16e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de16e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de16e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de16e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10de16eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de16ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de16f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10de16f4:;
  /* 10de16f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de16f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de16f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10de16fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de16ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de1702 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de1704 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10de1706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de170c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de170f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de1712 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10de1715 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10de1717 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de171a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de171d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de1720 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de1723 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1726 jb 0x10de16f4 */
  if (C.cf) goto L_10de16f4;
  /* 10de1728 mov esp, ebp */
  ESP = (EBP);
  /* 10de172a pop ebp */
  EBP = (pop32());
  /* 10de172b ret  */
  ESPCHK(0x10de1680u, _esp0);
  ESP += 4; return;
}

/* FUN_10011730 @ 0x10de1730 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10de1730(void) {
  FTRACE(0x10de1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de1730 push ebp */
  push32((uint32_t)(EBP));
  /* 10de1731 mov ebp, esp */
  EBP = (ESP);
  /* 10de1733 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10de1736:;
  /* 10de1736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1739 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de173c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de173e je 0x10de1bac */
  if (C.zf) goto L_10de1bac;
  /* 10de1744 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1747 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de174a je 0x10de1bac */
  if (C.zf) goto L_10de1bac;
  /* 10de1750 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10de1754 mov dword ptr [0x10dff918], 0 */
  w32((uint32_t)(0x10dff918), (0x0u));
  /* 10de175e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10de1765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de176b jmp 0x10de1776 */
  goto L_10de1776;
L_10de176d:;
  /* 10de176d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1770 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10de1776:;
  /* 10de1776 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1779 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de177c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de177f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de1782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1788 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de178b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de178d jne 0x10de1791 */
  if (!C.zf) goto L_10de1791;
  /* 10de178f jmp 0x10de176d */
  goto L_10de176d;
L_10de1791:;
  /* 10de1791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1794 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1797 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de179a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de179d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de17a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de17a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de17a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de17a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10de17ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de17b0 ja 0x10de1b00 */
  if ((!C.cf&&!C.zf)) goto L_10de1b00;
  /* 10de17b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de17b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de17bb mov al, byte ptr [ecx + 0x10de1bdc] */
  AL = (r8((uint32_t)(ECX + 0x10de1bdc)));
  /* 10de17c1 jmp dword ptr [eax*4 + 0x10de1bb0] */
  switch (EAX) {
    case 0: goto L_10de1a1f;
    case 1: goto L_10de1903;
    case 2: goto L_10de188e;
    case 3: goto L_10de17c8;
    case 4: goto L_10de1806;
    case 5: goto L_10de1867;
    case 6: goto L_10de18b5;
    case 7: goto L_10de18dc;
    case 8: goto L_10de194a;
    case 9: goto L_10de1844;
    case 10: goto L_10de1b00;
    default: x86_unimpl("switch@0x10de17c1 out of table"); return;
  }
L_10de17c8:;
  /* 10de17c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de17cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10de17ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de17d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de17d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10de17d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de17db ja 0x10de1801 */
  if ((!C.cf&&!C.zf)) goto L_10de1801;
  /* 10de17dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de17e0 jmp dword ptr [ecx*4 + 0x10de1c2f] */
  switch (ECX) {
    case 0: goto L_10de17e7;
    case 1: goto L_10de17f1;
    case 2: goto L_10de17f7;
    case 3: goto L_10de17fd;
    case 4: goto L_10de1825;
    case 5: goto L_10de182f;
    case 6: goto L_10de1835;
    case 7: goto L_10de183b;
    default: x86_unimpl("switch@0x10de17e0 out of table"); return;
  }
L_10de17e7:;
  /* 10de17e7 mov dword ptr [0x10dff918], 1 */
  w32((uint32_t)(0x10dff918), (0x1u));
L_10de17f1:;
  /* 10de17f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10de17f5 jmp 0x10de1801 */
  goto L_10de1801;
L_10de17f7:;
  /* 10de17f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10de17fb jmp 0x10de1801 */
  goto L_10de1801;
L_10de17fd:;
  /* 10de17fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10de1801:;
  /* 10de1801 jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de1806:;
  /* 10de1806 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1809 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10de180c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de180f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1812 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10de1815 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1819 ja 0x10de183f */
  if ((!C.cf&&!C.zf)) goto L_10de183f;
  /* 10de181b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de181e jmp dword ptr [ecx*4 + 0x10de1c3f] */
  switch (ECX) {
    case 0: goto L_10de1825;
    case 1: goto L_10de182f;
    case 2: goto L_10de1835;
    case 3: goto L_10de183b;
    default: x86_unimpl("switch@0x10de181e out of table"); return;
  }
L_10de1825:;
  /* 10de1825 mov dword ptr [0x10dff918], 1 */
  w32((uint32_t)(0x10dff918), (0x1u));
L_10de182f:;
  /* 10de182f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10de1833 jmp 0x10de183f */
  goto L_10de183f;
L_10de1835:;
  /* 10de1835 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10de1839 jmp 0x10de183f */
  goto L_10de183f;
L_10de183b:;
  /* 10de183b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10de183f:;
  /* 10de183f jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de1844:;
  /* 10de1844 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1847 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10de184a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de184e je 0x10de1858 */
  if (C.zf) goto L_10de1858;
  /* 10de1850 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1854 je 0x10de185e */
  if (C.zf) goto L_10de185e;
  /* 10de1856 jmp 0x10de1862 */
  goto L_10de1862;
L_10de1858:;
  /* 10de1858 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10de185c jmp 0x10de1862 */
  goto L_10de1862;
L_10de185e:;
  /* 10de185e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10de1862:;
  /* 10de1862 jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de1867:;
  /* 10de1867 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de186a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10de186d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1871 je 0x10de187b */
  if (C.zf) goto L_10de187b;
  /* 10de1873 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1877 je 0x10de1885 */
  if (C.zf) goto L_10de1885;
  /* 10de1879 jmp 0x10de1889 */
  goto L_10de1889;
L_10de187b:;
  /* 10de187b mov dword ptr [0x10dff918], 1 */
  w32((uint32_t)(0x10dff918), (0x1u));
L_10de1885:;
  /* 10de1885 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10de1889:;
  /* 10de1889 jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de188e:;
  /* 10de188e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1891 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10de1894 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1898 je 0x10de18a2 */
  if (C.zf) goto L_10de18a2;
  /* 10de189a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de189e je 0x10de18ac */
  if (C.zf) goto L_10de18ac;
  /* 10de18a0 jmp 0x10de18b0 */
  goto L_10de18b0;
L_10de18a2:;
  /* 10de18a2 mov dword ptr [0x10dff918], 1 */
  w32((uint32_t)(0x10dff918), (0x1u));
L_10de18ac:;
  /* 10de18ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10de18b0:;
  /* 10de18b0 jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de18b5:;
  /* 10de18b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de18b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10de18bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de18bf je 0x10de18c9 */
  if (C.zf) goto L_10de18c9;
  /* 10de18c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de18c5 je 0x10de18d3 */
  if (C.zf) goto L_10de18d3;
  /* 10de18c7 jmp 0x10de18d7 */
  goto L_10de18d7;
L_10de18c9:;
  /* 10de18c9 mov dword ptr [0x10dff918], 1 */
  w32((uint32_t)(0x10dff918), (0x1u));
L_10de18d3:;
  /* 10de18d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10de18d7:;
  /* 10de18d7 jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de18dc:;
  /* 10de18dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de18df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10de18e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de18e6 je 0x10de18f0 */
  if (C.zf) goto L_10de18f0;
  /* 10de18e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de18ec je 0x10de18fa */
  if (C.zf) goto L_10de18fa;
  /* 10de18ee jmp 0x10de18fe */
  goto L_10de18fe;
L_10de18f0:;
  /* 10de18f0 mov dword ptr [0x10dff918], 1 */
  w32((uint32_t)(0x10dff918), (0x1u));
L_10de18fa:;
  /* 10de18fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10de18fe:;
  /* 10de18fe jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de1903:;
  /* 10de1903 push 0x10dfb9d4 */
  push32((uint32_t)(0x10dfb9d4u));
  /* 10de1908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de190b push ecx */
  push32((uint32_t)(ECX));
  /* 10de190c call 0x10de2160 */
  push32(0x10de1911u); f_10de2160();
  /* 10de1911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de1916 jne 0x10de1923 */
  if (!C.zf) goto L_10de1923;
  /* 10de1918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de191b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de191e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de1921 jmp 0x10de1941 */
  goto L_10de1941;
L_10de1923:;
  /* 10de1923 push 0x10dfb9d0 */
  push32((uint32_t)(0x10dfb9d0u));
  /* 10de1928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de192b push eax */
  push32((uint32_t)(EAX));
  /* 10de192c call 0x10de2160 */
  push32(0x10de1931u); f_10de2160();
  /* 10de1931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de1936 jne 0x10de1941 */
  if (!C.zf) goto L_10de1941;
  /* 10de1938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de193b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de193e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10de1941:;
  /* 10de1941 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10de1945 jmp 0x10de1b00 */
  goto L_10de1b00;
L_10de194a:;
  /* 10de194a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de194d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1951 jg 0x10de1961 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de1961;
  /* 10de1953 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1956 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10de195c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10de195f jmp 0x10de196d */
  goto L_10de196d;
L_10de1961:;
  /* 10de1961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1964 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10de196a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10de196d:;
  /* 10de196d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1971 jle 0x10de1a14 */
  if ((C.zf||C.sf!=C.of)) goto L_10de1a14;
  /* 10de1977 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de197a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de197d jbe 0x10de1a14 */
  if ((C.cf||C.zf)) goto L_10de1a14;
  /* 10de1983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de1986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1988 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de198a mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de1990 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de1992 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de1996 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10de199c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de199e je 0x10de19d7 */
  if (C.zf) goto L_10de19d7;
  /* 10de19a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de19a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de19a6 jbe 0x10de19d7 */
  if ((C.cf||C.zf)) goto L_10de19d7;
  /* 10de19a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de19ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de19ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de19b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de19b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10de19b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de19b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de19b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de19bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de19bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10de19c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de19c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de19c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10de19ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de19cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de19cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de19d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de19d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10de19d7:;
  /* 10de19d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de19da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de19dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de19df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de19e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10de19e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de19e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de19e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de19eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de19ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de19f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de19f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de19f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10de19f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de19fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de19fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1a01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1a04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10de1a06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1a09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1a0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10de1a0f jmp 0x10de196d */
  goto L_10de196d;
L_10de1a14:;
  /* 10de1a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1a17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de1a1a jmp 0x10de1736 */
  goto L_10de1736;
L_10de1a1f:;
  /* 10de1a1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1a22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10de1a25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de1a27 je 0x10de1af2 */
  if (C.zf) goto L_10de1af2;
  /* 10de1a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1a30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1a33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10de1a36:;
  /* 10de1a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1a39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de1a3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de1a3e je 0x10de1af0 */
  if (C.zf) goto L_10de1af0;
  /* 10de1a44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1a47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1a4a je 0x10de1af0 */
  if (C.zf) goto L_10de1af0;
  /* 10de1a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1a53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de1a56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1a59 jne 0x10de1a69 */
  if (!C.zf) goto L_10de1a69;
  /* 10de1a5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1a5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1a61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10de1a64 jmp 0x10de1af0 */
  goto L_10de1af0;
L_10de1a69:;
  /* 10de1a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1a6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de1a6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de1a70 mov edx, dword ptr [0x10dfdc98] */
  EDX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de1a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1a78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10de1a7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10de1a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de1a83 je 0x10de1abc */
  if (C.zf) goto L_10de1abc;
  /* 10de1a85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1a88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1a8b jbe 0x10de1abc */
  if ((C.cf||C.zf)) goto L_10de1abc;
  /* 10de1a8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1a90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de1a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1a95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de1a97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10de1a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1a9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1a9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1aa1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1aa4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10de1aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1aac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de1aaf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1ab2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de1ab4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1ab7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1aba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10de1abc:;
  /* 10de1abc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1abf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de1ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1ac4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de1ac6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10de1ac8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1acb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de1acd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1ad0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1ad3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10de1ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1ad8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1adb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10de1ade mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1ae1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1ae3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1ae6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1ae9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10de1aeb jmp 0x10de1a36 */
  goto L_10de1a36;
L_10de1af0:;
  /* 10de1af0 jmp 0x10de1afb */
  goto L_10de1afb;
L_10de1af2:;
  /* 10de1af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1af5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1af8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10de1afb:;
  /* 10de1afb jmp 0x10de1736 */
  goto L_10de1736;
L_10de1b00:;
  /* 10de1b00 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10de1b04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de1b06 je 0x10de1b2c */
  if (C.zf) goto L_10de1b2c;
  /* 10de1b08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1b0b push edx */
  push32((uint32_t)(EDX));
  /* 10de1b0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1b0f push eax */
  push32((uint32_t)(EAX));
  /* 10de1b10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1b14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1b17 push edx */
  push32((uint32_t)(EDX));
  /* 10de1b18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10de1b1b push eax */
  push32((uint32_t)(EAX));
  /* 10de1b1c call 0x10de0f60 */
  push32(0x10de1b21u); f_10de0f60();
  /* 10de1b21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1b24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de1b27 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10de1b2a jmp 0x10de1ba7 */
  goto L_10de1ba7;
L_10de1b2c:;
  /* 10de1b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1b31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de1b33 mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de1b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de1b3b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de1b3f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10de1b45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de1b47 je 0x10de1b78 */
  if (C.zf) goto L_10de1b78;
  /* 10de1b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1b4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1b51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de1b53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10de1b55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de1b5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1b5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10de1b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1b68 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10de1b6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1b6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de1b70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1b73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1b76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10de1b78:;
  /* 10de1b78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de1b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1b80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de1b82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10de1b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1b89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1b8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1b8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10de1b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1b94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1b97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de1b9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1b9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de1b9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1ba2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1ba5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10de1ba7:;
  /* 10de1ba7 jmp 0x10de1736 */
  goto L_10de1736;
L_10de1bac:;
  /* 10de1bac mov esp, ebp */
  ESP = (EBP);
  /* 10de1bae pop ebp */
  EBP = (pop32());
  /* 10de1baf ret  */
  ESPCHK(0x10de1730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x10de1c50 (650 bytes, 178 insns) */
void f_10de1c50(void) {
  FTRACE(0x10de1c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de1c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10de1c51 mov ebp, esp */
  EBP = (ESP);
  /* 10de1c53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de1c59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1c5d jne 0x10de1db9 */
  if (!C.zf) goto L_10de1db9;
  /* 10de1c63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1c66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10de1c6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10de1c72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de1c75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de1c7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10de1c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1c88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10de1c8e push edx */
  push32((uint32_t)(EDX));
  /* 10de1c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1c92 push eax */
  push32((uint32_t)(EAX));
  /* 10de1c93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1c96 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1c97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1c9a push edx */
  push32((uint32_t)(EDX));
  /* 10de1c9b call 0x10de3070 */
  push32(0x10de1ca0u); f_10de3070();
  /* 10de1ca0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1ca3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de1ca6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1caa jne 0x10de1d3f */
  if (!C.zf) goto L_10de1d3f;
  /* 10de1cb0 call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10de1cb6u);
  /* 10de1cb6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1cb9 je 0x10de1cc0 */
  if (C.zf) goto L_10de1cc0;
  /* 10de1cbb jmp 0x10de1d9d */
  goto L_10de1d9d;
L_10de1cc0:;
  /* 10de1cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10de1cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10de1cce call 0x10de3070 */
  push32(0x10de1cd3u); f_10de3070();
  /* 10de1cd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1cd6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10de1cdc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1ce3 jne 0x10de1cea */
  if (!C.zf) goto L_10de1cea;
  /* 10de1ce5 jmp 0x10de1d9d */
  goto L_10de1d9d;
L_10de1cea:;
  /* 10de1cea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10de1cec push 0x10dfb9dc */
  push32((uint32_t)(0x10dfb9dcu));
  /* 10de1cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1cf3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10de1cf9 push edx */
  push32((uint32_t)(EDX));
  /* 10de1cfa call 0x10dd3a90 */
  push32(0x10de1cffu); f_10dd3a90();
  /* 10de1cff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1d02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de1d05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1d09 jne 0x10de1d10 */
  if (!C.zf) goto L_10de1d10;
  /* 10de1d0b jmp 0x10de1d9d */
  goto L_10de1d9d;
L_10de1d10:;
  /* 10de1d10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10de1d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1d19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10de1d1f push eax */
  push32((uint32_t)(EAX));
  /* 10de1d20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1d24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1d27 push edx */
  push32((uint32_t)(EDX));
  /* 10de1d28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1d2b push eax */
  push32((uint32_t)(EAX));
  /* 10de1d2c call 0x10de3070 */
  push32(0x10de1d31u); f_10de3070();
  /* 10de1d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1d34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de1d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1d3b jne 0x10de1d3f */
  if (!C.zf) goto L_10de1d3f;
  /* 10de1d3d jmp 0x10de1d9d */
  goto L_10de1d9d;
L_10de1d3f:;
  /* 10de1d3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10de1d41 push 0x10dfb9dc */
  push32((uint32_t)(0x10dfb9dcu));
  /* 10de1d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1d48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de1d4b push ecx */
  push32((uint32_t)(ECX));
  /* 10de1d4c call 0x10dd3a90 */
  push32(0x10de1d51u); f_10dd3a90();
  /* 10de1d51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1d54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10de1d5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10de1d5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10de1d62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1d65 jne 0x10de1d69 */
  if (!C.zf) goto L_10de1d69;
  /* 10de1d67 jmp 0x10de1d9d */
  goto L_10de1d9d;
L_10de1d69:;
  /* 10de1d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de1d6c push ecx */
  push32((uint32_t)(ECX));
  /* 10de1d6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1d70 push edx */
  push32((uint32_t)(EDX));
  /* 10de1d71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10de1d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de1d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1d7a call 0x10dd72b0 */
  push32(0x10de1d7fu); f_10dd72b0();
  /* 10de1d7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1d86 je 0x10de1d96 */
  if (C.zf) goto L_10de1d96;
  /* 10de1d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1d8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1d8d push edx */
  push32((uint32_t)(EDX));
  /* 10de1d8e call 0x10dd4520 */
  push32(0x10de1d93u); f_10dd4520();
  /* 10de1d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de1d96:;
  /* 10de1d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1d98 jmp 0x10de1ed6 */
  goto L_10de1ed6;
L_10de1d9d:;
  /* 10de1d9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1da1 je 0x10de1db1 */
  if (C.zf) goto L_10de1db1;
  /* 10de1da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de1da5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de1da8 push eax */
  push32((uint32_t)(EAX));
  /* 10de1da9 call 0x10dd4520 */
  push32(0x10de1daeu); f_10dd4520();
  /* 10de1dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de1db1:;
  /* 10de1db1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de1db4 jmp 0x10de1ed6 */
  goto L_10de1ed6;
L_10de1db9:;
  /* 10de1db9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1dbd jne 0x10de1ed3 */
  if (!C.zf) goto L_10de1ed3;
  /* 10de1dc3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10de1dcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1dd0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10de1dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1dd8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10de1dde push edx */
  push32((uint32_t)(EDX));
  /* 10de1ddf push 0x10dff830 */
  push32((uint32_t)(0x10dff830u));
  /* 10de1de4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1de7 push eax */
  push32((uint32_t)(EAX));
  /* 10de1de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1deb push ecx */
  push32((uint32_t)(ECX));
  /* 10de1dec call 0x10de2ed0 */
  push32(0x10de1df1u); f_10de2ed0();
  /* 10de1df1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de1df6 jne 0x10de1e00 */
  if (!C.zf) goto L_10de1e00;
  /* 10de1df8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de1dfb jmp 0x10de1ed6 */
  goto L_10de1ed6;
L_10de1e00:;
  /* 10de1e00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10de1e06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10de1e09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10de1e13 jmp 0x10de1e24 */
  goto L_10de1e24;
L_10de1e15:;
  /* 10de1e15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10de1e1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1e1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10de1e24:;
  /* 10de1e24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1e2b jge 0x10de1ecf */
  if ((C.sf==C.of)) goto L_10de1ecf;
  /* 10de1e31 cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1e38 jle 0x10de1e6b */
  if ((C.zf||C.sf!=C.of)) goto L_10de1e6b;
  /* 10de1e3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10de1e3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10de1e42 mov dl, byte ptr [ecx*2 + 0x10dff830] */
  DL = (r8((uint32_t)(ECX*2 + 0x10dff830)));
  /* 10de1e49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10de1e4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10de1e55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de1e5a push eax */
  push32((uint32_t)(EAX));
  /* 10de1e5b call 0x10dd9aa0 */
  push32(0x10de1e60u); f_10dd9aa0();
  /* 10de1e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1e63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10de1e69 jmp 0x10de1e9e */
  goto L_10de1e9e;
L_10de1e6b:;
  /* 10de1e6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10de1e71 mov dl, byte ptr [ecx*2 + 0x10dff830] */
  DL = (r8((uint32_t)(ECX*2 + 0x10dff830)));
  /* 10de1e78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10de1e7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10de1e84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de1e89 mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de1e8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de1e91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de1e95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10de1e98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10de1e9e:;
  /* 10de1e9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1ea5 je 0x10de1ec8 */
  if (C.zf) goto L_10de1ec8;
  /* 10de1ea7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10de1ead movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de1eb0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de1eb3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10de1eba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10de1ebe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10de1ec4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10de1ec6 jmp 0x10de1eca */
  goto L_10de1eca;
L_10de1ec8:;
  /* 10de1ec8 jmp 0x10de1ecf */
  goto L_10de1ecf;
L_10de1eca:;
  /* 10de1eca jmp 0x10de1e15 */
  goto L_10de1e15;
L_10de1ecf:;
  /* 10de1ecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1ed1 jmp 0x10de1ed6 */
  goto L_10de1ed6;
L_10de1ed3:;
  /* 10de1ed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10de1ed6:;
  /* 10de1ed6 mov esp, ebp */
  ESP = (EBP);
  /* 10de1ed8 pop ebp */
  EBP = (pop32());
  /* 10de1ed9 ret  */
  ESPCHK(0x10de1c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ee0 @ 0x10de1ee0 (10 bytes, 5 insns) */
void f_10de1ee0(void) {
  FTRACE(0x10de1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de1ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de1ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10de1ee3 mov eax, dword ptr [0x10dfed88] */
  EAX = (r32((uint32_t)(0x10dfed88)));
  /* 10de1ee8 pop ebp */
  EBP = (pop32());
  /* 10de1ee9 ret  */
  ESPCHK(0x10de1ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x10de1ef0 (575 bytes, 196 insns) */
void f_10de1ef0(void) {
  FTRACE(0x10de1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de1ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de1ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10de1ef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de1ef5 push 0x10dfb9e8 */
  push32((uint32_t)(0x10dfb9e8u));
  /* 10de1efa push 0x10ddcb98 */
  push32((uint32_t)(0x10ddcb98u));
  /* 10de1eff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10de1f05 push eax */
  push32((uint32_t)(EAX));
  /* 10de1f06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10de1f0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1f10 push ebx */
  push32((uint32_t)(EBX));
  /* 10de1f11 push esi */
  push32((uint32_t)(ESI));
  /* 10de1f12 push edi */
  push32((uint32_t)(EDI));
  /* 10de1f13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de1f16 cmp dword ptr [0x10dff83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1f1d jne 0x10de1f6e */
  if (!C.zf) goto L_10de1f6e;
  /* 10de1f1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10de1f22 push eax */
  push32((uint32_t)(EAX));
  /* 10de1f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de1f25 push 0x10dfb11c */
  push32((uint32_t)(0x10dfb11cu));
  /* 10de1f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10de1f2c call dword ptr [0x10e022bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022bc))), 0x10de1f32u);
  /* 10de1f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de1f34 je 0x10de1f42 */
  if (C.zf) goto L_10de1f42;
  /* 10de1f36 mov dword ptr [0x10dff83c], 1 */
  w32((uint32_t)(0x10dff83c), (0x1u));
  /* 10de1f40 jmp 0x10de1f6e */
  goto L_10de1f6e;
L_10de1f42:;
  /* 10de1f42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10de1f45 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1f46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de1f48 push 0x10dfb118 */
  push32((uint32_t)(0x10dfb118u));
  /* 10de1f4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10de1f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1f51 call dword ptr [0x10e022c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c0))), 0x10de1f57u);
  /* 10de1f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de1f59 je 0x10de1f67 */
  if (C.zf) goto L_10de1f67;
  /* 10de1f5b mov dword ptr [0x10dff83c], 2 */
  w32((uint32_t)(0x10dff83c), (0x2u));
  /* 10de1f65 jmp 0x10de1f6e */
  goto L_10de1f6e;
L_10de1f67:;
  /* 10de1f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1f69 jmp 0x10de2149 */
  goto L_10de2149;
L_10de1f6e:;
  /* 10de1f6e cmp dword ptr [0x10dff83c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff83c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1f75 jne 0x10de1f92 */
  if (!C.zf) goto L_10de1f92;
  /* 10de1f77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de1f7a push edx */
  push32((uint32_t)(EDX));
  /* 10de1f7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1f7e push eax */
  push32((uint32_t)(EAX));
  /* 10de1f7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1f82 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1f83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de1f86 push edx */
  push32((uint32_t)(EDX));
  /* 10de1f87 call dword ptr [0x10e022bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022bc))), 0x10de1f8du);
  /* 10de1f8d jmp 0x10de2149 */
  goto L_10de2149;
L_10de1f92:;
  /* 10de1f92 cmp dword ptr [0x10dff83c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff83c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1f99 jne 0x10de2147 */
  if (!C.zf) goto L_10de2147;
  /* 10de1f9f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1fa3 jne 0x10de1fad */
  if (!C.zf) goto L_10de1fad;
  /* 10de1fa5 mov eax, dword ptr [0x10dff7b0] */
  EAX = (r32((uint32_t)(0x10dff7b0)));
  /* 10de1faa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10de1fad:;
  /* 10de1fad push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1faf push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de1fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de1fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10de1fb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de1fbc push edx */
  push32((uint32_t)(EDX));
  /* 10de1fbd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10de1fc2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de1fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10de1fc6 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de1fccu);
  /* 10de1fcc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10de1fcf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de1fd3 jne 0x10de1fdc */
  if (!C.zf) goto L_10de1fdc;
  /* 10de1fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de1fd7 jmp 0x10de2149 */
  goto L_10de2149;
L_10de1fdc:;
  /* 10de1fdc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de1fe3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de1fe6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de1fe9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10de1feb call 0x10dd6c30 */
  push32(0x10de1ff0u); f_10dd6c30();
  /* 10de1ff0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10de1ff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de1ff6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10de1ff9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10de1ffc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de1fff push edx */
  push32((uint32_t)(EDX));
  /* 10de2000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2002 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10de2005 push eax */
  push32((uint32_t)(EAX));
  /* 10de2006 call 0x10dd7800 */
  push32(0x10de200bu); f_10dd7800();
  /* 10de200b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de200e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10de2015 jmp 0x10de202e */
  goto L_10de202e;
  /* 10de2017 mov eax, 1 */
  EAX = (0x1u);
  /* 10de201c ret  */
  ESPCHK(0x10de1ef0u, _esp0);
  ESP += 4; return;
  /* 10de201d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10de2020 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10de2027 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10de202e:;
  /* 10de202e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2032 jne 0x10de203b */
  if (!C.zf) goto L_10de203b;
  /* 10de2034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2036 jmp 0x10de2149 */
  goto L_10de2149;
L_10de203b:;
  /* 10de203b push 0 */
  push32((uint32_t)(0x0u));
  /* 10de203d push 0 */
  push32((uint32_t)(0x0u));
  /* 10de203f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de2042 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2043 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10de2046 push edx */
  push32((uint32_t)(EDX));
  /* 10de2047 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de204a push eax */
  push32((uint32_t)(EAX));
  /* 10de204b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de204e push ecx */
  push32((uint32_t)(ECX));
  /* 10de204f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10de2054 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de2057 push edx */
  push32((uint32_t)(EDX));
  /* 10de2058 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de205eu);
  /* 10de205e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de2060 jne 0x10de2069 */
  if (!C.zf) goto L_10de2069;
  /* 10de2062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2064 jmp 0x10de2149 */
  goto L_10de2149;
L_10de2069:;
  /* 10de2069 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10de2070 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de2073 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10de2077 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de207a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10de207c call 0x10dd6c30 */
  push32(0x10de2081u); f_10dd6c30();
  /* 10de2081 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10de2084 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de2087 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10de208a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10de208d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10de2094 jmp 0x10de20ad */
  goto L_10de20ad;
  /* 10de2096 mov eax, 1 */
  EAX = (0x1u);
  /* 10de209b ret  */
  ESPCHK(0x10de1ef0u, _esp0);
  ESP += 4; return;
  /* 10de209c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10de209f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10de20a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10de20ad:;
  /* 10de20ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de20b1 jne 0x10de20ba */
  if (!C.zf) goto L_10de20ba;
  /* 10de20b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de20b5 jmp 0x10de2149 */
  goto L_10de2149;
L_10de20ba:;
  /* 10de20ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de20be jne 0x10de20c9 */
  if (!C.zf) goto L_10de20c9;
  /* 10de20c0 mov edx, dword ptr [0x10dff7a0] */
  EDX = (r32((uint32_t)(0x10dff7a0)));
  /* 10de20c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10de20c9:;
  /* 10de20c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de20cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de20cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10de20d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de20d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de20db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10de20e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de20e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10de20e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de20e9 push edx */
  push32((uint32_t)(EDX));
  /* 10de20ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10de20ed push eax */
  push32((uint32_t)(EAX));
  /* 10de20ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de20f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10de20f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de20f5 push edx */
  push32((uint32_t)(EDX));
  /* 10de20f6 call dword ptr [0x10e022c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c0))), 0x10de20fcu);
  /* 10de20fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10de20ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2102 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de2105 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2107 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10de210c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2112 je 0x10de2128 */
  if (C.zf) goto L_10de2128;
  /* 10de2114 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2117 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de211a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de211c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de2120 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2126 je 0x10de212c */
  if (C.zf) goto L_10de212c;
L_10de2128:;
  /* 10de2128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de212a jmp 0x10de2149 */
  goto L_10de2149;
L_10de212c:;
  /* 10de212c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de212f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10de2131 push eax */
  push32((uint32_t)(EAX));
  /* 10de2132 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de2135 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2136 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2139 push edx */
  push32((uint32_t)(EDX));
  /* 10de213a call 0x10ddb980 */
  push32(0x10de213fu); f_10ddb980();
  /* 10de213f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2142 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de2145 jmp 0x10de2149 */
  goto L_10de2149;
L_10de2147:;
  /* 10de2147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de2149:;
  /* 10de2149 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10de214c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de214f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10de2156 pop edi */
  EDI = (pop32());
  /* 10de2157 pop esi */
  ESI = (pop32());
  /* 10de2158 pop ebx */
  EBX = (pop32());
  /* 10de2159 mov esp, ebp */
  ESP = (EBP);
  /* 10de215b pop ebp */
  EBP = (pop32());
  /* 10de215c ret  */
  ESPCHK(0x10de1ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012160 @ 0x10de2160 (208 bytes, 85 insns) */
void f_10de2160(void) {
  FTRACE(0x10de2160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2160 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2161 mov ebp, esp */
  EBP = (ESP);
  /* 10de2163 push edi */
  push32((uint32_t)(EDI));
  /* 10de2164 push esi */
  push32((uint32_t)(ESI));
  /* 10de2165 push ebx */
  push32((uint32_t)(EBX));
  /* 10de2166 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10de2169 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10de216c lea eax, [0x10dff798] */
  EAX = ((uint32_t)(0x10dff798));
  /* 10de2172 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2176 jne 0x10de21b3 */
  if (!C.zf) goto L_10de21b3;
  /* 10de2178 mov al, 0xff */
  AL = (0xffu);
  /* 10de217a mov edi, edi */
  EDI = (EDI);
L_10de217c:;
  /* 10de217c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10de217e je 0x10de21ae */
  if (C.zf) goto L_10de21ae;
  /* 10de2180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10de2182 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10de2183 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10de2185 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10de2186 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de2188 je 0x10de217c */
  if (C.zf) goto L_10de217c;
  /* 10de218a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10de218c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de218e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10de2190 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10de2193 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10de2195 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10de2197 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10de2199 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10de219b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de219d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10de219f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10de21a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10de21a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10de21a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de21a8 je 0x10de217c */
  if (C.zf) goto L_10de217c;
  /* 10de21aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10de21ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10de21ae:;
  /* 10de21ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10de21b1 jmp 0x10de222b */
  goto L_10de222b;
L_10de21b3:;
  /* 10de21b3 lock inc dword ptr [0x10dff92c] */
  x86_unimpl("lock inc @ 0x10de21b3");
  /* 10de21ba cmp dword ptr [0x10dff91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de21c1 jg 0x10de21c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de21c7;
  /* 10de21c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de21c5 jmp 0x10de21dc */
  goto L_10de21dc;
L_10de21c7:;
  /* 10de21c7 lock dec dword ptr [0x10dff92c] */
  x86_unimpl("lock dec @ 0x10de21c7");
  /* 10de21ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de21d0 call 0x10dd7490 */
  push32(0x10de21d5u); f_10dd7490();
  /* 10de21d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10de21dc:;
  /* 10de21dc mov eax, 0xff */
  EAX = (0xffu);
  /* 10de21e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10de21e3 nop  */
  /* nop */
L_10de21e4:;
  /* 10de21e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10de21e6 je 0x10de220f */
  if (C.zf) goto L_10de220f;
  /* 10de21e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10de21ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10de21eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10de21ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10de21ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de21f0 je 0x10de21e4 */
  if (C.zf) goto L_10de21e4;
  /* 10de21f2 push eax */
  push32((uint32_t)(EAX));
  /* 10de21f3 push ebx */
  push32((uint32_t)(EBX));
  /* 10de21f4 call 0x10de32d0 */
  push32(0x10de21f9u); f_10de32d0();
  /* 10de21f9 mov ebx, eax */
  EBX = (EAX);
  /* 10de21fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de21fe call 0x10de32d0 */
  push32(0x10de2203u); f_10de32d0();
  /* 10de2203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2206 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de2208 je 0x10de21e4 */
  if (C.zf) goto L_10de21e4;
  /* 10de220a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de220c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10de220f:;
  /* 10de220f mov ebx, eax */
  EBX = (EAX);
  /* 10de2211 pop eax */
  EAX = (pop32());
  /* 10de2212 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2214 jne 0x10de221f */
  if (!C.zf) goto L_10de221f;
  /* 10de2216 lock dec dword ptr [0x10dff92c] */
  x86_unimpl("lock dec @ 0x10de2216");
  /* 10de221d jmp 0x10de2229 */
  goto L_10de2229;
L_10de221f:;
  /* 10de221f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de2221 call 0x10dd7530 */
  push32(0x10de2226u); f_10dd7530();
  /* 10de2226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de2229:;
  /* 10de2229 mov eax, ebx */
  EAX = (EBX);
L_10de222b:;
  /* 10de222b pop ebx */
  EBX = (pop32());
  /* 10de222c pop esi */
  ESI = (pop32());
  /* 10de222d pop edi */
  EDI = (pop32());
  /* 10de222e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10de222f ret  */
  ESPCHK(0x10de2160u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x10de2230 (257 bytes, 103 insns) */
void f_10de2230(void) {
  FTRACE(0x10de2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2230 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2231 mov ebp, esp */
  EBP = (ESP);
  /* 10de2233 push edi */
  push32((uint32_t)(EDI));
  /* 10de2234 push esi */
  push32((uint32_t)(ESI));
  /* 10de2235 push ebx */
  push32((uint32_t)(EBX));
  /* 10de2236 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2239 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de223b je 0x10de232a */
  if (C.zf) goto L_10de232a;
  /* 10de2241 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2244 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10de2247 lea eax, [0x10dff798] */
  EAX = ((uint32_t)(0x10dff798));
  /* 10de224d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2251 jne 0x10de22a1 */
  if (!C.zf) goto L_10de22a1;
  /* 10de2253 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10de2255 mov bl, 0x5a */
  BL = (0x5au);
  /* 10de2257 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10de2259 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10de225c:;
  /* 10de225c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10de225e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10de2260 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10de2262 je 0x10de2285 */
  if (C.zf) goto L_10de2285;
  /* 10de2264 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10de2266 je 0x10de2285 */
  if (C.zf) goto L_10de2285;
  /* 10de2268 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10de2269 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10de226a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de226c jb 0x10de2274 */
  if (C.cf) goto L_10de2274;
  /* 10de226e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de2270 ja 0x10de2274 */
  if ((!C.cf&&!C.zf)) goto L_10de2274;
  /* 10de2272 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10de2274:;
  /* 10de2274 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de2276 jb 0x10de227e */
  if (C.cf) goto L_10de227e;
  /* 10de2278 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de227a ja 0x10de227e */
  if ((!C.cf&&!C.zf)) goto L_10de227e;
  /* 10de227c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10de227e:;
  /* 10de227e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de2280 jne 0x10de228f */
  if (!C.zf) goto L_10de228f;
  /* 10de2282 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10de2283 jne 0x10de225c */
  if (!C.zf) goto L_10de225c;
L_10de2285:;
  /* 10de2285 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2287 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de2289 je 0x10de232a */
  if (C.zf) goto L_10de232a;
L_10de228f:;
  /* 10de228f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10de2294 jb 0x10de232a */
  if (C.cf) goto L_10de232a;
  /* 10de229a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de229c jmp 0x10de232a */
  goto L_10de232a;
L_10de22a1:;
  /* 10de22a1 lock inc dword ptr [0x10dff92c] */
  x86_unimpl("lock inc @ 0x10de22a1");
  /* 10de22a8 cmp dword ptr [0x10dff91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de22af jg 0x10de22b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de22b5;
  /* 10de22b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de22b3 jmp 0x10de22ce */
  goto L_10de22ce;
L_10de22b5:;
  /* 10de22b5 lock dec dword ptr [0x10dff92c] */
  x86_unimpl("lock dec @ 0x10de22b5");
  /* 10de22bc mov ebx, ecx */
  EBX = (ECX);
  /* 10de22be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de22c0 call 0x10dd7490 */
  push32(0x10de22c5u); f_10dd7490();
  /* 10de22c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10de22cc mov ecx, ebx */
  ECX = (EBX);
L_10de22ce:;
  /* 10de22ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de22d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10de22d2 mov edi, edi */
  EDI = (EDI);
L_10de22d4:;
  /* 10de22d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10de22d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de22d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10de22da je 0x10de22ff */
  if (C.zf) goto L_10de22ff;
  /* 10de22dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10de22de je 0x10de22ff */
  if (C.zf) goto L_10de22ff;
  /* 10de22e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10de22e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10de22e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10de22e3 push eax */
  push32((uint32_t)(EAX));
  /* 10de22e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10de22e5 call 0x10de32d0 */
  push32(0x10de22eau); f_10de32d0();
  /* 10de22ea mov ebx, eax */
  EBX = (EAX);
  /* 10de22ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de22ef call 0x10de32d0 */
  push32(0x10de22f4u); f_10de32d0();
  /* 10de22f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de22f7 pop ecx */
  ECX = (pop32());
  /* 10de22f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de22fa jne 0x10de2305 */
  if (!C.zf) goto L_10de2305;
  /* 10de22fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10de22fd jne 0x10de22d4 */
  if (!C.zf) goto L_10de22d4;
L_10de22ff:;
  /* 10de22ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2301 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2303 je 0x10de230e */
  if (C.zf) goto L_10de230e;
L_10de2305:;
  /* 10de2305 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10de230a jb 0x10de230e */
  if (C.cf) goto L_10de230e;
  /* 10de230c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10de230e:;
  /* 10de230e pop eax */
  EAX = (pop32());
  /* 10de230f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2311 jne 0x10de231c */
  if (!C.zf) goto L_10de231c;
  /* 10de2313 lock dec dword ptr [0x10dff92c] */
  x86_unimpl("lock dec @ 0x10de2313");
  /* 10de231a jmp 0x10de232a */
  goto L_10de232a;
L_10de231c:;
  /* 10de231c mov ebx, ecx */
  EBX = (ECX);
  /* 10de231e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de2320 call 0x10dd7530 */
  push32(0x10de2325u); f_10dd7530();
  /* 10de2325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2328 mov ecx, ebx */
  ECX = (EBX);
L_10de232a:;
  /* 10de232a mov eax, ecx */
  EAX = (ECX);
  /* 10de232c pop ebx */
  EBX = (pop32());
  /* 10de232d pop esi */
  ESI = (pop32());
  /* 10de232e pop edi */
  EDI = (pop32());
  /* 10de232f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10de2330 ret  */
  ESPCHK(0x10de2230u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x10de2340 (255 bytes, 88 insns) */
void f_10de2340(void) {
  FTRACE(0x10de2340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2340 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2341 mov ebp, esp */
  EBP = (ESP);
  /* 10de2343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10de2346:;
  /* 10de2346 cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de234d jle 0x10de2366 */
  if ((C.zf||C.sf!=C.of)) goto L_10de2366;
  /* 10de234f push 8 */
  push32((uint32_t)(0x8u));
  /* 10de2351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2356 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de2358 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2359 call 0x10dd9aa0 */
  push32(0x10de235eu); f_10dd9aa0();
  /* 10de235e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2361 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10de2364 jmp 0x10de237f */
  goto L_10de237f;
L_10de2366:;
  /* 10de2366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de236b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de236d mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de2373 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2375 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de2379 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10de237c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de237f:;
  /* 10de237f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2383 je 0x10de2390 */
  if (C.zf) goto L_10de2390;
  /* 10de2385 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de238b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de238e jmp 0x10de2346 */
  goto L_10de2346;
L_10de2390:;
  /* 10de2390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2393 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2395 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de2397 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de239a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de239d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de23a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de23a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de23a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de23a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de23ad je 0x10de23b5 */
  if (C.zf) goto L_10de23b5;
  /* 10de23af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de23b3 jne 0x10de23c8 */
  if (!C.zf) goto L_10de23c8;
L_10de23b5:;
  /* 10de23b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de23b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de23ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de23bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de23bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de23c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de23c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10de23c8:;
  /* 10de23c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10de23cf:;
  /* 10de23cf cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de23d6 jle 0x10de23eb */
  if ((C.zf||C.sf!=C.of)) goto L_10de23eb;
  /* 10de23d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10de23da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de23dd push edx */
  push32((uint32_t)(EDX));
  /* 10de23de call 0x10dd9aa0 */
  push32(0x10de23e3u); f_10dd9aa0();
  /* 10de23e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de23e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de23e9 jmp 0x10de2400 */
  goto L_10de2400;
L_10de23eb:;
  /* 10de23eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de23ee mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de23f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de23f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de23fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10de23fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10de2400:;
  /* 10de2400 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2404 je 0x10de242b */
  if (C.zf) goto L_10de242b;
  /* 10de2406 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2409 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de240c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de240f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10de2413 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de2416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2419 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de241b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de241d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de2420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2423 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2426 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10de2429 jmp 0x10de23cf */
  goto L_10de23cf;
L_10de242b:;
  /* 10de242b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de242f jne 0x10de2438 */
  if (!C.zf) goto L_10de2438;
  /* 10de2431 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2434 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de2436 jmp 0x10de243b */
  goto L_10de243b;
L_10de2438:;
  /* 10de2438 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10de243b:;
  /* 10de243b mov esp, ebp */
  ESP = (EBP);
  /* 10de243d pop ebp */
  EBP = (pop32());
  /* 10de243e ret  */
  ESPCHK(0x10de2340u, _esp0);
  ESP += 4; return;
}

/* FUN_10012440 @ 0x10de2440 (17 bytes, 8 insns) */
void f_10de2440(void) {
  FTRACE(0x10de2440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2440 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2441 mov ebp, esp */
  EBP = (ESP);
  /* 10de2443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2446 push eax */
  push32((uint32_t)(EAX));
  /* 10de2447 call 0x10de2340 */
  push32(0x10de244cu); f_10de2340();
  /* 10de244c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de244f pop ebp */
  EBP = (pop32());
  /* 10de2450 ret  */
  ESPCHK(0x10de2440u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x10de2460 (297 bytes, 106 insns) */
void f_10de2460(void) {
  FTRACE(0x10de2460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2460 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2461 mov ebp, esp */
  EBP = (ESP);
  /* 10de2463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2466 push esi */
  push32((uint32_t)(ESI));
L_10de2467:;
  /* 10de2467 cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de246e jle 0x10de2487 */
  if ((C.zf||C.sf!=C.of)) goto L_10de2487;
  /* 10de2470 push 8 */
  push32((uint32_t)(0x8u));
  /* 10de2472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2475 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2477 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de2479 push ecx */
  push32((uint32_t)(ECX));
  /* 10de247a call 0x10dd9aa0 */
  push32(0x10de247fu); f_10dd9aa0();
  /* 10de247f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2482 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de2485 jmp 0x10de24a0 */
  goto L_10de24a0;
L_10de2487:;
  /* 10de2487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de248a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de248c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de248e mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de2494 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2496 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de249a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10de249d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10de24a0:;
  /* 10de24a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de24a4 je 0x10de24b1 */
  if (C.zf) goto L_10de24b1;
  /* 10de24a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de24a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de24ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de24af jmp 0x10de2467 */
  goto L_10de2467;
L_10de24b1:;
  /* 10de24b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de24b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de24b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de24b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de24bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de24be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de24c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de24c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de24c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10de24ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de24ce je 0x10de24d6 */
  if (C.zf) goto L_10de24d6;
  /* 10de24d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de24d4 jne 0x10de24e9 */
  if (!C.zf) goto L_10de24e9;
L_10de24d6:;
  /* 10de24d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de24d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de24db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de24dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de24e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de24e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de24e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10de24e9:;
  /* 10de24e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10de24f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10de24f7:;
  /* 10de24f7 cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de24fe jle 0x10de2513 */
  if ((C.zf||C.sf!=C.of)) goto L_10de2513;
  /* 10de2500 push 4 */
  push32((uint32_t)(0x4u));
  /* 10de2502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de2505 push edx */
  push32((uint32_t)(EDX));
  /* 10de2506 call 0x10dd9aa0 */
  push32(0x10de250bu); f_10dd9aa0();
  /* 10de250b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de250e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10de2511 jmp 0x10de2528 */
  goto L_10de2528;
L_10de2513:;
  /* 10de2513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de2516 mov ecx, dword ptr [0x10dfdc98] */
  ECX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de251c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de251e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10de2522 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10de2525 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10de2528:;
  /* 10de2528 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de252c je 0x10de2569 */
  if (C.zf) goto L_10de2569;
  /* 10de252e push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2530 push 0xa */
  push32((uint32_t)(0xau));
  /* 10de2532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2535 push eax */
  push32((uint32_t)(EAX));
  /* 10de2536 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2539 push ecx */
  push32((uint32_t)(ECX));
  /* 10de253a call 0x10de3400 */
  push32(0x10de253fu); f_10de3400();
  /* 10de253f mov ecx, eax */
  ECX = (EAX);
  /* 10de2541 mov esi, edx */
  ESI = (EDX);
  /* 10de2543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de2546 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2549 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de254a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de254c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10de254e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de2551 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10de2554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2559 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de255b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de255e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2564 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10de2567 jmp 0x10de24f7 */
  goto L_10de24f7;
L_10de2569:;
  /* 10de2569 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de256d jne 0x10de257e */
  if (!C.zf) goto L_10de257e;
  /* 10de256f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2572 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de2574 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2577 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de257a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de257c jmp 0x10de2584 */
  goto L_10de2584;
L_10de257e:;
  /* 10de257e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10de2584:;
  /* 10de2584 pop esi */
  ESI = (pop32());
  /* 10de2585 mov esp, ebp */
  ESP = (EBP);
  /* 10de2587 pop ebp */
  EBP = (pop32());
  /* 10de2588 ret  */
  ESPCHK(0x10de2460u, _esp0);
  ESP += 4; return;
}

/* FUN_10012590 @ 0x10de2590 (61 bytes, 18 insns) */
void f_10de2590(void) {
  FTRACE(0x10de2590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2590 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2591 mov ebp, esp */
  EBP = (ESP);
  /* 10de2593 cmp dword ptr [0x10dff8f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de259a jne 0x10de25cb */
  if (!C.zf) goto L_10de25cb;
  /* 10de259c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de259e call 0x10dd7490 */
  push32(0x10de25a3u); f_10dd7490();
  /* 10de25a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de25a6 cmp dword ptr [0x10dff8f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de25ad jne 0x10de25c1 */
  if (!C.zf) goto L_10de25c1;
  /* 10de25af call 0x10de25f0 */
  push32(0x10de25b4u); f_10de25f0();
  /* 10de25b4 mov eax, dword ptr [0x10dff8f8] */
  EAX = (r32((uint32_t)(0x10dff8f8)));
  /* 10de25b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de25bc mov dword ptr [0x10dff8f8], eax */
  w32((uint32_t)(0x10dff8f8), (EAX));
L_10de25c1:;
  /* 10de25c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de25c3 call 0x10dd7530 */
  push32(0x10de25c8u); f_10dd7530();
  /* 10de25c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de25cb:;
  /* 10de25cb pop ebp */
  EBP = (pop32());
  /* 10de25cc ret  */
  ESPCHK(0x10de2590u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x10de25d0 (30 bytes, 11 insns) */
void f_10de25d0(void) {
  FTRACE(0x10de25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de25d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de25d1 mov ebp, esp */
  EBP = (ESP);
  /* 10de25d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de25d5 call 0x10dd7490 */
  push32(0x10de25dau); f_10dd7490();
  /* 10de25da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de25dd call 0x10de25f0 */
  push32(0x10de25e2u); f_10de25f0();
  /* 10de25e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de25e4 call 0x10dd7530 */
  push32(0x10de25e9u); f_10dd7530();
  /* 10de25e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de25ec pop ebp */
  EBP = (pop32());
  /* 10de25ed ret  */
  ESPCHK(0x10de25d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125f0 @ 0x10de25f0 (939 bytes, 266 insns) */
void f_10de25f0(void) {
  FTRACE(0x10de25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de25f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de25f1 mov ebp, esp */
  EBP = (ESP);
  /* 10de25f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de25f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de25fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de25ff call 0x10dd7490 */
  push32(0x10de2604u); f_10dd7490();
  /* 10de2604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2607 mov dword ptr [0x10dff840], 0 */
  w32((uint32_t)(0x10dff840), (0x0u));
  /* 10de2611 mov dword ptr [0x10dfee38], 0xffffffff */
  w32((uint32_t)(0x10dfee38), (0xffffffffu));
  /* 10de261b mov eax, dword ptr [0x10dfee38] */
  EAX = (r32((uint32_t)(0x10dfee38)));
  /* 10de2620 mov dword ptr [0x10dfee28], eax */
  w32((uint32_t)(0x10dfee28), (EAX));
  /* 10de2625 push 0x10dfba48 */
  push32((uint32_t)(0x10dfba48u));
  /* 10de262a call 0x10de3470 */
  push32(0x10de262fu); f_10de3470();
  /* 10de262f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2632 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de2635 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2639 jne 0x10de2773 */
  if (!C.zf) goto L_10de2773;
  /* 10de263f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de2641 call 0x10dd7530 */
  push32(0x10de2646u); f_10dd7530();
  /* 10de2646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2649 push 0x10dff848 */
  push32((uint32_t)(0x10dff848u));
  /* 10de264e call dword ptr [0x10e02280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02280))), 0x10de2654u);
  /* 10de2654 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2657 je 0x10de276e */
  if (C.zf) goto L_10de276e;
  /* 10de265d mov dword ptr [0x10dff840], 1 */
  w32((uint32_t)(0x10dff840), (0x1u));
  /* 10de2667 mov ecx, dword ptr [0x10dff848] */
  ECX = (r32((uint32_t)(0x10dff848)));
  /* 10de266d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2670 mov dword ptr [0x10dfed90], ecx */
  w32((uint32_t)(0x10dfed90), (ECX));
  /* 10de2676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2678 mov dx, word ptr [0x10dff88e] */
  DX = (r16((uint32_t)(0x10dff88e)));
  /* 10de267f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de2681 je 0x10de2699 */
  if (C.zf) goto L_10de2699;
  /* 10de2683 mov eax, dword ptr [0x10dff89c] */
  EAX = (r32((uint32_t)(0x10dff89c)));
  /* 10de2688 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de268b mov ecx, dword ptr [0x10dfed90] */
  ECX = (r32((uint32_t)(0x10dfed90)));
  /* 10de2691 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2693 mov dword ptr [0x10dfed90], ecx */
  w32((uint32_t)(0x10dfed90), (ECX));
L_10de2699:;
  /* 10de2699 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de269b mov dx, word ptr [0x10dff8e2] */
  DX = (r16((uint32_t)(0x10dff8e2)));
  /* 10de26a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de26a4 je 0x10de26ce */
  if (C.zf) goto L_10de26ce;
  /* 10de26a6 cmp dword ptr [0x10dff8f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de26ad je 0x10de26ce */
  if (C.zf) goto L_10de26ce;
  /* 10de26af mov dword ptr [0x10dfed94], 1 */
  w32((uint32_t)(0x10dfed94), (0x1u));
  /* 10de26b9 mov eax, dword ptr [0x10dff8f0] */
  EAX = (r32((uint32_t)(0x10dff8f0)));
  /* 10de26be sub eax, dword ptr [0x10dff89c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dff89c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de26c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de26c7 mov dword ptr [0x10dfed98], eax */
  w32((uint32_t)(0x10dfed98), (EAX));
  /* 10de26cc jmp 0x10de26e2 */
  goto L_10de26e2;
L_10de26ce:;
  /* 10de26ce mov dword ptr [0x10dfed94], 0 */
  w32((uint32_t)(0x10dfed94), (0x0u));
  /* 10de26d8 mov dword ptr [0x10dfed98], 0 */
  w32((uint32_t)(0x10dfed98), (0x0u));
L_10de26e2:;
  /* 10de26e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10de26e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10de26e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de26e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10de26ea mov edx, dword ptr [0x10dfee1c] */
  EDX = (r32((uint32_t)(0x10dfee1c)));
  /* 10de26f0 push edx */
  push32((uint32_t)(EDX));
  /* 10de26f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de26f3 push 0x10dff84c */
  push32((uint32_t)(0x10dff84cu));
  /* 10de26f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10de26fd mov eax, dword ptr [0x10dff7b0] */
  EAX = (r32((uint32_t)(0x10dff7b0)));
  /* 10de2702 push eax */
  push32((uint32_t)(EAX));
  /* 10de2703 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de2709u);
  /* 10de2709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de270b je 0x10de271f */
  if (C.zf) goto L_10de271f;
  /* 10de270d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2711 jne 0x10de271f */
  if (!C.zf) goto L_10de271f;
  /* 10de2713 mov ecx, dword ptr [0x10dfee1c] */
  ECX = (r32((uint32_t)(0x10dfee1c)));
  /* 10de2719 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10de271d jmp 0x10de2728 */
  goto L_10de2728;
L_10de271f:;
  /* 10de271f mov edx, dword ptr [0x10dfee1c] */
  EDX = (r32((uint32_t)(0x10dfee1c)));
  /* 10de2725 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10de2728:;
  /* 10de2728 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10de272b push eax */
  push32((uint32_t)(EAX));
  /* 10de272c push 0 */
  push32((uint32_t)(0x0u));
  /* 10de272e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10de2730 mov ecx, dword ptr [0x10dfee20] */
  ECX = (r32((uint32_t)(0x10dfee20)));
  /* 10de2736 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2737 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de2739 push 0x10dff8a0 */
  push32((uint32_t)(0x10dff8a0u));
  /* 10de273e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10de2743 mov edx, dword ptr [0x10dff7b0] */
  EDX = (r32((uint32_t)(0x10dff7b0)));
  /* 10de2749 push edx */
  push32((uint32_t)(EDX));
  /* 10de274a call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de2750u);
  /* 10de2750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de2752 je 0x10de2765 */
  if (C.zf) goto L_10de2765;
  /* 10de2754 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2758 jne 0x10de2765 */
  if (!C.zf) goto L_10de2765;
  /* 10de275a mov eax, dword ptr [0x10dfee20] */
  EAX = (r32((uint32_t)(0x10dfee20)));
  /* 10de275f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10de2763 jmp 0x10de276e */
  goto L_10de276e;
L_10de2765:;
  /* 10de2765 mov ecx, dword ptr [0x10dfee20] */
  ECX = (r32((uint32_t)(0x10dfee20)));
  /* 10de276b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10de276e:;
  /* 10de276e jmp 0x10de2997 */
  goto L_10de2997;
L_10de2773:;
  /* 10de2773 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2776 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de2779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de277b je 0x10de279d */
  if (C.zf) goto L_10de279d;
  /* 10de277d cmp dword ptr [0x10dff8f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2784 je 0x10de27ac */
  if (C.zf) goto L_10de27ac;
  /* 10de2786 mov ecx, dword ptr [0x10dff8f4] */
  ECX = (r32((uint32_t)(0x10dff8f4)));
  /* 10de278c push ecx */
  push32((uint32_t)(ECX));
  /* 10de278d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2790 push edx */
  push32((uint32_t)(EDX));
  /* 10de2791 call 0x10ddf720 */
  push32(0x10de2796u); f_10ddf720();
  /* 10de2796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de279b jne 0x10de27ac */
  if (!C.zf) goto L_10de27ac;
L_10de279d:;
  /* 10de279d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de279f call 0x10dd7530 */
  push32(0x10de27a4u); f_10dd7530();
  /* 10de27a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de27a7 jmp 0x10de2997 */
  goto L_10de2997;
L_10de27ac:;
  /* 10de27ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10de27ae mov eax, dword ptr [0x10dff8f4] */
  EAX = (r32((uint32_t)(0x10dff8f4)));
  /* 10de27b3 push eax */
  push32((uint32_t)(EAX));
  /* 10de27b4 call 0x10dd4520 */
  push32(0x10de27b9u); f_10dd4520();
  /* 10de27b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de27bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10de27c1 push 0x10dfba40 */
  push32((uint32_t)(0x10dfba40u));
  /* 10de27c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de27c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de27cb push ecx */
  push32((uint32_t)(ECX));
  /* 10de27cc call 0x10dd68c0 */
  push32(0x10de27d1u); f_10dd68c0();
  /* 10de27d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de27d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de27d7 push eax */
  push32((uint32_t)(EAX));
  /* 10de27d8 call 0x10dd3a90 */
  push32(0x10de27ddu); f_10dd3a90();
  /* 10de27dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de27e0 mov dword ptr [0x10dff8f4], eax */
  w32((uint32_t)(0x10dff8f4), (EAX));
  /* 10de27e5 cmp dword ptr [0x10dff8f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de27ec jne 0x10de27fd */
  if (!C.zf) goto L_10de27fd;
  /* 10de27ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de27f0 call 0x10dd7530 */
  push32(0x10de27f5u); f_10dd7530();
  /* 10de27f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de27f8 jmp 0x10de2997 */
  goto L_10de2997;
L_10de27fd:;
  /* 10de27fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2800 push edx */
  push32((uint32_t)(EDX));
  /* 10de2801 mov eax, dword ptr [0x10dff8f4] */
  EAX = (r32((uint32_t)(0x10dff8f4)));
  /* 10de2806 push eax */
  push32((uint32_t)(EAX));
  /* 10de2807 call 0x10dd6a40 */
  push32(0x10de280cu); f_10dd6a40();
  /* 10de280c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de280f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de2811 call 0x10dd7530 */
  push32(0x10de2816u); f_10dd7530();
  /* 10de2816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2819 push 3 */
  push32((uint32_t)(0x3u));
  /* 10de281b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de281e push ecx */
  push32((uint32_t)(ECX));
  /* 10de281f mov edx, dword ptr [0x10dfee1c] */
  EDX = (r32((uint32_t)(0x10dfee1c)));
  /* 10de2825 push edx */
  push32((uint32_t)(EDX));
  /* 10de2826 call 0x10dd72b0 */
  push32(0x10de282bu); f_10dd72b0();
  /* 10de282b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de282e mov eax, dword ptr [0x10dfee1c] */
  EAX = (r32((uint32_t)(0x10dfee1c)));
  /* 10de2833 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10de2837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de283a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de283d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de2840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2843 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de2846 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2849 jne 0x10de285d */
  if (!C.zf) goto L_10de285d;
  /* 10de284b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de284e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2851 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de2854 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de285a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10de285d:;
  /* 10de285d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2860 push eax */
  push32((uint32_t)(EAX));
  /* 10de2861 call 0x10de2340 */
  push32(0x10de2866u); f_10de2340();
  /* 10de2866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2869 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de286f mov dword ptr [0x10dfed90], eax */
  w32((uint32_t)(0x10dfed90), (EAX));
L_10de2874:;
  /* 10de2874 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2877 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de287a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de287d je 0x10de2895 */
  if (C.zf) goto L_10de2895;
  /* 10de287f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2882 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de2885 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2888 jl 0x10de28a0 */
  if ((C.sf!=C.of)) goto L_10de28a0;
  /* 10de288a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de288d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de2890 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2893 jg 0x10de28a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de28a0;
L_10de2895:;
  /* 10de2895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2898 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de289b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de289e jmp 0x10de2874 */
  goto L_10de2874;
L_10de28a0:;
  /* 10de28a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de28a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de28a9 jne 0x10de2945 */
  if (!C.zf) goto L_10de2945;
  /* 10de28af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de28b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de28b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28bb push edx */
  push32((uint32_t)(EDX));
  /* 10de28bc call 0x10de2340 */
  push32(0x10de28c1u); f_10de2340();
  /* 10de28c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de28c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de28c7 mov ecx, dword ptr [0x10dfed90] */
  ECX = (r32((uint32_t)(0x10dfed90)));
  /* 10de28cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de28cf mov dword ptr [0x10dfed90], ecx */
  w32((uint32_t)(0x10dfed90), (ECX));
L_10de28d5:;
  /* 10de28d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de28db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de28de jl 0x10de28f6 */
  if ((C.sf!=C.of)) goto L_10de28f6;
  /* 10de28e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de28e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de28e9 jg 0x10de28f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de28f6;
  /* 10de28eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de28f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de28f4 jmp 0x10de28d5 */
  goto L_10de28d5;
L_10de28f6:;
  /* 10de28f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de28f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de28fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de28ff jne 0x10de2945 */
  if (!C.zf) goto L_10de2945;
  /* 10de2901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2907 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de290a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de290d push ecx */
  push32((uint32_t)(ECX));
  /* 10de290e call 0x10de2340 */
  push32(0x10de2913u); f_10de2340();
  /* 10de2913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2916 mov edx, dword ptr [0x10dfed90] */
  EDX = (r32((uint32_t)(0x10dfed90)));
  /* 10de291c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de291e mov dword ptr [0x10dfed90], edx */
  w32((uint32_t)(0x10dfed90), (EDX));
L_10de2924:;
  /* 10de2924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2927 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de292a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de292d jl 0x10de2945 */
  if ((C.sf!=C.of)) goto L_10de2945;
  /* 10de292f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10de2935 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2938 jg 0x10de2945 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de2945;
  /* 10de293a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de293d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2940 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de2943 jmp 0x10de2924 */
  goto L_10de2924;
L_10de2945:;
  /* 10de2945 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2949 je 0x10de2959 */
  if (C.zf) goto L_10de2959;
  /* 10de294b mov edx, dword ptr [0x10dfed90] */
  EDX = (r32((uint32_t)(0x10dfed90)));
  /* 10de2951 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de2953 mov dword ptr [0x10dfed90], edx */
  w32((uint32_t)(0x10dfed90), (EDX));
L_10de2959:;
  /* 10de2959 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de295c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10de295f mov dword ptr [0x10dfed94], ecx */
  w32((uint32_t)(0x10dfed94), (ECX));
  /* 10de2965 cmp dword ptr [0x10dfed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dfed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de296c je 0x10de298e */
  if (C.zf) goto L_10de298e;
  /* 10de296e push 3 */
  push32((uint32_t)(0x3u));
  /* 10de2970 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2973 push edx */
  push32((uint32_t)(EDX));
  /* 10de2974 mov eax, dword ptr [0x10dfee20] */
  EAX = (r32((uint32_t)(0x10dfee20)));
  /* 10de2979 push eax */
  push32((uint32_t)(EAX));
  /* 10de297a call 0x10dd72b0 */
  push32(0x10de297fu); f_10dd72b0();
  /* 10de297f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2982 mov ecx, dword ptr [0x10dfee20] */
  ECX = (r32((uint32_t)(0x10dfee20)));
  /* 10de2988 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10de298c jmp 0x10de2997 */
  goto L_10de2997;
L_10de298e:;
  /* 10de298e mov edx, dword ptr [0x10dfee20] */
  EDX = (r32((uint32_t)(0x10dfee20)));
  /* 10de2994 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10de2997:;
  /* 10de2997 mov esp, ebp */
  ESP = (EBP);
  /* 10de2999 pop ebp */
  EBP = (pop32());
  /* 10de299a ret  */
  ESPCHK(0x10de25f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x10de29a0 (46 bytes, 18 insns) */
void f_10de29a0(void) {
  FTRACE(0x10de29a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de29a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de29a1 mov ebp, esp */
  EBP = (ESP);
  /* 10de29a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de29a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de29a6 call 0x10dd7490 */
  push32(0x10de29abu); f_10dd7490();
  /* 10de29ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de29ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de29b1 push eax */
  push32((uint32_t)(EAX));
  /* 10de29b2 call 0x10de29d0 */
  push32(0x10de29b7u); f_10de29d0();
  /* 10de29b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de29ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de29bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10de29bf call 0x10dd7530 */
  push32(0x10de29c4u); f_10dd7530();
  /* 10de29c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de29c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de29ca mov esp, ebp */
  ESP = (EBP);
  /* 10de29cc pop ebp */
  EBP = (pop32());
  /* 10de29cd ret  */
  ESPCHK(0x10de29a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129d0 @ 0x10de29d0 (762 bytes, 246 insns) */
void f_10de29d0(void) {
  FTRACE(0x10de29d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de29d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de29d1 mov ebp, esp */
  EBP = (ESP);
  /* 10de29d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de29d4 cmp dword ptr [0x10dfed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dfed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de29db jne 0x10de29e4 */
  if (!C.zf) goto L_10de29e4;
  /* 10de29dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de29df jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de29e4:;
  /* 10de29e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de29e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10de29ea cmp ecx, dword ptr [0x10dfee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de29f0 jne 0x10de2a04 */
  if (!C.zf) goto L_10de2a04;
  /* 10de29f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de29f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10de29f8 cmp eax, dword ptr [0x10dfee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de29fe je 0x10de2bcb */
  if (C.zf) goto L_10de2bcb;
L_10de2a04:;
  /* 10de2a04 cmp dword ptr [0x10dff840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2a0b je 0x10de2b85 */
  if (C.zf) goto L_10de2b85;
  /* 10de2a11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2a13 mov cx, word ptr [0x10dff8e0] */
  CX = (r16((uint32_t)(0x10dff8e0)));
  /* 10de2a1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de2a1c jne 0x10de2a79 */
  if (!C.zf) goto L_10de2a79;
  /* 10de2a1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2a20 mov dx, word ptr [0x10dff8ee] */
  DX = (r16((uint32_t)(0x10dff8ee)));
  /* 10de2a27 push edx */
  push32((uint32_t)(EDX));
  /* 10de2a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2a2a mov ax, word ptr [0x10dff8ec] */
  AX = (r16((uint32_t)(0x10dff8ec)));
  /* 10de2a30 push eax */
  push32((uint32_t)(EAX));
  /* 10de2a31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2a33 mov cx, word ptr [0x10dff8ea] */
  CX = (r16((uint32_t)(0x10dff8ea)));
  /* 10de2a3a push ecx */
  push32((uint32_t)(ECX));
  /* 10de2a3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2a3d mov dx, word ptr [0x10dff8e8] */
  DX = (r16((uint32_t)(0x10dff8e8)));
  /* 10de2a44 push edx */
  push32((uint32_t)(EDX));
  /* 10de2a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2a49 mov ax, word ptr [0x10dff8e4] */
  AX = (r16((uint32_t)(0x10dff8e4)));
  /* 10de2a4f push eax */
  push32((uint32_t)(EAX));
  /* 10de2a50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2a52 mov cx, word ptr [0x10dff8e6] */
  CX = (r16((uint32_t)(0x10dff8e6)));
  /* 10de2a59 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2a5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2a5c mov dx, word ptr [0x10dff8e2] */
  DX = (r16((uint32_t)(0x10dff8e2)));
  /* 10de2a63 push edx */
  push32((uint32_t)(EDX));
  /* 10de2a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2a67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10de2a6a push ecx */
  push32((uint32_t)(ECX));
  /* 10de2a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2a6f call 0x10de2cd0 */
  push32(0x10de2a74u); f_10de2cd0();
  /* 10de2a74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2a77 jmp 0x10de2aca */
  goto L_10de2aca;
L_10de2a79:;
  /* 10de2a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2a7b mov dx, word ptr [0x10dff8ee] */
  DX = (r16((uint32_t)(0x10dff8ee)));
  /* 10de2a82 push edx */
  push32((uint32_t)(EDX));
  /* 10de2a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2a85 mov ax, word ptr [0x10dff8ec] */
  AX = (r16((uint32_t)(0x10dff8ec)));
  /* 10de2a8b push eax */
  push32((uint32_t)(EAX));
  /* 10de2a8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2a8e mov cx, word ptr [0x10dff8ea] */
  CX = (r16((uint32_t)(0x10dff8ea)));
  /* 10de2a95 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2a96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2a98 mov dx, word ptr [0x10dff8e8] */
  DX = (r16((uint32_t)(0x10dff8e8)));
  /* 10de2a9f push edx */
  push32((uint32_t)(EDX));
  /* 10de2aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2aa2 mov ax, word ptr [0x10dff8e6] */
  AX = (r16((uint32_t)(0x10dff8e6)));
  /* 10de2aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10de2aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2aaf mov cx, word ptr [0x10dff8e2] */
  CX = (r16((uint32_t)(0x10dff8e2)));
  /* 10de2ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2aba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10de2abd push eax */
  push32((uint32_t)(EAX));
  /* 10de2abe push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2ac0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2ac2 call 0x10de2cd0 */
  push32(0x10de2ac7u); f_10de2cd0();
  /* 10de2ac7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de2aca:;
  /* 10de2aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2acc mov cx, word ptr [0x10dff88c] */
  CX = (r16((uint32_t)(0x10dff88c)));
  /* 10de2ad3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de2ad5 jne 0x10de2b32 */
  if (!C.zf) goto L_10de2b32;
  /* 10de2ad7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2ad9 mov dx, word ptr [0x10dff89a] */
  DX = (r16((uint32_t)(0x10dff89a)));
  /* 10de2ae0 push edx */
  push32((uint32_t)(EDX));
  /* 10de2ae1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2ae3 mov ax, word ptr [0x10dff898] */
  AX = (r16((uint32_t)(0x10dff898)));
  /* 10de2ae9 push eax */
  push32((uint32_t)(EAX));
  /* 10de2aea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2aec mov cx, word ptr [0x10dff896] */
  CX = (r16((uint32_t)(0x10dff896)));
  /* 10de2af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2af6 mov dx, word ptr [0x10dff894] */
  DX = (r16((uint32_t)(0x10dff894)));
  /* 10de2afd push edx */
  push32((uint32_t)(EDX));
  /* 10de2afe push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2b02 mov ax, word ptr [0x10dff890] */
  AX = (r16((uint32_t)(0x10dff890)));
  /* 10de2b08 push eax */
  push32((uint32_t)(EAX));
  /* 10de2b09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2b0b mov cx, word ptr [0x10dff892] */
  CX = (r16((uint32_t)(0x10dff892)));
  /* 10de2b12 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2b13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2b15 mov dx, word ptr [0x10dff88e] */
  DX = (r16((uint32_t)(0x10dff88e)));
  /* 10de2b1c push edx */
  push32((uint32_t)(EDX));
  /* 10de2b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2b20 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10de2b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b28 call 0x10de2cd0 */
  push32(0x10de2b2du); f_10de2cd0();
  /* 10de2b2d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2b30 jmp 0x10de2b83 */
  goto L_10de2b83;
L_10de2b32:;
  /* 10de2b32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2b34 mov dx, word ptr [0x10dff89a] */
  DX = (r16((uint32_t)(0x10dff89a)));
  /* 10de2b3b push edx */
  push32((uint32_t)(EDX));
  /* 10de2b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2b3e mov ax, word ptr [0x10dff898] */
  AX = (r16((uint32_t)(0x10dff898)));
  /* 10de2b44 push eax */
  push32((uint32_t)(EAX));
  /* 10de2b45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2b47 mov cx, word ptr [0x10dff896] */
  CX = (r16((uint32_t)(0x10dff896)));
  /* 10de2b4e push ecx */
  push32((uint32_t)(ECX));
  /* 10de2b4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de2b51 mov dx, word ptr [0x10dff894] */
  DX = (r16((uint32_t)(0x10dff894)));
  /* 10de2b58 push edx */
  push32((uint32_t)(EDX));
  /* 10de2b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2b5b mov ax, word ptr [0x10dff892] */
  AX = (r16((uint32_t)(0x10dff892)));
  /* 10de2b61 push eax */
  push32((uint32_t)(EAX));
  /* 10de2b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de2b68 mov cx, word ptr [0x10dff88e] */
  CX = (r16((uint32_t)(0x10dff88e)));
  /* 10de2b6f push ecx */
  push32((uint32_t)(ECX));
  /* 10de2b70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2b73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10de2b76 push eax */
  push32((uint32_t)(EAX));
  /* 10de2b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b7b call 0x10de2cd0 */
  push32(0x10de2b80u); f_10de2cd0();
  /* 10de2b80 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de2b83:;
  /* 10de2b83 jmp 0x10de2bcb */
  goto L_10de2bcb;
L_10de2b85:;
  /* 10de2b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10de2b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2b93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10de2b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2b98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10de2b9b push edx */
  push32((uint32_t)(EDX));
  /* 10de2b9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2ba0 call 0x10de2cd0 */
  push32(0x10de2ba5u); f_10de2cd0();
  /* 10de2ba5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2baa push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2bae push 2 */
  push32((uint32_t)(0x2u));
  /* 10de2bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2bb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10de2bb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10de2bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2bbb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10de2bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10de2bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2bc3 call 0x10de2cd0 */
  push32(0x10de2bc8u); f_10de2cd0();
  /* 10de2bc8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de2bcb:;
  /* 10de2bcb mov edx, dword ptr [0x10dfee2c] */
  EDX = (r32((uint32_t)(0x10dfee2c)));
  /* 10de2bd1 cmp edx, dword ptr [0x10dfee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dfee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2bd7 jge 0x10de2c24 */
  if ((C.sf==C.of)) goto L_10de2c24;
  /* 10de2bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2bdc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10de2bdf cmp ecx, dword ptr [0x10dfee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2be5 jl 0x10de2bf5 */
  if ((C.sf!=C.of)) goto L_10de2bf5;
  /* 10de2be7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2bea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10de2bed cmp eax, dword ptr [0x10dfee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2bf3 jle 0x10de2bfc */
  if ((C.zf||C.sf!=C.of)) goto L_10de2bfc;
L_10de2bf5:;
  /* 10de2bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2bf7 jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2bfc:;
  /* 10de2bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2bff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10de2c02 cmp edx, dword ptr [0x10dfee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dfee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c08 jle 0x10de2c22 */
  if ((C.zf||C.sf!=C.of)) goto L_10de2c22;
  /* 10de2c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c0d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10de2c10 cmp ecx, dword ptr [0x10dfee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c16 jge 0x10de2c22 */
  if ((C.sf==C.of)) goto L_10de2c22;
  /* 10de2c18 mov eax, 1 */
  EAX = (0x1u);
  /* 10de2c1d jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2c22:;
  /* 10de2c22 jmp 0x10de2c67 */
  goto L_10de2c67;
L_10de2c24:;
  /* 10de2c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c27 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10de2c2a cmp eax, dword ptr [0x10dfee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c30 jl 0x10de2c40 */
  if ((C.sf!=C.of)) goto L_10de2c40;
  /* 10de2c32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c35 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10de2c38 cmp edx, dword ptr [0x10dfee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dfee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c3e jle 0x10de2c47 */
  if ((C.zf||C.sf!=C.of)) goto L_10de2c47;
L_10de2c40:;
  /* 10de2c40 mov eax, 1 */
  EAX = (0x1u);
  /* 10de2c45 jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2c47:;
  /* 10de2c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c4a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10de2c4d cmp ecx, dword ptr [0x10dfee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c53 jle 0x10de2c67 */
  if ((C.zf||C.sf!=C.of)) goto L_10de2c67;
  /* 10de2c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c58 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10de2c5b cmp eax, dword ptr [0x10dfee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c61 jge 0x10de2c67 */
  if ((C.sf==C.of)) goto L_10de2c67;
  /* 10de2c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2c65 jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2c67:;
  /* 10de2c67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10de2c6d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de2c75 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2c77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c7a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10de2c7d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2c83 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2c85 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2c8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de2c8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2c91 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10de2c94 cmp edx, dword ptr [0x10dfee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dfee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2c9a jne 0x10de2cb2 */
  if (!C.zf) goto L_10de2cb2;
  /* 10de2c9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de2c9f cmp eax, dword ptr [0x10dfee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2ca5 jl 0x10de2cae */
  if ((C.sf!=C.of)) goto L_10de2cae;
  /* 10de2ca7 mov eax, 1 */
  EAX = (0x1u);
  /* 10de2cac jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2cae:;
  /* 10de2cae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2cb0 jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2cb2:;
  /* 10de2cb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de2cb5 cmp ecx, dword ptr [0x10dfee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2cbb jge 0x10de2cc4 */
  if ((C.sf==C.of)) goto L_10de2cc4;
  /* 10de2cbd mov eax, 1 */
  EAX = (0x1u);
  /* 10de2cc2 jmp 0x10de2cc6 */
  goto L_10de2cc6;
L_10de2cc4:;
  /* 10de2cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de2cc6:;
  /* 10de2cc6 mov esp, ebp */
  ESP = (EBP);
  /* 10de2cc8 pop ebp */
  EBP = (pop32());
  /* 10de2cc9 ret  */
  ESPCHK(0x10de29d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cd0 @ 0x10de2cd0 (504 bytes, 145 insns) */
void f_10de2cd0(void) {
  FTRACE(0x10de2cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10de2cd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2cd6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2cda jne 0x10de2dac */
  if (!C.zf) goto L_10de2dac;
  /* 10de2ce0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2ce3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10de2ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de2ce8 jne 0x10de2cf9 */
  if (!C.zf) goto L_10de2cf9;
  /* 10de2cea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2ced mov edx, dword ptr [ecx*4 + 0x10dfee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfee4c)));
  /* 10de2cf4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10de2cf7 jmp 0x10de2d06 */
  goto L_10de2d06;
L_10de2cf9:;
  /* 10de2cf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2cfc mov ecx, dword ptr [eax*4 + 0x10dfee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfee80)));
  /* 10de2d03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10de2d06:;
  /* 10de2d06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de2d09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2d0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de2d0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2d12 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2d15 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2d1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2d1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2d20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2d23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2d26 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10de2d29 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10de2d2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10de2d2e mov ecx, 7 */
  ECX = (0x7u);
  /* 10de2d33 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10de2d35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de2d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de2d3b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2d3e jg 0x10de2d59 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de2d59;
  /* 10de2d40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de2d43 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2d46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de2d49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2d4c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2d4f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2d52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2d54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de2d57 jmp 0x10de2d6d */
  goto L_10de2d6d;
L_10de2d59:;
  /* 10de2d59 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de2d5c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2d5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de2d62 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2d65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2d68 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2d6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10de2d6d:;
  /* 10de2d6d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2d71 jne 0x10de2daa */
  if (!C.zf) goto L_10de2daa;
  /* 10de2d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2d76 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10de2d79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de2d7b jne 0x10de2d8c */
  if (!C.zf) goto L_10de2d8c;
  /* 10de2d7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2d80 mov eax, dword ptr [edx*4 + 0x10dfee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dfee50)));
  /* 10de2d87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10de2d8a jmp 0x10de2d99 */
  goto L_10de2d99;
L_10de2d8c:;
  /* 10de2d8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2d8f mov edx, dword ptr [ecx*4 + 0x10dfee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfee84)));
  /* 10de2d96 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10de2d99:;
  /* 10de2d99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2d9c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2d9f jle 0x10de2daa */
  if ((C.zf||C.sf!=C.of)) goto L_10de2daa;
  /* 10de2da1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2da4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2da7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10de2daa:;
  /* 10de2daa jmp 0x10de2de1 */
  goto L_10de2de1;
L_10de2dac:;
  /* 10de2dac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2daf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10de2db2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de2db4 jne 0x10de2dc5 */
  if (!C.zf) goto L_10de2dc5;
  /* 10de2db6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2db9 mov ecx, dword ptr [eax*4 + 0x10dfee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfee4c)));
  /* 10de2dc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10de2dc3 jmp 0x10de2dd2 */
  goto L_10de2dd2;
L_10de2dc5:;
  /* 10de2dc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2dc8 mov eax, dword ptr [edx*4 + 0x10dfee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dfee80)));
  /* 10de2dcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10de2dd2:;
  /* 10de2dd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de2dd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10de2dd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2ddb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2dde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10de2de1:;
  /* 10de2de1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2de5 jne 0x10de2e21 */
  if (!C.zf) goto L_10de2e21;
  /* 10de2de7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2dea mov dword ptr [0x10dfee2c], eax */
  w32((uint32_t)(0x10dfee2c), (EAX));
  /* 10de2def mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10de2df2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2df5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10de2df8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2dfa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2dfd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10de2e00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2e08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10de2e0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e0d mov dword ptr [0x10dfee30], ecx */
  w32((uint32_t)(0x10dfee30), (ECX));
  /* 10de2e13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2e16 mov dword ptr [0x10dfee28], edx */
  w32((uint32_t)(0x10dfee28), (EDX));
  /* 10de2e1c jmp 0x10de2ec4 */
  goto L_10de2ec4;
L_10de2e21:;
  /* 10de2e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de2e24 mov dword ptr [0x10dfee3c], eax */
  w32((uint32_t)(0x10dfee3c), (EAX));
  /* 10de2e29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10de2e2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2e2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10de2e32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2e37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10de2e3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2e42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10de2e45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e47 mov dword ptr [0x10dfee40], ecx */
  w32((uint32_t)(0x10dfee40), (ECX));
  /* 10de2e4d mov edx, dword ptr [0x10dfed98] */
  EDX = (r32((uint32_t)(0x10dfed98)));
  /* 10de2e53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10de2e59 mov eax, dword ptr [0x10dfee40] */
  EAX = (r32((uint32_t)(0x10dfee40)));
  /* 10de2e5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e60 mov dword ptr [0x10dfee40], eax */
  w32((uint32_t)(0x10dfee40), (EAX));
  /* 10de2e65 cmp dword ptr [0x10dfee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dfee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2e6c jge 0x10de2e91 */
  if ((C.sf==C.of)) goto L_10de2e91;
  /* 10de2e6e mov ecx, dword ptr [0x10dfee40] */
  ECX = (r32((uint32_t)(0x10dfee40)));
  /* 10de2e74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2e7a mov dword ptr [0x10dfee40], ecx */
  w32((uint32_t)(0x10dfee40), (ECX));
  /* 10de2e80 mov edx, dword ptr [0x10dfee3c] */
  EDX = (r32((uint32_t)(0x10dfee3c)));
  /* 10de2e86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2e89 mov dword ptr [0x10dfee3c], edx */
  w32((uint32_t)(0x10dfee3c), (EDX));
  /* 10de2e8f jmp 0x10de2ebb */
  goto L_10de2ebb;
L_10de2e91:;
  /* 10de2e91 cmp dword ptr [0x10dfee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10dfee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2e9b jl 0x10de2ebb */
  if ((C.sf!=C.of)) goto L_10de2ebb;
  /* 10de2e9d mov eax, dword ptr [0x10dfee40] */
  EAX = (r32((uint32_t)(0x10dfee40)));
  /* 10de2ea2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de2ea7 mov dword ptr [0x10dfee40], eax */
  w32((uint32_t)(0x10dfee40), (EAX));
  /* 10de2eac mov ecx, dword ptr [0x10dfee3c] */
  ECX = (r32((uint32_t)(0x10dfee3c)));
  /* 10de2eb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2eb5 mov dword ptr [0x10dfee3c], ecx */
  w32((uint32_t)(0x10dfee3c), (ECX));
L_10de2ebb:;
  /* 10de2ebb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2ebe mov dword ptr [0x10dfee38], edx */
  w32((uint32_t)(0x10dfee38), (EDX));
L_10de2ec4:;
  /* 10de2ec4 mov esp, ebp */
  ESP = (EBP);
  /* 10de2ec6 pop ebp */
  EBP = (pop32());
  /* 10de2ec7 ret  */
  ESPCHK(0x10de2cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x10de2ed0 (382 bytes, 135 insns) */
void f_10de2ed0(void) {
  FTRACE(0x10de2ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de2ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de2ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10de2ed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de2ed5 push 0x10dfba50 */
  push32((uint32_t)(0x10dfba50u));
  /* 10de2eda push 0x10ddcb98 */
  push32((uint32_t)(0x10ddcb98u));
  /* 10de2edf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10de2ee5 push eax */
  push32((uint32_t)(EAX));
  /* 10de2ee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10de2eed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2ef0 push ebx */
  push32((uint32_t)(EBX));
  /* 10de2ef1 push esi */
  push32((uint32_t)(ESI));
  /* 10de2ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10de2ef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de2ef6 cmp dword ptr [0x10dff8fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2efd jne 0x10de2f42 */
  if (!C.zf) goto L_10de2f42;
  /* 10de2eff push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f07 call dword ptr [0x10e0227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0227c))), 0x10de2f0du);
  /* 10de2f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de2f0f je 0x10de2f1d */
  if (C.zf) goto L_10de2f1d;
  /* 10de2f11 mov dword ptr [0x10dff8fc], 1 */
  w32((uint32_t)(0x10dff8fc), (0x1u));
  /* 10de2f1b jmp 0x10de2f42 */
  goto L_10de2f42;
L_10de2f1d:;
  /* 10de2f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de2f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f25 call dword ptr [0x10e02294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02294))), 0x10de2f2bu);
  /* 10de2f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de2f2d je 0x10de2f3b */
  if (C.zf) goto L_10de2f3b;
  /* 10de2f2f mov dword ptr [0x10dff8fc], 2 */
  w32((uint32_t)(0x10dff8fc), (0x2u));
  /* 10de2f39 jmp 0x10de2f42 */
  goto L_10de2f42;
L_10de2f3b:;
  /* 10de2f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2f3d jmp 0x10de3051 */
  goto L_10de3051;
L_10de2f42:;
  /* 10de2f42 cmp dword ptr [0x10dff8fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2f49 jne 0x10de2f66 */
  if (!C.zf) goto L_10de2f66;
  /* 10de2f4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de2f4e push eax */
  push32((uint32_t)(EAX));
  /* 10de2f4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de2f52 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de2f56 push edx */
  push32((uint32_t)(EDX));
  /* 10de2f57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2f5a push eax */
  push32((uint32_t)(EAX));
  /* 10de2f5b call dword ptr [0x10e0227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0227c))), 0x10de2f61u);
  /* 10de2f61 jmp 0x10de3051 */
  goto L_10de3051;
L_10de2f66:;
  /* 10de2f66 cmp dword ptr [0x10dff8fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff8fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2f6d jne 0x10de304f */
  if (!C.zf) goto L_10de304f;
  /* 10de2f73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2f77 jne 0x10de2f82 */
  if (!C.zf) goto L_10de2f82;
  /* 10de2f79 mov ecx, dword ptr [0x10dff7b0] */
  ECX = (r32((uint32_t)(0x10dff7b0)));
  /* 10de2f7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10de2f82:;
  /* 10de2f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de2f86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de2f89 push edx */
  push32((uint32_t)(EDX));
  /* 10de2f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2f8d push eax */
  push32((uint32_t)(EAX));
  /* 10de2f8e call dword ptr [0x10e02294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02294))), 0x10de2f94u);
  /* 10de2f94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10de2f97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2f9b jne 0x10de2fa4 */
  if (!C.zf) goto L_10de2fa4;
  /* 10de2f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2f9f jmp 0x10de3051 */
  goto L_10de3051;
L_10de2fa4:;
  /* 10de2fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de2fab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de2fae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de2fb1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10de2fb3 call 0x10dd6c30 */
  push32(0x10de2fb8u); f_10dd6c30();
  /* 10de2fb8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10de2fbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de2fbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de2fc1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10de2fc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10de2fcb jmp 0x10de2fe4 */
  goto L_10de2fe4;
  /* 10de2fcd mov eax, 1 */
  EAX = (0x1u);
  /* 10de2fd2 ret  */
  ESPCHK(0x10de2ed0u, _esp0);
  ESP += 4; return;
  /* 10de2fd3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10de2fd6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10de2fdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10de2fe4:;
  /* 10de2fe4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de2fe8 jne 0x10de2fee */
  if (!C.zf) goto L_10de2fee;
  /* 10de2fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de2fec jmp 0x10de3051 */
  goto L_10de3051;
L_10de2fee:;
  /* 10de2fee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de2ff1 push edx */
  push32((uint32_t)(EDX));
  /* 10de2ff2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de2ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10de2ff6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de2ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 10de2ffa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de2ffd push edx */
  push32((uint32_t)(EDX));
  /* 10de2ffe call dword ptr [0x10e02294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02294))), 0x10de3004u);
  /* 10de3004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3006 jne 0x10de300c */
  if (!C.zf) goto L_10de300c;
  /* 10de3008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de300a jmp 0x10de3051 */
  goto L_10de3051;
L_10de300c:;
  /* 10de300c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3010 jne 0x10de302d */
  if (!C.zf) goto L_10de302d;
  /* 10de3012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de3014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de3016 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de3018 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de301b push eax */
  push32((uint32_t)(EAX));
  /* 10de301c push 1 */
  push32((uint32_t)(0x1u));
  /* 10de301e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de3021 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3022 call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10de3028u);
  /* 10de3028 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10de302b jmp 0x10de304a */
  goto L_10de304a;
L_10de302d:;
  /* 10de302d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de3030 push edx */
  push32((uint32_t)(EDX));
  /* 10de3031 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de3034 push eax */
  push32((uint32_t)(EAX));
  /* 10de3035 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de3037 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de303a push ecx */
  push32((uint32_t)(ECX));
  /* 10de303b push 1 */
  push32((uint32_t)(0x1u));
  /* 10de303d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de3040 push edx */
  push32((uint32_t)(EDX));
  /* 10de3041 call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10de3047u);
  /* 10de3047 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10de304a:;
  /* 10de304a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de304d jmp 0x10de3051 */
  goto L_10de3051;
L_10de304f:;
  /* 10de304f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de3051:;
  /* 10de3051 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10de3054 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3057 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10de305e pop edi */
  EDI = (pop32());
  /* 10de305f pop esi */
  ESI = (pop32());
  /* 10de3060 pop ebx */
  EBX = (pop32());
  /* 10de3061 mov esp, ebp */
  ESP = (EBP);
  /* 10de3063 pop ebp */
  EBP = (pop32());
  /* 10de3064 ret  */
  ESPCHK(0x10de2ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013070 @ 0x10de3070 (398 bytes, 140 insns) */
void f_10de3070(void) {
  FTRACE(0x10de3070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3070 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3071 mov ebp, esp */
  EBP = (ESP);
  /* 10de3073 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de3075 push 0x10dfba60 */
  push32((uint32_t)(0x10dfba60u));
  /* 10de307a push 0x10ddcb98 */
  push32((uint32_t)(0x10ddcb98u));
  /* 10de307f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10de3085 push eax */
  push32((uint32_t)(EAX));
  /* 10de3086 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10de308d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3090 push ebx */
  push32((uint32_t)(EBX));
  /* 10de3091 push esi */
  push32((uint32_t)(ESI));
  /* 10de3092 push edi */
  push32((uint32_t)(EDI));
  /* 10de3093 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de3096 cmp dword ptr [0x10dff900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de309d jne 0x10de30e2 */
  if (!C.zf) goto L_10de30e2;
  /* 10de309f push 0 */
  push32((uint32_t)(0x0u));
  /* 10de30a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de30a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de30a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de30a7 call dword ptr [0x10e0227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0227c))), 0x10de30adu);
  /* 10de30ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de30af je 0x10de30bd */
  if (C.zf) goto L_10de30bd;
  /* 10de30b1 mov dword ptr [0x10dff900], 1 */
  w32((uint32_t)(0x10dff900), (0x1u));
  /* 10de30bb jmp 0x10de30e2 */
  goto L_10de30e2;
L_10de30bd:;
  /* 10de30bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10de30bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10de30c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de30c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de30c5 call dword ptr [0x10e02294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02294))), 0x10de30cbu);
  /* 10de30cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de30cd je 0x10de30db */
  if (C.zf) goto L_10de30db;
  /* 10de30cf mov dword ptr [0x10dff900], 2 */
  w32((uint32_t)(0x10dff900), (0x2u));
  /* 10de30d9 jmp 0x10de30e2 */
  goto L_10de30e2;
L_10de30db:;
  /* 10de30db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de30dd jmp 0x10de3201 */
  goto L_10de3201;
L_10de30e2:;
  /* 10de30e2 cmp dword ptr [0x10dff900], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff900))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de30e9 jne 0x10de3106 */
  if (!C.zf) goto L_10de3106;
  /* 10de30eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de30ee push eax */
  push32((uint32_t)(EAX));
  /* 10de30ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de30f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10de30f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de30f6 push edx */
  push32((uint32_t)(EDX));
  /* 10de30f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de30fa push eax */
  push32((uint32_t)(EAX));
  /* 10de30fb call dword ptr [0x10e02294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02294))), 0x10de3101u);
  /* 10de3101 jmp 0x10de3201 */
  goto L_10de3201;
L_10de3106:;
  /* 10de3106 cmp dword ptr [0x10dff900], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff900))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de310d jne 0x10de31ff */
  if (!C.zf) goto L_10de31ff;
  /* 10de3113 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3117 jne 0x10de3122 */
  if (!C.zf) goto L_10de3122;
  /* 10de3119 mov ecx, dword ptr [0x10dff7b0] */
  ECX = (r32((uint32_t)(0x10dff7b0)));
  /* 10de311f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10de3122:;
  /* 10de3122 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de3124 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de3126 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3129 push edx */
  push32((uint32_t)(EDX));
  /* 10de312a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de312d push eax */
  push32((uint32_t)(EAX));
  /* 10de312e call dword ptr [0x10e0227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0227c))), 0x10de3134u);
  /* 10de3134 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10de3137 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de313b jne 0x10de3144 */
  if (!C.zf) goto L_10de3144;
  /* 10de313d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de313f jmp 0x10de3201 */
  goto L_10de3201;
L_10de3144:;
  /* 10de3144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de314b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de314e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10de3150 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3153 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10de3155 call 0x10dd6c30 */
  push32(0x10de315au); f_10dd6c30();
  /* 10de315a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10de315d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de3160 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de3163 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10de3166 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10de316d jmp 0x10de3186 */
  goto L_10de3186;
  /* 10de316f mov eax, 1 */
  EAX = (0x1u);
  /* 10de3174 ret  */
  ESPCHK(0x10de3070u, _esp0);
  ESP += 4; return;
  /* 10de3175 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10de3178 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10de317f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10de3186:;
  /* 10de3186 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de318a jne 0x10de3190 */
  if (!C.zf) goto L_10de3190;
  /* 10de318c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de318e jmp 0x10de3201 */
  goto L_10de3201;
L_10de3190:;
  /* 10de3190 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de3193 push edx */
  push32((uint32_t)(EDX));
  /* 10de3194 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de3197 push eax */
  push32((uint32_t)(EAX));
  /* 10de3198 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de319b push ecx */
  push32((uint32_t)(ECX));
  /* 10de319c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de319f push edx */
  push32((uint32_t)(EDX));
  /* 10de31a0 call dword ptr [0x10e0227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0227c))), 0x10de31a6u);
  /* 10de31a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de31a8 jne 0x10de31ae */
  if (!C.zf) goto L_10de31ae;
  /* 10de31aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de31ac jmp 0x10de3201 */
  goto L_10de3201;
L_10de31ae:;
  /* 10de31ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de31b2 jne 0x10de31d6 */
  if (!C.zf) goto L_10de31d6;
  /* 10de31b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de31b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de31b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de31ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10de31bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de31be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de31c1 push eax */
  push32((uint32_t)(EAX));
  /* 10de31c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10de31c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de31ca push ecx */
  push32((uint32_t)(ECX));
  /* 10de31cb call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de31d1u);
  /* 10de31d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10de31d4 jmp 0x10de31fa */
  goto L_10de31fa;
L_10de31d6:;
  /* 10de31d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de31d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de31da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de31dd push edx */
  push32((uint32_t)(EDX));
  /* 10de31de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de31e1 push eax */
  push32((uint32_t)(EAX));
  /* 10de31e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de31e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de31e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10de31e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10de31ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de31f0 push edx */
  push32((uint32_t)(EDX));
  /* 10de31f1 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de31f7u);
  /* 10de31f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10de31fa:;
  /* 10de31fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de31fd jmp 0x10de3201 */
  goto L_10de3201;
L_10de31ff:;
  /* 10de31ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de3201:;
  /* 10de3201 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10de3204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3207 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10de320e pop edi */
  EDI = (pop32());
  /* 10de320f pop esi */
  ESI = (pop32());
  /* 10de3210 pop ebx */
  EBX = (pop32());
  /* 10de3211 mov esp, ebp */
  ESP = (EBP);
  /* 10de3213 pop ebp */
  EBP = (pop32());
  /* 10de3214 ret  */
  ESPCHK(0x10de3070u, _esp0);
  ESP += 4; return;
}

/* FUN_10013220 @ 0x10de3220 (11 bytes, 6 insns) */
void f_10de3220(void) {
  FTRACE(0x10de3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3220 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3221 mov ebp, esp */
  EBP = (ESP);
  /* 10de3223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3226 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3229 pop ebp */
  EBP = (pop32());
  /* 10de322a ret  */
  ESPCHK(0x10de3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10013230 @ 0x10de3230 (147 bytes, 43 insns) */
void f_10de3230(void) {
  FTRACE(0x10de3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3230 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3231 mov ebp, esp */
  EBP = (ESP);
  /* 10de3233 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3234 cmp dword ptr [0x10dff7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de323b jne 0x10de3257 */
  if (!C.zf) goto L_10de3257;
  /* 10de323d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3241 jl 0x10de3252 */
  if ((C.sf!=C.of)) goto L_10de3252;
  /* 10de3243 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3247 jg 0x10de3252 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de3252;
  /* 10de3249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de324c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de324f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10de3252:;
  /* 10de3252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3255 jmp 0x10de32bf */
  goto L_10de32bf;
L_10de3257:;
  /* 10de3257 push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10de325c call dword ptr [0x10e022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f4))), 0x10de3262u);
  /* 10de3262 cmp dword ptr [0x10dff91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3269 je 0x10de3289 */
  if (C.zf) goto L_10de3289;
  /* 10de326b push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10de3270 call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10de3276u);
  /* 10de3276 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de3278 call 0x10dd7490 */
  push32(0x10de327du); f_10dd7490();
  /* 10de327d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3280 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10de3287 jmp 0x10de3290 */
  goto L_10de3290;
L_10de3289:;
  /* 10de3289 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10de3290:;
  /* 10de3290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3293 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3294 call 0x10de32d0 */
  push32(0x10de3299u); f_10de32d0();
  /* 10de3299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de329c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10de329f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de32a3 je 0x10de32b1 */
  if (C.zf) goto L_10de32b1;
  /* 10de32a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10de32a7 call 0x10dd7530 */
  push32(0x10de32acu); f_10dd7530();
  /* 10de32ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de32af jmp 0x10de32bc */
  goto L_10de32bc;
L_10de32b1:;
  /* 10de32b1 push 0x10dff92c */
  push32((uint32_t)(0x10dff92cu));
  /* 10de32b6 call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10de32bcu);
L_10de32bc:;
  /* 10de32bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10de32bf:;
  /* 10de32bf mov esp, ebp */
  ESP = (EBP);
  /* 10de32c1 pop ebp */
  EBP = (pop32());
  /* 10de32c2 ret  */
  ESPCHK(0x10de3230u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x10de32d0 (299 bytes, 91 insns) */
void f_10de32d0(void) {
  FTRACE(0x10de32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de32d1 mov ebp, esp */
  EBP = (ESP);
  /* 10de32d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de32d6 cmp dword ptr [0x10dff7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de32dd jne 0x10de32fc */
  if (!C.zf) goto L_10de32fc;
  /* 10de32df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de32e3 jl 0x10de32f4 */
  if ((C.sf!=C.of)) goto L_10de32f4;
  /* 10de32e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de32e9 jg 0x10de32f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de32f4;
  /* 10de32eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de32ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de32f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10de32f4:;
  /* 10de32f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de32f7 jmp 0x10de33f7 */
  goto L_10de33f7;
L_10de32fc:;
  /* 10de32fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3303 jge 0x10de3343 */
  if ((C.sf==C.of)) goto L_10de3343;
  /* 10de3305 cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de330c jle 0x10de3321 */
  if ((C.zf||C.sf!=C.of)) goto L_10de3321;
  /* 10de330e push 1 */
  push32((uint32_t)(0x1u));
  /* 10de3310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3313 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3314 call 0x10dd9aa0 */
  push32(0x10de3319u); f_10dd9aa0();
  /* 10de3319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de331c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10de331f jmp 0x10de3335 */
  goto L_10de3335;
L_10de3321:;
  /* 10de3321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3324 mov eax, dword ptr [0x10dfdc98] */
  EAX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de3329 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de332b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10de332f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10de3332 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10de3335:;
  /* 10de3335 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3339 jne 0x10de3343 */
  if (!C.zf) goto L_10de3343;
  /* 10de333b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de333e jmp 0x10de33f7 */
  goto L_10de33f7;
L_10de3343:;
  /* 10de3343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3346 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10de3349 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de334f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de3355 mov eax, dword ptr [0x10dfdc98] */
  EAX = (r32((uint32_t)(0x10dfdc98)));
  /* 10de335a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de335c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10de3360 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10de3366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de3368 je 0x10de338c */
  if (C.zf) goto L_10de338c;
  /* 10de336a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de336d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10de3370 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de3376 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10de3379 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10de337c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10de337f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10de3383 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10de338a jmp 0x10de339d */
  goto L_10de339d;
L_10de338c:;
  /* 10de338c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10de338f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10de3392 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10de3396 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10de339d:;
  /* 10de339d push 1 */
  push32((uint32_t)(0x1u));
  /* 10de339f push 0 */
  push32((uint32_t)(0x0u));
  /* 10de33a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10de33a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10de33a6 push edx */
  push32((uint32_t)(EDX));
  /* 10de33a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de33aa push eax */
  push32((uint32_t)(EAX));
  /* 10de33ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10de33ae push ecx */
  push32((uint32_t)(ECX));
  /* 10de33af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10de33b4 mov edx, dword ptr [0x10dff7a0] */
  EDX = (r32((uint32_t)(0x10dff7a0)));
  /* 10de33ba push edx */
  push32((uint32_t)(EDX));
  /* 10de33bb call 0x10ddbe80 */
  push32(0x10de33c0u); f_10ddbe80();
  /* 10de33c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de33c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de33c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de33ca jne 0x10de33d1 */
  if (!C.zf) goto L_10de33d1;
  /* 10de33cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de33cf jmp 0x10de33f7 */
  goto L_10de33f7;
L_10de33d1:;
  /* 10de33d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de33d5 jne 0x10de33e1 */
  if (!C.zf) goto L_10de33e1;
  /* 10de33d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de33da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de33df jmp 0x10de33f7 */
  goto L_10de33f7;
L_10de33e1:;
  /* 10de33e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de33e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de33e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10de33ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10de33f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10de33f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10de33f7:;
  /* 10de33f7 mov esp, ebp */
  ESP = (EBP);
  /* 10de33f9 pop ebp */
  EBP = (pop32());
  /* 10de33fa ret  */
  ESPCHK(0x10de32d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10de3400 (52 bytes, 19 insns) */
void f_10de3400(void) {
  FTRACE(0x10de3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3400 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10de3404 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10de3408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10de340a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10de340e jne 0x10de3419 */
  if (!C.zf) goto L_10de3419;
  /* 10de3410 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10de3414 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10de3416 ret 0x10 */
  ESPCHK(0x10de3400u, _esp0);
  ESP += 20; return;
L_10de3419:;
  /* 10de3419 push ebx */
  push32((uint32_t)(EBX));
  /* 10de341a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10de341c mov ebx, eax */
  EBX = (EAX);
  /* 10de341e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10de3422 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10de3426 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3428 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10de342c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10de342e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3430 pop ebx */
  EBX = (pop32());
  /* 10de3431 ret 0x10 */
  ESPCHK(0x10de3400u, _esp0);
  ESP += 20; return;
}

/* FUN_10013440 @ 0x10de3440 (46 bytes, 18 insns) */
void f_10de3440(void) {
  FTRACE(0x10de3440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3440 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3441 mov ebp, esp */
  EBP = (ESP);
  /* 10de3443 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3444 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de3446 call 0x10dd7490 */
  push32(0x10de344bu); f_10dd7490();
  /* 10de344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de344e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3451 push eax */
  push32((uint32_t)(EAX));
  /* 10de3452 call 0x10de3470 */
  push32(0x10de3457u); f_10de3470();
  /* 10de3457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de345a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de345d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10de345f call 0x10dd7530 */
  push32(0x10de3464u); f_10dd7530();
  /* 10de3464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de346a mov esp, ebp */
  ESP = (EBP);
  /* 10de346c pop ebp */
  EBP = (pop32());
  /* 10de346d ret  */
  ESPCHK(0x10de3440u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10de3470 (198 bytes, 69 insns) */
void f_10de3470(void) {
  FTRACE(0x10de3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3470 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3471 mov ebp, esp */
  EBP = (ESP);
  /* 10de3473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3476 mov eax, dword ptr [0x10dff5bc] */
  EAX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de347b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de347e cmp dword ptr [0x10e010c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3485 jne 0x10de348e */
  if (!C.zf) goto L_10de348e;
  /* 10de3487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3489 jmp 0x10de3532 */
  goto L_10de3532;
L_10de348e:;
  /* 10de348e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3492 jne 0x10de34b6 */
  if (!C.zf) goto L_10de34b6;
  /* 10de3494 cmp dword ptr [0x10dff5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de349b je 0x10de34b6 */
  if (C.zf) goto L_10de34b6;
  /* 10de349d call 0x10de3590 */
  push32(0x10de34a2u); f_10de3590();
  /* 10de34a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de34a4 je 0x10de34ad */
  if (C.zf) goto L_10de34ad;
  /* 10de34a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de34a8 jmp 0x10de3532 */
  goto L_10de3532;
L_10de34ad:;
  /* 10de34ad mov ecx, dword ptr [0x10dff5bc] */
  ECX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de34b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10de34b6:;
  /* 10de34b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de34ba je 0x10de3530 */
  if (C.zf) goto L_10de3530;
  /* 10de34bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de34c0 je 0x10de3530 */
  if (C.zf) goto L_10de3530;
  /* 10de34c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de34c5 push edx */
  push32((uint32_t)(EDX));
  /* 10de34c6 call 0x10dd68c0 */
  push32(0x10de34cbu); f_10dd68c0();
  /* 10de34cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de34ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10de34d1:;
  /* 10de34d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de34d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de34d7 je 0x10de3530 */
  if (C.zf) goto L_10de3530;
  /* 10de34d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de34dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de34de push edx */
  push32((uint32_t)(EDX));
  /* 10de34df call 0x10dd68c0 */
  push32(0x10de34e4u); f_10dd68c0();
  /* 10de34e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de34e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de34ea jbe 0x10de3525 */
  if ((C.cf||C.zf)) goto L_10de3525;
  /* 10de34ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de34ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de34f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de34f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10de34f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de34fb jne 0x10de3525 */
  if (!C.zf) goto L_10de3525;
  /* 10de34fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3500 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3504 push edx */
  push32((uint32_t)(EDX));
  /* 10de3505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3508 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de350a push ecx */
  push32((uint32_t)(ECX));
  /* 10de350b call 0x10de3540 */
  push32(0x10de3510u); f_10de3540();
  /* 10de3510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3515 jne 0x10de3525 */
  if (!C.zf) goto L_10de3525;
  /* 10de3517 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de351a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de351c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de351f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10de3523 jmp 0x10de3532 */
  goto L_10de3532;
L_10de3525:;
  /* 10de3525 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3528 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de352b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de352e jmp 0x10de34d1 */
  goto L_10de34d1;
L_10de3530:;
  /* 10de3530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de3532:;
  /* 10de3532 mov esp, ebp */
  ESP = (EBP);
  /* 10de3534 pop ebp */
  EBP = (pop32());
  /* 10de3535 ret  */
  ESPCHK(0x10de3470u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10de3540 (79 bytes, 32 insns) */
void f_10de3540(void) {
  FTRACE(0x10de3540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3540 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3541 mov ebp, esp */
  EBP = (ESP);
  /* 10de3543 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3544 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3548 jne 0x10de354e */
  if (!C.zf) goto L_10de354e;
  /* 10de354a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de354c jmp 0x10de358b */
  goto L_10de358b;
L_10de354e:;
  /* 10de354e mov eax, dword ptr [0x10e00c84] */
  EAX = (r32((uint32_t)(0x10e00c84)));
  /* 10de3553 push eax */
  push32((uint32_t)(EAX));
  /* 10de3554 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de3557 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3558 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de355b push edx */
  push32((uint32_t)(EDX));
  /* 10de355c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de355f push eax */
  push32((uint32_t)(EAX));
  /* 10de3560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3563 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3564 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de3566 mov edx, dword ptr [0x10e00f24] */
  EDX = (r32((uint32_t)(0x10e00f24)));
  /* 10de356c push edx */
  push32((uint32_t)(EDX));
  /* 10de356d call 0x10de3640 */
  push32(0x10de3572u); f_10de3640();
  /* 10de3572 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de3578 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de357c jne 0x10de3585 */
  if (!C.zf) goto L_10de3585;
  /* 10de357e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10de3583 jmp 0x10de358b */
  goto L_10de358b;
L_10de3585:;
  /* 10de3585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3588 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10de358b:;
  /* 10de358b mov esp, ebp */
  ESP = (EBP);
  /* 10de358d pop ebp */
  EBP = (pop32());
  /* 10de358e ret  */
  ESPCHK(0x10de3540u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x10de3590 (174 bytes, 66 insns) */
void f_10de3590(void) {
  FTRACE(0x10de3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3590 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3591 mov ebp, esp */
  EBP = (ESP);
  /* 10de3593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3596 mov eax, dword ptr [0x10dff5c4] */
  EAX = (r32((uint32_t)(0x10dff5c4)));
  /* 10de359b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10de359e:;
  /* 10de359e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de35a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de35a4 je 0x10de3638 */
  if (C.zf) goto L_10de3638;
  /* 10de35aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de35b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de35b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de35b9 push eax */
  push32((uint32_t)(EAX));
  /* 10de35ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10de35be call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de35c4u);
  /* 10de35c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de35c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de35cb jne 0x10de35d2 */
  if (!C.zf) goto L_10de35d2;
  /* 10de35cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de35d0 jmp 0x10de363a */
  goto L_10de363a;
L_10de35d2:;
  /* 10de35d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10de35d4 push 0x10dfba6c */
  push32((uint32_t)(0x10dfba6cu));
  /* 10de35d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de35db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de35de push ecx */
  push32((uint32_t)(ECX));
  /* 10de35df call 0x10dd3a90 */
  push32(0x10de35e4u); f_10dd3a90();
  /* 10de35e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de35e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de35ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de35ee jne 0x10de35f5 */
  if (!C.zf) goto L_10de35f5;
  /* 10de35f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de35f3 jmp 0x10de363a */
  goto L_10de363a;
L_10de35f5:;
  /* 10de35f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de35f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de35fc push edx */
  push32((uint32_t)(EDX));
  /* 10de35fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3600 push eax */
  push32((uint32_t)(EAX));
  /* 10de3601 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de3603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3606 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de3608 push edx */
  push32((uint32_t)(EDX));
  /* 10de3609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de360b push 1 */
  push32((uint32_t)(0x1u));
  /* 10de360d call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10de3613u);
  /* 10de3613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3615 jne 0x10de361c */
  if (!C.zf) goto L_10de361c;
  /* 10de3617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de361a jmp 0x10de363a */
  goto L_10de363a;
L_10de361c:;
  /* 10de361c push 0 */
  push32((uint32_t)(0x0u));
  /* 10de361e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3621 push eax */
  push32((uint32_t)(EAX));
  /* 10de3622 call 0x10de3a90 */
  push32(0x10de3627u); f_10de3a90();
  /* 10de3627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de362a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de362d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3630 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de3633 jmp 0x10de359e */
  goto L_10de359e;
L_10de3638:;
  /* 10de3638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de363a:;
  /* 10de363a mov esp, ebp */
  ESP = (EBP);
  /* 10de363c pop ebp */
  EBP = (pop32());
  /* 10de363d ret  */
  ESPCHK(0x10de3590u, _esp0);
  ESP += 4; return;
}

/* FUN_10013640 @ 0x10de3640 (970 bytes, 340 insns) */
void f_10de3640(void) {
  FTRACE(0x10de3640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3640 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3641 mov ebp, esp */
  EBP = (ESP);
  /* 10de3643 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10de3645 push 0x10dfbac0 */
  push32((uint32_t)(0x10dfbac0u));
  /* 10de364a push 0x10ddcb98 */
  push32((uint32_t)(0x10ddcb98u));
  /* 10de364f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10de3655 push eax */
  push32((uint32_t)(EAX));
  /* 10de3656 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10de365d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3660 push ebx */
  push32((uint32_t)(EBX));
  /* 10de3661 push esi */
  push32((uint32_t)(ESI));
  /* 10de3662 push edi */
  push32((uint32_t)(EDI));
  /* 10de3663 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de3666 cmp dword ptr [0x10dff904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de366d jne 0x10de36c6 */
  if (!C.zf) goto L_10de36c6;
  /* 10de366f push 1 */
  push32((uint32_t)(0x1u));
  /* 10de3671 push 0x10dfb11c */
  push32((uint32_t)(0x10dfb11cu));
  /* 10de3676 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de3678 push 0x10dfb11c */
  push32((uint32_t)(0x10dfb11cu));
  /* 10de367d push 0 */
  push32((uint32_t)(0x0u));
  /* 10de367f push 0 */
  push32((uint32_t)(0x0u));
  /* 10de3681 call dword ptr [0x10e02274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02274))), 0x10de3687u);
  /* 10de3687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3689 je 0x10de3697 */
  if (C.zf) goto L_10de3697;
  /* 10de368b mov dword ptr [0x10dff904], 1 */
  w32((uint32_t)(0x10dff904), (0x1u));
  /* 10de3695 jmp 0x10de36c6 */
  goto L_10de36c6;
L_10de3697:;
  /* 10de3697 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de3699 push 0x10dfb118 */
  push32((uint32_t)(0x10dfb118u));
  /* 10de369e push 1 */
  push32((uint32_t)(0x1u));
  /* 10de36a0 push 0x10dfb118 */
  push32((uint32_t)(0x10dfb118u));
  /* 10de36a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de36a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de36a9 call dword ptr [0x10e02278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02278))), 0x10de36afu);
  /* 10de36af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de36b1 je 0x10de36bf */
  if (C.zf) goto L_10de36bf;
  /* 10de36b3 mov dword ptr [0x10dff904], 2 */
  w32((uint32_t)(0x10dff904), (0x2u));
  /* 10de36bd jmp 0x10de36c6 */
  goto L_10de36c6;
L_10de36bf:;
  /* 10de36bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de36c1 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de36c6:;
  /* 10de36c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de36ca jle 0x10de36df */
  if ((C.zf||C.sf!=C.of)) goto L_10de36df;
  /* 10de36cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de36cf push eax */
  push32((uint32_t)(EAX));
  /* 10de36d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de36d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de36d4 call 0x10de3a40 */
  push32(0x10de36d9u); f_10de3a40();
  /* 10de36d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de36dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10de36df:;
  /* 10de36df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de36e3 jle 0x10de36f8 */
  if ((C.zf||C.sf!=C.of)) goto L_10de36f8;
  /* 10de36e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de36e8 push edx */
  push32((uint32_t)(EDX));
  /* 10de36e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de36ec push eax */
  push32((uint32_t)(EAX));
  /* 10de36ed call 0x10de3a40 */
  push32(0x10de36f2u); f_10de3a40();
  /* 10de36f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de36f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10de36f8:;
  /* 10de36f8 cmp dword ptr [0x10dff904], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff904))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de36ff jne 0x10de3724 */
  if (!C.zf) goto L_10de3724;
  /* 10de3701 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de3704 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3705 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de3708 push edx */
  push32((uint32_t)(EDX));
  /* 10de3709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de370c push eax */
  push32((uint32_t)(EAX));
  /* 10de370d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de3710 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3711 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3714 push edx */
  push32((uint32_t)(EDX));
  /* 10de3715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3718 push eax */
  push32((uint32_t)(EAX));
  /* 10de3719 call dword ptr [0x10e02278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02278))), 0x10de371fu);
  /* 10de371f jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3724:;
  /* 10de3724 cmp dword ptr [0x10dff904], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff904))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de372b jne 0x10de3a22 */
  if (!C.zf) goto L_10de3a22;
  /* 10de3731 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3735 jne 0x10de3740 */
  if (!C.zf) goto L_10de3740;
  /* 10de3737 mov ecx, dword ptr [0x10dff7b0] */
  ECX = (r32((uint32_t)(0x10dff7b0)));
  /* 10de373d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10de3740:;
  /* 10de3740 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3744 je 0x10de3750 */
  if (C.zf) goto L_10de3750;
  /* 10de3746 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de374a jne 0x10de38cc */
  if (!C.zf) goto L_10de38cc;
L_10de3750:;
  /* 10de3750 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de3753 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3756 jne 0x10de3762 */
  if (!C.zf) goto L_10de3762;
  /* 10de3758 mov eax, 2 */
  EAX = (0x2u);
  /* 10de375d jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3762:;
  /* 10de3762 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3766 jle 0x10de3772 */
  if ((C.zf||C.sf!=C.of)) goto L_10de3772;
  /* 10de3768 mov eax, 1 */
  EAX = (0x1u);
  /* 10de376d jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3772:;
  /* 10de3772 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3776 jle 0x10de3782 */
  if ((C.zf||C.sf!=C.of)) goto L_10de3782;
  /* 10de3778 mov eax, 3 */
  EAX = (0x3u);
  /* 10de377d jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3782:;
  /* 10de3782 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10de3785 push eax */
  push32((uint32_t)(EAX));
  /* 10de3786 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10de3789 push ecx */
  push32((uint32_t)(ECX));
  /* 10de378a call dword ptr [0x10e02328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02328))), 0x10de3790u);
  /* 10de3790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3792 jne 0x10de379b */
  if (!C.zf) goto L_10de379b;
  /* 10de3794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3796 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de379b:;
  /* 10de379b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de379f jne 0x10de37a7 */
  if (!C.zf) goto L_10de37a7;
  /* 10de37a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de37a5 je 0x10de37d4 */
  if (C.zf) goto L_10de37d4;
L_10de37a7:;
  /* 10de37a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de37ab jne 0x10de37b3 */
  if (!C.zf) goto L_10de37b3;
  /* 10de37ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de37b1 je 0x10de37d4 */
  if (C.zf) goto L_10de37d4;
L_10de37b3:;
  /* 10de37b3 push 0x10dfba80 */
  push32((uint32_t)(0x10dfba80u));
  /* 10de37b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10de37ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10de37bf push 0x10dfba78 */
  push32((uint32_t)(0x10dfba78u));
  /* 10de37c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de37c6 call 0x10dd2b50 */
  push32(0x10de37cbu); f_10dd2b50();
  /* 10de37cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de37ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de37d1 jne 0x10de37d4 */
  if (!C.zf) goto L_10de37d4;
  /* 10de37d3 int3  */
  x86_unimpl("int3 @ 0x10de37d3");
L_10de37d4:;
  /* 10de37d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de37d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de37d8 jne 0x10de379b */
  if (!C.zf) goto L_10de379b;
  /* 10de37da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de37de jle 0x10de3853 */
  if ((C.zf||C.sf!=C.of)) goto L_10de3853;
  /* 10de37e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de37e4 jae 0x10de37f0 */
  if (!C.cf) goto L_10de37f0;
  /* 10de37e6 mov eax, 3 */
  EAX = (0x3u);
  /* 10de37eb jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de37f0:;
  /* 10de37f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10de37f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10de37f6 jmp 0x10de3801 */
  goto L_10de3801;
L_10de37f8:;
  /* 10de37f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de37fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de37fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10de3801:;
  /* 10de3801 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de3804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3806 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de3808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de380a je 0x10de3849 */
  if (C.zf) goto L_10de3849;
  /* 10de380c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de380f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de3811 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10de3814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3816 je 0x10de3849 */
  if (C.zf) goto L_10de3849;
  /* 10de3818 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de381b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de381d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de381f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de3822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de3826 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3828 jl 0x10de3847 */
  if ((C.sf!=C.of)) goto L_10de3847;
  /* 10de382a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de382d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de382f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de3831 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de3834 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de3836 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10de3839 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de383b jg 0x10de3847 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de3847;
  /* 10de383d mov eax, 2 */
  EAX = (0x2u);
  /* 10de3842 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3847:;
  /* 10de3847 jmp 0x10de37f8 */
  goto L_10de37f8;
L_10de3849:;
  /* 10de3849 mov eax, 3 */
  EAX = (0x3u);
  /* 10de384e jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3853:;
  /* 10de3853 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3857 jle 0x10de38cc */
  if ((C.zf||C.sf!=C.of)) goto L_10de38cc;
  /* 10de3859 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de385d jae 0x10de3869 */
  if (!C.cf) goto L_10de3869;
  /* 10de385f mov eax, 1 */
  EAX = (0x1u);
  /* 10de3864 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3869:;
  /* 10de3869 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10de386c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10de386f jmp 0x10de387a */
  goto L_10de387a;
L_10de3871:;
  /* 10de3871 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de3874 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3877 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10de387a:;
  /* 10de387a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de387d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de387f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de3881 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3883 je 0x10de38c2 */
  if (C.zf) goto L_10de38c2;
  /* 10de3885 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de3888 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de388a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10de388d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de388f je 0x10de38c2 */
  if (C.zf) goto L_10de38c2;
  /* 10de3891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de3894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3896 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10de3898 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de389b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10de389d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10de389f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de38a1 jl 0x10de38c0 */
  if ((C.sf!=C.of)) goto L_10de38c0;
  /* 10de38a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de38a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de38a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de38aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10de38ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de38af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10de38b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de38b4 jg 0x10de38c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10de38c0;
  /* 10de38b6 mov eax, 2 */
  EAX = (0x2u);
  /* 10de38bb jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de38c0:;
  /* 10de38c0 jmp 0x10de3871 */
  goto L_10de3871;
L_10de38c2:;
  /* 10de38c2 mov eax, 1 */
  EAX = (0x1u);
  /* 10de38c7 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de38cc:;
  /* 10de38cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10de38ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10de38d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de38d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de38d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de38d7 push edx */
  push32((uint32_t)(EDX));
  /* 10de38d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10de38da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10de38dd push eax */
  push32((uint32_t)(EAX));
  /* 10de38de call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10de38e4u);
  /* 10de38e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10de38e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de38eb jne 0x10de38f4 */
  if (!C.zf) goto L_10de38f4;
  /* 10de38ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de38ef jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de38f4:;
  /* 10de38f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10de38fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de38fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10de3900 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3903 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10de3905 call 0x10dd6c30 */
  push32(0x10de390au); f_10dd6c30();
  /* 10de390a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10de390d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de3910 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10de3913 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10de3916 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10de391d jmp 0x10de3936 */
  goto L_10de3936;
  /* 10de391f mov eax, 1 */
  EAX = (0x1u);
  /* 10de3924 ret  */
  ESPCHK(0x10de3640u, _esp0);
  ESP += 4; return;
  /* 10de3925 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10de3928 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10de392f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10de3936:;
  /* 10de3936 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de393a jne 0x10de3943 */
  if (!C.zf) goto L_10de3943;
  /* 10de393c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de393e jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3943:;
  /* 10de3943 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de3946 push edx */
  push32((uint32_t)(EDX));
  /* 10de3947 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de394a push eax */
  push32((uint32_t)(EAX));
  /* 10de394b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10de394e push ecx */
  push32((uint32_t)(ECX));
  /* 10de394f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10de3952 push edx */
  push32((uint32_t)(EDX));
  /* 10de3953 push 1 */
  push32((uint32_t)(0x1u));
  /* 10de3955 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10de3958 push eax */
  push32((uint32_t)(EAX));
  /* 10de3959 call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10de395fu);
  /* 10de395f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3961 jne 0x10de396a */
  if (!C.zf) goto L_10de396a;
  /* 10de3963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3965 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de396a:;
  /* 10de396a push 0 */
  push32((uint32_t)(0x0u));
  /* 10de396c push 0 */
  push32((uint32_t)(0x0u));
  /* 10de396e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de3971 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3972 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de3975 push edx */
  push32((uint32_t)(EDX));
  /* 10de3976 push 9 */
  push32((uint32_t)(0x9u));
  /* 10de3978 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10de397b push eax */
  push32((uint32_t)(EAX));
  /* 10de397c call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10de3982u);
  /* 10de3982 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10de3985 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3989 jne 0x10de3992 */
  if (!C.zf) goto L_10de3992;
  /* 10de398b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de398d jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3992:;
  /* 10de3992 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10de3999 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de399c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10de399e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de39a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10de39a3 call 0x10dd6c30 */
  push32(0x10de39a8u); f_10dd6c30();
  /* 10de39a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10de39ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10de39ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10de39b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10de39b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10de39bb jmp 0x10de39d4 */
  goto L_10de39d4;
  /* 10de39bd mov eax, 1 */
  EAX = (0x1u);
  /* 10de39c2 ret  */
  ESPCHK(0x10de3640u, _esp0);
  ESP += 4; return;
  /* 10de39c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10de39c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10de39cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10de39d4:;
  /* 10de39d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de39d8 jne 0x10de39de */
  if (!C.zf) goto L_10de39de;
  /* 10de39da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de39dc jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de39de:;
  /* 10de39de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de39e1 push edx */
  push32((uint32_t)(EDX));
  /* 10de39e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de39e5 push eax */
  push32((uint32_t)(EAX));
  /* 10de39e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10de39e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10de39ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10de39ed push edx */
  push32((uint32_t)(EDX));
  /* 10de39ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10de39f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10de39f3 push eax */
  push32((uint32_t)(EAX));
  /* 10de39f4 call dword ptr [0x10e022c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022c4))), 0x10de39fau);
  /* 10de39fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de39fc jne 0x10de3a02 */
  if (!C.zf) goto L_10de3a02;
  /* 10de39fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3a00 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3a02:;
  /* 10de3a02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10de3a05 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3a06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10de3a09 push edx */
  push32((uint32_t)(EDX));
  /* 10de3a0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10de3a0d push eax */
  push32((uint32_t)(EAX));
  /* 10de3a0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10de3a11 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3a12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3a15 push edx */
  push32((uint32_t)(EDX));
  /* 10de3a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3a19 push eax */
  push32((uint32_t)(EAX));
  /* 10de3a1a call dword ptr [0x10e02274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02274))), 0x10de3a20u);
  /* 10de3a20 jmp 0x10de3a24 */
  goto L_10de3a24;
L_10de3a22:;
  /* 10de3a22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de3a24:;
  /* 10de3a24 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10de3a27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3a2a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10de3a31 pop edi */
  EDI = (pop32());
  /* 10de3a32 pop esi */
  ESI = (pop32());
  /* 10de3a33 pop ebx */
  EBX = (pop32());
  /* 10de3a34 mov esp, ebp */
  ESP = (EBP);
  /* 10de3a36 pop ebp */
  EBP = (pop32());
  /* 10de3a37 ret  */
  ESPCHK(0x10de3640u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a40 @ 0x10de3a40 (80 bytes, 32 insns) */
void f_10de3a40(void) {
  FTRACE(0x10de3a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3a41 mov ebp, esp */
  EBP = (ESP);
  /* 10de3a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3a46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3a49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de3a4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3a4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10de3a52:;
  /* 10de3a52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3a55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3a58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3a5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de3a5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3a60 je 0x10de3a77 */
  if (C.zf) goto L_10de3a77;
  /* 10de3a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3a65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de3a68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3a6a je 0x10de3a77 */
  if (C.zf) goto L_10de3a77;
  /* 10de3a6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3a6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3a72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de3a75 jmp 0x10de3a52 */
  goto L_10de3a52;
L_10de3a77:;
  /* 10de3a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3a7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10de3a7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3a7f jne 0x10de3a89 */
  if (!C.zf) goto L_10de3a89;
  /* 10de3a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3a84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3a87 jmp 0x10de3a8c */
  goto L_10de3a8c;
L_10de3a89:;
  /* 10de3a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10de3a8c:;
  /* 10de3a8c mov esp, ebp */
  ESP = (EBP);
  /* 10de3a8e pop ebp */
  EBP = (pop32());
  /* 10de3a8f ret  */
  ESPCHK(0x10de3a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a90 @ 0x10de3a90 (736 bytes, 224 insns) */
void f_10de3a90(void) {
  FTRACE(0x10de3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3a91 mov ebp, esp */
  EBP = (ESP);
  /* 10de3a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3a96 push esi */
  push32((uint32_t)(ESI));
  /* 10de3a97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3a9b je 0x10de3abc */
  if (C.zf) goto L_10de3abc;
  /* 10de3a9d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10de3a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10de3aa3 call 0x10de3ee0 */
  push32(0x10de3aa8u); f_10de3ee0();
  /* 10de3aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3aab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10de3aae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3ab2 je 0x10de3abc */
  if (C.zf) goto L_10de3abc;
  /* 10de3ab4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3ab7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3aba jne 0x10de3ac4 */
  if (!C.zf) goto L_10de3ac4;
L_10de3abc:;
  /* 10de3abc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3abf jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3ac4:;
  /* 10de3ac4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de3ac7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10de3acb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de3acd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3acf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10de3ad0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10de3ad3 mov ecx, dword ptr [0x10dff5bc] */
  ECX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de3ad9 cmp ecx, dword ptr [0x10dff5c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dff5c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3adf jne 0x10de3af5 */
  if (!C.zf) goto L_10de3af5;
  /* 10de3ae1 mov edx, dword ptr [0x10dff5bc] */
  EDX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de3ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10de3ae8 call 0x10de3df0 */
  push32(0x10de3aedu); f_10de3df0();
  /* 10de3aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3af0 mov dword ptr [0x10dff5bc], eax */
  w32((uint32_t)(0x10dff5bc), (EAX));
L_10de3af5:;
  /* 10de3af5 cmp dword ptr [0x10dff5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3afc jne 0x10de3bb5 */
  if (!C.zf) goto L_10de3bb5;
  /* 10de3b02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b06 je 0x10de3b27 */
  if (C.zf) goto L_10de3b27;
  /* 10de3b08 cmp dword ptr [0x10dff5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b0f je 0x10de3b27 */
  if (C.zf) goto L_10de3b27;
  /* 10de3b11 call 0x10de3590 */
  push32(0x10de3b16u); f_10de3590();
  /* 10de3b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3b18 je 0x10de3b22 */
  if (C.zf) goto L_10de3b22;
  /* 10de3b1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3b1d jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3b22:;
  /* 10de3b22 jmp 0x10de3bb5 */
  goto L_10de3bb5;
L_10de3b27:;
  /* 10de3b27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b2b je 0x10de3b34 */
  if (C.zf) goto L_10de3b34;
  /* 10de3b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3b2f jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3b34:;
  /* 10de3b34 cmp dword ptr [0x10dff5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b3b jne 0x10de3b74 */
  if (!C.zf) goto L_10de3b74;
  /* 10de3b3d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10de3b42 push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3b49 push 4 */
  push32((uint32_t)(0x4u));
  /* 10de3b4b call 0x10dd3a90 */
  push32(0x10de3b50u); f_10dd3a90();
  /* 10de3b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3b53 mov dword ptr [0x10dff5bc], eax */
  w32((uint32_t)(0x10dff5bc), (EAX));
  /* 10de3b58 cmp dword ptr [0x10dff5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b5f jne 0x10de3b69 */
  if (!C.zf) goto L_10de3b69;
  /* 10de3b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3b64 jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3b69:;
  /* 10de3b69 mov eax, dword ptr [0x10dff5bc] */
  EAX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de3b6e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10de3b74:;
  /* 10de3b74 cmp dword ptr [0x10dff5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b7b jne 0x10de3bb5 */
  if (!C.zf) goto L_10de3bb5;
  /* 10de3b7d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10de3b82 push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3b89 push 4 */
  push32((uint32_t)(0x4u));
  /* 10de3b8b call 0x10dd3a90 */
  push32(0x10de3b90u); f_10dd3a90();
  /* 10de3b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3b93 mov dword ptr [0x10dff5c4], eax */
  w32((uint32_t)(0x10dff5c4), (EAX));
  /* 10de3b98 cmp dword ptr [0x10dff5c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3b9f jne 0x10de3ba9 */
  if (!C.zf) goto L_10de3ba9;
  /* 10de3ba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3ba4 jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3ba9:;
  /* 10de3ba9 mov ecx, dword ptr [0x10dff5c4] */
  ECX = (r32((uint32_t)(0x10dff5c4)));
  /* 10de3baf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10de3bb5:;
  /* 10de3bb5 mov edx, dword ptr [0x10dff5bc] */
  EDX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de3bbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10de3bbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de3bc1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10de3bc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3bc9 call 0x10de3d70 */
  push32(0x10de3bceu); f_10de3d70();
  /* 10de3bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de3bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3bd8 jl 0x10de3c71 */
  if ((C.sf!=C.of)) goto L_10de3c71;
  /* 10de3bde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3be1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3be4 je 0x10de3c71 */
  if (C.zf) goto L_10de3c71;
  /* 10de3bea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3bee je 0x10de3c63 */
  if (C.zf) goto L_10de3c63;
  /* 10de3bf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3bf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3bf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10de3bfb push edx */
  push32((uint32_t)(EDX));
  /* 10de3bfc call 0x10dd4520 */
  push32(0x10de3c01u); f_10dd4520();
  /* 10de3c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3c04 jmp 0x10de3c0f */
  goto L_10de3c0f;
L_10de3c06:;
  /* 10de3c06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3c0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10de3c0f:;
  /* 10de3c0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3c19 je 0x10de3c30 */
  if (C.zf) goto L_10de3c30;
  /* 10de3c1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10de3c2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10de3c2e jmp 0x10de3c06 */
  goto L_10de3c06;
L_10de3c30:;
  /* 10de3c30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10de3c35 push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3c3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10de3c42 push eax */
  push32((uint32_t)(EAX));
  /* 10de3c43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c46 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3c47 call 0x10dd3f20 */
  push32(0x10de3c4cu); f_10dd3f20();
  /* 10de3c4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3c4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de3c52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3c56 je 0x10de3c61 */
  if (C.zf) goto L_10de3c61;
  /* 10de3c58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c5b mov dword ptr [0x10dff5bc], edx */
  w32((uint32_t)(0x10dff5bc), (EDX));
L_10de3c61:;
  /* 10de3c61 jmp 0x10de3c6f */
  goto L_10de3c6f;
L_10de3c63:;
  /* 10de3c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3c6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10de3c6f:;
  /* 10de3c6f jmp 0x10de3ce4 */
  goto L_10de3ce4;
L_10de3c71:;
  /* 10de3c71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3c75 jne 0x10de3cdd */
  if (!C.zf) goto L_10de3cdd;
  /* 10de3c77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3c7b jge 0x10de3c85 */
  if ((C.sf==C.of)) goto L_10de3c85;
  /* 10de3c7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de3c82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10de3c85:;
  /* 10de3c85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10de3c8a push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3c91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3c94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10de3c9b push edx */
  push32((uint32_t)(EDX));
  /* 10de3c9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3c9f push eax */
  push32((uint32_t)(EAX));
  /* 10de3ca0 call 0x10dd3f20 */
  push32(0x10de3ca5u); f_10dd3f20();
  /* 10de3ca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3ca8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de3cab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3caf jne 0x10de3cb9 */
  if (!C.zf) goto L_10de3cb9;
  /* 10de3cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3cb4 jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3cb9:;
  /* 10de3cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3cbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3cbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3cc2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10de3cc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3ccb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10de3cd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3cd6 mov dword ptr [0x10dff5bc], eax */
  w32((uint32_t)(0x10dff5bc), (EAX));
  /* 10de3cdb jmp 0x10de3ce4 */
  goto L_10de3ce4;
L_10de3cdd:;
  /* 10de3cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3cdf jmp 0x10de3d6b */
  goto L_10de3d6b;
L_10de3ce4:;
  /* 10de3ce4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3ce8 je 0x10de3d69 */
  if (C.zf) goto L_10de3d69;
  /* 10de3cea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10de3cef push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3cf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3cf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3cfa call 0x10dd68c0 */
  push32(0x10de3cffu); f_10dd68c0();
  /* 10de3cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d05 push eax */
  push32((uint32_t)(EAX));
  /* 10de3d06 call 0x10dd3a90 */
  push32(0x10de3d0bu); f_10dd3a90();
  /* 10de3d0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10de3d11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3d15 je 0x10de3d69 */
  if (C.zf) goto L_10de3d69;
  /* 10de3d17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3d1a push edx */
  push32((uint32_t)(EDX));
  /* 10de3d1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3d1e push eax */
  push32((uint32_t)(EAX));
  /* 10de3d1f call 0x10dd6a40 */
  push32(0x10de3d24u); f_10dd6a40();
  /* 10de3d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10de3d2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3d30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10de3d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3d38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10de3d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de3d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10de3d47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10de3d49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3d4b not edx */
  EDX = (~(EDX));
  /* 10de3d4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10de3d50 push edx */
  push32((uint32_t)(EDX));
  /* 10de3d51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3d54 push eax */
  push32((uint32_t)(EAX));
  /* 10de3d55 call dword ptr [0x10e02270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02270))), 0x10de3d5bu);
  /* 10de3d5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3d5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3d60 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3d61 call 0x10dd4520 */
  push32(0x10de3d66u); f_10dd4520();
  /* 10de3d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de3d69:;
  /* 10de3d69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de3d6b:;
  /* 10de3d6b pop esi */
  ESI = (pop32());
  /* 10de3d6c mov esp, ebp */
  ESP = (EBP);
  /* 10de3d6e pop ebp */
  EBP = (pop32());
  /* 10de3d6f ret  */
  ESPCHK(0x10de3a90u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10de3d70 (124 bytes, 47 insns) */
void f_10de3d70(void) {
  FTRACE(0x10de3d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3d71 mov ebp, esp */
  EBP = (ESP);
  /* 10de3d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3d74 mov eax, dword ptr [0x10dff5bc] */
  EAX = (r32((uint32_t)(0x10dff5bc)));
  /* 10de3d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10de3d7c jmp 0x10de3d87 */
  goto L_10de3d87;
L_10de3d7e:;
  /* 10de3d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3d81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3d84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10de3d87:;
  /* 10de3d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3d8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3d8d je 0x10de3dda */
  if (C.zf) goto L_10de3dda;
  /* 10de3d8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3d92 push eax */
  push32((uint32_t)(EAX));
  /* 10de3d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3d96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de3d98 push edx */
  push32((uint32_t)(EDX));
  /* 10de3d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3d9c push eax */
  push32((uint32_t)(EAX));
  /* 10de3d9d call 0x10de3540 */
  push32(0x10de3da2u); f_10de3540();
  /* 10de3da2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10de3da7 jne 0x10de3dd8 */
  if (!C.zf) goto L_10de3dd8;
  /* 10de3da9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3dac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de3dae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3db1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10de3db5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3db8 je 0x10de3dca */
  if (C.zf) goto L_10de3dca;
  /* 10de3dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3dbd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de3dbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3dc2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10de3dc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3dc8 jne 0x10de3dd8 */
  if (!C.zf) goto L_10de3dd8;
L_10de3dca:;
  /* 10de3dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3dcd sub eax, dword ptr [0x10dff5bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dff5bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3dd3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10de3dd6 jmp 0x10de3de8 */
  goto L_10de3de8;
L_10de3dd8:;
  /* 10de3dd8 jmp 0x10de3d7e */
  goto L_10de3d7e;
L_10de3dda:;
  /* 10de3dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3ddd sub eax, dword ptr [0x10dff5bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dff5bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3de3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10de3de6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10de3de8:;
  /* 10de3de8 mov esp, ebp */
  ESP = (EBP);
  /* 10de3dea pop ebp */
  EBP = (pop32());
  /* 10de3deb ret  */
  ESPCHK(0x10de3d70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10de3df0 (238 bytes, 80 insns) */
void f_10de3df0(void) {
  FTRACE(0x10de3df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3df1 mov ebp, esp */
  EBP = (ESP);
  /* 10de3df3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3df6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10de3dfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3e00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de3e03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3e07 jne 0x10de3e10 */
  if (!C.zf) goto L_10de3e10;
  /* 10de3e09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3e0b jmp 0x10de3eda */
  goto L_10de3eda;
L_10de3e10:;
  /* 10de3e10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3e13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de3e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3e18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3e1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10de3e1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3e20 je 0x10de3e2d */
  if (C.zf) goto L_10de3e2d;
  /* 10de3e22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3e28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10de3e2b jmp 0x10de3e10 */
  goto L_10de3e10;
L_10de3e2d:;
  /* 10de3e2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10de3e32 push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3e39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10de3e3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10de3e43 push eax */
  push32((uint32_t)(EAX));
  /* 10de3e44 call 0x10dd3a90 */
  push32(0x10de3e49u); f_10dd3a90();
  /* 10de3e49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3e4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10de3e4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3e52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10de3e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3e59 jne 0x10de3e65 */
  if (!C.zf) goto L_10de3e65;
  /* 10de3e5b push 9 */
  push32((uint32_t)(0x9u));
  /* 10de3e5d call 0x10dd2a00 */
  push32(0x10de3e62u); f_10dd2a00();
  /* 10de3e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de3e65:;
  /* 10de3e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3e68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10de3e6b:;
  /* 10de3e6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3e6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3e71 je 0x10de3ece */
  if (C.zf) goto L_10de3ece;
  /* 10de3e73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10de3e78 push 0x10dfbad8 */
  push32((uint32_t)(0x10dfbad8u));
  /* 10de3e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10de3e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3e82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10de3e84 push edx */
  push32((uint32_t)(EDX));
  /* 10de3e85 call 0x10dd68c0 */
  push32(0x10de3e8au); f_10dd68c0();
  /* 10de3e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3e8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3e90 push eax */
  push32((uint32_t)(EAX));
  /* 10de3e91 call 0x10dd3a90 */
  push32(0x10de3e96u); f_10dd3a90();
  /* 10de3e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3e99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3e9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10de3e9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3ea1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3ea4 je 0x10de3eba */
  if (C.zf) goto L_10de3eba;
  /* 10de3ea6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3ea9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10de3eab push ecx */
  push32((uint32_t)(ECX));
  /* 10de3eac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3eaf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10de3eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10de3eb2 call 0x10dd6a40 */
  push32(0x10de3eb7u); f_10dd6a40();
  /* 10de3eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10de3eba:;
  /* 10de3eba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10de3ebd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3ec0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10de3ec3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3ec6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3ec9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10de3ecc jmp 0x10de3e6b */
  goto L_10de3e6b;
L_10de3ece:;
  /* 10de3ece mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10de3ed1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10de3ed7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10de3eda:;
  /* 10de3eda mov esp, ebp */
  ESP = (EBP);
  /* 10de3edc pop ebp */
  EBP = (pop32());
  /* 10de3edd ret  */
  ESPCHK(0x10de3df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x10de3ee0 (237 bytes, 81 insns) */
void f_10de3ee0(void) {
  FTRACE(0x10de3ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10de3ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10de3ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3ee4 cmp dword ptr [0x10e00d0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00d0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3eeb jne 0x10de3f02 */
  if (!C.zf) goto L_10de3f02;
  /* 10de3eed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10de3ef0 push eax */
  push32((uint32_t)(EAX));
  /* 10de3ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 10de3ef5 call 0x10de3fe0 */
  push32(0x10de3efau); f_10de3fe0();
  /* 10de3efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3efd jmp 0x10de3fc9 */
  goto L_10de3fc9;
L_10de3f02:;
  /* 10de3f02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10de3f04 call 0x10dd7490 */
  push32(0x10de3f09u); f_10dd7490();
  /* 10de3f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3f0c jmp 0x10de3f17 */
  goto L_10de3f17;
L_10de3f0e:;
  /* 10de3f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3f11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3f14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10de3f17:;
  /* 10de3f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3f1a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10de3f1e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10de3f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3f25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de3f2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10de3f2d je 0x10de3fab */
  if (C.zf) goto L_10de3fab;
  /* 10de3f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3f32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3f37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de3f39 mov cl, byte ptr [eax + 0x10e00e21] */
  CL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10de3f3f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10de3f42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de3f44 je 0x10de3f96 */
  if (C.zf) goto L_10de3f96;
  /* 10de3f46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3f49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3f4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10de3f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3f52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de3f54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de3f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10de3f58 jne 0x10de3f68 */
  if (!C.zf) goto L_10de3f68;
  /* 10de3f5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10de3f5c call 0x10dd7530 */
  push32(0x10de3f61u); f_10dd7530();
  /* 10de3f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3f66 jmp 0x10de3fc9 */
  goto L_10de3fc9;
L_10de3f68:;
  /* 10de3f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3f6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de3f71 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10de3f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3f77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10de3f79 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10de3f7b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10de3f7d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3f80 jne 0x10de3f94 */
  if (!C.zf) goto L_10de3f94;
  /* 10de3f82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10de3f84 call 0x10dd7530 */
  push32(0x10de3f89u); f_10dd7530();
  /* 10de3f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3f8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10de3f92 jmp 0x10de3fc9 */
  goto L_10de3fc9;
L_10de3f94:;
  /* 10de3f94 jmp 0x10de3fa6 */
  goto L_10de3fa6;
L_10de3f96:;
  /* 10de3f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3f99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10de3f9f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3fa2 jne 0x10de3fa6 */
  if (!C.zf) goto L_10de3fa6;
  /* 10de3fa4 jmp 0x10de3fab */
  goto L_10de3fab;
L_10de3fa6:;
  /* 10de3fa6 jmp 0x10de3f0e */
  goto L_10de3f0e;
L_10de3fab:;
  /* 10de3fab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10de3fad call 0x10dd7530 */
  push32(0x10de3fb2u); f_10dd7530();
  /* 10de3fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10de3fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10de3fb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de3fbd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10de3fc0 jne 0x10de3fc7 */
  if (!C.zf) goto L_10de3fc7;
  /* 10de3fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10de3fc5 jmp 0x10de3fc9 */
  goto L_10de3fc9;
L_10de3fc7:;
  /* 10de3fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10de3fc9:;
  /* 10de3fc9 mov esp, ebp */
  ESP = (EBP);
  /* 10de3fcb pop ebp */
  EBP = (pop32());
  /* 10de3fcc ret  */
  ESPCHK(0x10de3ee0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10de3fe0 (193 bytes, 87 insns) */
void f_10de3fe0(void) {
  FTRACE(0x10de3fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de3fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de3fe2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10de3fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10de3fe7 mov ebx, eax */
  EBX = (EAX);
  /* 10de3fe9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10de3fec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10de3ff0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10de3ff6 je 0x10de400b */
  if (C.zf) goto L_10de400b;
L_10de3ff8:;
  /* 10de3ff8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10de3ffa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10de3ffb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de3ffd je 0x10de3fd0 */
  if (C.zf) { jmp_ind(0x10de3fd0u); return; }
  /* 10de3fff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10de4001 je 0x10de4054 */
  if (C.zf) goto L_10de4054;
  /* 10de4003 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10de4009 jne 0x10de3ff8 */
  if (!C.zf) goto L_10de3ff8;
L_10de400b:;
  /* 10de400b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10de400d push edi */
  push32((uint32_t)(EDI));
  /* 10de400e mov eax, ebx */
  EAX = (EBX);
  /* 10de4010 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10de4013 push esi */
  push32((uint32_t)(ESI));
  /* 10de4014 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10de4016:;
  /* 10de4016 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10de4018 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10de401d mov eax, ecx */
  EAX = (ECX);
  /* 10de401f mov esi, edi */
  ESI = (EDI);
  /* 10de4021 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10de4023 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10de4025 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10de4027 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10de402a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10de402d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10de402f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10de4031 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10de4034 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10de403a jne 0x10de4058 */
  if (!C.zf) goto L_10de4058;
  /* 10de403c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10de4041 je 0x10de4016 */
  if (C.zf) goto L_10de4016;
  /* 10de4043 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10de4048 jne 0x10de4052 */
  if (!C.zf) goto L_10de4052;
  /* 10de404a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10de4050 jne 0x10de4016 */
  if (!C.zf) goto L_10de4016;
L_10de4052:;
  /* 10de4052 pop esi */
  ESI = (pop32());
  /* 10de4053 pop edi */
  EDI = (pop32());
L_10de4054:;
  /* 10de4054 pop ebx */
  EBX = (pop32());
  /* 10de4055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10de4057 ret  */
  ESPCHK(0x10de3fe0u, _esp0);
  ESP += 4; return;
L_10de4058:;
  /* 10de4058 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10de405b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de405d je 0x10de4095 */
  if (C.zf) goto L_10de4095;
  /* 10de405f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10de4061 je 0x10de4052 */
  if (C.zf) goto L_10de4052;
  /* 10de4063 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de4065 je 0x10de408e */
  if (C.zf) goto L_10de408e;
  /* 10de4067 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10de4069 je 0x10de4052 */
  if (C.zf) goto L_10de4052;
  /* 10de406b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10de406e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de4070 je 0x10de4087 */
  if (C.zf) goto L_10de4087;
  /* 10de4072 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10de4074 je 0x10de4052 */
  if (C.zf) goto L_10de4052;
  /* 10de4076 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10de4078 je 0x10de4080 */
  if (C.zf) goto L_10de4080;
  /* 10de407a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10de407c je 0x10de4052 */
  if (C.zf) goto L_10de4052;
  /* 10de407e jmp 0x10de4016 */
  goto L_10de4016;
L_10de4080:;
  /* 10de4080 pop esi */
  ESI = (pop32());
  /* 10de4081 pop edi */
  EDI = (pop32());
  /* 10de4082 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10de4085 pop ebx */
  EBX = (pop32());
  /* 10de4086 ret  */
  ESPCHK(0x10de3fe0u, _esp0);
  ESP += 4; return;
L_10de4087:;
  /* 10de4087 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10de408a pop esi */
  ESI = (pop32());
  /* 10de408b pop edi */
  EDI = (pop32());
  /* 10de408c pop ebx */
  EBX = (pop32());
  /* 10de408d ret  */
  ESPCHK(0x10de3fe0u, _esp0);
  ESP += 4; return;
L_10de408e:;
  /* 10de408e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10de4091 pop esi */
  ESI = (pop32());
  /* 10de4092 pop edi */
  EDI = (pop32());
  /* 10de4093 pop ebx */
  EBX = (pop32());
  /* 10de4094 ret  */
  ESPCHK(0x10de3fe0u, _esp0);
  ESP += 4; return;
L_10de4095:;
  /* 10de4095 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10de4098 pop esi */
  ESI = (pop32());
  /* 10de4099 pop edi */
  EDI = (pop32());
  /* 10de409a pop ebx */
  EBX = (pop32());
  /* 10de409b ret  */
  ESPCHK(0x10de3fe0u, _esp0);
  ESP += 4; return;
  /* 10de409c jmp dword ptr [0x10e022d0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10e022d0)))); return;
}

/* RtlUnwind @ 0x10de41ec (6 bytes, 1 insns) */
void f_10de41ec(void) {
  FTRACE(0x10de41ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10de41ec jmp dword ptr [0x10e022ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10e022ac)))); return;
}

