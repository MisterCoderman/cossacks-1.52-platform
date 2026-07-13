#include "recomp.h"

/* FUN_10012d90 @ 0x10842d90 (878 bytes, 273 insns) */
void f_10842d90(void) {
  FTRACE(0x10842d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10842d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10842d91 mov ebp, esp */
  EBP = (ESP);
  /* 10842d93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10842d96 push esi */
  push32((uint32_t)(ESI));
  /* 10842d97 mov eax, dword ptr [0x10860c98] */
  EAX = (r32((uint32_t)(0x10860c98)));
  /* 10842d9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10842d9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10842da6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842dad jmp 0x10842db8 */
  goto L_10842db8;
L_10842daf:;
  /* 10842daf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842db5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10842db8:;
  /* 10842db8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842dbc jae 0x10842df1 */
  if (!C.cf) goto L_10842df1;
  /* 10842dbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842dc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842dc4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10842dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10842dc8 call 0x10838c10 */
  push32(0x10842dcdu); f_10838c10();
  /* 10842dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842dd0 mov esi, eax */
  ESI = (EAX);
  /* 10842dd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842dd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842dd8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10842ddc push ecx */
  push32((uint32_t)(ECX));
  /* 10842ddd call 0x10838c10 */
  push32(0x10842de2u); f_10838c10();
  /* 10842de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842de5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842de8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10842dec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10842def jmp 0x10842daf */
  goto L_10842daf;
L_10842df1:;
  /* 10842df1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842df8 jmp 0x10842e03 */
  goto L_10842e03;
L_10842dfa:;
  /* 10842dfa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842dfd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10842e03:;
  /* 10842e03 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842e07 jae 0x10842e3d */
  if (!C.cf) goto L_10842e3d;
  /* 10842e09 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842e0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842e0f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10842e13 push eax */
  push32((uint32_t)(EAX));
  /* 10842e14 call 0x10838c10 */
  push32(0x10842e19u); f_10838c10();
  /* 10842e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e1c mov esi, eax */
  ESI = (EAX);
  /* 10842e1e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842e21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842e24 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10842e28 push eax */
  push32((uint32_t)(EAX));
  /* 10842e29 call 0x10838c10 */
  push32(0x10842e2eu); f_10838c10();
  /* 10842e2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e31 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e34 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10842e38 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10842e3b jmp 0x10842dfa */
  goto L_10842dfa;
L_10842e3d:;
  /* 10842e3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842e40 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10842e46 push eax */
  push32((uint32_t)(EAX));
  /* 10842e47 call 0x10838c10 */
  push32(0x10842e4cu); f_10838c10();
  /* 10842e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e4f mov esi, eax */
  ESI = (EAX);
  /* 10842e51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842e54 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10842e5a push edx */
  push32((uint32_t)(EDX));
  /* 10842e5b call 0x10838c10 */
  push32(0x10842e60u); f_10838c10();
  /* 10842e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e63 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e66 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10842e6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10842e6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842e70 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10842e76 push edx */
  push32((uint32_t)(EDX));
  /* 10842e77 call 0x10838c10 */
  push32(0x10842e7cu); f_10838c10();
  /* 10842e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842e82 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10842e86 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10842e89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842e8c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10842e92 push ecx */
  push32((uint32_t)(ECX));
  /* 10842e93 call 0x10838c10 */
  push32(0x10842e98u); f_10838c10();
  /* 10842e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842e9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842e9e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10842ea2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10842ea5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842ea8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10842eae push edx */
  push32((uint32_t)(EDX));
  /* 10842eaf call 0x10838c10 */
  push32(0x10842eb4u); f_10838c10();
  /* 10842eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842eb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842eba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10842ebe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10842ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10842ec4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10842eca call 0x10835dc0 */
  push32(0x10842ecfu); f_10835dc0();
  /* 10842ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842ed2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10842ed5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842ed9 je 0x108430f6 */
  if (C.zf) goto L_108430f6;
  /* 10842edf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842ee2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10842ee5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842ee8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842eee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10842ef1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10842ef6 mov eax, dword ptr [0x10860c98] */
  EAX = (r32((uint32_t)(0x10860c98)));
  /* 10842efb push eax */
  push32((uint32_t)(EAX));
  /* 10842efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10842eff push ecx */
  push32((uint32_t)(ECX));
  /* 10842f00 call 0x1083c6c0 */
  push32(0x10842f05u); f_1083c6c0();
  /* 10842f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842f0f jmp 0x10842f1a */
  goto L_10842f1a;
L_10842f11:;
  /* 10842f11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842f14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10842f1a:;
  /* 10842f1a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842f1e jae 0x10842f8e */
  if (!C.cf) goto L_10842f8e;
  /* 10842f20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842f23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10842f26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842f29 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10842f2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842f2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842f32 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10842f35 push edx */
  push32((uint32_t)(EDX));
  /* 10842f36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842f39 push eax */
  push32((uint32_t)(EAX));
  /* 10842f3a call 0x10838d90 */
  push32(0x10842f3fu); f_10838d90();
  /* 10842f3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f42 push eax */
  push32((uint32_t)(EAX));
  /* 10842f43 call 0x10838c10 */
  push32(0x10842f48u); f_10838c10();
  /* 10842f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842f4e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10842f52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10842f55 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842f58 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10842f5b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842f5e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10842f62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842f65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842f68 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10842f6c push edx */
  push32((uint32_t)(EDX));
  /* 10842f6d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842f70 push eax */
  push32((uint32_t)(EAX));
  /* 10842f71 call 0x10838d90 */
  push32(0x10842f76u); f_10838d90();
  /* 10842f76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f79 push eax */
  push32((uint32_t)(EAX));
  /* 10842f7a call 0x10838c10 */
  push32(0x10842f7fu); f_10838c10();
  /* 10842f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842f85 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10842f89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10842f8c jmp 0x10842f11 */
  goto L_10842f11;
L_10842f8e:;
  /* 10842f8e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10842f95 jmp 0x10842fa0 */
  goto L_10842fa0;
L_10842f97:;
  /* 10842f97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842f9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10842f9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10842fa0:;
  /* 10842fa0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10842fa4 jae 0x10843016 */
  if (!C.cf) goto L_10843016;
  /* 10842fa6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842fa9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10842fac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842faf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10842fb3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842fb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842fb9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10842fbd push eax */
  push32((uint32_t)(EAX));
  /* 10842fbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10842fc2 call 0x10838d90 */
  push32(0x10842fc7u); f_10838d90();
  /* 10842fc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842fca push eax */
  push32((uint32_t)(EAX));
  /* 10842fcb call 0x10838c10 */
  push32(0x10842fd0u); f_10838c10();
  /* 10842fd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10842fd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842fd6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10842fda mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10842fdd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842fe0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10842fe3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842fe6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10842fea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10842fed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10842ff0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10842ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10842ff5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10842ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 10842ff9 call 0x10838d90 */
  push32(0x10842ffeu); f_10838d90();
  /* 10842ffe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843001 push eax */
  push32((uint32_t)(EAX));
  /* 10843002 call 0x10838c10 */
  push32(0x10843007u); f_10838c10();
  /* 10843007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084300a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1084300d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10843011 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10843014 jmp 0x10842f97 */
  goto L_10842f97;
L_10843016:;
  /* 10843016 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10843019 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1084301c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10843022 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843025 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1084302b push ecx */
  push32((uint32_t)(ECX));
  /* 1084302c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1084302f push edx */
  push32((uint32_t)(EDX));
  /* 10843030 call 0x10838d90 */
  push32(0x10843035u); f_10838d90();
  /* 10843035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843038 push eax */
  push32((uint32_t)(EAX));
  /* 10843039 call 0x10838c10 */
  push32(0x1084303eu); f_10838c10();
  /* 1084303e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843041 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843044 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10843048 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1084304b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1084304e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843051 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10843057 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084305a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10843060 push eax */
  push32((uint32_t)(EAX));
  /* 10843061 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843064 push ecx */
  push32((uint32_t)(ECX));
  /* 10843065 call 0x10838d90 */
  push32(0x1084306au); f_10838d90();
  /* 1084306a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084306d push eax */
  push32((uint32_t)(EAX));
  /* 1084306e call 0x10838c10 */
  push32(0x10843073u); f_10838c10();
  /* 10843073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843076 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843079 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1084307d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10843080 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10843083 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843086 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1084308c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084308f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10843095 push ecx */
  push32((uint32_t)(ECX));
  /* 10843096 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843099 push edx */
  push32((uint32_t)(EDX));
  /* 1084309a call 0x10838d90 */
  push32(0x1084309fu); f_10838d90();
  /* 1084309f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108430a2 push eax */
  push32((uint32_t)(EAX));
  /* 108430a3 call 0x10838c10 */
  push32(0x108430a8u); f_10838c10();
  /* 108430a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108430ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108430ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108430b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108430b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108430b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108430bb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 108430c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108430c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 108430ca push eax */
  push32((uint32_t)(EAX));
  /* 108430cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108430ce push ecx */
  push32((uint32_t)(ECX));
  /* 108430cf call 0x10838d90 */
  push32(0x108430d4u); f_10838d90();
  /* 108430d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108430d7 push eax */
  push32((uint32_t)(EAX));
  /* 108430d8 call 0x10838c10 */
  push32(0x108430ddu); f_10838c10();
  /* 108430dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108430e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108430e3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108430e7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108430ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108430ed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108430f0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_108430f6:;
  /* 108430f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108430f9 pop esi */
  ESI = (pop32());
  /* 108430fa mov esp, ebp */
  ESP = (EBP);
  /* 108430fc pop ebp */
  EBP = (pop32());
  /* 108430fd ret  */
  ESPCHK(0x10842d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x10843100 (31 bytes, 15 insns) */
void f_10843100(void) {
  FTRACE(0x10843100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10843100 push ebp */
  push32((uint32_t)(EBP));
  /* 10843101 mov ebp, esp */
  EBP = (ESP);
  /* 10843103 push 0 */
  push32((uint32_t)(0x0u));
  /* 10843105 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843108 push eax */
  push32((uint32_t)(EAX));
  /* 10843109 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084310c push ecx */
  push32((uint32_t)(ECX));
  /* 1084310d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843110 push edx */
  push32((uint32_t)(EDX));
  /* 10843111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843114 push eax */
  push32((uint32_t)(EAX));
  /* 10843115 call 0x10843120 */
  push32(0x1084311au); f_10843120();
  /* 1084311a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084311d pop ebp */
  EBP = (pop32());
  /* 1084311e ret  */
  ESPCHK(0x10843100u, _esp0);
  ESP += 4; return;
}

/* FUN_10013120 @ 0x10843120 (393 bytes, 123 insns) */
void f_10843120(void) {
  FTRACE(0x10843120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10843120 push ebp */
  push32((uint32_t)(EBP));
  /* 10843121 mov ebp, esp */
  EBP = (ESP);
  /* 10843123 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843126 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084312a jne 0x10843136 */
  if (!C.zf) goto L_10843136;
  /* 1084312c mov eax, dword ptr [0x10860c98] */
  EAX = (r32((uint32_t)(0x10860c98)));
  /* 10843131 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10843134 jmp 0x1084313c */
  goto L_1084313c;
L_10843136:;
  /* 10843136 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843139 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1084313c:;
  /* 1084313c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1084313f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10843142 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843145 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10843148 push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 1084314d call dword ptr [0x108643ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643ac))), 0x10843153u);
  /* 10843153 cmp dword ptr [0x10861904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084315a je 0x1084317a */
  if (C.zf) goto L_1084317a;
  /* 1084315c push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 10843161 call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x10843167u);
  /* 10843167 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10843169 call 0x108397e0 */
  push32(0x1084316eu); f_108397e0();
  /* 1084316e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843171 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10843178 jmp 0x10843181 */
  goto L_10843181;
L_1084317a:;
  /* 1084317a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10843181:;
  /* 10843181 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843185 jbe 0x10843272 */
  if ((C.cf||C.zf)) goto L_10843272;
  /* 1084318b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084318e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10843190 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10843193 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10843197 je 0x108431a1 */
  if (C.zf) goto L_108431a1;
  /* 10843199 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1084319d je 0x108431a6 */
  if (C.zf) goto L_108431a6;
  /* 1084319f jmp 0x10843200 */
  goto L_10843200;
L_108431a1:;
  /* 108431a1 jmp 0x10843272 */
  goto L_10843272;
L_108431a6:;
  /* 108431a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108431a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108431ac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 108431af mov dword ptr [0x108618f0], 0 */
  w32((uint32_t)(0x108618f0), (0x0u));
  /* 108431b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108431bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108431bf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108431c2 jne 0x108431d7 */
  if (!C.zf) goto L_108431d7;
  /* 108431c4 mov dword ptr [0x108618f0], 1 */
  w32((uint32_t)(0x108618f0), (0x1u));
  /* 108431ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108431d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108431d4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108431d7:;
  /* 108431d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108431da push ecx */
  push32((uint32_t)(ECX));
  /* 108431db lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 108431de push edx */
  push32((uint32_t)(EDX));
  /* 108431df lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 108431e2 push eax */
  push32((uint32_t)(EAX));
  /* 108431e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108431e6 push ecx */
  push32((uint32_t)(ECX));
  /* 108431e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108431ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108431ec push eax */
  push32((uint32_t)(EAX));
  /* 108431ed call 0x108432b0 */
  push32(0x108431f2u); f_108432b0();
  /* 108431f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108431f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108431f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108431fb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108431fe jmp 0x1084326d */
  goto L_1084326d;
L_10843200:;
  /* 10843200 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10843205 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843207 mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 1084320d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1084320f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10843213 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10843219 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1084321b je 0x10843248 */
  if (C.zf) goto L_10843248;
  /* 1084321d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843221 jbe 0x10843248 */
  if ((C.cf||C.zf)) goto L_10843248;
  /* 10843223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843226 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843229 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1084322b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1084322d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843233 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10843236 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843239 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084323c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1084323f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843242 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843245 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10843248:;
  /* 10843248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084324b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084324e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10843250 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10843252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1084325b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084325e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843261 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10843264 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843267 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084326a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1084326d:;
  /* 1084326d jmp 0x10843181 */
  goto L_10843181;
L_10843272:;
  /* 10843272 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843276 je 0x10843284 */
  if (C.zf) goto L_10843284;
  /* 10843278 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1084327a call 0x10839880 */
  push32(0x1084327fu); f_10839880();
  /* 1084327f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843282 jmp 0x1084328f */
  goto L_1084328f;
L_10843284:;
  /* 10843284 push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 10843289 call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x1084328fu);
L_1084328f:;
  /* 1084328f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843293 jbe 0x108432a3 */
  if ((C.cf||C.zf)) goto L_108432a3;
  /* 10843295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843298 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1084329b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084329e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108432a1 jmp 0x108432a5 */
  goto L_108432a5;
L_108432a3:;
  /* 108432a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108432a5:;
  /* 108432a5 mov esp, ebp */
  ESP = (EBP);
  /* 108432a7 pop ebp */
  EBP = (pop32());
  /* 108432a8 ret  */
  ESPCHK(0x10843120u, _esp0);
  ESP += 4; return;
}

/* FUN_100132b0 @ 0x108432b0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_108432b0(void) {
  FTRACE(0x108432b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108432b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108432b1 mov ebp, esp */
  EBP = (ESP);
  /* 108432b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108432b6 push esi */
  push32((uint32_t)(ESI));
  /* 108432b7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 108432bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108432be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108432c1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108432c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108432c7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108432cb ja 0x10843818 */
  if ((!C.cf&&!C.zf)) goto L_10843818;
  /* 108432d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108432d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108432d6 mov dl, byte ptr [eax + 0x10843879] */
  DL = (r8((uint32_t)(EAX + 0x10843879)));
  /* 108432dc jmp dword ptr [edx*4 + 0x1084381d] */
  switch (EDX) {
    case 0: goto L_108437f6;
    case 1: goto L_10843305;
    case 2: goto L_1084334b;
    case 3: goto L_10843498;
    case 4: goto L_108434c0;
    case 5: goto L_1084355f;
    case 6: goto L_108435cb;
    case 7: goto L_108435f4;
    case 8: goto L_10843635;
    case 9: goto L_10843717;
    case 10: goto L_1084377e;
    case 11: goto L_108437cb;
    case 12: goto L_108432e3;
    case 13: goto L_10843328;
    case 14: goto L_1084336e;
    case 15: goto L_1084346e;
    case 16: goto L_10843505;
    case 17: goto L_10843532;
    case 18: goto L_10843587;
    case 19: goto L_1084360b;
    case 20: goto L_108436b9;
    case 21: goto L_10843748;
    case 22: goto L_10843818;
    default: x86_unimpl("switch@0x108432dc out of table"); return;
  }
L_108432e3:;
  /* 108432e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108432e6 push ecx */
  push32((uint32_t)(ECX));
  /* 108432e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108432ea push edx */
  push32((uint32_t)(EDX));
  /* 108432eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108432ee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108432f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108432f4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 108432f7 push eax */
  push32((uint32_t)(EAX));
  /* 108432f8 call 0x108438d0 */
  push32(0x108432fdu); f_108438d0();
  /* 108432fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843300 jmp 0x10843818 */
  goto L_10843818;
L_10843305:;
  /* 10843305 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843308 push ecx */
  push32((uint32_t)(ECX));
  /* 10843309 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084330c push edx */
  push32((uint32_t)(EDX));
  /* 1084330d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843310 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10843313 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843316 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1084331a push eax */
  push32((uint32_t)(EAX));
  /* 1084331b call 0x108438d0 */
  push32(0x10843320u); f_108438d0();
  /* 10843320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843323 jmp 0x10843818 */
  goto L_10843818;
L_10843328:;
  /* 10843328 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084332b push ecx */
  push32((uint32_t)(ECX));
  /* 1084332c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084332f push edx */
  push32((uint32_t)(EDX));
  /* 10843330 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843333 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10843336 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843339 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1084333d push eax */
  push32((uint32_t)(EAX));
  /* 1084333e call 0x108438d0 */
  push32(0x10843343u); f_108438d0();
  /* 10843343 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843346 jmp 0x10843818 */
  goto L_10843818;
L_1084334b:;
  /* 1084334b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084334e push ecx */
  push32((uint32_t)(ECX));
  /* 1084334f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843352 push edx */
  push32((uint32_t)(EDX));
  /* 10843353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843356 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10843359 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1084335c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10843360 push eax */
  push32((uint32_t)(EAX));
  /* 10843361 call 0x108438d0 */
  push32(0x10843366u); f_108438d0();
  /* 10843366 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843369 jmp 0x10843818 */
  goto L_10843818;
L_1084336e:;
  /* 1084336e cmp dword ptr [0x108618f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843375 je 0x108433f6 */
  if (C.zf) goto L_108433f6;
  /* 10843377 mov dword ptr [0x108618f0], 0 */
  w32((uint32_t)(0x108618f0), (0x0u));
  /* 10843381 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843384 push ecx */
  push32((uint32_t)(ECX));
  /* 10843385 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843388 push edx */
  push32((uint32_t)(EDX));
  /* 10843389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084338c push eax */
  push32((uint32_t)(EAX));
  /* 1084338d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843390 push ecx */
  push32((uint32_t)(ECX));
  /* 10843391 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843394 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1084339a push eax */
  push32((uint32_t)(EAX));
  /* 1084339b call 0x10843a80 */
  push32(0x108433a0u); f_10843a80();
  /* 108433a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108433a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108433a6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108433a9 jne 0x108433b0 */
  if (!C.zf) goto L_108433b0;
  /* 108433ab jmp 0x10843818 */
  goto L_10843818;
L_108433b0:;
  /* 108433b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108433b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108433b5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 108433b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108433bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108433bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108433c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108433c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108433c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108433c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108433ca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108433cd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108433d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108433d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108433d5 push ecx */
  push32((uint32_t)(ECX));
  /* 108433d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108433d9 push edx */
  push32((uint32_t)(EDX));
  /* 108433da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108433dd push eax */
  push32((uint32_t)(EAX));
  /* 108433de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108433e1 push ecx */
  push32((uint32_t)(ECX));
  /* 108433e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108433e5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 108433eb push eax */
  push32((uint32_t)(EAX));
  /* 108433ec call 0x10843a80 */
  push32(0x108433f1u); f_10843a80();
  /* 108433f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108433f4 jmp 0x10843469 */
  goto L_10843469;
L_108433f6:;
  /* 108433f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108433f9 push ecx */
  push32((uint32_t)(ECX));
  /* 108433fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108433fd push edx */
  push32((uint32_t)(EDX));
  /* 108433fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843401 push eax */
  push32((uint32_t)(EAX));
  /* 10843402 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843405 push ecx */
  push32((uint32_t)(ECX));
  /* 10843406 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843409 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1084340f push eax */
  push32((uint32_t)(EAX));
  /* 10843410 call 0x10843a80 */
  push32(0x10843415u); f_10843a80();
  /* 10843415 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843418 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084341b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084341e jne 0x10843425 */
  if (!C.zf) goto L_10843425;
  /* 10843420 jmp 0x10843818 */
  goto L_10843818;
L_10843425:;
  /* 10843425 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843428 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1084342a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1084342d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843430 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843432 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843435 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843438 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1084343a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084343d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1084343f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843442 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843445 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10843447 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1084344a push ecx */
  push32((uint32_t)(ECX));
  /* 1084344b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084344e push edx */
  push32((uint32_t)(EDX));
  /* 1084344f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843452 push eax */
  push32((uint32_t)(EAX));
  /* 10843453 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843456 push ecx */
  push32((uint32_t)(ECX));
  /* 10843457 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1084345a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10843460 push eax */
  push32((uint32_t)(EAX));
  /* 10843461 call 0x10843a80 */
  push32(0x10843466u); f_10843a80();
  /* 10843466 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10843469:;
  /* 10843469 jmp 0x10843818 */
  goto L_10843818;
L_1084346e:;
  /* 1084346e mov ecx, dword ptr [0x108618f0] */
  ECX = (r32((uint32_t)(0x108618f0)));
  /* 10843474 mov dword ptr [0x10861900], ecx */
  w32((uint32_t)(0x10861900), (ECX));
  /* 1084347a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084347d push edx */
  push32((uint32_t)(EDX));
  /* 1084347e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843481 push eax */
  push32((uint32_t)(EAX));
  /* 10843482 push 2 */
  push32((uint32_t)(0x2u));
  /* 10843484 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843487 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1084348a push edx */
  push32((uint32_t)(EDX));
  /* 1084348b call 0x10843920 */
  push32(0x10843490u); f_10843920();
  /* 10843490 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843493 jmp 0x10843818 */
  goto L_10843818;
L_10843498:;
  /* 10843498 mov eax, dword ptr [0x108618f0] */
  EAX = (r32((uint32_t)(0x108618f0)));
  /* 1084349d mov dword ptr [0x10861900], eax */
  w32((uint32_t)(0x10861900), (EAX));
  /* 108434a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108434a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108434a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108434a9 push edx */
  push32((uint32_t)(EDX));
  /* 108434aa push 2 */
  push32((uint32_t)(0x2u));
  /* 108434ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108434af mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108434b2 push ecx */
  push32((uint32_t)(ECX));
  /* 108434b3 call 0x10843920 */
  push32(0x108434b8u); f_10843920();
  /* 108434b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108434bb jmp 0x10843818 */
  goto L_10843818;
L_108434c0:;
  /* 108434c0 mov edx, dword ptr [0x108618f0] */
  EDX = (r32((uint32_t)(0x108618f0)));
  /* 108434c6 mov dword ptr [0x10861900], edx */
  w32((uint32_t)(0x10861900), (EDX));
  /* 108434cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108434cf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 108434d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108434d3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 108434d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108434da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108434dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108434e1 jne 0x108434ea */
  if (!C.zf) goto L_108434ea;
  /* 108434e3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_108434ea:;
  /* 108434ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108434ed push edx */
  push32((uint32_t)(EDX));
  /* 108434ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108434f1 push eax */
  push32((uint32_t)(EAX));
  /* 108434f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108434f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108434f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108434f8 call 0x10843920 */
  push32(0x108434fdu); f_10843920();
  /* 108434fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843500 jmp 0x10843818 */
  goto L_10843818;
L_10843505:;
  /* 10843505 mov edx, dword ptr [0x108618f0] */
  EDX = (r32((uint32_t)(0x108618f0)));
  /* 1084350b mov dword ptr [0x10861900], edx */
  w32((uint32_t)(0x10861900), (EDX));
  /* 10843511 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843514 push eax */
  push32((uint32_t)(EAX));
  /* 10843515 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843518 push ecx */
  push32((uint32_t)(ECX));
  /* 10843519 push 3 */
  push32((uint32_t)(0x3u));
  /* 1084351b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084351e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10843521 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843524 push eax */
  push32((uint32_t)(EAX));
  /* 10843525 call 0x10843920 */
  push32(0x1084352au); f_10843920();
  /* 1084352a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084352d jmp 0x10843818 */
  goto L_10843818;
L_10843532:;
  /* 10843532 mov ecx, dword ptr [0x108618f0] */
  ECX = (r32((uint32_t)(0x108618f0)));
  /* 10843538 mov dword ptr [0x10861900], ecx */
  w32((uint32_t)(0x10861900), (ECX));
  /* 1084353e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843541 push edx */
  push32((uint32_t)(EDX));
  /* 10843542 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843545 push eax */
  push32((uint32_t)(EAX));
  /* 10843546 push 2 */
  push32((uint32_t)(0x2u));
  /* 10843548 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084354b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1084354e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843551 push edx */
  push32((uint32_t)(EDX));
  /* 10843552 call 0x10843920 */
  push32(0x10843557u); f_10843920();
  /* 10843557 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084355a jmp 0x10843818 */
  goto L_10843818;
L_1084355f:;
  /* 1084355f mov eax, dword ptr [0x108618f0] */
  EAX = (r32((uint32_t)(0x108618f0)));
  /* 10843564 mov dword ptr [0x10861900], eax */
  w32((uint32_t)(0x10861900), (EAX));
  /* 10843569 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084356c push ecx */
  push32((uint32_t)(ECX));
  /* 1084356d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843570 push edx */
  push32((uint32_t)(EDX));
  /* 10843571 push 2 */
  push32((uint32_t)(0x2u));
  /* 10843573 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843576 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10843579 push ecx */
  push32((uint32_t)(ECX));
  /* 1084357a call 0x10843920 */
  push32(0x1084357fu); f_10843920();
  /* 1084357f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843582 jmp 0x10843818 */
  goto L_10843818;
L_10843587:;
  /* 10843587 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084358a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084358e jg 0x108435ac */
  if ((!C.zf&&C.sf==C.of)) goto L_108435ac;
  /* 10843590 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843593 push eax */
  push32((uint32_t)(EAX));
  /* 10843594 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843597 push ecx */
  push32((uint32_t)(ECX));
  /* 10843598 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1084359b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 108435a1 push eax */
  push32((uint32_t)(EAX));
  /* 108435a2 call 0x108438d0 */
  push32(0x108435a7u); f_108438d0();
  /* 108435a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108435aa jmp 0x108435c6 */
  goto L_108435c6;
L_108435ac:;
  /* 108435ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108435af push ecx */
  push32((uint32_t)(ECX));
  /* 108435b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108435b3 push edx */
  push32((uint32_t)(EDX));
  /* 108435b4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108435b7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 108435bd push ecx */
  push32((uint32_t)(ECX));
  /* 108435be call 0x108438d0 */
  push32(0x108435c3u); f_108438d0();
  /* 108435c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108435c6:;
  /* 108435c6 jmp 0x10843818 */
  goto L_10843818;
L_108435cb:;
  /* 108435cb mov edx, dword ptr [0x108618f0] */
  EDX = (r32((uint32_t)(0x108618f0)));
  /* 108435d1 mov dword ptr [0x10861900], edx */
  w32((uint32_t)(0x10861900), (EDX));
  /* 108435d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108435da push eax */
  push32((uint32_t)(EAX));
  /* 108435db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108435de push ecx */
  push32((uint32_t)(ECX));
  /* 108435df push 2 */
  push32((uint32_t)(0x2u));
  /* 108435e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108435e4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108435e6 push eax */
  push32((uint32_t)(EAX));
  /* 108435e7 call 0x10843920 */
  push32(0x108435ecu); f_10843920();
  /* 108435ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108435ef jmp 0x10843818 */
  goto L_10843818;
L_108435f4:;
  /* 108435f4 mov ecx, dword ptr [0x108618f0] */
  ECX = (r32((uint32_t)(0x108618f0)));
  /* 108435fa mov dword ptr [0x10861900], ecx */
  w32((uint32_t)(0x10861900), (ECX));
  /* 10843600 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843603 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10843606 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10843609 jmp 0x1084365d */
  goto L_1084365d;
L_1084360b:;
  /* 1084360b mov ecx, dword ptr [0x108618f0] */
  ECX = (r32((uint32_t)(0x108618f0)));
  /* 10843611 mov dword ptr [0x10861900], ecx */
  w32((uint32_t)(0x10861900), (ECX));
  /* 10843617 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084361a push edx */
  push32((uint32_t)(EDX));
  /* 1084361b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084361e push eax */
  push32((uint32_t)(EAX));
  /* 1084361f push 1 */
  push32((uint32_t)(0x1u));
  /* 10843621 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843624 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10843627 push edx */
  push32((uint32_t)(EDX));
  /* 10843628 call 0x10843920 */
  push32(0x1084362du); f_10843920();
  /* 1084362d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843630 jmp 0x10843818 */
  goto L_10843818;
L_10843635:;
  /* 10843635 mov eax, dword ptr [0x108618f0] */
  EAX = (r32((uint32_t)(0x108618f0)));
  /* 1084363a mov dword ptr [0x10861900], eax */
  w32((uint32_t)(0x10861900), (EAX));
  /* 1084363f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843642 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843646 jne 0x10843651 */
  if (!C.zf) goto L_10843651;
  /* 10843648 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1084364f jmp 0x1084365d */
  goto L_1084365d;
L_10843651:;
  /* 10843651 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843654 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10843657 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084365a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1084365d:;
  /* 1084365d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843660 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10843663 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843666 jge 0x10843671 */
  if ((C.sf==C.of)) goto L_10843671;
  /* 10843668 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1084366f jmp 0x1084369e */
  goto L_1084369e;
L_10843671:;
  /* 10843671 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843674 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10843677 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10843678 mov ecx, 7 */
  ECX = (0x7u);
  /* 1084367d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1084367f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10843682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843685 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10843688 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10843689 mov ecx, 7 */
  ECX = (0x7u);
  /* 1084368e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10843690 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843693 jl 0x1084369e */
  if ((C.sf!=C.of)) goto L_1084369e;
  /* 10843695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843698 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084369b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1084369e:;
  /* 1084369e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108436a1 push eax */
  push32((uint32_t)(EAX));
  /* 108436a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108436a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108436a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108436a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108436ab push edx */
  push32((uint32_t)(EDX));
  /* 108436ac call 0x10843920 */
  push32(0x108436b1u); f_10843920();
  /* 108436b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108436b4 jmp 0x10843818 */
  goto L_10843818;
L_108436b9:;
  /* 108436b9 cmp dword ptr [0x108618f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108436c0 je 0x108436f0 */
  if (C.zf) goto L_108436f0;
  /* 108436c2 mov dword ptr [0x108618f0], 0 */
  w32((uint32_t)(0x108618f0), (0x0u));
  /* 108436cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108436cf push eax */
  push32((uint32_t)(EAX));
  /* 108436d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108436d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108436d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108436d7 push edx */
  push32((uint32_t)(EDX));
  /* 108436d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108436db push eax */
  push32((uint32_t)(EAX));
  /* 108436dc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108436df mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 108436e5 push edx */
  push32((uint32_t)(EDX));
  /* 108436e6 call 0x10843a80 */
  push32(0x108436ebu); f_10843a80();
  /* 108436eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108436ee jmp 0x10843712 */
  goto L_10843712;
L_108436f0:;
  /* 108436f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108436f3 push eax */
  push32((uint32_t)(EAX));
  /* 108436f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108436f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108436f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108436fb push edx */
  push32((uint32_t)(EDX));
  /* 108436fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108436ff push eax */
  push32((uint32_t)(EAX));
  /* 10843700 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843703 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10843709 push edx */
  push32((uint32_t)(EDX));
  /* 1084370a call 0x10843a80 */
  push32(0x1084370fu); f_10843a80();
  /* 1084370f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10843712:;
  /* 10843712 jmp 0x10843818 */
  goto L_10843818;
L_10843717:;
  /* 10843717 mov dword ptr [0x108618f0], 0 */
  w32((uint32_t)(0x108618f0), (0x0u));
  /* 10843721 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843724 push eax */
  push32((uint32_t)(EAX));
  /* 10843725 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843728 push ecx */
  push32((uint32_t)(ECX));
  /* 10843729 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084372c push edx */
  push32((uint32_t)(EDX));
  /* 1084372d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843730 push eax */
  push32((uint32_t)(EAX));
  /* 10843731 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843734 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1084373a push edx */
  push32((uint32_t)(EDX));
  /* 1084373b call 0x10843a80 */
  push32(0x10843740u); f_10843a80();
  /* 10843740 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843743 jmp 0x10843818 */
  goto L_10843818;
L_10843748:;
  /* 10843748 mov eax, dword ptr [0x108618f0] */
  EAX = (r32((uint32_t)(0x108618f0)));
  /* 1084374d mov dword ptr [0x10861900], eax */
  w32((uint32_t)(0x10861900), (EAX));
  /* 10843752 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843755 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10843758 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10843759 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1084375e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10843760 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10843763 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843766 push edx */
  push32((uint32_t)(EDX));
  /* 10843767 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084376a push eax */
  push32((uint32_t)(EAX));
  /* 1084376b push 2 */
  push32((uint32_t)(0x2u));
  /* 1084376d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843770 push ecx */
  push32((uint32_t)(ECX));
  /* 10843771 call 0x10843920 */
  push32(0x10843776u); f_10843920();
  /* 10843776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843779 jmp 0x10843818 */
  goto L_10843818;
L_1084377e:;
  /* 1084377e mov edx, dword ptr [0x108618f0] */
  EDX = (r32((uint32_t)(0x108618f0)));
  /* 10843784 mov dword ptr [0x10861900], edx */
  w32((uint32_t)(0x10861900), (EDX));
  /* 1084378a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084378d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10843790 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10843791 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10843796 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10843798 mov ecx, eax */
  ECX = (EAX);
  /* 1084379a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084379d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108437a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108437a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108437a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108437a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 108437ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108437ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108437b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108437b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108437b6 push eax */
  push32((uint32_t)(EAX));
  /* 108437b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108437ba push ecx */
  push32((uint32_t)(ECX));
  /* 108437bb push 4 */
  push32((uint32_t)(0x4u));
  /* 108437bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108437c0 push edx */
  push32((uint32_t)(EDX));
  /* 108437c1 call 0x10843920 */
  push32(0x108437c6u); f_10843920();
  /* 108437c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108437c9 jmp 0x10843818 */
  goto L_10843818;
L_108437cb:;
  /* 108437cb call 0x108448e0 */
  push32(0x108437d0u); f_108448e0();
  /* 108437d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108437d3 push eax */
  push32((uint32_t)(EAX));
  /* 108437d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108437d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108437d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108437db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108437dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108437e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 108437e4 mov ecx, dword ptr [eax*4 + 0x10860e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10860e1c)));
  /* 108437eb push ecx */
  push32((uint32_t)(ECX));
  /* 108437ec call 0x108438d0 */
  push32(0x108437f1u); f_108438d0();
  /* 108437f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108437f4 jmp 0x10843818 */
  goto L_10843818;
L_108437f6:;
  /* 108437f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108437f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108437fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 108437fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843801 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843803 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843806 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843809 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1084380b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084380e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843810 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843813 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843816 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10843818:;
  /* 10843818 pop esi */
  ESI = (pop32());
  /* 10843819 mov esp, ebp */
  ESP = (EBP);
  /* 1084381b pop ebp */
  EBP = (pop32());
  /* 1084381c ret  */
  ESPCHK(0x108432b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x108438d0 (72 bytes, 30 insns) */
void f_108438d0(void) {
  FTRACE(0x108438d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108438d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108438d1 mov ebp, esp */
  EBP = (ESP);
L_108438d3:;
  /* 108438d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108438d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108438d9 je 0x10843916 */
  if (C.zf) goto L_10843916;
  /* 108438db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108438de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108438e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108438e3 je 0x10843916 */
  if (C.zf) goto L_10843916;
  /* 108438e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108438e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108438ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108438ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108438ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108438f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108438f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108438f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108438f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108438fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108438fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843904 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10843907 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084390a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1084390c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084390f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843912 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10843914 jmp 0x108438d3 */
  goto L_108438d3;
L_10843916:;
  /* 10843916 pop ebp */
  EBP = (pop32());
  /* 10843917 ret  */
  ESPCHK(0x108438d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013920 @ 0x10843920 (173 bytes, 64 insns) */
void f_10843920(void) {
  FTRACE(0x10843920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10843920 push ebp */
  push32((uint32_t)(EBP));
  /* 10843921 mov ebp, esp */
  EBP = (ESP);
  /* 10843923 push ecx */
  push32((uint32_t)(ECX));
  /* 10843924 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1084392b cmp dword ptr [0x10861900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843932 je 0x1084394a */
  if (C.zf) goto L_1084394a;
  /* 10843934 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843937 push eax */
  push32((uint32_t)(EAX));
  /* 10843938 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084393b push ecx */
  push32((uint32_t)(ECX));
  /* 1084393c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084393f push edx */
  push32((uint32_t)(EDX));
  /* 10843940 call 0x108439d0 */
  push32(0x10843945u); f_108439d0();
  /* 10843945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843948 jmp 0x108439c9 */
  goto L_108439c9;
L_1084394a:;
  /* 1084394a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084394d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843950 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843952 jae 0x108439c0 */
  if (!C.cf) goto L_108439c0;
  /* 10843954 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843957 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084395a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1084395d jmp 0x10843968 */
  goto L_10843968;
L_1084395f:;
  /* 1084395f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843962 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843965 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10843968:;
  /* 10843968 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084396b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084396e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10843970 je 0x108439a4 */
  if (C.zf) goto L_108439a4;
  /* 10843972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843975 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10843976 mov ecx, 0xa */
  ECX = (0xau);
  /* 1084397b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1084397d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843980 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843983 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843985 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843988 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1084398b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084398e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1084398f mov ecx, 0xa */
  ECX = (0xau);
  /* 10843994 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10843996 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10843999 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084399c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084399f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108439a2 jmp 0x1084395f */
  goto L_1084395f;
L_108439a4:;
  /* 108439a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108439a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108439a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108439ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108439af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108439b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108439b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108439b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108439b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108439bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108439be jmp 0x108439c9 */
  goto L_108439c9;
L_108439c0:;
  /* 108439c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108439c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108439c9:;
  /* 108439c9 mov esp, ebp */
  ESP = (EBP);
  /* 108439cb pop ebp */
  EBP = (pop32());
  /* 108439cc ret  */
  ESPCHK(0x10843920u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x108439d0 (172 bytes, 65 insns) */
void f_108439d0(void) {
  FTRACE(0x108439d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108439d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108439d1 mov ebp, esp */
  EBP = (ESP);
  /* 108439d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108439d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108439d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108439db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108439de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108439e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108439e4 jbe 0x10843a2b */
  if ((C.cf||C.zf)) goto L_10843a2b;
L_108439e6:;
  /* 108439e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108439e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108439ea mov ecx, 0xa */
  ECX = (0xau);
  /* 108439ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108439f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108439f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108439f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108439f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108439fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108439ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10843a02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843a05 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843a07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843a0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843a0d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10843a0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843a12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10843a13 mov ecx, 0xa */
  ECX = (0xau);
  /* 10843a18 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10843a1a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10843a1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843a21 jle 0x10843a2b */
  if ((C.zf||C.sf!=C.of)) goto L_10843a2b;
  /* 10843a23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843a26 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843a29 ja 0x108439e6 */
  if ((!C.cf&&!C.zf)) goto L_108439e6;
L_10843a2b:;
  /* 10843a2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843a2e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843a30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10843a33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843a36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843a39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10843a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843a3e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843a41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10843a44:;
  /* 10843a44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843a47 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843a49 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10843a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843a4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10843a52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843a54 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10843a56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843a59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843a5c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10843a5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10843a62 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10843a65 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10843a67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10843a6a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843a6d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10843a70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10843a73 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843a76 jb 0x10843a44 */
  if (C.cf) goto L_10843a44;
  /* 10843a78 mov esp, ebp */
  ESP = (EBP);
  /* 10843a7a pop ebp */
  EBP = (pop32());
  /* 10843a7b ret  */
  ESPCHK(0x108439d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a80 @ 0x10843a80 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10843a80(void) {
  FTRACE(0x10843a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10843a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10843a81 mov ebp, esp */
  EBP = (ESP);
  /* 10843a83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10843a86:;
  /* 10843a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843a89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10843a8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10843a8e je 0x10843efc */
  if (C.zf) goto L_10843efc;
  /* 10843a94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843a97 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843a9a je 0x10843efc */
  if (C.zf) goto L_10843efc;
  /* 10843aa0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10843aa4 mov dword ptr [0x10861900], 0 */
  w32((uint32_t)(0x10861900), (0x0u));
  /* 10843aae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10843ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843ab8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10843abb jmp 0x10843ac6 */
  goto L_10843ac6;
L_10843abd:;
  /* 10843abd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843ac0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843ac3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10843ac6:;
  /* 10843ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843ac9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10843acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843acf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10843ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843ad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843ad8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10843adb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843add jne 0x10843ae1 */
  if (!C.zf) goto L_10843ae1;
  /* 10843adf jmp 0x10843abd */
  goto L_10843abd;
L_10843ae1:;
  /* 10843ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843ae4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843ae7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10843aea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843aed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10843af0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10843af3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843af6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843af9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10843afc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843b00 ja 0x10843e50 */
  if ((!C.cf&&!C.zf)) goto L_10843e50;
  /* 10843b06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10843b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10843b0b mov al, byte ptr [ecx + 0x10843f2c] */
  AL = (r8((uint32_t)(ECX + 0x10843f2c)));
  /* 10843b11 jmp dword ptr [eax*4 + 0x10843f00] */
  switch (EAX) {
    case 0: goto L_10843d6f;
    case 1: goto L_10843c53;
    case 2: goto L_10843bde;
    case 3: goto L_10843b18;
    case 4: goto L_10843b56;
    case 5: goto L_10843bb7;
    case 6: goto L_10843c05;
    case 7: goto L_10843c2c;
    case 8: goto L_10843c9a;
    case 9: goto L_10843b94;
    case 10: goto L_10843e50;
    default: x86_unimpl("switch@0x10843b11 out of table"); return;
  }
L_10843b18:;
  /* 10843b18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843b1b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10843b1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10843b21 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843b24 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10843b27 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843b2b ja 0x10843b51 */
  if ((!C.cf&&!C.zf)) goto L_10843b51;
  /* 10843b2d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10843b30 jmp dword ptr [ecx*4 + 0x10843f7f] */
  switch (ECX) {
    case 0: goto L_10843b37;
    case 1: goto L_10843b41;
    case 2: goto L_10843b47;
    case 3: goto L_10843b4d;
    case 4: goto L_10843b75;
    case 5: goto L_10843b7f;
    case 6: goto L_10843b85;
    case 7: goto L_10843b8b;
    default: x86_unimpl("switch@0x10843b30 out of table"); return;
  }
L_10843b37:;
  /* 10843b37 mov dword ptr [0x10861900], 1 */
  w32((uint32_t)(0x10861900), (0x1u));
L_10843b41:;
  /* 10843b41 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10843b45 jmp 0x10843b51 */
  goto L_10843b51;
L_10843b47:;
  /* 10843b47 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10843b4b jmp 0x10843b51 */
  goto L_10843b51;
L_10843b4d:;
  /* 10843b4d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10843b51:;
  /* 10843b51 jmp 0x10843e50 */
  goto L_10843e50;
L_10843b56:;
  /* 10843b56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843b59 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10843b5c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10843b5f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843b62 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10843b65 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843b69 ja 0x10843b8f */
  if ((!C.cf&&!C.zf)) goto L_10843b8f;
  /* 10843b6b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10843b6e jmp dword ptr [ecx*4 + 0x10843f8f] */
  switch (ECX) {
    case 0: goto L_10843b75;
    case 1: goto L_10843b7f;
    case 2: goto L_10843b85;
    case 3: goto L_10843b8b;
    default: x86_unimpl("switch@0x10843b6e out of table"); return;
  }
L_10843b75:;
  /* 10843b75 mov dword ptr [0x10861900], 1 */
  w32((uint32_t)(0x10861900), (0x1u));
L_10843b7f:;
  /* 10843b7f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10843b83 jmp 0x10843b8f */
  goto L_10843b8f;
L_10843b85:;
  /* 10843b85 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10843b89 jmp 0x10843b8f */
  goto L_10843b8f;
L_10843b8b:;
  /* 10843b8b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10843b8f:;
  /* 10843b8f jmp 0x10843e50 */
  goto L_10843e50;
L_10843b94:;
  /* 10843b94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843b97 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10843b9a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843b9e je 0x10843ba8 */
  if (C.zf) goto L_10843ba8;
  /* 10843ba0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843ba4 je 0x10843bae */
  if (C.zf) goto L_10843bae;
  /* 10843ba6 jmp 0x10843bb2 */
  goto L_10843bb2;
L_10843ba8:;
  /* 10843ba8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10843bac jmp 0x10843bb2 */
  goto L_10843bb2;
L_10843bae:;
  /* 10843bae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10843bb2:;
  /* 10843bb2 jmp 0x10843e50 */
  goto L_10843e50;
L_10843bb7:;
  /* 10843bb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843bba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10843bbd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843bc1 je 0x10843bcb */
  if (C.zf) goto L_10843bcb;
  /* 10843bc3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843bc7 je 0x10843bd5 */
  if (C.zf) goto L_10843bd5;
  /* 10843bc9 jmp 0x10843bd9 */
  goto L_10843bd9;
L_10843bcb:;
  /* 10843bcb mov dword ptr [0x10861900], 1 */
  w32((uint32_t)(0x10861900), (0x1u));
L_10843bd5:;
  /* 10843bd5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10843bd9:;
  /* 10843bd9 jmp 0x10843e50 */
  goto L_10843e50;
L_10843bde:;
  /* 10843bde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843be1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10843be4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843be8 je 0x10843bf2 */
  if (C.zf) goto L_10843bf2;
  /* 10843bea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843bee je 0x10843bfc */
  if (C.zf) goto L_10843bfc;
  /* 10843bf0 jmp 0x10843c00 */
  goto L_10843c00;
L_10843bf2:;
  /* 10843bf2 mov dword ptr [0x10861900], 1 */
  w32((uint32_t)(0x10861900), (0x1u));
L_10843bfc:;
  /* 10843bfc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10843c00:;
  /* 10843c00 jmp 0x10843e50 */
  goto L_10843e50;
L_10843c05:;
  /* 10843c05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843c08 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10843c0b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843c0f je 0x10843c19 */
  if (C.zf) goto L_10843c19;
  /* 10843c11 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843c15 je 0x10843c23 */
  if (C.zf) goto L_10843c23;
  /* 10843c17 jmp 0x10843c27 */
  goto L_10843c27;
L_10843c19:;
  /* 10843c19 mov dword ptr [0x10861900], 1 */
  w32((uint32_t)(0x10861900), (0x1u));
L_10843c23:;
  /* 10843c23 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10843c27:;
  /* 10843c27 jmp 0x10843e50 */
  goto L_10843e50;
L_10843c2c:;
  /* 10843c2c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843c2f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10843c32 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843c36 je 0x10843c40 */
  if (C.zf) goto L_10843c40;
  /* 10843c38 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843c3c je 0x10843c4a */
  if (C.zf) goto L_10843c4a;
  /* 10843c3e jmp 0x10843c4e */
  goto L_10843c4e;
L_10843c40:;
  /* 10843c40 mov dword ptr [0x10861900], 1 */
  w32((uint32_t)(0x10861900), (0x1u));
L_10843c4a:;
  /* 10843c4a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10843c4e:;
  /* 10843c4e jmp 0x10843e50 */
  goto L_10843e50;
L_10843c53:;
  /* 10843c53 push 0x1085db04 */
  push32((uint32_t)(0x1085db04u));
  /* 10843c58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843c5b push ecx */
  push32((uint32_t)(ECX));
  /* 10843c5c call 0x108444b0 */
  push32(0x10843c61u); f_108444b0();
  /* 10843c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10843c66 jne 0x10843c73 */
  if (!C.zf) goto L_10843c73;
  /* 10843c68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843c6b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843c6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10843c71 jmp 0x10843c91 */
  goto L_10843c91;
L_10843c73:;
  /* 10843c73 push 0x1085db00 */
  push32((uint32_t)(0x1085db00u));
  /* 10843c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843c7b push eax */
  push32((uint32_t)(EAX));
  /* 10843c7c call 0x108444b0 */
  push32(0x10843c81u); f_108444b0();
  /* 10843c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10843c86 jne 0x10843c91 */
  if (!C.zf) goto L_10843c91;
  /* 10843c88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843c8b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843c8e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10843c91:;
  /* 10843c91 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10843c95 jmp 0x10843e50 */
  goto L_10843e50;
L_10843c9a:;
  /* 10843c9a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843c9d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843ca1 jg 0x10843cb1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10843cb1;
  /* 10843ca3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843ca6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10843cac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10843caf jmp 0x10843cbd */
  goto L_10843cbd;
L_10843cb1:;
  /* 10843cb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843cb4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10843cba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10843cbd:;
  /* 10843cbd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843cc1 jle 0x10843d64 */
  if ((C.zf||C.sf!=C.of)) goto L_10843d64;
  /* 10843cc7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843cca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843ccd jbe 0x10843d64 */
  if ((C.cf||C.zf)) goto L_10843d64;
  /* 10843cd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10843cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10843cd8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843cda mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 10843ce0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10843ce2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10843ce6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10843cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10843cee je 0x10843d27 */
  if (C.zf) goto L_10843d27;
  /* 10843cf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843cf3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843cf6 jbe 0x10843d27 */
  if ((C.cf||C.zf)) goto L_10843d27;
  /* 10843cf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843cfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843cfd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10843d00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10843d02 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10843d04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843d07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843d09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843d0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843d0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10843d11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10843d14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843d17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10843d1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843d1d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843d1f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843d22 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843d25 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10843d27:;
  /* 10843d27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843d2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843d2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10843d2f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843d31 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10843d33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843d36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843d38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843d3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843d3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10843d40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10843d43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843d46 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10843d49 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843d4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843d4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843d51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843d54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10843d56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843d59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843d5c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10843d5f jmp 0x10843cbd */
  goto L_10843cbd;
L_10843d64:;
  /* 10843d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843d67 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10843d6a jmp 0x10843a86 */
  goto L_10843a86;
L_10843d6f:;
  /* 10843d6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843d72 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10843d75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10843d77 je 0x10843e42 */
  if (C.zf) goto L_10843e42;
  /* 10843d7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843d80 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843d83 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10843d86:;
  /* 10843d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843d89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10843d8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10843d8e je 0x10843e40 */
  if (C.zf) goto L_10843e40;
  /* 10843d94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843d97 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843d9a je 0x10843e40 */
  if (C.zf) goto L_10843e40;
  /* 10843da0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843da3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10843da6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843da9 jne 0x10843db9 */
  if (!C.zf) goto L_10843db9;
  /* 10843dab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843dae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843db1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10843db4 jmp 0x10843e40 */
  goto L_10843e40;
L_10843db9:;
  /* 10843db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843dbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10843dbe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10843dc0 mov edx, dword ptr [0x1085fc98] */
  EDX = (r32((uint32_t)(0x1085fc98)));
  /* 10843dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10843dc8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10843dcc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10843dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10843dd3 je 0x10843e0c */
  if (C.zf) goto L_10843e0c;
  /* 10843dd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843dd8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843ddb jbe 0x10843e0c */
  if ((C.cf||C.zf)) goto L_10843e0c;
  /* 10843ddd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843de0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843de5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10843de7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10843de9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843dec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843df1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843df4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10843df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843df9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843dfc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10843dff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843e02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843e04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843e07 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843e0a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10843e0c:;
  /* 10843e0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843e0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843e11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843e14 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10843e16 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10843e18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843e1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843e1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843e20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843e23 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10843e25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843e28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843e2b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10843e2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843e31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843e33 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843e36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843e39 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10843e3b jmp 0x10843d86 */
  goto L_10843d86;
L_10843e40:;
  /* 10843e40 jmp 0x10843e4b */
  goto L_10843e4b;
L_10843e42:;
  /* 10843e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843e45 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843e48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10843e4b:;
  /* 10843e4b jmp 0x10843a86 */
  goto L_10843a86;
L_10843e50:;
  /* 10843e50 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10843e54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10843e56 je 0x10843e7c */
  if (C.zf) goto L_10843e7c;
  /* 10843e58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10843e5b push edx */
  push32((uint32_t)(EDX));
  /* 10843e5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843e5f push eax */
  push32((uint32_t)(EAX));
  /* 10843e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10843e64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843e67 push edx */
  push32((uint32_t)(EDX));
  /* 10843e68 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10843e6b push eax */
  push32((uint32_t)(EAX));
  /* 10843e6c call 0x108432b0 */
  push32(0x10843e71u); f_108432b0();
  /* 10843e71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843e74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10843e77 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10843e7a jmp 0x10843ef7 */
  goto L_10843ef7;
L_10843e7c:;
  /* 10843e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843e7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10843e81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843e83 mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 10843e89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10843e8b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10843e8f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10843e95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10843e97 je 0x10843ec8 */
  if (C.zf) goto L_10843ec8;
  /* 10843e99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843e9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843ea1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10843ea3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10843ea5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843ea8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843eaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843ead mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843eb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10843eb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843eb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843eb8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10843ebb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843ebe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843ec0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843ec3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843ec6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10843ec8:;
  /* 10843ec8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843ecb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10843ecd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843ed0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10843ed2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10843ed4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843ed7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10843ed9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843edc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843edf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10843ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10843ee4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10843ee7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10843eea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843eed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10843eef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843ef2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843ef5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10843ef7:;
  /* 10843ef7 jmp 0x10843a86 */
  goto L_10843a86;
L_10843efc:;
  /* 10843efc mov esp, ebp */
  ESP = (EBP);
  /* 10843efe pop ebp */
  EBP = (pop32());
  /* 10843eff ret  */
  ESPCHK(0x10843a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fa0 @ 0x10843fa0 (650 bytes, 178 insns) */
void f_10843fa0(void) {
  FTRACE(0x10843fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10843fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10843fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10843fa3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10843fa9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843fad jne 0x10844109 */
  if (!C.zf) goto L_10844109;
  /* 10843fb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10843fb6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10843fbc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10843fc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10843fc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10843fcc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10843fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10843fd8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10843fde push edx */
  push32((uint32_t)(EDX));
  /* 10843fdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10843fe2 push eax */
  push32((uint32_t)(EAX));
  /* 10843fe3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10843fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10843fe7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10843fea push edx */
  push32((uint32_t)(EDX));
  /* 10843feb call 0x108453c0 */
  push32(0x10843ff0u); f_108453c0();
  /* 10843ff0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10843ff3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10843ff6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10843ffa jne 0x1084408f */
  if (!C.zf) goto L_1084408f;
  /* 10844000 call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x10844006u);
  /* 10844006 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844009 je 0x10844010 */
  if (C.zf) goto L_10844010;
  /* 1084400b jmp 0x108440ed */
  goto L_108440ed;
L_10844010:;
  /* 10844010 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844016 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844019 push eax */
  push32((uint32_t)(EAX));
  /* 1084401a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084401d push ecx */
  push32((uint32_t)(ECX));
  /* 1084401e call 0x108453c0 */
  push32(0x10844023u); f_108453c0();
  /* 10844023 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844026 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1084402c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844033 jne 0x1084403a */
  if (!C.zf) goto L_1084403a;
  /* 10844035 jmp 0x108440ed */
  goto L_108440ed;
L_1084403a:;
  /* 1084403a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1084403c push 0x1085db0c */
  push32((uint32_t)(0x1085db0cu));
  /* 10844041 push 2 */
  push32((uint32_t)(0x2u));
  /* 10844043 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10844049 push edx */
  push32((uint32_t)(EDX));
  /* 1084404a call 0x10835de0 */
  push32(0x1084404fu); f_10835de0();
  /* 1084404f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844052 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10844055 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844059 jne 0x10844060 */
  if (!C.zf) goto L_10844060;
  /* 1084405b jmp 0x108440ed */
  goto L_108440ed;
L_10844060:;
  /* 10844060 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10844067 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844069 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1084406f push eax */
  push32((uint32_t)(EAX));
  /* 10844070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844073 push ecx */
  push32((uint32_t)(ECX));
  /* 10844074 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844077 push edx */
  push32((uint32_t)(EDX));
  /* 10844078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084407b push eax */
  push32((uint32_t)(EAX));
  /* 1084407c call 0x108453c0 */
  push32(0x10844081u); f_108453c0();
  /* 10844081 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844084 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10844087 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084408b jne 0x1084408f */
  if (!C.zf) goto L_1084408f;
  /* 1084408d jmp 0x108440ed */
  goto L_108440ed;
L_1084408f:;
  /* 1084408f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10844091 push 0x1085db0c */
  push32((uint32_t)(0x1085db0cu));
  /* 10844096 push 2 */
  push32((uint32_t)(0x2u));
  /* 10844098 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084409b push ecx */
  push32((uint32_t)(ECX));
  /* 1084409c call 0x10835de0 */
  push32(0x108440a1u); f_10835de0();
  /* 108440a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108440a4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 108440aa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108440ac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 108440b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108440b5 jne 0x108440b9 */
  if (!C.zf) goto L_108440b9;
  /* 108440b7 jmp 0x108440ed */
  goto L_108440ed;
L_108440b9:;
  /* 108440b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108440bc push ecx */
  push32((uint32_t)(ECX));
  /* 108440bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108440c0 push edx */
  push32((uint32_t)(EDX));
  /* 108440c1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 108440c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108440c9 push ecx */
  push32((uint32_t)(ECX));
  /* 108440ca call 0x10839600 */
  push32(0x108440cfu); f_10839600();
  /* 108440cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108440d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108440d6 je 0x108440e6 */
  if (C.zf) goto L_108440e6;
  /* 108440d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108440da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108440dd push edx */
  push32((uint32_t)(EDX));
  /* 108440de call 0x10836870 */
  push32(0x108440e3u); f_10836870();
  /* 108440e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108440e6:;
  /* 108440e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108440e8 jmp 0x10844226 */
  goto L_10844226;
L_108440ed:;
  /* 108440ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108440f1 je 0x10844101 */
  if (C.zf) goto L_10844101;
  /* 108440f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108440f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108440f8 push eax */
  push32((uint32_t)(EAX));
  /* 108440f9 call 0x10836870 */
  push32(0x108440feu); f_10836870();
  /* 108440fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10844101:;
  /* 10844101 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10844104 jmp 0x10844226 */
  goto L_10844226;
L_10844109:;
  /* 10844109 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084410d jne 0x10844223 */
  if (!C.zf) goto L_10844223;
  /* 10844113 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1084411d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10844120 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10844126 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844128 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1084412e push edx */
  push32((uint32_t)(EDX));
  /* 1084412f push 0x10861818 */
  push32((uint32_t)(0x10861818u));
  /* 10844134 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844137 push eax */
  push32((uint32_t)(EAX));
  /* 10844138 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084413b push ecx */
  push32((uint32_t)(ECX));
  /* 1084413c call 0x10845220 */
  push32(0x10844141u); f_10845220();
  /* 10844141 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10844146 jne 0x10844150 */
  if (!C.zf) goto L_10844150;
  /* 10844148 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084414b jmp 0x10844226 */
  goto L_10844226;
L_10844150:;
  /* 10844150 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10844156 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10844159 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10844163 jmp 0x10844174 */
  goto L_10844174;
L_10844165:;
  /* 10844165 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1084416b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084416e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10844174:;
  /* 10844174 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084417b jge 0x1084421f */
  if ((C.sf==C.of)) goto L_1084421f;
  /* 10844181 cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844188 jle 0x108441bb */
  if ((C.zf||C.sf!=C.of)) goto L_108441bb;
  /* 1084418a push 4 */
  push32((uint32_t)(0x4u));
  /* 1084418c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10844192 mov dl, byte ptr [ecx*2 + 0x10861818] */
  DL = (r8((uint32_t)(ECX*2 + 0x10861818)));
  /* 10844199 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1084419f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 108441a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108441aa push eax */
  push32((uint32_t)(EAX));
  /* 108441ab call 0x1083bdf0 */
  push32(0x108441b0u); f_1083bdf0();
  /* 108441b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108441b3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 108441b9 jmp 0x108441ee */
  goto L_108441ee;
L_108441bb:;
  /* 108441bb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 108441c1 mov dl, byte ptr [ecx*2 + 0x10861818] */
  DL = (r8((uint32_t)(ECX*2 + 0x10861818)));
  /* 108441c8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 108441ce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 108441d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108441d9 mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 108441df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108441e1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108441e5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108441e8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_108441ee:;
  /* 108441ee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108441f5 je 0x10844218 */
  if (C.zf) goto L_10844218;
  /* 108441f7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108441fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10844200 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844203 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1084420a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1084420e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10844214 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10844216 jmp 0x1084421a */
  goto L_1084421a;
L_10844218:;
  /* 10844218 jmp 0x1084421f */
  goto L_1084421f;
L_1084421a:;
  /* 1084421a jmp 0x10844165 */
  goto L_10844165;
L_1084421f:;
  /* 1084421f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844221 jmp 0x10844226 */
  goto L_10844226;
L_10844223:;
  /* 10844223 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10844226:;
  /* 10844226 mov esp, ebp */
  ESP = (EBP);
  /* 10844228 pop ebp */
  EBP = (pop32());
  /* 10844229 ret  */
  ESPCHK(0x10843fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014230 @ 0x10844230 (10 bytes, 5 insns) */
void f_10844230(void) {
  FTRACE(0x10844230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844230 push ebp */
  push32((uint32_t)(EBP));
  /* 10844231 mov ebp, esp */
  EBP = (ESP);
  /* 10844233 mov eax, dword ptr [0x10860d88] */
  EAX = (r32((uint32_t)(0x10860d88)));
  /* 10844238 pop ebp */
  EBP = (pop32());
  /* 10844239 ret  */
  ESPCHK(0x10844230u, _esp0);
  ESP += 4; return;
}

/* FUN_10014240 @ 0x10844240 (575 bytes, 196 insns) */
void f_10844240(void) {
  FTRACE(0x10844240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844240 push ebp */
  push32((uint32_t)(EBP));
  /* 10844241 mov ebp, esp */
  EBP = (ESP);
  /* 10844243 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10844245 push 0x1085db18 */
  push32((uint32_t)(0x1085db18u));
  /* 1084424a push 0x1083eee8 */
  push32((uint32_t)(0x1083eee8u));
  /* 1084424f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10844255 push eax */
  push32((uint32_t)(EAX));
  /* 10844256 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1084425d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844260 push ebx */
  push32((uint32_t)(EBX));
  /* 10844261 push esi */
  push32((uint32_t)(ESI));
  /* 10844262 push edi */
  push32((uint32_t)(EDI));
  /* 10844263 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10844266 cmp dword ptr [0x10861824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084426d jne 0x108442be */
  if (!C.zf) goto L_108442be;
  /* 1084426f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10844272 push eax */
  push32((uint32_t)(EAX));
  /* 10844273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10844275 push 0x1085d248 */
  push32((uint32_t)(0x1085d248u));
  /* 1084427a push 1 */
  push32((uint32_t)(0x1u));
  /* 1084427c call dword ptr [0x1086431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086431c))), 0x10844282u);
  /* 10844282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10844284 je 0x10844292 */
  if (C.zf) goto L_10844292;
  /* 10844286 mov dword ptr [0x10861824], 1 */
  w32((uint32_t)(0x10861824), (0x1u));
  /* 10844290 jmp 0x108442be */
  goto L_108442be;
L_10844292:;
  /* 10844292 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10844295 push ecx */
  push32((uint32_t)(ECX));
  /* 10844296 push 1 */
  push32((uint32_t)(0x1u));
  /* 10844298 push 0x1085d244 */
  push32((uint32_t)(0x1085d244u));
  /* 1084429d push 1 */
  push32((uint32_t)(0x1u));
  /* 1084429f push 0 */
  push32((uint32_t)(0x0u));
  /* 108442a1 call dword ptr [0x1086432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086432c))), 0x108442a7u);
  /* 108442a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108442a9 je 0x108442b7 */
  if (C.zf) goto L_108442b7;
  /* 108442ab mov dword ptr [0x10861824], 2 */
  w32((uint32_t)(0x10861824), (0x2u));
  /* 108442b5 jmp 0x108442be */
  goto L_108442be;
L_108442b7:;
  /* 108442b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108442b9 jmp 0x10844499 */
  goto L_10844499;
L_108442be:;
  /* 108442be cmp dword ptr [0x10861824], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10861824))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108442c5 jne 0x108442e2 */
  if (!C.zf) goto L_108442e2;
  /* 108442c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108442ca push edx */
  push32((uint32_t)(EDX));
  /* 108442cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108442ce push eax */
  push32((uint32_t)(EAX));
  /* 108442cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108442d2 push ecx */
  push32((uint32_t)(ECX));
  /* 108442d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108442d6 push edx */
  push32((uint32_t)(EDX));
  /* 108442d7 call dword ptr [0x1086431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086431c))), 0x108442ddu);
  /* 108442dd jmp 0x10844499 */
  goto L_10844499;
L_108442e2:;
  /* 108442e2 cmp dword ptr [0x10861824], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10861824))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108442e9 jne 0x10844497 */
  if (!C.zf) goto L_10844497;
  /* 108442ef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108442f3 jne 0x108442fd */
  if (!C.zf) goto L_108442fd;
  /* 108442f5 mov eax, dword ptr [0x10861798] */
  EAX = (r32((uint32_t)(0x10861798)));
  /* 108442fa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_108442fd:;
  /* 108442fd push 0 */
  push32((uint32_t)(0x0u));
  /* 108442ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10844301 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844303 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844305 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844308 push ecx */
  push32((uint32_t)(ECX));
  /* 10844309 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084430c push edx */
  push32((uint32_t)(EDX));
  /* 1084430d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10844312 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10844315 push eax */
  push32((uint32_t)(EAX));
  /* 10844316 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x1084431cu);
  /* 1084431c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1084431f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844323 jne 0x1084432c */
  if (!C.zf) goto L_1084432c;
  /* 10844325 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844327 jmp 0x10844499 */
  goto L_10844499;
L_1084432c:;
  /* 1084432c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10844333 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10844336 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844339 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1084433b call 0x10838f80 */
  push32(0x10844340u); f_10838f80();
  /* 10844340 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10844343 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10844346 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10844349 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1084434c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1084434f push edx */
  push32((uint32_t)(EDX));
  /* 10844350 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844352 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10844355 push eax */
  push32((uint32_t)(EAX));
  /* 10844356 call 0x10839b50 */
  push32(0x1084435bu); f_10839b50();
  /* 1084435b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084435e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10844365 jmp 0x1084437e */
  goto L_1084437e;
  /* 10844367 mov eax, 1 */
  EAX = (0x1u);
  /* 1084436c ret  */
  ESPCHK(0x10844240u, _esp0);
  ESP += 4; return;
  /* 1084436d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10844370 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10844377 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1084437e:;
  /* 1084437e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844382 jne 0x1084438b */
  if (!C.zf) goto L_1084438b;
  /* 10844384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844386 jmp 0x10844499 */
  goto L_10844499;
L_1084438b:;
  /* 1084438b push 0 */
  push32((uint32_t)(0x0u));
  /* 1084438d push 0 */
  push32((uint32_t)(0x0u));
  /* 1084438f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10844392 push ecx */
  push32((uint32_t)(ECX));
  /* 10844393 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10844396 push edx */
  push32((uint32_t)(EDX));
  /* 10844397 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084439a push eax */
  push32((uint32_t)(EAX));
  /* 1084439b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1084439e push ecx */
  push32((uint32_t)(ECX));
  /* 1084439f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 108443a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108443a7 push edx */
  push32((uint32_t)(EDX));
  /* 108443a8 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x108443aeu);
  /* 108443ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108443b0 jne 0x108443b9 */
  if (!C.zf) goto L_108443b9;
  /* 108443b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108443b4 jmp 0x10844499 */
  goto L_10844499;
L_108443b9:;
  /* 108443b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108443c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108443c3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 108443c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108443ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108443cc call 0x10838f80 */
  push32(0x108443d1u); f_10838f80();
  /* 108443d1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 108443d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108443d7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 108443da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 108443dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108443e4 jmp 0x108443fd */
  goto L_108443fd;
  /* 108443e6 mov eax, 1 */
  EAX = (0x1u);
  /* 108443eb ret  */
  ESPCHK(0x10844240u, _esp0);
  ESP += 4; return;
  /* 108443ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108443ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 108443f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108443fd:;
  /* 108443fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844401 jne 0x1084440a */
  if (!C.zf) goto L_1084440a;
  /* 10844403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844405 jmp 0x10844499 */
  goto L_10844499;
L_1084440a:;
  /* 1084440a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084440e jne 0x10844419 */
  if (!C.zf) goto L_10844419;
  /* 10844410 mov edx, dword ptr [0x10861788] */
  EDX = (r32((uint32_t)(0x10861788)));
  /* 10844416 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10844419:;
  /* 10844419 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084441c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1084441f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10844425 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844428 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1084442b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10844432 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10844435 push ecx */
  push32((uint32_t)(ECX));
  /* 10844436 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10844439 push edx */
  push32((uint32_t)(EDX));
  /* 1084443a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1084443d push eax */
  push32((uint32_t)(EAX));
  /* 1084443e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844441 push ecx */
  push32((uint32_t)(ECX));
  /* 10844442 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10844445 push edx */
  push32((uint32_t)(EDX));
  /* 10844446 call dword ptr [0x1086432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086432c))), 0x1084444cu);
  /* 1084444c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1084444f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844452 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10844455 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844457 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1084445c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844462 je 0x10844478 */
  if (C.zf) goto L_10844478;
  /* 10844464 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844467 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1084446a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1084446c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10844470 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844476 je 0x1084447c */
  if (C.zf) goto L_1084447c;
L_10844478:;
  /* 10844478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084447a jmp 0x10844499 */
  goto L_10844499;
L_1084447c:;
  /* 1084447c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084447f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10844481 push eax */
  push32((uint32_t)(EAX));
  /* 10844482 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10844485 push ecx */
  push32((uint32_t)(ECX));
  /* 10844486 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10844489 push edx */
  push32((uint32_t)(EDX));
  /* 1084448a call 0x1083dcd0 */
  push32(0x1084448fu); f_1083dcd0();
  /* 1084448f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844492 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10844495 jmp 0x10844499 */
  goto L_10844499;
L_10844497:;
  /* 10844497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10844499:;
  /* 10844499 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1084449c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1084449f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108444a6 pop edi */
  EDI = (pop32());
  /* 108444a7 pop esi */
  ESI = (pop32());
  /* 108444a8 pop ebx */
  EBX = (pop32());
  /* 108444a9 mov esp, ebp */
  ESP = (EBP);
  /* 108444ab pop ebp */
  EBP = (pop32());
  /* 108444ac ret  */
  ESPCHK(0x10844240u, _esp0);
  ESP += 4; return;
}

/* FUN_100144b0 @ 0x108444b0 (208 bytes, 85 insns) */
void f_108444b0(void) {
  FTRACE(0x108444b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108444b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108444b1 mov ebp, esp */
  EBP = (ESP);
  /* 108444b3 push edi */
  push32((uint32_t)(EDI));
  /* 108444b4 push esi */
  push32((uint32_t)(ESI));
  /* 108444b5 push ebx */
  push32((uint32_t)(EBX));
  /* 108444b6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108444b9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108444bc lea eax, [0x10861780] */
  EAX = ((uint32_t)(0x10861780));
  /* 108444c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108444c6 jne 0x10844503 */
  if (!C.zf) goto L_10844503;
  /* 108444c8 mov al, 0xff */
  AL = (0xffu);
  /* 108444ca mov edi, edi */
  EDI = (EDI);
L_108444cc:;
  /* 108444cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108444ce je 0x108444fe */
  if (C.zf) goto L_108444fe;
  /* 108444d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108444d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108444d3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 108444d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108444d6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108444d8 je 0x108444cc */
  if (C.zf) goto L_108444cc;
  /* 108444da sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108444dc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108444de sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108444e0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108444e3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108444e5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108444e7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 108444e9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108444eb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108444ed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108444ef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 108444f2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108444f4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 108444f6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108444f8 je 0x108444cc */
  if (C.zf) goto L_108444cc;
  /* 108444fa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 108444fc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_108444fe:;
  /* 108444fe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10844501 jmp 0x1084457b */
  goto L_1084457b;
L_10844503:;
  /* 10844503 lock inc dword ptr [0x10861914] */
  x86_unimpl("lock inc @ 0x10844503");
  /* 1084450a cmp dword ptr [0x10861904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844511 jg 0x10844517 */
  if ((!C.zf&&C.sf==C.of)) goto L_10844517;
  /* 10844513 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844515 jmp 0x1084452c */
  goto L_1084452c;
L_10844517:;
  /* 10844517 lock dec dword ptr [0x10861914] */
  x86_unimpl("lock dec @ 0x10844517");
  /* 1084451e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10844520 call 0x108397e0 */
  push32(0x10844525u); f_108397e0();
  /* 10844525 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1084452c:;
  /* 1084452c mov eax, 0xff */
  EAX = (0xffu);
  /* 10844531 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10844533 nop  */
  /* nop */
L_10844534:;
  /* 10844534 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10844536 je 0x1084455f */
  if (C.zf) goto L_1084455f;
  /* 10844538 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1084453a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1084453b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1084453d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1084453e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10844540 je 0x10844534 */
  if (C.zf) goto L_10844534;
  /* 10844542 push eax */
  push32((uint32_t)(EAX));
  /* 10844543 push ebx */
  push32((uint32_t)(EBX));
  /* 10844544 call 0x10845620 */
  push32(0x10844549u); f_10845620();
  /* 10844549 mov ebx, eax */
  EBX = (EAX);
  /* 1084454b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084454e call 0x10845620 */
  push32(0x10844553u); f_10845620();
  /* 10844553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844556 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10844558 je 0x10844534 */
  if (C.zf) goto L_10844534;
  /* 1084455a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084455c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1084455f:;
  /* 1084455f mov ebx, eax */
  EBX = (EAX);
  /* 10844561 pop eax */
  EAX = (pop32());
  /* 10844562 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844564 jne 0x1084456f */
  if (!C.zf) goto L_1084456f;
  /* 10844566 lock dec dword ptr [0x10861914] */
  x86_unimpl("lock dec @ 0x10844566");
  /* 1084456d jmp 0x10844579 */
  goto L_10844579;
L_1084456f:;
  /* 1084456f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10844571 call 0x10839880 */
  push32(0x10844576u); f_10839880();
  /* 10844576 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10844579:;
  /* 10844579 mov eax, ebx */
  EAX = (EBX);
L_1084457b:;
  /* 1084457b pop ebx */
  EBX = (pop32());
  /* 1084457c pop esi */
  ESI = (pop32());
  /* 1084457d pop edi */
  EDI = (pop32());
  /* 1084457e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1084457f ret  */
  ESPCHK(0x108444b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014580 @ 0x10844580 (257 bytes, 103 insns) */
void f_10844580(void) {
  FTRACE(0x10844580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844580 push ebp */
  push32((uint32_t)(EBP));
  /* 10844581 mov ebp, esp */
  EBP = (ESP);
  /* 10844583 push edi */
  push32((uint32_t)(EDI));
  /* 10844584 push esi */
  push32((uint32_t)(ESI));
  /* 10844585 push ebx */
  push32((uint32_t)(EBX));
  /* 10844586 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10844589 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1084458b je 0x1084467a */
  if (C.zf) goto L_1084467a;
  /* 10844591 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10844594 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10844597 lea eax, [0x10861780] */
  EAX = ((uint32_t)(0x10861780));
  /* 1084459d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108445a1 jne 0x108445f1 */
  if (!C.zf) goto L_108445f1;
  /* 108445a3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 108445a5 mov bl, 0x5a */
  BL = (0x5au);
  /* 108445a7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 108445a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108445ac:;
  /* 108445ac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 108445ae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 108445b0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 108445b2 je 0x108445d5 */
  if (C.zf) goto L_108445d5;
  /* 108445b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 108445b6 je 0x108445d5 */
  if (C.zf) goto L_108445d5;
  /* 108445b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108445b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108445ba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108445bc jb 0x108445c4 */
  if (C.cf) goto L_108445c4;
  /* 108445be cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108445c0 ja 0x108445c4 */
  if ((!C.cf&&!C.zf)) goto L_108445c4;
  /* 108445c2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_108445c4:;
  /* 108445c4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108445c6 jb 0x108445ce */
  if (C.cf) goto L_108445ce;
  /* 108445c8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108445ca ja 0x108445ce */
  if ((!C.cf&&!C.zf)) goto L_108445ce;
  /* 108445cc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_108445ce:;
  /* 108445ce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108445d0 jne 0x108445df */
  if (!C.zf) goto L_108445df;
  /* 108445d2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108445d3 jne 0x108445ac */
  if (!C.zf) goto L_108445ac;
L_108445d5:;
  /* 108445d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108445d7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108445d9 je 0x1084467a */
  if (C.zf) goto L_1084467a;
L_108445df:;
  /* 108445df mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 108445e4 jb 0x1084467a */
  if (C.cf) goto L_1084467a;
  /* 108445ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108445ec jmp 0x1084467a */
  goto L_1084467a;
L_108445f1:;
  /* 108445f1 lock inc dword ptr [0x10861914] */
  x86_unimpl("lock inc @ 0x108445f1");
  /* 108445f8 cmp dword ptr [0x10861904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108445ff jg 0x10844605 */
  if ((!C.zf&&C.sf==C.of)) goto L_10844605;
  /* 10844601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844603 jmp 0x1084461e */
  goto L_1084461e;
L_10844605:;
  /* 10844605 lock dec dword ptr [0x10861914] */
  x86_unimpl("lock dec @ 0x10844605");
  /* 1084460c mov ebx, ecx */
  EBX = (ECX);
  /* 1084460e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10844610 call 0x108397e0 */
  push32(0x10844615u); f_108397e0();
  /* 10844615 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1084461c mov ecx, ebx */
  ECX = (EBX);
L_1084461e:;
  /* 1084461e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844620 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10844622 mov edi, edi */
  EDI = (EDI);
L_10844624:;
  /* 10844624 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10844626 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844628 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1084462a je 0x1084464f */
  if (C.zf) goto L_1084464f;
  /* 1084462c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1084462e je 0x1084464f */
  if (C.zf) goto L_1084464f;
  /* 10844630 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10844631 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10844632 push ecx */
  push32((uint32_t)(ECX));
  /* 10844633 push eax */
  push32((uint32_t)(EAX));
  /* 10844634 push ebx */
  push32((uint32_t)(EBX));
  /* 10844635 call 0x10845620 */
  push32(0x1084463au); f_10845620();
  /* 1084463a mov ebx, eax */
  EBX = (EAX);
  /* 1084463c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084463f call 0x10845620 */
  push32(0x10844644u); f_10845620();
  /* 10844644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844647 pop ecx */
  ECX = (pop32());
  /* 10844648 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084464a jne 0x10844655 */
  if (!C.zf) goto L_10844655;
  /* 1084464c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1084464d jne 0x10844624 */
  if (!C.zf) goto L_10844624;
L_1084464f:;
  /* 1084464f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844651 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844653 je 0x1084465e */
  if (C.zf) goto L_1084465e;
L_10844655:;
  /* 10844655 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1084465a jb 0x1084465e */
  if (C.cf) goto L_1084465e;
  /* 1084465c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1084465e:;
  /* 1084465e pop eax */
  EAX = (pop32());
  /* 1084465f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844661 jne 0x1084466c */
  if (!C.zf) goto L_1084466c;
  /* 10844663 lock dec dword ptr [0x10861914] */
  x86_unimpl("lock dec @ 0x10844663");
  /* 1084466a jmp 0x1084467a */
  goto L_1084467a;
L_1084466c:;
  /* 1084466c mov ebx, ecx */
  EBX = (ECX);
  /* 1084466e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10844670 call 0x10839880 */
  push32(0x10844675u); f_10839880();
  /* 10844675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844678 mov ecx, ebx */
  ECX = (EBX);
L_1084467a:;
  /* 1084467a mov eax, ecx */
  EAX = (ECX);
  /* 1084467c pop ebx */
  EBX = (pop32());
  /* 1084467d pop esi */
  ESI = (pop32());
  /* 1084467e pop edi */
  EDI = (pop32());
  /* 1084467f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10844680 ret  */
  ESPCHK(0x10844580u, _esp0);
  ESP += 4; return;
}

/* FUN_10014690 @ 0x10844690 (255 bytes, 88 insns) */
void f_10844690(void) {
  FTRACE(0x10844690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844690 push ebp */
  push32((uint32_t)(EBP));
  /* 10844691 mov ebp, esp */
  EBP = (ESP);
  /* 10844693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10844696:;
  /* 10844696 cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084469d jle 0x108446b6 */
  if ((C.zf||C.sf!=C.of)) goto L_108446b6;
  /* 1084469f push 8 */
  push32((uint32_t)(0x8u));
  /* 108446a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108446a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108446a6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108446a8 push ecx */
  push32((uint32_t)(ECX));
  /* 108446a9 call 0x1083bdf0 */
  push32(0x108446aeu); f_1083bdf0();
  /* 108446ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108446b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108446b4 jmp 0x108446cf */
  goto L_108446cf;
L_108446b6:;
  /* 108446b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108446b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108446bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108446bd mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 108446c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108446c5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108446c9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108446cc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108446cf:;
  /* 108446cf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108446d3 je 0x108446e0 */
  if (C.zf) goto L_108446e0;
  /* 108446d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108446d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108446db mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108446de jmp 0x10844696 */
  goto L_10844696;
L_108446e0:;
  /* 108446e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108446e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108446e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108446e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108446ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108446ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108446f0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108446f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108446f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108446f9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108446fd je 0x10844705 */
  if (C.zf) goto L_10844705;
  /* 108446ff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844703 jne 0x10844718 */
  if (!C.zf) goto L_10844718;
L_10844705:;
  /* 10844705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084470a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1084470c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1084470f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844712 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844715 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10844718:;
  /* 10844718 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1084471f:;
  /* 1084471f cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844726 jle 0x1084473b */
  if ((C.zf||C.sf!=C.of)) goto L_1084473b;
  /* 10844728 push 4 */
  push32((uint32_t)(0x4u));
  /* 1084472a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084472d push edx */
  push32((uint32_t)(EDX));
  /* 1084472e call 0x1083bdf0 */
  push32(0x10844733u); f_1083bdf0();
  /* 10844733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844736 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10844739 jmp 0x10844750 */
  goto L_10844750;
L_1084473b:;
  /* 1084473b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084473e mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 10844744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844746 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1084474a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1084474d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10844750:;
  /* 10844750 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844754 je 0x1084477b */
  if (C.zf) goto L_1084477b;
  /* 10844756 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10844759 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084475c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084475f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10844763 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10844766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844769 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1084476b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1084476d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10844770 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844773 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844776 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10844779 jmp 0x1084471f */
  goto L_1084471f;
L_1084477b:;
  /* 1084477b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084477f jne 0x10844788 */
  if (!C.zf) goto L_10844788;
  /* 10844781 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10844784 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10844786 jmp 0x1084478b */
  goto L_1084478b;
L_10844788:;
  /* 10844788 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1084478b:;
  /* 1084478b mov esp, ebp */
  ESP = (EBP);
  /* 1084478d pop ebp */
  EBP = (pop32());
  /* 1084478e ret  */
  ESPCHK(0x10844690u, _esp0);
  ESP += 4; return;
}

/* FUN_10014790 @ 0x10844790 (17 bytes, 8 insns) */
void f_10844790(void) {
  FTRACE(0x10844790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844790 push ebp */
  push32((uint32_t)(EBP));
  /* 10844791 mov ebp, esp */
  EBP = (ESP);
  /* 10844793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844796 push eax */
  push32((uint32_t)(EAX));
  /* 10844797 call 0x10844690 */
  push32(0x1084479cu); f_10844690();
  /* 1084479c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084479f pop ebp */
  EBP = (pop32());
  /* 108447a0 ret  */
  ESPCHK(0x10844790u, _esp0);
  ESP += 4; return;
}

/* FUN_100147b0 @ 0x108447b0 (297 bytes, 106 insns) */
void f_108447b0(void) {
  FTRACE(0x108447b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108447b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108447b1 mov ebp, esp */
  EBP = (ESP);
  /* 108447b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108447b6 push esi */
  push32((uint32_t)(ESI));
L_108447b7:;
  /* 108447b7 cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108447be jle 0x108447d7 */
  if ((C.zf||C.sf!=C.of)) goto L_108447d7;
  /* 108447c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 108447c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108447c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108447c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108447c9 push ecx */
  push32((uint32_t)(ECX));
  /* 108447ca call 0x1083bdf0 */
  push32(0x108447cfu); f_1083bdf0();
  /* 108447cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108447d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108447d5 jmp 0x108447f0 */
  goto L_108447f0;
L_108447d7:;
  /* 108447d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108447da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108447dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108447de mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 108447e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108447e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108447ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 108447ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108447f0:;
  /* 108447f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108447f4 je 0x10844801 */
  if (C.zf) goto L_10844801;
  /* 108447f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108447f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108447fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108447ff jmp 0x108447b7 */
  goto L_108447b7;
L_10844801:;
  /* 10844801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844804 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844806 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10844808 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1084480b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084480e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844811 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10844814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844817 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1084481a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084481e je 0x10844826 */
  if (C.zf) goto L_10844826;
  /* 10844820 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844824 jne 0x10844839 */
  if (!C.zf) goto L_10844839;
L_10844826:;
  /* 10844826 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084482b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1084482d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10844830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844833 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844836 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10844839:;
  /* 10844839 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10844840 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10844847:;
  /* 10844847 cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084484e jle 0x10844863 */
  if ((C.zf||C.sf!=C.of)) goto L_10844863;
  /* 10844850 push 4 */
  push32((uint32_t)(0x4u));
  /* 10844852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844855 push edx */
  push32((uint32_t)(EDX));
  /* 10844856 call 0x1083bdf0 */
  push32(0x1084485bu); f_1083bdf0();
  /* 1084485b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084485e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10844861 jmp 0x10844878 */
  goto L_10844878;
L_10844863:;
  /* 10844863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844866 mov ecx, dword ptr [0x1085fc98] */
  ECX = (r32((uint32_t)(0x1085fc98)));
  /* 1084486c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1084486e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10844872 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10844875 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10844878:;
  /* 10844878 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084487c je 0x108448b9 */
  if (C.zf) goto L_108448b9;
  /* 1084487e push 0 */
  push32((uint32_t)(0x0u));
  /* 10844880 push 0xa */
  push32((uint32_t)(0xau));
  /* 10844882 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10844885 push eax */
  push32((uint32_t)(EAX));
  /* 10844886 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844889 push ecx */
  push32((uint32_t)(ECX));
  /* 1084488a call 0x10845750 */
  push32(0x1084488fu); f_10845750();
  /* 1084488f mov ecx, eax */
  ECX = (EAX);
  /* 10844891 mov esi, edx */
  ESI = (EDX);
  /* 10844893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844896 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10844899 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1084489a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084489c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1084489e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108448a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 108448a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108448a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108448a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108448ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108448ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108448b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108448b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108448b7 jmp 0x10844847 */
  goto L_10844847;
L_108448b9:;
  /* 108448b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108448bd jne 0x108448ce */
  if (!C.zf) goto L_108448ce;
  /* 108448bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108448c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108448c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108448c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108448ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108448cc jmp 0x108448d4 */
  goto L_108448d4;
L_108448ce:;
  /* 108448ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108448d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_108448d4:;
  /* 108448d4 pop esi */
  ESI = (pop32());
  /* 108448d5 mov esp, ebp */
  ESP = (EBP);
  /* 108448d7 pop ebp */
  EBP = (pop32());
  /* 108448d8 ret  */
  ESPCHK(0x108447b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148e0 @ 0x108448e0 (61 bytes, 18 insns) */
void f_108448e0(void) {
  FTRACE(0x108448e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108448e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108448e1 mov ebp, esp */
  EBP = (ESP);
  /* 108448e3 cmp dword ptr [0x108618e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108448ea jne 0x1084491b */
  if (!C.zf) goto L_1084491b;
  /* 108448ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 108448ee call 0x108397e0 */
  push32(0x108448f3u); f_108397e0();
  /* 108448f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108448f6 cmp dword ptr [0x108618e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108448fd jne 0x10844911 */
  if (!C.zf) goto L_10844911;
  /* 108448ff call 0x10844940 */
  push32(0x10844904u); f_10844940();
  /* 10844904 mov eax, dword ptr [0x108618e0] */
  EAX = (r32((uint32_t)(0x108618e0)));
  /* 10844909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084490c mov dword ptr [0x108618e0], eax */
  w32((uint32_t)(0x108618e0), (EAX));
L_10844911:;
  /* 10844911 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10844913 call 0x10839880 */
  push32(0x10844918u); f_10839880();
  /* 10844918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1084491b:;
  /* 1084491b pop ebp */
  EBP = (pop32());
  /* 1084491c ret  */
  ESPCHK(0x108448e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014920 @ 0x10844920 (30 bytes, 11 insns) */
void f_10844920(void) {
  FTRACE(0x10844920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844920 push ebp */
  push32((uint32_t)(EBP));
  /* 10844921 mov ebp, esp */
  EBP = (ESP);
  /* 10844923 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10844925 call 0x108397e0 */
  push32(0x1084492au); f_108397e0();
  /* 1084492a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084492d call 0x10844940 */
  push32(0x10844932u); f_10844940();
  /* 10844932 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10844934 call 0x10839880 */
  push32(0x10844939u); f_10839880();
  /* 10844939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084493c pop ebp */
  EBP = (pop32());
  /* 1084493d ret  */
  ESPCHK(0x10844920u, _esp0);
  ESP += 4; return;
}

/* FUN_10014940 @ 0x10844940 (939 bytes, 266 insns) */
void f_10844940(void) {
  FTRACE(0x10844940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844940 push ebp */
  push32((uint32_t)(EBP));
  /* 10844941 mov ebp, esp */
  EBP = (ESP);
  /* 10844943 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10844946 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1084494d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1084494f call 0x108397e0 */
  push32(0x10844954u); f_108397e0();
  /* 10844954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844957 mov dword ptr [0x10861828], 0 */
  w32((uint32_t)(0x10861828), (0x0u));
  /* 10844961 mov dword ptr [0x10860e38], 0xffffffff */
  w32((uint32_t)(0x10860e38), (0xffffffffu));
  /* 1084496b mov eax, dword ptr [0x10860e38] */
  EAX = (r32((uint32_t)(0x10860e38)));
  /* 10844970 mov dword ptr [0x10860e28], eax */
  w32((uint32_t)(0x10860e28), (EAX));
  /* 10844975 push 0x1085db78 */
  push32((uint32_t)(0x1085db78u));
  /* 1084497a call 0x108457c0 */
  push32(0x1084497fu); f_108457c0();
  /* 1084497f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844982 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10844985 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844989 jne 0x10844ac3 */
  if (!C.zf) goto L_10844ac3;
  /* 1084498f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10844991 call 0x10839880 */
  push32(0x10844996u); f_10839880();
  /* 10844996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844999 push 0x10861830 */
  push32((uint32_t)(0x10861830u));
  /* 1084499e call dword ptr [0x108642e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642e0))), 0x108449a4u);
  /* 108449a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108449a7 je 0x10844abe */
  if (C.zf) goto L_10844abe;
  /* 108449ad mov dword ptr [0x10861828], 1 */
  w32((uint32_t)(0x10861828), (0x1u));
  /* 108449b7 mov ecx, dword ptr [0x10861830] */
  ECX = (r32((uint32_t)(0x10861830)));
  /* 108449bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108449c0 mov dword ptr [0x10860d90], ecx */
  w32((uint32_t)(0x10860d90), (ECX));
  /* 108449c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108449c8 mov dx, word ptr [0x10861876] */
  DX = (r16((uint32_t)(0x10861876)));
  /* 108449cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108449d1 je 0x108449e9 */
  if (C.zf) goto L_108449e9;
  /* 108449d3 mov eax, dword ptr [0x10861884] */
  EAX = (r32((uint32_t)(0x10861884)));
  /* 108449d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108449db mov ecx, dword ptr [0x10860d90] */
  ECX = (r32((uint32_t)(0x10860d90)));
  /* 108449e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108449e3 mov dword ptr [0x10860d90], ecx */
  w32((uint32_t)(0x10860d90), (ECX));
L_108449e9:;
  /* 108449e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108449eb mov dx, word ptr [0x108618ca] */
  DX = (r16((uint32_t)(0x108618ca)));
  /* 108449f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108449f4 je 0x10844a1e */
  if (C.zf) goto L_10844a1e;
  /* 108449f6 cmp dword ptr [0x108618d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108449fd je 0x10844a1e */
  if (C.zf) goto L_10844a1e;
  /* 108449ff mov dword ptr [0x10860d94], 1 */
  w32((uint32_t)(0x10860d94), (0x1u));
  /* 10844a09 mov eax, dword ptr [0x108618d8] */
  EAX = (r32((uint32_t)(0x108618d8)));
  /* 10844a0e sub eax, dword ptr [0x10861884] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10861884))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10844a14 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844a17 mov dword ptr [0x10860d98], eax */
  w32((uint32_t)(0x10860d98), (EAX));
  /* 10844a1c jmp 0x10844a32 */
  goto L_10844a32;
L_10844a1e:;
  /* 10844a1e mov dword ptr [0x10860d94], 0 */
  w32((uint32_t)(0x10860d94), (0x0u));
  /* 10844a28 mov dword ptr [0x10860d98], 0 */
  w32((uint32_t)(0x10860d98), (0x0u));
L_10844a32:;
  /* 10844a32 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10844a35 push ecx */
  push32((uint32_t)(ECX));
  /* 10844a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844a38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10844a3a mov edx, dword ptr [0x10860e1c] */
  EDX = (r32((uint32_t)(0x10860e1c)));
  /* 10844a40 push edx */
  push32((uint32_t)(EDX));
  /* 10844a41 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10844a43 push 0x10861834 */
  push32((uint32_t)(0x10861834u));
  /* 10844a48 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10844a4d mov eax, dword ptr [0x10861798] */
  EAX = (r32((uint32_t)(0x10861798)));
  /* 10844a52 push eax */
  push32((uint32_t)(EAX));
  /* 10844a53 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x10844a59u);
  /* 10844a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10844a5b je 0x10844a6f */
  if (C.zf) goto L_10844a6f;
  /* 10844a5d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844a61 jne 0x10844a6f */
  if (!C.zf) goto L_10844a6f;
  /* 10844a63 mov ecx, dword ptr [0x10860e1c] */
  ECX = (r32((uint32_t)(0x10860e1c)));
  /* 10844a69 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10844a6d jmp 0x10844a78 */
  goto L_10844a78;
L_10844a6f:;
  /* 10844a6f mov edx, dword ptr [0x10860e1c] */
  EDX = (r32((uint32_t)(0x10860e1c)));
  /* 10844a75 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10844a78:;
  /* 10844a78 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10844a7b push eax */
  push32((uint32_t)(EAX));
  /* 10844a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10844a7e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10844a80 mov ecx, dword ptr [0x10860e20] */
  ECX = (r32((uint32_t)(0x10860e20)));
  /* 10844a86 push ecx */
  push32((uint32_t)(ECX));
  /* 10844a87 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10844a89 push 0x10861888 */
  push32((uint32_t)(0x10861888u));
  /* 10844a8e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10844a93 mov edx, dword ptr [0x10861798] */
  EDX = (r32((uint32_t)(0x10861798)));
  /* 10844a99 push edx */
  push32((uint32_t)(EDX));
  /* 10844a9a call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x10844aa0u);
  /* 10844aa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10844aa2 je 0x10844ab5 */
  if (C.zf) goto L_10844ab5;
  /* 10844aa4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844aa8 jne 0x10844ab5 */
  if (!C.zf) goto L_10844ab5;
  /* 10844aaa mov eax, dword ptr [0x10860e20] */
  EAX = (r32((uint32_t)(0x10860e20)));
  /* 10844aaf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10844ab3 jmp 0x10844abe */
  goto L_10844abe;
L_10844ab5:;
  /* 10844ab5 mov ecx, dword ptr [0x10860e20] */
  ECX = (r32((uint32_t)(0x10860e20)));
  /* 10844abb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10844abe:;
  /* 10844abe jmp 0x10844ce7 */
  goto L_10844ce7;
L_10844ac3:;
  /* 10844ac3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844ac6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10844ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10844acb je 0x10844aed */
  if (C.zf) goto L_10844aed;
  /* 10844acd cmp dword ptr [0x108618dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844ad4 je 0x10844afc */
  if (C.zf) goto L_10844afc;
  /* 10844ad6 mov ecx, dword ptr [0x108618dc] */
  ECX = (r32((uint32_t)(0x108618dc)));
  /* 10844adc push ecx */
  push32((uint32_t)(ECX));
  /* 10844add mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844ae0 push edx */
  push32((uint32_t)(EDX));
  /* 10844ae1 call 0x10841a70 */
  push32(0x10844ae6u); f_10841a70();
  /* 10844ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10844aeb jne 0x10844afc */
  if (!C.zf) goto L_10844afc;
L_10844aed:;
  /* 10844aed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10844aef call 0x10839880 */
  push32(0x10844af4u); f_10839880();
  /* 10844af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844af7 jmp 0x10844ce7 */
  goto L_10844ce7;
L_10844afc:;
  /* 10844afc push 2 */
  push32((uint32_t)(0x2u));
  /* 10844afe mov eax, dword ptr [0x108618dc] */
  EAX = (r32((uint32_t)(0x108618dc)));
  /* 10844b03 push eax */
  push32((uint32_t)(EAX));
  /* 10844b04 call 0x10836870 */
  push32(0x10844b09u); f_10836870();
  /* 10844b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b0c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10844b11 push 0x1085db70 */
  push32((uint32_t)(0x1085db70u));
  /* 10844b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10844b18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844b1b push ecx */
  push32((uint32_t)(ECX));
  /* 10844b1c call 0x10838c10 */
  push32(0x10844b21u); f_10838c10();
  /* 10844b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b27 push eax */
  push32((uint32_t)(EAX));
  /* 10844b28 call 0x10835de0 */
  push32(0x10844b2du); f_10835de0();
  /* 10844b2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b30 mov dword ptr [0x108618dc], eax */
  w32((uint32_t)(0x108618dc), (EAX));
  /* 10844b35 cmp dword ptr [0x108618dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844b3c jne 0x10844b4d */
  if (!C.zf) goto L_10844b4d;
  /* 10844b3e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10844b40 call 0x10839880 */
  push32(0x10844b45u); f_10839880();
  /* 10844b45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b48 jmp 0x10844ce7 */
  goto L_10844ce7;
L_10844b4d:;
  /* 10844b4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844b50 push edx */
  push32((uint32_t)(EDX));
  /* 10844b51 mov eax, dword ptr [0x108618dc] */
  EAX = (r32((uint32_t)(0x108618dc)));
  /* 10844b56 push eax */
  push32((uint32_t)(EAX));
  /* 10844b57 call 0x10838d90 */
  push32(0x10844b5cu); f_10838d90();
  /* 10844b5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10844b61 call 0x10839880 */
  push32(0x10844b66u); f_10839880();
  /* 10844b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b69 push 3 */
  push32((uint32_t)(0x3u));
  /* 10844b6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844b6e push ecx */
  push32((uint32_t)(ECX));
  /* 10844b6f mov edx, dword ptr [0x10860e1c] */
  EDX = (r32((uint32_t)(0x10860e1c)));
  /* 10844b75 push edx */
  push32((uint32_t)(EDX));
  /* 10844b76 call 0x10839600 */
  push32(0x10844b7bu); f_10839600();
  /* 10844b7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b7e mov eax, dword ptr [0x10860e1c] */
  EAX = (r32((uint32_t)(0x10860e1c)));
  /* 10844b83 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10844b87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844b8a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844b8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10844b90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844b93 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10844b96 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844b99 jne 0x10844bad */
  if (!C.zf) goto L_10844bad;
  /* 10844b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844ba1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10844ba4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844ba7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844baa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10844bad:;
  /* 10844bad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844bb0 push eax */
  push32((uint32_t)(EAX));
  /* 10844bb1 call 0x10844690 */
  push32(0x10844bb6u); f_10844690();
  /* 10844bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844bb9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844bbf mov dword ptr [0x10860d90], eax */
  w32((uint32_t)(0x10860d90), (EAX));
L_10844bc4:;
  /* 10844bc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844bc7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10844bca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844bcd je 0x10844be5 */
  if (C.zf) goto L_10844be5;
  /* 10844bcf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844bd2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10844bd5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844bd8 jl 0x10844bf0 */
  if ((C.sf!=C.of)) goto L_10844bf0;
  /* 10844bda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844bdd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10844be0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844be3 jg 0x10844bf0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10844bf0;
L_10844be5:;
  /* 10844be5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844be8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844beb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10844bee jmp 0x10844bc4 */
  goto L_10844bc4;
L_10844bf0:;
  /* 10844bf0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844bf3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10844bf6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844bf9 jne 0x10844c95 */
  if (!C.zf) goto L_10844c95;
  /* 10844bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10844c08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c0b push edx */
  push32((uint32_t)(EDX));
  /* 10844c0c call 0x10844690 */
  push32(0x10844c11u); f_10844690();
  /* 10844c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c14 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844c17 mov ecx, dword ptr [0x10860d90] */
  ECX = (r32((uint32_t)(0x10860d90)));
  /* 10844c1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c1f mov dword ptr [0x10860d90], ecx */
  w32((uint32_t)(0x10860d90), (ECX));
L_10844c25:;
  /* 10844c25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c28 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10844c2b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844c2e jl 0x10844c46 */
  if ((C.sf!=C.of)) goto L_10844c46;
  /* 10844c30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c33 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10844c36 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844c39 jg 0x10844c46 */
  if ((!C.zf&&C.sf==C.of)) goto L_10844c46;
  /* 10844c3b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c41 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10844c44 jmp 0x10844c25 */
  goto L_10844c25;
L_10844c46:;
  /* 10844c46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c49 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10844c4c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844c4f jne 0x10844c95 */
  if (!C.zf) goto L_10844c95;
  /* 10844c51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10844c5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c5d push ecx */
  push32((uint32_t)(ECX));
  /* 10844c5e call 0x10844690 */
  push32(0x10844c63u); f_10844690();
  /* 10844c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c66 mov edx, dword ptr [0x10860d90] */
  EDX = (r32((uint32_t)(0x10860d90)));
  /* 10844c6c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c6e mov dword ptr [0x10860d90], edx */
  w32((uint32_t)(0x10860d90), (EDX));
L_10844c74:;
  /* 10844c74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10844c7a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844c7d jl 0x10844c95 */
  if ((C.sf!=C.of)) goto L_10844c95;
  /* 10844c7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10844c85 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844c88 jg 0x10844c95 */
  if ((!C.zf&&C.sf==C.of)) goto L_10844c95;
  /* 10844c8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844c8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844c90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10844c93 jmp 0x10844c74 */
  goto L_10844c74;
L_10844c95:;
  /* 10844c95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844c99 je 0x10844ca9 */
  if (C.zf) goto L_10844ca9;
  /* 10844c9b mov edx, dword ptr [0x10860d90] */
  EDX = (r32((uint32_t)(0x10860d90)));
  /* 10844ca1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10844ca3 mov dword ptr [0x10860d90], edx */
  w32((uint32_t)(0x10860d90), (EDX));
L_10844ca9:;
  /* 10844ca9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844cac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10844caf mov dword ptr [0x10860d94], ecx */
  w32((uint32_t)(0x10860d94), (ECX));
  /* 10844cb5 cmp dword ptr [0x10860d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10860d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844cbc je 0x10844cde */
  if (C.zf) goto L_10844cde;
  /* 10844cbe push 3 */
  push32((uint32_t)(0x3u));
  /* 10844cc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10844cc3 push edx */
  push32((uint32_t)(EDX));
  /* 10844cc4 mov eax, dword ptr [0x10860e20] */
  EAX = (r32((uint32_t)(0x10860e20)));
  /* 10844cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10844cca call 0x10839600 */
  push32(0x10844ccfu); f_10839600();
  /* 10844ccf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844cd2 mov ecx, dword ptr [0x10860e20] */
  ECX = (r32((uint32_t)(0x10860e20)));
  /* 10844cd8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10844cdc jmp 0x10844ce7 */
  goto L_10844ce7;
L_10844cde:;
  /* 10844cde mov edx, dword ptr [0x10860e20] */
  EDX = (r32((uint32_t)(0x10860e20)));
  /* 10844ce4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10844ce7:;
  /* 10844ce7 mov esp, ebp */
  ESP = (EBP);
  /* 10844ce9 pop ebp */
  EBP = (pop32());
  /* 10844cea ret  */
  ESPCHK(0x10844940u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cf0 @ 0x10844cf0 (46 bytes, 18 insns) */
void f_10844cf0(void) {
  FTRACE(0x10844cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10844cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10844cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10844cf4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10844cf6 call 0x108397e0 */
  push32(0x10844cfbu); f_108397e0();
  /* 10844cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844cfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844d01 push eax */
  push32((uint32_t)(EAX));
  /* 10844d02 call 0x10844d20 */
  push32(0x10844d07u); f_10844d20();
  /* 10844d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844d0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10844d0d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10844d0f call 0x10839880 */
  push32(0x10844d14u); f_10839880();
  /* 10844d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844d1a mov esp, ebp */
  ESP = (EBP);
  /* 10844d1c pop ebp */
  EBP = (pop32());
  /* 10844d1d ret  */
  ESPCHK(0x10844cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d20 @ 0x10844d20 (762 bytes, 246 insns) */
void f_10844d20(void) {
  FTRACE(0x10844d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10844d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10844d21 mov ebp, esp */
  EBP = (ESP);
  /* 10844d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10844d24 cmp dword ptr [0x10860d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10860d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844d2b jne 0x10844d34 */
  if (!C.zf) goto L_10844d34;
  /* 10844d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844d2f jmp 0x10845016 */
  goto L_10845016;
L_10844d34:;
  /* 10844d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844d37 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10844d3a cmp ecx, dword ptr [0x10860e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10860e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844d40 jne 0x10844d54 */
  if (!C.zf) goto L_10844d54;
  /* 10844d42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844d45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10844d48 cmp eax, dword ptr [0x10860e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10860e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844d4e je 0x10844f1b */
  if (C.zf) goto L_10844f1b;
L_10844d54:;
  /* 10844d54 cmp dword ptr [0x10861828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844d5b je 0x10844ed5 */
  if (C.zf) goto L_10844ed5;
  /* 10844d61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844d63 mov cx, word ptr [0x108618c8] */
  CX = (r16((uint32_t)(0x108618c8)));
  /* 10844d6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10844d6c jne 0x10844dc9 */
  if (!C.zf) goto L_10844dc9;
  /* 10844d6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844d70 mov dx, word ptr [0x108618d6] */
  DX = (r16((uint32_t)(0x108618d6)));
  /* 10844d77 push edx */
  push32((uint32_t)(EDX));
  /* 10844d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844d7a mov ax, word ptr [0x108618d4] */
  AX = (r16((uint32_t)(0x108618d4)));
  /* 10844d80 push eax */
  push32((uint32_t)(EAX));
  /* 10844d81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844d83 mov cx, word ptr [0x108618d2] */
  CX = (r16((uint32_t)(0x108618d2)));
  /* 10844d8a push ecx */
  push32((uint32_t)(ECX));
  /* 10844d8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844d8d mov dx, word ptr [0x108618d0] */
  DX = (r16((uint32_t)(0x108618d0)));
  /* 10844d94 push edx */
  push32((uint32_t)(EDX));
  /* 10844d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844d99 mov ax, word ptr [0x108618cc] */
  AX = (r16((uint32_t)(0x108618cc)));
  /* 10844d9f push eax */
  push32((uint32_t)(EAX));
  /* 10844da0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844da2 mov cx, word ptr [0x108618ce] */
  CX = (r16((uint32_t)(0x108618ce)));
  /* 10844da9 push ecx */
  push32((uint32_t)(ECX));
  /* 10844daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844dac mov dx, word ptr [0x108618ca] */
  DX = (r16((uint32_t)(0x108618ca)));
  /* 10844db3 push edx */
  push32((uint32_t)(EDX));
  /* 10844db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844db7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10844dba push ecx */
  push32((uint32_t)(ECX));
  /* 10844dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 10844dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10844dbf call 0x10845020 */
  push32(0x10844dc4u); f_10845020();
  /* 10844dc4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844dc7 jmp 0x10844e1a */
  goto L_10844e1a;
L_10844dc9:;
  /* 10844dc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844dcb mov dx, word ptr [0x108618d6] */
  DX = (r16((uint32_t)(0x108618d6)));
  /* 10844dd2 push edx */
  push32((uint32_t)(EDX));
  /* 10844dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844dd5 mov ax, word ptr [0x108618d4] */
  AX = (r16((uint32_t)(0x108618d4)));
  /* 10844ddb push eax */
  push32((uint32_t)(EAX));
  /* 10844ddc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844dde mov cx, word ptr [0x108618d2] */
  CX = (r16((uint32_t)(0x108618d2)));
  /* 10844de5 push ecx */
  push32((uint32_t)(ECX));
  /* 10844de6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844de8 mov dx, word ptr [0x108618d0] */
  DX = (r16((uint32_t)(0x108618d0)));
  /* 10844def push edx */
  push32((uint32_t)(EDX));
  /* 10844df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844df2 mov ax, word ptr [0x108618ce] */
  AX = (r16((uint32_t)(0x108618ce)));
  /* 10844df8 push eax */
  push32((uint32_t)(EAX));
  /* 10844df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10844dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844dff mov cx, word ptr [0x108618ca] */
  CX = (r16((uint32_t)(0x108618ca)));
  /* 10844e06 push ecx */
  push32((uint32_t)(ECX));
  /* 10844e07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844e0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10844e0d push eax */
  push32((uint32_t)(EAX));
  /* 10844e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10844e10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10844e12 call 0x10845020 */
  push32(0x10844e17u); f_10845020();
  /* 10844e17 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10844e1a:;
  /* 10844e1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844e1c mov cx, word ptr [0x10861874] */
  CX = (r16((uint32_t)(0x10861874)));
  /* 10844e23 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10844e25 jne 0x10844e82 */
  if (!C.zf) goto L_10844e82;
  /* 10844e27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844e29 mov dx, word ptr [0x10861882] */
  DX = (r16((uint32_t)(0x10861882)));
  /* 10844e30 push edx */
  push32((uint32_t)(EDX));
  /* 10844e31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844e33 mov ax, word ptr [0x10861880] */
  AX = (r16((uint32_t)(0x10861880)));
  /* 10844e39 push eax */
  push32((uint32_t)(EAX));
  /* 10844e3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844e3c mov cx, word ptr [0x1086187e] */
  CX = (r16((uint32_t)(0x1086187e)));
  /* 10844e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10844e44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844e46 mov dx, word ptr [0x1086187c] */
  DX = (r16((uint32_t)(0x1086187c)));
  /* 10844e4d push edx */
  push32((uint32_t)(EDX));
  /* 10844e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10844e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844e52 mov ax, word ptr [0x10861878] */
  AX = (r16((uint32_t)(0x10861878)));
  /* 10844e58 push eax */
  push32((uint32_t)(EAX));
  /* 10844e59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844e5b mov cx, word ptr [0x1086187a] */
  CX = (r16((uint32_t)(0x1086187a)));
  /* 10844e62 push ecx */
  push32((uint32_t)(ECX));
  /* 10844e63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844e65 mov dx, word ptr [0x10861876] */
  DX = (r16((uint32_t)(0x10861876)));
  /* 10844e6c push edx */
  push32((uint32_t)(EDX));
  /* 10844e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844e70 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10844e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10844e74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10844e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844e78 call 0x10845020 */
  push32(0x10844e7du); f_10845020();
  /* 10844e7d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844e80 jmp 0x10844ed3 */
  goto L_10844ed3;
L_10844e82:;
  /* 10844e82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844e84 mov dx, word ptr [0x10861882] */
  DX = (r16((uint32_t)(0x10861882)));
  /* 10844e8b push edx */
  push32((uint32_t)(EDX));
  /* 10844e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844e8e mov ax, word ptr [0x10861880] */
  AX = (r16((uint32_t)(0x10861880)));
  /* 10844e94 push eax */
  push32((uint32_t)(EAX));
  /* 10844e95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844e97 mov cx, word ptr [0x1086187e] */
  CX = (r16((uint32_t)(0x1086187e)));
  /* 10844e9e push ecx */
  push32((uint32_t)(ECX));
  /* 10844e9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10844ea1 mov dx, word ptr [0x1086187c] */
  DX = (r16((uint32_t)(0x1086187c)));
  /* 10844ea8 push edx */
  push32((uint32_t)(EDX));
  /* 10844ea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844eab mov ax, word ptr [0x1086187a] */
  AX = (r16((uint32_t)(0x1086187a)));
  /* 10844eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10844eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844eb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10844eb8 mov cx, word ptr [0x10861876] */
  CX = (r16((uint32_t)(0x10861876)));
  /* 10844ebf push ecx */
  push32((uint32_t)(ECX));
  /* 10844ec0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844ec3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10844ec6 push eax */
  push32((uint32_t)(EAX));
  /* 10844ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844ecb call 0x10845020 */
  push32(0x10844ed0u); f_10845020();
  /* 10844ed0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10844ed3:;
  /* 10844ed3 jmp 0x10844f1b */
  goto L_10844f1b;
L_10844ed5:;
  /* 10844ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844edb push 2 */
  push32((uint32_t)(0x2u));
  /* 10844edd push 0 */
  push32((uint32_t)(0x0u));
  /* 10844edf push 0 */
  push32((uint32_t)(0x0u));
  /* 10844ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10844ee3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10844ee5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844ee8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10844eeb push edx */
  push32((uint32_t)(EDX));
  /* 10844eec push 1 */
  push32((uint32_t)(0x1u));
  /* 10844eee push 1 */
  push32((uint32_t)(0x1u));
  /* 10844ef0 call 0x10845020 */
  push32(0x10844ef5u); f_10845020();
  /* 10844ef5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10844ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10844efc push 0 */
  push32((uint32_t)(0x0u));
  /* 10844efe push 2 */
  push32((uint32_t)(0x2u));
  /* 10844f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844f04 push 5 */
  push32((uint32_t)(0x5u));
  /* 10844f06 push 0xa */
  push32((uint32_t)(0xau));
  /* 10844f08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f0b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10844f0e push ecx */
  push32((uint32_t)(ECX));
  /* 10844f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10844f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10844f13 call 0x10845020 */
  push32(0x10844f18u); f_10845020();
  /* 10844f18 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10844f1b:;
  /* 10844f1b mov edx, dword ptr [0x10860e2c] */
  EDX = (r32((uint32_t)(0x10860e2c)));
  /* 10844f21 cmp edx, dword ptr [0x10860e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10860e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f27 jge 0x10844f74 */
  if ((C.sf==C.of)) goto L_10844f74;
  /* 10844f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f2c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10844f2f cmp ecx, dword ptr [0x10860e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10860e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f35 jl 0x10844f45 */
  if ((C.sf!=C.of)) goto L_10844f45;
  /* 10844f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f3a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10844f3d cmp eax, dword ptr [0x10860e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10860e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f43 jle 0x10844f4c */
  if ((C.zf||C.sf!=C.of)) goto L_10844f4c;
L_10844f45:;
  /* 10844f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844f47 jmp 0x10845016 */
  goto L_10845016;
L_10844f4c:;
  /* 10844f4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f4f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10844f52 cmp edx, dword ptr [0x10860e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10860e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f58 jle 0x10844f72 */
  if ((C.zf||C.sf!=C.of)) goto L_10844f72;
  /* 10844f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f5d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10844f60 cmp ecx, dword ptr [0x10860e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10860e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f66 jge 0x10844f72 */
  if ((C.sf==C.of)) goto L_10844f72;
  /* 10844f68 mov eax, 1 */
  EAX = (0x1u);
  /* 10844f6d jmp 0x10845016 */
  goto L_10845016;
L_10844f72:;
  /* 10844f72 jmp 0x10844fb7 */
  goto L_10844fb7;
L_10844f74:;
  /* 10844f74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f77 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10844f7a cmp eax, dword ptr [0x10860e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10860e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f80 jl 0x10844f90 */
  if ((C.sf!=C.of)) goto L_10844f90;
  /* 10844f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f85 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10844f88 cmp edx, dword ptr [0x10860e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10860e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844f8e jle 0x10844f97 */
  if ((C.zf||C.sf!=C.of)) goto L_10844f97;
L_10844f90:;
  /* 10844f90 mov eax, 1 */
  EAX = (0x1u);
  /* 10844f95 jmp 0x10845016 */
  goto L_10845016;
L_10844f97:;
  /* 10844f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844f9a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10844f9d cmp ecx, dword ptr [0x10860e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10860e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844fa3 jle 0x10844fb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10844fb7;
  /* 10844fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844fa8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10844fab cmp eax, dword ptr [0x10860e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10860e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844fb1 jge 0x10844fb7 */
  if ((C.sf==C.of)) goto L_10844fb7;
  /* 10844fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10844fb5 jmp 0x10845016 */
  goto L_10845016;
L_10844fb7:;
  /* 10844fb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844fba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10844fbd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844fc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10844fc5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844fca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10844fcd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844fd3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10844fd5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10844fdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10844fde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10844fe1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10844fe4 cmp edx, dword ptr [0x10860e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10860e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844fea jne 0x10845002 */
  if (!C.zf) goto L_10845002;
  /* 10844fec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10844fef cmp eax, dword ptr [0x10860e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10860e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10844ff5 jl 0x10844ffe */
  if ((C.sf!=C.of)) goto L_10844ffe;
  /* 10844ff7 mov eax, 1 */
  EAX = (0x1u);
  /* 10844ffc jmp 0x10845016 */
  goto L_10845016;
L_10844ffe:;
  /* 10844ffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845000 jmp 0x10845016 */
  goto L_10845016;
L_10845002:;
  /* 10845002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845005 cmp ecx, dword ptr [0x10860e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10860e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084500b jge 0x10845014 */
  if ((C.sf==C.of)) goto L_10845014;
  /* 1084500d mov eax, 1 */
  EAX = (0x1u);
  /* 10845012 jmp 0x10845016 */
  goto L_10845016;
L_10845014:;
  /* 10845014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10845016:;
  /* 10845016 mov esp, ebp */
  ESP = (EBP);
  /* 10845018 pop ebp */
  EBP = (pop32());
  /* 10845019 ret  */
  ESPCHK(0x10844d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015020 @ 0x10845020 (504 bytes, 145 insns) */
void f_10845020(void) {
  FTRACE(0x10845020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845020 push ebp */
  push32((uint32_t)(EBP));
  /* 10845021 mov ebp, esp */
  EBP = (ESP);
  /* 10845023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845026 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084502a jne 0x108450fc */
  if (!C.zf) goto L_108450fc;
  /* 10845030 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845033 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10845036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845038 jne 0x10845049 */
  if (!C.zf) goto L_10845049;
  /* 1084503a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084503d mov edx, dword ptr [ecx*4 + 0x10860e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10860e4c)));
  /* 10845044 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10845047 jmp 0x10845056 */
  goto L_10845056;
L_10845049:;
  /* 10845049 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084504c mov ecx, dword ptr [eax*4 + 0x10860e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10860e80)));
  /* 10845053 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10845056:;
  /* 10845056 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845059 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084505c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1084505f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845062 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845065 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084506b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084506e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845070 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845073 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845076 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10845079 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1084507d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1084507e mov ecx, 7 */
  ECX = (0x7u);
  /* 10845083 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10845085 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10845088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084508b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084508e jge 0x108450a9 */
  if ((C.sf==C.of)) goto L_108450a9;
  /* 10845090 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10845093 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845096 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845099 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084509c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084509f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108450a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108450a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108450a7 jmp 0x108450bd */
  goto L_108450bd;
L_108450a9:;
  /* 108450a9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108450ac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108450af mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108450b2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108450b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108450b8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108450ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108450bd:;
  /* 108450bd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108450c1 jne 0x108450fa */
  if (!C.zf) goto L_108450fa;
  /* 108450c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108450c6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 108450c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108450cb jne 0x108450dc */
  if (!C.zf) goto L_108450dc;
  /* 108450cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108450d0 mov eax, dword ptr [edx*4 + 0x10860e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10860e50)));
  /* 108450d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108450da jmp 0x108450e9 */
  goto L_108450e9;
L_108450dc:;
  /* 108450dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108450df mov edx, dword ptr [ecx*4 + 0x10860e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10860e84)));
  /* 108450e6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108450e9:;
  /* 108450e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108450ec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108450ef jle 0x108450fa */
  if ((C.zf||C.sf!=C.of)) goto L_108450fa;
  /* 108450f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108450f4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108450f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108450fa:;
  /* 108450fa jmp 0x10845131 */
  goto L_10845131;
L_108450fc:;
  /* 108450fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108450ff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10845102 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845104 jne 0x10845115 */
  if (!C.zf) goto L_10845115;
  /* 10845106 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845109 mov ecx, dword ptr [eax*4 + 0x10860e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10860e4c)));
  /* 10845110 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10845113 jmp 0x10845122 */
  goto L_10845122;
L_10845115:;
  /* 10845115 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845118 mov eax, dword ptr [edx*4 + 0x10860e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10860e80)));
  /* 1084511f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10845122:;
  /* 10845122 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10845125 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10845128 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084512b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084512e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10845131:;
  /* 10845131 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845135 jne 0x10845171 */
  if (!C.zf) goto L_10845171;
  /* 10845137 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084513a mov dword ptr [0x10860e2c], eax */
  w32((uint32_t)(0x10860e2c), (EAX));
  /* 1084513f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10845142 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10845145 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10845148 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084514a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084514d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10845150 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845152 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10845158 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1084515b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084515d mov dword ptr [0x10860e30], ecx */
  w32((uint32_t)(0x10860e30), (ECX));
  /* 10845163 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845166 mov dword ptr [0x10860e28], edx */
  w32((uint32_t)(0x10860e28), (EDX));
  /* 1084516c jmp 0x10845214 */
  goto L_10845214;
L_10845171:;
  /* 10845171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845174 mov dword ptr [0x10860e3c], eax */
  w32((uint32_t)(0x10860e3c), (EAX));
  /* 10845179 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1084517c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1084517f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10845182 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845184 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10845187 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1084518a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084518c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10845192 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10845195 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845197 mov dword ptr [0x10860e40], ecx */
  w32((uint32_t)(0x10860e40), (ECX));
  /* 1084519d mov edx, dword ptr [0x10860d98] */
  EDX = (r32((uint32_t)(0x10860d98)));
  /* 108451a3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108451a9 mov eax, dword ptr [0x10860e40] */
  EAX = (r32((uint32_t)(0x10860e40)));
  /* 108451ae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108451b0 mov dword ptr [0x10860e40], eax */
  w32((uint32_t)(0x10860e40), (EAX));
  /* 108451b5 cmp dword ptr [0x10860e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10860e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108451bc jge 0x108451e1 */
  if ((C.sf==C.of)) goto L_108451e1;
  /* 108451be mov ecx, dword ptr [0x10860e40] */
  ECX = (r32((uint32_t)(0x10860e40)));
  /* 108451c4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108451ca mov dword ptr [0x10860e40], ecx */
  w32((uint32_t)(0x10860e40), (ECX));
  /* 108451d0 mov edx, dword ptr [0x10860e3c] */
  EDX = (r32((uint32_t)(0x10860e3c)));
  /* 108451d6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108451d9 mov dword ptr [0x10860e3c], edx */
  w32((uint32_t)(0x10860e3c), (EDX));
  /* 108451df jmp 0x1084520b */
  goto L_1084520b;
L_108451e1:;
  /* 108451e1 cmp dword ptr [0x10860e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10860e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108451eb jl 0x1084520b */
  if ((C.sf!=C.of)) goto L_1084520b;
  /* 108451ed mov eax, dword ptr [0x10860e40] */
  EAX = (r32((uint32_t)(0x10860e40)));
  /* 108451f2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108451f7 mov dword ptr [0x10860e40], eax */
  w32((uint32_t)(0x10860e40), (EAX));
  /* 108451fc mov ecx, dword ptr [0x10860e3c] */
  ECX = (r32((uint32_t)(0x10860e3c)));
  /* 10845202 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845205 mov dword ptr [0x10860e3c], ecx */
  w32((uint32_t)(0x10860e3c), (ECX));
L_1084520b:;
  /* 1084520b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1084520e mov dword ptr [0x10860e38], edx */
  w32((uint32_t)(0x10860e38), (EDX));
L_10845214:;
  /* 10845214 mov esp, ebp */
  ESP = (EBP);
  /* 10845216 pop ebp */
  EBP = (pop32());
  /* 10845217 ret  */
  ESPCHK(0x10845020u, _esp0);
  ESP += 4; return;
}

/* FUN_10015220 @ 0x10845220 (382 bytes, 135 insns) */
void f_10845220(void) {
  FTRACE(0x10845220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845220 push ebp */
  push32((uint32_t)(EBP));
  /* 10845221 mov ebp, esp */
  EBP = (ESP);
  /* 10845223 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845225 push 0x1085db80 */
  push32((uint32_t)(0x1085db80u));
  /* 1084522a push 0x1083eee8 */
  push32((uint32_t)(0x1083eee8u));
  /* 1084522f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10845235 push eax */
  push32((uint32_t)(EAX));
  /* 10845236 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1084523d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845240 push ebx */
  push32((uint32_t)(EBX));
  /* 10845241 push esi */
  push32((uint32_t)(ESI));
  /* 10845242 push edi */
  push32((uint32_t)(EDI));
  /* 10845243 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10845246 cmp dword ptr [0x108618e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084524d jne 0x10845292 */
  if (!C.zf) goto L_10845292;
  /* 1084524f push 0 */
  push32((uint32_t)(0x0u));
  /* 10845251 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845253 push 1 */
  push32((uint32_t)(0x1u));
  /* 10845255 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845257 call dword ptr [0x108642dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642dc))), 0x1084525du);
  /* 1084525d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084525f je 0x1084526d */
  if (C.zf) goto L_1084526d;
  /* 10845261 mov dword ptr [0x108618e4], 1 */
  w32((uint32_t)(0x108618e4), (0x1u));
  /* 1084526b jmp 0x10845292 */
  goto L_10845292;
L_1084526d:;
  /* 1084526d push 0 */
  push32((uint32_t)(0x0u));
  /* 1084526f push 0 */
  push32((uint32_t)(0x0u));
  /* 10845271 push 1 */
  push32((uint32_t)(0x1u));
  /* 10845273 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845275 call dword ptr [0x108642f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f4))), 0x1084527bu);
  /* 1084527b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084527d je 0x1084528b */
  if (C.zf) goto L_1084528b;
  /* 1084527f mov dword ptr [0x108618e4], 2 */
  w32((uint32_t)(0x108618e4), (0x2u));
  /* 10845289 jmp 0x10845292 */
  goto L_10845292;
L_1084528b:;
  /* 1084528b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084528d jmp 0x108453a1 */
  goto L_108453a1;
L_10845292:;
  /* 10845292 cmp dword ptr [0x108618e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108618e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845299 jne 0x108452b6 */
  if (!C.zf) goto L_108452b6;
  /* 1084529b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084529e push eax */
  push32((uint32_t)(EAX));
  /* 1084529f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108452a2 push ecx */
  push32((uint32_t)(ECX));
  /* 108452a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108452a6 push edx */
  push32((uint32_t)(EDX));
  /* 108452a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108452aa push eax */
  push32((uint32_t)(EAX));
  /* 108452ab call dword ptr [0x108642dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642dc))), 0x108452b1u);
  /* 108452b1 jmp 0x108453a1 */
  goto L_108453a1;
L_108452b6:;
  /* 108452b6 cmp dword ptr [0x108618e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108618e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108452bd jne 0x1084539f */
  if (!C.zf) goto L_1084539f;
  /* 108452c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108452c7 jne 0x108452d2 */
  if (!C.zf) goto L_108452d2;
  /* 108452c9 mov ecx, dword ptr [0x10861798] */
  ECX = (r32((uint32_t)(0x10861798)));
  /* 108452cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_108452d2:;
  /* 108452d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108452d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108452d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108452d9 push edx */
  push32((uint32_t)(EDX));
  /* 108452da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108452dd push eax */
  push32((uint32_t)(EAX));
  /* 108452de call dword ptr [0x108642f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f4))), 0x108452e4u);
  /* 108452e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108452e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108452eb jne 0x108452f4 */
  if (!C.zf) goto L_108452f4;
  /* 108452ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108452ef jmp 0x108453a1 */
  goto L_108453a1;
L_108452f4:;
  /* 108452f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108452fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108452fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845301 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10845303 call 0x10838f80 */
  push32(0x10845308u); f_10838f80();
  /* 10845308 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1084530b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1084530e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10845311 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10845314 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1084531b jmp 0x10845334 */
  goto L_10845334;
  /* 1084531d mov eax, 1 */
  EAX = (0x1u);
  /* 10845322 ret  */
  ESPCHK(0x10845220u, _esp0);
  ESP += 4; return;
  /* 10845323 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10845326 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1084532d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10845334:;
  /* 10845334 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845338 jne 0x1084533e */
  if (!C.zf) goto L_1084533e;
  /* 1084533a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084533c jmp 0x108453a1 */
  goto L_108453a1;
L_1084533e:;
  /* 1084533e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10845341 push edx */
  push32((uint32_t)(EDX));
  /* 10845342 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10845345 push eax */
  push32((uint32_t)(EAX));
  /* 10845346 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10845349 push ecx */
  push32((uint32_t)(ECX));
  /* 1084534a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084534d push edx */
  push32((uint32_t)(EDX));
  /* 1084534e call dword ptr [0x108642f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f4))), 0x10845354u);
  /* 10845354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845356 jne 0x1084535c */
  if (!C.zf) goto L_1084535c;
  /* 10845358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084535a jmp 0x108453a1 */
  goto L_108453a1;
L_1084535c:;
  /* 1084535c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845360 jne 0x1084537d */
  if (!C.zf) goto L_1084537d;
  /* 10845362 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845364 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845366 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845368 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1084536b push eax */
  push32((uint32_t)(EAX));
  /* 1084536c push 1 */
  push32((uint32_t)(0x1u));
  /* 1084536e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845371 push ecx */
  push32((uint32_t)(ECX));
  /* 10845372 call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x10845378u);
  /* 10845378 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1084537b jmp 0x1084539a */
  goto L_1084539a;
L_1084537d:;
  /* 1084537d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845380 push edx */
  push32((uint32_t)(EDX));
  /* 10845381 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845384 push eax */
  push32((uint32_t)(EAX));
  /* 10845385 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845387 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1084538a push ecx */
  push32((uint32_t)(ECX));
  /* 1084538b push 1 */
  push32((uint32_t)(0x1u));
  /* 1084538d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845390 push edx */
  push32((uint32_t)(EDX));
  /* 10845391 call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x10845397u);
  /* 10845397 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1084539a:;
  /* 1084539a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1084539d jmp 0x108453a1 */
  goto L_108453a1;
L_1084539f:;
  /* 1084539f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108453a1:;
  /* 108453a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 108453a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108453a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108453ae pop edi */
  EDI = (pop32());
  /* 108453af pop esi */
  ESI = (pop32());
  /* 108453b0 pop ebx */
  EBX = (pop32());
  /* 108453b1 mov esp, ebp */
  ESP = (EBP);
  /* 108453b3 pop ebp */
  EBP = (pop32());
  /* 108453b4 ret  */
  ESPCHK(0x10845220u, _esp0);
  ESP += 4; return;
}

/* FUN_100153c0 @ 0x108453c0 (398 bytes, 140 insns) */
void f_108453c0(void) {
  FTRACE(0x108453c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108453c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108453c1 mov ebp, esp */
  EBP = (ESP);
  /* 108453c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108453c5 push 0x1085db90 */
  push32((uint32_t)(0x1085db90u));
  /* 108453ca push 0x1083eee8 */
  push32((uint32_t)(0x1083eee8u));
  /* 108453cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108453d5 push eax */
  push32((uint32_t)(EAX));
  /* 108453d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108453dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108453e0 push ebx */
  push32((uint32_t)(EBX));
  /* 108453e1 push esi */
  push32((uint32_t)(ESI));
  /* 108453e2 push edi */
  push32((uint32_t)(EDI));
  /* 108453e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108453e6 cmp dword ptr [0x108618e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108453ed jne 0x10845432 */
  if (!C.zf) goto L_10845432;
  /* 108453ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108453f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108453f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108453f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108453f7 call dword ptr [0x108642dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642dc))), 0x108453fdu);
  /* 108453fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108453ff je 0x1084540d */
  if (C.zf) goto L_1084540d;
  /* 10845401 mov dword ptr [0x108618e8], 1 */
  w32((uint32_t)(0x108618e8), (0x1u));
  /* 1084540b jmp 0x10845432 */
  goto L_10845432;
L_1084540d:;
  /* 1084540d push 0 */
  push32((uint32_t)(0x0u));
  /* 1084540f push 0 */
  push32((uint32_t)(0x0u));
  /* 10845411 push 1 */
  push32((uint32_t)(0x1u));
  /* 10845413 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845415 call dword ptr [0x108642f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f4))), 0x1084541bu);
  /* 1084541b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1084541d je 0x1084542b */
  if (C.zf) goto L_1084542b;
  /* 1084541f mov dword ptr [0x108618e8], 2 */
  w32((uint32_t)(0x108618e8), (0x2u));
  /* 10845429 jmp 0x10845432 */
  goto L_10845432;
L_1084542b:;
  /* 1084542b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084542d jmp 0x10845551 */
  goto L_10845551;
L_10845432:;
  /* 10845432 cmp dword ptr [0x108618e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108618e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845439 jne 0x10845456 */
  if (!C.zf) goto L_10845456;
  /* 1084543b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084543e push eax */
  push32((uint32_t)(EAX));
  /* 1084543f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845442 push ecx */
  push32((uint32_t)(ECX));
  /* 10845443 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10845446 push edx */
  push32((uint32_t)(EDX));
  /* 10845447 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084544a push eax */
  push32((uint32_t)(EAX));
  /* 1084544b call dword ptr [0x108642f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642f4))), 0x10845451u);
  /* 10845451 jmp 0x10845551 */
  goto L_10845551;
L_10845456:;
  /* 10845456 cmp dword ptr [0x108618e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108618e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084545d jne 0x1084554f */
  if (!C.zf) goto L_1084554f;
  /* 10845463 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845467 jne 0x10845472 */
  if (!C.zf) goto L_10845472;
  /* 10845469 mov ecx, dword ptr [0x10861798] */
  ECX = (r32((uint32_t)(0x10861798)));
  /* 1084546f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10845472:;
  /* 10845472 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845474 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845476 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10845479 push edx */
  push32((uint32_t)(EDX));
  /* 1084547a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084547d push eax */
  push32((uint32_t)(EAX));
  /* 1084547e call dword ptr [0x108642dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642dc))), 0x10845484u);
  /* 10845484 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10845487 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084548b jne 0x10845494 */
  if (!C.zf) goto L_10845494;
  /* 1084548d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084548f jmp 0x10845551 */
  goto L_10845551;
L_10845494:;
  /* 10845494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1084549b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1084549e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108454a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108454a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108454a5 call 0x10838f80 */
  push32(0x108454aau); f_10838f80();
  /* 108454aa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 108454ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108454b0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 108454b3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108454b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108454bd jmp 0x108454d6 */
  goto L_108454d6;
  /* 108454bf mov eax, 1 */
  EAX = (0x1u);
  /* 108454c4 ret  */
  ESPCHK(0x108453c0u, _esp0);
  ESP += 4; return;
  /* 108454c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108454c8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 108454cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108454d6:;
  /* 108454d6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108454da jne 0x108454e0 */
  if (!C.zf) goto L_108454e0;
  /* 108454dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108454de jmp 0x10845551 */
  goto L_10845551;
L_108454e0:;
  /* 108454e0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 108454e3 push edx */
  push32((uint32_t)(EDX));
  /* 108454e4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108454e7 push eax */
  push32((uint32_t)(EAX));
  /* 108454e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108454eb push ecx */
  push32((uint32_t)(ECX));
  /* 108454ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108454ef push edx */
  push32((uint32_t)(EDX));
  /* 108454f0 call dword ptr [0x108642dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642dc))), 0x108454f6u);
  /* 108454f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108454f8 jne 0x108454fe */
  if (!C.zf) goto L_108454fe;
  /* 108454fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108454fc jmp 0x10845551 */
  goto L_10845551;
L_108454fe:;
  /* 108454fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845502 jne 0x10845526 */
  if (!C.zf) goto L_10845526;
  /* 10845504 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845506 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084550a push 0 */
  push32((uint32_t)(0x0u));
  /* 1084550c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1084550e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10845511 push eax */
  push32((uint32_t)(EAX));
  /* 10845512 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10845517 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1084551a push ecx */
  push32((uint32_t)(ECX));
  /* 1084551b call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x10845521u);
  /* 10845521 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10845524 jmp 0x1084554a */
  goto L_1084554a;
L_10845526:;
  /* 10845526 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845528 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084552a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1084552d push edx */
  push32((uint32_t)(EDX));
  /* 1084552e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845531 push eax */
  push32((uint32_t)(EAX));
  /* 10845532 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845534 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10845537 push ecx */
  push32((uint32_t)(ECX));
  /* 10845538 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1084553d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845540 push edx */
  push32((uint32_t)(EDX));
  /* 10845541 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x10845547u);
  /* 10845547 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1084554a:;
  /* 1084554a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1084554d jmp 0x10845551 */
  goto L_10845551;
L_1084554f:;
  /* 1084554f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10845551:;
  /* 10845551 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10845554 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10845557 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1084555e pop edi */
  EDI = (pop32());
  /* 1084555f pop esi */
  ESI = (pop32());
  /* 10845560 pop ebx */
  EBX = (pop32());
  /* 10845561 mov esp, ebp */
  ESP = (EBP);
  /* 10845563 pop ebp */
  EBP = (pop32());
  /* 10845564 ret  */
  ESPCHK(0x108453c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015570 @ 0x10845570 (11 bytes, 6 insns) */
void f_10845570(void) {
  FTRACE(0x10845570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845570 push ebp */
  push32((uint32_t)(EBP));
  /* 10845571 mov ebp, esp */
  EBP = (ESP);
  /* 10845573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845576 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845579 pop ebp */
  EBP = (pop32());
  /* 1084557a ret  */
  ESPCHK(0x10845570u, _esp0);
  ESP += 4; return;
}

/* FUN_10015580 @ 0x10845580 (147 bytes, 43 insns) */
void f_10845580(void) {
  FTRACE(0x10845580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845580 push ebp */
  push32((uint32_t)(EBP));
  /* 10845581 mov ebp, esp */
  EBP = (ESP);
  /* 10845583 push ecx */
  push32((uint32_t)(ECX));
  /* 10845584 cmp dword ptr [0x10861788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084558b jne 0x108455a7 */
  if (!C.zf) goto L_108455a7;
  /* 1084558d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845591 jl 0x108455a2 */
  if ((C.sf!=C.of)) goto L_108455a2;
  /* 10845593 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845597 jg 0x108455a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_108455a2;
  /* 10845599 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084559c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084559f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108455a2:;
  /* 108455a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108455a5 jmp 0x1084560f */
  goto L_1084560f;
L_108455a7:;
  /* 108455a7 push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 108455ac call dword ptr [0x108643ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643ac))), 0x108455b2u);
  /* 108455b2 cmp dword ptr [0x10861904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108455b9 je 0x108455d9 */
  if (C.zf) goto L_108455d9;
  /* 108455bb push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 108455c0 call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x108455c6u);
  /* 108455c6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108455c8 call 0x108397e0 */
  push32(0x108455cdu); f_108397e0();
  /* 108455cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108455d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108455d7 jmp 0x108455e0 */
  goto L_108455e0;
L_108455d9:;
  /* 108455d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108455e0:;
  /* 108455e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108455e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108455e4 call 0x10845620 */
  push32(0x108455e9u); f_10845620();
  /* 108455e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108455ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108455ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108455f3 je 0x10845601 */
  if (C.zf) goto L_10845601;
  /* 108455f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 108455f7 call 0x10839880 */
  push32(0x108455fcu); f_10839880();
  /* 108455fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108455ff jmp 0x1084560c */
  goto L_1084560c;
L_10845601:;
  /* 10845601 push 0x10861914 */
  push32((uint32_t)(0x10861914u));
  /* 10845606 call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x1084560cu);
L_1084560c:;
  /* 1084560c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1084560f:;
  /* 1084560f mov esp, ebp */
  ESP = (EBP);
  /* 10845611 pop ebp */
  EBP = (pop32());
  /* 10845612 ret  */
  ESPCHK(0x10845580u, _esp0);
  ESP += 4; return;
}

/* FUN_10015620 @ 0x10845620 (299 bytes, 91 insns) */
void f_10845620(void) {
  FTRACE(0x10845620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845620 push ebp */
  push32((uint32_t)(EBP));
  /* 10845621 mov ebp, esp */
  EBP = (ESP);
  /* 10845623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845626 cmp dword ptr [0x10861788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084562d jne 0x1084564c */
  if (!C.zf) goto L_1084564c;
  /* 1084562f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845633 jl 0x10845644 */
  if ((C.sf!=C.of)) goto L_10845644;
  /* 10845635 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845639 jg 0x10845644 */
  if ((!C.zf&&C.sf==C.of)) goto L_10845644;
  /* 1084563b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084563e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845641 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10845644:;
  /* 10845644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845647 jmp 0x10845747 */
  goto L_10845747;
L_1084564c:;
  /* 1084564c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845653 jge 0x10845693 */
  if ((C.sf==C.of)) goto L_10845693;
  /* 10845655 cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084565c jle 0x10845671 */
  if ((C.zf||C.sf!=C.of)) goto L_10845671;
  /* 1084565e push 1 */
  push32((uint32_t)(0x1u));
  /* 10845660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845663 push ecx */
  push32((uint32_t)(ECX));
  /* 10845664 call 0x1083bdf0 */
  push32(0x10845669u); f_1083bdf0();
  /* 10845669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084566c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1084566f jmp 0x10845685 */
  goto L_10845685;
L_10845671:;
  /* 10845671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845674 mov eax, dword ptr [0x1085fc98] */
  EAX = (r32((uint32_t)(0x1085fc98)));
  /* 10845679 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1084567b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1084567f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10845682 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10845685:;
  /* 10845685 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845689 jne 0x10845693 */
  if (!C.zf) goto L_10845693;
  /* 1084568b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084568e jmp 0x10845747 */
  goto L_10845747;
L_10845693:;
  /* 10845693 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845696 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10845699 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1084569f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108456a5 mov eax, dword ptr [0x1085fc98] */
  EAX = (r32((uint32_t)(0x1085fc98)));
  /* 108456aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108456ac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108456b0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 108456b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108456b8 je 0x108456dc */
  if (C.zf) goto L_108456dc;
  /* 108456ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108456bd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108456c0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108456c6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 108456c9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 108456cc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 108456cf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 108456d3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108456da jmp 0x108456ed */
  goto L_108456ed;
L_108456dc:;
  /* 108456dc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 108456df mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 108456e2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 108456e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_108456ed:;
  /* 108456ed push 1 */
  push32((uint32_t)(0x1u));
  /* 108456ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108456f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 108456f3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 108456f6 push edx */
  push32((uint32_t)(EDX));
  /* 108456f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108456fa push eax */
  push32((uint32_t)(EAX));
  /* 108456fb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 108456fe push ecx */
  push32((uint32_t)(ECX));
  /* 108456ff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10845704 mov edx, dword ptr [0x10861788] */
  EDX = (r32((uint32_t)(0x10861788)));
  /* 1084570a push edx */
  push32((uint32_t)(EDX));
  /* 1084570b call 0x1083e1d0 */
  push32(0x10845710u); f_1083e1d0();
  /* 10845710 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10845716 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084571a jne 0x10845721 */
  if (!C.zf) goto L_10845721;
  /* 1084571c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084571f jmp 0x10845747 */
  goto L_10845747;
L_10845721:;
  /* 10845721 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845725 jne 0x10845731 */
  if (!C.zf) goto L_10845731;
  /* 10845727 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084572a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084572f jmp 0x10845747 */
  goto L_10845747;
L_10845731:;
  /* 10845731 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845734 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845739 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1084573c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10845742 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10845745 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10845747:;
  /* 10845747 mov esp, ebp */
  ESP = (EBP);
  /* 10845749 pop ebp */
  EBP = (pop32());
  /* 1084574a ret  */
  ESPCHK(0x10845620u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10845750 (52 bytes, 19 insns) */
void f_10845750(void) {
  FTRACE(0x10845750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845750 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10845754 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10845758 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1084575a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1084575e jne 0x10845769 */
  if (!C.zf) goto L_10845769;
  /* 10845760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10845764 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10845766 ret 0x10 */
  ESPCHK(0x10845750u, _esp0);
  ESP += 20; return;
L_10845769:;
  /* 10845769 push ebx */
  push32((uint32_t)(EBX));
  /* 1084576a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1084576c mov ebx, eax */
  EBX = (EAX);
  /* 1084576e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10845772 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10845776 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845778 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1084577c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1084577e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845780 pop ebx */
  EBX = (pop32());
  /* 10845781 ret 0x10 */
  ESPCHK(0x10845750u, _esp0);
  ESP += 20; return;
}

/* FUN_10015790 @ 0x10845790 (46 bytes, 18 insns) */
void f_10845790(void) {
  FTRACE(0x10845790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845790 push ebp */
  push32((uint32_t)(EBP));
  /* 10845791 mov ebp, esp */
  EBP = (ESP);
  /* 10845793 push ecx */
  push32((uint32_t)(ECX));
  /* 10845794 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10845796 call 0x108397e0 */
  push32(0x1084579bu); f_108397e0();
  /* 1084579b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084579e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108457a1 push eax */
  push32((uint32_t)(EAX));
  /* 108457a2 call 0x108457c0 */
  push32(0x108457a7u); f_108457c0();
  /* 108457a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108457aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108457ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 108457af call 0x10839880 */
  push32(0x108457b4u); f_10839880();
  /* 108457b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108457b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108457ba mov esp, ebp */
  ESP = (EBP);
  /* 108457bc pop ebp */
  EBP = (pop32());
  /* 108457bd ret  */
  ESPCHK(0x10845790u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x108457c0 (198 bytes, 69 insns) */
void f_108457c0(void) {
  FTRACE(0x108457c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108457c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108457c1 mov ebp, esp */
  EBP = (ESP);
  /* 108457c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108457c6 mov eax, dword ptr [0x108615a8] */
  EAX = (r32((uint32_t)(0x108615a8)));
  /* 108457cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108457ce cmp dword ptr [0x108630a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108457d5 jne 0x108457de */
  if (!C.zf) goto L_108457de;
  /* 108457d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108457d9 jmp 0x10845882 */
  goto L_10845882;
L_108457de:;
  /* 108457de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108457e2 jne 0x10845806 */
  if (!C.zf) goto L_10845806;
  /* 108457e4 cmp dword ptr [0x108615b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108457eb je 0x10845806 */
  if (C.zf) goto L_10845806;
  /* 108457ed call 0x108458e0 */
  push32(0x108457f2u); f_108458e0();
  /* 108457f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108457f4 je 0x108457fd */
  if (C.zf) goto L_108457fd;
  /* 108457f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108457f8 jmp 0x10845882 */
  goto L_10845882;
L_108457fd:;
  /* 108457fd mov ecx, dword ptr [0x108615a8] */
  ECX = (r32((uint32_t)(0x108615a8)));
  /* 10845803 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10845806:;
  /* 10845806 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084580a je 0x10845880 */
  if (C.zf) goto L_10845880;
  /* 1084580c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845810 je 0x10845880 */
  if (C.zf) goto L_10845880;
  /* 10845812 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845815 push edx */
  push32((uint32_t)(EDX));
  /* 10845816 call 0x10838c10 */
  push32(0x1084581bu); f_10838c10();
  /* 1084581b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084581e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10845821:;
  /* 10845821 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845824 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845827 je 0x10845880 */
  if (C.zf) goto L_10845880;
  /* 10845829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084582c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1084582e push edx */
  push32((uint32_t)(EDX));
  /* 1084582f call 0x10838c10 */
  push32(0x10845834u); f_10838c10();
  /* 10845834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845837 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084583a jbe 0x10845875 */
  if ((C.cf||C.zf)) goto L_10845875;
  /* 1084583c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084583f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10845841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845844 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10845848 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084584b jne 0x10845875 */
  if (!C.zf) goto L_10845875;
  /* 1084584d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845850 push ecx */
  push32((uint32_t)(ECX));
  /* 10845851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845854 push edx */
  push32((uint32_t)(EDX));
  /* 10845855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845858 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1084585a push ecx */
  push32((uint32_t)(ECX));
  /* 1084585b call 0x10845890 */
  push32(0x10845860u); f_10845890();
  /* 10845860 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845865 jne 0x10845875 */
  if (!C.zf) goto L_10845875;
  /* 10845867 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084586a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1084586c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084586f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10845873 jmp 0x10845882 */
  goto L_10845882;
L_10845875:;
  /* 10845875 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845878 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084587b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1084587e jmp 0x10845821 */
  goto L_10845821;
L_10845880:;
  /* 10845880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10845882:;
  /* 10845882 mov esp, ebp */
  ESP = (EBP);
  /* 10845884 pop ebp */
  EBP = (pop32());
  /* 10845885 ret  */
  ESPCHK(0x108457c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10845890 (79 bytes, 32 insns) */
void f_10845890(void) {
  FTRACE(0x10845890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845890 push ebp */
  push32((uint32_t)(EBP));
  /* 10845891 mov ebp, esp */
  EBP = (ESP);
  /* 10845893 push ecx */
  push32((uint32_t)(ECX));
  /* 10845894 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845898 jne 0x1084589e */
  if (!C.zf) goto L_1084589e;
  /* 1084589a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084589c jmp 0x108458db */
  goto L_108458db;
L_1084589e:;
  /* 1084589e mov eax, dword ptr [0x10862c64] */
  EAX = (r32((uint32_t)(0x10862c64)));
  /* 108458a3 push eax */
  push32((uint32_t)(EAX));
  /* 108458a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108458a7 push ecx */
  push32((uint32_t)(ECX));
  /* 108458a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108458ab push edx */
  push32((uint32_t)(EDX));
  /* 108458ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108458af push eax */
  push32((uint32_t)(EAX));
  /* 108458b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108458b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108458b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108458b6 mov edx, dword ptr [0x10862f04] */
  EDX = (r32((uint32_t)(0x10862f04)));
  /* 108458bc push edx */
  push32((uint32_t)(EDX));
  /* 108458bd call 0x10845990 */
  push32(0x108458c2u); f_10845990();
  /* 108458c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108458c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108458c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108458cc jne 0x108458d5 */
  if (!C.zf) goto L_108458d5;
  /* 108458ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 108458d3 jmp 0x108458db */
  goto L_108458db;
L_108458d5:;
  /* 108458d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108458d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_108458db:;
  /* 108458db mov esp, ebp */
  ESP = (EBP);
  /* 108458dd pop ebp */
  EBP = (pop32());
  /* 108458de ret  */
  ESPCHK(0x10845890u, _esp0);
  ESP += 4; return;
}

/* FUN_100158e0 @ 0x108458e0 (174 bytes, 66 insns) */
void f_108458e0(void) {
  FTRACE(0x108458e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108458e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108458e1 mov ebp, esp */
  EBP = (ESP);
  /* 108458e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108458e6 mov eax, dword ptr [0x108615b0] */
  EAX = (r32((uint32_t)(0x108615b0)));
  /* 108458eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108458ee:;
  /* 108458ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108458f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108458f4 je 0x10845988 */
  if (C.zf) goto L_10845988;
  /* 108458fa push 0 */
  push32((uint32_t)(0x0u));
  /* 108458fc push 0 */
  push32((uint32_t)(0x0u));
  /* 108458fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10845900 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845902 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845907 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10845909 push eax */
  push32((uint32_t)(EAX));
  /* 1084590a push 0 */
  push32((uint32_t)(0x0u));
  /* 1084590c push 1 */
  push32((uint32_t)(0x1u));
  /* 1084590e call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x10845914u);
  /* 10845914 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10845917 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084591b jne 0x10845922 */
  if (!C.zf) goto L_10845922;
  /* 1084591d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845920 jmp 0x1084598a */
  goto L_1084598a;
L_10845922:;
  /* 10845922 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10845924 push 0x1085db9c */
  push32((uint32_t)(0x1085db9cu));
  /* 10845929 push 2 */
  push32((uint32_t)(0x2u));
  /* 1084592b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084592e push ecx */
  push32((uint32_t)(ECX));
  /* 1084592f call 0x10835de0 */
  push32(0x10845934u); f_10835de0();
  /* 10845934 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845937 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1084593a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084593e jne 0x10845945 */
  if (!C.zf) goto L_10845945;
  /* 10845940 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845943 jmp 0x1084598a */
  goto L_1084598a;
L_10845945:;
  /* 10845945 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845949 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084594c push edx */
  push32((uint32_t)(EDX));
  /* 1084594d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845950 push eax */
  push32((uint32_t)(EAX));
  /* 10845951 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845956 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10845958 push edx */
  push32((uint32_t)(EDX));
  /* 10845959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1084595b push 1 */
  push32((uint32_t)(0x1u));
  /* 1084595d call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x10845963u);
  /* 10845963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845965 jne 0x1084596c */
  if (!C.zf) goto L_1084596c;
  /* 10845967 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084596a jmp 0x1084598a */
  goto L_1084598a;
L_1084596c:;
  /* 1084596c push 0 */
  push32((uint32_t)(0x0u));
  /* 1084596e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845971 push eax */
  push32((uint32_t)(EAX));
  /* 10845972 call 0x10845de0 */
  push32(0x10845977u); f_10845de0();
  /* 10845977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084597a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084597d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845980 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10845983 jmp 0x108458ee */
  goto L_108458ee;
L_10845988:;
  /* 10845988 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1084598a:;
  /* 1084598a mov esp, ebp */
  ESP = (EBP);
  /* 1084598c pop ebp */
  EBP = (pop32());
  /* 1084598d ret  */
  ESPCHK(0x108458e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015990 @ 0x10845990 (970 bytes, 340 insns) */
void f_10845990(void) {
  FTRACE(0x10845990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845990 push ebp */
  push32((uint32_t)(EBP));
  /* 10845991 mov ebp, esp */
  EBP = (ESP);
  /* 10845993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10845995 push 0x1085dbf0 */
  push32((uint32_t)(0x1085dbf0u));
  /* 1084599a push 0x1083eee8 */
  push32((uint32_t)(0x1083eee8u));
  /* 1084599f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108459a5 push eax */
  push32((uint32_t)(EAX));
  /* 108459a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108459ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108459b0 push ebx */
  push32((uint32_t)(EBX));
  /* 108459b1 push esi */
  push32((uint32_t)(ESI));
  /* 108459b2 push edi */
  push32((uint32_t)(EDI));
  /* 108459b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108459b6 cmp dword ptr [0x108618ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108618ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108459bd jne 0x10845a16 */
  if (!C.zf) goto L_10845a16;
  /* 108459bf push 1 */
  push32((uint32_t)(0x1u));
  /* 108459c1 push 0x1085d248 */
  push32((uint32_t)(0x1085d248u));
  /* 108459c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108459c8 push 0x1085d248 */
  push32((uint32_t)(0x1085d248u));
  /* 108459cd push 0 */
  push32((uint32_t)(0x0u));
  /* 108459cf push 0 */
  push32((uint32_t)(0x0u));
  /* 108459d1 call dword ptr [0x108642d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642d8))), 0x108459d7u);
  /* 108459d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108459d9 je 0x108459e7 */
  if (C.zf) goto L_108459e7;
  /* 108459db mov dword ptr [0x108618ec], 1 */
  w32((uint32_t)(0x108618ec), (0x1u));
  /* 108459e5 jmp 0x10845a16 */
  goto L_10845a16;
L_108459e7:;
  /* 108459e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108459e9 push 0x1085d244 */
  push32((uint32_t)(0x1085d244u));
  /* 108459ee push 1 */
  push32((uint32_t)(0x1u));
  /* 108459f0 push 0x1085d244 */
  push32((uint32_t)(0x1085d244u));
  /* 108459f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108459f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108459f9 call dword ptr [0x108642e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642e4))), 0x108459ffu);
  /* 108459ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845a01 je 0x10845a0f */
  if (C.zf) goto L_10845a0f;
  /* 10845a03 mov dword ptr [0x108618ec], 2 */
  w32((uint32_t)(0x108618ec), (0x2u));
  /* 10845a0d jmp 0x10845a16 */
  goto L_10845a16;
L_10845a0f:;
  /* 10845a0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845a11 jmp 0x10845d74 */
  goto L_10845d74;
L_10845a16:;
  /* 10845a16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a1a jle 0x10845a2f */
  if ((C.zf||C.sf!=C.of)) goto L_10845a2f;
  /* 10845a1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845a1f push eax */
  push32((uint32_t)(EAX));
  /* 10845a20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10845a24 call 0x10845d90 */
  push32(0x10845a29u); f_10845d90();
  /* 10845a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845a2c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10845a2f:;
  /* 10845a2f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a33 jle 0x10845a48 */
  if ((C.zf||C.sf!=C.of)) goto L_10845a48;
  /* 10845a35 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10845a38 push edx */
  push32((uint32_t)(EDX));
  /* 10845a39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845a3c push eax */
  push32((uint32_t)(EAX));
  /* 10845a3d call 0x10845d90 */
  push32(0x10845a42u); f_10845d90();
  /* 10845a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845a45 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10845a48:;
  /* 10845a48 cmp dword ptr [0x108618ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108618ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a4f jne 0x10845a74 */
  if (!C.zf) goto L_10845a74;
  /* 10845a51 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10845a54 push ecx */
  push32((uint32_t)(ECX));
  /* 10845a55 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845a58 push edx */
  push32((uint32_t)(EDX));
  /* 10845a59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845a5c push eax */
  push32((uint32_t)(EAX));
  /* 10845a5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845a60 push ecx */
  push32((uint32_t)(ECX));
  /* 10845a61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10845a64 push edx */
  push32((uint32_t)(EDX));
  /* 10845a65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845a68 push eax */
  push32((uint32_t)(EAX));
  /* 10845a69 call dword ptr [0x108642e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642e4))), 0x10845a6fu);
  /* 10845a6f jmp 0x10845d74 */
  goto L_10845d74;
L_10845a74:;
  /* 10845a74 cmp dword ptr [0x108618ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108618ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a7b jne 0x10845d72 */
  if (!C.zf) goto L_10845d72;
  /* 10845a81 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a85 jne 0x10845a90 */
  if (!C.zf) goto L_10845a90;
  /* 10845a87 mov ecx, dword ptr [0x10861798] */
  ECX = (r32((uint32_t)(0x10861798)));
  /* 10845a8d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10845a90:;
  /* 10845a90 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a94 je 0x10845aa0 */
  if (C.zf) goto L_10845aa0;
  /* 10845a96 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845a9a jne 0x10845c1c */
  if (!C.zf) goto L_10845c1c;
L_10845aa0:;
  /* 10845aa0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845aa3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845aa6 jne 0x10845ab2 */
  if (!C.zf) goto L_10845ab2;
  /* 10845aa8 mov eax, 2 */
  EAX = (0x2u);
  /* 10845aad jmp 0x10845d74 */
  goto L_10845d74;
L_10845ab2:;
  /* 10845ab2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845ab6 jle 0x10845ac2 */
  if ((C.zf||C.sf!=C.of)) goto L_10845ac2;
  /* 10845ab8 mov eax, 1 */
  EAX = (0x1u);
  /* 10845abd jmp 0x10845d74 */
  goto L_10845d74;
L_10845ac2:;
  /* 10845ac2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845ac6 jle 0x10845ad2 */
  if ((C.zf||C.sf!=C.of)) goto L_10845ad2;
  /* 10845ac8 mov eax, 3 */
  EAX = (0x3u);
  /* 10845acd jmp 0x10845d74 */
  goto L_10845d74;
L_10845ad2:;
  /* 10845ad2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10845ad5 push eax */
  push32((uint32_t)(EAX));
  /* 10845ad6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10845ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 10845ada call dword ptr [0x10864330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864330))), 0x10845ae0u);
  /* 10845ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845ae2 jne 0x10845aeb */
  if (!C.zf) goto L_10845aeb;
  /* 10845ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845ae6 jmp 0x10845d74 */
  goto L_10845d74;
L_10845aeb:;
  /* 10845aeb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845aef jne 0x10845af7 */
  if (!C.zf) goto L_10845af7;
  /* 10845af1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845af5 je 0x10845b24 */
  if (C.zf) goto L_10845b24;
L_10845af7:;
  /* 10845af7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845afb jne 0x10845b03 */
  if (!C.zf) goto L_10845b03;
  /* 10845afd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845b01 je 0x10845b24 */
  if (C.zf) goto L_10845b24;
L_10845b03:;
  /* 10845b03 push 0x1085dbb0 */
  push32((uint32_t)(0x1085dbb0u));
  /* 10845b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10845b0a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10845b0f push 0x1085dba8 */
  push32((uint32_t)(0x1085dba8u));
  /* 10845b14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10845b16 call 0x10834ea0 */
  push32(0x10845b1bu); f_10834ea0();
  /* 10845b1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845b1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845b21 jne 0x10845b24 */
  if (!C.zf) goto L_10845b24;
  /* 10845b23 int3  */
  x86_unimpl("int3 @ 0x10845b23");
L_10845b24:;
  /* 10845b24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10845b26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845b28 jne 0x10845aeb */
  if (!C.zf) goto L_10845aeb;
  /* 10845b2a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845b2e jle 0x10845ba3 */
  if ((C.zf||C.sf!=C.of)) goto L_10845ba3;
  /* 10845b30 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845b34 jae 0x10845b40 */
  if (!C.cf) goto L_10845b40;
  /* 10845b36 mov eax, 3 */
  EAX = (0x3u);
  /* 10845b3b jmp 0x10845d74 */
  goto L_10845d74;
L_10845b40:;
  /* 10845b40 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10845b43 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10845b46 jmp 0x10845b51 */
  goto L_10845b51;
L_10845b48:;
  /* 10845b48 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845b4b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845b4e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10845b51:;
  /* 10845b51 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845b56 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10845b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845b5a je 0x10845b99 */
  if (C.zf) goto L_10845b99;
  /* 10845b5c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845b5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10845b61 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10845b64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845b66 je 0x10845b99 */
  if (C.zf) goto L_10845b99;
  /* 10845b68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845b6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10845b6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10845b6f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845b74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10845b76 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845b78 jl 0x10845b97 */
  if ((C.sf!=C.of)) goto L_10845b97;
  /* 10845b7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845b7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10845b7f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10845b81 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845b84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10845b86 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10845b89 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845b8b jg 0x10845b97 */
  if ((!C.zf&&C.sf==C.of)) goto L_10845b97;
  /* 10845b8d mov eax, 2 */
  EAX = (0x2u);
  /* 10845b92 jmp 0x10845d74 */
  goto L_10845d74;
L_10845b97:;
  /* 10845b97 jmp 0x10845b48 */
  goto L_10845b48;
L_10845b99:;
  /* 10845b99 mov eax, 3 */
  EAX = (0x3u);
  /* 10845b9e jmp 0x10845d74 */
  goto L_10845d74;
L_10845ba3:;
  /* 10845ba3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845ba7 jle 0x10845c1c */
  if ((C.zf||C.sf!=C.of)) goto L_10845c1c;
  /* 10845ba9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845bad jae 0x10845bb9 */
  if (!C.cf) goto L_10845bb9;
  /* 10845baf mov eax, 1 */
  EAX = (0x1u);
  /* 10845bb4 jmp 0x10845d74 */
  goto L_10845d74;
L_10845bb9:;
  /* 10845bb9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10845bbc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10845bbf jmp 0x10845bca */
  goto L_10845bca;
L_10845bc1:;
  /* 10845bc1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845bc4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845bc7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10845bca:;
  /* 10845bca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10845bcf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10845bd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845bd3 je 0x10845c12 */
  if (C.zf) goto L_10845c12;
  /* 10845bd5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845bd8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10845bda mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10845bdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10845bdf je 0x10845c12 */
  if (C.zf) goto L_10845c12;
  /* 10845be1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845be6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10845be8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845beb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10845bed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10845bef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845bf1 jl 0x10845c10 */
  if ((C.sf!=C.of)) goto L_10845c10;
  /* 10845bf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845bf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10845bf8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10845bfa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10845bfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845bff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10845c02 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845c04 jg 0x10845c10 */
  if ((!C.zf&&C.sf==C.of)) goto L_10845c10;
  /* 10845c06 mov eax, 2 */
  EAX = (0x2u);
  /* 10845c0b jmp 0x10845d74 */
  goto L_10845d74;
L_10845c10:;
  /* 10845c10 jmp 0x10845bc1 */
  goto L_10845bc1;
L_10845c12:;
  /* 10845c12 mov eax, 1 */
  EAX = (0x1u);
  /* 10845c17 jmp 0x10845d74 */
  goto L_10845d74;
L_10845c1c:;
  /* 10845c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10845c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10845c20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10845c24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845c27 push edx */
  push32((uint32_t)(EDX));
  /* 10845c28 push 9 */
  push32((uint32_t)(0x9u));
  /* 10845c2a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10845c2d push eax */
  push32((uint32_t)(EAX));
  /* 10845c2e call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x10845c34u);
  /* 10845c34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10845c37 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845c3b jne 0x10845c44 */
  if (!C.zf) goto L_10845c44;
  /* 10845c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845c3f jmp 0x10845d74 */
  goto L_10845d74;
L_10845c44:;
  /* 10845c44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10845c4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10845c4e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10845c50 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845c53 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10845c55 call 0x10838f80 */
  push32(0x10845c5au); f_10838f80();
  /* 10845c5a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10845c5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10845c60 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10845c63 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10845c66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10845c6d jmp 0x10845c86 */
  goto L_10845c86;
  /* 10845c6f mov eax, 1 */
  EAX = (0x1u);
  /* 10845c74 ret  */
  ESPCHK(0x10845990u, _esp0);
  ESP += 4; return;
  /* 10845c75 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10845c78 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10845c7f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10845c86:;
  /* 10845c86 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845c8a jne 0x10845c93 */
  if (!C.zf) goto L_10845c93;
  /* 10845c8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845c8e jmp 0x10845d74 */
  goto L_10845d74;
L_10845c93:;
  /* 10845c93 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10845c96 push edx */
  push32((uint32_t)(EDX));
  /* 10845c97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10845c9a push eax */
  push32((uint32_t)(EAX));
  /* 10845c9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10845c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10845c9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10845ca2 push edx */
  push32((uint32_t)(EDX));
  /* 10845ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10845ca5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10845ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10845ca9 call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x10845cafu);
  /* 10845caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845cb1 jne 0x10845cba */
  if (!C.zf) goto L_10845cba;
  /* 10845cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845cb5 jmp 0x10845d74 */
  goto L_10845d74;
L_10845cba:;
  /* 10845cba push 0 */
  push32((uint32_t)(0x0u));
  /* 10845cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10845cbe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10845cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10845cc2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845cc5 push edx */
  push32((uint32_t)(EDX));
  /* 10845cc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10845cc8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10845ccb push eax */
  push32((uint32_t)(EAX));
  /* 10845ccc call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x10845cd2u);
  /* 10845cd2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10845cd5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845cd9 jne 0x10845ce2 */
  if (!C.zf) goto L_10845ce2;
  /* 10845cdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845cdd jmp 0x10845d74 */
  goto L_10845d74;
L_10845ce2:;
  /* 10845ce2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10845ce9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10845cec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10845cee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845cf1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10845cf3 call 0x10838f80 */
  push32(0x10845cf8u); f_10838f80();
  /* 10845cf8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10845cfb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10845cfe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10845d01 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10845d04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10845d0b jmp 0x10845d24 */
  goto L_10845d24;
  /* 10845d0d mov eax, 1 */
  EAX = (0x1u);
  /* 10845d12 ret  */
  ESPCHK(0x10845990u, _esp0);
  ESP += 4; return;
  /* 10845d13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10845d16 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10845d1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10845d24:;
  /* 10845d24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845d28 jne 0x10845d2e */
  if (!C.zf) goto L_10845d2e;
  /* 10845d2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845d2c jmp 0x10845d74 */
  goto L_10845d74;
L_10845d2e:;
  /* 10845d2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10845d31 push edx */
  push32((uint32_t)(EDX));
  /* 10845d32 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10845d35 push eax */
  push32((uint32_t)(EAX));
  /* 10845d36 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10845d39 push ecx */
  push32((uint32_t)(ECX));
  /* 10845d3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10845d3d push edx */
  push32((uint32_t)(EDX));
  /* 10845d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10845d40 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10845d43 push eax */
  push32((uint32_t)(EAX));
  /* 10845d44 call dword ptr [0x10864324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864324))), 0x10845d4au);
  /* 10845d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845d4c jne 0x10845d52 */
  if (!C.zf) goto L_10845d52;
  /* 10845d4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845d50 jmp 0x10845d74 */
  goto L_10845d74;
L_10845d52:;
  /* 10845d52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10845d55 push ecx */
  push32((uint32_t)(ECX));
  /* 10845d56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10845d59 push edx */
  push32((uint32_t)(EDX));
  /* 10845d5a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10845d5d push eax */
  push32((uint32_t)(EAX));
  /* 10845d5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10845d61 push ecx */
  push32((uint32_t)(ECX));
  /* 10845d62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10845d65 push edx */
  push32((uint32_t)(EDX));
  /* 10845d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845d69 push eax */
  push32((uint32_t)(EAX));
  /* 10845d6a call dword ptr [0x108642d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642d8))), 0x10845d70u);
  /* 10845d70 jmp 0x10845d74 */
  goto L_10845d74;
L_10845d72:;
  /* 10845d72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10845d74:;
  /* 10845d74 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10845d77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10845d7a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10845d81 pop edi */
  EDI = (pop32());
  /* 10845d82 pop esi */
  ESI = (pop32());
  /* 10845d83 pop ebx */
  EBX = (pop32());
  /* 10845d84 mov esp, ebp */
  ESP = (EBP);
  /* 10845d86 pop ebp */
  EBP = (pop32());
  /* 10845d87 ret  */
  ESPCHK(0x10845990u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d90 @ 0x10845d90 (80 bytes, 32 insns) */
void f_10845d90(void) {
  FTRACE(0x10845d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10845d91 mov ebp, esp */
  EBP = (ESP);
  /* 10845d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845d96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10845d99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10845d9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845d9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10845da2:;
  /* 10845da2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845da5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845da8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845dab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10845dae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845db0 je 0x10845dc7 */
  if (C.zf) goto L_10845dc7;
  /* 10845db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845db5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10845db8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845dba je 0x10845dc7 */
  if (C.zf) goto L_10845dc7;
  /* 10845dbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845dbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845dc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10845dc5 jmp 0x10845da2 */
  goto L_10845da2;
L_10845dc7:;
  /* 10845dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845dca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10845dcd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10845dcf jne 0x10845dd9 */
  if (!C.zf) goto L_10845dd9;
  /* 10845dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10845dd4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845dd7 jmp 0x10845ddc */
  goto L_10845ddc;
L_10845dd9:;
  /* 10845dd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10845ddc:;
  /* 10845ddc mov esp, ebp */
  ESP = (EBP);
  /* 10845dde pop ebp */
  EBP = (pop32());
  /* 10845ddf ret  */
  ESPCHK(0x10845d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015de0 @ 0x10845de0 (736 bytes, 224 insns) */
void f_10845de0(void) {
  FTRACE(0x10845de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10845de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10845de1 mov ebp, esp */
  EBP = (ESP);
  /* 10845de3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845de6 push esi */
  push32((uint32_t)(ESI));
  /* 10845de7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845deb je 0x10845e0c */
  if (C.zf) goto L_10845e0c;
  /* 10845ded push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10845def mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845df2 push eax */
  push32((uint32_t)(EAX));
  /* 10845df3 call 0x10846230 */
  push32(0x10845df8u); f_10846230();
  /* 10845df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845dfb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10845dfe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e02 je 0x10845e0c */
  if (C.zf) goto L_10845e0c;
  /* 10845e04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845e07 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e0a jne 0x10845e14 */
  if (!C.zf) goto L_10845e14;
L_10845e0c:;
  /* 10845e0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845e0f jmp 0x108460bb */
  goto L_108460bb;
L_10845e14:;
  /* 10845e14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10845e17 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10845e1b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10845e1d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845e1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10845e20 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10845e23 mov ecx, dword ptr [0x108615a8] */
  ECX = (r32((uint32_t)(0x108615a8)));
  /* 10845e29 cmp ecx, dword ptr [0x108615ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108615ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e2f jne 0x10845e45 */
  if (!C.zf) goto L_10845e45;
  /* 10845e31 mov edx, dword ptr [0x108615a8] */
  EDX = (r32((uint32_t)(0x108615a8)));
  /* 10845e37 push edx */
  push32((uint32_t)(EDX));
  /* 10845e38 call 0x10846140 */
  push32(0x10845e3du); f_10846140();
  /* 10845e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845e40 mov dword ptr [0x108615a8], eax */
  w32((uint32_t)(0x108615a8), (EAX));
L_10845e45:;
  /* 10845e45 cmp dword ptr [0x108615a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e4c jne 0x10845f05 */
  if (!C.zf) goto L_10845f05;
  /* 10845e52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e56 je 0x10845e77 */
  if (C.zf) goto L_10845e77;
  /* 10845e58 cmp dword ptr [0x108615b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e5f je 0x10845e77 */
  if (C.zf) goto L_10845e77;
  /* 10845e61 call 0x108458e0 */
  push32(0x10845e66u); f_108458e0();
  /* 10845e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10845e68 je 0x10845e72 */
  if (C.zf) goto L_10845e72;
  /* 10845e6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845e6d jmp 0x108460bb */
  goto L_108460bb;
L_10845e72:;
  /* 10845e72 jmp 0x10845f05 */
  goto L_10845f05;
L_10845e77:;
  /* 10845e77 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e7b je 0x10845e84 */
  if (C.zf) goto L_10845e84;
  /* 10845e7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10845e7f jmp 0x108460bb */
  goto L_108460bb;
L_10845e84:;
  /* 10845e84 cmp dword ptr [0x108615a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845e8b jne 0x10845ec4 */
  if (!C.zf) goto L_10845ec4;
  /* 10845e8d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10845e92 push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 10845e97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10845e99 push 4 */
  push32((uint32_t)(0x4u));
  /* 10845e9b call 0x10835de0 */
  push32(0x10845ea0u); f_10835de0();
  /* 10845ea0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845ea3 mov dword ptr [0x108615a8], eax */
  w32((uint32_t)(0x108615a8), (EAX));
  /* 10845ea8 cmp dword ptr [0x108615a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845eaf jne 0x10845eb9 */
  if (!C.zf) goto L_10845eb9;
  /* 10845eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845eb4 jmp 0x108460bb */
  goto L_108460bb;
L_10845eb9:;
  /* 10845eb9 mov eax, dword ptr [0x108615a8] */
  EAX = (r32((uint32_t)(0x108615a8)));
  /* 10845ebe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10845ec4:;
  /* 10845ec4 cmp dword ptr [0x108615b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845ecb jne 0x10845f05 */
  if (!C.zf) goto L_10845f05;
  /* 10845ecd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10845ed2 push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 10845ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10845ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10845edb call 0x10835de0 */
  push32(0x10845ee0u); f_10835de0();
  /* 10845ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845ee3 mov dword ptr [0x108615b0], eax */
  w32((uint32_t)(0x108615b0), (EAX));
  /* 10845ee8 cmp dword ptr [0x108615b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845eef jne 0x10845ef9 */
  if (!C.zf) goto L_10845ef9;
  /* 10845ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10845ef4 jmp 0x108460bb */
  goto L_108460bb;
L_10845ef9:;
  /* 10845ef9 mov ecx, dword ptr [0x108615b0] */
  ECX = (r32((uint32_t)(0x108615b0)));
  /* 10845eff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10845f05:;
  /* 10845f05 mov edx, dword ptr [0x108615a8] */
  EDX = (r32((uint32_t)(0x108615a8)));
  /* 10845f0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10845f0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10845f11 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10845f14 push eax */
  push32((uint32_t)(EAX));
  /* 10845f15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845f18 push ecx */
  push32((uint32_t)(ECX));
  /* 10845f19 call 0x108460c0 */
  push32(0x10845f1eu); f_108460c0();
  /* 10845f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845f21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10845f24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845f28 jl 0x10845fc1 */
  if ((C.sf!=C.of)) goto L_10845fc1;
  /* 10845f2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845f31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845f34 je 0x10845fc1 */
  if (C.zf) goto L_10845fc1;
  /* 10845f3a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845f3e je 0x10845fb3 */
  if (C.zf) goto L_10845fb3;
  /* 10845f40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10845f42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845f45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845f48 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10845f4b push edx */
  push32((uint32_t)(EDX));
  /* 10845f4c call 0x10836870 */
  push32(0x10845f51u); f_10836870();
  /* 10845f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845f54 jmp 0x10845f5f */
  goto L_10845f5f;
L_10845f56:;
  /* 10845f56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10845f5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10845f5f:;
  /* 10845f5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845f62 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845f65 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845f69 je 0x10845f80 */
  if (C.zf) goto L_10845f80;
  /* 10845f6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845f6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845f71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845f74 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10845f77 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10845f7b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10845f7e jmp 0x10845f56 */
  goto L_10845f56;
L_10845f80:;
  /* 10845f80 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10845f85 push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 10845f8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10845f8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845f8f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10845f92 push eax */
  push32((uint32_t)(EAX));
  /* 10845f93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845f96 push ecx */
  push32((uint32_t)(ECX));
  /* 10845f97 call 0x10836270 */
  push32(0x10845f9cu); f_10836270();
  /* 10845f9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845f9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10845fa2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845fa6 je 0x10845fb1 */
  if (C.zf) goto L_10845fb1;
  /* 10845fa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845fab mov dword ptr [0x108615a8], edx */
  w32((uint32_t)(0x108615a8), (EDX));
L_10845fb1:;
  /* 10845fb1 jmp 0x10845fbf */
  goto L_10845fbf;
L_10845fb3:;
  /* 10845fb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845fb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845fb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10845fbc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10845fbf:;
  /* 10845fbf jmp 0x10846034 */
  goto L_10846034;
L_10845fc1:;
  /* 10845fc1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845fc5 jne 0x1084602d */
  if (!C.zf) goto L_1084602d;
  /* 10845fc7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845fcb jge 0x10845fd5 */
  if ((C.sf==C.of)) goto L_10845fd5;
  /* 10845fcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845fd0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10845fd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10845fd5:;
  /* 10845fd5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10845fda push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 10845fdf push 2 */
  push32((uint32_t)(0x2u));
  /* 10845fe1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10845fe4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10845feb push edx */
  push32((uint32_t)(EDX));
  /* 10845fec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10845fef push eax */
  push32((uint32_t)(EAX));
  /* 10845ff0 call 0x10836270 */
  push32(0x10845ff5u); f_10836270();
  /* 10845ff5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10845ff8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10845ffb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10845fff jne 0x10846009 */
  if (!C.zf) goto L_10846009;
  /* 10846001 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10846004 jmp 0x108460bb */
  goto L_108460bb;
L_10846009:;
  /* 10846009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1084600c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084600f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846012 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10846015 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10846018 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084601b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10846023 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10846026 mov dword ptr [0x108615a8], eax */
  w32((uint32_t)(0x108615a8), (EAX));
  /* 1084602b jmp 0x10846034 */
  goto L_10846034;
L_1084602d:;
  /* 1084602d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084602f jmp 0x108460bb */
  goto L_108460bb;
L_10846034:;
  /* 10846034 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10846038 je 0x108460b9 */
  if (C.zf) goto L_108460b9;
  /* 1084603a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1084603f push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 10846044 push 2 */
  push32((uint32_t)(0x2u));
  /* 10846046 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846049 push ecx */
  push32((uint32_t)(ECX));
  /* 1084604a call 0x10838c10 */
  push32(0x1084604fu); f_10838c10();
  /* 1084604f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10846052 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846055 push eax */
  push32((uint32_t)(EAX));
  /* 10846056 call 0x10835de0 */
  push32(0x1084605bu); f_10835de0();
  /* 1084605b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084605e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10846061 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10846065 je 0x108460b9 */
  if (C.zf) goto L_108460b9;
  /* 10846067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084606a push edx */
  push32((uint32_t)(EDX));
  /* 1084606b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1084606e push eax */
  push32((uint32_t)(EAX));
  /* 1084606f call 0x10838d90 */
  push32(0x10846074u); f_10838d90();
  /* 10846074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10846077 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1084607a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084607d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10846080 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846082 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10846085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10846088 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1084608b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084608e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846091 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10846094 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10846097 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10846099 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1084609b not edx */
  EDX = (~(EDX));
  /* 1084609d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 108460a0 push edx */
  push32((uint32_t)(EDX));
  /* 108460a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108460a4 push eax */
  push32((uint32_t)(EAX));
  /* 108460a5 call dword ptr [0x108642d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642d4))), 0x108460abu);
  /* 108460ab push 2 */
  push32((uint32_t)(0x2u));
  /* 108460ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108460b0 push ecx */
  push32((uint32_t)(ECX));
  /* 108460b1 call 0x10836870 */
  push32(0x108460b6u); f_10836870();
  /* 108460b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108460b9:;
  /* 108460b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108460bb:;
  /* 108460bb pop esi */
  ESI = (pop32());
  /* 108460bc mov esp, ebp */
  ESP = (EBP);
  /* 108460be pop ebp */
  EBP = (pop32());
  /* 108460bf ret  */
  ESPCHK(0x10845de0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x108460c0 (124 bytes, 47 insns) */
void f_108460c0(void) {
  FTRACE(0x108460c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108460c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108460c1 mov ebp, esp */
  EBP = (ESP);
  /* 108460c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108460c4 mov eax, dword ptr [0x108615a8] */
  EAX = (r32((uint32_t)(0x108615a8)));
  /* 108460c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108460cc jmp 0x108460d7 */
  goto L_108460d7;
L_108460ce:;
  /* 108460ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108460d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108460d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108460d7:;
  /* 108460d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108460da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108460dd je 0x1084612a */
  if (C.zf) goto L_1084612a;
  /* 108460df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108460e2 push eax */
  push32((uint32_t)(EAX));
  /* 108460e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108460e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108460e8 push edx */
  push32((uint32_t)(EDX));
  /* 108460e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108460ec push eax */
  push32((uint32_t)(EAX));
  /* 108460ed call 0x10845890 */
  push32(0x108460f2u); f_10845890();
  /* 108460f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108460f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108460f7 jne 0x10846128 */
  if (!C.zf) goto L_10846128;
  /* 108460f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108460fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108460fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10846101 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10846105 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10846108 je 0x1084611a */
  if (C.zf) goto L_1084611a;
  /* 1084610a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084610d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1084610f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10846112 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10846116 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10846118 jne 0x10846128 */
  if (!C.zf) goto L_10846128;
L_1084611a:;
  /* 1084611a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084611d sub eax, dword ptr [0x108615a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108615a8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10846123 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10846126 jmp 0x10846138 */
  goto L_10846138;
L_10846128:;
  /* 10846128 jmp 0x108460ce */
  goto L_108460ce;
L_1084612a:;
  /* 1084612a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1084612d sub eax, dword ptr [0x108615a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108615a8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10846133 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10846136 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10846138:;
  /* 10846138 mov esp, ebp */
  ESP = (EBP);
  /* 1084613a pop ebp */
  EBP = (pop32());
  /* 1084613b ret  */
  ESPCHK(0x108460c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10846140 (238 bytes, 80 insns) */
void f_10846140(void) {
  FTRACE(0x10846140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10846140 push ebp */
  push32((uint32_t)(EBP));
  /* 10846141 mov ebp, esp */
  EBP = (ESP);
  /* 10846143 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10846146 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1084614d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846150 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10846153 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10846157 jne 0x10846160 */
  if (!C.zf) goto L_10846160;
  /* 10846159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1084615b jmp 0x1084622a */
  goto L_1084622a;
L_10846160:;
  /* 10846160 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10846163 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10846165 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10846168 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084616b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1084616e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10846170 je 0x1084617d */
  if (C.zf) goto L_1084617d;
  /* 10846172 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10846175 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846178 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1084617b jmp 0x10846160 */
  goto L_10846160;
L_1084617d:;
  /* 1084617d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10846182 push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 10846187 push 2 */
  push32((uint32_t)(0x2u));
  /* 10846189 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1084618c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10846193 push eax */
  push32((uint32_t)(EAX));
  /* 10846194 call 0x10835de0 */
  push32(0x10846199u); f_10835de0();
  /* 10846199 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084619c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1084619f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108461a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108461a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108461a9 jne 0x108461b5 */
  if (!C.zf) goto L_108461b5;
  /* 108461ab push 9 */
  push32((uint32_t)(0x9u));
  /* 108461ad call 0x10834d50 */
  push32(0x108461b2u); f_10834d50();
  /* 108461b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108461b5:;
  /* 108461b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108461b8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108461bb:;
  /* 108461bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108461be cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108461c1 je 0x1084621e */
  if (C.zf) goto L_1084621e;
  /* 108461c3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 108461c8 push 0x1085dc08 */
  push32((uint32_t)(0x1085dc08u));
  /* 108461cd push 2 */
  push32((uint32_t)(0x2u));
  /* 108461cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108461d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108461d4 push edx */
  push32((uint32_t)(EDX));
  /* 108461d5 call 0x10838c10 */
  push32(0x108461dau); f_10838c10();
  /* 108461da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108461dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108461e0 push eax */
  push32((uint32_t)(EAX));
  /* 108461e1 call 0x10835de0 */
  push32(0x108461e6u); f_10835de0();
  /* 108461e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108461e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108461ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108461ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108461f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108461f4 je 0x1084620a */
  if (C.zf) goto L_1084620a;
  /* 108461f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108461f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108461fb push ecx */
  push32((uint32_t)(ECX));
  /* 108461fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108461ff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10846201 push eax */
  push32((uint32_t)(EAX));
  /* 10846202 call 0x10838d90 */
  push32(0x10846207u); f_10838d90();
  /* 10846207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1084620a:;
  /* 1084620a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1084620d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846210 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10846213 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10846216 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846219 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1084621c jmp 0x108461bb */
  goto L_108461bb;
L_1084621e:;
  /* 1084621e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10846221 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10846227 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1084622a:;
  /* 1084622a mov esp, ebp */
  ESP = (EBP);
  /* 1084622c pop ebp */
  EBP = (pop32());
  /* 1084622d ret  */
  ESPCHK(0x10846140u, _esp0);
  ESP += 4; return;
}

/* FUN_10016230 @ 0x10846230 (237 bytes, 81 insns) */
void f_10846230(void) {
  FTRACE(0x10846230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10846230 push ebp */
  push32((uint32_t)(EBP));
  /* 10846231 mov ebp, esp */
  EBP = (ESP);
  /* 10846233 push ecx */
  push32((uint32_t)(ECX));
  /* 10846234 cmp dword ptr [0x10862cec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862cec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1084623b jne 0x10846252 */
  if (!C.zf) goto L_10846252;
  /* 1084623d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10846240 push eax */
  push32((uint32_t)(EAX));
  /* 10846241 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846244 push ecx */
  push32((uint32_t)(ECX));
  /* 10846245 call 0x10846330 */
  push32(0x1084624au); f_10846330();
  /* 1084624a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084624d jmp 0x10846319 */
  goto L_10846319;
L_10846252:;
  /* 10846252 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10846254 call 0x108397e0 */
  push32(0x10846259u); f_108397e0();
  /* 10846259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1084625c jmp 0x10846267 */
  goto L_10846267;
L_1084625e:;
  /* 1084625e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846261 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846264 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10846267:;
  /* 10846267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1084626a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1084626e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10846272 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10846275 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1084627b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1084627d je 0x108462fb */
  if (C.zf) goto L_108462fb;
  /* 1084627f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10846282 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10846287 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10846289 mov cl, byte ptr [eax + 0x10862e01] */
  CL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 1084628f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10846292 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10846294 je 0x108462e6 */
  if (C.zf) goto L_108462e6;
  /* 10846296 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846299 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1084629c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1084629f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108462a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108462a4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108462a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108462a8 jne 0x108462b8 */
  if (!C.zf) goto L_108462b8;
  /* 108462aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108462ac call 0x10839880 */
  push32(0x108462b1u); f_10839880();
  /* 108462b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108462b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108462b6 jmp 0x10846319 */
  goto L_10846319;
L_108462b8:;
  /* 108462b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108462bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108462c1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108462c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108462c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108462c9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108462cb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108462cd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108462d0 jne 0x108462e4 */
  if (!C.zf) goto L_108462e4;
  /* 108462d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108462d4 call 0x10839880 */
  push32(0x108462d9u); f_10839880();
  /* 108462d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108462dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108462df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108462e2 jmp 0x10846319 */
  goto L_10846319;
L_108462e4:;
  /* 108462e4 jmp 0x108462f6 */
  goto L_108462f6;
L_108462e6:;
  /* 108462e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108462e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108462ef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108462f2 jne 0x108462f6 */
  if (!C.zf) goto L_108462f6;
  /* 108462f4 jmp 0x108462fb */
  goto L_108462fb;
L_108462f6:;
  /* 108462f6 jmp 0x1084625e */
  goto L_1084625e;
L_108462fb:;
  /* 108462fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 108462fd call 0x10839880 */
  push32(0x10846302u); f_10839880();
  /* 10846302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10846305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10846308 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084630d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10846310 jne 0x10846317 */
  if (!C.zf) goto L_10846317;
  /* 10846312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10846315 jmp 0x10846319 */
  goto L_10846319;
L_10846317:;
  /* 10846317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10846319:;
  /* 10846319 mov esp, ebp */
  ESP = (EBP);
  /* 1084631b pop ebp */
  EBP = (pop32());
  /* 1084631c ret  */
  ESPCHK(0x10846230u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10846330 (193 bytes, 87 insns) */
void f_10846330(void) {
  FTRACE(0x10846330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10846330 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10846332 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10846336 push ebx */
  push32((uint32_t)(EBX));
  /* 10846337 mov ebx, eax */
  EBX = (EAX);
  /* 10846339 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1084633c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10846340 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10846346 je 0x1084635b */
  if (C.zf) goto L_1084635b;
L_10846348:;
  /* 10846348 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1084634a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1084634b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1084634d je 0x10846320 */
  if (C.zf) { jmp_ind(0x10846320u); return; }
  /* 1084634f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10846351 je 0x108463a4 */
  if (C.zf) goto L_108463a4;
  /* 10846353 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10846359 jne 0x10846348 */
  if (!C.zf) goto L_10846348;
L_1084635b:;
  /* 1084635b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1084635d push edi */
  push32((uint32_t)(EDI));
  /* 1084635e mov eax, ebx */
  EAX = (EBX);
  /* 10846360 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10846363 push esi */
  push32((uint32_t)(ESI));
  /* 10846364 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10846366:;
  /* 10846366 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10846368 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1084636d mov eax, ecx */
  EAX = (ECX);
  /* 1084636f mov esi, edi */
  ESI = (EDI);
  /* 10846371 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10846373 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10846375 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10846377 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1084637a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1084637d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1084637f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10846381 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10846384 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1084638a jne 0x108463a8 */
  if (!C.zf) goto L_108463a8;
  /* 1084638c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10846391 je 0x10846366 */
  if (C.zf) goto L_10846366;
  /* 10846393 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10846398 jne 0x108463a2 */
  if (!C.zf) goto L_108463a2;
  /* 1084639a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 108463a0 jne 0x10846366 */
  if (!C.zf) goto L_10846366;
L_108463a2:;
  /* 108463a2 pop esi */
  ESI = (pop32());
  /* 108463a3 pop edi */
  EDI = (pop32());
L_108463a4:;
  /* 108463a4 pop ebx */
  EBX = (pop32());
  /* 108463a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108463a7 ret  */
  ESPCHK(0x10846330u, _esp0);
  ESP += 4; return;
L_108463a8:;
  /* 108463a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 108463ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108463ad je 0x108463e5 */
  if (C.zf) goto L_108463e5;
  /* 108463af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108463b1 je 0x108463a2 */
  if (C.zf) goto L_108463a2;
  /* 108463b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108463b5 je 0x108463de */
  if (C.zf) goto L_108463de;
  /* 108463b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108463b9 je 0x108463a2 */
  if (C.zf) goto L_108463a2;
  /* 108463bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108463be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108463c0 je 0x108463d7 */
  if (C.zf) goto L_108463d7;
  /* 108463c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108463c4 je 0x108463a2 */
  if (C.zf) goto L_108463a2;
  /* 108463c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108463c8 je 0x108463d0 */
  if (C.zf) goto L_108463d0;
  /* 108463ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108463cc je 0x108463a2 */
  if (C.zf) goto L_108463a2;
  /* 108463ce jmp 0x10846366 */
  goto L_10846366;
L_108463d0:;
  /* 108463d0 pop esi */
  ESI = (pop32());
  /* 108463d1 pop edi */
  EDI = (pop32());
  /* 108463d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 108463d5 pop ebx */
  EBX = (pop32());
  /* 108463d6 ret  */
  ESPCHK(0x10846330u, _esp0);
  ESP += 4; return;
L_108463d7:;
  /* 108463d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 108463da pop esi */
  ESI = (pop32());
  /* 108463db pop edi */
  EDI = (pop32());
  /* 108463dc pop ebx */
  EBX = (pop32());
  /* 108463dd ret  */
  ESPCHK(0x10846330u, _esp0);
  ESP += 4; return;
L_108463de:;
  /* 108463de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 108463e1 pop esi */
  ESI = (pop32());
  /* 108463e2 pop edi */
  EDI = (pop32());
  /* 108463e3 pop ebx */
  EBX = (pop32());
  /* 108463e4 ret  */
  ESPCHK(0x10846330u, _esp0);
  ESP += 4; return;
L_108463e5:;
  /* 108463e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 108463e8 pop esi */
  ESI = (pop32());
  /* 108463e9 pop edi */
  EDI = (pop32());
  /* 108463ea pop ebx */
  EBX = (pop32());
  /* 108463eb ret  */
  ESPCHK(0x10846330u, _esp0);
  ESP += 4; return;
  /* 108463ec jmp dword ptr [0x10864388] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10864388)))); return;
}

/* RtlUnwind @ 0x1084653c (6 bytes, 1 insns) */
void f_1084653c(void) {
  FTRACE(0x1084653cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1084653c jmp dword ptr [0x1086430c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1086430c)))); return;
}

