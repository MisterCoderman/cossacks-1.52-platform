#include "recomp.h"

/* FUN_10014ac0 @ 0x10fa4ac0 (878 bytes, 273 insns) */
void f_10fa4ac0(void) {
  FTRACE(0x10fa4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4ac3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4ac6 push esi */
  push32((uint32_t)(ESI));
  /* 10fa4ac7 mov eax, dword ptr [0x10fc2c98] */
  EAX = (r32((uint32_t)(0x10fc2c98)));
  /* 10fa4acc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa4acf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa4ad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa4add jmp 0x10fa4ae8 */
  goto L_10fa4ae8;
L_10fa4adf:;
  /* 10fa4adf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4ae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fa4ae8:;
  /* 10fa4ae8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4aec jae 0x10fa4b21 */
  if (!C.cf) goto L_10fa4b21;
  /* 10fa4aee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4af4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fa4af7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4af8 call 0x10f9a940 */
  push32(0x10fa4afdu); f_10f9a940();
  /* 10fa4afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b00 mov esi, eax */
  ESI = (EAX);
  /* 10fa4b02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4b05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4b08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10fa4b0c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4b0d call 0x10f9a940 */
  push32(0x10fa4b12u); f_10f9a940();
  /* 10fa4b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fa4b1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa4b1f jmp 0x10fa4adf */
  goto L_10fa4adf;
L_10fa4b21:;
  /* 10fa4b21 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa4b28 jmp 0x10fa4b33 */
  goto L_10fa4b33;
L_10fa4b2a:;
  /* 10fa4b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fa4b33:;
  /* 10fa4b33 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4b37 jae 0x10fa4b6d */
  if (!C.cf) goto L_10fa4b6d;
  /* 10fa4b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4b3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4b3f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10fa4b43 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4b44 call 0x10f9a940 */
  push32(0x10fa4b49u); f_10f9a940();
  /* 10fa4b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b4c mov esi, eax */
  ESI = (EAX);
  /* 10fa4b4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4b51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4b54 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fa4b58 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4b59 call 0x10f9a940 */
  push32(0x10fa4b5eu); f_10f9a940();
  /* 10fa4b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b61 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b64 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fa4b68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa4b6b jmp 0x10fa4b2a */
  goto L_10fa4b2a;
L_10fa4b6d:;
  /* 10fa4b6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4b70 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10fa4b76 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4b77 call 0x10f9a940 */
  push32(0x10fa4b7cu); f_10f9a940();
  /* 10fa4b7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b7f mov esi, eax */
  ESI = (EAX);
  /* 10fa4b81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4b84 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10fa4b8a push edx */
  push32((uint32_t)(EDX));
  /* 10fa4b8b call 0x10f9a940 */
  push32(0x10fa4b90u); f_10f9a940();
  /* 10fa4b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b93 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4b96 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fa4b9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa4b9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4ba0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10fa4ba6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4ba7 call 0x10f9a940 */
  push32(0x10fa4bacu); f_10f9a940();
  /* 10fa4bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4baf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4bb2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fa4bb6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa4bb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4bbc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10fa4bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4bc3 call 0x10f9a940 */
  push32(0x10fa4bc8u); f_10f9a940();
  /* 10fa4bc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4bcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4bce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fa4bd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa4bd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4bd8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10fa4bde push edx */
  push32((uint32_t)(EDX));
  /* 10fa4bdf call 0x10f9a940 */
  push32(0x10fa4be4u); f_10f9a940();
  /* 10fa4be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4bea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fa4bee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa4bf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4bf4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4bfa call 0x10f97af0 */
  push32(0x10fa4bffu); f_10f97af0();
  /* 10fa4bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4c02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa4c05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4c09 je 0x10fa4e26 */
  if (C.zf) goto L_10fa4e26;
  /* 10fa4c0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4c12 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fa4c15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4c18 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4c1e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4c21 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10fa4c26 mov eax, dword ptr [0x10fc2c98] */
  EAX = (r32((uint32_t)(0x10fc2c98)));
  /* 10fa4c2b push eax */
  push32((uint32_t)(EAX));
  /* 10fa4c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4c2f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4c30 call 0x10f9e3f0 */
  push32(0x10fa4c35u); f_10f9e3f0();
  /* 10fa4c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4c38 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa4c3f jmp 0x10fa4c4a */
  goto L_10fa4c4a;
L_10fa4c41:;
  /* 10fa4c41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4c44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4c47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa4c4a:;
  /* 10fa4c4a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4c4e jae 0x10fa4cbe */
  if (!C.cf) goto L_10fa4cbe;
  /* 10fa4c50 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4c53 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4c56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4c59 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10fa4c5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4c5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4c62 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa4c65 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4c66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4c69 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4c6a call 0x10f9aac0 */
  push32(0x10fa4c6fu); f_10f9aac0();
  /* 10fa4c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4c72 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4c73 call 0x10f9a940 */
  push32(0x10fa4c78u); f_10f9a940();
  /* 10fa4c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4c7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4c7e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fa4c82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4c85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4c88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4c8b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4c8e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10fa4c92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4c95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4c98 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10fa4c9c push edx */
  push32((uint32_t)(EDX));
  /* 10fa4c9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4ca0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4ca1 call 0x10f9aac0 */
  push32(0x10fa4ca6u); f_10f9aac0();
  /* 10fa4ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4ca9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4caa call 0x10f9a940 */
  push32(0x10fa4cafu); f_10f9a940();
  /* 10fa4caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4cb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4cb5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fa4cb9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4cbc jmp 0x10fa4c41 */
  goto L_10fa4c41;
L_10fa4cbe:;
  /* 10fa4cbe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa4cc5 jmp 0x10fa4cd0 */
  goto L_10fa4cd0;
L_10fa4cc7:;
  /* 10fa4cc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4cca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4ccd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fa4cd0:;
  /* 10fa4cd0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4cd4 jae 0x10fa4d46 */
  if (!C.cf) goto L_10fa4d46;
  /* 10fa4cd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4cd9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4cdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4cdf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10fa4ce3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4ce6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4ce9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10fa4ced push eax */
  push32((uint32_t)(EAX));
  /* 10fa4cee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4cf2 call 0x10f9aac0 */
  push32(0x10fa4cf7u); f_10f9aac0();
  /* 10fa4cf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4cfa push eax */
  push32((uint32_t)(EAX));
  /* 10fa4cfb call 0x10f9a940 */
  push32(0x10fa4d00u); f_10f9a940();
  /* 10fa4d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4d03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d06 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fa4d0a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4d0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4d10 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4d13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d16 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10fa4d1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4d1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4d20 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fa4d24 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4d25 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d28 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4d29 call 0x10f9aac0 */
  push32(0x10fa4d2eu); f_10f9aac0();
  /* 10fa4d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4d31 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4d32 call 0x10f9a940 */
  push32(0x10fa4d37u); f_10f9a940();
  /* 10fa4d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4d3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d3d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fa4d41 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4d44 jmp 0x10fa4cc7 */
  goto L_10fa4cc7;
L_10fa4d46:;
  /* 10fa4d46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4d49 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d4c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10fa4d52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4d55 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10fa4d5b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4d5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d5f push edx */
  push32((uint32_t)(EDX));
  /* 10fa4d60 call 0x10f9aac0 */
  push32(0x10fa4d65u); f_10f9aac0();
  /* 10fa4d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4d68 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4d69 call 0x10f9a940 */
  push32(0x10fa4d6eu); f_10f9a940();
  /* 10fa4d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4d71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d74 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fa4d78 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4d7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4d7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d81 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10fa4d87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4d8a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10fa4d90 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4d91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4d94 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4d95 call 0x10f9aac0 */
  push32(0x10fa4d9au); f_10f9aac0();
  /* 10fa4d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4d9d push eax */
  push32((uint32_t)(EAX));
  /* 10fa4d9e call 0x10f9a940 */
  push32(0x10fa4da3u); f_10f9a940();
  /* 10fa4da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4da6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4da9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fa4dad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4db0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4db3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4db6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10fa4dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4dbf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10fa4dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4dc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4dc9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4dca call 0x10f9aac0 */
  push32(0x10fa4dcfu); f_10f9aac0();
  /* 10fa4dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4dd3 call 0x10f9a940 */
  push32(0x10fa4dd8u); f_10f9a940();
  /* 10fa4dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4ddb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4dde lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10fa4de2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4de5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4de8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4deb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10fa4df1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4df4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10fa4dfa push eax */
  push32((uint32_t)(EAX));
  /* 10fa4dfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4dfe push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4dff call 0x10f9aac0 */
  push32(0x10fa4e04u); f_10f9aac0();
  /* 10fa4e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4e07 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4e08 call 0x10f9a940 */
  push32(0x10fa4e0du); f_10f9a940();
  /* 10fa4e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4e10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4e13 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10fa4e17 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4e1a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa4e1d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4e20 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10fa4e26:;
  /* 10fa4e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4e29 pop esi */
  ESI = (pop32());
  /* 10fa4e2a mov esp, ebp */
  ESP = (EBP);
  /* 10fa4e2c pop ebp */
  EBP = (pop32());
  /* 10fa4e2d ret  */
  ESPCHK(0x10fa4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e30 @ 0x10fa4e30 (31 bytes, 15 insns) */
void f_10fa4e30(void) {
  FTRACE(0x10fa4e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4e31 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa4e35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa4e38 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4e39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4e3c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4e3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa4e40 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4e44 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4e45 call 0x10fa4e50 */
  push32(0x10fa4e4au); f_10fa4e50();
  /* 10fa4e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4e4d pop ebp */
  EBP = (pop32());
  /* 10fa4e4e ret  */
  ESPCHK(0x10fa4e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e50 @ 0x10fa4e50 (393 bytes, 123 insns) */
void f_10fa4e50(void) {
  FTRACE(0x10fa4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4e51 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4e53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4e56 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4e5a jne 0x10fa4e66 */
  if (!C.zf) goto L_10fa4e66;
  /* 10fa4e5c mov eax, dword ptr [0x10fc2c98] */
  EAX = (r32((uint32_t)(0x10fc2c98)));
  /* 10fa4e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fa4e64 jmp 0x10fa4e6c */
  goto L_10fa4e6c;
L_10fa4e66:;
  /* 10fa4e66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa4e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fa4e6c:;
  /* 10fa4e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4e6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa4e72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa4e75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa4e78 push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa4e7d call dword ptr [0x10fc6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6330))), 0x10fa4e83u);
  /* 10fa4e83 cmp dword ptr [0x10fc3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4e8a je 0x10fa4eaa */
  if (C.zf) goto L_10fa4eaa;
  /* 10fa4e8c push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa4e91 call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10fa4e97u);
  /* 10fa4e97 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa4e99 call 0x10f9b510 */
  push32(0x10fa4e9eu); f_10f9b510();
  /* 10fa4e9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4ea1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fa4ea8 jmp 0x10fa4eb1 */
  goto L_10fa4eb1;
L_10fa4eaa:;
  /* 10fa4eaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fa4eb1:;
  /* 10fa4eb1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4eb5 jbe 0x10fa4fa2 */
  if ((C.cf||C.zf)) goto L_10fa4fa2;
  /* 10fa4ebb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4ebe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa4ec0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10fa4ec3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa4ec7 je 0x10fa4ed1 */
  if (C.zf) goto L_10fa4ed1;
  /* 10fa4ec9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa4ecd je 0x10fa4ed6 */
  if (C.zf) goto L_10fa4ed6;
  /* 10fa4ecf jmp 0x10fa4f30 */
  goto L_10fa4f30;
L_10fa4ed1:;
  /* 10fa4ed1 jmp 0x10fa4fa2 */
  goto L_10fa4fa2;
L_10fa4ed6:;
  /* 10fa4ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4edc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10fa4edf mov dword ptr [0x10fc3a68], 0 */
  w32((uint32_t)(0x10fc3a68), (0x0u));
  /* 10fa4ee9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4eec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa4eef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4ef2 jne 0x10fa4f07 */
  if (!C.zf) goto L_10fa4f07;
  /* 10fa4ef4 mov dword ptr [0x10fc3a68], 1 */
  w32((uint32_t)(0x10fc3a68), (0x1u));
  /* 10fa4efe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f04 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10fa4f07:;
  /* 10fa4f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4f0a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4f0b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10fa4f0e push edx */
  push32((uint32_t)(EDX));
  /* 10fa4f0f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10fa4f12 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4f13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa4f16 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4f17 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa4f1c push eax */
  push32((uint32_t)(EAX));
  /* 10fa4f1d call 0x10fa4fe0 */
  push32(0x10fa4f22u); f_10fa4fe0();
  /* 10fa4f22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10fa4f2e jmp 0x10fa4f9d */
  goto L_10fa4f9d;
L_10fa4f30:;
  /* 10fa4f30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4f35 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa4f37 mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa4f3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa4f3f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa4f43 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa4f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa4f4b je 0x10fa4f78 */
  if (C.zf) goto L_10fa4f78;
  /* 10fa4f4d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4f51 jbe 0x10fa4f78 */
  if ((C.cf||C.zf)) goto L_10fa4f78;
  /* 10fa4f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4f56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f59 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa4f5b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fa4f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4f60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f63 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa4f66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10fa4f6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4f72 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4f75 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fa4f78:;
  /* 10fa4f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4f7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa4f80 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fa4f82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4f85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa4f8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4f8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4f91 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10fa4f94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4f97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4f9a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fa4f9d:;
  /* 10fa4f9d jmp 0x10fa4eb1 */
  goto L_10fa4eb1;
L_10fa4fa2:;
  /* 10fa4fa2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4fa6 je 0x10fa4fb4 */
  if (C.zf) goto L_10fa4fb4;
  /* 10fa4fa8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa4faa call 0x10f9b5b0 */
  push32(0x10fa4fafu); f_10f9b5b0();
  /* 10fa4faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4fb2 jmp 0x10fa4fbf */
  goto L_10fa4fbf;
L_10fa4fb4:;
  /* 10fa4fb4 push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa4fb9 call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10fa4fbfu);
L_10fa4fbf:;
  /* 10fa4fbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4fc3 jbe 0x10fa4fd3 */
  if ((C.cf||C.zf)) goto L_10fa4fd3;
  /* 10fa4fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4fc8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fa4fcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa4fce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4fd1 jmp 0x10fa4fd5 */
  goto L_10fa4fd5;
L_10fa4fd3:;
  /* 10fa4fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa4fd5:;
  /* 10fa4fd5 mov esp, ebp */
  ESP = (EBP);
  /* 10fa4fd7 pop ebp */
  EBP = (pop32());
  /* 10fa4fd8 ret  */
  ESPCHK(0x10fa4e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fe0 @ 0x10fa4fe0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10fa4fe0(void) {
  FTRACE(0x10fa4fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4fe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4fe6 push esi */
  push32((uint32_t)(ESI));
  /* 10fa4fe7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10fa4feb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa4fee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4ff1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4ff4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa4ff7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4ffb ja 0x10fa5548 */
  if ((!C.cf&&!C.zf)) goto L_10fa5548;
  /* 10fa5001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5006 mov dl, byte ptr [eax + 0x10fa55a9] */
  DL = (r8((uint32_t)(EAX + 0x10fa55a9)));
  /* 10fa500c jmp dword ptr [edx*4 + 0x10fa554d] */
  switch (EDX) {
    case 0: goto L_10fa5526;
    case 1: goto L_10fa5035;
    case 2: goto L_10fa507b;
    case 3: goto L_10fa51c8;
    case 4: goto L_10fa51f0;
    case 5: goto L_10fa528f;
    case 6: goto L_10fa52fb;
    case 7: goto L_10fa5324;
    case 8: goto L_10fa5365;
    case 9: goto L_10fa5447;
    case 10: goto L_10fa54ae;
    case 11: goto L_10fa54fb;
    case 12: goto L_10fa5013;
    case 13: goto L_10fa5058;
    case 14: goto L_10fa509e;
    case 15: goto L_10fa519e;
    case 16: goto L_10fa5235;
    case 17: goto L_10fa5262;
    case 18: goto L_10fa52b7;
    case 19: goto L_10fa533b;
    case 20: goto L_10fa53e9;
    case 21: goto L_10fa5478;
    case 22: goto L_10fa5548;
    default: x86_unimpl("switch@0x10fa500c out of table"); return;
  }
L_10fa5013:;
  /* 10fa5013 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5016 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5017 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa501a push edx */
  push32((uint32_t)(EDX));
  /* 10fa501b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa501e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10fa5021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5024 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fa5027 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5028 call 0x10fa5600 */
  push32(0x10fa502du); f_10fa5600();
  /* 10fa502d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5030 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5035:;
  /* 10fa5035 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5038 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5039 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa503c push edx */
  push32((uint32_t)(EDX));
  /* 10fa503d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5040 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10fa5043 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5046 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10fa504a push eax */
  push32((uint32_t)(EAX));
  /* 10fa504b call 0x10fa5600 */
  push32(0x10fa5050u); f_10fa5600();
  /* 10fa5050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5053 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5058:;
  /* 10fa5058 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa505b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa505c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa505f push edx */
  push32((uint32_t)(EDX));
  /* 10fa5060 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5063 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fa5066 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5069 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10fa506d push eax */
  push32((uint32_t)(EAX));
  /* 10fa506e call 0x10fa5600 */
  push32(0x10fa5073u); f_10fa5600();
  /* 10fa5073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5076 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa507b:;
  /* 10fa507b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa507e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa507f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5082 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5086 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fa5089 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa508c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fa5090 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5091 call 0x10fa5600 */
  push32(0x10fa5096u); f_10fa5600();
  /* 10fa5096 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5099 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa509e:;
  /* 10fa509e cmp dword ptr [0x10fc3a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa50a5 je 0x10fa5126 */
  if (C.zf) goto L_10fa5126;
  /* 10fa50a7 mov dword ptr [0x10fc3a68], 0 */
  w32((uint32_t)(0x10fc3a68), (0x0u));
  /* 10fa50b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa50b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa50b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa50b8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa50b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa50bc push eax */
  push32((uint32_t)(EAX));
  /* 10fa50bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa50c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa50c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa50c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10fa50ca push eax */
  push32((uint32_t)(EAX));
  /* 10fa50cb call 0x10fa57b0 */
  push32(0x10fa50d0u); f_10fa57b0();
  /* 10fa50d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa50d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa50d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa50d9 jne 0x10fa50e0 */
  if (!C.zf) goto L_10fa50e0;
  /* 10fa50db jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa50e0:;
  /* 10fa50e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa50e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa50e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10fa50e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa50eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa50ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa50f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa50f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa50f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa50f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa50fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa50fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5100 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa5102 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5105 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5106 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5109 push edx */
  push32((uint32_t)(EDX));
  /* 10fa510a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa510d push eax */
  push32((uint32_t)(EAX));
  /* 10fa510e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5111 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5112 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5115 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10fa511b push eax */
  push32((uint32_t)(EAX));
  /* 10fa511c call 0x10fa57b0 */
  push32(0x10fa5121u); f_10fa57b0();
  /* 10fa5121 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5124 jmp 0x10fa5199 */
  goto L_10fa5199;
L_10fa5126:;
  /* 10fa5126 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5129 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa512a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa512d push edx */
  push32((uint32_t)(EDX));
  /* 10fa512e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5131 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5132 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5135 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5136 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5139 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10fa513f push eax */
  push32((uint32_t)(EAX));
  /* 10fa5140 call 0x10fa57b0 */
  push32(0x10fa5145u); f_10fa57b0();
  /* 10fa5145 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5148 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa514b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa514e jne 0x10fa5155 */
  if (!C.zf) goto L_10fa5155;
  /* 10fa5150 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5155:;
  /* 10fa5155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5158 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa515a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10fa515d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5160 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5162 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5165 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5168 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa516a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa516d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa516f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5172 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5175 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa5177 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa517a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa517b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa517e push edx */
  push32((uint32_t)(EDX));
  /* 10fa517f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5182 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5186 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5187 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa518a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10fa5190 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5191 call 0x10fa57b0 */
  push32(0x10fa5196u); f_10fa57b0();
  /* 10fa5196 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa5199:;
  /* 10fa5199 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa519e:;
  /* 10fa519e mov ecx, dword ptr [0x10fc3a68] */
  ECX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa51a4 mov dword ptr [0x10fc3a78], ecx */
  w32((uint32_t)(0x10fc3a78), (ECX));
  /* 10fa51aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa51ad push edx */
  push32((uint32_t)(EDX));
  /* 10fa51ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa51b1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa51b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa51b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa51b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa51ba push edx */
  push32((uint32_t)(EDX));
  /* 10fa51bb call 0x10fa5650 */
  push32(0x10fa51c0u); f_10fa5650();
  /* 10fa51c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa51c3 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa51c8:;
  /* 10fa51c8 mov eax, dword ptr [0x10fc3a68] */
  EAX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa51cd mov dword ptr [0x10fc3a78], eax */
  w32((uint32_t)(0x10fc3a78), (EAX));
  /* 10fa51d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa51d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa51d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa51d9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa51da push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa51dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa51df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa51e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa51e3 call 0x10fa5650 */
  push32(0x10fa51e8u); f_10fa5650();
  /* 10fa51e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa51eb jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa51f0:;
  /* 10fa51f0 mov edx, dword ptr [0x10fc3a68] */
  EDX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa51f6 mov dword ptr [0x10fc3a78], edx */
  w32((uint32_t)(0x10fc3a78), (EDX));
  /* 10fa51fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa51ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa5202 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa5203 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10fa5208 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa520a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa520d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5211 jne 0x10fa521a */
  if (!C.zf) goto L_10fa521a;
  /* 10fa5213 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10fa521a:;
  /* 10fa521a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa521d push edx */
  push32((uint32_t)(EDX));
  /* 10fa521e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5221 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5222 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5224 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5227 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5228 call 0x10fa5650 */
  push32(0x10fa522du); f_10fa5650();
  /* 10fa522d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5230 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5235:;
  /* 10fa5235 mov edx, dword ptr [0x10fc3a68] */
  EDX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa523b mov dword ptr [0x10fc3a78], edx */
  w32((uint32_t)(0x10fc3a78), (EDX));
  /* 10fa5241 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5244 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5245 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5248 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5249 push 3 */
  push32((uint32_t)(0x3u));
  /* 10fa524b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa524e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa5251 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5254 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5255 call 0x10fa5650 */
  push32(0x10fa525au); f_10fa5650();
  /* 10fa525a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa525d jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5262:;
  /* 10fa5262 mov ecx, dword ptr [0x10fc3a68] */
  ECX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa5268 mov dword ptr [0x10fc3a78], ecx */
  w32((uint32_t)(0x10fc3a78), (ECX));
  /* 10fa526e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5271 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5272 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5275 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5276 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5278 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa527b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10fa527e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5281 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5282 call 0x10fa5650 */
  push32(0x10fa5287u); f_10fa5650();
  /* 10fa5287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa528a jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa528f:;
  /* 10fa528f mov eax, dword ptr [0x10fc3a68] */
  EAX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa5294 mov dword ptr [0x10fc3a78], eax */
  w32((uint32_t)(0x10fc3a78), (EAX));
  /* 10fa5299 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa529c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa529d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa52a0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa52a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa52a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa52a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fa52a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa52aa call 0x10fa5650 */
  push32(0x10fa52afu); f_10fa5650();
  /* 10fa52af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa52b2 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa52b7:;
  /* 10fa52b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa52ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa52be jg 0x10fa52dc */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa52dc;
  /* 10fa52c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa52c3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa52c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa52c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa52c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa52cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10fa52d1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa52d2 call 0x10fa5600 */
  push32(0x10fa52d7u); f_10fa5600();
  /* 10fa52d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa52da jmp 0x10fa52f6 */
  goto L_10fa52f6;
L_10fa52dc:;
  /* 10fa52dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa52df push ecx */
  push32((uint32_t)(ECX));
  /* 10fa52e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa52e3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa52e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa52e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10fa52ed push ecx */
  push32((uint32_t)(ECX));
  /* 10fa52ee call 0x10fa5600 */
  push32(0x10fa52f3u); f_10fa5600();
  /* 10fa52f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa52f6:;
  /* 10fa52f6 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa52fb:;
  /* 10fa52fb mov edx, dword ptr [0x10fc3a68] */
  EDX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa5301 mov dword ptr [0x10fc3a78], edx */
  w32((uint32_t)(0x10fc3a78), (EDX));
  /* 10fa5307 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa530a push eax */
  push32((uint32_t)(EAX));
  /* 10fa530b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa530e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa530f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5311 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5314 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5316 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5317 call 0x10fa5650 */
  push32(0x10fa531cu); f_10fa5650();
  /* 10fa531c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa531f jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5324:;
  /* 10fa5324 mov ecx, dword ptr [0x10fc3a68] */
  ECX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa532a mov dword ptr [0x10fc3a78], ecx */
  w32((uint32_t)(0x10fc3a78), (ECX));
  /* 10fa5330 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5333 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10fa5336 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa5339 jmp 0x10fa538d */
  goto L_10fa538d;
L_10fa533b:;
  /* 10fa533b mov ecx, dword ptr [0x10fc3a68] */
  ECX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa5341 mov dword ptr [0x10fc3a78], ecx */
  w32((uint32_t)(0x10fc3a78), (ECX));
  /* 10fa5347 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa534a push edx */
  push32((uint32_t)(EDX));
  /* 10fa534b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa534e push eax */
  push32((uint32_t)(EAX));
  /* 10fa534f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa5351 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5354 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fa5357 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5358 call 0x10fa5650 */
  push32(0x10fa535du); f_10fa5650();
  /* 10fa535d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5360 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5365:;
  /* 10fa5365 mov eax, dword ptr [0x10fc3a68] */
  EAX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa536a mov dword ptr [0x10fc3a78], eax */
  w32((uint32_t)(0x10fc3a78), (EAX));
  /* 10fa536f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5372 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5376 jne 0x10fa5381 */
  if (!C.zf) goto L_10fa5381;
  /* 10fa5378 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10fa537f jmp 0x10fa538d */
  goto L_10fa538d;
L_10fa5381:;
  /* 10fa5381 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5384 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10fa5387 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa538a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa538d:;
  /* 10fa538d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5390 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fa5393 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5396 jge 0x10fa53a1 */
  if ((C.sf==C.of)) goto L_10fa53a1;
  /* 10fa5398 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa539f jmp 0x10fa53ce */
  goto L_10fa53ce;
L_10fa53a1:;
  /* 10fa53a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa53a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fa53a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa53a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10fa53ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa53af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa53b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa53b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa53b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa53b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10fa53be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa53c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa53c3 jl 0x10fa53ce */
  if ((C.sf!=C.of)) goto L_10fa53ce;
  /* 10fa53c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa53c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa53cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fa53ce:;
  /* 10fa53ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa53d1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa53d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa53d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa53d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa53d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa53db push edx */
  push32((uint32_t)(EDX));
  /* 10fa53dc call 0x10fa5650 */
  push32(0x10fa53e1u); f_10fa5650();
  /* 10fa53e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa53e4 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa53e9:;
  /* 10fa53e9 cmp dword ptr [0x10fc3a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa53f0 je 0x10fa5420 */
  if (C.zf) goto L_10fa5420;
  /* 10fa53f2 mov dword ptr [0x10fc3a68], 0 */
  w32((uint32_t)(0x10fc3a68), (0x0u));
  /* 10fa53fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa53ff push eax */
  push32((uint32_t)(EAX));
  /* 10fa5400 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5403 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5404 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5407 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa540b push eax */
  push32((uint32_t)(EAX));
  /* 10fa540c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa540f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10fa5415 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5416 call 0x10fa57b0 */
  push32(0x10fa541bu); f_10fa57b0();
  /* 10fa541b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa541e jmp 0x10fa5442 */
  goto L_10fa5442;
L_10fa5420:;
  /* 10fa5420 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5423 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5424 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5427 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5428 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa542b push edx */
  push32((uint32_t)(EDX));
  /* 10fa542c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa542f push eax */
  push32((uint32_t)(EAX));
  /* 10fa5430 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5433 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10fa5439 push edx */
  push32((uint32_t)(EDX));
  /* 10fa543a call 0x10fa57b0 */
  push32(0x10fa543fu); f_10fa57b0();
  /* 10fa543f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa5442:;
  /* 10fa5442 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5447:;
  /* 10fa5447 mov dword ptr [0x10fc3a68], 0 */
  w32((uint32_t)(0x10fc3a68), (0x0u));
  /* 10fa5451 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5454 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5455 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5458 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5459 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa545c push edx */
  push32((uint32_t)(EDX));
  /* 10fa545d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5460 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5461 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5464 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10fa546a push edx */
  push32((uint32_t)(EDX));
  /* 10fa546b call 0x10fa57b0 */
  push32(0x10fa5470u); f_10fa57b0();
  /* 10fa5470 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5473 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5478:;
  /* 10fa5478 mov eax, dword ptr [0x10fc3a68] */
  EAX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa547d mov dword ptr [0x10fc3a78], eax */
  w32((uint32_t)(0x10fc3a78), (EAX));
  /* 10fa5482 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5485 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10fa5488 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa5489 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10fa548e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa5490 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa5493 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5496 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5497 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa549a push eax */
  push32((uint32_t)(EAX));
  /* 10fa549b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa549d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa54a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa54a1 call 0x10fa5650 */
  push32(0x10fa54a6u); f_10fa5650();
  /* 10fa54a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa54a9 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa54ae:;
  /* 10fa54ae mov edx, dword ptr [0x10fc3a68] */
  EDX = (r32((uint32_t)(0x10fc3a68)));
  /* 10fa54b4 mov dword ptr [0x10fc3a78], edx */
  w32((uint32_t)(0x10fc3a78), (EDX));
  /* 10fa54ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa54bd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fa54c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa54c1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10fa54c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa54c8 mov ecx, eax */
  ECX = (EAX);
  /* 10fa54ca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa54cd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa54d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa54d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fa54d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa54d7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10fa54dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa54de add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa54e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa54e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa54e6 push eax */
  push32((uint32_t)(EAX));
  /* 10fa54e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa54ea push ecx */
  push32((uint32_t)(ECX));
  /* 10fa54eb push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa54ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa54f0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa54f1 call 0x10fa5650 */
  push32(0x10fa54f6u); f_10fa5650();
  /* 10fa54f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa54f9 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa54fb:;
  /* 10fa54fb call 0x10fa6610 */
  push32(0x10fa5500u); f_10fa6610();
  /* 10fa5500 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5503 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5504 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5507 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5508 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa550b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa550d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5511 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10fa5514 mov ecx, dword ptr [eax*4 + 0x10fc2e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc2e1c)));
  /* 10fa551b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa551c call 0x10fa5600 */
  push32(0x10fa5521u); f_10fa5600();
  /* 10fa5521 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5524 jmp 0x10fa5548 */
  goto L_10fa5548;
L_10fa5526:;
  /* 10fa5526 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5529 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa552b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10fa552e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5531 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5533 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5536 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5539 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa553b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa553e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5540 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5543 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5546 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fa5548:;
  /* 10fa5548 pop esi */
  ESI = (pop32());
  /* 10fa5549 mov esp, ebp */
  ESP = (EBP);
  /* 10fa554b pop ebp */
  EBP = (pop32());
  /* 10fa554c ret  */
  ESPCHK(0x10fa4fe0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10fa5600 (72 bytes, 30 insns) */
void f_10fa5600(void) {
  FTRACE(0x10fa5600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa5600 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa5601 mov ebp, esp */
  EBP = (ESP);
L_10fa5603:;
  /* 10fa5603 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5606 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5609 je 0x10fa5646 */
  if (C.zf) goto L_10fa5646;
  /* 10fa560b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa560e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa5611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa5613 je 0x10fa5646 */
  if (C.zf) goto L_10fa5646;
  /* 10fa5615 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5618 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa561a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa561d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa561f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa5621 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5624 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5626 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5629 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa562c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa562e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5631 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5634 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fa5637 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa563a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa563c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa563f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5642 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa5644 jmp 0x10fa5603 */
  goto L_10fa5603;
L_10fa5646:;
  /* 10fa5646 pop ebp */
  EBP = (pop32());
  /* 10fa5647 ret  */
  ESPCHK(0x10fa5600u, _esp0);
  ESP += 4; return;
}

/* FUN_10015650 @ 0x10fa5650 (173 bytes, 64 insns) */
void f_10fa5650(void) {
  FTRACE(0x10fa5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa5650 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa5651 mov ebp, esp */
  EBP = (ESP);
  /* 10fa5653 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5654 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa565b cmp dword ptr [0x10fc3a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5662 je 0x10fa567a */
  if (C.zf) goto L_10fa567a;
  /* 10fa5664 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5667 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5668 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa566b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa566c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa566f push edx */
  push32((uint32_t)(EDX));
  /* 10fa5670 call 0x10fa5700 */
  push32(0x10fa5675u); f_10fa5700();
  /* 10fa5675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5678 jmp 0x10fa56f9 */
  goto L_10fa56f9;
L_10fa567a:;
  /* 10fa567a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa567d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5680 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5682 jae 0x10fa56f0 */
  if (!C.cf) goto L_10fa56f0;
  /* 10fa5684 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5687 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa568a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10fa568d jmp 0x10fa5698 */
  goto L_10fa5698;
L_10fa568f:;
  /* 10fa568f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5692 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5695 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10fa5698:;
  /* 10fa5698 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa569b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa569e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa56a0 je 0x10fa56d4 */
  if (C.zf) goto L_10fa56d4;
  /* 10fa56a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa56a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa56a6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10fa56ab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa56ad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa56b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa56b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa56b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa56b8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10fa56bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa56be cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa56bf mov ecx, 0xa */
  ECX = (0xau);
  /* 10fa56c4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa56c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa56c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa56cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa56cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa56d2 jmp 0x10fa568f */
  goto L_10fa568f;
L_10fa56d4:;
  /* 10fa56d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa56d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa56d9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa56dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa56df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fa56e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa56e4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa56e6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa56e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa56ec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fa56ee jmp 0x10fa56f9 */
  goto L_10fa56f9;
L_10fa56f0:;
  /* 10fa56f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa56f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10fa56f9:;
  /* 10fa56f9 mov esp, ebp */
  ESP = (EBP);
  /* 10fa56fb pop ebp */
  EBP = (pop32());
  /* 10fa56fc ret  */
  ESPCHK(0x10fa5650u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10fa5700 (172 bytes, 65 insns) */
void f_10fa5700(void) {
  FTRACE(0x10fa5700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa5700 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa5701 mov ebp, esp */
  EBP = (ESP);
  /* 10fa5703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5706 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5709 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa570b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa570e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5711 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5714 jbe 0x10fa575b */
  if ((C.cf||C.zf)) goto L_10fa575b;
L_10fa5716:;
  /* 10fa5716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5719 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa571a mov ecx, 0xa */
  ECX = (0xau);
  /* 10fa571f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa5721 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5727 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fa5729 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa572c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa572f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa5732 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5735 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5737 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa573a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa573d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa573f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5742 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa5743 mov ecx, 0xa */
  ECX = (0xau);
  /* 10fa5748 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa574a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa574d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5751 jle 0x10fa575b */
  if ((C.zf||C.sf!=C.of)) goto L_10fa575b;
  /* 10fa5753 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5756 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5759 ja 0x10fa5716 */
  if ((!C.cf&&!C.zf)) goto L_10fa5716;
L_10fa575b:;
  /* 10fa575b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa575e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5760 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa5763 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5769 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fa576b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa576e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5771 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa5774:;
  /* 10fa5774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5777 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa5779 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10fa577c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa577f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa5782 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa5784 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa5786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5789 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa578c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa578f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa5792 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa5795 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10fa5797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa579a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa579d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa57a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa57a3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa57a6 jb 0x10fa5774 */
  if (C.cf) goto L_10fa5774;
  /* 10fa57a8 mov esp, ebp */
  ESP = (EBP);
  /* 10fa57aa pop ebp */
  EBP = (pop32());
  /* 10fa57ab ret  */
  ESPCHK(0x10fa5700u, _esp0);
  ESP += 4; return;
}

/* FUN_100157b0 @ 0x10fa57b0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10fa57b0(void) {
  FTRACE(0x10fa57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa57b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa57b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10fa57b6:;
  /* 10fa57b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa57b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa57bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa57be je 0x10fa5c2c */
  if (C.zf) goto L_10fa5c2c;
  /* 10fa57c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa57c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa57ca je 0x10fa5c2c */
  if (C.zf) goto L_10fa5c2c;
  /* 10fa57d0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa57d4 mov dword ptr [0x10fc3a78], 0 */
  w32((uint32_t)(0x10fc3a78), (0x0u));
  /* 10fa57de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa57e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa57e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa57eb jmp 0x10fa57f6 */
  goto L_10fa57f6;
L_10fa57ed:;
  /* 10fa57ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa57f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa57f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10fa57f6:;
  /* 10fa57f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa57f9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa57fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa57ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa5802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5805 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5808 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa580b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa580d jne 0x10fa5811 */
  if (!C.zf) goto L_10fa5811;
  /* 10fa580f jmp 0x10fa57ed */
  goto L_10fa57ed;
L_10fa5811:;
  /* 10fa5811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5814 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5817 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa581a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa581d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa5820 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa5823 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa5826 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5829 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa582c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5830 ja 0x10fa5b80 */
  if ((!C.cf&&!C.zf)) goto L_10fa5b80;
  /* 10fa5836 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa5839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa583b mov al, byte ptr [ecx + 0x10fa5c5c] */
  AL = (r8((uint32_t)(ECX + 0x10fa5c5c)));
  /* 10fa5841 jmp dword ptr [eax*4 + 0x10fa5c30] */
  switch (EAX) {
    case 0: goto L_10fa5a9f;
    case 1: goto L_10fa5983;
    case 2: goto L_10fa590e;
    case 3: goto L_10fa5848;
    case 4: goto L_10fa5886;
    case 5: goto L_10fa58e7;
    case 6: goto L_10fa5935;
    case 7: goto L_10fa595c;
    case 8: goto L_10fa59ca;
    case 9: goto L_10fa58c4;
    case 10: goto L_10fa5b80;
    default: x86_unimpl("switch@0x10fa5841 out of table"); return;
  }
L_10fa5848:;
  /* 10fa5848 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa584b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fa584e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa5851 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5854 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fa5857 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa585b ja 0x10fa5881 */
  if ((!C.cf&&!C.zf)) goto L_10fa5881;
  /* 10fa585d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa5860 jmp dword ptr [ecx*4 + 0x10fa5caf] */
  switch (ECX) {
    case 0: goto L_10fa5867;
    case 1: goto L_10fa5871;
    case 2: goto L_10fa5877;
    case 3: goto L_10fa587d;
    case 4: goto L_10fa58a5;
    case 5: goto L_10fa58af;
    case 6: goto L_10fa58b5;
    case 7: goto L_10fa58bb;
    default: x86_unimpl("switch@0x10fa5860 out of table"); return;
  }
L_10fa5867:;
  /* 10fa5867 mov dword ptr [0x10fc3a78], 1 */
  w32((uint32_t)(0x10fc3a78), (0x1u));
L_10fa5871:;
  /* 10fa5871 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10fa5875 jmp 0x10fa5881 */
  goto L_10fa5881;
L_10fa5877:;
  /* 10fa5877 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10fa587b jmp 0x10fa5881 */
  goto L_10fa5881;
L_10fa587d:;
  /* 10fa587d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10fa5881:;
  /* 10fa5881 jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa5886:;
  /* 10fa5886 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5889 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10fa588c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa588f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5892 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fa5895 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5899 ja 0x10fa58bf */
  if ((!C.cf&&!C.zf)) goto L_10fa58bf;
  /* 10fa589b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa589e jmp dword ptr [ecx*4 + 0x10fa5cbf] */
  switch (ECX) {
    case 0: goto L_10fa58a5;
    case 1: goto L_10fa58af;
    case 2: goto L_10fa58b5;
    case 3: goto L_10fa58bb;
    default: x86_unimpl("switch@0x10fa589e out of table"); return;
  }
L_10fa58a5:;
  /* 10fa58a5 mov dword ptr [0x10fc3a78], 1 */
  w32((uint32_t)(0x10fc3a78), (0x1u));
L_10fa58af:;
  /* 10fa58af mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10fa58b3 jmp 0x10fa58bf */
  goto L_10fa58bf;
L_10fa58b5:;
  /* 10fa58b5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10fa58b9 jmp 0x10fa58bf */
  goto L_10fa58bf;
L_10fa58bb:;
  /* 10fa58bb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10fa58bf:;
  /* 10fa58bf jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa58c4:;
  /* 10fa58c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa58c7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fa58ca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa58ce je 0x10fa58d8 */
  if (C.zf) goto L_10fa58d8;
  /* 10fa58d0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa58d4 je 0x10fa58de */
  if (C.zf) goto L_10fa58de;
  /* 10fa58d6 jmp 0x10fa58e2 */
  goto L_10fa58e2;
L_10fa58d8:;
  /* 10fa58d8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10fa58dc jmp 0x10fa58e2 */
  goto L_10fa58e2;
L_10fa58de:;
  /* 10fa58de mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10fa58e2:;
  /* 10fa58e2 jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa58e7:;
  /* 10fa58e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa58ea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fa58ed cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa58f1 je 0x10fa58fb */
  if (C.zf) goto L_10fa58fb;
  /* 10fa58f3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa58f7 je 0x10fa5905 */
  if (C.zf) goto L_10fa5905;
  /* 10fa58f9 jmp 0x10fa5909 */
  goto L_10fa5909;
L_10fa58fb:;
  /* 10fa58fb mov dword ptr [0x10fc3a78], 1 */
  w32((uint32_t)(0x10fc3a78), (0x1u));
L_10fa5905:;
  /* 10fa5905 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10fa5909:;
  /* 10fa5909 jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa590e:;
  /* 10fa590e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5911 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10fa5914 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5918 je 0x10fa5922 */
  if (C.zf) goto L_10fa5922;
  /* 10fa591a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa591e je 0x10fa592c */
  if (C.zf) goto L_10fa592c;
  /* 10fa5920 jmp 0x10fa5930 */
  goto L_10fa5930;
L_10fa5922:;
  /* 10fa5922 mov dword ptr [0x10fc3a78], 1 */
  w32((uint32_t)(0x10fc3a78), (0x1u));
L_10fa592c:;
  /* 10fa592c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10fa5930:;
  /* 10fa5930 jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa5935:;
  /* 10fa5935 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5938 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10fa593b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa593f je 0x10fa5949 */
  if (C.zf) goto L_10fa5949;
  /* 10fa5941 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5945 je 0x10fa5953 */
  if (C.zf) goto L_10fa5953;
  /* 10fa5947 jmp 0x10fa5957 */
  goto L_10fa5957;
L_10fa5949:;
  /* 10fa5949 mov dword ptr [0x10fc3a78], 1 */
  w32((uint32_t)(0x10fc3a78), (0x1u));
L_10fa5953:;
  /* 10fa5953 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10fa5957:;
  /* 10fa5957 jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa595c:;
  /* 10fa595c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa595f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10fa5962 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5966 je 0x10fa5970 */
  if (C.zf) goto L_10fa5970;
  /* 10fa5968 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa596c je 0x10fa597a */
  if (C.zf) goto L_10fa597a;
  /* 10fa596e jmp 0x10fa597e */
  goto L_10fa597e;
L_10fa5970:;
  /* 10fa5970 mov dword ptr [0x10fc3a78], 1 */
  w32((uint32_t)(0x10fc3a78), (0x1u));
L_10fa597a:;
  /* 10fa597a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10fa597e:;
  /* 10fa597e jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa5983:;
  /* 10fa5983 push 0x10fbf944 */
  push32((uint32_t)(0x10fbf944u));
  /* 10fa5988 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa598b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa598c call 0x10fa61e0 */
  push32(0x10fa5991u); f_10fa61e0();
  /* 10fa5991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa5996 jne 0x10fa59a3 */
  if (!C.zf) goto L_10fa59a3;
  /* 10fa5998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa599b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa599e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa59a1 jmp 0x10fa59c1 */
  goto L_10fa59c1;
L_10fa59a3:;
  /* 10fa59a3 push 0x10fbf940 */
  push32((uint32_t)(0x10fbf940u));
  /* 10fa59a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa59ab push eax */
  push32((uint32_t)(EAX));
  /* 10fa59ac call 0x10fa61e0 */
  push32(0x10fa59b1u); f_10fa61e0();
  /* 10fa59b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa59b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa59b6 jne 0x10fa59c1 */
  if (!C.zf) goto L_10fa59c1;
  /* 10fa59b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa59bb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa59be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa59c1:;
  /* 10fa59c1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10fa59c5 jmp 0x10fa5b80 */
  goto L_10fa5b80;
L_10fa59ca:;
  /* 10fa59ca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa59cd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa59d1 jg 0x10fa59e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa59e1;
  /* 10fa59d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa59d6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10fa59dc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fa59df jmp 0x10fa59ed */
  goto L_10fa59ed;
L_10fa59e1:;
  /* 10fa59e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa59e4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10fa59ea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fa59ed:;
  /* 10fa59ed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa59f1 jle 0x10fa5a94 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa5a94;
  /* 10fa59f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa59fa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa59fd jbe 0x10fa5a94 */
  if ((C.cf||C.zf)) goto L_10fa5a94;
  /* 10fa5a03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa5a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5a08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa5a0a mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa5a10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5a12 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa5a16 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5a1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa5a1e je 0x10fa5a57 */
  if (C.zf) goto L_10fa5a57;
  /* 10fa5a20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5a23 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5a26 jbe 0x10fa5a57 */
  if ((C.cf||C.zf)) goto L_10fa5a57;
  /* 10fa5a28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5a2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5a2d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa5a30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa5a32 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fa5a34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5a37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5a39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5a3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5a3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa5a41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa5a44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5a47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fa5a4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5a4d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5a4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5a52 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5a55 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fa5a57:;
  /* 10fa5a57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5a5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5a5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa5a5f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa5a61 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa5a63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5a66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5a68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5a6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5a6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa5a70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa5a73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5a76 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fa5a79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5a7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5a7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5a81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5a84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa5a86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5a89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5a8c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fa5a8f jmp 0x10fa59ed */
  goto L_10fa59ed;
L_10fa5a94:;
  /* 10fa5a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5a97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa5a9a jmp 0x10fa57b6 */
  goto L_10fa57b6;
L_10fa5a9f:;
  /* 10fa5a9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5aa2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa5aa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa5aa7 je 0x10fa5b72 */
  if (C.zf) goto L_10fa5b72;
  /* 10fa5aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5ab0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5ab3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10fa5ab6:;
  /* 10fa5ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5ab9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa5abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa5abe je 0x10fa5b70 */
  if (C.zf) goto L_10fa5b70;
  /* 10fa5ac4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5ac7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5aca je 0x10fa5b70 */
  if (C.zf) goto L_10fa5b70;
  /* 10fa5ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5ad3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa5ad6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5ad9 jne 0x10fa5ae9 */
  if (!C.zf) goto L_10fa5ae9;
  /* 10fa5adb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5ade add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5ae1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fa5ae4 jmp 0x10fa5b70 */
  goto L_10fa5b70;
L_10fa5ae9:;
  /* 10fa5ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5aec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa5aee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa5af0 mov edx, dword ptr [0x10fc1c98] */
  EDX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa5af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5af8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10fa5afc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa5b03 je 0x10fa5b3c */
  if (C.zf) goto L_10fa5b3c;
  /* 10fa5b05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5b08 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5b0b jbe 0x10fa5b3c */
  if ((C.cf||C.zf)) goto L_10fa5b3c;
  /* 10fa5b0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5b12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5b15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa5b17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fa5b19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5b1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5b21 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fa5b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5b29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5b2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa5b2f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5b32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5b34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5b37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5b3a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fa5b3c:;
  /* 10fa5b3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5b41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5b44 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa5b46 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fa5b48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5b4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5b50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b53 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa5b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5b58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5b5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fa5b5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5b61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5b63 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5b66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5b69 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fa5b6b jmp 0x10fa5ab6 */
  goto L_10fa5ab6;
L_10fa5b70:;
  /* 10fa5b70 jmp 0x10fa5b7b */
  goto L_10fa5b7b;
L_10fa5b72:;
  /* 10fa5b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5b75 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5b78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fa5b7b:;
  /* 10fa5b7b jmp 0x10fa57b6 */
  goto L_10fa57b6;
L_10fa5b80:;
  /* 10fa5b80 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa5b84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa5b86 je 0x10fa5bac */
  if (C.zf) goto L_10fa5bac;
  /* 10fa5b88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa5b8b push edx */
  push32((uint32_t)(EDX));
  /* 10fa5b8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5b8f push eax */
  push32((uint32_t)(EAX));
  /* 10fa5b90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5b94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5b97 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5b98 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10fa5b9b push eax */
  push32((uint32_t)(EAX));
  /* 10fa5b9c call 0x10fa4fe0 */
  push32(0x10fa5ba1u); f_10fa4fe0();
  /* 10fa5ba1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5ba4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa5ba7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fa5baa jmp 0x10fa5c27 */
  goto L_10fa5c27;
L_10fa5bac:;
  /* 10fa5bac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5baf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5bb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa5bb3 mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa5bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5bbb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa5bbf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5bc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa5bc7 je 0x10fa5bf8 */
  if (C.zf) goto L_10fa5bf8;
  /* 10fa5bc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5bcc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5bd1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa5bd3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa5bd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5bd8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5bda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5bdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5be0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa5be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5be8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fa5beb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5bee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5bf0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5bf3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5bf6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10fa5bf8:;
  /* 10fa5bf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5bfb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa5bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5c00 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa5c02 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10fa5c04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5c07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5c09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5c0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5c0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fa5c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa5c14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5c17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa5c1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5c1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa5c1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5c22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5c25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fa5c27:;
  /* 10fa5c27 jmp 0x10fa57b6 */
  goto L_10fa57b6;
L_10fa5c2c:;
  /* 10fa5c2c mov esp, ebp */
  ESP = (EBP);
  /* 10fa5c2e pop ebp */
  EBP = (pop32());
  /* 10fa5c2f ret  */
  ESPCHK(0x10fa57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cd0 @ 0x10fa5cd0 (650 bytes, 178 insns) */
void f_10fa5cd0(void) {
  FTRACE(0x10fa5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa5cd3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa5cd9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5cdd jne 0x10fa5e39 */
  if (!C.zf) goto L_10fa5e39;
  /* 10fa5ce3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5ce6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10fa5cec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10fa5cf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa5cf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa5cfc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10fa5d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5d08 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10fa5d0e push edx */
  push32((uint32_t)(EDX));
  /* 10fa5d0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5d12 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5d13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5d16 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5d17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5d1a push edx */
  push32((uint32_t)(EDX));
  /* 10fa5d1b call 0x10fa70f0 */
  push32(0x10fa5d20u); f_10fa70f0();
  /* 10fa5d20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5d23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa5d26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5d2a jne 0x10fa5dbf */
  if (!C.zf) goto L_10fa5dbf;
  /* 10fa5d30 call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa5d36u);
  /* 10fa5d36 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5d39 je 0x10fa5d40 */
  if (C.zf) goto L_10fa5d40;
  /* 10fa5d3b jmp 0x10fa5e1d */
  goto L_10fa5e1d;
L_10fa5d40:;
  /* 10fa5d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5d46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5d49 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5d4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5d4d push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5d4e call 0x10fa70f0 */
  push32(0x10fa5d53u); f_10fa70f0();
  /* 10fa5d53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5d56 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10fa5d5c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5d63 jne 0x10fa5d6a */
  if (!C.zf) goto L_10fa5d6a;
  /* 10fa5d65 jmp 0x10fa5e1d */
  goto L_10fa5e1d;
L_10fa5d6a:;
  /* 10fa5d6a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10fa5d6c push 0x10fbf94c */
  push32((uint32_t)(0x10fbf94cu));
  /* 10fa5d71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5d73 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10fa5d79 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5d7a call 0x10f97b10 */
  push32(0x10fa5d7fu); f_10f97b10();
  /* 10fa5d7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5d82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa5d85 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5d89 jne 0x10fa5d90 */
  if (!C.zf) goto L_10fa5d90;
  /* 10fa5d8b jmp 0x10fa5e1d */
  goto L_10fa5e1d;
L_10fa5d90:;
  /* 10fa5d90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa5d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5d99 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10fa5d9f push eax */
  push32((uint32_t)(EAX));
  /* 10fa5da0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5da4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5da7 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5da8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5dab push eax */
  push32((uint32_t)(EAX));
  /* 10fa5dac call 0x10fa70f0 */
  push32(0x10fa5db1u); f_10fa70f0();
  /* 10fa5db1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5db4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa5db7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5dbb jne 0x10fa5dbf */
  if (!C.zf) goto L_10fa5dbf;
  /* 10fa5dbd jmp 0x10fa5e1d */
  goto L_10fa5e1d;
L_10fa5dbf:;
  /* 10fa5dbf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10fa5dc1 push 0x10fbf94c */
  push32((uint32_t)(0x10fbf94cu));
  /* 10fa5dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5dc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa5dcb push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5dcc call 0x10f97b10 */
  push32(0x10fa5dd1u); f_10f97b10();
  /* 10fa5dd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5dd4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10fa5dda mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fa5ddc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10fa5de2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5de5 jne 0x10fa5de9 */
  if (!C.zf) goto L_10fa5de9;
  /* 10fa5de7 jmp 0x10fa5e1d */
  goto L_10fa5e1d;
L_10fa5de9:;
  /* 10fa5de9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa5dec push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5ded mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5df0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa5df1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10fa5df7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa5df9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5dfa call 0x10f9b330 */
  push32(0x10fa5dffu); f_10f9b330();
  /* 10fa5dff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5e02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5e06 je 0x10fa5e16 */
  if (C.zf) goto L_10fa5e16;
  /* 10fa5e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5e0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5e0d push edx */
  push32((uint32_t)(EDX));
  /* 10fa5e0e call 0x10f985a0 */
  push32(0x10fa5e13u); f_10f985a0();
  /* 10fa5e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa5e16:;
  /* 10fa5e16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5e18 jmp 0x10fa5f56 */
  goto L_10fa5f56;
L_10fa5e1d:;
  /* 10fa5e1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5e21 je 0x10fa5e31 */
  if (C.zf) goto L_10fa5e31;
  /* 10fa5e23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa5e25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa5e28 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5e29 call 0x10f985a0 */
  push32(0x10fa5e2eu); f_10f985a0();
  /* 10fa5e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa5e31:;
  /* 10fa5e31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5e34 jmp 0x10fa5f56 */
  goto L_10fa5f56;
L_10fa5e39:;
  /* 10fa5e39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5e3d jne 0x10fa5f53 */
  if (!C.zf) goto L_10fa5f53;
  /* 10fa5e43 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10fa5e4d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5e50 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10fa5e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5e58 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fa5e5e push edx */
  push32((uint32_t)(EDX));
  /* 10fa5e5f push 0x10fc3990 */
  push32((uint32_t)(0x10fc3990u));
  /* 10fa5e64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5e67 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5e68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa5e6b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5e6c call 0x10fa6f50 */
  push32(0x10fa5e71u); f_10fa6f50();
  /* 10fa5e71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa5e76 jne 0x10fa5e80 */
  if (!C.zf) goto L_10fa5e80;
  /* 10fa5e78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5e7b jmp 0x10fa5f56 */
  goto L_10fa5f56;
L_10fa5e80:;
  /* 10fa5e80 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa5e86 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10fa5e89 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10fa5e93 jmp 0x10fa5ea4 */
  goto L_10fa5ea4;
L_10fa5e95:;
  /* 10fa5e95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa5e9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5e9e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10fa5ea4:;
  /* 10fa5ea4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5eab jge 0x10fa5f4f */
  if ((C.sf==C.of)) goto L_10fa5f4f;
  /* 10fa5eb1 cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5eb8 jle 0x10fa5eeb */
  if ((C.zf||C.sf!=C.of)) goto L_10fa5eeb;
  /* 10fa5eba push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa5ebc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa5ec2 mov dl, byte ptr [ecx*2 + 0x10fc3990] */
  DL = (r8((uint32_t)(ECX*2 + 0x10fc3990)));
  /* 10fa5ec9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10fa5ecf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10fa5ed5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5eda push eax */
  push32((uint32_t)(EAX));
  /* 10fa5edb call 0x10f9db20 */
  push32(0x10fa5ee0u); f_10f9db20();
  /* 10fa5ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5ee3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10fa5ee9 jmp 0x10fa5f1e */
  goto L_10fa5f1e;
L_10fa5eeb:;
  /* 10fa5eeb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa5ef1 mov dl, byte ptr [ecx*2 + 0x10fc3990] */
  DL = (r8((uint32_t)(ECX*2 + 0x10fc3990)));
  /* 10fa5ef8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10fa5efe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10fa5f04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5f09 mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa5f0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5f11 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa5f15 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa5f18 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10fa5f1e:;
  /* 10fa5f1e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5f25 je 0x10fa5f48 */
  if (C.zf) goto L_10fa5f48;
  /* 10fa5f27 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa5f2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa5f30 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa5f33 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10fa5f3a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10fa5f3e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa5f44 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa5f46 jmp 0x10fa5f4a */
  goto L_10fa5f4a;
L_10fa5f48:;
  /* 10fa5f48 jmp 0x10fa5f4f */
  goto L_10fa5f4f;
L_10fa5f4a:;
  /* 10fa5f4a jmp 0x10fa5e95 */
  goto L_10fa5e95;
L_10fa5f4f:;
  /* 10fa5f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5f51 jmp 0x10fa5f56 */
  goto L_10fa5f56;
L_10fa5f53:;
  /* 10fa5f53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fa5f56:;
  /* 10fa5f56 mov esp, ebp */
  ESP = (EBP);
  /* 10fa5f58 pop ebp */
  EBP = (pop32());
  /* 10fa5f59 ret  */
  ESPCHK(0x10fa5cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f60 @ 0x10fa5f60 (10 bytes, 5 insns) */
void f_10fa5f60(void) {
  FTRACE(0x10fa5f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa5f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa5f61 mov ebp, esp */
  EBP = (ESP);
  /* 10fa5f63 mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa5f68 pop ebp */
  EBP = (pop32());
  /* 10fa5f69 ret  */
  ESPCHK(0x10fa5f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f70 @ 0x10fa5f70 (575 bytes, 196 insns) */
void f_10fa5f70(void) {
  FTRACE(0x10fa5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa5f71 mov ebp, esp */
  EBP = (ESP);
  /* 10fa5f73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa5f75 push 0x10fbf958 */
  push32((uint32_t)(0x10fbf958u));
  /* 10fa5f7a push 0x10fa0c18 */
  push32((uint32_t)(0x10fa0c18u));
  /* 10fa5f7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fa5f85 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5f86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fa5f8d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa5f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa5f91 push esi */
  push32((uint32_t)(ESI));
  /* 10fa5f92 push edi */
  push32((uint32_t)(EDI));
  /* 10fa5f93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa5f96 cmp dword ptr [0x10fc399c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc399c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5f9d jne 0x10fa5fee */
  if (!C.zf) goto L_10fa5fee;
  /* 10fa5f9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10fa5fa2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa5fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa5fa5 push 0x10fbf08c */
  push32((uint32_t)(0x10fbf08cu));
  /* 10fa5faa push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa5fac call dword ptr [0x10fc62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d8))), 0x10fa5fb2u);
  /* 10fa5fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa5fb4 je 0x10fa5fc2 */
  if (C.zf) goto L_10fa5fc2;
  /* 10fa5fb6 mov dword ptr [0x10fc399c], 1 */
  w32((uint32_t)(0x10fc399c), (0x1u));
  /* 10fa5fc0 jmp 0x10fa5fee */
  goto L_10fa5fee;
L_10fa5fc2:;
  /* 10fa5fc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10fa5fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa5fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa5fc8 push 0x10fbf088 */
  push32((uint32_t)(0x10fbf088u));
  /* 10fa5fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa5fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa5fd1 call dword ptr [0x10fc62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e8))), 0x10fa5fd7u);
  /* 10fa5fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa5fd9 je 0x10fa5fe7 */
  if (C.zf) goto L_10fa5fe7;
  /* 10fa5fdb mov dword ptr [0x10fc399c], 2 */
  w32((uint32_t)(0x10fc399c), (0x2u));
  /* 10fa5fe5 jmp 0x10fa5fee */
  goto L_10fa5fee;
L_10fa5fe7:;
  /* 10fa5fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa5fe9 jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa5fee:;
  /* 10fa5fee cmp dword ptr [0x10fc399c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc399c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa5ff5 jne 0x10fa6012 */
  if (!C.zf) goto L_10fa6012;
  /* 10fa5ff7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa5ffa push edx */
  push32((uint32_t)(EDX));
  /* 10fa5ffb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa5ffe push eax */
  push32((uint32_t)(EAX));
  /* 10fa5fff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa6002 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6006 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6007 call dword ptr [0x10fc62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d8))), 0x10fa600du);
  /* 10fa600d jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa6012:;
  /* 10fa6012 cmp dword ptr [0x10fc399c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc399c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6019 jne 0x10fa61c7 */
  if (!C.zf) goto L_10fa61c7;
  /* 10fa601f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6023 jne 0x10fa602d */
  if (!C.zf) goto L_10fa602d;
  /* 10fa6025 mov eax, dword ptr [0x10fc3910] */
  EAX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa602a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10fa602d:;
  /* 10fa602d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa602f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6031 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6033 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6035 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6038 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa603c push edx */
  push32((uint32_t)(EDX));
  /* 10fa603d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa6042 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa6045 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6046 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa604cu);
  /* 10fa604c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fa604f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6053 jne 0x10fa605c */
  if (!C.zf) goto L_10fa605c;
  /* 10fa6055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6057 jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa605c:;
  /* 10fa605c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa6063 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa6066 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6069 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa606b call 0x10f9acb0 */
  push32(0x10fa6070u); f_10f9acb0();
  /* 10fa6070 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10fa6073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa6076 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa6079 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fa607c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa607f push edx */
  push32((uint32_t)(EDX));
  /* 10fa6080 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6082 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa6085 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6086 call 0x10f9b880 */
  push32(0x10fa608bu); f_10f9b880();
  /* 10fa608b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa608e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa6095 jmp 0x10fa60ae */
  goto L_10fa60ae;
  /* 10fa6097 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa609c ret  */
  ESPCHK(0x10fa5f70u, _esp0);
  ESP += 4; return;
  /* 10fa609d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa60a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10fa60a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa60ae:;
  /* 10fa60ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa60b2 jne 0x10fa60bb */
  if (!C.zf) goto L_10fa60bb;
  /* 10fa60b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa60b6 jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa60bb:;
  /* 10fa60bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa60bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa60bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa60c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa60c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa60c6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa60c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa60ca push eax */
  push32((uint32_t)(EAX));
  /* 10fa60cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa60ce push ecx */
  push32((uint32_t)(ECX));
  /* 10fa60cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa60d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa60d7 push edx */
  push32((uint32_t)(EDX));
  /* 10fa60d8 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa60deu);
  /* 10fa60de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa60e0 jne 0x10fa60e9 */
  if (!C.zf) goto L_10fa60e9;
  /* 10fa60e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa60e4 jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa60e9:;
  /* 10fa60e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa60f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa60f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10fa60f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa60fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa60fc call 0x10f9acb0 */
  push32(0x10fa6101u); f_10f9acb0();
  /* 10fa6101 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10fa6104 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa6107 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fa610a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fa610d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa6114 jmp 0x10fa612d */
  goto L_10fa612d;
  /* 10fa6116 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa611b ret  */
  ESPCHK(0x10fa5f70u, _esp0);
  ESP += 4; return;
  /* 10fa611c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa611f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fa6126 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa612d:;
  /* 10fa612d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6131 jne 0x10fa613a */
  if (!C.zf) goto L_10fa613a;
  /* 10fa6133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6135 jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa613a:;
  /* 10fa613a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa613e jne 0x10fa6149 */
  if (!C.zf) goto L_10fa6149;
  /* 10fa6140 mov edx, dword ptr [0x10fc3900] */
  EDX = (r32((uint32_t)(0x10fc3900)));
  /* 10fa6146 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10fa6149:;
  /* 10fa6149 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa614c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa614f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10fa6155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6158 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa615b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10fa6162 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa6165 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6166 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa6169 push edx */
  push32((uint32_t)(EDX));
  /* 10fa616a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa616d push eax */
  push32((uint32_t)(EAX));
  /* 10fa616e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6171 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6172 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa6175 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6176 call dword ptr [0x10fc62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e8))), 0x10fa617cu);
  /* 10fa617c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fa617f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6182 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa6185 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6187 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10fa618c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6192 je 0x10fa61a8 */
  if (C.zf) goto L_10fa61a8;
  /* 10fa6194 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6197 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa619a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa619c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa61a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa61a6 je 0x10fa61ac */
  if (C.zf) goto L_10fa61ac;
L_10fa61a8:;
  /* 10fa61a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa61aa jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa61ac:;
  /* 10fa61ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa61af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa61b1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa61b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa61b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa61b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa61b9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa61ba call 0x10f9fa00 */
  push32(0x10fa61bfu); f_10f9fa00();
  /* 10fa61bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa61c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa61c5 jmp 0x10fa61c9 */
  goto L_10fa61c9;
L_10fa61c7:;
  /* 10fa61c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa61c9:;
  /* 10fa61c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10fa61cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa61cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fa61d6 pop edi */
  EDI = (pop32());
  /* 10fa61d7 pop esi */
  ESI = (pop32());
  /* 10fa61d8 pop ebx */
  EBX = (pop32());
  /* 10fa61d9 mov esp, ebp */
  ESP = (EBP);
  /* 10fa61db pop ebp */
  EBP = (pop32());
  /* 10fa61dc ret  */
  ESPCHK(0x10fa5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x10fa61e0 (208 bytes, 85 insns) */
void f_10fa61e0(void) {
  FTRACE(0x10fa61e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa61e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa61e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa61e3 push edi */
  push32((uint32_t)(EDI));
  /* 10fa61e4 push esi */
  push32((uint32_t)(ESI));
  /* 10fa61e5 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa61e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa61e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa61ec lea eax, [0x10fc38f8] */
  EAX = ((uint32_t)(0x10fc38f8));
  /* 10fa61f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa61f6 jne 0x10fa6233 */
  if (!C.zf) goto L_10fa6233;
  /* 10fa61f8 mov al, 0xff */
  AL = (0xffu);
  /* 10fa61fa mov edi, edi */
  EDI = (EDI);
L_10fa61fc:;
  /* 10fa61fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa61fe je 0x10fa622e */
  if (C.zf) goto L_10fa622e;
  /* 10fa6200 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fa6202 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fa6203 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10fa6205 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fa6206 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa6208 je 0x10fa61fc */
  if (C.zf) goto L_10fa61fc;
  /* 10fa620a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fa620c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa620e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fa6210 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fa6213 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fa6215 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fa6217 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10fa6219 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fa621b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa621d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fa621f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fa6222 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fa6224 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fa6226 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa6228 je 0x10fa61fc */
  if (C.zf) goto L_10fa61fc;
  /* 10fa622a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fa622c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10fa622e:;
  /* 10fa622e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10fa6231 jmp 0x10fa62ab */
  goto L_10fa62ab;
L_10fa6233:;
  /* 10fa6233 lock inc dword ptr [0x10fc3a8c] */
  x86_unimpl("lock inc @ 0x10fa6233");
  /* 10fa623a cmp dword ptr [0x10fc3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6241 jg 0x10fa6247 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa6247;
  /* 10fa6243 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6245 jmp 0x10fa625c */
  goto L_10fa625c;
L_10fa6247:;
  /* 10fa6247 lock dec dword ptr [0x10fc3a8c] */
  x86_unimpl("lock dec @ 0x10fa6247");
  /* 10fa624e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa6250 call 0x10f9b510 */
  push32(0x10fa6255u); f_10f9b510();
  /* 10fa6255 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10fa625c:;
  /* 10fa625c mov eax, 0xff */
  EAX = (0xffu);
  /* 10fa6261 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10fa6263 nop  */
  /* nop */
L_10fa6264:;
  /* 10fa6264 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa6266 je 0x10fa628f */
  if (C.zf) goto L_10fa628f;
  /* 10fa6268 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fa626a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fa626b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10fa626d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fa626e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa6270 je 0x10fa6264 */
  if (C.zf) goto L_10fa6264;
  /* 10fa6272 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6273 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa6274 call 0x10fa7350 */
  push32(0x10fa6279u); f_10fa7350();
  /* 10fa6279 mov ebx, eax */
  EBX = (EAX);
  /* 10fa627b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa627e call 0x10fa7350 */
  push32(0x10fa6283u); f_10fa7350();
  /* 10fa6283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6286 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa6288 je 0x10fa6264 */
  if (C.zf) goto L_10fa6264;
  /* 10fa628a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa628c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10fa628f:;
  /* 10fa628f mov ebx, eax */
  EBX = (EAX);
  /* 10fa6291 pop eax */
  EAX = (pop32());
  /* 10fa6292 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6294 jne 0x10fa629f */
  if (!C.zf) goto L_10fa629f;
  /* 10fa6296 lock dec dword ptr [0x10fc3a8c] */
  x86_unimpl("lock dec @ 0x10fa6296");
  /* 10fa629d jmp 0x10fa62a9 */
  goto L_10fa62a9;
L_10fa629f:;
  /* 10fa629f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa62a1 call 0x10f9b5b0 */
  push32(0x10fa62a6u); f_10f9b5b0();
  /* 10fa62a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa62a9:;
  /* 10fa62a9 mov eax, ebx */
  EAX = (EBX);
L_10fa62ab:;
  /* 10fa62ab pop ebx */
  EBX = (pop32());
  /* 10fa62ac pop esi */
  ESI = (pop32());
  /* 10fa62ad pop edi */
  EDI = (pop32());
  /* 10fa62ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fa62af ret  */
  ESPCHK(0x10fa61e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100162b0 @ 0x10fa62b0 (257 bytes, 103 insns) */
void f_10fa62b0(void) {
  FTRACE(0x10fa62b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa62b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa62b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa62b3 push edi */
  push32((uint32_t)(EDI));
  /* 10fa62b4 push esi */
  push32((uint32_t)(ESI));
  /* 10fa62b5 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa62b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa62b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa62bb je 0x10fa63aa */
  if (C.zf) goto L_10fa63aa;
  /* 10fa62c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa62c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa62c7 lea eax, [0x10fc38f8] */
  EAX = ((uint32_t)(0x10fc38f8));
  /* 10fa62cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa62d1 jne 0x10fa6321 */
  if (!C.zf) goto L_10fa6321;
  /* 10fa62d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10fa62d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10fa62d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10fa62d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fa62dc:;
  /* 10fa62dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10fa62de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fa62e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10fa62e2 je 0x10fa6305 */
  if (C.zf) goto L_10fa6305;
  /* 10fa62e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa62e6 je 0x10fa6305 */
  if (C.zf) goto L_10fa6305;
  /* 10fa62e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fa62e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fa62ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa62ec jb 0x10fa62f4 */
  if (C.cf) goto L_10fa62f4;
  /* 10fa62ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa62f0 ja 0x10fa62f4 */
  if ((!C.cf&&!C.zf)) goto L_10fa62f4;
  /* 10fa62f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10fa62f4:;
  /* 10fa62f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa62f6 jb 0x10fa62fe */
  if (C.cf) goto L_10fa62fe;
  /* 10fa62f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa62fa ja 0x10fa62fe */
  if ((!C.cf&&!C.zf)) goto L_10fa62fe;
  /* 10fa62fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10fa62fe:;
  /* 10fa62fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa6300 jne 0x10fa630f */
  if (!C.zf) goto L_10fa630f;
  /* 10fa6302 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10fa6303 jne 0x10fa62dc */
  if (!C.zf) goto L_10fa62dc;
L_10fa6305:;
  /* 10fa6305 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6307 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa6309 je 0x10fa63aa */
  if (C.zf) goto L_10fa63aa;
L_10fa630f:;
  /* 10fa630f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10fa6314 jb 0x10fa63aa */
  if (C.cf) goto L_10fa63aa;
  /* 10fa631a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa631c jmp 0x10fa63aa */
  goto L_10fa63aa;
L_10fa6321:;
  /* 10fa6321 lock inc dword ptr [0x10fc3a8c] */
  x86_unimpl("lock inc @ 0x10fa6321");
  /* 10fa6328 cmp dword ptr [0x10fc3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa632f jg 0x10fa6335 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa6335;
  /* 10fa6331 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6333 jmp 0x10fa634e */
  goto L_10fa634e;
L_10fa6335:;
  /* 10fa6335 lock dec dword ptr [0x10fc3a8c] */
  x86_unimpl("lock dec @ 0x10fa6335");
  /* 10fa633c mov ebx, ecx */
  EBX = (ECX);
  /* 10fa633e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa6340 call 0x10f9b510 */
  push32(0x10fa6345u); f_10f9b510();
  /* 10fa6345 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10fa634c mov ecx, ebx */
  ECX = (EBX);
L_10fa634e:;
  /* 10fa634e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6350 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10fa6352 mov edi, edi */
  EDI = (EDI);
L_10fa6354:;
  /* 10fa6354 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fa6356 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6358 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10fa635a je 0x10fa637f */
  if (C.zf) goto L_10fa637f;
  /* 10fa635c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10fa635e je 0x10fa637f */
  if (C.zf) goto L_10fa637f;
  /* 10fa6360 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fa6361 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fa6362 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6363 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6364 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa6365 call 0x10fa7350 */
  push32(0x10fa636au); f_10fa7350();
  /* 10fa636a mov ebx, eax */
  EBX = (EAX);
  /* 10fa636c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa636f call 0x10fa7350 */
  push32(0x10fa6374u); f_10fa7350();
  /* 10fa6374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6377 pop ecx */
  ECX = (pop32());
  /* 10fa6378 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa637a jne 0x10fa6385 */
  if (!C.zf) goto L_10fa6385;
  /* 10fa637c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10fa637d jne 0x10fa6354 */
  if (!C.zf) goto L_10fa6354;
L_10fa637f:;
  /* 10fa637f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6381 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6383 je 0x10fa638e */
  if (C.zf) goto L_10fa638e;
L_10fa6385:;
  /* 10fa6385 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10fa638a jb 0x10fa638e */
  if (C.cf) goto L_10fa638e;
  /* 10fa638c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10fa638e:;
  /* 10fa638e pop eax */
  EAX = (pop32());
  /* 10fa638f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6391 jne 0x10fa639c */
  if (!C.zf) goto L_10fa639c;
  /* 10fa6393 lock dec dword ptr [0x10fc3a8c] */
  x86_unimpl("lock dec @ 0x10fa6393");
  /* 10fa639a jmp 0x10fa63aa */
  goto L_10fa63aa;
L_10fa639c:;
  /* 10fa639c mov ebx, ecx */
  EBX = (ECX);
  /* 10fa639e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa63a0 call 0x10f9b5b0 */
  push32(0x10fa63a5u); f_10f9b5b0();
  /* 10fa63a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa63a8 mov ecx, ebx */
  ECX = (EBX);
L_10fa63aa:;
  /* 10fa63aa mov eax, ecx */
  EAX = (ECX);
  /* 10fa63ac pop ebx */
  EBX = (pop32());
  /* 10fa63ad pop esi */
  ESI = (pop32());
  /* 10fa63ae pop edi */
  EDI = (pop32());
  /* 10fa63af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fa63b0 ret  */
  ESPCHK(0x10fa62b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163c0 @ 0x10fa63c0 (255 bytes, 88 insns) */
void f_10fa63c0(void) {
  FTRACE(0x10fa63c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa63c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa63c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa63c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10fa63c6:;
  /* 10fa63c6 cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa63cd jle 0x10fa63e6 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa63e6;
  /* 10fa63cf push 8 */
  push32((uint32_t)(0x8u));
  /* 10fa63d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa63d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa63d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa63d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa63d9 call 0x10f9db20 */
  push32(0x10fa63deu); f_10f9db20();
  /* 10fa63de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa63e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fa63e4 jmp 0x10fa63ff */
  goto L_10fa63ff;
L_10fa63e6:;
  /* 10fa63e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa63e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa63eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa63ed mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa63f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa63f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa63f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa63fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa63ff:;
  /* 10fa63ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6403 je 0x10fa6410 */
  if (C.zf) goto L_10fa6410;
  /* 10fa6405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6408 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa640b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa640e jmp 0x10fa63c6 */
  goto L_10fa63c6;
L_10fa6410:;
  /* 10fa6410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6413 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6415 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa6417 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa641a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa641d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6420 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa6423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6426 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa6429 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa642d je 0x10fa6435 */
  if (C.zf) goto L_10fa6435;
  /* 10fa642f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6433 jne 0x10fa6448 */
  if (!C.zf) goto L_10fa6448;
L_10fa6435:;
  /* 10fa6435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa643a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa643c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa643f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6442 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6445 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fa6448:;
  /* 10fa6448 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fa644f:;
  /* 10fa644f cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6456 jle 0x10fa646b */
  if ((C.zf||C.sf!=C.of)) goto L_10fa646b;
  /* 10fa6458 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa645a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa645d push edx */
  push32((uint32_t)(EDX));
  /* 10fa645e call 0x10f9db20 */
  push32(0x10fa6463u); f_10f9db20();
  /* 10fa6463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6466 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa6469 jmp 0x10fa6480 */
  goto L_10fa6480;
L_10fa646b:;
  /* 10fa646b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa646e mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa6474 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6476 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa647a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa647d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10fa6480:;
  /* 10fa6480 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6484 je 0x10fa64ab */
  if (C.zf) goto L_10fa64ab;
  /* 10fa6486 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6489 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa648c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa648f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10fa6493 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa6496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6499 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa649b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa649d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa64a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa64a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa64a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fa64a9 jmp 0x10fa644f */
  goto L_10fa644f;
L_10fa64ab:;
  /* 10fa64ab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa64af jne 0x10fa64b8 */
  if (!C.zf) goto L_10fa64b8;
  /* 10fa64b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa64b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa64b6 jmp 0x10fa64bb */
  goto L_10fa64bb;
L_10fa64b8:;
  /* 10fa64b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fa64bb:;
  /* 10fa64bb mov esp, ebp */
  ESP = (EBP);
  /* 10fa64bd pop ebp */
  EBP = (pop32());
  /* 10fa64be ret  */
  ESPCHK(0x10fa63c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100164c0 @ 0x10fa64c0 (17 bytes, 8 insns) */
void f_10fa64c0(void) {
  FTRACE(0x10fa64c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa64c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa64c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa64c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa64c6 push eax */
  push32((uint32_t)(EAX));
  /* 10fa64c7 call 0x10fa63c0 */
  push32(0x10fa64ccu); f_10fa63c0();
  /* 10fa64cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa64cf pop ebp */
  EBP = (pop32());
  /* 10fa64d0 ret  */
  ESPCHK(0x10fa64c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100164e0 @ 0x10fa64e0 (297 bytes, 106 insns) */
void f_10fa64e0(void) {
  FTRACE(0x10fa64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa64e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa64e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa64e6 push esi */
  push32((uint32_t)(ESI));
L_10fa64e7:;
  /* 10fa64e7 cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa64ee jle 0x10fa6507 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6507;
  /* 10fa64f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10fa64f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa64f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa64f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa64f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa64fa call 0x10f9db20 */
  push32(0x10fa64ffu); f_10f9db20();
  /* 10fa64ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6502 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa6505 jmp 0x10fa6520 */
  goto L_10fa6520;
L_10fa6507:;
  /* 10fa6507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa650a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa650c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa650e mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa6514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6516 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa651a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa651d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10fa6520:;
  /* 10fa6520 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6524 je 0x10fa6531 */
  if (C.zf) goto L_10fa6531;
  /* 10fa6526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa652c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa652f jmp 0x10fa64e7 */
  goto L_10fa64e7;
L_10fa6531:;
  /* 10fa6531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6534 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa6538 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa653b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa653e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6541 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa6544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6547 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fa654a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa654e je 0x10fa6556 */
  if (C.zf) goto L_10fa6556;
  /* 10fa6550 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6554 jne 0x10fa6569 */
  if (!C.zf) goto L_10fa6569;
L_10fa6556:;
  /* 10fa6556 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa655b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa655d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa6560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6563 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6566 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fa6569:;
  /* 10fa6569 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa6570 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fa6577:;
  /* 10fa6577 cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa657e jle 0x10fa6593 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6593;
  /* 10fa6580 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa6582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6585 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6586 call 0x10f9db20 */
  push32(0x10fa658bu); f_10f9db20();
  /* 10fa658b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa658e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fa6591 jmp 0x10fa65a8 */
  goto L_10fa65a8;
L_10fa6593:;
  /* 10fa6593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6596 mov ecx, dword ptr [0x10fc1c98] */
  ECX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa659c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa659e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10fa65a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa65a5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10fa65a8:;
  /* 10fa65a8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa65ac je 0x10fa65e9 */
  if (C.zf) goto L_10fa65e9;
  /* 10fa65ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa65b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10fa65b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa65b5 push eax */
  push32((uint32_t)(EAX));
  /* 10fa65b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa65b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa65ba call 0x10fa7480 */
  push32(0x10fa65bfu); f_10fa7480();
  /* 10fa65bf mov ecx, eax */
  ECX = (EAX);
  /* 10fa65c1 mov esi, edx */
  ESI = (EDX);
  /* 10fa65c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa65c6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa65c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa65ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa65cc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa65ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa65d1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10fa65d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa65d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa65d9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa65db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa65de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa65e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa65e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fa65e7 jmp 0x10fa6577 */
  goto L_10fa6577;
L_10fa65e9:;
  /* 10fa65e9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa65ed jne 0x10fa65fe */
  if (!C.zf) goto L_10fa65fe;
  /* 10fa65ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa65f2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa65f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa65f7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa65fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa65fc jmp 0x10fa6604 */
  goto L_10fa6604;
L_10fa65fe:;
  /* 10fa65fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6601 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10fa6604:;
  /* 10fa6604 pop esi */
  ESI = (pop32());
  /* 10fa6605 mov esp, ebp */
  ESP = (EBP);
  /* 10fa6607 pop ebp */
  EBP = (pop32());
  /* 10fa6608 ret  */
  ESPCHK(0x10fa64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016610 @ 0x10fa6610 (61 bytes, 18 insns) */
void f_10fa6610(void) {
  FTRACE(0x10fa6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6610 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6611 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6613 cmp dword ptr [0x10fc3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa661a jne 0x10fa664b */
  if (!C.zf) goto L_10fa664b;
  /* 10fa661c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa661e call 0x10f9b510 */
  push32(0x10fa6623u); f_10f9b510();
  /* 10fa6623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6626 cmp dword ptr [0x10fc3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa662d jne 0x10fa6641 */
  if (!C.zf) goto L_10fa6641;
  /* 10fa662f call 0x10fa6670 */
  push32(0x10fa6634u); f_10fa6670();
  /* 10fa6634 mov eax, dword ptr [0x10fc3a58] */
  EAX = (r32((uint32_t)(0x10fc3a58)));
  /* 10fa6639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa663c mov dword ptr [0x10fc3a58], eax */
  w32((uint32_t)(0x10fc3a58), (EAX));
L_10fa6641:;
  /* 10fa6641 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa6643 call 0x10f9b5b0 */
  push32(0x10fa6648u); f_10f9b5b0();
  /* 10fa6648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa664b:;
  /* 10fa664b pop ebp */
  EBP = (pop32());
  /* 10fa664c ret  */
  ESPCHK(0x10fa6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10016650 @ 0x10fa6650 (30 bytes, 11 insns) */
void f_10fa6650(void) {
  FTRACE(0x10fa6650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6650 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6651 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6653 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa6655 call 0x10f9b510 */
  push32(0x10fa665au); f_10f9b510();
  /* 10fa665a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa665d call 0x10fa6670 */
  push32(0x10fa6662u); f_10fa6670();
  /* 10fa6662 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa6664 call 0x10f9b5b0 */
  push32(0x10fa6669u); f_10f9b5b0();
  /* 10fa6669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa666c pop ebp */
  EBP = (pop32());
  /* 10fa666d ret  */
  ESPCHK(0x10fa6650u, _esp0);
  ESP += 4; return;
}

/* FUN_10016670 @ 0x10fa6670 (939 bytes, 266 insns) */
void f_10fa6670(void) {
  FTRACE(0x10fa6670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6670 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6671 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6676 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa667d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa667f call 0x10f9b510 */
  push32(0x10fa6684u); f_10f9b510();
  /* 10fa6684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6687 mov dword ptr [0x10fc39a0], 0 */
  w32((uint32_t)(0x10fc39a0), (0x0u));
  /* 10fa6691 mov dword ptr [0x10fc2e38], 0xffffffff */
  w32((uint32_t)(0x10fc2e38), (0xffffffffu));
  /* 10fa669b mov eax, dword ptr [0x10fc2e38] */
  EAX = (r32((uint32_t)(0x10fc2e38)));
  /* 10fa66a0 mov dword ptr [0x10fc2e28], eax */
  w32((uint32_t)(0x10fc2e28), (EAX));
  /* 10fa66a5 push 0x10fbf9b8 */
  push32((uint32_t)(0x10fbf9b8u));
  /* 10fa66aa call 0x10fa74f0 */
  push32(0x10fa66afu); f_10fa74f0();
  /* 10fa66af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa66b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa66b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa66b9 jne 0x10fa67f3 */
  if (!C.zf) goto L_10fa67f3;
  /* 10fa66bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa66c1 call 0x10f9b5b0 */
  push32(0x10fa66c6u); f_10f9b5b0();
  /* 10fa66c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa66c9 push 0x10fc39a8 */
  push32((uint32_t)(0x10fc39a8u));
  /* 10fa66ce call dword ptr [0x10fc629c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc629c))), 0x10fa66d4u);
  /* 10fa66d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa66d7 je 0x10fa67ee */
  if (C.zf) goto L_10fa67ee;
  /* 10fa66dd mov dword ptr [0x10fc39a0], 1 */
  w32((uint32_t)(0x10fc39a0), (0x1u));
  /* 10fa66e7 mov ecx, dword ptr [0x10fc39a8] */
  ECX = (r32((uint32_t)(0x10fc39a8)));
  /* 10fa66ed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa66f0 mov dword ptr [0x10fc2d90], ecx */
  w32((uint32_t)(0x10fc2d90), (ECX));
  /* 10fa66f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa66f8 mov dx, word ptr [0x10fc39ee] */
  DX = (r16((uint32_t)(0x10fc39ee)));
  /* 10fa66ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa6701 je 0x10fa6719 */
  if (C.zf) goto L_10fa6719;
  /* 10fa6703 mov eax, dword ptr [0x10fc39fc] */
  EAX = (r32((uint32_t)(0x10fc39fc)));
  /* 10fa6708 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa670b mov ecx, dword ptr [0x10fc2d90] */
  ECX = (r32((uint32_t)(0x10fc2d90)));
  /* 10fa6711 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6713 mov dword ptr [0x10fc2d90], ecx */
  w32((uint32_t)(0x10fc2d90), (ECX));
L_10fa6719:;
  /* 10fa6719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa671b mov dx, word ptr [0x10fc3a42] */
  DX = (r16((uint32_t)(0x10fc3a42)));
  /* 10fa6722 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa6724 je 0x10fa674e */
  if (C.zf) goto L_10fa674e;
  /* 10fa6726 cmp dword ptr [0x10fc3a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa672d je 0x10fa674e */
  if (C.zf) goto L_10fa674e;
  /* 10fa672f mov dword ptr [0x10fc2d94], 1 */
  w32((uint32_t)(0x10fc2d94), (0x1u));
  /* 10fa6739 mov eax, dword ptr [0x10fc3a50] */
  EAX = (r32((uint32_t)(0x10fc3a50)));
  /* 10fa673e sub eax, dword ptr [0x10fc39fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc39fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6744 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6747 mov dword ptr [0x10fc2d98], eax */
  w32((uint32_t)(0x10fc2d98), (EAX));
  /* 10fa674c jmp 0x10fa6762 */
  goto L_10fa6762;
L_10fa674e:;
  /* 10fa674e mov dword ptr [0x10fc2d94], 0 */
  w32((uint32_t)(0x10fc2d94), (0x0u));
  /* 10fa6758 mov dword ptr [0x10fc2d98], 0 */
  w32((uint32_t)(0x10fc2d98), (0x0u));
L_10fa6762:;
  /* 10fa6762 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10fa6765 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6768 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10fa676a mov edx, dword ptr [0x10fc2e1c] */
  EDX = (r32((uint32_t)(0x10fc2e1c)));
  /* 10fa6770 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6771 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa6773 push 0x10fc39ac */
  push32((uint32_t)(0x10fc39acu));
  /* 10fa6778 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa677d mov eax, dword ptr [0x10fc3910] */
  EAX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa6782 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6783 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa6789u);
  /* 10fa6789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa678b je 0x10fa679f */
  if (C.zf) goto L_10fa679f;
  /* 10fa678d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6791 jne 0x10fa679f */
  if (!C.zf) goto L_10fa679f;
  /* 10fa6793 mov ecx, dword ptr [0x10fc2e1c] */
  ECX = (r32((uint32_t)(0x10fc2e1c)));
  /* 10fa6799 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10fa679d jmp 0x10fa67a8 */
  goto L_10fa67a8;
L_10fa679f:;
  /* 10fa679f mov edx, dword ptr [0x10fc2e1c] */
  EDX = (r32((uint32_t)(0x10fc2e1c)));
  /* 10fa67a5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10fa67a8:;
  /* 10fa67a8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fa67ab push eax */
  push32((uint32_t)(EAX));
  /* 10fa67ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa67ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10fa67b0 mov ecx, dword ptr [0x10fc2e20] */
  ECX = (r32((uint32_t)(0x10fc2e20)));
  /* 10fa67b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa67b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa67b9 push 0x10fc3a00 */
  push32((uint32_t)(0x10fc3a00u));
  /* 10fa67be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa67c3 mov edx, dword ptr [0x10fc3910] */
  EDX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa67c9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa67ca call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa67d0u);
  /* 10fa67d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa67d2 je 0x10fa67e5 */
  if (C.zf) goto L_10fa67e5;
  /* 10fa67d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa67d8 jne 0x10fa67e5 */
  if (!C.zf) goto L_10fa67e5;
  /* 10fa67da mov eax, dword ptr [0x10fc2e20] */
  EAX = (r32((uint32_t)(0x10fc2e20)));
  /* 10fa67df mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10fa67e3 jmp 0x10fa67ee */
  goto L_10fa67ee;
L_10fa67e5:;
  /* 10fa67e5 mov ecx, dword ptr [0x10fc2e20] */
  ECX = (r32((uint32_t)(0x10fc2e20)));
  /* 10fa67eb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10fa67ee:;
  /* 10fa67ee jmp 0x10fa6a17 */
  goto L_10fa6a17;
L_10fa67f3:;
  /* 10fa67f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa67f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa67f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa67fb je 0x10fa681d */
  if (C.zf) goto L_10fa681d;
  /* 10fa67fd cmp dword ptr [0x10fc3a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6804 je 0x10fa682c */
  if (C.zf) goto L_10fa682c;
  /* 10fa6806 mov ecx, dword ptr [0x10fc3a54] */
  ECX = (r32((uint32_t)(0x10fc3a54)));
  /* 10fa680c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa680d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6810 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6811 call 0x10fa37a0 */
  push32(0x10fa6816u); f_10fa37a0();
  /* 10fa6816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa681b jne 0x10fa682c */
  if (!C.zf) goto L_10fa682c;
L_10fa681d:;
  /* 10fa681d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa681f call 0x10f9b5b0 */
  push32(0x10fa6824u); f_10f9b5b0();
  /* 10fa6824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6827 jmp 0x10fa6a17 */
  goto L_10fa6a17;
L_10fa682c:;
  /* 10fa682c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa682e mov eax, dword ptr [0x10fc3a54] */
  EAX = (r32((uint32_t)(0x10fc3a54)));
  /* 10fa6833 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6834 call 0x10f985a0 */
  push32(0x10fa6839u); f_10f985a0();
  /* 10fa6839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa683c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10fa6841 push 0x10fbf9b0 */
  push32((uint32_t)(0x10fbf9b0u));
  /* 10fa6846 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa6848 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa684b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa684c call 0x10f9a940 */
  push32(0x10fa6851u); f_10f9a940();
  /* 10fa6851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6854 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6857 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6858 call 0x10f97b10 */
  push32(0x10fa685du); f_10f97b10();
  /* 10fa685d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6860 mov dword ptr [0x10fc3a54], eax */
  w32((uint32_t)(0x10fc3a54), (EAX));
  /* 10fa6865 cmp dword ptr [0x10fc3a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa686c jne 0x10fa687d */
  if (!C.zf) goto L_10fa687d;
  /* 10fa686e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa6870 call 0x10f9b5b0 */
  push32(0x10fa6875u); f_10f9b5b0();
  /* 10fa6875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6878 jmp 0x10fa6a17 */
  goto L_10fa6a17;
L_10fa687d:;
  /* 10fa687d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6880 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6881 mov eax, dword ptr [0x10fc3a54] */
  EAX = (r32((uint32_t)(0x10fc3a54)));
  /* 10fa6886 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6887 call 0x10f9aac0 */
  push32(0x10fa688cu); f_10f9aac0();
  /* 10fa688c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa688f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa6891 call 0x10f9b5b0 */
  push32(0x10fa6896u); f_10f9b5b0();
  /* 10fa6896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6899 push 3 */
  push32((uint32_t)(0x3u));
  /* 10fa689b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa689e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa689f mov edx, dword ptr [0x10fc2e1c] */
  EDX = (r32((uint32_t)(0x10fc2e1c)));
  /* 10fa68a5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa68a6 call 0x10f9b330 */
  push32(0x10fa68abu); f_10f9b330();
  /* 10fa68ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa68ae mov eax, dword ptr [0x10fc2e1c] */
  EAX = (r32((uint32_t)(0x10fc2e1c)));
  /* 10fa68b3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10fa68b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa68ba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa68bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa68c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa68c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa68c6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa68c9 jne 0x10fa68dd */
  if (!C.zf) goto L_10fa68dd;
  /* 10fa68cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa68ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa68d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa68d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa68d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa68da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fa68dd:;
  /* 10fa68dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa68e0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa68e1 call 0x10fa63c0 */
  push32(0x10fa68e6u); f_10fa63c0();
  /* 10fa68e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa68e9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa68ef mov dword ptr [0x10fc2d90], eax */
  w32((uint32_t)(0x10fc2d90), (EAX));
L_10fa68f4:;
  /* 10fa68f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa68f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa68fa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa68fd je 0x10fa6915 */
  if (C.zf) goto L_10fa6915;
  /* 10fa68ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6902 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa6905 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6908 jl 0x10fa6920 */
  if ((C.sf!=C.of)) goto L_10fa6920;
  /* 10fa690a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa690d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa6910 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6913 jg 0x10fa6920 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa6920;
L_10fa6915:;
  /* 10fa6915 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6918 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa691b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa691e jmp 0x10fa68f4 */
  goto L_10fa68f4;
L_10fa6920:;
  /* 10fa6920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6923 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa6926 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6929 jne 0x10fa69c5 */
  if (!C.zf) goto L_10fa69c5;
  /* 10fa692f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6932 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6935 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa6938 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa693b push edx */
  push32((uint32_t)(EDX));
  /* 10fa693c call 0x10fa63c0 */
  push32(0x10fa6941u); f_10fa63c0();
  /* 10fa6941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6944 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6947 mov ecx, dword ptr [0x10fc2d90] */
  ECX = (r32((uint32_t)(0x10fc2d90)));
  /* 10fa694d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa694f mov dword ptr [0x10fc2d90], ecx */
  w32((uint32_t)(0x10fc2d90), (ECX));
L_10fa6955:;
  /* 10fa6955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6958 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa695b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa695e jl 0x10fa6976 */
  if ((C.sf!=C.of)) goto L_10fa6976;
  /* 10fa6960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6963 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa6966 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6969 jg 0x10fa6976 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa6976;
  /* 10fa696b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa696e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6971 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa6974 jmp 0x10fa6955 */
  goto L_10fa6955;
L_10fa6976:;
  /* 10fa6976 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6979 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa697c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa697f jne 0x10fa69c5 */
  if (!C.zf) goto L_10fa69c5;
  /* 10fa6981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6987 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa698a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa698d push ecx */
  push32((uint32_t)(ECX));
  /* 10fa698e call 0x10fa63c0 */
  push32(0x10fa6993u); f_10fa63c0();
  /* 10fa6993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6996 mov edx, dword ptr [0x10fc2d90] */
  EDX = (r32((uint32_t)(0x10fc2d90)));
  /* 10fa699c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa699e mov dword ptr [0x10fc2d90], edx */
  w32((uint32_t)(0x10fc2d90), (EDX));
L_10fa69a4:;
  /* 10fa69a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa69a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa69aa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa69ad jl 0x10fa69c5 */
  if ((C.sf!=C.of)) goto L_10fa69c5;
  /* 10fa69af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa69b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa69b5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa69b8 jg 0x10fa69c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa69c5;
  /* 10fa69ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa69bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa69c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa69c3 jmp 0x10fa69a4 */
  goto L_10fa69a4;
L_10fa69c5:;
  /* 10fa69c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa69c9 je 0x10fa69d9 */
  if (C.zf) goto L_10fa69d9;
  /* 10fa69cb mov edx, dword ptr [0x10fc2d90] */
  EDX = (r32((uint32_t)(0x10fc2d90)));
  /* 10fa69d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa69d3 mov dword ptr [0x10fc2d90], edx */
  w32((uint32_t)(0x10fc2d90), (EDX));
L_10fa69d9:;
  /* 10fa69d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa69dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa69df mov dword ptr [0x10fc2d94], ecx */
  w32((uint32_t)(0x10fc2d94), (ECX));
  /* 10fa69e5 cmp dword ptr [0x10fc2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa69ec je 0x10fa6a0e */
  if (C.zf) goto L_10fa6a0e;
  /* 10fa69ee push 3 */
  push32((uint32_t)(0x3u));
  /* 10fa69f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa69f3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa69f4 mov eax, dword ptr [0x10fc2e20] */
  EAX = (r32((uint32_t)(0x10fc2e20)));
  /* 10fa69f9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa69fa call 0x10f9b330 */
  push32(0x10fa69ffu); f_10f9b330();
  /* 10fa69ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6a02 mov ecx, dword ptr [0x10fc2e20] */
  ECX = (r32((uint32_t)(0x10fc2e20)));
  /* 10fa6a08 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10fa6a0c jmp 0x10fa6a17 */
  goto L_10fa6a17;
L_10fa6a0e:;
  /* 10fa6a0e mov edx, dword ptr [0x10fc2e20] */
  EDX = (r32((uint32_t)(0x10fc2e20)));
  /* 10fa6a14 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10fa6a17:;
  /* 10fa6a17 mov esp, ebp */
  ESP = (EBP);
  /* 10fa6a19 pop ebp */
  EBP = (pop32());
  /* 10fa6a1a ret  */
  ESPCHK(0x10fa6670u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a20 @ 0x10fa6a20 (46 bytes, 18 insns) */
void f_10fa6a20(void) {
  FTRACE(0x10fa6a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6a21 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6a24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa6a26 call 0x10f9b510 */
  push32(0x10fa6a2bu); f_10f9b510();
  /* 10fa6a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6a31 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6a32 call 0x10fa6a50 */
  push32(0x10fa6a37u); f_10fa6a50();
  /* 10fa6a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6a3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa6a3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa6a3f call 0x10f9b5b0 */
  push32(0x10fa6a44u); f_10f9b5b0();
  /* 10fa6a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6a47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6a4a mov esp, ebp */
  ESP = (EBP);
  /* 10fa6a4c pop ebp */
  EBP = (pop32());
  /* 10fa6a4d ret  */
  ESPCHK(0x10fa6a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a50 @ 0x10fa6a50 (762 bytes, 246 insns) */
void f_10fa6a50(void) {
  FTRACE(0x10fa6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6a51 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6a54 cmp dword ptr [0x10fc2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6a5b jne 0x10fa6a64 */
  if (!C.zf) goto L_10fa6a64;
  /* 10fa6a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6a5f jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6a64:;
  /* 10fa6a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6a67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fa6a6a cmp ecx, dword ptr [0x10fc2e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc2e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6a70 jne 0x10fa6a84 */
  if (!C.zf) goto L_10fa6a84;
  /* 10fa6a72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6a75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fa6a78 cmp eax, dword ptr [0x10fc2e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc2e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6a7e je 0x10fa6c4b */
  if (C.zf) goto L_10fa6c4b;
L_10fa6a84:;
  /* 10fa6a84 cmp dword ptr [0x10fc39a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc39a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6a8b je 0x10fa6c05 */
  if (C.zf) goto L_10fa6c05;
  /* 10fa6a91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6a93 mov cx, word ptr [0x10fc3a40] */
  CX = (r16((uint32_t)(0x10fc3a40)));
  /* 10fa6a9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa6a9c jne 0x10fa6af9 */
  if (!C.zf) goto L_10fa6af9;
  /* 10fa6a9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6aa0 mov dx, word ptr [0x10fc3a4e] */
  DX = (r16((uint32_t)(0x10fc3a4e)));
  /* 10fa6aa7 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6aaa mov ax, word ptr [0x10fc3a4c] */
  AX = (r16((uint32_t)(0x10fc3a4c)));
  /* 10fa6ab0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6ab1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6ab3 mov cx, word ptr [0x10fc3a4a] */
  CX = (r16((uint32_t)(0x10fc3a4a)));
  /* 10fa6aba push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6abb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6abd mov dx, word ptr [0x10fc3a48] */
  DX = (r16((uint32_t)(0x10fc3a48)));
  /* 10fa6ac4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6ac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6ac9 mov ax, word ptr [0x10fc3a44] */
  AX = (r16((uint32_t)(0x10fc3a44)));
  /* 10fa6acf push eax */
  push32((uint32_t)(EAX));
  /* 10fa6ad0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6ad2 mov cx, word ptr [0x10fc3a46] */
  CX = (r16((uint32_t)(0x10fc3a46)));
  /* 10fa6ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6ada xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6adc mov dx, word ptr [0x10fc3a42] */
  DX = (r16((uint32_t)(0x10fc3a42)));
  /* 10fa6ae3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6ae7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fa6aea push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6aed push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6aef call 0x10fa6d50 */
  push32(0x10fa6af4u); f_10fa6d50();
  /* 10fa6af4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6af7 jmp 0x10fa6b4a */
  goto L_10fa6b4a;
L_10fa6af9:;
  /* 10fa6af9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6afb mov dx, word ptr [0x10fc3a4e] */
  DX = (r16((uint32_t)(0x10fc3a4e)));
  /* 10fa6b02 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6b05 mov ax, word ptr [0x10fc3a4c] */
  AX = (r16((uint32_t)(0x10fc3a4c)));
  /* 10fa6b0b push eax */
  push32((uint32_t)(EAX));
  /* 10fa6b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6b0e mov cx, word ptr [0x10fc3a4a] */
  CX = (r16((uint32_t)(0x10fc3a4a)));
  /* 10fa6b15 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6b16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6b18 mov dx, word ptr [0x10fc3a48] */
  DX = (r16((uint32_t)(0x10fc3a48)));
  /* 10fa6b1f push edx */
  push32((uint32_t)(EDX));
  /* 10fa6b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6b22 mov ax, word ptr [0x10fc3a46] */
  AX = (r16((uint32_t)(0x10fc3a46)));
  /* 10fa6b28 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6b2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6b2f mov cx, word ptr [0x10fc3a42] */
  CX = (r16((uint32_t)(0x10fc3a42)));
  /* 10fa6b36 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6b3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fa6b3d push eax */
  push32((uint32_t)(EAX));
  /* 10fa6b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6b42 call 0x10fa6d50 */
  push32(0x10fa6b47u); f_10fa6d50();
  /* 10fa6b47 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa6b4a:;
  /* 10fa6b4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6b4c mov cx, word ptr [0x10fc39ec] */
  CX = (r16((uint32_t)(0x10fc39ec)));
  /* 10fa6b53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa6b55 jne 0x10fa6bb2 */
  if (!C.zf) goto L_10fa6bb2;
  /* 10fa6b57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6b59 mov dx, word ptr [0x10fc39fa] */
  DX = (r16((uint32_t)(0x10fc39fa)));
  /* 10fa6b60 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6b63 mov ax, word ptr [0x10fc39f8] */
  AX = (r16((uint32_t)(0x10fc39f8)));
  /* 10fa6b69 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6b6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6b6c mov cx, word ptr [0x10fc39f6] */
  CX = (r16((uint32_t)(0x10fc39f6)));
  /* 10fa6b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6b74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6b76 mov dx, word ptr [0x10fc39f4] */
  DX = (r16((uint32_t)(0x10fc39f4)));
  /* 10fa6b7d push edx */
  push32((uint32_t)(EDX));
  /* 10fa6b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6b82 mov ax, word ptr [0x10fc39f0] */
  AX = (r16((uint32_t)(0x10fc39f0)));
  /* 10fa6b88 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6b89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6b8b mov cx, word ptr [0x10fc39f2] */
  CX = (r16((uint32_t)(0x10fc39f2)));
  /* 10fa6b92 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6b93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6b95 mov dx, word ptr [0x10fc39ee] */
  DX = (r16((uint32_t)(0x10fc39ee)));
  /* 10fa6b9c push edx */
  push32((uint32_t)(EDX));
  /* 10fa6b9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6ba0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fa6ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6ba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6ba8 call 0x10fa6d50 */
  push32(0x10fa6badu); f_10fa6d50();
  /* 10fa6bad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6bb0 jmp 0x10fa6c03 */
  goto L_10fa6c03;
L_10fa6bb2:;
  /* 10fa6bb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6bb4 mov dx, word ptr [0x10fc39fa] */
  DX = (r16((uint32_t)(0x10fc39fa)));
  /* 10fa6bbb push edx */
  push32((uint32_t)(EDX));
  /* 10fa6bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6bbe mov ax, word ptr [0x10fc39f8] */
  AX = (r16((uint32_t)(0x10fc39f8)));
  /* 10fa6bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6bc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6bc7 mov cx, word ptr [0x10fc39f6] */
  CX = (r16((uint32_t)(0x10fc39f6)));
  /* 10fa6bce push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6bcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6bd1 mov dx, word ptr [0x10fc39f4] */
  DX = (r16((uint32_t)(0x10fc39f4)));
  /* 10fa6bd8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6bd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6bdb mov ax, word ptr [0x10fc39f2] */
  AX = (r16((uint32_t)(0x10fc39f2)));
  /* 10fa6be1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6be6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6be8 mov cx, word ptr [0x10fc39ee] */
  CX = (r16((uint32_t)(0x10fc39ee)));
  /* 10fa6bef push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6bf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6bf3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fa6bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6bfb call 0x10fa6d50 */
  push32(0x10fa6c00u); f_10fa6d50();
  /* 10fa6c00 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa6c03:;
  /* 10fa6c03 jmp 0x10fa6c4b */
  goto L_10fa6c4b;
L_10fa6c05:;
  /* 10fa6c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa6c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6c13 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa6c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6c18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10fa6c1b push edx */
  push32((uint32_t)(EDX));
  /* 10fa6c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6c20 call 0x10fa6d50 */
  push32(0x10fa6c25u); f_10fa6d50();
  /* 10fa6c25 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa6c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c34 push 5 */
  push32((uint32_t)(0x5u));
  /* 10fa6c36 push 0xa */
  push32((uint32_t)(0xau));
  /* 10fa6c38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6c3b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10fa6c3e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6c43 call 0x10fa6d50 */
  push32(0x10fa6c48u); f_10fa6d50();
  /* 10fa6c48 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa6c4b:;
  /* 10fa6c4b mov edx, dword ptr [0x10fc2e2c] */
  EDX = (r32((uint32_t)(0x10fc2e2c)));
  /* 10fa6c51 cmp edx, dword ptr [0x10fc2e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6c57 jge 0x10fa6ca4 */
  if ((C.sf==C.of)) goto L_10fa6ca4;
  /* 10fa6c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6c5c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fa6c5f cmp ecx, dword ptr [0x10fc2e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6c65 jl 0x10fa6c75 */
  if ((C.sf!=C.of)) goto L_10fa6c75;
  /* 10fa6c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6c6a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa6c6d cmp eax, dword ptr [0x10fc2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6c73 jle 0x10fa6c7c */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6c7c;
L_10fa6c75:;
  /* 10fa6c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6c77 jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6c7c:;
  /* 10fa6c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6c7f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fa6c82 cmp edx, dword ptr [0x10fc2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6c88 jle 0x10fa6ca2 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6ca2;
  /* 10fa6c8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6c8d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fa6c90 cmp ecx, dword ptr [0x10fc2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6c96 jge 0x10fa6ca2 */
  if ((C.sf==C.of)) goto L_10fa6ca2;
  /* 10fa6c98 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa6c9d jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6ca2:;
  /* 10fa6ca2 jmp 0x10fa6ce7 */
  goto L_10fa6ce7;
L_10fa6ca4:;
  /* 10fa6ca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6ca7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa6caa cmp eax, dword ptr [0x10fc2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6cb0 jl 0x10fa6cc0 */
  if ((C.sf!=C.of)) goto L_10fa6cc0;
  /* 10fa6cb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6cb5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fa6cb8 cmp edx, dword ptr [0x10fc2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6cbe jle 0x10fa6cc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6cc7;
L_10fa6cc0:;
  /* 10fa6cc0 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa6cc5 jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6cc7:;
  /* 10fa6cc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6cca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fa6ccd cmp ecx, dword ptr [0x10fc2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6cd3 jle 0x10fa6ce7 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6ce7;
  /* 10fa6cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6cd8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa6cdb cmp eax, dword ptr [0x10fc2e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6ce1 jge 0x10fa6ce7 */
  if ((C.sf==C.of)) goto L_10fa6ce7;
  /* 10fa6ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6ce5 jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6ce7:;
  /* 10fa6ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6cea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fa6ced imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6cf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa6cf5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6cf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6cfa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fa6cfd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6d03 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6d05 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6d0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa6d0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6d11 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fa6d14 cmp edx, dword ptr [0x10fc2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6d1a jne 0x10fa6d32 */
  if (!C.zf) goto L_10fa6d32;
  /* 10fa6d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6d1f cmp eax, dword ptr [0x10fc2e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc2e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6d25 jl 0x10fa6d2e */
  if ((C.sf!=C.of)) goto L_10fa6d2e;
  /* 10fa6d27 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa6d2c jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6d2e:;
  /* 10fa6d2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6d30 jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6d32:;
  /* 10fa6d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6d35 cmp ecx, dword ptr [0x10fc2e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc2e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6d3b jge 0x10fa6d44 */
  if ((C.sf==C.of)) goto L_10fa6d44;
  /* 10fa6d3d mov eax, 1 */
  EAX = (0x1u);
  /* 10fa6d42 jmp 0x10fa6d46 */
  goto L_10fa6d46;
L_10fa6d44:;
  /* 10fa6d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa6d46:;
  /* 10fa6d46 mov esp, ebp */
  ESP = (EBP);
  /* 10fa6d48 pop ebp */
  EBP = (pop32());
  /* 10fa6d49 ret  */
  ESPCHK(0x10fa6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d50 @ 0x10fa6d50 (504 bytes, 145 insns) */
void f_10fa6d50(void) {
  FTRACE(0x10fa6d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6d51 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6d53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6d56 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6d5a jne 0x10fa6e2c */
  if (!C.zf) goto L_10fa6e2c;
  /* 10fa6d60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6d63 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6d66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa6d68 jne 0x10fa6d79 */
  if (!C.zf) goto L_10fa6d79;
  /* 10fa6d6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6d6d mov edx, dword ptr [ecx*4 + 0x10fc2e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc2e4c)));
  /* 10fa6d74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fa6d77 jmp 0x10fa6d86 */
  goto L_10fa6d86;
L_10fa6d79:;
  /* 10fa6d79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6d7c mov ecx, dword ptr [eax*4 + 0x10fc2e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc2e80)));
  /* 10fa6d83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10fa6d86:;
  /* 10fa6d86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa6d89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6d8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa6d8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6d92 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6d95 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6d9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6d9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6da0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6da3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6da6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10fa6da9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10fa6dad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa6dae mov ecx, 7 */
  ECX = (0x7u);
  /* 10fa6db3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa6db5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa6db8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa6dbb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6dbe jge 0x10fa6dd9 */
  if ((C.sf==C.of)) goto L_10fa6dd9;
  /* 10fa6dc0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa6dc3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6dc6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa6dc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6dcc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6dcf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6dd2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6dd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa6dd7 jmp 0x10fa6ded */
  goto L_10fa6ded;
L_10fa6dd9:;
  /* 10fa6dd9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa6ddc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6ddf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa6de2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6de5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6de8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6dea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa6ded:;
  /* 10fa6ded cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6df1 jne 0x10fa6e2a */
  if (!C.zf) goto L_10fa6e2a;
  /* 10fa6df3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6df6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa6df9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa6dfb jne 0x10fa6e0c */
  if (!C.zf) goto L_10fa6e0c;
  /* 10fa6dfd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6e00 mov eax, dword ptr [edx*4 + 0x10fc2e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc2e50)));
  /* 10fa6e07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fa6e0a jmp 0x10fa6e19 */
  goto L_10fa6e19;
L_10fa6e0c:;
  /* 10fa6e0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6e0f mov edx, dword ptr [ecx*4 + 0x10fc2e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc2e84)));
  /* 10fa6e16 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa6e19:;
  /* 10fa6e19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6e1c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6e1f jle 0x10fa6e2a */
  if ((C.zf||C.sf!=C.of)) goto L_10fa6e2a;
  /* 10fa6e21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6e24 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6e27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fa6e2a:;
  /* 10fa6e2a jmp 0x10fa6e61 */
  goto L_10fa6e61;
L_10fa6e2c:;
  /* 10fa6e2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6e2f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa6e32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa6e34 jne 0x10fa6e45 */
  if (!C.zf) goto L_10fa6e45;
  /* 10fa6e36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6e39 mov ecx, dword ptr [eax*4 + 0x10fc2e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc2e4c)));
  /* 10fa6e40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa6e43 jmp 0x10fa6e52 */
  goto L_10fa6e52;
L_10fa6e45:;
  /* 10fa6e45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6e48 mov eax, dword ptr [edx*4 + 0x10fc2e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc2e80)));
  /* 10fa6e4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10fa6e52:;
  /* 10fa6e52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa6e55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa6e58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6e5b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6e5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10fa6e61:;
  /* 10fa6e61 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6e65 jne 0x10fa6ea1 */
  if (!C.zf) goto L_10fa6ea1;
  /* 10fa6e67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6e6a mov dword ptr [0x10fc2e2c], eax */
  w32((uint32_t)(0x10fc2e2c), (EAX));
  /* 10fa6e6f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10fa6e72 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6e75 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10fa6e78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6e7a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6e7d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10fa6e80 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6e82 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6e88 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10fa6e8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6e8d mov dword ptr [0x10fc2e30], ecx */
  w32((uint32_t)(0x10fc2e30), (ECX));
  /* 10fa6e93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6e96 mov dword ptr [0x10fc2e28], edx */
  w32((uint32_t)(0x10fc2e28), (EDX));
  /* 10fa6e9c jmp 0x10fa6f44 */
  goto L_10fa6f44;
L_10fa6ea1:;
  /* 10fa6ea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa6ea4 mov dword ptr [0x10fc2e3c], eax */
  w32((uint32_t)(0x10fc2e3c), (EAX));
  /* 10fa6ea9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10fa6eac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6eaf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10fa6eb2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6eb4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6eb7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10fa6eba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6ebc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6ec2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10fa6ec5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6ec7 mov dword ptr [0x10fc2e40], ecx */
  w32((uint32_t)(0x10fc2e40), (ECX));
  /* 10fa6ecd mov edx, dword ptr [0x10fc2d98] */
  EDX = (r32((uint32_t)(0x10fc2d98)));
  /* 10fa6ed3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa6ed9 mov eax, dword ptr [0x10fc2e40] */
  EAX = (r32((uint32_t)(0x10fc2e40)));
  /* 10fa6ede add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6ee0 mov dword ptr [0x10fc2e40], eax */
  w32((uint32_t)(0x10fc2e40), (EAX));
  /* 10fa6ee5 cmp dword ptr [0x10fc2e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc2e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6eec jge 0x10fa6f11 */
  if ((C.sf==C.of)) goto L_10fa6f11;
  /* 10fa6eee mov ecx, dword ptr [0x10fc2e40] */
  ECX = (r32((uint32_t)(0x10fc2e40)));
  /* 10fa6ef4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6efa mov dword ptr [0x10fc2e40], ecx */
  w32((uint32_t)(0x10fc2e40), (ECX));
  /* 10fa6f00 mov edx, dword ptr [0x10fc2e3c] */
  EDX = (r32((uint32_t)(0x10fc2e3c)));
  /* 10fa6f06 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6f09 mov dword ptr [0x10fc2e3c], edx */
  w32((uint32_t)(0x10fc2e3c), (EDX));
  /* 10fa6f0f jmp 0x10fa6f3b */
  goto L_10fa6f3b;
L_10fa6f11:;
  /* 10fa6f11 cmp dword ptr [0x10fc2e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10fc2e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6f1b jl 0x10fa6f3b */
  if ((C.sf!=C.of)) goto L_10fa6f3b;
  /* 10fa6f1d mov eax, dword ptr [0x10fc2e40] */
  EAX = (r32((uint32_t)(0x10fc2e40)));
  /* 10fa6f22 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa6f27 mov dword ptr [0x10fc2e40], eax */
  w32((uint32_t)(0x10fc2e40), (EAX));
  /* 10fa6f2c mov ecx, dword ptr [0x10fc2e3c] */
  ECX = (r32((uint32_t)(0x10fc2e3c)));
  /* 10fa6f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6f35 mov dword ptr [0x10fc2e3c], ecx */
  w32((uint32_t)(0x10fc2e3c), (ECX));
L_10fa6f3b:;
  /* 10fa6f3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6f3e mov dword ptr [0x10fc2e38], edx */
  w32((uint32_t)(0x10fc2e38), (EDX));
L_10fa6f44:;
  /* 10fa6f44 mov esp, ebp */
  ESP = (EBP);
  /* 10fa6f46 pop ebp */
  EBP = (pop32());
  /* 10fa6f47 ret  */
  ESPCHK(0x10fa6d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f50 @ 0x10fa6f50 (382 bytes, 135 insns) */
void f_10fa6f50(void) {
  FTRACE(0x10fa6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa6f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa6f51 mov ebp, esp */
  EBP = (ESP);
  /* 10fa6f53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa6f55 push 0x10fbf9c0 */
  push32((uint32_t)(0x10fbf9c0u));
  /* 10fa6f5a push 0x10fa0c18 */
  push32((uint32_t)(0x10fa0c18u));
  /* 10fa6f5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fa6f65 push eax */
  push32((uint32_t)(EAX));
  /* 10fa6f66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fa6f6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa6f70 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa6f71 push esi */
  push32((uint32_t)(ESI));
  /* 10fa6f72 push edi */
  push32((uint32_t)(EDI));
  /* 10fa6f73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa6f76 cmp dword ptr [0x10fc3a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6f7d jne 0x10fa6fc2 */
  if (!C.zf) goto L_10fa6fc2;
  /* 10fa6f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6f87 call dword ptr [0x10fc6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6298))), 0x10fa6f8du);
  /* 10fa6f8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa6f8f je 0x10fa6f9d */
  if (C.zf) goto L_10fa6f9d;
  /* 10fa6f91 mov dword ptr [0x10fc3a5c], 1 */
  w32((uint32_t)(0x10fc3a5c), (0x1u));
  /* 10fa6f9b jmp 0x10fa6fc2 */
  goto L_10fa6fc2;
L_10fa6f9d:;
  /* 10fa6f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6fa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa6fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa6fa5 call dword ptr [0x10fc62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b0))), 0x10fa6fabu);
  /* 10fa6fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa6fad je 0x10fa6fbb */
  if (C.zf) goto L_10fa6fbb;
  /* 10fa6faf mov dword ptr [0x10fc3a5c], 2 */
  w32((uint32_t)(0x10fc3a5c), (0x2u));
  /* 10fa6fb9 jmp 0x10fa6fc2 */
  goto L_10fa6fc2;
L_10fa6fbb:;
  /* 10fa6fbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa6fbd jmp 0x10fa70d1 */
  goto L_10fa70d1;
L_10fa6fc2:;
  /* 10fa6fc2 cmp dword ptr [0x10fc3a5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6fc9 jne 0x10fa6fe6 */
  if (!C.zf) goto L_10fa6fe6;
  /* 10fa6fcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa6fce push eax */
  push32((uint32_t)(EAX));
  /* 10fa6fcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa6fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa6fd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa6fd6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa6fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa6fda push eax */
  push32((uint32_t)(EAX));
  /* 10fa6fdb call dword ptr [0x10fc6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6298))), 0x10fa6fe1u);
  /* 10fa6fe1 jmp 0x10fa70d1 */
  goto L_10fa70d1;
L_10fa6fe6:;
  /* 10fa6fe6 cmp dword ptr [0x10fc3a5c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a5c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6fed jne 0x10fa70cf */
  if (!C.zf) goto L_10fa70cf;
  /* 10fa6ff3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa6ff7 jne 0x10fa7002 */
  if (!C.zf) goto L_10fa7002;
  /* 10fa6ff9 mov ecx, dword ptr [0x10fc3910] */
  ECX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa6fff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10fa7002:;
  /* 10fa7002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7009 push edx */
  push32((uint32_t)(EDX));
  /* 10fa700a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa700d push eax */
  push32((uint32_t)(EAX));
  /* 10fa700e call dword ptr [0x10fc62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b0))), 0x10fa7014u);
  /* 10fa7014 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fa7017 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa701b jne 0x10fa7024 */
  if (!C.zf) goto L_10fa7024;
  /* 10fa701d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa701f jmp 0x10fa70d1 */
  goto L_10fa70d1;
L_10fa7024:;
  /* 10fa7024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa702b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa702e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7031 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa7033 call 0x10f9acb0 */
  push32(0x10fa7038u); f_10f9acb0();
  /* 10fa7038 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10fa703b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa703e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa7041 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fa7044 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa704b jmp 0x10fa7064 */
  goto L_10fa7064;
  /* 10fa704d mov eax, 1 */
  EAX = (0x1u);
  /* 10fa7052 ret  */
  ESPCHK(0x10fa6f50u, _esp0);
  ESP += 4; return;
  /* 10fa7053 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa7056 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fa705d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa7064:;
  /* 10fa7064 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7068 jne 0x10fa706e */
  if (!C.zf) goto L_10fa706e;
  /* 10fa706a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa706c jmp 0x10fa70d1 */
  goto L_10fa70d1;
L_10fa706e:;
  /* 10fa706e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa7071 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7072 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7075 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7076 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7079 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa707a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa707d push edx */
  push32((uint32_t)(EDX));
  /* 10fa707e call dword ptr [0x10fc62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b0))), 0x10fa7084u);
  /* 10fa7084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7086 jne 0x10fa708c */
  if (!C.zf) goto L_10fa708c;
  /* 10fa7088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa708a jmp 0x10fa70d1 */
  goto L_10fa70d1;
L_10fa708c:;
  /* 10fa708c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7090 jne 0x10fa70ad */
  if (!C.zf) goto L_10fa70ad;
  /* 10fa7092 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7094 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7096 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa7098 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa709b push eax */
  push32((uint32_t)(EAX));
  /* 10fa709c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa709e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa70a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa70a2 call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa70a8u);
  /* 10fa70a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fa70ab jmp 0x10fa70ca */
  goto L_10fa70ca;
L_10fa70ad:;
  /* 10fa70ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa70b0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa70b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa70b4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa70b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa70b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa70ba push ecx */
  push32((uint32_t)(ECX));
  /* 10fa70bb push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa70bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa70c0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa70c1 call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa70c7u);
  /* 10fa70c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fa70ca:;
  /* 10fa70ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa70cd jmp 0x10fa70d1 */
  goto L_10fa70d1;
L_10fa70cf:;
  /* 10fa70cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa70d1:;
  /* 10fa70d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10fa70d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa70d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fa70de pop edi */
  EDI = (pop32());
  /* 10fa70df pop esi */
  ESI = (pop32());
  /* 10fa70e0 pop ebx */
  EBX = (pop32());
  /* 10fa70e1 mov esp, ebp */
  ESP = (EBP);
  /* 10fa70e3 pop ebp */
  EBP = (pop32());
  /* 10fa70e4 ret  */
  ESPCHK(0x10fa6f50u, _esp0);
  ESP += 4; return;
}

/* FUN_100170f0 @ 0x10fa70f0 (398 bytes, 140 insns) */
void f_10fa70f0(void) {
  FTRACE(0x10fa70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa70f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa70f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa70f5 push 0x10fbf9d0 */
  push32((uint32_t)(0x10fbf9d0u));
  /* 10fa70fa push 0x10fa0c18 */
  push32((uint32_t)(0x10fa0c18u));
  /* 10fa70ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fa7105 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7106 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fa710d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7110 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa7111 push esi */
  push32((uint32_t)(ESI));
  /* 10fa7112 push edi */
  push32((uint32_t)(EDI));
  /* 10fa7113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa7116 cmp dword ptr [0x10fc3a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa711d jne 0x10fa7162 */
  if (!C.zf) goto L_10fa7162;
  /* 10fa711f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7121 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7123 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa7125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7127 call dword ptr [0x10fc6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6298))), 0x10fa712du);
  /* 10fa712d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa712f je 0x10fa713d */
  if (C.zf) goto L_10fa713d;
  /* 10fa7131 mov dword ptr [0x10fc3a60], 1 */
  w32((uint32_t)(0x10fc3a60), (0x1u));
  /* 10fa713b jmp 0x10fa7162 */
  goto L_10fa7162;
L_10fa713d:;
  /* 10fa713d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa713f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7141 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa7143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7145 call dword ptr [0x10fc62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b0))), 0x10fa714bu);
  /* 10fa714b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa714d je 0x10fa715b */
  if (C.zf) goto L_10fa715b;
  /* 10fa714f mov dword ptr [0x10fc3a60], 2 */
  w32((uint32_t)(0x10fc3a60), (0x2u));
  /* 10fa7159 jmp 0x10fa7162 */
  goto L_10fa7162;
L_10fa715b:;
  /* 10fa715b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa715d jmp 0x10fa7281 */
  goto L_10fa7281;
L_10fa7162:;
  /* 10fa7162 cmp dword ptr [0x10fc3a60], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a60))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7169 jne 0x10fa7186 */
  if (!C.zf) goto L_10fa7186;
  /* 10fa716b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa716e push eax */
  push32((uint32_t)(EAX));
  /* 10fa716f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa7172 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7173 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7176 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa717a push eax */
  push32((uint32_t)(EAX));
  /* 10fa717b call dword ptr [0x10fc62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b0))), 0x10fa7181u);
  /* 10fa7181 jmp 0x10fa7281 */
  goto L_10fa7281;
L_10fa7186:;
  /* 10fa7186 cmp dword ptr [0x10fc3a60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa718d jne 0x10fa727f */
  if (!C.zf) goto L_10fa727f;
  /* 10fa7193 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7197 jne 0x10fa71a2 */
  if (!C.zf) goto L_10fa71a2;
  /* 10fa7199 mov ecx, dword ptr [0x10fc3910] */
  ECX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa719f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10fa71a2:;
  /* 10fa71a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa71a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa71a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa71a9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa71aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa71ad push eax */
  push32((uint32_t)(EAX));
  /* 10fa71ae call dword ptr [0x10fc6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6298))), 0x10fa71b4u);
  /* 10fa71b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fa71b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa71bb jne 0x10fa71c4 */
  if (!C.zf) goto L_10fa71c4;
  /* 10fa71bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa71bf jmp 0x10fa7281 */
  goto L_10fa7281;
L_10fa71c4:;
  /* 10fa71c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa71cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa71ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa71d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa71d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa71d5 call 0x10f9acb0 */
  push32(0x10fa71dau); f_10f9acb0();
  /* 10fa71da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10fa71dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa71e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa71e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fa71e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa71ed jmp 0x10fa7206 */
  goto L_10fa7206;
  /* 10fa71ef mov eax, 1 */
  EAX = (0x1u);
  /* 10fa71f4 ret  */
  ESPCHK(0x10fa70f0u, _esp0);
  ESP += 4; return;
  /* 10fa71f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa71f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fa71ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa7206:;
  /* 10fa7206 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa720a jne 0x10fa7210 */
  if (!C.zf) goto L_10fa7210;
  /* 10fa720c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa720e jmp 0x10fa7281 */
  goto L_10fa7281;
L_10fa7210:;
  /* 10fa7210 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa7213 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7214 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7217 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7218 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa721b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa721c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa721f push edx */
  push32((uint32_t)(EDX));
  /* 10fa7220 call dword ptr [0x10fc6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6298))), 0x10fa7226u);
  /* 10fa7226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7228 jne 0x10fa722e */
  if (!C.zf) goto L_10fa722e;
  /* 10fa722a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa722c jmp 0x10fa7281 */
  goto L_10fa7281;
L_10fa722e:;
  /* 10fa722e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7232 jne 0x10fa7256 */
  if (!C.zf) goto L_10fa7256;
  /* 10fa7234 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7236 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7238 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa723a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa723c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa723e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7241 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7242 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa7247 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa724a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa724b call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa7251u);
  /* 10fa7251 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fa7254 jmp 0x10fa727a */
  goto L_10fa727a;
L_10fa7256:;
  /* 10fa7256 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7258 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa725a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa725d push edx */
  push32((uint32_t)(EDX));
  /* 10fa725e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa7261 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7262 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa7264 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7267 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7268 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa726d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa7270 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7271 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa7277u);
  /* 10fa7277 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fa727a:;
  /* 10fa727a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa727d jmp 0x10fa7281 */
  goto L_10fa7281;
L_10fa727f:;
  /* 10fa727f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa7281:;
  /* 10fa7281 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10fa7284 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7287 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fa728e pop edi */
  EDI = (pop32());
  /* 10fa728f pop esi */
  ESI = (pop32());
  /* 10fa7290 pop ebx */
  EBX = (pop32());
  /* 10fa7291 mov esp, ebp */
  ESP = (EBP);
  /* 10fa7293 pop ebp */
  EBP = (pop32());
  /* 10fa7294 ret  */
  ESPCHK(0x10fa70f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100172a0 @ 0x10fa72a0 (11 bytes, 6 insns) */
void f_10fa72a0(void) {
  FTRACE(0x10fa72a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa72a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa72a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa72a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa72a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa72a9 pop ebp */
  EBP = (pop32());
  /* 10fa72aa ret  */
  ESPCHK(0x10fa72a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100172b0 @ 0x10fa72b0 (147 bytes, 43 insns) */
void f_10fa72b0(void) {
  FTRACE(0x10fa72b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa72b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa72b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa72b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa72b4 cmp dword ptr [0x10fc3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa72bb jne 0x10fa72d7 */
  if (!C.zf) goto L_10fa72d7;
  /* 10fa72bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa72c1 jl 0x10fa72d2 */
  if ((C.sf!=C.of)) goto L_10fa72d2;
  /* 10fa72c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa72c7 jg 0x10fa72d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa72d2;
  /* 10fa72c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa72cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa72cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fa72d2:;
  /* 10fa72d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa72d5 jmp 0x10fa733f */
  goto L_10fa733f;
L_10fa72d7:;
  /* 10fa72d7 push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa72dc call dword ptr [0x10fc6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6330))), 0x10fa72e2u);
  /* 10fa72e2 cmp dword ptr [0x10fc3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa72e9 je 0x10fa7309 */
  if (C.zf) goto L_10fa7309;
  /* 10fa72eb push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa72f0 call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10fa72f6u);
  /* 10fa72f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa72f8 call 0x10f9b510 */
  push32(0x10fa72fdu); f_10f9b510();
  /* 10fa72fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7300 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa7307 jmp 0x10fa7310 */
  goto L_10fa7310;
L_10fa7309:;
  /* 10fa7309 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fa7310:;
  /* 10fa7310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7313 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7314 call 0x10fa7350 */
  push32(0x10fa7319u); f_10fa7350();
  /* 10fa7319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa731c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa731f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7323 je 0x10fa7331 */
  if (C.zf) goto L_10fa7331;
  /* 10fa7325 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa7327 call 0x10f9b5b0 */
  push32(0x10fa732cu); f_10f9b5b0();
  /* 10fa732c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa732f jmp 0x10fa733c */
  goto L_10fa733c;
L_10fa7331:;
  /* 10fa7331 push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa7336 call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10fa733cu);
L_10fa733c:;
  /* 10fa733c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10fa733f:;
  /* 10fa733f mov esp, ebp */
  ESP = (EBP);
  /* 10fa7341 pop ebp */
  EBP = (pop32());
  /* 10fa7342 ret  */
  ESPCHK(0x10fa72b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x10fa7350 (299 bytes, 91 insns) */
void f_10fa7350(void) {
  FTRACE(0x10fa7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7350 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7351 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7353 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7356 cmp dword ptr [0x10fc3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa735d jne 0x10fa737c */
  if (!C.zf) goto L_10fa737c;
  /* 10fa735f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7363 jl 0x10fa7374 */
  if ((C.sf!=C.of)) goto L_10fa7374;
  /* 10fa7365 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7369 jg 0x10fa7374 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa7374;
  /* 10fa736b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa736e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7371 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fa7374:;
  /* 10fa7374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7377 jmp 0x10fa7477 */
  goto L_10fa7477;
L_10fa737c:;
  /* 10fa737c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7383 jge 0x10fa73c3 */
  if ((C.sf==C.of)) goto L_10fa73c3;
  /* 10fa7385 cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa738c jle 0x10fa73a1 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa73a1;
  /* 10fa738e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa7390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7393 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7394 call 0x10f9db20 */
  push32(0x10fa7399u); f_10f9db20();
  /* 10fa7399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa739c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fa739f jmp 0x10fa73b5 */
  goto L_10fa73b5;
L_10fa73a1:;
  /* 10fa73a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa73a4 mov eax, dword ptr [0x10fc1c98] */
  EAX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa73a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa73ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10fa73af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa73b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fa73b5:;
  /* 10fa73b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa73b9 jne 0x10fa73c3 */
  if (!C.zf) goto L_10fa73c3;
  /* 10fa73bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa73be jmp 0x10fa7477 */
  goto L_10fa7477;
L_10fa73c3:;
  /* 10fa73c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa73c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10fa73c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa73cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa73d5 mov eax, dword ptr [0x10fc1c98] */
  EAX = (r32((uint32_t)(0x10fc1c98)));
  /* 10fa73da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa73dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10fa73e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa73e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa73e8 je 0x10fa740c */
  if (C.zf) goto L_10fa740c;
  /* 10fa73ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa73ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10fa73f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa73f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10fa73f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fa73fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10fa73ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10fa7403 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10fa740a jmp 0x10fa741d */
  goto L_10fa741d;
L_10fa740c:;
  /* 10fa740c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fa740f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10fa7412 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10fa7416 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10fa741d:;
  /* 10fa741d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa741f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7421 push 3 */
  push32((uint32_t)(0x3u));
  /* 10fa7423 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10fa7426 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa742a push eax */
  push32((uint32_t)(EAX));
  /* 10fa742b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10fa742e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa742f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fa7434 mov edx, dword ptr [0x10fc3900] */
  EDX = (r32((uint32_t)(0x10fc3900)));
  /* 10fa743a push edx */
  push32((uint32_t)(EDX));
  /* 10fa743b call 0x10f9ff00 */
  push32(0x10fa7440u); f_10f9ff00();
  /* 10fa7440 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa7446 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa744a jne 0x10fa7451 */
  if (!C.zf) goto L_10fa7451;
  /* 10fa744c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa744f jmp 0x10fa7477 */
  goto L_10fa7477;
L_10fa7451:;
  /* 10fa7451 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7455 jne 0x10fa7461 */
  if (!C.zf) goto L_10fa7461;
  /* 10fa7457 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa745a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa745f jmp 0x10fa7477 */
  goto L_10fa7477;
L_10fa7461:;
  /* 10fa7461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7464 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7469 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10fa746c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa7472 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10fa7475 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10fa7477:;
  /* 10fa7477 mov esp, ebp */
  ESP = (EBP);
  /* 10fa7479 pop ebp */
  EBP = (pop32());
  /* 10fa747a ret  */
  ESPCHK(0x10fa7350u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10fa7480 (52 bytes, 19 insns) */
void f_10fa7480(void) {
  FTRACE(0x10fa7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7480 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fa7484 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fa7488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa748a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10fa748e jne 0x10fa7499 */
  if (!C.zf) goto L_10fa7499;
  /* 10fa7490 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10fa7494 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fa7496 ret 0x10 */
  ESPCHK(0x10fa7480u, _esp0);
  ESP += 20; return;
L_10fa7499:;
  /* 10fa7499 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa749a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fa749c mov ebx, eax */
  EBX = (EAX);
  /* 10fa749e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fa74a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fa74a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa74a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fa74ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fa74ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa74b0 pop ebx */
  EBX = (pop32());
  /* 10fa74b1 ret 0x10 */
  ESPCHK(0x10fa7480u, _esp0);
  ESP += 20; return;
}

/* FUN_100174c0 @ 0x10fa74c0 (46 bytes, 18 insns) */
void f_10fa74c0(void) {
  FTRACE(0x10fa74c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa74c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa74c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa74c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa74c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa74c6 call 0x10f9b510 */
  push32(0x10fa74cbu); f_10f9b510();
  /* 10fa74cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa74ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa74d1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa74d2 call 0x10fa74f0 */
  push32(0x10fa74d7u); f_10fa74f0();
  /* 10fa74d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa74da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa74dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10fa74df call 0x10f9b5b0 */
  push32(0x10fa74e4u); f_10f9b5b0();
  /* 10fa74e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa74e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa74ea mov esp, ebp */
  ESP = (EBP);
  /* 10fa74ec pop ebp */
  EBP = (pop32());
  /* 10fa74ed ret  */
  ESPCHK(0x10fa74c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10fa74f0 (198 bytes, 69 insns) */
void f_10fa74f0(void) {
  FTRACE(0x10fa74f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa74f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa74f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa74f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa74f6 mov eax, dword ptr [0x10fc371c] */
  EAX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa74fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa74fe cmp dword ptr [0x10fc5220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc5220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7505 jne 0x10fa750e */
  if (!C.zf) goto L_10fa750e;
  /* 10fa7507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7509 jmp 0x10fa75b2 */
  goto L_10fa75b2;
L_10fa750e:;
  /* 10fa750e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7512 jne 0x10fa7536 */
  if (!C.zf) goto L_10fa7536;
  /* 10fa7514 cmp dword ptr [0x10fc3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa751b je 0x10fa7536 */
  if (C.zf) goto L_10fa7536;
  /* 10fa751d call 0x10fa7610 */
  push32(0x10fa7522u); f_10fa7610();
  /* 10fa7522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7524 je 0x10fa752d */
  if (C.zf) goto L_10fa752d;
  /* 10fa7526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7528 jmp 0x10fa75b2 */
  goto L_10fa75b2;
L_10fa752d:;
  /* 10fa752d mov ecx, dword ptr [0x10fc371c] */
  ECX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa7533 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fa7536:;
  /* 10fa7536 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa753a je 0x10fa75b0 */
  if (C.zf) goto L_10fa75b0;
  /* 10fa753c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7540 je 0x10fa75b0 */
  if (C.zf) goto L_10fa75b0;
  /* 10fa7542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7545 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7546 call 0x10f9a940 */
  push32(0x10fa754bu); f_10f9a940();
  /* 10fa754b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa754e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa7551:;
  /* 10fa7551 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7554 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7557 je 0x10fa75b0 */
  if (C.zf) goto L_10fa75b0;
  /* 10fa7559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa755c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa755e push edx */
  push32((uint32_t)(EDX));
  /* 10fa755f call 0x10f9a940 */
  push32(0x10fa7564u); f_10f9a940();
  /* 10fa7564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7567 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa756a jbe 0x10fa75a5 */
  if ((C.cf||C.zf)) goto L_10fa75a5;
  /* 10fa756c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa756f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa7571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7574 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10fa7578 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa757b jne 0x10fa75a5 */
  if (!C.zf) goto L_10fa75a5;
  /* 10fa757d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7580 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7584 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7585 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7588 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa758a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa758b call 0x10fa75c0 */
  push32(0x10fa7590u); f_10fa75c0();
  /* 10fa7590 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7595 jne 0x10fa75a5 */
  if (!C.zf) goto L_10fa75a5;
  /* 10fa7597 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa759a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa759f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10fa75a3 jmp 0x10fa75b2 */
  goto L_10fa75b2;
L_10fa75a5:;
  /* 10fa75a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa75a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa75ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa75ae jmp 0x10fa7551 */
  goto L_10fa7551;
L_10fa75b0:;
  /* 10fa75b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa75b2:;
  /* 10fa75b2 mov esp, ebp */
  ESP = (EBP);
  /* 10fa75b4 pop ebp */
  EBP = (pop32());
  /* 10fa75b5 ret  */
  ESPCHK(0x10fa74f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10fa75c0 (79 bytes, 32 insns) */
void f_10fa75c0(void) {
  FTRACE(0x10fa75c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa75c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa75c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa75c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa75c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa75c8 jne 0x10fa75ce */
  if (!C.zf) goto L_10fa75ce;
  /* 10fa75ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa75cc jmp 0x10fa760b */
  goto L_10fa760b;
L_10fa75ce:;
  /* 10fa75ce mov eax, dword ptr [0x10fc4de4] */
  EAX = (r32((uint32_t)(0x10fc4de4)));
  /* 10fa75d3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa75d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa75d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa75d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa75db push edx */
  push32((uint32_t)(EDX));
  /* 10fa75dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa75df push eax */
  push32((uint32_t)(EAX));
  /* 10fa75e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa75e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa75e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa75e6 mov edx, dword ptr [0x10fc5084] */
  EDX = (r32((uint32_t)(0x10fc5084)));
  /* 10fa75ec push edx */
  push32((uint32_t)(EDX));
  /* 10fa75ed call 0x10fa76c0 */
  push32(0x10fa75f2u); f_10fa76c0();
  /* 10fa75f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa75f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa75f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa75fc jne 0x10fa7605 */
  if (!C.zf) goto L_10fa7605;
  /* 10fa75fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10fa7603 jmp 0x10fa760b */
  goto L_10fa760b;
L_10fa7605:;
  /* 10fa7605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7608 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10fa760b:;
  /* 10fa760b mov esp, ebp */
  ESP = (EBP);
  /* 10fa760d pop ebp */
  EBP = (pop32());
  /* 10fa760e ret  */
  ESPCHK(0x10fa75c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017610 @ 0x10fa7610 (174 bytes, 66 insns) */
void f_10fa7610(void) {
  FTRACE(0x10fa7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7610 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7611 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7616 mov eax, dword ptr [0x10fc3724] */
  EAX = (r32((uint32_t)(0x10fc3724)));
  /* 10fa761b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa761e:;
  /* 10fa761e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7621 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7624 je 0x10fa76b8 */
  if (C.zf) goto L_10fa76b8;
  /* 10fa762a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa762c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa762e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7630 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7632 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa7634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7637 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa7639 push eax */
  push32((uint32_t)(EAX));
  /* 10fa763a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa763c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa763e call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa7644u);
  /* 10fa7644 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa7647 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa764b jne 0x10fa7652 */
  if (!C.zf) goto L_10fa7652;
  /* 10fa764d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7650 jmp 0x10fa76ba */
  goto L_10fa76ba;
L_10fa7652:;
  /* 10fa7652 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10fa7654 push 0x10fbf9dc */
  push32((uint32_t)(0x10fbf9dcu));
  /* 10fa7659 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa765b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa765e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa765f call 0x10f97b10 */
  push32(0x10fa7664u); f_10f97b10();
  /* 10fa7664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7667 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa766a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa766e jne 0x10fa7675 */
  if (!C.zf) goto L_10fa7675;
  /* 10fa7670 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7673 jmp 0x10fa76ba */
  goto L_10fa76ba;
L_10fa7675:;
  /* 10fa7675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa767c push edx */
  push32((uint32_t)(EDX));
  /* 10fa767d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7680 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7681 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa7683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7686 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa7688 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa768b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa768d call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa7693u);
  /* 10fa7693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7695 jne 0x10fa769c */
  if (!C.zf) goto L_10fa769c;
  /* 10fa7697 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa769a jmp 0x10fa76ba */
  goto L_10fa76ba;
L_10fa769c:;
  /* 10fa769c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa769e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa76a1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa76a2 call 0x10fa7b10 */
  push32(0x10fa76a7u); f_10fa7b10();
  /* 10fa76a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa76aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa76ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa76b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa76b3 jmp 0x10fa761e */
  goto L_10fa761e;
L_10fa76b8:;
  /* 10fa76b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa76ba:;
  /* 10fa76ba mov esp, ebp */
  ESP = (EBP);
  /* 10fa76bc pop ebp */
  EBP = (pop32());
  /* 10fa76bd ret  */
  ESPCHK(0x10fa7610u, _esp0);
  ESP += 4; return;
}

/* FUN_100176c0 @ 0x10fa76c0 (970 bytes, 340 insns) */
void f_10fa76c0(void) {
  FTRACE(0x10fa76c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa76c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa76c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa76c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fa76c5 push 0x10fbfa30 */
  push32((uint32_t)(0x10fbfa30u));
  /* 10fa76ca push 0x10fa0c18 */
  push32((uint32_t)(0x10fa0c18u));
  /* 10fa76cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fa76d5 push eax */
  push32((uint32_t)(EAX));
  /* 10fa76d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fa76dd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa76e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa76e1 push esi */
  push32((uint32_t)(ESI));
  /* 10fa76e2 push edi */
  push32((uint32_t)(EDI));
  /* 10fa76e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa76e6 cmp dword ptr [0x10fc3a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa76ed jne 0x10fa7746 */
  if (!C.zf) goto L_10fa7746;
  /* 10fa76ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa76f1 push 0x10fbf08c */
  push32((uint32_t)(0x10fbf08cu));
  /* 10fa76f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa76f8 push 0x10fbf08c */
  push32((uint32_t)(0x10fbf08cu));
  /* 10fa76fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa76ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7701 call dword ptr [0x10fc6294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6294))), 0x10fa7707u);
  /* 10fa7707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7709 je 0x10fa7717 */
  if (C.zf) goto L_10fa7717;
  /* 10fa770b mov dword ptr [0x10fc3a64], 1 */
  w32((uint32_t)(0x10fc3a64), (0x1u));
  /* 10fa7715 jmp 0x10fa7746 */
  goto L_10fa7746;
L_10fa7717:;
  /* 10fa7717 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa7719 push 0x10fbf088 */
  push32((uint32_t)(0x10fbf088u));
  /* 10fa771e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa7720 push 0x10fbf088 */
  push32((uint32_t)(0x10fbf088u));
  /* 10fa7725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7729 call dword ptr [0x10fc62a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62a0))), 0x10fa772fu);
  /* 10fa772f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7731 je 0x10fa773f */
  if (C.zf) goto L_10fa773f;
  /* 10fa7733 mov dword ptr [0x10fc3a64], 2 */
  w32((uint32_t)(0x10fc3a64), (0x2u));
  /* 10fa773d jmp 0x10fa7746 */
  goto L_10fa7746;
L_10fa773f:;
  /* 10fa773f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7741 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7746:;
  /* 10fa7746 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa774a jle 0x10fa775f */
  if ((C.zf||C.sf!=C.of)) goto L_10fa775f;
  /* 10fa774c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa774f push eax */
  push32((uint32_t)(EAX));
  /* 10fa7750 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa7753 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7754 call 0x10fa7ac0 */
  push32(0x10fa7759u); f_10fa7ac0();
  /* 10fa7759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa775c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10fa775f:;
  /* 10fa775f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7763 jle 0x10fa7778 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa7778;
  /* 10fa7765 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa7768 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7769 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa776c push eax */
  push32((uint32_t)(EAX));
  /* 10fa776d call 0x10fa7ac0 */
  push32(0x10fa7772u); f_10fa7ac0();
  /* 10fa7772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7775 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10fa7778:;
  /* 10fa7778 cmp dword ptr [0x10fc3a64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa777f jne 0x10fa77a4 */
  if (!C.zf) goto L_10fa77a4;
  /* 10fa7781 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa7784 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7785 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa7788 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7789 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa778c push eax */
  push32((uint32_t)(EAX));
  /* 10fa778d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa7790 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7791 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7794 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7798 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7799 call dword ptr [0x10fc62a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62a0))), 0x10fa779fu);
  /* 10fa779f jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa77a4:;
  /* 10fa77a4 cmp dword ptr [0x10fc3a64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77ab jne 0x10fa7aa2 */
  if (!C.zf) goto L_10fa7aa2;
  /* 10fa77b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77b5 jne 0x10fa77c0 */
  if (!C.zf) goto L_10fa77c0;
  /* 10fa77b7 mov ecx, dword ptr [0x10fc3910] */
  ECX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa77bd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10fa77c0:;
  /* 10fa77c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77c4 je 0x10fa77d0 */
  if (C.zf) goto L_10fa77d0;
  /* 10fa77c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77ca jne 0x10fa794c */
  if (!C.zf) goto L_10fa794c;
L_10fa77d0:;
  /* 10fa77d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa77d3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77d6 jne 0x10fa77e2 */
  if (!C.zf) goto L_10fa77e2;
  /* 10fa77d8 mov eax, 2 */
  EAX = (0x2u);
  /* 10fa77dd jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa77e2:;
  /* 10fa77e2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77e6 jle 0x10fa77f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa77f2;
  /* 10fa77e8 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa77ed jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa77f2:;
  /* 10fa77f2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa77f6 jle 0x10fa7802 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa7802;
  /* 10fa77f8 mov eax, 3 */
  EAX = (0x3u);
  /* 10fa77fd jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7802:;
  /* 10fa7802 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10fa7805 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7806 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa7809 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa780a call dword ptr [0x10fc62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62ec))), 0x10fa7810u);
  /* 10fa7810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7812 jne 0x10fa781b */
  if (!C.zf) goto L_10fa781b;
  /* 10fa7814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7816 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa781b:;
  /* 10fa781b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa781f jne 0x10fa7827 */
  if (!C.zf) goto L_10fa7827;
  /* 10fa7821 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7825 je 0x10fa7854 */
  if (C.zf) goto L_10fa7854;
L_10fa7827:;
  /* 10fa7827 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa782b jne 0x10fa7833 */
  if (!C.zf) goto L_10fa7833;
  /* 10fa782d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7831 je 0x10fa7854 */
  if (C.zf) goto L_10fa7854;
L_10fa7833:;
  /* 10fa7833 push 0x10fbf9f0 */
  push32((uint32_t)(0x10fbf9f0u));
  /* 10fa7838 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa783a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10fa783f push 0x10fbf9e8 */
  push32((uint32_t)(0x10fbf9e8u));
  /* 10fa7844 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7846 call 0x10f96bd0 */
  push32(0x10fa784bu); f_10f96bd0();
  /* 10fa784b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa784e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7851 jne 0x10fa7854 */
  if (!C.zf) goto L_10fa7854;
  /* 10fa7853 int3  */
  x86_unimpl("int3 @ 0x10fa7853");
L_10fa7854:;
  /* 10fa7854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa7856 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7858 jne 0x10fa781b */
  if (!C.zf) goto L_10fa781b;
  /* 10fa785a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa785e jle 0x10fa78d3 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa78d3;
  /* 10fa7860 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7864 jae 0x10fa7870 */
  if (!C.cf) goto L_10fa7870;
  /* 10fa7866 mov eax, 3 */
  EAX = (0x3u);
  /* 10fa786b jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7870:;
  /* 10fa7870 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10fa7873 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10fa7876 jmp 0x10fa7881 */
  goto L_10fa7881;
L_10fa7878:;
  /* 10fa7878 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa787b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa787e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10fa7881:;
  /* 10fa7881 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa7884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7886 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa7888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa788a je 0x10fa78c9 */
  if (C.zf) goto L_10fa78c9;
  /* 10fa788c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa788f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa7891 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10fa7894 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7896 je 0x10fa78c9 */
  if (C.zf) goto L_10fa78c9;
  /* 10fa7898 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa789b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa789d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa789f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa78a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa78a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa78a6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa78a8 jl 0x10fa78c7 */
  if ((C.sf!=C.of)) goto L_10fa78c7;
  /* 10fa78aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa78ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa78af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa78b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa78b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa78b6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fa78b9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa78bb jg 0x10fa78c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa78c7;
  /* 10fa78bd mov eax, 2 */
  EAX = (0x2u);
  /* 10fa78c2 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa78c7:;
  /* 10fa78c7 jmp 0x10fa7878 */
  goto L_10fa7878;
L_10fa78c9:;
  /* 10fa78c9 mov eax, 3 */
  EAX = (0x3u);
  /* 10fa78ce jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa78d3:;
  /* 10fa78d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa78d7 jle 0x10fa794c */
  if ((C.zf||C.sf!=C.of)) goto L_10fa794c;
  /* 10fa78d9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa78dd jae 0x10fa78e9 */
  if (!C.cf) goto L_10fa78e9;
  /* 10fa78df mov eax, 1 */
  EAX = (0x1u);
  /* 10fa78e4 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa78e9:;
  /* 10fa78e9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10fa78ec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10fa78ef jmp 0x10fa78fa */
  goto L_10fa78fa;
L_10fa78f1:;
  /* 10fa78f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa78f4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa78f7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10fa78fa:;
  /* 10fa78fa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa78fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa78ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa7901 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7903 je 0x10fa7942 */
  if (C.zf) goto L_10fa7942;
  /* 10fa7905 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa7908 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa790a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fa790d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa790f je 0x10fa7942 */
  if (C.zf) goto L_10fa7942;
  /* 10fa7911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa7914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7916 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa7918 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa791b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa791d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa791f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7921 jl 0x10fa7940 */
  if ((C.sf!=C.of)) goto L_10fa7940;
  /* 10fa7923 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa7926 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa7928 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa792a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10fa792d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa792f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fa7932 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7934 jg 0x10fa7940 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa7940;
  /* 10fa7936 mov eax, 2 */
  EAX = (0x2u);
  /* 10fa793b jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7940:;
  /* 10fa7940 jmp 0x10fa78f1 */
  goto L_10fa78f1;
L_10fa7942:;
  /* 10fa7942 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa7947 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa794c:;
  /* 10fa794c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa794e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa7950 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa7953 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7954 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa7957 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7958 push 9 */
  push32((uint32_t)(0x9u));
  /* 10fa795a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa795d push eax */
  push32((uint32_t)(EAX));
  /* 10fa795e call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa7964u);
  /* 10fa7964 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fa7967 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa796b jne 0x10fa7974 */
  if (!C.zf) goto L_10fa7974;
  /* 10fa796d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa796f jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7974:;
  /* 10fa7974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa797b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa797e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa7980 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7983 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa7985 call 0x10f9acb0 */
  push32(0x10fa798au); f_10f9acb0();
  /* 10fa798a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10fa798d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa7990 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10fa7993 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fa7996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa799d jmp 0x10fa79b6 */
  goto L_10fa79b6;
  /* 10fa799f mov eax, 1 */
  EAX = (0x1u);
  /* 10fa79a4 ret  */
  ESPCHK(0x10fa76c0u, _esp0);
  ESP += 4; return;
  /* 10fa79a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa79a8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fa79af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa79b6:;
  /* 10fa79b6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa79ba jne 0x10fa79c3 */
  if (!C.zf) goto L_10fa79c3;
  /* 10fa79bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa79be jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa79c3:;
  /* 10fa79c3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa79c6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa79c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa79ca push eax */
  push32((uint32_t)(EAX));
  /* 10fa79cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa79ce push ecx */
  push32((uint32_t)(ECX));
  /* 10fa79cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa79d2 push edx */
  push32((uint32_t)(EDX));
  /* 10fa79d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa79d5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa79d8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa79d9 call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa79dfu);
  /* 10fa79df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa79e1 jne 0x10fa79ea */
  if (!C.zf) goto L_10fa79ea;
  /* 10fa79e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa79e5 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa79ea:;
  /* 10fa79ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa79ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa79ee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa79f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa79f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa79f5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa79f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10fa79f8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa79fb push eax */
  push32((uint32_t)(EAX));
  /* 10fa79fc call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa7a02u);
  /* 10fa7a02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fa7a05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7a09 jne 0x10fa7a12 */
  if (!C.zf) goto L_10fa7a12;
  /* 10fa7a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7a0d jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7a12:;
  /* 10fa7a12 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa7a19 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7a1c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa7a1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7a21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa7a23 call 0x10f9acb0 */
  push32(0x10fa7a28u); f_10f9acb0();
  /* 10fa7a28 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10fa7a2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa7a2e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10fa7a31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10fa7a34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa7a3b jmp 0x10fa7a54 */
  goto L_10fa7a54;
  /* 10fa7a3d mov eax, 1 */
  EAX = (0x1u);
  /* 10fa7a42 ret  */
  ESPCHK(0x10fa76c0u, _esp0);
  ESP += 4; return;
  /* 10fa7a43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa7a46 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10fa7a4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa7a54:;
  /* 10fa7a54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7a58 jne 0x10fa7a5e */
  if (!C.zf) goto L_10fa7a5e;
  /* 10fa7a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7a5c jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7a5e:;
  /* 10fa7a5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7a61 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7a62 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa7a65 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7a66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa7a69 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7a6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa7a6d push edx */
  push32((uint32_t)(EDX));
  /* 10fa7a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa7a70 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa7a73 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7a74 call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa7a7au);
  /* 10fa7a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7a7c jne 0x10fa7a82 */
  if (!C.zf) goto L_10fa7a82;
  /* 10fa7a7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7a80 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7a82:;
  /* 10fa7a82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa7a85 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7a86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa7a89 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7a8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa7a8d push eax */
  push32((uint32_t)(EAX));
  /* 10fa7a8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa7a91 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7a92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7a95 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7a99 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7a9a call dword ptr [0x10fc6294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6294))), 0x10fa7aa0u);
  /* 10fa7aa0 jmp 0x10fa7aa4 */
  goto L_10fa7aa4;
L_10fa7aa2:;
  /* 10fa7aa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa7aa4:;
  /* 10fa7aa4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10fa7aa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7aaa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fa7ab1 pop edi */
  EDI = (pop32());
  /* 10fa7ab2 pop esi */
  ESI = (pop32());
  /* 10fa7ab3 pop ebx */
  EBX = (pop32());
  /* 10fa7ab4 mov esp, ebp */
  ESP = (EBP);
  /* 10fa7ab6 pop ebp */
  EBP = (pop32());
  /* 10fa7ab7 ret  */
  ESPCHK(0x10fa76c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ac0 @ 0x10fa7ac0 (80 bytes, 32 insns) */
void f_10fa7ac0(void) {
  FTRACE(0x10fa7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7ac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7ac9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa7acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7acf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa7ad2:;
  /* 10fa7ad2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7ad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7ad8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7adb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa7ade test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7ae0 je 0x10fa7af7 */
  if (C.zf) goto L_10fa7af7;
  /* 10fa7ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7ae5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa7ae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7aea je 0x10fa7af7 */
  if (C.zf) goto L_10fa7af7;
  /* 10fa7aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7aef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7af2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa7af5 jmp 0x10fa7ad2 */
  goto L_10fa7ad2;
L_10fa7af7:;
  /* 10fa7af7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7afa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa7afd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7aff jne 0x10fa7b09 */
  if (!C.zf) goto L_10fa7b09;
  /* 10fa7b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7b04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7b07 jmp 0x10fa7b0c */
  goto L_10fa7b0c;
L_10fa7b09:;
  /* 10fa7b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10fa7b0c:;
  /* 10fa7b0c mov esp, ebp */
  ESP = (EBP);
  /* 10fa7b0e pop ebp */
  EBP = (pop32());
  /* 10fa7b0f ret  */
  ESPCHK(0x10fa7ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b10 @ 0x10fa7b10 (736 bytes, 224 insns) */
void f_10fa7b10(void) {
  FTRACE(0x10fa7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7b11 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7b13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7b16 push esi */
  push32((uint32_t)(ESI));
  /* 10fa7b17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b1b je 0x10fa7b3c */
  if (C.zf) goto L_10fa7b3c;
  /* 10fa7b1d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10fa7b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7b22 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7b23 call 0x10fa7f60 */
  push32(0x10fa7b28u); f_10fa7f60();
  /* 10fa7b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7b2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fa7b2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b32 je 0x10fa7b3c */
  if (C.zf) goto L_10fa7b3c;
  /* 10fa7b34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7b37 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b3a jne 0x10fa7b44 */
  if (!C.zf) goto L_10fa7b44;
L_10fa7b3c:;
  /* 10fa7b3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7b3f jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7b44:;
  /* 10fa7b44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa7b47 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fa7b4b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa7b4d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7b4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10fa7b50 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa7b53 mov ecx, dword ptr [0x10fc371c] */
  ECX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa7b59 cmp ecx, dword ptr [0x10fc3720] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc3720))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b5f jne 0x10fa7b75 */
  if (!C.zf) goto L_10fa7b75;
  /* 10fa7b61 mov edx, dword ptr [0x10fc371c] */
  EDX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa7b67 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7b68 call 0x10fa7e70 */
  push32(0x10fa7b6du); f_10fa7e70();
  /* 10fa7b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7b70 mov dword ptr [0x10fc371c], eax */
  w32((uint32_t)(0x10fc371c), (EAX));
L_10fa7b75:;
  /* 10fa7b75 cmp dword ptr [0x10fc371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b7c jne 0x10fa7c35 */
  if (!C.zf) goto L_10fa7c35;
  /* 10fa7b82 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b86 je 0x10fa7ba7 */
  if (C.zf) goto L_10fa7ba7;
  /* 10fa7b88 cmp dword ptr [0x10fc3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7b8f je 0x10fa7ba7 */
  if (C.zf) goto L_10fa7ba7;
  /* 10fa7b91 call 0x10fa7610 */
  push32(0x10fa7b96u); f_10fa7610();
  /* 10fa7b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7b98 je 0x10fa7ba2 */
  if (C.zf) goto L_10fa7ba2;
  /* 10fa7b9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7b9d jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7ba2:;
  /* 10fa7ba2 jmp 0x10fa7c35 */
  goto L_10fa7c35;
L_10fa7ba7:;
  /* 10fa7ba7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7bab je 0x10fa7bb4 */
  if (C.zf) goto L_10fa7bb4;
  /* 10fa7bad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7baf jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7bb4:;
  /* 10fa7bb4 cmp dword ptr [0x10fc371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7bbb jne 0x10fa7bf4 */
  if (!C.zf) goto L_10fa7bf4;
  /* 10fa7bbd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10fa7bc2 push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7bc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa7bcb call 0x10f97b10 */
  push32(0x10fa7bd0u); f_10f97b10();
  /* 10fa7bd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7bd3 mov dword ptr [0x10fc371c], eax */
  w32((uint32_t)(0x10fc371c), (EAX));
  /* 10fa7bd8 cmp dword ptr [0x10fc371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7bdf jne 0x10fa7be9 */
  if (!C.zf) goto L_10fa7be9;
  /* 10fa7be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7be4 jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7be9:;
  /* 10fa7be9 mov eax, dword ptr [0x10fc371c] */
  EAX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa7bee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10fa7bf4:;
  /* 10fa7bf4 cmp dword ptr [0x10fc3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7bfb jne 0x10fa7c35 */
  if (!C.zf) goto L_10fa7c35;
  /* 10fa7bfd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10fa7c02 push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7c09 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa7c0b call 0x10f97b10 */
  push32(0x10fa7c10u); f_10f97b10();
  /* 10fa7c10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7c13 mov dword ptr [0x10fc3724], eax */
  w32((uint32_t)(0x10fc3724), (EAX));
  /* 10fa7c18 cmp dword ptr [0x10fc3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7c1f jne 0x10fa7c29 */
  if (!C.zf) goto L_10fa7c29;
  /* 10fa7c21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7c24 jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7c29:;
  /* 10fa7c29 mov ecx, dword ptr [0x10fc3724] */
  ECX = (r32((uint32_t)(0x10fc3724)));
  /* 10fa7c2f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10fa7c35:;
  /* 10fa7c35 mov edx, dword ptr [0x10fc371c] */
  EDX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa7c3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fa7c3e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa7c41 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7c44 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7c48 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7c49 call 0x10fa7df0 */
  push32(0x10fa7c4eu); f_10fa7df0();
  /* 10fa7c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7c51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa7c54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7c58 jl 0x10fa7cf1 */
  if ((C.sf!=C.of)) goto L_10fa7cf1;
  /* 10fa7c5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7c61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7c64 je 0x10fa7cf1 */
  if (C.zf) goto L_10fa7cf1;
  /* 10fa7c6a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7c6e je 0x10fa7ce3 */
  if (C.zf) goto L_10fa7ce3;
  /* 10fa7c70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7c72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7c75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7c78 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa7c7b push edx */
  push32((uint32_t)(EDX));
  /* 10fa7c7c call 0x10f985a0 */
  push32(0x10fa7c81u); f_10f985a0();
  /* 10fa7c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7c84 jmp 0x10fa7c8f */
  goto L_10fa7c8f;
L_10fa7c86:;
  /* 10fa7c86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7c8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa7c8f:;
  /* 10fa7c8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7c92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7c95 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7c99 je 0x10fa7cb0 */
  if (C.zf) goto L_10fa7cb0;
  /* 10fa7c9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7c9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7ca1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7ca4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7ca7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10fa7cab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10fa7cae jmp 0x10fa7c86 */
  goto L_10fa7c86;
L_10fa7cb0:;
  /* 10fa7cb0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10fa7cb5 push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7cba push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7cbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7cbf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10fa7cc2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7cc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7cc7 call 0x10f97fa0 */
  push32(0x10fa7cccu); f_10f97fa0();
  /* 10fa7ccc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7ccf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa7cd2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7cd6 je 0x10fa7ce1 */
  if (C.zf) goto L_10fa7ce1;
  /* 10fa7cd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7cdb mov dword ptr [0x10fc371c], edx */
  w32((uint32_t)(0x10fc371c), (EDX));
L_10fa7ce1:;
  /* 10fa7ce1 jmp 0x10fa7cef */
  goto L_10fa7cef;
L_10fa7ce3:;
  /* 10fa7ce3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7ce6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7cec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10fa7cef:;
  /* 10fa7cef jmp 0x10fa7d64 */
  goto L_10fa7d64;
L_10fa7cf1:;
  /* 10fa7cf1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7cf5 jne 0x10fa7d5d */
  if (!C.zf) goto L_10fa7d5d;
  /* 10fa7cf7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7cfb jge 0x10fa7d05 */
  if ((C.sf==C.of)) goto L_10fa7d05;
  /* 10fa7cfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7d00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa7d02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa7d05:;
  /* 10fa7d05 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10fa7d0a push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7d0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7d11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7d14 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10fa7d1b push edx */
  push32((uint32_t)(EDX));
  /* 10fa7d1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7d1f push eax */
  push32((uint32_t)(EAX));
  /* 10fa7d20 call 0x10f97fa0 */
  push32(0x10fa7d25u); f_10f97fa0();
  /* 10fa7d25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7d28 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa7d2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7d2f jne 0x10fa7d39 */
  if (!C.zf) goto L_10fa7d39;
  /* 10fa7d31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7d34 jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7d39:;
  /* 10fa7d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7d3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7d42 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10fa7d45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7d48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7d4b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10fa7d53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7d56 mov dword ptr [0x10fc371c], eax */
  w32((uint32_t)(0x10fc371c), (EAX));
  /* 10fa7d5b jmp 0x10fa7d64 */
  goto L_10fa7d64;
L_10fa7d5d:;
  /* 10fa7d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7d5f jmp 0x10fa7deb */
  goto L_10fa7deb;
L_10fa7d64:;
  /* 10fa7d64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7d68 je 0x10fa7de9 */
  if (C.zf) goto L_10fa7de9;
  /* 10fa7d6a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10fa7d6f push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7d74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7d7a call 0x10f9a940 */
  push32(0x10fa7d7fu); f_10f9a940();
  /* 10fa7d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7d82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7d85 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7d86 call 0x10f97b10 */
  push32(0x10fa7d8bu); f_10f97b10();
  /* 10fa7d8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7d8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fa7d91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7d95 je 0x10fa7de9 */
  if (C.zf) goto L_10fa7de9;
  /* 10fa7d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7d9a push edx */
  push32((uint32_t)(EDX));
  /* 10fa7d9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7d9e push eax */
  push32((uint32_t)(EAX));
  /* 10fa7d9f call 0x10f9aac0 */
  push32(0x10fa7da4u); f_10f9aac0();
  /* 10fa7da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7da7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa7daa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7dad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7db0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7db2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa7db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7db8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fa7dbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7dc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa7dc4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa7dc7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa7dc9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7dcb not edx */
  EDX = (~(EDX));
  /* 10fa7dcd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10fa7dd0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7dd1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7dd5 call dword ptr [0x10fc6290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6290))), 0x10fa7ddbu);
  /* 10fa7ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7ddd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7de0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7de1 call 0x10f985a0 */
  push32(0x10fa7de6u); f_10f985a0();
  /* 10fa7de6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa7de9:;
  /* 10fa7de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa7deb:;
  /* 10fa7deb pop esi */
  ESI = (pop32());
  /* 10fa7dec mov esp, ebp */
  ESP = (EBP);
  /* 10fa7dee pop ebp */
  EBP = (pop32());
  /* 10fa7def ret  */
  ESPCHK(0x10fa7b10u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10fa7df0 (124 bytes, 47 insns) */
void f_10fa7df0(void) {
  FTRACE(0x10fa7df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7df1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7df4 mov eax, dword ptr [0x10fc371c] */
  EAX = (r32((uint32_t)(0x10fc371c)));
  /* 10fa7df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa7dfc jmp 0x10fa7e07 */
  goto L_10fa7e07;
L_10fa7dfe:;
  /* 10fa7dfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e01 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7e04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa7e07:;
  /* 10fa7e07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e0a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7e0d je 0x10fa7e5a */
  if (C.zf) goto L_10fa7e5a;
  /* 10fa7e0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7e12 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa7e18 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7e19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7e1c push eax */
  push32((uint32_t)(EAX));
  /* 10fa7e1d call 0x10fa75c0 */
  push32(0x10fa7e22u); f_10fa75c0();
  /* 10fa7e22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa7e27 jne 0x10fa7e58 */
  if (!C.zf) goto L_10fa7e58;
  /* 10fa7e29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa7e2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7e31 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10fa7e35 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7e38 je 0x10fa7e4a */
  if (C.zf) goto L_10fa7e4a;
  /* 10fa7e3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e3d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa7e3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7e42 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10fa7e46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7e48 jne 0x10fa7e58 */
  if (!C.zf) goto L_10fa7e58;
L_10fa7e4a:;
  /* 10fa7e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e4d sub eax, dword ptr [0x10fc371c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc371c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7e53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10fa7e56 jmp 0x10fa7e68 */
  goto L_10fa7e68;
L_10fa7e58:;
  /* 10fa7e58 jmp 0x10fa7dfe */
  goto L_10fa7dfe;
L_10fa7e5a:;
  /* 10fa7e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7e5d sub eax, dword ptr [0x10fc371c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc371c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7e63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10fa7e66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10fa7e68:;
  /* 10fa7e68 mov esp, ebp */
  ESP = (EBP);
  /* 10fa7e6a pop ebp */
  EBP = (pop32());
  /* 10fa7e6b ret  */
  ESPCHK(0x10fa7df0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10fa7e70 (238 bytes, 80 insns) */
void f_10fa7e70(void) {
  FTRACE(0x10fa7e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7e71 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7e73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa7e76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa7e7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7e80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa7e83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7e87 jne 0x10fa7e90 */
  if (!C.zf) goto L_10fa7e90;
  /* 10fa7e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7e8b jmp 0x10fa7f5a */
  goto L_10fa7f5a;
L_10fa7e90:;
  /* 10fa7e90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7e93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa7e95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7e98 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7e9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa7e9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7ea0 je 0x10fa7ead */
  if (C.zf) goto L_10fa7ead;
  /* 10fa7ea2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7ea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7ea8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fa7eab jmp 0x10fa7e90 */
  goto L_10fa7e90;
L_10fa7ead:;
  /* 10fa7ead push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10fa7eb2 push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7eb9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa7ebc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10fa7ec3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7ec4 call 0x10f97b10 */
  push32(0x10fa7ec9u); f_10f97b10();
  /* 10fa7ec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7ecc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa7ecf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7ed2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa7ed5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7ed9 jne 0x10fa7ee5 */
  if (!C.zf) goto L_10fa7ee5;
  /* 10fa7edb push 9 */
  push32((uint32_t)(0x9u));
  /* 10fa7edd call 0x10f96a80 */
  push32(0x10fa7ee2u); f_10f96a80();
  /* 10fa7ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa7ee5:;
  /* 10fa7ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7ee8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fa7eeb:;
  /* 10fa7eeb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7eee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7ef1 je 0x10fa7f4e */
  if (C.zf) goto L_10fa7f4e;
  /* 10fa7ef3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10fa7ef8 push 0x10fbfa48 */
  push32((uint32_t)(0x10fbfa48u));
  /* 10fa7efd push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa7eff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7f02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa7f04 push edx */
  push32((uint32_t)(EDX));
  /* 10fa7f05 call 0x10f9a940 */
  push32(0x10fa7f0au); f_10f9a940();
  /* 10fa7f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f10 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7f11 call 0x10f97b10 */
  push32(0x10fa7f16u); f_10f97b10();
  /* 10fa7f16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7f1c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa7f1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7f21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7f24 je 0x10fa7f3a */
  if (C.zf) goto L_10fa7f3a;
  /* 10fa7f26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7f29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa7f2b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7f2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7f2f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa7f31 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7f32 call 0x10f9aac0 */
  push32(0x10fa7f37u); f_10f9aac0();
  /* 10fa7f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa7f3a:;
  /* 10fa7f3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa7f3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa7f43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7f46 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f49 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa7f4c jmp 0x10fa7eeb */
  goto L_10fa7eeb;
L_10fa7f4e:;
  /* 10fa7f4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa7f51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa7f57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa7f5a:;
  /* 10fa7f5a mov esp, ebp */
  ESP = (EBP);
  /* 10fa7f5c pop ebp */
  EBP = (pop32());
  /* 10fa7f5d ret  */
  ESPCHK(0x10fa7e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f60 @ 0x10fa7f60 (237 bytes, 81 insns) */
void f_10fa7f60(void) {
  FTRACE(0x10fa7f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa7f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa7f61 mov ebp, esp */
  EBP = (ESP);
  /* 10fa7f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7f64 cmp dword ptr [0x10fc4e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc4e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa7f6b jne 0x10fa7f82 */
  if (!C.zf) goto L_10fa7f82;
  /* 10fa7f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa7f70 push eax */
  push32((uint32_t)(EAX));
  /* 10fa7f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7f74 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa7f75 call 0x10fa8060 */
  push32(0x10fa7f7au); f_10fa8060();
  /* 10fa7f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f7d jmp 0x10fa8049 */
  goto L_10fa8049;
L_10fa7f82:;
  /* 10fa7f82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fa7f84 call 0x10f9b510 */
  push32(0x10fa7f89u); f_10f9b510();
  /* 10fa7f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f8c jmp 0x10fa7f97 */
  goto L_10fa7f97;
L_10fa7f8e:;
  /* 10fa7f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7f91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7f94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10fa7f97:;
  /* 10fa7f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7f9a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10fa7f9e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10fa7fa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7fa5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa7fab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa7fad je 0x10fa802b */
  if (C.zf) goto L_10fa802b;
  /* 10fa7faf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7fb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7fb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa7fb9 mov cl, byte ptr [eax + 0x10fc4f81] */
  CL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10fa7fbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa7fc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa7fc4 je 0x10fa8016 */
  if (C.zf) goto L_10fa8016;
  /* 10fa7fc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7fc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7fcc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fa7fcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7fd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa7fd4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa7fd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa7fd8 jne 0x10fa7fe8 */
  if (!C.zf) goto L_10fa7fe8;
  /* 10fa7fda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fa7fdc call 0x10f9b5b0 */
  push32(0x10fa7fe1u); f_10f9b5b0();
  /* 10fa7fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa7fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa7fe6 jmp 0x10fa8049 */
  goto L_10fa8049;
L_10fa7fe8:;
  /* 10fa7fe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa7feb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa7ff1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10fa7ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa7ff7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa7ff9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa7ffb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa7ffd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa8000 jne 0x10fa8014 */
  if (!C.zf) goto L_10fa8014;
  /* 10fa8002 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fa8004 call 0x10f9b5b0 */
  push32(0x10fa8009u); f_10f9b5b0();
  /* 10fa8009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa800c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa800f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa8012 jmp 0x10fa8049 */
  goto L_10fa8049;
L_10fa8014:;
  /* 10fa8014 jmp 0x10fa8026 */
  goto L_10fa8026;
L_10fa8016:;
  /* 10fa8016 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa8019 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa801f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa8022 jne 0x10fa8026 */
  if (!C.zf) goto L_10fa8026;
  /* 10fa8024 jmp 0x10fa802b */
  goto L_10fa802b;
L_10fa8026:;
  /* 10fa8026 jmp 0x10fa7f8e */
  goto L_10fa7f8e;
L_10fa802b:;
  /* 10fa802b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fa802d call 0x10f9b5b0 */
  push32(0x10fa8032u); f_10f9b5b0();
  /* 10fa8032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa8035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa8038 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa803d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa8040 jne 0x10fa8047 */
  if (!C.zf) goto L_10fa8047;
  /* 10fa8042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa8045 jmp 0x10fa8049 */
  goto L_10fa8049;
L_10fa8047:;
  /* 10fa8047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa8049:;
  /* 10fa8049 mov esp, ebp */
  ESP = (EBP);
  /* 10fa804b pop ebp */
  EBP = (pop32());
  /* 10fa804c ret  */
  ESPCHK(0x10fa7f60u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10fa8060 (193 bytes, 87 insns) */
void f_10fa8060(void) {
  FTRACE(0x10fa8060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa8060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa8062 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10fa8066 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa8067 mov ebx, eax */
  EBX = (EAX);
  /* 10fa8069 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10fa806c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fa8070 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10fa8076 je 0x10fa808b */
  if (C.zf) goto L_10fa808b;
L_10fa8078:;
  /* 10fa8078 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10fa807a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fa807b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa807d je 0x10fa8050 */
  if (C.zf) { jmp_ind(0x10fa8050u); return; }
  /* 10fa807f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10fa8081 je 0x10fa80d4 */
  if (C.zf) goto L_10fa80d4;
  /* 10fa8083 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10fa8089 jne 0x10fa8078 */
  if (!C.zf) goto L_10fa8078;
L_10fa808b:;
  /* 10fa808b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10fa808d push edi */
  push32((uint32_t)(EDI));
  /* 10fa808e mov eax, ebx */
  EAX = (EBX);
  /* 10fa8090 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10fa8093 push esi */
  push32((uint32_t)(ESI));
  /* 10fa8094 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10fa8096:;
  /* 10fa8096 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10fa8098 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10fa809d mov eax, ecx */
  EAX = (ECX);
  /* 10fa809f mov esi, edi */
  ESI = (EDI);
  /* 10fa80a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa80a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa80a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa80a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa80aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa80ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10fa80af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10fa80b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa80b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa80ba jne 0x10fa80d8 */
  if (!C.zf) goto L_10fa80d8;
  /* 10fa80bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa80c1 je 0x10fa8096 */
  if (C.zf) goto L_10fa8096;
  /* 10fa80c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa80c8 jne 0x10fa80d2 */
  if (!C.zf) goto L_10fa80d2;
  /* 10fa80ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10fa80d0 jne 0x10fa8096 */
  if (!C.zf) goto L_10fa8096;
L_10fa80d2:;
  /* 10fa80d2 pop esi */
  ESI = (pop32());
  /* 10fa80d3 pop edi */
  EDI = (pop32());
L_10fa80d4:;
  /* 10fa80d4 pop ebx */
  EBX = (pop32());
  /* 10fa80d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa80d7 ret  */
  ESPCHK(0x10fa8060u, _esp0);
  ESP += 4; return;
L_10fa80d8:;
  /* 10fa80d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10fa80db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa80dd je 0x10fa8115 */
  if (C.zf) goto L_10fa8115;
  /* 10fa80df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10fa80e1 je 0x10fa80d2 */
  if (C.zf) goto L_10fa80d2;
  /* 10fa80e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa80e5 je 0x10fa810e */
  if (C.zf) goto L_10fa810e;
  /* 10fa80e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10fa80e9 je 0x10fa80d2 */
  if (C.zf) goto L_10fa80d2;
  /* 10fa80eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10fa80ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa80f0 je 0x10fa8107 */
  if (C.zf) goto L_10fa8107;
  /* 10fa80f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10fa80f4 je 0x10fa80d2 */
  if (C.zf) goto L_10fa80d2;
  /* 10fa80f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa80f8 je 0x10fa8100 */
  if (C.zf) goto L_10fa8100;
  /* 10fa80fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10fa80fc je 0x10fa80d2 */
  if (C.zf) goto L_10fa80d2;
  /* 10fa80fe jmp 0x10fa8096 */
  goto L_10fa8096;
L_10fa8100:;
  /* 10fa8100 pop esi */
  ESI = (pop32());
  /* 10fa8101 pop edi */
  EDI = (pop32());
  /* 10fa8102 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10fa8105 pop ebx */
  EBX = (pop32());
  /* 10fa8106 ret  */
  ESPCHK(0x10fa8060u, _esp0);
  ESP += 4; return;
L_10fa8107:;
  /* 10fa8107 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10fa810a pop esi */
  ESI = (pop32());
  /* 10fa810b pop edi */
  EDI = (pop32());
  /* 10fa810c pop ebx */
  EBX = (pop32());
  /* 10fa810d ret  */
  ESPCHK(0x10fa8060u, _esp0);
  ESP += 4; return;
L_10fa810e:;
  /* 10fa810e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10fa8111 pop esi */
  ESI = (pop32());
  /* 10fa8112 pop edi */
  EDI = (pop32());
  /* 10fa8113 pop ebx */
  EBX = (pop32());
  /* 10fa8114 ret  */
  ESPCHK(0x10fa8060u, _esp0);
  ESP += 4; return;
L_10fa8115:;
  /* 10fa8115 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10fa8118 pop esi */
  ESI = (pop32());
  /* 10fa8119 pop edi */
  EDI = (pop32());
  /* 10fa811a pop ebx */
  EBX = (pop32());
  /* 10fa811b ret  */
  ESPCHK(0x10fa8060u, _esp0);
  ESP += 4; return;
  /* 10fa811c jmp dword ptr [0x10fc630c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10fc630c)))); return;
}

/* RtlUnwind @ 0x10fa826c (6 bytes, 1 insns) */
void f_10fa826c(void) {
  FTRACE(0x10fa826cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa826c jmp dword ptr [0x10fc62c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10fc62c8)))); return;
}

