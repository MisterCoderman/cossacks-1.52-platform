#include "recomp.h"

/* FUN_10011c40 @ 0x103b1c40 (289 bytes, 97 insns) */
void f_103b1c40(void) {
  FTRACE(0x103b1c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1c40 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1c41 mov ebp, esp */
  EBP = (ESP);
  /* 103b1c43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1c46 push esi */
  push32((uint32_t)(ESI));
  /* 103b1c47 mov eax, dword ptr [0x103cfc98] */
  EAX = (r32((uint32_t)(0x103cfc98)));
  /* 103b1c4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b1c4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b1c56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b1c5d jmp 0x103b1c68 */
  goto L_103b1c68;
L_103b1c5f:;
  /* 103b1c5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1c62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1c65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103b1c68:;
  /* 103b1c68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1c6c jae 0x103b1ca1 */
  if (!C.cf) goto L_103b1ca1;
  /* 103b1c6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1c71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1c74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103b1c77 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1c78 call 0x103a7d20 */
  push32(0x103b1c7du); f_103a7d20();
  /* 103b1c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1c80 mov esi, eax */
  ESI = (EAX);
  /* 103b1c82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1c85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1c88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 103b1c8c push ecx */
  push32((uint32_t)(ECX));
  /* 103b1c8d call 0x103a7d20 */
  push32(0x103b1c92u); f_103a7d20();
  /* 103b1c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1c95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1c98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103b1c9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b1c9f jmp 0x103b1c5f */
  goto L_103b1c5f;
L_103b1ca1:;
  /* 103b1ca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1ca4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ca7 push eax */
  push32((uint32_t)(EAX));
  /* 103b1ca8 call 0x103a4ed0 */
  push32(0x103b1cadu); f_103a4ed0();
  /* 103b1cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1cb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b1cb3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1cb7 je 0x103b1d59 */
  if (C.zf) goto L_103b1d59;
  /* 103b1cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1cc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b1cc3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b1cca jmp 0x103b1cd5 */
  goto L_103b1cd5;
L_103b1ccc:;
  /* 103b1ccc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1ccf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1cd2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103b1cd5:;
  /* 103b1cd5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1cd9 jae 0x103b1d4a */
  if (!C.cf) goto L_103b1d4a;
  /* 103b1cdb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1cde mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 103b1ce1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1ce4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ce7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b1cea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1ced mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1cf0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103b1cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1cf4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1cf7 push edx */
  push32((uint32_t)(EDX));
  /* 103b1cf8 call 0x103a7ea0 */
  push32(0x103b1cfdu); f_103a7ea0();
  /* 103b1cfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d00 push eax */
  push32((uint32_t)(EAX));
  /* 103b1d01 call 0x103a7d20 */
  push32(0x103b1d06u); f_103a7d20();
  /* 103b1d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d09 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d0c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d0e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b1d11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d14 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 103b1d17 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b1d20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1d23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1d26 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 103b1d2a push eax */
  push32((uint32_t)(EAX));
  /* 103b1d2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d2e push ecx */
  push32((uint32_t)(ECX));
  /* 103b1d2f call 0x103a7ea0 */
  push32(0x103b1d34u); f_103a7ea0();
  /* 103b1d34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d37 push eax */
  push32((uint32_t)(EAX));
  /* 103b1d38 call 0x103a7d20 */
  push32(0x103b1d3du); f_103a7d20();
  /* 103b1d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d45 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b1d48 jmp 0x103b1ccc */
  goto L_103b1ccc;
L_103b1d4a:;
  /* 103b1d4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d4d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103b1d50 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1d53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d56 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103b1d59:;
  /* 103b1d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1d5c pop esi */
  ESI = (pop32());
  /* 103b1d5d mov esp, ebp */
  ESP = (EBP);
  /* 103b1d5f pop ebp */
  EBP = (pop32());
  /* 103b1d60 ret  */
  ESPCHK(0x103b1c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d70 @ 0x103b1d70 (291 bytes, 97 insns) */
void f_103b1d70(void) {
  FTRACE(0x103b1d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1d70 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1d71 mov ebp, esp */
  EBP = (ESP);
  /* 103b1d73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1d76 push esi */
  push32((uint32_t)(ESI));
  /* 103b1d77 mov eax, dword ptr [0x103cfc98] */
  EAX = (r32((uint32_t)(0x103cfc98)));
  /* 103b1d7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b1d7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b1d86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b1d8d jmp 0x103b1d98 */
  goto L_103b1d98;
L_103b1d8f:;
  /* 103b1d8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1d92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1d95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103b1d98:;
  /* 103b1d98 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1d9c jae 0x103b1dd2 */
  if (!C.cf) goto L_103b1dd2;
  /* 103b1d9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1da1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1da4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 103b1da8 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1da9 call 0x103a7d20 */
  push32(0x103b1daeu); f_103a7d20();
  /* 103b1dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1db1 mov esi, eax */
  ESI = (EAX);
  /* 103b1db3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1db6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1db9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 103b1dbd push ecx */
  push32((uint32_t)(ECX));
  /* 103b1dbe call 0x103a7d20 */
  push32(0x103b1dc3u); f_103a7d20();
  /* 103b1dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1dc6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1dc9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103b1dcd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b1dd0 jmp 0x103b1d8f */
  goto L_103b1d8f;
L_103b1dd2:;
  /* 103b1dd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1dd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1dd8 push eax */
  push32((uint32_t)(EAX));
  /* 103b1dd9 call 0x103a4ed0 */
  push32(0x103b1ddeu); f_103a4ed0();
  /* 103b1dde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1de1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b1de4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1de8 je 0x103b1e8b */
  if (C.zf) goto L_103b1e8b;
  /* 103b1dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1df1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b1df4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b1dfb jmp 0x103b1e06 */
  goto L_103b1e06;
L_103b1dfd:;
  /* 103b1dfd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1e00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103b1e06:;
  /* 103b1e06 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1e0a jae 0x103b1e7c */
  if (!C.cf) goto L_103b1e7c;
  /* 103b1e0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e0f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 103b1e12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b1e1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1e1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1e21 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 103b1e25 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1e26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e29 push edx */
  push32((uint32_t)(EDX));
  /* 103b1e2a call 0x103a7ea0 */
  push32(0x103b1e2fu); f_103a7ea0();
  /* 103b1e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e32 push eax */
  push32((uint32_t)(EAX));
  /* 103b1e33 call 0x103a7d20 */
  push32(0x103b1e38u); f_103a7d20();
  /* 103b1e38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b1e43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e46 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 103b1e49 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b1e52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1e55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1e58 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103b1e5c push eax */
  push32((uint32_t)(EAX));
  /* 103b1e5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e60 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1e61 call 0x103a7ea0 */
  push32(0x103b1e66u); f_103a7ea0();
  /* 103b1e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e69 push eax */
  push32((uint32_t)(EAX));
  /* 103b1e6a call 0x103a7d20 */
  push32(0x103b1e6fu); f_103a7d20();
  /* 103b1e6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e72 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e75 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e77 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b1e7a jmp 0x103b1dfd */
  goto L_103b1dfd;
L_103b1e7c:;
  /* 103b1e7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e7f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103b1e82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b1e85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1e88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103b1e8b:;
  /* 103b1e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1e8e pop esi */
  ESI = (pop32());
  /* 103b1e8f mov esp, ebp */
  ESP = (EBP);
  /* 103b1e91 pop ebp */
  EBP = (pop32());
  /* 103b1e92 ret  */
  ESPCHK(0x103b1d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ea0 @ 0x103b1ea0 (878 bytes, 273 insns) */
void f_103b1ea0(void) {
  FTRACE(0x103b1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b1ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b1ea1 mov ebp, esp */
  EBP = (ESP);
  /* 103b1ea3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b1ea6 push esi */
  push32((uint32_t)(ESI));
  /* 103b1ea7 mov eax, dword ptr [0x103cfc98] */
  EAX = (r32((uint32_t)(0x103cfc98)));
  /* 103b1eac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b1eaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b1eb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b1ebd jmp 0x103b1ec8 */
  goto L_103b1ec8;
L_103b1ebf:;
  /* 103b1ebf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1ec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ec5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103b1ec8:;
  /* 103b1ec8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1ecc jae 0x103b1f01 */
  if (!C.cf) goto L_103b1f01;
  /* 103b1ece mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1ed1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1ed4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 103b1ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1ed8 call 0x103a7d20 */
  push32(0x103b1eddu); f_103a7d20();
  /* 103b1edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ee0 mov esi, eax */
  ESI = (EAX);
  /* 103b1ee2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1ee5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1ee8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 103b1eec push ecx */
  push32((uint32_t)(ECX));
  /* 103b1eed call 0x103a7d20 */
  push32(0x103b1ef2u); f_103a7d20();
  /* 103b1ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ef5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ef8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103b1efc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b1eff jmp 0x103b1ebf */
  goto L_103b1ebf;
L_103b1f01:;
  /* 103b1f01 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b1f08 jmp 0x103b1f13 */
  goto L_103b1f13;
L_103b1f0a:;
  /* 103b1f0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1f0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103b1f13:;
  /* 103b1f13 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1f17 jae 0x103b1f4d */
  if (!C.cf) goto L_103b1f4d;
  /* 103b1f19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1f1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1f1f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103b1f23 push eax */
  push32((uint32_t)(EAX));
  /* 103b1f24 call 0x103a7d20 */
  push32(0x103b1f29u); f_103a7d20();
  /* 103b1f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f2c mov esi, eax */
  ESI = (EAX);
  /* 103b1f2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b1f31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1f34 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103b1f38 push eax */
  push32((uint32_t)(EAX));
  /* 103b1f39 call 0x103a7d20 */
  push32(0x103b1f3eu); f_103a7d20();
  /* 103b1f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f41 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f44 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103b1f48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b1f4b jmp 0x103b1f0a */
  goto L_103b1f0a;
L_103b1f4d:;
  /* 103b1f4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1f50 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 103b1f56 push eax */
  push32((uint32_t)(EAX));
  /* 103b1f57 call 0x103a7d20 */
  push32(0x103b1f5cu); f_103a7d20();
  /* 103b1f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f5f mov esi, eax */
  ESI = (EAX);
  /* 103b1f61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1f64 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 103b1f6a push edx */
  push32((uint32_t)(EDX));
  /* 103b1f6b call 0x103a7d20 */
  push32(0x103b1f70u); f_103a7d20();
  /* 103b1f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f73 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f76 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 103b1f7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b1f7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1f80 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 103b1f86 push edx */
  push32((uint32_t)(EDX));
  /* 103b1f87 call 0x103a7d20 */
  push32(0x103b1f8cu); f_103a7d20();
  /* 103b1f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1f8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1f92 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103b1f96 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b1f99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1f9c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 103b1fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b1fa3 call 0x103a7d20 */
  push32(0x103b1fa8u); f_103a7d20();
  /* 103b1fa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1fab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1fae lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103b1fb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b1fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b1fb8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 103b1fbe push edx */
  push32((uint32_t)(EDX));
  /* 103b1fbf call 0x103a7d20 */
  push32(0x103b1fc4u); f_103a7d20();
  /* 103b1fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1fc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1fca lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103b1fce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b1fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b1fd4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1fd9 push eax */
  push32((uint32_t)(EAX));
  /* 103b1fda call 0x103a4ed0 */
  push32(0x103b1fdfu); f_103a4ed0();
  /* 103b1fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1fe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b1fe5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b1fe9 je 0x103b2206 */
  if (C.zf) goto L_103b2206;
  /* 103b1fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1ff2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103b1ff5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b1ff8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b1ffe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b2001 push 0xac */
  push32((uint32_t)(0xacu));
  /* 103b2006 mov eax, dword ptr [0x103cfc98] */
  EAX = (r32((uint32_t)(0x103cfc98)));
  /* 103b200b push eax */
  push32((uint32_t)(EAX));
  /* 103b200c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b200f push ecx */
  push32((uint32_t)(ECX));
  /* 103b2010 call 0x103ab7d0 */
  push32(0x103b2015u); f_103ab7d0();
  /* 103b2015 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2018 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b201f jmp 0x103b202a */
  goto L_103b202a;
L_103b2021:;
  /* 103b2021 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2024 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2027 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103b202a:;
  /* 103b202a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b202e jae 0x103b209e */
  if (!C.cf) goto L_103b209e;
  /* 103b2030 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2033 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b2036 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2039 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 103b203c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b203f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2042 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103b2045 push edx */
  push32((uint32_t)(EDX));
  /* 103b2046 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2049 push eax */
  push32((uint32_t)(EAX));
  /* 103b204a call 0x103a7ea0 */
  push32(0x103b204fu); f_103a7ea0();
  /* 103b204f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2052 push eax */
  push32((uint32_t)(EAX));
  /* 103b2053 call 0x103a7d20 */
  push32(0x103b2058u); f_103a7d20();
  /* 103b2058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b205b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b205e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103b2062 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b2065 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2068 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b206b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b206e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 103b2072 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2075 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2078 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 103b207c push edx */
  push32((uint32_t)(EDX));
  /* 103b207d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2080 push eax */
  push32((uint32_t)(EAX));
  /* 103b2081 call 0x103a7ea0 */
  push32(0x103b2086u); f_103a7ea0();
  /* 103b2086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2089 push eax */
  push32((uint32_t)(EAX));
  /* 103b208a call 0x103a7d20 */
  push32(0x103b208fu); f_103a7d20();
  /* 103b208f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2092 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2095 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103b2099 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b209c jmp 0x103b2021 */
  goto L_103b2021;
L_103b209e:;
  /* 103b209e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b20a5 jmp 0x103b20b0 */
  goto L_103b20b0;
L_103b20a7:;
  /* 103b20a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b20aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b20ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103b20b0:;
  /* 103b20b0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b20b4 jae 0x103b2126 */
  if (!C.cf) goto L_103b2126;
  /* 103b20b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b20b9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b20bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b20bf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 103b20c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b20c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b20c9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103b20cd push eax */
  push32((uint32_t)(EAX));
  /* 103b20ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b20d1 push ecx */
  push32((uint32_t)(ECX));
  /* 103b20d2 call 0x103a7ea0 */
  push32(0x103b20d7u); f_103a7ea0();
  /* 103b20d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b20da push eax */
  push32((uint32_t)(EAX));
  /* 103b20db call 0x103a7d20 */
  push32(0x103b20e0u); f_103a7d20();
  /* 103b20e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b20e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b20e6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103b20ea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b20ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b20f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b20f3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b20f6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 103b20fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b20fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2100 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103b2104 push eax */
  push32((uint32_t)(EAX));
  /* 103b2105 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2108 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2109 call 0x103a7ea0 */
  push32(0x103b210eu); f_103a7ea0();
  /* 103b210e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2111 push eax */
  push32((uint32_t)(EAX));
  /* 103b2112 call 0x103a7d20 */
  push32(0x103b2117u); f_103a7d20();
  /* 103b2117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b211a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b211d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103b2121 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b2124 jmp 0x103b20a7 */
  goto L_103b20a7;
L_103b2126:;
  /* 103b2126 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b2129 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b212c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 103b2132 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2135 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 103b213b push ecx */
  push32((uint32_t)(ECX));
  /* 103b213c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b213f push edx */
  push32((uint32_t)(EDX));
  /* 103b2140 call 0x103a7ea0 */
  push32(0x103b2145u); f_103a7ea0();
  /* 103b2145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2148 push eax */
  push32((uint32_t)(EAX));
  /* 103b2149 call 0x103a7d20 */
  push32(0x103b214eu); f_103a7d20();
  /* 103b214e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2151 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2154 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103b2158 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b215b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b215e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2161 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 103b2167 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b216a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 103b2170 push eax */
  push32((uint32_t)(EAX));
  /* 103b2171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2174 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2175 call 0x103a7ea0 */
  push32(0x103b217au); f_103a7ea0();
  /* 103b217a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b217d push eax */
  push32((uint32_t)(EAX));
  /* 103b217e call 0x103a7d20 */
  push32(0x103b2183u); f_103a7d20();
  /* 103b2183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2186 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2189 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103b218d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b2190 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b2193 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2196 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 103b219c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b219f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 103b21a5 push ecx */
  push32((uint32_t)(ECX));
  /* 103b21a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b21a9 push edx */
  push32((uint32_t)(EDX));
  /* 103b21aa call 0x103a7ea0 */
  push32(0x103b21afu); f_103a7ea0();
  /* 103b21af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b21b2 push eax */
  push32((uint32_t)(EAX));
  /* 103b21b3 call 0x103a7d20 */
  push32(0x103b21b8u); f_103a7d20();
  /* 103b21b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b21bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b21be lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103b21c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b21c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b21c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b21cb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 103b21d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b21d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 103b21da push eax */
  push32((uint32_t)(EAX));
  /* 103b21db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b21de push ecx */
  push32((uint32_t)(ECX));
  /* 103b21df call 0x103a7ea0 */
  push32(0x103b21e4u); f_103a7ea0();
  /* 103b21e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b21e7 push eax */
  push32((uint32_t)(EAX));
  /* 103b21e8 call 0x103a7d20 */
  push32(0x103b21edu); f_103a7d20();
  /* 103b21ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b21f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b21f3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 103b21f7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b21fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b21fd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2200 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_103b2206:;
  /* 103b2206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2209 pop esi */
  ESI = (pop32());
  /* 103b220a mov esp, ebp */
  ESP = (EBP);
  /* 103b220c pop ebp */
  EBP = (pop32());
  /* 103b220d ret  */
  ESPCHK(0x103b1ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x103b2210 (31 bytes, 15 insns) */
void f_103b2210(void) {
  FTRACE(0x103b2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b2210 push ebp */
  push32((uint32_t)(EBP));
  /* 103b2211 mov ebp, esp */
  EBP = (ESP);
  /* 103b2213 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b2215 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2218 push eax */
  push32((uint32_t)(EAX));
  /* 103b2219 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b221c push ecx */
  push32((uint32_t)(ECX));
  /* 103b221d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2220 push edx */
  push32((uint32_t)(EDX));
  /* 103b2221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2224 push eax */
  push32((uint32_t)(EAX));
  /* 103b2225 call 0x103b2230 */
  push32(0x103b222au); f_103b2230();
  /* 103b222a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b222d pop ebp */
  EBP = (pop32());
  /* 103b222e ret  */
  ESPCHK(0x103b2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x103b2230 (393 bytes, 123 insns) */
void f_103b2230(void) {
  FTRACE(0x103b2230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b2230 push ebp */
  push32((uint32_t)(EBP));
  /* 103b2231 mov ebp, esp */
  EBP = (ESP);
  /* 103b2233 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2236 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b223a jne 0x103b2246 */
  if (!C.zf) goto L_103b2246;
  /* 103b223c mov eax, dword ptr [0x103cfc98] */
  EAX = (r32((uint32_t)(0x103cfc98)));
  /* 103b2241 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103b2244 jmp 0x103b224c */
  goto L_103b224c;
L_103b2246:;
  /* 103b2246 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2249 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103b224c:;
  /* 103b224c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b224f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b2252 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2255 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b2258 push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103b225d call dword ptr [0x103d334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d334c))), 0x103b2263u);
  /* 103b2263 cmp dword ptr [0x103d096c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d096c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b226a je 0x103b228a */
  if (C.zf) goto L_103b228a;
  /* 103b226c push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103b2271 call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103b2277u);
  /* 103b2277 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b2279 call 0x103a88f0 */
  push32(0x103b227eu); f_103a88f0();
  /* 103b227e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2281 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103b2288 jmp 0x103b2291 */
  goto L_103b2291;
L_103b228a:;
  /* 103b228a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103b2291:;
  /* 103b2291 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2295 jbe 0x103b2382 */
  if ((C.cf||C.zf)) goto L_103b2382;
  /* 103b229b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b229e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b22a0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 103b22a3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b22a7 je 0x103b22b1 */
  if (C.zf) goto L_103b22b1;
  /* 103b22a9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b22ad je 0x103b22b6 */
  if (C.zf) goto L_103b22b6;
  /* 103b22af jmp 0x103b2310 */
  goto L_103b2310;
L_103b22b1:;
  /* 103b22b1 jmp 0x103b2382 */
  goto L_103b2382;
L_103b22b6:;
  /* 103b22b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b22b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b22bc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 103b22bf mov dword ptr [0x103d0958], 0 */
  w32((uint32_t)(0x103d0958), (0x0u));
  /* 103b22c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b22cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b22cf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b22d2 jne 0x103b22e7 */
  if (!C.zf) goto L_103b22e7;
  /* 103b22d4 mov dword ptr [0x103d0958], 1 */
  w32((uint32_t)(0x103d0958), (0x1u));
  /* 103b22de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b22e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b22e4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103b22e7:;
  /* 103b22e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b22ea push ecx */
  push32((uint32_t)(ECX));
  /* 103b22eb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 103b22ee push edx */
  push32((uint32_t)(EDX));
  /* 103b22ef lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103b22f2 push eax */
  push32((uint32_t)(EAX));
  /* 103b22f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b22f6 push ecx */
  push32((uint32_t)(ECX));
  /* 103b22f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b22fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b22fc push eax */
  push32((uint32_t)(EAX));
  /* 103b22fd call 0x103b23c0 */
  push32(0x103b2302u); f_103b23c0();
  /* 103b2302 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2305 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2308 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b230b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103b230e jmp 0x103b237d */
  goto L_103b237d;
L_103b2310:;
  /* 103b2310 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b2315 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2317 mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b231d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b231f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b2323 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103b2329 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b232b je 0x103b2358 */
  if (C.zf) goto L_103b2358;
  /* 103b232d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2331 jbe 0x103b2358 */
  if ((C.cf||C.zf)) goto L_103b2358;
  /* 103b2333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2336 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2339 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b233b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103b233d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2340 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2343 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b2346 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2349 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b234c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103b234f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2352 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2355 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103b2358:;
  /* 103b2358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b235b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b235e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b2360 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103b2362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2365 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2368 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b236b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b236e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2371 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103b2374 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2377 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b237a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103b237d:;
  /* 103b237d jmp 0x103b2291 */
  goto L_103b2291;
L_103b2382:;
  /* 103b2382 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2386 je 0x103b2394 */
  if (C.zf) goto L_103b2394;
  /* 103b2388 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b238a call 0x103a8990 */
  push32(0x103b238fu); f_103a8990();
  /* 103b238f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2392 jmp 0x103b239f */
  goto L_103b239f;
L_103b2394:;
  /* 103b2394 push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103b2399 call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103b239fu);
L_103b239f:;
  /* 103b239f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b23a3 jbe 0x103b23b3 */
  if ((C.cf||C.zf)) goto L_103b23b3;
  /* 103b23a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b23a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103b23ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b23ae sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b23b1 jmp 0x103b23b5 */
  goto L_103b23b5;
L_103b23b3:;
  /* 103b23b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b23b5:;
  /* 103b23b5 mov esp, ebp */
  ESP = (EBP);
  /* 103b23b7 pop ebp */
  EBP = (pop32());
  /* 103b23b8 ret  */
  ESPCHK(0x103b2230u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x103b23c0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_103b23c0(void) {
  FTRACE(0x103b23c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b23c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b23c1 mov ebp, esp */
  EBP = (ESP);
  /* 103b23c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b23c6 push esi */
  push32((uint32_t)(ESI));
  /* 103b23c7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 103b23cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b23ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b23d1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b23d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b23d7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b23db ja 0x103b2928 */
  if ((!C.cf&&!C.zf)) goto L_103b2928;
  /* 103b23e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b23e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b23e6 mov dl, byte ptr [eax + 0x103b2989] */
  DL = (r8((uint32_t)(EAX + 0x103b2989)));
  /* 103b23ec jmp dword ptr [edx*4 + 0x103b292d] */
  switch (EDX) {
    case 0: goto L_103b2906;
    case 1: goto L_103b2415;
    case 2: goto L_103b245b;
    case 3: goto L_103b25a8;
    case 4: goto L_103b25d0;
    case 5: goto L_103b266f;
    case 6: goto L_103b26db;
    case 7: goto L_103b2704;
    case 8: goto L_103b2745;
    case 9: goto L_103b2827;
    case 10: goto L_103b288e;
    case 11: goto L_103b28db;
    case 12: goto L_103b23f3;
    case 13: goto L_103b2438;
    case 14: goto L_103b247e;
    case 15: goto L_103b257e;
    case 16: goto L_103b2615;
    case 17: goto L_103b2642;
    case 18: goto L_103b2697;
    case 19: goto L_103b271b;
    case 20: goto L_103b27c9;
    case 21: goto L_103b2858;
    case 22: goto L_103b2928;
    default: x86_unimpl("switch@0x103b23ec out of table"); return;
  }
L_103b23f3:;
  /* 103b23f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b23f6 push ecx */
  push32((uint32_t)(ECX));
  /* 103b23f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b23fa push edx */
  push32((uint32_t)(EDX));
  /* 103b23fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b23fe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103b2401 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2404 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 103b2407 push eax */
  push32((uint32_t)(EAX));
  /* 103b2408 call 0x103b29e0 */
  push32(0x103b240du); f_103b29e0();
  /* 103b240d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2410 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2415:;
  /* 103b2415 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2418 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2419 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b241c push edx */
  push32((uint32_t)(EDX));
  /* 103b241d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2420 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103b2423 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2426 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 103b242a push eax */
  push32((uint32_t)(EAX));
  /* 103b242b call 0x103b29e0 */
  push32(0x103b2430u); f_103b29e0();
  /* 103b2430 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2433 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2438:;
  /* 103b2438 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b243b push ecx */
  push32((uint32_t)(ECX));
  /* 103b243c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b243f push edx */
  push32((uint32_t)(EDX));
  /* 103b2440 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2443 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103b2446 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2449 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 103b244d push eax */
  push32((uint32_t)(EAX));
  /* 103b244e call 0x103b29e0 */
  push32(0x103b2453u); f_103b29e0();
  /* 103b2453 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2456 jmp 0x103b2928 */
  goto L_103b2928;
L_103b245b:;
  /* 103b245b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b245e push ecx */
  push32((uint32_t)(ECX));
  /* 103b245f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2462 push edx */
  push32((uint32_t)(EDX));
  /* 103b2463 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2466 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103b2469 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b246c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 103b2470 push eax */
  push32((uint32_t)(EAX));
  /* 103b2471 call 0x103b29e0 */
  push32(0x103b2476u); f_103b29e0();
  /* 103b2476 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2479 jmp 0x103b2928 */
  goto L_103b2928;
L_103b247e:;
  /* 103b247e cmp dword ptr [0x103d0958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2485 je 0x103b2506 */
  if (C.zf) goto L_103b2506;
  /* 103b2487 mov dword ptr [0x103d0958], 0 */
  w32((uint32_t)(0x103d0958), (0x0u));
  /* 103b2491 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2494 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2495 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2498 push edx */
  push32((uint32_t)(EDX));
  /* 103b2499 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b249c push eax */
  push32((uint32_t)(EAX));
  /* 103b249d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b24a0 push ecx */
  push32((uint32_t)(ECX));
  /* 103b24a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b24a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 103b24aa push eax */
  push32((uint32_t)(EAX));
  /* 103b24ab call 0x103b2b90 */
  push32(0x103b24b0u); f_103b2b90();
  /* 103b24b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b24b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b24b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b24b9 jne 0x103b24c0 */
  if (!C.zf) goto L_103b24c0;
  /* 103b24bb jmp 0x103b2928 */
  goto L_103b2928;
L_103b24c0:;
  /* 103b24c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b24c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b24c5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 103b24c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b24cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b24cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b24d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b24d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b24d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b24d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b24da sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b24dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b24e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b24e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b24e5 push ecx */
  push32((uint32_t)(ECX));
  /* 103b24e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b24e9 push edx */
  push32((uint32_t)(EDX));
  /* 103b24ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b24ed push eax */
  push32((uint32_t)(EAX));
  /* 103b24ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b24f1 push ecx */
  push32((uint32_t)(ECX));
  /* 103b24f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b24f5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 103b24fb push eax */
  push32((uint32_t)(EAX));
  /* 103b24fc call 0x103b2b90 */
  push32(0x103b2501u); f_103b2b90();
  /* 103b2501 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2504 jmp 0x103b2579 */
  goto L_103b2579;
L_103b2506:;
  /* 103b2506 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2509 push ecx */
  push32((uint32_t)(ECX));
  /* 103b250a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b250d push edx */
  push32((uint32_t)(EDX));
  /* 103b250e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2511 push eax */
  push32((uint32_t)(EAX));
  /* 103b2512 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2515 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2516 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2519 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 103b251f push eax */
  push32((uint32_t)(EAX));
  /* 103b2520 call 0x103b2b90 */
  push32(0x103b2525u); f_103b2b90();
  /* 103b2525 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2528 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b252b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b252e jne 0x103b2535 */
  if (!C.zf) goto L_103b2535;
  /* 103b2530 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2535:;
  /* 103b2535 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2538 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b253a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 103b253d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2540 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2542 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2545 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2548 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b254a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b254d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b254f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2552 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2555 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b2557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b255a push ecx */
  push32((uint32_t)(ECX));
  /* 103b255b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b255e push edx */
  push32((uint32_t)(EDX));
  /* 103b255f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2562 push eax */
  push32((uint32_t)(EAX));
  /* 103b2563 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2566 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2567 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b256a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 103b2570 push eax */
  push32((uint32_t)(EAX));
  /* 103b2571 call 0x103b2b90 */
  push32(0x103b2576u); f_103b2b90();
  /* 103b2576 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b2579:;
  /* 103b2579 jmp 0x103b2928 */
  goto L_103b2928;
L_103b257e:;
  /* 103b257e mov ecx, dword ptr [0x103d0958] */
  ECX = (r32((uint32_t)(0x103d0958)));
  /* 103b2584 mov dword ptr [0x103d0968], ecx */
  w32((uint32_t)(0x103d0968), (ECX));
  /* 103b258a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b258d push edx */
  push32((uint32_t)(EDX));
  /* 103b258e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2591 push eax */
  push32((uint32_t)(EAX));
  /* 103b2592 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b2594 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2597 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103b259a push edx */
  push32((uint32_t)(EDX));
  /* 103b259b call 0x103b2a30 */
  push32(0x103b25a0u); f_103b2a30();
  /* 103b25a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b25a3 jmp 0x103b2928 */
  goto L_103b2928;
L_103b25a8:;
  /* 103b25a8 mov eax, dword ptr [0x103d0958] */
  EAX = (r32((uint32_t)(0x103d0958)));
  /* 103b25ad mov dword ptr [0x103d0968], eax */
  w32((uint32_t)(0x103d0968), (EAX));
  /* 103b25b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b25b5 push ecx */
  push32((uint32_t)(ECX));
  /* 103b25b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b25b9 push edx */
  push32((uint32_t)(EDX));
  /* 103b25ba push 2 */
  push32((uint32_t)(0x2u));
  /* 103b25bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b25bf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103b25c2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b25c3 call 0x103b2a30 */
  push32(0x103b25c8u); f_103b2a30();
  /* 103b25c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b25cb jmp 0x103b2928 */
  goto L_103b2928;
L_103b25d0:;
  /* 103b25d0 mov edx, dword ptr [0x103d0958] */
  EDX = (r32((uint32_t)(0x103d0958)));
  /* 103b25d6 mov dword ptr [0x103d0968], edx */
  w32((uint32_t)(0x103d0968), (EDX));
  /* 103b25dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b25df mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 103b25e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b25e3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 103b25e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b25ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b25ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b25f1 jne 0x103b25fa */
  if (!C.zf) goto L_103b25fa;
  /* 103b25f3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_103b25fa:;
  /* 103b25fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b25fd push edx */
  push32((uint32_t)(EDX));
  /* 103b25fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2601 push eax */
  push32((uint32_t)(EAX));
  /* 103b2602 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b2604 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2607 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2608 call 0x103b2a30 */
  push32(0x103b260du); f_103b2a30();
  /* 103b260d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2610 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2615:;
  /* 103b2615 mov edx, dword ptr [0x103d0958] */
  EDX = (r32((uint32_t)(0x103d0958)));
  /* 103b261b mov dword ptr [0x103d0968], edx */
  w32((uint32_t)(0x103d0968), (EDX));
  /* 103b2621 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2624 push eax */
  push32((uint32_t)(EAX));
  /* 103b2625 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2628 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2629 push 3 */
  push32((uint32_t)(0x3u));
  /* 103b262b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b262e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103b2631 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2634 push eax */
  push32((uint32_t)(EAX));
  /* 103b2635 call 0x103b2a30 */
  push32(0x103b263au); f_103b2a30();
  /* 103b263a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b263d jmp 0x103b2928 */
  goto L_103b2928;
L_103b2642:;
  /* 103b2642 mov ecx, dword ptr [0x103d0958] */
  ECX = (r32((uint32_t)(0x103d0958)));
  /* 103b2648 mov dword ptr [0x103d0968], ecx */
  w32((uint32_t)(0x103d0968), (ECX));
  /* 103b264e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2651 push edx */
  push32((uint32_t)(EDX));
  /* 103b2652 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2655 push eax */
  push32((uint32_t)(EAX));
  /* 103b2656 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b2658 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b265b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103b265e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2661 push edx */
  push32((uint32_t)(EDX));
  /* 103b2662 call 0x103b2a30 */
  push32(0x103b2667u); f_103b2a30();
  /* 103b2667 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b266a jmp 0x103b2928 */
  goto L_103b2928;
L_103b266f:;
  /* 103b266f mov eax, dword ptr [0x103d0958] */
  EAX = (r32((uint32_t)(0x103d0958)));
  /* 103b2674 mov dword ptr [0x103d0968], eax */
  w32((uint32_t)(0x103d0968), (EAX));
  /* 103b2679 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b267c push ecx */
  push32((uint32_t)(ECX));
  /* 103b267d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2680 push edx */
  push32((uint32_t)(EDX));
  /* 103b2681 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b2683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2686 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103b2689 push ecx */
  push32((uint32_t)(ECX));
  /* 103b268a call 0x103b2a30 */
  push32(0x103b268fu); f_103b2a30();
  /* 103b268f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2692 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2697:;
  /* 103b2697 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b269a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b269e jg 0x103b26bc */
  if ((!C.zf&&C.sf==C.of)) goto L_103b26bc;
  /* 103b26a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b26a3 push eax */
  push32((uint32_t)(EAX));
  /* 103b26a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b26a7 push ecx */
  push32((uint32_t)(ECX));
  /* 103b26a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b26ab mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 103b26b1 push eax */
  push32((uint32_t)(EAX));
  /* 103b26b2 call 0x103b29e0 */
  push32(0x103b26b7u); f_103b29e0();
  /* 103b26b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b26ba jmp 0x103b26d6 */
  goto L_103b26d6;
L_103b26bc:;
  /* 103b26bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b26bf push ecx */
  push32((uint32_t)(ECX));
  /* 103b26c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b26c3 push edx */
  push32((uint32_t)(EDX));
  /* 103b26c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b26c7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 103b26cd push ecx */
  push32((uint32_t)(ECX));
  /* 103b26ce call 0x103b29e0 */
  push32(0x103b26d3u); f_103b29e0();
  /* 103b26d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b26d6:;
  /* 103b26d6 jmp 0x103b2928 */
  goto L_103b2928;
L_103b26db:;
  /* 103b26db mov edx, dword ptr [0x103d0958] */
  EDX = (r32((uint32_t)(0x103d0958)));
  /* 103b26e1 mov dword ptr [0x103d0968], edx */
  w32((uint32_t)(0x103d0968), (EDX));
  /* 103b26e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b26ea push eax */
  push32((uint32_t)(EAX));
  /* 103b26eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b26ee push ecx */
  push32((uint32_t)(ECX));
  /* 103b26ef push 2 */
  push32((uint32_t)(0x2u));
  /* 103b26f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b26f4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b26f6 push eax */
  push32((uint32_t)(EAX));
  /* 103b26f7 call 0x103b2a30 */
  push32(0x103b26fcu); f_103b2a30();
  /* 103b26fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b26ff jmp 0x103b2928 */
  goto L_103b2928;
L_103b2704:;
  /* 103b2704 mov ecx, dword ptr [0x103d0958] */
  ECX = (r32((uint32_t)(0x103d0958)));
  /* 103b270a mov dword ptr [0x103d0968], ecx */
  w32((uint32_t)(0x103d0968), (ECX));
  /* 103b2710 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2713 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 103b2716 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b2719 jmp 0x103b276d */
  goto L_103b276d;
L_103b271b:;
  /* 103b271b mov ecx, dword ptr [0x103d0958] */
  ECX = (r32((uint32_t)(0x103d0958)));
  /* 103b2721 mov dword ptr [0x103d0968], ecx */
  w32((uint32_t)(0x103d0968), (ECX));
  /* 103b2727 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b272a push edx */
  push32((uint32_t)(EDX));
  /* 103b272b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b272e push eax */
  push32((uint32_t)(EAX));
  /* 103b272f push 1 */
  push32((uint32_t)(0x1u));
  /* 103b2731 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2734 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103b2737 push edx */
  push32((uint32_t)(EDX));
  /* 103b2738 call 0x103b2a30 */
  push32(0x103b273du); f_103b2a30();
  /* 103b273d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2740 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2745:;
  /* 103b2745 mov eax, dword ptr [0x103d0958] */
  EAX = (r32((uint32_t)(0x103d0958)));
  /* 103b274a mov dword ptr [0x103d0968], eax */
  w32((uint32_t)(0x103d0968), (EAX));
  /* 103b274f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2752 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2756 jne 0x103b2761 */
  if (!C.zf) goto L_103b2761;
  /* 103b2758 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 103b275f jmp 0x103b276d */
  goto L_103b276d;
L_103b2761:;
  /* 103b2761 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2764 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 103b2767 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b276a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103b276d:;
  /* 103b276d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2770 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103b2773 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2776 jge 0x103b2781 */
  if ((C.sf==C.of)) goto L_103b2781;
  /* 103b2778 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b277f jmp 0x103b27ae */
  goto L_103b27ae;
L_103b2781:;
  /* 103b2781 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2784 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103b2787 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2788 mov ecx, 7 */
  ECX = (0x7u);
  /* 103b278d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b278f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b2792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2795 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103b2798 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2799 mov ecx, 7 */
  ECX = (0x7u);
  /* 103b279e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b27a0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b27a3 jl 0x103b27ae */
  if ((C.sf!=C.of)) goto L_103b27ae;
  /* 103b27a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b27a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b27ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103b27ae:;
  /* 103b27ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b27b1 push eax */
  push32((uint32_t)(EAX));
  /* 103b27b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b27b5 push ecx */
  push32((uint32_t)(ECX));
  /* 103b27b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b27b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b27bb push edx */
  push32((uint32_t)(EDX));
  /* 103b27bc call 0x103b2a30 */
  push32(0x103b27c1u); f_103b2a30();
  /* 103b27c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b27c4 jmp 0x103b2928 */
  goto L_103b2928;
L_103b27c9:;
  /* 103b27c9 cmp dword ptr [0x103d0958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b27d0 je 0x103b2800 */
  if (C.zf) goto L_103b2800;
  /* 103b27d2 mov dword ptr [0x103d0958], 0 */
  w32((uint32_t)(0x103d0958), (0x0u));
  /* 103b27dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b27df push eax */
  push32((uint32_t)(EAX));
  /* 103b27e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b27e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b27e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b27e7 push edx */
  push32((uint32_t)(EDX));
  /* 103b27e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b27eb push eax */
  push32((uint32_t)(EAX));
  /* 103b27ec mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b27ef mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 103b27f5 push edx */
  push32((uint32_t)(EDX));
  /* 103b27f6 call 0x103b2b90 */
  push32(0x103b27fbu); f_103b2b90();
  /* 103b27fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b27fe jmp 0x103b2822 */
  goto L_103b2822;
L_103b2800:;
  /* 103b2800 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2803 push eax */
  push32((uint32_t)(EAX));
  /* 103b2804 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2807 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2808 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b280b push edx */
  push32((uint32_t)(EDX));
  /* 103b280c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b280f push eax */
  push32((uint32_t)(EAX));
  /* 103b2810 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2813 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 103b2819 push edx */
  push32((uint32_t)(EDX));
  /* 103b281a call 0x103b2b90 */
  push32(0x103b281fu); f_103b2b90();
  /* 103b281f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b2822:;
  /* 103b2822 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2827:;
  /* 103b2827 mov dword ptr [0x103d0958], 0 */
  w32((uint32_t)(0x103d0958), (0x0u));
  /* 103b2831 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2834 push eax */
  push32((uint32_t)(EAX));
  /* 103b2835 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2838 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2839 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b283c push edx */
  push32((uint32_t)(EDX));
  /* 103b283d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2840 push eax */
  push32((uint32_t)(EAX));
  /* 103b2841 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2844 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 103b284a push edx */
  push32((uint32_t)(EDX));
  /* 103b284b call 0x103b2b90 */
  push32(0x103b2850u); f_103b2b90();
  /* 103b2850 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2853 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2858:;
  /* 103b2858 mov eax, dword ptr [0x103d0958] */
  EAX = (r32((uint32_t)(0x103d0958)));
  /* 103b285d mov dword ptr [0x103d0968], eax */
  w32((uint32_t)(0x103d0968), (EAX));
  /* 103b2862 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2865 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 103b2868 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2869 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 103b286e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b2870 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b2873 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2876 push edx */
  push32((uint32_t)(EDX));
  /* 103b2877 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b287a push eax */
  push32((uint32_t)(EAX));
  /* 103b287b push 2 */
  push32((uint32_t)(0x2u));
  /* 103b287d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2880 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2881 call 0x103b2a30 */
  push32(0x103b2886u); f_103b2a30();
  /* 103b2886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2889 jmp 0x103b2928 */
  goto L_103b2928;
L_103b288e:;
  /* 103b288e mov edx, dword ptr [0x103d0958] */
  EDX = (r32((uint32_t)(0x103d0958)));
  /* 103b2894 mov dword ptr [0x103d0968], edx */
  w32((uint32_t)(0x103d0968), (EDX));
  /* 103b289a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b289d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 103b28a0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b28a1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 103b28a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b28a8 mov ecx, eax */
  ECX = (EAX);
  /* 103b28aa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b28ad imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b28b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b28b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103b28b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b28b7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 103b28bc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b28be add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b28c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b28c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b28c6 push eax */
  push32((uint32_t)(EAX));
  /* 103b28c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b28ca push ecx */
  push32((uint32_t)(ECX));
  /* 103b28cb push 4 */
  push32((uint32_t)(0x4u));
  /* 103b28cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b28d0 push edx */
  push32((uint32_t)(EDX));
  /* 103b28d1 call 0x103b2a30 */
  push32(0x103b28d6u); f_103b2a30();
  /* 103b28d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b28d9 jmp 0x103b2928 */
  goto L_103b2928;
L_103b28db:;
  /* 103b28db call 0x103b39f0 */
  push32(0x103b28e0u); f_103b39f0();
  /* 103b28e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b28e3 push eax */
  push32((uint32_t)(EAX));
  /* 103b28e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b28e7 push ecx */
  push32((uint32_t)(ECX));
  /* 103b28e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b28eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b28ed cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b28f1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 103b28f4 mov ecx, dword ptr [eax*4 + 0x103cfe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103cfe1c)));
  /* 103b28fb push ecx */
  push32((uint32_t)(ECX));
  /* 103b28fc call 0x103b29e0 */
  push32(0x103b2901u); f_103b29e0();
  /* 103b2901 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2904 jmp 0x103b2928 */
  goto L_103b2928;
L_103b2906:;
  /* 103b2906 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2909 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b290b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 103b290e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2911 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2913 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2916 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2919 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b291b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b291e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2920 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2923 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2926 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103b2928:;
  /* 103b2928 pop esi */
  ESI = (pop32());
  /* 103b2929 mov esp, ebp */
  ESP = (EBP);
  /* 103b292b pop ebp */
  EBP = (pop32());
  /* 103b292c ret  */
  ESPCHK(0x103b23c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x103b29e0 (72 bytes, 30 insns) */
void f_103b29e0(void) {
  FTRACE(0x103b29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b29e1 mov ebp, esp */
  EBP = (ESP);
L_103b29e3:;
  /* 103b29e3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b29e6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b29e9 je 0x103b2a26 */
  if (C.zf) goto L_103b2a26;
  /* 103b29eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b29ee movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b29f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b29f3 je 0x103b2a26 */
  if (C.zf) goto L_103b2a26;
  /* 103b29f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b29f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b29fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b29fd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b29ff mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b2a01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a04 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2a06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2a09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a0c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b2a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2a11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2a14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103b2a17 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2a1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2a1c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2a1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2a22 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b2a24 jmp 0x103b29e3 */
  goto L_103b29e3;
L_103b2a26:;
  /* 103b2a26 pop ebp */
  EBP = (pop32());
  /* 103b2a27 ret  */
  ESPCHK(0x103b29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a30 @ 0x103b2a30 (173 bytes, 64 insns) */
void f_103b2a30(void) {
  FTRACE(0x103b2a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b2a30 push ebp */
  push32((uint32_t)(EBP));
  /* 103b2a31 mov ebp, esp */
  EBP = (ESP);
  /* 103b2a33 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b2a3b cmp dword ptr [0x103d0968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2a42 je 0x103b2a5a */
  if (C.zf) goto L_103b2a5a;
  /* 103b2a44 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2a47 push eax */
  push32((uint32_t)(EAX));
  /* 103b2a48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2a4b push ecx */
  push32((uint32_t)(ECX));
  /* 103b2a4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2a4f push edx */
  push32((uint32_t)(EDX));
  /* 103b2a50 call 0x103b2ae0 */
  push32(0x103b2a55u); f_103b2ae0();
  /* 103b2a55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2a58 jmp 0x103b2ad9 */
  goto L_103b2ad9;
L_103b2a5a:;
  /* 103b2a5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a60 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2a62 jae 0x103b2ad0 */
  if (!C.cf) goto L_103b2ad0;
  /* 103b2a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2a6a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103b2a6d jmp 0x103b2a78 */
  goto L_103b2a78;
L_103b2a6f:;
  /* 103b2a6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2a75 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_103b2a78:;
  /* 103b2a78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2a7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b2a80 je 0x103b2ab4 */
  if (C.zf) goto L_103b2ab4;
  /* 103b2a82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2a85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2a86 mov ecx, 0xa */
  ECX = (0xau);
  /* 103b2a8b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b2a8d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2a90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2a93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2a95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2a98 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 103b2a9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2a9e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2a9f mov ecx, 0xa */
  ECX = (0xau);
  /* 103b2aa4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b2aa6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b2aa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2aac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2aaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b2ab2 jmp 0x103b2a6f */
  goto L_103b2a6f;
L_103b2ab4:;
  /* 103b2ab4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2ab7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2ab9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2abc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2abf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103b2ac1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2ac4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2ac6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2ac9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2acc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103b2ace jmp 0x103b2ad9 */
  goto L_103b2ad9;
L_103b2ad0:;
  /* 103b2ad0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2ad3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103b2ad9:;
  /* 103b2ad9 mov esp, ebp */
  ESP = (EBP);
  /* 103b2adb pop ebp */
  EBP = (pop32());
  /* 103b2adc ret  */
  ESPCHK(0x103b2a30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x103b2ae0 (172 bytes, 65 insns) */
void f_103b2ae0(void) {
  FTRACE(0x103b2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 103b2ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2ae6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2ae9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2aeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b2aee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2af1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2af4 jbe 0x103b2b3b */
  if ((C.cf||C.zf)) goto L_103b2b3b;
L_103b2af6:;
  /* 103b2af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2af9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2afa mov ecx, 0xa */
  ECX = (0xau);
  /* 103b2aff idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b2b01 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2b04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103b2b09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2b0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b2b12 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2b15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2b17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2b1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2b1d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b2b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2b22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b2b23 mov ecx, 0xa */
  ECX = (0xau);
  /* 103b2b28 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b2b2a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b2b2d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2b31 jle 0x103b2b3b */
  if ((C.zf||C.sf!=C.of)) goto L_103b2b3b;
  /* 103b2b33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2b36 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2b39 ja 0x103b2af6 */
  if ((!C.cf&&!C.zf)) goto L_103b2af6;
L_103b2b3b:;
  /* 103b2b3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2b3e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2b40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b2b43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103b2b4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b4e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2b51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103b2b54:;
  /* 103b2b54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b57 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2b59 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 103b2b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b2b62 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2b64 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b2b66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2b69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2b6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b2b6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b2b72 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 103b2b75 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 103b2b77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b2b7a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2b7d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b2b80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b2b83 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2b86 jb 0x103b2b54 */
  if (C.cf) goto L_103b2b54;
  /* 103b2b88 mov esp, ebp */
  ESP = (EBP);
  /* 103b2b8a pop ebp */
  EBP = (pop32());
  /* 103b2b8b ret  */
  ESPCHK(0x103b2ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b90 @ 0x103b2b90 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_103b2b90(void) {
  FTRACE(0x103b2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b2b90 push ebp */
  push32((uint32_t)(EBP));
  /* 103b2b91 mov ebp, esp */
  EBP = (ESP);
  /* 103b2b93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_103b2b96:;
  /* 103b2b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2b99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b2b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b2b9e je 0x103b300c */
  if (C.zf) goto L_103b300c;
  /* 103b2ba4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2ba7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2baa je 0x103b300c */
  if (C.zf) goto L_103b300c;
  /* 103b2bb0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 103b2bb4 mov dword ptr [0x103d0968], 0 */
  w32((uint32_t)(0x103d0968), (0x0u));
  /* 103b2bbe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103b2bc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2bc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b2bcb jmp 0x103b2bd6 */
  goto L_103b2bd6;
L_103b2bcd:;
  /* 103b2bcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2bd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2bd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103b2bd6:;
  /* 103b2bd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2bd9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b2bdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2bdf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b2be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2be8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b2beb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2bed jne 0x103b2bf1 */
  if (!C.zf) goto L_103b2bf1;
  /* 103b2bef jmp 0x103b2bcd */
  goto L_103b2bcd;
L_103b2bf1:;
  /* 103b2bf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2bf4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2bf7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b2bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2bfd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b2c00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b2c03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2c06 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2c09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103b2c0c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2c10 ja 0x103b2f60 */
  if ((!C.cf&&!C.zf)) goto L_103b2f60;
  /* 103b2c16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b2c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b2c1b mov al, byte ptr [ecx + 0x103b303c] */
  AL = (r8((uint32_t)(ECX + 0x103b303c)));
  /* 103b2c21 jmp dword ptr [eax*4 + 0x103b3010] */
  switch (EAX) {
    case 0: goto L_103b2e7f;
    case 1: goto L_103b2d63;
    case 2: goto L_103b2cee;
    case 3: goto L_103b2c28;
    case 4: goto L_103b2c66;
    case 5: goto L_103b2cc7;
    case 6: goto L_103b2d15;
    case 7: goto L_103b2d3c;
    case 8: goto L_103b2daa;
    case 9: goto L_103b2ca4;
    case 10: goto L_103b2f60;
    default: x86_unimpl("switch@0x103b2c21 out of table"); return;
  }
L_103b2c28:;
  /* 103b2c28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2c2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103b2c2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b2c31 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2c34 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103b2c37 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2c3b ja 0x103b2c61 */
  if ((!C.cf&&!C.zf)) goto L_103b2c61;
  /* 103b2c3d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b2c40 jmp dword ptr [ecx*4 + 0x103b308f] */
  switch (ECX) {
    case 0: goto L_103b2c47;
    case 1: goto L_103b2c51;
    case 2: goto L_103b2c57;
    case 3: goto L_103b2c5d;
    case 4: goto L_103b2c85;
    case 5: goto L_103b2c8f;
    case 6: goto L_103b2c95;
    case 7: goto L_103b2c9b;
    default: x86_unimpl("switch@0x103b2c40 out of table"); return;
  }
L_103b2c47:;
  /* 103b2c47 mov dword ptr [0x103d0968], 1 */
  w32((uint32_t)(0x103d0968), (0x1u));
L_103b2c51:;
  /* 103b2c51 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 103b2c55 jmp 0x103b2c61 */
  goto L_103b2c61;
L_103b2c57:;
  /* 103b2c57 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 103b2c5b jmp 0x103b2c61 */
  goto L_103b2c61;
L_103b2c5d:;
  /* 103b2c5d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_103b2c61:;
  /* 103b2c61 jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2c66:;
  /* 103b2c66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2c69 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103b2c6c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b2c6f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2c72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103b2c75 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2c79 ja 0x103b2c9f */
  if ((!C.cf&&!C.zf)) goto L_103b2c9f;
  /* 103b2c7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b2c7e jmp dword ptr [ecx*4 + 0x103b309f] */
  switch (ECX) {
    case 0: goto L_103b2c85;
    case 1: goto L_103b2c8f;
    case 2: goto L_103b2c95;
    case 3: goto L_103b2c9b;
    default: x86_unimpl("switch@0x103b2c7e out of table"); return;
  }
L_103b2c85:;
  /* 103b2c85 mov dword ptr [0x103d0968], 1 */
  w32((uint32_t)(0x103d0968), (0x1u));
L_103b2c8f:;
  /* 103b2c8f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 103b2c93 jmp 0x103b2c9f */
  goto L_103b2c9f;
L_103b2c95:;
  /* 103b2c95 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 103b2c99 jmp 0x103b2c9f */
  goto L_103b2c9f;
L_103b2c9b:;
  /* 103b2c9b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_103b2c9f:;
  /* 103b2c9f jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2ca4:;
  /* 103b2ca4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2ca7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 103b2caa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2cae je 0x103b2cb8 */
  if (C.zf) goto L_103b2cb8;
  /* 103b2cb0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2cb4 je 0x103b2cbe */
  if (C.zf) goto L_103b2cbe;
  /* 103b2cb6 jmp 0x103b2cc2 */
  goto L_103b2cc2;
L_103b2cb8:;
  /* 103b2cb8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 103b2cbc jmp 0x103b2cc2 */
  goto L_103b2cc2;
L_103b2cbe:;
  /* 103b2cbe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_103b2cc2:;
  /* 103b2cc2 jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2cc7:;
  /* 103b2cc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2cca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103b2ccd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2cd1 je 0x103b2cdb */
  if (C.zf) goto L_103b2cdb;
  /* 103b2cd3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2cd7 je 0x103b2ce5 */
  if (C.zf) goto L_103b2ce5;
  /* 103b2cd9 jmp 0x103b2ce9 */
  goto L_103b2ce9;
L_103b2cdb:;
  /* 103b2cdb mov dword ptr [0x103d0968], 1 */
  w32((uint32_t)(0x103d0968), (0x1u));
L_103b2ce5:;
  /* 103b2ce5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_103b2ce9:;
  /* 103b2ce9 jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2cee:;
  /* 103b2cee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2cf1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103b2cf4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2cf8 je 0x103b2d02 */
  if (C.zf) goto L_103b2d02;
  /* 103b2cfa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2cfe je 0x103b2d0c */
  if (C.zf) goto L_103b2d0c;
  /* 103b2d00 jmp 0x103b2d10 */
  goto L_103b2d10;
L_103b2d02:;
  /* 103b2d02 mov dword ptr [0x103d0968], 1 */
  w32((uint32_t)(0x103d0968), (0x1u));
L_103b2d0c:;
  /* 103b2d0c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_103b2d10:;
  /* 103b2d10 jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2d15:;
  /* 103b2d15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2d18 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 103b2d1b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2d1f je 0x103b2d29 */
  if (C.zf) goto L_103b2d29;
  /* 103b2d21 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2d25 je 0x103b2d33 */
  if (C.zf) goto L_103b2d33;
  /* 103b2d27 jmp 0x103b2d37 */
  goto L_103b2d37;
L_103b2d29:;
  /* 103b2d29 mov dword ptr [0x103d0968], 1 */
  w32((uint32_t)(0x103d0968), (0x1u));
L_103b2d33:;
  /* 103b2d33 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_103b2d37:;
  /* 103b2d37 jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2d3c:;
  /* 103b2d3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2d3f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 103b2d42 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2d46 je 0x103b2d50 */
  if (C.zf) goto L_103b2d50;
  /* 103b2d48 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2d4c je 0x103b2d5a */
  if (C.zf) goto L_103b2d5a;
  /* 103b2d4e jmp 0x103b2d5e */
  goto L_103b2d5e;
L_103b2d50:;
  /* 103b2d50 mov dword ptr [0x103d0968], 1 */
  w32((uint32_t)(0x103d0968), (0x1u));
L_103b2d5a:;
  /* 103b2d5a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_103b2d5e:;
  /* 103b2d5e jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2d63:;
  /* 103b2d63 push 0x103ccaec */
  push32((uint32_t)(0x103ccaecu));
  /* 103b2d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2d6b push ecx */
  push32((uint32_t)(ECX));
  /* 103b2d6c call 0x103b35c0 */
  push32(0x103b2d71u); f_103b35c0();
  /* 103b2d71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b2d76 jne 0x103b2d83 */
  if (!C.zf) goto L_103b2d83;
  /* 103b2d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2d7b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2d7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b2d81 jmp 0x103b2da1 */
  goto L_103b2da1;
L_103b2d83:;
  /* 103b2d83 push 0x103ccae8 */
  push32((uint32_t)(0x103ccae8u));
  /* 103b2d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2d8b push eax */
  push32((uint32_t)(EAX));
  /* 103b2d8c call 0x103b35c0 */
  push32(0x103b2d91u); f_103b35c0();
  /* 103b2d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b2d96 jne 0x103b2da1 */
  if (!C.zf) goto L_103b2da1;
  /* 103b2d98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2d9b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2d9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103b2da1:;
  /* 103b2da1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 103b2da5 jmp 0x103b2f60 */
  goto L_103b2f60;
L_103b2daa:;
  /* 103b2daa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2dad cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2db1 jg 0x103b2dc1 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b2dc1;
  /* 103b2db3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2db6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 103b2dbc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103b2dbf jmp 0x103b2dcd */
  goto L_103b2dcd;
L_103b2dc1:;
  /* 103b2dc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2dc4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 103b2dca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103b2dcd:;
  /* 103b2dcd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2dd1 jle 0x103b2e74 */
  if ((C.zf||C.sf!=C.of)) goto L_103b2e74;
  /* 103b2dd7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2dda cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2ddd jbe 0x103b2e74 */
  if ((C.cf||C.zf)) goto L_103b2e74;
  /* 103b2de3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b2de8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2dea mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b2df0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b2df2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b2df6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103b2dfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b2dfe je 0x103b2e37 */
  if (C.zf) goto L_103b2e37;
  /* 103b2e00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2e03 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2e06 jbe 0x103b2e37 */
  if ((C.cf||C.zf)) goto L_103b2e37;
  /* 103b2e08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2e0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2e0d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2e10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b2e12 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103b2e14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2e17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2e19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2e1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2e1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b2e21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2e24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2e27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103b2e2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2e2d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2e2f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2e32 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2e35 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103b2e37:;
  /* 103b2e37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2e3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2e3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2e3f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2e41 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b2e43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2e46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2e48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2e4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2e4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b2e50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b2e53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2e56 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103b2e59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2e5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2e5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2e61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2e64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b2e66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2e69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2e6c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103b2e6f jmp 0x103b2dcd */
  goto L_103b2dcd;
L_103b2e74:;
  /* 103b2e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2e77 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b2e7a jmp 0x103b2b96 */
  goto L_103b2b96;
L_103b2e7f:;
  /* 103b2e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b2e82 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103b2e85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b2e87 je 0x103b2f52 */
  if (C.zf) goto L_103b2f52;
  /* 103b2e8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2e90 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2e93 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103b2e96:;
  /* 103b2e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2e99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b2e9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b2e9e je 0x103b2f50 */
  if (C.zf) goto L_103b2f50;
  /* 103b2ea4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2ea7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2eaa je 0x103b2f50 */
  if (C.zf) goto L_103b2f50;
  /* 103b2eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2eb3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b2eb6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2eb9 jne 0x103b2ec9 */
  if (!C.zf) goto L_103b2ec9;
  /* 103b2ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2ebe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2ec1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103b2ec4 jmp 0x103b2f50 */
  goto L_103b2f50;
L_103b2ec9:;
  /* 103b2ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2ecc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b2ece mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b2ed0 mov edx, dword ptr [0x103cec98] */
  EDX = (r32((uint32_t)(0x103cec98)));
  /* 103b2ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b2ed8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 103b2edc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 103b2ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b2ee3 je 0x103b2f1c */
  if (C.zf) goto L_103b2f1c;
  /* 103b2ee5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2ee8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b2eeb jbe 0x103b2f1c */
  if ((C.cf||C.zf)) goto L_103b2f1c;
  /* 103b2eed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2ef0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2ef5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b2ef7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103b2ef9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2efc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2efe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2f01 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2f04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103b2f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2f09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2f0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b2f0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2f12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2f14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2f17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2f1a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103b2f1c:;
  /* 103b2f1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2f1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2f21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2f24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b2f26 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103b2f28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2f2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2f2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2f30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2f33 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b2f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2f38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2f3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103b2f3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2f41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2f43 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2f46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2f49 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103b2f4b jmp 0x103b2e96 */
  goto L_103b2e96;
L_103b2f50:;
  /* 103b2f50 jmp 0x103b2f5b */
  goto L_103b2f5b;
L_103b2f52:;
  /* 103b2f52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2f55 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2f58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103b2f5b:;
  /* 103b2f5b jmp 0x103b2b96 */
  goto L_103b2b96;
L_103b2f60:;
  /* 103b2f60 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 103b2f64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b2f66 je 0x103b2f8c */
  if (C.zf) goto L_103b2f8c;
  /* 103b2f68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b2f6b push edx */
  push32((uint32_t)(EDX));
  /* 103b2f6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2f6f push eax */
  push32((uint32_t)(EAX));
  /* 103b2f70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 103b2f74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b2f77 push edx */
  push32((uint32_t)(EDX));
  /* 103b2f78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 103b2f7b push eax */
  push32((uint32_t)(EAX));
  /* 103b2f7c call 0x103b23c0 */
  push32(0x103b2f81u); f_103b23c0();
  /* 103b2f81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2f84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b2f87 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103b2f8a jmp 0x103b3007 */
  goto L_103b3007;
L_103b2f8c:;
  /* 103b2f8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b2f91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2f93 mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b2f99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b2f9b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b2f9f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 103b2fa5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b2fa7 je 0x103b2fd8 */
  if (C.zf) goto L_103b2fd8;
  /* 103b2fa9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2fac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2fae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2fb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b2fb3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b2fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2fb8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2fba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2fbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2fc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103b2fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2fc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2fc8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103b2fcb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2fce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2fd0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b2fd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2fd6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103b2fd8:;
  /* 103b2fd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2fdb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b2fdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2fe0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b2fe2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103b2fe4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2fe7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b2fe9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2fec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b2fef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103b2ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b2ff4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b2ff7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b2ffa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b2ffd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b2fff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b3002 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b3005 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103b3007:;
  /* 103b3007 jmp 0x103b2b96 */
  goto L_103b2b96;
L_103b300c:;
  /* 103b300c mov esp, ebp */
  ESP = (EBP);
  /* 103b300e pop ebp */
  EBP = (pop32());
  /* 103b300f ret  */
  ESPCHK(0x103b2b90u, _esp0);
  ESP += 4; return;
}

/* FUN_100130b0 @ 0x103b30b0 (650 bytes, 178 insns) */
void f_103b30b0(void) {
  FTRACE(0x103b30b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b30b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b30b1 mov ebp, esp */
  EBP = (ESP);
  /* 103b30b3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b30b9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b30bd jne 0x103b3219 */
  if (!C.zf) goto L_103b3219;
  /* 103b30c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b30c6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 103b30cc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 103b30d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b30d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b30dc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 103b30e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b30e8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 103b30ee push edx */
  push32((uint32_t)(EDX));
  /* 103b30ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b30f2 push eax */
  push32((uint32_t)(EAX));
  /* 103b30f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b30f6 push ecx */
  push32((uint32_t)(ECX));
  /* 103b30f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b30fa push edx */
  push32((uint32_t)(EDX));
  /* 103b30fb call 0x103b44d0 */
  push32(0x103b3100u); f_103b44d0();
  /* 103b3100 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3103 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b3106 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b310a jne 0x103b319f */
  if (!C.zf) goto L_103b319f;
  /* 103b3110 call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103b3116u);
  /* 103b3116 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3119 je 0x103b3120 */
  if (C.zf) goto L_103b3120;
  /* 103b311b jmp 0x103b31fd */
  goto L_103b31fd;
L_103b3120:;
  /* 103b3120 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3122 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3124 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3126 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3129 push eax */
  push32((uint32_t)(EAX));
  /* 103b312a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b312d push ecx */
  push32((uint32_t)(ECX));
  /* 103b312e call 0x103b44d0 */
  push32(0x103b3133u); f_103b44d0();
  /* 103b3133 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3136 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 103b313c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3143 jne 0x103b314a */
  if (!C.zf) goto L_103b314a;
  /* 103b3145 jmp 0x103b31fd */
  goto L_103b31fd;
L_103b314a:;
  /* 103b314a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 103b314c push 0x103ccaf4 */
  push32((uint32_t)(0x103ccaf4u));
  /* 103b3151 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b3153 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 103b3159 push edx */
  push32((uint32_t)(EDX));
  /* 103b315a call 0x103a4ef0 */
  push32(0x103b315fu); f_103a4ef0();
  /* 103b315f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3162 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b3165 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3169 jne 0x103b3170 */
  if (!C.zf) goto L_103b3170;
  /* 103b316b jmp 0x103b31fd */
  goto L_103b31fd;
L_103b3170:;
  /* 103b3170 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103b3177 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3179 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 103b317f push eax */
  push32((uint32_t)(EAX));
  /* 103b3180 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3183 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3184 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3187 push edx */
  push32((uint32_t)(EDX));
  /* 103b3188 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b318b push eax */
  push32((uint32_t)(EAX));
  /* 103b318c call 0x103b44d0 */
  push32(0x103b3191u); f_103b44d0();
  /* 103b3191 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3194 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b3197 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b319b jne 0x103b319f */
  if (!C.zf) goto L_103b319f;
  /* 103b319d jmp 0x103b31fd */
  goto L_103b31fd;
L_103b319f:;
  /* 103b319f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 103b31a1 push 0x103ccaf4 */
  push32((uint32_t)(0x103ccaf4u));
  /* 103b31a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b31a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b31ab push ecx */
  push32((uint32_t)(ECX));
  /* 103b31ac call 0x103a4ef0 */
  push32(0x103b31b1u); f_103a4ef0();
  /* 103b31b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b31b4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 103b31ba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103b31bc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 103b31c2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b31c5 jne 0x103b31c9 */
  if (!C.zf) goto L_103b31c9;
  /* 103b31c7 jmp 0x103b31fd */
  goto L_103b31fd;
L_103b31c9:;
  /* 103b31c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b31cc push ecx */
  push32((uint32_t)(ECX));
  /* 103b31cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b31d0 push edx */
  push32((uint32_t)(EDX));
  /* 103b31d1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 103b31d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b31d9 push ecx */
  push32((uint32_t)(ECX));
  /* 103b31da call 0x103a8710 */
  push32(0x103b31dfu); f_103a8710();
  /* 103b31df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b31e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b31e6 je 0x103b31f6 */
  if (C.zf) goto L_103b31f6;
  /* 103b31e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b31ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b31ed push edx */
  push32((uint32_t)(EDX));
  /* 103b31ee call 0x103a5980 */
  push32(0x103b31f3u); f_103a5980();
  /* 103b31f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b31f6:;
  /* 103b31f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b31f8 jmp 0x103b3336 */
  goto L_103b3336;
L_103b31fd:;
  /* 103b31fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3201 je 0x103b3211 */
  if (C.zf) goto L_103b3211;
  /* 103b3203 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b3205 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3208 push eax */
  push32((uint32_t)(EAX));
  /* 103b3209 call 0x103a5980 */
  push32(0x103b320eu); f_103a5980();
  /* 103b320e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b3211:;
  /* 103b3211 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b3214 jmp 0x103b3336 */
  goto L_103b3336;
L_103b3219:;
  /* 103b3219 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b321d jne 0x103b3333 */
  if (!C.zf) goto L_103b3333;
  /* 103b3223 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 103b322d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b3230 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 103b3236 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3238 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 103b323e push edx */
  push32((uint32_t)(EDX));
  /* 103b323f push 0x103d0880 */
  push32((uint32_t)(0x103d0880u));
  /* 103b3244 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3247 push eax */
  push32((uint32_t)(EAX));
  /* 103b3248 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b324b push ecx */
  push32((uint32_t)(ECX));
  /* 103b324c call 0x103b4330 */
  push32(0x103b3251u); f_103b4330();
  /* 103b3251 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b3256 jne 0x103b3260 */
  if (!C.zf) goto L_103b3260;
  /* 103b3258 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b325b jmp 0x103b3336 */
  goto L_103b3336;
L_103b3260:;
  /* 103b3260 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103b3266 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103b3269 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 103b3273 jmp 0x103b3284 */
  goto L_103b3284;
L_103b3275:;
  /* 103b3275 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103b327b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b327e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_103b3284:;
  /* 103b3284 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b328b jge 0x103b332f */
  if ((C.sf==C.of)) goto L_103b332f;
  /* 103b3291 cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3298 jle 0x103b32cb */
  if ((C.zf||C.sf!=C.of)) goto L_103b32cb;
  /* 103b329a push 4 */
  push32((uint32_t)(0x4u));
  /* 103b329c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103b32a2 mov dl, byte ptr [ecx*2 + 0x103d0880] */
  DL = (r8((uint32_t)(ECX*2 + 0x103d0880)));
  /* 103b32a9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 103b32af mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 103b32b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b32ba push eax */
  push32((uint32_t)(EAX));
  /* 103b32bb call 0x103aaf00 */
  push32(0x103b32c0u); f_103aaf00();
  /* 103b32c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b32c3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 103b32c9 jmp 0x103b32fe */
  goto L_103b32fe;
L_103b32cb:;
  /* 103b32cb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 103b32d1 mov dl, byte ptr [ecx*2 + 0x103d0880] */
  DL = (r8((uint32_t)(ECX*2 + 0x103d0880)));
  /* 103b32d8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 103b32de mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 103b32e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b32e9 mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b32ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b32f1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b32f5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103b32f8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_103b32fe:;
  /* 103b32fe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3305 je 0x103b3328 */
  if (C.zf) goto L_103b3328;
  /* 103b3307 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103b330d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b3310 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b3313 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 103b331a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 103b331e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 103b3324 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103b3326 jmp 0x103b332a */
  goto L_103b332a;
L_103b3328:;
  /* 103b3328 jmp 0x103b332f */
  goto L_103b332f;
L_103b332a:;
  /* 103b332a jmp 0x103b3275 */
  goto L_103b3275;
L_103b332f:;
  /* 103b332f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3331 jmp 0x103b3336 */
  goto L_103b3336;
L_103b3333:;
  /* 103b3333 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103b3336:;
  /* 103b3336 mov esp, ebp */
  ESP = (EBP);
  /* 103b3338 pop ebp */
  EBP = (pop32());
  /* 103b3339 ret  */
  ESPCHK(0x103b30b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x103b3340 (10 bytes, 5 insns) */
void f_103b3340(void) {
  FTRACE(0x103b3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3340 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3341 mov ebp, esp */
  EBP = (ESP);
  /* 103b3343 mov eax, dword ptr [0x103cfd88] */
  EAX = (r32((uint32_t)(0x103cfd88)));
  /* 103b3348 pop ebp */
  EBP = (pop32());
  /* 103b3349 ret  */
  ESPCHK(0x103b3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x103b3350 (575 bytes, 196 insns) */
void f_103b3350(void) {
  FTRACE(0x103b3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3350 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3351 mov ebp, esp */
  EBP = (ESP);
  /* 103b3353 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b3355 push 0x103ccb00 */
  push32((uint32_t)(0x103ccb00u));
  /* 103b335a push 0x103adff8 */
  push32((uint32_t)(0x103adff8u));
  /* 103b335f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103b3365 push eax */
  push32((uint32_t)(EAX));
  /* 103b3366 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103b336d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3370 push ebx */
  push32((uint32_t)(EBX));
  /* 103b3371 push esi */
  push32((uint32_t)(ESI));
  /* 103b3372 push edi */
  push32((uint32_t)(EDI));
  /* 103b3373 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b3376 cmp dword ptr [0x103d088c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d088c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b337d jne 0x103b33ce */
  if (!C.zf) goto L_103b33ce;
  /* 103b337f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 103b3382 push eax */
  push32((uint32_t)(EAX));
  /* 103b3383 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3385 push 0x103cc234 */
  push32((uint32_t)(0x103cc234u));
  /* 103b338a push 1 */
  push32((uint32_t)(0x1u));
  /* 103b338c call dword ptr [0x103d32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ec))), 0x103b3392u);
  /* 103b3392 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b3394 je 0x103b33a2 */
  if (C.zf) goto L_103b33a2;
  /* 103b3396 mov dword ptr [0x103d088c], 1 */
  w32((uint32_t)(0x103d088c), (0x1u));
  /* 103b33a0 jmp 0x103b33ce */
  goto L_103b33ce;
L_103b33a2:;
  /* 103b33a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 103b33a5 push ecx */
  push32((uint32_t)(ECX));
  /* 103b33a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b33a8 push 0x103cc230 */
  push32((uint32_t)(0x103cc230u));
  /* 103b33ad push 1 */
  push32((uint32_t)(0x1u));
  /* 103b33af push 0 */
  push32((uint32_t)(0x0u));
  /* 103b33b1 call dword ptr [0x103d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f0))), 0x103b33b7u);
  /* 103b33b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b33b9 je 0x103b33c7 */
  if (C.zf) goto L_103b33c7;
  /* 103b33bb mov dword ptr [0x103d088c], 2 */
  w32((uint32_t)(0x103d088c), (0x2u));
  /* 103b33c5 jmp 0x103b33ce */
  goto L_103b33ce;
L_103b33c7:;
  /* 103b33c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b33c9 jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b33ce:;
  /* 103b33ce cmp dword ptr [0x103d088c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d088c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b33d5 jne 0x103b33f2 */
  if (!C.zf) goto L_103b33f2;
  /* 103b33d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b33da push edx */
  push32((uint32_t)(EDX));
  /* 103b33db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b33de push eax */
  push32((uint32_t)(EAX));
  /* 103b33df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b33e2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b33e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b33e6 push edx */
  push32((uint32_t)(EDX));
  /* 103b33e7 call dword ptr [0x103d32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ec))), 0x103b33edu);
  /* 103b33ed jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b33f2:;
  /* 103b33f2 cmp dword ptr [0x103d088c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d088c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b33f9 jne 0x103b35a7 */
  if (!C.zf) goto L_103b35a7;
  /* 103b33ff cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3403 jne 0x103b340d */
  if (!C.zf) goto L_103b340d;
  /* 103b3405 mov eax, dword ptr [0x103d0800] */
  EAX = (r32((uint32_t)(0x103d0800)));
  /* 103b340a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_103b340d:;
  /* 103b340d push 0 */
  push32((uint32_t)(0x0u));
  /* 103b340f push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3411 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3413 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3415 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3418 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3419 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b341c push edx */
  push32((uint32_t)(EDX));
  /* 103b341d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103b3422 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b3425 push eax */
  push32((uint32_t)(EAX));
  /* 103b3426 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b342cu);
  /* 103b342c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103b342f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3433 jne 0x103b343c */
  if (!C.zf) goto L_103b343c;
  /* 103b3435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3437 jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b343c:;
  /* 103b343c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b3443 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b3446 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3449 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103b344b call 0x103a8090 */
  push32(0x103b3450u); f_103a8090();
  /* 103b3450 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 103b3453 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b3456 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 103b3459 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103b345c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b345f push edx */
  push32((uint32_t)(EDX));
  /* 103b3460 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3462 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b3465 push eax */
  push32((uint32_t)(EAX));
  /* 103b3466 call 0x103a8c60 */
  push32(0x103b346bu); f_103a8c60();
  /* 103b346b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b346e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103b3475 jmp 0x103b348e */
  goto L_103b348e;
  /* 103b3477 mov eax, 1 */
  EAX = (0x1u);
  /* 103b347c ret  */
  ESPCHK(0x103b3350u, _esp0);
  ESP += 4; return;
  /* 103b347d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103b3480 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 103b3487 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103b348e:;
  /* 103b348e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3492 jne 0x103b349b */
  if (!C.zf) goto L_103b349b;
  /* 103b3494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3496 jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b349b:;
  /* 103b349b push 0 */
  push32((uint32_t)(0x0u));
  /* 103b349d push 0 */
  push32((uint32_t)(0x0u));
  /* 103b349f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b34a2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b34a3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b34a6 push edx */
  push32((uint32_t)(EDX));
  /* 103b34a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b34aa push eax */
  push32((uint32_t)(EAX));
  /* 103b34ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b34ae push ecx */
  push32((uint32_t)(ECX));
  /* 103b34af push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103b34b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b34b7 push edx */
  push32((uint32_t)(EDX));
  /* 103b34b8 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b34beu);
  /* 103b34be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b34c0 jne 0x103b34c9 */
  if (!C.zf) goto L_103b34c9;
  /* 103b34c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b34c4 jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b34c9:;
  /* 103b34c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103b34d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b34d3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 103b34d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b34da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103b34dc call 0x103a8090 */
  push32(0x103b34e1u); f_103a8090();
  /* 103b34e1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 103b34e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b34e7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 103b34ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103b34ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103b34f4 jmp 0x103b350d */
  goto L_103b350d;
  /* 103b34f6 mov eax, 1 */
  EAX = (0x1u);
  /* 103b34fb ret  */
  ESPCHK(0x103b3350u, _esp0);
  ESP += 4; return;
  /* 103b34fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103b34ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103b3506 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103b350d:;
  /* 103b350d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3511 jne 0x103b351a */
  if (!C.zf) goto L_103b351a;
  /* 103b3513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3515 jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b351a:;
  /* 103b351a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b351e jne 0x103b3529 */
  if (!C.zf) goto L_103b3529;
  /* 103b3520 mov edx, dword ptr [0x103d07f0] */
  EDX = (r32((uint32_t)(0x103d07f0)));
  /* 103b3526 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_103b3529:;
  /* 103b3529 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b352c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b352f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 103b3535 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3538 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b353b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 103b3542 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b3545 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3546 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b3549 push edx */
  push32((uint32_t)(EDX));
  /* 103b354a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103b354d push eax */
  push32((uint32_t)(EAX));
  /* 103b354e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3551 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3552 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b3555 push edx */
  push32((uint32_t)(EDX));
  /* 103b3556 call dword ptr [0x103d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f0))), 0x103b355cu);
  /* 103b355c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103b355f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3562 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b3565 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3567 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 103b356c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3572 je 0x103b3588 */
  if (C.zf) goto L_103b3588;
  /* 103b3574 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3577 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b357a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b357c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b3580 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3586 je 0x103b358c */
  if (C.zf) goto L_103b358c;
L_103b3588:;
  /* 103b3588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b358a jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b358c:;
  /* 103b358c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b358f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b3591 push eax */
  push32((uint32_t)(EAX));
  /* 103b3592 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b3595 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3596 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b3599 push edx */
  push32((uint32_t)(EDX));
  /* 103b359a call 0x103acde0 */
  push32(0x103b359fu); f_103acde0();
  /* 103b359f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b35a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b35a5 jmp 0x103b35a9 */
  goto L_103b35a9;
L_103b35a7:;
  /* 103b35a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b35a9:;
  /* 103b35a9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 103b35ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b35af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103b35b6 pop edi */
  EDI = (pop32());
  /* 103b35b7 pop esi */
  ESI = (pop32());
  /* 103b35b8 pop ebx */
  EBX = (pop32());
  /* 103b35b9 mov esp, ebp */
  ESP = (EBP);
  /* 103b35bb pop ebp */
  EBP = (pop32());
  /* 103b35bc ret  */
  ESPCHK(0x103b3350u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x103b35c0 (208 bytes, 85 insns) */
void f_103b35c0(void) {
  FTRACE(0x103b35c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b35c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b35c1 mov ebp, esp */
  EBP = (ESP);
  /* 103b35c3 push edi */
  push32((uint32_t)(EDI));
  /* 103b35c4 push esi */
  push32((uint32_t)(ESI));
  /* 103b35c5 push ebx */
  push32((uint32_t)(EBX));
  /* 103b35c6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103b35c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103b35cc lea eax, [0x103d07e8] */
  EAX = ((uint32_t)(0x103d07e8));
  /* 103b35d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b35d6 jne 0x103b3613 */
  if (!C.zf) goto L_103b3613;
  /* 103b35d8 mov al, 0xff */
  AL = (0xffu);
  /* 103b35da mov edi, edi */
  EDI = (EDI);
L_103b35dc:;
  /* 103b35dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b35de je 0x103b360e */
  if (C.zf) goto L_103b360e;
  /* 103b35e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103b35e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103b35e3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 103b35e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103b35e6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b35e8 je 0x103b35dc */
  if (C.zf) goto L_103b35dc;
  /* 103b35ea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103b35ec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b35ee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103b35f0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103b35f3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103b35f5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103b35f7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 103b35f9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103b35fb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b35fd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103b35ff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 103b3602 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103b3604 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103b3606 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b3608 je 0x103b35dc */
  if (C.zf) goto L_103b35dc;
  /* 103b360a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103b360c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_103b360e:;
  /* 103b360e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 103b3611 jmp 0x103b368b */
  goto L_103b368b;
L_103b3613:;
  /* 103b3613 lock inc dword ptr [0x103d097c] */
  x86_unimpl("lock inc @ 0x103b3613");
  /* 103b361a cmp dword ptr [0x103d096c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d096c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3621 jg 0x103b3627 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b3627;
  /* 103b3623 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3625 jmp 0x103b363c */
  goto L_103b363c;
L_103b3627:;
  /* 103b3627 lock dec dword ptr [0x103d097c] */
  x86_unimpl("lock dec @ 0x103b3627");
  /* 103b362e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b3630 call 0x103a88f0 */
  push32(0x103b3635u); f_103a88f0();
  /* 103b3635 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_103b363c:;
  /* 103b363c mov eax, 0xff */
  EAX = (0xffu);
  /* 103b3641 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103b3643 nop  */
  /* nop */
L_103b3644:;
  /* 103b3644 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b3646 je 0x103b366f */
  if (C.zf) goto L_103b366f;
  /* 103b3648 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103b364a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103b364b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 103b364d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103b364e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b3650 je 0x103b3644 */
  if (C.zf) goto L_103b3644;
  /* 103b3652 push eax */
  push32((uint32_t)(EAX));
  /* 103b3653 push ebx */
  push32((uint32_t)(EBX));
  /* 103b3654 call 0x103b4730 */
  push32(0x103b3659u); f_103b4730();
  /* 103b3659 mov ebx, eax */
  EBX = (EAX);
  /* 103b365b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b365e call 0x103b4730 */
  push32(0x103b3663u); f_103b4730();
  /* 103b3663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3666 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b3668 je 0x103b3644 */
  if (C.zf) goto L_103b3644;
  /* 103b366a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b366c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103b366f:;
  /* 103b366f mov ebx, eax */
  EBX = (EAX);
  /* 103b3671 pop eax */
  EAX = (pop32());
  /* 103b3672 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3674 jne 0x103b367f */
  if (!C.zf) goto L_103b367f;
  /* 103b3676 lock dec dword ptr [0x103d097c] */
  x86_unimpl("lock dec @ 0x103b3676");
  /* 103b367d jmp 0x103b3689 */
  goto L_103b3689;
L_103b367f:;
  /* 103b367f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b3681 call 0x103a8990 */
  push32(0x103b3686u); f_103a8990();
  /* 103b3686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b3689:;
  /* 103b3689 mov eax, ebx */
  EAX = (EBX);
L_103b368b:;
  /* 103b368b pop ebx */
  EBX = (pop32());
  /* 103b368c pop esi */
  ESI = (pop32());
  /* 103b368d pop edi */
  EDI = (pop32());
  /* 103b368e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103b368f ret  */
  ESPCHK(0x103b35c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x103b3690 (257 bytes, 103 insns) */
void f_103b3690(void) {
  FTRACE(0x103b3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3690 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3691 mov ebp, esp */
  EBP = (ESP);
  /* 103b3693 push edi */
  push32((uint32_t)(EDI));
  /* 103b3694 push esi */
  push32((uint32_t)(ESI));
  /* 103b3695 push ebx */
  push32((uint32_t)(EBX));
  /* 103b3696 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b3699 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b369b je 0x103b378a */
  if (C.zf) goto L_103b378a;
  /* 103b36a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 103b36a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 103b36a7 lea eax, [0x103d07e8] */
  EAX = ((uint32_t)(0x103d07e8));
  /* 103b36ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b36b1 jne 0x103b3701 */
  if (!C.zf) goto L_103b3701;
  /* 103b36b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 103b36b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 103b36b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 103b36b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103b36bc:;
  /* 103b36bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 103b36be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 103b36c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 103b36c2 je 0x103b36e5 */
  if (C.zf) goto L_103b36e5;
  /* 103b36c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 103b36c6 je 0x103b36e5 */
  if (C.zf) goto L_103b36e5;
  /* 103b36c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103b36c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103b36ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b36cc jb 0x103b36d4 */
  if (C.cf) goto L_103b36d4;
  /* 103b36ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b36d0 ja 0x103b36d4 */
  if ((!C.cf&&!C.zf)) goto L_103b36d4;
  /* 103b36d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_103b36d4:;
  /* 103b36d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b36d6 jb 0x103b36de */
  if (C.cf) goto L_103b36de;
  /* 103b36d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b36da ja 0x103b36de */
  if ((!C.cf&&!C.zf)) goto L_103b36de;
  /* 103b36dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_103b36de:;
  /* 103b36de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b36e0 jne 0x103b36ef */
  if (!C.zf) goto L_103b36ef;
  /* 103b36e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103b36e3 jne 0x103b36bc */
  if (!C.zf) goto L_103b36bc;
L_103b36e5:;
  /* 103b36e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b36e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b36e9 je 0x103b378a */
  if (C.zf) goto L_103b378a;
L_103b36ef:;
  /* 103b36ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 103b36f4 jb 0x103b378a */
  if (C.cf) goto L_103b378a;
  /* 103b36fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b36fc jmp 0x103b378a */
  goto L_103b378a;
L_103b3701:;
  /* 103b3701 lock inc dword ptr [0x103d097c] */
  x86_unimpl("lock inc @ 0x103b3701");
  /* 103b3708 cmp dword ptr [0x103d096c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d096c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b370f jg 0x103b3715 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b3715;
  /* 103b3711 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3713 jmp 0x103b372e */
  goto L_103b372e;
L_103b3715:;
  /* 103b3715 lock dec dword ptr [0x103d097c] */
  x86_unimpl("lock dec @ 0x103b3715");
  /* 103b371c mov ebx, ecx */
  EBX = (ECX);
  /* 103b371e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b3720 call 0x103a88f0 */
  push32(0x103b3725u); f_103a88f0();
  /* 103b3725 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 103b372c mov ecx, ebx */
  ECX = (EBX);
L_103b372e:;
  /* 103b372e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3730 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103b3732 mov edi, edi */
  EDI = (EDI);
L_103b3734:;
  /* 103b3734 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103b3736 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3738 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 103b373a je 0x103b375f */
  if (C.zf) goto L_103b375f;
  /* 103b373c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103b373e je 0x103b375f */
  if (C.zf) goto L_103b375f;
  /* 103b3740 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103b3741 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103b3742 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3743 push eax */
  push32((uint32_t)(EAX));
  /* 103b3744 push ebx */
  push32((uint32_t)(EBX));
  /* 103b3745 call 0x103b4730 */
  push32(0x103b374au); f_103b4730();
  /* 103b374a mov ebx, eax */
  EBX = (EAX);
  /* 103b374c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b374f call 0x103b4730 */
  push32(0x103b3754u); f_103b4730();
  /* 103b3754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3757 pop ecx */
  ECX = (pop32());
  /* 103b3758 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b375a jne 0x103b3765 */
  if (!C.zf) goto L_103b3765;
  /* 103b375c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103b375d jne 0x103b3734 */
  if (!C.zf) goto L_103b3734;
L_103b375f:;
  /* 103b375f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3761 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3763 je 0x103b376e */
  if (C.zf) goto L_103b376e;
L_103b3765:;
  /* 103b3765 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 103b376a jb 0x103b376e */
  if (C.cf) goto L_103b376e;
  /* 103b376c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_103b376e:;
  /* 103b376e pop eax */
  EAX = (pop32());
  /* 103b376f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3771 jne 0x103b377c */
  if (!C.zf) goto L_103b377c;
  /* 103b3773 lock dec dword ptr [0x103d097c] */
  x86_unimpl("lock dec @ 0x103b3773");
  /* 103b377a jmp 0x103b378a */
  goto L_103b378a;
L_103b377c:;
  /* 103b377c mov ebx, ecx */
  EBX = (ECX);
  /* 103b377e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b3780 call 0x103a8990 */
  push32(0x103b3785u); f_103a8990();
  /* 103b3785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3788 mov ecx, ebx */
  ECX = (EBX);
L_103b378a:;
  /* 103b378a mov eax, ecx */
  EAX = (ECX);
  /* 103b378c pop ebx */
  EBX = (pop32());
  /* 103b378d pop esi */
  ESI = (pop32());
  /* 103b378e pop edi */
  EDI = (pop32());
  /* 103b378f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103b3790 ret  */
  ESPCHK(0x103b3690u, _esp0);
  ESP += 4; return;
}

/* FUN_100137a0 @ 0x103b37a0 (255 bytes, 88 insns) */
void f_103b37a0(void) {
  FTRACE(0x103b37a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b37a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b37a1 mov ebp, esp */
  EBP = (ESP);
  /* 103b37a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_103b37a6:;
  /* 103b37a6 cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b37ad jle 0x103b37c6 */
  if ((C.zf||C.sf!=C.of)) goto L_103b37c6;
  /* 103b37af push 8 */
  push32((uint32_t)(0x8u));
  /* 103b37b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b37b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b37b6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b37b8 push ecx */
  push32((uint32_t)(ECX));
  /* 103b37b9 call 0x103aaf00 */
  push32(0x103b37beu); f_103aaf00();
  /* 103b37be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b37c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103b37c4 jmp 0x103b37df */
  goto L_103b37df;
L_103b37c6:;
  /* 103b37c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b37c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b37cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b37cd mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b37d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b37d5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b37d9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103b37dc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103b37df:;
  /* 103b37df cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b37e3 je 0x103b37f0 */
  if (C.zf) goto L_103b37f0;
  /* 103b37e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b37e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b37eb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b37ee jmp 0x103b37a6 */
  goto L_103b37a6;
L_103b37f0:;
  /* 103b37f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b37f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b37f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b37f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b37fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b37fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3800 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b3803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b3806 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b3809 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b380d je 0x103b3815 */
  if (C.zf) goto L_103b3815;
  /* 103b380f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3813 jne 0x103b3828 */
  if (!C.zf) goto L_103b3828;
L_103b3815:;
  /* 103b3815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3818 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b381a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b381c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b381f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3822 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3825 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103b3828:;
  /* 103b3828 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103b382f:;
  /* 103b382f cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3836 jle 0x103b384b */
  if ((C.zf||C.sf!=C.of)) goto L_103b384b;
  /* 103b3838 push 4 */
  push32((uint32_t)(0x4u));
  /* 103b383a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b383d push edx */
  push32((uint32_t)(EDX));
  /* 103b383e call 0x103aaf00 */
  push32(0x103b3843u); f_103aaf00();
  /* 103b3843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3846 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b3849 jmp 0x103b3860 */
  goto L_103b3860;
L_103b384b:;
  /* 103b384b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b384e mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b3854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3856 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b385a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103b385d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103b3860:;
  /* 103b3860 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3864 je 0x103b388b */
  if (C.zf) goto L_103b388b;
  /* 103b3866 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b3869 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b386c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b386f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 103b3873 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b3876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3879 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b387b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b387d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b3880 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3883 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3886 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103b3889 jmp 0x103b382f */
  goto L_103b382f;
L_103b388b:;
  /* 103b388b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b388f jne 0x103b3898 */
  if (!C.zf) goto L_103b3898;
  /* 103b3891 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b3894 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b3896 jmp 0x103b389b */
  goto L_103b389b;
L_103b3898:;
  /* 103b3898 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103b389b:;
  /* 103b389b mov esp, ebp */
  ESP = (EBP);
  /* 103b389d pop ebp */
  EBP = (pop32());
  /* 103b389e ret  */
  ESPCHK(0x103b37a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138a0 @ 0x103b38a0 (17 bytes, 8 insns) */
void f_103b38a0(void) {
  FTRACE(0x103b38a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b38a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b38a1 mov ebp, esp */
  EBP = (ESP);
  /* 103b38a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b38a6 push eax */
  push32((uint32_t)(EAX));
  /* 103b38a7 call 0x103b37a0 */
  push32(0x103b38acu); f_103b37a0();
  /* 103b38ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b38af pop ebp */
  EBP = (pop32());
  /* 103b38b0 ret  */
  ESPCHK(0x103b38a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138c0 @ 0x103b38c0 (297 bytes, 106 insns) */
void f_103b38c0(void) {
  FTRACE(0x103b38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b38c1 mov ebp, esp */
  EBP = (ESP);
  /* 103b38c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b38c6 push esi */
  push32((uint32_t)(ESI));
L_103b38c7:;
  /* 103b38c7 cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b38ce jle 0x103b38e7 */
  if ((C.zf||C.sf!=C.of)) goto L_103b38e7;
  /* 103b38d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 103b38d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b38d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b38d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b38d9 push ecx */
  push32((uint32_t)(ECX));
  /* 103b38da call 0x103aaf00 */
  push32(0x103b38dfu); f_103aaf00();
  /* 103b38df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b38e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b38e5 jmp 0x103b3900 */
  goto L_103b3900;
L_103b38e7:;
  /* 103b38e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b38ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b38ec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b38ee mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b38f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b38f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b38fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 103b38fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103b3900:;
  /* 103b3900 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3904 je 0x103b3911 */
  if (C.zf) goto L_103b3911;
  /* 103b3906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b390c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b390f jmp 0x103b38c7 */
  goto L_103b38c7;
L_103b3911:;
  /* 103b3911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3916 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b3918 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b391b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b391e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3921 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b3924 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b3927 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103b392a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b392e je 0x103b3936 */
  if (C.zf) goto L_103b3936;
  /* 103b3930 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3934 jne 0x103b3949 */
  if (!C.zf) goto L_103b3949;
L_103b3936:;
  /* 103b3936 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3939 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b393b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b393d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b3940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3943 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3946 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_103b3949:;
  /* 103b3949 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103b3950 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103b3957:;
  /* 103b3957 cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b395e jle 0x103b3973 */
  if ((C.zf||C.sf!=C.of)) goto L_103b3973;
  /* 103b3960 push 4 */
  push32((uint32_t)(0x4u));
  /* 103b3962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b3965 push edx */
  push32((uint32_t)(EDX));
  /* 103b3966 call 0x103aaf00 */
  push32(0x103b396bu); f_103aaf00();
  /* 103b396b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b396e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103b3971 jmp 0x103b3988 */
  goto L_103b3988;
L_103b3973:;
  /* 103b3973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b3976 mov ecx, dword ptr [0x103cec98] */
  ECX = (r32((uint32_t)(0x103cec98)));
  /* 103b397c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b397e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 103b3982 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103b3985 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_103b3988:;
  /* 103b3988 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b398c je 0x103b39c9 */
  if (C.zf) goto L_103b39c9;
  /* 103b398e push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3990 push 0xa */
  push32((uint32_t)(0xau));
  /* 103b3992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b3995 push eax */
  push32((uint32_t)(EAX));
  /* 103b3996 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3999 push ecx */
  push32((uint32_t)(ECX));
  /* 103b399a call 0x103b4860 */
  push32(0x103b399fu); f_103b4860();
  /* 103b399f mov ecx, eax */
  ECX = (EAX);
  /* 103b39a1 mov esi, edx */
  ESI = (EDX);
  /* 103b39a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b39a6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b39a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b39aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b39ac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103b39ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b39b1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 103b39b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b39b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b39b9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b39bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b39be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b39c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b39c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 103b39c7 jmp 0x103b3957 */
  goto L_103b3957;
L_103b39c9:;
  /* 103b39c9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b39cd jne 0x103b39de */
  if (!C.zf) goto L_103b39de;
  /* 103b39cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b39d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b39d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b39d7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b39da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b39dc jmp 0x103b39e4 */
  goto L_103b39e4;
L_103b39de:;
  /* 103b39de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b39e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_103b39e4:;
  /* 103b39e4 pop esi */
  ESI = (pop32());
  /* 103b39e5 mov esp, ebp */
  ESP = (EBP);
  /* 103b39e7 pop ebp */
  EBP = (pop32());
  /* 103b39e8 ret  */
  ESPCHK(0x103b38c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139f0 @ 0x103b39f0 (61 bytes, 18 insns) */
void f_103b39f0(void) {
  FTRACE(0x103b39f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b39f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b39f1 mov ebp, esp */
  EBP = (ESP);
  /* 103b39f3 cmp dword ptr [0x103d0948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b39fa jne 0x103b3a2b */
  if (!C.zf) goto L_103b3a2b;
  /* 103b39fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b39fe call 0x103a88f0 */
  push32(0x103b3a03u); f_103a88f0();
  /* 103b3a03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3a06 cmp dword ptr [0x103d0948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3a0d jne 0x103b3a21 */
  if (!C.zf) goto L_103b3a21;
  /* 103b3a0f call 0x103b3a50 */
  push32(0x103b3a14u); f_103b3a50();
  /* 103b3a14 mov eax, dword ptr [0x103d0948] */
  EAX = (r32((uint32_t)(0x103d0948)));
  /* 103b3a19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3a1c mov dword ptr [0x103d0948], eax */
  w32((uint32_t)(0x103d0948), (EAX));
L_103b3a21:;
  /* 103b3a21 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b3a23 call 0x103a8990 */
  push32(0x103b3a28u); f_103a8990();
  /* 103b3a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b3a2b:;
  /* 103b3a2b pop ebp */
  EBP = (pop32());
  /* 103b3a2c ret  */
  ESPCHK(0x103b39f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a30 @ 0x103b3a30 (30 bytes, 11 insns) */
void f_103b3a30(void) {
  FTRACE(0x103b3a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3a30 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3a31 mov ebp, esp */
  EBP = (ESP);
  /* 103b3a33 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b3a35 call 0x103a88f0 */
  push32(0x103b3a3au); f_103a88f0();
  /* 103b3a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3a3d call 0x103b3a50 */
  push32(0x103b3a42u); f_103b3a50();
  /* 103b3a42 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b3a44 call 0x103a8990 */
  push32(0x103b3a49u); f_103a8990();
  /* 103b3a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3a4c pop ebp */
  EBP = (pop32());
  /* 103b3a4d ret  */
  ESPCHK(0x103b3a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a50 @ 0x103b3a50 (939 bytes, 266 insns) */
void f_103b3a50(void) {
  FTRACE(0x103b3a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3a50 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3a51 mov ebp, esp */
  EBP = (ESP);
  /* 103b3a53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b3a56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b3a5d push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b3a5f call 0x103a88f0 */
  push32(0x103b3a64u); f_103a88f0();
  /* 103b3a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3a67 mov dword ptr [0x103d0890], 0 */
  w32((uint32_t)(0x103d0890), (0x0u));
  /* 103b3a71 mov dword ptr [0x103cfe38], 0xffffffff */
  w32((uint32_t)(0x103cfe38), (0xffffffffu));
  /* 103b3a7b mov eax, dword ptr [0x103cfe38] */
  EAX = (r32((uint32_t)(0x103cfe38)));
  /* 103b3a80 mov dword ptr [0x103cfe28], eax */
  w32((uint32_t)(0x103cfe28), (EAX));
  /* 103b3a85 push 0x103ccb60 */
  push32((uint32_t)(0x103ccb60u));
  /* 103b3a8a call 0x103b48d0 */
  push32(0x103b3a8fu); f_103b48d0();
  /* 103b3a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3a92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b3a95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3a99 jne 0x103b3bd3 */
  if (!C.zf) goto L_103b3bd3;
  /* 103b3a9f push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b3aa1 call 0x103a8990 */
  push32(0x103b3aa6u); f_103a8990();
  /* 103b3aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3aa9 push 0x103d0898 */
  push32((uint32_t)(0x103d0898u));
  /* 103b3aae call dword ptr [0x103d32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32b0))), 0x103b3ab4u);
  /* 103b3ab4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3ab7 je 0x103b3bce */
  if (C.zf) goto L_103b3bce;
  /* 103b3abd mov dword ptr [0x103d0890], 1 */
  w32((uint32_t)(0x103d0890), (0x1u));
  /* 103b3ac7 mov ecx, dword ptr [0x103d0898] */
  ECX = (r32((uint32_t)(0x103d0898)));
  /* 103b3acd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b3ad0 mov dword ptr [0x103cfd90], ecx */
  w32((uint32_t)(0x103cfd90), (ECX));
  /* 103b3ad6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3ad8 mov dx, word ptr [0x103d08de] */
  DX = (r16((uint32_t)(0x103d08de)));
  /* 103b3adf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b3ae1 je 0x103b3af9 */
  if (C.zf) goto L_103b3af9;
  /* 103b3ae3 mov eax, dword ptr [0x103d08ec] */
  EAX = (r32((uint32_t)(0x103d08ec)));
  /* 103b3ae8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b3aeb mov ecx, dword ptr [0x103cfd90] */
  ECX = (r32((uint32_t)(0x103cfd90)));
  /* 103b3af1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3af3 mov dword ptr [0x103cfd90], ecx */
  w32((uint32_t)(0x103cfd90), (ECX));
L_103b3af9:;
  /* 103b3af9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3afb mov dx, word ptr [0x103d0932] */
  DX = (r16((uint32_t)(0x103d0932)));
  /* 103b3b02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b3b04 je 0x103b3b2e */
  if (C.zf) goto L_103b3b2e;
  /* 103b3b06 cmp dword ptr [0x103d0940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3b0d je 0x103b3b2e */
  if (C.zf) goto L_103b3b2e;
  /* 103b3b0f mov dword ptr [0x103cfd94], 1 */
  w32((uint32_t)(0x103cfd94), (0x1u));
  /* 103b3b19 mov eax, dword ptr [0x103d0940] */
  EAX = (r32((uint32_t)(0x103d0940)));
  /* 103b3b1e sub eax, dword ptr [0x103d08ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d08ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b3b24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b3b27 mov dword ptr [0x103cfd98], eax */
  w32((uint32_t)(0x103cfd98), (EAX));
  /* 103b3b2c jmp 0x103b3b42 */
  goto L_103b3b42;
L_103b3b2e:;
  /* 103b3b2e mov dword ptr [0x103cfd94], 0 */
  w32((uint32_t)(0x103cfd94), (0x0u));
  /* 103b3b38 mov dword ptr [0x103cfd98], 0 */
  w32((uint32_t)(0x103cfd98), (0x0u));
L_103b3b42:;
  /* 103b3b42 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 103b3b45 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3b48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103b3b4a mov edx, dword ptr [0x103cfe1c] */
  EDX = (r32((uint32_t)(0x103cfe1c)));
  /* 103b3b50 push edx */
  push32((uint32_t)(EDX));
  /* 103b3b51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b3b53 push 0x103d089c */
  push32((uint32_t)(0x103d089cu));
  /* 103b3b58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103b3b5d mov eax, dword ptr [0x103d0800] */
  EAX = (r32((uint32_t)(0x103d0800)));
  /* 103b3b62 push eax */
  push32((uint32_t)(EAX));
  /* 103b3b63 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b3b69u);
  /* 103b3b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b3b6b je 0x103b3b7f */
  if (C.zf) goto L_103b3b7f;
  /* 103b3b6d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3b71 jne 0x103b3b7f */
  if (!C.zf) goto L_103b3b7f;
  /* 103b3b73 mov ecx, dword ptr [0x103cfe1c] */
  ECX = (r32((uint32_t)(0x103cfe1c)));
  /* 103b3b79 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 103b3b7d jmp 0x103b3b88 */
  goto L_103b3b88;
L_103b3b7f:;
  /* 103b3b7f mov edx, dword ptr [0x103cfe1c] */
  EDX = (r32((uint32_t)(0x103cfe1c)));
  /* 103b3b85 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_103b3b88:;
  /* 103b3b88 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103b3b8b push eax */
  push32((uint32_t)(EAX));
  /* 103b3b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3b8e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103b3b90 mov ecx, dword ptr [0x103cfe20] */
  ECX = (r32((uint32_t)(0x103cfe20)));
  /* 103b3b96 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3b97 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b3b99 push 0x103d08f0 */
  push32((uint32_t)(0x103d08f0u));
  /* 103b3b9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103b3ba3 mov edx, dword ptr [0x103d0800] */
  EDX = (r32((uint32_t)(0x103d0800)));
  /* 103b3ba9 push edx */
  push32((uint32_t)(EDX));
  /* 103b3baa call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b3bb0u);
  /* 103b3bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b3bb2 je 0x103b3bc5 */
  if (C.zf) goto L_103b3bc5;
  /* 103b3bb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3bb8 jne 0x103b3bc5 */
  if (!C.zf) goto L_103b3bc5;
  /* 103b3bba mov eax, dword ptr [0x103cfe20] */
  EAX = (r32((uint32_t)(0x103cfe20)));
  /* 103b3bbf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 103b3bc3 jmp 0x103b3bce */
  goto L_103b3bce;
L_103b3bc5:;
  /* 103b3bc5 mov ecx, dword ptr [0x103cfe20] */
  ECX = (r32((uint32_t)(0x103cfe20)));
  /* 103b3bcb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_103b3bce:;
  /* 103b3bce jmp 0x103b3df7 */
  goto L_103b3df7;
L_103b3bd3:;
  /* 103b3bd3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3bd6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b3bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b3bdb je 0x103b3bfd */
  if (C.zf) goto L_103b3bfd;
  /* 103b3bdd cmp dword ptr [0x103d0944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3be4 je 0x103b3c0c */
  if (C.zf) goto L_103b3c0c;
  /* 103b3be6 mov ecx, dword ptr [0x103d0944] */
  ECX = (r32((uint32_t)(0x103d0944)));
  /* 103b3bec push ecx */
  push32((uint32_t)(ECX));
  /* 103b3bed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3bf0 push edx */
  push32((uint32_t)(EDX));
  /* 103b3bf1 call 0x103b0b80 */
  push32(0x103b3bf6u); f_103b0b80();
  /* 103b3bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b3bfb jne 0x103b3c0c */
  if (!C.zf) goto L_103b3c0c;
L_103b3bfd:;
  /* 103b3bfd push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b3bff call 0x103a8990 */
  push32(0x103b3c04u); f_103a8990();
  /* 103b3c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c07 jmp 0x103b3df7 */
  goto L_103b3df7;
L_103b3c0c:;
  /* 103b3c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 103b3c0e mov eax, dword ptr [0x103d0944] */
  EAX = (r32((uint32_t)(0x103d0944)));
  /* 103b3c13 push eax */
  push32((uint32_t)(EAX));
  /* 103b3c14 call 0x103a5980 */
  push32(0x103b3c19u); f_103a5980();
  /* 103b3c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c1c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 103b3c21 push 0x103ccb58 */
  push32((uint32_t)(0x103ccb58u));
  /* 103b3c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b3c28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3c2b push ecx */
  push32((uint32_t)(ECX));
  /* 103b3c2c call 0x103a7d20 */
  push32(0x103b3c31u); f_103a7d20();
  /* 103b3c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c37 push eax */
  push32((uint32_t)(EAX));
  /* 103b3c38 call 0x103a4ef0 */
  push32(0x103b3c3du); f_103a4ef0();
  /* 103b3c3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c40 mov dword ptr [0x103d0944], eax */
  w32((uint32_t)(0x103d0944), (EAX));
  /* 103b3c45 cmp dword ptr [0x103d0944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3c4c jne 0x103b3c5d */
  if (!C.zf) goto L_103b3c5d;
  /* 103b3c4e push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b3c50 call 0x103a8990 */
  push32(0x103b3c55u); f_103a8990();
  /* 103b3c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c58 jmp 0x103b3df7 */
  goto L_103b3df7;
L_103b3c5d:;
  /* 103b3c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3c60 push edx */
  push32((uint32_t)(EDX));
  /* 103b3c61 mov eax, dword ptr [0x103d0944] */
  EAX = (r32((uint32_t)(0x103d0944)));
  /* 103b3c66 push eax */
  push32((uint32_t)(EAX));
  /* 103b3c67 call 0x103a7ea0 */
  push32(0x103b3c6cu); f_103a7ea0();
  /* 103b3c6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b3c71 call 0x103a8990 */
  push32(0x103b3c76u); f_103a8990();
  /* 103b3c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c79 push 3 */
  push32((uint32_t)(0x3u));
  /* 103b3c7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3c7e push ecx */
  push32((uint32_t)(ECX));
  /* 103b3c7f mov edx, dword ptr [0x103cfe1c] */
  EDX = (r32((uint32_t)(0x103cfe1c)));
  /* 103b3c85 push edx */
  push32((uint32_t)(EDX));
  /* 103b3c86 call 0x103a8710 */
  push32(0x103b3c8bu); f_103a8710();
  /* 103b3c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c8e mov eax, dword ptr [0x103cfe1c] */
  EAX = (r32((uint32_t)(0x103cfe1c)));
  /* 103b3c93 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 103b3c97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3c9a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3c9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b3ca0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3ca3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b3ca6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3ca9 jne 0x103b3cbd */
  if (!C.zf) goto L_103b3cbd;
  /* 103b3cab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b3cae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3cb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b3cb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3cb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3cba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103b3cbd:;
  /* 103b3cbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3cc0 push eax */
  push32((uint32_t)(EAX));
  /* 103b3cc1 call 0x103b37a0 */
  push32(0x103b3cc6u); f_103b37a0();
  /* 103b3cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3cc9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b3ccf mov dword ptr [0x103cfd90], eax */
  w32((uint32_t)(0x103cfd90), (EAX));
L_103b3cd4:;
  /* 103b3cd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3cd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b3cda cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3cdd je 0x103b3cf5 */
  if (C.zf) goto L_103b3cf5;
  /* 103b3cdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3ce2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b3ce5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3ce8 jl 0x103b3d00 */
  if ((C.sf!=C.of)) goto L_103b3d00;
  /* 103b3cea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3ced movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b3cf0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3cf3 jg 0x103b3d00 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b3d00;
L_103b3cf5:;
  /* 103b3cf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3cf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3cfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b3cfe jmp 0x103b3cd4 */
  goto L_103b3cd4;
L_103b3d00:;
  /* 103b3d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b3d06 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3d09 jne 0x103b3da5 */
  if (!C.zf) goto L_103b3da5;
  /* 103b3d0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b3d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d1b push edx */
  push32((uint32_t)(EDX));
  /* 103b3d1c call 0x103b37a0 */
  push32(0x103b3d21u); f_103b37a0();
  /* 103b3d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b3d27 mov ecx, dword ptr [0x103cfd90] */
  ECX = (r32((uint32_t)(0x103cfd90)));
  /* 103b3d2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d2f mov dword ptr [0x103cfd90], ecx */
  w32((uint32_t)(0x103cfd90), (ECX));
L_103b3d35:;
  /* 103b3d35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d38 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b3d3b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3d3e jl 0x103b3d56 */
  if ((C.sf!=C.of)) goto L_103b3d56;
  /* 103b3d40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b3d46 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3d49 jg 0x103b3d56 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b3d56;
  /* 103b3d4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b3d54 jmp 0x103b3d35 */
  goto L_103b3d35;
L_103b3d56:;
  /* 103b3d56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d59 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b3d5c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3d5f jne 0x103b3da5 */
  if (!C.zf) goto L_103b3da5;
  /* 103b3d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b3d6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d6d push ecx */
  push32((uint32_t)(ECX));
  /* 103b3d6e call 0x103b37a0 */
  push32(0x103b3d73u); f_103b37a0();
  /* 103b3d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d76 mov edx, dword ptr [0x103cfd90] */
  EDX = (r32((uint32_t)(0x103cfd90)));
  /* 103b3d7c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3d7e mov dword ptr [0x103cfd90], edx */
  w32((uint32_t)(0x103cfd90), (EDX));
L_103b3d84:;
  /* 103b3d84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b3d8a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3d8d jl 0x103b3da5 */
  if ((C.sf!=C.of)) goto L_103b3da5;
  /* 103b3d8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103b3d95 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3d98 jg 0x103b3da5 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b3da5;
  /* 103b3d9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3d9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3da0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b3da3 jmp 0x103b3d84 */
  goto L_103b3d84;
L_103b3da5:;
  /* 103b3da5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3da9 je 0x103b3db9 */
  if (C.zf) goto L_103b3db9;
  /* 103b3dab mov edx, dword ptr [0x103cfd90] */
  EDX = (r32((uint32_t)(0x103cfd90)));
  /* 103b3db1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b3db3 mov dword ptr [0x103cfd90], edx */
  w32((uint32_t)(0x103cfd90), (EDX));
L_103b3db9:;
  /* 103b3db9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3dbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103b3dbf mov dword ptr [0x103cfd94], ecx */
  w32((uint32_t)(0x103cfd94), (ECX));
  /* 103b3dc5 cmp dword ptr [0x103cfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103cfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3dcc je 0x103b3dee */
  if (C.zf) goto L_103b3dee;
  /* 103b3dce push 3 */
  push32((uint32_t)(0x3u));
  /* 103b3dd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b3dd3 push edx */
  push32((uint32_t)(EDX));
  /* 103b3dd4 mov eax, dword ptr [0x103cfe20] */
  EAX = (r32((uint32_t)(0x103cfe20)));
  /* 103b3dd9 push eax */
  push32((uint32_t)(EAX));
  /* 103b3dda call 0x103a8710 */
  push32(0x103b3ddfu); f_103a8710();
  /* 103b3ddf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3de2 mov ecx, dword ptr [0x103cfe20] */
  ECX = (r32((uint32_t)(0x103cfe20)));
  /* 103b3de8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 103b3dec jmp 0x103b3df7 */
  goto L_103b3df7;
L_103b3dee:;
  /* 103b3dee mov edx, dword ptr [0x103cfe20] */
  EDX = (r32((uint32_t)(0x103cfe20)));
  /* 103b3df4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_103b3df7:;
  /* 103b3df7 mov esp, ebp */
  ESP = (EBP);
  /* 103b3df9 pop ebp */
  EBP = (pop32());
  /* 103b3dfa ret  */
  ESPCHK(0x103b3a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e00 @ 0x103b3e00 (46 bytes, 18 insns) */
void f_103b3e00(void) {
  FTRACE(0x103b3e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3e00 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3e01 mov ebp, esp */
  EBP = (ESP);
  /* 103b3e03 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3e04 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b3e06 call 0x103a88f0 */
  push32(0x103b3e0bu); f_103a88f0();
  /* 103b3e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3e0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3e11 push eax */
  push32((uint32_t)(EAX));
  /* 103b3e12 call 0x103b3e30 */
  push32(0x103b3e17u); f_103b3e30();
  /* 103b3e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3e1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b3e1d push 0xb */
  push32((uint32_t)(0xbu));
  /* 103b3e1f call 0x103a8990 */
  push32(0x103b3e24u); f_103a8990();
  /* 103b3e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b3e2a mov esp, ebp */
  ESP = (EBP);
  /* 103b3e2c pop ebp */
  EBP = (pop32());
  /* 103b3e2d ret  */
  ESPCHK(0x103b3e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e30 @ 0x103b3e30 (762 bytes, 246 insns) */
void f_103b3e30(void) {
  FTRACE(0x103b3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b3e30 push ebp */
  push32((uint32_t)(EBP));
  /* 103b3e31 mov ebp, esp */
  EBP = (ESP);
  /* 103b3e33 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3e34 cmp dword ptr [0x103cfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103cfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3e3b jne 0x103b3e44 */
  if (!C.zf) goto L_103b3e44;
  /* 103b3e3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3e3f jmp 0x103b4126 */
  goto L_103b4126;
L_103b3e44:;
  /* 103b3e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3e47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103b3e4a cmp ecx, dword ptr [0x103cfe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cfe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3e50 jne 0x103b3e64 */
  if (!C.zf) goto L_103b3e64;
  /* 103b3e52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3e55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103b3e58 cmp eax, dword ptr [0x103cfe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cfe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3e5e je 0x103b402b */
  if (C.zf) goto L_103b402b;
L_103b3e64:;
  /* 103b3e64 cmp dword ptr [0x103d0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b3e6b je 0x103b3fe5 */
  if (C.zf) goto L_103b3fe5;
  /* 103b3e71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3e73 mov cx, word ptr [0x103d0930] */
  CX = (r16((uint32_t)(0x103d0930)));
  /* 103b3e7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b3e7c jne 0x103b3ed9 */
  if (!C.zf) goto L_103b3ed9;
  /* 103b3e7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3e80 mov dx, word ptr [0x103d093e] */
  DX = (r16((uint32_t)(0x103d093e)));
  /* 103b3e87 push edx */
  push32((uint32_t)(EDX));
  /* 103b3e88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3e8a mov ax, word ptr [0x103d093c] */
  AX = (r16((uint32_t)(0x103d093c)));
  /* 103b3e90 push eax */
  push32((uint32_t)(EAX));
  /* 103b3e91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3e93 mov cx, word ptr [0x103d093a] */
  CX = (r16((uint32_t)(0x103d093a)));
  /* 103b3e9a push ecx */
  push32((uint32_t)(ECX));
  /* 103b3e9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3e9d mov dx, word ptr [0x103d0938] */
  DX = (r16((uint32_t)(0x103d0938)));
  /* 103b3ea4 push edx */
  push32((uint32_t)(EDX));
  /* 103b3ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3ea9 mov ax, word ptr [0x103d0934] */
  AX = (r16((uint32_t)(0x103d0934)));
  /* 103b3eaf push eax */
  push32((uint32_t)(EAX));
  /* 103b3eb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3eb2 mov cx, word ptr [0x103d0936] */
  CX = (r16((uint32_t)(0x103d0936)));
  /* 103b3eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3eba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3ebc mov dx, word ptr [0x103d0932] */
  DX = (r16((uint32_t)(0x103d0932)));
  /* 103b3ec3 push edx */
  push32((uint32_t)(EDX));
  /* 103b3ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3ec7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103b3eca push ecx */
  push32((uint32_t)(ECX));
  /* 103b3ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3ecd push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3ecf call 0x103b4130 */
  push32(0x103b3ed4u); f_103b4130();
  /* 103b3ed4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3ed7 jmp 0x103b3f2a */
  goto L_103b3f2a;
L_103b3ed9:;
  /* 103b3ed9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3edb mov dx, word ptr [0x103d093e] */
  DX = (r16((uint32_t)(0x103d093e)));
  /* 103b3ee2 push edx */
  push32((uint32_t)(EDX));
  /* 103b3ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3ee5 mov ax, word ptr [0x103d093c] */
  AX = (r16((uint32_t)(0x103d093c)));
  /* 103b3eeb push eax */
  push32((uint32_t)(EAX));
  /* 103b3eec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3eee mov cx, word ptr [0x103d093a] */
  CX = (r16((uint32_t)(0x103d093a)));
  /* 103b3ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3ef6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3ef8 mov dx, word ptr [0x103d0938] */
  DX = (r16((uint32_t)(0x103d0938)));
  /* 103b3eff push edx */
  push32((uint32_t)(EDX));
  /* 103b3f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3f02 mov ax, word ptr [0x103d0936] */
  AX = (r16((uint32_t)(0x103d0936)));
  /* 103b3f08 push eax */
  push32((uint32_t)(EAX));
  /* 103b3f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3f0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3f0f mov cx, word ptr [0x103d0932] */
  CX = (r16((uint32_t)(0x103d0932)));
  /* 103b3f16 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3f1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103b3f1d push eax */
  push32((uint32_t)(EAX));
  /* 103b3f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3f22 call 0x103b4130 */
  push32(0x103b3f27u); f_103b4130();
  /* 103b3f27 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b3f2a:;
  /* 103b3f2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3f2c mov cx, word ptr [0x103d08dc] */
  CX = (r16((uint32_t)(0x103d08dc)));
  /* 103b3f33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b3f35 jne 0x103b3f92 */
  if (!C.zf) goto L_103b3f92;
  /* 103b3f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3f39 mov dx, word ptr [0x103d08ea] */
  DX = (r16((uint32_t)(0x103d08ea)));
  /* 103b3f40 push edx */
  push32((uint32_t)(EDX));
  /* 103b3f41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3f43 mov ax, word ptr [0x103d08e8] */
  AX = (r16((uint32_t)(0x103d08e8)));
  /* 103b3f49 push eax */
  push32((uint32_t)(EAX));
  /* 103b3f4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3f4c mov cx, word ptr [0x103d08e6] */
  CX = (r16((uint32_t)(0x103d08e6)));
  /* 103b3f53 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3f54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3f56 mov dx, word ptr [0x103d08e4] */
  DX = (r16((uint32_t)(0x103d08e4)));
  /* 103b3f5d push edx */
  push32((uint32_t)(EDX));
  /* 103b3f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3f62 mov ax, word ptr [0x103d08e0] */
  AX = (r16((uint32_t)(0x103d08e0)));
  /* 103b3f68 push eax */
  push32((uint32_t)(EAX));
  /* 103b3f69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3f6b mov cx, word ptr [0x103d08e2] */
  CX = (r16((uint32_t)(0x103d08e2)));
  /* 103b3f72 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3f73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3f75 mov dx, word ptr [0x103d08de] */
  DX = (r16((uint32_t)(0x103d08de)));
  /* 103b3f7c push edx */
  push32((uint32_t)(EDX));
  /* 103b3f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3f80 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103b3f83 push ecx */
  push32((uint32_t)(ECX));
  /* 103b3f84 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3f88 call 0x103b4130 */
  push32(0x103b3f8du); f_103b4130();
  /* 103b3f8d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b3f90 jmp 0x103b3fe3 */
  goto L_103b3fe3;
L_103b3f92:;
  /* 103b3f92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3f94 mov dx, word ptr [0x103d08ea] */
  DX = (r16((uint32_t)(0x103d08ea)));
  /* 103b3f9b push edx */
  push32((uint32_t)(EDX));
  /* 103b3f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3f9e mov ax, word ptr [0x103d08e8] */
  AX = (r16((uint32_t)(0x103d08e8)));
  /* 103b3fa4 push eax */
  push32((uint32_t)(EAX));
  /* 103b3fa5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3fa7 mov cx, word ptr [0x103d08e6] */
  CX = (r16((uint32_t)(0x103d08e6)));
  /* 103b3fae push ecx */
  push32((uint32_t)(ECX));
  /* 103b3faf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b3fb1 mov dx, word ptr [0x103d08e4] */
  DX = (r16((uint32_t)(0x103d08e4)));
  /* 103b3fb8 push edx */
  push32((uint32_t)(EDX));
  /* 103b3fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b3fbb mov ax, word ptr [0x103d08e2] */
  AX = (r16((uint32_t)(0x103d08e2)));
  /* 103b3fc1 push eax */
  push32((uint32_t)(EAX));
  /* 103b3fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b3fc8 mov cx, word ptr [0x103d08de] */
  CX = (r16((uint32_t)(0x103d08de)));
  /* 103b3fcf push ecx */
  push32((uint32_t)(ECX));
  /* 103b3fd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3fd3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103b3fd6 push eax */
  push32((uint32_t)(EAX));
  /* 103b3fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fdb call 0x103b4130 */
  push32(0x103b3fe0u); f_103b4130();
  /* 103b3fe0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b3fe3:;
  /* 103b3fe3 jmp 0x103b402b */
  goto L_103b402b;
L_103b3fe5:;
  /* 103b3fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3feb push 2 */
  push32((uint32_t)(0x2u));
  /* 103b3fed push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3fef push 0 */
  push32((uint32_t)(0x0u));
  /* 103b3ff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3ff3 push 4 */
  push32((uint32_t)(0x4u));
  /* 103b3ff5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b3ff8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103b3ffb push edx */
  push32((uint32_t)(EDX));
  /* 103b3ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 103b3ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4000 call 0x103b4130 */
  push32(0x103b4005u); f_103b4130();
  /* 103b4005 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4008 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b400a push 0 */
  push32((uint32_t)(0x0u));
  /* 103b400c push 0 */
  push32((uint32_t)(0x0u));
  /* 103b400e push 2 */
  push32((uint32_t)(0x2u));
  /* 103b4010 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4012 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4014 push 5 */
  push32((uint32_t)(0x5u));
  /* 103b4016 push 0xa */
  push32((uint32_t)(0xau));
  /* 103b4018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b401b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103b401e push ecx */
  push32((uint32_t)(ECX));
  /* 103b401f push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4021 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4023 call 0x103b4130 */
  push32(0x103b4028u); f_103b4130();
  /* 103b4028 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b402b:;
  /* 103b402b mov edx, dword ptr [0x103cfe2c] */
  EDX = (r32((uint32_t)(0x103cfe2c)));
  /* 103b4031 cmp edx, dword ptr [0x103cfe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4037 jge 0x103b4084 */
  if ((C.sf==C.of)) goto L_103b4084;
  /* 103b4039 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b403c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103b403f cmp ecx, dword ptr [0x103cfe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4045 jl 0x103b4055 */
  if ((C.sf!=C.of)) goto L_103b4055;
  /* 103b4047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b404a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103b404d cmp eax, dword ptr [0x103cfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4053 jle 0x103b405c */
  if ((C.zf||C.sf!=C.of)) goto L_103b405c;
L_103b4055:;
  /* 103b4055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4057 jmp 0x103b4126 */
  goto L_103b4126;
L_103b405c:;
  /* 103b405c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b405f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103b4062 cmp edx, dword ptr [0x103cfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4068 jle 0x103b4082 */
  if ((C.zf||C.sf!=C.of)) goto L_103b4082;
  /* 103b406a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b406d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103b4070 cmp ecx, dword ptr [0x103cfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4076 jge 0x103b4082 */
  if ((C.sf==C.of)) goto L_103b4082;
  /* 103b4078 mov eax, 1 */
  EAX = (0x1u);
  /* 103b407d jmp 0x103b4126 */
  goto L_103b4126;
L_103b4082:;
  /* 103b4082 jmp 0x103b40c7 */
  goto L_103b40c7;
L_103b4084:;
  /* 103b4084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4087 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103b408a cmp eax, dword ptr [0x103cfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4090 jl 0x103b40a0 */
  if ((C.sf!=C.of)) goto L_103b40a0;
  /* 103b4092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4095 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103b4098 cmp edx, dword ptr [0x103cfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b409e jle 0x103b40a7 */
  if ((C.zf||C.sf!=C.of)) goto L_103b40a7;
L_103b40a0:;
  /* 103b40a0 mov eax, 1 */
  EAX = (0x1u);
  /* 103b40a5 jmp 0x103b4126 */
  goto L_103b4126;
L_103b40a7:;
  /* 103b40a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b40aa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 103b40ad cmp ecx, dword ptr [0x103cfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b40b3 jle 0x103b40c7 */
  if ((C.zf||C.sf!=C.of)) goto L_103b40c7;
  /* 103b40b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b40b8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 103b40bb cmp eax, dword ptr [0x103cfe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b40c1 jge 0x103b40c7 */
  if ((C.sf==C.of)) goto L_103b40c7;
  /* 103b40c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b40c5 jmp 0x103b4126 */
  goto L_103b4126;
L_103b40c7:;
  /* 103b40c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b40ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103b40cd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b40d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b40d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b40d5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b40d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b40da mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103b40dd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b40e3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b40e5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b40eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b40ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b40f1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103b40f4 cmp edx, dword ptr [0x103cfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b40fa jne 0x103b4112 */
  if (!C.zf) goto L_103b4112;
  /* 103b40fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b40ff cmp eax, dword ptr [0x103cfe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cfe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4105 jl 0x103b410e */
  if ((C.sf!=C.of)) goto L_103b410e;
  /* 103b4107 mov eax, 1 */
  EAX = (0x1u);
  /* 103b410c jmp 0x103b4126 */
  goto L_103b4126;
L_103b410e:;
  /* 103b410e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4110 jmp 0x103b4126 */
  goto L_103b4126;
L_103b4112:;
  /* 103b4112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4115 cmp ecx, dword ptr [0x103cfe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cfe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b411b jge 0x103b4124 */
  if ((C.sf==C.of)) goto L_103b4124;
  /* 103b411d mov eax, 1 */
  EAX = (0x1u);
  /* 103b4122 jmp 0x103b4126 */
  goto L_103b4126;
L_103b4124:;
  /* 103b4124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b4126:;
  /* 103b4126 mov esp, ebp */
  ESP = (EBP);
  /* 103b4128 pop ebp */
  EBP = (pop32());
  /* 103b4129 ret  */
  ESPCHK(0x103b3e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014130 @ 0x103b4130 (504 bytes, 145 insns) */
void f_103b4130(void) {
  FTRACE(0x103b4130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4130 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4131 mov ebp, esp */
  EBP = (ESP);
  /* 103b4133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4136 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b413a jne 0x103b420c */
  if (!C.zf) goto L_103b420c;
  /* 103b4140 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4143 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103b4146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4148 jne 0x103b4159 */
  if (!C.zf) goto L_103b4159;
  /* 103b414a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b414d mov edx, dword ptr [ecx*4 + 0x103cfe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cfe4c)));
  /* 103b4154 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103b4157 jmp 0x103b4166 */
  goto L_103b4166;
L_103b4159:;
  /* 103b4159 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b415c mov ecx, dword ptr [eax*4 + 0x103cfe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103cfe80)));
  /* 103b4163 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103b4166:;
  /* 103b4166 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b4169 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b416c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b416f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4172 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4175 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b417b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b417e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4180 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4183 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4186 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 103b4189 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 103b418d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 103b418e mov ecx, 7 */
  ECX = (0x7u);
  /* 103b4193 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103b4195 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b4198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b419b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b419e jge 0x103b41b9 */
  if ((C.sf==C.of)) goto L_103b41b9;
  /* 103b41a0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b41a3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b41a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b41a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b41ac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b41af add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b41b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b41b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b41b7 jmp 0x103b41cd */
  goto L_103b41cd;
L_103b41b9:;
  /* 103b41b9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b41bc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b41bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b41c2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b41c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b41c8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b41ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103b41cd:;
  /* 103b41cd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b41d1 jne 0x103b420a */
  if (!C.zf) goto L_103b420a;
  /* 103b41d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b41d6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 103b41d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b41db jne 0x103b41ec */
  if (!C.zf) goto L_103b41ec;
  /* 103b41dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b41e0 mov eax, dword ptr [edx*4 + 0x103cfe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103cfe50)));
  /* 103b41e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103b41ea jmp 0x103b41f9 */
  goto L_103b41f9;
L_103b41ec:;
  /* 103b41ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b41ef mov edx, dword ptr [ecx*4 + 0x103cfe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cfe84)));
  /* 103b41f6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_103b41f9:;
  /* 103b41f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b41fc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b41ff jle 0x103b420a */
  if ((C.zf||C.sf!=C.of)) goto L_103b420a;
  /* 103b4201 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4204 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4207 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103b420a:;
  /* 103b420a jmp 0x103b4241 */
  goto L_103b4241;
L_103b420c:;
  /* 103b420c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b420f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103b4212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4214 jne 0x103b4225 */
  if (!C.zf) goto L_103b4225;
  /* 103b4216 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4219 mov ecx, dword ptr [eax*4 + 0x103cfe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103cfe4c)));
  /* 103b4220 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103b4223 jmp 0x103b4232 */
  goto L_103b4232;
L_103b4225:;
  /* 103b4225 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4228 mov eax, dword ptr [edx*4 + 0x103cfe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103cfe80)));
  /* 103b422f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_103b4232:;
  /* 103b4232 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b4235 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103b4238 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b423b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b423e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103b4241:;
  /* 103b4241 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4245 jne 0x103b4281 */
  if (!C.zf) goto L_103b4281;
  /* 103b4247 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b424a mov dword ptr [0x103cfe2c], eax */
  w32((uint32_t)(0x103cfe2c), (EAX));
  /* 103b424f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 103b4252 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b4255 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 103b4258 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b425a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b425d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 103b4260 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4262 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b4268 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 103b426b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b426d mov dword ptr [0x103cfe30], ecx */
  w32((uint32_t)(0x103cfe30), (ECX));
  /* 103b4273 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4276 mov dword ptr [0x103cfe28], edx */
  w32((uint32_t)(0x103cfe28), (EDX));
  /* 103b427c jmp 0x103b4324 */
  goto L_103b4324;
L_103b4281:;
  /* 103b4281 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4284 mov dword ptr [0x103cfe3c], eax */
  w32((uint32_t)(0x103cfe3c), (EAX));
  /* 103b4289 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 103b428c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b428f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 103b4292 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4294 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b4297 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 103b429a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b429c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b42a2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 103b42a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b42a7 mov dword ptr [0x103cfe40], ecx */
  w32((uint32_t)(0x103cfe40), (ECX));
  /* 103b42ad mov edx, dword ptr [0x103cfd98] */
  EDX = (r32((uint32_t)(0x103cfd98)));
  /* 103b42b3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103b42b9 mov eax, dword ptr [0x103cfe40] */
  EAX = (r32((uint32_t)(0x103cfe40)));
  /* 103b42be add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b42c0 mov dword ptr [0x103cfe40], eax */
  w32((uint32_t)(0x103cfe40), (EAX));
  /* 103b42c5 cmp dword ptr [0x103cfe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103cfe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b42cc jge 0x103b42f1 */
  if ((C.sf==C.of)) goto L_103b42f1;
  /* 103b42ce mov ecx, dword ptr [0x103cfe40] */
  ECX = (r32((uint32_t)(0x103cfe40)));
  /* 103b42d4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b42da mov dword ptr [0x103cfe40], ecx */
  w32((uint32_t)(0x103cfe40), (ECX));
  /* 103b42e0 mov edx, dword ptr [0x103cfe3c] */
  EDX = (r32((uint32_t)(0x103cfe3c)));
  /* 103b42e6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b42e9 mov dword ptr [0x103cfe3c], edx */
  w32((uint32_t)(0x103cfe3c), (EDX));
  /* 103b42ef jmp 0x103b431b */
  goto L_103b431b;
L_103b42f1:;
  /* 103b42f1 cmp dword ptr [0x103cfe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x103cfe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b42fb jl 0x103b431b */
  if ((C.sf!=C.of)) goto L_103b431b;
  /* 103b42fd mov eax, dword ptr [0x103cfe40] */
  EAX = (r32((uint32_t)(0x103cfe40)));
  /* 103b4302 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4307 mov dword ptr [0x103cfe40], eax */
  w32((uint32_t)(0x103cfe40), (EAX));
  /* 103b430c mov ecx, dword ptr [0x103cfe3c] */
  ECX = (r32((uint32_t)(0x103cfe3c)));
  /* 103b4312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4315 mov dword ptr [0x103cfe3c], ecx */
  w32((uint32_t)(0x103cfe3c), (ECX));
L_103b431b:;
  /* 103b431b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b431e mov dword ptr [0x103cfe38], edx */
  w32((uint32_t)(0x103cfe38), (EDX));
L_103b4324:;
  /* 103b4324 mov esp, ebp */
  ESP = (EBP);
  /* 103b4326 pop ebp */
  EBP = (pop32());
  /* 103b4327 ret  */
  ESPCHK(0x103b4130u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x103b4330 (382 bytes, 135 insns) */
void f_103b4330(void) {
  FTRACE(0x103b4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4330 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4331 mov ebp, esp */
  EBP = (ESP);
  /* 103b4333 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4335 push 0x103ccb68 */
  push32((uint32_t)(0x103ccb68u));
  /* 103b433a push 0x103adff8 */
  push32((uint32_t)(0x103adff8u));
  /* 103b433f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103b4345 push eax */
  push32((uint32_t)(EAX));
  /* 103b4346 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103b434d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4350 push ebx */
  push32((uint32_t)(EBX));
  /* 103b4351 push esi */
  push32((uint32_t)(ESI));
  /* 103b4352 push edi */
  push32((uint32_t)(EDI));
  /* 103b4353 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b4356 cmp dword ptr [0x103d094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b435d jne 0x103b43a2 */
  if (!C.zf) goto L_103b43a2;
  /* 103b435f push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4361 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4363 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4365 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4367 call dword ptr [0x103d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ac))), 0x103b436du);
  /* 103b436d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b436f je 0x103b437d */
  if (C.zf) goto L_103b437d;
  /* 103b4371 mov dword ptr [0x103d094c], 1 */
  w32((uint32_t)(0x103d094c), (0x1u));
  /* 103b437b jmp 0x103b43a2 */
  goto L_103b43a2;
L_103b437d:;
  /* 103b437d push 0 */
  push32((uint32_t)(0x0u));
  /* 103b437f push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4381 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4383 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4385 call dword ptr [0x103d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c4))), 0x103b438bu);
  /* 103b438b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b438d je 0x103b439b */
  if (C.zf) goto L_103b439b;
  /* 103b438f mov dword ptr [0x103d094c], 2 */
  w32((uint32_t)(0x103d094c), (0x2u));
  /* 103b4399 jmp 0x103b43a2 */
  goto L_103b43a2;
L_103b439b:;
  /* 103b439b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b439d jmp 0x103b44b1 */
  goto L_103b44b1;
L_103b43a2:;
  /* 103b43a2 cmp dword ptr [0x103d094c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d094c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b43a9 jne 0x103b43c6 */
  if (!C.zf) goto L_103b43c6;
  /* 103b43ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b43ae push eax */
  push32((uint32_t)(EAX));
  /* 103b43af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b43b2 push ecx */
  push32((uint32_t)(ECX));
  /* 103b43b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b43b6 push edx */
  push32((uint32_t)(EDX));
  /* 103b43b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b43ba push eax */
  push32((uint32_t)(EAX));
  /* 103b43bb call dword ptr [0x103d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ac))), 0x103b43c1u);
  /* 103b43c1 jmp 0x103b44b1 */
  goto L_103b44b1;
L_103b43c6:;
  /* 103b43c6 cmp dword ptr [0x103d094c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d094c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b43cd jne 0x103b44af */
  if (!C.zf) goto L_103b44af;
  /* 103b43d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b43d7 jne 0x103b43e2 */
  if (!C.zf) goto L_103b43e2;
  /* 103b43d9 mov ecx, dword ptr [0x103d0800] */
  ECX = (r32((uint32_t)(0x103d0800)));
  /* 103b43df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_103b43e2:;
  /* 103b43e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b43e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b43e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b43e9 push edx */
  push32((uint32_t)(EDX));
  /* 103b43ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b43ed push eax */
  push32((uint32_t)(EAX));
  /* 103b43ee call dword ptr [0x103d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c4))), 0x103b43f4u);
  /* 103b43f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103b43f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b43fb jne 0x103b4404 */
  if (!C.zf) goto L_103b4404;
  /* 103b43fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b43ff jmp 0x103b44b1 */
  goto L_103b44b1;
L_103b4404:;
  /* 103b4404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b440b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b440e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4411 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103b4413 call 0x103a8090 */
  push32(0x103b4418u); f_103a8090();
  /* 103b4418 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 103b441b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b441e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b4421 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103b4424 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103b442b jmp 0x103b4444 */
  goto L_103b4444;
  /* 103b442d mov eax, 1 */
  EAX = (0x1u);
  /* 103b4432 ret  */
  ESPCHK(0x103b4330u, _esp0);
  ESP += 4; return;
  /* 103b4433 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103b4436 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103b443d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103b4444:;
  /* 103b4444 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4448 jne 0x103b444e */
  if (!C.zf) goto L_103b444e;
  /* 103b444a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b444c jmp 0x103b44b1 */
  goto L_103b44b1;
L_103b444e:;
  /* 103b444e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b4451 push edx */
  push32((uint32_t)(EDX));
  /* 103b4452 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b4455 push eax */
  push32((uint32_t)(EAX));
  /* 103b4456 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b4459 push ecx */
  push32((uint32_t)(ECX));
  /* 103b445a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b445d push edx */
  push32((uint32_t)(EDX));
  /* 103b445e call dword ptr [0x103d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c4))), 0x103b4464u);
  /* 103b4464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4466 jne 0x103b446c */
  if (!C.zf) goto L_103b446c;
  /* 103b4468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b446a jmp 0x103b44b1 */
  goto L_103b44b1;
L_103b446c:;
  /* 103b446c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4470 jne 0x103b448d */
  if (!C.zf) goto L_103b448d;
  /* 103b4472 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4474 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4476 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4478 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b447b push eax */
  push32((uint32_t)(EAX));
  /* 103b447c push 1 */
  push32((uint32_t)(0x1u));
  /* 103b447e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4481 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4482 call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103b4488u);
  /* 103b4488 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103b448b jmp 0x103b44aa */
  goto L_103b44aa;
L_103b448d:;
  /* 103b448d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4490 push edx */
  push32((uint32_t)(EDX));
  /* 103b4491 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4494 push eax */
  push32((uint32_t)(EAX));
  /* 103b4495 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4497 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b449a push ecx */
  push32((uint32_t)(ECX));
  /* 103b449b push 1 */
  push32((uint32_t)(0x1u));
  /* 103b449d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b44a0 push edx */
  push32((uint32_t)(EDX));
  /* 103b44a1 call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103b44a7u);
  /* 103b44a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103b44aa:;
  /* 103b44aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b44ad jmp 0x103b44b1 */
  goto L_103b44b1;
L_103b44af:;
  /* 103b44af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b44b1:;
  /* 103b44b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 103b44b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b44b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103b44be pop edi */
  EDI = (pop32());
  /* 103b44bf pop esi */
  ESI = (pop32());
  /* 103b44c0 pop ebx */
  EBX = (pop32());
  /* 103b44c1 mov esp, ebp */
  ESP = (EBP);
  /* 103b44c3 pop ebp */
  EBP = (pop32());
  /* 103b44c4 ret  */
  ESPCHK(0x103b4330u, _esp0);
  ESP += 4; return;
}

/* FUN_100144d0 @ 0x103b44d0 (398 bytes, 140 insns) */
void f_103b44d0(void) {
  FTRACE(0x103b44d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b44d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b44d1 mov ebp, esp */
  EBP = (ESP);
  /* 103b44d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b44d5 push 0x103ccb78 */
  push32((uint32_t)(0x103ccb78u));
  /* 103b44da push 0x103adff8 */
  push32((uint32_t)(0x103adff8u));
  /* 103b44df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103b44e5 push eax */
  push32((uint32_t)(EAX));
  /* 103b44e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103b44ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b44f0 push ebx */
  push32((uint32_t)(EBX));
  /* 103b44f1 push esi */
  push32((uint32_t)(ESI));
  /* 103b44f2 push edi */
  push32((uint32_t)(EDI));
  /* 103b44f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b44f6 cmp dword ptr [0x103d0950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b44fd jne 0x103b4542 */
  if (!C.zf) goto L_103b4542;
  /* 103b44ff push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4501 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4503 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4505 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4507 call dword ptr [0x103d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ac))), 0x103b450du);
  /* 103b450d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b450f je 0x103b451d */
  if (C.zf) goto L_103b451d;
  /* 103b4511 mov dword ptr [0x103d0950], 1 */
  w32((uint32_t)(0x103d0950), (0x1u));
  /* 103b451b jmp 0x103b4542 */
  goto L_103b4542;
L_103b451d:;
  /* 103b451d push 0 */
  push32((uint32_t)(0x0u));
  /* 103b451f push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4521 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4523 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4525 call dword ptr [0x103d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c4))), 0x103b452bu);
  /* 103b452b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b452d je 0x103b453b */
  if (C.zf) goto L_103b453b;
  /* 103b452f mov dword ptr [0x103d0950], 2 */
  w32((uint32_t)(0x103d0950), (0x2u));
  /* 103b4539 jmp 0x103b4542 */
  goto L_103b4542;
L_103b453b:;
  /* 103b453b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b453d jmp 0x103b4661 */
  goto L_103b4661;
L_103b4542:;
  /* 103b4542 cmp dword ptr [0x103d0950], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d0950))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4549 jne 0x103b4566 */
  if (!C.zf) goto L_103b4566;
  /* 103b454b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b454e push eax */
  push32((uint32_t)(EAX));
  /* 103b454f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4552 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4553 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b4556 push edx */
  push32((uint32_t)(EDX));
  /* 103b4557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b455a push eax */
  push32((uint32_t)(EAX));
  /* 103b455b call dword ptr [0x103d32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32c4))), 0x103b4561u);
  /* 103b4561 jmp 0x103b4661 */
  goto L_103b4661;
L_103b4566:;
  /* 103b4566 cmp dword ptr [0x103d0950], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d0950))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b456d jne 0x103b465f */
  if (!C.zf) goto L_103b465f;
  /* 103b4573 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4577 jne 0x103b4582 */
  if (!C.zf) goto L_103b4582;
  /* 103b4579 mov ecx, dword ptr [0x103d0800] */
  ECX = (r32((uint32_t)(0x103d0800)));
  /* 103b457f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_103b4582:;
  /* 103b4582 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4584 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4586 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b4589 push edx */
  push32((uint32_t)(EDX));
  /* 103b458a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b458d push eax */
  push32((uint32_t)(EAX));
  /* 103b458e call dword ptr [0x103d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ac))), 0x103b4594u);
  /* 103b4594 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103b4597 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b459b jne 0x103b45a4 */
  if (!C.zf) goto L_103b45a4;
  /* 103b459d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b459f jmp 0x103b4661 */
  goto L_103b4661;
L_103b45a4:;
  /* 103b45a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b45ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b45ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b45b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b45b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103b45b5 call 0x103a8090 */
  push32(0x103b45bau); f_103a8090();
  /* 103b45ba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 103b45bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b45c0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b45c3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103b45c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103b45cd jmp 0x103b45e6 */
  goto L_103b45e6;
  /* 103b45cf mov eax, 1 */
  EAX = (0x1u);
  /* 103b45d4 ret  */
  ESPCHK(0x103b44d0u, _esp0);
  ESP += 4; return;
  /* 103b45d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103b45d8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 103b45df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103b45e6:;
  /* 103b45e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b45ea jne 0x103b45f0 */
  if (!C.zf) goto L_103b45f0;
  /* 103b45ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b45ee jmp 0x103b4661 */
  goto L_103b4661;
L_103b45f0:;
  /* 103b45f0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b45f3 push edx */
  push32((uint32_t)(EDX));
  /* 103b45f4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b45f7 push eax */
  push32((uint32_t)(EAX));
  /* 103b45f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b45fb push ecx */
  push32((uint32_t)(ECX));
  /* 103b45fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b45ff push edx */
  push32((uint32_t)(EDX));
  /* 103b4600 call dword ptr [0x103d32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32ac))), 0x103b4606u);
  /* 103b4606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4608 jne 0x103b460e */
  if (!C.zf) goto L_103b460e;
  /* 103b460a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b460c jmp 0x103b4661 */
  goto L_103b4661;
L_103b460e:;
  /* 103b460e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4612 jne 0x103b4636 */
  if (!C.zf) goto L_103b4636;
  /* 103b4614 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4616 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4618 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b461a push 0 */
  push32((uint32_t)(0x0u));
  /* 103b461c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b461e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b4621 push eax */
  push32((uint32_t)(EAX));
  /* 103b4622 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103b4627 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b462a push ecx */
  push32((uint32_t)(ECX));
  /* 103b462b call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b4631u);
  /* 103b4631 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103b4634 jmp 0x103b465a */
  goto L_103b465a;
L_103b4636:;
  /* 103b4636 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4638 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b463a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b463d push edx */
  push32((uint32_t)(EDX));
  /* 103b463e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4641 push eax */
  push32((uint32_t)(EAX));
  /* 103b4642 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4644 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b4647 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4648 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103b464d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4650 push edx */
  push32((uint32_t)(EDX));
  /* 103b4651 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b4657u);
  /* 103b4657 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103b465a:;
  /* 103b465a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b465d jmp 0x103b4661 */
  goto L_103b4661;
L_103b465f:;
  /* 103b465f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b4661:;
  /* 103b4661 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 103b4664 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b4667 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103b466e pop edi */
  EDI = (pop32());
  /* 103b466f pop esi */
  ESI = (pop32());
  /* 103b4670 pop ebx */
  EBX = (pop32());
  /* 103b4671 mov esp, ebp */
  ESP = (EBP);
  /* 103b4673 pop ebp */
  EBP = (pop32());
  /* 103b4674 ret  */
  ESPCHK(0x103b44d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014680 @ 0x103b4680 (11 bytes, 6 insns) */
void f_103b4680(void) {
  FTRACE(0x103b4680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4680 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4681 mov ebp, esp */
  EBP = (ESP);
  /* 103b4683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4686 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4689 pop ebp */
  EBP = (pop32());
  /* 103b468a ret  */
  ESPCHK(0x103b4680u, _esp0);
  ESP += 4; return;
}

/* FUN_10014690 @ 0x103b4690 (147 bytes, 43 insns) */
void f_103b4690(void) {
  FTRACE(0x103b4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4690 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4691 mov ebp, esp */
  EBP = (ESP);
  /* 103b4693 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4694 cmp dword ptr [0x103d07f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b469b jne 0x103b46b7 */
  if (!C.zf) goto L_103b46b7;
  /* 103b469d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b46a1 jl 0x103b46b2 */
  if ((C.sf!=C.of)) goto L_103b46b2;
  /* 103b46a3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b46a7 jg 0x103b46b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b46b2;
  /* 103b46a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b46ac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b46af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103b46b2:;
  /* 103b46b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b46b5 jmp 0x103b471f */
  goto L_103b471f;
L_103b46b7:;
  /* 103b46b7 push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103b46bc call dword ptr [0x103d334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d334c))), 0x103b46c2u);
  /* 103b46c2 cmp dword ptr [0x103d096c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d096c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b46c9 je 0x103b46e9 */
  if (C.zf) goto L_103b46e9;
  /* 103b46cb push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103b46d0 call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103b46d6u);
  /* 103b46d6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b46d8 call 0x103a88f0 */
  push32(0x103b46ddu); f_103a88f0();
  /* 103b46dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b46e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103b46e7 jmp 0x103b46f0 */
  goto L_103b46f0;
L_103b46e9:;
  /* 103b46e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103b46f0:;
  /* 103b46f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b46f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b46f4 call 0x103b4730 */
  push32(0x103b46f9u); f_103b4730();
  /* 103b46f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b46fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103b46ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4703 je 0x103b4711 */
  if (C.zf) goto L_103b4711;
  /* 103b4705 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103b4707 call 0x103a8990 */
  push32(0x103b470cu); f_103a8990();
  /* 103b470c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b470f jmp 0x103b471c */
  goto L_103b471c;
L_103b4711:;
  /* 103b4711 push 0x103d097c */
  push32((uint32_t)(0x103d097cu));
  /* 103b4716 call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103b471cu);
L_103b471c:;
  /* 103b471c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_103b471f:;
  /* 103b471f mov esp, ebp */
  ESP = (EBP);
  /* 103b4721 pop ebp */
  EBP = (pop32());
  /* 103b4722 ret  */
  ESPCHK(0x103b4690u, _esp0);
  ESP += 4; return;
}

/* FUN_10014730 @ 0x103b4730 (299 bytes, 91 insns) */
void f_103b4730(void) {
  FTRACE(0x103b4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4730 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4731 mov ebp, esp */
  EBP = (ESP);
  /* 103b4733 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4736 cmp dword ptr [0x103d07f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d07f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b473d jne 0x103b475c */
  if (!C.zf) goto L_103b475c;
  /* 103b473f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4743 jl 0x103b4754 */
  if ((C.sf!=C.of)) goto L_103b4754;
  /* 103b4745 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4749 jg 0x103b4754 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b4754;
  /* 103b474b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b474e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4751 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103b4754:;
  /* 103b4754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4757 jmp 0x103b4857 */
  goto L_103b4857;
L_103b475c:;
  /* 103b475c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4763 jge 0x103b47a3 */
  if ((C.sf==C.of)) goto L_103b47a3;
  /* 103b4765 cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b476c jle 0x103b4781 */
  if ((C.zf||C.sf!=C.of)) goto L_103b4781;
  /* 103b476e push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4773 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4774 call 0x103aaf00 */
  push32(0x103b4779u); f_103aaf00();
  /* 103b4779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b477c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103b477f jmp 0x103b4795 */
  goto L_103b4795;
L_103b4781:;
  /* 103b4781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4784 mov eax, dword ptr [0x103cec98] */
  EAX = (r32((uint32_t)(0x103cec98)));
  /* 103b4789 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b478b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103b478f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103b4792 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103b4795:;
  /* 103b4795 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4799 jne 0x103b47a3 */
  if (!C.zf) goto L_103b47a3;
  /* 103b479b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b479e jmp 0x103b4857 */
  goto L_103b4857;
L_103b47a3:;
  /* 103b47a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b47a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103b47a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b47af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b47b5 mov eax, dword ptr [0x103cec98] */
  EAX = (r32((uint32_t)(0x103cec98)));
  /* 103b47ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b47bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103b47c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 103b47c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b47c8 je 0x103b47ec */
  if (C.zf) goto L_103b47ec;
  /* 103b47ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b47cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103b47d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b47d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 103b47d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 103b47dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 103b47df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 103b47e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103b47ea jmp 0x103b47fd */
  goto L_103b47fd;
L_103b47ec:;
  /* 103b47ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 103b47ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 103b47f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 103b47f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_103b47fd:;
  /* 103b47fd push 1 */
  push32((uint32_t)(0x1u));
  /* 103b47ff push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4801 push 3 */
  push32((uint32_t)(0x3u));
  /* 103b4803 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 103b4806 push edx */
  push32((uint32_t)(EDX));
  /* 103b4807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b480a push eax */
  push32((uint32_t)(EAX));
  /* 103b480b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 103b480e push ecx */
  push32((uint32_t)(ECX));
  /* 103b480f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 103b4814 mov edx, dword ptr [0x103d07f0] */
  EDX = (r32((uint32_t)(0x103d07f0)));
  /* 103b481a push edx */
  push32((uint32_t)(EDX));
  /* 103b481b call 0x103ad2e0 */
  push32(0x103b4820u); f_103ad2e0();
  /* 103b4820 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b4826 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b482a jne 0x103b4831 */
  if (!C.zf) goto L_103b4831;
  /* 103b482c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b482f jmp 0x103b4857 */
  goto L_103b4857;
L_103b4831:;
  /* 103b4831 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4835 jne 0x103b4841 */
  if (!C.zf) goto L_103b4841;
  /* 103b4837 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b483a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b483f jmp 0x103b4857 */
  goto L_103b4857;
L_103b4841:;
  /* 103b4841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b4844 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4849 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 103b484c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103b4852 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 103b4855 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_103b4857:;
  /* 103b4857 mov esp, ebp */
  ESP = (EBP);
  /* 103b4859 pop ebp */
  EBP = (pop32());
  /* 103b485a ret  */
  ESPCHK(0x103b4730u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x103b4860 (52 bytes, 19 insns) */
void f_103b4860(void) {
  FTRACE(0x103b4860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4860 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103b4864 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 103b4868 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 103b486a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103b486e jne 0x103b4879 */
  if (!C.zf) goto L_103b4879;
  /* 103b4870 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103b4874 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103b4876 ret 0x10 */
  ESPCHK(0x103b4860u, _esp0);
  ESP += 20; return;
L_103b4879:;
  /* 103b4879 push ebx */
  push32((uint32_t)(EBX));
  /* 103b487a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103b487c mov ebx, eax */
  EBX = (EAX);
  /* 103b487e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103b4882 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103b4886 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4888 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103b488c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 103b488e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4890 pop ebx */
  EBX = (pop32());
  /* 103b4891 ret 0x10 */
  ESPCHK(0x103b4860u, _esp0);
  ESP += 20; return;
}

/* FUN_100148a0 @ 0x103b48a0 (46 bytes, 18 insns) */
void f_103b48a0(void) {
  FTRACE(0x103b48a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b48a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b48a1 mov ebp, esp */
  EBP = (ESP);
  /* 103b48a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b48a4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b48a6 call 0x103a88f0 */
  push32(0x103b48abu); f_103a88f0();
  /* 103b48ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b48ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b48b1 push eax */
  push32((uint32_t)(EAX));
  /* 103b48b2 call 0x103b48d0 */
  push32(0x103b48b7u); f_103b48d0();
  /* 103b48b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b48ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b48bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 103b48bf call 0x103a8990 */
  push32(0x103b48c4u); f_103a8990();
  /* 103b48c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b48c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b48ca mov esp, ebp */
  ESP = (EBP);
  /* 103b48cc pop ebp */
  EBP = (pop32());
  /* 103b48cd ret  */
  ESPCHK(0x103b48a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x103b48d0 (198 bytes, 69 insns) */
void f_103b48d0(void) {
  FTRACE(0x103b48d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b48d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b48d1 mov ebp, esp */
  EBP = (ESP);
  /* 103b48d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b48d6 mov eax, dword ptr [0x103d0610] */
  EAX = (r32((uint32_t)(0x103d0610)));
  /* 103b48db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b48de cmp dword ptr [0x103d2100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d2100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b48e5 jne 0x103b48ee */
  if (!C.zf) goto L_103b48ee;
  /* 103b48e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b48e9 jmp 0x103b4992 */
  goto L_103b4992;
L_103b48ee:;
  /* 103b48ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b48f2 jne 0x103b4916 */
  if (!C.zf) goto L_103b4916;
  /* 103b48f4 cmp dword ptr [0x103d0618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b48fb je 0x103b4916 */
  if (C.zf) goto L_103b4916;
  /* 103b48fd call 0x103b49f0 */
  push32(0x103b4902u); f_103b49f0();
  /* 103b4902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4904 je 0x103b490d */
  if (C.zf) goto L_103b490d;
  /* 103b4906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4908 jmp 0x103b4992 */
  goto L_103b4992;
L_103b490d:;
  /* 103b490d mov ecx, dword ptr [0x103d0610] */
  ECX = (r32((uint32_t)(0x103d0610)));
  /* 103b4913 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103b4916:;
  /* 103b4916 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b491a je 0x103b4990 */
  if (C.zf) goto L_103b4990;
  /* 103b491c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4920 je 0x103b4990 */
  if (C.zf) goto L_103b4990;
  /* 103b4922 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4925 push edx */
  push32((uint32_t)(EDX));
  /* 103b4926 call 0x103a7d20 */
  push32(0x103b492bu); f_103a7d20();
  /* 103b492b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b492e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b4931:;
  /* 103b4931 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4934 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4937 je 0x103b4990 */
  if (C.zf) goto L_103b4990;
  /* 103b4939 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b493c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b493e push edx */
  push32((uint32_t)(EDX));
  /* 103b493f call 0x103a7d20 */
  push32(0x103b4944u); f_103a7d20();
  /* 103b4944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4947 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b494a jbe 0x103b4985 */
  if ((C.cf||C.zf)) goto L_103b4985;
  /* 103b494c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b494f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b4951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4954 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 103b4958 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b495b jne 0x103b4985 */
  if (!C.zf) goto L_103b4985;
  /* 103b495d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4960 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4964 push edx */
  push32((uint32_t)(EDX));
  /* 103b4965 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4968 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b496a push ecx */
  push32((uint32_t)(ECX));
  /* 103b496b call 0x103b49a0 */
  push32(0x103b4970u); f_103b49a0();
  /* 103b4970 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4975 jne 0x103b4985 */
  if (!C.zf) goto L_103b4985;
  /* 103b4977 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b497a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b497c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b497f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 103b4983 jmp 0x103b4992 */
  goto L_103b4992;
L_103b4985:;
  /* 103b4985 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4988 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b498b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b498e jmp 0x103b4931 */
  goto L_103b4931;
L_103b4990:;
  /* 103b4990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b4992:;
  /* 103b4992 mov esp, ebp */
  ESP = (EBP);
  /* 103b4994 pop ebp */
  EBP = (pop32());
  /* 103b4995 ret  */
  ESPCHK(0x103b48d0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x103b49a0 (79 bytes, 32 insns) */
void f_103b49a0(void) {
  FTRACE(0x103b49a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b49a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b49a1 mov ebp, esp */
  EBP = (ESP);
  /* 103b49a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b49a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b49a8 jne 0x103b49ae */
  if (!C.zf) goto L_103b49ae;
  /* 103b49aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b49ac jmp 0x103b49eb */
  goto L_103b49eb;
L_103b49ae:;
  /* 103b49ae mov eax, dword ptr [0x103d1cc4] */
  EAX = (r32((uint32_t)(0x103d1cc4)));
  /* 103b49b3 push eax */
  push32((uint32_t)(EAX));
  /* 103b49b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b49b7 push ecx */
  push32((uint32_t)(ECX));
  /* 103b49b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b49bb push edx */
  push32((uint32_t)(EDX));
  /* 103b49bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b49bf push eax */
  push32((uint32_t)(EAX));
  /* 103b49c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b49c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b49c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b49c6 mov edx, dword ptr [0x103d1f64] */
  EDX = (r32((uint32_t)(0x103d1f64)));
  /* 103b49cc push edx */
  push32((uint32_t)(EDX));
  /* 103b49cd call 0x103b4aa0 */
  push32(0x103b49d2u); f_103b4aa0();
  /* 103b49d2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b49d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b49d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b49dc jne 0x103b49e5 */
  if (!C.zf) goto L_103b49e5;
  /* 103b49de mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 103b49e3 jmp 0x103b49eb */
  goto L_103b49eb;
L_103b49e5:;
  /* 103b49e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b49e8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103b49eb:;
  /* 103b49eb mov esp, ebp */
  ESP = (EBP);
  /* 103b49ed pop ebp */
  EBP = (pop32());
  /* 103b49ee ret  */
  ESPCHK(0x103b49a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100149f0 @ 0x103b49f0 (174 bytes, 66 insns) */
void f_103b49f0(void) {
  FTRACE(0x103b49f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b49f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b49f1 mov ebp, esp */
  EBP = (ESP);
  /* 103b49f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b49f6 mov eax, dword ptr [0x103d0618] */
  EAX = (r32((uint32_t)(0x103d0618)));
  /* 103b49fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103b49fe:;
  /* 103b49fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4a01 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4a04 je 0x103b4a98 */
  if (C.zf) goto L_103b4a98;
  /* 103b4a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4a17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b4a19 push eax */
  push32((uint32_t)(EAX));
  /* 103b4a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a1c push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4a1e call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b4a24u);
  /* 103b4a24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b4a27 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4a2b jne 0x103b4a32 */
  if (!C.zf) goto L_103b4a32;
  /* 103b4a2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4a30 jmp 0x103b4a9a */
  goto L_103b4a9a;
L_103b4a32:;
  /* 103b4a32 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103b4a34 push 0x103ccb84 */
  push32((uint32_t)(0x103ccb84u));
  /* 103b4a39 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b4a3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b4a3e push ecx */
  push32((uint32_t)(ECX));
  /* 103b4a3f call 0x103a4ef0 */
  push32(0x103b4a44u); f_103a4ef0();
  /* 103b4a44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4a47 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b4a4a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4a4e jne 0x103b4a55 */
  if (!C.zf) goto L_103b4a55;
  /* 103b4a50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4a53 jmp 0x103b4a9a */
  goto L_103b4a9a;
L_103b4a55:;
  /* 103b4a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b4a5c push edx */
  push32((uint32_t)(EDX));
  /* 103b4a5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4a60 push eax */
  push32((uint32_t)(EAX));
  /* 103b4a61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4a66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b4a68 push edx */
  push32((uint32_t)(EDX));
  /* 103b4a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4a6d call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103b4a73u);
  /* 103b4a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4a75 jne 0x103b4a7c */
  if (!C.zf) goto L_103b4a7c;
  /* 103b4a77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4a7a jmp 0x103b4a9a */
  goto L_103b4a9a;
L_103b4a7c:;
  /* 103b4a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4a7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4a81 push eax */
  push32((uint32_t)(EAX));
  /* 103b4a82 call 0x103b4ef0 */
  push32(0x103b4a87u); f_103b4ef0();
  /* 103b4a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4a8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4a90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b4a93 jmp 0x103b49fe */
  goto L_103b49fe;
L_103b4a98:;
  /* 103b4a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b4a9a:;
  /* 103b4a9a mov esp, ebp */
  ESP = (EBP);
  /* 103b4a9c pop ebp */
  EBP = (pop32());
  /* 103b4a9d ret  */
  ESPCHK(0x103b49f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014aa0 @ 0x103b4aa0 (970 bytes, 340 insns) */
void f_103b4aa0(void) {
  FTRACE(0x103b4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 103b4aa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103b4aa5 push 0x103ccbd8 */
  push32((uint32_t)(0x103ccbd8u));
  /* 103b4aaa push 0x103adff8 */
  push32((uint32_t)(0x103adff8u));
  /* 103b4aaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103b4ab5 push eax */
  push32((uint32_t)(EAX));
  /* 103b4ab6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 103b4abd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 103b4ac1 push esi */
  push32((uint32_t)(ESI));
  /* 103b4ac2 push edi */
  push32((uint32_t)(EDI));
  /* 103b4ac3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b4ac6 cmp dword ptr [0x103d0954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4acd jne 0x103b4b26 */
  if (!C.zf) goto L_103b4b26;
  /* 103b4acf push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4ad1 push 0x103cc234 */
  push32((uint32_t)(0x103cc234u));
  /* 103b4ad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4ad8 push 0x103cc234 */
  push32((uint32_t)(0x103cc234u));
  /* 103b4add push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4adf push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4ae1 call dword ptr [0x103d32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32a4))), 0x103b4ae7u);
  /* 103b4ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4ae9 je 0x103b4af7 */
  if (C.zf) goto L_103b4af7;
  /* 103b4aeb mov dword ptr [0x103d0954], 1 */
  w32((uint32_t)(0x103d0954), (0x1u));
  /* 103b4af5 jmp 0x103b4b26 */
  goto L_103b4b26;
L_103b4af7:;
  /* 103b4af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4af9 push 0x103cc230 */
  push32((uint32_t)(0x103cc230u));
  /* 103b4afe push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4b00 push 0x103cc230 */
  push32((uint32_t)(0x103cc230u));
  /* 103b4b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4b09 call dword ptr [0x103d32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32a8))), 0x103b4b0fu);
  /* 103b4b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4b11 je 0x103b4b1f */
  if (C.zf) goto L_103b4b1f;
  /* 103b4b13 mov dword ptr [0x103d0954], 2 */
  w32((uint32_t)(0x103d0954), (0x2u));
  /* 103b4b1d jmp 0x103b4b26 */
  goto L_103b4b26;
L_103b4b1f:;
  /* 103b4b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4b21 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4b26:;
  /* 103b4b26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4b2a jle 0x103b4b3f */
  if ((C.zf||C.sf!=C.of)) goto L_103b4b3f;
  /* 103b4b2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4b2f push eax */
  push32((uint32_t)(EAX));
  /* 103b4b30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4b33 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4b34 call 0x103b4ea0 */
  push32(0x103b4b39u); f_103b4ea0();
  /* 103b4b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4b3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_103b4b3f:;
  /* 103b4b3f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4b43 jle 0x103b4b58 */
  if ((C.zf||C.sf!=C.of)) goto L_103b4b58;
  /* 103b4b45 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b4b48 push edx */
  push32((uint32_t)(EDX));
  /* 103b4b49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4b4c push eax */
  push32((uint32_t)(EAX));
  /* 103b4b4d call 0x103b4ea0 */
  push32(0x103b4b52u); f_103b4ea0();
  /* 103b4b52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4b55 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_103b4b58:;
  /* 103b4b58 cmp dword ptr [0x103d0954], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d0954))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4b5f jne 0x103b4b84 */
  if (!C.zf) goto L_103b4b84;
  /* 103b4b61 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b4b64 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4b65 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4b68 push edx */
  push32((uint32_t)(EDX));
  /* 103b4b69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4b6c push eax */
  push32((uint32_t)(EAX));
  /* 103b4b6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4b70 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b4b74 push edx */
  push32((uint32_t)(EDX));
  /* 103b4b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4b78 push eax */
  push32((uint32_t)(EAX));
  /* 103b4b79 call dword ptr [0x103d32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32a8))), 0x103b4b7fu);
  /* 103b4b7f jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4b84:;
  /* 103b4b84 cmp dword ptr [0x103d0954], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d0954))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4b8b jne 0x103b4e82 */
  if (!C.zf) goto L_103b4e82;
  /* 103b4b91 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4b95 jne 0x103b4ba0 */
  if (!C.zf) goto L_103b4ba0;
  /* 103b4b97 mov ecx, dword ptr [0x103d0800] */
  ECX = (r32((uint32_t)(0x103d0800)));
  /* 103b4b9d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_103b4ba0:;
  /* 103b4ba0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4ba4 je 0x103b4bb0 */
  if (C.zf) goto L_103b4bb0;
  /* 103b4ba6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4baa jne 0x103b4d2c */
  if (!C.zf) goto L_103b4d2c;
L_103b4bb0:;
  /* 103b4bb0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4bb3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4bb6 jne 0x103b4bc2 */
  if (!C.zf) goto L_103b4bc2;
  /* 103b4bb8 mov eax, 2 */
  EAX = (0x2u);
  /* 103b4bbd jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4bc2:;
  /* 103b4bc2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4bc6 jle 0x103b4bd2 */
  if ((C.zf||C.sf!=C.of)) goto L_103b4bd2;
  /* 103b4bc8 mov eax, 1 */
  EAX = (0x1u);
  /* 103b4bcd jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4bd2:;
  /* 103b4bd2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4bd6 jle 0x103b4be2 */
  if ((C.zf||C.sf!=C.of)) goto L_103b4be2;
  /* 103b4bd8 mov eax, 3 */
  EAX = (0x3u);
  /* 103b4bdd jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4be2:;
  /* 103b4be2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 103b4be5 push eax */
  push32((uint32_t)(EAX));
  /* 103b4be6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 103b4be9 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4bea call dword ptr [0x103d3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3300))), 0x103b4bf0u);
  /* 103b4bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4bf2 jne 0x103b4bfb */
  if (!C.zf) goto L_103b4bfb;
  /* 103b4bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4bf6 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4bfb:;
  /* 103b4bfb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4bff jne 0x103b4c07 */
  if (!C.zf) goto L_103b4c07;
  /* 103b4c01 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c05 je 0x103b4c34 */
  if (C.zf) goto L_103b4c34;
L_103b4c07:;
  /* 103b4c07 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c0b jne 0x103b4c13 */
  if (!C.zf) goto L_103b4c13;
  /* 103b4c0d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c11 je 0x103b4c34 */
  if (C.zf) goto L_103b4c34;
L_103b4c13:;
  /* 103b4c13 push 0x103ccb98 */
  push32((uint32_t)(0x103ccb98u));
  /* 103b4c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4c1a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 103b4c1f push 0x103ccb90 */
  push32((uint32_t)(0x103ccb90u));
  /* 103b4c24 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b4c26 call 0x103a3fb0 */
  push32(0x103b4c2bu); f_103a3fb0();
  /* 103b4c2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4c2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c31 jne 0x103b4c34 */
  if (!C.zf) goto L_103b4c34;
  /* 103b4c33 int3  */
  x86_unimpl("int3 @ 0x103b4c33");
L_103b4c34:;
  /* 103b4c34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b4c36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4c38 jne 0x103b4bfb */
  if (!C.zf) goto L_103b4bfb;
  /* 103b4c3a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c3e jle 0x103b4cb3 */
  if ((C.zf||C.sf!=C.of)) goto L_103b4cb3;
  /* 103b4c40 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c44 jae 0x103b4c50 */
  if (!C.cf) goto L_103b4c50;
  /* 103b4c46 mov eax, 3 */
  EAX = (0x3u);
  /* 103b4c4b jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4c50:;
  /* 103b4c50 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 103b4c53 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 103b4c56 jmp 0x103b4c61 */
  goto L_103b4c61;
L_103b4c58:;
  /* 103b4c58 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4c5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4c5e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_103b4c61:;
  /* 103b4c61 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4c66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b4c68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4c6a je 0x103b4ca9 */
  if (C.zf) goto L_103b4ca9;
  /* 103b4c6c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4c6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b4c71 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 103b4c74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4c76 je 0x103b4ca9 */
  if (C.zf) goto L_103b4ca9;
  /* 103b4c78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4c7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b4c7d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b4c7f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4c84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b4c86 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c88 jl 0x103b4ca7 */
  if ((C.sf!=C.of)) goto L_103b4ca7;
  /* 103b4c8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b4c8f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b4c91 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4c94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b4c96 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103b4c99 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4c9b jg 0x103b4ca7 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b4ca7;
  /* 103b4c9d mov eax, 2 */
  EAX = (0x2u);
  /* 103b4ca2 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4ca7:;
  /* 103b4ca7 jmp 0x103b4c58 */
  goto L_103b4c58;
L_103b4ca9:;
  /* 103b4ca9 mov eax, 3 */
  EAX = (0x3u);
  /* 103b4cae jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4cb3:;
  /* 103b4cb3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4cb7 jle 0x103b4d2c */
  if ((C.zf||C.sf!=C.of)) goto L_103b4d2c;
  /* 103b4cb9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4cbd jae 0x103b4cc9 */
  if (!C.cf) goto L_103b4cc9;
  /* 103b4cbf mov eax, 1 */
  EAX = (0x1u);
  /* 103b4cc4 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4cc9:;
  /* 103b4cc9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 103b4ccc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 103b4ccf jmp 0x103b4cda */
  goto L_103b4cda;
L_103b4cd1:;
  /* 103b4cd1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4cd4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4cd7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_103b4cda:;
  /* 103b4cda mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4cdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b4cdf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b4ce1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4ce3 je 0x103b4d22 */
  if (C.zf) goto L_103b4d22;
  /* 103b4ce5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4ce8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b4cea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 103b4ced test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b4cef je 0x103b4d22 */
  if (C.zf) goto L_103b4d22;
  /* 103b4cf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4cf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4cf6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103b4cf8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4cfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103b4cfd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103b4cff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4d01 jl 0x103b4d20 */
  if ((C.sf!=C.of)) goto L_103b4d20;
  /* 103b4d03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4d06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b4d08 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b4d0a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 103b4d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4d0f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 103b4d12 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4d14 jg 0x103b4d20 */
  if ((!C.zf&&C.sf==C.of)) goto L_103b4d20;
  /* 103b4d16 mov eax, 2 */
  EAX = (0x2u);
  /* 103b4d1b jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4d20:;
  /* 103b4d20 jmp 0x103b4cd1 */
  goto L_103b4cd1;
L_103b4d22:;
  /* 103b4d22 mov eax, 1 */
  EAX = (0x1u);
  /* 103b4d27 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4d2c:;
  /* 103b4d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4d30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4d33 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4d34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4d37 push edx */
  push32((uint32_t)(EDX));
  /* 103b4d38 push 9 */
  push32((uint32_t)(0x9u));
  /* 103b4d3a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103b4d3d push eax */
  push32((uint32_t)(EAX));
  /* 103b4d3e call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103b4d44u);
  /* 103b4d44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 103b4d47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4d4b jne 0x103b4d54 */
  if (!C.zf) goto L_103b4d54;
  /* 103b4d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4d4f jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4d54:;
  /* 103b4d54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103b4d5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b4d5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b4d60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4d63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103b4d65 call 0x103a8090 */
  push32(0x103b4d6au); f_103a8090();
  /* 103b4d6a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 103b4d6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b4d70 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 103b4d73 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 103b4d76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103b4d7d jmp 0x103b4d96 */
  goto L_103b4d96;
  /* 103b4d7f mov eax, 1 */
  EAX = (0x1u);
  /* 103b4d84 ret  */
  ESPCHK(0x103b4aa0u, _esp0);
  ESP += 4; return;
  /* 103b4d85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103b4d88 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 103b4d8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103b4d96:;
  /* 103b4d96 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4d9a jne 0x103b4da3 */
  if (!C.zf) goto L_103b4da3;
  /* 103b4d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4d9e jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4da3:;
  /* 103b4da3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b4da6 push edx */
  push32((uint32_t)(EDX));
  /* 103b4da7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b4daa push eax */
  push32((uint32_t)(EAX));
  /* 103b4dab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103b4dae push ecx */
  push32((uint32_t)(ECX));
  /* 103b4daf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103b4db2 push edx */
  push32((uint32_t)(EDX));
  /* 103b4db3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4db5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103b4db8 push eax */
  push32((uint32_t)(EAX));
  /* 103b4db9 call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103b4dbfu);
  /* 103b4dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4dc1 jne 0x103b4dca */
  if (!C.zf) goto L_103b4dca;
  /* 103b4dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4dc5 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4dca:;
  /* 103b4dca push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 103b4dce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b4dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4dd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4dd5 push edx */
  push32((uint32_t)(EDX));
  /* 103b4dd6 push 9 */
  push32((uint32_t)(0x9u));
  /* 103b4dd8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103b4ddb push eax */
  push32((uint32_t)(EAX));
  /* 103b4ddc call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103b4de2u);
  /* 103b4de2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103b4de5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4de9 jne 0x103b4df2 */
  if (!C.zf) goto L_103b4df2;
  /* 103b4deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4ded jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4df2:;
  /* 103b4df2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103b4df9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b4dfc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103b4dfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4e01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103b4e03 call 0x103a8090 */
  push32(0x103b4e08u); f_103a8090();
  /* 103b4e08 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 103b4e0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103b4e0e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 103b4e11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 103b4e14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 103b4e1b jmp 0x103b4e34 */
  goto L_103b4e34;
  /* 103b4e1d mov eax, 1 */
  EAX = (0x1u);
  /* 103b4e22 ret  */
  ESPCHK(0x103b4aa0u, _esp0);
  ESP += 4; return;
  /* 103b4e23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103b4e26 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 103b4e2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_103b4e34:;
  /* 103b4e34 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4e38 jne 0x103b4e3e */
  if (!C.zf) goto L_103b4e3e;
  /* 103b4e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4e3c jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4e3e:;
  /* 103b4e3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b4e41 push edx */
  push32((uint32_t)(EDX));
  /* 103b4e42 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b4e45 push eax */
  push32((uint32_t)(EAX));
  /* 103b4e46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103b4e49 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4e4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103b4e4d push edx */
  push32((uint32_t)(EDX));
  /* 103b4e4e push 1 */
  push32((uint32_t)(0x1u));
  /* 103b4e50 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103b4e53 push eax */
  push32((uint32_t)(EAX));
  /* 103b4e54 call dword ptr [0x103d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32f4))), 0x103b4e5au);
  /* 103b4e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4e5c jne 0x103b4e62 */
  if (!C.zf) goto L_103b4e62;
  /* 103b4e5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4e60 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4e62:;
  /* 103b4e62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103b4e65 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4e66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 103b4e69 push edx */
  push32((uint32_t)(EDX));
  /* 103b4e6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 103b4e6d push eax */
  push32((uint32_t)(EAX));
  /* 103b4e6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103b4e71 push ecx */
  push32((uint32_t)(ECX));
  /* 103b4e72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b4e75 push edx */
  push32((uint32_t)(EDX));
  /* 103b4e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4e79 push eax */
  push32((uint32_t)(EAX));
  /* 103b4e7a call dword ptr [0x103d32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32a4))), 0x103b4e80u);
  /* 103b4e80 jmp 0x103b4e84 */
  goto L_103b4e84;
L_103b4e82:;
  /* 103b4e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b4e84:;
  /* 103b4e84 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 103b4e87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b4e8a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103b4e91 pop edi */
  EDI = (pop32());
  /* 103b4e92 pop esi */
  ESI = (pop32());
  /* 103b4e93 pop ebx */
  EBX = (pop32());
  /* 103b4e94 mov esp, ebp */
  ESP = (EBP);
  /* 103b4e96 pop ebp */
  EBP = (pop32());
  /* 103b4e97 ret  */
  ESPCHK(0x103b4aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ea0 @ 0x103b4ea0 (80 bytes, 32 insns) */
void f_103b4ea0(void) {
  FTRACE(0x103b4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 103b4ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b4ea9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b4eac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4eaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103b4eb2:;
  /* 103b4eb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4eb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b4eb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4ebb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b4ebe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4ec0 je 0x103b4ed7 */
  if (C.zf) goto L_103b4ed7;
  /* 103b4ec2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4ec5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b4ec8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4eca je 0x103b4ed7 */
  if (C.zf) goto L_103b4ed7;
  /* 103b4ecc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4ecf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4ed2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b4ed5 jmp 0x103b4eb2 */
  goto L_103b4eb2;
L_103b4ed7:;
  /* 103b4ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4eda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103b4edd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b4edf jne 0x103b4ee9 */
  if (!C.zf) goto L_103b4ee9;
  /* 103b4ee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b4ee4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4ee7 jmp 0x103b4eec */
  goto L_103b4eec;
L_103b4ee9:;
  /* 103b4ee9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_103b4eec:;
  /* 103b4eec mov esp, ebp */
  ESP = (EBP);
  /* 103b4eee pop ebp */
  EBP = (pop32());
  /* 103b4eef ret  */
  ESPCHK(0x103b4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ef0 @ 0x103b4ef0 (736 bytes, 224 insns) */
void f_103b4ef0(void) {
  FTRACE(0x103b4ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b4ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b4ef1 mov ebp, esp */
  EBP = (ESP);
  /* 103b4ef3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4ef6 push esi */
  push32((uint32_t)(ESI));
  /* 103b4ef7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4efb je 0x103b4f1c */
  if (C.zf) goto L_103b4f1c;
  /* 103b4efd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 103b4eff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4f02 push eax */
  push32((uint32_t)(EAX));
  /* 103b4f03 call 0x103b5340 */
  push32(0x103b4f08u); f_103b5340();
  /* 103b4f08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4f0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103b4f0e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f12 je 0x103b4f1c */
  if (C.zf) goto L_103b4f1c;
  /* 103b4f14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b4f17 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f1a jne 0x103b4f24 */
  if (!C.zf) goto L_103b4f24;
L_103b4f1c:;
  /* 103b4f1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4f1f jmp 0x103b51cb */
  goto L_103b51cb;
L_103b4f24:;
  /* 103b4f24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b4f27 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103b4f2b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b4f2d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b4f2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103b4f30 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103b4f33 mov ecx, dword ptr [0x103d0610] */
  ECX = (r32((uint32_t)(0x103d0610)));
  /* 103b4f39 cmp ecx, dword ptr [0x103d0614] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d0614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f3f jne 0x103b4f55 */
  if (!C.zf) goto L_103b4f55;
  /* 103b4f41 mov edx, dword ptr [0x103d0610] */
  EDX = (r32((uint32_t)(0x103d0610)));
  /* 103b4f47 push edx */
  push32((uint32_t)(EDX));
  /* 103b4f48 call 0x103b5250 */
  push32(0x103b4f4du); f_103b5250();
  /* 103b4f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4f50 mov dword ptr [0x103d0610], eax */
  w32((uint32_t)(0x103d0610), (EAX));
L_103b4f55:;
  /* 103b4f55 cmp dword ptr [0x103d0610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f5c jne 0x103b5015 */
  if (!C.zf) goto L_103b5015;
  /* 103b4f62 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f66 je 0x103b4f87 */
  if (C.zf) goto L_103b4f87;
  /* 103b4f68 cmp dword ptr [0x103d0618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f6f je 0x103b4f87 */
  if (C.zf) goto L_103b4f87;
  /* 103b4f71 call 0x103b49f0 */
  push32(0x103b4f76u); f_103b49f0();
  /* 103b4f76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b4f78 je 0x103b4f82 */
  if (C.zf) goto L_103b4f82;
  /* 103b4f7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4f7d jmp 0x103b51cb */
  goto L_103b51cb;
L_103b4f82:;
  /* 103b4f82 jmp 0x103b5015 */
  goto L_103b5015;
L_103b4f87:;
  /* 103b4f87 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f8b je 0x103b4f94 */
  if (C.zf) goto L_103b4f94;
  /* 103b4f8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b4f8f jmp 0x103b51cb */
  goto L_103b51cb;
L_103b4f94:;
  /* 103b4f94 cmp dword ptr [0x103d0610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4f9b jne 0x103b4fd4 */
  if (!C.zf) goto L_103b4fd4;
  /* 103b4f9d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 103b4fa2 push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b4fa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b4fa9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103b4fab call 0x103a4ef0 */
  push32(0x103b4fb0u); f_103a4ef0();
  /* 103b4fb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4fb3 mov dword ptr [0x103d0610], eax */
  w32((uint32_t)(0x103d0610), (EAX));
  /* 103b4fb8 cmp dword ptr [0x103d0610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4fbf jne 0x103b4fc9 */
  if (!C.zf) goto L_103b4fc9;
  /* 103b4fc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b4fc4 jmp 0x103b51cb */
  goto L_103b51cb;
L_103b4fc9:;
  /* 103b4fc9 mov eax, dword ptr [0x103d0610] */
  EAX = (r32((uint32_t)(0x103d0610)));
  /* 103b4fce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103b4fd4:;
  /* 103b4fd4 cmp dword ptr [0x103d0618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4fdb jne 0x103b5015 */
  if (!C.zf) goto L_103b5015;
  /* 103b4fdd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 103b4fe2 push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b4fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b4fe9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103b4feb call 0x103a4ef0 */
  push32(0x103b4ff0u); f_103a4ef0();
  /* 103b4ff0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b4ff3 mov dword ptr [0x103d0618], eax */
  w32((uint32_t)(0x103d0618), (EAX));
  /* 103b4ff8 cmp dword ptr [0x103d0618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b4fff jne 0x103b5009 */
  if (!C.zf) goto L_103b5009;
  /* 103b5001 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b5004 jmp 0x103b51cb */
  goto L_103b51cb;
L_103b5009:;
  /* 103b5009 mov ecx, dword ptr [0x103d0618] */
  ECX = (r32((uint32_t)(0x103d0618)));
  /* 103b500f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_103b5015:;
  /* 103b5015 mov edx, dword ptr [0x103d0610] */
  EDX = (r32((uint32_t)(0x103d0610)));
  /* 103b501b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103b501e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b5021 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b5024 push eax */
  push32((uint32_t)(EAX));
  /* 103b5025 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5028 push ecx */
  push32((uint32_t)(ECX));
  /* 103b5029 call 0x103b51d0 */
  push32(0x103b502eu); f_103b51d0();
  /* 103b502e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5031 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b5034 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5038 jl 0x103b50d1 */
  if ((C.sf!=C.of)) goto L_103b50d1;
  /* 103b503e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5041 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5044 je 0x103b50d1 */
  if (C.zf) goto L_103b50d1;
  /* 103b504a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b504e je 0x103b50c3 */
  if (C.zf) goto L_103b50c3;
  /* 103b5050 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b5052 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5058 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 103b505b push edx */
  push32((uint32_t)(EDX));
  /* 103b505c call 0x103a5980 */
  push32(0x103b5061u); f_103a5980();
  /* 103b5061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5064 jmp 0x103b506f */
  goto L_103b506f;
L_103b5066:;
  /* 103b5066 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5069 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b506c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103b506f:;
  /* 103b506f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5072 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5075 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5079 je 0x103b5090 */
  if (C.zf) goto L_103b5090;
  /* 103b507b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b507e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5081 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5084 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5087 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 103b508b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 103b508e jmp 0x103b5066 */
  goto L_103b5066;
L_103b5090:;
  /* 103b5090 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 103b5095 push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b509a push 2 */
  push32((uint32_t)(0x2u));
  /* 103b509c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b509f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103b50a2 push eax */
  push32((uint32_t)(EAX));
  /* 103b50a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b50a6 push ecx */
  push32((uint32_t)(ECX));
  /* 103b50a7 call 0x103a5380 */
  push32(0x103b50acu); f_103a5380();
  /* 103b50ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b50af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b50b2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b50b6 je 0x103b50c1 */
  if (C.zf) goto L_103b50c1;
  /* 103b50b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b50bb mov dword ptr [0x103d0610], edx */
  w32((uint32_t)(0x103d0610), (EDX));
L_103b50c1:;
  /* 103b50c1 jmp 0x103b50cf */
  goto L_103b50cf;
L_103b50c3:;
  /* 103b50c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b50c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b50c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b50cc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_103b50cf:;
  /* 103b50cf jmp 0x103b5144 */
  goto L_103b5144;
L_103b50d1:;
  /* 103b50d1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b50d5 jne 0x103b513d */
  if (!C.zf) goto L_103b513d;
  /* 103b50d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b50db jge 0x103b50e5 */
  if ((C.sf==C.of)) goto L_103b50e5;
  /* 103b50dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b50e0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b50e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103b50e5:;
  /* 103b50e5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 103b50ea push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b50ef push 2 */
  push32((uint32_t)(0x2u));
  /* 103b50f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b50f4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 103b50fb push edx */
  push32((uint32_t)(EDX));
  /* 103b50fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b50ff push eax */
  push32((uint32_t)(EAX));
  /* 103b5100 call 0x103a5380 */
  push32(0x103b5105u); f_103a5380();
  /* 103b5105 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5108 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b510b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b510f jne 0x103b5119 */
  if (!C.zf) goto L_103b5119;
  /* 103b5111 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b5114 jmp 0x103b51cb */
  goto L_103b51cb;
L_103b5119:;
  /* 103b5119 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b511c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b511f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5122 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 103b5125 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5128 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b512b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 103b5133 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5136 mov dword ptr [0x103d0610], eax */
  w32((uint32_t)(0x103d0610), (EAX));
  /* 103b513b jmp 0x103b5144 */
  goto L_103b5144;
L_103b513d:;
  /* 103b513d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b513f jmp 0x103b51cb */
  goto L_103b51cb;
L_103b5144:;
  /* 103b5144 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5148 je 0x103b51c9 */
  if (C.zf) goto L_103b51c9;
  /* 103b514a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 103b514f push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b5154 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b5156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5159 push ecx */
  push32((uint32_t)(ECX));
  /* 103b515a call 0x103a7d20 */
  push32(0x103b515fu); f_103a7d20();
  /* 103b515f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5162 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5165 push eax */
  push32((uint32_t)(EAX));
  /* 103b5166 call 0x103a4ef0 */
  push32(0x103b516bu); f_103a4ef0();
  /* 103b516b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b516e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103b5171 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5175 je 0x103b51c9 */
  if (C.zf) goto L_103b51c9;
  /* 103b5177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b517a push edx */
  push32((uint32_t)(EDX));
  /* 103b517b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b517e push eax */
  push32((uint32_t)(EAX));
  /* 103b517f call 0x103a7ea0 */
  push32(0x103b5184u); f_103a7ea0();
  /* 103b5184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5187 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103b518a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b518d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b5190 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5192 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103b5195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b5198 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103b519b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b519e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b51a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b51a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103b51a7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103b51a9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b51ab not edx */
  EDX = (~(EDX));
  /* 103b51ad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 103b51b0 push edx */
  push32((uint32_t)(EDX));
  /* 103b51b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b51b4 push eax */
  push32((uint32_t)(EAX));
  /* 103b51b5 call dword ptr [0x103d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d32a0))), 0x103b51bbu);
  /* 103b51bb push 2 */
  push32((uint32_t)(0x2u));
  /* 103b51bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b51c0 push ecx */
  push32((uint32_t)(ECX));
  /* 103b51c1 call 0x103a5980 */
  push32(0x103b51c6u); f_103a5980();
  /* 103b51c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b51c9:;
  /* 103b51c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b51cb:;
  /* 103b51cb pop esi */
  ESI = (pop32());
  /* 103b51cc mov esp, ebp */
  ESP = (EBP);
  /* 103b51ce pop ebp */
  EBP = (pop32());
  /* 103b51cf ret  */
  ESPCHK(0x103b4ef0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x103b51d0 (124 bytes, 47 insns) */
void f_103b51d0(void) {
  FTRACE(0x103b51d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b51d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103b51d1 mov ebp, esp */
  EBP = (ESP);
  /* 103b51d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103b51d4 mov eax, dword ptr [0x103d0610] */
  EAX = (r32((uint32_t)(0x103d0610)));
  /* 103b51d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103b51dc jmp 0x103b51e7 */
  goto L_103b51e7;
L_103b51de:;
  /* 103b51de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b51e1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b51e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103b51e7:;
  /* 103b51e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b51ea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b51ed je 0x103b523a */
  if (C.zf) goto L_103b523a;
  /* 103b51ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b51f2 push eax */
  push32((uint32_t)(EAX));
  /* 103b51f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b51f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b51f8 push edx */
  push32((uint32_t)(EDX));
  /* 103b51f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b51fc push eax */
  push32((uint32_t)(EAX));
  /* 103b51fd call 0x103b49a0 */
  push32(0x103b5202u); f_103b49a0();
  /* 103b5202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103b5207 jne 0x103b5238 */
  if (!C.zf) goto L_103b5238;
  /* 103b5209 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b520c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b520e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b5211 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 103b5215 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5218 je 0x103b522a */
  if (C.zf) goto L_103b522a;
  /* 103b521a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b521d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b521f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b5222 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 103b5226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b5228 jne 0x103b5238 */
  if (!C.zf) goto L_103b5238;
L_103b522a:;
  /* 103b522a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b522d sub eax, dword ptr [0x103d0610] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d0610))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b5233 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103b5236 jmp 0x103b5248 */
  goto L_103b5248;
L_103b5238:;
  /* 103b5238 jmp 0x103b51de */
  goto L_103b51de;
L_103b523a:;
  /* 103b523a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b523d sub eax, dword ptr [0x103d0610] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103d0610))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b5243 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103b5246 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_103b5248:;
  /* 103b5248 mov esp, ebp */
  ESP = (EBP);
  /* 103b524a pop ebp */
  EBP = (pop32());
  /* 103b524b ret  */
  ESPCHK(0x103b51d0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x103b5250 (238 bytes, 80 insns) */
void f_103b5250(void) {
  FTRACE(0x103b5250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b5250 push ebp */
  push32((uint32_t)(EBP));
  /* 103b5251 mov ebp, esp */
  EBP = (ESP);
  /* 103b5253 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b5256 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 103b525d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5260 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b5263 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5267 jne 0x103b5270 */
  if (!C.zf) goto L_103b5270;
  /* 103b5269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b526b jmp 0x103b533a */
  goto L_103b533a;
L_103b5270:;
  /* 103b5270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5273 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b5275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5278 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b527b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103b527e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b5280 je 0x103b528d */
  if (C.zf) goto L_103b528d;
  /* 103b5282 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b5285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5288 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103b528b jmp 0x103b5270 */
  goto L_103b5270;
L_103b528d:;
  /* 103b528d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 103b5292 push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b5297 push 2 */
  push32((uint32_t)(0x2u));
  /* 103b5299 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103b529c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 103b52a3 push eax */
  push32((uint32_t)(EAX));
  /* 103b52a4 call 0x103a4ef0 */
  push32(0x103b52a9u); f_103a4ef0();
  /* 103b52a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b52ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103b52af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b52b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103b52b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b52b9 jne 0x103b52c5 */
  if (!C.zf) goto L_103b52c5;
  /* 103b52bb push 9 */
  push32((uint32_t)(0x9u));
  /* 103b52bd call 0x103a3e60 */
  push32(0x103b52c2u); f_103a3e60();
  /* 103b52c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b52c5:;
  /* 103b52c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b52c8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103b52cb:;
  /* 103b52cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b52ce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b52d1 je 0x103b532e */
  if (C.zf) goto L_103b532e;
  /* 103b52d3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 103b52d8 push 0x103ccbf0 */
  push32((uint32_t)(0x103ccbf0u));
  /* 103b52dd push 2 */
  push32((uint32_t)(0x2u));
  /* 103b52df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b52e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103b52e4 push edx */
  push32((uint32_t)(EDX));
  /* 103b52e5 call 0x103a7d20 */
  push32(0x103b52eau); f_103a7d20();
  /* 103b52ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b52ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b52f0 push eax */
  push32((uint32_t)(EAX));
  /* 103b52f1 call 0x103a4ef0 */
  push32(0x103b52f6u); f_103a4ef0();
  /* 103b52f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b52f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b52fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103b52fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5301 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5304 je 0x103b531a */
  if (C.zf) goto L_103b531a;
  /* 103b5306 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b5309 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103b530b push ecx */
  push32((uint32_t)(ECX));
  /* 103b530c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b530f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103b5311 push eax */
  push32((uint32_t)(EAX));
  /* 103b5312 call 0x103a7ea0 */
  push32(0x103b5317u); f_103a7ea0();
  /* 103b5317 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103b531a:;
  /* 103b531a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103b531d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5320 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103b5323 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5326 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5329 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103b532c jmp 0x103b52cb */
  goto L_103b52cb;
L_103b532e:;
  /* 103b532e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103b5331 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103b5337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103b533a:;
  /* 103b533a mov esp, ebp */
  ESP = (EBP);
  /* 103b533c pop ebp */
  EBP = (pop32());
  /* 103b533d ret  */
  ESPCHK(0x103b5250u, _esp0);
  ESP += 4; return;
}

/* FUN_10015340 @ 0x103b5340 (237 bytes, 81 insns) */
void f_103b5340(void) {
  FTRACE(0x103b5340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b5340 push ebp */
  push32((uint32_t)(EBP));
  /* 103b5341 mov ebp, esp */
  EBP = (ESP);
  /* 103b5343 push ecx */
  push32((uint32_t)(ECX));
  /* 103b5344 cmp dword ptr [0x103d1d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b534b jne 0x103b5362 */
  if (!C.zf) goto L_103b5362;
  /* 103b534d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103b5350 push eax */
  push32((uint32_t)(EAX));
  /* 103b5351 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5354 push ecx */
  push32((uint32_t)(ECX));
  /* 103b5355 call 0x103b5440 */
  push32(0x103b535au); f_103b5440();
  /* 103b535a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b535d jmp 0x103b5429 */
  goto L_103b5429;
L_103b5362:;
  /* 103b5362 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103b5364 call 0x103a88f0 */
  push32(0x103b5369u); f_103a88f0();
  /* 103b5369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b536c jmp 0x103b5377 */
  goto L_103b5377;
L_103b536e:;
  /* 103b536e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5371 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5374 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_103b5377:;
  /* 103b5377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b537a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 103b537e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 103b5382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b5385 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b538b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103b538d je 0x103b540b */
  if (C.zf) goto L_103b540b;
  /* 103b538f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b5392 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b5397 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b5399 mov cl, byte ptr [eax + 0x103d1e61] */
  CL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103b539f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103b53a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b53a4 je 0x103b53f6 */
  if (C.zf) goto L_103b53f6;
  /* 103b53a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b53a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b53ac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103b53af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b53b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b53b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b53b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103b53b8 jne 0x103b53c8 */
  if (!C.zf) goto L_103b53c8;
  /* 103b53ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103b53bc call 0x103a8990 */
  push32(0x103b53c1u); f_103a8990();
  /* 103b53c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b53c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b53c6 jmp 0x103b5429 */
  goto L_103b5429;
L_103b53c8:;
  /* 103b53c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b53cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b53d1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103b53d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b53d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103b53d9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103b53db or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103b53dd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b53e0 jne 0x103b53f4 */
  if (!C.zf) goto L_103b53f4;
  /* 103b53e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103b53e4 call 0x103a8990 */
  push32(0x103b53e9u); f_103a8990();
  /* 103b53e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b53ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b53ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103b53f2 jmp 0x103b5429 */
  goto L_103b5429;
L_103b53f4:;
  /* 103b53f4 jmp 0x103b5406 */
  goto L_103b5406;
L_103b53f6:;
  /* 103b53f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b53f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103b53ff cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5402 jne 0x103b5406 */
  if (!C.zf) goto L_103b5406;
  /* 103b5404 jmp 0x103b540b */
  goto L_103b540b;
L_103b5406:;
  /* 103b5406 jmp 0x103b536e */
  goto L_103b536e;
L_103b540b:;
  /* 103b540b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103b540d call 0x103a8990 */
  push32(0x103b5412u); f_103a8990();
  /* 103b5412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103b5418 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b541d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103b5420 jne 0x103b5427 */
  if (!C.zf) goto L_103b5427;
  /* 103b5422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103b5425 jmp 0x103b5429 */
  goto L_103b5429;
L_103b5427:;
  /* 103b5427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103b5429:;
  /* 103b5429 mov esp, ebp */
  ESP = (EBP);
  /* 103b542b pop ebp */
  EBP = (pop32());
  /* 103b542c ret  */
  ESPCHK(0x103b5340u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x103b5440 (193 bytes, 87 insns) */
void f_103b5440(void) {
  FTRACE(0x103b5440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b5440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b5442 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 103b5446 push ebx */
  push32((uint32_t)(EBX));
  /* 103b5447 mov ebx, eax */
  EBX = (EAX);
  /* 103b5449 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103b544c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 103b5450 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 103b5456 je 0x103b546b */
  if (C.zf) goto L_103b546b;
L_103b5458:;
  /* 103b5458 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 103b545a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103b545b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b545d je 0x103b5430 */
  if (C.zf) { jmp_ind(0x103b5430u); return; }
  /* 103b545f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 103b5461 je 0x103b54b4 */
  if (C.zf) goto L_103b54b4;
  /* 103b5463 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 103b5469 jne 0x103b5458 */
  if (!C.zf) goto L_103b5458;
L_103b546b:;
  /* 103b546b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 103b546d push edi */
  push32((uint32_t)(EDI));
  /* 103b546e mov eax, ebx */
  EAX = (EBX);
  /* 103b5470 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 103b5473 push esi */
  push32((uint32_t)(ESI));
  /* 103b5474 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_103b5476:;
  /* 103b5476 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 103b5478 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 103b547d mov eax, ecx */
  EAX = (ECX);
  /* 103b547f mov esi, edi */
  ESI = (EDI);
  /* 103b5481 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 103b5483 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5485 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5487 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103b548a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103b548d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 103b548f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 103b5491 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103b5494 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 103b549a jne 0x103b54b8 */
  if (!C.zf) goto L_103b54b8;
  /* 103b549c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 103b54a1 je 0x103b5476 */
  if (C.zf) goto L_103b5476;
  /* 103b54a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 103b54a8 jne 0x103b54b2 */
  if (!C.zf) goto L_103b54b2;
  /* 103b54aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 103b54b0 jne 0x103b5476 */
  if (!C.zf) goto L_103b5476;
L_103b54b2:;
  /* 103b54b2 pop esi */
  ESI = (pop32());
  /* 103b54b3 pop edi */
  EDI = (pop32());
L_103b54b4:;
  /* 103b54b4 pop ebx */
  EBX = (pop32());
  /* 103b54b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103b54b7 ret  */
  ESPCHK(0x103b5440u, _esp0);
  ESP += 4; return;
L_103b54b8:;
  /* 103b54b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 103b54bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b54bd je 0x103b54f5 */
  if (C.zf) goto L_103b54f5;
  /* 103b54bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103b54c1 je 0x103b54b2 */
  if (C.zf) goto L_103b54b2;
  /* 103b54c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b54c5 je 0x103b54ee */
  if (C.zf) goto L_103b54ee;
  /* 103b54c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103b54c9 je 0x103b54b2 */
  if (C.zf) goto L_103b54b2;
  /* 103b54cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103b54ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b54d0 je 0x103b54e7 */
  if (C.zf) goto L_103b54e7;
  /* 103b54d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103b54d4 je 0x103b54b2 */
  if (C.zf) goto L_103b54b2;
  /* 103b54d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103b54d8 je 0x103b54e0 */
  if (C.zf) goto L_103b54e0;
  /* 103b54da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103b54dc je 0x103b54b2 */
  if (C.zf) goto L_103b54b2;
  /* 103b54de jmp 0x103b5476 */
  goto L_103b5476;
L_103b54e0:;
  /* 103b54e0 pop esi */
  ESI = (pop32());
  /* 103b54e1 pop edi */
  EDI = (pop32());
  /* 103b54e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 103b54e5 pop ebx */
  EBX = (pop32());
  /* 103b54e6 ret  */
  ESPCHK(0x103b5440u, _esp0);
  ESP += 4; return;
L_103b54e7:;
  /* 103b54e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 103b54ea pop esi */
  ESI = (pop32());
  /* 103b54eb pop edi */
  EDI = (pop32());
  /* 103b54ec pop ebx */
  EBX = (pop32());
  /* 103b54ed ret  */
  ESPCHK(0x103b5440u, _esp0);
  ESP += 4; return;
L_103b54ee:;
  /* 103b54ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 103b54f1 pop esi */
  ESI = (pop32());
  /* 103b54f2 pop edi */
  EDI = (pop32());
  /* 103b54f3 pop ebx */
  EBX = (pop32());
  /* 103b54f4 ret  */
  ESPCHK(0x103b5440u, _esp0);
  ESP += 4; return;
L_103b54f5:;
  /* 103b54f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 103b54f8 pop esi */
  ESI = (pop32());
  /* 103b54f9 pop edi */
  EDI = (pop32());
  /* 103b54fa pop ebx */
  EBX = (pop32());
  /* 103b54fb ret  */
  ESPCHK(0x103b5440u, _esp0);
  ESP += 4; return;
  /* 103b54fc jmp dword ptr [0x103d3328] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x103d3328)))); return;
}

/* RtlUnwind @ 0x103b564c (6 bytes, 1 insns) */
void f_103b564c(void) {
  FTRACE(0x103b564cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103b564c jmp dword ptr [0x103d32dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x103d32dc)))); return;
}

