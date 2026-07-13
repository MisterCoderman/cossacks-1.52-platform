#include "recomp.h"

/* FUN_10011d60 @ 0x107f1d60 (289 bytes, 97 insns) */
void f_107f1d60(void) {
  FTRACE(0x107f1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1d60 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1d61 mov ebp, esp */
  EBP = (ESP);
  /* 107f1d63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1d66 push esi */
  push32((uint32_t)(ESI));
  /* 107f1d67 mov eax, dword ptr [0x1080fc98] */
  EAX = (r32((uint32_t)(0x1080fc98)));
  /* 107f1d6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f1d6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f1d76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f1d7d jmp 0x107f1d88 */
  goto L_107f1d88;
L_107f1d7f:;
  /* 107f1d7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1d82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1d85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107f1d88:;
  /* 107f1d88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1d8c jae 0x107f1dc1 */
  if (!C.cf) goto L_107f1dc1;
  /* 107f1d8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1d91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1d94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107f1d97 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1d98 call 0x107e7e40 */
  push32(0x107f1d9du); f_107e7e40();
  /* 107f1d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1da0 mov esi, eax */
  ESI = (EAX);
  /* 107f1da2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1da5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1da8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 107f1dac push ecx */
  push32((uint32_t)(ECX));
  /* 107f1dad call 0x107e7e40 */
  push32(0x107f1db2u); f_107e7e40();
  /* 107f1db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1db5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1db8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107f1dbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f1dbf jmp 0x107f1d7f */
  goto L_107f1d7f;
L_107f1dc1:;
  /* 107f1dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f1dc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1dc7 push eax */
  push32((uint32_t)(EAX));
  /* 107f1dc8 call 0x107e4ff0 */
  push32(0x107f1dcdu); f_107e4ff0();
  /* 107f1dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1dd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f1dd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1dd7 je 0x107f1e79 */
  if (C.zf) goto L_107f1e79;
  /* 107f1ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1de0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f1de3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f1dea jmp 0x107f1df5 */
  goto L_107f1df5;
L_107f1dec:;
  /* 107f1dec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1def add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1df2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107f1df5:;
  /* 107f1df5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1df9 jae 0x107f1e6a */
  if (!C.cf) goto L_107f1e6a;
  /* 107f1dfb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1dfe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 107f1e01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e07 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f1e0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1e0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1e10 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107f1e13 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1e14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e17 push edx */
  push32((uint32_t)(EDX));
  /* 107f1e18 call 0x107e7fc0 */
  push32(0x107f1e1du); f_107e7fc0();
  /* 107f1e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e20 push eax */
  push32((uint32_t)(EAX));
  /* 107f1e21 call 0x107e7e40 */
  push32(0x107f1e26u); f_107e7e40();
  /* 107f1e26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f1e31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e34 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 107f1e37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f1e40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1e43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1e46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 107f1e4a push eax */
  push32((uint32_t)(EAX));
  /* 107f1e4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e4e push ecx */
  push32((uint32_t)(ECX));
  /* 107f1e4f call 0x107e7fc0 */
  push32(0x107f1e54u); f_107e7fc0();
  /* 107f1e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e57 push eax */
  push32((uint32_t)(EAX));
  /* 107f1e58 call 0x107e7e40 */
  push32(0x107f1e5du); f_107e7e40();
  /* 107f1e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e65 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f1e68 jmp 0x107f1dec */
  goto L_107f1dec;
L_107f1e6a:;
  /* 107f1e6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e6d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107f1e70 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1e73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1e76 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107f1e79:;
  /* 107f1e79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1e7c pop esi */
  ESI = (pop32());
  /* 107f1e7d mov esp, ebp */
  ESP = (EBP);
  /* 107f1e7f pop ebp */
  EBP = (pop32());
  /* 107f1e80 ret  */
  ESPCHK(0x107f1d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x107f1e90 (291 bytes, 97 insns) */
void f_107f1e90(void) {
  FTRACE(0x107f1e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1e90 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1e91 mov ebp, esp */
  EBP = (ESP);
  /* 107f1e93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1e96 push esi */
  push32((uint32_t)(ESI));
  /* 107f1e97 mov eax, dword ptr [0x1080fc98] */
  EAX = (r32((uint32_t)(0x1080fc98)));
  /* 107f1e9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f1e9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f1ea6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f1ead jmp 0x107f1eb8 */
  goto L_107f1eb8;
L_107f1eaf:;
  /* 107f1eaf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1eb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1eb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107f1eb8:;
  /* 107f1eb8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1ebc jae 0x107f1ef2 */
  if (!C.cf) goto L_107f1ef2;
  /* 107f1ebe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1ec1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1ec4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 107f1ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1ec9 call 0x107e7e40 */
  push32(0x107f1eceu); f_107e7e40();
  /* 107f1ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1ed1 mov esi, eax */
  ESI = (EAX);
  /* 107f1ed3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1ed6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1ed9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 107f1edd push ecx */
  push32((uint32_t)(ECX));
  /* 107f1ede call 0x107e7e40 */
  push32(0x107f1ee3u); f_107e7e40();
  /* 107f1ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1ee6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1ee9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107f1eed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f1ef0 jmp 0x107f1eaf */
  goto L_107f1eaf;
L_107f1ef2:;
  /* 107f1ef2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f1ef5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1ef8 push eax */
  push32((uint32_t)(EAX));
  /* 107f1ef9 call 0x107e4ff0 */
  push32(0x107f1efeu); f_107e4ff0();
  /* 107f1efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f1f04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1f08 je 0x107f1fab */
  if (C.zf) goto L_107f1fab;
  /* 107f1f0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1f11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f1f14 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f1f1b jmp 0x107f1f26 */
  goto L_107f1f26;
L_107f1f1d:;
  /* 107f1f1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1f20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107f1f26:;
  /* 107f1f26 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1f2a jae 0x107f1f9c */
  if (!C.cf) goto L_107f1f9c;
  /* 107f1f2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f2f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 107f1f32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f1f3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1f3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1f41 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 107f1f45 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1f46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f49 push edx */
  push32((uint32_t)(EDX));
  /* 107f1f4a call 0x107e7fc0 */
  push32(0x107f1f4fu); f_107e7fc0();
  /* 107f1f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f52 push eax */
  push32((uint32_t)(EAX));
  /* 107f1f53 call 0x107e7e40 */
  push32(0x107f1f58u); f_107e7e40();
  /* 107f1f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f1f63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f66 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 107f1f69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f1f72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1f75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1f78 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107f1f7c push eax */
  push32((uint32_t)(EAX));
  /* 107f1f7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f80 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1f81 call 0x107e7fc0 */
  push32(0x107f1f86u); f_107e7fc0();
  /* 107f1f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f89 push eax */
  push32((uint32_t)(EAX));
  /* 107f1f8a call 0x107e7e40 */
  push32(0x107f1f8fu); f_107e7e40();
  /* 107f1f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f95 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1f97 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f1f9a jmp 0x107f1f1d */
  goto L_107f1f1d;
L_107f1f9c:;
  /* 107f1f9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1f9f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107f1fa2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f1fa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1fa8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107f1fab:;
  /* 107f1fab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1fae pop esi */
  ESI = (pop32());
  /* 107f1faf mov esp, ebp */
  ESP = (EBP);
  /* 107f1fb1 pop ebp */
  EBP = (pop32());
  /* 107f1fb2 ret  */
  ESPCHK(0x107f1e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x107f1fc0 (878 bytes, 273 insns) */
void f_107f1fc0(void) {
  FTRACE(0x107f1fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1fc1 mov ebp, esp */
  EBP = (ESP);
  /* 107f1fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1fc6 push esi */
  push32((uint32_t)(ESI));
  /* 107f1fc7 mov eax, dword ptr [0x1080fc98] */
  EAX = (r32((uint32_t)(0x1080fc98)));
  /* 107f1fcc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f1fcf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f1fd6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f1fdd jmp 0x107f1fe8 */
  goto L_107f1fe8;
L_107f1fdf:;
  /* 107f1fdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1fe5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107f1fe8:;
  /* 107f1fe8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1fec jae 0x107f2021 */
  if (!C.cf) goto L_107f2021;
  /* 107f1fee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f1ff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1ff4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107f1ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1ff8 call 0x107e7e40 */
  push32(0x107f1ffdu); f_107e7e40();
  /* 107f1ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2000 mov esi, eax */
  ESI = (EAX);
  /* 107f2002 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2005 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2008 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 107f200c push ecx */
  push32((uint32_t)(ECX));
  /* 107f200d call 0x107e7e40 */
  push32(0x107f2012u); f_107e7e40();
  /* 107f2012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2015 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2018 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107f201c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f201f jmp 0x107f1fdf */
  goto L_107f1fdf;
L_107f2021:;
  /* 107f2021 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f2028 jmp 0x107f2033 */
  goto L_107f2033;
L_107f202a:;
  /* 107f202a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f202d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2030 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107f2033:;
  /* 107f2033 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2037 jae 0x107f206d */
  if (!C.cf) goto L_107f206d;
  /* 107f2039 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f203c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f203f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 107f2043 push eax */
  push32((uint32_t)(EAX));
  /* 107f2044 call 0x107e7e40 */
  push32(0x107f2049u); f_107e7e40();
  /* 107f2049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f204c mov esi, eax */
  ESI = (EAX);
  /* 107f204e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2051 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2054 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107f2058 push eax */
  push32((uint32_t)(EAX));
  /* 107f2059 call 0x107e7e40 */
  push32(0x107f205eu); f_107e7e40();
  /* 107f205e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2061 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2064 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107f2068 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f206b jmp 0x107f202a */
  goto L_107f202a;
L_107f206d:;
  /* 107f206d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2070 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 107f2076 push eax */
  push32((uint32_t)(EAX));
  /* 107f2077 call 0x107e7e40 */
  push32(0x107f207cu); f_107e7e40();
  /* 107f207c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f207f mov esi, eax */
  ESI = (EAX);
  /* 107f2081 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2084 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 107f208a push edx */
  push32((uint32_t)(EDX));
  /* 107f208b call 0x107e7e40 */
  push32(0x107f2090u); f_107e7e40();
  /* 107f2090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2093 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2096 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107f209a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f209d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f20a0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 107f20a6 push edx */
  push32((uint32_t)(EDX));
  /* 107f20a7 call 0x107e7e40 */
  push32(0x107f20acu); f_107e7e40();
  /* 107f20ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f20af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f20b2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107f20b6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f20b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f20bc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 107f20c2 push ecx */
  push32((uint32_t)(ECX));
  /* 107f20c3 call 0x107e7e40 */
  push32(0x107f20c8u); f_107e7e40();
  /* 107f20c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f20cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f20ce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107f20d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f20d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f20d8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 107f20de push edx */
  push32((uint32_t)(EDX));
  /* 107f20df call 0x107e7e40 */
  push32(0x107f20e4u); f_107e7e40();
  /* 107f20e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f20e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f20ea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107f20ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f20f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f20f4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f20f9 push eax */
  push32((uint32_t)(EAX));
  /* 107f20fa call 0x107e4ff0 */
  push32(0x107f20ffu); f_107e4ff0();
  /* 107f20ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f2105 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2109 je 0x107f2326 */
  if (C.zf) goto L_107f2326;
  /* 107f210f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2112 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107f2115 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2118 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f211e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f2121 push 0xac */
  push32((uint32_t)(0xacu));
  /* 107f2126 mov eax, dword ptr [0x1080fc98] */
  EAX = (r32((uint32_t)(0x1080fc98)));
  /* 107f212b push eax */
  push32((uint32_t)(EAX));
  /* 107f212c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f212f push ecx */
  push32((uint32_t)(ECX));
  /* 107f2130 call 0x107eb8f0 */
  push32(0x107f2135u); f_107eb8f0();
  /* 107f2135 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2138 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f213f jmp 0x107f214a */
  goto L_107f214a;
L_107f2141:;
  /* 107f2141 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2144 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2147 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107f214a:;
  /* 107f214a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f214e jae 0x107f21be */
  if (!C.cf) goto L_107f21be;
  /* 107f2150 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2153 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f2156 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2159 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 107f215c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f215f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2162 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107f2165 push edx */
  push32((uint32_t)(EDX));
  /* 107f2166 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2169 push eax */
  push32((uint32_t)(EAX));
  /* 107f216a call 0x107e7fc0 */
  push32(0x107f216fu); f_107e7fc0();
  /* 107f216f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2172 push eax */
  push32((uint32_t)(EAX));
  /* 107f2173 call 0x107e7e40 */
  push32(0x107f2178u); f_107e7e40();
  /* 107f2178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f217b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f217e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107f2182 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f2185 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2188 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f218b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f218e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 107f2192 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2198 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 107f219c push edx */
  push32((uint32_t)(EDX));
  /* 107f219d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f21a0 push eax */
  push32((uint32_t)(EAX));
  /* 107f21a1 call 0x107e7fc0 */
  push32(0x107f21a6u); f_107e7fc0();
  /* 107f21a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f21a9 push eax */
  push32((uint32_t)(EAX));
  /* 107f21aa call 0x107e7e40 */
  push32(0x107f21afu); f_107e7e40();
  /* 107f21af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f21b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f21b5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107f21b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f21bc jmp 0x107f2141 */
  goto L_107f2141;
L_107f21be:;
  /* 107f21be mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f21c5 jmp 0x107f21d0 */
  goto L_107f21d0;
L_107f21c7:;
  /* 107f21c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f21ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f21cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107f21d0:;
  /* 107f21d0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f21d4 jae 0x107f2246 */
  if (!C.cf) goto L_107f2246;
  /* 107f21d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f21d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f21dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f21df mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 107f21e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f21e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f21e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 107f21ed push eax */
  push32((uint32_t)(EAX));
  /* 107f21ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f21f1 push ecx */
  push32((uint32_t)(ECX));
  /* 107f21f2 call 0x107e7fc0 */
  push32(0x107f21f7u); f_107e7fc0();
  /* 107f21f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f21fa push eax */
  push32((uint32_t)(EAX));
  /* 107f21fb call 0x107e7e40 */
  push32(0x107f2200u); f_107e7e40();
  /* 107f2200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2203 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2206 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107f220a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f220d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2210 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f2213 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2216 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 107f221a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f221d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2220 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107f2224 push eax */
  push32((uint32_t)(EAX));
  /* 107f2225 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2228 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2229 call 0x107e7fc0 */
  push32(0x107f222eu); f_107e7fc0();
  /* 107f222e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2231 push eax */
  push32((uint32_t)(EAX));
  /* 107f2232 call 0x107e7e40 */
  push32(0x107f2237u); f_107e7e40();
  /* 107f2237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f223a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f223d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107f2241 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f2244 jmp 0x107f21c7 */
  goto L_107f21c7;
L_107f2246:;
  /* 107f2246 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f2249 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f224c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 107f2252 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2255 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 107f225b push ecx */
  push32((uint32_t)(ECX));
  /* 107f225c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f225f push edx */
  push32((uint32_t)(EDX));
  /* 107f2260 call 0x107e7fc0 */
  push32(0x107f2265u); f_107e7fc0();
  /* 107f2265 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2268 push eax */
  push32((uint32_t)(EAX));
  /* 107f2269 call 0x107e7e40 */
  push32(0x107f226eu); f_107e7e40();
  /* 107f226e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2271 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2274 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107f2278 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f227b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f227e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2281 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 107f2287 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f228a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 107f2290 push eax */
  push32((uint32_t)(EAX));
  /* 107f2291 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2294 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2295 call 0x107e7fc0 */
  push32(0x107f229au); f_107e7fc0();
  /* 107f229a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f229d push eax */
  push32((uint32_t)(EAX));
  /* 107f229e call 0x107e7e40 */
  push32(0x107f22a3u); f_107e7e40();
  /* 107f22a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f22a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f22a9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107f22ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f22b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f22b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f22b6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 107f22bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f22bf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 107f22c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107f22c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f22c9 push edx */
  push32((uint32_t)(EDX));
  /* 107f22ca call 0x107e7fc0 */
  push32(0x107f22cfu); f_107e7fc0();
  /* 107f22cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f22d2 push eax */
  push32((uint32_t)(EAX));
  /* 107f22d3 call 0x107e7e40 */
  push32(0x107f22d8u); f_107e7e40();
  /* 107f22d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f22db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f22de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107f22e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f22e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f22e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f22eb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 107f22f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f22f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 107f22fa push eax */
  push32((uint32_t)(EAX));
  /* 107f22fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f22fe push ecx */
  push32((uint32_t)(ECX));
  /* 107f22ff call 0x107e7fc0 */
  push32(0x107f2304u); f_107e7fc0();
  /* 107f2304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2307 push eax */
  push32((uint32_t)(EAX));
  /* 107f2308 call 0x107e7e40 */
  push32(0x107f230du); f_107e7e40();
  /* 107f230d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2310 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2313 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107f2317 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f231a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f231d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2320 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_107f2326:;
  /* 107f2326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2329 pop esi */
  ESI = (pop32());
  /* 107f232a mov esp, ebp */
  ESP = (EBP);
  /* 107f232c pop ebp */
  EBP = (pop32());
  /* 107f232d ret  */
  ESPCHK(0x107f1fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012330 @ 0x107f2330 (31 bytes, 15 insns) */
void f_107f2330(void) {
  FTRACE(0x107f2330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f2330 push ebp */
  push32((uint32_t)(EBP));
  /* 107f2331 mov ebp, esp */
  EBP = (ESP);
  /* 107f2333 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f2335 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2338 push eax */
  push32((uint32_t)(EAX));
  /* 107f2339 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f233c push ecx */
  push32((uint32_t)(ECX));
  /* 107f233d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2340 push edx */
  push32((uint32_t)(EDX));
  /* 107f2341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2344 push eax */
  push32((uint32_t)(EAX));
  /* 107f2345 call 0x107f2350 */
  push32(0x107f234au); f_107f2350();
  /* 107f234a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f234d pop ebp */
  EBP = (pop32());
  /* 107f234e ret  */
  ESPCHK(0x107f2330u, _esp0);
  ESP += 4; return;
}

/* FUN_10012350 @ 0x107f2350 (393 bytes, 123 insns) */
void f_107f2350(void) {
  FTRACE(0x107f2350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f2350 push ebp */
  push32((uint32_t)(EBP));
  /* 107f2351 mov ebp, esp */
  EBP = (ESP);
  /* 107f2353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2356 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f235a jne 0x107f2366 */
  if (!C.zf) goto L_107f2366;
  /* 107f235c mov eax, dword ptr [0x1080fc98] */
  EAX = (r32((uint32_t)(0x1080fc98)));
  /* 107f2361 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107f2364 jmp 0x107f236c */
  goto L_107f236c;
L_107f2366:;
  /* 107f2366 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2369 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107f236c:;
  /* 107f236c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f236f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f2372 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2375 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f2378 push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107f237d call dword ptr [0x10813354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813354))), 0x107f2383u);
  /* 107f2383 cmp dword ptr [0x10810984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f238a je 0x107f23aa */
  if (C.zf) goto L_107f23aa;
  /* 107f238c push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107f2391 call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107f2397u);
  /* 107f2397 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f2399 call 0x107e8a10 */
  push32(0x107f239eu); f_107e8a10();
  /* 107f239e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f23a1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107f23a8 jmp 0x107f23b1 */
  goto L_107f23b1;
L_107f23aa:;
  /* 107f23aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107f23b1:;
  /* 107f23b1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f23b5 jbe 0x107f24a2 */
  if ((C.cf||C.zf)) goto L_107f24a2;
  /* 107f23bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f23be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f23c0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 107f23c3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f23c7 je 0x107f23d1 */
  if (C.zf) goto L_107f23d1;
  /* 107f23c9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f23cd je 0x107f23d6 */
  if (C.zf) goto L_107f23d6;
  /* 107f23cf jmp 0x107f2430 */
  goto L_107f2430;
L_107f23d1:;
  /* 107f23d1 jmp 0x107f24a2 */
  goto L_107f24a2;
L_107f23d6:;
  /* 107f23d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f23d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f23dc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 107f23df mov dword ptr [0x10810970], 0 */
  w32((uint32_t)(0x10810970), (0x0u));
  /* 107f23e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f23ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f23ef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f23f2 jne 0x107f2407 */
  if (!C.zf) goto L_107f2407;
  /* 107f23f4 mov dword ptr [0x10810970], 1 */
  w32((uint32_t)(0x10810970), (0x1u));
  /* 107f23fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2401 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2404 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107f2407:;
  /* 107f2407 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f240a push ecx */
  push32((uint32_t)(ECX));
  /* 107f240b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 107f240e push edx */
  push32((uint32_t)(EDX));
  /* 107f240f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 107f2412 push eax */
  push32((uint32_t)(EAX));
  /* 107f2413 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2416 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2417 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f241a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f241c push eax */
  push32((uint32_t)(EAX));
  /* 107f241d call 0x107f24e0 */
  push32(0x107f2422u); f_107f24e0();
  /* 107f2422 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2425 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2428 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f242b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107f242e jmp 0x107f249d */
  goto L_107f249d;
L_107f2430:;
  /* 107f2430 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f2435 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f2437 mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f243d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f243f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f2443 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107f2449 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f244b je 0x107f2478 */
  if (C.zf) goto L_107f2478;
  /* 107f244d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2451 jbe 0x107f2478 */
  if ((C.cf||C.zf)) goto L_107f2478;
  /* 107f2453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2456 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2459 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f245b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107f245d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2463 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f2466 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2469 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f246c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107f246f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2472 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2475 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107f2478:;
  /* 107f2478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f247b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f247e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f2480 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107f2482 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2485 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2488 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f248b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f248e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2491 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107f2494 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2497 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f249a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107f249d:;
  /* 107f249d jmp 0x107f23b1 */
  goto L_107f23b1;
L_107f24a2:;
  /* 107f24a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f24a6 je 0x107f24b4 */
  if (C.zf) goto L_107f24b4;
  /* 107f24a8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f24aa call 0x107e8ab0 */
  push32(0x107f24afu); f_107e8ab0();
  /* 107f24af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f24b2 jmp 0x107f24bf */
  goto L_107f24bf;
L_107f24b4:;
  /* 107f24b4 push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107f24b9 call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107f24bfu);
L_107f24bf:;
  /* 107f24bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f24c3 jbe 0x107f24d3 */
  if ((C.cf||C.zf)) goto L_107f24d3;
  /* 107f24c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f24c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107f24cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f24ce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f24d1 jmp 0x107f24d5 */
  goto L_107f24d5;
L_107f24d3:;
  /* 107f24d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f24d5:;
  /* 107f24d5 mov esp, ebp */
  ESP = (EBP);
  /* 107f24d7 pop ebp */
  EBP = (pop32());
  /* 107f24d8 ret  */
  ESPCHK(0x107f2350u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x107f24e0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_107f24e0(void) {
  FTRACE(0x107f24e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f24e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f24e1 mov ebp, esp */
  EBP = (ESP);
  /* 107f24e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f24e6 push esi */
  push32((uint32_t)(ESI));
  /* 107f24e7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 107f24eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f24ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f24f1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f24f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f24f7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f24fb ja 0x107f2a48 */
  if ((!C.cf&&!C.zf)) goto L_107f2a48;
  /* 107f2501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f2506 mov dl, byte ptr [eax + 0x107f2aa9] */
  DL = (r8((uint32_t)(EAX + 0x107f2aa9)));
  /* 107f250c jmp dword ptr [edx*4 + 0x107f2a4d] */
  switch (EDX) {
    case 0: goto L_107f2a26;
    case 1: goto L_107f2535;
    case 2: goto L_107f257b;
    case 3: goto L_107f26c8;
    case 4: goto L_107f26f0;
    case 5: goto L_107f278f;
    case 6: goto L_107f27fb;
    case 7: goto L_107f2824;
    case 8: goto L_107f2865;
    case 9: goto L_107f2947;
    case 10: goto L_107f29ae;
    case 11: goto L_107f29fb;
    case 12: goto L_107f2513;
    case 13: goto L_107f2558;
    case 14: goto L_107f259e;
    case 15: goto L_107f269e;
    case 16: goto L_107f2735;
    case 17: goto L_107f2762;
    case 18: goto L_107f27b7;
    case 19: goto L_107f283b;
    case 20: goto L_107f28e9;
    case 21: goto L_107f2978;
    case 22: goto L_107f2a48;
    default: x86_unimpl("switch@0x107f250c out of table"); return;
  }
L_107f2513:;
  /* 107f2513 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2516 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2517 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f251a push edx */
  push32((uint32_t)(EDX));
  /* 107f251b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f251e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107f2521 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2524 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107f2527 push eax */
  push32((uint32_t)(EAX));
  /* 107f2528 call 0x107f2b00 */
  push32(0x107f252du); f_107f2b00();
  /* 107f252d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2530 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2535:;
  /* 107f2535 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2538 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2539 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f253c push edx */
  push32((uint32_t)(EDX));
  /* 107f253d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2540 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107f2543 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2546 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 107f254a push eax */
  push32((uint32_t)(EAX));
  /* 107f254b call 0x107f2b00 */
  push32(0x107f2550u); f_107f2b00();
  /* 107f2550 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2553 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2558:;
  /* 107f2558 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f255b push ecx */
  push32((uint32_t)(ECX));
  /* 107f255c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f255f push edx */
  push32((uint32_t)(EDX));
  /* 107f2560 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2563 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107f2566 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2569 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 107f256d push eax */
  push32((uint32_t)(EAX));
  /* 107f256e call 0x107f2b00 */
  push32(0x107f2573u); f_107f2b00();
  /* 107f2573 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2576 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f257b:;
  /* 107f257b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f257e push ecx */
  push32((uint32_t)(ECX));
  /* 107f257f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2582 push edx */
  push32((uint32_t)(EDX));
  /* 107f2583 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2586 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107f2589 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f258c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107f2590 push eax */
  push32((uint32_t)(EAX));
  /* 107f2591 call 0x107f2b00 */
  push32(0x107f2596u); f_107f2b00();
  /* 107f2596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2599 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f259e:;
  /* 107f259e cmp dword ptr [0x10810970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f25a5 je 0x107f2626 */
  if (C.zf) goto L_107f2626;
  /* 107f25a7 mov dword ptr [0x10810970], 0 */
  w32((uint32_t)(0x10810970), (0x0u));
  /* 107f25b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f25b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107f25b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f25b8 push edx */
  push32((uint32_t)(EDX));
  /* 107f25b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f25bc push eax */
  push32((uint32_t)(EAX));
  /* 107f25bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f25c0 push ecx */
  push32((uint32_t)(ECX));
  /* 107f25c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f25c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 107f25ca push eax */
  push32((uint32_t)(EAX));
  /* 107f25cb call 0x107f2cb0 */
  push32(0x107f25d0u); f_107f2cb0();
  /* 107f25d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f25d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f25d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f25d9 jne 0x107f25e0 */
  if (!C.zf) goto L_107f25e0;
  /* 107f25db jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f25e0:;
  /* 107f25e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f25e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f25e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 107f25e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f25eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f25ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f25f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f25f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f25f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f25f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f25fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f25fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2600 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f2602 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2605 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2606 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2609 push edx */
  push32((uint32_t)(EDX));
  /* 107f260a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f260d push eax */
  push32((uint32_t)(EAX));
  /* 107f260e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2611 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2612 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2615 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 107f261b push eax */
  push32((uint32_t)(EAX));
  /* 107f261c call 0x107f2cb0 */
  push32(0x107f2621u); f_107f2cb0();
  /* 107f2621 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2624 jmp 0x107f2699 */
  goto L_107f2699;
L_107f2626:;
  /* 107f2626 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2629 push ecx */
  push32((uint32_t)(ECX));
  /* 107f262a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f262d push edx */
  push32((uint32_t)(EDX));
  /* 107f262e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2631 push eax */
  push32((uint32_t)(EAX));
  /* 107f2632 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2635 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2636 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2639 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 107f263f push eax */
  push32((uint32_t)(EAX));
  /* 107f2640 call 0x107f2cb0 */
  push32(0x107f2645u); f_107f2cb0();
  /* 107f2645 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2648 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f264b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f264e jne 0x107f2655 */
  if (!C.zf) goto L_107f2655;
  /* 107f2650 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2655:;
  /* 107f2655 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2658 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f265a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 107f265d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2660 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f2662 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2665 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2668 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f266a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f266d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f266f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2672 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2675 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f2677 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f267a push ecx */
  push32((uint32_t)(ECX));
  /* 107f267b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f267e push edx */
  push32((uint32_t)(EDX));
  /* 107f267f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2682 push eax */
  push32((uint32_t)(EAX));
  /* 107f2683 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2686 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2687 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f268a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 107f2690 push eax */
  push32((uint32_t)(EAX));
  /* 107f2691 call 0x107f2cb0 */
  push32(0x107f2696u); f_107f2cb0();
  /* 107f2696 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f2699:;
  /* 107f2699 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f269e:;
  /* 107f269e mov ecx, dword ptr [0x10810970] */
  ECX = (r32((uint32_t)(0x10810970)));
  /* 107f26a4 mov dword ptr [0x10810980], ecx */
  w32((uint32_t)(0x10810980), (ECX));
  /* 107f26aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f26ad push edx */
  push32((uint32_t)(EDX));
  /* 107f26ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f26b1 push eax */
  push32((uint32_t)(EAX));
  /* 107f26b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f26b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f26b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107f26ba push edx */
  push32((uint32_t)(EDX));
  /* 107f26bb call 0x107f2b50 */
  push32(0x107f26c0u); f_107f2b50();
  /* 107f26c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f26c3 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f26c8:;
  /* 107f26c8 mov eax, dword ptr [0x10810970] */
  EAX = (r32((uint32_t)(0x10810970)));
  /* 107f26cd mov dword ptr [0x10810980], eax */
  w32((uint32_t)(0x10810980), (EAX));
  /* 107f26d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f26d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107f26d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f26d9 push edx */
  push32((uint32_t)(EDX));
  /* 107f26da push 2 */
  push32((uint32_t)(0x2u));
  /* 107f26dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f26df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107f26e2 push ecx */
  push32((uint32_t)(ECX));
  /* 107f26e3 call 0x107f2b50 */
  push32(0x107f26e8u); f_107f2b50();
  /* 107f26e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f26eb jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f26f0:;
  /* 107f26f0 mov edx, dword ptr [0x10810970] */
  EDX = (r32((uint32_t)(0x10810970)));
  /* 107f26f6 mov dword ptr [0x10810980], edx */
  w32((uint32_t)(0x10810980), (EDX));
  /* 107f26fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f26ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 107f2702 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f2703 mov ecx, 0xc */
  ECX = (0xcu);
  /* 107f2708 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f270a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f270d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2711 jne 0x107f271a */
  if (!C.zf) goto L_107f271a;
  /* 107f2713 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_107f271a:;
  /* 107f271a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f271d push edx */
  push32((uint32_t)(EDX));
  /* 107f271e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2721 push eax */
  push32((uint32_t)(EAX));
  /* 107f2722 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f2724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2727 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2728 call 0x107f2b50 */
  push32(0x107f272du); f_107f2b50();
  /* 107f272d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2730 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2735:;
  /* 107f2735 mov edx, dword ptr [0x10810970] */
  EDX = (r32((uint32_t)(0x10810970)));
  /* 107f273b mov dword ptr [0x10810980], edx */
  w32((uint32_t)(0x10810980), (EDX));
  /* 107f2741 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2744 push eax */
  push32((uint32_t)(EAX));
  /* 107f2745 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2748 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2749 push 3 */
  push32((uint32_t)(0x3u));
  /* 107f274b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f274e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107f2751 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2754 push eax */
  push32((uint32_t)(EAX));
  /* 107f2755 call 0x107f2b50 */
  push32(0x107f275au); f_107f2b50();
  /* 107f275a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f275d jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2762:;
  /* 107f2762 mov ecx, dword ptr [0x10810970] */
  ECX = (r32((uint32_t)(0x10810970)));
  /* 107f2768 mov dword ptr [0x10810980], ecx */
  w32((uint32_t)(0x10810980), (ECX));
  /* 107f276e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2771 push edx */
  push32((uint32_t)(EDX));
  /* 107f2772 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2775 push eax */
  push32((uint32_t)(EAX));
  /* 107f2776 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f2778 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f277b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107f277e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2781 push edx */
  push32((uint32_t)(EDX));
  /* 107f2782 call 0x107f2b50 */
  push32(0x107f2787u); f_107f2b50();
  /* 107f2787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f278a jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f278f:;
  /* 107f278f mov eax, dword ptr [0x10810970] */
  EAX = (r32((uint32_t)(0x10810970)));
  /* 107f2794 mov dword ptr [0x10810980], eax */
  w32((uint32_t)(0x10810980), (EAX));
  /* 107f2799 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f279c push ecx */
  push32((uint32_t)(ECX));
  /* 107f279d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f27a0 push edx */
  push32((uint32_t)(EDX));
  /* 107f27a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f27a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f27a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107f27a9 push ecx */
  push32((uint32_t)(ECX));
  /* 107f27aa call 0x107f2b50 */
  push32(0x107f27afu); f_107f2b50();
  /* 107f27af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f27b2 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f27b7:;
  /* 107f27b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f27ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f27be jg 0x107f27dc */
  if ((!C.zf&&C.sf==C.of)) goto L_107f27dc;
  /* 107f27c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f27c3 push eax */
  push32((uint32_t)(EAX));
  /* 107f27c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f27c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107f27c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f27cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 107f27d1 push eax */
  push32((uint32_t)(EAX));
  /* 107f27d2 call 0x107f2b00 */
  push32(0x107f27d7u); f_107f2b00();
  /* 107f27d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f27da jmp 0x107f27f6 */
  goto L_107f27f6;
L_107f27dc:;
  /* 107f27dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f27df push ecx */
  push32((uint32_t)(ECX));
  /* 107f27e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f27e3 push edx */
  push32((uint32_t)(EDX));
  /* 107f27e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f27e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 107f27ed push ecx */
  push32((uint32_t)(ECX));
  /* 107f27ee call 0x107f2b00 */
  push32(0x107f27f3u); f_107f2b00();
  /* 107f27f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f27f6:;
  /* 107f27f6 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f27fb:;
  /* 107f27fb mov edx, dword ptr [0x10810970] */
  EDX = (r32((uint32_t)(0x10810970)));
  /* 107f2801 mov dword ptr [0x10810980], edx */
  w32((uint32_t)(0x10810980), (EDX));
  /* 107f2807 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f280a push eax */
  push32((uint32_t)(EAX));
  /* 107f280b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f280e push ecx */
  push32((uint32_t)(ECX));
  /* 107f280f push 2 */
  push32((uint32_t)(0x2u));
  /* 107f2811 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2814 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f2816 push eax */
  push32((uint32_t)(EAX));
  /* 107f2817 call 0x107f2b50 */
  push32(0x107f281cu); f_107f2b50();
  /* 107f281c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f281f jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2824:;
  /* 107f2824 mov ecx, dword ptr [0x10810970] */
  ECX = (r32((uint32_t)(0x10810970)));
  /* 107f282a mov dword ptr [0x10810980], ecx */
  w32((uint32_t)(0x10810980), (ECX));
  /* 107f2830 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2833 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 107f2836 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f2839 jmp 0x107f288d */
  goto L_107f288d;
L_107f283b:;
  /* 107f283b mov ecx, dword ptr [0x10810970] */
  ECX = (r32((uint32_t)(0x10810970)));
  /* 107f2841 mov dword ptr [0x10810980], ecx */
  w32((uint32_t)(0x10810980), (ECX));
  /* 107f2847 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f284a push edx */
  push32((uint32_t)(EDX));
  /* 107f284b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f284e push eax */
  push32((uint32_t)(EAX));
  /* 107f284f push 1 */
  push32((uint32_t)(0x1u));
  /* 107f2851 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2854 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107f2857 push edx */
  push32((uint32_t)(EDX));
  /* 107f2858 call 0x107f2b50 */
  push32(0x107f285du); f_107f2b50();
  /* 107f285d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2860 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2865:;
  /* 107f2865 mov eax, dword ptr [0x10810970] */
  EAX = (r32((uint32_t)(0x10810970)));
  /* 107f286a mov dword ptr [0x10810980], eax */
  w32((uint32_t)(0x10810980), (EAX));
  /* 107f286f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2872 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2876 jne 0x107f2881 */
  if (!C.zf) goto L_107f2881;
  /* 107f2878 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 107f287f jmp 0x107f288d */
  goto L_107f288d;
L_107f2881:;
  /* 107f2881 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2884 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 107f2887 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f288a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107f288d:;
  /* 107f288d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2890 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107f2893 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2896 jge 0x107f28a1 */
  if ((C.sf==C.of)) goto L_107f28a1;
  /* 107f2898 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f289f jmp 0x107f28ce */
  goto L_107f28ce;
L_107f28a1:;
  /* 107f28a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f28a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107f28a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f28a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 107f28ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f28af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f28b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f28b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107f28b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f28b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 107f28be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f28c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f28c3 jl 0x107f28ce */
  if ((C.sf!=C.of)) goto L_107f28ce;
  /* 107f28c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f28c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f28cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107f28ce:;
  /* 107f28ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f28d1 push eax */
  push32((uint32_t)(EAX));
  /* 107f28d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f28d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107f28d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f28d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f28db push edx */
  push32((uint32_t)(EDX));
  /* 107f28dc call 0x107f2b50 */
  push32(0x107f28e1u); f_107f2b50();
  /* 107f28e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f28e4 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f28e9:;
  /* 107f28e9 cmp dword ptr [0x10810970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f28f0 je 0x107f2920 */
  if (C.zf) goto L_107f2920;
  /* 107f28f2 mov dword ptr [0x10810970], 0 */
  w32((uint32_t)(0x10810970), (0x0u));
  /* 107f28fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f28ff push eax */
  push32((uint32_t)(EAX));
  /* 107f2900 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2903 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2904 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2907 push edx */
  push32((uint32_t)(EDX));
  /* 107f2908 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f290b push eax */
  push32((uint32_t)(EAX));
  /* 107f290c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f290f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 107f2915 push edx */
  push32((uint32_t)(EDX));
  /* 107f2916 call 0x107f2cb0 */
  push32(0x107f291bu); f_107f2cb0();
  /* 107f291b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f291e jmp 0x107f2942 */
  goto L_107f2942;
L_107f2920:;
  /* 107f2920 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2923 push eax */
  push32((uint32_t)(EAX));
  /* 107f2924 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2927 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2928 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f292b push edx */
  push32((uint32_t)(EDX));
  /* 107f292c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f292f push eax */
  push32((uint32_t)(EAX));
  /* 107f2930 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2933 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 107f2939 push edx */
  push32((uint32_t)(EDX));
  /* 107f293a call 0x107f2cb0 */
  push32(0x107f293fu); f_107f2cb0();
  /* 107f293f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f2942:;
  /* 107f2942 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2947:;
  /* 107f2947 mov dword ptr [0x10810970], 0 */
  w32((uint32_t)(0x10810970), (0x0u));
  /* 107f2951 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2954 push eax */
  push32((uint32_t)(EAX));
  /* 107f2955 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2958 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2959 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f295c push edx */
  push32((uint32_t)(EDX));
  /* 107f295d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2960 push eax */
  push32((uint32_t)(EAX));
  /* 107f2961 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2964 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 107f296a push edx */
  push32((uint32_t)(EDX));
  /* 107f296b call 0x107f2cb0 */
  push32(0x107f2970u); f_107f2cb0();
  /* 107f2970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2973 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2978:;
  /* 107f2978 mov eax, dword ptr [0x10810970] */
  EAX = (r32((uint32_t)(0x10810970)));
  /* 107f297d mov dword ptr [0x10810980], eax */
  w32((uint32_t)(0x10810980), (EAX));
  /* 107f2982 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2985 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107f2988 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f2989 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107f298e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f2990 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f2993 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2996 push edx */
  push32((uint32_t)(EDX));
  /* 107f2997 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f299a push eax */
  push32((uint32_t)(EAX));
  /* 107f299b push 2 */
  push32((uint32_t)(0x2u));
  /* 107f299d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f29a0 push ecx */
  push32((uint32_t)(ECX));
  /* 107f29a1 call 0x107f2b50 */
  push32(0x107f29a6u); f_107f2b50();
  /* 107f29a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f29a9 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f29ae:;
  /* 107f29ae mov edx, dword ptr [0x10810970] */
  EDX = (r32((uint32_t)(0x10810970)));
  /* 107f29b4 mov dword ptr [0x10810980], edx */
  w32((uint32_t)(0x10810980), (EDX));
  /* 107f29ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f29bd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 107f29c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f29c1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107f29c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f29c8 mov ecx, eax */
  ECX = (EAX);
  /* 107f29ca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f29cd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f29d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f29d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107f29d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f29d7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 107f29dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f29de add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f29e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f29e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f29e6 push eax */
  push32((uint32_t)(EAX));
  /* 107f29e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f29ea push ecx */
  push32((uint32_t)(ECX));
  /* 107f29eb push 4 */
  push32((uint32_t)(0x4u));
  /* 107f29ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f29f0 push edx */
  push32((uint32_t)(EDX));
  /* 107f29f1 call 0x107f2b50 */
  push32(0x107f29f6u); f_107f2b50();
  /* 107f29f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f29f9 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f29fb:;
  /* 107f29fb call 0x107f3b10 */
  push32(0x107f2a00u); f_107f3b10();
  /* 107f2a00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2a03 push eax */
  push32((uint32_t)(EAX));
  /* 107f2a04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2a07 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2a08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f2a0d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2a11 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 107f2a14 mov ecx, dword ptr [eax*4 + 0x1080fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080fe1c)));
  /* 107f2a1b push ecx */
  push32((uint32_t)(ECX));
  /* 107f2a1c call 0x107f2b00 */
  push32(0x107f2a21u); f_107f2b00();
  /* 107f2a21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2a24 jmp 0x107f2a48 */
  goto L_107f2a48;
L_107f2a26:;
  /* 107f2a26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2a29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f2a2b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 107f2a2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2a31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f2a33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2a36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2a39 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f2a3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2a3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f2a40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2a43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2a46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107f2a48:;
  /* 107f2a48 pop esi */
  ESI = (pop32());
  /* 107f2a49 mov esp, ebp */
  ESP = (EBP);
  /* 107f2a4b pop ebp */
  EBP = (pop32());
  /* 107f2a4c ret  */
  ESPCHK(0x107f24e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x107f2b00 (72 bytes, 30 insns) */
void f_107f2b00(void) {
  FTRACE(0x107f2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 107f2b01 mov ebp, esp */
  EBP = (ESP);
L_107f2b03:;
  /* 107f2b03 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2b06 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2b09 je 0x107f2b46 */
  if (C.zf) goto L_107f2b46;
  /* 107f2b0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2b0e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f2b11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f2b13 je 0x107f2b46 */
  if (C.zf) goto L_107f2b46;
  /* 107f2b15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2b1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2b1d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f2b1f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f2b21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f2b26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2b29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b2c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f2b2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2b31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2b34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107f2b37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2b3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f2b3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2b3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2b42 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f2b44 jmp 0x107f2b03 */
  goto L_107f2b03;
L_107f2b46:;
  /* 107f2b46 pop ebp */
  EBP = (pop32());
  /* 107f2b47 ret  */
  ESPCHK(0x107f2b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x107f2b50 (173 bytes, 64 insns) */
void f_107f2b50(void) {
  FTRACE(0x107f2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 107f2b51 mov ebp, esp */
  EBP = (ESP);
  /* 107f2b53 push ecx */
  push32((uint32_t)(ECX));
  /* 107f2b54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f2b5b cmp dword ptr [0x10810980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2b62 je 0x107f2b7a */
  if (C.zf) goto L_107f2b7a;
  /* 107f2b64 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2b67 push eax */
  push32((uint32_t)(EAX));
  /* 107f2b68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2b6b push ecx */
  push32((uint32_t)(ECX));
  /* 107f2b6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2b6f push edx */
  push32((uint32_t)(EDX));
  /* 107f2b70 call 0x107f2c00 */
  push32(0x107f2b75u); f_107f2c00();
  /* 107f2b75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2b78 jmp 0x107f2bf9 */
  goto L_107f2bf9;
L_107f2b7a:;
  /* 107f2b7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2b7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b80 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2b82 jae 0x107f2bf0 */
  if (!C.cf) goto L_107f2bf0;
  /* 107f2b84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2b8a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107f2b8d jmp 0x107f2b98 */
  goto L_107f2b98;
L_107f2b8f:;
  /* 107f2b8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b92 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2b95 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_107f2b98:;
  /* 107f2b98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2b9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2b9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f2ba0 je 0x107f2bd4 */
  if (C.zf) goto L_107f2bd4;
  /* 107f2ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2ba5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f2ba6 mov ecx, 0xa */
  ECX = (0xau);
  /* 107f2bab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f2bad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2bb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2bb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2bb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2bb8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 107f2bbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2bbe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f2bbf mov ecx, 0xa */
  ECX = (0xau);
  /* 107f2bc4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f2bc6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f2bc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2bcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2bcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f2bd2 jmp 0x107f2b8f */
  goto L_107f2b8f;
L_107f2bd4:;
  /* 107f2bd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2bd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2bd9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2bdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2bdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107f2be1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2be4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2be6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2be9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2bec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107f2bee jmp 0x107f2bf9 */
  goto L_107f2bf9;
L_107f2bf0:;
  /* 107f2bf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2bf3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107f2bf9:;
  /* 107f2bf9 mov esp, ebp */
  ESP = (EBP);
  /* 107f2bfb pop ebp */
  EBP = (pop32());
  /* 107f2bfc ret  */
  ESPCHK(0x107f2b50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x107f2c00 (172 bytes, 65 insns) */
void f_107f2c00(void) {
  FTRACE(0x107f2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 107f2c01 mov ebp, esp */
  EBP = (ESP);
  /* 107f2c03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2c06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2c09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2c0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f2c0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2c11 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2c14 jbe 0x107f2c5b */
  if ((C.cf||C.zf)) goto L_107f2c5b;
L_107f2c16:;
  /* 107f2c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2c19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f2c1a mov ecx, 0xa */
  ECX = (0xau);
  /* 107f2c1f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f2c21 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2c24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107f2c29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2c2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f2c32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2c35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f2c37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2c3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2c3d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f2c3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2c42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f2c43 mov ecx, 0xa */
  ECX = (0xau);
  /* 107f2c48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f2c4a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f2c4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2c51 jle 0x107f2c5b */
  if ((C.zf||C.sf!=C.of)) goto L_107f2c5b;
  /* 107f2c53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2c56 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2c59 ja 0x107f2c16 */
  if ((!C.cf&&!C.zf)) goto L_107f2c16;
L_107f2c5b:;
  /* 107f2c5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2c5e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2c60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f2c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2c66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107f2c6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c6e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2c71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107f2c74:;
  /* 107f2c74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c77 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f2c79 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 107f2c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f2c82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f2c84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f2c86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2c89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2c8c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f2c8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f2c92 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107f2c95 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107f2c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f2c9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2c9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f2ca0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f2ca3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2ca6 jb 0x107f2c74 */
  if (C.cf) goto L_107f2c74;
  /* 107f2ca8 mov esp, ebp */
  ESP = (EBP);
  /* 107f2caa pop ebp */
  EBP = (pop32());
  /* 107f2cab ret  */
  ESPCHK(0x107f2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cb0 @ 0x107f2cb0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_107f2cb0(void) {
  FTRACE(0x107f2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 107f2cb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107f2cb6:;
  /* 107f2cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2cb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f2cbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f2cbe je 0x107f312c */
  if (C.zf) goto L_107f312c;
  /* 107f2cc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2cc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2cca je 0x107f312c */
  if (C.zf) goto L_107f312c;
  /* 107f2cd0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f2cd4 mov dword ptr [0x10810980], 0 */
  w32((uint32_t)(0x10810980), (0x0u));
  /* 107f2cde mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107f2ce5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2ce8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f2ceb jmp 0x107f2cf6 */
  goto L_107f2cf6;
L_107f2ced:;
  /* 107f2ced mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2cf0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2cf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107f2cf6:;
  /* 107f2cf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2cf9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f2cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2cff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f2d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2d08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f2d0b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2d0d jne 0x107f2d11 */
  if (!C.zf) goto L_107f2d11;
  /* 107f2d0f jmp 0x107f2ced */
  goto L_107f2ced;
L_107f2d11:;
  /* 107f2d11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2d14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2d17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f2d1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2d1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f2d20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f2d23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2d26 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2d29 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107f2d2c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2d30 ja 0x107f3080 */
  if ((!C.cf&&!C.zf)) goto L_107f3080;
  /* 107f2d36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f2d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f2d3b mov al, byte ptr [ecx + 0x107f315c] */
  AL = (r8((uint32_t)(ECX + 0x107f315c)));
  /* 107f2d41 jmp dword ptr [eax*4 + 0x107f3130] */
  switch (EAX) {
    case 0: goto L_107f2f9f;
    case 1: goto L_107f2e83;
    case 2: goto L_107f2e0e;
    case 3: goto L_107f2d48;
    case 4: goto L_107f2d86;
    case 5: goto L_107f2de7;
    case 6: goto L_107f2e35;
    case 7: goto L_107f2e5c;
    case 8: goto L_107f2eca;
    case 9: goto L_107f2dc4;
    case 10: goto L_107f3080;
    default: x86_unimpl("switch@0x107f2d41 out of table"); return;
  }
L_107f2d48:;
  /* 107f2d48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2d4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107f2d4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f2d51 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2d54 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107f2d57 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2d5b ja 0x107f2d81 */
  if ((!C.cf&&!C.zf)) goto L_107f2d81;
  /* 107f2d5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f2d60 jmp dword ptr [ecx*4 + 0x107f31af] */
  switch (ECX) {
    case 0: goto L_107f2d67;
    case 1: goto L_107f2d71;
    case 2: goto L_107f2d77;
    case 3: goto L_107f2d7d;
    case 4: goto L_107f2da5;
    case 5: goto L_107f2daf;
    case 6: goto L_107f2db5;
    case 7: goto L_107f2dbb;
    default: x86_unimpl("switch@0x107f2d60 out of table"); return;
  }
L_107f2d67:;
  /* 107f2d67 mov dword ptr [0x10810980], 1 */
  w32((uint32_t)(0x10810980), (0x1u));
L_107f2d71:;
  /* 107f2d71 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 107f2d75 jmp 0x107f2d81 */
  goto L_107f2d81;
L_107f2d77:;
  /* 107f2d77 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 107f2d7b jmp 0x107f2d81 */
  goto L_107f2d81;
L_107f2d7d:;
  /* 107f2d7d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_107f2d81:;
  /* 107f2d81 jmp 0x107f3080 */
  goto L_107f3080;
L_107f2d86:;
  /* 107f2d86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2d89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107f2d8c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f2d8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2d92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107f2d95 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2d99 ja 0x107f2dbf */
  if ((!C.cf&&!C.zf)) goto L_107f2dbf;
  /* 107f2d9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f2d9e jmp dword ptr [ecx*4 + 0x107f31bf] */
  switch (ECX) {
    case 0: goto L_107f2da5;
    case 1: goto L_107f2daf;
    case 2: goto L_107f2db5;
    case 3: goto L_107f2dbb;
    default: x86_unimpl("switch@0x107f2d9e out of table"); return;
  }
L_107f2da5:;
  /* 107f2da5 mov dword ptr [0x10810980], 1 */
  w32((uint32_t)(0x10810980), (0x1u));
L_107f2daf:;
  /* 107f2daf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 107f2db3 jmp 0x107f2dbf */
  goto L_107f2dbf;
L_107f2db5:;
  /* 107f2db5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 107f2db9 jmp 0x107f2dbf */
  goto L_107f2dbf;
L_107f2dbb:;
  /* 107f2dbb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_107f2dbf:;
  /* 107f2dbf jmp 0x107f3080 */
  goto L_107f3080;
L_107f2dc4:;
  /* 107f2dc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2dc7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107f2dca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2dce je 0x107f2dd8 */
  if (C.zf) goto L_107f2dd8;
  /* 107f2dd0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2dd4 je 0x107f2dde */
  if (C.zf) goto L_107f2dde;
  /* 107f2dd6 jmp 0x107f2de2 */
  goto L_107f2de2;
L_107f2dd8:;
  /* 107f2dd8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 107f2ddc jmp 0x107f2de2 */
  goto L_107f2de2;
L_107f2dde:;
  /* 107f2dde mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_107f2de2:;
  /* 107f2de2 jmp 0x107f3080 */
  goto L_107f3080;
L_107f2de7:;
  /* 107f2de7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2dea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107f2ded cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2df1 je 0x107f2dfb */
  if (C.zf) goto L_107f2dfb;
  /* 107f2df3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2df7 je 0x107f2e05 */
  if (C.zf) goto L_107f2e05;
  /* 107f2df9 jmp 0x107f2e09 */
  goto L_107f2e09;
L_107f2dfb:;
  /* 107f2dfb mov dword ptr [0x10810980], 1 */
  w32((uint32_t)(0x10810980), (0x1u));
L_107f2e05:;
  /* 107f2e05 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_107f2e09:;
  /* 107f2e09 jmp 0x107f3080 */
  goto L_107f3080;
L_107f2e0e:;
  /* 107f2e0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2e11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 107f2e14 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2e18 je 0x107f2e22 */
  if (C.zf) goto L_107f2e22;
  /* 107f2e1a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2e1e je 0x107f2e2c */
  if (C.zf) goto L_107f2e2c;
  /* 107f2e20 jmp 0x107f2e30 */
  goto L_107f2e30;
L_107f2e22:;
  /* 107f2e22 mov dword ptr [0x10810980], 1 */
  w32((uint32_t)(0x10810980), (0x1u));
L_107f2e2c:;
  /* 107f2e2c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_107f2e30:;
  /* 107f2e30 jmp 0x107f3080 */
  goto L_107f3080;
L_107f2e35:;
  /* 107f2e35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2e38 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 107f2e3b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2e3f je 0x107f2e49 */
  if (C.zf) goto L_107f2e49;
  /* 107f2e41 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2e45 je 0x107f2e53 */
  if (C.zf) goto L_107f2e53;
  /* 107f2e47 jmp 0x107f2e57 */
  goto L_107f2e57;
L_107f2e49:;
  /* 107f2e49 mov dword ptr [0x10810980], 1 */
  w32((uint32_t)(0x10810980), (0x1u));
L_107f2e53:;
  /* 107f2e53 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_107f2e57:;
  /* 107f2e57 jmp 0x107f3080 */
  goto L_107f3080;
L_107f2e5c:;
  /* 107f2e5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2e5f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 107f2e62 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2e66 je 0x107f2e70 */
  if (C.zf) goto L_107f2e70;
  /* 107f2e68 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2e6c je 0x107f2e7a */
  if (C.zf) goto L_107f2e7a;
  /* 107f2e6e jmp 0x107f2e7e */
  goto L_107f2e7e;
L_107f2e70:;
  /* 107f2e70 mov dword ptr [0x10810980], 1 */
  w32((uint32_t)(0x10810980), (0x1u));
L_107f2e7a:;
  /* 107f2e7a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_107f2e7e:;
  /* 107f2e7e jmp 0x107f3080 */
  goto L_107f3080;
L_107f2e83:;
  /* 107f2e83 push 0x1080cb34 */
  push32((uint32_t)(0x1080cb34u));
  /* 107f2e88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2e8b push ecx */
  push32((uint32_t)(ECX));
  /* 107f2e8c call 0x107f36e0 */
  push32(0x107f2e91u); f_107f36e0();
  /* 107f2e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f2e96 jne 0x107f2ea3 */
  if (!C.zf) goto L_107f2ea3;
  /* 107f2e98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2e9b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2e9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f2ea1 jmp 0x107f2ec1 */
  goto L_107f2ec1;
L_107f2ea3:;
  /* 107f2ea3 push 0x1080cb30 */
  push32((uint32_t)(0x1080cb30u));
  /* 107f2ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2eab push eax */
  push32((uint32_t)(EAX));
  /* 107f2eac call 0x107f36e0 */
  push32(0x107f2eb1u); f_107f36e0();
  /* 107f2eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f2eb6 jne 0x107f2ec1 */
  if (!C.zf) goto L_107f2ec1;
  /* 107f2eb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2ebb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2ebe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107f2ec1:;
  /* 107f2ec1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 107f2ec5 jmp 0x107f3080 */
  goto L_107f3080;
L_107f2eca:;
  /* 107f2eca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f2ecd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2ed1 jg 0x107f2ee1 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f2ee1;
  /* 107f2ed3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2ed6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 107f2edc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107f2edf jmp 0x107f2eed */
  goto L_107f2eed;
L_107f2ee1:;
  /* 107f2ee1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f2ee4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 107f2eea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107f2eed:;
  /* 107f2eed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2ef1 jle 0x107f2f94 */
  if ((C.zf||C.sf!=C.of)) goto L_107f2f94;
  /* 107f2ef7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2efa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2efd jbe 0x107f2f94 */
  if ((C.cf||C.zf)) goto L_107f2f94;
  /* 107f2f03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2f06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f2f08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f2f0a mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f2f10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f2f12 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f2f16 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107f2f1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f2f1e je 0x107f2f57 */
  if (C.zf) goto L_107f2f57;
  /* 107f2f20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2f23 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2f26 jbe 0x107f2f57 */
  if ((C.cf||C.zf)) goto L_107f2f57;
  /* 107f2f28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2f2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f2f2d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2f30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f2f32 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107f2f34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2f37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f2f39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2f3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2f3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f2f41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2f44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2f47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107f2f4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2f4d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2f4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2f52 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2f55 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107f2f57:;
  /* 107f2f57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2f5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f2f5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2f5f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f2f61 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f2f63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2f66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f2f68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2f6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f2f6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f2f70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f2f73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2f76 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107f2f79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2f7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f2f7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2f81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2f84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f2f86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2f89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f2f8c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107f2f8f jmp 0x107f2eed */
  goto L_107f2eed;
L_107f2f94:;
  /* 107f2f94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f2f97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f2f9a jmp 0x107f2cb6 */
  goto L_107f2cb6;
L_107f2f9f:;
  /* 107f2f9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f2fa2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107f2fa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f2fa7 je 0x107f3072 */
  if (C.zf) goto L_107f3072;
  /* 107f2fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2fb0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2fb3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107f2fb6:;
  /* 107f2fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2fb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f2fbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f2fbe je 0x107f3070 */
  if (C.zf) goto L_107f3070;
  /* 107f2fc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f2fc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2fca je 0x107f3070 */
  if (C.zf) goto L_107f3070;
  /* 107f2fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2fd3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f2fd6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f2fd9 jne 0x107f2fe9 */
  if (!C.zf) goto L_107f2fe9;
  /* 107f2fdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2fde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f2fe1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107f2fe4 jmp 0x107f3070 */
  goto L_107f3070;
L_107f2fe9:;
  /* 107f2fe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f2fec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f2fee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f2ff0 mov edx, dword ptr [0x1080ec98] */
  EDX = (r32((uint32_t)(0x1080ec98)));
  /* 107f2ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f2ff8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 107f2ffc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 107f3001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f3003 je 0x107f303c */
  if (C.zf) goto L_107f303c;
  /* 107f3005 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f3008 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f300b jbe 0x107f303c */
  if ((C.cf||C.zf)) goto L_107f303c;
  /* 107f300d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3010 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f3012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3015 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f3017 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107f3019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f301c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f301e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3021 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3024 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107f3026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3029 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f302c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f302f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f3032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f3034 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f3037 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f303a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107f303c:;
  /* 107f303c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f303f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f3041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3044 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f3046 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107f3048 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f304b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f304d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3050 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3053 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f3055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3058 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f305b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107f305e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f3061 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f3063 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f3066 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f3069 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107f306b jmp 0x107f2fb6 */
  goto L_107f2fb6;
L_107f3070:;
  /* 107f3070 jmp 0x107f307b */
  goto L_107f307b;
L_107f3072:;
  /* 107f3072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3075 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3078 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107f307b:;
  /* 107f307b jmp 0x107f2cb6 */
  goto L_107f2cb6;
L_107f3080:;
  /* 107f3080 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f3084 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f3086 je 0x107f30ac */
  if (C.zf) goto L_107f30ac;
  /* 107f3088 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f308b push edx */
  push32((uint32_t)(EDX));
  /* 107f308c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f308f push eax */
  push32((uint32_t)(EAX));
  /* 107f3090 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3093 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3094 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f3097 push edx */
  push32((uint32_t)(EDX));
  /* 107f3098 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107f309b push eax */
  push32((uint32_t)(EAX));
  /* 107f309c call 0x107f24e0 */
  push32(0x107f30a1u); f_107f24e0();
  /* 107f30a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f30a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f30a7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107f30aa jmp 0x107f3127 */
  goto L_107f3127;
L_107f30ac:;
  /* 107f30ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f30af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f30b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f30b3 mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f30b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f30bb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f30bf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107f30c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f30c7 je 0x107f30f8 */
  if (C.zf) goto L_107f30f8;
  /* 107f30c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f30cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f30ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f30d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f30d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f30d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f30d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f30da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f30dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f30e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f30e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f30e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f30e8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107f30eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f30ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f30f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f30f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f30f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_107f30f8:;
  /* 107f30f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f30fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f30fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3100 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f3102 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107f3104 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f3109 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f310c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f310f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107f3111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3114 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3117 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f311a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f311d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f311f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f3122 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f3125 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107f3127:;
  /* 107f3127 jmp 0x107f2cb6 */
  goto L_107f2cb6;
L_107f312c:;
  /* 107f312c mov esp, ebp */
  ESP = (EBP);
  /* 107f312e pop ebp */
  EBP = (pop32());
  /* 107f312f ret  */
  ESPCHK(0x107f2cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131d0 @ 0x107f31d0 (650 bytes, 178 insns) */
void f_107f31d0(void) {
  FTRACE(0x107f31d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f31d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f31d1 mov ebp, esp */
  EBP = (ESP);
  /* 107f31d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f31d9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f31dd jne 0x107f3339 */
  if (!C.zf) goto L_107f3339;
  /* 107f31e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f31e6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 107f31ec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 107f31f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f31f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f31fc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 107f3206 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3208 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 107f320e push edx */
  push32((uint32_t)(EDX));
  /* 107f320f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3212 push eax */
  push32((uint32_t)(EAX));
  /* 107f3213 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3216 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3217 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f321a push edx */
  push32((uint32_t)(EDX));
  /* 107f321b call 0x107f45f0 */
  push32(0x107f3220u); f_107f45f0();
  /* 107f3220 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3223 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f3226 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f322a jne 0x107f32bf */
  if (!C.zf) goto L_107f32bf;
  /* 107f3230 call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107f3236u);
  /* 107f3236 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3239 je 0x107f3240 */
  if (C.zf) goto L_107f3240;
  /* 107f323b jmp 0x107f331d */
  goto L_107f331d;
L_107f3240:;
  /* 107f3240 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3242 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3244 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3246 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3249 push eax */
  push32((uint32_t)(EAX));
  /* 107f324a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f324d push ecx */
  push32((uint32_t)(ECX));
  /* 107f324e call 0x107f45f0 */
  push32(0x107f3253u); f_107f45f0();
  /* 107f3253 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3256 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 107f325c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3263 jne 0x107f326a */
  if (!C.zf) goto L_107f326a;
  /* 107f3265 jmp 0x107f331d */
  goto L_107f331d;
L_107f326a:;
  /* 107f326a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 107f326c push 0x1080cb3c */
  push32((uint32_t)(0x1080cb3cu));
  /* 107f3271 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f3273 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 107f3279 push edx */
  push32((uint32_t)(EDX));
  /* 107f327a call 0x107e5010 */
  push32(0x107f327fu); f_107e5010();
  /* 107f327f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f3285 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3289 jne 0x107f3290 */
  if (!C.zf) goto L_107f3290;
  /* 107f328b jmp 0x107f331d */
  goto L_107f331d;
L_107f3290:;
  /* 107f3290 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107f3297 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3299 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 107f329f push eax */
  push32((uint32_t)(EAX));
  /* 107f32a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f32a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f32a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f32a7 push edx */
  push32((uint32_t)(EDX));
  /* 107f32a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f32ab push eax */
  push32((uint32_t)(EAX));
  /* 107f32ac call 0x107f45f0 */
  push32(0x107f32b1u); f_107f45f0();
  /* 107f32b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f32b4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f32b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f32bb jne 0x107f32bf */
  if (!C.zf) goto L_107f32bf;
  /* 107f32bd jmp 0x107f331d */
  goto L_107f331d;
L_107f32bf:;
  /* 107f32bf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 107f32c1 push 0x1080cb3c */
  push32((uint32_t)(0x1080cb3cu));
  /* 107f32c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f32c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f32cb push ecx */
  push32((uint32_t)(ECX));
  /* 107f32cc call 0x107e5010 */
  push32(0x107f32d1u); f_107e5010();
  /* 107f32d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f32d4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 107f32da mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107f32dc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 107f32e2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f32e5 jne 0x107f32e9 */
  if (!C.zf) goto L_107f32e9;
  /* 107f32e7 jmp 0x107f331d */
  goto L_107f331d;
L_107f32e9:;
  /* 107f32e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f32ec push ecx */
  push32((uint32_t)(ECX));
  /* 107f32ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f32f0 push edx */
  push32((uint32_t)(EDX));
  /* 107f32f1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 107f32f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f32f9 push ecx */
  push32((uint32_t)(ECX));
  /* 107f32fa call 0x107e8830 */
  push32(0x107f32ffu); f_107e8830();
  /* 107f32ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3302 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3306 je 0x107f3316 */
  if (C.zf) goto L_107f3316;
  /* 107f3308 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f330a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f330d push edx */
  push32((uint32_t)(EDX));
  /* 107f330e call 0x107e5aa0 */
  push32(0x107f3313u); f_107e5aa0();
  /* 107f3313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f3316:;
  /* 107f3316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3318 jmp 0x107f3456 */
  goto L_107f3456;
L_107f331d:;
  /* 107f331d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3321 je 0x107f3331 */
  if (C.zf) goto L_107f3331;
  /* 107f3323 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f3325 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3328 push eax */
  push32((uint32_t)(EAX));
  /* 107f3329 call 0x107e5aa0 */
  push32(0x107f332eu); f_107e5aa0();
  /* 107f332e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f3331:;
  /* 107f3331 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f3334 jmp 0x107f3456 */
  goto L_107f3456;
L_107f3339:;
  /* 107f3339 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f333d jne 0x107f3453 */
  if (!C.zf) goto L_107f3453;
  /* 107f3343 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 107f334d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f3350 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 107f3356 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3358 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107f335e push edx */
  push32((uint32_t)(EDX));
  /* 107f335f push 0x10810898 */
  push32((uint32_t)(0x10810898u));
  /* 107f3364 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3367 push eax */
  push32((uint32_t)(EAX));
  /* 107f3368 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f336b push ecx */
  push32((uint32_t)(ECX));
  /* 107f336c call 0x107f4450 */
  push32(0x107f3371u); f_107f4450();
  /* 107f3371 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3374 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f3376 jne 0x107f3380 */
  if (!C.zf) goto L_107f3380;
  /* 107f3378 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f337b jmp 0x107f3456 */
  goto L_107f3456;
L_107f3380:;
  /* 107f3380 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107f3386 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107f3389 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 107f3393 jmp 0x107f33a4 */
  goto L_107f33a4;
L_107f3395:;
  /* 107f3395 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107f339b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f339e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_107f33a4:;
  /* 107f33a4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f33ab jge 0x107f344f */
  if ((C.sf==C.of)) goto L_107f344f;
  /* 107f33b1 cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f33b8 jle 0x107f33eb */
  if ((C.zf||C.sf!=C.of)) goto L_107f33eb;
  /* 107f33ba push 4 */
  push32((uint32_t)(0x4u));
  /* 107f33bc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107f33c2 mov dl, byte ptr [ecx*2 + 0x10810898] */
  DL = (r8((uint32_t)(ECX*2 + 0x10810898)));
  /* 107f33c9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 107f33cf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107f33d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f33da push eax */
  push32((uint32_t)(EAX));
  /* 107f33db call 0x107eb020 */
  push32(0x107f33e0u); f_107eb020();
  /* 107f33e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f33e3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 107f33e9 jmp 0x107f341e */
  goto L_107f341e;
L_107f33eb:;
  /* 107f33eb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107f33f1 mov dl, byte ptr [ecx*2 + 0x10810898] */
  DL = (r8((uint32_t)(ECX*2 + 0x10810898)));
  /* 107f33f8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 107f33fe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107f3404 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f3409 mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f340f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3411 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f3415 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107f3418 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_107f341e:;
  /* 107f341e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3425 je 0x107f3448 */
  if (C.zf) goto L_107f3448;
  /* 107f3427 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107f342d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f3430 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f3433 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 107f343a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107f343e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107f3444 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f3446 jmp 0x107f344a */
  goto L_107f344a;
L_107f3448:;
  /* 107f3448 jmp 0x107f344f */
  goto L_107f344f;
L_107f344a:;
  /* 107f344a jmp 0x107f3395 */
  goto L_107f3395;
L_107f344f:;
  /* 107f344f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3451 jmp 0x107f3456 */
  goto L_107f3456;
L_107f3453:;
  /* 107f3453 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107f3456:;
  /* 107f3456 mov esp, ebp */
  ESP = (EBP);
  /* 107f3458 pop ebp */
  EBP = (pop32());
  /* 107f3459 ret  */
  ESPCHK(0x107f31d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x107f3460 (10 bytes, 5 insns) */
void f_107f3460(void) {
  FTRACE(0x107f3460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3460 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3461 mov ebp, esp */
  EBP = (ESP);
  /* 107f3463 mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f3468 pop ebp */
  EBP = (pop32());
  /* 107f3469 ret  */
  ESPCHK(0x107f3460u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x107f3470 (575 bytes, 196 insns) */
void f_107f3470(void) {
  FTRACE(0x107f3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3470 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3471 mov ebp, esp */
  EBP = (ESP);
  /* 107f3473 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f3475 push 0x1080cb48 */
  push32((uint32_t)(0x1080cb48u));
  /* 107f347a push 0x107ee118 */
  push32((uint32_t)(0x107ee118u));
  /* 107f347f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107f3485 push eax */
  push32((uint32_t)(EAX));
  /* 107f3486 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107f348d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3490 push ebx */
  push32((uint32_t)(EBX));
  /* 107f3491 push esi */
  push32((uint32_t)(ESI));
  /* 107f3492 push edi */
  push32((uint32_t)(EDI));
  /* 107f3493 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f3496 cmp dword ptr [0x108108a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108108a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f349d jne 0x107f34ee */
  if (!C.zf) goto L_107f34ee;
  /* 107f349f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 107f34a2 push eax */
  push32((uint32_t)(EAX));
  /* 107f34a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f34a5 push 0x1080c27c */
  push32((uint32_t)(0x1080c27cu));
  /* 107f34aa push 1 */
  push32((uint32_t)(0x1u));
  /* 107f34ac call dword ptr [0x108132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ec))), 0x107f34b2u);
  /* 107f34b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f34b4 je 0x107f34c2 */
  if (C.zf) goto L_107f34c2;
  /* 107f34b6 mov dword ptr [0x108108a4], 1 */
  w32((uint32_t)(0x108108a4), (0x1u));
  /* 107f34c0 jmp 0x107f34ee */
  goto L_107f34ee;
L_107f34c2:;
  /* 107f34c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 107f34c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107f34c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f34c8 push 0x1080c278 */
  push32((uint32_t)(0x1080c278u));
  /* 107f34cd push 1 */
  push32((uint32_t)(0x1u));
  /* 107f34cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107f34d1 call dword ptr [0x108132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132fc))), 0x107f34d7u);
  /* 107f34d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f34d9 je 0x107f34e7 */
  if (C.zf) goto L_107f34e7;
  /* 107f34db mov dword ptr [0x108108a4], 2 */
  w32((uint32_t)(0x108108a4), (0x2u));
  /* 107f34e5 jmp 0x107f34ee */
  goto L_107f34ee;
L_107f34e7:;
  /* 107f34e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f34e9 jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f34ee:;
  /* 107f34ee cmp dword ptr [0x108108a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108108a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f34f5 jne 0x107f3512 */
  if (!C.zf) goto L_107f3512;
  /* 107f34f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f34fa push edx */
  push32((uint32_t)(EDX));
  /* 107f34fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f34fe push eax */
  push32((uint32_t)(EAX));
  /* 107f34ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f3502 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3503 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3506 push edx */
  push32((uint32_t)(EDX));
  /* 107f3507 call dword ptr [0x108132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ec))), 0x107f350du);
  /* 107f350d jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f3512:;
  /* 107f3512 cmp dword ptr [0x108108a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108108a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3519 jne 0x107f36c7 */
  if (!C.zf) goto L_107f36c7;
  /* 107f351f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3523 jne 0x107f352d */
  if (!C.zf) goto L_107f352d;
  /* 107f3525 mov eax, dword ptr [0x10810818] */
  EAX = (r32((uint32_t)(0x10810818)));
  /* 107f352a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_107f352d:;
  /* 107f352d push 0 */
  push32((uint32_t)(0x0u));
  /* 107f352f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3531 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3533 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3535 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3538 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3539 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f353c push edx */
  push32((uint32_t)(EDX));
  /* 107f353d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107f3542 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f3545 push eax */
  push32((uint32_t)(EAX));
  /* 107f3546 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f354cu);
  /* 107f354c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107f354f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3553 jne 0x107f355c */
  if (!C.zf) goto L_107f355c;
  /* 107f3555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3557 jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f355c:;
  /* 107f355c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f3563 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f3566 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3569 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107f356b call 0x107e81b0 */
  push32(0x107f3570u); f_107e81b0();
  /* 107f3570 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 107f3573 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f3576 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f3579 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107f357c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f357f push edx */
  push32((uint32_t)(EDX));
  /* 107f3580 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3582 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f3585 push eax */
  push32((uint32_t)(EAX));
  /* 107f3586 call 0x107e8d80 */
  push32(0x107f358bu); f_107e8d80();
  /* 107f358b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f358e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107f3595 jmp 0x107f35ae */
  goto L_107f35ae;
  /* 107f3597 mov eax, 1 */
  EAX = (0x1u);
  /* 107f359c ret  */
  ESPCHK(0x107f3470u, _esp0);
  ESP += 4; return;
  /* 107f359d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107f35a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 107f35a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107f35ae:;
  /* 107f35ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f35b2 jne 0x107f35bb */
  if (!C.zf) goto L_107f35bb;
  /* 107f35b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f35b6 jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f35bb:;
  /* 107f35bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107f35bd push 0 */
  push32((uint32_t)(0x0u));
  /* 107f35bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f35c2 push ecx */
  push32((uint32_t)(ECX));
  /* 107f35c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f35c6 push edx */
  push32((uint32_t)(EDX));
  /* 107f35c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f35ca push eax */
  push32((uint32_t)(EAX));
  /* 107f35cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f35ce push ecx */
  push32((uint32_t)(ECX));
  /* 107f35cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107f35d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f35d7 push edx */
  push32((uint32_t)(EDX));
  /* 107f35d8 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f35deu);
  /* 107f35de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f35e0 jne 0x107f35e9 */
  if (!C.zf) goto L_107f35e9;
  /* 107f35e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f35e4 jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f35e9:;
  /* 107f35e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107f35f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f35f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 107f35f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f35fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107f35fc call 0x107e81b0 */
  push32(0x107f3601u); f_107e81b0();
  /* 107f3601 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 107f3604 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f3607 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107f360a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107f360d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107f3614 jmp 0x107f362d */
  goto L_107f362d;
  /* 107f3616 mov eax, 1 */
  EAX = (0x1u);
  /* 107f361b ret  */
  ESPCHK(0x107f3470u, _esp0);
  ESP += 4; return;
  /* 107f361c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107f361f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107f3626 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107f362d:;
  /* 107f362d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3631 jne 0x107f363a */
  if (!C.zf) goto L_107f363a;
  /* 107f3633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3635 jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f363a:;
  /* 107f363a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f363e jne 0x107f3649 */
  if (!C.zf) goto L_107f3649;
  /* 107f3640 mov edx, dword ptr [0x10810808] */
  EDX = (r32((uint32_t)(0x10810808)));
  /* 107f3646 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_107f3649:;
  /* 107f3649 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f364c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f364f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 107f3655 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3658 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f365b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 107f3662 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f3665 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3666 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f3669 push edx */
  push32((uint32_t)(EDX));
  /* 107f366a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f366d push eax */
  push32((uint32_t)(EAX));
  /* 107f366e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3671 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3672 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f3675 push edx */
  push32((uint32_t)(EDX));
  /* 107f3676 call dword ptr [0x108132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132fc))), 0x107f367cu);
  /* 107f367c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107f367f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3682 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f3685 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3687 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 107f368c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3692 je 0x107f36a8 */
  if (C.zf) goto L_107f36a8;
  /* 107f3694 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f3697 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f369a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f369c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f36a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f36a6 je 0x107f36ac */
  if (C.zf) goto L_107f36ac;
L_107f36a8:;
  /* 107f36a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f36aa jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f36ac:;
  /* 107f36ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f36af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f36b1 push eax */
  push32((uint32_t)(EAX));
  /* 107f36b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f36b5 push ecx */
  push32((uint32_t)(ECX));
  /* 107f36b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f36b9 push edx */
  push32((uint32_t)(EDX));
  /* 107f36ba call 0x107ecf00 */
  push32(0x107f36bfu); f_107ecf00();
  /* 107f36bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f36c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f36c5 jmp 0x107f36c9 */
  goto L_107f36c9;
L_107f36c7:;
  /* 107f36c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f36c9:;
  /* 107f36c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 107f36cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f36cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107f36d6 pop edi */
  EDI = (pop32());
  /* 107f36d7 pop esi */
  ESI = (pop32());
  /* 107f36d8 pop ebx */
  EBX = (pop32());
  /* 107f36d9 mov esp, ebp */
  ESP = (EBP);
  /* 107f36db pop ebp */
  EBP = (pop32());
  /* 107f36dc ret  */
  ESPCHK(0x107f3470u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x107f36e0 (208 bytes, 85 insns) */
void f_107f36e0(void) {
  FTRACE(0x107f36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f36e1 mov ebp, esp */
  EBP = (ESP);
  /* 107f36e3 push edi */
  push32((uint32_t)(EDI));
  /* 107f36e4 push esi */
  push32((uint32_t)(ESI));
  /* 107f36e5 push ebx */
  push32((uint32_t)(EBX));
  /* 107f36e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107f36e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107f36ec lea eax, [0x10810800] */
  EAX = ((uint32_t)(0x10810800));
  /* 107f36f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f36f6 jne 0x107f3733 */
  if (!C.zf) goto L_107f3733;
  /* 107f36f8 mov al, 0xff */
  AL = (0xffu);
  /* 107f36fa mov edi, edi */
  EDI = (EDI);
L_107f36fc:;
  /* 107f36fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f36fe je 0x107f372e */
  if (C.zf) goto L_107f372e;
  /* 107f3700 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107f3702 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107f3703 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 107f3705 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107f3706 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f3708 je 0x107f36fc */
  if (C.zf) goto L_107f36fc;
  /* 107f370a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107f370c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f370e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107f3710 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107f3713 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107f3715 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107f3717 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 107f3719 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107f371b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f371d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107f371f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107f3722 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107f3724 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107f3726 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f3728 je 0x107f36fc */
  if (C.zf) goto L_107f36fc;
  /* 107f372a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107f372c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_107f372e:;
  /* 107f372e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 107f3731 jmp 0x107f37ab */
  goto L_107f37ab;
L_107f3733:;
  /* 107f3733 lock inc dword ptr [0x10810994] */
  x86_unimpl("lock inc @ 0x107f3733");
  /* 107f373a cmp dword ptr [0x10810984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3741 jg 0x107f3747 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f3747;
  /* 107f3743 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3745 jmp 0x107f375c */
  goto L_107f375c;
L_107f3747:;
  /* 107f3747 lock dec dword ptr [0x10810994] */
  x86_unimpl("lock dec @ 0x107f3747");
  /* 107f374e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f3750 call 0x107e8a10 */
  push32(0x107f3755u); f_107e8a10();
  /* 107f3755 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_107f375c:;
  /* 107f375c mov eax, 0xff */
  EAX = (0xffu);
  /* 107f3761 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 107f3763 nop  */
  /* nop */
L_107f3764:;
  /* 107f3764 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f3766 je 0x107f378f */
  if (C.zf) goto L_107f378f;
  /* 107f3768 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107f376a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107f376b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 107f376d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107f376e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f3770 je 0x107f3764 */
  if (C.zf) goto L_107f3764;
  /* 107f3772 push eax */
  push32((uint32_t)(EAX));
  /* 107f3773 push ebx */
  push32((uint32_t)(EBX));
  /* 107f3774 call 0x107f4850 */
  push32(0x107f3779u); f_107f4850();
  /* 107f3779 mov ebx, eax */
  EBX = (EAX);
  /* 107f377b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f377e call 0x107f4850 */
  push32(0x107f3783u); f_107f4850();
  /* 107f3783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3786 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f3788 je 0x107f3764 */
  if (C.zf) goto L_107f3764;
  /* 107f378a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f378c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107f378f:;
  /* 107f378f mov ebx, eax */
  EBX = (EAX);
  /* 107f3791 pop eax */
  EAX = (pop32());
  /* 107f3792 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3794 jne 0x107f379f */
  if (!C.zf) goto L_107f379f;
  /* 107f3796 lock dec dword ptr [0x10810994] */
  x86_unimpl("lock dec @ 0x107f3796");
  /* 107f379d jmp 0x107f37a9 */
  goto L_107f37a9;
L_107f379f:;
  /* 107f379f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f37a1 call 0x107e8ab0 */
  push32(0x107f37a6u); f_107e8ab0();
  /* 107f37a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f37a9:;
  /* 107f37a9 mov eax, ebx */
  EAX = (EBX);
L_107f37ab:;
  /* 107f37ab pop ebx */
  EBX = (pop32());
  /* 107f37ac pop esi */
  ESI = (pop32());
  /* 107f37ad pop edi */
  EDI = (pop32());
  /* 107f37ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107f37af ret  */
  ESPCHK(0x107f36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137b0 @ 0x107f37b0 (257 bytes, 103 insns) */
void f_107f37b0(void) {
  FTRACE(0x107f37b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f37b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f37b1 mov ebp, esp */
  EBP = (ESP);
  /* 107f37b3 push edi */
  push32((uint32_t)(EDI));
  /* 107f37b4 push esi */
  push32((uint32_t)(ESI));
  /* 107f37b5 push ebx */
  push32((uint32_t)(EBX));
  /* 107f37b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f37b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f37bb je 0x107f38aa */
  if (C.zf) goto L_107f38aa;
  /* 107f37c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 107f37c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 107f37c7 lea eax, [0x10810800] */
  EAX = ((uint32_t)(0x10810800));
  /* 107f37cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f37d1 jne 0x107f3821 */
  if (!C.zf) goto L_107f3821;
  /* 107f37d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 107f37d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 107f37d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 107f37d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107f37dc:;
  /* 107f37dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 107f37de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107f37e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 107f37e2 je 0x107f3805 */
  if (C.zf) goto L_107f3805;
  /* 107f37e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f37e6 je 0x107f3805 */
  if (C.zf) goto L_107f3805;
  /* 107f37e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107f37e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107f37ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f37ec jb 0x107f37f4 */
  if (C.cf) goto L_107f37f4;
  /* 107f37ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f37f0 ja 0x107f37f4 */
  if ((!C.cf&&!C.zf)) goto L_107f37f4;
  /* 107f37f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_107f37f4:;
  /* 107f37f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f37f6 jb 0x107f37fe */
  if (C.cf) goto L_107f37fe;
  /* 107f37f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f37fa ja 0x107f37fe */
  if ((!C.cf&&!C.zf)) goto L_107f37fe;
  /* 107f37fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_107f37fe:;
  /* 107f37fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f3800 jne 0x107f380f */
  if (!C.zf) goto L_107f380f;
  /* 107f3802 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107f3803 jne 0x107f37dc */
  if (!C.zf) goto L_107f37dc;
L_107f3805:;
  /* 107f3805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f3807 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f3809 je 0x107f38aa */
  if (C.zf) goto L_107f38aa;
L_107f380f:;
  /* 107f380f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 107f3814 jb 0x107f38aa */
  if (C.cf) goto L_107f38aa;
  /* 107f381a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f381c jmp 0x107f38aa */
  goto L_107f38aa;
L_107f3821:;
  /* 107f3821 lock inc dword ptr [0x10810994] */
  x86_unimpl("lock inc @ 0x107f3821");
  /* 107f3828 cmp dword ptr [0x10810984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f382f jg 0x107f3835 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f3835;
  /* 107f3831 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3833 jmp 0x107f384e */
  goto L_107f384e;
L_107f3835:;
  /* 107f3835 lock dec dword ptr [0x10810994] */
  x86_unimpl("lock dec @ 0x107f3835");
  /* 107f383c mov ebx, ecx */
  EBX = (ECX);
  /* 107f383e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f3840 call 0x107e8a10 */
  push32(0x107f3845u); f_107e8a10();
  /* 107f3845 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 107f384c mov ecx, ebx */
  ECX = (EBX);
L_107f384e:;
  /* 107f384e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3850 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 107f3852 mov edi, edi */
  EDI = (EDI);
L_107f3854:;
  /* 107f3854 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107f3856 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3858 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 107f385a je 0x107f387f */
  if (C.zf) goto L_107f387f;
  /* 107f385c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 107f385e je 0x107f387f */
  if (C.zf) goto L_107f387f;
  /* 107f3860 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107f3861 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107f3862 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3863 push eax */
  push32((uint32_t)(EAX));
  /* 107f3864 push ebx */
  push32((uint32_t)(EBX));
  /* 107f3865 call 0x107f4850 */
  push32(0x107f386au); f_107f4850();
  /* 107f386a mov ebx, eax */
  EBX = (EAX);
  /* 107f386c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f386f call 0x107f4850 */
  push32(0x107f3874u); f_107f4850();
  /* 107f3874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3877 pop ecx */
  ECX = (pop32());
  /* 107f3878 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f387a jne 0x107f3885 */
  if (!C.zf) goto L_107f3885;
  /* 107f387c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107f387d jne 0x107f3854 */
  if (!C.zf) goto L_107f3854;
L_107f387f:;
  /* 107f387f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f3881 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3883 je 0x107f388e */
  if (C.zf) goto L_107f388e;
L_107f3885:;
  /* 107f3885 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 107f388a jb 0x107f388e */
  if (C.cf) goto L_107f388e;
  /* 107f388c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_107f388e:;
  /* 107f388e pop eax */
  EAX = (pop32());
  /* 107f388f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3891 jne 0x107f389c */
  if (!C.zf) goto L_107f389c;
  /* 107f3893 lock dec dword ptr [0x10810994] */
  x86_unimpl("lock dec @ 0x107f3893");
  /* 107f389a jmp 0x107f38aa */
  goto L_107f38aa;
L_107f389c:;
  /* 107f389c mov ebx, ecx */
  EBX = (ECX);
  /* 107f389e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f38a0 call 0x107e8ab0 */
  push32(0x107f38a5u); f_107e8ab0();
  /* 107f38a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f38a8 mov ecx, ebx */
  ECX = (EBX);
L_107f38aa:;
  /* 107f38aa mov eax, ecx */
  EAX = (ECX);
  /* 107f38ac pop ebx */
  EBX = (pop32());
  /* 107f38ad pop esi */
  ESI = (pop32());
  /* 107f38ae pop edi */
  EDI = (pop32());
  /* 107f38af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107f38b0 ret  */
  ESPCHK(0x107f37b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138c0 @ 0x107f38c0 (255 bytes, 88 insns) */
void f_107f38c0(void) {
  FTRACE(0x107f38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f38c1 mov ebp, esp */
  EBP = (ESP);
  /* 107f38c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107f38c6:;
  /* 107f38c6 cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f38cd jle 0x107f38e6 */
  if ((C.zf||C.sf!=C.of)) goto L_107f38e6;
  /* 107f38cf push 8 */
  push32((uint32_t)(0x8u));
  /* 107f38d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f38d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f38d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f38d8 push ecx */
  push32((uint32_t)(ECX));
  /* 107f38d9 call 0x107eb020 */
  push32(0x107f38deu); f_107eb020();
  /* 107f38de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f38e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107f38e4 jmp 0x107f38ff */
  goto L_107f38ff;
L_107f38e6:;
  /* 107f38e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f38e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f38eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f38ed mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f38f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f38f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f38f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107f38fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107f38ff:;
  /* 107f38ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3903 je 0x107f3910 */
  if (C.zf) goto L_107f3910;
  /* 107f3905 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3908 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f390b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f390e jmp 0x107f38c6 */
  goto L_107f38c6;
L_107f3910:;
  /* 107f3910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3915 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f3917 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f391a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f391d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3920 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f3923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3926 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f3929 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f392d je 0x107f3935 */
  if (C.zf) goto L_107f3935;
  /* 107f392f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3933 jne 0x107f3948 */
  if (!C.zf) goto L_107f3948;
L_107f3935:;
  /* 107f3935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f393a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f393c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f393f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3942 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3945 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107f3948:;
  /* 107f3948 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107f394f:;
  /* 107f394f cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3956 jle 0x107f396b */
  if ((C.zf||C.sf!=C.of)) goto L_107f396b;
  /* 107f3958 push 4 */
  push32((uint32_t)(0x4u));
  /* 107f395a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f395d push edx */
  push32((uint32_t)(EDX));
  /* 107f395e call 0x107eb020 */
  push32(0x107f3963u); f_107eb020();
  /* 107f3963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3966 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f3969 jmp 0x107f3980 */
  goto L_107f3980;
L_107f396b:;
  /* 107f396b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f396e mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f3974 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3976 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f397a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107f397d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107f3980:;
  /* 107f3980 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3984 je 0x107f39ab */
  if (C.zf) goto L_107f39ab;
  /* 107f3986 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f3989 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f398c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f398f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 107f3993 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f3996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f399b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f399d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f39a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f39a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f39a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107f39a9 jmp 0x107f394f */
  goto L_107f394f;
L_107f39ab:;
  /* 107f39ab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f39af jne 0x107f39b8 */
  if (!C.zf) goto L_107f39b8;
  /* 107f39b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f39b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f39b6 jmp 0x107f39bb */
  goto L_107f39bb;
L_107f39b8:;
  /* 107f39b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107f39bb:;
  /* 107f39bb mov esp, ebp */
  ESP = (EBP);
  /* 107f39bd pop ebp */
  EBP = (pop32());
  /* 107f39be ret  */
  ESPCHK(0x107f38c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139c0 @ 0x107f39c0 (17 bytes, 8 insns) */
void f_107f39c0(void) {
  FTRACE(0x107f39c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f39c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f39c1 mov ebp, esp */
  EBP = (ESP);
  /* 107f39c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f39c6 push eax */
  push32((uint32_t)(EAX));
  /* 107f39c7 call 0x107f38c0 */
  push32(0x107f39ccu); f_107f38c0();
  /* 107f39cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f39cf pop ebp */
  EBP = (pop32());
  /* 107f39d0 ret  */
  ESPCHK(0x107f39c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x107f39e0 (297 bytes, 106 insns) */
void f_107f39e0(void) {
  FTRACE(0x107f39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f39e1 mov ebp, esp */
  EBP = (ESP);
  /* 107f39e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f39e6 push esi */
  push32((uint32_t)(ESI));
L_107f39e7:;
  /* 107f39e7 cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f39ee jle 0x107f3a07 */
  if ((C.zf||C.sf!=C.of)) goto L_107f3a07;
  /* 107f39f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 107f39f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f39f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f39f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f39f9 push ecx */
  push32((uint32_t)(ECX));
  /* 107f39fa call 0x107eb020 */
  push32(0x107f39ffu); f_107eb020();
  /* 107f39ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3a02 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f3a05 jmp 0x107f3a20 */
  goto L_107f3a20;
L_107f3a07:;
  /* 107f3a07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3a0c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f3a0e mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f3a14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3a16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f3a1a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107f3a1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107f3a20:;
  /* 107f3a20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3a24 je 0x107f3a31 */
  if (C.zf) goto L_107f3a31;
  /* 107f3a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3a29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3a2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f3a2f jmp 0x107f39e7 */
  goto L_107f39e7;
L_107f3a31:;
  /* 107f3a31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3a36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f3a38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f3a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3a3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3a41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f3a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3a47 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107f3a4a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3a4e je 0x107f3a56 */
  if (C.zf) goto L_107f3a56;
  /* 107f3a50 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3a54 jne 0x107f3a69 */
  if (!C.zf) goto L_107f3a69;
L_107f3a56:;
  /* 107f3a56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3a5b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f3a5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f3a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3a63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3a66 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107f3a69:;
  /* 107f3a69 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107f3a70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107f3a77:;
  /* 107f3a77 cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3a7e jle 0x107f3a93 */
  if ((C.zf||C.sf!=C.of)) goto L_107f3a93;
  /* 107f3a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 107f3a82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3a85 push edx */
  push32((uint32_t)(EDX));
  /* 107f3a86 call 0x107eb020 */
  push32(0x107f3a8bu); f_107eb020();
  /* 107f3a8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3a8e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107f3a91 jmp 0x107f3aa8 */
  goto L_107f3aa8;
L_107f3a93:;
  /* 107f3a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3a96 mov ecx, dword ptr [0x1080ec98] */
  ECX = (r32((uint32_t)(0x1080ec98)));
  /* 107f3a9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3a9e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107f3aa2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107f3aa5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_107f3aa8:;
  /* 107f3aa8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3aac je 0x107f3ae9 */
  if (C.zf) goto L_107f3ae9;
  /* 107f3aae push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3ab0 push 0xa */
  push32((uint32_t)(0xau));
  /* 107f3ab2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f3ab5 push eax */
  push32((uint32_t)(EAX));
  /* 107f3ab6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3aba call 0x107f4980 */
  push32(0x107f3abfu); f_107f4980();
  /* 107f3abf mov ecx, eax */
  ECX = (EAX);
  /* 107f3ac1 mov esi, edx */
  ESI = (EDX);
  /* 107f3ac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3ac6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f3ac9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f3aca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3acc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3ace mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f3ad1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 107f3ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3ad9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f3adb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f3ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3ae1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3ae4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107f3ae7 jmp 0x107f3a77 */
  goto L_107f3a77;
L_107f3ae9:;
  /* 107f3ae9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3aed jne 0x107f3afe */
  if (!C.zf) goto L_107f3afe;
  /* 107f3aef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3af2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f3af4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f3af7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3afa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f3afc jmp 0x107f3b04 */
  goto L_107f3b04;
L_107f3afe:;
  /* 107f3afe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3b01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_107f3b04:;
  /* 107f3b04 pop esi */
  ESI = (pop32());
  /* 107f3b05 mov esp, ebp */
  ESP = (EBP);
  /* 107f3b07 pop ebp */
  EBP = (pop32());
  /* 107f3b08 ret  */
  ESPCHK(0x107f39e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x107f3b10 (61 bytes, 18 insns) */
void f_107f3b10(void) {
  FTRACE(0x107f3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3b11 mov ebp, esp */
  EBP = (ESP);
  /* 107f3b13 cmp dword ptr [0x10810960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3b1a jne 0x107f3b4b */
  if (!C.zf) goto L_107f3b4b;
  /* 107f3b1c push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f3b1e call 0x107e8a10 */
  push32(0x107f3b23u); f_107e8a10();
  /* 107f3b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3b26 cmp dword ptr [0x10810960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3b2d jne 0x107f3b41 */
  if (!C.zf) goto L_107f3b41;
  /* 107f3b2f call 0x107f3b70 */
  push32(0x107f3b34u); f_107f3b70();
  /* 107f3b34 mov eax, dword ptr [0x10810960] */
  EAX = (r32((uint32_t)(0x10810960)));
  /* 107f3b39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3b3c mov dword ptr [0x10810960], eax */
  w32((uint32_t)(0x10810960), (EAX));
L_107f3b41:;
  /* 107f3b41 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f3b43 call 0x107e8ab0 */
  push32(0x107f3b48u); f_107e8ab0();
  /* 107f3b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f3b4b:;
  /* 107f3b4b pop ebp */
  EBP = (pop32());
  /* 107f3b4c ret  */
  ESPCHK(0x107f3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x107f3b50 (30 bytes, 11 insns) */
void f_107f3b50(void) {
  FTRACE(0x107f3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3b51 mov ebp, esp */
  EBP = (ESP);
  /* 107f3b53 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f3b55 call 0x107e8a10 */
  push32(0x107f3b5au); f_107e8a10();
  /* 107f3b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3b5d call 0x107f3b70 */
  push32(0x107f3b62u); f_107f3b70();
  /* 107f3b62 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f3b64 call 0x107e8ab0 */
  push32(0x107f3b69u); f_107e8ab0();
  /* 107f3b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3b6c pop ebp */
  EBP = (pop32());
  /* 107f3b6d ret  */
  ESPCHK(0x107f3b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b70 @ 0x107f3b70 (939 bytes, 266 insns) */
void f_107f3b70(void) {
  FTRACE(0x107f3b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3b70 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3b71 mov ebp, esp */
  EBP = (ESP);
  /* 107f3b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f3b76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f3b7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f3b7f call 0x107e8a10 */
  push32(0x107f3b84u); f_107e8a10();
  /* 107f3b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3b87 mov dword ptr [0x108108a8], 0 */
  w32((uint32_t)(0x108108a8), (0x0u));
  /* 107f3b91 mov dword ptr [0x1080fe38], 0xffffffff */
  w32((uint32_t)(0x1080fe38), (0xffffffffu));
  /* 107f3b9b mov eax, dword ptr [0x1080fe38] */
  EAX = (r32((uint32_t)(0x1080fe38)));
  /* 107f3ba0 mov dword ptr [0x1080fe28], eax */
  w32((uint32_t)(0x1080fe28), (EAX));
  /* 107f3ba5 push 0x1080cba8 */
  push32((uint32_t)(0x1080cba8u));
  /* 107f3baa call 0x107f49f0 */
  push32(0x107f3bafu); f_107f49f0();
  /* 107f3baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3bb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f3bb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3bb9 jne 0x107f3cf3 */
  if (!C.zf) goto L_107f3cf3;
  /* 107f3bbf push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f3bc1 call 0x107e8ab0 */
  push32(0x107f3bc6u); f_107e8ab0();
  /* 107f3bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3bc9 push 0x108108b0 */
  push32((uint32_t)(0x108108b0u));
  /* 107f3bce call dword ptr [0x108132b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132b0))), 0x107f3bd4u);
  /* 107f3bd4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3bd7 je 0x107f3cee */
  if (C.zf) goto L_107f3cee;
  /* 107f3bdd mov dword ptr [0x108108a8], 1 */
  w32((uint32_t)(0x108108a8), (0x1u));
  /* 107f3be7 mov ecx, dword ptr [0x108108b0] */
  ECX = (r32((uint32_t)(0x108108b0)));
  /* 107f3bed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f3bf0 mov dword ptr [0x1080fd90], ecx */
  w32((uint32_t)(0x1080fd90), (ECX));
  /* 107f3bf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3bf8 mov dx, word ptr [0x108108f6] */
  DX = (r16((uint32_t)(0x108108f6)));
  /* 107f3bff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f3c01 je 0x107f3c19 */
  if (C.zf) goto L_107f3c19;
  /* 107f3c03 mov eax, dword ptr [0x10810904] */
  EAX = (r32((uint32_t)(0x10810904)));
  /* 107f3c08 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f3c0b mov ecx, dword ptr [0x1080fd90] */
  ECX = (r32((uint32_t)(0x1080fd90)));
  /* 107f3c11 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3c13 mov dword ptr [0x1080fd90], ecx */
  w32((uint32_t)(0x1080fd90), (ECX));
L_107f3c19:;
  /* 107f3c19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3c1b mov dx, word ptr [0x1081094a] */
  DX = (r16((uint32_t)(0x1081094a)));
  /* 107f3c22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f3c24 je 0x107f3c4e */
  if (C.zf) goto L_107f3c4e;
  /* 107f3c26 cmp dword ptr [0x10810958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3c2d je 0x107f3c4e */
  if (C.zf) goto L_107f3c4e;
  /* 107f3c2f mov dword ptr [0x1080fd94], 1 */
  w32((uint32_t)(0x1080fd94), (0x1u));
  /* 107f3c39 mov eax, dword ptr [0x10810958] */
  EAX = (r32((uint32_t)(0x10810958)));
  /* 107f3c3e sub eax, dword ptr [0x10810904] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10810904))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f3c44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f3c47 mov dword ptr [0x1080fd98], eax */
  w32((uint32_t)(0x1080fd98), (EAX));
  /* 107f3c4c jmp 0x107f3c62 */
  goto L_107f3c62;
L_107f3c4e:;
  /* 107f3c4e mov dword ptr [0x1080fd94], 0 */
  w32((uint32_t)(0x1080fd94), (0x0u));
  /* 107f3c58 mov dword ptr [0x1080fd98], 0 */
  w32((uint32_t)(0x1080fd98), (0x0u));
L_107f3c62:;
  /* 107f3c62 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107f3c65 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3c68 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107f3c6a mov edx, dword ptr [0x1080fe1c] */
  EDX = (r32((uint32_t)(0x1080fe1c)));
  /* 107f3c70 push edx */
  push32((uint32_t)(EDX));
  /* 107f3c71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f3c73 push 0x108108b4 */
  push32((uint32_t)(0x108108b4u));
  /* 107f3c78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107f3c7d mov eax, dword ptr [0x10810818] */
  EAX = (r32((uint32_t)(0x10810818)));
  /* 107f3c82 push eax */
  push32((uint32_t)(EAX));
  /* 107f3c83 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f3c89u);
  /* 107f3c89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f3c8b je 0x107f3c9f */
  if (C.zf) goto L_107f3c9f;
  /* 107f3c8d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3c91 jne 0x107f3c9f */
  if (!C.zf) goto L_107f3c9f;
  /* 107f3c93 mov ecx, dword ptr [0x1080fe1c] */
  ECX = (r32((uint32_t)(0x1080fe1c)));
  /* 107f3c99 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 107f3c9d jmp 0x107f3ca8 */
  goto L_107f3ca8;
L_107f3c9f:;
  /* 107f3c9f mov edx, dword ptr [0x1080fe1c] */
  EDX = (r32((uint32_t)(0x1080fe1c)));
  /* 107f3ca5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_107f3ca8:;
  /* 107f3ca8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107f3cab push eax */
  push32((uint32_t)(EAX));
  /* 107f3cac push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3cae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107f3cb0 mov ecx, dword ptr [0x1080fe20] */
  ECX = (r32((uint32_t)(0x1080fe20)));
  /* 107f3cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3cb7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f3cb9 push 0x10810908 */
  push32((uint32_t)(0x10810908u));
  /* 107f3cbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107f3cc3 mov edx, dword ptr [0x10810818] */
  EDX = (r32((uint32_t)(0x10810818)));
  /* 107f3cc9 push edx */
  push32((uint32_t)(EDX));
  /* 107f3cca call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f3cd0u);
  /* 107f3cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f3cd2 je 0x107f3ce5 */
  if (C.zf) goto L_107f3ce5;
  /* 107f3cd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3cd8 jne 0x107f3ce5 */
  if (!C.zf) goto L_107f3ce5;
  /* 107f3cda mov eax, dword ptr [0x1080fe20] */
  EAX = (r32((uint32_t)(0x1080fe20)));
  /* 107f3cdf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 107f3ce3 jmp 0x107f3cee */
  goto L_107f3cee;
L_107f3ce5:;
  /* 107f3ce5 mov ecx, dword ptr [0x1080fe20] */
  ECX = (r32((uint32_t)(0x1080fe20)));
  /* 107f3ceb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_107f3cee:;
  /* 107f3cee jmp 0x107f3f17 */
  goto L_107f3f17;
L_107f3cf3:;
  /* 107f3cf3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3cf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f3cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f3cfb je 0x107f3d1d */
  if (C.zf) goto L_107f3d1d;
  /* 107f3cfd cmp dword ptr [0x1081095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3d04 je 0x107f3d2c */
  if (C.zf) goto L_107f3d2c;
  /* 107f3d06 mov ecx, dword ptr [0x1081095c] */
  ECX = (r32((uint32_t)(0x1081095c)));
  /* 107f3d0c push ecx */
  push32((uint32_t)(ECX));
  /* 107f3d0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3d10 push edx */
  push32((uint32_t)(EDX));
  /* 107f3d11 call 0x107f0ca0 */
  push32(0x107f3d16u); f_107f0ca0();
  /* 107f3d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f3d1b jne 0x107f3d2c */
  if (!C.zf) goto L_107f3d2c;
L_107f3d1d:;
  /* 107f3d1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f3d1f call 0x107e8ab0 */
  push32(0x107f3d24u); f_107e8ab0();
  /* 107f3d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d27 jmp 0x107f3f17 */
  goto L_107f3f17;
L_107f3d2c:;
  /* 107f3d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 107f3d2e mov eax, dword ptr [0x1081095c] */
  EAX = (r32((uint32_t)(0x1081095c)));
  /* 107f3d33 push eax */
  push32((uint32_t)(EAX));
  /* 107f3d34 call 0x107e5aa0 */
  push32(0x107f3d39u); f_107e5aa0();
  /* 107f3d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d3c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 107f3d41 push 0x1080cba0 */
  push32((uint32_t)(0x1080cba0u));
  /* 107f3d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f3d48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3d4b push ecx */
  push32((uint32_t)(ECX));
  /* 107f3d4c call 0x107e7e40 */
  push32(0x107f3d51u); f_107e7e40();
  /* 107f3d51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d57 push eax */
  push32((uint32_t)(EAX));
  /* 107f3d58 call 0x107e5010 */
  push32(0x107f3d5du); f_107e5010();
  /* 107f3d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d60 mov dword ptr [0x1081095c], eax */
  w32((uint32_t)(0x1081095c), (EAX));
  /* 107f3d65 cmp dword ptr [0x1081095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3d6c jne 0x107f3d7d */
  if (!C.zf) goto L_107f3d7d;
  /* 107f3d6e push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f3d70 call 0x107e8ab0 */
  push32(0x107f3d75u); f_107e8ab0();
  /* 107f3d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d78 jmp 0x107f3f17 */
  goto L_107f3f17;
L_107f3d7d:;
  /* 107f3d7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3d80 push edx */
  push32((uint32_t)(EDX));
  /* 107f3d81 mov eax, dword ptr [0x1081095c] */
  EAX = (r32((uint32_t)(0x1081095c)));
  /* 107f3d86 push eax */
  push32((uint32_t)(EAX));
  /* 107f3d87 call 0x107e7fc0 */
  push32(0x107f3d8cu); f_107e7fc0();
  /* 107f3d8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d8f push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f3d91 call 0x107e8ab0 */
  push32(0x107f3d96u); f_107e8ab0();
  /* 107f3d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3d99 push 3 */
  push32((uint32_t)(0x3u));
  /* 107f3d9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3d9e push ecx */
  push32((uint32_t)(ECX));
  /* 107f3d9f mov edx, dword ptr [0x1080fe1c] */
  EDX = (r32((uint32_t)(0x1080fe1c)));
  /* 107f3da5 push edx */
  push32((uint32_t)(EDX));
  /* 107f3da6 call 0x107e8830 */
  push32(0x107f3dabu); f_107e8830();
  /* 107f3dab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3dae mov eax, dword ptr [0x1080fe1c] */
  EAX = (r32((uint32_t)(0x1080fe1c)));
  /* 107f3db3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 107f3db7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3dba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3dbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f3dc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3dc3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f3dc6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3dc9 jne 0x107f3ddd */
  if (!C.zf) goto L_107f3ddd;
  /* 107f3dcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3dce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3dd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f3dd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3dd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3dda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107f3ddd:;
  /* 107f3ddd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3de0 push eax */
  push32((uint32_t)(EAX));
  /* 107f3de1 call 0x107f38c0 */
  push32(0x107f3de6u); f_107f38c0();
  /* 107f3de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3de9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f3def mov dword ptr [0x1080fd90], eax */
  w32((uint32_t)(0x1080fd90), (EAX));
L_107f3df4:;
  /* 107f3df4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3df7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f3dfa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3dfd je 0x107f3e15 */
  if (C.zf) goto L_107f3e15;
  /* 107f3dff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e02 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f3e05 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3e08 jl 0x107f3e20 */
  if ((C.sf!=C.of)) goto L_107f3e20;
  /* 107f3e0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f3e10 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3e13 jg 0x107f3e20 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f3e20;
L_107f3e15:;
  /* 107f3e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f3e1e jmp 0x107f3df4 */
  goto L_107f3df4;
L_107f3e20:;
  /* 107f3e20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f3e26 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3e29 jne 0x107f3ec5 */
  if (!C.zf) goto L_107f3ec5;
  /* 107f3e2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f3e38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e3b push edx */
  push32((uint32_t)(EDX));
  /* 107f3e3c call 0x107f38c0 */
  push32(0x107f3e41u); f_107f38c0();
  /* 107f3e41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f3e47 mov ecx, dword ptr [0x1080fd90] */
  ECX = (r32((uint32_t)(0x1080fd90)));
  /* 107f3e4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e4f mov dword ptr [0x1080fd90], ecx */
  w32((uint32_t)(0x1080fd90), (ECX));
L_107f3e55:;
  /* 107f3e55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e58 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f3e5b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3e5e jl 0x107f3e76 */
  if ((C.sf!=C.of)) goto L_107f3e76;
  /* 107f3e60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f3e66 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3e69 jg 0x107f3e76 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f3e76;
  /* 107f3e6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f3e74 jmp 0x107f3e55 */
  goto L_107f3e55;
L_107f3e76:;
  /* 107f3e76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e79 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f3e7c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3e7f jne 0x107f3ec5 */
  if (!C.zf) goto L_107f3ec5;
  /* 107f3e81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f3e8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3e8d push ecx */
  push32((uint32_t)(ECX));
  /* 107f3e8e call 0x107f38c0 */
  push32(0x107f3e93u); f_107f38c0();
  /* 107f3e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e96 mov edx, dword ptr [0x1080fd90] */
  EDX = (r32((uint32_t)(0x1080fd90)));
  /* 107f3e9c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3e9e mov dword ptr [0x1080fd90], edx */
  w32((uint32_t)(0x1080fd90), (EDX));
L_107f3ea4:;
  /* 107f3ea4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3ea7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f3eaa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3ead jl 0x107f3ec5 */
  if ((C.sf!=C.of)) goto L_107f3ec5;
  /* 107f3eaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3eb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f3eb5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3eb8 jg 0x107f3ec5 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f3ec5;
  /* 107f3eba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3ebd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3ec0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f3ec3 jmp 0x107f3ea4 */
  goto L_107f3ea4;
L_107f3ec5:;
  /* 107f3ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3ec9 je 0x107f3ed9 */
  if (C.zf) goto L_107f3ed9;
  /* 107f3ecb mov edx, dword ptr [0x1080fd90] */
  EDX = (r32((uint32_t)(0x1080fd90)));
  /* 107f3ed1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f3ed3 mov dword ptr [0x1080fd90], edx */
  w32((uint32_t)(0x1080fd90), (EDX));
L_107f3ed9:;
  /* 107f3ed9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3edc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f3edf mov dword ptr [0x1080fd94], ecx */
  w32((uint32_t)(0x1080fd94), (ECX));
  /* 107f3ee5 cmp dword ptr [0x1080fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1080fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3eec je 0x107f3f0e */
  if (C.zf) goto L_107f3f0e;
  /* 107f3eee push 3 */
  push32((uint32_t)(0x3u));
  /* 107f3ef0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f3ef3 push edx */
  push32((uint32_t)(EDX));
  /* 107f3ef4 mov eax, dword ptr [0x1080fe20] */
  EAX = (r32((uint32_t)(0x1080fe20)));
  /* 107f3ef9 push eax */
  push32((uint32_t)(EAX));
  /* 107f3efa call 0x107e8830 */
  push32(0x107f3effu); f_107e8830();
  /* 107f3eff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3f02 mov ecx, dword ptr [0x1080fe20] */
  ECX = (r32((uint32_t)(0x1080fe20)));
  /* 107f3f08 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 107f3f0c jmp 0x107f3f17 */
  goto L_107f3f17;
L_107f3f0e:;
  /* 107f3f0e mov edx, dword ptr [0x1080fe20] */
  EDX = (r32((uint32_t)(0x1080fe20)));
  /* 107f3f14 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_107f3f17:;
  /* 107f3f17 mov esp, ebp */
  ESP = (EBP);
  /* 107f3f19 pop ebp */
  EBP = (pop32());
  /* 107f3f1a ret  */
  ESPCHK(0x107f3b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f20 @ 0x107f3f20 (46 bytes, 18 insns) */
void f_107f3f20(void) {
  FTRACE(0x107f3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3f21 mov ebp, esp */
  EBP = (ESP);
  /* 107f3f23 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3f24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f3f26 call 0x107e8a10 */
  push32(0x107f3f2bu); f_107e8a10();
  /* 107f3f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3f31 push eax */
  push32((uint32_t)(EAX));
  /* 107f3f32 call 0x107f3f50 */
  push32(0x107f3f37u); f_107f3f50();
  /* 107f3f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3f3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f3f3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f3f3f call 0x107e8ab0 */
  push32(0x107f3f44u); f_107e8ab0();
  /* 107f3f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f3f4a mov esp, ebp */
  ESP = (EBP);
  /* 107f3f4c pop ebp */
  EBP = (pop32());
  /* 107f3f4d ret  */
  ESPCHK(0x107f3f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f50 @ 0x107f3f50 (762 bytes, 246 insns) */
void f_107f3f50(void) {
  FTRACE(0x107f3f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f3f50 push ebp */
  push32((uint32_t)(EBP));
  /* 107f3f51 mov ebp, esp */
  EBP = (ESP);
  /* 107f3f53 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3f54 cmp dword ptr [0x1080fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1080fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3f5b jne 0x107f3f64 */
  if (!C.zf) goto L_107f3f64;
  /* 107f3f5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3f5f jmp 0x107f4246 */
  goto L_107f4246;
L_107f3f64:;
  /* 107f3f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3f67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107f3f6a cmp ecx, dword ptr [0x1080fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3f70 jne 0x107f3f84 */
  if (!C.zf) goto L_107f3f84;
  /* 107f3f72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3f75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107f3f78 cmp eax, dword ptr [0x1080fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3f7e je 0x107f414b */
  if (C.zf) goto L_107f414b;
L_107f3f84:;
  /* 107f3f84 cmp dword ptr [0x108108a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108108a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f3f8b je 0x107f4105 */
  if (C.zf) goto L_107f4105;
  /* 107f3f91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f3f93 mov cx, word ptr [0x10810948] */
  CX = (r16((uint32_t)(0x10810948)));
  /* 107f3f9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f3f9c jne 0x107f3ff9 */
  if (!C.zf) goto L_107f3ff9;
  /* 107f3f9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3fa0 mov dx, word ptr [0x10810956] */
  DX = (r16((uint32_t)(0x10810956)));
  /* 107f3fa7 push edx */
  push32((uint32_t)(EDX));
  /* 107f3fa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3faa mov ax, word ptr [0x10810954] */
  AX = (r16((uint32_t)(0x10810954)));
  /* 107f3fb0 push eax */
  push32((uint32_t)(EAX));
  /* 107f3fb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f3fb3 mov cx, word ptr [0x10810952] */
  CX = (r16((uint32_t)(0x10810952)));
  /* 107f3fba push ecx */
  push32((uint32_t)(ECX));
  /* 107f3fbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3fbd mov dx, word ptr [0x10810950] */
  DX = (r16((uint32_t)(0x10810950)));
  /* 107f3fc4 push edx */
  push32((uint32_t)(EDX));
  /* 107f3fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f3fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f3fc9 mov ax, word ptr [0x1081094c] */
  AX = (r16((uint32_t)(0x1081094c)));
  /* 107f3fcf push eax */
  push32((uint32_t)(EAX));
  /* 107f3fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f3fd2 mov cx, word ptr [0x1081094e] */
  CX = (r16((uint32_t)(0x1081094e)));
  /* 107f3fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 107f3fda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3fdc mov dx, word ptr [0x1081094a] */
  DX = (r16((uint32_t)(0x1081094a)));
  /* 107f3fe3 push edx */
  push32((uint32_t)(EDX));
  /* 107f3fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f3fe7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107f3fea push ecx */
  push32((uint32_t)(ECX));
  /* 107f3feb push 1 */
  push32((uint32_t)(0x1u));
  /* 107f3fed push 1 */
  push32((uint32_t)(0x1u));
  /* 107f3fef call 0x107f4250 */
  push32(0x107f3ff4u); f_107f4250();
  /* 107f3ff4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f3ff7 jmp 0x107f404a */
  goto L_107f404a;
L_107f3ff9:;
  /* 107f3ff9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f3ffb mov dx, word ptr [0x10810956] */
  DX = (r16((uint32_t)(0x10810956)));
  /* 107f4002 push edx */
  push32((uint32_t)(EDX));
  /* 107f4003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4005 mov ax, word ptr [0x10810954] */
  AX = (r16((uint32_t)(0x10810954)));
  /* 107f400b push eax */
  push32((uint32_t)(EAX));
  /* 107f400c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f400e mov cx, word ptr [0x10810952] */
  CX = (r16((uint32_t)(0x10810952)));
  /* 107f4015 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4016 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4018 mov dx, word ptr [0x10810950] */
  DX = (r16((uint32_t)(0x10810950)));
  /* 107f401f push edx */
  push32((uint32_t)(EDX));
  /* 107f4020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4022 mov ax, word ptr [0x1081094e] */
  AX = (r16((uint32_t)(0x1081094e)));
  /* 107f4028 push eax */
  push32((uint32_t)(EAX));
  /* 107f4029 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f402b push 0 */
  push32((uint32_t)(0x0u));
  /* 107f402d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f402f mov cx, word ptr [0x1081094a] */
  CX = (r16((uint32_t)(0x1081094a)));
  /* 107f4036 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f403a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107f403d push eax */
  push32((uint32_t)(EAX));
  /* 107f403e push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4040 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4042 call 0x107f4250 */
  push32(0x107f4047u); f_107f4250();
  /* 107f4047 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f404a:;
  /* 107f404a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f404c mov cx, word ptr [0x108108f4] */
  CX = (r16((uint32_t)(0x108108f4)));
  /* 107f4053 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f4055 jne 0x107f40b2 */
  if (!C.zf) goto L_107f40b2;
  /* 107f4057 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4059 mov dx, word ptr [0x10810902] */
  DX = (r16((uint32_t)(0x10810902)));
  /* 107f4060 push edx */
  push32((uint32_t)(EDX));
  /* 107f4061 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4063 mov ax, word ptr [0x10810900] */
  AX = (r16((uint32_t)(0x10810900)));
  /* 107f4069 push eax */
  push32((uint32_t)(EAX));
  /* 107f406a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f406c mov cx, word ptr [0x108108fe] */
  CX = (r16((uint32_t)(0x108108fe)));
  /* 107f4073 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4074 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4076 mov dx, word ptr [0x108108fc] */
  DX = (r16((uint32_t)(0x108108fc)));
  /* 107f407d push edx */
  push32((uint32_t)(EDX));
  /* 107f407e push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4082 mov ax, word ptr [0x108108f8] */
  AX = (r16((uint32_t)(0x108108f8)));
  /* 107f4088 push eax */
  push32((uint32_t)(EAX));
  /* 107f4089 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f408b mov cx, word ptr [0x108108fa] */
  CX = (r16((uint32_t)(0x108108fa)));
  /* 107f4092 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4093 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4095 mov dx, word ptr [0x108108f6] */
  DX = (r16((uint32_t)(0x108108f6)));
  /* 107f409c push edx */
  push32((uint32_t)(EDX));
  /* 107f409d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f40a0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107f40a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f40a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f40a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f40a8 call 0x107f4250 */
  push32(0x107f40adu); f_107f4250();
  /* 107f40ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f40b0 jmp 0x107f4103 */
  goto L_107f4103;
L_107f40b2:;
  /* 107f40b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f40b4 mov dx, word ptr [0x10810902] */
  DX = (r16((uint32_t)(0x10810902)));
  /* 107f40bb push edx */
  push32((uint32_t)(EDX));
  /* 107f40bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f40be mov ax, word ptr [0x10810900] */
  AX = (r16((uint32_t)(0x10810900)));
  /* 107f40c4 push eax */
  push32((uint32_t)(EAX));
  /* 107f40c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f40c7 mov cx, word ptr [0x108108fe] */
  CX = (r16((uint32_t)(0x108108fe)));
  /* 107f40ce push ecx */
  push32((uint32_t)(ECX));
  /* 107f40cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f40d1 mov dx, word ptr [0x108108fc] */
  DX = (r16((uint32_t)(0x108108fc)));
  /* 107f40d8 push edx */
  push32((uint32_t)(EDX));
  /* 107f40d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f40db mov ax, word ptr [0x108108fa] */
  AX = (r16((uint32_t)(0x108108fa)));
  /* 107f40e1 push eax */
  push32((uint32_t)(EAX));
  /* 107f40e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f40e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f40e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f40e8 mov cx, word ptr [0x108108f6] */
  CX = (r16((uint32_t)(0x108108f6)));
  /* 107f40ef push ecx */
  push32((uint32_t)(ECX));
  /* 107f40f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f40f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107f40f6 push eax */
  push32((uint32_t)(EAX));
  /* 107f40f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f40f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f40fb call 0x107f4250 */
  push32(0x107f4100u); f_107f4250();
  /* 107f4100 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f4103:;
  /* 107f4103 jmp 0x107f414b */
  goto L_107f414b;
L_107f4105:;
  /* 107f4105 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4107 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4109 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f410b push 2 */
  push32((uint32_t)(0x2u));
  /* 107f410d push 0 */
  push32((uint32_t)(0x0u));
  /* 107f410f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4111 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4113 push 4 */
  push32((uint32_t)(0x4u));
  /* 107f4115 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4118 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107f411b push edx */
  push32((uint32_t)(EDX));
  /* 107f411c push 1 */
  push32((uint32_t)(0x1u));
  /* 107f411e push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4120 call 0x107f4250 */
  push32(0x107f4125u); f_107f4250();
  /* 107f4125 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4128 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f412a push 0 */
  push32((uint32_t)(0x0u));
  /* 107f412c push 0 */
  push32((uint32_t)(0x0u));
  /* 107f412e push 2 */
  push32((uint32_t)(0x2u));
  /* 107f4130 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4132 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4134 push 5 */
  push32((uint32_t)(0x5u));
  /* 107f4136 push 0xa */
  push32((uint32_t)(0xau));
  /* 107f4138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f413b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107f413e push ecx */
  push32((uint32_t)(ECX));
  /* 107f413f push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4141 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4143 call 0x107f4250 */
  push32(0x107f4148u); f_107f4250();
  /* 107f4148 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f414b:;
  /* 107f414b mov edx, dword ptr [0x1080fe2c] */
  EDX = (r32((uint32_t)(0x1080fe2c)));
  /* 107f4151 cmp edx, dword ptr [0x1080fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1080fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4157 jge 0x107f41a4 */
  if ((C.sf==C.of)) goto L_107f41a4;
  /* 107f4159 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f415c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107f415f cmp ecx, dword ptr [0x1080fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4165 jl 0x107f4175 */
  if ((C.sf!=C.of)) goto L_107f4175;
  /* 107f4167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f416a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107f416d cmp eax, dword ptr [0x1080fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4173 jle 0x107f417c */
  if ((C.zf||C.sf!=C.of)) goto L_107f417c;
L_107f4175:;
  /* 107f4175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4177 jmp 0x107f4246 */
  goto L_107f4246;
L_107f417c:;
  /* 107f417c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f417f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107f4182 cmp edx, dword ptr [0x1080fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1080fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4188 jle 0x107f41a2 */
  if ((C.zf||C.sf!=C.of)) goto L_107f41a2;
  /* 107f418a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f418d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107f4190 cmp ecx, dword ptr [0x1080fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4196 jge 0x107f41a2 */
  if ((C.sf==C.of)) goto L_107f41a2;
  /* 107f4198 mov eax, 1 */
  EAX = (0x1u);
  /* 107f419d jmp 0x107f4246 */
  goto L_107f4246;
L_107f41a2:;
  /* 107f41a2 jmp 0x107f41e7 */
  goto L_107f41e7;
L_107f41a4:;
  /* 107f41a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107f41aa cmp eax, dword ptr [0x1080fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f41b0 jl 0x107f41c0 */
  if ((C.sf!=C.of)) goto L_107f41c0;
  /* 107f41b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107f41b8 cmp edx, dword ptr [0x1080fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1080fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f41be jle 0x107f41c7 */
  if ((C.zf||C.sf!=C.of)) goto L_107f41c7;
L_107f41c0:;
  /* 107f41c0 mov eax, 1 */
  EAX = (0x1u);
  /* 107f41c5 jmp 0x107f4246 */
  goto L_107f4246;
L_107f41c7:;
  /* 107f41c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107f41cd cmp ecx, dword ptr [0x1080fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f41d3 jle 0x107f41e7 */
  if ((C.zf||C.sf!=C.of)) goto L_107f41e7;
  /* 107f41d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107f41db cmp eax, dword ptr [0x1080fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f41e1 jge 0x107f41e7 */
  if ((C.sf==C.of)) goto L_107f41e7;
  /* 107f41e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f41e5 jmp 0x107f4246 */
  goto L_107f4246;
L_107f41e7:;
  /* 107f41e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107f41ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f41f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f41f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f41f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f41fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107f41fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f4203 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4205 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f420b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f420e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4211 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107f4214 cmp edx, dword ptr [0x1080fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1080fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f421a jne 0x107f4232 */
  if (!C.zf) goto L_107f4232;
  /* 107f421c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f421f cmp eax, dword ptr [0x1080fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4225 jl 0x107f422e */
  if ((C.sf!=C.of)) goto L_107f422e;
  /* 107f4227 mov eax, 1 */
  EAX = (0x1u);
  /* 107f422c jmp 0x107f4246 */
  goto L_107f4246;
L_107f422e:;
  /* 107f422e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4230 jmp 0x107f4246 */
  goto L_107f4246;
L_107f4232:;
  /* 107f4232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4235 cmp ecx, dword ptr [0x1080fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f423b jge 0x107f4244 */
  if ((C.sf==C.of)) goto L_107f4244;
  /* 107f423d mov eax, 1 */
  EAX = (0x1u);
  /* 107f4242 jmp 0x107f4246 */
  goto L_107f4246;
L_107f4244:;
  /* 107f4244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f4246:;
  /* 107f4246 mov esp, ebp */
  ESP = (EBP);
  /* 107f4248 pop ebp */
  EBP = (pop32());
  /* 107f4249 ret  */
  ESPCHK(0x107f3f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014250 @ 0x107f4250 (504 bytes, 145 insns) */
void f_107f4250(void) {
  FTRACE(0x107f4250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4250 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4251 mov ebp, esp */
  EBP = (ESP);
  /* 107f4253 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4256 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f425a jne 0x107f432c */
  if (!C.zf) goto L_107f432c;
  /* 107f4260 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4263 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107f4266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4268 jne 0x107f4279 */
  if (!C.zf) goto L_107f4279;
  /* 107f426a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f426d mov edx, dword ptr [ecx*4 + 0x1080fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080fe4c)));
  /* 107f4274 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107f4277 jmp 0x107f4286 */
  goto L_107f4286;
L_107f4279:;
  /* 107f4279 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f427c mov ecx, dword ptr [eax*4 + 0x1080fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080fe80)));
  /* 107f4283 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107f4286:;
  /* 107f4286 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f4289 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f428c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f428f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4292 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4295 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f429b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f429e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f42a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f42a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f42a6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 107f42a9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 107f42ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f42ae mov ecx, 7 */
  ECX = (0x7u);
  /* 107f42b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107f42b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f42b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f42bb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f42be jge 0x107f42d9 */
  if ((C.sf==C.of)) goto L_107f42d9;
  /* 107f42c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f42c3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f42c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f42c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f42cc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f42cf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f42d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f42d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f42d7 jmp 0x107f42ed */
  goto L_107f42ed;
L_107f42d9:;
  /* 107f42d9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f42dc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f42df mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f42e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f42e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f42e8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f42ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107f42ed:;
  /* 107f42ed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f42f1 jne 0x107f432a */
  if (!C.zf) goto L_107f432a;
  /* 107f42f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f42f6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 107f42f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f42fb jne 0x107f430c */
  if (!C.zf) goto L_107f430c;
  /* 107f42fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4300 mov eax, dword ptr [edx*4 + 0x1080fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1080fe50)));
  /* 107f4307 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107f430a jmp 0x107f4319 */
  goto L_107f4319;
L_107f430c:;
  /* 107f430c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f430f mov edx, dword ptr [ecx*4 + 0x1080fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080fe84)));
  /* 107f4316 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107f4319:;
  /* 107f4319 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f431c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f431f jle 0x107f432a */
  if ((C.zf||C.sf!=C.of)) goto L_107f432a;
  /* 107f4321 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4324 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4327 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107f432a:;
  /* 107f432a jmp 0x107f4361 */
  goto L_107f4361;
L_107f432c:;
  /* 107f432c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f432f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107f4332 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4334 jne 0x107f4345 */
  if (!C.zf) goto L_107f4345;
  /* 107f4336 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4339 mov ecx, dword ptr [eax*4 + 0x1080fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080fe4c)));
  /* 107f4340 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107f4343 jmp 0x107f4352 */
  goto L_107f4352;
L_107f4345:;
  /* 107f4345 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4348 mov eax, dword ptr [edx*4 + 0x1080fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1080fe80)));
  /* 107f434f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_107f4352:;
  /* 107f4352 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f4355 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f4358 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f435b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f435e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107f4361:;
  /* 107f4361 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4365 jne 0x107f43a1 */
  if (!C.zf) goto L_107f43a1;
  /* 107f4367 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f436a mov dword ptr [0x1080fe2c], eax */
  w32((uint32_t)(0x1080fe2c), (EAX));
  /* 107f436f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 107f4372 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f4375 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 107f4378 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f437a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f437d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 107f4380 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4382 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f4388 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 107f438b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f438d mov dword ptr [0x1080fe30], ecx */
  w32((uint32_t)(0x1080fe30), (ECX));
  /* 107f4393 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4396 mov dword ptr [0x1080fe28], edx */
  w32((uint32_t)(0x1080fe28), (EDX));
  /* 107f439c jmp 0x107f4444 */
  goto L_107f4444;
L_107f43a1:;
  /* 107f43a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f43a4 mov dword ptr [0x1080fe3c], eax */
  w32((uint32_t)(0x1080fe3c), (EAX));
  /* 107f43a9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 107f43ac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f43af mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 107f43b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f43b4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f43b7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 107f43ba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f43bc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f43c2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 107f43c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f43c7 mov dword ptr [0x1080fe40], ecx */
  w32((uint32_t)(0x1080fe40), (ECX));
  /* 107f43cd mov edx, dword ptr [0x1080fd98] */
  EDX = (r32((uint32_t)(0x1080fd98)));
  /* 107f43d3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f43d9 mov eax, dword ptr [0x1080fe40] */
  EAX = (r32((uint32_t)(0x1080fe40)));
  /* 107f43de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f43e0 mov dword ptr [0x1080fe40], eax */
  w32((uint32_t)(0x1080fe40), (EAX));
  /* 107f43e5 cmp dword ptr [0x1080fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1080fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f43ec jge 0x107f4411 */
  if ((C.sf==C.of)) goto L_107f4411;
  /* 107f43ee mov ecx, dword ptr [0x1080fe40] */
  ECX = (r32((uint32_t)(0x1080fe40)));
  /* 107f43f4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f43fa mov dword ptr [0x1080fe40], ecx */
  w32((uint32_t)(0x1080fe40), (ECX));
  /* 107f4400 mov edx, dword ptr [0x1080fe3c] */
  EDX = (r32((uint32_t)(0x1080fe3c)));
  /* 107f4406 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4409 mov dword ptr [0x1080fe3c], edx */
  w32((uint32_t)(0x1080fe3c), (EDX));
  /* 107f440f jmp 0x107f443b */
  goto L_107f443b;
L_107f4411:;
  /* 107f4411 cmp dword ptr [0x1080fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1080fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f441b jl 0x107f443b */
  if ((C.sf!=C.of)) goto L_107f443b;
  /* 107f441d mov eax, dword ptr [0x1080fe40] */
  EAX = (r32((uint32_t)(0x1080fe40)));
  /* 107f4422 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4427 mov dword ptr [0x1080fe40], eax */
  w32((uint32_t)(0x1080fe40), (EAX));
  /* 107f442c mov ecx, dword ptr [0x1080fe3c] */
  ECX = (r32((uint32_t)(0x1080fe3c)));
  /* 107f4432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4435 mov dword ptr [0x1080fe3c], ecx */
  w32((uint32_t)(0x1080fe3c), (ECX));
L_107f443b:;
  /* 107f443b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f443e mov dword ptr [0x1080fe38], edx */
  w32((uint32_t)(0x1080fe38), (EDX));
L_107f4444:;
  /* 107f4444 mov esp, ebp */
  ESP = (EBP);
  /* 107f4446 pop ebp */
  EBP = (pop32());
  /* 107f4447 ret  */
  ESPCHK(0x107f4250u, _esp0);
  ESP += 4; return;
}

/* FUN_10014450 @ 0x107f4450 (382 bytes, 135 insns) */
void f_107f4450(void) {
  FTRACE(0x107f4450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4450 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4451 mov ebp, esp */
  EBP = (ESP);
  /* 107f4453 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f4455 push 0x1080cbb0 */
  push32((uint32_t)(0x1080cbb0u));
  /* 107f445a push 0x107ee118 */
  push32((uint32_t)(0x107ee118u));
  /* 107f445f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107f4465 push eax */
  push32((uint32_t)(EAX));
  /* 107f4466 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107f446d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4470 push ebx */
  push32((uint32_t)(EBX));
  /* 107f4471 push esi */
  push32((uint32_t)(ESI));
  /* 107f4472 push edi */
  push32((uint32_t)(EDI));
  /* 107f4473 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f4476 cmp dword ptr [0x10810964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f447d jne 0x107f44c2 */
  if (!C.zf) goto L_107f44c2;
  /* 107f447f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4481 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4483 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4485 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4487 call dword ptr [0x108132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ac))), 0x107f448du);
  /* 107f448d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f448f je 0x107f449d */
  if (C.zf) goto L_107f449d;
  /* 107f4491 mov dword ptr [0x10810964], 1 */
  w32((uint32_t)(0x10810964), (0x1u));
  /* 107f449b jmp 0x107f44c2 */
  goto L_107f44c2;
L_107f449d:;
  /* 107f449d push 0 */
  push32((uint32_t)(0x0u));
  /* 107f449f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f44a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f44a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f44a5 call dword ptr [0x108132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c4))), 0x107f44abu);
  /* 107f44ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f44ad je 0x107f44bb */
  if (C.zf) goto L_107f44bb;
  /* 107f44af mov dword ptr [0x10810964], 2 */
  w32((uint32_t)(0x10810964), (0x2u));
  /* 107f44b9 jmp 0x107f44c2 */
  goto L_107f44c2;
L_107f44bb:;
  /* 107f44bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f44bd jmp 0x107f45d1 */
  goto L_107f45d1;
L_107f44c2:;
  /* 107f44c2 cmp dword ptr [0x10810964], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10810964))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f44c9 jne 0x107f44e6 */
  if (!C.zf) goto L_107f44e6;
  /* 107f44cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f44ce push eax */
  push32((uint32_t)(EAX));
  /* 107f44cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f44d2 push ecx */
  push32((uint32_t)(ECX));
  /* 107f44d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f44d6 push edx */
  push32((uint32_t)(EDX));
  /* 107f44d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f44da push eax */
  push32((uint32_t)(EAX));
  /* 107f44db call dword ptr [0x108132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ac))), 0x107f44e1u);
  /* 107f44e1 jmp 0x107f45d1 */
  goto L_107f45d1;
L_107f44e6:;
  /* 107f44e6 cmp dword ptr [0x10810964], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10810964))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f44ed jne 0x107f45cf */
  if (!C.zf) goto L_107f45cf;
  /* 107f44f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f44f7 jne 0x107f4502 */
  if (!C.zf) goto L_107f4502;
  /* 107f44f9 mov ecx, dword ptr [0x10810818] */
  ECX = (r32((uint32_t)(0x10810818)));
  /* 107f44ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_107f4502:;
  /* 107f4502 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4504 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4506 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4509 push edx */
  push32((uint32_t)(EDX));
  /* 107f450a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f450d push eax */
  push32((uint32_t)(EAX));
  /* 107f450e call dword ptr [0x108132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c4))), 0x107f4514u);
  /* 107f4514 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107f4517 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f451b jne 0x107f4524 */
  if (!C.zf) goto L_107f4524;
  /* 107f451d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f451f jmp 0x107f45d1 */
  goto L_107f45d1;
L_107f4524:;
  /* 107f4524 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f452b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f452e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4531 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107f4533 call 0x107e81b0 */
  push32(0x107f4538u); f_107e81b0();
  /* 107f4538 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 107f453b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f453e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f4541 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107f4544 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107f454b jmp 0x107f4564 */
  goto L_107f4564;
  /* 107f454d mov eax, 1 */
  EAX = (0x1u);
  /* 107f4552 ret  */
  ESPCHK(0x107f4450u, _esp0);
  ESP += 4; return;
  /* 107f4553 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107f4556 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107f455d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107f4564:;
  /* 107f4564 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4568 jne 0x107f456e */
  if (!C.zf) goto L_107f456e;
  /* 107f456a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f456c jmp 0x107f45d1 */
  goto L_107f45d1;
L_107f456e:;
  /* 107f456e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f4571 push edx */
  push32((uint32_t)(EDX));
  /* 107f4572 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4575 push eax */
  push32((uint32_t)(EAX));
  /* 107f4576 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4579 push ecx */
  push32((uint32_t)(ECX));
  /* 107f457a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f457d push edx */
  push32((uint32_t)(EDX));
  /* 107f457e call dword ptr [0x108132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c4))), 0x107f4584u);
  /* 107f4584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4586 jne 0x107f458c */
  if (!C.zf) goto L_107f458c;
  /* 107f4588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f458a jmp 0x107f45d1 */
  goto L_107f45d1;
L_107f458c:;
  /* 107f458c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4590 jne 0x107f45ad */
  if (!C.zf) goto L_107f45ad;
  /* 107f4592 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4594 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4596 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f4598 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f459b push eax */
  push32((uint32_t)(EAX));
  /* 107f459c push 1 */
  push32((uint32_t)(0x1u));
  /* 107f459e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f45a1 push ecx */
  push32((uint32_t)(ECX));
  /* 107f45a2 call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107f45a8u);
  /* 107f45a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107f45ab jmp 0x107f45ca */
  goto L_107f45ca;
L_107f45ad:;
  /* 107f45ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f45b0 push edx */
  push32((uint32_t)(EDX));
  /* 107f45b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f45b4 push eax */
  push32((uint32_t)(EAX));
  /* 107f45b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f45b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f45ba push ecx */
  push32((uint32_t)(ECX));
  /* 107f45bb push 1 */
  push32((uint32_t)(0x1u));
  /* 107f45bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f45c0 push edx */
  push32((uint32_t)(EDX));
  /* 107f45c1 call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107f45c7u);
  /* 107f45c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107f45ca:;
  /* 107f45ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f45cd jmp 0x107f45d1 */
  goto L_107f45d1;
L_107f45cf:;
  /* 107f45cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f45d1:;
  /* 107f45d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 107f45d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f45d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107f45de pop edi */
  EDI = (pop32());
  /* 107f45df pop esi */
  ESI = (pop32());
  /* 107f45e0 pop ebx */
  EBX = (pop32());
  /* 107f45e1 mov esp, ebp */
  ESP = (EBP);
  /* 107f45e3 pop ebp */
  EBP = (pop32());
  /* 107f45e4 ret  */
  ESPCHK(0x107f4450u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x107f45f0 (398 bytes, 140 insns) */
void f_107f45f0(void) {
  FTRACE(0x107f45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f45f1 mov ebp, esp */
  EBP = (ESP);
  /* 107f45f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f45f5 push 0x1080cbc0 */
  push32((uint32_t)(0x1080cbc0u));
  /* 107f45fa push 0x107ee118 */
  push32((uint32_t)(0x107ee118u));
  /* 107f45ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107f4605 push eax */
  push32((uint32_t)(EAX));
  /* 107f4606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107f460d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4610 push ebx */
  push32((uint32_t)(EBX));
  /* 107f4611 push esi */
  push32((uint32_t)(ESI));
  /* 107f4612 push edi */
  push32((uint32_t)(EDI));
  /* 107f4613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f4616 cmp dword ptr [0x10810968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f461d jne 0x107f4662 */
  if (!C.zf) goto L_107f4662;
  /* 107f461f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4621 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4623 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4625 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4627 call dword ptr [0x108132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ac))), 0x107f462du);
  /* 107f462d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f462f je 0x107f463d */
  if (C.zf) goto L_107f463d;
  /* 107f4631 mov dword ptr [0x10810968], 1 */
  w32((uint32_t)(0x10810968), (0x1u));
  /* 107f463b jmp 0x107f4662 */
  goto L_107f4662;
L_107f463d:;
  /* 107f463d push 0 */
  push32((uint32_t)(0x0u));
  /* 107f463f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4641 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4643 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4645 call dword ptr [0x108132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c4))), 0x107f464bu);
  /* 107f464b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f464d je 0x107f465b */
  if (C.zf) goto L_107f465b;
  /* 107f464f mov dword ptr [0x10810968], 2 */
  w32((uint32_t)(0x10810968), (0x2u));
  /* 107f4659 jmp 0x107f4662 */
  goto L_107f4662;
L_107f465b:;
  /* 107f465b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f465d jmp 0x107f4781 */
  goto L_107f4781;
L_107f4662:;
  /* 107f4662 cmp dword ptr [0x10810968], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10810968))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4669 jne 0x107f4686 */
  if (!C.zf) goto L_107f4686;
  /* 107f466b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f466e push eax */
  push32((uint32_t)(EAX));
  /* 107f466f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4672 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4676 push edx */
  push32((uint32_t)(EDX));
  /* 107f4677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f467a push eax */
  push32((uint32_t)(EAX));
  /* 107f467b call dword ptr [0x108132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c4))), 0x107f4681u);
  /* 107f4681 jmp 0x107f4781 */
  goto L_107f4781;
L_107f4686:;
  /* 107f4686 cmp dword ptr [0x10810968], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10810968))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f468d jne 0x107f477f */
  if (!C.zf) goto L_107f477f;
  /* 107f4693 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4697 jne 0x107f46a2 */
  if (!C.zf) goto L_107f46a2;
  /* 107f4699 mov ecx, dword ptr [0x10810818] */
  ECX = (r32((uint32_t)(0x10810818)));
  /* 107f469f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_107f46a2:;
  /* 107f46a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f46a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f46a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f46a9 push edx */
  push32((uint32_t)(EDX));
  /* 107f46aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f46ad push eax */
  push32((uint32_t)(EAX));
  /* 107f46ae call dword ptr [0x108132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ac))), 0x107f46b4u);
  /* 107f46b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107f46b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f46bb jne 0x107f46c4 */
  if (!C.zf) goto L_107f46c4;
  /* 107f46bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f46bf jmp 0x107f4781 */
  goto L_107f4781;
L_107f46c4:;
  /* 107f46c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f46cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f46ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f46d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f46d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107f46d5 call 0x107e81b0 */
  push32(0x107f46dau); f_107e81b0();
  /* 107f46da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 107f46dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f46e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f46e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107f46e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107f46ed jmp 0x107f4706 */
  goto L_107f4706;
  /* 107f46ef mov eax, 1 */
  EAX = (0x1u);
  /* 107f46f4 ret  */
  ESPCHK(0x107f45f0u, _esp0);
  ESP += 4; return;
  /* 107f46f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107f46f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107f46ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107f4706:;
  /* 107f4706 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f470a jne 0x107f4710 */
  if (!C.zf) goto L_107f4710;
  /* 107f470c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f470e jmp 0x107f4781 */
  goto L_107f4781;
L_107f4710:;
  /* 107f4710 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f4713 push edx */
  push32((uint32_t)(EDX));
  /* 107f4714 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4717 push eax */
  push32((uint32_t)(EAX));
  /* 107f4718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f471b push ecx */
  push32((uint32_t)(ECX));
  /* 107f471c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f471f push edx */
  push32((uint32_t)(EDX));
  /* 107f4720 call dword ptr [0x108132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ac))), 0x107f4726u);
  /* 107f4726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4728 jne 0x107f472e */
  if (!C.zf) goto L_107f472e;
  /* 107f472a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f472c jmp 0x107f4781 */
  goto L_107f4781;
L_107f472e:;
  /* 107f472e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4732 jne 0x107f4756 */
  if (!C.zf) goto L_107f4756;
  /* 107f4734 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4736 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4738 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f473a push 0 */
  push32((uint32_t)(0x0u));
  /* 107f473c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f473e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4741 push eax */
  push32((uint32_t)(EAX));
  /* 107f4742 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107f4747 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f474a push ecx */
  push32((uint32_t)(ECX));
  /* 107f474b call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f4751u);
  /* 107f4751 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107f4754 jmp 0x107f477a */
  goto L_107f477a;
L_107f4756:;
  /* 107f4756 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4758 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f475a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f475d push edx */
  push32((uint32_t)(EDX));
  /* 107f475e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4761 push eax */
  push32((uint32_t)(EAX));
  /* 107f4762 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f4764 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4767 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4768 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107f476d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4770 push edx */
  push32((uint32_t)(EDX));
  /* 107f4771 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f4777u);
  /* 107f4777 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107f477a:;
  /* 107f477a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f477d jmp 0x107f4781 */
  goto L_107f4781;
L_107f477f:;
  /* 107f477f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f4781:;
  /* 107f4781 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 107f4784 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f4787 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107f478e pop edi */
  EDI = (pop32());
  /* 107f478f pop esi */
  ESI = (pop32());
  /* 107f4790 pop ebx */
  EBX = (pop32());
  /* 107f4791 mov esp, ebp */
  ESP = (EBP);
  /* 107f4793 pop ebp */
  EBP = (pop32());
  /* 107f4794 ret  */
  ESPCHK(0x107f45f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147a0 @ 0x107f47a0 (11 bytes, 6 insns) */
void f_107f47a0(void) {
  FTRACE(0x107f47a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f47a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f47a1 mov ebp, esp */
  EBP = (ESP);
  /* 107f47a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f47a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f47a9 pop ebp */
  EBP = (pop32());
  /* 107f47aa ret  */
  ESPCHK(0x107f47a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147b0 @ 0x107f47b0 (147 bytes, 43 insns) */
void f_107f47b0(void) {
  FTRACE(0x107f47b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f47b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f47b1 mov ebp, esp */
  EBP = (ESP);
  /* 107f47b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f47b4 cmp dword ptr [0x10810808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f47bb jne 0x107f47d7 */
  if (!C.zf) goto L_107f47d7;
  /* 107f47bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f47c1 jl 0x107f47d2 */
  if ((C.sf!=C.of)) goto L_107f47d2;
  /* 107f47c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f47c7 jg 0x107f47d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f47d2;
  /* 107f47c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f47cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f47cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107f47d2:;
  /* 107f47d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f47d5 jmp 0x107f483f */
  goto L_107f483f;
L_107f47d7:;
  /* 107f47d7 push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107f47dc call dword ptr [0x10813354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813354))), 0x107f47e2u);
  /* 107f47e2 cmp dword ptr [0x10810984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f47e9 je 0x107f4809 */
  if (C.zf) goto L_107f4809;
  /* 107f47eb push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107f47f0 call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107f47f6u);
  /* 107f47f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f47f8 call 0x107e8a10 */
  push32(0x107f47fdu); f_107e8a10();
  /* 107f47fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4800 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107f4807 jmp 0x107f4810 */
  goto L_107f4810;
L_107f4809:;
  /* 107f4809 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107f4810:;
  /* 107f4810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4813 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4814 call 0x107f4850 */
  push32(0x107f4819u); f_107f4850();
  /* 107f4819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f481c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f481f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4823 je 0x107f4831 */
  if (C.zf) goto L_107f4831;
  /* 107f4825 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107f4827 call 0x107e8ab0 */
  push32(0x107f482cu); f_107e8ab0();
  /* 107f482c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f482f jmp 0x107f483c */
  goto L_107f483c;
L_107f4831:;
  /* 107f4831 push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107f4836 call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107f483cu);
L_107f483c:;
  /* 107f483c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_107f483f:;
  /* 107f483f mov esp, ebp */
  ESP = (EBP);
  /* 107f4841 pop ebp */
  EBP = (pop32());
  /* 107f4842 ret  */
  ESPCHK(0x107f47b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014850 @ 0x107f4850 (299 bytes, 91 insns) */
void f_107f4850(void) {
  FTRACE(0x107f4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4850 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4851 mov ebp, esp */
  EBP = (ESP);
  /* 107f4853 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4856 cmp dword ptr [0x10810808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f485d jne 0x107f487c */
  if (!C.zf) goto L_107f487c;
  /* 107f485f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4863 jl 0x107f4874 */
  if ((C.sf!=C.of)) goto L_107f4874;
  /* 107f4865 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4869 jg 0x107f4874 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f4874;
  /* 107f486b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f486e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4871 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107f4874:;
  /* 107f4874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4877 jmp 0x107f4977 */
  goto L_107f4977;
L_107f487c:;
  /* 107f487c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4883 jge 0x107f48c3 */
  if ((C.sf==C.of)) goto L_107f48c3;
  /* 107f4885 cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f488c jle 0x107f48a1 */
  if ((C.zf||C.sf!=C.of)) goto L_107f48a1;
  /* 107f488e push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4893 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4894 call 0x107eb020 */
  push32(0x107f4899u); f_107eb020();
  /* 107f4899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f489c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107f489f jmp 0x107f48b5 */
  goto L_107f48b5;
L_107f48a1:;
  /* 107f48a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f48a4 mov eax, dword ptr [0x1080ec98] */
  EAX = (r32((uint32_t)(0x1080ec98)));
  /* 107f48a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f48ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107f48af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107f48b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107f48b5:;
  /* 107f48b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f48b9 jne 0x107f48c3 */
  if (!C.zf) goto L_107f48c3;
  /* 107f48bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f48be jmp 0x107f4977 */
  goto L_107f4977;
L_107f48c3:;
  /* 107f48c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f48c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107f48c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f48cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f48d5 mov eax, dword ptr [0x1080ec98] */
  EAX = (r32((uint32_t)(0x1080ec98)));
  /* 107f48da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f48dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107f48e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107f48e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f48e8 je 0x107f490c */
  if (C.zf) goto L_107f490c;
  /* 107f48ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f48ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107f48f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f48f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 107f48f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107f48fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 107f48ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 107f4903 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107f490a jmp 0x107f491d */
  goto L_107f491d;
L_107f490c:;
  /* 107f490c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 107f490f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 107f4912 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 107f4916 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_107f491d:;
  /* 107f491d push 1 */
  push32((uint32_t)(0x1u));
  /* 107f491f push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4921 push 3 */
  push32((uint32_t)(0x3u));
  /* 107f4923 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 107f4926 push edx */
  push32((uint32_t)(EDX));
  /* 107f4927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f492a push eax */
  push32((uint32_t)(EAX));
  /* 107f492b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107f492e push ecx */
  push32((uint32_t)(ECX));
  /* 107f492f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107f4934 mov edx, dword ptr [0x10810808] */
  EDX = (r32((uint32_t)(0x10810808)));
  /* 107f493a push edx */
  push32((uint32_t)(EDX));
  /* 107f493b call 0x107ed400 */
  push32(0x107f4940u); f_107ed400();
  /* 107f4940 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4943 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f4946 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f494a jne 0x107f4951 */
  if (!C.zf) goto L_107f4951;
  /* 107f494c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f494f jmp 0x107f4977 */
  goto L_107f4977;
L_107f4951:;
  /* 107f4951 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4955 jne 0x107f4961 */
  if (!C.zf) goto L_107f4961;
  /* 107f4957 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f495a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f495f jmp 0x107f4977 */
  goto L_107f4977;
L_107f4961:;
  /* 107f4961 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f4964 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f4969 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 107f496c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107f4972 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107f4975 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_107f4977:;
  /* 107f4977 mov esp, ebp */
  ESP = (EBP);
  /* 107f4979 pop ebp */
  EBP = (pop32());
  /* 107f497a ret  */
  ESPCHK(0x107f4850u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x107f4980 (52 bytes, 19 insns) */
void f_107f4980(void) {
  FTRACE(0x107f4980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4980 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107f4984 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 107f4988 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f498a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107f498e jne 0x107f4999 */
  if (!C.zf) goto L_107f4999;
  /* 107f4990 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 107f4994 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107f4996 ret 0x10 */
  ESPCHK(0x107f4980u, _esp0);
  ESP += 20; return;
L_107f4999:;
  /* 107f4999 push ebx */
  push32((uint32_t)(EBX));
  /* 107f499a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107f499c mov ebx, eax */
  EBX = (EAX);
  /* 107f499e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107f49a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107f49a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f49a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107f49ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107f49ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f49b0 pop ebx */
  EBX = (pop32());
  /* 107f49b1 ret 0x10 */
  ESPCHK(0x107f4980u, _esp0);
  ESP += 20; return;
}

/* FUN_100149c0 @ 0x107f49c0 (46 bytes, 18 insns) */
void f_107f49c0(void) {
  FTRACE(0x107f49c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f49c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f49c1 mov ebp, esp */
  EBP = (ESP);
  /* 107f49c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f49c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f49c6 call 0x107e8a10 */
  push32(0x107f49cbu); f_107e8a10();
  /* 107f49cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f49ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f49d1 push eax */
  push32((uint32_t)(EAX));
  /* 107f49d2 call 0x107f49f0 */
  push32(0x107f49d7u); f_107f49f0();
  /* 107f49d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f49da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f49dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 107f49df call 0x107e8ab0 */
  push32(0x107f49e4u); f_107e8ab0();
  /* 107f49e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f49e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f49ea mov esp, ebp */
  ESP = (EBP);
  /* 107f49ec pop ebp */
  EBP = (pop32());
  /* 107f49ed ret  */
  ESPCHK(0x107f49c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x107f49f0 (198 bytes, 69 insns) */
void f_107f49f0(void) {
  FTRACE(0x107f49f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f49f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f49f1 mov ebp, esp */
  EBP = (ESP);
  /* 107f49f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f49f6 mov eax, dword ptr [0x10810624] */
  EAX = (r32((uint32_t)(0x10810624)));
  /* 107f49fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f49fe cmp dword ptr [0x10812120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10812120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a05 jne 0x107f4a0e */
  if (!C.zf) goto L_107f4a0e;
  /* 107f4a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4a09 jmp 0x107f4ab2 */
  goto L_107f4ab2;
L_107f4a0e:;
  /* 107f4a0e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a12 jne 0x107f4a36 */
  if (!C.zf) goto L_107f4a36;
  /* 107f4a14 cmp dword ptr [0x1081062c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081062c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a1b je 0x107f4a36 */
  if (C.zf) goto L_107f4a36;
  /* 107f4a1d call 0x107f4b10 */
  push32(0x107f4a22u); f_107f4b10();
  /* 107f4a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4a24 je 0x107f4a2d */
  if (C.zf) goto L_107f4a2d;
  /* 107f4a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4a28 jmp 0x107f4ab2 */
  goto L_107f4ab2;
L_107f4a2d:;
  /* 107f4a2d mov ecx, dword ptr [0x10810624] */
  ECX = (r32((uint32_t)(0x10810624)));
  /* 107f4a33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107f4a36:;
  /* 107f4a36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a3a je 0x107f4ab0 */
  if (C.zf) goto L_107f4ab0;
  /* 107f4a3c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a40 je 0x107f4ab0 */
  if (C.zf) goto L_107f4ab0;
  /* 107f4a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4a45 push edx */
  push32((uint32_t)(EDX));
  /* 107f4a46 call 0x107e7e40 */
  push32(0x107f4a4bu); f_107e7e40();
  /* 107f4a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4a4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f4a51:;
  /* 107f4a51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4a54 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a57 je 0x107f4ab0 */
  if (C.zf) goto L_107f4ab0;
  /* 107f4a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4a5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f4a5e push edx */
  push32((uint32_t)(EDX));
  /* 107f4a5f call 0x107e7e40 */
  push32(0x107f4a64u); f_107e7e40();
  /* 107f4a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4a67 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a6a jbe 0x107f4aa5 */
  if ((C.cf||C.zf)) goto L_107f4aa5;
  /* 107f4a6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f4a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4a74 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 107f4a78 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4a7b jne 0x107f4aa5 */
  if (!C.zf) goto L_107f4aa5;
  /* 107f4a7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4a80 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4a84 push edx */
  push32((uint32_t)(EDX));
  /* 107f4a85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4a88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f4a8a push ecx */
  push32((uint32_t)(ECX));
  /* 107f4a8b call 0x107f4ac0 */
  push32(0x107f4a90u); f_107f4ac0();
  /* 107f4a90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4a95 jne 0x107f4aa5 */
  if (!C.zf) goto L_107f4aa5;
  /* 107f4a97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4a9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f4a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4a9f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 107f4aa3 jmp 0x107f4ab2 */
  goto L_107f4ab2;
L_107f4aa5:;
  /* 107f4aa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4aa8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4aab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f4aae jmp 0x107f4a51 */
  goto L_107f4a51;
L_107f4ab0:;
  /* 107f4ab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f4ab2:;
  /* 107f4ab2 mov esp, ebp */
  ESP = (EBP);
  /* 107f4ab4 pop ebp */
  EBP = (pop32());
  /* 107f4ab5 ret  */
  ESPCHK(0x107f49f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x107f4ac0 (79 bytes, 32 insns) */
void f_107f4ac0(void) {
  FTRACE(0x107f4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 107f4ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4ac4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4ac8 jne 0x107f4ace */
  if (!C.zf) goto L_107f4ace;
  /* 107f4aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4acc jmp 0x107f4b0b */
  goto L_107f4b0b;
L_107f4ace:;
  /* 107f4ace mov eax, dword ptr [0x10811ce4] */
  EAX = (r32((uint32_t)(0x10811ce4)));
  /* 107f4ad3 push eax */
  push32((uint32_t)(EAX));
  /* 107f4ad4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4ad8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4adb push edx */
  push32((uint32_t)(EDX));
  /* 107f4adc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4adf push eax */
  push32((uint32_t)(EAX));
  /* 107f4ae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4ae4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4ae6 mov edx, dword ptr [0x10811f84] */
  EDX = (r32((uint32_t)(0x10811f84)));
  /* 107f4aec push edx */
  push32((uint32_t)(EDX));
  /* 107f4aed call 0x107f4bc0 */
  push32(0x107f4af2u); f_107f4bc0();
  /* 107f4af2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4af5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f4af8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4afc jne 0x107f4b05 */
  if (!C.zf) goto L_107f4b05;
  /* 107f4afe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 107f4b03 jmp 0x107f4b0b */
  goto L_107f4b0b;
L_107f4b05:;
  /* 107f4b05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4b08 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107f4b0b:;
  /* 107f4b0b mov esp, ebp */
  ESP = (EBP);
  /* 107f4b0d pop ebp */
  EBP = (pop32());
  /* 107f4b0e ret  */
  ESPCHK(0x107f4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b10 @ 0x107f4b10 (174 bytes, 66 insns) */
void f_107f4b10(void) {
  FTRACE(0x107f4b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4b10 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4b11 mov ebp, esp */
  EBP = (ESP);
  /* 107f4b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4b16 mov eax, dword ptr [0x1081062c] */
  EAX = (r32((uint32_t)(0x1081062c)));
  /* 107f4b1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f4b1e:;
  /* 107f4b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4b21 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4b24 je 0x107f4bb8 */
  if (C.zf) goto L_107f4bb8;
  /* 107f4b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f4b34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4b37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f4b39 push eax */
  push32((uint32_t)(EAX));
  /* 107f4b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4b3e call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f4b44u);
  /* 107f4b44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f4b47 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4b4b jne 0x107f4b52 */
  if (!C.zf) goto L_107f4b52;
  /* 107f4b4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f4b50 jmp 0x107f4bba */
  goto L_107f4bba;
L_107f4b52:;
  /* 107f4b52 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 107f4b54 push 0x1080cbcc */
  push32((uint32_t)(0x1080cbccu));
  /* 107f4b59 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f4b5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f4b5e push ecx */
  push32((uint32_t)(ECX));
  /* 107f4b5f call 0x107e5010 */
  push32(0x107f4b64u); f_107e5010();
  /* 107f4b64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4b67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f4b6a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4b6e jne 0x107f4b75 */
  if (!C.zf) goto L_107f4b75;
  /* 107f4b70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f4b73 jmp 0x107f4bba */
  goto L_107f4bba;
L_107f4b75:;
  /* 107f4b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f4b7c push edx */
  push32((uint32_t)(EDX));
  /* 107f4b7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4b80 push eax */
  push32((uint32_t)(EAX));
  /* 107f4b81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f4b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4b86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f4b88 push edx */
  push32((uint32_t)(EDX));
  /* 107f4b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4b8d call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107f4b93u);
  /* 107f4b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4b95 jne 0x107f4b9c */
  if (!C.zf) goto L_107f4b9c;
  /* 107f4b97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f4b9a jmp 0x107f4bba */
  goto L_107f4bba;
L_107f4b9c:;
  /* 107f4b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4b9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4ba1 push eax */
  push32((uint32_t)(EAX));
  /* 107f4ba2 call 0x107f5010 */
  push32(0x107f4ba7u); f_107f5010();
  /* 107f4ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4bad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4bb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f4bb3 jmp 0x107f4b1e */
  goto L_107f4b1e;
L_107f4bb8:;
  /* 107f4bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f4bba:;
  /* 107f4bba mov esp, ebp */
  ESP = (EBP);
  /* 107f4bbc pop ebp */
  EBP = (pop32());
  /* 107f4bbd ret  */
  ESPCHK(0x107f4b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bc0 @ 0x107f4bc0 (970 bytes, 340 insns) */
void f_107f4bc0(void) {
  FTRACE(0x107f4bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4bc1 mov ebp, esp */
  EBP = (ESP);
  /* 107f4bc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107f4bc5 push 0x1080cc20 */
  push32((uint32_t)(0x1080cc20u));
  /* 107f4bca push 0x107ee118 */
  push32((uint32_t)(0x107ee118u));
  /* 107f4bcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107f4bd5 push eax */
  push32((uint32_t)(EAX));
  /* 107f4bd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107f4bdd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4be0 push ebx */
  push32((uint32_t)(EBX));
  /* 107f4be1 push esi */
  push32((uint32_t)(ESI));
  /* 107f4be2 push edi */
  push32((uint32_t)(EDI));
  /* 107f4be3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f4be6 cmp dword ptr [0x1081096c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081096c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4bed jne 0x107f4c46 */
  if (!C.zf) goto L_107f4c46;
  /* 107f4bef push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4bf1 push 0x1080c27c */
  push32((uint32_t)(0x1080c27cu));
  /* 107f4bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4bf8 push 0x1080c27c */
  push32((uint32_t)(0x1080c27cu));
  /* 107f4bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4bff push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4c01 call dword ptr [0x108132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132a8))), 0x107f4c07u);
  /* 107f4c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4c09 je 0x107f4c17 */
  if (C.zf) goto L_107f4c17;
  /* 107f4c0b mov dword ptr [0x1081096c], 1 */
  w32((uint32_t)(0x1081096c), (0x1u));
  /* 107f4c15 jmp 0x107f4c46 */
  goto L_107f4c46;
L_107f4c17:;
  /* 107f4c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4c19 push 0x1080c278 */
  push32((uint32_t)(0x1080c278u));
  /* 107f4c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4c20 push 0x1080c278 */
  push32((uint32_t)(0x1080c278u));
  /* 107f4c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4c29 call dword ptr [0x108132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132b4))), 0x107f4c2fu);
  /* 107f4c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4c31 je 0x107f4c3f */
  if (C.zf) goto L_107f4c3f;
  /* 107f4c33 mov dword ptr [0x1081096c], 2 */
  w32((uint32_t)(0x1081096c), (0x2u));
  /* 107f4c3d jmp 0x107f4c46 */
  goto L_107f4c46;
L_107f4c3f:;
  /* 107f4c3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4c41 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4c46:;
  /* 107f4c46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4c4a jle 0x107f4c5f */
  if ((C.zf||C.sf!=C.of)) goto L_107f4c5f;
  /* 107f4c4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4c4f push eax */
  push32((uint32_t)(EAX));
  /* 107f4c50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4c53 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4c54 call 0x107f4fc0 */
  push32(0x107f4c59u); f_107f4fc0();
  /* 107f4c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4c5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_107f4c5f:;
  /* 107f4c5f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4c63 jle 0x107f4c78 */
  if ((C.zf||C.sf!=C.of)) goto L_107f4c78;
  /* 107f4c65 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f4c68 push edx */
  push32((uint32_t)(EDX));
  /* 107f4c69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4c6c push eax */
  push32((uint32_t)(EAX));
  /* 107f4c6d call 0x107f4fc0 */
  push32(0x107f4c72u); f_107f4fc0();
  /* 107f4c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4c75 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_107f4c78:;
  /* 107f4c78 cmp dword ptr [0x1081096c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1081096c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4c7f jne 0x107f4ca4 */
  if (!C.zf) goto L_107f4ca4;
  /* 107f4c81 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f4c84 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4c85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4c88 push edx */
  push32((uint32_t)(EDX));
  /* 107f4c89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4c8c push eax */
  push32((uint32_t)(EAX));
  /* 107f4c8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4c90 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4c91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4c94 push edx */
  push32((uint32_t)(EDX));
  /* 107f4c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4c98 push eax */
  push32((uint32_t)(EAX));
  /* 107f4c99 call dword ptr [0x108132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132b4))), 0x107f4c9fu);
  /* 107f4c9f jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4ca4:;
  /* 107f4ca4 cmp dword ptr [0x1081096c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1081096c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4cab jne 0x107f4fa2 */
  if (!C.zf) goto L_107f4fa2;
  /* 107f4cb1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4cb5 jne 0x107f4cc0 */
  if (!C.zf) goto L_107f4cc0;
  /* 107f4cb7 mov ecx, dword ptr [0x10810818] */
  ECX = (r32((uint32_t)(0x10810818)));
  /* 107f4cbd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_107f4cc0:;
  /* 107f4cc0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4cc4 je 0x107f4cd0 */
  if (C.zf) goto L_107f4cd0;
  /* 107f4cc6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4cca jne 0x107f4e4c */
  if (!C.zf) goto L_107f4e4c;
L_107f4cd0:;
  /* 107f4cd0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4cd3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4cd6 jne 0x107f4ce2 */
  if (!C.zf) goto L_107f4ce2;
  /* 107f4cd8 mov eax, 2 */
  EAX = (0x2u);
  /* 107f4cdd jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4ce2:;
  /* 107f4ce2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4ce6 jle 0x107f4cf2 */
  if ((C.zf||C.sf!=C.of)) goto L_107f4cf2;
  /* 107f4ce8 mov eax, 1 */
  EAX = (0x1u);
  /* 107f4ced jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4cf2:;
  /* 107f4cf2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4cf6 jle 0x107f4d02 */
  if ((C.zf||C.sf!=C.of)) goto L_107f4d02;
  /* 107f4cf8 mov eax, 3 */
  EAX = (0x3u);
  /* 107f4cfd jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4d02:;
  /* 107f4d02 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 107f4d05 push eax */
  push32((uint32_t)(EAX));
  /* 107f4d06 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 107f4d09 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4d0a call dword ptr [0x10813300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813300))), 0x107f4d10u);
  /* 107f4d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4d12 jne 0x107f4d1b */
  if (!C.zf) goto L_107f4d1b;
  /* 107f4d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4d16 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4d1b:;
  /* 107f4d1b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d1f jne 0x107f4d27 */
  if (!C.zf) goto L_107f4d27;
  /* 107f4d21 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d25 je 0x107f4d54 */
  if (C.zf) goto L_107f4d54;
L_107f4d27:;
  /* 107f4d27 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d2b jne 0x107f4d33 */
  if (!C.zf) goto L_107f4d33;
  /* 107f4d2d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d31 je 0x107f4d54 */
  if (C.zf) goto L_107f4d54;
L_107f4d33:;
  /* 107f4d33 push 0x1080cbe0 */
  push32((uint32_t)(0x1080cbe0u));
  /* 107f4d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4d3a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 107f4d3f push 0x1080cbd8 */
  push32((uint32_t)(0x1080cbd8u));
  /* 107f4d44 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f4d46 call 0x107e40d0 */
  push32(0x107f4d4bu); f_107e40d0();
  /* 107f4d4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4d4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d51 jne 0x107f4d54 */
  if (!C.zf) goto L_107f4d54;
  /* 107f4d53 int3  */
  x86_unimpl("int3 @ 0x107f4d53");
L_107f4d54:;
  /* 107f4d54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4d56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4d58 jne 0x107f4d1b */
  if (!C.zf) goto L_107f4d1b;
  /* 107f4d5a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d5e jle 0x107f4dd3 */
  if ((C.zf||C.sf!=C.of)) goto L_107f4dd3;
  /* 107f4d60 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4d64 jae 0x107f4d70 */
  if (!C.cf) goto L_107f4d70;
  /* 107f4d66 mov eax, 3 */
  EAX = (0x3u);
  /* 107f4d6b jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4d70:;
  /* 107f4d70 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 107f4d73 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 107f4d76 jmp 0x107f4d81 */
  goto L_107f4d81;
L_107f4d78:;
  /* 107f4d78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4d7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4d7e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_107f4d81:;
  /* 107f4d81 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4d86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f4d88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4d8a je 0x107f4dc9 */
  if (C.zf) goto L_107f4dc9;
  /* 107f4d8c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4d8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4d91 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107f4d94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4d96 je 0x107f4dc9 */
  if (C.zf) goto L_107f4dc9;
  /* 107f4d98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4d9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f4d9d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f4d9f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4da2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4da4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f4da6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4da8 jl 0x107f4dc7 */
  if ((C.sf!=C.of)) goto L_107f4dc7;
  /* 107f4daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4dad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4daf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f4db1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4db4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f4db6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107f4db9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4dbb jg 0x107f4dc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f4dc7;
  /* 107f4dbd mov eax, 2 */
  EAX = (0x2u);
  /* 107f4dc2 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4dc7:;
  /* 107f4dc7 jmp 0x107f4d78 */
  goto L_107f4d78;
L_107f4dc9:;
  /* 107f4dc9 mov eax, 3 */
  EAX = (0x3u);
  /* 107f4dce jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4dd3:;
  /* 107f4dd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4dd7 jle 0x107f4e4c */
  if ((C.zf||C.sf!=C.of)) goto L_107f4e4c;
  /* 107f4dd9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4ddd jae 0x107f4de9 */
  if (!C.cf) goto L_107f4de9;
  /* 107f4ddf mov eax, 1 */
  EAX = (0x1u);
  /* 107f4de4 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4de9:;
  /* 107f4de9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 107f4dec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 107f4def jmp 0x107f4dfa */
  goto L_107f4dfa;
L_107f4df1:;
  /* 107f4df1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4df4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4df7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_107f4dfa:;
  /* 107f4dfa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4dff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f4e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4e03 je 0x107f4e42 */
  if (C.zf) goto L_107f4e42;
  /* 107f4e05 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4e08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f4e0a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107f4e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f4e0f je 0x107f4e42 */
  if (C.zf) goto L_107f4e42;
  /* 107f4e11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4e16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f4e18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4e1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f4e1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f4e1f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4e21 jl 0x107f4e40 */
  if ((C.sf!=C.of)) goto L_107f4e40;
  /* 107f4e23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4e26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f4e28 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f4e2a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107f4e2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4e2f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107f4e32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4e34 jg 0x107f4e40 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f4e40;
  /* 107f4e36 mov eax, 2 */
  EAX = (0x2u);
  /* 107f4e3b jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4e40:;
  /* 107f4e40 jmp 0x107f4df1 */
  goto L_107f4df1;
L_107f4e42:;
  /* 107f4e42 mov eax, 1 */
  EAX = (0x1u);
  /* 107f4e47 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4e4c:;
  /* 107f4e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4e50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4e53 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4e54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4e57 push edx */
  push32((uint32_t)(EDX));
  /* 107f4e58 push 9 */
  push32((uint32_t)(0x9u));
  /* 107f4e5a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107f4e5d push eax */
  push32((uint32_t)(EAX));
  /* 107f4e5e call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107f4e64u);
  /* 107f4e64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107f4e67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4e6b jne 0x107f4e74 */
  if (!C.zf) goto L_107f4e74;
  /* 107f4e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4e6f jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4e74:;
  /* 107f4e74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f4e7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f4e7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f4e80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4e83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107f4e85 call 0x107e81b0 */
  push32(0x107f4e8au); f_107e81b0();
  /* 107f4e8a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 107f4e8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f4e90 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 107f4e93 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107f4e96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107f4e9d jmp 0x107f4eb6 */
  goto L_107f4eb6;
  /* 107f4e9f mov eax, 1 */
  EAX = (0x1u);
  /* 107f4ea4 ret  */
  ESPCHK(0x107f4bc0u, _esp0);
  ESP += 4; return;
  /* 107f4ea5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107f4ea8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107f4eaf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107f4eb6:;
  /* 107f4eb6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4eba jne 0x107f4ec3 */
  if (!C.zf) goto L_107f4ec3;
  /* 107f4ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4ebe jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4ec3:;
  /* 107f4ec3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f4ec6 push edx */
  push32((uint32_t)(EDX));
  /* 107f4ec7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f4eca push eax */
  push32((uint32_t)(EAX));
  /* 107f4ecb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f4ece push ecx */
  push32((uint32_t)(ECX));
  /* 107f4ecf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f4ed2 push edx */
  push32((uint32_t)(EDX));
  /* 107f4ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4ed5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107f4ed8 push eax */
  push32((uint32_t)(EAX));
  /* 107f4ed9 call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107f4edfu);
  /* 107f4edf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4ee1 jne 0x107f4eea */
  if (!C.zf) goto L_107f4eea;
  /* 107f4ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4ee5 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4eea:;
  /* 107f4eea push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4eec push 0 */
  push32((uint32_t)(0x0u));
  /* 107f4eee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f4ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4ef2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4ef5 push edx */
  push32((uint32_t)(EDX));
  /* 107f4ef6 push 9 */
  push32((uint32_t)(0x9u));
  /* 107f4ef8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107f4efb push eax */
  push32((uint32_t)(EAX));
  /* 107f4efc call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107f4f02u);
  /* 107f4f02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107f4f05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4f09 jne 0x107f4f12 */
  if (!C.zf) goto L_107f4f12;
  /* 107f4f0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4f0d jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4f12:;
  /* 107f4f12 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107f4f19 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4f1c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f4f1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4f21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107f4f23 call 0x107e81b0 */
  push32(0x107f4f28u); f_107e81b0();
  /* 107f4f28 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 107f4f2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107f4f2e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 107f4f31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 107f4f34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107f4f3b jmp 0x107f4f54 */
  goto L_107f4f54;
  /* 107f4f3d mov eax, 1 */
  EAX = (0x1u);
  /* 107f4f42 ret  */
  ESPCHK(0x107f4bc0u, _esp0);
  ESP += 4; return;
  /* 107f4f43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107f4f46 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 107f4f4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107f4f54:;
  /* 107f4f54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f4f58 jne 0x107f4f5e */
  if (!C.zf) goto L_107f4f5e;
  /* 107f4f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4f5c jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4f5e:;
  /* 107f4f5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4f61 push edx */
  push32((uint32_t)(EDX));
  /* 107f4f62 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f4f65 push eax */
  push32((uint32_t)(EAX));
  /* 107f4f66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107f4f69 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4f6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107f4f6d push edx */
  push32((uint32_t)(EDX));
  /* 107f4f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 107f4f70 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107f4f73 push eax */
  push32((uint32_t)(EAX));
  /* 107f4f74 call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107f4f7au);
  /* 107f4f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f4f7c jne 0x107f4f82 */
  if (!C.zf) goto L_107f4f82;
  /* 107f4f7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f4f80 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4f82:;
  /* 107f4f82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f4f85 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4f86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f4f89 push edx */
  push32((uint32_t)(EDX));
  /* 107f4f8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f4f8d push eax */
  push32((uint32_t)(EAX));
  /* 107f4f8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f4f91 push ecx */
  push32((uint32_t)(ECX));
  /* 107f4f92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4f95 push edx */
  push32((uint32_t)(EDX));
  /* 107f4f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4f99 push eax */
  push32((uint32_t)(EAX));
  /* 107f4f9a call dword ptr [0x108132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132a8))), 0x107f4fa0u);
  /* 107f4fa0 jmp 0x107f4fa4 */
  goto L_107f4fa4;
L_107f4fa2:;
  /* 107f4fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f4fa4:;
  /* 107f4fa4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 107f4fa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f4faa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107f4fb1 pop edi */
  EDI = (pop32());
  /* 107f4fb2 pop esi */
  ESI = (pop32());
  /* 107f4fb3 pop ebx */
  EBX = (pop32());
  /* 107f4fb4 mov esp, ebp */
  ESP = (EBP);
  /* 107f4fb6 pop ebp */
  EBP = (pop32());
  /* 107f4fb7 ret  */
  ESPCHK(0x107f4bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fc0 @ 0x107f4fc0 (80 bytes, 32 insns) */
void f_107f4fc0(void) {
  FTRACE(0x107f4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 107f4fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4fc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f4fc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f4fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f4fcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107f4fd2:;
  /* 107f4fd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4fd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f4fd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f4fdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f4fde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4fe0 je 0x107f4ff7 */
  if (C.zf) goto L_107f4ff7;
  /* 107f4fe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4fe5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f4fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4fea je 0x107f4ff7 */
  if (C.zf) goto L_107f4ff7;
  /* 107f4fec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4fef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f4ff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f4ff5 jmp 0x107f4fd2 */
  goto L_107f4fd2;
L_107f4ff7:;
  /* 107f4ff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f4ffa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f4ffd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f4fff jne 0x107f5009 */
  if (!C.zf) goto L_107f5009;
  /* 107f5001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f5004 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5007 jmp 0x107f500c */
  goto L_107f500c;
L_107f5009:;
  /* 107f5009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_107f500c:;
  /* 107f500c mov esp, ebp */
  ESP = (EBP);
  /* 107f500e pop ebp */
  EBP = (pop32());
  /* 107f500f ret  */
  ESPCHK(0x107f4fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015010 @ 0x107f5010 (736 bytes, 224 insns) */
void f_107f5010(void) {
  FTRACE(0x107f5010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f5010 push ebp */
  push32((uint32_t)(EBP));
  /* 107f5011 mov ebp, esp */
  EBP = (ESP);
  /* 107f5013 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5016 push esi */
  push32((uint32_t)(ESI));
  /* 107f5017 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f501b je 0x107f503c */
  if (C.zf) goto L_107f503c;
  /* 107f501d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 107f501f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5022 push eax */
  push32((uint32_t)(EAX));
  /* 107f5023 call 0x107f5460 */
  push32(0x107f5028u); f_107f5460();
  /* 107f5028 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f502b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107f502e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5032 je 0x107f503c */
  if (C.zf) goto L_107f503c;
  /* 107f5034 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5037 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f503a jne 0x107f5044 */
  if (!C.zf) goto L_107f5044;
L_107f503c:;
  /* 107f503c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f503f jmp 0x107f52eb */
  goto L_107f52eb;
L_107f5044:;
  /* 107f5044 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f5047 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107f504b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f504d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f504f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 107f5050 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f5053 mov ecx, dword ptr [0x10810624] */
  ECX = (r32((uint32_t)(0x10810624)));
  /* 107f5059 cmp ecx, dword ptr [0x10810628] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10810628))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f505f jne 0x107f5075 */
  if (!C.zf) goto L_107f5075;
  /* 107f5061 mov edx, dword ptr [0x10810624] */
  EDX = (r32((uint32_t)(0x10810624)));
  /* 107f5067 push edx */
  push32((uint32_t)(EDX));
  /* 107f5068 call 0x107f5370 */
  push32(0x107f506du); f_107f5370();
  /* 107f506d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5070 mov dword ptr [0x10810624], eax */
  w32((uint32_t)(0x10810624), (EAX));
L_107f5075:;
  /* 107f5075 cmp dword ptr [0x10810624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f507c jne 0x107f5135 */
  if (!C.zf) goto L_107f5135;
  /* 107f5082 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5086 je 0x107f50a7 */
  if (C.zf) goto L_107f50a7;
  /* 107f5088 cmp dword ptr [0x1081062c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081062c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f508f je 0x107f50a7 */
  if (C.zf) goto L_107f50a7;
  /* 107f5091 call 0x107f4b10 */
  push32(0x107f5096u); f_107f4b10();
  /* 107f5096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f5098 je 0x107f50a2 */
  if (C.zf) goto L_107f50a2;
  /* 107f509a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f509d jmp 0x107f52eb */
  goto L_107f52eb;
L_107f50a2:;
  /* 107f50a2 jmp 0x107f5135 */
  goto L_107f5135;
L_107f50a7:;
  /* 107f50a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f50ab je 0x107f50b4 */
  if (C.zf) goto L_107f50b4;
  /* 107f50ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f50af jmp 0x107f52eb */
  goto L_107f52eb;
L_107f50b4:;
  /* 107f50b4 cmp dword ptr [0x10810624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f50bb jne 0x107f50f4 */
  if (!C.zf) goto L_107f50f4;
  /* 107f50bd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 107f50c2 push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f50c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f50c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 107f50cb call 0x107e5010 */
  push32(0x107f50d0u); f_107e5010();
  /* 107f50d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f50d3 mov dword ptr [0x10810624], eax */
  w32((uint32_t)(0x10810624), (EAX));
  /* 107f50d8 cmp dword ptr [0x10810624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f50df jne 0x107f50e9 */
  if (!C.zf) goto L_107f50e9;
  /* 107f50e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f50e4 jmp 0x107f52eb */
  goto L_107f52eb;
L_107f50e9:;
  /* 107f50e9 mov eax, dword ptr [0x10810624] */
  EAX = (r32((uint32_t)(0x10810624)));
  /* 107f50ee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107f50f4:;
  /* 107f50f4 cmp dword ptr [0x1081062c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081062c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f50fb jne 0x107f5135 */
  if (!C.zf) goto L_107f5135;
  /* 107f50fd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 107f5102 push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f5107 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f5109 push 4 */
  push32((uint32_t)(0x4u));
  /* 107f510b call 0x107e5010 */
  push32(0x107f5110u); f_107e5010();
  /* 107f5110 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5113 mov dword ptr [0x1081062c], eax */
  w32((uint32_t)(0x1081062c), (EAX));
  /* 107f5118 cmp dword ptr [0x1081062c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081062c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f511f jne 0x107f5129 */
  if (!C.zf) goto L_107f5129;
  /* 107f5121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f5124 jmp 0x107f52eb */
  goto L_107f52eb;
L_107f5129:;
  /* 107f5129 mov ecx, dword ptr [0x1081062c] */
  ECX = (r32((uint32_t)(0x1081062c)));
  /* 107f512f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_107f5135:;
  /* 107f5135 mov edx, dword ptr [0x10810624] */
  EDX = (r32((uint32_t)(0x10810624)));
  /* 107f513b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107f513e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f5141 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5144 push eax */
  push32((uint32_t)(EAX));
  /* 107f5145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5148 push ecx */
  push32((uint32_t)(ECX));
  /* 107f5149 call 0x107f52f0 */
  push32(0x107f514eu); f_107f52f0();
  /* 107f514e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5151 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f5154 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5158 jl 0x107f51f1 */
  if ((C.sf!=C.of)) goto L_107f51f1;
  /* 107f515e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5161 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5164 je 0x107f51f1 */
  if (C.zf) goto L_107f51f1;
  /* 107f516a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f516e je 0x107f51e3 */
  if (C.zf) goto L_107f51e3;
  /* 107f5170 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f5172 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5175 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5178 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107f517b push edx */
  push32((uint32_t)(EDX));
  /* 107f517c call 0x107e5aa0 */
  push32(0x107f5181u); f_107e5aa0();
  /* 107f5181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5184 jmp 0x107f518f */
  goto L_107f518f;
L_107f5186:;
  /* 107f5186 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5189 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f518c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107f518f:;
  /* 107f518f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5192 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5195 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5199 je 0x107f51b0 */
  if (C.zf) goto L_107f51b0;
  /* 107f519b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f519e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f51a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f51a4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 107f51a7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 107f51ab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 107f51ae jmp 0x107f5186 */
  goto L_107f5186;
L_107f51b0:;
  /* 107f51b0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 107f51b5 push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f51ba push 2 */
  push32((uint32_t)(0x2u));
  /* 107f51bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f51bf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 107f51c2 push eax */
  push32((uint32_t)(EAX));
  /* 107f51c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f51c6 push ecx */
  push32((uint32_t)(ECX));
  /* 107f51c7 call 0x107e54a0 */
  push32(0x107f51ccu); f_107e54a0();
  /* 107f51cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f51cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f51d2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f51d6 je 0x107f51e1 */
  if (C.zf) goto L_107f51e1;
  /* 107f51d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f51db mov dword ptr [0x10810624], edx */
  w32((uint32_t)(0x10810624), (EDX));
L_107f51e1:;
  /* 107f51e1 jmp 0x107f51ef */
  goto L_107f51ef;
L_107f51e3:;
  /* 107f51e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f51e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f51e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f51ec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_107f51ef:;
  /* 107f51ef jmp 0x107f5264 */
  goto L_107f5264;
L_107f51f1:;
  /* 107f51f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f51f5 jne 0x107f525d */
  if (!C.zf) goto L_107f525d;
  /* 107f51f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f51fb jge 0x107f5205 */
  if ((C.sf==C.of)) goto L_107f5205;
  /* 107f51fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5200 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f5202 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107f5205:;
  /* 107f5205 push 0xce */
  push32((uint32_t)(0xceu));
  /* 107f520a push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f520f push 2 */
  push32((uint32_t)(0x2u));
  /* 107f5211 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5214 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 107f521b push edx */
  push32((uint32_t)(EDX));
  /* 107f521c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f521f push eax */
  push32((uint32_t)(EAX));
  /* 107f5220 call 0x107e54a0 */
  push32(0x107f5225u); f_107e54a0();
  /* 107f5225 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5228 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f522b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f522f jne 0x107f5239 */
  if (!C.zf) goto L_107f5239;
  /* 107f5231 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f5234 jmp 0x107f52eb */
  goto L_107f52eb;
L_107f5239:;
  /* 107f5239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f523c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f523f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5242 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 107f5245 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5248 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f524b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 107f5253 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5256 mov dword ptr [0x10810624], eax */
  w32((uint32_t)(0x10810624), (EAX));
  /* 107f525b jmp 0x107f5264 */
  goto L_107f5264;
L_107f525d:;
  /* 107f525d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f525f jmp 0x107f52eb */
  goto L_107f52eb;
L_107f5264:;
  /* 107f5264 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5268 je 0x107f52e9 */
  if (C.zf) goto L_107f52e9;
  /* 107f526a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 107f526f push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f5274 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f5276 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5279 push ecx */
  push32((uint32_t)(ECX));
  /* 107f527a call 0x107e7e40 */
  push32(0x107f527fu); f_107e7e40();
  /* 107f527f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5282 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5285 push eax */
  push32((uint32_t)(EAX));
  /* 107f5286 call 0x107e5010 */
  push32(0x107f528bu); f_107e5010();
  /* 107f528b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f528e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107f5291 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5295 je 0x107f52e9 */
  if (C.zf) goto L_107f52e9;
  /* 107f5297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f529a push edx */
  push32((uint32_t)(EDX));
  /* 107f529b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f529e push eax */
  push32((uint32_t)(EAX));
  /* 107f529f call 0x107e7fc0 */
  push32(0x107f52a4u); f_107e7fc0();
  /* 107f52a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f52a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f52aa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f52ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f52b0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f52b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107f52b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f52b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107f52bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f52be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f52c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f52c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f52c7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f52c9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f52cb not edx */
  EDX = (~(EDX));
  /* 107f52cd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 107f52d0 push edx */
  push32((uint32_t)(EDX));
  /* 107f52d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f52d4 push eax */
  push32((uint32_t)(EAX));
  /* 107f52d5 call dword ptr [0x108132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132a4))), 0x107f52dbu);
  /* 107f52db push 2 */
  push32((uint32_t)(0x2u));
  /* 107f52dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f52e0 push ecx */
  push32((uint32_t)(ECX));
  /* 107f52e1 call 0x107e5aa0 */
  push32(0x107f52e6u); f_107e5aa0();
  /* 107f52e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f52e9:;
  /* 107f52e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f52eb:;
  /* 107f52eb pop esi */
  ESI = (pop32());
  /* 107f52ec mov esp, ebp */
  ESP = (EBP);
  /* 107f52ee pop ebp */
  EBP = (pop32());
  /* 107f52ef ret  */
  ESPCHK(0x107f5010u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x107f52f0 (124 bytes, 47 insns) */
void f_107f52f0(void) {
  FTRACE(0x107f52f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f52f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f52f1 mov ebp, esp */
  EBP = (ESP);
  /* 107f52f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107f52f4 mov eax, dword ptr [0x10810624] */
  EAX = (r32((uint32_t)(0x10810624)));
  /* 107f52f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f52fc jmp 0x107f5307 */
  goto L_107f5307;
L_107f52fe:;
  /* 107f52fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f5301 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5304 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107f5307:;
  /* 107f5307 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f530a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f530d je 0x107f535a */
  if (C.zf) goto L_107f535a;
  /* 107f530f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f5312 push eax */
  push32((uint32_t)(EAX));
  /* 107f5313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f5316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f5318 push edx */
  push32((uint32_t)(EDX));
  /* 107f5319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f531c push eax */
  push32((uint32_t)(EAX));
  /* 107f531d call 0x107f4ac0 */
  push32(0x107f5322u); f_107f4ac0();
  /* 107f5322 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f5327 jne 0x107f5358 */
  if (!C.zf) goto L_107f5358;
  /* 107f5329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f532c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f532e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f5331 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 107f5335 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5338 je 0x107f534a */
  if (C.zf) goto L_107f534a;
  /* 107f533a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f533d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f533f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f5342 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 107f5346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f5348 jne 0x107f5358 */
  if (!C.zf) goto L_107f5358;
L_107f534a:;
  /* 107f534a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f534d sub eax, dword ptr [0x10810624] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10810624))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5353 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 107f5356 jmp 0x107f5368 */
  goto L_107f5368;
L_107f5358:;
  /* 107f5358 jmp 0x107f52fe */
  goto L_107f52fe;
L_107f535a:;
  /* 107f535a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f535d sub eax, dword ptr [0x10810624] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10810624))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5363 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 107f5366 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_107f5368:;
  /* 107f5368 mov esp, ebp */
  ESP = (EBP);
  /* 107f536a pop ebp */
  EBP = (pop32());
  /* 107f536b ret  */
  ESPCHK(0x107f52f0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x107f5370 (238 bytes, 80 insns) */
void f_107f5370(void) {
  FTRACE(0x107f5370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f5370 push ebp */
  push32((uint32_t)(EBP));
  /* 107f5371 mov ebp, esp */
  EBP = (ESP);
  /* 107f5373 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5376 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f537d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5380 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f5383 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5387 jne 0x107f5390 */
  if (!C.zf) goto L_107f5390;
  /* 107f5389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f538b jmp 0x107f545a */
  goto L_107f545a;
L_107f5390:;
  /* 107f5390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5393 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f5395 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5398 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f539b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f539e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f53a0 je 0x107f53ad */
  if (C.zf) goto L_107f53ad;
  /* 107f53a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f53a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f53a8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107f53ab jmp 0x107f5390 */
  goto L_107f5390;
L_107f53ad:;
  /* 107f53ad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 107f53b2 push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f53b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f53b9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f53bc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 107f53c3 push eax */
  push32((uint32_t)(EAX));
  /* 107f53c4 call 0x107e5010 */
  push32(0x107f53c9u); f_107e5010();
  /* 107f53c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f53cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f53cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f53d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f53d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f53d9 jne 0x107f53e5 */
  if (!C.zf) goto L_107f53e5;
  /* 107f53db push 9 */
  push32((uint32_t)(0x9u));
  /* 107f53dd call 0x107e3f80 */
  push32(0x107f53e2u); f_107e3f80();
  /* 107f53e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f53e5:;
  /* 107f53e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f53e8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107f53eb:;
  /* 107f53eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f53ee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f53f1 je 0x107f544e */
  if (C.zf) goto L_107f544e;
  /* 107f53f3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 107f53f8 push 0x1080cc38 */
  push32((uint32_t)(0x1080cc38u));
  /* 107f53fd push 2 */
  push32((uint32_t)(0x2u));
  /* 107f53ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5402 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f5404 push edx */
  push32((uint32_t)(EDX));
  /* 107f5405 call 0x107e7e40 */
  push32(0x107f540au); f_107e7e40();
  /* 107f540a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f540d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5410 push eax */
  push32((uint32_t)(EAX));
  /* 107f5411 call 0x107e5010 */
  push32(0x107f5416u); f_107e5010();
  /* 107f5416 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f541c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f541e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5421 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5424 je 0x107f543a */
  if (C.zf) goto L_107f543a;
  /* 107f5426 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f5429 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f542b push ecx */
  push32((uint32_t)(ECX));
  /* 107f542c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f542f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f5431 push eax */
  push32((uint32_t)(EAX));
  /* 107f5432 call 0x107e7fc0 */
  push32(0x107f5437u); f_107e7fc0();
  /* 107f5437 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f543a:;
  /* 107f543a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f543d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5440 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107f5443 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5446 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5449 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f544c jmp 0x107f53eb */
  goto L_107f53eb;
L_107f544e:;
  /* 107f544e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f5451 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107f5457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107f545a:;
  /* 107f545a mov esp, ebp */
  ESP = (EBP);
  /* 107f545c pop ebp */
  EBP = (pop32());
  /* 107f545d ret  */
  ESPCHK(0x107f5370u, _esp0);
  ESP += 4; return;
}

/* FUN_10015460 @ 0x107f5460 (237 bytes, 81 insns) */
void f_107f5460(void) {
  FTRACE(0x107f5460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f5460 push ebp */
  push32((uint32_t)(EBP));
  /* 107f5461 mov ebp, esp */
  EBP = (ESP);
  /* 107f5463 push ecx */
  push32((uint32_t)(ECX));
  /* 107f5464 cmp dword ptr [0x10811d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f546b jne 0x107f5482 */
  if (!C.zf) goto L_107f5482;
  /* 107f546d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f5470 push eax */
  push32((uint32_t)(EAX));
  /* 107f5471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5474 push ecx */
  push32((uint32_t)(ECX));
  /* 107f5475 call 0x107f5560 */
  push32(0x107f547au); f_107f5560();
  /* 107f547a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f547d jmp 0x107f5549 */
  goto L_107f5549;
L_107f5482:;
  /* 107f5482 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107f5484 call 0x107e8a10 */
  push32(0x107f5489u); f_107e8a10();
  /* 107f5489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f548c jmp 0x107f5497 */
  goto L_107f5497;
L_107f548e:;
  /* 107f548e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5491 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5494 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107f5497:;
  /* 107f5497 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f549a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 107f549e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 107f54a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f54a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f54ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f54ad je 0x107f552b */
  if (C.zf) goto L_107f552b;
  /* 107f54af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f54b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f54b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f54b9 mov cl, byte ptr [eax + 0x10811e81] */
  CL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107f54bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107f54c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f54c4 je 0x107f5516 */
  if (C.zf) goto L_107f5516;
  /* 107f54c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f54c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f54cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107f54cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f54d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f54d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f54d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f54d8 jne 0x107f54e8 */
  if (!C.zf) goto L_107f54e8;
  /* 107f54da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107f54dc call 0x107e8ab0 */
  push32(0x107f54e1u); f_107e8ab0();
  /* 107f54e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f54e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f54e6 jmp 0x107f5549 */
  goto L_107f5549;
L_107f54e8:;
  /* 107f54e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f54eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f54f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107f54f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f54f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f54f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f54fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107f54fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5500 jne 0x107f5514 */
  if (!C.zf) goto L_107f5514;
  /* 107f5502 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107f5504 call 0x107e8ab0 */
  push32(0x107f5509u); f_107e8ab0();
  /* 107f5509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f550c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f550f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f5512 jmp 0x107f5549 */
  goto L_107f5549;
L_107f5514:;
  /* 107f5514 jmp 0x107f5526 */
  goto L_107f5526;
L_107f5516:;
  /* 107f5516 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f5519 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f551f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5522 jne 0x107f5526 */
  if (!C.zf) goto L_107f5526;
  /* 107f5524 jmp 0x107f552b */
  goto L_107f552b;
L_107f5526:;
  /* 107f5526 jmp 0x107f548e */
  goto L_107f548e;
L_107f552b:;
  /* 107f552b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107f552d call 0x107e8ab0 */
  push32(0x107f5532u); f_107e8ab0();
  /* 107f5532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f5535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f5538 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f553d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f5540 jne 0x107f5547 */
  if (!C.zf) goto L_107f5547;
  /* 107f5542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f5545 jmp 0x107f5549 */
  goto L_107f5549;
L_107f5547:;
  /* 107f5547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f5549:;
  /* 107f5549 mov esp, ebp */
  ESP = (EBP);
  /* 107f554b pop ebp */
  EBP = (pop32());
  /* 107f554c ret  */
  ESPCHK(0x107f5460u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x107f5560 (193 bytes, 87 insns) */
void f_107f5560(void) {
  FTRACE(0x107f5560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f5560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f5562 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 107f5566 push ebx */
  push32((uint32_t)(EBX));
  /* 107f5567 mov ebx, eax */
  EBX = (EAX);
  /* 107f5569 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107f556c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 107f5570 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107f5576 je 0x107f558b */
  if (C.zf) goto L_107f558b;
L_107f5578:;
  /* 107f5578 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 107f557a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107f557b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f557d je 0x107f5550 */
  if (C.zf) { jmp_ind(0x107f5550u); return; }
  /* 107f557f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 107f5581 je 0x107f55d4 */
  if (C.zf) goto L_107f55d4;
  /* 107f5583 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107f5589 jne 0x107f5578 */
  if (!C.zf) goto L_107f5578;
L_107f558b:;
  /* 107f558b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 107f558d push edi */
  push32((uint32_t)(EDI));
  /* 107f558e mov eax, ebx */
  EAX = (EBX);
  /* 107f5590 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 107f5593 push esi */
  push32((uint32_t)(ESI));
  /* 107f5594 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_107f5596:;
  /* 107f5596 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 107f5598 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 107f559d mov eax, ecx */
  EAX = (ECX);
  /* 107f559f mov esi, edi */
  ESI = (EDI);
  /* 107f55a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 107f55a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107f55a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107f55a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107f55aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f55ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 107f55af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 107f55b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f55b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 107f55ba jne 0x107f55d8 */
  if (!C.zf) goto L_107f55d8;
  /* 107f55bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 107f55c1 je 0x107f5596 */
  if (C.zf) goto L_107f5596;
  /* 107f55c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 107f55c8 jne 0x107f55d2 */
  if (!C.zf) goto L_107f55d2;
  /* 107f55ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 107f55d0 jne 0x107f5596 */
  if (!C.zf) goto L_107f5596;
L_107f55d2:;
  /* 107f55d2 pop esi */
  ESI = (pop32());
  /* 107f55d3 pop edi */
  EDI = (pop32());
L_107f55d4:;
  /* 107f55d4 pop ebx */
  EBX = (pop32());
  /* 107f55d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f55d7 ret  */
  ESPCHK(0x107f5560u, _esp0);
  ESP += 4; return;
L_107f55d8:;
  /* 107f55d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 107f55db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f55dd je 0x107f5615 */
  if (C.zf) goto L_107f5615;
  /* 107f55df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107f55e1 je 0x107f55d2 */
  if (C.zf) goto L_107f55d2;
  /* 107f55e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f55e5 je 0x107f560e */
  if (C.zf) goto L_107f560e;
  /* 107f55e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107f55e9 je 0x107f55d2 */
  if (C.zf) goto L_107f55d2;
  /* 107f55eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107f55ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f55f0 je 0x107f5607 */
  if (C.zf) goto L_107f5607;
  /* 107f55f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107f55f4 je 0x107f55d2 */
  if (C.zf) goto L_107f55d2;
  /* 107f55f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f55f8 je 0x107f5600 */
  if (C.zf) goto L_107f5600;
  /* 107f55fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107f55fc je 0x107f55d2 */
  if (C.zf) goto L_107f55d2;
  /* 107f55fe jmp 0x107f5596 */
  goto L_107f5596;
L_107f5600:;
  /* 107f5600 pop esi */
  ESI = (pop32());
  /* 107f5601 pop edi */
  EDI = (pop32());
  /* 107f5602 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 107f5605 pop ebx */
  EBX = (pop32());
  /* 107f5606 ret  */
  ESPCHK(0x107f5560u, _esp0);
  ESP += 4; return;
L_107f5607:;
  /* 107f5607 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 107f560a pop esi */
  ESI = (pop32());
  /* 107f560b pop edi */
  EDI = (pop32());
  /* 107f560c pop ebx */
  EBX = (pop32());
  /* 107f560d ret  */
  ESPCHK(0x107f5560u, _esp0);
  ESP += 4; return;
L_107f560e:;
  /* 107f560e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 107f5611 pop esi */
  ESI = (pop32());
  /* 107f5612 pop edi */
  EDI = (pop32());
  /* 107f5613 pop ebx */
  EBX = (pop32());
  /* 107f5614 ret  */
  ESPCHK(0x107f5560u, _esp0);
  ESP += 4; return;
L_107f5615:;
  /* 107f5615 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 107f5618 pop esi */
  ESI = (pop32());
  /* 107f5619 pop edi */
  EDI = (pop32());
  /* 107f561a pop ebx */
  EBX = (pop32());
  /* 107f561b ret  */
  ESPCHK(0x107f5560u, _esp0);
  ESP += 4; return;
  /* 107f561c jmp dword ptr [0x10813330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10813330)))); return;
}

/* RtlUnwind @ 0x107f576c (6 bytes, 1 insns) */
void f_107f576c(void) {
  FTRACE(0x107f576cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f576c jmp dword ptr [0x108132dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x108132dc)))); return;
}

