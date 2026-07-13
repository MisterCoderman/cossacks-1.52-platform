#include "recomp.h"

/* FUN_10010ce0 @ 0x108c0ce0 (878 bytes, 273 insns) */
void f_108c0ce0(void) {
  FTRACE(0x108c0ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c0ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c0ce1 mov ebp, esp */
  EBP = (ESP);
  /* 108c0ce3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c0ce6 push esi */
  push32((uint32_t)(ESI));
  /* 108c0ce7 mov eax, dword ptr [0x108dec98] */
  EAX = (r32((uint32_t)(0x108dec98)));
  /* 108c0cec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c0cef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108c0cf6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0cfd jmp 0x108c0d08 */
  goto L_108c0d08;
L_108c0cff:;
  /* 108c0cff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0d02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108c0d08:;
  /* 108c0d08 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0d0c jae 0x108c0d41 */
  if (!C.cf) goto L_108c0d41;
  /* 108c0d0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0d14 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 108c0d17 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0d18 call 0x108b6b60 */
  push32(0x108c0d1du); f_108b6b60();
  /* 108c0d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d20 mov esi, eax */
  ESI = (EAX);
  /* 108c0d22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0d25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0d28 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 108c0d2c push ecx */
  push32((uint32_t)(ECX));
  /* 108c0d2d call 0x108b6b60 */
  push32(0x108c0d32u); f_108b6b60();
  /* 108c0d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d38 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108c0d3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c0d3f jmp 0x108c0cff */
  goto L_108c0cff;
L_108c0d41:;
  /* 108c0d41 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0d48 jmp 0x108c0d53 */
  goto L_108c0d53;
L_108c0d4a:;
  /* 108c0d4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0d4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108c0d53:;
  /* 108c0d53 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0d57 jae 0x108c0d8d */
  if (!C.cf) goto L_108c0d8d;
  /* 108c0d59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0d5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0d5f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 108c0d63 push eax */
  push32((uint32_t)(EAX));
  /* 108c0d64 call 0x108b6b60 */
  push32(0x108c0d69u); f_108b6b60();
  /* 108c0d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d6c mov esi, eax */
  ESI = (EAX);
  /* 108c0d6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0d74 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 108c0d78 push eax */
  push32((uint32_t)(EAX));
  /* 108c0d79 call 0x108b6b60 */
  push32(0x108c0d7eu); f_108b6b60();
  /* 108c0d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d81 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d84 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108c0d88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c0d8b jmp 0x108c0d4a */
  goto L_108c0d4a;
L_108c0d8d:;
  /* 108c0d8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0d90 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 108c0d96 push eax */
  push32((uint32_t)(EAX));
  /* 108c0d97 call 0x108b6b60 */
  push32(0x108c0d9cu); f_108b6b60();
  /* 108c0d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0d9f mov esi, eax */
  ESI = (EAX);
  /* 108c0da1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0da4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 108c0daa push edx */
  push32((uint32_t)(EDX));
  /* 108c0dab call 0x108b6b60 */
  push32(0x108c0db0u); f_108b6b60();
  /* 108c0db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0db3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0db6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108c0dba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c0dbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0dc0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 108c0dc6 push edx */
  push32((uint32_t)(EDX));
  /* 108c0dc7 call 0x108b6b60 */
  push32(0x108c0dccu); f_108b6b60();
  /* 108c0dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0dcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0dd2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108c0dd6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c0dd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0ddc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 108c0de2 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0de3 call 0x108b6b60 */
  push32(0x108c0de8u); f_108b6b60();
  /* 108c0de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0deb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0dee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108c0df2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c0df5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0df8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 108c0dfe push edx */
  push32((uint32_t)(EDX));
  /* 108c0dff call 0x108b6b60 */
  push32(0x108c0e04u); f_108b6b60();
  /* 108c0e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0e0a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108c0e0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c0e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c0e14 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e19 push eax */
  push32((uint32_t)(EAX));
  /* 108c0e1a call 0x108b3d10 */
  push32(0x108c0e1fu); f_108b3d10();
  /* 108c0e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c0e25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0e29 je 0x108c1046 */
  if (C.zf) goto L_108c1046;
  /* 108c0e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0e32 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108c0e35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0e38 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e3e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c0e41 push 0xac */
  push32((uint32_t)(0xacu));
  /* 108c0e46 mov eax, dword ptr [0x108dec98] */
  EAX = (r32((uint32_t)(0x108dec98)));
  /* 108c0e4b push eax */
  push32((uint32_t)(EAX));
  /* 108c0e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c0e4f push ecx */
  push32((uint32_t)(ECX));
  /* 108c0e50 call 0x108ba610 */
  push32(0x108c0e55u); f_108ba610();
  /* 108c0e55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e58 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0e5f jmp 0x108c0e6a */
  goto L_108c0e6a;
L_108c0e61:;
  /* 108c0e61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0e64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108c0e6a:;
  /* 108c0e6a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0e6e jae 0x108c0ede */
  if (!C.cf) goto L_108c0ede;
  /* 108c0e70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0e73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0e76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0e79 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 108c0e7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0e82 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108c0e85 push edx */
  push32((uint32_t)(EDX));
  /* 108c0e86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0e89 push eax */
  push32((uint32_t)(EAX));
  /* 108c0e8a call 0x108b6ce0 */
  push32(0x108c0e8fu); f_108b6ce0();
  /* 108c0e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e92 push eax */
  push32((uint32_t)(EAX));
  /* 108c0e93 call 0x108b6b60 */
  push32(0x108c0e98u); f_108b6b60();
  /* 108c0e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0e9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0e9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108c0ea2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c0ea5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0ea8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0eab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0eae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 108c0eb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0eb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0eb8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 108c0ebc push edx */
  push32((uint32_t)(EDX));
  /* 108c0ebd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0ec0 push eax */
  push32((uint32_t)(EAX));
  /* 108c0ec1 call 0x108b6ce0 */
  push32(0x108c0ec6u); f_108b6ce0();
  /* 108c0ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ec9 push eax */
  push32((uint32_t)(EAX));
  /* 108c0eca call 0x108b6b60 */
  push32(0x108c0ecfu); f_108b6b60();
  /* 108c0ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0ed5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108c0ed9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c0edc jmp 0x108c0e61 */
  goto L_108c0e61;
L_108c0ede:;
  /* 108c0ede mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c0ee5 jmp 0x108c0ef0 */
  goto L_108c0ef0;
L_108c0ee7:;
  /* 108c0ee7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0eea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0eed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108c0ef0:;
  /* 108c0ef0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c0ef4 jae 0x108c0f66 */
  if (!C.cf) goto L_108c0f66;
  /* 108c0ef6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0ef9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0efc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0eff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 108c0f03 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0f06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0f09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 108c0f0d push eax */
  push32((uint32_t)(EAX));
  /* 108c0f0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f11 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0f12 call 0x108b6ce0 */
  push32(0x108c0f17u); f_108b6ce0();
  /* 108c0f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0f1a push eax */
  push32((uint32_t)(EAX));
  /* 108c0f1b call 0x108b6b60 */
  push32(0x108c0f20u); f_108b6b60();
  /* 108c0f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0f23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f26 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108c0f2a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c0f2d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0f30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0f33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f36 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 108c0f3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c0f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0f40 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 108c0f44 push eax */
  push32((uint32_t)(EAX));
  /* 108c0f45 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f48 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0f49 call 0x108b6ce0 */
  push32(0x108c0f4eu); f_108b6ce0();
  /* 108c0f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0f51 push eax */
  push32((uint32_t)(EAX));
  /* 108c0f52 call 0x108b6b60 */
  push32(0x108c0f57u); f_108b6b60();
  /* 108c0f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0f5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f5d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108c0f61 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c0f64 jmp 0x108c0ee7 */
  goto L_108c0ee7;
L_108c0f66:;
  /* 108c0f66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0f69 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f6c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 108c0f72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0f75 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 108c0f7b push ecx */
  push32((uint32_t)(ECX));
  /* 108c0f7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f7f push edx */
  push32((uint32_t)(EDX));
  /* 108c0f80 call 0x108b6ce0 */
  push32(0x108c0f85u); f_108b6ce0();
  /* 108c0f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0f88 push eax */
  push32((uint32_t)(EAX));
  /* 108c0f89 call 0x108b6b60 */
  push32(0x108c0f8eu); f_108b6b60();
  /* 108c0f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0f91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0f94 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108c0f98 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c0f9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0f9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0fa1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 108c0fa7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0faa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 108c0fb0 push eax */
  push32((uint32_t)(EAX));
  /* 108c0fb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0fb5 call 0x108b6ce0 */
  push32(0x108c0fbau); f_108b6ce0();
  /* 108c0fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0fbd push eax */
  push32((uint32_t)(EAX));
  /* 108c0fbe call 0x108b6b60 */
  push32(0x108c0fc3u); f_108b6b60();
  /* 108c0fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0fc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0fc9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108c0fcd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c0fd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c0fd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0fd6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 108c0fdc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c0fdf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 108c0fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 108c0fe6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0fe9 push edx */
  push32((uint32_t)(EDX));
  /* 108c0fea call 0x108b6ce0 */
  push32(0x108c0fefu); f_108b6ce0();
  /* 108c0fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ff2 push eax */
  push32((uint32_t)(EAX));
  /* 108c0ff3 call 0x108b6b60 */
  push32(0x108c0ff8u); f_108b6b60();
  /* 108c0ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c0ffb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c0ffe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108c1002 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c1005 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c1008 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c100b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 108c1011 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1014 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 108c101a push eax */
  push32((uint32_t)(EAX));
  /* 108c101b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c101e push ecx */
  push32((uint32_t)(ECX));
  /* 108c101f call 0x108b6ce0 */
  push32(0x108c1024u); f_108b6ce0();
  /* 108c1024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1027 push eax */
  push32((uint32_t)(EAX));
  /* 108c1028 call 0x108b6b60 */
  push32(0x108c102du); f_108b6b60();
  /* 108c102d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1030 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c1033 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108c1037 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c103a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c103d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c1040 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_108c1046:;
  /* 108c1046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1049 pop esi */
  ESI = (pop32());
  /* 108c104a mov esp, ebp */
  ESP = (EBP);
  /* 108c104c pop ebp */
  EBP = (pop32());
  /* 108c104d ret  */
  ESPCHK(0x108c0ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x108c1050 (31 bytes, 15 insns) */
void f_108c1050(void) {
  FTRACE(0x108c1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1050 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1051 mov ebp, esp */
  EBP = (ESP);
  /* 108c1053 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c1055 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1058 push eax */
  push32((uint32_t)(EAX));
  /* 108c1059 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c105c push ecx */
  push32((uint32_t)(ECX));
  /* 108c105d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1060 push edx */
  push32((uint32_t)(EDX));
  /* 108c1061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1064 push eax */
  push32((uint32_t)(EAX));
  /* 108c1065 call 0x108c1070 */
  push32(0x108c106au); f_108c1070();
  /* 108c106a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c106d pop ebp */
  EBP = (pop32());
  /* 108c106e ret  */
  ESPCHK(0x108c1050u, _esp0);
  ESP += 4; return;
}

/* FUN_10011070 @ 0x108c1070 (393 bytes, 123 insns) */
void f_108c1070(void) {
  FTRACE(0x108c1070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1070 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1071 mov ebp, esp */
  EBP = (ESP);
  /* 108c1073 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1076 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c107a jne 0x108c1086 */
  if (!C.zf) goto L_108c1086;
  /* 108c107c mov eax, dword ptr [0x108dec98] */
  EAX = (r32((uint32_t)(0x108dec98)));
  /* 108c1081 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108c1084 jmp 0x108c108c */
  goto L_108c108c;
L_108c1086:;
  /* 108c1086 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1089 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108c108c:;
  /* 108c108c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c108f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c1092 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1095 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c1098 push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108c109d call dword ptr [0x108e2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2330))), 0x108c10a3u);
  /* 108c10a3 cmp dword ptr [0x108df8ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c10aa je 0x108c10ca */
  if (C.zf) goto L_108c10ca;
  /* 108c10ac push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108c10b1 call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108c10b7u);
  /* 108c10b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c10b9 call 0x108b7730 */
  push32(0x108c10beu); f_108b7730();
  /* 108c10be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c10c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108c10c8 jmp 0x108c10d1 */
  goto L_108c10d1;
L_108c10ca:;
  /* 108c10ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108c10d1:;
  /* 108c10d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c10d5 jbe 0x108c11c2 */
  if ((C.cf||C.zf)) goto L_108c11c2;
  /* 108c10db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c10de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c10e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 108c10e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c10e7 je 0x108c10f1 */
  if (C.zf) goto L_108c10f1;
  /* 108c10e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c10ed je 0x108c10f6 */
  if (C.zf) goto L_108c10f6;
  /* 108c10ef jmp 0x108c1150 */
  goto L_108c1150;
L_108c10f1:;
  /* 108c10f1 jmp 0x108c11c2 */
  goto L_108c11c2;
L_108c10f6:;
  /* 108c10f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c10f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c10fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 108c10ff mov dword ptr [0x108df8d8], 0 */
  w32((uint32_t)(0x108df8d8), (0x0u));
  /* 108c1109 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c110c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c110f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1112 jne 0x108c1127 */
  if (!C.zf) goto L_108c1127;
  /* 108c1114 mov dword ptr [0x108df8d8], 1 */
  w32((uint32_t)(0x108df8d8), (0x1u));
  /* 108c111e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1121 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1124 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108c1127:;
  /* 108c1127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c112a push ecx */
  push32((uint32_t)(ECX));
  /* 108c112b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 108c112e push edx */
  push32((uint32_t)(EDX));
  /* 108c112f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 108c1132 push eax */
  push32((uint32_t)(EAX));
  /* 108c1133 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1136 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1137 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c113a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c113c push eax */
  push32((uint32_t)(EAX));
  /* 108c113d call 0x108c1200 */
  push32(0x108c1142u); f_108c1200();
  /* 108c1142 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1145 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1148 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c114b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108c114e jmp 0x108c11bd */
  goto L_108c11bd;
L_108c1150:;
  /* 108c1150 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c1155 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c1157 mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c115d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c115f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c1163 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108c1169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c116b je 0x108c1198 */
  if (C.zf) goto L_108c1198;
  /* 108c116d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1171 jbe 0x108c1198 */
  if ((C.cf||C.zf)) goto L_108c1198;
  /* 108c1173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1179 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c117b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108c117d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1183 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c1186 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1189 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c118c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108c118f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1192 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1195 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108c1198:;
  /* 108c1198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c119b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c119e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c11a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108c11a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c11a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c11a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c11ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c11ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c11b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108c11b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c11b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c11ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108c11bd:;
  /* 108c11bd jmp 0x108c10d1 */
  goto L_108c10d1;
L_108c11c2:;
  /* 108c11c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c11c6 je 0x108c11d4 */
  if (C.zf) goto L_108c11d4;
  /* 108c11c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c11ca call 0x108b77d0 */
  push32(0x108c11cfu); f_108b77d0();
  /* 108c11cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c11d2 jmp 0x108c11df */
  goto L_108c11df;
L_108c11d4:;
  /* 108c11d4 push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108c11d9 call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108c11dfu);
L_108c11df:;
  /* 108c11df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c11e3 jbe 0x108c11f3 */
  if ((C.cf||C.zf)) goto L_108c11f3;
  /* 108c11e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c11e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108c11eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c11ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c11f1 jmp 0x108c11f5 */
  goto L_108c11f5;
L_108c11f3:;
  /* 108c11f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c11f5:;
  /* 108c11f5 mov esp, ebp */
  ESP = (EBP);
  /* 108c11f7 pop ebp */
  EBP = (pop32());
  /* 108c11f8 ret  */
  ESPCHK(0x108c1070u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x108c1200 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_108c1200(void) {
  FTRACE(0x108c1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1200 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1201 mov ebp, esp */
  EBP = (ESP);
  /* 108c1203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1206 push esi */
  push32((uint32_t)(ESI));
  /* 108c1207 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 108c120b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c120e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1211 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1214 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c1217 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c121b ja 0x108c1768 */
  if ((!C.cf&&!C.zf)) goto L_108c1768;
  /* 108c1221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c1226 mov dl, byte ptr [eax + 0x108c17c9] */
  DL = (r8((uint32_t)(EAX + 0x108c17c9)));
  /* 108c122c jmp dword ptr [edx*4 + 0x108c176d] */
  switch (EDX) {
    case 0: goto L_108c1746;
    case 1: goto L_108c1255;
    case 2: goto L_108c129b;
    case 3: goto L_108c13e8;
    case 4: goto L_108c1410;
    case 5: goto L_108c14af;
    case 6: goto L_108c151b;
    case 7: goto L_108c1544;
    case 8: goto L_108c1585;
    case 9: goto L_108c1667;
    case 10: goto L_108c16ce;
    case 11: goto L_108c171b;
    case 12: goto L_108c1233;
    case 13: goto L_108c1278;
    case 14: goto L_108c12be;
    case 15: goto L_108c13be;
    case 16: goto L_108c1455;
    case 17: goto L_108c1482;
    case 18: goto L_108c14d7;
    case 19: goto L_108c155b;
    case 20: goto L_108c1609;
    case 21: goto L_108c1698;
    case 22: goto L_108c1768;
    default: x86_unimpl("switch@0x108c122c out of table"); return;
  }
L_108c1233:;
  /* 108c1233 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1236 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1237 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c123a push edx */
  push32((uint32_t)(EDX));
  /* 108c123b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c123e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108c1241 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1244 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108c1247 push eax */
  push32((uint32_t)(EAX));
  /* 108c1248 call 0x108c1820 */
  push32(0x108c124du); f_108c1820();
  /* 108c124d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1250 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1255:;
  /* 108c1255 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1258 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1259 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c125c push edx */
  push32((uint32_t)(EDX));
  /* 108c125d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1260 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108c1263 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1266 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 108c126a push eax */
  push32((uint32_t)(EAX));
  /* 108c126b call 0x108c1820 */
  push32(0x108c1270u); f_108c1820();
  /* 108c1270 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1273 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1278:;
  /* 108c1278 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c127b push ecx */
  push32((uint32_t)(ECX));
  /* 108c127c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c127f push edx */
  push32((uint32_t)(EDX));
  /* 108c1280 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1283 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108c1286 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1289 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 108c128d push eax */
  push32((uint32_t)(EAX));
  /* 108c128e call 0x108c1820 */
  push32(0x108c1293u); f_108c1820();
  /* 108c1293 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1296 jmp 0x108c1768 */
  goto L_108c1768;
L_108c129b:;
  /* 108c129b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c129e push ecx */
  push32((uint32_t)(ECX));
  /* 108c129f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c12a2 push edx */
  push32((uint32_t)(EDX));
  /* 108c12a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c12a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108c12a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c12ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 108c12b0 push eax */
  push32((uint32_t)(EAX));
  /* 108c12b1 call 0x108c1820 */
  push32(0x108c12b6u); f_108c1820();
  /* 108c12b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c12b9 jmp 0x108c1768 */
  goto L_108c1768;
L_108c12be:;
  /* 108c12be cmp dword ptr [0x108df8d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c12c5 je 0x108c1346 */
  if (C.zf) goto L_108c1346;
  /* 108c12c7 mov dword ptr [0x108df8d8], 0 */
  w32((uint32_t)(0x108df8d8), (0x0u));
  /* 108c12d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c12d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108c12d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c12d8 push edx */
  push32((uint32_t)(EDX));
  /* 108c12d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c12dc push eax */
  push32((uint32_t)(EAX));
  /* 108c12dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c12e0 push ecx */
  push32((uint32_t)(ECX));
  /* 108c12e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c12e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 108c12ea push eax */
  push32((uint32_t)(EAX));
  /* 108c12eb call 0x108c19d0 */
  push32(0x108c12f0u); f_108c19d0();
  /* 108c12f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c12f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c12f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c12f9 jne 0x108c1300 */
  if (!C.zf) goto L_108c1300;
  /* 108c12fb jmp 0x108c1768 */
  goto L_108c1768;
L_108c1300:;
  /* 108c1300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1303 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1305 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 108c1308 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c130b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c130d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1310 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1313 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c1315 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1318 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c131a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c131d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1320 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c1322 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1325 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1326 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1329 push edx */
  push32((uint32_t)(EDX));
  /* 108c132a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c132d push eax */
  push32((uint32_t)(EAX));
  /* 108c132e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1331 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1332 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1335 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 108c133b push eax */
  push32((uint32_t)(EAX));
  /* 108c133c call 0x108c19d0 */
  push32(0x108c1341u); f_108c19d0();
  /* 108c1341 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1344 jmp 0x108c13b9 */
  goto L_108c13b9;
L_108c1346:;
  /* 108c1346 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1349 push ecx */
  push32((uint32_t)(ECX));
  /* 108c134a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c134d push edx */
  push32((uint32_t)(EDX));
  /* 108c134e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1351 push eax */
  push32((uint32_t)(EAX));
  /* 108c1352 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1355 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1356 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1359 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 108c135f push eax */
  push32((uint32_t)(EAX));
  /* 108c1360 call 0x108c19d0 */
  push32(0x108c1365u); f_108c19d0();
  /* 108c1365 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1368 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c136b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c136e jne 0x108c1375 */
  if (!C.zf) goto L_108c1375;
  /* 108c1370 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1375:;
  /* 108c1375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1378 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c137a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 108c137d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1380 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1382 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1385 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1388 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c138a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c138d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c138f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1392 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1395 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c1397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c139a push ecx */
  push32((uint32_t)(ECX));
  /* 108c139b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c139e push edx */
  push32((uint32_t)(EDX));
  /* 108c139f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c13a2 push eax */
  push32((uint32_t)(EAX));
  /* 108c13a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c13a6 push ecx */
  push32((uint32_t)(ECX));
  /* 108c13a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c13aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 108c13b0 push eax */
  push32((uint32_t)(EAX));
  /* 108c13b1 call 0x108c19d0 */
  push32(0x108c13b6u); f_108c19d0();
  /* 108c13b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c13b9:;
  /* 108c13b9 jmp 0x108c1768 */
  goto L_108c1768;
L_108c13be:;
  /* 108c13be mov ecx, dword ptr [0x108df8d8] */
  ECX = (r32((uint32_t)(0x108df8d8)));
  /* 108c13c4 mov dword ptr [0x108df8e8], ecx */
  w32((uint32_t)(0x108df8e8), (ECX));
  /* 108c13ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c13cd push edx */
  push32((uint32_t)(EDX));
  /* 108c13ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c13d1 push eax */
  push32((uint32_t)(EAX));
  /* 108c13d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c13d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c13d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108c13da push edx */
  push32((uint32_t)(EDX));
  /* 108c13db call 0x108c1870 */
  push32(0x108c13e0u); f_108c1870();
  /* 108c13e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c13e3 jmp 0x108c1768 */
  goto L_108c1768;
L_108c13e8:;
  /* 108c13e8 mov eax, dword ptr [0x108df8d8] */
  EAX = (r32((uint32_t)(0x108df8d8)));
  /* 108c13ed mov dword ptr [0x108df8e8], eax */
  w32((uint32_t)(0x108df8e8), (EAX));
  /* 108c13f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c13f5 push ecx */
  push32((uint32_t)(ECX));
  /* 108c13f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c13f9 push edx */
  push32((uint32_t)(EDX));
  /* 108c13fa push 2 */
  push32((uint32_t)(0x2u));
  /* 108c13fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c13ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108c1402 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1403 call 0x108c1870 */
  push32(0x108c1408u); f_108c1870();
  /* 108c1408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c140b jmp 0x108c1768 */
  goto L_108c1768;
L_108c1410:;
  /* 108c1410 mov edx, dword ptr [0x108df8d8] */
  EDX = (r32((uint32_t)(0x108df8d8)));
  /* 108c1416 mov dword ptr [0x108df8e8], edx */
  w32((uint32_t)(0x108df8e8), (EDX));
  /* 108c141c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c141f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 108c1422 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c1423 mov ecx, 0xc */
  ECX = (0xcu);
  /* 108c1428 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c142a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c142d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1431 jne 0x108c143a */
  if (!C.zf) goto L_108c143a;
  /* 108c1433 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_108c143a:;
  /* 108c143a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c143d push edx */
  push32((uint32_t)(EDX));
  /* 108c143e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1441 push eax */
  push32((uint32_t)(EAX));
  /* 108c1442 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c1444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1447 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1448 call 0x108c1870 */
  push32(0x108c144du); f_108c1870();
  /* 108c144d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1450 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1455:;
  /* 108c1455 mov edx, dword ptr [0x108df8d8] */
  EDX = (r32((uint32_t)(0x108df8d8)));
  /* 108c145b mov dword ptr [0x108df8e8], edx */
  w32((uint32_t)(0x108df8e8), (EDX));
  /* 108c1461 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1464 push eax */
  push32((uint32_t)(EAX));
  /* 108c1465 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1468 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1469 push 3 */
  push32((uint32_t)(0x3u));
  /* 108c146b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c146e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108c1471 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1474 push eax */
  push32((uint32_t)(EAX));
  /* 108c1475 call 0x108c1870 */
  push32(0x108c147au); f_108c1870();
  /* 108c147a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c147d jmp 0x108c1768 */
  goto L_108c1768;
L_108c1482:;
  /* 108c1482 mov ecx, dword ptr [0x108df8d8] */
  ECX = (r32((uint32_t)(0x108df8d8)));
  /* 108c1488 mov dword ptr [0x108df8e8], ecx */
  w32((uint32_t)(0x108df8e8), (ECX));
  /* 108c148e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1491 push edx */
  push32((uint32_t)(EDX));
  /* 108c1492 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1495 push eax */
  push32((uint32_t)(EAX));
  /* 108c1496 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c1498 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c149b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108c149e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c14a1 push edx */
  push32((uint32_t)(EDX));
  /* 108c14a2 call 0x108c1870 */
  push32(0x108c14a7u); f_108c1870();
  /* 108c14a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c14aa jmp 0x108c1768 */
  goto L_108c1768;
L_108c14af:;
  /* 108c14af mov eax, dword ptr [0x108df8d8] */
  EAX = (r32((uint32_t)(0x108df8d8)));
  /* 108c14b4 mov dword ptr [0x108df8e8], eax */
  w32((uint32_t)(0x108df8e8), (EAX));
  /* 108c14b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c14bc push ecx */
  push32((uint32_t)(ECX));
  /* 108c14bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c14c0 push edx */
  push32((uint32_t)(EDX));
  /* 108c14c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c14c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c14c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108c14c9 push ecx */
  push32((uint32_t)(ECX));
  /* 108c14ca call 0x108c1870 */
  push32(0x108c14cfu); f_108c1870();
  /* 108c14cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c14d2 jmp 0x108c1768 */
  goto L_108c1768;
L_108c14d7:;
  /* 108c14d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c14da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c14de jg 0x108c14fc */
  if ((!C.zf&&C.sf==C.of)) goto L_108c14fc;
  /* 108c14e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c14e3 push eax */
  push32((uint32_t)(EAX));
  /* 108c14e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c14e7 push ecx */
  push32((uint32_t)(ECX));
  /* 108c14e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c14eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 108c14f1 push eax */
  push32((uint32_t)(EAX));
  /* 108c14f2 call 0x108c1820 */
  push32(0x108c14f7u); f_108c1820();
  /* 108c14f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c14fa jmp 0x108c1516 */
  goto L_108c1516;
L_108c14fc:;
  /* 108c14fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c14ff push ecx */
  push32((uint32_t)(ECX));
  /* 108c1500 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1503 push edx */
  push32((uint32_t)(EDX));
  /* 108c1504 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1507 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 108c150d push ecx */
  push32((uint32_t)(ECX));
  /* 108c150e call 0x108c1820 */
  push32(0x108c1513u); f_108c1820();
  /* 108c1513 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c1516:;
  /* 108c1516 jmp 0x108c1768 */
  goto L_108c1768;
L_108c151b:;
  /* 108c151b mov edx, dword ptr [0x108df8d8] */
  EDX = (r32((uint32_t)(0x108df8d8)));
  /* 108c1521 mov dword ptr [0x108df8e8], edx */
  w32((uint32_t)(0x108df8e8), (EDX));
  /* 108c1527 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c152a push eax */
  push32((uint32_t)(EAX));
  /* 108c152b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c152e push ecx */
  push32((uint32_t)(ECX));
  /* 108c152f push 2 */
  push32((uint32_t)(0x2u));
  /* 108c1531 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1534 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1536 push eax */
  push32((uint32_t)(EAX));
  /* 108c1537 call 0x108c1870 */
  push32(0x108c153cu); f_108c1870();
  /* 108c153c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c153f jmp 0x108c1768 */
  goto L_108c1768;
L_108c1544:;
  /* 108c1544 mov ecx, dword ptr [0x108df8d8] */
  ECX = (r32((uint32_t)(0x108df8d8)));
  /* 108c154a mov dword ptr [0x108df8e8], ecx */
  w32((uint32_t)(0x108df8e8), (ECX));
  /* 108c1550 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1553 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 108c1556 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c1559 jmp 0x108c15ad */
  goto L_108c15ad;
L_108c155b:;
  /* 108c155b mov ecx, dword ptr [0x108df8d8] */
  ECX = (r32((uint32_t)(0x108df8d8)));
  /* 108c1561 mov dword ptr [0x108df8e8], ecx */
  w32((uint32_t)(0x108df8e8), (ECX));
  /* 108c1567 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c156a push edx */
  push32((uint32_t)(EDX));
  /* 108c156b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c156e push eax */
  push32((uint32_t)(EAX));
  /* 108c156f push 1 */
  push32((uint32_t)(0x1u));
  /* 108c1571 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1574 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108c1577 push edx */
  push32((uint32_t)(EDX));
  /* 108c1578 call 0x108c1870 */
  push32(0x108c157du); f_108c1870();
  /* 108c157d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1580 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1585:;
  /* 108c1585 mov eax, dword ptr [0x108df8d8] */
  EAX = (r32((uint32_t)(0x108df8d8)));
  /* 108c158a mov dword ptr [0x108df8e8], eax */
  w32((uint32_t)(0x108df8e8), (EAX));
  /* 108c158f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1592 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1596 jne 0x108c15a1 */
  if (!C.zf) goto L_108c15a1;
  /* 108c1598 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 108c159f jmp 0x108c15ad */
  goto L_108c15ad;
L_108c15a1:;
  /* 108c15a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c15a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 108c15a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c15aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108c15ad:;
  /* 108c15ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c15b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108c15b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c15b6 jge 0x108c15c1 */
  if ((C.sf==C.of)) goto L_108c15c1;
  /* 108c15b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c15bf jmp 0x108c15ee */
  goto L_108c15ee;
L_108c15c1:;
  /* 108c15c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c15c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108c15c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c15c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 108c15cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c15cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c15d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c15d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108c15d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c15d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 108c15de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c15e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c15e3 jl 0x108c15ee */
  if ((C.sf!=C.of)) goto L_108c15ee;
  /* 108c15e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c15e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c15eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108c15ee:;
  /* 108c15ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c15f1 push eax */
  push32((uint32_t)(EAX));
  /* 108c15f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c15f5 push ecx */
  push32((uint32_t)(ECX));
  /* 108c15f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c15f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c15fb push edx */
  push32((uint32_t)(EDX));
  /* 108c15fc call 0x108c1870 */
  push32(0x108c1601u); f_108c1870();
  /* 108c1601 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1604 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1609:;
  /* 108c1609 cmp dword ptr [0x108df8d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1610 je 0x108c1640 */
  if (C.zf) goto L_108c1640;
  /* 108c1612 mov dword ptr [0x108df8d8], 0 */
  w32((uint32_t)(0x108df8d8), (0x0u));
  /* 108c161c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c161f push eax */
  push32((uint32_t)(EAX));
  /* 108c1620 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1623 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1624 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1627 push edx */
  push32((uint32_t)(EDX));
  /* 108c1628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c162b push eax */
  push32((uint32_t)(EAX));
  /* 108c162c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c162f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 108c1635 push edx */
  push32((uint32_t)(EDX));
  /* 108c1636 call 0x108c19d0 */
  push32(0x108c163bu); f_108c19d0();
  /* 108c163b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c163e jmp 0x108c1662 */
  goto L_108c1662;
L_108c1640:;
  /* 108c1640 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1643 push eax */
  push32((uint32_t)(EAX));
  /* 108c1644 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1647 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1648 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c164b push edx */
  push32((uint32_t)(EDX));
  /* 108c164c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c164f push eax */
  push32((uint32_t)(EAX));
  /* 108c1650 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1653 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 108c1659 push edx */
  push32((uint32_t)(EDX));
  /* 108c165a call 0x108c19d0 */
  push32(0x108c165fu); f_108c19d0();
  /* 108c165f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c1662:;
  /* 108c1662 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1667:;
  /* 108c1667 mov dword ptr [0x108df8d8], 0 */
  w32((uint32_t)(0x108df8d8), (0x0u));
  /* 108c1671 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1674 push eax */
  push32((uint32_t)(EAX));
  /* 108c1675 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1678 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1679 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c167c push edx */
  push32((uint32_t)(EDX));
  /* 108c167d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1680 push eax */
  push32((uint32_t)(EAX));
  /* 108c1681 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1684 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 108c168a push edx */
  push32((uint32_t)(EDX));
  /* 108c168b call 0x108c19d0 */
  push32(0x108c1690u); f_108c19d0();
  /* 108c1690 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1693 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1698:;
  /* 108c1698 mov eax, dword ptr [0x108df8d8] */
  EAX = (r32((uint32_t)(0x108df8d8)));
  /* 108c169d mov dword ptr [0x108df8e8], eax */
  w32((uint32_t)(0x108df8e8), (EAX));
  /* 108c16a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c16a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 108c16a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c16a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 108c16ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c16b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c16b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c16b6 push edx */
  push32((uint32_t)(EDX));
  /* 108c16b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c16ba push eax */
  push32((uint32_t)(EAX));
  /* 108c16bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108c16bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c16c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108c16c1 call 0x108c1870 */
  push32(0x108c16c6u); f_108c1870();
  /* 108c16c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c16c9 jmp 0x108c1768 */
  goto L_108c1768;
L_108c16ce:;
  /* 108c16ce mov edx, dword ptr [0x108df8d8] */
  EDX = (r32((uint32_t)(0x108df8d8)));
  /* 108c16d4 mov dword ptr [0x108df8e8], edx */
  w32((uint32_t)(0x108df8e8), (EDX));
  /* 108c16da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c16dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 108c16e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c16e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 108c16e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c16e8 mov ecx, eax */
  ECX = (EAX);
  /* 108c16ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c16ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c16f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c16f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108c16f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c16f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 108c16fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c16fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1700 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c1703 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1706 push eax */
  push32((uint32_t)(EAX));
  /* 108c1707 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c170a push ecx */
  push32((uint32_t)(ECX));
  /* 108c170b push 4 */
  push32((uint32_t)(0x4u));
  /* 108c170d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1710 push edx */
  push32((uint32_t)(EDX));
  /* 108c1711 call 0x108c1870 */
  push32(0x108c1716u); f_108c1870();
  /* 108c1716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1719 jmp 0x108c1768 */
  goto L_108c1768;
L_108c171b:;
  /* 108c171b call 0x108c2830 */
  push32(0x108c1720u); f_108c2830();
  /* 108c1720 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1723 push eax */
  push32((uint32_t)(EAX));
  /* 108c1724 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1727 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1728 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c172b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c172d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1731 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 108c1734 mov ecx, dword ptr [eax*4 + 0x108dee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108dee1c)));
  /* 108c173b push ecx */
  push32((uint32_t)(ECX));
  /* 108c173c call 0x108c1820 */
  push32(0x108c1741u); f_108c1820();
  /* 108c1741 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1744 jmp 0x108c1768 */
  goto L_108c1768;
L_108c1746:;
  /* 108c1746 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1749 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c174b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 108c174e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1751 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1753 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1759 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c175b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c175e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1760 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1763 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1766 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108c1768:;
  /* 108c1768 pop esi */
  ESI = (pop32());
  /* 108c1769 mov esp, ebp */
  ESP = (EBP);
  /* 108c176b pop ebp */
  EBP = (pop32());
  /* 108c176c ret  */
  ESPCHK(0x108c1200u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x108c1820 (72 bytes, 30 insns) */
void f_108c1820(void) {
  FTRACE(0x108c1820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1820 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1821 mov ebp, esp */
  EBP = (ESP);
L_108c1823:;
  /* 108c1823 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1826 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1829 je 0x108c1866 */
  if (C.zf) goto L_108c1866;
  /* 108c182b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c182e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c1831 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c1833 je 0x108c1866 */
  if (C.zf) goto L_108c1866;
  /* 108c1835 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1838 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c183a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c183d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c183f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108c1841 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1846 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1849 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c184c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c184e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1854 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108c1857 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c185a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c185c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c185f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1862 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108c1864 jmp 0x108c1823 */
  goto L_108c1823;
L_108c1866:;
  /* 108c1866 pop ebp */
  EBP = (pop32());
  /* 108c1867 ret  */
  ESPCHK(0x108c1820u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x108c1870 (173 bytes, 64 insns) */
void f_108c1870(void) {
  FTRACE(0x108c1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1870 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1871 mov ebp, esp */
  EBP = (ESP);
  /* 108c1873 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c187b cmp dword ptr [0x108df8e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1882 je 0x108c189a */
  if (C.zf) goto L_108c189a;
  /* 108c1884 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1887 push eax */
  push32((uint32_t)(EAX));
  /* 108c1888 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c188b push ecx */
  push32((uint32_t)(ECX));
  /* 108c188c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c188f push edx */
  push32((uint32_t)(EDX));
  /* 108c1890 call 0x108c1920 */
  push32(0x108c1895u); f_108c1920();
  /* 108c1895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1898 jmp 0x108c1919 */
  goto L_108c1919;
L_108c189a:;
  /* 108c189a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c189d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c18a0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c18a2 jae 0x108c1910 */
  if (!C.cf) goto L_108c1910;
  /* 108c18a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c18a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c18aa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 108c18ad jmp 0x108c18b8 */
  goto L_108c18b8;
L_108c18af:;
  /* 108c18af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c18b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c18b5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_108c18b8:;
  /* 108c18b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c18bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c18be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c18c0 je 0x108c18f4 */
  if (C.zf) goto L_108c18f4;
  /* 108c18c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c18c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c18c6 mov ecx, 0xa */
  ECX = (0xau);
  /* 108c18cb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c18cd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c18d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c18d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c18d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c18d8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 108c18db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c18de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c18df mov ecx, 0xa */
  ECX = (0xau);
  /* 108c18e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c18e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c18e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c18ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c18ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c18f2 jmp 0x108c18af */
  goto L_108c18af;
L_108c18f4:;
  /* 108c18f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c18f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c18f9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c18fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c18ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108c1901 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1904 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1906 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1909 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c190c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108c190e jmp 0x108c1919 */
  goto L_108c1919;
L_108c1910:;
  /* 108c1910 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1913 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108c1919:;
  /* 108c1919 mov esp, ebp */
  ESP = (EBP);
  /* 108c191b pop ebp */
  EBP = (pop32());
  /* 108c191c ret  */
  ESPCHK(0x108c1870u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x108c1920 (172 bytes, 65 insns) */
void f_108c1920(void) {
  FTRACE(0x108c1920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1920 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1921 mov ebp, esp */
  EBP = (ESP);
  /* 108c1923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1929 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c192b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c192e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1931 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1934 jbe 0x108c197b */
  if ((C.cf||C.zf)) goto L_108c197b;
L_108c1936:;
  /* 108c1936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1939 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c193a mov ecx, 0xa */
  ECX = (0xau);
  /* 108c193f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c1941 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1947 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108c1949 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c194c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c194f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c1952 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1955 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1957 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c195a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c195d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108c195f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1962 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c1963 mov ecx, 0xa */
  ECX = (0xau);
  /* 108c1968 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c196a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c196d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1971 jle 0x108c197b */
  if ((C.zf||C.sf!=C.of)) goto L_108c197b;
  /* 108c1973 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1976 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1979 ja 0x108c1936 */
  if ((!C.cf&&!C.zf)) goto L_108c1936;
L_108c197b:;
  /* 108c197b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c197e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1980 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c1983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1989 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108c198b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c198e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108c1994:;
  /* 108c1994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1997 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c1999 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 108c199c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c199f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c19a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c19a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108c19a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c19a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c19ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c19af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c19b2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 108c19b5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 108c19b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c19ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c19bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c19c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c19c3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c19c6 jb 0x108c1994 */
  if (C.cf) goto L_108c1994;
  /* 108c19c8 mov esp, ebp */
  ESP = (EBP);
  /* 108c19ca pop ebp */
  EBP = (pop32());
  /* 108c19cb ret  */
  ESPCHK(0x108c1920u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x108c19d0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_108c19d0(void) {
  FTRACE(0x108c19d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c19d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c19d1 mov ebp, esp */
  EBP = (ESP);
  /* 108c19d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_108c19d6:;
  /* 108c19d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c19d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c19dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c19de je 0x108c1e4c */
  if (C.zf) goto L_108c1e4c;
  /* 108c19e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c19e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c19ea je 0x108c1e4c */
  if (C.zf) goto L_108c1e4c;
  /* 108c19f0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 108c19f4 mov dword ptr [0x108df8e8], 0 */
  w32((uint32_t)(0x108df8e8), (0x0u));
  /* 108c19fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108c1a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1a08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c1a0b jmp 0x108c1a16 */
  goto L_108c1a16;
L_108c1a0d:;
  /* 108c1a0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1a10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1a13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108c1a16:;
  /* 108c1a16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1a19 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c1a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1a1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c1a22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1a28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c1a2b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1a2d jne 0x108c1a31 */
  if (!C.zf) goto L_108c1a31;
  /* 108c1a2f jmp 0x108c1a0d */
  goto L_108c1a0d;
L_108c1a31:;
  /* 108c1a31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1a34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1a37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c1a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1a3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c1a40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c1a43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c1a46 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1a49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108c1a4c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1a50 ja 0x108c1da0 */
  if ((!C.cf&&!C.zf)) goto L_108c1da0;
  /* 108c1a56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c1a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c1a5b mov al, byte ptr [ecx + 0x108c1e7c] */
  AL = (r8((uint32_t)(ECX + 0x108c1e7c)));
  /* 108c1a61 jmp dword ptr [eax*4 + 0x108c1e50] */
  switch (EAX) {
    case 0: goto L_108c1cbf;
    case 1: goto L_108c1ba3;
    case 2: goto L_108c1b2e;
    case 3: goto L_108c1a68;
    case 4: goto L_108c1aa6;
    case 5: goto L_108c1b07;
    case 6: goto L_108c1b55;
    case 7: goto L_108c1b7c;
    case 8: goto L_108c1bea;
    case 9: goto L_108c1ae4;
    case 10: goto L_108c1da0;
    default: x86_unimpl("switch@0x108c1a61 out of table"); return;
  }
L_108c1a68:;
  /* 108c1a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1a6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108c1a6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c1a71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1a74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108c1a77 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1a7b ja 0x108c1aa1 */
  if ((!C.cf&&!C.zf)) goto L_108c1aa1;
  /* 108c1a7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c1a80 jmp dword ptr [ecx*4 + 0x108c1ecf] */
  switch (ECX) {
    case 0: goto L_108c1a87;
    case 1: goto L_108c1a91;
    case 2: goto L_108c1a97;
    case 3: goto L_108c1a9d;
    case 4: goto L_108c1ac5;
    case 5: goto L_108c1acf;
    case 6: goto L_108c1ad5;
    case 7: goto L_108c1adb;
    default: x86_unimpl("switch@0x108c1a80 out of table"); return;
  }
L_108c1a87:;
  /* 108c1a87 mov dword ptr [0x108df8e8], 1 */
  w32((uint32_t)(0x108df8e8), (0x1u));
L_108c1a91:;
  /* 108c1a91 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 108c1a95 jmp 0x108c1aa1 */
  goto L_108c1aa1;
L_108c1a97:;
  /* 108c1a97 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 108c1a9b jmp 0x108c1aa1 */
  goto L_108c1aa1;
L_108c1a9d:;
  /* 108c1a9d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_108c1aa1:;
  /* 108c1aa1 jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1aa6:;
  /* 108c1aa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1aa9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108c1aac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c1aaf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1ab2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108c1ab5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1ab9 ja 0x108c1adf */
  if ((!C.cf&&!C.zf)) goto L_108c1adf;
  /* 108c1abb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c1abe jmp dword ptr [ecx*4 + 0x108c1edf] */
  switch (ECX) {
    case 0: goto L_108c1ac5;
    case 1: goto L_108c1acf;
    case 2: goto L_108c1ad5;
    case 3: goto L_108c1adb;
    default: x86_unimpl("switch@0x108c1abe out of table"); return;
  }
L_108c1ac5:;
  /* 108c1ac5 mov dword ptr [0x108df8e8], 1 */
  w32((uint32_t)(0x108df8e8), (0x1u));
L_108c1acf:;
  /* 108c1acf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 108c1ad3 jmp 0x108c1adf */
  goto L_108c1adf;
L_108c1ad5:;
  /* 108c1ad5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 108c1ad9 jmp 0x108c1adf */
  goto L_108c1adf;
L_108c1adb:;
  /* 108c1adb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_108c1adf:;
  /* 108c1adf jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1ae4:;
  /* 108c1ae4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1ae7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 108c1aea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1aee je 0x108c1af8 */
  if (C.zf) goto L_108c1af8;
  /* 108c1af0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1af4 je 0x108c1afe */
  if (C.zf) goto L_108c1afe;
  /* 108c1af6 jmp 0x108c1b02 */
  goto L_108c1b02;
L_108c1af8:;
  /* 108c1af8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 108c1afc jmp 0x108c1b02 */
  goto L_108c1b02;
L_108c1afe:;
  /* 108c1afe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_108c1b02:;
  /* 108c1b02 jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1b07:;
  /* 108c1b07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1b0a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108c1b0d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b11 je 0x108c1b1b */
  if (C.zf) goto L_108c1b1b;
  /* 108c1b13 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b17 je 0x108c1b25 */
  if (C.zf) goto L_108c1b25;
  /* 108c1b19 jmp 0x108c1b29 */
  goto L_108c1b29;
L_108c1b1b:;
  /* 108c1b1b mov dword ptr [0x108df8e8], 1 */
  w32((uint32_t)(0x108df8e8), (0x1u));
L_108c1b25:;
  /* 108c1b25 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_108c1b29:;
  /* 108c1b29 jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1b2e:;
  /* 108c1b2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1b31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 108c1b34 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b38 je 0x108c1b42 */
  if (C.zf) goto L_108c1b42;
  /* 108c1b3a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b3e je 0x108c1b4c */
  if (C.zf) goto L_108c1b4c;
  /* 108c1b40 jmp 0x108c1b50 */
  goto L_108c1b50;
L_108c1b42:;
  /* 108c1b42 mov dword ptr [0x108df8e8], 1 */
  w32((uint32_t)(0x108df8e8), (0x1u));
L_108c1b4c:;
  /* 108c1b4c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_108c1b50:;
  /* 108c1b50 jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1b55:;
  /* 108c1b55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1b58 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 108c1b5b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b5f je 0x108c1b69 */
  if (C.zf) goto L_108c1b69;
  /* 108c1b61 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b65 je 0x108c1b73 */
  if (C.zf) goto L_108c1b73;
  /* 108c1b67 jmp 0x108c1b77 */
  goto L_108c1b77;
L_108c1b69:;
  /* 108c1b69 mov dword ptr [0x108df8e8], 1 */
  w32((uint32_t)(0x108df8e8), (0x1u));
L_108c1b73:;
  /* 108c1b73 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_108c1b77:;
  /* 108c1b77 jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1b7c:;
  /* 108c1b7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1b7f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108c1b82 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b86 je 0x108c1b90 */
  if (C.zf) goto L_108c1b90;
  /* 108c1b88 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1b8c je 0x108c1b9a */
  if (C.zf) goto L_108c1b9a;
  /* 108c1b8e jmp 0x108c1b9e */
  goto L_108c1b9e;
L_108c1b90:;
  /* 108c1b90 mov dword ptr [0x108df8e8], 1 */
  w32((uint32_t)(0x108df8e8), (0x1u));
L_108c1b9a:;
  /* 108c1b9a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_108c1b9e:;
  /* 108c1b9e jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1ba3:;
  /* 108c1ba3 push 0x108db894 */
  push32((uint32_t)(0x108db894u));
  /* 108c1ba8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1bab push ecx */
  push32((uint32_t)(ECX));
  /* 108c1bac call 0x108c2400 */
  push32(0x108c1bb1u); f_108c2400();
  /* 108c1bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c1bb6 jne 0x108c1bc3 */
  if (!C.zf) goto L_108c1bc3;
  /* 108c1bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1bbb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1bbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c1bc1 jmp 0x108c1be1 */
  goto L_108c1be1;
L_108c1bc3:;
  /* 108c1bc3 push 0x108db890 */
  push32((uint32_t)(0x108db890u));
  /* 108c1bc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1bcb push eax */
  push32((uint32_t)(EAX));
  /* 108c1bcc call 0x108c2400 */
  push32(0x108c1bd1u); f_108c2400();
  /* 108c1bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c1bd6 jne 0x108c1be1 */
  if (!C.zf) goto L_108c1be1;
  /* 108c1bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1bdb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1bde mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108c1be1:;
  /* 108c1be1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 108c1be5 jmp 0x108c1da0 */
  goto L_108c1da0;
L_108c1bea:;
  /* 108c1bea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1bed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1bf1 jg 0x108c1c01 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c1c01;
  /* 108c1bf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1bf6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 108c1bfc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108c1bff jmp 0x108c1c0d */
  goto L_108c1c0d;
L_108c1c01:;
  /* 108c1c01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1c04 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 108c1c0a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108c1c0d:;
  /* 108c1c0d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1c11 jle 0x108c1cb4 */
  if ((C.zf||C.sf!=C.of)) goto L_108c1cb4;
  /* 108c1c17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1c1a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1c1d jbe 0x108c1cb4 */
  if ((C.cf||C.zf)) goto L_108c1cb4;
  /* 108c1c23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c1c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c1c28 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c1c2a mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c1c30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c1c32 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c1c36 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108c1c3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c1c3e je 0x108c1c77 */
  if (C.zf) goto L_108c1c77;
  /* 108c1c40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1c43 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1c46 jbe 0x108c1c77 */
  if ((C.cf||C.zf)) goto L_108c1c77;
  /* 108c1c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1c4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1c4d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c1c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c1c52 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108c1c54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1c57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1c5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1c5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108c1c61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c1c64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1c67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108c1c6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1c6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1c6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1c72 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1c75 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108c1c77:;
  /* 108c1c77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1c7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1c7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c1c7f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c1c81 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108c1c83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1c86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1c8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1c8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c1c90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c1c93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1c96 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108c1c99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1c9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1c9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1ca1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1ca4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108c1ca6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1ca9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1cac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108c1caf jmp 0x108c1c0d */
  goto L_108c1c0d;
L_108c1cb4:;
  /* 108c1cb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1cb7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c1cba jmp 0x108c19d6 */
  goto L_108c19d6;
L_108c1cbf:;
  /* 108c1cbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1cc2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108c1cc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c1cc7 je 0x108c1d92 */
  if (C.zf) goto L_108c1d92;
  /* 108c1ccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1cd0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1cd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_108c1cd6:;
  /* 108c1cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1cd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c1cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c1cde je 0x108c1d90 */
  if (C.zf) goto L_108c1d90;
  /* 108c1ce4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1ce7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1cea je 0x108c1d90 */
  if (C.zf) goto L_108c1d90;
  /* 108c1cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1cf3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c1cf6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1cf9 jne 0x108c1d09 */
  if (!C.zf) goto L_108c1d09;
  /* 108c1cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1cfe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1d01 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108c1d04 jmp 0x108c1d90 */
  goto L_108c1d90;
L_108c1d09:;
  /* 108c1d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1d0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c1d0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c1d10 mov edx, dword ptr [0x108ddc98] */
  EDX = (r32((uint32_t)(0x108ddc98)));
  /* 108c1d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c1d18 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 108c1d1c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 108c1d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c1d23 je 0x108c1d5c */
  if (C.zf) goto L_108c1d5c;
  /* 108c1d25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1d28 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1d2b jbe 0x108c1d5c */
  if ((C.cf||C.zf)) goto L_108c1d5c;
  /* 108c1d2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1d30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1d35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c1d37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108c1d39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1d3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1d41 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1d44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108c1d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1d4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c1d4f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1d52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1d54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1d57 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1d5a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108c1d5c:;
  /* 108c1d5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1d5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1d64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c1d66 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108c1d68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1d6b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1d6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1d70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1d73 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108c1d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1d7b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108c1d7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1d81 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1d83 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1d86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1d89 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108c1d8b jmp 0x108c1cd6 */
  goto L_108c1cd6;
L_108c1d90:;
  /* 108c1d90 jmp 0x108c1d9b */
  goto L_108c1d9b;
L_108c1d92:;
  /* 108c1d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1d95 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1d98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108c1d9b:;
  /* 108c1d9b jmp 0x108c19d6 */
  goto L_108c19d6;
L_108c1da0:;
  /* 108c1da0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 108c1da4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c1da6 je 0x108c1dcc */
  if (C.zf) goto L_108c1dcc;
  /* 108c1da8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c1dab push edx */
  push32((uint32_t)(EDX));
  /* 108c1dac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1daf push eax */
  push32((uint32_t)(EAX));
  /* 108c1db0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1db3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1db4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1db7 push edx */
  push32((uint32_t)(EDX));
  /* 108c1db8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 108c1dbb push eax */
  push32((uint32_t)(EAX));
  /* 108c1dbc call 0x108c1200 */
  push32(0x108c1dc1u); f_108c1200();
  /* 108c1dc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c1dc7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108c1dca jmp 0x108c1e47 */
  goto L_108c1e47;
L_108c1dcc:;
  /* 108c1dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c1dd1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c1dd3 mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c1dd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c1ddb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c1ddf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108c1de5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c1de7 je 0x108c1e18 */
  if (C.zf) goto L_108c1e18;
  /* 108c1de9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1dec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1dee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1df1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c1df3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108c1df5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1df8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1dfa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1dfd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1e00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108c1e02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1e05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1e08 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108c1e0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1e0e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1e10 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1e13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1e16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_108c1e18:;
  /* 108c1e18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1e1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c1e1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1e20 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c1e22 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108c1e24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c1e29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1e2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1e2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108c1e31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c1e34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1e37 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c1e3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1e3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c1e3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1e42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1e45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108c1e47:;
  /* 108c1e47 jmp 0x108c19d6 */
  goto L_108c19d6;
L_108c1e4c:;
  /* 108c1e4c mov esp, ebp */
  ESP = (EBP);
  /* 108c1e4e pop ebp */
  EBP = (pop32());
  /* 108c1e4f ret  */
  ESPCHK(0x108c19d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x108c1ef0 (650 bytes, 178 insns) */
void f_108c1ef0(void) {
  FTRACE(0x108c1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c1ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c1ef1 mov ebp, esp */
  EBP = (ESP);
  /* 108c1ef3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c1ef9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1efd jne 0x108c2059 */
  if (!C.zf) goto L_108c2059;
  /* 108c1f03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c1f06 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 108c1f0c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 108c1f12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c1f15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c1f1c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 108c1f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c1f28 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 108c1f2e push edx */
  push32((uint32_t)(EDX));
  /* 108c1f2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1f32 push eax */
  push32((uint32_t)(EAX));
  /* 108c1f33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1f36 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1f37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1f3a push edx */
  push32((uint32_t)(EDX));
  /* 108c1f3b call 0x108c3310 */
  push32(0x108c1f40u); f_108c3310();
  /* 108c1f40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1f43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c1f46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1f4a jne 0x108c1fdf */
  if (!C.zf) goto L_108c1fdf;
  /* 108c1f50 call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108c1f56u);
  /* 108c1f56 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1f59 je 0x108c1f60 */
  if (C.zf) goto L_108c1f60;
  /* 108c1f5b jmp 0x108c203d */
  goto L_108c203d;
L_108c1f60:;
  /* 108c1f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c1f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c1f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c1f66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1f69 push eax */
  push32((uint32_t)(EAX));
  /* 108c1f6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1f6d push ecx */
  push32((uint32_t)(ECX));
  /* 108c1f6e call 0x108c3310 */
  push32(0x108c1f73u); f_108c3310();
  /* 108c1f73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1f76 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 108c1f7c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1f83 jne 0x108c1f8a */
  if (!C.zf) goto L_108c1f8a;
  /* 108c1f85 jmp 0x108c203d */
  goto L_108c203d;
L_108c1f8a:;
  /* 108c1f8a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 108c1f8c push 0x108db89c */
  push32((uint32_t)(0x108db89cu));
  /* 108c1f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c1f93 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 108c1f99 push edx */
  push32((uint32_t)(EDX));
  /* 108c1f9a call 0x108b3d30 */
  push32(0x108c1f9fu); f_108b3d30();
  /* 108c1f9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1fa2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c1fa5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1fa9 jne 0x108c1fb0 */
  if (!C.zf) goto L_108c1fb0;
  /* 108c1fab jmp 0x108c203d */
  goto L_108c203d;
L_108c1fb0:;
  /* 108c1fb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108c1fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c1fb9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 108c1fbf push eax */
  push32((uint32_t)(EAX));
  /* 108c1fc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c1fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c1fc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c1fc7 push edx */
  push32((uint32_t)(EDX));
  /* 108c1fc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c1fcb push eax */
  push32((uint32_t)(EAX));
  /* 108c1fcc call 0x108c3310 */
  push32(0x108c1fd1u); f_108c3310();
  /* 108c1fd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1fd4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c1fd7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c1fdb jne 0x108c1fdf */
  if (!C.zf) goto L_108c1fdf;
  /* 108c1fdd jmp 0x108c203d */
  goto L_108c203d;
L_108c1fdf:;
  /* 108c1fdf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 108c1fe1 push 0x108db89c */
  push32((uint32_t)(0x108db89cu));
  /* 108c1fe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c1fe8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c1feb push ecx */
  push32((uint32_t)(ECX));
  /* 108c1fec call 0x108b3d30 */
  push32(0x108c1ff1u); f_108b3d30();
  /* 108c1ff1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c1ff4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 108c1ffa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108c1ffc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 108c2002 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2005 jne 0x108c2009 */
  if (!C.zf) goto L_108c2009;
  /* 108c2007 jmp 0x108c203d */
  goto L_108c203d;
L_108c2009:;
  /* 108c2009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c200c push ecx */
  push32((uint32_t)(ECX));
  /* 108c200d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2010 push edx */
  push32((uint32_t)(EDX));
  /* 108c2011 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 108c2017 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c2019 push ecx */
  push32((uint32_t)(ECX));
  /* 108c201a call 0x108b7550 */
  push32(0x108c201fu); f_108b7550();
  /* 108c201f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2022 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2026 je 0x108c2036 */
  if (C.zf) goto L_108c2036;
  /* 108c2028 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c202a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c202d push edx */
  push32((uint32_t)(EDX));
  /* 108c202e call 0x108b47c0 */
  push32(0x108c2033u); f_108b47c0();
  /* 108c2033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c2036:;
  /* 108c2036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2038 jmp 0x108c2176 */
  goto L_108c2176;
L_108c203d:;
  /* 108c203d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2041 je 0x108c2051 */
  if (C.zf) goto L_108c2051;
  /* 108c2043 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c2045 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2048 push eax */
  push32((uint32_t)(EAX));
  /* 108c2049 call 0x108b47c0 */
  push32(0x108c204eu); f_108b47c0();
  /* 108c204e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c2051:;
  /* 108c2051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c2054 jmp 0x108c2176 */
  goto L_108c2176;
L_108c2059:;
  /* 108c2059 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c205d jne 0x108c2173 */
  if (!C.zf) goto L_108c2173;
  /* 108c2063 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 108c206d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c2070 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 108c2076 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2078 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108c207e push edx */
  push32((uint32_t)(EDX));
  /* 108c207f push 0x108df800 */
  push32((uint32_t)(0x108df800u));
  /* 108c2084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c2087 push eax */
  push32((uint32_t)(EAX));
  /* 108c2088 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c208b push ecx */
  push32((uint32_t)(ECX));
  /* 108c208c call 0x108c3170 */
  push32(0x108c2091u); f_108c3170();
  /* 108c2091 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c2096 jne 0x108c20a0 */
  if (!C.zf) goto L_108c20a0;
  /* 108c2098 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c209b jmp 0x108c2176 */
  goto L_108c2176;
L_108c20a0:;
  /* 108c20a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108c20a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108c20a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 108c20b3 jmp 0x108c20c4 */
  goto L_108c20c4;
L_108c20b5:;
  /* 108c20b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108c20bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c20be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_108c20c4:;
  /* 108c20c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c20cb jge 0x108c216f */
  if ((C.sf==C.of)) goto L_108c216f;
  /* 108c20d1 cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c20d8 jle 0x108c210b */
  if ((C.zf||C.sf!=C.of)) goto L_108c210b;
  /* 108c20da push 4 */
  push32((uint32_t)(0x4u));
  /* 108c20dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108c20e2 mov dl, byte ptr [ecx*2 + 0x108df800] */
  DL = (r8((uint32_t)(ECX*2 + 0x108df800)));
  /* 108c20e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 108c20ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 108c20f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c20fa push eax */
  push32((uint32_t)(EAX));
  /* 108c20fb call 0x108b9d40 */
  push32(0x108c2100u); f_108b9d40();
  /* 108c2100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2103 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 108c2109 jmp 0x108c213e */
  goto L_108c213e;
L_108c210b:;
  /* 108c210b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108c2111 mov dl, byte ptr [ecx*2 + 0x108df800] */
  DL = (r8((uint32_t)(ECX*2 + 0x108df800)));
  /* 108c2118 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 108c211e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 108c2124 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c2129 mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c212f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2131 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c2135 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108c2138 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_108c213e:;
  /* 108c213e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2145 je 0x108c2168 */
  if (C.zf) goto L_108c2168;
  /* 108c2147 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108c214d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c2150 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2153 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 108c215a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 108c215e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108c2164 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108c2166 jmp 0x108c216a */
  goto L_108c216a;
L_108c2168:;
  /* 108c2168 jmp 0x108c216f */
  goto L_108c216f;
L_108c216a:;
  /* 108c216a jmp 0x108c20b5 */
  goto L_108c20b5;
L_108c216f:;
  /* 108c216f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2171 jmp 0x108c2176 */
  goto L_108c2176;
L_108c2173:;
  /* 108c2173 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108c2176:;
  /* 108c2176 mov esp, ebp */
  ESP = (EBP);
  /* 108c2178 pop ebp */
  EBP = (pop32());
  /* 108c2179 ret  */
  ESPCHK(0x108c1ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012180 @ 0x108c2180 (10 bytes, 5 insns) */
void f_108c2180(void) {
  FTRACE(0x108c2180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2180 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2181 mov ebp, esp */
  EBP = (ESP);
  /* 108c2183 mov eax, dword ptr [0x108ded88] */
  EAX = (r32((uint32_t)(0x108ded88)));
  /* 108c2188 pop ebp */
  EBP = (pop32());
  /* 108c2189 ret  */
  ESPCHK(0x108c2180u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x108c2190 (575 bytes, 196 insns) */
void f_108c2190(void) {
  FTRACE(0x108c2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2190 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2191 mov ebp, esp */
  EBP = (ESP);
  /* 108c2193 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c2195 push 0x108db8a8 */
  push32((uint32_t)(0x108db8a8u));
  /* 108c219a push 0x108bce38 */
  push32((uint32_t)(0x108bce38u));
  /* 108c219f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108c21a5 push eax */
  push32((uint32_t)(EAX));
  /* 108c21a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108c21ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c21b0 push ebx */
  push32((uint32_t)(EBX));
  /* 108c21b1 push esi */
  push32((uint32_t)(ESI));
  /* 108c21b2 push edi */
  push32((uint32_t)(EDI));
  /* 108c21b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c21b6 cmp dword ptr [0x108df80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c21bd jne 0x108c220e */
  if (!C.zf) goto L_108c220e;
  /* 108c21bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 108c21c2 push eax */
  push32((uint32_t)(EAX));
  /* 108c21c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c21c5 push 0x108dafdc */
  push32((uint32_t)(0x108dafdcu));
  /* 108c21ca push 1 */
  push32((uint32_t)(0x1u));
  /* 108c21cc call dword ptr [0x108e22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d8))), 0x108c21d2u);
  /* 108c21d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c21d4 je 0x108c21e2 */
  if (C.zf) goto L_108c21e2;
  /* 108c21d6 mov dword ptr [0x108df80c], 1 */
  w32((uint32_t)(0x108df80c), (0x1u));
  /* 108c21e0 jmp 0x108c220e */
  goto L_108c220e;
L_108c21e2:;
  /* 108c21e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 108c21e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108c21e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c21e8 push 0x108dafd8 */
  push32((uint32_t)(0x108dafd8u));
  /* 108c21ed push 1 */
  push32((uint32_t)(0x1u));
  /* 108c21ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108c21f1 call dword ptr [0x108e22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e8))), 0x108c21f7u);
  /* 108c21f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c21f9 je 0x108c2207 */
  if (C.zf) goto L_108c2207;
  /* 108c21fb mov dword ptr [0x108df80c], 2 */
  w32((uint32_t)(0x108df80c), (0x2u));
  /* 108c2205 jmp 0x108c220e */
  goto L_108c220e;
L_108c2207:;
  /* 108c2207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2209 jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c220e:;
  /* 108c220e cmp dword ptr [0x108df80c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df80c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2215 jne 0x108c2232 */
  if (!C.zf) goto L_108c2232;
  /* 108c2217 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c221a push edx */
  push32((uint32_t)(EDX));
  /* 108c221b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c221e push eax */
  push32((uint32_t)(EAX));
  /* 108c221f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c2222 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2226 push edx */
  push32((uint32_t)(EDX));
  /* 108c2227 call dword ptr [0x108e22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22d8))), 0x108c222du);
  /* 108c222d jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c2232:;
  /* 108c2232 cmp dword ptr [0x108df80c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df80c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2239 jne 0x108c23e7 */
  if (!C.zf) goto L_108c23e7;
  /* 108c223f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2243 jne 0x108c224d */
  if (!C.zf) goto L_108c224d;
  /* 108c2245 mov eax, dword ptr [0x108df780] */
  EAX = (r32((uint32_t)(0x108df780)));
  /* 108c224a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_108c224d:;
  /* 108c224d push 0 */
  push32((uint32_t)(0x0u));
  /* 108c224f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2251 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2253 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2255 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c2258 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2259 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c225c push edx */
  push32((uint32_t)(EDX));
  /* 108c225d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108c2262 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c2265 push eax */
  push32((uint32_t)(EAX));
  /* 108c2266 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c226cu);
  /* 108c226c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108c226f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2273 jne 0x108c227c */
  if (!C.zf) goto L_108c227c;
  /* 108c2275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2277 jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c227c:;
  /* 108c227c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c2283 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c2286 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2289 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108c228b call 0x108b6ed0 */
  push32(0x108c2290u); f_108b6ed0();
  /* 108c2290 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 108c2293 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c2296 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 108c2299 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108c229c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c229f push edx */
  push32((uint32_t)(EDX));
  /* 108c22a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c22a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108c22a5 push eax */
  push32((uint32_t)(EAX));
  /* 108c22a6 call 0x108b7aa0 */
  push32(0x108c22abu); f_108b7aa0();
  /* 108c22ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c22ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108c22b5 jmp 0x108c22ce */
  goto L_108c22ce;
  /* 108c22b7 mov eax, 1 */
  EAX = (0x1u);
  /* 108c22bc ret  */
  ESPCHK(0x108c2190u, _esp0);
  ESP += 4; return;
  /* 108c22bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108c22c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 108c22c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108c22ce:;
  /* 108c22ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c22d2 jne 0x108c22db */
  if (!C.zf) goto L_108c22db;
  /* 108c22d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c22d6 jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c22db:;
  /* 108c22db push 0 */
  push32((uint32_t)(0x0u));
  /* 108c22dd push 0 */
  push32((uint32_t)(0x0u));
  /* 108c22df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c22e2 push ecx */
  push32((uint32_t)(ECX));
  /* 108c22e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108c22e6 push edx */
  push32((uint32_t)(EDX));
  /* 108c22e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c22ea push eax */
  push32((uint32_t)(EAX));
  /* 108c22eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c22ee push ecx */
  push32((uint32_t)(ECX));
  /* 108c22ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108c22f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c22f7 push edx */
  push32((uint32_t)(EDX));
  /* 108c22f8 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c22feu);
  /* 108c22fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c2300 jne 0x108c2309 */
  if (!C.zf) goto L_108c2309;
  /* 108c2302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2304 jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c2309:;
  /* 108c2309 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108c2310 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c2313 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 108c2317 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c231a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108c231c call 0x108b6ed0 */
  push32(0x108c2321u); f_108b6ed0();
  /* 108c2321 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 108c2324 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c2327 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108c232a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108c232d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108c2334 jmp 0x108c234d */
  goto L_108c234d;
  /* 108c2336 mov eax, 1 */
  EAX = (0x1u);
  /* 108c233b ret  */
  ESPCHK(0x108c2190u, _esp0);
  ESP += 4; return;
  /* 108c233c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108c233f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108c2346 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108c234d:;
  /* 108c234d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2351 jne 0x108c235a */
  if (!C.zf) goto L_108c235a;
  /* 108c2353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2355 jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c235a:;
  /* 108c235a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c235e jne 0x108c2369 */
  if (!C.zf) goto L_108c2369;
  /* 108c2360 mov edx, dword ptr [0x108df770] */
  EDX = (r32((uint32_t)(0x108df770)));
  /* 108c2366 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_108c2369:;
  /* 108c2369 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c236c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c236f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 108c2375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c2378 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c237b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 108c2382 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c2385 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2386 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c2389 push edx */
  push32((uint32_t)(EDX));
  /* 108c238a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108c238d push eax */
  push32((uint32_t)(EAX));
  /* 108c238e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2391 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2392 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c2395 push edx */
  push32((uint32_t)(EDX));
  /* 108c2396 call dword ptr [0x108e22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e8))), 0x108c239cu);
  /* 108c239c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108c239f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c23a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c23a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c23a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 108c23ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c23b2 je 0x108c23c8 */
  if (C.zf) goto L_108c23c8;
  /* 108c23b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c23b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c23ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c23bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c23c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c23c6 je 0x108c23cc */
  if (C.zf) goto L_108c23cc;
L_108c23c8:;
  /* 108c23c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c23ca jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c23cc:;
  /* 108c23cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c23cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108c23d1 push eax */
  push32((uint32_t)(EAX));
  /* 108c23d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c23d5 push ecx */
  push32((uint32_t)(ECX));
  /* 108c23d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c23d9 push edx */
  push32((uint32_t)(EDX));
  /* 108c23da call 0x108bbc20 */
  push32(0x108c23dfu); f_108bbc20();
  /* 108c23df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c23e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c23e5 jmp 0x108c23e9 */
  goto L_108c23e9;
L_108c23e7:;
  /* 108c23e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c23e9:;
  /* 108c23e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 108c23ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c23ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108c23f6 pop edi */
  EDI = (pop32());
  /* 108c23f7 pop esi */
  ESI = (pop32());
  /* 108c23f8 pop ebx */
  EBX = (pop32());
  /* 108c23f9 mov esp, ebp */
  ESP = (EBP);
  /* 108c23fb pop ebp */
  EBP = (pop32());
  /* 108c23fc ret  */
  ESPCHK(0x108c2190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x108c2400 (208 bytes, 85 insns) */
void f_108c2400(void) {
  FTRACE(0x108c2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2400 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2401 mov ebp, esp */
  EBP = (ESP);
  /* 108c2403 push edi */
  push32((uint32_t)(EDI));
  /* 108c2404 push esi */
  push32((uint32_t)(ESI));
  /* 108c2405 push ebx */
  push32((uint32_t)(EBX));
  /* 108c2406 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108c2409 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108c240c lea eax, [0x108df768] */
  EAX = ((uint32_t)(0x108df768));
  /* 108c2412 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2416 jne 0x108c2453 */
  if (!C.zf) goto L_108c2453;
  /* 108c2418 mov al, 0xff */
  AL = (0xffu);
  /* 108c241a mov edi, edi */
  EDI = (EDI);
L_108c241c:;
  /* 108c241c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108c241e je 0x108c244e */
  if (C.zf) goto L_108c244e;
  /* 108c2420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108c2422 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108c2423 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 108c2425 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108c2426 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2428 je 0x108c241c */
  if (C.zf) goto L_108c241c;
  /* 108c242a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108c242c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c242e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108c2430 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108c2433 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108c2435 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108c2437 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 108c2439 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108c243b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c243d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108c243f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108c2442 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108c2444 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108c2446 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2448 je 0x108c241c */
  if (C.zf) goto L_108c241c;
  /* 108c244a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108c244c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_108c244e:;
  /* 108c244e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 108c2451 jmp 0x108c24cb */
  goto L_108c24cb;
L_108c2453:;
  /* 108c2453 lock inc dword ptr [0x108df8fc] */
  x86_unimpl("lock inc @ 0x108c2453");
  /* 108c245a cmp dword ptr [0x108df8ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2461 jg 0x108c2467 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c2467;
  /* 108c2463 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2465 jmp 0x108c247c */
  goto L_108c247c;
L_108c2467:;
  /* 108c2467 lock dec dword ptr [0x108df8fc] */
  x86_unimpl("lock dec @ 0x108c2467");
  /* 108c246e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c2470 call 0x108b7730 */
  push32(0x108c2475u); f_108b7730();
  /* 108c2475 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_108c247c:;
  /* 108c247c mov eax, 0xff */
  EAX = (0xffu);
  /* 108c2481 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 108c2483 nop  */
  /* nop */
L_108c2484:;
  /* 108c2484 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108c2486 je 0x108c24af */
  if (C.zf) goto L_108c24af;
  /* 108c2488 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108c248a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108c248b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 108c248d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108c248e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2490 je 0x108c2484 */
  if (C.zf) goto L_108c2484;
  /* 108c2492 push eax */
  push32((uint32_t)(EAX));
  /* 108c2493 push ebx */
  push32((uint32_t)(EBX));
  /* 108c2494 call 0x108c3570 */
  push32(0x108c2499u); f_108c3570();
  /* 108c2499 mov ebx, eax */
  EBX = (EAX);
  /* 108c249b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c249e call 0x108c3570 */
  push32(0x108c24a3u); f_108c3570();
  /* 108c24a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c24a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c24a8 je 0x108c2484 */
  if (C.zf) goto L_108c2484;
  /* 108c24aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c24ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_108c24af:;
  /* 108c24af mov ebx, eax */
  EBX = (EAX);
  /* 108c24b1 pop eax */
  EAX = (pop32());
  /* 108c24b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c24b4 jne 0x108c24bf */
  if (!C.zf) goto L_108c24bf;
  /* 108c24b6 lock dec dword ptr [0x108df8fc] */
  x86_unimpl("lock dec @ 0x108c24b6");
  /* 108c24bd jmp 0x108c24c9 */
  goto L_108c24c9;
L_108c24bf:;
  /* 108c24bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c24c1 call 0x108b77d0 */
  push32(0x108c24c6u); f_108b77d0();
  /* 108c24c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c24c9:;
  /* 108c24c9 mov eax, ebx */
  EAX = (EBX);
L_108c24cb:;
  /* 108c24cb pop ebx */
  EBX = (pop32());
  /* 108c24cc pop esi */
  ESI = (pop32());
  /* 108c24cd pop edi */
  EDI = (pop32());
  /* 108c24ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108c24cf ret  */
  ESPCHK(0x108c2400u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x108c24d0 (257 bytes, 103 insns) */
void f_108c24d0(void) {
  FTRACE(0x108c24d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c24d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c24d1 mov ebp, esp */
  EBP = (ESP);
  /* 108c24d3 push edi */
  push32((uint32_t)(EDI));
  /* 108c24d4 push esi */
  push32((uint32_t)(ESI));
  /* 108c24d5 push ebx */
  push32((uint32_t)(EBX));
  /* 108c24d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c24d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c24db je 0x108c25ca */
  if (C.zf) goto L_108c25ca;
  /* 108c24e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 108c24e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 108c24e7 lea eax, [0x108df768] */
  EAX = ((uint32_t)(0x108df768));
  /* 108c24ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c24f1 jne 0x108c2541 */
  if (!C.zf) goto L_108c2541;
  /* 108c24f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 108c24f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 108c24f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 108c24f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108c24fc:;
  /* 108c24fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 108c24fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 108c2500 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 108c2502 je 0x108c2525 */
  if (C.zf) goto L_108c2525;
  /* 108c2504 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108c2506 je 0x108c2525 */
  if (C.zf) goto L_108c2525;
  /* 108c2508 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108c2509 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108c250a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c250c jb 0x108c2514 */
  if (C.cf) goto L_108c2514;
  /* 108c250e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2510 ja 0x108c2514 */
  if ((!C.cf&&!C.zf)) goto L_108c2514;
  /* 108c2512 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_108c2514:;
  /* 108c2514 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2516 jb 0x108c251e */
  if (C.cf) goto L_108c251e;
  /* 108c2518 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c251a ja 0x108c251e */
  if ((!C.cf&&!C.zf)) goto L_108c251e;
  /* 108c251c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_108c251e:;
  /* 108c251e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2520 jne 0x108c252f */
  if (!C.zf) goto L_108c252f;
  /* 108c2522 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108c2523 jne 0x108c24fc */
  if (!C.zf) goto L_108c24fc;
L_108c2525:;
  /* 108c2525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2527 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c2529 je 0x108c25ca */
  if (C.zf) goto L_108c25ca;
L_108c252f:;
  /* 108c252f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 108c2534 jb 0x108c25ca */
  if (C.cf) goto L_108c25ca;
  /* 108c253a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c253c jmp 0x108c25ca */
  goto L_108c25ca;
L_108c2541:;
  /* 108c2541 lock inc dword ptr [0x108df8fc] */
  x86_unimpl("lock inc @ 0x108c2541");
  /* 108c2548 cmp dword ptr [0x108df8ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c254f jg 0x108c2555 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c2555;
  /* 108c2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2553 jmp 0x108c256e */
  goto L_108c256e;
L_108c2555:;
  /* 108c2555 lock dec dword ptr [0x108df8fc] */
  x86_unimpl("lock dec @ 0x108c2555");
  /* 108c255c mov ebx, ecx */
  EBX = (ECX);
  /* 108c255e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c2560 call 0x108b7730 */
  push32(0x108c2565u); f_108b7730();
  /* 108c2565 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 108c256c mov ecx, ebx */
  ECX = (EBX);
L_108c256e:;
  /* 108c256e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2570 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 108c2572 mov edi, edi */
  EDI = (EDI);
L_108c2574:;
  /* 108c2574 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108c2576 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2578 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 108c257a je 0x108c259f */
  if (C.zf) goto L_108c259f;
  /* 108c257c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 108c257e je 0x108c259f */
  if (C.zf) goto L_108c259f;
  /* 108c2580 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108c2581 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108c2582 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2583 push eax */
  push32((uint32_t)(EAX));
  /* 108c2584 push ebx */
  push32((uint32_t)(EBX));
  /* 108c2585 call 0x108c3570 */
  push32(0x108c258au); f_108c3570();
  /* 108c258a mov ebx, eax */
  EBX = (EAX);
  /* 108c258c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c258f call 0x108c3570 */
  push32(0x108c2594u); f_108c3570();
  /* 108c2594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2597 pop ecx */
  ECX = (pop32());
  /* 108c2598 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c259a jne 0x108c25a5 */
  if (!C.zf) goto L_108c25a5;
  /* 108c259c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108c259d jne 0x108c2574 */
  if (!C.zf) goto L_108c2574;
L_108c259f:;
  /* 108c259f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c25a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c25a3 je 0x108c25ae */
  if (C.zf) goto L_108c25ae;
L_108c25a5:;
  /* 108c25a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 108c25aa jb 0x108c25ae */
  if (C.cf) goto L_108c25ae;
  /* 108c25ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_108c25ae:;
  /* 108c25ae pop eax */
  EAX = (pop32());
  /* 108c25af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c25b1 jne 0x108c25bc */
  if (!C.zf) goto L_108c25bc;
  /* 108c25b3 lock dec dword ptr [0x108df8fc] */
  x86_unimpl("lock dec @ 0x108c25b3");
  /* 108c25ba jmp 0x108c25ca */
  goto L_108c25ca;
L_108c25bc:;
  /* 108c25bc mov ebx, ecx */
  EBX = (ECX);
  /* 108c25be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c25c0 call 0x108b77d0 */
  push32(0x108c25c5u); f_108b77d0();
  /* 108c25c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c25c8 mov ecx, ebx */
  ECX = (EBX);
L_108c25ca:;
  /* 108c25ca mov eax, ecx */
  EAX = (ECX);
  /* 108c25cc pop ebx */
  EBX = (pop32());
  /* 108c25cd pop esi */
  ESI = (pop32());
  /* 108c25ce pop edi */
  EDI = (pop32());
  /* 108c25cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108c25d0 ret  */
  ESPCHK(0x108c24d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x108c25e0 (255 bytes, 88 insns) */
void f_108c25e0(void) {
  FTRACE(0x108c25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c25e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c25e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c25e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_108c25e6:;
  /* 108c25e6 cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c25ed jle 0x108c2606 */
  if ((C.zf||C.sf!=C.of)) goto L_108c2606;
  /* 108c25ef push 8 */
  push32((uint32_t)(0x8u));
  /* 108c25f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c25f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c25f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c25f8 push ecx */
  push32((uint32_t)(ECX));
  /* 108c25f9 call 0x108b9d40 */
  push32(0x108c25feu); f_108b9d40();
  /* 108c25fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2601 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108c2604 jmp 0x108c261f */
  goto L_108c261f;
L_108c2606:;
  /* 108c2606 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c260b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c260d mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c2613 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2615 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c2619 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108c261c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108c261f:;
  /* 108c261f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2623 je 0x108c2630 */
  if (C.zf) goto L_108c2630;
  /* 108c2625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2628 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c262b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c262e jmp 0x108c25e6 */
  goto L_108c25e6;
L_108c2630:;
  /* 108c2630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2633 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2635 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c2637 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c263a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c263d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2640 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c2643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2646 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c2649 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c264d je 0x108c2655 */
  if (C.zf) goto L_108c2655;
  /* 108c264f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2653 jne 0x108c2668 */
  if (!C.zf) goto L_108c2668;
L_108c2655:;
  /* 108c2655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c265a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c265c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c265f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2665 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_108c2668:;
  /* 108c2668 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108c266f:;
  /* 108c266f cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2676 jle 0x108c268b */
  if ((C.zf||C.sf!=C.of)) goto L_108c268b;
  /* 108c2678 push 4 */
  push32((uint32_t)(0x4u));
  /* 108c267a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c267d push edx */
  push32((uint32_t)(EDX));
  /* 108c267e call 0x108b9d40 */
  push32(0x108c2683u); f_108b9d40();
  /* 108c2683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2686 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c2689 jmp 0x108c26a0 */
  goto L_108c26a0;
L_108c268b:;
  /* 108c268b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c268e mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c2694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2696 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c269a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108c269d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108c26a0:;
  /* 108c26a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c26a4 je 0x108c26cb */
  if (C.zf) goto L_108c26cb;
  /* 108c26a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c26a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c26ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c26af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 108c26b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c26b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c26b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c26bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c26bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c26c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c26c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c26c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108c26c9 jmp 0x108c266f */
  goto L_108c266f;
L_108c26cb:;
  /* 108c26cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c26cf jne 0x108c26d8 */
  if (!C.zf) goto L_108c26d8;
  /* 108c26d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c26d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c26d6 jmp 0x108c26db */
  goto L_108c26db;
L_108c26d8:;
  /* 108c26d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108c26db:;
  /* 108c26db mov esp, ebp */
  ESP = (EBP);
  /* 108c26dd pop ebp */
  EBP = (pop32());
  /* 108c26de ret  */
  ESPCHK(0x108c25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126e0 @ 0x108c26e0 (17 bytes, 8 insns) */
void f_108c26e0(void) {
  FTRACE(0x108c26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c26e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c26e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c26e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c26e6 push eax */
  push32((uint32_t)(EAX));
  /* 108c26e7 call 0x108c25e0 */
  push32(0x108c26ecu); f_108c25e0();
  /* 108c26ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c26ef pop ebp */
  EBP = (pop32());
  /* 108c26f0 ret  */
  ESPCHK(0x108c26e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x108c2700 (297 bytes, 106 insns) */
void f_108c2700(void) {
  FTRACE(0x108c2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2700 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2701 mov ebp, esp */
  EBP = (ESP);
  /* 108c2703 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2706 push esi */
  push32((uint32_t)(ESI));
L_108c2707:;
  /* 108c2707 cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c270e jle 0x108c2727 */
  if ((C.zf||C.sf!=C.of)) goto L_108c2727;
  /* 108c2710 push 8 */
  push32((uint32_t)(0x8u));
  /* 108c2712 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2715 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2717 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c2719 push ecx */
  push32((uint32_t)(ECX));
  /* 108c271a call 0x108b9d40 */
  push32(0x108c271fu); f_108b9d40();
  /* 108c271f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2722 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c2725 jmp 0x108c2740 */
  goto L_108c2740;
L_108c2727:;
  /* 108c2727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c272a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c272c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c272e mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c2734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2736 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c273a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108c273d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108c2740:;
  /* 108c2740 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2744 je 0x108c2751 */
  if (C.zf) goto L_108c2751;
  /* 108c2746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c274c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c274f jmp 0x108c2707 */
  goto L_108c2707;
L_108c2751:;
  /* 108c2751 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2756 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c2758 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c275b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c275e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2761 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c2764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2767 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108c276a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c276e je 0x108c2776 */
  if (C.zf) goto L_108c2776;
  /* 108c2770 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2774 jne 0x108c2789 */
  if (!C.zf) goto L_108c2789;
L_108c2776:;
  /* 108c2776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c277b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c277d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c2780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2783 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2786 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_108c2789:;
  /* 108c2789 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108c2790 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108c2797:;
  /* 108c2797 cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c279e jle 0x108c27b3 */
  if ((C.zf||C.sf!=C.of)) goto L_108c27b3;
  /* 108c27a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 108c27a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c27a5 push edx */
  push32((uint32_t)(EDX));
  /* 108c27a6 call 0x108b9d40 */
  push32(0x108c27abu); f_108b9d40();
  /* 108c27ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c27ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108c27b1 jmp 0x108c27c8 */
  goto L_108c27c8;
L_108c27b3:;
  /* 108c27b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c27b6 mov ecx, dword ptr [0x108ddc98] */
  ECX = (r32((uint32_t)(0x108ddc98)));
  /* 108c27bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c27be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108c27c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108c27c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_108c27c8:;
  /* 108c27c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c27cc je 0x108c2809 */
  if (C.zf) goto L_108c2809;
  /* 108c27ce push 0 */
  push32((uint32_t)(0x0u));
  /* 108c27d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 108c27d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c27d5 push eax */
  push32((uint32_t)(EAX));
  /* 108c27d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c27d9 push ecx */
  push32((uint32_t)(ECX));
  /* 108c27da call 0x108c36a0 */
  push32(0x108c27dfu); f_108c36a0();
  /* 108c27df mov ecx, eax */
  ECX = (EAX);
  /* 108c27e1 mov esi, edx */
  ESI = (EDX);
  /* 108c27e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c27e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c27e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c27ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c27ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108c27ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c27f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 108c27f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c27f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c27f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c27fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c27fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2801 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2804 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108c2807 jmp 0x108c2797 */
  goto L_108c2797;
L_108c2809:;
  /* 108c2809 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c280d jne 0x108c281e */
  if (!C.zf) goto L_108c281e;
  /* 108c280f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2812 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c2814 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c2817 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c281a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c281c jmp 0x108c2824 */
  goto L_108c2824;
L_108c281e:;
  /* 108c281e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2821 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_108c2824:;
  /* 108c2824 pop esi */
  ESI = (pop32());
  /* 108c2825 mov esp, ebp */
  ESP = (EBP);
  /* 108c2827 pop ebp */
  EBP = (pop32());
  /* 108c2828 ret  */
  ESPCHK(0x108c2700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x108c2830 (61 bytes, 18 insns) */
void f_108c2830(void) {
  FTRACE(0x108c2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2830 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2831 mov ebp, esp */
  EBP = (ESP);
  /* 108c2833 cmp dword ptr [0x108df8c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c283a jne 0x108c286b */
  if (!C.zf) goto L_108c286b;
  /* 108c283c push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c283e call 0x108b7730 */
  push32(0x108c2843u); f_108b7730();
  /* 108c2843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2846 cmp dword ptr [0x108df8c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c284d jne 0x108c2861 */
  if (!C.zf) goto L_108c2861;
  /* 108c284f call 0x108c2890 */
  push32(0x108c2854u); f_108c2890();
  /* 108c2854 mov eax, dword ptr [0x108df8c8] */
  EAX = (r32((uint32_t)(0x108df8c8)));
  /* 108c2859 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c285c mov dword ptr [0x108df8c8], eax */
  w32((uint32_t)(0x108df8c8), (EAX));
L_108c2861:;
  /* 108c2861 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c2863 call 0x108b77d0 */
  push32(0x108c2868u); f_108b77d0();
  /* 108c2868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c286b:;
  /* 108c286b pop ebp */
  EBP = (pop32());
  /* 108c286c ret  */
  ESPCHK(0x108c2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012870 @ 0x108c2870 (30 bytes, 11 insns) */
void f_108c2870(void) {
  FTRACE(0x108c2870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2870 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2871 mov ebp, esp */
  EBP = (ESP);
  /* 108c2873 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c2875 call 0x108b7730 */
  push32(0x108c287au); f_108b7730();
  /* 108c287a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c287d call 0x108c2890 */
  push32(0x108c2882u); f_108c2890();
  /* 108c2882 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c2884 call 0x108b77d0 */
  push32(0x108c2889u); f_108b77d0();
  /* 108c2889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c288c pop ebp */
  EBP = (pop32());
  /* 108c288d ret  */
  ESPCHK(0x108c2870u, _esp0);
  ESP += 4; return;
}

/* FUN_10012890 @ 0x108c2890 (939 bytes, 266 insns) */
void f_108c2890(void) {
  FTRACE(0x108c2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2890 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2891 mov ebp, esp */
  EBP = (ESP);
  /* 108c2893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c289d push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c289f call 0x108b7730 */
  push32(0x108c28a4u); f_108b7730();
  /* 108c28a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c28a7 mov dword ptr [0x108df810], 0 */
  w32((uint32_t)(0x108df810), (0x0u));
  /* 108c28b1 mov dword ptr [0x108dee38], 0xffffffff */
  w32((uint32_t)(0x108dee38), (0xffffffffu));
  /* 108c28bb mov eax, dword ptr [0x108dee38] */
  EAX = (r32((uint32_t)(0x108dee38)));
  /* 108c28c0 mov dword ptr [0x108dee28], eax */
  w32((uint32_t)(0x108dee28), (EAX));
  /* 108c28c5 push 0x108db908 */
  push32((uint32_t)(0x108db908u));
  /* 108c28ca call 0x108c3710 */
  push32(0x108c28cfu); f_108c3710();
  /* 108c28cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c28d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c28d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c28d9 jne 0x108c2a13 */
  if (!C.zf) goto L_108c2a13;
  /* 108c28df push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c28e1 call 0x108b77d0 */
  push32(0x108c28e6u); f_108b77d0();
  /* 108c28e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c28e9 push 0x108df818 */
  push32((uint32_t)(0x108df818u));
  /* 108c28ee call dword ptr [0x108e229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e229c))), 0x108c28f4u);
  /* 108c28f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c28f7 je 0x108c2a0e */
  if (C.zf) goto L_108c2a0e;
  /* 108c28fd mov dword ptr [0x108df810], 1 */
  w32((uint32_t)(0x108df810), (0x1u));
  /* 108c2907 mov ecx, dword ptr [0x108df818] */
  ECX = (r32((uint32_t)(0x108df818)));
  /* 108c290d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2910 mov dword ptr [0x108ded90], ecx */
  w32((uint32_t)(0x108ded90), (ECX));
  /* 108c2916 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2918 mov dx, word ptr [0x108df85e] */
  DX = (r16((uint32_t)(0x108df85e)));
  /* 108c291f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c2921 je 0x108c2939 */
  if (C.zf) goto L_108c2939;
  /* 108c2923 mov eax, dword ptr [0x108df86c] */
  EAX = (r32((uint32_t)(0x108df86c)));
  /* 108c2928 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c292b mov ecx, dword ptr [0x108ded90] */
  ECX = (r32((uint32_t)(0x108ded90)));
  /* 108c2931 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2933 mov dword ptr [0x108ded90], ecx */
  w32((uint32_t)(0x108ded90), (ECX));
L_108c2939:;
  /* 108c2939 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c293b mov dx, word ptr [0x108df8b2] */
  DX = (r16((uint32_t)(0x108df8b2)));
  /* 108c2942 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c2944 je 0x108c296e */
  if (C.zf) goto L_108c296e;
  /* 108c2946 cmp dword ptr [0x108df8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c294d je 0x108c296e */
  if (C.zf) goto L_108c296e;
  /* 108c294f mov dword ptr [0x108ded94], 1 */
  w32((uint32_t)(0x108ded94), (0x1u));
  /* 108c2959 mov eax, dword ptr [0x108df8c0] */
  EAX = (r32((uint32_t)(0x108df8c0)));
  /* 108c295e sub eax, dword ptr [0x108df86c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108df86c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2964 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2967 mov dword ptr [0x108ded98], eax */
  w32((uint32_t)(0x108ded98), (EAX));
  /* 108c296c jmp 0x108c2982 */
  goto L_108c2982;
L_108c296e:;
  /* 108c296e mov dword ptr [0x108ded94], 0 */
  w32((uint32_t)(0x108ded94), (0x0u));
  /* 108c2978 mov dword ptr [0x108ded98], 0 */
  w32((uint32_t)(0x108ded98), (0x0u));
L_108c2982:;
  /* 108c2982 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 108c2985 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2986 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2988 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 108c298a mov edx, dword ptr [0x108dee1c] */
  EDX = (r32((uint32_t)(0x108dee1c)));
  /* 108c2990 push edx */
  push32((uint32_t)(EDX));
  /* 108c2991 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c2993 push 0x108df81c */
  push32((uint32_t)(0x108df81cu));
  /* 108c2998 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108c299d mov eax, dword ptr [0x108df780] */
  EAX = (r32((uint32_t)(0x108df780)));
  /* 108c29a2 push eax */
  push32((uint32_t)(EAX));
  /* 108c29a3 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c29a9u);
  /* 108c29a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c29ab je 0x108c29bf */
  if (C.zf) goto L_108c29bf;
  /* 108c29ad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c29b1 jne 0x108c29bf */
  if (!C.zf) goto L_108c29bf;
  /* 108c29b3 mov ecx, dword ptr [0x108dee1c] */
  ECX = (r32((uint32_t)(0x108dee1c)));
  /* 108c29b9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 108c29bd jmp 0x108c29c8 */
  goto L_108c29c8;
L_108c29bf:;
  /* 108c29bf mov edx, dword ptr [0x108dee1c] */
  EDX = (r32((uint32_t)(0x108dee1c)));
  /* 108c29c5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_108c29c8:;
  /* 108c29c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 108c29cb push eax */
  push32((uint32_t)(EAX));
  /* 108c29cc push 0 */
  push32((uint32_t)(0x0u));
  /* 108c29ce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 108c29d0 mov ecx, dword ptr [0x108dee20] */
  ECX = (r32((uint32_t)(0x108dee20)));
  /* 108c29d6 push ecx */
  push32((uint32_t)(ECX));
  /* 108c29d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c29d9 push 0x108df870 */
  push32((uint32_t)(0x108df870u));
  /* 108c29de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108c29e3 mov edx, dword ptr [0x108df780] */
  EDX = (r32((uint32_t)(0x108df780)));
  /* 108c29e9 push edx */
  push32((uint32_t)(EDX));
  /* 108c29ea call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c29f0u);
  /* 108c29f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c29f2 je 0x108c2a05 */
  if (C.zf) goto L_108c2a05;
  /* 108c29f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c29f8 jne 0x108c2a05 */
  if (!C.zf) goto L_108c2a05;
  /* 108c29fa mov eax, dword ptr [0x108dee20] */
  EAX = (r32((uint32_t)(0x108dee20)));
  /* 108c29ff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 108c2a03 jmp 0x108c2a0e */
  goto L_108c2a0e;
L_108c2a05:;
  /* 108c2a05 mov ecx, dword ptr [0x108dee20] */
  ECX = (r32((uint32_t)(0x108dee20)));
  /* 108c2a0b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_108c2a0e:;
  /* 108c2a0e jmp 0x108c2c37 */
  goto L_108c2c37;
L_108c2a13:;
  /* 108c2a13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2a16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c2a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c2a1b je 0x108c2a3d */
  if (C.zf) goto L_108c2a3d;
  /* 108c2a1d cmp dword ptr [0x108df8c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2a24 je 0x108c2a4c */
  if (C.zf) goto L_108c2a4c;
  /* 108c2a26 mov ecx, dword ptr [0x108df8c4] */
  ECX = (r32((uint32_t)(0x108df8c4)));
  /* 108c2a2c push ecx */
  push32((uint32_t)(ECX));
  /* 108c2a2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2a30 push edx */
  push32((uint32_t)(EDX));
  /* 108c2a31 call 0x108bf9c0 */
  push32(0x108c2a36u); f_108bf9c0();
  /* 108c2a36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c2a3b jne 0x108c2a4c */
  if (!C.zf) goto L_108c2a4c;
L_108c2a3d:;
  /* 108c2a3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c2a3f call 0x108b77d0 */
  push32(0x108c2a44u); f_108b77d0();
  /* 108c2a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a47 jmp 0x108c2c37 */
  goto L_108c2c37;
L_108c2a4c:;
  /* 108c2a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 108c2a4e mov eax, dword ptr [0x108df8c4] */
  EAX = (r32((uint32_t)(0x108df8c4)));
  /* 108c2a53 push eax */
  push32((uint32_t)(EAX));
  /* 108c2a54 call 0x108b47c0 */
  push32(0x108c2a59u); f_108b47c0();
  /* 108c2a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a5c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 108c2a61 push 0x108db900 */
  push32((uint32_t)(0x108db900u));
  /* 108c2a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c2a68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2a6b push ecx */
  push32((uint32_t)(ECX));
  /* 108c2a6c call 0x108b6b60 */
  push32(0x108c2a71u); f_108b6b60();
  /* 108c2a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a77 push eax */
  push32((uint32_t)(EAX));
  /* 108c2a78 call 0x108b3d30 */
  push32(0x108c2a7du); f_108b3d30();
  /* 108c2a7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a80 mov dword ptr [0x108df8c4], eax */
  w32((uint32_t)(0x108df8c4), (EAX));
  /* 108c2a85 cmp dword ptr [0x108df8c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2a8c jne 0x108c2a9d */
  if (!C.zf) goto L_108c2a9d;
  /* 108c2a8e push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c2a90 call 0x108b77d0 */
  push32(0x108c2a95u); f_108b77d0();
  /* 108c2a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2a98 jmp 0x108c2c37 */
  goto L_108c2c37;
L_108c2a9d:;
  /* 108c2a9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2aa0 push edx */
  push32((uint32_t)(EDX));
  /* 108c2aa1 mov eax, dword ptr [0x108df8c4] */
  EAX = (r32((uint32_t)(0x108df8c4)));
  /* 108c2aa6 push eax */
  push32((uint32_t)(EAX));
  /* 108c2aa7 call 0x108b6ce0 */
  push32(0x108c2aacu); f_108b6ce0();
  /* 108c2aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2aaf push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c2ab1 call 0x108b77d0 */
  push32(0x108c2ab6u); f_108b77d0();
  /* 108c2ab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2ab9 push 3 */
  push32((uint32_t)(0x3u));
  /* 108c2abb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2abe push ecx */
  push32((uint32_t)(ECX));
  /* 108c2abf mov edx, dword ptr [0x108dee1c] */
  EDX = (r32((uint32_t)(0x108dee1c)));
  /* 108c2ac5 push edx */
  push32((uint32_t)(EDX));
  /* 108c2ac6 call 0x108b7550 */
  push32(0x108c2acbu); f_108b7550();
  /* 108c2acb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2ace mov eax, dword ptr [0x108dee1c] */
  EAX = (r32((uint32_t)(0x108dee1c)));
  /* 108c2ad3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 108c2ad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2ada add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2add mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c2ae0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2ae3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c2ae6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2ae9 jne 0x108c2afd */
  if (!C.zf) goto L_108c2afd;
  /* 108c2aeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2aee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2af1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c2af4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2af7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2afa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108c2afd:;
  /* 108c2afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b00 push eax */
  push32((uint32_t)(EAX));
  /* 108c2b01 call 0x108c25e0 */
  push32(0x108c2b06u); f_108c25e0();
  /* 108c2b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2b09 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2b0f mov dword ptr [0x108ded90], eax */
  w32((uint32_t)(0x108ded90), (EAX));
L_108c2b14:;
  /* 108c2b14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c2b1a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b1d je 0x108c2b35 */
  if (C.zf) goto L_108c2b35;
  /* 108c2b1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b22 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c2b25 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b28 jl 0x108c2b40 */
  if ((C.sf!=C.of)) goto L_108c2b40;
  /* 108c2b2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c2b30 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b33 jg 0x108c2b40 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c2b40;
L_108c2b35:;
  /* 108c2b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2b3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c2b3e jmp 0x108c2b14 */
  goto L_108c2b14;
L_108c2b40:;
  /* 108c2b40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c2b46 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b49 jne 0x108c2be5 */
  if (!C.zf) goto L_108c2be5;
  /* 108c2b4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2b55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c2b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b5b push edx */
  push32((uint32_t)(EDX));
  /* 108c2b5c call 0x108c25e0 */
  push32(0x108c2b61u); f_108c25e0();
  /* 108c2b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2b64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2b67 mov ecx, dword ptr [0x108ded90] */
  ECX = (r32((uint32_t)(0x108ded90)));
  /* 108c2b6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2b6f mov dword ptr [0x108ded90], ecx */
  w32((uint32_t)(0x108ded90), (ECX));
L_108c2b75:;
  /* 108c2b75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b78 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c2b7b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b7e jl 0x108c2b96 */
  if ((C.sf!=C.of)) goto L_108c2b96;
  /* 108c2b80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c2b86 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b89 jg 0x108c2b96 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c2b96;
  /* 108c2b8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2b91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c2b94 jmp 0x108c2b75 */
  goto L_108c2b75;
L_108c2b96:;
  /* 108c2b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2b99 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c2b9c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2b9f jne 0x108c2be5 */
  if (!C.zf) goto L_108c2be5;
  /* 108c2ba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2ba4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2ba7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c2baa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2bad push ecx */
  push32((uint32_t)(ECX));
  /* 108c2bae call 0x108c25e0 */
  push32(0x108c2bb3u); f_108c25e0();
  /* 108c2bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2bb6 mov edx, dword ptr [0x108ded90] */
  EDX = (r32((uint32_t)(0x108ded90)));
  /* 108c2bbc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2bbe mov dword ptr [0x108ded90], edx */
  w32((uint32_t)(0x108ded90), (EDX));
L_108c2bc4:;
  /* 108c2bc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2bc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c2bca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2bcd jl 0x108c2be5 */
  if ((C.sf!=C.of)) goto L_108c2be5;
  /* 108c2bcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2bd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108c2bd5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2bd8 jg 0x108c2be5 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c2be5;
  /* 108c2bda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2bdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2be0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c2be3 jmp 0x108c2bc4 */
  goto L_108c2bc4;
L_108c2be5:;
  /* 108c2be5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2be9 je 0x108c2bf9 */
  if (C.zf) goto L_108c2bf9;
  /* 108c2beb mov edx, dword ptr [0x108ded90] */
  EDX = (r32((uint32_t)(0x108ded90)));
  /* 108c2bf1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c2bf3 mov dword ptr [0x108ded90], edx */
  w32((uint32_t)(0x108ded90), (EDX));
L_108c2bf9:;
  /* 108c2bf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2bfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108c2bff mov dword ptr [0x108ded94], ecx */
  w32((uint32_t)(0x108ded94), (ECX));
  /* 108c2c05 cmp dword ptr [0x108ded94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108ded94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2c0c je 0x108c2c2e */
  if (C.zf) goto L_108c2c2e;
  /* 108c2c0e push 3 */
  push32((uint32_t)(0x3u));
  /* 108c2c10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2c13 push edx */
  push32((uint32_t)(EDX));
  /* 108c2c14 mov eax, dword ptr [0x108dee20] */
  EAX = (r32((uint32_t)(0x108dee20)));
  /* 108c2c19 push eax */
  push32((uint32_t)(EAX));
  /* 108c2c1a call 0x108b7550 */
  push32(0x108c2c1fu); f_108b7550();
  /* 108c2c1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2c22 mov ecx, dword ptr [0x108dee20] */
  ECX = (r32((uint32_t)(0x108dee20)));
  /* 108c2c28 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 108c2c2c jmp 0x108c2c37 */
  goto L_108c2c37;
L_108c2c2e:;
  /* 108c2c2e mov edx, dword ptr [0x108dee20] */
  EDX = (r32((uint32_t)(0x108dee20)));
  /* 108c2c34 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_108c2c37:;
  /* 108c2c37 mov esp, ebp */
  ESP = (EBP);
  /* 108c2c39 pop ebp */
  EBP = (pop32());
  /* 108c2c3a ret  */
  ESPCHK(0x108c2890u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x108c2c40 (46 bytes, 18 insns) */
void f_108c2c40(void) {
  FTRACE(0x108c2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2c40 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2c41 mov ebp, esp */
  EBP = (ESP);
  /* 108c2c43 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2c44 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c2c46 call 0x108b7730 */
  push32(0x108c2c4bu); f_108b7730();
  /* 108c2c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2c51 push eax */
  push32((uint32_t)(EAX));
  /* 108c2c52 call 0x108c2c70 */
  push32(0x108c2c57u); f_108c2c70();
  /* 108c2c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2c5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c2c5d push 0xb */
  push32((uint32_t)(0xbu));
  /* 108c2c5f call 0x108b77d0 */
  push32(0x108c2c64u); f_108b77d0();
  /* 108c2c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2c67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2c6a mov esp, ebp */
  ESP = (EBP);
  /* 108c2c6c pop ebp */
  EBP = (pop32());
  /* 108c2c6d ret  */
  ESPCHK(0x108c2c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c70 @ 0x108c2c70 (762 bytes, 246 insns) */
void f_108c2c70(void) {
  FTRACE(0x108c2c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2c70 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2c71 mov ebp, esp */
  EBP = (ESP);
  /* 108c2c73 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2c74 cmp dword ptr [0x108ded94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108ded94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2c7b jne 0x108c2c84 */
  if (!C.zf) goto L_108c2c84;
  /* 108c2c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2c7f jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2c84:;
  /* 108c2c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2c87 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108c2c8a cmp ecx, dword ptr [0x108dee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108dee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2c90 jne 0x108c2ca4 */
  if (!C.zf) goto L_108c2ca4;
  /* 108c2c92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2c95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108c2c98 cmp eax, dword ptr [0x108dee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2c9e je 0x108c2e6b */
  if (C.zf) goto L_108c2e6b;
L_108c2ca4:;
  /* 108c2ca4 cmp dword ptr [0x108df810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2cab je 0x108c2e25 */
  if (C.zf) goto L_108c2e25;
  /* 108c2cb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2cb3 mov cx, word ptr [0x108df8b0] */
  CX = (r16((uint32_t)(0x108df8b0)));
  /* 108c2cba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c2cbc jne 0x108c2d19 */
  if (!C.zf) goto L_108c2d19;
  /* 108c2cbe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2cc0 mov dx, word ptr [0x108df8be] */
  DX = (r16((uint32_t)(0x108df8be)));
  /* 108c2cc7 push edx */
  push32((uint32_t)(EDX));
  /* 108c2cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2cca mov ax, word ptr [0x108df8bc] */
  AX = (r16((uint32_t)(0x108df8bc)));
  /* 108c2cd0 push eax */
  push32((uint32_t)(EAX));
  /* 108c2cd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2cd3 mov cx, word ptr [0x108df8ba] */
  CX = (r16((uint32_t)(0x108df8ba)));
  /* 108c2cda push ecx */
  push32((uint32_t)(ECX));
  /* 108c2cdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2cdd mov dx, word ptr [0x108df8b8] */
  DX = (r16((uint32_t)(0x108df8b8)));
  /* 108c2ce4 push edx */
  push32((uint32_t)(EDX));
  /* 108c2ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2ce9 mov ax, word ptr [0x108df8b4] */
  AX = (r16((uint32_t)(0x108df8b4)));
  /* 108c2cef push eax */
  push32((uint32_t)(EAX));
  /* 108c2cf0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2cf2 mov cx, word ptr [0x108df8b6] */
  CX = (r16((uint32_t)(0x108df8b6)));
  /* 108c2cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2cfa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2cfc mov dx, word ptr [0x108df8b2] */
  DX = (r16((uint32_t)(0x108df8b2)));
  /* 108c2d03 push edx */
  push32((uint32_t)(EDX));
  /* 108c2d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2d07 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108c2d0a push ecx */
  push32((uint32_t)(ECX));
  /* 108c2d0b push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2d0f call 0x108c2f70 */
  push32(0x108c2d14u); f_108c2f70();
  /* 108c2d14 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2d17 jmp 0x108c2d6a */
  goto L_108c2d6a;
L_108c2d19:;
  /* 108c2d19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2d1b mov dx, word ptr [0x108df8be] */
  DX = (r16((uint32_t)(0x108df8be)));
  /* 108c2d22 push edx */
  push32((uint32_t)(EDX));
  /* 108c2d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2d25 mov ax, word ptr [0x108df8bc] */
  AX = (r16((uint32_t)(0x108df8bc)));
  /* 108c2d2b push eax */
  push32((uint32_t)(EAX));
  /* 108c2d2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2d2e mov cx, word ptr [0x108df8ba] */
  CX = (r16((uint32_t)(0x108df8ba)));
  /* 108c2d35 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2d36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2d38 mov dx, word ptr [0x108df8b8] */
  DX = (r16((uint32_t)(0x108df8b8)));
  /* 108c2d3f push edx */
  push32((uint32_t)(EDX));
  /* 108c2d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2d42 mov ax, word ptr [0x108df8b6] */
  AX = (r16((uint32_t)(0x108df8b6)));
  /* 108c2d48 push eax */
  push32((uint32_t)(EAX));
  /* 108c2d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2d4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2d4f mov cx, word ptr [0x108df8b2] */
  CX = (r16((uint32_t)(0x108df8b2)));
  /* 108c2d56 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2d57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2d5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108c2d5d push eax */
  push32((uint32_t)(EAX));
  /* 108c2d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2d62 call 0x108c2f70 */
  push32(0x108c2d67u); f_108c2f70();
  /* 108c2d67 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c2d6a:;
  /* 108c2d6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2d6c mov cx, word ptr [0x108df85c] */
  CX = (r16((uint32_t)(0x108df85c)));
  /* 108c2d73 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c2d75 jne 0x108c2dd2 */
  if (!C.zf) goto L_108c2dd2;
  /* 108c2d77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2d79 mov dx, word ptr [0x108df86a] */
  DX = (r16((uint32_t)(0x108df86a)));
  /* 108c2d80 push edx */
  push32((uint32_t)(EDX));
  /* 108c2d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2d83 mov ax, word ptr [0x108df868] */
  AX = (r16((uint32_t)(0x108df868)));
  /* 108c2d89 push eax */
  push32((uint32_t)(EAX));
  /* 108c2d8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2d8c mov cx, word ptr [0x108df866] */
  CX = (r16((uint32_t)(0x108df866)));
  /* 108c2d93 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2d96 mov dx, word ptr [0x108df864] */
  DX = (r16((uint32_t)(0x108df864)));
  /* 108c2d9d push edx */
  push32((uint32_t)(EDX));
  /* 108c2d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2da2 mov ax, word ptr [0x108df860] */
  AX = (r16((uint32_t)(0x108df860)));
  /* 108c2da8 push eax */
  push32((uint32_t)(EAX));
  /* 108c2da9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2dab mov cx, word ptr [0x108df862] */
  CX = (r16((uint32_t)(0x108df862)));
  /* 108c2db2 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2db3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2db5 mov dx, word ptr [0x108df85e] */
  DX = (r16((uint32_t)(0x108df85e)));
  /* 108c2dbc push edx */
  push32((uint32_t)(EDX));
  /* 108c2dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2dc0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108c2dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c2dc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2dc8 call 0x108c2f70 */
  push32(0x108c2dcdu); f_108c2f70();
  /* 108c2dcd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2dd0 jmp 0x108c2e23 */
  goto L_108c2e23;
L_108c2dd2:;
  /* 108c2dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2dd4 mov dx, word ptr [0x108df86a] */
  DX = (r16((uint32_t)(0x108df86a)));
  /* 108c2ddb push edx */
  push32((uint32_t)(EDX));
  /* 108c2ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2dde mov ax, word ptr [0x108df868] */
  AX = (r16((uint32_t)(0x108df868)));
  /* 108c2de4 push eax */
  push32((uint32_t)(EAX));
  /* 108c2de5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2de7 mov cx, word ptr [0x108df866] */
  CX = (r16((uint32_t)(0x108df866)));
  /* 108c2dee push ecx */
  push32((uint32_t)(ECX));
  /* 108c2def xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c2df1 mov dx, word ptr [0x108df864] */
  DX = (r16((uint32_t)(0x108df864)));
  /* 108c2df8 push edx */
  push32((uint32_t)(EDX));
  /* 108c2df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2dfb mov ax, word ptr [0x108df862] */
  AX = (r16((uint32_t)(0x108df862)));
  /* 108c2e01 push eax */
  push32((uint32_t)(EAX));
  /* 108c2e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c2e08 mov cx, word ptr [0x108df85e] */
  CX = (r16((uint32_t)(0x108df85e)));
  /* 108c2e0f push ecx */
  push32((uint32_t)(ECX));
  /* 108c2e10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2e13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108c2e16 push eax */
  push32((uint32_t)(EAX));
  /* 108c2e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e1b call 0x108c2f70 */
  push32(0x108c2e20u); f_108c2f70();
  /* 108c2e20 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c2e23:;
  /* 108c2e23 jmp 0x108c2e6b */
  goto L_108c2e6b;
L_108c2e25:;
  /* 108c2e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 108c2e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2e33 push 4 */
  push32((uint32_t)(0x4u));
  /* 108c2e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2e38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108c2e3b push edx */
  push32((uint32_t)(EDX));
  /* 108c2e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2e3e push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2e40 call 0x108c2f70 */
  push32(0x108c2e45u); f_108c2f70();
  /* 108c2e45 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 108c2e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e54 push 5 */
  push32((uint32_t)(0x5u));
  /* 108c2e56 push 0xa */
  push32((uint32_t)(0xau));
  /* 108c2e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2e5b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108c2e5e push ecx */
  push32((uint32_t)(ECX));
  /* 108c2e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 108c2e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c2e63 call 0x108c2f70 */
  push32(0x108c2e68u); f_108c2f70();
  /* 108c2e68 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c2e6b:;
  /* 108c2e6b mov edx, dword ptr [0x108dee2c] */
  EDX = (r32((uint32_t)(0x108dee2c)));
  /* 108c2e71 cmp edx, dword ptr [0x108dee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108dee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2e77 jge 0x108c2ec4 */
  if ((C.sf==C.of)) goto L_108c2ec4;
  /* 108c2e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2e7c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108c2e7f cmp ecx, dword ptr [0x108dee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108dee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2e85 jl 0x108c2e95 */
  if ((C.sf!=C.of)) goto L_108c2e95;
  /* 108c2e87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2e8a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108c2e8d cmp eax, dword ptr [0x108dee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2e93 jle 0x108c2e9c */
  if ((C.zf||C.sf!=C.of)) goto L_108c2e9c;
L_108c2e95:;
  /* 108c2e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2e97 jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2e9c:;
  /* 108c2e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2e9f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108c2ea2 cmp edx, dword ptr [0x108dee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108dee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2ea8 jle 0x108c2ec2 */
  if ((C.zf||C.sf!=C.of)) goto L_108c2ec2;
  /* 108c2eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2ead mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108c2eb0 cmp ecx, dword ptr [0x108dee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108dee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2eb6 jge 0x108c2ec2 */
  if ((C.sf==C.of)) goto L_108c2ec2;
  /* 108c2eb8 mov eax, 1 */
  EAX = (0x1u);
  /* 108c2ebd jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2ec2:;
  /* 108c2ec2 jmp 0x108c2f07 */
  goto L_108c2f07;
L_108c2ec4:;
  /* 108c2ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2ec7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108c2eca cmp eax, dword ptr [0x108dee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2ed0 jl 0x108c2ee0 */
  if ((C.sf!=C.of)) goto L_108c2ee0;
  /* 108c2ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2ed5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108c2ed8 cmp edx, dword ptr [0x108dee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108dee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2ede jle 0x108c2ee7 */
  if ((C.zf||C.sf!=C.of)) goto L_108c2ee7;
L_108c2ee0:;
  /* 108c2ee0 mov eax, 1 */
  EAX = (0x1u);
  /* 108c2ee5 jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2ee7:;
  /* 108c2ee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2eea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108c2eed cmp ecx, dword ptr [0x108dee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108dee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2ef3 jle 0x108c2f07 */
  if ((C.zf||C.sf!=C.of)) goto L_108c2f07;
  /* 108c2ef5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2ef8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108c2efb cmp eax, dword ptr [0x108dee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2f01 jge 0x108c2f07 */
  if ((C.sf==C.of)) goto L_108c2f07;
  /* 108c2f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2f05 jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2f07:;
  /* 108c2f07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2f0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108c2f0d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2f13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c2f15 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2f1a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108c2f1d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2f23 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2f25 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2f2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c2f2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c2f31 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108c2f34 cmp edx, dword ptr [0x108dee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108dee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2f3a jne 0x108c2f52 */
  if (!C.zf) goto L_108c2f52;
  /* 108c2f3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2f3f cmp eax, dword ptr [0x108dee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2f45 jl 0x108c2f4e */
  if ((C.sf!=C.of)) goto L_108c2f4e;
  /* 108c2f47 mov eax, 1 */
  EAX = (0x1u);
  /* 108c2f4c jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2f4e:;
  /* 108c2f4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c2f50 jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2f52:;
  /* 108c2f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2f55 cmp ecx, dword ptr [0x108dee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108dee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2f5b jge 0x108c2f64 */
  if ((C.sf==C.of)) goto L_108c2f64;
  /* 108c2f5d mov eax, 1 */
  EAX = (0x1u);
  /* 108c2f62 jmp 0x108c2f66 */
  goto L_108c2f66;
L_108c2f64:;
  /* 108c2f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c2f66:;
  /* 108c2f66 mov esp, ebp */
  ESP = (EBP);
  /* 108c2f68 pop ebp */
  EBP = (pop32());
  /* 108c2f69 ret  */
  ESPCHK(0x108c2c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x108c2f70 (504 bytes, 145 insns) */
void f_108c2f70(void) {
  FTRACE(0x108c2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 108c2f71 mov ebp, esp */
  EBP = (ESP);
  /* 108c2f73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2f76 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2f7a jne 0x108c304c */
  if (!C.zf) goto L_108c304c;
  /* 108c2f80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c2f83 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108c2f86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c2f88 jne 0x108c2f99 */
  if (!C.zf) goto L_108c2f99;
  /* 108c2f8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c2f8d mov edx, dword ptr [ecx*4 + 0x108dee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dee4c)));
  /* 108c2f94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108c2f97 jmp 0x108c2fa6 */
  goto L_108c2fa6;
L_108c2f99:;
  /* 108c2f99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c2f9c mov ecx, dword ptr [eax*4 + 0x108dee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108dee80)));
  /* 108c2fa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108c2fa6:;
  /* 108c2fa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c2fa9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2fac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c2faf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c2fb2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2fb5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2fbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c2fbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2fc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c2fc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2fc6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 108c2fc9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 108c2fcd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108c2fce mov ecx, 7 */
  ECX = (0x7u);
  /* 108c2fd3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108c2fd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c2fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c2fdb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c2fde jge 0x108c2ff9 */
  if ((C.sf==C.of)) goto L_108c2ff9;
  /* 108c2fe0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c2fe3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2fe6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c2fe9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2fec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c2fef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2ff2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c2ff4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c2ff7 jmp 0x108c300d */
  goto L_108c300d;
L_108c2ff9:;
  /* 108c2ff9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c2ffc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c2fff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c3002 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c3005 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3008 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c300a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108c300d:;
  /* 108c300d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3011 jne 0x108c304a */
  if (!C.zf) goto L_108c304a;
  /* 108c3013 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3016 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 108c3019 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c301b jne 0x108c302c */
  if (!C.zf) goto L_108c302c;
  /* 108c301d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c3020 mov eax, dword ptr [edx*4 + 0x108dee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108dee50)));
  /* 108c3027 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108c302a jmp 0x108c3039 */
  goto L_108c3039;
L_108c302c:;
  /* 108c302c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c302f mov edx, dword ptr [ecx*4 + 0x108dee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dee84)));
  /* 108c3036 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108c3039:;
  /* 108c3039 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c303c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c303f jle 0x108c304a */
  if ((C.zf||C.sf!=C.of)) goto L_108c304a;
  /* 108c3041 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3044 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3047 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108c304a:;
  /* 108c304a jmp 0x108c3081 */
  goto L_108c3081;
L_108c304c:;
  /* 108c304c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c304f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108c3052 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3054 jne 0x108c3065 */
  if (!C.zf) goto L_108c3065;
  /* 108c3056 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c3059 mov ecx, dword ptr [eax*4 + 0x108dee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108dee4c)));
  /* 108c3060 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108c3063 jmp 0x108c3072 */
  goto L_108c3072;
L_108c3065:;
  /* 108c3065 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c3068 mov eax, dword ptr [edx*4 + 0x108dee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108dee80)));
  /* 108c306f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_108c3072:;
  /* 108c3072 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c3075 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108c3078 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c307b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c307e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108c3081:;
  /* 108c3081 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3085 jne 0x108c30c1 */
  if (!C.zf) goto L_108c30c1;
  /* 108c3087 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c308a mov dword ptr [0x108dee2c], eax */
  w32((uint32_t)(0x108dee2c), (EAX));
  /* 108c308f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 108c3092 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c3095 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 108c3098 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c309a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c309d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 108c30a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c30a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c30a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 108c30ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c30ad mov dword ptr [0x108dee30], ecx */
  w32((uint32_t)(0x108dee30), (ECX));
  /* 108c30b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c30b6 mov dword ptr [0x108dee28], edx */
  w32((uint32_t)(0x108dee28), (EDX));
  /* 108c30bc jmp 0x108c3164 */
  goto L_108c3164;
L_108c30c1:;
  /* 108c30c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c30c4 mov dword ptr [0x108dee3c], eax */
  w32((uint32_t)(0x108dee3c), (EAX));
  /* 108c30c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 108c30cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c30cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 108c30d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c30d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c30d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 108c30da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c30dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c30e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 108c30e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c30e7 mov dword ptr [0x108dee40], ecx */
  w32((uint32_t)(0x108dee40), (ECX));
  /* 108c30ed mov edx, dword ptr [0x108ded98] */
  EDX = (r32((uint32_t)(0x108ded98)));
  /* 108c30f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108c30f9 mov eax, dword ptr [0x108dee40] */
  EAX = (r32((uint32_t)(0x108dee40)));
  /* 108c30fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3100 mov dword ptr [0x108dee40], eax */
  w32((uint32_t)(0x108dee40), (EAX));
  /* 108c3105 cmp dword ptr [0x108dee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108dee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c310c jge 0x108c3131 */
  if ((C.sf==C.of)) goto L_108c3131;
  /* 108c310e mov ecx, dword ptr [0x108dee40] */
  ECX = (r32((uint32_t)(0x108dee40)));
  /* 108c3114 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c311a mov dword ptr [0x108dee40], ecx */
  w32((uint32_t)(0x108dee40), (ECX));
  /* 108c3120 mov edx, dword ptr [0x108dee3c] */
  EDX = (r32((uint32_t)(0x108dee3c)));
  /* 108c3126 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3129 mov dword ptr [0x108dee3c], edx */
  w32((uint32_t)(0x108dee3c), (EDX));
  /* 108c312f jmp 0x108c315b */
  goto L_108c315b;
L_108c3131:;
  /* 108c3131 cmp dword ptr [0x108dee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x108dee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c313b jl 0x108c315b */
  if ((C.sf!=C.of)) goto L_108c315b;
  /* 108c313d mov eax, dword ptr [0x108dee40] */
  EAX = (r32((uint32_t)(0x108dee40)));
  /* 108c3142 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3147 mov dword ptr [0x108dee40], eax */
  w32((uint32_t)(0x108dee40), (EAX));
  /* 108c314c mov ecx, dword ptr [0x108dee3c] */
  ECX = (r32((uint32_t)(0x108dee3c)));
  /* 108c3152 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3155 mov dword ptr [0x108dee3c], ecx */
  w32((uint32_t)(0x108dee3c), (ECX));
L_108c315b:;
  /* 108c315b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c315e mov dword ptr [0x108dee38], edx */
  w32((uint32_t)(0x108dee38), (EDX));
L_108c3164:;
  /* 108c3164 mov esp, ebp */
  ESP = (EBP);
  /* 108c3166 pop ebp */
  EBP = (pop32());
  /* 108c3167 ret  */
  ESPCHK(0x108c2f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x108c3170 (382 bytes, 135 insns) */
void f_108c3170(void) {
  FTRACE(0x108c3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3170 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3171 mov ebp, esp */
  EBP = (ESP);
  /* 108c3173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c3175 push 0x108db910 */
  push32((uint32_t)(0x108db910u));
  /* 108c317a push 0x108bce38 */
  push32((uint32_t)(0x108bce38u));
  /* 108c317f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108c3185 push eax */
  push32((uint32_t)(EAX));
  /* 108c3186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108c318d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3190 push ebx */
  push32((uint32_t)(EBX));
  /* 108c3191 push esi */
  push32((uint32_t)(ESI));
  /* 108c3192 push edi */
  push32((uint32_t)(EDI));
  /* 108c3193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c3196 cmp dword ptr [0x108df8cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c319d jne 0x108c31e2 */
  if (!C.zf) goto L_108c31e2;
  /* 108c319f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c31a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c31a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c31a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c31a7 call dword ptr [0x108e2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2298))), 0x108c31adu);
  /* 108c31ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c31af je 0x108c31bd */
  if (C.zf) goto L_108c31bd;
  /* 108c31b1 mov dword ptr [0x108df8cc], 1 */
  w32((uint32_t)(0x108df8cc), (0x1u));
  /* 108c31bb jmp 0x108c31e2 */
  goto L_108c31e2;
L_108c31bd:;
  /* 108c31bd push 0 */
  push32((uint32_t)(0x0u));
  /* 108c31bf push 0 */
  push32((uint32_t)(0x0u));
  /* 108c31c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c31c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c31c5 call dword ptr [0x108e22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b0))), 0x108c31cbu);
  /* 108c31cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c31cd je 0x108c31db */
  if (C.zf) goto L_108c31db;
  /* 108c31cf mov dword ptr [0x108df8cc], 2 */
  w32((uint32_t)(0x108df8cc), (0x2u));
  /* 108c31d9 jmp 0x108c31e2 */
  goto L_108c31e2;
L_108c31db:;
  /* 108c31db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c31dd jmp 0x108c32f1 */
  goto L_108c32f1;
L_108c31e2:;
  /* 108c31e2 cmp dword ptr [0x108df8cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df8cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c31e9 jne 0x108c3206 */
  if (!C.zf) goto L_108c3206;
  /* 108c31eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c31ee push eax */
  push32((uint32_t)(EAX));
  /* 108c31ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c31f2 push ecx */
  push32((uint32_t)(ECX));
  /* 108c31f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c31f6 push edx */
  push32((uint32_t)(EDX));
  /* 108c31f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c31fa push eax */
  push32((uint32_t)(EAX));
  /* 108c31fb call dword ptr [0x108e2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2298))), 0x108c3201u);
  /* 108c3201 jmp 0x108c32f1 */
  goto L_108c32f1;
L_108c3206:;
  /* 108c3206 cmp dword ptr [0x108df8cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df8cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c320d jne 0x108c32ef */
  if (!C.zf) goto L_108c32ef;
  /* 108c3213 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3217 jne 0x108c3222 */
  if (!C.zf) goto L_108c3222;
  /* 108c3219 mov ecx, dword ptr [0x108df780] */
  ECX = (r32((uint32_t)(0x108df780)));
  /* 108c321f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_108c3222:;
  /* 108c3222 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3224 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c3229 push edx */
  push32((uint32_t)(EDX));
  /* 108c322a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c322d push eax */
  push32((uint32_t)(EAX));
  /* 108c322e call dword ptr [0x108e22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b0))), 0x108c3234u);
  /* 108c3234 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108c3237 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c323b jne 0x108c3244 */
  if (!C.zf) goto L_108c3244;
  /* 108c323d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c323f jmp 0x108c32f1 */
  goto L_108c32f1;
L_108c3244:;
  /* 108c3244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c324b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c324e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3251 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108c3253 call 0x108b6ed0 */
  push32(0x108c3258u); f_108b6ed0();
  /* 108c3258 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 108c325b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c325e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c3261 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108c3264 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108c326b jmp 0x108c3284 */
  goto L_108c3284;
  /* 108c326d mov eax, 1 */
  EAX = (0x1u);
  /* 108c3272 ret  */
  ESPCHK(0x108c3170u, _esp0);
  ESP += 4; return;
  /* 108c3273 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3276 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108c327d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108c3284:;
  /* 108c3284 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3288 jne 0x108c328e */
  if (!C.zf) goto L_108c328e;
  /* 108c328a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c328c jmp 0x108c32f1 */
  goto L_108c32f1;
L_108c328e:;
  /* 108c328e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c3291 push edx */
  push32((uint32_t)(EDX));
  /* 108c3292 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3295 push eax */
  push32((uint32_t)(EAX));
  /* 108c3296 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c3299 push ecx */
  push32((uint32_t)(ECX));
  /* 108c329a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c329d push edx */
  push32((uint32_t)(EDX));
  /* 108c329e call dword ptr [0x108e22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b0))), 0x108c32a4u);
  /* 108c32a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c32a6 jne 0x108c32ac */
  if (!C.zf) goto L_108c32ac;
  /* 108c32a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c32aa jmp 0x108c32f1 */
  goto L_108c32f1;
L_108c32ac:;
  /* 108c32ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c32b0 jne 0x108c32cd */
  if (!C.zf) goto L_108c32cd;
  /* 108c32b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c32b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c32b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c32b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c32bb push eax */
  push32((uint32_t)(EAX));
  /* 108c32bc push 1 */
  push32((uint32_t)(0x1u));
  /* 108c32be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c32c1 push ecx */
  push32((uint32_t)(ECX));
  /* 108c32c2 call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108c32c8u);
  /* 108c32c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108c32cb jmp 0x108c32ea */
  goto L_108c32ea;
L_108c32cd:;
  /* 108c32cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c32d0 push edx */
  push32((uint32_t)(EDX));
  /* 108c32d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c32d4 push eax */
  push32((uint32_t)(EAX));
  /* 108c32d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c32d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c32da push ecx */
  push32((uint32_t)(ECX));
  /* 108c32db push 1 */
  push32((uint32_t)(0x1u));
  /* 108c32dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c32e0 push edx */
  push32((uint32_t)(EDX));
  /* 108c32e1 call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108c32e7u);
  /* 108c32e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108c32ea:;
  /* 108c32ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c32ed jmp 0x108c32f1 */
  goto L_108c32f1;
L_108c32ef:;
  /* 108c32ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c32f1:;
  /* 108c32f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 108c32f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c32f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108c32fe pop edi */
  EDI = (pop32());
  /* 108c32ff pop esi */
  ESI = (pop32());
  /* 108c3300 pop ebx */
  EBX = (pop32());
  /* 108c3301 mov esp, ebp */
  ESP = (EBP);
  /* 108c3303 pop ebp */
  EBP = (pop32());
  /* 108c3304 ret  */
  ESPCHK(0x108c3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013310 @ 0x108c3310 (398 bytes, 140 insns) */
void f_108c3310(void) {
  FTRACE(0x108c3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3310 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3311 mov ebp, esp */
  EBP = (ESP);
  /* 108c3313 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c3315 push 0x108db920 */
  push32((uint32_t)(0x108db920u));
  /* 108c331a push 0x108bce38 */
  push32((uint32_t)(0x108bce38u));
  /* 108c331f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108c3325 push eax */
  push32((uint32_t)(EAX));
  /* 108c3326 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108c332d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3330 push ebx */
  push32((uint32_t)(EBX));
  /* 108c3331 push esi */
  push32((uint32_t)(ESI));
  /* 108c3332 push edi */
  push32((uint32_t)(EDI));
  /* 108c3333 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c3336 cmp dword ptr [0x108df8d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c333d jne 0x108c3382 */
  if (!C.zf) goto L_108c3382;
  /* 108c333f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3341 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3343 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3345 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3347 call dword ptr [0x108e2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2298))), 0x108c334du);
  /* 108c334d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c334f je 0x108c335d */
  if (C.zf) goto L_108c335d;
  /* 108c3351 mov dword ptr [0x108df8d0], 1 */
  w32((uint32_t)(0x108df8d0), (0x1u));
  /* 108c335b jmp 0x108c3382 */
  goto L_108c3382;
L_108c335d:;
  /* 108c335d push 0 */
  push32((uint32_t)(0x0u));
  /* 108c335f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3361 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3363 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3365 call dword ptr [0x108e22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b0))), 0x108c336bu);
  /* 108c336b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c336d je 0x108c337b */
  if (C.zf) goto L_108c337b;
  /* 108c336f mov dword ptr [0x108df8d0], 2 */
  w32((uint32_t)(0x108df8d0), (0x2u));
  /* 108c3379 jmp 0x108c3382 */
  goto L_108c3382;
L_108c337b:;
  /* 108c337b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c337d jmp 0x108c34a1 */
  goto L_108c34a1;
L_108c3382:;
  /* 108c3382 cmp dword ptr [0x108df8d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3389 jne 0x108c33a6 */
  if (!C.zf) goto L_108c33a6;
  /* 108c338b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c338e push eax */
  push32((uint32_t)(EAX));
  /* 108c338f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3392 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3393 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c3396 push edx */
  push32((uint32_t)(EDX));
  /* 108c3397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c339a push eax */
  push32((uint32_t)(EAX));
  /* 108c339b call dword ptr [0x108e22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22b0))), 0x108c33a1u);
  /* 108c33a1 jmp 0x108c34a1 */
  goto L_108c34a1;
L_108c33a6:;
  /* 108c33a6 cmp dword ptr [0x108df8d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c33ad jne 0x108c349f */
  if (!C.zf) goto L_108c349f;
  /* 108c33b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c33b7 jne 0x108c33c2 */
  if (!C.zf) goto L_108c33c2;
  /* 108c33b9 mov ecx, dword ptr [0x108df780] */
  ECX = (r32((uint32_t)(0x108df780)));
  /* 108c33bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_108c33c2:;
  /* 108c33c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c33c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c33c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c33c9 push edx */
  push32((uint32_t)(EDX));
  /* 108c33ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c33cd push eax */
  push32((uint32_t)(EAX));
  /* 108c33ce call dword ptr [0x108e2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2298))), 0x108c33d4u);
  /* 108c33d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108c33d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c33db jne 0x108c33e4 */
  if (!C.zf) goto L_108c33e4;
  /* 108c33dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c33df jmp 0x108c34a1 */
  goto L_108c34a1;
L_108c33e4:;
  /* 108c33e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c33eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c33ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108c33f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c33f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108c33f5 call 0x108b6ed0 */
  push32(0x108c33fau); f_108b6ed0();
  /* 108c33fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 108c33fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c3400 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c3403 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108c3406 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108c340d jmp 0x108c3426 */
  goto L_108c3426;
  /* 108c340f mov eax, 1 */
  EAX = (0x1u);
  /* 108c3414 ret  */
  ESPCHK(0x108c3310u, _esp0);
  ESP += 4; return;
  /* 108c3415 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3418 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108c341f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108c3426:;
  /* 108c3426 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c342a jne 0x108c3430 */
  if (!C.zf) goto L_108c3430;
  /* 108c342c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c342e jmp 0x108c34a1 */
  goto L_108c34a1;
L_108c3430:;
  /* 108c3430 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c3433 push edx */
  push32((uint32_t)(EDX));
  /* 108c3434 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3437 push eax */
  push32((uint32_t)(EAX));
  /* 108c3438 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c343b push ecx */
  push32((uint32_t)(ECX));
  /* 108c343c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c343f push edx */
  push32((uint32_t)(EDX));
  /* 108c3440 call dword ptr [0x108e2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2298))), 0x108c3446u);
  /* 108c3446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3448 jne 0x108c344e */
  if (!C.zf) goto L_108c344e;
  /* 108c344a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c344c jmp 0x108c34a1 */
  goto L_108c34a1;
L_108c344e:;
  /* 108c344e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3452 jne 0x108c3476 */
  if (!C.zf) goto L_108c3476;
  /* 108c3454 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3456 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3458 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c345a push 0 */
  push32((uint32_t)(0x0u));
  /* 108c345c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c345e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3461 push eax */
  push32((uint32_t)(EAX));
  /* 108c3462 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108c3467 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c346a push ecx */
  push32((uint32_t)(ECX));
  /* 108c346b call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c3471u);
  /* 108c3471 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108c3474 jmp 0x108c349a */
  goto L_108c349a;
L_108c3476:;
  /* 108c3476 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3478 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c347a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c347d push edx */
  push32((uint32_t)(EDX));
  /* 108c347e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3481 push eax */
  push32((uint32_t)(EAX));
  /* 108c3482 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c3484 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3487 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3488 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108c348d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c3490 push edx */
  push32((uint32_t)(EDX));
  /* 108c3491 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c3497u);
  /* 108c3497 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108c349a:;
  /* 108c349a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c349d jmp 0x108c34a1 */
  goto L_108c34a1;
L_108c349f:;
  /* 108c349f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c34a1:;
  /* 108c34a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 108c34a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c34a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108c34ae pop edi */
  EDI = (pop32());
  /* 108c34af pop esi */
  ESI = (pop32());
  /* 108c34b0 pop ebx */
  EBX = (pop32());
  /* 108c34b1 mov esp, ebp */
  ESP = (EBP);
  /* 108c34b3 pop ebp */
  EBP = (pop32());
  /* 108c34b4 ret  */
  ESPCHK(0x108c3310u, _esp0);
  ESP += 4; return;
}

/* FUN_100134c0 @ 0x108c34c0 (11 bytes, 6 insns) */
void f_108c34c0(void) {
  FTRACE(0x108c34c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c34c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c34c1 mov ebp, esp */
  EBP = (ESP);
  /* 108c34c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c34c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c34c9 pop ebp */
  EBP = (pop32());
  /* 108c34ca ret  */
  ESPCHK(0x108c34c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134d0 @ 0x108c34d0 (147 bytes, 43 insns) */
void f_108c34d0(void) {
  FTRACE(0x108c34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c34d1 mov ebp, esp */
  EBP = (ESP);
  /* 108c34d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c34d4 cmp dword ptr [0x108df770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c34db jne 0x108c34f7 */
  if (!C.zf) goto L_108c34f7;
  /* 108c34dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c34e1 jl 0x108c34f2 */
  if ((C.sf!=C.of)) goto L_108c34f2;
  /* 108c34e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c34e7 jg 0x108c34f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c34f2;
  /* 108c34e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c34ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c34ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108c34f2:;
  /* 108c34f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c34f5 jmp 0x108c355f */
  goto L_108c355f;
L_108c34f7:;
  /* 108c34f7 push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108c34fc call dword ptr [0x108e2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2330))), 0x108c3502u);
  /* 108c3502 cmp dword ptr [0x108df8ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3509 je 0x108c3529 */
  if (C.zf) goto L_108c3529;
  /* 108c350b push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108c3510 call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108c3516u);
  /* 108c3516 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c3518 call 0x108b7730 */
  push32(0x108c351du); f_108b7730();
  /* 108c351d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3520 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108c3527 jmp 0x108c3530 */
  goto L_108c3530;
L_108c3529:;
  /* 108c3529 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108c3530:;
  /* 108c3530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3533 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3534 call 0x108c3570 */
  push32(0x108c3539u); f_108c3570();
  /* 108c3539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c353c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108c353f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3543 je 0x108c3551 */
  if (C.zf) goto L_108c3551;
  /* 108c3545 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108c3547 call 0x108b77d0 */
  push32(0x108c354cu); f_108b77d0();
  /* 108c354c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c354f jmp 0x108c355c */
  goto L_108c355c;
L_108c3551:;
  /* 108c3551 push 0x108df8fc */
  push32((uint32_t)(0x108df8fcu));
  /* 108c3556 call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108c355cu);
L_108c355c:;
  /* 108c355c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_108c355f:;
  /* 108c355f mov esp, ebp */
  ESP = (EBP);
  /* 108c3561 pop ebp */
  EBP = (pop32());
  /* 108c3562 ret  */
  ESPCHK(0x108c34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x108c3570 (299 bytes, 91 insns) */
void f_108c3570(void) {
  FTRACE(0x108c3570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3570 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3571 mov ebp, esp */
  EBP = (ESP);
  /* 108c3573 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3576 cmp dword ptr [0x108df770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c357d jne 0x108c359c */
  if (!C.zf) goto L_108c359c;
  /* 108c357f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3583 jl 0x108c3594 */
  if ((C.sf!=C.of)) goto L_108c3594;
  /* 108c3585 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3589 jg 0x108c3594 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c3594;
  /* 108c358b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c358e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3591 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108c3594:;
  /* 108c3594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3597 jmp 0x108c3697 */
  goto L_108c3697;
L_108c359c:;
  /* 108c359c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c35a3 jge 0x108c35e3 */
  if ((C.sf==C.of)) goto L_108c35e3;
  /* 108c35a5 cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c35ac jle 0x108c35c1 */
  if ((C.zf||C.sf!=C.of)) goto L_108c35c1;
  /* 108c35ae push 1 */
  push32((uint32_t)(0x1u));
  /* 108c35b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c35b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c35b4 call 0x108b9d40 */
  push32(0x108c35b9u); f_108b9d40();
  /* 108c35b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c35bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108c35bf jmp 0x108c35d5 */
  goto L_108c35d5;
L_108c35c1:;
  /* 108c35c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c35c4 mov eax, dword ptr [0x108ddc98] */
  EAX = (r32((uint32_t)(0x108ddc98)));
  /* 108c35c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c35cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108c35cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108c35d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108c35d5:;
  /* 108c35d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c35d9 jne 0x108c35e3 */
  if (!C.zf) goto L_108c35e3;
  /* 108c35db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c35de jmp 0x108c3697 */
  goto L_108c3697;
L_108c35e3:;
  /* 108c35e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c35e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108c35e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c35ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c35f5 mov eax, dword ptr [0x108ddc98] */
  EAX = (r32((uint32_t)(0x108ddc98)));
  /* 108c35fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c35fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108c3600 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 108c3606 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c3608 je 0x108c362c */
  if (C.zf) goto L_108c362c;
  /* 108c360a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c360d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108c3610 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c3616 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 108c3619 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 108c361c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 108c361f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 108c3623 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108c362a jmp 0x108c363d */
  goto L_108c363d;
L_108c362c:;
  /* 108c362c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 108c362f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 108c3632 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 108c3636 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_108c363d:;
  /* 108c363d push 1 */
  push32((uint32_t)(0x1u));
  /* 108c363f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3641 push 3 */
  push32((uint32_t)(0x3u));
  /* 108c3643 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 108c3646 push edx */
  push32((uint32_t)(EDX));
  /* 108c3647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c364a push eax */
  push32((uint32_t)(EAX));
  /* 108c364b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 108c364e push ecx */
  push32((uint32_t)(ECX));
  /* 108c364f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 108c3654 mov edx, dword ptr [0x108df770] */
  EDX = (r32((uint32_t)(0x108df770)));
  /* 108c365a push edx */
  push32((uint32_t)(EDX));
  /* 108c365b call 0x108bc120 */
  push32(0x108c3660u); f_108bc120();
  /* 108c3660 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3663 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c3666 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c366a jne 0x108c3671 */
  if (!C.zf) goto L_108c3671;
  /* 108c366c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c366f jmp 0x108c3697 */
  goto L_108c3697;
L_108c3671:;
  /* 108c3671 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3675 jne 0x108c3681 */
  if (!C.zf) goto L_108c3681;
  /* 108c3677 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c367a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c367f jmp 0x108c3697 */
  goto L_108c3697;
L_108c3681:;
  /* 108c3681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3684 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3689 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 108c368c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108c3692 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 108c3695 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_108c3697:;
  /* 108c3697 mov esp, ebp */
  ESP = (EBP);
  /* 108c3699 pop ebp */
  EBP = (pop32());
  /* 108c369a ret  */
  ESPCHK(0x108c3570u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x108c36a0 (52 bytes, 19 insns) */
void f_108c36a0(void) {
  FTRACE(0x108c36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c36a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108c36a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 108c36a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 108c36aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 108c36ae jne 0x108c36b9 */
  if (!C.zf) goto L_108c36b9;
  /* 108c36b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 108c36b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108c36b6 ret 0x10 */
  ESPCHK(0x108c36a0u, _esp0);
  ESP += 20; return;
L_108c36b9:;
  /* 108c36b9 push ebx */
  push32((uint32_t)(EBX));
  /* 108c36ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108c36bc mov ebx, eax */
  EBX = (EAX);
  /* 108c36be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108c36c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108c36c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c36c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108c36cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 108c36ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c36d0 pop ebx */
  EBX = (pop32());
  /* 108c36d1 ret 0x10 */
  ESPCHK(0x108c36a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100136e0 @ 0x108c36e0 (46 bytes, 18 insns) */
void f_108c36e0(void) {
  FTRACE(0x108c36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c36e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c36e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c36e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c36e6 call 0x108b7730 */
  push32(0x108c36ebu); f_108b7730();
  /* 108c36eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c36ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c36f1 push eax */
  push32((uint32_t)(EAX));
  /* 108c36f2 call 0x108c3710 */
  push32(0x108c36f7u); f_108c3710();
  /* 108c36f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c36fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c36fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 108c36ff call 0x108b77d0 */
  push32(0x108c3704u); f_108b77d0();
  /* 108c3704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c370a mov esp, ebp */
  ESP = (EBP);
  /* 108c370c pop ebp */
  EBP = (pop32());
  /* 108c370d ret  */
  ESPCHK(0x108c36e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x108c3710 (198 bytes, 69 insns) */
void f_108c3710(void) {
  FTRACE(0x108c3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3710 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3711 mov ebp, esp */
  EBP = (ESP);
  /* 108c3713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3716 mov eax, dword ptr [0x108df58c] */
  EAX = (r32((uint32_t)(0x108df58c)));
  /* 108c371b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c371e cmp dword ptr [0x108e1080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e1080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3725 jne 0x108c372e */
  if (!C.zf) goto L_108c372e;
  /* 108c3727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3729 jmp 0x108c37d2 */
  goto L_108c37d2;
L_108c372e:;
  /* 108c372e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3732 jne 0x108c3756 */
  if (!C.zf) goto L_108c3756;
  /* 108c3734 cmp dword ptr [0x108df594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c373b je 0x108c3756 */
  if (C.zf) goto L_108c3756;
  /* 108c373d call 0x108c3830 */
  push32(0x108c3742u); f_108c3830();
  /* 108c3742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3744 je 0x108c374d */
  if (C.zf) goto L_108c374d;
  /* 108c3746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3748 jmp 0x108c37d2 */
  goto L_108c37d2;
L_108c374d:;
  /* 108c374d mov ecx, dword ptr [0x108df58c] */
  ECX = (r32((uint32_t)(0x108df58c)));
  /* 108c3753 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108c3756:;
  /* 108c3756 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c375a je 0x108c37d0 */
  if (C.zf) goto L_108c37d0;
  /* 108c375c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3760 je 0x108c37d0 */
  if (C.zf) goto L_108c37d0;
  /* 108c3762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3765 push edx */
  push32((uint32_t)(EDX));
  /* 108c3766 call 0x108b6b60 */
  push32(0x108c376bu); f_108b6b60();
  /* 108c376b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c376e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108c3771:;
  /* 108c3771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3774 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3777 je 0x108c37d0 */
  if (C.zf) goto L_108c37d0;
  /* 108c3779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c377c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c377e push edx */
  push32((uint32_t)(EDX));
  /* 108c377f call 0x108b6b60 */
  push32(0x108c3784u); f_108b6b60();
  /* 108c3784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3787 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c378a jbe 0x108c37c5 */
  if ((C.cf||C.zf)) goto L_108c37c5;
  /* 108c378c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c378f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c3791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3794 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 108c3798 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c379b jne 0x108c37c5 */
  if (!C.zf) goto L_108c37c5;
  /* 108c379d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c37a0 push ecx */
  push32((uint32_t)(ECX));
  /* 108c37a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c37a4 push edx */
  push32((uint32_t)(EDX));
  /* 108c37a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c37a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c37aa push ecx */
  push32((uint32_t)(ECX));
  /* 108c37ab call 0x108c37e0 */
  push32(0x108c37b0u); f_108c37e0();
  /* 108c37b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c37b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c37b5 jne 0x108c37c5 */
  if (!C.zf) goto L_108c37c5;
  /* 108c37b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c37ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c37bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c37bf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 108c37c3 jmp 0x108c37d2 */
  goto L_108c37d2;
L_108c37c5:;
  /* 108c37c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c37c8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c37cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c37ce jmp 0x108c3771 */
  goto L_108c3771;
L_108c37d0:;
  /* 108c37d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c37d2:;
  /* 108c37d2 mov esp, ebp */
  ESP = (EBP);
  /* 108c37d4 pop ebp */
  EBP = (pop32());
  /* 108c37d5 ret  */
  ESPCHK(0x108c3710u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x108c37e0 (79 bytes, 32 insns) */
void f_108c37e0(void) {
  FTRACE(0x108c37e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c37e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c37e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c37e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108c37e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c37e8 jne 0x108c37ee */
  if (!C.zf) goto L_108c37ee;
  /* 108c37ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c37ec jmp 0x108c382b */
  goto L_108c382b;
L_108c37ee:;
  /* 108c37ee mov eax, dword ptr [0x108e0c44] */
  EAX = (r32((uint32_t)(0x108e0c44)));
  /* 108c37f3 push eax */
  push32((uint32_t)(EAX));
  /* 108c37f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c37f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108c37f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c37fb push edx */
  push32((uint32_t)(EDX));
  /* 108c37fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c37ff push eax */
  push32((uint32_t)(EAX));
  /* 108c3800 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3803 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3804 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3806 mov edx, dword ptr [0x108e0ee4] */
  EDX = (r32((uint32_t)(0x108e0ee4)));
  /* 108c380c push edx */
  push32((uint32_t)(EDX));
  /* 108c380d call 0x108c38e0 */
  push32(0x108c3812u); f_108c38e0();
  /* 108c3812 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3815 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c3818 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c381c jne 0x108c3825 */
  if (!C.zf) goto L_108c3825;
  /* 108c381e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 108c3823 jmp 0x108c382b */
  goto L_108c382b;
L_108c3825:;
  /* 108c3825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3828 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_108c382b:;
  /* 108c382b mov esp, ebp */
  ESP = (EBP);
  /* 108c382d pop ebp */
  EBP = (pop32());
  /* 108c382e ret  */
  ESPCHK(0x108c37e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013830 @ 0x108c3830 (174 bytes, 66 insns) */
void f_108c3830(void) {
  FTRACE(0x108c3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3830 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3831 mov ebp, esp */
  EBP = (ESP);
  /* 108c3833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3836 mov eax, dword ptr [0x108df594] */
  EAX = (r32((uint32_t)(0x108df594)));
  /* 108c383b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108c383e:;
  /* 108c383e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3841 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3844 je 0x108c38d8 */
  if (C.zf) goto L_108c38d8;
  /* 108c384a push 0 */
  push32((uint32_t)(0x0u));
  /* 108c384c push 0 */
  push32((uint32_t)(0x0u));
  /* 108c384e push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3850 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3852 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c3854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3857 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c3859 push eax */
  push32((uint32_t)(EAX));
  /* 108c385a push 0 */
  push32((uint32_t)(0x0u));
  /* 108c385c push 1 */
  push32((uint32_t)(0x1u));
  /* 108c385e call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c3864u);
  /* 108c3864 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c3867 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c386b jne 0x108c3872 */
  if (!C.zf) goto L_108c3872;
  /* 108c386d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3870 jmp 0x108c38da */
  goto L_108c38da;
L_108c3872:;
  /* 108c3872 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108c3874 push 0x108db92c */
  push32((uint32_t)(0x108db92cu));
  /* 108c3879 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c387b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c387e push ecx */
  push32((uint32_t)(ECX));
  /* 108c387f call 0x108b3d30 */
  push32(0x108c3884u); f_108b3d30();
  /* 108c3884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3887 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c388a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c388e jne 0x108c3895 */
  if (!C.zf) goto L_108c3895;
  /* 108c3890 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3893 jmp 0x108c38da */
  goto L_108c38da;
L_108c3895:;
  /* 108c3895 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3897 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3899 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c389c push edx */
  push32((uint32_t)(EDX));
  /* 108c389d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c38a0 push eax */
  push32((uint32_t)(EAX));
  /* 108c38a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c38a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c38a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c38a8 push edx */
  push32((uint32_t)(EDX));
  /* 108c38a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c38ab push 1 */
  push32((uint32_t)(0x1u));
  /* 108c38ad call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108c38b3u);
  /* 108c38b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c38b5 jne 0x108c38bc */
  if (!C.zf) goto L_108c38bc;
  /* 108c38b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c38ba jmp 0x108c38da */
  goto L_108c38da;
L_108c38bc:;
  /* 108c38bc push 0 */
  push32((uint32_t)(0x0u));
  /* 108c38be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c38c1 push eax */
  push32((uint32_t)(EAX));
  /* 108c38c2 call 0x108c3d30 */
  push32(0x108c38c7u); f_108c3d30();
  /* 108c38c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c38ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c38cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c38d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c38d3 jmp 0x108c383e */
  goto L_108c383e;
L_108c38d8:;
  /* 108c38d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c38da:;
  /* 108c38da mov esp, ebp */
  ESP = (EBP);
  /* 108c38dc pop ebp */
  EBP = (pop32());
  /* 108c38dd ret  */
  ESPCHK(0x108c3830u, _esp0);
  ESP += 4; return;
}

/* FUN_100138e0 @ 0x108c38e0 (970 bytes, 340 insns) */
void f_108c38e0(void) {
  FTRACE(0x108c38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c38e1 mov ebp, esp */
  EBP = (ESP);
  /* 108c38e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108c38e5 push 0x108db980 */
  push32((uint32_t)(0x108db980u));
  /* 108c38ea push 0x108bce38 */
  push32((uint32_t)(0x108bce38u));
  /* 108c38ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108c38f5 push eax */
  push32((uint32_t)(EAX));
  /* 108c38f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108c38fd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3900 push ebx */
  push32((uint32_t)(EBX));
  /* 108c3901 push esi */
  push32((uint32_t)(ESI));
  /* 108c3902 push edi */
  push32((uint32_t)(EDI));
  /* 108c3903 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c3906 cmp dword ptr [0x108df8d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c390d jne 0x108c3966 */
  if (!C.zf) goto L_108c3966;
  /* 108c390f push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3911 push 0x108dafdc */
  push32((uint32_t)(0x108dafdcu));
  /* 108c3916 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3918 push 0x108dafdc */
  push32((uint32_t)(0x108dafdcu));
  /* 108c391d push 0 */
  push32((uint32_t)(0x0u));
  /* 108c391f push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3921 call dword ptr [0x108e2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2294))), 0x108c3927u);
  /* 108c3927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3929 je 0x108c3937 */
  if (C.zf) goto L_108c3937;
  /* 108c392b mov dword ptr [0x108df8d4], 1 */
  w32((uint32_t)(0x108df8d4), (0x1u));
  /* 108c3935 jmp 0x108c3966 */
  goto L_108c3966;
L_108c3937:;
  /* 108c3937 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3939 push 0x108dafd8 */
  push32((uint32_t)(0x108dafd8u));
  /* 108c393e push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3940 push 0x108dafd8 */
  push32((uint32_t)(0x108dafd8u));
  /* 108c3945 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3947 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3949 call dword ptr [0x108e22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22a0))), 0x108c394fu);
  /* 108c394f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3951 je 0x108c395f */
  if (C.zf) goto L_108c395f;
  /* 108c3953 mov dword ptr [0x108df8d4], 2 */
  w32((uint32_t)(0x108df8d4), (0x2u));
  /* 108c395d jmp 0x108c3966 */
  goto L_108c3966;
L_108c395f:;
  /* 108c395f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3961 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3966:;
  /* 108c3966 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c396a jle 0x108c397f */
  if ((C.zf||C.sf!=C.of)) goto L_108c397f;
  /* 108c396c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c396f push eax */
  push32((uint32_t)(EAX));
  /* 108c3970 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3973 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3974 call 0x108c3ce0 */
  push32(0x108c3979u); f_108c3ce0();
  /* 108c3979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c397c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_108c397f:;
  /* 108c397f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3983 jle 0x108c3998 */
  if ((C.zf||C.sf!=C.of)) goto L_108c3998;
  /* 108c3985 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c3988 push edx */
  push32((uint32_t)(EDX));
  /* 108c3989 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c398c push eax */
  push32((uint32_t)(EAX));
  /* 108c398d call 0x108c3ce0 */
  push32(0x108c3992u); f_108c3ce0();
  /* 108c3992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3995 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_108c3998:;
  /* 108c3998 cmp dword ptr [0x108df8d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c399f jne 0x108c39c4 */
  if (!C.zf) goto L_108c39c4;
  /* 108c39a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c39a4 push ecx */
  push32((uint32_t)(ECX));
  /* 108c39a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c39a8 push edx */
  push32((uint32_t)(EDX));
  /* 108c39a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c39ac push eax */
  push32((uint32_t)(EAX));
  /* 108c39ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c39b0 push ecx */
  push32((uint32_t)(ECX));
  /* 108c39b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c39b4 push edx */
  push32((uint32_t)(EDX));
  /* 108c39b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c39b8 push eax */
  push32((uint32_t)(EAX));
  /* 108c39b9 call dword ptr [0x108e22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22a0))), 0x108c39bfu);
  /* 108c39bf jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c39c4:;
  /* 108c39c4 cmp dword ptr [0x108df8d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df8d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c39cb jne 0x108c3cc2 */
  if (!C.zf) goto L_108c3cc2;
  /* 108c39d1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c39d5 jne 0x108c39e0 */
  if (!C.zf) goto L_108c39e0;
  /* 108c39d7 mov ecx, dword ptr [0x108df780] */
  ECX = (r32((uint32_t)(0x108df780)));
  /* 108c39dd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_108c39e0:;
  /* 108c39e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c39e4 je 0x108c39f0 */
  if (C.zf) goto L_108c39f0;
  /* 108c39e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c39ea jne 0x108c3b6c */
  if (!C.zf) goto L_108c3b6c;
L_108c39f0:;
  /* 108c39f0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c39f3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c39f6 jne 0x108c3a02 */
  if (!C.zf) goto L_108c3a02;
  /* 108c39f8 mov eax, 2 */
  EAX = (0x2u);
  /* 108c39fd jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3a02:;
  /* 108c3a02 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a06 jle 0x108c3a12 */
  if ((C.zf||C.sf!=C.of)) goto L_108c3a12;
  /* 108c3a08 mov eax, 1 */
  EAX = (0x1u);
  /* 108c3a0d jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3a12:;
  /* 108c3a12 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a16 jle 0x108c3a22 */
  if ((C.zf||C.sf!=C.of)) goto L_108c3a22;
  /* 108c3a18 mov eax, 3 */
  EAX = (0x3u);
  /* 108c3a1d jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3a22:;
  /* 108c3a22 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 108c3a25 push eax */
  push32((uint32_t)(EAX));
  /* 108c3a26 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 108c3a29 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3a2a call dword ptr [0x108e22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22ec))), 0x108c3a30u);
  /* 108c3a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3a32 jne 0x108c3a3b */
  if (!C.zf) goto L_108c3a3b;
  /* 108c3a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3a36 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3a3b:;
  /* 108c3a3b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a3f jne 0x108c3a47 */
  if (!C.zf) goto L_108c3a47;
  /* 108c3a41 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a45 je 0x108c3a74 */
  if (C.zf) goto L_108c3a74;
L_108c3a47:;
  /* 108c3a47 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a4b jne 0x108c3a53 */
  if (!C.zf) goto L_108c3a53;
  /* 108c3a4d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a51 je 0x108c3a74 */
  if (C.zf) goto L_108c3a74;
L_108c3a53:;
  /* 108c3a53 push 0x108db940 */
  push32((uint32_t)(0x108db940u));
  /* 108c3a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3a5a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 108c3a5f push 0x108db938 */
  push32((uint32_t)(0x108db938u));
  /* 108c3a64 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3a66 call 0x108b2df0 */
  push32(0x108c3a6bu); f_108b2df0();
  /* 108c3a6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3a6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a71 jne 0x108c3a74 */
  if (!C.zf) goto L_108c3a74;
  /* 108c3a73 int3  */
  x86_unimpl("int3 @ 0x108c3a73");
L_108c3a74:;
  /* 108c3a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c3a76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3a78 jne 0x108c3a3b */
  if (!C.zf) goto L_108c3a3b;
  /* 108c3a7a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a7e jle 0x108c3af3 */
  if ((C.zf||C.sf!=C.of)) goto L_108c3af3;
  /* 108c3a80 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3a84 jae 0x108c3a90 */
  if (!C.cf) goto L_108c3a90;
  /* 108c3a86 mov eax, 3 */
  EAX = (0x3u);
  /* 108c3a8b jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3a90:;
  /* 108c3a90 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 108c3a93 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 108c3a96 jmp 0x108c3aa1 */
  goto L_108c3aa1;
L_108c3a98:;
  /* 108c3a98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3a9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3a9e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_108c3aa1:;
  /* 108c3aa1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3aa6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c3aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3aaa je 0x108c3ae9 */
  if (C.zf) goto L_108c3ae9;
  /* 108c3aac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3aaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c3ab1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 108c3ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3ab6 je 0x108c3ae9 */
  if (C.zf) goto L_108c3ae9;
  /* 108c3ab8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3abb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c3abd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c3abf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3ac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3ac4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c3ac6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3ac8 jl 0x108c3ae7 */
  if ((C.sf!=C.of)) goto L_108c3ae7;
  /* 108c3aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c3acf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c3ad1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3ad4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c3ad6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108c3ad9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3adb jg 0x108c3ae7 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c3ae7;
  /* 108c3add mov eax, 2 */
  EAX = (0x2u);
  /* 108c3ae2 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3ae7:;
  /* 108c3ae7 jmp 0x108c3a98 */
  goto L_108c3a98;
L_108c3ae9:;
  /* 108c3ae9 mov eax, 3 */
  EAX = (0x3u);
  /* 108c3aee jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3af3:;
  /* 108c3af3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3af7 jle 0x108c3b6c */
  if ((C.zf||C.sf!=C.of)) goto L_108c3b6c;
  /* 108c3af9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3afd jae 0x108c3b09 */
  if (!C.cf) goto L_108c3b09;
  /* 108c3aff mov eax, 1 */
  EAX = (0x1u);
  /* 108c3b04 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3b09:;
  /* 108c3b09 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 108c3b0c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 108c3b0f jmp 0x108c3b1a */
  goto L_108c3b1a;
L_108c3b11:;
  /* 108c3b11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3b14 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3b17 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_108c3b1a:;
  /* 108c3b1a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3b1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c3b1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c3b21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3b23 je 0x108c3b62 */
  if (C.zf) goto L_108c3b62;
  /* 108c3b25 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3b28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c3b2a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 108c3b2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c3b2f je 0x108c3b62 */
  if (C.zf) goto L_108c3b62;
  /* 108c3b31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c3b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3b36 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108c3b38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3b3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108c3b3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108c3b3f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3b41 jl 0x108c3b60 */
  if ((C.sf!=C.of)) goto L_108c3b60;
  /* 108c3b43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c3b46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c3b48 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c3b4a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 108c3b4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3b4f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108c3b52 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3b54 jg 0x108c3b60 */
  if ((!C.zf&&C.sf==C.of)) goto L_108c3b60;
  /* 108c3b56 mov eax, 2 */
  EAX = (0x2u);
  /* 108c3b5b jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3b60:;
  /* 108c3b60 jmp 0x108c3b11 */
  goto L_108c3b11;
L_108c3b62:;
  /* 108c3b62 mov eax, 1 */
  EAX = (0x1u);
  /* 108c3b67 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3b6c:;
  /* 108c3b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3b70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c3b73 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3b74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3b77 push edx */
  push32((uint32_t)(EDX));
  /* 108c3b78 push 9 */
  push32((uint32_t)(0x9u));
  /* 108c3b7a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108c3b7d push eax */
  push32((uint32_t)(EAX));
  /* 108c3b7e call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108c3b84u);
  /* 108c3b84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108c3b87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3b8b jne 0x108c3b94 */
  if (!C.zf) goto L_108c3b94;
  /* 108c3b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3b8f jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3b94:;
  /* 108c3b94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108c3b9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c3b9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108c3ba0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3ba3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108c3ba5 call 0x108b6ed0 */
  push32(0x108c3baau); f_108b6ed0();
  /* 108c3baa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 108c3bad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c3bb0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 108c3bb3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108c3bb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108c3bbd jmp 0x108c3bd6 */
  goto L_108c3bd6;
  /* 108c3bbf mov eax, 1 */
  EAX = (0x1u);
  /* 108c3bc4 ret  */
  ESPCHK(0x108c38e0u, _esp0);
  ESP += 4; return;
  /* 108c3bc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3bc8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108c3bcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108c3bd6:;
  /* 108c3bd6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3bda jne 0x108c3be3 */
  if (!C.zf) goto L_108c3be3;
  /* 108c3bdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3bde jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3be3:;
  /* 108c3be3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c3be6 push edx */
  push32((uint32_t)(EDX));
  /* 108c3be7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c3bea push eax */
  push32((uint32_t)(EAX));
  /* 108c3beb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108c3bee push ecx */
  push32((uint32_t)(ECX));
  /* 108c3bef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108c3bf2 push edx */
  push32((uint32_t)(EDX));
  /* 108c3bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3bf5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108c3bf8 push eax */
  push32((uint32_t)(EAX));
  /* 108c3bf9 call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108c3bffu);
  /* 108c3bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3c01 jne 0x108c3c0a */
  if (!C.zf) goto L_108c3c0a;
  /* 108c3c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3c05 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3c0a:;
  /* 108c3c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 108c3c0e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c3c11 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3c12 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c3c15 push edx */
  push32((uint32_t)(EDX));
  /* 108c3c16 push 9 */
  push32((uint32_t)(0x9u));
  /* 108c3c18 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108c3c1b push eax */
  push32((uint32_t)(EAX));
  /* 108c3c1c call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108c3c22u);
  /* 108c3c22 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108c3c25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3c29 jne 0x108c3c32 */
  if (!C.zf) goto L_108c3c32;
  /* 108c3c2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3c2d jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3c32:;
  /* 108c3c32 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108c3c39 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3c3c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108c3c3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3c41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108c3c43 call 0x108b6ed0 */
  push32(0x108c3c48u); f_108b6ed0();
  /* 108c3c48 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 108c3c4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108c3c4e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 108c3c51 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 108c3c54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108c3c5b jmp 0x108c3c74 */
  goto L_108c3c74;
  /* 108c3c5d mov eax, 1 */
  EAX = (0x1u);
  /* 108c3c62 ret  */
  ESPCHK(0x108c38e0u, _esp0);
  ESP += 4; return;
  /* 108c3c63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3c66 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 108c3c6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108c3c74:;
  /* 108c3c74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3c78 jne 0x108c3c7e */
  if (!C.zf) goto L_108c3c7e;
  /* 108c3c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3c7c jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3c7e:;
  /* 108c3c7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3c81 push edx */
  push32((uint32_t)(EDX));
  /* 108c3c82 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c3c85 push eax */
  push32((uint32_t)(EAX));
  /* 108c3c86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108c3c89 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3c8a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108c3c8d push edx */
  push32((uint32_t)(EDX));
  /* 108c3c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 108c3c90 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108c3c93 push eax */
  push32((uint32_t)(EAX));
  /* 108c3c94 call dword ptr [0x108e22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22e0))), 0x108c3c9au);
  /* 108c3c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3c9c jne 0x108c3ca2 */
  if (!C.zf) goto L_108c3ca2;
  /* 108c3c9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3ca0 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3ca2:;
  /* 108c3ca2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108c3ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3ca6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 108c3ca9 push edx */
  push32((uint32_t)(EDX));
  /* 108c3caa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108c3cad push eax */
  push32((uint32_t)(EAX));
  /* 108c3cae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108c3cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3cb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c3cb5 push edx */
  push32((uint32_t)(EDX));
  /* 108c3cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3cb9 push eax */
  push32((uint32_t)(EAX));
  /* 108c3cba call dword ptr [0x108e2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2294))), 0x108c3cc0u);
  /* 108c3cc0 jmp 0x108c3cc4 */
  goto L_108c3cc4;
L_108c3cc2:;
  /* 108c3cc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c3cc4:;
  /* 108c3cc4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 108c3cc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c3cca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108c3cd1 pop edi */
  EDI = (pop32());
  /* 108c3cd2 pop esi */
  ESI = (pop32());
  /* 108c3cd3 pop ebx */
  EBX = (pop32());
  /* 108c3cd4 mov esp, ebp */
  ESP = (EBP);
  /* 108c3cd6 pop ebp */
  EBP = (pop32());
  /* 108c3cd7 ret  */
  ESPCHK(0x108c38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ce0 @ 0x108c3ce0 (80 bytes, 32 insns) */
void f_108c3ce0(void) {
  FTRACE(0x108c3ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3ce1 mov ebp, esp */
  EBP = (ESP);
  /* 108c3ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3ce6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c3ce9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c3cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3cef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108c3cf2:;
  /* 108c3cf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3cf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c3cfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3d00 je 0x108c3d17 */
  if (C.zf) goto L_108c3d17;
  /* 108c3d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3d05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c3d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3d0a je 0x108c3d17 */
  if (C.zf) goto L_108c3d17;
  /* 108c3d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3d0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3d12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c3d15 jmp 0x108c3cf2 */
  goto L_108c3cf2;
L_108c3d17:;
  /* 108c3d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3d1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108c3d1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c3d1f jne 0x108c3d29 */
  if (!C.zf) goto L_108c3d29;
  /* 108c3d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3d24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3d27 jmp 0x108c3d2c */
  goto L_108c3d2c;
L_108c3d29:;
  /* 108c3d29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_108c3d2c:;
  /* 108c3d2c mov esp, ebp */
  ESP = (EBP);
  /* 108c3d2e pop ebp */
  EBP = (pop32());
  /* 108c3d2f ret  */
  ESPCHK(0x108c3ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d30 @ 0x108c3d30 (736 bytes, 224 insns) */
void f_108c3d30(void) {
  FTRACE(0x108c3d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c3d30 push ebp */
  push32((uint32_t)(EBP));
  /* 108c3d31 mov ebp, esp */
  EBP = (ESP);
  /* 108c3d33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3d36 push esi */
  push32((uint32_t)(ESI));
  /* 108c3d37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3d3b je 0x108c3d5c */
  if (C.zf) goto L_108c3d5c;
  /* 108c3d3d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108c3d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3d42 push eax */
  push32((uint32_t)(EAX));
  /* 108c3d43 call 0x108c4180 */
  push32(0x108c3d48u); f_108c4180();
  /* 108c3d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3d4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108c3d4e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3d52 je 0x108c3d5c */
  if (C.zf) goto L_108c3d5c;
  /* 108c3d54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3d57 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3d5a jne 0x108c3d64 */
  if (!C.zf) goto L_108c3d64;
L_108c3d5c:;
  /* 108c3d5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3d5f jmp 0x108c400b */
  goto L_108c400b;
L_108c3d64:;
  /* 108c3d64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3d67 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108c3d6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c3d6d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3d6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108c3d70 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108c3d73 mov ecx, dword ptr [0x108df58c] */
  ECX = (r32((uint32_t)(0x108df58c)));
  /* 108c3d79 cmp ecx, dword ptr [0x108df590] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108df590))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3d7f jne 0x108c3d95 */
  if (!C.zf) goto L_108c3d95;
  /* 108c3d81 mov edx, dword ptr [0x108df58c] */
  EDX = (r32((uint32_t)(0x108df58c)));
  /* 108c3d87 push edx */
  push32((uint32_t)(EDX));
  /* 108c3d88 call 0x108c4090 */
  push32(0x108c3d8du); f_108c4090();
  /* 108c3d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3d90 mov dword ptr [0x108df58c], eax */
  w32((uint32_t)(0x108df58c), (EAX));
L_108c3d95:;
  /* 108c3d95 cmp dword ptr [0x108df58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3d9c jne 0x108c3e55 */
  if (!C.zf) goto L_108c3e55;
  /* 108c3da2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3da6 je 0x108c3dc7 */
  if (C.zf) goto L_108c3dc7;
  /* 108c3da8 cmp dword ptr [0x108df594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3daf je 0x108c3dc7 */
  if (C.zf) goto L_108c3dc7;
  /* 108c3db1 call 0x108c3830 */
  push32(0x108c3db6u); f_108c3830();
  /* 108c3db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c3db8 je 0x108c3dc2 */
  if (C.zf) goto L_108c3dc2;
  /* 108c3dba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3dbd jmp 0x108c400b */
  goto L_108c400b;
L_108c3dc2:;
  /* 108c3dc2 jmp 0x108c3e55 */
  goto L_108c3e55;
L_108c3dc7:;
  /* 108c3dc7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3dcb je 0x108c3dd4 */
  if (C.zf) goto L_108c3dd4;
  /* 108c3dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3dcf jmp 0x108c400b */
  goto L_108c400b;
L_108c3dd4:;
  /* 108c3dd4 cmp dword ptr [0x108df58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3ddb jne 0x108c3e14 */
  if (!C.zf) goto L_108c3e14;
  /* 108c3ddd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 108c3de2 push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c3de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3de9 push 4 */
  push32((uint32_t)(0x4u));
  /* 108c3deb call 0x108b3d30 */
  push32(0x108c3df0u); f_108b3d30();
  /* 108c3df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3df3 mov dword ptr [0x108df58c], eax */
  w32((uint32_t)(0x108df58c), (EAX));
  /* 108c3df8 cmp dword ptr [0x108df58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3dff jne 0x108c3e09 */
  if (!C.zf) goto L_108c3e09;
  /* 108c3e01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3e04 jmp 0x108c400b */
  goto L_108c400b;
L_108c3e09:;
  /* 108c3e09 mov eax, dword ptr [0x108df58c] */
  EAX = (r32((uint32_t)(0x108df58c)));
  /* 108c3e0e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108c3e14:;
  /* 108c3e14 cmp dword ptr [0x108df594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3e1b jne 0x108c3e55 */
  if (!C.zf) goto L_108c3e55;
  /* 108c3e1d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 108c3e22 push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c3e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3e29 push 4 */
  push32((uint32_t)(0x4u));
  /* 108c3e2b call 0x108b3d30 */
  push32(0x108c3e30u); f_108b3d30();
  /* 108c3e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3e33 mov dword ptr [0x108df594], eax */
  w32((uint32_t)(0x108df594), (EAX));
  /* 108c3e38 cmp dword ptr [0x108df594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3e3f jne 0x108c3e49 */
  if (!C.zf) goto L_108c3e49;
  /* 108c3e41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3e44 jmp 0x108c400b */
  goto L_108c400b;
L_108c3e49:;
  /* 108c3e49 mov ecx, dword ptr [0x108df594] */
  ECX = (r32((uint32_t)(0x108df594)));
  /* 108c3e4f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_108c3e55:;
  /* 108c3e55 mov edx, dword ptr [0x108df58c] */
  EDX = (r32((uint32_t)(0x108df58c)));
  /* 108c3e5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108c3e5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3e61 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3e64 push eax */
  push32((uint32_t)(EAX));
  /* 108c3e65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3e68 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3e69 call 0x108c4010 */
  push32(0x108c3e6eu); f_108c4010();
  /* 108c3e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3e71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c3e74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3e78 jl 0x108c3f11 */
  if ((C.sf!=C.of)) goto L_108c3f11;
  /* 108c3e7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3e81 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3e84 je 0x108c3f11 */
  if (C.zf) goto L_108c3f11;
  /* 108c3e8a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3e8e je 0x108c3f03 */
  if (C.zf) goto L_108c3f03;
  /* 108c3e90 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3e92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3e95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3e98 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108c3e9b push edx */
  push32((uint32_t)(EDX));
  /* 108c3e9c call 0x108b47c0 */
  push32(0x108c3ea1u); f_108b47c0();
  /* 108c3ea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3ea4 jmp 0x108c3eaf */
  goto L_108c3eaf;
L_108c3ea6:;
  /* 108c3ea6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3eac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108c3eaf:;
  /* 108c3eaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3eb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3eb5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3eb9 je 0x108c3ed0 */
  if (C.zf) goto L_108c3ed0;
  /* 108c3ebb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3ebe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3ec1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3ec4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3ec7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 108c3ecb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 108c3ece jmp 0x108c3ea6 */
  goto L_108c3ea6;
L_108c3ed0:;
  /* 108c3ed0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 108c3ed5 push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c3eda push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3edc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3edf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 108c3ee2 push eax */
  push32((uint32_t)(EAX));
  /* 108c3ee3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3ee7 call 0x108b41c0 */
  push32(0x108c3eecu); f_108b41c0();
  /* 108c3eec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3eef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c3ef2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3ef6 je 0x108c3f01 */
  if (C.zf) goto L_108c3f01;
  /* 108c3ef8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3efb mov dword ptr [0x108df58c], edx */
  w32((uint32_t)(0x108df58c), (EDX));
L_108c3f01:;
  /* 108c3f01 jmp 0x108c3f0f */
  goto L_108c3f0f;
L_108c3f03:;
  /* 108c3f03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3f06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3f0c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_108c3f0f:;
  /* 108c3f0f jmp 0x108c3f84 */
  goto L_108c3f84;
L_108c3f11:;
  /* 108c3f11 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3f15 jne 0x108c3f7d */
  if (!C.zf) goto L_108c3f7d;
  /* 108c3f17 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3f1b jge 0x108c3f25 */
  if ((C.sf==C.of)) goto L_108c3f25;
  /* 108c3f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3f20 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c3f22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108c3f25:;
  /* 108c3f25 push 0xce */
  push32((uint32_t)(0xceu));
  /* 108c3f2a push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c3f2f push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3f31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3f34 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 108c3f3b push edx */
  push32((uint32_t)(EDX));
  /* 108c3f3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3f3f push eax */
  push32((uint32_t)(EAX));
  /* 108c3f40 call 0x108b41c0 */
  push32(0x108c3f45u); f_108b41c0();
  /* 108c3f45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3f48 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c3f4b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3f4f jne 0x108c3f59 */
  if (!C.zf) goto L_108c3f59;
  /* 108c3f51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c3f54 jmp 0x108c400b */
  goto L_108c400b;
L_108c3f59:;
  /* 108c3f59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3f5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3f5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3f62 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 108c3f65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c3f68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3f6b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 108c3f73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c3f76 mov dword ptr [0x108df58c], eax */
  w32((uint32_t)(0x108df58c), (EAX));
  /* 108c3f7b jmp 0x108c3f84 */
  goto L_108c3f84;
L_108c3f7d:;
  /* 108c3f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c3f7f jmp 0x108c400b */
  goto L_108c400b;
L_108c3f84:;
  /* 108c3f84 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3f88 je 0x108c4009 */
  if (C.zf) goto L_108c4009;
  /* 108c3f8a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 108c3f8f push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c3f94 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3f96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3f99 push ecx */
  push32((uint32_t)(ECX));
  /* 108c3f9a call 0x108b6b60 */
  push32(0x108c3f9fu); f_108b6b60();
  /* 108c3f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3fa2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3fa5 push eax */
  push32((uint32_t)(EAX));
  /* 108c3fa6 call 0x108b3d30 */
  push32(0x108c3fabu); f_108b3d30();
  /* 108c3fab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3fae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108c3fb1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c3fb5 je 0x108c4009 */
  if (C.zf) goto L_108c4009;
  /* 108c3fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c3fba push edx */
  push32((uint32_t)(EDX));
  /* 108c3fbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c3fbe push eax */
  push32((uint32_t)(EAX));
  /* 108c3fbf call 0x108b6ce0 */
  push32(0x108c3fc4u); f_108b6ce0();
  /* 108c3fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3fc7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108c3fca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3fcd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c3fd0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3fd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108c3fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3fd8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108c3fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c3fde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c3fe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c3fe4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108c3fe7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108c3fe9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c3feb not edx */
  EDX = (~(EDX));
  /* 108c3fed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 108c3ff0 push edx */
  push32((uint32_t)(EDX));
  /* 108c3ff1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c3ff4 push eax */
  push32((uint32_t)(EAX));
  /* 108c3ff5 call dword ptr [0x108e2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2290))), 0x108c3ffbu);
  /* 108c3ffb push 2 */
  push32((uint32_t)(0x2u));
  /* 108c3ffd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c4000 push ecx */
  push32((uint32_t)(ECX));
  /* 108c4001 call 0x108b47c0 */
  push32(0x108c4006u); f_108b47c0();
  /* 108c4006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c4009:;
  /* 108c4009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c400b:;
  /* 108c400b pop esi */
  ESI = (pop32());
  /* 108c400c mov esp, ebp */
  ESP = (EBP);
  /* 108c400e pop ebp */
  EBP = (pop32());
  /* 108c400f ret  */
  ESPCHK(0x108c3d30u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x108c4010 (124 bytes, 47 insns) */
void f_108c4010(void) {
  FTRACE(0x108c4010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c4010 push ebp */
  push32((uint32_t)(EBP));
  /* 108c4011 mov ebp, esp */
  EBP = (ESP);
  /* 108c4013 push ecx */
  push32((uint32_t)(ECX));
  /* 108c4014 mov eax, dword ptr [0x108df58c] */
  EAX = (r32((uint32_t)(0x108df58c)));
  /* 108c4019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108c401c jmp 0x108c4027 */
  goto L_108c4027;
L_108c401e:;
  /* 108c401e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c4021 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4024 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108c4027:;
  /* 108c4027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c402a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c402d je 0x108c407a */
  if (C.zf) goto L_108c407a;
  /* 108c402f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c4032 push eax */
  push32((uint32_t)(EAX));
  /* 108c4033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c4036 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c4038 push edx */
  push32((uint32_t)(EDX));
  /* 108c4039 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c403c push eax */
  push32((uint32_t)(EAX));
  /* 108c403d call 0x108c37e0 */
  push32(0x108c4042u); f_108c37e0();
  /* 108c4042 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108c4047 jne 0x108c4078 */
  if (!C.zf) goto L_108c4078;
  /* 108c4049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c404c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c404e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c4051 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 108c4055 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c4058 je 0x108c406a */
  if (C.zf) goto L_108c406a;
  /* 108c405a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c405d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c405f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c4062 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 108c4066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c4068 jne 0x108c4078 */
  if (!C.zf) goto L_108c4078;
L_108c406a:;
  /* 108c406a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c406d sub eax, dword ptr [0x108df58c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108df58c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c4073 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 108c4076 jmp 0x108c4088 */
  goto L_108c4088;
L_108c4078:;
  /* 108c4078 jmp 0x108c401e */
  goto L_108c401e;
L_108c407a:;
  /* 108c407a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c407d sub eax, dword ptr [0x108df58c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108df58c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c4083 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 108c4086 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_108c4088:;
  /* 108c4088 mov esp, ebp */
  ESP = (EBP);
  /* 108c408a pop ebp */
  EBP = (pop32());
  /* 108c408b ret  */
  ESPCHK(0x108c4010u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x108c4090 (238 bytes, 80 insns) */
void f_108c4090(void) {
  FTRACE(0x108c4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c4090 push ebp */
  push32((uint32_t)(EBP));
  /* 108c4091 mov ebp, esp */
  EBP = (ESP);
  /* 108c4093 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c4096 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108c409d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c40a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c40a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c40a7 jne 0x108c40b0 */
  if (!C.zf) goto L_108c40b0;
  /* 108c40a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c40ab jmp 0x108c417a */
  goto L_108c417a;
L_108c40b0:;
  /* 108c40b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c40b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c40b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c40b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c40bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108c40be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c40c0 je 0x108c40cd */
  if (C.zf) goto L_108c40cd;
  /* 108c40c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c40c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c40c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108c40cb jmp 0x108c40b0 */
  goto L_108c40b0;
L_108c40cd:;
  /* 108c40cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 108c40d2 push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c40d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108c40d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108c40dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 108c40e3 push eax */
  push32((uint32_t)(EAX));
  /* 108c40e4 call 0x108b3d30 */
  push32(0x108c40e9u); f_108b3d30();
  /* 108c40e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c40ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108c40ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c40f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108c40f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c40f9 jne 0x108c4105 */
  if (!C.zf) goto L_108c4105;
  /* 108c40fb push 9 */
  push32((uint32_t)(0x9u));
  /* 108c40fd call 0x108b2ca0 */
  push32(0x108c4102u); f_108b2ca0();
  /* 108c4102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c4105:;
  /* 108c4105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c4108 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108c410b:;
  /* 108c410b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c410e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c4111 je 0x108c416e */
  if (C.zf) goto L_108c416e;
  /* 108c4113 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 108c4118 push 0x108db998 */
  push32((uint32_t)(0x108db998u));
  /* 108c411d push 2 */
  push32((uint32_t)(0x2u));
  /* 108c411f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c4122 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108c4124 push edx */
  push32((uint32_t)(EDX));
  /* 108c4125 call 0x108b6b60 */
  push32(0x108c412au); f_108b6b60();
  /* 108c412a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c412d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4130 push eax */
  push32((uint32_t)(EAX));
  /* 108c4131 call 0x108b3d30 */
  push32(0x108c4136u); f_108b3d30();
  /* 108c4136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4139 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c413c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108c413e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c4141 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c4144 je 0x108c415a */
  if (C.zf) goto L_108c415a;
  /* 108c4146 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c4149 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108c414b push ecx */
  push32((uint32_t)(ECX));
  /* 108c414c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c414f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108c4151 push eax */
  push32((uint32_t)(EAX));
  /* 108c4152 call 0x108b6ce0 */
  push32(0x108c4157u); f_108b6ce0();
  /* 108c4157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108c415a:;
  /* 108c415a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108c415d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4160 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108c4163 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c4166 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4169 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108c416c jmp 0x108c410b */
  goto L_108c410b;
L_108c416e:;
  /* 108c416e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108c4171 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108c4177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108c417a:;
  /* 108c417a mov esp, ebp */
  ESP = (EBP);
  /* 108c417c pop ebp */
  EBP = (pop32());
  /* 108c417d ret  */
  ESPCHK(0x108c4090u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x108c4180 (237 bytes, 81 insns) */
void f_108c4180(void) {
  FTRACE(0x108c4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c4180 push ebp */
  push32((uint32_t)(EBP));
  /* 108c4181 mov ebp, esp */
  EBP = (ESP);
  /* 108c4183 push ecx */
  push32((uint32_t)(ECX));
  /* 108c4184 cmp dword ptr [0x108e0ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c418b jne 0x108c41a2 */
  if (!C.zf) goto L_108c41a2;
  /* 108c418d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108c4190 push eax */
  push32((uint32_t)(EAX));
  /* 108c4191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c4194 push ecx */
  push32((uint32_t)(ECX));
  /* 108c4195 call 0x108c4280 */
  push32(0x108c419au); f_108c4280();
  /* 108c419a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c419d jmp 0x108c4269 */
  goto L_108c4269;
L_108c41a2:;
  /* 108c41a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108c41a4 call 0x108b7730 */
  push32(0x108c41a9u); f_108b7730();
  /* 108c41a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c41ac jmp 0x108c41b7 */
  goto L_108c41b7;
L_108c41ae:;
  /* 108c41ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c41b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c41b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_108c41b7:;
  /* 108c41b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c41ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 108c41be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 108c41c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c41c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c41cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108c41cd je 0x108c424b */
  if (C.zf) goto L_108c424b;
  /* 108c41cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c41d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c41d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c41d9 mov cl, byte ptr [eax + 0x108e0de1] */
  CL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108c41df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108c41e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c41e4 je 0x108c4236 */
  if (C.zf) goto L_108c4236;
  /* 108c41e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c41e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c41ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108c41ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c41f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c41f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c41f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108c41f8 jne 0x108c4208 */
  if (!C.zf) goto L_108c4208;
  /* 108c41fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108c41fc call 0x108b77d0 */
  push32(0x108c4201u); f_108b77d0();
  /* 108c4201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c4206 jmp 0x108c4269 */
  goto L_108c4269;
L_108c4208:;
  /* 108c4208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c420b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c4211 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108c4214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c4217 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108c4219 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108c421b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108c421d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c4220 jne 0x108c4234 */
  if (!C.zf) goto L_108c4234;
  /* 108c4222 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108c4224 call 0x108b77d0 */
  push32(0x108c4229u); f_108b77d0();
  /* 108c4229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c422c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c422f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108c4232 jmp 0x108c4269 */
  goto L_108c4269;
L_108c4234:;
  /* 108c4234 jmp 0x108c4246 */
  goto L_108c4246;
L_108c4236:;
  /* 108c4236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c4239 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108c423f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c4242 jne 0x108c4246 */
  if (!C.zf) goto L_108c4246;
  /* 108c4244 jmp 0x108c424b */
  goto L_108c424b;
L_108c4246:;
  /* 108c4246 jmp 0x108c41ae */
  goto L_108c41ae;
L_108c424b:;
  /* 108c424b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108c424d call 0x108b77d0 */
  push32(0x108c4252u); f_108b77d0();
  /* 108c4252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108c4255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108c4258 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c425d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108c4260 jne 0x108c4267 */
  if (!C.zf) goto L_108c4267;
  /* 108c4262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108c4265 jmp 0x108c4269 */
  goto L_108c4269;
L_108c4267:;
  /* 108c4267 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108c4269:;
  /* 108c4269 mov esp, ebp */
  ESP = (EBP);
  /* 108c426b pop ebp */
  EBP = (pop32());
  /* 108c426c ret  */
  ESPCHK(0x108c4180u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x108c4280 (193 bytes, 87 insns) */
void f_108c4280(void) {
  FTRACE(0x108c4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c4280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c4282 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 108c4286 push ebx */
  push32((uint32_t)(EBX));
  /* 108c4287 mov ebx, eax */
  EBX = (EAX);
  /* 108c4289 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 108c428c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 108c4290 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 108c4296 je 0x108c42ab */
  if (C.zf) goto L_108c42ab;
L_108c4298:;
  /* 108c4298 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 108c429a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 108c429b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c429d je 0x108c4270 */
  if (C.zf) { jmp_ind(0x108c4270u); return; }
  /* 108c429f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 108c42a1 je 0x108c42f4 */
  if (C.zf) goto L_108c42f4;
  /* 108c42a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 108c42a9 jne 0x108c4298 */
  if (!C.zf) goto L_108c4298;
L_108c42ab:;
  /* 108c42ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 108c42ad push edi */
  push32((uint32_t)(EDI));
  /* 108c42ae mov eax, ebx */
  EAX = (EBX);
  /* 108c42b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 108c42b3 push esi */
  push32((uint32_t)(ESI));
  /* 108c42b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_108c42b6:;
  /* 108c42b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 108c42b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 108c42bd mov eax, ecx */
  EAX = (ECX);
  /* 108c42bf mov esi, edi */
  ESI = (EDI);
  /* 108c42c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 108c42c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108c42c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108c42c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108c42ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108c42cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 108c42cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 108c42d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108c42d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 108c42da jne 0x108c42f8 */
  if (!C.zf) goto L_108c42f8;
  /* 108c42dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 108c42e1 je 0x108c42b6 */
  if (C.zf) goto L_108c42b6;
  /* 108c42e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 108c42e8 jne 0x108c42f2 */
  if (!C.zf) goto L_108c42f2;
  /* 108c42ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 108c42f0 jne 0x108c42b6 */
  if (!C.zf) goto L_108c42b6;
L_108c42f2:;
  /* 108c42f2 pop esi */
  ESI = (pop32());
  /* 108c42f3 pop edi */
  EDI = (pop32());
L_108c42f4:;
  /* 108c42f4 pop ebx */
  EBX = (pop32());
  /* 108c42f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108c42f7 ret  */
  ESPCHK(0x108c4280u, _esp0);
  ESP += 4; return;
L_108c42f8:;
  /* 108c42f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 108c42fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c42fd je 0x108c4335 */
  if (C.zf) goto L_108c4335;
  /* 108c42ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108c4301 je 0x108c42f2 */
  if (C.zf) goto L_108c42f2;
  /* 108c4303 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c4305 je 0x108c432e */
  if (C.zf) goto L_108c432e;
  /* 108c4307 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108c4309 je 0x108c42f2 */
  if (C.zf) goto L_108c42f2;
  /* 108c430b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108c430e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c4310 je 0x108c4327 */
  if (C.zf) goto L_108c4327;
  /* 108c4312 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108c4314 je 0x108c42f2 */
  if (C.zf) goto L_108c42f2;
  /* 108c4316 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108c4318 je 0x108c4320 */
  if (C.zf) goto L_108c4320;
  /* 108c431a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108c431c je 0x108c42f2 */
  if (C.zf) goto L_108c42f2;
  /* 108c431e jmp 0x108c42b6 */
  goto L_108c42b6;
L_108c4320:;
  /* 108c4320 pop esi */
  ESI = (pop32());
  /* 108c4321 pop edi */
  EDI = (pop32());
  /* 108c4322 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 108c4325 pop ebx */
  EBX = (pop32());
  /* 108c4326 ret  */
  ESPCHK(0x108c4280u, _esp0);
  ESP += 4; return;
L_108c4327:;
  /* 108c4327 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 108c432a pop esi */
  ESI = (pop32());
  /* 108c432b pop edi */
  EDI = (pop32());
  /* 108c432c pop ebx */
  EBX = (pop32());
  /* 108c432d ret  */
  ESPCHK(0x108c4280u, _esp0);
  ESP += 4; return;
L_108c432e:;
  /* 108c432e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 108c4331 pop esi */
  ESI = (pop32());
  /* 108c4332 pop edi */
  EDI = (pop32());
  /* 108c4333 pop ebx */
  EBX = (pop32());
  /* 108c4334 ret  */
  ESPCHK(0x108c4280u, _esp0);
  ESP += 4; return;
L_108c4335:;
  /* 108c4335 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 108c4338 pop esi */
  ESI = (pop32());
  /* 108c4339 pop edi */
  EDI = (pop32());
  /* 108c433a pop ebx */
  EBX = (pop32());
  /* 108c433b ret  */
  ESPCHK(0x108c4280u, _esp0);
  ESP += 4; return;
  /* 108c433c jmp dword ptr [0x108e230c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x108e230c)))); return;
}

/* RtlUnwind @ 0x108c448c (6 bytes, 1 insns) */
void f_108c448c(void) {
  FTRACE(0x108c448cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108c448c jmp dword ptr [0x108e22c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x108e22c8)))); return;
}

