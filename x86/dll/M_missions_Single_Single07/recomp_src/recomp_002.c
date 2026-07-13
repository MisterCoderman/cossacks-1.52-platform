#include "recomp.h"

/* FUN_10011a10 @ 0x10d61a10 (878 bytes, 273 insns) */
void f_10d61a10(void) {
  FTRACE(0x10d61a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61a11 mov ebp, esp */
  EBP = (ESP);
  /* 10d61a13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61a16 push esi */
  push32((uint32_t)(ESI));
  /* 10d61a17 mov eax, dword ptr [0x10d7fc98] */
  EAX = (r32((uint32_t)(0x10d7fc98)));
  /* 10d61a1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d61a1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d61a26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d61a2d jmp 0x10d61a38 */
  goto L_10d61a38;
L_10d61a2f:;
  /* 10d61a2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61a32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61a35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d61a38:;
  /* 10d61a38 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61a3c jae 0x10d61a71 */
  if (!C.cf) goto L_10d61a71;
  /* 10d61a3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61a41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61a44 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d61a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61a48 call 0x10d57890 */
  push32(0x10d61a4du); f_10d57890();
  /* 10d61a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61a50 mov esi, eax */
  ESI = (EAX);
  /* 10d61a52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61a55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61a58 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10d61a5c push ecx */
  push32((uint32_t)(ECX));
  /* 10d61a5d call 0x10d57890 */
  push32(0x10d61a62u); f_10d57890();
  /* 10d61a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61a65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61a68 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d61a6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d61a6f jmp 0x10d61a2f */
  goto L_10d61a2f;
L_10d61a71:;
  /* 10d61a71 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d61a78 jmp 0x10d61a83 */
  goto L_10d61a83;
L_10d61a7a:;
  /* 10d61a7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61a7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61a80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d61a83:;
  /* 10d61a83 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61a87 jae 0x10d61abd */
  if (!C.cf) goto L_10d61abd;
  /* 10d61a89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61a8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61a8f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d61a93 push eax */
  push32((uint32_t)(EAX));
  /* 10d61a94 call 0x10d57890 */
  push32(0x10d61a99u); f_10d57890();
  /* 10d61a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61a9c mov esi, eax */
  ESI = (EAX);
  /* 10d61a9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61aa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61aa4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d61aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10d61aa9 call 0x10d57890 */
  push32(0x10d61aaeu); f_10d57890();
  /* 10d61aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ab1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ab4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d61ab8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d61abb jmp 0x10d61a7a */
  goto L_10d61a7a;
L_10d61abd:;
  /* 10d61abd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61ac0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10d61ac6 push eax */
  push32((uint32_t)(EAX));
  /* 10d61ac7 call 0x10d57890 */
  push32(0x10d61accu); f_10d57890();
  /* 10d61acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61acf mov esi, eax */
  ESI = (EAX);
  /* 10d61ad1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61ad4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10d61ada push edx */
  push32((uint32_t)(EDX));
  /* 10d61adb call 0x10d57890 */
  push32(0x10d61ae0u); f_10d57890();
  /* 10d61ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ae3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ae6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d61aea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d61aed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61af0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10d61af6 push edx */
  push32((uint32_t)(EDX));
  /* 10d61af7 call 0x10d57890 */
  push32(0x10d61afcu); f_10d57890();
  /* 10d61afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61aff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61b02 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d61b06 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d61b09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61b0c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10d61b12 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61b13 call 0x10d57890 */
  push32(0x10d61b18u); f_10d57890();
  /* 10d61b18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b1b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61b1e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d61b22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d61b25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61b28 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10d61b2e push edx */
  push32((uint32_t)(EDX));
  /* 10d61b2f call 0x10d57890 */
  push32(0x10d61b34u); f_10d57890();
  /* 10d61b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61b3a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d61b3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d61b41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d61b44 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b49 push eax */
  push32((uint32_t)(EAX));
  /* 10d61b4a call 0x10d54a40 */
  push32(0x10d61b4fu); f_10d54a40();
  /* 10d61b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d61b55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61b59 je 0x10d61d76 */
  if (C.zf) goto L_10d61d76;
  /* 10d61b5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61b62 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d61b65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61b68 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b6e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d61b71 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10d61b76 mov eax, dword ptr [0x10d7fc98] */
  EAX = (r32((uint32_t)(0x10d7fc98)));
  /* 10d61b7b push eax */
  push32((uint32_t)(EAX));
  /* 10d61b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61b7f push ecx */
  push32((uint32_t)(ECX));
  /* 10d61b80 call 0x10d5b340 */
  push32(0x10d61b85u); f_10d5b340();
  /* 10d61b85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b88 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d61b8f jmp 0x10d61b9a */
  goto L_10d61b9a;
L_10d61b91:;
  /* 10d61b91 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61b94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61b97 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d61b9a:;
  /* 10d61b9a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61b9e jae 0x10d61c0e */
  if (!C.cf) goto L_10d61c0e;
  /* 10d61ba0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61ba3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61ba6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61ba9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10d61bac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61baf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61bb2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d61bb5 push edx */
  push32((uint32_t)(EDX));
  /* 10d61bb6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61bb9 push eax */
  push32((uint32_t)(EAX));
  /* 10d61bba call 0x10d57a10 */
  push32(0x10d61bbfu); f_10d57a10();
  /* 10d61bbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10d61bc3 call 0x10d57890 */
  push32(0x10d61bc8u); f_10d57890();
  /* 10d61bc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61bcb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61bce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d61bd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d61bd5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61bd8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61bdb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61bde mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10d61be2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61be5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61be8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10d61bec push edx */
  push32((uint32_t)(EDX));
  /* 10d61bed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10d61bf1 call 0x10d57a10 */
  push32(0x10d61bf6u); f_10d57a10();
  /* 10d61bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10d61bfa call 0x10d57890 */
  push32(0x10d61bffu); f_10d57890();
  /* 10d61bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61c02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c05 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d61c09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d61c0c jmp 0x10d61b91 */
  goto L_10d61b91;
L_10d61c0e:;
  /* 10d61c0e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d61c15 jmp 0x10d61c20 */
  goto L_10d61c20;
L_10d61c17:;
  /* 10d61c17 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61c1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61c1d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d61c20:;
  /* 10d61c20 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61c24 jae 0x10d61c96 */
  if (!C.cf) goto L_10d61c96;
  /* 10d61c26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61c29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61c2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c2f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10d61c33 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61c36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61c39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d61c3d push eax */
  push32((uint32_t)(EAX));
  /* 10d61c3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c41 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61c42 call 0x10d57a10 */
  push32(0x10d61c47u); f_10d57a10();
  /* 10d61c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61c4a push eax */
  push32((uint32_t)(EAX));
  /* 10d61c4b call 0x10d57890 */
  push32(0x10d61c50u); f_10d57890();
  /* 10d61c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61c53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c56 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d61c5a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d61c5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61c60 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61c63 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c66 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10d61c6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61c6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61c70 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d61c74 push eax */
  push32((uint32_t)(EAX));
  /* 10d61c75 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c78 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61c79 call 0x10d57a10 */
  push32(0x10d61c7eu); f_10d57a10();
  /* 10d61c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61c81 push eax */
  push32((uint32_t)(EAX));
  /* 10d61c82 call 0x10d57890 */
  push32(0x10d61c87u); f_10d57890();
  /* 10d61c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61c8a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c8d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d61c91 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d61c94 jmp 0x10d61c17 */
  goto L_10d61c17;
L_10d61c96:;
  /* 10d61c96 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61c99 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61c9c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10d61ca2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61ca5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10d61cab push ecx */
  push32((uint32_t)(ECX));
  /* 10d61cac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61caf push edx */
  push32((uint32_t)(EDX));
  /* 10d61cb0 call 0x10d57a10 */
  push32(0x10d61cb5u); f_10d57a10();
  /* 10d61cb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10d61cb9 call 0x10d57890 */
  push32(0x10d61cbeu); f_10d57890();
  /* 10d61cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61cc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61cc4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d61cc8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d61ccb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61cce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61cd1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10d61cd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61cda mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10d61ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10d61ce1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61ce5 call 0x10d57a10 */
  push32(0x10d61ceau); f_10d57a10();
  /* 10d61cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ced push eax */
  push32((uint32_t)(EAX));
  /* 10d61cee call 0x10d57890 */
  push32(0x10d61cf3u); f_10d57890();
  /* 10d61cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61cf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61cf9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d61cfd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d61d00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61d03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d06 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10d61d0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61d0f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10d61d15 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61d16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d19 push edx */
  push32((uint32_t)(EDX));
  /* 10d61d1a call 0x10d57a10 */
  push32(0x10d61d1fu); f_10d57a10();
  /* 10d61d1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61d22 push eax */
  push32((uint32_t)(EAX));
  /* 10d61d23 call 0x10d57890 */
  push32(0x10d61d28u); f_10d57890();
  /* 10d61d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61d2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d2e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d61d32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d61d35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61d38 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d3b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10d61d41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61d44 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10d61d4a push eax */
  push32((uint32_t)(EAX));
  /* 10d61d4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d4e push ecx */
  push32((uint32_t)(ECX));
  /* 10d61d4f call 0x10d57a10 */
  push32(0x10d61d54u); f_10d57a10();
  /* 10d61d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61d57 push eax */
  push32((uint32_t)(EAX));
  /* 10d61d58 call 0x10d57890 */
  push32(0x10d61d5du); f_10d57890();
  /* 10d61d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61d60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d63 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10d61d67 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d61d6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d61d6d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d61d70 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10d61d76:;
  /* 10d61d76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61d79 pop esi */
  ESI = (pop32());
  /* 10d61d7a mov esp, ebp */
  ESP = (EBP);
  /* 10d61d7c pop ebp */
  EBP = (pop32());
  /* 10d61d7d ret  */
  ESPCHK(0x10d61a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x10d61d80 (31 bytes, 15 insns) */
void f_10d61d80(void) {
  FTRACE(0x10d61d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61d81 mov ebp, esp */
  EBP = (ESP);
  /* 10d61d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d61d85 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61d88 push eax */
  push32((uint32_t)(EAX));
  /* 10d61d89 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61d8c push ecx */
  push32((uint32_t)(ECX));
  /* 10d61d8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61d90 push edx */
  push32((uint32_t)(EDX));
  /* 10d61d91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61d94 push eax */
  push32((uint32_t)(EAX));
  /* 10d61d95 call 0x10d61da0 */
  push32(0x10d61d9au); f_10d61da0();
  /* 10d61d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61d9d pop ebp */
  EBP = (pop32());
  /* 10d61d9e ret  */
  ESPCHK(0x10d61d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011da0 @ 0x10d61da0 (394 bytes, 123 insns) */
void f_10d61da0(void) {
  FTRACE(0x10d61da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61da1 mov ebp, esp */
  EBP = (ESP);
  /* 10d61da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61da6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61da9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d61dac push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d61db1 call dword ptr [0x10d8330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8330c))), 0x10d61db7u);
  /* 10d61db7 cmp dword ptr [0x10d8087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61dbe je 0x10d61dde */
  if (C.zf) goto L_10d61dde;
  /* 10d61dc0 push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d61dc5 call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d61dcbu);
  /* 10d61dcb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d61dcd call 0x10d58460 */
  push32(0x10d61dd2u); f_10d58460();
  /* 10d61dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61dd5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d61ddc jmp 0x10d61de5 */
  goto L_10d61de5;
L_10d61dde:;
  /* 10d61dde mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d61de5:;
  /* 10d61de5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61de9 jne 0x10d61df6 */
  if (!C.zf) goto L_10d61df6;
  /* 10d61deb mov ecx, dword ptr [0x10d7fc98] */
  ECX = (r32((uint32_t)(0x10d7fc98)));
  /* 10d61df1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d61df4 jmp 0x10d61dfc */
  goto L_10d61dfc;
L_10d61df6:;
  /* 10d61df6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d61df9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d61dfc:;
  /* 10d61dfc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d61dff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d61e02:;
  /* 10d61e02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61e06 jbe 0x10d61ef3 */
  if ((C.cf||C.zf)) goto L_10d61ef3;
  /* 10d61e0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d61e11 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10d61e14 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d61e18 je 0x10d61e22 */
  if (C.zf) goto L_10d61e22;
  /* 10d61e1a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d61e1e je 0x10d61e27 */
  if (C.zf) goto L_10d61e27;
  /* 10d61e20 jmp 0x10d61e81 */
  goto L_10d61e81;
L_10d61e22:;
  /* 10d61e22 jmp 0x10d61ef3 */
  goto L_10d61ef3;
L_10d61e27:;
  /* 10d61e27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61e2d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10d61e30 mov dword ptr [0x10d80868], 0 */
  w32((uint32_t)(0x10d80868), (0x0u));
  /* 10d61e3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e3d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d61e40 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61e43 jne 0x10d61e58 */
  if (!C.zf) goto L_10d61e58;
  /* 10d61e45 mov dword ptr [0x10d80868], 1 */
  w32((uint32_t)(0x10d80868), (0x1u));
  /* 10d61e4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61e55 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d61e58:;
  /* 10d61e58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d61e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10d61e5c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10d61e5f push edx */
  push32((uint32_t)(EDX));
  /* 10d61e60 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10d61e63 push eax */
  push32((uint32_t)(EAX));
  /* 10d61e64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61e67 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61e68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d61e6d push eax */
  push32((uint32_t)(EAX));
  /* 10d61e6e call 0x10d61f30 */
  push32(0x10d61e73u); f_10d61f30();
  /* 10d61e73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61e76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61e7c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d61e7f jmp 0x10d61eee */
  goto L_10d61eee;
L_10d61e81:;
  /* 10d61e81 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d61e86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d61e88 mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d61e8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d61e90 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d61e94 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d61e9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d61e9c je 0x10d61ec9 */
  if (C.zf) goto L_10d61ec9;
  /* 10d61e9e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61ea2 jbe 0x10d61ec9 */
  if ((C.cf||C.zf)) goto L_10d61ec9;
  /* 10d61ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61ea7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61eaa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d61eac mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d61eae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61eb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61eb4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d61eb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61eba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ebd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d61ec0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61ec3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61ec6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d61ec9:;
  /* 10d61ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61ecc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61ecf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d61ed1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d61ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61ed6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ed9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d61edc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61edf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61ee2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d61ee5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61ee8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61eeb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d61eee:;
  /* 10d61eee jmp 0x10d61e02 */
  goto L_10d61e02;
L_10d61ef3:;
  /* 10d61ef3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61ef7 je 0x10d61f05 */
  if (C.zf) goto L_10d61f05;
  /* 10d61ef9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d61efb call 0x10d58500 */
  push32(0x10d61f00u); f_10d58500();
  /* 10d61f00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61f03 jmp 0x10d61f10 */
  goto L_10d61f10;
L_10d61f05:;
  /* 10d61f05 push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d61f0a call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d61f10u);
L_10d61f10:;
  /* 10d61f10 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61f14 jbe 0x10d61f24 */
  if ((C.cf||C.zf)) goto L_10d61f24;
  /* 10d61f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d61f19 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d61f1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61f1f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61f22 jmp 0x10d61f26 */
  goto L_10d61f26;
L_10d61f24:;
  /* 10d61f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d61f26:;
  /* 10d61f26 mov esp, ebp */
  ESP = (EBP);
  /* 10d61f28 pop ebp */
  EBP = (pop32());
  /* 10d61f29 ret  */
  ESPCHK(0x10d61da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f30 @ 0x10d61f30 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10d61f30(void) {
  FTRACE(0x10d61f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d61f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d61f31 mov ebp, esp */
  EBP = (ESP);
  /* 10d61f33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61f36 push esi */
  push32((uint32_t)(ESI));
  /* 10d61f37 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10d61f3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d61f3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61f41 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d61f44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d61f47 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61f4b ja 0x10d62498 */
  if ((!C.cf&&!C.zf)) goto L_10d62498;
  /* 10d61f51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d61f54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d61f56 mov dl, byte ptr [eax + 0x10d624f9] */
  DL = (r8((uint32_t)(EAX + 0x10d624f9)));
  /* 10d61f5c jmp dword ptr [edx*4 + 0x10d6249d] */
  switch (EDX) {
    case 0: goto L_10d62476;
    case 1: goto L_10d61f85;
    case 2: goto L_10d61fcb;
    case 3: goto L_10d62118;
    case 4: goto L_10d62140;
    case 5: goto L_10d621df;
    case 6: goto L_10d6224b;
    case 7: goto L_10d62274;
    case 8: goto L_10d622b5;
    case 9: goto L_10d62397;
    case 10: goto L_10d623fe;
    case 11: goto L_10d6244b;
    case 12: goto L_10d61f63;
    case 13: goto L_10d61fa8;
    case 14: goto L_10d61fee;
    case 15: goto L_10d620ee;
    case 16: goto L_10d62185;
    case 17: goto L_10d621b2;
    case 18: goto L_10d62207;
    case 19: goto L_10d6228b;
    case 20: goto L_10d62339;
    case 21: goto L_10d623c8;
    case 22: goto L_10d62498;
    default: x86_unimpl("switch@0x10d61f5c out of table"); return;
  }
L_10d61f63:;
  /* 10d61f63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61f66 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61f67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61f6a push edx */
  push32((uint32_t)(EDX));
  /* 10d61f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61f6e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d61f71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d61f74 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d61f77 push eax */
  push32((uint32_t)(EAX));
  /* 10d61f78 call 0x10d62550 */
  push32(0x10d61f7du); f_10d62550();
  /* 10d61f7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61f80 jmp 0x10d62498 */
  goto L_10d62498;
L_10d61f85:;
  /* 10d61f85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61f88 push ecx */
  push32((uint32_t)(ECX));
  /* 10d61f89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61f8c push edx */
  push32((uint32_t)(EDX));
  /* 10d61f8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61f90 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d61f93 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d61f96 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10d61f9a push eax */
  push32((uint32_t)(EAX));
  /* 10d61f9b call 0x10d62550 */
  push32(0x10d61fa0u); f_10d62550();
  /* 10d61fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61fa3 jmp 0x10d62498 */
  goto L_10d62498;
L_10d61fa8:;
  /* 10d61fa8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61fab push ecx */
  push32((uint32_t)(ECX));
  /* 10d61fac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61faf push edx */
  push32((uint32_t)(EDX));
  /* 10d61fb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61fb3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d61fb6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d61fb9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10d61fbd push eax */
  push32((uint32_t)(EAX));
  /* 10d61fbe call 0x10d62550 */
  push32(0x10d61fc3u); f_10d62550();
  /* 10d61fc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61fc6 jmp 0x10d62498 */
  goto L_10d62498;
L_10d61fcb:;
  /* 10d61fcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d61fce push ecx */
  push32((uint32_t)(ECX));
  /* 10d61fcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d61fd2 push edx */
  push32((uint32_t)(EDX));
  /* 10d61fd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d61fd6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d61fd9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d61fdc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d61fe0 push eax */
  push32((uint32_t)(EAX));
  /* 10d61fe1 call 0x10d62550 */
  push32(0x10d61fe6u); f_10d62550();
  /* 10d61fe6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d61fe9 jmp 0x10d62498 */
  goto L_10d62498;
L_10d61fee:;
  /* 10d61fee cmp dword ptr [0x10d80868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d61ff5 je 0x10d62076 */
  if (C.zf) goto L_10d62076;
  /* 10d61ff7 mov dword ptr [0x10d80868], 0 */
  w32((uint32_t)(0x10d80868), (0x0u));
  /* 10d62001 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62004 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62005 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62008 push edx */
  push32((uint32_t)(EDX));
  /* 10d62009 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6200c push eax */
  push32((uint32_t)(EAX));
  /* 10d6200d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62010 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62011 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62014 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10d6201a push eax */
  push32((uint32_t)(EAX));
  /* 10d6201b call 0x10d62700 */
  push32(0x10d62020u); f_10d62700();
  /* 10d62020 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62023 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62026 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62029 jne 0x10d62030 */
  if (!C.zf) goto L_10d62030;
  /* 10d6202b jmp 0x10d62498 */
  goto L_10d62498;
L_10d62030:;
  /* 10d62030 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62033 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62035 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10d62038 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6203b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d6203d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62040 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d62045 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62048 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d6204a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d6204d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62050 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d62052 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62055 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62056 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62059 push edx */
  push32((uint32_t)(EDX));
  /* 10d6205a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6205d push eax */
  push32((uint32_t)(EAX));
  /* 10d6205e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62061 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62062 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62065 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10d6206b push eax */
  push32((uint32_t)(EAX));
  /* 10d6206c call 0x10d62700 */
  push32(0x10d62071u); f_10d62700();
  /* 10d62071 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62074 jmp 0x10d620e9 */
  goto L_10d620e9;
L_10d62076:;
  /* 10d62076 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62079 push ecx */
  push32((uint32_t)(ECX));
  /* 10d6207a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6207d push edx */
  push32((uint32_t)(EDX));
  /* 10d6207e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62081 push eax */
  push32((uint32_t)(EAX));
  /* 10d62082 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62085 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62086 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62089 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10d6208f push eax */
  push32((uint32_t)(EAX));
  /* 10d62090 call 0x10d62700 */
  push32(0x10d62095u); f_10d62700();
  /* 10d62095 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62098 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6209b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6209e jne 0x10d620a5 */
  if (!C.zf) goto L_10d620a5;
  /* 10d620a0 jmp 0x10d62498 */
  goto L_10d62498;
L_10d620a5:;
  /* 10d620a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d620a8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d620aa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10d620ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d620b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d620b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d620b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d620b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d620ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d620bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d620bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d620c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d620c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d620c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d620ca push ecx */
  push32((uint32_t)(ECX));
  /* 10d620cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d620ce push edx */
  push32((uint32_t)(EDX));
  /* 10d620cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d620d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d620d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d620d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d620d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d620da mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10d620e0 push eax */
  push32((uint32_t)(EAX));
  /* 10d620e1 call 0x10d62700 */
  push32(0x10d620e6u); f_10d62700();
  /* 10d620e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d620e9:;
  /* 10d620e9 jmp 0x10d62498 */
  goto L_10d62498;
L_10d620ee:;
  /* 10d620ee mov ecx, dword ptr [0x10d80868] */
  ECX = (r32((uint32_t)(0x10d80868)));
  /* 10d620f4 mov dword ptr [0x10d80878], ecx */
  w32((uint32_t)(0x10d80878), (ECX));
  /* 10d620fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d620fd push edx */
  push32((uint32_t)(EDX));
  /* 10d620fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62101 push eax */
  push32((uint32_t)(EAX));
  /* 10d62102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62104 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62107 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d6210a push edx */
  push32((uint32_t)(EDX));
  /* 10d6210b call 0x10d625a0 */
  push32(0x10d62110u); f_10d625a0();
  /* 10d62110 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62113 jmp 0x10d62498 */
  goto L_10d62498;
L_10d62118:;
  /* 10d62118 mov eax, dword ptr [0x10d80868] */
  EAX = (r32((uint32_t)(0x10d80868)));
  /* 10d6211d mov dword ptr [0x10d80878], eax */
  w32((uint32_t)(0x10d80878), (EAX));
  /* 10d62122 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62125 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62126 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62129 push edx */
  push32((uint32_t)(EDX));
  /* 10d6212a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d6212c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6212f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d62132 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62133 call 0x10d625a0 */
  push32(0x10d62138u); f_10d625a0();
  /* 10d62138 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6213b jmp 0x10d62498 */
  goto L_10d62498;
L_10d62140:;
  /* 10d62140 mov edx, dword ptr [0x10d80868] */
  EDX = (r32((uint32_t)(0x10d80868)));
  /* 10d62146 mov dword ptr [0x10d80878], edx */
  w32((uint32_t)(0x10d80878), (EDX));
  /* 10d6214c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6214f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d62152 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d62153 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10d62158 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d6215a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d6215d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62161 jne 0x10d6216a */
  if (!C.zf) goto L_10d6216a;
  /* 10d62163 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10d6216a:;
  /* 10d6216a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6216d push edx */
  push32((uint32_t)(EDX));
  /* 10d6216e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62171 push eax */
  push32((uint32_t)(EAX));
  /* 10d62172 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62177 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62178 call 0x10d625a0 */
  push32(0x10d6217du); f_10d625a0();
  /* 10d6217d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62180 jmp 0x10d62498 */
  goto L_10d62498;
L_10d62185:;
  /* 10d62185 mov edx, dword ptr [0x10d80868] */
  EDX = (r32((uint32_t)(0x10d80868)));
  /* 10d6218b mov dword ptr [0x10d80878], edx */
  w32((uint32_t)(0x10d80878), (EDX));
  /* 10d62191 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62194 push eax */
  push32((uint32_t)(EAX));
  /* 10d62195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62198 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62199 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d6219b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6219e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d621a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d621a4 push eax */
  push32((uint32_t)(EAX));
  /* 10d621a5 call 0x10d625a0 */
  push32(0x10d621aau); f_10d625a0();
  /* 10d621aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d621ad jmp 0x10d62498 */
  goto L_10d62498;
L_10d621b2:;
  /* 10d621b2 mov ecx, dword ptr [0x10d80868] */
  ECX = (r32((uint32_t)(0x10d80868)));
  /* 10d621b8 mov dword ptr [0x10d80878], ecx */
  w32((uint32_t)(0x10d80878), (ECX));
  /* 10d621be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d621c1 push edx */
  push32((uint32_t)(EDX));
  /* 10d621c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d621c5 push eax */
  push32((uint32_t)(EAX));
  /* 10d621c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d621c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d621cb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d621ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d621d1 push edx */
  push32((uint32_t)(EDX));
  /* 10d621d2 call 0x10d625a0 */
  push32(0x10d621d7u); f_10d625a0();
  /* 10d621d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d621da jmp 0x10d62498 */
  goto L_10d62498;
L_10d621df:;
  /* 10d621df mov eax, dword ptr [0x10d80868] */
  EAX = (r32((uint32_t)(0x10d80868)));
  /* 10d621e4 mov dword ptr [0x10d80878], eax */
  w32((uint32_t)(0x10d80878), (EAX));
  /* 10d621e9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d621ec push ecx */
  push32((uint32_t)(ECX));
  /* 10d621ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d621f0 push edx */
  push32((uint32_t)(EDX));
  /* 10d621f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d621f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d621f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d621f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d621fa call 0x10d625a0 */
  push32(0x10d621ffu); f_10d625a0();
  /* 10d621ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62202 jmp 0x10d62498 */
  goto L_10d62498;
L_10d62207:;
  /* 10d62207 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6220a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6220e jg 0x10d6222c */
  if ((!C.zf&&C.sf==C.of)) goto L_10d6222c;
  /* 10d62210 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62213 push eax */
  push32((uint32_t)(EAX));
  /* 10d62214 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62217 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62218 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d6221b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10d62221 push eax */
  push32((uint32_t)(EAX));
  /* 10d62222 call 0x10d62550 */
  push32(0x10d62227u); f_10d62550();
  /* 10d62227 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6222a jmp 0x10d62246 */
  goto L_10d62246;
L_10d6222c:;
  /* 10d6222c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6222f push ecx */
  push32((uint32_t)(ECX));
  /* 10d62230 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62233 push edx */
  push32((uint32_t)(EDX));
  /* 10d62234 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62237 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10d6223d push ecx */
  push32((uint32_t)(ECX));
  /* 10d6223e call 0x10d62550 */
  push32(0x10d62243u); f_10d62550();
  /* 10d62243 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d62246:;
  /* 10d62246 jmp 0x10d62498 */
  goto L_10d62498;
L_10d6224b:;
  /* 10d6224b mov edx, dword ptr [0x10d80868] */
  EDX = (r32((uint32_t)(0x10d80868)));
  /* 10d62251 mov dword ptr [0x10d80878], edx */
  w32((uint32_t)(0x10d80878), (EDX));
  /* 10d62257 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6225a push eax */
  push32((uint32_t)(EAX));
  /* 10d6225b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6225e push ecx */
  push32((uint32_t)(ECX));
  /* 10d6225f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62261 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62264 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62266 push eax */
  push32((uint32_t)(EAX));
  /* 10d62267 call 0x10d625a0 */
  push32(0x10d6226cu); f_10d625a0();
  /* 10d6226c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6226f jmp 0x10d62498 */
  goto L_10d62498;
L_10d62274:;
  /* 10d62274 mov ecx, dword ptr [0x10d80868] */
  ECX = (r32((uint32_t)(0x10d80868)));
  /* 10d6227a mov dword ptr [0x10d80878], ecx */
  w32((uint32_t)(0x10d80878), (ECX));
  /* 10d62280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62283 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10d62286 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d62289 jmp 0x10d622dd */
  goto L_10d622dd;
L_10d6228b:;
  /* 10d6228b mov ecx, dword ptr [0x10d80868] */
  ECX = (r32((uint32_t)(0x10d80868)));
  /* 10d62291 mov dword ptr [0x10d80878], ecx */
  w32((uint32_t)(0x10d80878), (ECX));
  /* 10d62297 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6229a push edx */
  push32((uint32_t)(EDX));
  /* 10d6229b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6229e push eax */
  push32((uint32_t)(EAX));
  /* 10d6229f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d622a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d622a4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d622a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d622a8 call 0x10d625a0 */
  push32(0x10d622adu); f_10d625a0();
  /* 10d622ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d622b0 jmp 0x10d62498 */
  goto L_10d62498;
L_10d622b5:;
  /* 10d622b5 mov eax, dword ptr [0x10d80868] */
  EAX = (r32((uint32_t)(0x10d80868)));
  /* 10d622ba mov dword ptr [0x10d80878], eax */
  w32((uint32_t)(0x10d80878), (EAX));
  /* 10d622bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d622c2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d622c6 jne 0x10d622d1 */
  if (!C.zf) goto L_10d622d1;
  /* 10d622c8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10d622cf jmp 0x10d622dd */
  goto L_10d622dd;
L_10d622d1:;
  /* 10d622d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d622d4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10d622d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d622da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d622dd:;
  /* 10d622dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d622e0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d622e3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d622e6 jge 0x10d622f1 */
  if ((C.sf==C.of)) goto L_10d622f1;
  /* 10d622e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d622ef jmp 0x10d6231e */
  goto L_10d6231e;
L_10d622f1:;
  /* 10d622f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d622f4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d622f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d622f8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10d622fd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d622ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d62302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62305 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d62308 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d62309 mov ecx, 7 */
  ECX = (0x7u);
  /* 10d6230e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d62310 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62313 jl 0x10d6231e */
  if ((C.sf!=C.of)) goto L_10d6231e;
  /* 10d62315 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62318 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6231b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d6231e:;
  /* 10d6231e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62321 push eax */
  push32((uint32_t)(EAX));
  /* 10d62322 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62325 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62326 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6232b push edx */
  push32((uint32_t)(EDX));
  /* 10d6232c call 0x10d625a0 */
  push32(0x10d62331u); f_10d625a0();
  /* 10d62331 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62334 jmp 0x10d62498 */
  goto L_10d62498;
L_10d62339:;
  /* 10d62339 cmp dword ptr [0x10d80868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62340 je 0x10d62370 */
  if (C.zf) goto L_10d62370;
  /* 10d62342 mov dword ptr [0x10d80868], 0 */
  w32((uint32_t)(0x10d80868), (0x0u));
  /* 10d6234c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d6234f push eax */
  push32((uint32_t)(EAX));
  /* 10d62350 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62353 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62354 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62357 push edx */
  push32((uint32_t)(EDX));
  /* 10d62358 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6235b push eax */
  push32((uint32_t)(EAX));
  /* 10d6235c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d6235f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10d62365 push edx */
  push32((uint32_t)(EDX));
  /* 10d62366 call 0x10d62700 */
  push32(0x10d6236bu); f_10d62700();
  /* 10d6236b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6236e jmp 0x10d62392 */
  goto L_10d62392;
L_10d62370:;
  /* 10d62370 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62373 push eax */
  push32((uint32_t)(EAX));
  /* 10d62374 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62377 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62378 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6237b push edx */
  push32((uint32_t)(EDX));
  /* 10d6237c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6237f push eax */
  push32((uint32_t)(EAX));
  /* 10d62380 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62383 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10d62389 push edx */
  push32((uint32_t)(EDX));
  /* 10d6238a call 0x10d62700 */
  push32(0x10d6238fu); f_10d62700();
  /* 10d6238f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d62392:;
  /* 10d62392 jmp 0x10d62498 */
  goto L_10d62498;
L_10d62397:;
  /* 10d62397 mov dword ptr [0x10d80868], 0 */
  w32((uint32_t)(0x10d80868), (0x0u));
  /* 10d623a1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d623a4 push eax */
  push32((uint32_t)(EAX));
  /* 10d623a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d623a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d623a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d623ac push edx */
  push32((uint32_t)(EDX));
  /* 10d623ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d623b0 push eax */
  push32((uint32_t)(EAX));
  /* 10d623b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d623b4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10d623ba push edx */
  push32((uint32_t)(EDX));
  /* 10d623bb call 0x10d62700 */
  push32(0x10d623c0u); f_10d62700();
  /* 10d623c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d623c3 jmp 0x10d62498 */
  goto L_10d62498;
L_10d623c8:;
  /* 10d623c8 mov eax, dword ptr [0x10d80868] */
  EAX = (r32((uint32_t)(0x10d80868)));
  /* 10d623cd mov dword ptr [0x10d80878], eax */
  w32((uint32_t)(0x10d80878), (EAX));
  /* 10d623d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d623d5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d623d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d623d9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10d623de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d623e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d623e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d623e6 push edx */
  push32((uint32_t)(EDX));
  /* 10d623e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d623ea push eax */
  push32((uint32_t)(EAX));
  /* 10d623eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d623ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d623f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d623f1 call 0x10d625a0 */
  push32(0x10d623f6u); f_10d625a0();
  /* 10d623f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d623f9 jmp 0x10d62498 */
  goto L_10d62498;
L_10d623fe:;
  /* 10d623fe mov edx, dword ptr [0x10d80868] */
  EDX = (r32((uint32_t)(0x10d80868)));
  /* 10d62404 mov dword ptr [0x10d80878], edx */
  w32((uint32_t)(0x10d80878), (EDX));
  /* 10d6240a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6240d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d62410 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d62411 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10d62416 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d62418 mov ecx, eax */
  ECX = (EAX);
  /* 10d6241a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6241d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d62420 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62423 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d62426 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d62427 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10d6242c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d6242e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62430 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d62433 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62436 push eax */
  push32((uint32_t)(EAX));
  /* 10d62437 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6243a push ecx */
  push32((uint32_t)(ECX));
  /* 10d6243b push 4 */
  push32((uint32_t)(0x4u));
  /* 10d6243d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62440 push edx */
  push32((uint32_t)(EDX));
  /* 10d62441 call 0x10d625a0 */
  push32(0x10d62446u); f_10d625a0();
  /* 10d62446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62449 jmp 0x10d62498 */
  goto L_10d62498;
L_10d6244b:;
  /* 10d6244b call 0x10d63560 */
  push32(0x10d62450u); f_10d63560();
  /* 10d62450 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62453 push eax */
  push32((uint32_t)(EAX));
  /* 10d62454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62457 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62458 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6245b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6245d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62461 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10d62464 mov ecx, dword ptr [eax*4 + 0x10d7fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7fe1c)));
  /* 10d6246b push ecx */
  push32((uint32_t)(ECX));
  /* 10d6246c call 0x10d62550 */
  push32(0x10d62471u); f_10d62550();
  /* 10d62471 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62474 jmp 0x10d62498 */
  goto L_10d62498;
L_10d62476:;
  /* 10d62476 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62479 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d6247b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10d6247e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62481 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62483 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62486 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62489 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d6248b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6248e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62490 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62493 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62496 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d62498:;
  /* 10d62498 pop esi */
  ESI = (pop32());
  /* 10d62499 mov esp, ebp */
  ESP = (EBP);
  /* 10d6249b pop ebp */
  EBP = (pop32());
  /* 10d6249c ret  */
  ESPCHK(0x10d61f30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10d62550 (72 bytes, 30 insns) */
void f_10d62550(void) {
  FTRACE(0x10d62550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d62550 push ebp */
  push32((uint32_t)(EBP));
  /* 10d62551 mov ebp, esp */
  EBP = (ESP);
L_10d62553:;
  /* 10d62553 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62556 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62559 je 0x10d62596 */
  if (C.zf) goto L_10d62596;
  /* 10d6255b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6255e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d62561 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d62563 je 0x10d62596 */
  if (C.zf) goto L_10d62596;
  /* 10d62565 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62568 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d6256a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6256d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6256f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d62571 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62574 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62576 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62579 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6257c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d6257e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62581 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62584 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d62587 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6258a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d6258c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d6258f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62592 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d62594 jmp 0x10d62553 */
  goto L_10d62553;
L_10d62596:;
  /* 10d62596 pop ebp */
  EBP = (pop32());
  /* 10d62597 ret  */
  ESPCHK(0x10d62550u, _esp0);
  ESP += 4; return;
}

/* FUN_100125a0 @ 0x10d625a0 (173 bytes, 64 insns) */
void f_10d625a0(void) {
  FTRACE(0x10d625a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d625a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d625a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d625a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d625a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d625ab cmp dword ptr [0x10d80878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d625b2 je 0x10d625ca */
  if (C.zf) goto L_10d625ca;
  /* 10d625b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d625b7 push eax */
  push32((uint32_t)(EAX));
  /* 10d625b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d625bb push ecx */
  push32((uint32_t)(ECX));
  /* 10d625bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d625bf push edx */
  push32((uint32_t)(EDX));
  /* 10d625c0 call 0x10d62650 */
  push32(0x10d625c5u); f_10d62650();
  /* 10d625c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d625c8 jmp 0x10d62649 */
  goto L_10d62649;
L_10d625ca:;
  /* 10d625ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d625cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d625d0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d625d2 jae 0x10d62640 */
  if (!C.cf) goto L_10d62640;
  /* 10d625d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d625d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d625da mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d625dd jmp 0x10d625e8 */
  goto L_10d625e8;
L_10d625df:;
  /* 10d625df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d625e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d625e5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10d625e8:;
  /* 10d625e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d625eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d625ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d625f0 je 0x10d62624 */
  if (C.zf) goto L_10d62624;
  /* 10d625f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d625f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d625f6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10d625fb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d625fd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62603 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62605 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62608 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10d6260b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6260e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d6260f mov ecx, 0xa */
  ECX = (0xau);
  /* 10d62614 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d62616 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d62619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6261c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6261f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d62622 jmp 0x10d625df */
  goto L_10d625df;
L_10d62624:;
  /* 10d62624 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62627 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62629 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6262c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6262f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d62631 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62634 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62636 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62639 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6263c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d6263e jmp 0x10d62649 */
  goto L_10d62649;
L_10d62640:;
  /* 10d62640 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62643 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d62649:;
  /* 10d62649 mov esp, ebp */
  ESP = (EBP);
  /* 10d6264b pop ebp */
  EBP = (pop32());
  /* 10d6264c ret  */
  ESPCHK(0x10d625a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10d62650 (172 bytes, 65 insns) */
void f_10d62650(void) {
  FTRACE(0x10d62650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d62650 push ebp */
  push32((uint32_t)(EBP));
  /* 10d62651 mov ebp, esp */
  EBP = (ESP);
  /* 10d62653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62656 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62659 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d6265b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d6265e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62661 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62664 jbe 0x10d626ab */
  if ((C.cf||C.zf)) goto L_10d626ab;
L_10d62666:;
  /* 10d62666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62669 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d6266a mov ecx, 0xa */
  ECX = (0xau);
  /* 10d6266f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d62671 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62677 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d62679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6267c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6267f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d62682 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62685 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62687 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d6268a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6268d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d6268f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62692 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d62693 mov ecx, 0xa */
  ECX = (0xau);
  /* 10d62698 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d6269a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d6269d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d626a1 jle 0x10d626ab */
  if ((C.zf||C.sf!=C.of)) goto L_10d626ab;
  /* 10d626a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d626a6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d626a9 ja 0x10d62666 */
  if ((!C.cf&&!C.zf)) goto L_10d62666;
L_10d626ab:;
  /* 10d626ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d626ae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d626b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d626b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d626b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d626b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d626bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d626be sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d626c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d626c4:;
  /* 10d626c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d626c7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d626c9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10d626cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d626cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d626d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d626d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d626d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d626d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d626dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d626df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d626e2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d626e5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d626e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d626ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d626ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d626f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d626f3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d626f6 jb 0x10d626c4 */
  if (C.cf) goto L_10d626c4;
  /* 10d626f8 mov esp, ebp */
  ESP = (EBP);
  /* 10d626fa pop ebp */
  EBP = (pop32());
  /* 10d626fb ret  */
  ESPCHK(0x10d62650u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x10d62700 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10d62700(void) {
  FTRACE(0x10d62700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d62700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d62701 mov ebp, esp */
  EBP = (ESP);
  /* 10d62703 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10d62706:;
  /* 10d62706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62709 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d6270c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6270e je 0x10d62b7c */
  if (C.zf) goto L_10d62b7c;
  /* 10d62714 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62717 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6271a je 0x10d62b7c */
  if (C.zf) goto L_10d62b7c;
  /* 10d62720 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d62724 mov dword ptr [0x10d80878], 0 */
  w32((uint32_t)(0x10d80878), (0x0u));
  /* 10d6272e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d62735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62738 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d6273b jmp 0x10d62746 */
  goto L_10d62746;
L_10d6273d:;
  /* 10d6273d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62740 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62743 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d62746:;
  /* 10d62746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62749 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d6274c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6274f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d62752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62755 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62758 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d6275b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6275d jne 0x10d62761 */
  if (!C.zf) goto L_10d62761;
  /* 10d6275f jmp 0x10d6273d */
  goto L_10d6273d;
L_10d62761:;
  /* 10d62761 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62764 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62767 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d6276a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6276d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d62770 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d62773 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d62776 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62779 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d6277c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62780 ja 0x10d62ad0 */
  if ((!C.cf&&!C.zf)) goto L_10d62ad0;
  /* 10d62786 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d62789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6278b mov al, byte ptr [ecx + 0x10d62bac] */
  AL = (r8((uint32_t)(ECX + 0x10d62bac)));
  /* 10d62791 jmp dword ptr [eax*4 + 0x10d62b80] */
  switch (EAX) {
    case 0: goto L_10d629ef;
    case 1: goto L_10d628d3;
    case 2: goto L_10d6285e;
    case 3: goto L_10d62798;
    case 4: goto L_10d627d6;
    case 5: goto L_10d62837;
    case 6: goto L_10d62885;
    case 7: goto L_10d628ac;
    case 8: goto L_10d6291a;
    case 9: goto L_10d62814;
    case 10: goto L_10d62ad0;
    default: x86_unimpl("switch@0x10d62791 out of table"); return;
  }
L_10d62798:;
  /* 10d62798 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6279b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d6279e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d627a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d627a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d627a7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d627ab ja 0x10d627d1 */
  if ((!C.cf&&!C.zf)) goto L_10d627d1;
  /* 10d627ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d627b0 jmp dword ptr [ecx*4 + 0x10d62bff] */
  switch (ECX) {
    case 0: goto L_10d627b7;
    case 1: goto L_10d627c1;
    case 2: goto L_10d627c7;
    case 3: goto L_10d627cd;
    case 4: goto L_10d627f5;
    case 5: goto L_10d627ff;
    case 6: goto L_10d62805;
    case 7: goto L_10d6280b;
    default: x86_unimpl("switch@0x10d627b0 out of table"); return;
  }
L_10d627b7:;
  /* 10d627b7 mov dword ptr [0x10d80878], 1 */
  w32((uint32_t)(0x10d80878), (0x1u));
L_10d627c1:;
  /* 10d627c1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10d627c5 jmp 0x10d627d1 */
  goto L_10d627d1;
L_10d627c7:;
  /* 10d627c7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10d627cb jmp 0x10d627d1 */
  goto L_10d627d1;
L_10d627cd:;
  /* 10d627cd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10d627d1:;
  /* 10d627d1 jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d627d6:;
  /* 10d627d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d627d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d627dc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d627df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d627e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d627e5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d627e9 ja 0x10d6280f */
  if ((!C.cf&&!C.zf)) goto L_10d6280f;
  /* 10d627eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d627ee jmp dword ptr [ecx*4 + 0x10d62c0f] */
  switch (ECX) {
    case 0: goto L_10d627f5;
    case 1: goto L_10d627ff;
    case 2: goto L_10d62805;
    case 3: goto L_10d6280b;
    default: x86_unimpl("switch@0x10d627ee out of table"); return;
  }
L_10d627f5:;
  /* 10d627f5 mov dword ptr [0x10d80878], 1 */
  w32((uint32_t)(0x10d80878), (0x1u));
L_10d627ff:;
  /* 10d627ff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10d62803 jmp 0x10d6280f */
  goto L_10d6280f;
L_10d62805:;
  /* 10d62805 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10d62809 jmp 0x10d6280f */
  goto L_10d6280f;
L_10d6280b:;
  /* 10d6280b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10d6280f:;
  /* 10d6280f jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d62814:;
  /* 10d62814 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62817 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d6281a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6281e je 0x10d62828 */
  if (C.zf) goto L_10d62828;
  /* 10d62820 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62824 je 0x10d6282e */
  if (C.zf) goto L_10d6282e;
  /* 10d62826 jmp 0x10d62832 */
  goto L_10d62832;
L_10d62828:;
  /* 10d62828 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10d6282c jmp 0x10d62832 */
  goto L_10d62832;
L_10d6282e:;
  /* 10d6282e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10d62832:;
  /* 10d62832 jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d62837:;
  /* 10d62837 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6283a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d6283d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62841 je 0x10d6284b */
  if (C.zf) goto L_10d6284b;
  /* 10d62843 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62847 je 0x10d62855 */
  if (C.zf) goto L_10d62855;
  /* 10d62849 jmp 0x10d62859 */
  goto L_10d62859;
L_10d6284b:;
  /* 10d6284b mov dword ptr [0x10d80878], 1 */
  w32((uint32_t)(0x10d80878), (0x1u));
L_10d62855:;
  /* 10d62855 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10d62859:;
  /* 10d62859 jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d6285e:;
  /* 10d6285e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62861 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d62864 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62868 je 0x10d62872 */
  if (C.zf) goto L_10d62872;
  /* 10d6286a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6286e je 0x10d6287c */
  if (C.zf) goto L_10d6287c;
  /* 10d62870 jmp 0x10d62880 */
  goto L_10d62880;
L_10d62872:;
  /* 10d62872 mov dword ptr [0x10d80878], 1 */
  w32((uint32_t)(0x10d80878), (0x1u));
L_10d6287c:;
  /* 10d6287c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10d62880:;
  /* 10d62880 jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d62885:;
  /* 10d62885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62888 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10d6288b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6288f je 0x10d62899 */
  if (C.zf) goto L_10d62899;
  /* 10d62891 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62895 je 0x10d628a3 */
  if (C.zf) goto L_10d628a3;
  /* 10d62897 jmp 0x10d628a7 */
  goto L_10d628a7;
L_10d62899:;
  /* 10d62899 mov dword ptr [0x10d80878], 1 */
  w32((uint32_t)(0x10d80878), (0x1u));
L_10d628a3:;
  /* 10d628a3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10d628a7:;
  /* 10d628a7 jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d628ac:;
  /* 10d628ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d628af mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d628b2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d628b6 je 0x10d628c0 */
  if (C.zf) goto L_10d628c0;
  /* 10d628b8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d628bc je 0x10d628ca */
  if (C.zf) goto L_10d628ca;
  /* 10d628be jmp 0x10d628ce */
  goto L_10d628ce;
L_10d628c0:;
  /* 10d628c0 mov dword ptr [0x10d80878], 1 */
  w32((uint32_t)(0x10d80878), (0x1u));
L_10d628ca:;
  /* 10d628ca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10d628ce:;
  /* 10d628ce jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d628d3:;
  /* 10d628d3 push 0x10d7c93c */
  push32((uint32_t)(0x10d7c93cu));
  /* 10d628d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d628db push ecx */
  push32((uint32_t)(ECX));
  /* 10d628dc call 0x10d63130 */
  push32(0x10d628e1u); f_10d63130();
  /* 10d628e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d628e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d628e6 jne 0x10d628f3 */
  if (!C.zf) goto L_10d628f3;
  /* 10d628e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d628eb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d628ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d628f1 jmp 0x10d62911 */
  goto L_10d62911;
L_10d628f3:;
  /* 10d628f3 push 0x10d7c938 */
  push32((uint32_t)(0x10d7c938u));
  /* 10d628f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d628fb push eax */
  push32((uint32_t)(EAX));
  /* 10d628fc call 0x10d63130 */
  push32(0x10d62901u); f_10d63130();
  /* 10d62901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d62906 jne 0x10d62911 */
  if (!C.zf) goto L_10d62911;
  /* 10d62908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6290b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6290e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d62911:;
  /* 10d62911 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10d62915 jmp 0x10d62ad0 */
  goto L_10d62ad0;
L_10d6291a:;
  /* 10d6291a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6291d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62921 jg 0x10d62931 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d62931;
  /* 10d62923 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62926 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10d6292c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d6292f jmp 0x10d6293d */
  goto L_10d6293d;
L_10d62931:;
  /* 10d62931 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62934 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10d6293a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d6293d:;
  /* 10d6293d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62941 jle 0x10d629e4 */
  if ((C.zf||C.sf!=C.of)) goto L_10d629e4;
  /* 10d62947 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6294a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6294d jbe 0x10d629e4 */
  if ((C.cf||C.zf)) goto L_10d629e4;
  /* 10d62953 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d62956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62958 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6295a mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d62960 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d62962 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d62966 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d6296c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d6296e je 0x10d629a7 */
  if (C.zf) goto L_10d629a7;
  /* 10d62970 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62973 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62976 jbe 0x10d629a7 */
  if ((C.cf||C.zf)) goto L_10d629a7;
  /* 10d62978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6297b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d6297d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d62980 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d62982 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d62984 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62987 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62989 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6298c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6298f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d62991 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d62994 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62997 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d6299a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6299d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d6299f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d629a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d629a5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d629a7:;
  /* 10d629a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d629aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d629ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d629af mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d629b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d629b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d629b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d629b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d629bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d629be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d629c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d629c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d629c6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d629c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d629cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d629ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d629d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d629d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d629d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d629d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d629dc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d629df jmp 0x10d6293d */
  goto L_10d6293d;
L_10d629e4:;
  /* 10d629e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d629e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d629ea jmp 0x10d62706 */
  goto L_10d62706;
L_10d629ef:;
  /* 10d629ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d629f2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d629f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d629f7 je 0x10d62ac2 */
  if (C.zf) goto L_10d62ac2;
  /* 10d629fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a00 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62a03 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d62a06:;
  /* 10d62a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d62a0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d62a0e je 0x10d62ac0 */
  if (C.zf) goto L_10d62ac0;
  /* 10d62a14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62a17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62a1a je 0x10d62ac0 */
  if (C.zf) goto L_10d62ac0;
  /* 10d62a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d62a26 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62a29 jne 0x10d62a39 */
  if (!C.zf) goto L_10d62a39;
  /* 10d62a2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62a31 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d62a34 jmp 0x10d62ac0 */
  goto L_10d62ac0;
L_10d62a39:;
  /* 10d62a39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d62a3e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d62a40 mov edx, dword ptr [0x10d7ec98] */
  EDX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d62a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62a48 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d62a4c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d62a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d62a53 je 0x10d62a8c */
  if (C.zf) goto L_10d62a8c;
  /* 10d62a55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62a58 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62a5b jbe 0x10d62a8c */
  if ((C.cf||C.zf)) goto L_10d62a8c;
  /* 10d62a5d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62a60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d62a67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d62a69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62a6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62a6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62a71 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62a74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d62a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62a7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d62a7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62a82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62a84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62a87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62a8a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d62a8c:;
  /* 10d62a8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62a8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62a94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d62a96 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d62a98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62a9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62a9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62aa0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62aa3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d62aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62aa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62aab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d62aae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62ab1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62ab3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62ab6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62ab9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d62abb jmp 0x10d62a06 */
  goto L_10d62a06;
L_10d62ac0:;
  /* 10d62ac0 jmp 0x10d62acb */
  goto L_10d62acb;
L_10d62ac2:;
  /* 10d62ac2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62ac5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62ac8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d62acb:;
  /* 10d62acb jmp 0x10d62706 */
  goto L_10d62706;
L_10d62ad0:;
  /* 10d62ad0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d62ad4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d62ad6 je 0x10d62afc */
  if (C.zf) goto L_10d62afc;
  /* 10d62ad8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62adb push edx */
  push32((uint32_t)(EDX));
  /* 10d62adc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62adf push eax */
  push32((uint32_t)(EAX));
  /* 10d62ae0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62ae4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10d62ae8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d62aeb push eax */
  push32((uint32_t)(EAX));
  /* 10d62aec call 0x10d61f30 */
  push32(0x10d62af1u); f_10d61f30();
  /* 10d62af1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62af4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d62af7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d62afa jmp 0x10d62b77 */
  goto L_10d62b77;
L_10d62afc:;
  /* 10d62afc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62b01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d62b03 mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d62b09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d62b0b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d62b0f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d62b15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d62b17 je 0x10d62b48 */
  if (C.zf) goto L_10d62b48;
  /* 10d62b19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62b1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62b1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62b21 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d62b23 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d62b25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62b28 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62b2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62b2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62b30 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d62b32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62b35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62b38 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d62b3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62b3e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62b40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62b43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62b46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d62b48:;
  /* 10d62b48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62b4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d62b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62b50 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d62b52 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d62b54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62b57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62b59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62b5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62b5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d62b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62b67 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d62b6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62b6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d62b6f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62b72 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62b75 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d62b77:;
  /* 10d62b77 jmp 0x10d62706 */
  goto L_10d62706;
L_10d62b7c:;
  /* 10d62b7c mov esp, ebp */
  ESP = (EBP);
  /* 10d62b7e pop ebp */
  EBP = (pop32());
  /* 10d62b7f ret  */
  ESPCHK(0x10d62700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c20 @ 0x10d62c20 (650 bytes, 178 insns) */
void f_10d62c20(void) {
  FTRACE(0x10d62c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d62c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d62c21 mov ebp, esp */
  EBP = (ESP);
  /* 10d62c23 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d62c29 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62c2d jne 0x10d62d89 */
  if (!C.zf) goto L_10d62d89;
  /* 10d62c33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62c36 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10d62c3c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10d62c42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d62c45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d62c4c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10d62c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62c58 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10d62c5e push edx */
  push32((uint32_t)(EDX));
  /* 10d62c5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62c62 push eax */
  push32((uint32_t)(EAX));
  /* 10d62c63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62c66 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62c67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62c6a push edx */
  push32((uint32_t)(EDX));
  /* 10d62c6b call 0x10d64040 */
  push32(0x10d62c70u); f_10d64040();
  /* 10d62c70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62c73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d62c76 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62c7a jne 0x10d62d0f */
  if (!C.zf) goto L_10d62d0f;
  /* 10d62c80 call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d62c86u);
  /* 10d62c86 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62c89 je 0x10d62c90 */
  if (C.zf) goto L_10d62c90;
  /* 10d62c8b jmp 0x10d62d6d */
  goto L_10d62d6d;
L_10d62c90:;
  /* 10d62c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62c96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62c99 push eax */
  push32((uint32_t)(EAX));
  /* 10d62c9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62c9d push ecx */
  push32((uint32_t)(ECX));
  /* 10d62c9e call 0x10d64040 */
  push32(0x10d62ca3u); f_10d64040();
  /* 10d62ca3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62ca6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10d62cac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62cb3 jne 0x10d62cba */
  if (!C.zf) goto L_10d62cba;
  /* 10d62cb5 jmp 0x10d62d6d */
  goto L_10d62d6d;
L_10d62cba:;
  /* 10d62cba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10d62cbc push 0x10d7c944 */
  push32((uint32_t)(0x10d7c944u));
  /* 10d62cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62cc3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10d62cc9 push edx */
  push32((uint32_t)(EDX));
  /* 10d62cca call 0x10d54a60 */
  push32(0x10d62ccfu); f_10d54a60();
  /* 10d62ccf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62cd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d62cd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62cd9 jne 0x10d62ce0 */
  if (!C.zf) goto L_10d62ce0;
  /* 10d62cdb jmp 0x10d62d6d */
  goto L_10d62d6d;
L_10d62ce0:;
  /* 10d62ce0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d62ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62ce9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10d62cef push eax */
  push32((uint32_t)(EAX));
  /* 10d62cf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62cf4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62cf7 push edx */
  push32((uint32_t)(EDX));
  /* 10d62cf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62cfb push eax */
  push32((uint32_t)(EAX));
  /* 10d62cfc call 0x10d64040 */
  push32(0x10d62d01u); f_10d64040();
  /* 10d62d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62d04 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d62d07 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62d0b jne 0x10d62d0f */
  if (!C.zf) goto L_10d62d0f;
  /* 10d62d0d jmp 0x10d62d6d */
  goto L_10d62d6d;
L_10d62d0f:;
  /* 10d62d0f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d62d11 push 0x10d7c944 */
  push32((uint32_t)(0x10d7c944u));
  /* 10d62d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62d18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d62d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10d62d1c call 0x10d54a60 */
  push32(0x10d62d21u); f_10d54a60();
  /* 10d62d21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62d24 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10d62d2a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d62d2c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10d62d32 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62d35 jne 0x10d62d39 */
  if (!C.zf) goto L_10d62d39;
  /* 10d62d37 jmp 0x10d62d6d */
  goto L_10d62d6d;
L_10d62d39:;
  /* 10d62d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d62d3c push ecx */
  push32((uint32_t)(ECX));
  /* 10d62d3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62d40 push edx */
  push32((uint32_t)(EDX));
  /* 10d62d41 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10d62d47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d62d49 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62d4a call 0x10d58280 */
  push32(0x10d62d4fu); f_10d58280();
  /* 10d62d4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62d52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62d56 je 0x10d62d66 */
  if (C.zf) goto L_10d62d66;
  /* 10d62d58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62d5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62d5d push edx */
  push32((uint32_t)(EDX));
  /* 10d62d5e call 0x10d554f0 */
  push32(0x10d62d63u); f_10d554f0();
  /* 10d62d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d62d66:;
  /* 10d62d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62d68 jmp 0x10d62ea6 */
  goto L_10d62ea6;
L_10d62d6d:;
  /* 10d62d6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62d71 je 0x10d62d81 */
  if (C.zf) goto L_10d62d81;
  /* 10d62d73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d62d75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d62d78 push eax */
  push32((uint32_t)(EAX));
  /* 10d62d79 call 0x10d554f0 */
  push32(0x10d62d7eu); f_10d554f0();
  /* 10d62d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d62d81:;
  /* 10d62d81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d62d84 jmp 0x10d62ea6 */
  goto L_10d62ea6;
L_10d62d89:;
  /* 10d62d89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62d8d jne 0x10d62ea3 */
  if (!C.zf) goto L_10d62ea3;
  /* 10d62d93 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10d62d9d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62da0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10d62da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62da8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d62dae push edx */
  push32((uint32_t)(EDX));
  /* 10d62daf push 0x10d80790 */
  push32((uint32_t)(0x10d80790u));
  /* 10d62db4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62db7 push eax */
  push32((uint32_t)(EAX));
  /* 10d62db8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62dbb push ecx */
  push32((uint32_t)(ECX));
  /* 10d62dbc call 0x10d63ea0 */
  push32(0x10d62dc1u); f_10d63ea0();
  /* 10d62dc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d62dc6 jne 0x10d62dd0 */
  if (!C.zf) goto L_10d62dd0;
  /* 10d62dc8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d62dcb jmp 0x10d62ea6 */
  goto L_10d62ea6;
L_10d62dd0:;
  /* 10d62dd0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d62dd6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d62dd9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10d62de3 jmp 0x10d62df4 */
  goto L_10d62df4;
L_10d62de5:;
  /* 10d62de5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d62deb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62dee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10d62df4:;
  /* 10d62df4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62dfb jge 0x10d62e9f */
  if ((C.sf==C.of)) goto L_10d62e9f;
  /* 10d62e01 cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62e08 jle 0x10d62e3b */
  if ((C.zf||C.sf!=C.of)) goto L_10d62e3b;
  /* 10d62e0a push 4 */
  push32((uint32_t)(0x4u));
  /* 10d62e0c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d62e12 mov dl, byte ptr [ecx*2 + 0x10d80790] */
  DL = (r8((uint32_t)(ECX*2 + 0x10d80790)));
  /* 10d62e19 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10d62e1f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d62e25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d62e2a push eax */
  push32((uint32_t)(EAX));
  /* 10d62e2b call 0x10d5aa70 */
  push32(0x10d62e30u); f_10d5aa70();
  /* 10d62e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62e33 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10d62e39 jmp 0x10d62e6e */
  goto L_10d62e6e;
L_10d62e3b:;
  /* 10d62e3b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d62e41 mov dl, byte ptr [ecx*2 + 0x10d80790] */
  DL = (r8((uint32_t)(ECX*2 + 0x10d80790)));
  /* 10d62e48 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10d62e4e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d62e54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d62e59 mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d62e5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d62e61 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d62e65 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d62e68 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10d62e6e:;
  /* 10d62e6e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62e75 je 0x10d62e98 */
  if (C.zf) goto L_10d62e98;
  /* 10d62e77 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d62e7d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d62e80 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d62e83 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10d62e8a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d62e8e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d62e94 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d62e96 jmp 0x10d62e9a */
  goto L_10d62e9a;
L_10d62e98:;
  /* 10d62e98 jmp 0x10d62e9f */
  goto L_10d62e9f;
L_10d62e9a:;
  /* 10d62e9a jmp 0x10d62de5 */
  goto L_10d62de5;
L_10d62e9f:;
  /* 10d62e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62ea1 jmp 0x10d62ea6 */
  goto L_10d62ea6;
L_10d62ea3:;
  /* 10d62ea3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d62ea6:;
  /* 10d62ea6 mov esp, ebp */
  ESP = (EBP);
  /* 10d62ea8 pop ebp */
  EBP = (pop32());
  /* 10d62ea9 ret  */
  ESPCHK(0x10d62c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x10d62eb0 (10 bytes, 5 insns) */
void f_10d62eb0(void) {
  FTRACE(0x10d62eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d62eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d62eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d62eb3 mov eax, dword ptr [0x10d7fd88] */
  EAX = (r32((uint32_t)(0x10d7fd88)));
  /* 10d62eb8 pop ebp */
  EBP = (pop32());
  /* 10d62eb9 ret  */
  ESPCHK(0x10d62eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x10d62ec0 (575 bytes, 196 insns) */
void f_10d62ec0(void) {
  FTRACE(0x10d62ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d62ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d62ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d62ec3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d62ec5 push 0x10d7c950 */
  push32((uint32_t)(0x10d7c950u));
  /* 10d62eca push 0x10d5db68 */
  push32((uint32_t)(0x10d5db68u));
  /* 10d62ecf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d62ed5 push eax */
  push32((uint32_t)(EAX));
  /* 10d62ed6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d62edd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62ee0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d62ee1 push esi */
  push32((uint32_t)(ESI));
  /* 10d62ee2 push edi */
  push32((uint32_t)(EDI));
  /* 10d62ee3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d62ee6 cmp dword ptr [0x10d8079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62eed jne 0x10d62f3e */
  if (!C.zf) goto L_10d62f3e;
  /* 10d62eef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10d62ef2 push eax */
  push32((uint32_t)(EAX));
  /* 10d62ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d62ef5 push 0x10d7c084 */
  push32((uint32_t)(0x10d7c084u));
  /* 10d62efa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d62efc call dword ptr [0x10d832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c4))), 0x10d62f02u);
  /* 10d62f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d62f04 je 0x10d62f12 */
  if (C.zf) goto L_10d62f12;
  /* 10d62f06 mov dword ptr [0x10d8079c], 1 */
  w32((uint32_t)(0x10d8079c), (0x1u));
  /* 10d62f10 jmp 0x10d62f3e */
  goto L_10d62f3e;
L_10d62f12:;
  /* 10d62f12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10d62f15 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62f16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d62f18 push 0x10d7c080 */
  push32((uint32_t)(0x10d7c080u));
  /* 10d62f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d62f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62f21 call dword ptr [0x10d832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d4))), 0x10d62f27u);
  /* 10d62f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d62f29 je 0x10d62f37 */
  if (C.zf) goto L_10d62f37;
  /* 10d62f2b mov dword ptr [0x10d8079c], 2 */
  w32((uint32_t)(0x10d8079c), (0x2u));
  /* 10d62f35 jmp 0x10d62f3e */
  goto L_10d62f3e;
L_10d62f37:;
  /* 10d62f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62f39 jmp 0x10d63119 */
  goto L_10d63119;
L_10d62f3e:;
  /* 10d62f3e cmp dword ptr [0x10d8079c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d8079c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62f45 jne 0x10d62f62 */
  if (!C.zf) goto L_10d62f62;
  /* 10d62f47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d62f4a push edx */
  push32((uint32_t)(EDX));
  /* 10d62f4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62f4e push eax */
  push32((uint32_t)(EAX));
  /* 10d62f4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62f52 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62f53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d62f56 push edx */
  push32((uint32_t)(EDX));
  /* 10d62f57 call dword ptr [0x10d832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832c4))), 0x10d62f5du);
  /* 10d62f5d jmp 0x10d63119 */
  goto L_10d63119;
L_10d62f62:;
  /* 10d62f62 cmp dword ptr [0x10d8079c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d8079c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62f69 jne 0x10d63117 */
  if (!C.zf) goto L_10d63117;
  /* 10d62f6f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62f73 jne 0x10d62f7d */
  if (!C.zf) goto L_10d62f7d;
  /* 10d62f75 mov eax, dword ptr [0x10d80710] */
  EAX = (r32((uint32_t)(0x10d80710)));
  /* 10d62f7a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10d62f7d:;
  /* 10d62f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62f85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d62f88 push ecx */
  push32((uint32_t)(ECX));
  /* 10d62f89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d62f8c push edx */
  push32((uint32_t)(EDX));
  /* 10d62f8d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d62f92 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d62f95 push eax */
  push32((uint32_t)(EAX));
  /* 10d62f96 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d62f9cu);
  /* 10d62f9c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d62f9f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d62fa3 jne 0x10d62fac */
  if (!C.zf) goto L_10d62fac;
  /* 10d62fa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d62fa7 jmp 0x10d63119 */
  goto L_10d63119;
L_10d62fac:;
  /* 10d62fac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d62fb3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d62fb6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62fb9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d62fbb call 0x10d57c00 */
  push32(0x10d62fc0u); f_10d57c00();
  /* 10d62fc0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10d62fc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d62fc6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d62fc9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d62fcc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d62fcf push edx */
  push32((uint32_t)(EDX));
  /* 10d62fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d62fd2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d62fd5 push eax */
  push32((uint32_t)(EAX));
  /* 10d62fd6 call 0x10d587d0 */
  push32(0x10d62fdbu); f_10d587d0();
  /* 10d62fdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d62fde mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d62fe5 jmp 0x10d62ffe */
  goto L_10d62ffe;
  /* 10d62fe7 mov eax, 1 */
  EAX = (0x1u);
  /* 10d62fec ret  */
  ESPCHK(0x10d62ec0u, _esp0);
  ESP += 4; return;
  /* 10d62fed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d62ff0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10d62ff7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d62ffe:;
  /* 10d62ffe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63002 jne 0x10d6300b */
  if (!C.zf) goto L_10d6300b;
  /* 10d63004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63006 jmp 0x10d63119 */
  goto L_10d63119;
L_10d6300b:;
  /* 10d6300b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6300d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6300f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d63012 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63013 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d63016 push edx */
  push32((uint32_t)(EDX));
  /* 10d63017 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6301a push eax */
  push32((uint32_t)(EAX));
  /* 10d6301b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6301e push ecx */
  push32((uint32_t)(ECX));
  /* 10d6301f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d63024 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d63027 push edx */
  push32((uint32_t)(EDX));
  /* 10d63028 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d6302eu);
  /* 10d6302e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d63030 jne 0x10d63039 */
  if (!C.zf) goto L_10d63039;
  /* 10d63032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63034 jmp 0x10d63119 */
  goto L_10d63119;
L_10d63039:;
  /* 10d63039 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d63040 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d63043 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10d63047 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6304a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d6304c call 0x10d57c00 */
  push32(0x10d63051u); f_10d57c00();
  /* 10d63051 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10d63054 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d63057 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d6305a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d6305d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d63064 jmp 0x10d6307d */
  goto L_10d6307d;
  /* 10d63066 mov eax, 1 */
  EAX = (0x1u);
  /* 10d6306b ret  */
  ESPCHK(0x10d62ec0u, _esp0);
  ESP += 4; return;
  /* 10d6306c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d6306f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d63076 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d6307d:;
  /* 10d6307d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63081 jne 0x10d6308a */
  if (!C.zf) goto L_10d6308a;
  /* 10d63083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63085 jmp 0x10d63119 */
  goto L_10d63119;
L_10d6308a:;
  /* 10d6308a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6308e jne 0x10d63099 */
  if (!C.zf) goto L_10d63099;
  /* 10d63090 mov edx, dword ptr [0x10d80700] */
  EDX = (r32((uint32_t)(0x10d80700)));
  /* 10d63096 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10d63099:;
  /* 10d63099 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6309c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d6309f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10d630a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d630a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d630ab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10d630b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d630b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d630b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d630b9 push edx */
  push32((uint32_t)(EDX));
  /* 10d630ba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d630bd push eax */
  push32((uint32_t)(EAX));
  /* 10d630be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d630c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d630c2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d630c5 push edx */
  push32((uint32_t)(EDX));
  /* 10d630c6 call dword ptr [0x10d832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d4))), 0x10d630ccu);
  /* 10d630cc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d630cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d630d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d630d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d630d7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10d630dc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d630e2 je 0x10d630f8 */
  if (C.zf) goto L_10d630f8;
  /* 10d630e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d630e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d630ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d630ec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d630f0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d630f6 je 0x10d630fc */
  if (C.zf) goto L_10d630fc;
L_10d630f8:;
  /* 10d630f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d630fa jmp 0x10d63119 */
  goto L_10d63119;
L_10d630fc:;
  /* 10d630fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d630ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d63101 push eax */
  push32((uint32_t)(EAX));
  /* 10d63102 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d63105 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63106 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63109 push edx */
  push32((uint32_t)(EDX));
  /* 10d6310a call 0x10d5c950 */
  push32(0x10d6310fu); f_10d5c950();
  /* 10d6310f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63112 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d63115 jmp 0x10d63119 */
  goto L_10d63119;
L_10d63117:;
  /* 10d63117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d63119:;
  /* 10d63119 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10d6311c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d6311f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d63126 pop edi */
  EDI = (pop32());
  /* 10d63127 pop esi */
  ESI = (pop32());
  /* 10d63128 pop ebx */
  EBX = (pop32());
  /* 10d63129 mov esp, ebp */
  ESP = (EBP);
  /* 10d6312b pop ebp */
  EBP = (pop32());
  /* 10d6312c ret  */
  ESPCHK(0x10d62ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013130 @ 0x10d63130 (208 bytes, 85 insns) */
void f_10d63130(void) {
  FTRACE(0x10d63130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63130 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63131 mov ebp, esp */
  EBP = (ESP);
  /* 10d63133 push edi */
  push32((uint32_t)(EDI));
  /* 10d63134 push esi */
  push32((uint32_t)(ESI));
  /* 10d63135 push ebx */
  push32((uint32_t)(EBX));
  /* 10d63136 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d63139 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6313c lea eax, [0x10d806f8] */
  EAX = ((uint32_t)(0x10d806f8));
  /* 10d63142 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63146 jne 0x10d63183 */
  if (!C.zf) goto L_10d63183;
  /* 10d63148 mov al, 0xff */
  AL = (0xffu);
  /* 10d6314a mov edi, edi */
  EDI = (EDI);
L_10d6314c:;
  /* 10d6314c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d6314e je 0x10d6317e */
  if (C.zf) goto L_10d6317e;
  /* 10d63150 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d63152 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d63153 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10d63155 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d63156 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d63158 je 0x10d6314c */
  if (C.zf) goto L_10d6314c;
  /* 10d6315a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d6315c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d6315e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d63160 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d63163 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d63165 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d63167 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10d63169 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d6316b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d6316d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d6316f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d63172 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d63174 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d63176 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d63178 je 0x10d6314c */
  if (C.zf) goto L_10d6314c;
  /* 10d6317a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d6317c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10d6317e:;
  /* 10d6317e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10d63181 jmp 0x10d631fb */
  goto L_10d631fb;
L_10d63183:;
  /* 10d63183 lock inc dword ptr [0x10d8088c] */
  x86_unimpl("lock inc @ 0x10d63183");
  /* 10d6318a cmp dword ptr [0x10d8087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63191 jg 0x10d63197 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d63197;
  /* 10d63193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63195 jmp 0x10d631ac */
  goto L_10d631ac;
L_10d63197:;
  /* 10d63197 lock dec dword ptr [0x10d8088c] */
  x86_unimpl("lock dec @ 0x10d63197");
  /* 10d6319e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d631a0 call 0x10d58460 */
  push32(0x10d631a5u); f_10d58460();
  /* 10d631a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10d631ac:;
  /* 10d631ac mov eax, 0xff */
  EAX = (0xffu);
  /* 10d631b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10d631b3 nop  */
  /* nop */
L_10d631b4:;
  /* 10d631b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d631b6 je 0x10d631df */
  if (C.zf) goto L_10d631df;
  /* 10d631b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d631ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d631bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10d631bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d631be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d631c0 je 0x10d631b4 */
  if (C.zf) goto L_10d631b4;
  /* 10d631c2 push eax */
  push32((uint32_t)(EAX));
  /* 10d631c3 push ebx */
  push32((uint32_t)(EBX));
  /* 10d631c4 call 0x10d642a0 */
  push32(0x10d631c9u); f_10d642a0();
  /* 10d631c9 mov ebx, eax */
  EBX = (EAX);
  /* 10d631cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d631ce call 0x10d642a0 */
  push32(0x10d631d3u); f_10d642a0();
  /* 10d631d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d631d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d631d8 je 0x10d631b4 */
  if (C.zf) goto L_10d631b4;
  /* 10d631da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d631dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d631df:;
  /* 10d631df mov ebx, eax */
  EBX = (EAX);
  /* 10d631e1 pop eax */
  EAX = (pop32());
  /* 10d631e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d631e4 jne 0x10d631ef */
  if (!C.zf) goto L_10d631ef;
  /* 10d631e6 lock dec dword ptr [0x10d8088c] */
  x86_unimpl("lock dec @ 0x10d631e6");
  /* 10d631ed jmp 0x10d631f9 */
  goto L_10d631f9;
L_10d631ef:;
  /* 10d631ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d631f1 call 0x10d58500 */
  push32(0x10d631f6u); f_10d58500();
  /* 10d631f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d631f9:;
  /* 10d631f9 mov eax, ebx */
  EAX = (EBX);
L_10d631fb:;
  /* 10d631fb pop ebx */
  EBX = (pop32());
  /* 10d631fc pop esi */
  ESI = (pop32());
  /* 10d631fd pop edi */
  EDI = (pop32());
  /* 10d631fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d631ff ret  */
  ESPCHK(0x10d63130u, _esp0);
  ESP += 4; return;
}

/* FUN_10013200 @ 0x10d63200 (257 bytes, 103 insns) */
void f_10d63200(void) {
  FTRACE(0x10d63200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63200 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63201 mov ebp, esp */
  EBP = (ESP);
  /* 10d63203 push edi */
  push32((uint32_t)(EDI));
  /* 10d63204 push esi */
  push32((uint32_t)(ESI));
  /* 10d63205 push ebx */
  push32((uint32_t)(EBX));
  /* 10d63206 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63209 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d6320b je 0x10d632fa */
  if (C.zf) goto L_10d632fa;
  /* 10d63211 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63214 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d63217 lea eax, [0x10d806f8] */
  EAX = ((uint32_t)(0x10d806f8));
  /* 10d6321d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63221 jne 0x10d63271 */
  if (!C.zf) goto L_10d63271;
  /* 10d63223 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10d63225 mov bl, 0x5a */
  BL = (0x5au);
  /* 10d63227 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10d63229 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d6322c:;
  /* 10d6322c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10d6322e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d63230 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10d63232 je 0x10d63255 */
  if (C.zf) goto L_10d63255;
  /* 10d63234 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d63236 je 0x10d63255 */
  if (C.zf) goto L_10d63255;
  /* 10d63238 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d63239 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d6323a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d6323c jb 0x10d63244 */
  if (C.cf) goto L_10d63244;
  /* 10d6323e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d63240 ja 0x10d63244 */
  if ((!C.cf&&!C.zf)) goto L_10d63244;
  /* 10d63242 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10d63244:;
  /* 10d63244 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d63246 jb 0x10d6324e */
  if (C.cf) goto L_10d6324e;
  /* 10d63248 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d6324a ja 0x10d6324e */
  if ((!C.cf&&!C.zf)) goto L_10d6324e;
  /* 10d6324c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10d6324e:;
  /* 10d6324e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d63250 jne 0x10d6325f */
  if (!C.zf) goto L_10d6325f;
  /* 10d63252 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d63253 jne 0x10d6322c */
  if (!C.zf) goto L_10d6322c;
L_10d63255:;
  /* 10d63255 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63257 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d63259 je 0x10d632fa */
  if (C.zf) goto L_10d632fa;
L_10d6325f:;
  /* 10d6325f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10d63264 jb 0x10d632fa */
  if (C.cf) goto L_10d632fa;
  /* 10d6326a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d6326c jmp 0x10d632fa */
  goto L_10d632fa;
L_10d63271:;
  /* 10d63271 lock inc dword ptr [0x10d8088c] */
  x86_unimpl("lock inc @ 0x10d63271");
  /* 10d63278 cmp dword ptr [0x10d8087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6327f jg 0x10d63285 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d63285;
  /* 10d63281 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63283 jmp 0x10d6329e */
  goto L_10d6329e;
L_10d63285:;
  /* 10d63285 lock dec dword ptr [0x10d8088c] */
  x86_unimpl("lock dec @ 0x10d63285");
  /* 10d6328c mov ebx, ecx */
  EBX = (ECX);
  /* 10d6328e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d63290 call 0x10d58460 */
  push32(0x10d63295u); f_10d58460();
  /* 10d63295 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10d6329c mov ecx, ebx */
  ECX = (EBX);
L_10d6329e:;
  /* 10d6329e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d632a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10d632a2 mov edi, edi */
  EDI = (EDI);
L_10d632a4:;
  /* 10d632a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d632a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d632a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10d632aa je 0x10d632cf */
  if (C.zf) goto L_10d632cf;
  /* 10d632ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10d632ae je 0x10d632cf */
  if (C.zf) goto L_10d632cf;
  /* 10d632b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d632b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d632b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d632b3 push eax */
  push32((uint32_t)(EAX));
  /* 10d632b4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d632b5 call 0x10d642a0 */
  push32(0x10d632bau); f_10d642a0();
  /* 10d632ba mov ebx, eax */
  EBX = (EAX);
  /* 10d632bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d632bf call 0x10d642a0 */
  push32(0x10d632c4u); f_10d642a0();
  /* 10d632c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d632c7 pop ecx */
  ECX = (pop32());
  /* 10d632c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d632ca jne 0x10d632d5 */
  if (!C.zf) goto L_10d632d5;
  /* 10d632cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d632cd jne 0x10d632a4 */
  if (!C.zf) goto L_10d632a4;
L_10d632cf:;
  /* 10d632cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d632d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d632d3 je 0x10d632de */
  if (C.zf) goto L_10d632de;
L_10d632d5:;
  /* 10d632d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10d632da jb 0x10d632de */
  if (C.cf) goto L_10d632de;
  /* 10d632dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10d632de:;
  /* 10d632de pop eax */
  EAX = (pop32());
  /* 10d632df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d632e1 jne 0x10d632ec */
  if (!C.zf) goto L_10d632ec;
  /* 10d632e3 lock dec dword ptr [0x10d8088c] */
  x86_unimpl("lock dec @ 0x10d632e3");
  /* 10d632ea jmp 0x10d632fa */
  goto L_10d632fa;
L_10d632ec:;
  /* 10d632ec mov ebx, ecx */
  EBX = (ECX);
  /* 10d632ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d632f0 call 0x10d58500 */
  push32(0x10d632f5u); f_10d58500();
  /* 10d632f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d632f8 mov ecx, ebx */
  ECX = (EBX);
L_10d632fa:;
  /* 10d632fa mov eax, ecx */
  EAX = (ECX);
  /* 10d632fc pop ebx */
  EBX = (pop32());
  /* 10d632fd pop esi */
  ESI = (pop32());
  /* 10d632fe pop edi */
  EDI = (pop32());
  /* 10d632ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d63300 ret  */
  ESPCHK(0x10d63200u, _esp0);
  ESP += 4; return;
}

/* FUN_10013310 @ 0x10d63310 (255 bytes, 88 insns) */
void f_10d63310(void) {
  FTRACE(0x10d63310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63310 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63311 mov ebp, esp */
  EBP = (ESP);
  /* 10d63313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10d63316:;
  /* 10d63316 cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6331d jle 0x10d63336 */
  if ((C.zf||C.sf!=C.of)) goto L_10d63336;
  /* 10d6331f push 8 */
  push32((uint32_t)(0x8u));
  /* 10d63321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63324 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63326 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d63328 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63329 call 0x10d5aa70 */
  push32(0x10d6332eu); f_10d5aa70();
  /* 10d6332e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63331 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d63334 jmp 0x10d6334f */
  goto L_10d6334f;
L_10d63336:;
  /* 10d63336 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6333b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6333d mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d63343 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63345 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d63349 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d6334c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d6334f:;
  /* 10d6334f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63353 je 0x10d63360 */
  if (C.zf) goto L_10d63360;
  /* 10d63355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63358 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6335b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d6335e jmp 0x10d63316 */
  goto L_10d63316;
L_10d63360:;
  /* 10d63360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63363 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63365 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d63367 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d6336a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6336d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63370 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d63373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d63376 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d63379 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6337d je 0x10d63385 */
  if (C.zf) goto L_10d63385;
  /* 10d6337f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63383 jne 0x10d63398 */
  if (!C.zf) goto L_10d63398;
L_10d63385:;
  /* 10d63385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6338a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6338c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d6338f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63392 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63395 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d63398:;
  /* 10d63398 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d6339f:;
  /* 10d6339f cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d633a6 jle 0x10d633bb */
  if ((C.zf||C.sf!=C.of)) goto L_10d633bb;
  /* 10d633a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d633aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d633ad push edx */
  push32((uint32_t)(EDX));
  /* 10d633ae call 0x10d5aa70 */
  push32(0x10d633b3u); f_10d5aa70();
  /* 10d633b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d633b6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d633b9 jmp 0x10d633d0 */
  goto L_10d633d0;
L_10d633bb:;
  /* 10d633bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d633be mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d633c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d633c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d633ca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d633cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d633d0:;
  /* 10d633d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d633d4 je 0x10d633fb */
  if (C.zf) goto L_10d633fb;
  /* 10d633d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d633d9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d633dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d633df lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10d633e3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d633e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d633e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d633eb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d633ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d633f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d633f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d633f6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d633f9 jmp 0x10d6339f */
  goto L_10d6339f;
L_10d633fb:;
  /* 10d633fb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d633ff jne 0x10d63408 */
  if (!C.zf) goto L_10d63408;
  /* 10d63401 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63404 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d63406 jmp 0x10d6340b */
  goto L_10d6340b;
L_10d63408:;
  /* 10d63408 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d6340b:;
  /* 10d6340b mov esp, ebp */
  ESP = (EBP);
  /* 10d6340d pop ebp */
  EBP = (pop32());
  /* 10d6340e ret  */
  ESPCHK(0x10d63310u, _esp0);
  ESP += 4; return;
}

/* FUN_10013410 @ 0x10d63410 (17 bytes, 8 insns) */
void f_10d63410(void) {
  FTRACE(0x10d63410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63410 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63411 mov ebp, esp */
  EBP = (ESP);
  /* 10d63413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63416 push eax */
  push32((uint32_t)(EAX));
  /* 10d63417 call 0x10d63310 */
  push32(0x10d6341cu); f_10d63310();
  /* 10d6341c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6341f pop ebp */
  EBP = (pop32());
  /* 10d63420 ret  */
  ESPCHK(0x10d63410u, _esp0);
  ESP += 4; return;
}

/* FUN_10013430 @ 0x10d63430 (297 bytes, 106 insns) */
void f_10d63430(void) {
  FTRACE(0x10d63430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63430 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63431 mov ebp, esp */
  EBP = (ESP);
  /* 10d63433 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63436 push esi */
  push32((uint32_t)(ESI));
L_10d63437:;
  /* 10d63437 cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6343e jle 0x10d63457 */
  if ((C.zf||C.sf!=C.of)) goto L_10d63457;
  /* 10d63440 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d63442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63445 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63447 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d63449 push ecx */
  push32((uint32_t)(ECX));
  /* 10d6344a call 0x10d5aa70 */
  push32(0x10d6344fu); f_10d5aa70();
  /* 10d6344f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63452 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d63455 jmp 0x10d63470 */
  goto L_10d63470;
L_10d63457:;
  /* 10d63457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6345a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6345c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6345e mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d63464 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63466 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d6346a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d6346d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d63470:;
  /* 10d63470 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63474 je 0x10d63481 */
  if (C.zf) goto L_10d63481;
  /* 10d63476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6347c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d6347f jmp 0x10d63437 */
  goto L_10d63437;
L_10d63481:;
  /* 10d63481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63484 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d63488 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d6348b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6348e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63491 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d63494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d63497 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d6349a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6349e je 0x10d634a6 */
  if (C.zf) goto L_10d634a6;
  /* 10d634a0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d634a4 jne 0x10d634b9 */
  if (!C.zf) goto L_10d634b9;
L_10d634a6:;
  /* 10d634a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d634a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d634ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d634ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d634b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d634b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d634b6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d634b9:;
  /* 10d634b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d634c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d634c7:;
  /* 10d634c7 cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d634ce jle 0x10d634e3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d634e3;
  /* 10d634d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d634d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d634d5 push edx */
  push32((uint32_t)(EDX));
  /* 10d634d6 call 0x10d5aa70 */
  push32(0x10d634dbu); f_10d5aa70();
  /* 10d634db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d634de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d634e1 jmp 0x10d634f8 */
  goto L_10d634f8;
L_10d634e3:;
  /* 10d634e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d634e6 mov ecx, dword ptr [0x10d7ec98] */
  ECX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d634ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d634ee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10d634f2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d634f5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10d634f8:;
  /* 10d634f8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d634fc je 0x10d63539 */
  if (C.zf) goto L_10d63539;
  /* 10d634fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63500 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d63502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63505 push eax */
  push32((uint32_t)(EAX));
  /* 10d63506 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63509 push ecx */
  push32((uint32_t)(ECX));
  /* 10d6350a call 0x10d643d0 */
  push32(0x10d6350fu); f_10d643d0();
  /* 10d6350f mov ecx, eax */
  ECX = (EAX);
  /* 10d63511 mov esi, edx */
  ESI = (EDX);
  /* 10d63513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d63516 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63519 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d6351a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6351c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6351e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d63521 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10d63524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63529 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d6352b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d6352e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63531 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63534 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d63537 jmp 0x10d634c7 */
  goto L_10d634c7;
L_10d63539:;
  /* 10d63539 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6353d jne 0x10d6354e */
  if (!C.zf) goto L_10d6354e;
  /* 10d6353f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63542 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d63544 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63547 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6354a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d6354c jmp 0x10d63554 */
  goto L_10d63554;
L_10d6354e:;
  /* 10d6354e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63551 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10d63554:;
  /* 10d63554 pop esi */
  ESI = (pop32());
  /* 10d63555 mov esp, ebp */
  ESP = (EBP);
  /* 10d63557 pop ebp */
  EBP = (pop32());
  /* 10d63558 ret  */
  ESPCHK(0x10d63430u, _esp0);
  ESP += 4; return;
}

/* FUN_10013560 @ 0x10d63560 (61 bytes, 18 insns) */
void f_10d63560(void) {
  FTRACE(0x10d63560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63560 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63561 mov ebp, esp */
  EBP = (ESP);
  /* 10d63563 cmp dword ptr [0x10d80858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6356a jne 0x10d6359b */
  if (!C.zf) goto L_10d6359b;
  /* 10d6356c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d6356e call 0x10d58460 */
  push32(0x10d63573u); f_10d58460();
  /* 10d63573 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63576 cmp dword ptr [0x10d80858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6357d jne 0x10d63591 */
  if (!C.zf) goto L_10d63591;
  /* 10d6357f call 0x10d635c0 */
  push32(0x10d63584u); f_10d635c0();
  /* 10d63584 mov eax, dword ptr [0x10d80858] */
  EAX = (r32((uint32_t)(0x10d80858)));
  /* 10d63589 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6358c mov dword ptr [0x10d80858], eax */
  w32((uint32_t)(0x10d80858), (EAX));
L_10d63591:;
  /* 10d63591 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d63593 call 0x10d58500 */
  push32(0x10d63598u); f_10d58500();
  /* 10d63598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d6359b:;
  /* 10d6359b pop ebp */
  EBP = (pop32());
  /* 10d6359c ret  */
  ESPCHK(0x10d63560u, _esp0);
  ESP += 4; return;
}

/* FUN_100135a0 @ 0x10d635a0 (30 bytes, 11 insns) */
void f_10d635a0(void) {
  FTRACE(0x10d635a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d635a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d635a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d635a3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d635a5 call 0x10d58460 */
  push32(0x10d635aau); f_10d58460();
  /* 10d635aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d635ad call 0x10d635c0 */
  push32(0x10d635b2u); f_10d635c0();
  /* 10d635b2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d635b4 call 0x10d58500 */
  push32(0x10d635b9u); f_10d58500();
  /* 10d635b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d635bc pop ebp */
  EBP = (pop32());
  /* 10d635bd ret  */
  ESPCHK(0x10d635a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x10d635c0 (939 bytes, 266 insns) */
void f_10d635c0(void) {
  FTRACE(0x10d635c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d635c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d635c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d635c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d635c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d635cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d635cf call 0x10d58460 */
  push32(0x10d635d4u); f_10d58460();
  /* 10d635d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d635d7 mov dword ptr [0x10d807a0], 0 */
  w32((uint32_t)(0x10d807a0), (0x0u));
  /* 10d635e1 mov dword ptr [0x10d7fe38], 0xffffffff */
  w32((uint32_t)(0x10d7fe38), (0xffffffffu));
  /* 10d635eb mov eax, dword ptr [0x10d7fe38] */
  EAX = (r32((uint32_t)(0x10d7fe38)));
  /* 10d635f0 mov dword ptr [0x10d7fe28], eax */
  w32((uint32_t)(0x10d7fe28), (EAX));
  /* 10d635f5 push 0x10d7c9b0 */
  push32((uint32_t)(0x10d7c9b0u));
  /* 10d635fa call 0x10d64440 */
  push32(0x10d635ffu); f_10d64440();
  /* 10d635ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63602 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d63605 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63609 jne 0x10d63743 */
  if (!C.zf) goto L_10d63743;
  /* 10d6360f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d63611 call 0x10d58500 */
  push32(0x10d63616u); f_10d58500();
  /* 10d63616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63619 push 0x10d807a8 */
  push32((uint32_t)(0x10d807a8u));
  /* 10d6361e call dword ptr [0x10d83288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83288))), 0x10d63624u);
  /* 10d63624 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63627 je 0x10d6373e */
  if (C.zf) goto L_10d6373e;
  /* 10d6362d mov dword ptr [0x10d807a0], 1 */
  w32((uint32_t)(0x10d807a0), (0x1u));
  /* 10d63637 mov ecx, dword ptr [0x10d807a8] */
  ECX = (r32((uint32_t)(0x10d807a8)));
  /* 10d6363d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63640 mov dword ptr [0x10d7fd90], ecx */
  w32((uint32_t)(0x10d7fd90), (ECX));
  /* 10d63646 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63648 mov dx, word ptr [0x10d807ee] */
  DX = (r16((uint32_t)(0x10d807ee)));
  /* 10d6364f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d63651 je 0x10d63669 */
  if (C.zf) goto L_10d63669;
  /* 10d63653 mov eax, dword ptr [0x10d807fc] */
  EAX = (r32((uint32_t)(0x10d807fc)));
  /* 10d63658 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6365b mov ecx, dword ptr [0x10d7fd90] */
  ECX = (r32((uint32_t)(0x10d7fd90)));
  /* 10d63661 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63663 mov dword ptr [0x10d7fd90], ecx */
  w32((uint32_t)(0x10d7fd90), (ECX));
L_10d63669:;
  /* 10d63669 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d6366b mov dx, word ptr [0x10d80842] */
  DX = (r16((uint32_t)(0x10d80842)));
  /* 10d63672 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d63674 je 0x10d6369e */
  if (C.zf) goto L_10d6369e;
  /* 10d63676 cmp dword ptr [0x10d80850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6367d je 0x10d6369e */
  if (C.zf) goto L_10d6369e;
  /* 10d6367f mov dword ptr [0x10d7fd94], 1 */
  w32((uint32_t)(0x10d7fd94), (0x1u));
  /* 10d63689 mov eax, dword ptr [0x10d80850] */
  EAX = (r32((uint32_t)(0x10d80850)));
  /* 10d6368e sub eax, dword ptr [0x10d807fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d807fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63694 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63697 mov dword ptr [0x10d7fd98], eax */
  w32((uint32_t)(0x10d7fd98), (EAX));
  /* 10d6369c jmp 0x10d636b2 */
  goto L_10d636b2;
L_10d6369e:;
  /* 10d6369e mov dword ptr [0x10d7fd94], 0 */
  w32((uint32_t)(0x10d7fd94), (0x0u));
  /* 10d636a8 mov dword ptr [0x10d7fd98], 0 */
  w32((uint32_t)(0x10d7fd98), (0x0u));
L_10d636b2:;
  /* 10d636b2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d636b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d636b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d636b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d636ba mov edx, dword ptr [0x10d7fe1c] */
  EDX = (r32((uint32_t)(0x10d7fe1c)));
  /* 10d636c0 push edx */
  push32((uint32_t)(EDX));
  /* 10d636c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d636c3 push 0x10d807ac */
  push32((uint32_t)(0x10d807acu));
  /* 10d636c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d636cd mov eax, dword ptr [0x10d80710] */
  EAX = (r32((uint32_t)(0x10d80710)));
  /* 10d636d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d636d3 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d636d9u);
  /* 10d636d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d636db je 0x10d636ef */
  if (C.zf) goto L_10d636ef;
  /* 10d636dd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d636e1 jne 0x10d636ef */
  if (!C.zf) goto L_10d636ef;
  /* 10d636e3 mov ecx, dword ptr [0x10d7fe1c] */
  ECX = (r32((uint32_t)(0x10d7fe1c)));
  /* 10d636e9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10d636ed jmp 0x10d636f8 */
  goto L_10d636f8;
L_10d636ef:;
  /* 10d636ef mov edx, dword ptr [0x10d7fe1c] */
  EDX = (r32((uint32_t)(0x10d7fe1c)));
  /* 10d636f5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10d636f8:;
  /* 10d636f8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d636fb push eax */
  push32((uint32_t)(EAX));
  /* 10d636fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d636fe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d63700 mov ecx, dword ptr [0x10d7fe20] */
  ECX = (r32((uint32_t)(0x10d7fe20)));
  /* 10d63706 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63707 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d63709 push 0x10d80800 */
  push32((uint32_t)(0x10d80800u));
  /* 10d6370e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d63713 mov edx, dword ptr [0x10d80710] */
  EDX = (r32((uint32_t)(0x10d80710)));
  /* 10d63719 push edx */
  push32((uint32_t)(EDX));
  /* 10d6371a call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d63720u);
  /* 10d63720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d63722 je 0x10d63735 */
  if (C.zf) goto L_10d63735;
  /* 10d63724 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63728 jne 0x10d63735 */
  if (!C.zf) goto L_10d63735;
  /* 10d6372a mov eax, dword ptr [0x10d7fe20] */
  EAX = (r32((uint32_t)(0x10d7fe20)));
  /* 10d6372f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10d63733 jmp 0x10d6373e */
  goto L_10d6373e;
L_10d63735:;
  /* 10d63735 mov ecx, dword ptr [0x10d7fe20] */
  ECX = (r32((uint32_t)(0x10d7fe20)));
  /* 10d6373b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10d6373e:;
  /* 10d6373e jmp 0x10d63967 */
  goto L_10d63967;
L_10d63743:;
  /* 10d63743 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63746 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d63749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6374b je 0x10d6376d */
  if (C.zf) goto L_10d6376d;
  /* 10d6374d cmp dword ptr [0x10d80854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63754 je 0x10d6377c */
  if (C.zf) goto L_10d6377c;
  /* 10d63756 mov ecx, dword ptr [0x10d80854] */
  ECX = (r32((uint32_t)(0x10d80854)));
  /* 10d6375c push ecx */
  push32((uint32_t)(ECX));
  /* 10d6375d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63760 push edx */
  push32((uint32_t)(EDX));
  /* 10d63761 call 0x10d606f0 */
  push32(0x10d63766u); f_10d606f0();
  /* 10d63766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6376b jne 0x10d6377c */
  if (!C.zf) goto L_10d6377c;
L_10d6376d:;
  /* 10d6376d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d6376f call 0x10d58500 */
  push32(0x10d63774u); f_10d58500();
  /* 10d63774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63777 jmp 0x10d63967 */
  goto L_10d63967;
L_10d6377c:;
  /* 10d6377c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d6377e mov eax, dword ptr [0x10d80854] */
  EAX = (r32((uint32_t)(0x10d80854)));
  /* 10d63783 push eax */
  push32((uint32_t)(EAX));
  /* 10d63784 call 0x10d554f0 */
  push32(0x10d63789u); f_10d554f0();
  /* 10d63789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6378c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10d63791 push 0x10d7c9a8 */
  push32((uint32_t)(0x10d7c9a8u));
  /* 10d63796 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d63798 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6379b push ecx */
  push32((uint32_t)(ECX));
  /* 10d6379c call 0x10d57890 */
  push32(0x10d637a1u); f_10d57890();
  /* 10d637a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637a7 push eax */
  push32((uint32_t)(EAX));
  /* 10d637a8 call 0x10d54a60 */
  push32(0x10d637adu); f_10d54a60();
  /* 10d637ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637b0 mov dword ptr [0x10d80854], eax */
  w32((uint32_t)(0x10d80854), (EAX));
  /* 10d637b5 cmp dword ptr [0x10d80854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d637bc jne 0x10d637cd */
  if (!C.zf) goto L_10d637cd;
  /* 10d637be push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d637c0 call 0x10d58500 */
  push32(0x10d637c5u); f_10d58500();
  /* 10d637c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637c8 jmp 0x10d63967 */
  goto L_10d63967;
L_10d637cd:;
  /* 10d637cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d637d0 push edx */
  push32((uint32_t)(EDX));
  /* 10d637d1 mov eax, dword ptr [0x10d80854] */
  EAX = (r32((uint32_t)(0x10d80854)));
  /* 10d637d6 push eax */
  push32((uint32_t)(EAX));
  /* 10d637d7 call 0x10d57a10 */
  push32(0x10d637dcu); f_10d57a10();
  /* 10d637dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637df push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d637e1 call 0x10d58500 */
  push32(0x10d637e6u); f_10d58500();
  /* 10d637e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d637eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d637ee push ecx */
  push32((uint32_t)(ECX));
  /* 10d637ef mov edx, dword ptr [0x10d7fe1c] */
  EDX = (r32((uint32_t)(0x10d7fe1c)));
  /* 10d637f5 push edx */
  push32((uint32_t)(EDX));
  /* 10d637f6 call 0x10d58280 */
  push32(0x10d637fbu); f_10d58280();
  /* 10d637fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d637fe mov eax, dword ptr [0x10d7fe1c] */
  EAX = (r32((uint32_t)(0x10d7fe1c)));
  /* 10d63803 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10d63807 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6380a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6380d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d63810 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63813 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d63816 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63819 jne 0x10d6382d */
  if (!C.zf) goto L_10d6382d;
  /* 10d6381b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6381e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63821 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d63824 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63827 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6382a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d6382d:;
  /* 10d6382d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63830 push eax */
  push32((uint32_t)(EAX));
  /* 10d63831 call 0x10d63310 */
  push32(0x10d63836u); f_10d63310();
  /* 10d63836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63839 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d6383f mov dword ptr [0x10d7fd90], eax */
  w32((uint32_t)(0x10d7fd90), (EAX));
L_10d63844:;
  /* 10d63844 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63847 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d6384a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6384d je 0x10d63865 */
  if (C.zf) goto L_10d63865;
  /* 10d6384f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63852 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d63855 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63858 jl 0x10d63870 */
  if ((C.sf!=C.of)) goto L_10d63870;
  /* 10d6385a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6385d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d63860 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63863 jg 0x10d63870 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d63870;
L_10d63865:;
  /* 10d63865 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63868 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6386b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d6386e jmp 0x10d63844 */
  goto L_10d63844;
L_10d63870:;
  /* 10d63870 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63873 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d63876 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63879 jne 0x10d63915 */
  if (!C.zf) goto L_10d63915;
  /* 10d6387f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63885 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d63888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6388b push edx */
  push32((uint32_t)(EDX));
  /* 10d6388c call 0x10d63310 */
  push32(0x10d63891u); f_10d63310();
  /* 10d63891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63894 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63897 mov ecx, dword ptr [0x10d7fd90] */
  ECX = (r32((uint32_t)(0x10d7fd90)));
  /* 10d6389d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6389f mov dword ptr [0x10d7fd90], ecx */
  w32((uint32_t)(0x10d7fd90), (ECX));
L_10d638a5:;
  /* 10d638a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638a8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d638ab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d638ae jl 0x10d638c6 */
  if ((C.sf!=C.of)) goto L_10d638c6;
  /* 10d638b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d638b6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d638b9 jg 0x10d638c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d638c6;
  /* 10d638bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d638c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d638c4 jmp 0x10d638a5 */
  goto L_10d638a5;
L_10d638c6:;
  /* 10d638c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d638cc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d638cf jne 0x10d63915 */
  if (!C.zf) goto L_10d63915;
  /* 10d638d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d638d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d638da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638dd push ecx */
  push32((uint32_t)(ECX));
  /* 10d638de call 0x10d63310 */
  push32(0x10d638e3u); f_10d63310();
  /* 10d638e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d638e6 mov edx, dword ptr [0x10d7fd90] */
  EDX = (r32((uint32_t)(0x10d7fd90)));
  /* 10d638ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d638ee mov dword ptr [0x10d7fd90], edx */
  w32((uint32_t)(0x10d7fd90), (EDX));
L_10d638f4:;
  /* 10d638f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d638f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d638fa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d638fd jl 0x10d63915 */
  if ((C.sf!=C.of)) goto L_10d63915;
  /* 10d638ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63902 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d63905 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63908 jg 0x10d63915 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d63915;
  /* 10d6390a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6390d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d63913 jmp 0x10d638f4 */
  goto L_10d638f4;
L_10d63915:;
  /* 10d63915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63919 je 0x10d63929 */
  if (C.zf) goto L_10d63929;
  /* 10d6391b mov edx, dword ptr [0x10d7fd90] */
  EDX = (r32((uint32_t)(0x10d7fd90)));
  /* 10d63921 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d63923 mov dword ptr [0x10d7fd90], edx */
  w32((uint32_t)(0x10d7fd90), (EDX));
L_10d63929:;
  /* 10d63929 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d6392c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d6392f mov dword ptr [0x10d7fd94], ecx */
  w32((uint32_t)(0x10d7fd94), (ECX));
  /* 10d63935 cmp dword ptr [0x10d7fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d7fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6393c je 0x10d6395e */
  if (C.zf) goto L_10d6395e;
  /* 10d6393e push 3 */
  push32((uint32_t)(0x3u));
  /* 10d63940 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63943 push edx */
  push32((uint32_t)(EDX));
  /* 10d63944 mov eax, dword ptr [0x10d7fe20] */
  EAX = (r32((uint32_t)(0x10d7fe20)));
  /* 10d63949 push eax */
  push32((uint32_t)(EAX));
  /* 10d6394a call 0x10d58280 */
  push32(0x10d6394fu); f_10d58280();
  /* 10d6394f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63952 mov ecx, dword ptr [0x10d7fe20] */
  ECX = (r32((uint32_t)(0x10d7fe20)));
  /* 10d63958 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10d6395c jmp 0x10d63967 */
  goto L_10d63967;
L_10d6395e:;
  /* 10d6395e mov edx, dword ptr [0x10d7fe20] */
  EDX = (r32((uint32_t)(0x10d7fe20)));
  /* 10d63964 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10d63967:;
  /* 10d63967 mov esp, ebp */
  ESP = (EBP);
  /* 10d63969 pop ebp */
  EBP = (pop32());
  /* 10d6396a ret  */
  ESPCHK(0x10d635c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013970 @ 0x10d63970 (46 bytes, 18 insns) */
void f_10d63970(void) {
  FTRACE(0x10d63970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63970 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63971 mov ebp, esp */
  EBP = (ESP);
  /* 10d63973 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63974 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d63976 call 0x10d58460 */
  push32(0x10d6397bu); f_10d58460();
  /* 10d6397b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6397e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63981 push eax */
  push32((uint32_t)(EAX));
  /* 10d63982 call 0x10d639a0 */
  push32(0x10d63987u); f_10d639a0();
  /* 10d63987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6398a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d6398d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d6398f call 0x10d58500 */
  push32(0x10d63994u); f_10d58500();
  /* 10d63994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6399a mov esp, ebp */
  ESP = (EBP);
  /* 10d6399c pop ebp */
  EBP = (pop32());
  /* 10d6399d ret  */
  ESPCHK(0x10d63970u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x10d639a0 (762 bytes, 246 insns) */
void f_10d639a0(void) {
  FTRACE(0x10d639a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d639a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d639a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d639a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d639a4 cmp dword ptr [0x10d7fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d7fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d639ab jne 0x10d639b4 */
  if (!C.zf) goto L_10d639b4;
  /* 10d639ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d639af jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d639b4:;
  /* 10d639b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d639b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d639ba cmp ecx, dword ptr [0x10d7fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d639c0 jne 0x10d639d4 */
  if (!C.zf) goto L_10d639d4;
  /* 10d639c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d639c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d639c8 cmp eax, dword ptr [0x10d7fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d639ce je 0x10d63b9b */
  if (C.zf) goto L_10d63b9b;
L_10d639d4:;
  /* 10d639d4 cmp dword ptr [0x10d807a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d807a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d639db je 0x10d63b55 */
  if (C.zf) goto L_10d63b55;
  /* 10d639e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d639e3 mov cx, word ptr [0x10d80840] */
  CX = (r16((uint32_t)(0x10d80840)));
  /* 10d639ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d639ec jne 0x10d63a49 */
  if (!C.zf) goto L_10d63a49;
  /* 10d639ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d639f0 mov dx, word ptr [0x10d8084e] */
  DX = (r16((uint32_t)(0x10d8084e)));
  /* 10d639f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d639f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d639fa mov ax, word ptr [0x10d8084c] */
  AX = (r16((uint32_t)(0x10d8084c)));
  /* 10d63a00 push eax */
  push32((uint32_t)(EAX));
  /* 10d63a01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63a03 mov cx, word ptr [0x10d8084a] */
  CX = (r16((uint32_t)(0x10d8084a)));
  /* 10d63a0a push ecx */
  push32((uint32_t)(ECX));
  /* 10d63a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63a0d mov dx, word ptr [0x10d80848] */
  DX = (r16((uint32_t)(0x10d80848)));
  /* 10d63a14 push edx */
  push32((uint32_t)(EDX));
  /* 10d63a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63a19 mov ax, word ptr [0x10d80844] */
  AX = (r16((uint32_t)(0x10d80844)));
  /* 10d63a1f push eax */
  push32((uint32_t)(EAX));
  /* 10d63a20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63a22 mov cx, word ptr [0x10d80846] */
  CX = (r16((uint32_t)(0x10d80846)));
  /* 10d63a29 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63a2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63a2c mov dx, word ptr [0x10d80842] */
  DX = (r16((uint32_t)(0x10d80842)));
  /* 10d63a33 push edx */
  push32((uint32_t)(EDX));
  /* 10d63a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63a37 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d63a3a push ecx */
  push32((uint32_t)(ECX));
  /* 10d63a3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63a3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63a3f call 0x10d63ca0 */
  push32(0x10d63a44u); f_10d63ca0();
  /* 10d63a44 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63a47 jmp 0x10d63a9a */
  goto L_10d63a9a;
L_10d63a49:;
  /* 10d63a49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63a4b mov dx, word ptr [0x10d8084e] */
  DX = (r16((uint32_t)(0x10d8084e)));
  /* 10d63a52 push edx */
  push32((uint32_t)(EDX));
  /* 10d63a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63a55 mov ax, word ptr [0x10d8084c] */
  AX = (r16((uint32_t)(0x10d8084c)));
  /* 10d63a5b push eax */
  push32((uint32_t)(EAX));
  /* 10d63a5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63a5e mov cx, word ptr [0x10d8084a] */
  CX = (r16((uint32_t)(0x10d8084a)));
  /* 10d63a65 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63a66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63a68 mov dx, word ptr [0x10d80848] */
  DX = (r16((uint32_t)(0x10d80848)));
  /* 10d63a6f push edx */
  push32((uint32_t)(EDX));
  /* 10d63a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63a72 mov ax, word ptr [0x10d80846] */
  AX = (r16((uint32_t)(0x10d80846)));
  /* 10d63a78 push eax */
  push32((uint32_t)(EAX));
  /* 10d63a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63a7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63a7f mov cx, word ptr [0x10d80842] */
  CX = (r16((uint32_t)(0x10d80842)));
  /* 10d63a86 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63a87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63a8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d63a8d push eax */
  push32((uint32_t)(EAX));
  /* 10d63a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63a92 call 0x10d63ca0 */
  push32(0x10d63a97u); f_10d63ca0();
  /* 10d63a97 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d63a9a:;
  /* 10d63a9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63a9c mov cx, word ptr [0x10d807ec] */
  CX = (r16((uint32_t)(0x10d807ec)));
  /* 10d63aa3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d63aa5 jne 0x10d63b02 */
  if (!C.zf) goto L_10d63b02;
  /* 10d63aa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63aa9 mov dx, word ptr [0x10d807fa] */
  DX = (r16((uint32_t)(0x10d807fa)));
  /* 10d63ab0 push edx */
  push32((uint32_t)(EDX));
  /* 10d63ab1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63ab3 mov ax, word ptr [0x10d807f8] */
  AX = (r16((uint32_t)(0x10d807f8)));
  /* 10d63ab9 push eax */
  push32((uint32_t)(EAX));
  /* 10d63aba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63abc mov cx, word ptr [0x10d807f6] */
  CX = (r16((uint32_t)(0x10d807f6)));
  /* 10d63ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63ac6 mov dx, word ptr [0x10d807f4] */
  DX = (r16((uint32_t)(0x10d807f4)));
  /* 10d63acd push edx */
  push32((uint32_t)(EDX));
  /* 10d63ace push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63ad2 mov ax, word ptr [0x10d807f0] */
  AX = (r16((uint32_t)(0x10d807f0)));
  /* 10d63ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10d63ad9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63adb mov cx, word ptr [0x10d807f2] */
  CX = (r16((uint32_t)(0x10d807f2)));
  /* 10d63ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63ae3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63ae5 mov dx, word ptr [0x10d807ee] */
  DX = (r16((uint32_t)(0x10d807ee)));
  /* 10d63aec push edx */
  push32((uint32_t)(EDX));
  /* 10d63aed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63af0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d63af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63af4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63af8 call 0x10d63ca0 */
  push32(0x10d63afdu); f_10d63ca0();
  /* 10d63afd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63b00 jmp 0x10d63b53 */
  goto L_10d63b53;
L_10d63b02:;
  /* 10d63b02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63b04 mov dx, word ptr [0x10d807fa] */
  DX = (r16((uint32_t)(0x10d807fa)));
  /* 10d63b0b push edx */
  push32((uint32_t)(EDX));
  /* 10d63b0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63b0e mov ax, word ptr [0x10d807f8] */
  AX = (r16((uint32_t)(0x10d807f8)));
  /* 10d63b14 push eax */
  push32((uint32_t)(EAX));
  /* 10d63b15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63b17 mov cx, word ptr [0x10d807f6] */
  CX = (r16((uint32_t)(0x10d807f6)));
  /* 10d63b1e push ecx */
  push32((uint32_t)(ECX));
  /* 10d63b1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d63b21 mov dx, word ptr [0x10d807f4] */
  DX = (r16((uint32_t)(0x10d807f4)));
  /* 10d63b28 push edx */
  push32((uint32_t)(EDX));
  /* 10d63b29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63b2b mov ax, word ptr [0x10d807f2] */
  AX = (r16((uint32_t)(0x10d807f2)));
  /* 10d63b31 push eax */
  push32((uint32_t)(EAX));
  /* 10d63b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d63b38 mov cx, word ptr [0x10d807ee] */
  CX = (r16((uint32_t)(0x10d807ee)));
  /* 10d63b3f push ecx */
  push32((uint32_t)(ECX));
  /* 10d63b40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63b43 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d63b46 push eax */
  push32((uint32_t)(EAX));
  /* 10d63b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b4b call 0x10d63ca0 */
  push32(0x10d63b50u); f_10d63ca0();
  /* 10d63b50 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d63b53:;
  /* 10d63b53 jmp 0x10d63b9b */
  goto L_10d63b9b;
L_10d63b55:;
  /* 10d63b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d63b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63b63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d63b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63b68 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d63b6b push edx */
  push32((uint32_t)(EDX));
  /* 10d63b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63b70 call 0x10d63ca0 */
  push32(0x10d63b75u); f_10d63ca0();
  /* 10d63b75 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d63b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b84 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d63b86 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d63b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63b8b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d63b8e push ecx */
  push32((uint32_t)(ECX));
  /* 10d63b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63b93 call 0x10d63ca0 */
  push32(0x10d63b98u); f_10d63ca0();
  /* 10d63b98 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d63b9b:;
  /* 10d63b9b mov edx, dword ptr [0x10d7fe2c] */
  EDX = (r32((uint32_t)(0x10d7fe2c)));
  /* 10d63ba1 cmp edx, dword ptr [0x10d7fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63ba7 jge 0x10d63bf4 */
  if ((C.sf==C.of)) goto L_10d63bf4;
  /* 10d63ba9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63bac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d63baf cmp ecx, dword ptr [0x10d7fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63bb5 jl 0x10d63bc5 */
  if ((C.sf!=C.of)) goto L_10d63bc5;
  /* 10d63bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63bba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d63bbd cmp eax, dword ptr [0x10d7fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63bc3 jle 0x10d63bcc */
  if ((C.zf||C.sf!=C.of)) goto L_10d63bcc;
L_10d63bc5:;
  /* 10d63bc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63bc7 jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63bcc:;
  /* 10d63bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63bcf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d63bd2 cmp edx, dword ptr [0x10d7fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63bd8 jle 0x10d63bf2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d63bf2;
  /* 10d63bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63bdd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d63be0 cmp ecx, dword ptr [0x10d7fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63be6 jge 0x10d63bf2 */
  if ((C.sf==C.of)) goto L_10d63bf2;
  /* 10d63be8 mov eax, 1 */
  EAX = (0x1u);
  /* 10d63bed jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63bf2:;
  /* 10d63bf2 jmp 0x10d63c37 */
  goto L_10d63c37;
L_10d63bf4:;
  /* 10d63bf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63bf7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d63bfa cmp eax, dword ptr [0x10d7fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c00 jl 0x10d63c10 */
  if ((C.sf!=C.of)) goto L_10d63c10;
  /* 10d63c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c05 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d63c08 cmp edx, dword ptr [0x10d7fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c0e jle 0x10d63c17 */
  if ((C.zf||C.sf!=C.of)) goto L_10d63c17;
L_10d63c10:;
  /* 10d63c10 mov eax, 1 */
  EAX = (0x1u);
  /* 10d63c15 jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63c17:;
  /* 10d63c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c1a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d63c1d cmp ecx, dword ptr [0x10d7fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c23 jle 0x10d63c37 */
  if ((C.zf||C.sf!=C.of)) goto L_10d63c37;
  /* 10d63c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c28 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d63c2b cmp eax, dword ptr [0x10d7fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c31 jge 0x10d63c37 */
  if ((C.sf==C.of)) goto L_10d63c37;
  /* 10d63c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63c35 jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63c37:;
  /* 10d63c37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d63c3d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d63c45 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63c47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c4a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d63c4d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63c53 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63c55 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63c5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d63c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63c61 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d63c64 cmp edx, dword ptr [0x10d7fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c6a jne 0x10d63c82 */
  if (!C.zf) goto L_10d63c82;
  /* 10d63c6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d63c6f cmp eax, dword ptr [0x10d7fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c75 jl 0x10d63c7e */
  if ((C.sf!=C.of)) goto L_10d63c7e;
  /* 10d63c77 mov eax, 1 */
  EAX = (0x1u);
  /* 10d63c7c jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63c7e:;
  /* 10d63c7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63c80 jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63c82:;
  /* 10d63c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d63c85 cmp ecx, dword ptr [0x10d7fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63c8b jge 0x10d63c94 */
  if ((C.sf==C.of)) goto L_10d63c94;
  /* 10d63c8d mov eax, 1 */
  EAX = (0x1u);
  /* 10d63c92 jmp 0x10d63c96 */
  goto L_10d63c96;
L_10d63c94:;
  /* 10d63c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d63c96:;
  /* 10d63c96 mov esp, ebp */
  ESP = (EBP);
  /* 10d63c98 pop ebp */
  EBP = (pop32());
  /* 10d63c99 ret  */
  ESPCHK(0x10d639a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ca0 @ 0x10d63ca0 (504 bytes, 145 insns) */
void f_10d63ca0(void) {
  FTRACE(0x10d63ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10d63ca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63ca6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63caa jne 0x10d63d7c */
  if (!C.zf) goto L_10d63d7c;
  /* 10d63cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63cb3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d63cb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d63cb8 jne 0x10d63cc9 */
  if (!C.zf) goto L_10d63cc9;
  /* 10d63cba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63cbd mov edx, dword ptr [ecx*4 + 0x10d7fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7fe4c)));
  /* 10d63cc4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d63cc7 jmp 0x10d63cd6 */
  goto L_10d63cd6;
L_10d63cc9:;
  /* 10d63cc9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63ccc mov ecx, dword ptr [eax*4 + 0x10d7fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7fe80)));
  /* 10d63cd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d63cd6:;
  /* 10d63cd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d63cd9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63cdc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d63cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63ce2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63ce5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63ceb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63cee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63cf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63cf3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63cf6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10d63cf9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10d63cfd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d63cfe mov ecx, 7 */
  ECX = (0x7u);
  /* 10d63d03 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d63d05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d63d08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d63d0b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63d0e jg 0x10d63d29 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d63d29;
  /* 10d63d10 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d63d13 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63d16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d63d19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63d1c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63d1f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63d22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63d24 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d63d27 jmp 0x10d63d3d */
  goto L_10d63d3d;
L_10d63d29:;
  /* 10d63d29 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d63d2c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63d2f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d63d32 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63d35 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63d38 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63d3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d63d3d:;
  /* 10d63d3d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63d41 jne 0x10d63d7a */
  if (!C.zf) goto L_10d63d7a;
  /* 10d63d43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63d46 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10d63d49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d63d4b jne 0x10d63d5c */
  if (!C.zf) goto L_10d63d5c;
  /* 10d63d4d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63d50 mov eax, dword ptr [edx*4 + 0x10d7fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d7fe50)));
  /* 10d63d57 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d63d5a jmp 0x10d63d69 */
  goto L_10d63d69;
L_10d63d5c:;
  /* 10d63d5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63d5f mov edx, dword ptr [ecx*4 + 0x10d7fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7fe84)));
  /* 10d63d66 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d63d69:;
  /* 10d63d69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63d6c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63d6f jle 0x10d63d7a */
  if ((C.zf||C.sf!=C.of)) goto L_10d63d7a;
  /* 10d63d71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63d74 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63d77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d63d7a:;
  /* 10d63d7a jmp 0x10d63db1 */
  goto L_10d63db1;
L_10d63d7c:;
  /* 10d63d7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63d7f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d63d82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d63d84 jne 0x10d63d95 */
  if (!C.zf) goto L_10d63d95;
  /* 10d63d86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63d89 mov ecx, dword ptr [eax*4 + 0x10d7fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7fe4c)));
  /* 10d63d90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d63d93 jmp 0x10d63da2 */
  goto L_10d63da2;
L_10d63d95:;
  /* 10d63d95 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63d98 mov eax, dword ptr [edx*4 + 0x10d7fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d7fe80)));
  /* 10d63d9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10d63da2:;
  /* 10d63da2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d63da5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d63da8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63dab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63dae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d63db1:;
  /* 10d63db1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63db5 jne 0x10d63df1 */
  if (!C.zf) goto L_10d63df1;
  /* 10d63db7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63dba mov dword ptr [0x10d7fe2c], eax */
  w32((uint32_t)(0x10d7fe2c), (EAX));
  /* 10d63dbf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d63dc2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63dc5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10d63dc8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63dca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63dcd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10d63dd0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63dd2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63dd8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10d63ddb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63ddd mov dword ptr [0x10d7fe30], ecx */
  w32((uint32_t)(0x10d7fe30), (ECX));
  /* 10d63de3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63de6 mov dword ptr [0x10d7fe28], edx */
  w32((uint32_t)(0x10d7fe28), (EDX));
  /* 10d63dec jmp 0x10d63e94 */
  goto L_10d63e94;
L_10d63df1:;
  /* 10d63df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d63df4 mov dword ptr [0x10d7fe3c], eax */
  w32((uint32_t)(0x10d7fe3c), (EAX));
  /* 10d63df9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d63dfc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63dff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10d63e02 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63e04 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63e07 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10d63e0a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63e0c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63e12 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10d63e15 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63e17 mov dword ptr [0x10d7fe40], ecx */
  w32((uint32_t)(0x10d7fe40), (ECX));
  /* 10d63e1d mov edx, dword ptr [0x10d7fd98] */
  EDX = (r32((uint32_t)(0x10d7fd98)));
  /* 10d63e23 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d63e29 mov eax, dword ptr [0x10d7fe40] */
  EAX = (r32((uint32_t)(0x10d7fe40)));
  /* 10d63e2e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63e30 mov dword ptr [0x10d7fe40], eax */
  w32((uint32_t)(0x10d7fe40), (EAX));
  /* 10d63e35 cmp dword ptr [0x10d7fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d7fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63e3c jge 0x10d63e61 */
  if ((C.sf==C.of)) goto L_10d63e61;
  /* 10d63e3e mov ecx, dword ptr [0x10d7fe40] */
  ECX = (r32((uint32_t)(0x10d7fe40)));
  /* 10d63e44 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63e4a mov dword ptr [0x10d7fe40], ecx */
  w32((uint32_t)(0x10d7fe40), (ECX));
  /* 10d63e50 mov edx, dword ptr [0x10d7fe3c] */
  EDX = (r32((uint32_t)(0x10d7fe3c)));
  /* 10d63e56 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63e59 mov dword ptr [0x10d7fe3c], edx */
  w32((uint32_t)(0x10d7fe3c), (EDX));
  /* 10d63e5f jmp 0x10d63e8b */
  goto L_10d63e8b;
L_10d63e61:;
  /* 10d63e61 cmp dword ptr [0x10d7fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10d7fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63e6b jl 0x10d63e8b */
  if ((C.sf!=C.of)) goto L_10d63e8b;
  /* 10d63e6d mov eax, dword ptr [0x10d7fe40] */
  EAX = (r32((uint32_t)(0x10d7fe40)));
  /* 10d63e72 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d63e77 mov dword ptr [0x10d7fe40], eax */
  w32((uint32_t)(0x10d7fe40), (EAX));
  /* 10d63e7c mov ecx, dword ptr [0x10d7fe3c] */
  ECX = (r32((uint32_t)(0x10d7fe3c)));
  /* 10d63e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63e85 mov dword ptr [0x10d7fe3c], ecx */
  w32((uint32_t)(0x10d7fe3c), (ECX));
L_10d63e8b:;
  /* 10d63e8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63e8e mov dword ptr [0x10d7fe38], edx */
  w32((uint32_t)(0x10d7fe38), (EDX));
L_10d63e94:;
  /* 10d63e94 mov esp, ebp */
  ESP = (EBP);
  /* 10d63e96 pop ebp */
  EBP = (pop32());
  /* 10d63e97 ret  */
  ESPCHK(0x10d63ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ea0 @ 0x10d63ea0 (382 bytes, 135 insns) */
void f_10d63ea0(void) {
  FTRACE(0x10d63ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d63ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d63ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10d63ea3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d63ea5 push 0x10d7c9b8 */
  push32((uint32_t)(0x10d7c9b8u));
  /* 10d63eaa push 0x10d5db68 */
  push32((uint32_t)(0x10d5db68u));
  /* 10d63eaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d63eb5 push eax */
  push32((uint32_t)(EAX));
  /* 10d63eb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d63ebd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63ec0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d63ec1 push esi */
  push32((uint32_t)(ESI));
  /* 10d63ec2 push edi */
  push32((uint32_t)(EDI));
  /* 10d63ec3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d63ec6 cmp dword ptr [0x10d8085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63ecd jne 0x10d63f12 */
  if (!C.zf) goto L_10d63f12;
  /* 10d63ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63ed7 call dword ptr [0x10d83284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83284))), 0x10d63eddu);
  /* 10d63edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d63edf je 0x10d63eed */
  if (C.zf) goto L_10d63eed;
  /* 10d63ee1 mov dword ptr [0x10d8085c], 1 */
  w32((uint32_t)(0x10d8085c), (0x1u));
  /* 10d63eeb jmp 0x10d63f12 */
  goto L_10d63f12;
L_10d63eed:;
  /* 10d63eed push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63eef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63ef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63ef5 call dword ptr [0x10d8329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8329c))), 0x10d63efbu);
  /* 10d63efb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d63efd je 0x10d63f0b */
  if (C.zf) goto L_10d63f0b;
  /* 10d63eff mov dword ptr [0x10d8085c], 2 */
  w32((uint32_t)(0x10d8085c), (0x2u));
  /* 10d63f09 jmp 0x10d63f12 */
  goto L_10d63f12;
L_10d63f0b:;
  /* 10d63f0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63f0d jmp 0x10d64021 */
  goto L_10d64021;
L_10d63f12:;
  /* 10d63f12 cmp dword ptr [0x10d8085c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d8085c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63f19 jne 0x10d63f36 */
  if (!C.zf) goto L_10d63f36;
  /* 10d63f1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d63f1e push eax */
  push32((uint32_t)(EAX));
  /* 10d63f1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d63f22 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63f23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d63f26 push edx */
  push32((uint32_t)(EDX));
  /* 10d63f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63f2a push eax */
  push32((uint32_t)(EAX));
  /* 10d63f2b call dword ptr [0x10d83284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83284))), 0x10d63f31u);
  /* 10d63f31 jmp 0x10d64021 */
  goto L_10d64021;
L_10d63f36:;
  /* 10d63f36 cmp dword ptr [0x10d8085c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d8085c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63f3d jne 0x10d6401f */
  if (!C.zf) goto L_10d6401f;
  /* 10d63f43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63f47 jne 0x10d63f52 */
  if (!C.zf) goto L_10d63f52;
  /* 10d63f49 mov ecx, dword ptr [0x10d80710] */
  ECX = (r32((uint32_t)(0x10d80710)));
  /* 10d63f4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10d63f52:;
  /* 10d63f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63f56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d63f59 push edx */
  push32((uint32_t)(EDX));
  /* 10d63f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63f5d push eax */
  push32((uint32_t)(EAX));
  /* 10d63f5e call dword ptr [0x10d8329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8329c))), 0x10d63f64u);
  /* 10d63f64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d63f67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63f6b jne 0x10d63f74 */
  if (!C.zf) goto L_10d63f74;
  /* 10d63f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63f6f jmp 0x10d64021 */
  goto L_10d64021;
L_10d63f74:;
  /* 10d63f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d63f7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d63f7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d63f81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d63f83 call 0x10d57c00 */
  push32(0x10d63f88u); f_10d57c00();
  /* 10d63f88 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10d63f8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d63f8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d63f91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d63f94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d63f9b jmp 0x10d63fb4 */
  goto L_10d63fb4;
  /* 10d63f9d mov eax, 1 */
  EAX = (0x1u);
  /* 10d63fa2 ret  */
  ESPCHK(0x10d63ea0u, _esp0);
  ESP += 4; return;
  /* 10d63fa3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d63fa6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d63fad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d63fb4:;
  /* 10d63fb4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63fb8 jne 0x10d63fbe */
  if (!C.zf) goto L_10d63fbe;
  /* 10d63fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63fbc jmp 0x10d64021 */
  goto L_10d64021;
L_10d63fbe:;
  /* 10d63fbe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d63fc1 push edx */
  push32((uint32_t)(EDX));
  /* 10d63fc2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d63fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10d63fc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d63fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d63fcd push edx */
  push32((uint32_t)(EDX));
  /* 10d63fce call dword ptr [0x10d8329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8329c))), 0x10d63fd4u);
  /* 10d63fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d63fd6 jne 0x10d63fdc */
  if (!C.zf) goto L_10d63fdc;
  /* 10d63fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d63fda jmp 0x10d64021 */
  goto L_10d64021;
L_10d63fdc:;
  /* 10d63fdc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d63fe0 jne 0x10d63ffd */
  if (!C.zf) goto L_10d63ffd;
  /* 10d63fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d63fe6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d63fe8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d63feb push eax */
  push32((uint32_t)(EAX));
  /* 10d63fec push 1 */
  push32((uint32_t)(0x1u));
  /* 10d63fee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d63ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d63ff2 call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d63ff8u);
  /* 10d63ff8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d63ffb jmp 0x10d6401a */
  goto L_10d6401a;
L_10d63ffd:;
  /* 10d63ffd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d64000 push edx */
  push32((uint32_t)(EDX));
  /* 10d64001 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d64004 push eax */
  push32((uint32_t)(EAX));
  /* 10d64005 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d64007 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d6400a push ecx */
  push32((uint32_t)(ECX));
  /* 10d6400b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d6400d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d64010 push edx */
  push32((uint32_t)(EDX));
  /* 10d64011 call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d64017u);
  /* 10d64017 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d6401a:;
  /* 10d6401a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d6401d jmp 0x10d64021 */
  goto L_10d64021;
L_10d6401f:;
  /* 10d6401f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d64021:;
  /* 10d64021 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10d64024 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64027 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d6402e pop edi */
  EDI = (pop32());
  /* 10d6402f pop esi */
  ESI = (pop32());
  /* 10d64030 pop ebx */
  EBX = (pop32());
  /* 10d64031 mov esp, ebp */
  ESP = (EBP);
  /* 10d64033 pop ebp */
  EBP = (pop32());
  /* 10d64034 ret  */
  ESPCHK(0x10d63ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014040 @ 0x10d64040 (398 bytes, 140 insns) */
void f_10d64040(void) {
  FTRACE(0x10d64040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64040 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64041 mov ebp, esp */
  EBP = (ESP);
  /* 10d64043 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d64045 push 0x10d7c9c8 */
  push32((uint32_t)(0x10d7c9c8u));
  /* 10d6404a push 0x10d5db68 */
  push32((uint32_t)(0x10d5db68u));
  /* 10d6404f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d64055 push eax */
  push32((uint32_t)(EAX));
  /* 10d64056 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d6405d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64060 push ebx */
  push32((uint32_t)(EBX));
  /* 10d64061 push esi */
  push32((uint32_t)(ESI));
  /* 10d64062 push edi */
  push32((uint32_t)(EDI));
  /* 10d64063 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d64066 cmp dword ptr [0x10d80860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6406d jne 0x10d640b2 */
  if (!C.zf) goto L_10d640b2;
  /* 10d6406f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64071 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64073 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64075 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64077 call dword ptr [0x10d83284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83284))), 0x10d6407du);
  /* 10d6407d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6407f je 0x10d6408d */
  if (C.zf) goto L_10d6408d;
  /* 10d64081 mov dword ptr [0x10d80860], 1 */
  w32((uint32_t)(0x10d80860), (0x1u));
  /* 10d6408b jmp 0x10d640b2 */
  goto L_10d640b2;
L_10d6408d:;
  /* 10d6408d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6408f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64091 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64093 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64095 call dword ptr [0x10d8329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8329c))), 0x10d6409bu);
  /* 10d6409b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d6409d je 0x10d640ab */
  if (C.zf) goto L_10d640ab;
  /* 10d6409f mov dword ptr [0x10d80860], 2 */
  w32((uint32_t)(0x10d80860), (0x2u));
  /* 10d640a9 jmp 0x10d640b2 */
  goto L_10d640b2;
L_10d640ab:;
  /* 10d640ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d640ad jmp 0x10d641d1 */
  goto L_10d641d1;
L_10d640b2:;
  /* 10d640b2 cmp dword ptr [0x10d80860], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d80860))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d640b9 jne 0x10d640d6 */
  if (!C.zf) goto L_10d640d6;
  /* 10d640bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d640be push eax */
  push32((uint32_t)(EAX));
  /* 10d640bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d640c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d640c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d640c6 push edx */
  push32((uint32_t)(EDX));
  /* 10d640c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d640ca push eax */
  push32((uint32_t)(EAX));
  /* 10d640cb call dword ptr [0x10d8329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8329c))), 0x10d640d1u);
  /* 10d640d1 jmp 0x10d641d1 */
  goto L_10d641d1;
L_10d640d6:;
  /* 10d640d6 cmp dword ptr [0x10d80860], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d80860))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d640dd jne 0x10d641cf */
  if (!C.zf) goto L_10d641cf;
  /* 10d640e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d640e7 jne 0x10d640f2 */
  if (!C.zf) goto L_10d640f2;
  /* 10d640e9 mov ecx, dword ptr [0x10d80710] */
  ECX = (r32((uint32_t)(0x10d80710)));
  /* 10d640ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10d640f2:;
  /* 10d640f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d640f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d640f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d640f9 push edx */
  push32((uint32_t)(EDX));
  /* 10d640fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d640fd push eax */
  push32((uint32_t)(EAX));
  /* 10d640fe call dword ptr [0x10d83284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83284))), 0x10d64104u);
  /* 10d64104 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d64107 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6410b jne 0x10d64114 */
  if (!C.zf) goto L_10d64114;
  /* 10d6410d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6410f jmp 0x10d641d1 */
  goto L_10d641d1;
L_10d64114:;
  /* 10d64114 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d6411b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d6411e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d64120 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64123 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d64125 call 0x10d57c00 */
  push32(0x10d6412au); f_10d57c00();
  /* 10d6412a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10d6412d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d64130 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d64133 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d64136 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d6413d jmp 0x10d64156 */
  goto L_10d64156;
  /* 10d6413f mov eax, 1 */
  EAX = (0x1u);
  /* 10d64144 ret  */
  ESPCHK(0x10d64040u, _esp0);
  ESP += 4; return;
  /* 10d64145 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d64148 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d6414f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d64156:;
  /* 10d64156 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6415a jne 0x10d64160 */
  if (!C.zf) goto L_10d64160;
  /* 10d6415c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6415e jmp 0x10d641d1 */
  goto L_10d641d1;
L_10d64160:;
  /* 10d64160 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d64163 push edx */
  push32((uint32_t)(EDX));
  /* 10d64164 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d64167 push eax */
  push32((uint32_t)(EAX));
  /* 10d64168 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6416b push ecx */
  push32((uint32_t)(ECX));
  /* 10d6416c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6416f push edx */
  push32((uint32_t)(EDX));
  /* 10d64170 call dword ptr [0x10d83284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83284))), 0x10d64176u);
  /* 10d64176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64178 jne 0x10d6417e */
  if (!C.zf) goto L_10d6417e;
  /* 10d6417a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6417c jmp 0x10d641d1 */
  goto L_10d641d1;
L_10d6417e:;
  /* 10d6417e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64182 jne 0x10d641a6 */
  if (!C.zf) goto L_10d641a6;
  /* 10d64184 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64186 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64188 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6418a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6418c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d6418e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d64191 push eax */
  push32((uint32_t)(EAX));
  /* 10d64192 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d64197 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d6419a push ecx */
  push32((uint32_t)(ECX));
  /* 10d6419b call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d641a1u);
  /* 10d641a1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d641a4 jmp 0x10d641ca */
  goto L_10d641ca;
L_10d641a6:;
  /* 10d641a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d641a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d641aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d641ad push edx */
  push32((uint32_t)(EDX));
  /* 10d641ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d641b1 push eax */
  push32((uint32_t)(EAX));
  /* 10d641b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d641b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d641b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d641b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d641bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d641c0 push edx */
  push32((uint32_t)(EDX));
  /* 10d641c1 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d641c7u);
  /* 10d641c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d641ca:;
  /* 10d641ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d641cd jmp 0x10d641d1 */
  goto L_10d641d1;
L_10d641cf:;
  /* 10d641cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d641d1:;
  /* 10d641d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10d641d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d641d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d641de pop edi */
  EDI = (pop32());
  /* 10d641df pop esi */
  ESI = (pop32());
  /* 10d641e0 pop ebx */
  EBX = (pop32());
  /* 10d641e1 mov esp, ebp */
  ESP = (EBP);
  /* 10d641e3 pop ebp */
  EBP = (pop32());
  /* 10d641e4 ret  */
  ESPCHK(0x10d64040u, _esp0);
  ESP += 4; return;
}

/* FUN_100141f0 @ 0x10d641f0 (11 bytes, 6 insns) */
void f_10d641f0(void) {
  FTRACE(0x10d641f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d641f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d641f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d641f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d641f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d641f9 pop ebp */
  EBP = (pop32());
  /* 10d641fa ret  */
  ESPCHK(0x10d641f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014200 @ 0x10d64200 (147 bytes, 43 insns) */
void f_10d64200(void) {
  FTRACE(0x10d64200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64200 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64201 mov ebp, esp */
  EBP = (ESP);
  /* 10d64203 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64204 cmp dword ptr [0x10d80700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6420b jne 0x10d64227 */
  if (!C.zf) goto L_10d64227;
  /* 10d6420d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64211 jl 0x10d64222 */
  if ((C.sf!=C.of)) goto L_10d64222;
  /* 10d64213 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64217 jg 0x10d64222 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d64222;
  /* 10d64219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6421c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6421f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d64222:;
  /* 10d64222 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64225 jmp 0x10d6428f */
  goto L_10d6428f;
L_10d64227:;
  /* 10d64227 push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d6422c call dword ptr [0x10d8330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8330c))), 0x10d64232u);
  /* 10d64232 cmp dword ptr [0x10d8087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64239 je 0x10d64259 */
  if (C.zf) goto L_10d64259;
  /* 10d6423b push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d64240 call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d64246u);
  /* 10d64246 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d64248 call 0x10d58460 */
  push32(0x10d6424du); f_10d58460();
  /* 10d6424d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64250 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d64257 jmp 0x10d64260 */
  goto L_10d64260;
L_10d64259:;
  /* 10d64259 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d64260:;
  /* 10d64260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64263 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64264 call 0x10d642a0 */
  push32(0x10d64269u); f_10d642a0();
  /* 10d64269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6426c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d6426f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64273 je 0x10d64281 */
  if (C.zf) goto L_10d64281;
  /* 10d64275 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d64277 call 0x10d58500 */
  push32(0x10d6427cu); f_10d58500();
  /* 10d6427c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6427f jmp 0x10d6428c */
  goto L_10d6428c;
L_10d64281:;
  /* 10d64281 push 0x10d8088c */
  push32((uint32_t)(0x10d8088cu));
  /* 10d64286 call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d6428cu);
L_10d6428c:;
  /* 10d6428c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10d6428f:;
  /* 10d6428f mov esp, ebp */
  ESP = (EBP);
  /* 10d64291 pop ebp */
  EBP = (pop32());
  /* 10d64292 ret  */
  ESPCHK(0x10d64200u, _esp0);
  ESP += 4; return;
}

/* FUN_100142a0 @ 0x10d642a0 (299 bytes, 91 insns) */
void f_10d642a0(void) {
  FTRACE(0x10d642a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d642a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d642a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d642a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d642a6 cmp dword ptr [0x10d80700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d642ad jne 0x10d642cc */
  if (!C.zf) goto L_10d642cc;
  /* 10d642af cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d642b3 jl 0x10d642c4 */
  if ((C.sf!=C.of)) goto L_10d642c4;
  /* 10d642b5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d642b9 jg 0x10d642c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d642c4;
  /* 10d642bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d642be add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d642c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d642c4:;
  /* 10d642c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d642c7 jmp 0x10d643c7 */
  goto L_10d643c7;
L_10d642cc:;
  /* 10d642cc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d642d3 jge 0x10d64313 */
  if ((C.sf==C.of)) goto L_10d64313;
  /* 10d642d5 cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d642dc jle 0x10d642f1 */
  if ((C.zf||C.sf!=C.of)) goto L_10d642f1;
  /* 10d642de push 1 */
  push32((uint32_t)(0x1u));
  /* 10d642e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d642e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d642e4 call 0x10d5aa70 */
  push32(0x10d642e9u); f_10d5aa70();
  /* 10d642e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d642ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d642ef jmp 0x10d64305 */
  goto L_10d64305;
L_10d642f1:;
  /* 10d642f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d642f4 mov eax, dword ptr [0x10d7ec98] */
  EAX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d642f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d642fb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d642ff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d64302 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d64305:;
  /* 10d64305 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64309 jne 0x10d64313 */
  if (!C.zf) goto L_10d64313;
  /* 10d6430b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6430e jmp 0x10d643c7 */
  goto L_10d643c7;
L_10d64313:;
  /* 10d64313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64316 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d64319 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d6431f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d64325 mov eax, dword ptr [0x10d7ec98] */
  EAX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d6432a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d6432c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d64330 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d64336 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d64338 je 0x10d6435c */
  if (C.zf) goto L_10d6435c;
  /* 10d6433a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6433d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d64340 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d64346 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10d64349 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d6434c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10d6434f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10d64353 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d6435a jmp 0x10d6436d */
  goto L_10d6436d;
L_10d6435c:;
  /* 10d6435c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d6435f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10d64362 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10d64366 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10d6436d:;
  /* 10d6436d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d6436f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64371 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d64373 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10d64376 push edx */
  push32((uint32_t)(EDX));
  /* 10d64377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6437a push eax */
  push32((uint32_t)(EAX));
  /* 10d6437b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d6437e push ecx */
  push32((uint32_t)(ECX));
  /* 10d6437f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d64384 mov edx, dword ptr [0x10d80700] */
  EDX = (r32((uint32_t)(0x10d80700)));
  /* 10d6438a push edx */
  push32((uint32_t)(EDX));
  /* 10d6438b call 0x10d5ce50 */
  push32(0x10d64390u); f_10d5ce50();
  /* 10d64390 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64393 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d64396 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6439a jne 0x10d643a1 */
  if (!C.zf) goto L_10d643a1;
  /* 10d6439c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d6439f jmp 0x10d643c7 */
  goto L_10d643c7;
L_10d643a1:;
  /* 10d643a1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d643a5 jne 0x10d643b1 */
  if (!C.zf) goto L_10d643b1;
  /* 10d643a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d643aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d643af jmp 0x10d643c7 */
  goto L_10d643c7;
L_10d643b1:;
  /* 10d643b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d643b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d643b9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10d643bc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d643c2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d643c5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10d643c7:;
  /* 10d643c7 mov esp, ebp */
  ESP = (EBP);
  /* 10d643c9 pop ebp */
  EBP = (pop32());
  /* 10d643ca ret  */
  ESPCHK(0x10d642a0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10d643d0 (52 bytes, 19 insns) */
void f_10d643d0(void) {
  FTRACE(0x10d643d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d643d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d643d4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d643d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d643da mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d643de jne 0x10d643e9 */
  if (!C.zf) goto L_10d643e9;
  /* 10d643e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d643e4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d643e6 ret 0x10 */
  ESPCHK(0x10d643d0u, _esp0);
  ESP += 20; return;
L_10d643e9:;
  /* 10d643e9 push ebx */
  push32((uint32_t)(EBX));
  /* 10d643ea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d643ec mov ebx, eax */
  EBX = (EAX);
  /* 10d643ee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d643f2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d643f6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d643f8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d643fc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d643fe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64400 pop ebx */
  EBX = (pop32());
  /* 10d64401 ret 0x10 */
  ESPCHK(0x10d643d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014410 @ 0x10d64410 (46 bytes, 18 insns) */
void f_10d64410(void) {
  FTRACE(0x10d64410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64410 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64411 mov ebp, esp */
  EBP = (ESP);
  /* 10d64413 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64414 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d64416 call 0x10d58460 */
  push32(0x10d6441bu); f_10d58460();
  /* 10d6441b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6441e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64421 push eax */
  push32((uint32_t)(EAX));
  /* 10d64422 call 0x10d64440 */
  push32(0x10d64427u); f_10d64440();
  /* 10d64427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6442a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d6442d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10d6442f call 0x10d58500 */
  push32(0x10d64434u); f_10d58500();
  /* 10d64434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d6443a mov esp, ebp */
  ESP = (EBP);
  /* 10d6443c pop ebp */
  EBP = (pop32());
  /* 10d6443d ret  */
  ESPCHK(0x10d64410u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10d64440 (198 bytes, 69 insns) */
void f_10d64440(void) {
  FTRACE(0x10d64440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64440 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64441 mov ebp, esp */
  EBP = (ESP);
  /* 10d64443 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64446 mov eax, dword ptr [0x10d80520] */
  EAX = (r32((uint32_t)(0x10d80520)));
  /* 10d6444b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d6444e cmp dword ptr [0x10d82020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d82020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64455 jne 0x10d6445e */
  if (!C.zf) goto L_10d6445e;
  /* 10d64457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64459 jmp 0x10d64502 */
  goto L_10d64502;
L_10d6445e:;
  /* 10d6445e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64462 jne 0x10d64486 */
  if (!C.zf) goto L_10d64486;
  /* 10d64464 cmp dword ptr [0x10d80528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6446b je 0x10d64486 */
  if (C.zf) goto L_10d64486;
  /* 10d6446d call 0x10d64560 */
  push32(0x10d64472u); f_10d64560();
  /* 10d64472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64474 je 0x10d6447d */
  if (C.zf) goto L_10d6447d;
  /* 10d64476 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64478 jmp 0x10d64502 */
  goto L_10d64502;
L_10d6447d:;
  /* 10d6447d mov ecx, dword ptr [0x10d80520] */
  ECX = (r32((uint32_t)(0x10d80520)));
  /* 10d64483 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d64486:;
  /* 10d64486 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6448a je 0x10d64500 */
  if (C.zf) goto L_10d64500;
  /* 10d6448c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64490 je 0x10d64500 */
  if (C.zf) goto L_10d64500;
  /* 10d64492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64495 push edx */
  push32((uint32_t)(EDX));
  /* 10d64496 call 0x10d57890 */
  push32(0x10d6449bu); f_10d57890();
  /* 10d6449b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6449e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d644a1:;
  /* 10d644a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d644a4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d644a7 je 0x10d64500 */
  if (C.zf) goto L_10d64500;
  /* 10d644a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d644ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d644ae push edx */
  push32((uint32_t)(EDX));
  /* 10d644af call 0x10d57890 */
  push32(0x10d644b4u); f_10d57890();
  /* 10d644b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d644b7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d644ba jbe 0x10d644f5 */
  if ((C.cf||C.zf)) goto L_10d644f5;
  /* 10d644bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d644bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d644c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d644c4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10d644c8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d644cb jne 0x10d644f5 */
  if (!C.zf) goto L_10d644f5;
  /* 10d644cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d644d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d644d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d644d4 push edx */
  push32((uint32_t)(EDX));
  /* 10d644d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d644d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d644da push ecx */
  push32((uint32_t)(ECX));
  /* 10d644db call 0x10d64510 */
  push32(0x10d644e0u); f_10d64510();
  /* 10d644e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d644e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d644e5 jne 0x10d644f5 */
  if (!C.zf) goto L_10d644f5;
  /* 10d644e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d644ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d644ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d644ef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10d644f3 jmp 0x10d64502 */
  goto L_10d64502;
L_10d644f5:;
  /* 10d644f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d644f8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d644fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d644fe jmp 0x10d644a1 */
  goto L_10d644a1;
L_10d64500:;
  /* 10d64500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d64502:;
  /* 10d64502 mov esp, ebp */
  ESP = (EBP);
  /* 10d64504 pop ebp */
  EBP = (pop32());
  /* 10d64505 ret  */
  ESPCHK(0x10d64440u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10d64510 (79 bytes, 32 insns) */
void f_10d64510(void) {
  FTRACE(0x10d64510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64510 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64511 mov ebp, esp */
  EBP = (ESP);
  /* 10d64513 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64514 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64518 jne 0x10d6451e */
  if (!C.zf) goto L_10d6451e;
  /* 10d6451a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6451c jmp 0x10d6455b */
  goto L_10d6455b;
L_10d6451e:;
  /* 10d6451e mov eax, dword ptr [0x10d81be4] */
  EAX = (r32((uint32_t)(0x10d81be4)));
  /* 10d64523 push eax */
  push32((uint32_t)(EAX));
  /* 10d64524 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d64527 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64528 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d6452b push edx */
  push32((uint32_t)(EDX));
  /* 10d6452c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d6452f push eax */
  push32((uint32_t)(EAX));
  /* 10d64530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64533 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64534 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64536 mov edx, dword ptr [0x10d81e84] */
  EDX = (r32((uint32_t)(0x10d81e84)));
  /* 10d6453c push edx */
  push32((uint32_t)(EDX));
  /* 10d6453d call 0x10d64610 */
  push32(0x10d64542u); f_10d64610();
  /* 10d64542 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64545 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d64548 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6454c jne 0x10d64555 */
  if (!C.zf) goto L_10d64555;
  /* 10d6454e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10d64553 jmp 0x10d6455b */
  goto L_10d6455b;
L_10d64555:;
  /* 10d64555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64558 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d6455b:;
  /* 10d6455b mov esp, ebp */
  ESP = (EBP);
  /* 10d6455d pop ebp */
  EBP = (pop32());
  /* 10d6455e ret  */
  ESPCHK(0x10d64510u, _esp0);
  ESP += 4; return;
}

/* FUN_10014560 @ 0x10d64560 (174 bytes, 66 insns) */
void f_10d64560(void) {
  FTRACE(0x10d64560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64560 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64561 mov ebp, esp */
  EBP = (ESP);
  /* 10d64563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64566 mov eax, dword ptr [0x10d80528] */
  EAX = (r32((uint32_t)(0x10d80528)));
  /* 10d6456b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d6456e:;
  /* 10d6456e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64571 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64574 je 0x10d64608 */
  if (C.zf) goto L_10d64608;
  /* 10d6457a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6457c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6457e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64580 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64582 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d64584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64587 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d64589 push eax */
  push32((uint32_t)(EAX));
  /* 10d6458a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6458c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d6458e call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d64594u);
  /* 10d64594 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d64597 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6459b jne 0x10d645a2 */
  if (!C.zf) goto L_10d645a2;
  /* 10d6459d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d645a0 jmp 0x10d6460a */
  goto L_10d6460a;
L_10d645a2:;
  /* 10d645a2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d645a4 push 0x10d7c9d4 */
  push32((uint32_t)(0x10d7c9d4u));
  /* 10d645a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d645ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d645ae push ecx */
  push32((uint32_t)(ECX));
  /* 10d645af call 0x10d54a60 */
  push32(0x10d645b4u); f_10d54a60();
  /* 10d645b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d645b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d645ba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d645be jne 0x10d645c5 */
  if (!C.zf) goto L_10d645c5;
  /* 10d645c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d645c3 jmp 0x10d6460a */
  goto L_10d6460a;
L_10d645c5:;
  /* 10d645c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d645c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d645c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d645cc push edx */
  push32((uint32_t)(EDX));
  /* 10d645cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d645d0 push eax */
  push32((uint32_t)(EAX));
  /* 10d645d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d645d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d645d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d645d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d645d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d645db push 1 */
  push32((uint32_t)(0x1u));
  /* 10d645dd call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d645e3u);
  /* 10d645e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d645e5 jne 0x10d645ec */
  if (!C.zf) goto L_10d645ec;
  /* 10d645e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d645ea jmp 0x10d6460a */
  goto L_10d6460a;
L_10d645ec:;
  /* 10d645ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10d645ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d645f1 push eax */
  push32((uint32_t)(EAX));
  /* 10d645f2 call 0x10d64a60 */
  push32(0x10d645f7u); f_10d64a60();
  /* 10d645f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d645fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d645fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64600 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d64603 jmp 0x10d6456e */
  goto L_10d6456e;
L_10d64608:;
  /* 10d64608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d6460a:;
  /* 10d6460a mov esp, ebp */
  ESP = (EBP);
  /* 10d6460c pop ebp */
  EBP = (pop32());
  /* 10d6460d ret  */
  ESPCHK(0x10d64560u, _esp0);
  ESP += 4; return;
}

/* FUN_10014610 @ 0x10d64610 (970 bytes, 340 insns) */
void f_10d64610(void) {
  FTRACE(0x10d64610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64610 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64611 mov ebp, esp */
  EBP = (ESP);
  /* 10d64613 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d64615 push 0x10d7ca28 */
  push32((uint32_t)(0x10d7ca28u));
  /* 10d6461a push 0x10d5db68 */
  push32((uint32_t)(0x10d5db68u));
  /* 10d6461f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d64625 push eax */
  push32((uint32_t)(EAX));
  /* 10d64626 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d6462d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64630 push ebx */
  push32((uint32_t)(EBX));
  /* 10d64631 push esi */
  push32((uint32_t)(ESI));
  /* 10d64632 push edi */
  push32((uint32_t)(EDI));
  /* 10d64633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d64636 cmp dword ptr [0x10d80864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6463d jne 0x10d64696 */
  if (!C.zf) goto L_10d64696;
  /* 10d6463f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64641 push 0x10d7c084 */
  push32((uint32_t)(0x10d7c084u));
  /* 10d64646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64648 push 0x10d7c084 */
  push32((uint32_t)(0x10d7c084u));
  /* 10d6464d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6464f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64651 call dword ptr [0x10d83280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83280))), 0x10d64657u);
  /* 10d64657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64659 je 0x10d64667 */
  if (C.zf) goto L_10d64667;
  /* 10d6465b mov dword ptr [0x10d80864], 1 */
  w32((uint32_t)(0x10d80864), (0x1u));
  /* 10d64665 jmp 0x10d64696 */
  goto L_10d64696;
L_10d64667:;
  /* 10d64667 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64669 push 0x10d7c080 */
  push32((uint32_t)(0x10d7c080u));
  /* 10d6466e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64670 push 0x10d7c080 */
  push32((uint32_t)(0x10d7c080u));
  /* 10d64675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d64679 call dword ptr [0x10d8328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8328c))), 0x10d6467fu);
  /* 10d6467f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64681 je 0x10d6468f */
  if (C.zf) goto L_10d6468f;
  /* 10d64683 mov dword ptr [0x10d80864], 2 */
  w32((uint32_t)(0x10d80864), (0x2u));
  /* 10d6468d jmp 0x10d64696 */
  goto L_10d64696;
L_10d6468f:;
  /* 10d6468f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64691 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64696:;
  /* 10d64696 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6469a jle 0x10d646af */
  if ((C.zf||C.sf!=C.of)) goto L_10d646af;
  /* 10d6469c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6469f push eax */
  push32((uint32_t)(EAX));
  /* 10d646a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d646a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d646a4 call 0x10d64a10 */
  push32(0x10d646a9u); f_10d64a10();
  /* 10d646a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d646ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10d646af:;
  /* 10d646af cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d646b3 jle 0x10d646c8 */
  if ((C.zf||C.sf!=C.of)) goto L_10d646c8;
  /* 10d646b5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d646b8 push edx */
  push32((uint32_t)(EDX));
  /* 10d646b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d646bc push eax */
  push32((uint32_t)(EAX));
  /* 10d646bd call 0x10d64a10 */
  push32(0x10d646c2u); f_10d64a10();
  /* 10d646c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d646c5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10d646c8:;
  /* 10d646c8 cmp dword ptr [0x10d80864], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d80864))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d646cf jne 0x10d646f4 */
  if (!C.zf) goto L_10d646f4;
  /* 10d646d1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d646d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d646d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d646d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d646d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d646dc push eax */
  push32((uint32_t)(EAX));
  /* 10d646dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d646e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d646e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d646e4 push edx */
  push32((uint32_t)(EDX));
  /* 10d646e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d646e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d646e9 call dword ptr [0x10d8328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8328c))), 0x10d646efu);
  /* 10d646ef jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d646f4:;
  /* 10d646f4 cmp dword ptr [0x10d80864], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d80864))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d646fb jne 0x10d649f2 */
  if (!C.zf) goto L_10d649f2;
  /* 10d64701 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64705 jne 0x10d64710 */
  if (!C.zf) goto L_10d64710;
  /* 10d64707 mov ecx, dword ptr [0x10d80710] */
  ECX = (r32((uint32_t)(0x10d80710)));
  /* 10d6470d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10d64710:;
  /* 10d64710 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64714 je 0x10d64720 */
  if (C.zf) goto L_10d64720;
  /* 10d64716 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6471a jne 0x10d6489c */
  if (!C.zf) goto L_10d6489c;
L_10d64720:;
  /* 10d64720 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d64723 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64726 jne 0x10d64732 */
  if (!C.zf) goto L_10d64732;
  /* 10d64728 mov eax, 2 */
  EAX = (0x2u);
  /* 10d6472d jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64732:;
  /* 10d64732 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64736 jle 0x10d64742 */
  if ((C.zf||C.sf!=C.of)) goto L_10d64742;
  /* 10d64738 mov eax, 1 */
  EAX = (0x1u);
  /* 10d6473d jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64742:;
  /* 10d64742 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64746 jle 0x10d64752 */
  if ((C.zf||C.sf!=C.of)) goto L_10d64752;
  /* 10d64748 mov eax, 3 */
  EAX = (0x3u);
  /* 10d6474d jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64752:;
  /* 10d64752 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10d64755 push eax */
  push32((uint32_t)(EAX));
  /* 10d64756 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d64759 push ecx */
  push32((uint32_t)(ECX));
  /* 10d6475a call dword ptr [0x10d832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832d8))), 0x10d64760u);
  /* 10d64760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64762 jne 0x10d6476b */
  if (!C.zf) goto L_10d6476b;
  /* 10d64764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64766 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d6476b:;
  /* 10d6476b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6476f jne 0x10d64777 */
  if (!C.zf) goto L_10d64777;
  /* 10d64771 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64775 je 0x10d647a4 */
  if (C.zf) goto L_10d647a4;
L_10d64777:;
  /* 10d64777 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6477b jne 0x10d64783 */
  if (!C.zf) goto L_10d64783;
  /* 10d6477d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64781 je 0x10d647a4 */
  if (C.zf) goto L_10d647a4;
L_10d64783:;
  /* 10d64783 push 0x10d7c9e8 */
  push32((uint32_t)(0x10d7c9e8u));
  /* 10d64788 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6478a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10d6478f push 0x10d7c9e0 */
  push32((uint32_t)(0x10d7c9e0u));
  /* 10d64794 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64796 call 0x10d53b20 */
  push32(0x10d6479bu); f_10d53b20();
  /* 10d6479b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d6479e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d647a1 jne 0x10d647a4 */
  if (!C.zf) goto L_10d647a4;
  /* 10d647a3 int3  */
  x86_unimpl("int3 @ 0x10d647a3");
L_10d647a4:;
  /* 10d647a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d647a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d647a8 jne 0x10d6476b */
  if (!C.zf) goto L_10d6476b;
  /* 10d647aa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d647ae jle 0x10d64823 */
  if ((C.zf||C.sf!=C.of)) goto L_10d64823;
  /* 10d647b0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d647b4 jae 0x10d647c0 */
  if (!C.cf) goto L_10d647c0;
  /* 10d647b6 mov eax, 3 */
  EAX = (0x3u);
  /* 10d647bb jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d647c0:;
  /* 10d647c0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10d647c3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10d647c6 jmp 0x10d647d1 */
  goto L_10d647d1;
L_10d647c8:;
  /* 10d647c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d647cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d647ce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10d647d1:;
  /* 10d647d1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d647d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d647d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d647d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d647da je 0x10d64819 */
  if (C.zf) goto L_10d64819;
  /* 10d647dc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d647df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d647e1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d647e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d647e6 je 0x10d64819 */
  if (C.zf) goto L_10d64819;
  /* 10d647e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d647eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d647ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d647ef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d647f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d647f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d647f6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d647f8 jl 0x10d64817 */
  if ((C.sf!=C.of)) goto L_10d64817;
  /* 10d647fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d647fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d647ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d64801 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d64804 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d64806 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d64809 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6480b jg 0x10d64817 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d64817;
  /* 10d6480d mov eax, 2 */
  EAX = (0x2u);
  /* 10d64812 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64817:;
  /* 10d64817 jmp 0x10d647c8 */
  goto L_10d647c8;
L_10d64819:;
  /* 10d64819 mov eax, 3 */
  EAX = (0x3u);
  /* 10d6481e jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64823:;
  /* 10d64823 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64827 jle 0x10d6489c */
  if ((C.zf||C.sf!=C.of)) goto L_10d6489c;
  /* 10d64829 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6482d jae 0x10d64839 */
  if (!C.cf) goto L_10d64839;
  /* 10d6482f mov eax, 1 */
  EAX = (0x1u);
  /* 10d64834 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64839:;
  /* 10d64839 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10d6483c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10d6483f jmp 0x10d6484a */
  goto L_10d6484a;
L_10d64841:;
  /* 10d64841 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d64844 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64847 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10d6484a:;
  /* 10d6484a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d6484d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d6484f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d64851 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64853 je 0x10d64892 */
  if (C.zf) goto L_10d64892;
  /* 10d64855 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d64858 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d6485a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d6485d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d6485f je 0x10d64892 */
  if (C.zf) goto L_10d64892;
  /* 10d64861 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d64864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64866 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d64868 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d6486b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d6486d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d6486f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64871 jl 0x10d64890 */
  if ((C.sf!=C.of)) goto L_10d64890;
  /* 10d64873 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d64876 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d64878 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d6487a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10d6487d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6487f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d64882 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64884 jg 0x10d64890 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d64890;
  /* 10d64886 mov eax, 2 */
  EAX = (0x2u);
  /* 10d6488b jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64890:;
  /* 10d64890 jmp 0x10d64841 */
  goto L_10d64841;
L_10d64892:;
  /* 10d64892 mov eax, 1 */
  EAX = (0x1u);
  /* 10d64897 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d6489c:;
  /* 10d6489c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6489e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d648a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d648a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d648a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d648a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d648a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d648aa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d648ad push eax */
  push32((uint32_t)(EAX));
  /* 10d648ae call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d648b4u);
  /* 10d648b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d648b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d648bb jne 0x10d648c4 */
  if (!C.zf) goto L_10d648c4;
  /* 10d648bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d648bf jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d648c4:;
  /* 10d648c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d648cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d648ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d648d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d648d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d648d5 call 0x10d57c00 */
  push32(0x10d648dau); f_10d57c00();
  /* 10d648da mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10d648dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d648e0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10d648e3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d648e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d648ed jmp 0x10d64906 */
  goto L_10d64906;
  /* 10d648ef mov eax, 1 */
  EAX = (0x1u);
  /* 10d648f4 ret  */
  ESPCHK(0x10d64610u, _esp0);
  ESP += 4; return;
  /* 10d648f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d648f8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d648ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d64906:;
  /* 10d64906 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d6490a jne 0x10d64913 */
  if (!C.zf) goto L_10d64913;
  /* 10d6490c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6490e jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64913:;
  /* 10d64913 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d64916 push edx */
  push32((uint32_t)(EDX));
  /* 10d64917 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d6491a push eax */
  push32((uint32_t)(EAX));
  /* 10d6491b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d6491e push ecx */
  push32((uint32_t)(ECX));
  /* 10d6491f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d64922 push edx */
  push32((uint32_t)(EDX));
  /* 10d64923 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d64925 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d64928 push eax */
  push32((uint32_t)(EAX));
  /* 10d64929 call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d6492fu);
  /* 10d6492f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64931 jne 0x10d6493a */
  if (!C.zf) goto L_10d6493a;
  /* 10d64933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64935 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d6493a:;
  /* 10d6493a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6493c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d6493e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d64941 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64942 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d64945 push edx */
  push32((uint32_t)(EDX));
  /* 10d64946 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d64948 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d6494b push eax */
  push32((uint32_t)(EAX));
  /* 10d6494c call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d64952u);
  /* 10d64952 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d64955 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64959 jne 0x10d64962 */
  if (!C.zf) goto L_10d64962;
  /* 10d6495b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d6495d jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d64962:;
  /* 10d64962 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d64969 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d6496c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d6496e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64971 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d64973 call 0x10d57c00 */
  push32(0x10d64978u); f_10d57c00();
  /* 10d64978 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10d6497b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d6497e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10d64981 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d64984 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d6498b jmp 0x10d649a4 */
  goto L_10d649a4;
  /* 10d6498d mov eax, 1 */
  EAX = (0x1u);
  /* 10d64992 ret  */
  ESPCHK(0x10d64610u, _esp0);
  ESP += 4; return;
  /* 10d64993 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d64996 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10d6499d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d649a4:;
  /* 10d649a4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d649a8 jne 0x10d649ae */
  if (!C.zf) goto L_10d649ae;
  /* 10d649aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d649ac jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d649ae:;
  /* 10d649ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d649b1 push edx */
  push32((uint32_t)(EDX));
  /* 10d649b2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d649b5 push eax */
  push32((uint32_t)(EAX));
  /* 10d649b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d649b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d649ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d649bd push edx */
  push32((uint32_t)(EDX));
  /* 10d649be push 1 */
  push32((uint32_t)(0x1u));
  /* 10d649c0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d649c3 push eax */
  push32((uint32_t)(EAX));
  /* 10d649c4 call dword ptr [0x10d832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832cc))), 0x10d649cau);
  /* 10d649ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d649cc jne 0x10d649d2 */
  if (!C.zf) goto L_10d649d2;
  /* 10d649ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d649d0 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d649d2:;
  /* 10d649d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d649d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d649d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d649d9 push edx */
  push32((uint32_t)(EDX));
  /* 10d649da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d649dd push eax */
  push32((uint32_t)(EAX));
  /* 10d649de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d649e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d649e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d649e5 push edx */
  push32((uint32_t)(EDX));
  /* 10d649e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d649e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d649ea call dword ptr [0x10d83280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83280))), 0x10d649f0u);
  /* 10d649f0 jmp 0x10d649f4 */
  goto L_10d649f4;
L_10d649f2:;
  /* 10d649f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d649f4:;
  /* 10d649f4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10d649f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d649fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d64a01 pop edi */
  EDI = (pop32());
  /* 10d64a02 pop esi */
  ESI = (pop32());
  /* 10d64a03 pop ebx */
  EBX = (pop32());
  /* 10d64a04 mov esp, ebp */
  ESP = (EBP);
  /* 10d64a06 pop ebp */
  EBP = (pop32());
  /* 10d64a07 ret  */
  ESPCHK(0x10d64610u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a10 @ 0x10d64a10 (80 bytes, 32 insns) */
void f_10d64a10(void) {
  FTRACE(0x10d64a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64a11 mov ebp, esp */
  EBP = (ESP);
  /* 10d64a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d64a19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d64a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64a1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d64a22:;
  /* 10d64a22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64a28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64a2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d64a2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64a30 je 0x10d64a47 */
  if (C.zf) goto L_10d64a47;
  /* 10d64a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64a35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d64a38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64a3a je 0x10d64a47 */
  if (C.zf) goto L_10d64a47;
  /* 10d64a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64a3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d64a45 jmp 0x10d64a22 */
  goto L_10d64a22;
L_10d64a47:;
  /* 10d64a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64a4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d64a4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64a4f jne 0x10d64a59 */
  if (!C.zf) goto L_10d64a59;
  /* 10d64a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64a54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64a57 jmp 0x10d64a5c */
  goto L_10d64a5c;
L_10d64a59:;
  /* 10d64a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10d64a5c:;
  /* 10d64a5c mov esp, ebp */
  ESP = (EBP);
  /* 10d64a5e pop ebp */
  EBP = (pop32());
  /* 10d64a5f ret  */
  ESPCHK(0x10d64a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a60 @ 0x10d64a60 (736 bytes, 224 insns) */
void f_10d64a60(void) {
  FTRACE(0x10d64a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64a61 mov ebp, esp */
  EBP = (ESP);
  /* 10d64a63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64a66 push esi */
  push32((uint32_t)(ESI));
  /* 10d64a67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64a6b je 0x10d64a8c */
  if (C.zf) goto L_10d64a8c;
  /* 10d64a6d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d64a6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64a72 push eax */
  push32((uint32_t)(EAX));
  /* 10d64a73 call 0x10d64eb0 */
  push32(0x10d64a78u); f_10d64eb0();
  /* 10d64a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64a7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d64a7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64a82 je 0x10d64a8c */
  if (C.zf) goto L_10d64a8c;
  /* 10d64a84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64a87 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64a8a jne 0x10d64a94 */
  if (!C.zf) goto L_10d64a94;
L_10d64a8c:;
  /* 10d64a8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64a8f jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64a94:;
  /* 10d64a94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d64a97 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d64a9b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d64a9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64a9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10d64aa0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d64aa3 mov ecx, dword ptr [0x10d80520] */
  ECX = (r32((uint32_t)(0x10d80520)));
  /* 10d64aa9 cmp ecx, dword ptr [0x10d80524] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d80524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64aaf jne 0x10d64ac5 */
  if (!C.zf) goto L_10d64ac5;
  /* 10d64ab1 mov edx, dword ptr [0x10d80520] */
  EDX = (r32((uint32_t)(0x10d80520)));
  /* 10d64ab7 push edx */
  push32((uint32_t)(EDX));
  /* 10d64ab8 call 0x10d64dc0 */
  push32(0x10d64abdu); f_10d64dc0();
  /* 10d64abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64ac0 mov dword ptr [0x10d80520], eax */
  w32((uint32_t)(0x10d80520), (EAX));
L_10d64ac5:;
  /* 10d64ac5 cmp dword ptr [0x10d80520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64acc jne 0x10d64b85 */
  if (!C.zf) goto L_10d64b85;
  /* 10d64ad2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64ad6 je 0x10d64af7 */
  if (C.zf) goto L_10d64af7;
  /* 10d64ad8 cmp dword ptr [0x10d80528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64adf je 0x10d64af7 */
  if (C.zf) goto L_10d64af7;
  /* 10d64ae1 call 0x10d64560 */
  push32(0x10d64ae6u); f_10d64560();
  /* 10d64ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64ae8 je 0x10d64af2 */
  if (C.zf) goto L_10d64af2;
  /* 10d64aea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64aed jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64af2:;
  /* 10d64af2 jmp 0x10d64b85 */
  goto L_10d64b85;
L_10d64af7:;
  /* 10d64af7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64afb je 0x10d64b04 */
  if (C.zf) goto L_10d64b04;
  /* 10d64afd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64aff jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64b04:;
  /* 10d64b04 cmp dword ptr [0x10d80520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64b0b jne 0x10d64b44 */
  if (!C.zf) goto L_10d64b44;
  /* 10d64b0d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d64b12 push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64b19 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d64b1b call 0x10d54a60 */
  push32(0x10d64b20u); f_10d54a60();
  /* 10d64b20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64b23 mov dword ptr [0x10d80520], eax */
  w32((uint32_t)(0x10d80520), (EAX));
  /* 10d64b28 cmp dword ptr [0x10d80520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64b2f jne 0x10d64b39 */
  if (!C.zf) goto L_10d64b39;
  /* 10d64b31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64b34 jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64b39:;
  /* 10d64b39 mov eax, dword ptr [0x10d80520] */
  EAX = (r32((uint32_t)(0x10d80520)));
  /* 10d64b3e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d64b44:;
  /* 10d64b44 cmp dword ptr [0x10d80528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64b4b jne 0x10d64b85 */
  if (!C.zf) goto L_10d64b85;
  /* 10d64b4d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10d64b52 push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64b59 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d64b5b call 0x10d54a60 */
  push32(0x10d64b60u); f_10d54a60();
  /* 10d64b60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64b63 mov dword ptr [0x10d80528], eax */
  w32((uint32_t)(0x10d80528), (EAX));
  /* 10d64b68 cmp dword ptr [0x10d80528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64b6f jne 0x10d64b79 */
  if (!C.zf) goto L_10d64b79;
  /* 10d64b71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64b74 jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64b79:;
  /* 10d64b79 mov ecx, dword ptr [0x10d80528] */
  ECX = (r32((uint32_t)(0x10d80528)));
  /* 10d64b7f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10d64b85:;
  /* 10d64b85 mov edx, dword ptr [0x10d80520] */
  EDX = (r32((uint32_t)(0x10d80520)));
  /* 10d64b8b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d64b8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d64b91 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64b94 push eax */
  push32((uint32_t)(EAX));
  /* 10d64b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64b98 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64b99 call 0x10d64d40 */
  push32(0x10d64b9eu); f_10d64d40();
  /* 10d64b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64ba1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d64ba4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64ba8 jl 0x10d64c41 */
  if ((C.sf!=C.of)) goto L_10d64c41;
  /* 10d64bae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64bb1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64bb4 je 0x10d64c41 */
  if (C.zf) goto L_10d64c41;
  /* 10d64bba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64bbe je 0x10d64c33 */
  if (C.zf) goto L_10d64c33;
  /* 10d64bc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64bc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64bc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64bc8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d64bcb push edx */
  push32((uint32_t)(EDX));
  /* 10d64bcc call 0x10d554f0 */
  push32(0x10d64bd1u); f_10d554f0();
  /* 10d64bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64bd4 jmp 0x10d64bdf */
  goto L_10d64bdf;
L_10d64bd6:;
  /* 10d64bd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64bd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64bdc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d64bdf:;
  /* 10d64bdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64be2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64be5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64be9 je 0x10d64c00 */
  if (C.zf) goto L_10d64c00;
  /* 10d64beb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64bee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64bf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64bf4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64bf7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10d64bfb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10d64bfe jmp 0x10d64bd6 */
  goto L_10d64bd6;
L_10d64c00:;
  /* 10d64c00 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10d64c05 push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64c0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64c0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64c0f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10d64c12 push eax */
  push32((uint32_t)(EAX));
  /* 10d64c13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64c16 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64c17 call 0x10d54ef0 */
  push32(0x10d64c1cu); f_10d54ef0();
  /* 10d64c1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64c1f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d64c22 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64c26 je 0x10d64c31 */
  if (C.zf) goto L_10d64c31;
  /* 10d64c28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64c2b mov dword ptr [0x10d80520], edx */
  w32((uint32_t)(0x10d80520), (EDX));
L_10d64c31:;
  /* 10d64c31 jmp 0x10d64c3f */
  goto L_10d64c3f;
L_10d64c33:;
  /* 10d64c33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64c36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64c3c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10d64c3f:;
  /* 10d64c3f jmp 0x10d64cb4 */
  goto L_10d64cb4;
L_10d64c41:;
  /* 10d64c41 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64c45 jne 0x10d64cad */
  if (!C.zf) goto L_10d64cad;
  /* 10d64c47 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64c4b jge 0x10d64c55 */
  if ((C.sf==C.of)) goto L_10d64c55;
  /* 10d64c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64c50 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d64c52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d64c55:;
  /* 10d64c55 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10d64c5a push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64c61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64c64 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10d64c6b push edx */
  push32((uint32_t)(EDX));
  /* 10d64c6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64c6f push eax */
  push32((uint32_t)(EAX));
  /* 10d64c70 call 0x10d54ef0 */
  push32(0x10d64c75u); f_10d54ef0();
  /* 10d64c75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64c78 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d64c7b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64c7f jne 0x10d64c89 */
  if (!C.zf) goto L_10d64c89;
  /* 10d64c81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64c84 jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64c89:;
  /* 10d64c89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64c8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64c92 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10d64c95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64c98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64c9b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10d64ca3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64ca6 mov dword ptr [0x10d80520], eax */
  w32((uint32_t)(0x10d80520), (EAX));
  /* 10d64cab jmp 0x10d64cb4 */
  goto L_10d64cb4;
L_10d64cad:;
  /* 10d64cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64caf jmp 0x10d64d3b */
  goto L_10d64d3b;
L_10d64cb4:;
  /* 10d64cb4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64cb8 je 0x10d64d39 */
  if (C.zf) goto L_10d64d39;
  /* 10d64cba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10d64cbf push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64cc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64cca call 0x10d57890 */
  push32(0x10d64ccfu); f_10d57890();
  /* 10d64ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64cd2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64cd5 push eax */
  push32((uint32_t)(EAX));
  /* 10d64cd6 call 0x10d54a60 */
  push32(0x10d64cdbu); f_10d54a60();
  /* 10d64cdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64cde mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d64ce1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64ce5 je 0x10d64d39 */
  if (C.zf) goto L_10d64d39;
  /* 10d64ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64cea push edx */
  push32((uint32_t)(EDX));
  /* 10d64ceb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64cee push eax */
  push32((uint32_t)(EAX));
  /* 10d64cef call 0x10d57a10 */
  push32(0x10d64cf4u); f_10d57a10();
  /* 10d64cf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64cf7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d64cfa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64cfd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64d00 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64d02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d64d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d08 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d64d0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64d11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d64d14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d64d17 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d64d19 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64d1b not edx */
  EDX = (~(EDX));
  /* 10d64d1d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d64d20 push edx */
  push32((uint32_t)(EDX));
  /* 10d64d21 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64d24 push eax */
  push32((uint32_t)(EAX));
  /* 10d64d25 call dword ptr [0x10d8327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8327c))), 0x10d64d2bu);
  /* 10d64d2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64d2d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64d30 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64d31 call 0x10d554f0 */
  push32(0x10d64d36u); f_10d554f0();
  /* 10d64d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d64d39:;
  /* 10d64d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d64d3b:;
  /* 10d64d3b pop esi */
  ESI = (pop32());
  /* 10d64d3c mov esp, ebp */
  ESP = (EBP);
  /* 10d64d3e pop ebp */
  EBP = (pop32());
  /* 10d64d3f ret  */
  ESPCHK(0x10d64a60u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10d64d40 (124 bytes, 47 insns) */
void f_10d64d40(void) {
  FTRACE(0x10d64d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64d41 mov ebp, esp */
  EBP = (ESP);
  /* 10d64d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64d44 mov eax, dword ptr [0x10d80520] */
  EAX = (r32((uint32_t)(0x10d80520)));
  /* 10d64d49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d64d4c jmp 0x10d64d57 */
  goto L_10d64d57;
L_10d64d4e:;
  /* 10d64d4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d51 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64d54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d64d57:;
  /* 10d64d57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d5a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64d5d je 0x10d64daa */
  if (C.zf) goto L_10d64daa;
  /* 10d64d5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d64d62 push eax */
  push32((uint32_t)(EAX));
  /* 10d64d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d64d68 push edx */
  push32((uint32_t)(EDX));
  /* 10d64d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64d6c push eax */
  push32((uint32_t)(EAX));
  /* 10d64d6d call 0x10d64510 */
  push32(0x10d64d72u); f_10d64510();
  /* 10d64d72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d64d77 jne 0x10d64da8 */
  if (!C.zf) goto L_10d64da8;
  /* 10d64d79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d64d7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d64d81 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10d64d85 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64d88 je 0x10d64d9a */
  if (C.zf) goto L_10d64d9a;
  /* 10d64d8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d64d8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d64d92 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10d64d96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64d98 jne 0x10d64da8 */
  if (!C.zf) goto L_10d64da8;
L_10d64d9a:;
  /* 10d64d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64d9d sub eax, dword ptr [0x10d80520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d80520))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64da3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10d64da6 jmp 0x10d64db8 */
  goto L_10d64db8;
L_10d64da8:;
  /* 10d64da8 jmp 0x10d64d4e */
  goto L_10d64d4e;
L_10d64daa:;
  /* 10d64daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64dad sub eax, dword ptr [0x10d80520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d80520))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64db3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10d64db6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10d64db8:;
  /* 10d64db8 mov esp, ebp */
  ESP = (EBP);
  /* 10d64dba pop ebp */
  EBP = (pop32());
  /* 10d64dbb ret  */
  ESPCHK(0x10d64d40u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10d64dc0 (238 bytes, 80 insns) */
void f_10d64dc0(void) {
  FTRACE(0x10d64dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d64dc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64dc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d64dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64dd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d64dd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64dd7 jne 0x10d64de0 */
  if (!C.zf) goto L_10d64de0;
  /* 10d64dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64ddb jmp 0x10d64eaa */
  goto L_10d64eaa;
L_10d64de0:;
  /* 10d64de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64de3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d64de5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64de8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64deb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d64dee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64df0 je 0x10d64dfd */
  if (C.zf) goto L_10d64dfd;
  /* 10d64df2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64df5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64df8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d64dfb jmp 0x10d64de0 */
  goto L_10d64de0;
L_10d64dfd:;
  /* 10d64dfd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10d64e02 push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64e07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64e09 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d64e0c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10d64e13 push eax */
  push32((uint32_t)(EAX));
  /* 10d64e14 call 0x10d54a60 */
  push32(0x10d64e19u); f_10d54a60();
  /* 10d64e19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64e1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d64e1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64e22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d64e25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64e29 jne 0x10d64e35 */
  if (!C.zf) goto L_10d64e35;
  /* 10d64e2b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d64e2d call 0x10d539d0 */
  push32(0x10d64e32u); f_10d539d0();
  /* 10d64e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d64e35:;
  /* 10d64e35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64e38 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d64e3b:;
  /* 10d64e3b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64e3e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64e41 je 0x10d64e9e */
  if (C.zf) goto L_10d64e9e;
  /* 10d64e43 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10d64e48 push 0x10d7ca40 */
  push32((uint32_t)(0x10d7ca40u));
  /* 10d64e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d64e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64e52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d64e54 push edx */
  push32((uint32_t)(EDX));
  /* 10d64e55 call 0x10d57890 */
  push32(0x10d64e5au); f_10d57890();
  /* 10d64e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64e60 push eax */
  push32((uint32_t)(EAX));
  /* 10d64e61 call 0x10d54a60 */
  push32(0x10d64e66u); f_10d54a60();
  /* 10d64e66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64e6c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d64e6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64e71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64e74 je 0x10d64e8a */
  if (C.zf) goto L_10d64e8a;
  /* 10d64e76 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64e79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d64e7b push ecx */
  push32((uint32_t)(ECX));
  /* 10d64e7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64e7f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d64e81 push eax */
  push32((uint32_t)(EAX));
  /* 10d64e82 call 0x10d57a10 */
  push32(0x10d64e87u); f_10d57a10();
  /* 10d64e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d64e8a:;
  /* 10d64e8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d64e8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64e90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d64e93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64e96 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64e99 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d64e9c jmp 0x10d64e3b */
  goto L_10d64e3b;
L_10d64e9e:;
  /* 10d64e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d64ea1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d64ea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d64eaa:;
  /* 10d64eaa mov esp, ebp */
  ESP = (EBP);
  /* 10d64eac pop ebp */
  EBP = (pop32());
  /* 10d64ead ret  */
  ESPCHK(0x10d64dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014eb0 @ 0x10d64eb0 (237 bytes, 81 insns) */
void f_10d64eb0(void) {
  FTRACE(0x10d64eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d64eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d64eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64eb4 cmp dword ptr [0x10d81c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64ebb jne 0x10d64ed2 */
  if (!C.zf) goto L_10d64ed2;
  /* 10d64ebd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d64ec0 push eax */
  push32((uint32_t)(EAX));
  /* 10d64ec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d64ec5 call 0x10d64fb0 */
  push32(0x10d64ecau); f_10d64fb0();
  /* 10d64eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64ecd jmp 0x10d64f99 */
  goto L_10d64f99;
L_10d64ed2:;
  /* 10d64ed2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d64ed4 call 0x10d58460 */
  push32(0x10d64ed9u); f_10d58460();
  /* 10d64ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64edc jmp 0x10d64ee7 */
  goto L_10d64ee7;
L_10d64ede:;
  /* 10d64ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64ee1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64ee4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d64ee7:;
  /* 10d64ee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64eea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10d64eee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10d64ef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64ef5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d64efb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d64efd je 0x10d64f7b */
  if (C.zf) goto L_10d64f7b;
  /* 10d64eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64f02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64f07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d64f09 mov cl, byte ptr [eax + 0x10d81d81] */
  CL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d64f0f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d64f12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d64f14 je 0x10d64f66 */
  if (C.zf) goto L_10d64f66;
  /* 10d64f16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64f19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64f1c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d64f1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64f22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d64f24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d64f26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d64f28 jne 0x10d64f38 */
  if (!C.zf) goto L_10d64f38;
  /* 10d64f2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d64f2c call 0x10d58500 */
  push32(0x10d64f31u); f_10d58500();
  /* 10d64f31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64f36 jmp 0x10d64f99 */
  goto L_10d64f99;
L_10d64f38:;
  /* 10d64f38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64f3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d64f41 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d64f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64f47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d64f49 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d64f4b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d64f4d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64f50 jne 0x10d64f64 */
  if (!C.zf) goto L_10d64f64;
  /* 10d64f52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d64f54 call 0x10d58500 */
  push32(0x10d64f59u); f_10d58500();
  /* 10d64f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64f5f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d64f62 jmp 0x10d64f99 */
  goto L_10d64f99;
L_10d64f64:;
  /* 10d64f64 jmp 0x10d64f76 */
  goto L_10d64f76;
L_10d64f66:;
  /* 10d64f66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64f69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d64f6f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64f72 jne 0x10d64f76 */
  if (!C.zf) goto L_10d64f76;
  /* 10d64f74 jmp 0x10d64f7b */
  goto L_10d64f7b;
L_10d64f76:;
  /* 10d64f76 jmp 0x10d64ede */
  goto L_10d64ede;
L_10d64f7b:;
  /* 10d64f7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d64f7d call 0x10d58500 */
  push32(0x10d64f82u); f_10d58500();
  /* 10d64f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d64f88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64f8d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d64f90 jne 0x10d64f97 */
  if (!C.zf) goto L_10d64f97;
  /* 10d64f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d64f95 jmp 0x10d64f99 */
  goto L_10d64f99;
L_10d64f97:;
  /* 10d64f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d64f99:;
  /* 10d64f99 mov esp, ebp */
  ESP = (EBP);
  /* 10d64f9b pop ebp */
  EBP = (pop32());
  /* 10d64f9c ret  */
  ESPCHK(0x10d64eb0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10d64fb0 (193 bytes, 87 insns) */
void f_10d64fb0(void) {
  FTRACE(0x10d64fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d64fb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d64fb2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10d64fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d64fb7 mov ebx, eax */
  EBX = (EAX);
  /* 10d64fb9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d64fbc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d64fc0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d64fc6 je 0x10d64fdb */
  if (C.zf) goto L_10d64fdb;
L_10d64fc8:;
  /* 10d64fc8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10d64fca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d64fcb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d64fcd je 0x10d64fa0 */
  if (C.zf) { jmp_ind(0x10d64fa0u); return; }
  /* 10d64fcf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10d64fd1 je 0x10d65024 */
  if (C.zf) goto L_10d65024;
  /* 10d64fd3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d64fd9 jne 0x10d64fc8 */
  if (!C.zf) goto L_10d64fc8;
L_10d64fdb:;
  /* 10d64fdb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10d64fdd push edi */
  push32((uint32_t)(EDI));
  /* 10d64fde mov eax, ebx */
  EAX = (EBX);
  /* 10d64fe0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10d64fe3 push esi */
  push32((uint32_t)(ESI));
  /* 10d64fe4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10d64fe6:;
  /* 10d64fe6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10d64fe8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10d64fed mov eax, ecx */
  EAX = (ECX);
  /* 10d64fef mov esi, edi */
  ESI = (EDI);
  /* 10d64ff1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10d64ff3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64ff5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d64ff7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d64ffa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d64ffd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10d64fff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10d65001 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d65004 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d6500a jne 0x10d65028 */
  if (!C.zf) goto L_10d65028;
  /* 10d6500c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10d65011 je 0x10d64fe6 */
  if (C.zf) goto L_10d64fe6;
  /* 10d65013 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10d65018 jne 0x10d65022 */
  if (!C.zf) goto L_10d65022;
  /* 10d6501a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10d65020 jne 0x10d64fe6 */
  if (!C.zf) goto L_10d64fe6;
L_10d65022:;
  /* 10d65022 pop esi */
  ESI = (pop32());
  /* 10d65023 pop edi */
  EDI = (pop32());
L_10d65024:;
  /* 10d65024 pop ebx */
  EBX = (pop32());
  /* 10d65025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d65027 ret  */
  ESPCHK(0x10d64fb0u, _esp0);
  ESP += 4; return;
L_10d65028:;
  /* 10d65028 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10d6502b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d6502d je 0x10d65065 */
  if (C.zf) goto L_10d65065;
  /* 10d6502f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d65031 je 0x10d65022 */
  if (C.zf) goto L_10d65022;
  /* 10d65033 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d65035 je 0x10d6505e */
  if (C.zf) goto L_10d6505e;
  /* 10d65037 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d65039 je 0x10d65022 */
  if (C.zf) goto L_10d65022;
  /* 10d6503b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d6503e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d65040 je 0x10d65057 */
  if (C.zf) goto L_10d65057;
  /* 10d65042 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d65044 je 0x10d65022 */
  if (C.zf) goto L_10d65022;
  /* 10d65046 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d65048 je 0x10d65050 */
  if (C.zf) goto L_10d65050;
  /* 10d6504a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d6504c je 0x10d65022 */
  if (C.zf) goto L_10d65022;
  /* 10d6504e jmp 0x10d64fe6 */
  goto L_10d64fe6;
L_10d65050:;
  /* 10d65050 pop esi */
  ESI = (pop32());
  /* 10d65051 pop edi */
  EDI = (pop32());
  /* 10d65052 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10d65055 pop ebx */
  EBX = (pop32());
  /* 10d65056 ret  */
  ESPCHK(0x10d64fb0u, _esp0);
  ESP += 4; return;
L_10d65057:;
  /* 10d65057 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10d6505a pop esi */
  ESI = (pop32());
  /* 10d6505b pop edi */
  EDI = (pop32());
  /* 10d6505c pop ebx */
  EBX = (pop32());
  /* 10d6505d ret  */
  ESPCHK(0x10d64fb0u, _esp0);
  ESP += 4; return;
L_10d6505e:;
  /* 10d6505e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10d65061 pop esi */
  ESI = (pop32());
  /* 10d65062 pop edi */
  EDI = (pop32());
  /* 10d65063 pop ebx */
  EBX = (pop32());
  /* 10d65064 ret  */
  ESPCHK(0x10d64fb0u, _esp0);
  ESP += 4; return;
L_10d65065:;
  /* 10d65065 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10d65068 pop esi */
  ESI = (pop32());
  /* 10d65069 pop edi */
  EDI = (pop32());
  /* 10d6506a pop ebx */
  EBX = (pop32());
  /* 10d6506b ret  */
  ESPCHK(0x10d64fb0u, _esp0);
  ESP += 4; return;
  /* 10d6506c jmp dword ptr [0x10d832e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10d832e8)))); return;
}

/* RtlUnwind @ 0x10d651bc (6 bytes, 1 insns) */
void f_10d651bc(void) {
  FTRACE(0x10d651bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d651bc jmp dword ptr [0x10d832b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10d832b4)))); return;
}

