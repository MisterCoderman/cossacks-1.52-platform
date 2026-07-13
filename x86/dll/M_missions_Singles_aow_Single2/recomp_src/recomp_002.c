#include "recomp.h"

/* FUN_10014ac0 @ 0x121a4ac0 (878 bytes, 273 insns) */
void f_121a4ac0(void) {
  FTRACE(0x121a4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 121a4ac3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4ac6 push esi */
  push32((uint32_t)(ESI));
  /* 121a4ac7 mov eax, dword ptr [0x121c2c98] */
  EAX = (r32((uint32_t)(0x121c2c98)));
  /* 121a4acc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a4acf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a4ad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a4add jmp 0x121a4ae8 */
  goto L_121a4ae8;
L_121a4adf:;
  /* 121a4adf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4ae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121a4ae8:;
  /* 121a4ae8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4aec jae 0x121a4b21 */
  if (!C.cf) goto L_121a4b21;
  /* 121a4aee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4af4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121a4af7 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4af8 call 0x1219a940 */
  push32(0x121a4afdu); f_1219a940();
  /* 121a4afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b00 mov esi, eax */
  ESI = (EAX);
  /* 121a4b02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4b05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4b08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 121a4b0c push ecx */
  push32((uint32_t)(ECX));
  /* 121a4b0d call 0x1219a940 */
  push32(0x121a4b12u); f_1219a940();
  /* 121a4b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121a4b1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a4b1f jmp 0x121a4adf */
  goto L_121a4adf;
L_121a4b21:;
  /* 121a4b21 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a4b28 jmp 0x121a4b33 */
  goto L_121a4b33;
L_121a4b2a:;
  /* 121a4b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121a4b33:;
  /* 121a4b33 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4b37 jae 0x121a4b6d */
  if (!C.cf) goto L_121a4b6d;
  /* 121a4b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4b3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4b3f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121a4b43 push eax */
  push32((uint32_t)(EAX));
  /* 121a4b44 call 0x1219a940 */
  push32(0x121a4b49u); f_1219a940();
  /* 121a4b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b4c mov esi, eax */
  ESI = (EAX);
  /* 121a4b4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4b51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4b54 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121a4b58 push eax */
  push32((uint32_t)(EAX));
  /* 121a4b59 call 0x1219a940 */
  push32(0x121a4b5eu); f_1219a940();
  /* 121a4b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b61 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b64 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121a4b68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a4b6b jmp 0x121a4b2a */
  goto L_121a4b2a;
L_121a4b6d:;
  /* 121a4b6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4b70 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 121a4b76 push eax */
  push32((uint32_t)(EAX));
  /* 121a4b77 call 0x1219a940 */
  push32(0x121a4b7cu); f_1219a940();
  /* 121a4b7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b7f mov esi, eax */
  ESI = (EAX);
  /* 121a4b81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4b84 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 121a4b8a push edx */
  push32((uint32_t)(EDX));
  /* 121a4b8b call 0x1219a940 */
  push32(0x121a4b90u); f_1219a940();
  /* 121a4b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b93 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4b96 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121a4b9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a4b9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4ba0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 121a4ba6 push edx */
  push32((uint32_t)(EDX));
  /* 121a4ba7 call 0x1219a940 */
  push32(0x121a4bacu); f_1219a940();
  /* 121a4bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4baf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4bb2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121a4bb6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a4bb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4bbc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 121a4bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4bc3 call 0x1219a940 */
  push32(0x121a4bc8u); f_1219a940();
  /* 121a4bc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4bcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4bce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121a4bd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a4bd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4bd8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 121a4bde push edx */
  push32((uint32_t)(EDX));
  /* 121a4bdf call 0x1219a940 */
  push32(0x121a4be4u); f_1219a940();
  /* 121a4be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4bea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121a4bee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a4bf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4bf4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4bf9 push eax */
  push32((uint32_t)(EAX));
  /* 121a4bfa call 0x12197af0 */
  push32(0x121a4bffu); f_12197af0();
  /* 121a4bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4c02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a4c05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4c09 je 0x121a4e26 */
  if (C.zf) goto L_121a4e26;
  /* 121a4c0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4c12 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121a4c15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4c18 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4c1e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4c21 push 0xac */
  push32((uint32_t)(0xacu));
  /* 121a4c26 mov eax, dword ptr [0x121c2c98] */
  EAX = (r32((uint32_t)(0x121c2c98)));
  /* 121a4c2b push eax */
  push32((uint32_t)(EAX));
  /* 121a4c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4c2f push ecx */
  push32((uint32_t)(ECX));
  /* 121a4c30 call 0x1219e3f0 */
  push32(0x121a4c35u); f_1219e3f0();
  /* 121a4c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4c38 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a4c3f jmp 0x121a4c4a */
  goto L_121a4c4a;
L_121a4c41:;
  /* 121a4c41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4c44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4c47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a4c4a:;
  /* 121a4c4a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4c4e jae 0x121a4cbe */
  if (!C.cf) goto L_121a4cbe;
  /* 121a4c50 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4c53 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4c56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4c59 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 121a4c5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4c5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4c62 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a4c65 push edx */
  push32((uint32_t)(EDX));
  /* 121a4c66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4c69 push eax */
  push32((uint32_t)(EAX));
  /* 121a4c6a call 0x1219aac0 */
  push32(0x121a4c6fu); f_1219aac0();
  /* 121a4c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4c72 push eax */
  push32((uint32_t)(EAX));
  /* 121a4c73 call 0x1219a940 */
  push32(0x121a4c78u); f_1219a940();
  /* 121a4c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4c7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4c7e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121a4c82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4c85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4c88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4c8b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4c8e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 121a4c92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4c95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4c98 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 121a4c9c push edx */
  push32((uint32_t)(EDX));
  /* 121a4c9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4ca0 push eax */
  push32((uint32_t)(EAX));
  /* 121a4ca1 call 0x1219aac0 */
  push32(0x121a4ca6u); f_1219aac0();
  /* 121a4ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4ca9 push eax */
  push32((uint32_t)(EAX));
  /* 121a4caa call 0x1219a940 */
  push32(0x121a4cafu); f_1219a940();
  /* 121a4caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4cb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4cb5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121a4cb9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4cbc jmp 0x121a4c41 */
  goto L_121a4c41;
L_121a4cbe:;
  /* 121a4cbe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a4cc5 jmp 0x121a4cd0 */
  goto L_121a4cd0;
L_121a4cc7:;
  /* 121a4cc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4cca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4ccd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121a4cd0:;
  /* 121a4cd0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4cd4 jae 0x121a4d46 */
  if (!C.cf) goto L_121a4d46;
  /* 121a4cd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4cd9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4cdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4cdf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 121a4ce3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4ce6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4ce9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121a4ced push eax */
  push32((uint32_t)(EAX));
  /* 121a4cee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4cf2 call 0x1219aac0 */
  push32(0x121a4cf7u); f_1219aac0();
  /* 121a4cf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4cfa push eax */
  push32((uint32_t)(EAX));
  /* 121a4cfb call 0x1219a940 */
  push32(0x121a4d00u); f_1219a940();
  /* 121a4d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4d03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d06 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121a4d0a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4d0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4d10 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4d13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d16 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 121a4d1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4d1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4d20 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121a4d24 push eax */
  push32((uint32_t)(EAX));
  /* 121a4d25 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d28 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4d29 call 0x1219aac0 */
  push32(0x121a4d2eu); f_1219aac0();
  /* 121a4d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4d31 push eax */
  push32((uint32_t)(EAX));
  /* 121a4d32 call 0x1219a940 */
  push32(0x121a4d37u); f_1219a940();
  /* 121a4d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4d3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d3d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121a4d41 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4d44 jmp 0x121a4cc7 */
  goto L_121a4cc7;
L_121a4d46:;
  /* 121a4d46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4d49 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d4c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 121a4d52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4d55 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 121a4d5b push ecx */
  push32((uint32_t)(ECX));
  /* 121a4d5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d5f push edx */
  push32((uint32_t)(EDX));
  /* 121a4d60 call 0x1219aac0 */
  push32(0x121a4d65u); f_1219aac0();
  /* 121a4d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4d68 push eax */
  push32((uint32_t)(EAX));
  /* 121a4d69 call 0x1219a940 */
  push32(0x121a4d6eu); f_1219a940();
  /* 121a4d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4d71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d74 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121a4d78 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4d7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4d7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d81 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 121a4d87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4d8a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 121a4d90 push eax */
  push32((uint32_t)(EAX));
  /* 121a4d91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4d94 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4d95 call 0x1219aac0 */
  push32(0x121a4d9au); f_1219aac0();
  /* 121a4d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4d9d push eax */
  push32((uint32_t)(EAX));
  /* 121a4d9e call 0x1219a940 */
  push32(0x121a4da3u); f_1219a940();
  /* 121a4da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4da6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4da9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121a4dad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4db0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4db3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4db6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 121a4dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4dbf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 121a4dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4dc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4dc9 push edx */
  push32((uint32_t)(EDX));
  /* 121a4dca call 0x1219aac0 */
  push32(0x121a4dcfu); f_1219aac0();
  /* 121a4dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4dd2 push eax */
  push32((uint32_t)(EAX));
  /* 121a4dd3 call 0x1219a940 */
  push32(0x121a4dd8u); f_1219a940();
  /* 121a4dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4ddb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4dde lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 121a4de2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4de5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4de8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4deb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 121a4df1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4df4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 121a4dfa push eax */
  push32((uint32_t)(EAX));
  /* 121a4dfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4dfe push ecx */
  push32((uint32_t)(ECX));
  /* 121a4dff call 0x1219aac0 */
  push32(0x121a4e04u); f_1219aac0();
  /* 121a4e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4e07 push eax */
  push32((uint32_t)(EAX));
  /* 121a4e08 call 0x1219a940 */
  push32(0x121a4e0du); f_1219a940();
  /* 121a4e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4e10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4e13 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 121a4e17 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4e1a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a4e1d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4e20 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_121a4e26:;
  /* 121a4e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4e29 pop esi */
  ESI = (pop32());
  /* 121a4e2a mov esp, ebp */
  ESP = (EBP);
  /* 121a4e2c pop ebp */
  EBP = (pop32());
  /* 121a4e2d ret  */
  ESPCHK(0x121a4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e30 @ 0x121a4e30 (31 bytes, 15 insns) */
void f_121a4e30(void) {
  FTRACE(0x121a4e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4e30 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4e31 mov ebp, esp */
  EBP = (ESP);
  /* 121a4e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a4e35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a4e38 push eax */
  push32((uint32_t)(EAX));
  /* 121a4e39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4e3c push ecx */
  push32((uint32_t)(ECX));
  /* 121a4e3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a4e40 push edx */
  push32((uint32_t)(EDX));
  /* 121a4e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4e44 push eax */
  push32((uint32_t)(EAX));
  /* 121a4e45 call 0x121a4e50 */
  push32(0x121a4e4au); f_121a4e50();
  /* 121a4e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4e4d pop ebp */
  EBP = (pop32());
  /* 121a4e4e ret  */
  ESPCHK(0x121a4e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e50 @ 0x121a4e50 (393 bytes, 123 insns) */
void f_121a4e50(void) {
  FTRACE(0x121a4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4e51 mov ebp, esp */
  EBP = (ESP);
  /* 121a4e53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4e56 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4e5a jne 0x121a4e66 */
  if (!C.zf) goto L_121a4e66;
  /* 121a4e5c mov eax, dword ptr [0x121c2c98] */
  EAX = (r32((uint32_t)(0x121c2c98)));
  /* 121a4e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121a4e64 jmp 0x121a4e6c */
  goto L_121a4e6c;
L_121a4e66:;
  /* 121a4e66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a4e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121a4e6c:;
  /* 121a4e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4e6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a4e72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a4e75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a4e78 push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a4e7d call dword ptr [0x121c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6330))), 0x121a4e83u);
  /* 121a4e83 cmp dword ptr [0x121c3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4e8a je 0x121a4eaa */
  if (C.zf) goto L_121a4eaa;
  /* 121a4e8c push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a4e91 call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x121a4e97u);
  /* 121a4e97 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a4e99 call 0x1219b510 */
  push32(0x121a4e9eu); f_1219b510();
  /* 121a4e9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4ea1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121a4ea8 jmp 0x121a4eb1 */
  goto L_121a4eb1;
L_121a4eaa:;
  /* 121a4eaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121a4eb1:;
  /* 121a4eb1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4eb5 jbe 0x121a4fa2 */
  if ((C.cf||C.zf)) goto L_121a4fa2;
  /* 121a4ebb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4ebe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a4ec0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 121a4ec3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a4ec7 je 0x121a4ed1 */
  if (C.zf) goto L_121a4ed1;
  /* 121a4ec9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a4ecd je 0x121a4ed6 */
  if (C.zf) goto L_121a4ed6;
  /* 121a4ecf jmp 0x121a4f30 */
  goto L_121a4f30;
L_121a4ed1:;
  /* 121a4ed1 jmp 0x121a4fa2 */
  goto L_121a4fa2;
L_121a4ed6:;
  /* 121a4ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4edc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 121a4edf mov dword ptr [0x121c3a68], 0 */
  w32((uint32_t)(0x121c3a68), (0x0u));
  /* 121a4ee9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4eec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a4eef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4ef2 jne 0x121a4f07 */
  if (!C.zf) goto L_121a4f07;
  /* 121a4ef4 mov dword ptr [0x121c3a68], 1 */
  w32((uint32_t)(0x121c3a68), (0x1u));
  /* 121a4efe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f04 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_121a4f07:;
  /* 121a4f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4f0a push ecx */
  push32((uint32_t)(ECX));
  /* 121a4f0b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 121a4f0e push edx */
  push32((uint32_t)(EDX));
  /* 121a4f0f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 121a4f12 push eax */
  push32((uint32_t)(EAX));
  /* 121a4f13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a4f16 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4f17 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a4f1c push eax */
  push32((uint32_t)(EAX));
  /* 121a4f1d call 0x121a4fe0 */
  push32(0x121a4f22u); f_121a4fe0();
  /* 121a4f22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121a4f2e jmp 0x121a4f9d */
  goto L_121a4f9d;
L_121a4f30:;
  /* 121a4f30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a4f35 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a4f37 mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a4f3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a4f3f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a4f43 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121a4f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a4f4b je 0x121a4f78 */
  if (C.zf) goto L_121a4f78;
  /* 121a4f4d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4f51 jbe 0x121a4f78 */
  if ((C.cf||C.zf)) goto L_121a4f78;
  /* 121a4f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4f56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f59 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a4f5b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121a4f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4f60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f63 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a4f66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121a4f6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4f72 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4f75 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121a4f78:;
  /* 121a4f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4f7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a4f80 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121a4f82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4f85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a4f8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4f8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4f91 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 121a4f94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4f97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4f9a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121a4f9d:;
  /* 121a4f9d jmp 0x121a4eb1 */
  goto L_121a4eb1;
L_121a4fa2:;
  /* 121a4fa2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4fa6 je 0x121a4fb4 */
  if (C.zf) goto L_121a4fb4;
  /* 121a4fa8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a4faa call 0x1219b5b0 */
  push32(0x121a4fafu); f_1219b5b0();
  /* 121a4faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4fb2 jmp 0x121a4fbf */
  goto L_121a4fbf;
L_121a4fb4:;
  /* 121a4fb4 push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a4fb9 call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x121a4fbfu);
L_121a4fbf:;
  /* 121a4fbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4fc3 jbe 0x121a4fd3 */
  if ((C.cf||C.zf)) goto L_121a4fd3;
  /* 121a4fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4fc8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121a4fcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a4fce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4fd1 jmp 0x121a4fd5 */
  goto L_121a4fd5;
L_121a4fd3:;
  /* 121a4fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a4fd5:;
  /* 121a4fd5 mov esp, ebp */
  ESP = (EBP);
  /* 121a4fd7 pop ebp */
  EBP = (pop32());
  /* 121a4fd8 ret  */
  ESPCHK(0x121a4e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fe0 @ 0x121a4fe0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_121a4fe0(void) {
  FTRACE(0x121a4fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4fe1 mov ebp, esp */
  EBP = (ESP);
  /* 121a4fe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4fe6 push esi */
  push32((uint32_t)(ESI));
  /* 121a4fe7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 121a4feb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a4fee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4ff1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4ff4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a4ff7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4ffb ja 0x121a5548 */
  if ((!C.cf&&!C.zf)) goto L_121a5548;
  /* 121a5001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a5006 mov dl, byte ptr [eax + 0x121a55a9] */
  DL = (r8((uint32_t)(EAX + 0x121a55a9)));
  /* 121a500c jmp dword ptr [edx*4 + 0x121a554d] */
  switch (EDX) {
    case 0: goto L_121a5526;
    case 1: goto L_121a5035;
    case 2: goto L_121a507b;
    case 3: goto L_121a51c8;
    case 4: goto L_121a51f0;
    case 5: goto L_121a528f;
    case 6: goto L_121a52fb;
    case 7: goto L_121a5324;
    case 8: goto L_121a5365;
    case 9: goto L_121a5447;
    case 10: goto L_121a54ae;
    case 11: goto L_121a54fb;
    case 12: goto L_121a5013;
    case 13: goto L_121a5058;
    case 14: goto L_121a509e;
    case 15: goto L_121a519e;
    case 16: goto L_121a5235;
    case 17: goto L_121a5262;
    case 18: goto L_121a52b7;
    case 19: goto L_121a533b;
    case 20: goto L_121a53e9;
    case 21: goto L_121a5478;
    case 22: goto L_121a5548;
    default: x86_unimpl("switch@0x121a500c out of table"); return;
  }
L_121a5013:;
  /* 121a5013 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5016 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5017 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a501a push edx */
  push32((uint32_t)(EDX));
  /* 121a501b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a501e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121a5021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5024 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121a5027 push eax */
  push32((uint32_t)(EAX));
  /* 121a5028 call 0x121a5600 */
  push32(0x121a502du); f_121a5600();
  /* 121a502d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5030 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5035:;
  /* 121a5035 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5038 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5039 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a503c push edx */
  push32((uint32_t)(EDX));
  /* 121a503d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5040 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121a5043 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5046 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 121a504a push eax */
  push32((uint32_t)(EAX));
  /* 121a504b call 0x121a5600 */
  push32(0x121a5050u); f_121a5600();
  /* 121a5050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5053 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5058:;
  /* 121a5058 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a505b push ecx */
  push32((uint32_t)(ECX));
  /* 121a505c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a505f push edx */
  push32((uint32_t)(EDX));
  /* 121a5060 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5063 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121a5066 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5069 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 121a506d push eax */
  push32((uint32_t)(EAX));
  /* 121a506e call 0x121a5600 */
  push32(0x121a5073u); f_121a5600();
  /* 121a5073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5076 jmp 0x121a5548 */
  goto L_121a5548;
L_121a507b:;
  /* 121a507b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a507e push ecx */
  push32((uint32_t)(ECX));
  /* 121a507f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5082 push edx */
  push32((uint32_t)(EDX));
  /* 121a5083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5086 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121a5089 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a508c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121a5090 push eax */
  push32((uint32_t)(EAX));
  /* 121a5091 call 0x121a5600 */
  push32(0x121a5096u); f_121a5600();
  /* 121a5096 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5099 jmp 0x121a5548 */
  goto L_121a5548;
L_121a509e:;
  /* 121a509e cmp dword ptr [0x121c3a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a50a5 je 0x121a5126 */
  if (C.zf) goto L_121a5126;
  /* 121a50a7 mov dword ptr [0x121c3a68], 0 */
  w32((uint32_t)(0x121c3a68), (0x0u));
  /* 121a50b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a50b4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a50b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a50b8 push edx */
  push32((uint32_t)(EDX));
  /* 121a50b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a50bc push eax */
  push32((uint32_t)(EAX));
  /* 121a50bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a50c0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a50c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a50c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 121a50ca push eax */
  push32((uint32_t)(EAX));
  /* 121a50cb call 0x121a57b0 */
  push32(0x121a50d0u); f_121a57b0();
  /* 121a50d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a50d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a50d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a50d9 jne 0x121a50e0 */
  if (!C.zf) goto L_121a50e0;
  /* 121a50db jmp 0x121a5548 */
  goto L_121a5548;
L_121a50e0:;
  /* 121a50e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a50e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a50e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 121a50e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a50eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a50ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a50f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a50f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a50f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a50f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a50fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a50fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5100 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a5102 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5105 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5106 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5109 push edx */
  push32((uint32_t)(EDX));
  /* 121a510a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a510d push eax */
  push32((uint32_t)(EAX));
  /* 121a510e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5111 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5112 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5115 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 121a511b push eax */
  push32((uint32_t)(EAX));
  /* 121a511c call 0x121a57b0 */
  push32(0x121a5121u); f_121a57b0();
  /* 121a5121 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5124 jmp 0x121a5199 */
  goto L_121a5199;
L_121a5126:;
  /* 121a5126 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5129 push ecx */
  push32((uint32_t)(ECX));
  /* 121a512a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a512d push edx */
  push32((uint32_t)(EDX));
  /* 121a512e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5131 push eax */
  push32((uint32_t)(EAX));
  /* 121a5132 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5135 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5136 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5139 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 121a513f push eax */
  push32((uint32_t)(EAX));
  /* 121a5140 call 0x121a57b0 */
  push32(0x121a5145u); f_121a57b0();
  /* 121a5145 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5148 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a514b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a514e jne 0x121a5155 */
  if (!C.zf) goto L_121a5155;
  /* 121a5150 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5155:;
  /* 121a5155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5158 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a515a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 121a515d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5160 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5162 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5165 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5168 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a516a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a516d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a516f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5172 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5175 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a5177 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a517a push ecx */
  push32((uint32_t)(ECX));
  /* 121a517b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a517e push edx */
  push32((uint32_t)(EDX));
  /* 121a517f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5182 push eax */
  push32((uint32_t)(EAX));
  /* 121a5183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5186 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5187 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a518a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 121a5190 push eax */
  push32((uint32_t)(EAX));
  /* 121a5191 call 0x121a57b0 */
  push32(0x121a5196u); f_121a57b0();
  /* 121a5196 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a5199:;
  /* 121a5199 jmp 0x121a5548 */
  goto L_121a5548;
L_121a519e:;
  /* 121a519e mov ecx, dword ptr [0x121c3a68] */
  ECX = (r32((uint32_t)(0x121c3a68)));
  /* 121a51a4 mov dword ptr [0x121c3a78], ecx */
  w32((uint32_t)(0x121c3a78), (ECX));
  /* 121a51aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a51ad push edx */
  push32((uint32_t)(EDX));
  /* 121a51ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a51b1 push eax */
  push32((uint32_t)(EAX));
  /* 121a51b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a51b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a51b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a51ba push edx */
  push32((uint32_t)(EDX));
  /* 121a51bb call 0x121a5650 */
  push32(0x121a51c0u); f_121a5650();
  /* 121a51c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a51c3 jmp 0x121a5548 */
  goto L_121a5548;
L_121a51c8:;
  /* 121a51c8 mov eax, dword ptr [0x121c3a68] */
  EAX = (r32((uint32_t)(0x121c3a68)));
  /* 121a51cd mov dword ptr [0x121c3a78], eax */
  w32((uint32_t)(0x121c3a78), (EAX));
  /* 121a51d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a51d5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a51d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a51d9 push edx */
  push32((uint32_t)(EDX));
  /* 121a51da push 2 */
  push32((uint32_t)(0x2u));
  /* 121a51dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a51df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a51e2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a51e3 call 0x121a5650 */
  push32(0x121a51e8u); f_121a5650();
  /* 121a51e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a51eb jmp 0x121a5548 */
  goto L_121a5548;
L_121a51f0:;
  /* 121a51f0 mov edx, dword ptr [0x121c3a68] */
  EDX = (r32((uint32_t)(0x121c3a68)));
  /* 121a51f6 mov dword ptr [0x121c3a78], edx */
  w32((uint32_t)(0x121c3a78), (EDX));
  /* 121a51fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a51ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a5202 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a5203 mov ecx, 0xc */
  ECX = (0xcu);
  /* 121a5208 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a520a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a520d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5211 jne 0x121a521a */
  if (!C.zf) goto L_121a521a;
  /* 121a5213 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_121a521a:;
  /* 121a521a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a521d push edx */
  push32((uint32_t)(EDX));
  /* 121a521e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5221 push eax */
  push32((uint32_t)(EAX));
  /* 121a5222 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5224 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5227 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5228 call 0x121a5650 */
  push32(0x121a522du); f_121a5650();
  /* 121a522d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5230 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5235:;
  /* 121a5235 mov edx, dword ptr [0x121c3a68] */
  EDX = (r32((uint32_t)(0x121c3a68)));
  /* 121a523b mov dword ptr [0x121c3a78], edx */
  w32((uint32_t)(0x121c3a78), (EDX));
  /* 121a5241 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5244 push eax */
  push32((uint32_t)(EAX));
  /* 121a5245 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5248 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5249 push 3 */
  push32((uint32_t)(0x3u));
  /* 121a524b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a524e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a5251 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5254 push eax */
  push32((uint32_t)(EAX));
  /* 121a5255 call 0x121a5650 */
  push32(0x121a525au); f_121a5650();
  /* 121a525a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a525d jmp 0x121a5548 */
  goto L_121a5548;
L_121a5262:;
  /* 121a5262 mov ecx, dword ptr [0x121c3a68] */
  ECX = (r32((uint32_t)(0x121c3a68)));
  /* 121a5268 mov dword ptr [0x121c3a78], ecx */
  w32((uint32_t)(0x121c3a78), (ECX));
  /* 121a526e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5271 push edx */
  push32((uint32_t)(EDX));
  /* 121a5272 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5275 push eax */
  push32((uint32_t)(EAX));
  /* 121a5276 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5278 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a527b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121a527e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5281 push edx */
  push32((uint32_t)(EDX));
  /* 121a5282 call 0x121a5650 */
  push32(0x121a5287u); f_121a5650();
  /* 121a5287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a528a jmp 0x121a5548 */
  goto L_121a5548;
L_121a528f:;
  /* 121a528f mov eax, dword ptr [0x121c3a68] */
  EAX = (r32((uint32_t)(0x121c3a68)));
  /* 121a5294 mov dword ptr [0x121c3a78], eax */
  w32((uint32_t)(0x121c3a78), (EAX));
  /* 121a5299 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a529c push ecx */
  push32((uint32_t)(ECX));
  /* 121a529d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a52a0 push edx */
  push32((uint32_t)(EDX));
  /* 121a52a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a52a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a52a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121a52a9 push ecx */
  push32((uint32_t)(ECX));
  /* 121a52aa call 0x121a5650 */
  push32(0x121a52afu); f_121a5650();
  /* 121a52af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a52b2 jmp 0x121a5548 */
  goto L_121a5548;
L_121a52b7:;
  /* 121a52b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a52ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a52be jg 0x121a52dc */
  if ((!C.zf&&C.sf==C.of)) goto L_121a52dc;
  /* 121a52c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a52c3 push eax */
  push32((uint32_t)(EAX));
  /* 121a52c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a52c7 push ecx */
  push32((uint32_t)(ECX));
  /* 121a52c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a52cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 121a52d1 push eax */
  push32((uint32_t)(EAX));
  /* 121a52d2 call 0x121a5600 */
  push32(0x121a52d7u); f_121a5600();
  /* 121a52d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a52da jmp 0x121a52f6 */
  goto L_121a52f6;
L_121a52dc:;
  /* 121a52dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a52df push ecx */
  push32((uint32_t)(ECX));
  /* 121a52e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a52e3 push edx */
  push32((uint32_t)(EDX));
  /* 121a52e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a52e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 121a52ed push ecx */
  push32((uint32_t)(ECX));
  /* 121a52ee call 0x121a5600 */
  push32(0x121a52f3u); f_121a5600();
  /* 121a52f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a52f6:;
  /* 121a52f6 jmp 0x121a5548 */
  goto L_121a5548;
L_121a52fb:;
  /* 121a52fb mov edx, dword ptr [0x121c3a68] */
  EDX = (r32((uint32_t)(0x121c3a68)));
  /* 121a5301 mov dword ptr [0x121c3a78], edx */
  w32((uint32_t)(0x121c3a78), (EDX));
  /* 121a5307 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a530a push eax */
  push32((uint32_t)(EAX));
  /* 121a530b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a530e push ecx */
  push32((uint32_t)(ECX));
  /* 121a530f push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5311 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5314 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5316 push eax */
  push32((uint32_t)(EAX));
  /* 121a5317 call 0x121a5650 */
  push32(0x121a531cu); f_121a5650();
  /* 121a531c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a531f jmp 0x121a5548 */
  goto L_121a5548;
L_121a5324:;
  /* 121a5324 mov ecx, dword ptr [0x121c3a68] */
  ECX = (r32((uint32_t)(0x121c3a68)));
  /* 121a532a mov dword ptr [0x121c3a78], ecx */
  w32((uint32_t)(0x121c3a78), (ECX));
  /* 121a5330 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5333 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 121a5336 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a5339 jmp 0x121a538d */
  goto L_121a538d;
L_121a533b:;
  /* 121a533b mov ecx, dword ptr [0x121c3a68] */
  ECX = (r32((uint32_t)(0x121c3a68)));
  /* 121a5341 mov dword ptr [0x121c3a78], ecx */
  w32((uint32_t)(0x121c3a78), (ECX));
  /* 121a5347 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a534a push edx */
  push32((uint32_t)(EDX));
  /* 121a534b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a534e push eax */
  push32((uint32_t)(EAX));
  /* 121a534f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a5351 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5354 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121a5357 push edx */
  push32((uint32_t)(EDX));
  /* 121a5358 call 0x121a5650 */
  push32(0x121a535du); f_121a5650();
  /* 121a535d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5360 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5365:;
  /* 121a5365 mov eax, dword ptr [0x121c3a68] */
  EAX = (r32((uint32_t)(0x121c3a68)));
  /* 121a536a mov dword ptr [0x121c3a78], eax */
  w32((uint32_t)(0x121c3a78), (EAX));
  /* 121a536f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5372 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5376 jne 0x121a5381 */
  if (!C.zf) goto L_121a5381;
  /* 121a5378 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 121a537f jmp 0x121a538d */
  goto L_121a538d;
L_121a5381:;
  /* 121a5381 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5384 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 121a5387 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a538a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a538d:;
  /* 121a538d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5390 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121a5393 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5396 jge 0x121a53a1 */
  if ((C.sf==C.of)) goto L_121a53a1;
  /* 121a5398 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a539f jmp 0x121a53ce */
  goto L_121a53ce;
L_121a53a1:;
  /* 121a53a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a53a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121a53a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a53a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 121a53ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a53af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a53b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a53b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a53b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a53b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 121a53be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a53c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a53c3 jl 0x121a53ce */
  if ((C.sf!=C.of)) goto L_121a53ce;
  /* 121a53c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a53c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a53cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121a53ce:;
  /* 121a53ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a53d1 push eax */
  push32((uint32_t)(EAX));
  /* 121a53d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a53d5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a53d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a53d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a53db push edx */
  push32((uint32_t)(EDX));
  /* 121a53dc call 0x121a5650 */
  push32(0x121a53e1u); f_121a5650();
  /* 121a53e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a53e4 jmp 0x121a5548 */
  goto L_121a5548;
L_121a53e9:;
  /* 121a53e9 cmp dword ptr [0x121c3a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a53f0 je 0x121a5420 */
  if (C.zf) goto L_121a5420;
  /* 121a53f2 mov dword ptr [0x121c3a68], 0 */
  w32((uint32_t)(0x121c3a68), (0x0u));
  /* 121a53fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a53ff push eax */
  push32((uint32_t)(EAX));
  /* 121a5400 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5403 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5404 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5407 push edx */
  push32((uint32_t)(EDX));
  /* 121a5408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a540b push eax */
  push32((uint32_t)(EAX));
  /* 121a540c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a540f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 121a5415 push edx */
  push32((uint32_t)(EDX));
  /* 121a5416 call 0x121a57b0 */
  push32(0x121a541bu); f_121a57b0();
  /* 121a541b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a541e jmp 0x121a5442 */
  goto L_121a5442;
L_121a5420:;
  /* 121a5420 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5423 push eax */
  push32((uint32_t)(EAX));
  /* 121a5424 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5427 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5428 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a542b push edx */
  push32((uint32_t)(EDX));
  /* 121a542c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a542f push eax */
  push32((uint32_t)(EAX));
  /* 121a5430 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5433 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 121a5439 push edx */
  push32((uint32_t)(EDX));
  /* 121a543a call 0x121a57b0 */
  push32(0x121a543fu); f_121a57b0();
  /* 121a543f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a5442:;
  /* 121a5442 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5447:;
  /* 121a5447 mov dword ptr [0x121c3a68], 0 */
  w32((uint32_t)(0x121c3a68), (0x0u));
  /* 121a5451 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5454 push eax */
  push32((uint32_t)(EAX));
  /* 121a5455 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5458 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5459 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a545c push edx */
  push32((uint32_t)(EDX));
  /* 121a545d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5460 push eax */
  push32((uint32_t)(EAX));
  /* 121a5461 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5464 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 121a546a push edx */
  push32((uint32_t)(EDX));
  /* 121a546b call 0x121a57b0 */
  push32(0x121a5470u); f_121a57b0();
  /* 121a5470 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5473 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5478:;
  /* 121a5478 mov eax, dword ptr [0x121c3a68] */
  EAX = (r32((uint32_t)(0x121c3a68)));
  /* 121a547d mov dword ptr [0x121c3a78], eax */
  w32((uint32_t)(0x121c3a78), (EAX));
  /* 121a5482 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5485 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 121a5488 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a5489 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 121a548e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a5490 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a5493 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5496 push edx */
  push32((uint32_t)(EDX));
  /* 121a5497 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a549a push eax */
  push32((uint32_t)(EAX));
  /* 121a549b push 2 */
  push32((uint32_t)(0x2u));
  /* 121a549d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a54a0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a54a1 call 0x121a5650 */
  push32(0x121a54a6u); f_121a5650();
  /* 121a54a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a54a9 jmp 0x121a5548 */
  goto L_121a5548;
L_121a54ae:;
  /* 121a54ae mov edx, dword ptr [0x121c3a68] */
  EDX = (r32((uint32_t)(0x121c3a68)));
  /* 121a54b4 mov dword ptr [0x121c3a78], edx */
  w32((uint32_t)(0x121c3a78), (EDX));
  /* 121a54ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a54bd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 121a54c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a54c1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 121a54c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a54c8 mov ecx, eax */
  ECX = (EAX);
  /* 121a54ca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a54cd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a54d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a54d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121a54d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a54d7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 121a54dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a54de add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a54e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a54e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a54e6 push eax */
  push32((uint32_t)(EAX));
  /* 121a54e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a54ea push ecx */
  push32((uint32_t)(ECX));
  /* 121a54eb push 4 */
  push32((uint32_t)(0x4u));
  /* 121a54ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a54f0 push edx */
  push32((uint32_t)(EDX));
  /* 121a54f1 call 0x121a5650 */
  push32(0x121a54f6u); f_121a5650();
  /* 121a54f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a54f9 jmp 0x121a5548 */
  goto L_121a5548;
L_121a54fb:;
  /* 121a54fb call 0x121a6610 */
  push32(0x121a5500u); f_121a6610();
  /* 121a5500 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5503 push eax */
  push32((uint32_t)(EAX));
  /* 121a5504 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5507 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5508 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a550b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a550d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5511 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 121a5514 mov ecx, dword ptr [eax*4 + 0x121c2e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c2e1c)));
  /* 121a551b push ecx */
  push32((uint32_t)(ECX));
  /* 121a551c call 0x121a5600 */
  push32(0x121a5521u); f_121a5600();
  /* 121a5521 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5524 jmp 0x121a5548 */
  goto L_121a5548;
L_121a5526:;
  /* 121a5526 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5529 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a552b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 121a552e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5531 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5533 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5536 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5539 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a553b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a553e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5540 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5543 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5546 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121a5548:;
  /* 121a5548 pop esi */
  ESI = (pop32());
  /* 121a5549 mov esp, ebp */
  ESP = (EBP);
  /* 121a554b pop ebp */
  EBP = (pop32());
  /* 121a554c ret  */
  ESPCHK(0x121a4fe0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x121a5600 (72 bytes, 30 insns) */
void f_121a5600(void) {
  FTRACE(0x121a5600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a5600 push ebp */
  push32((uint32_t)(EBP));
  /* 121a5601 mov ebp, esp */
  EBP = (ESP);
L_121a5603:;
  /* 121a5603 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5606 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5609 je 0x121a5646 */
  if (C.zf) goto L_121a5646;
  /* 121a560b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a560e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a5611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a5613 je 0x121a5646 */
  if (C.zf) goto L_121a5646;
  /* 121a5615 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5618 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a561a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a561d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a561f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a5621 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5624 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5626 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5629 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a562c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a562e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5631 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5634 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121a5637 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a563a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a563c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a563f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5642 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a5644 jmp 0x121a5603 */
  goto L_121a5603;
L_121a5646:;
  /* 121a5646 pop ebp */
  EBP = (pop32());
  /* 121a5647 ret  */
  ESPCHK(0x121a5600u, _esp0);
  ESP += 4; return;
}

/* FUN_10015650 @ 0x121a5650 (173 bytes, 64 insns) */
void f_121a5650(void) {
  FTRACE(0x121a5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a5650 push ebp */
  push32((uint32_t)(EBP));
  /* 121a5651 mov ebp, esp */
  EBP = (ESP);
  /* 121a5653 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5654 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a565b cmp dword ptr [0x121c3a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5662 je 0x121a567a */
  if (C.zf) goto L_121a567a;
  /* 121a5664 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5667 push eax */
  push32((uint32_t)(EAX));
  /* 121a5668 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a566b push ecx */
  push32((uint32_t)(ECX));
  /* 121a566c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a566f push edx */
  push32((uint32_t)(EDX));
  /* 121a5670 call 0x121a5700 */
  push32(0x121a5675u); f_121a5700();
  /* 121a5675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5678 jmp 0x121a56f9 */
  goto L_121a56f9;
L_121a567a:;
  /* 121a567a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a567d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5680 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5682 jae 0x121a56f0 */
  if (!C.cf) goto L_121a56f0;
  /* 121a5684 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5687 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a568a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 121a568d jmp 0x121a5698 */
  goto L_121a5698;
L_121a568f:;
  /* 121a568f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5692 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5695 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_121a5698:;
  /* 121a5698 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a569b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a569e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a56a0 je 0x121a56d4 */
  if (C.zf) goto L_121a56d4;
  /* 121a56a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a56a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a56a6 mov ecx, 0xa */
  ECX = (0xau);
  /* 121a56ab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a56ad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a56b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a56b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a56b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a56b8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 121a56bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a56be cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a56bf mov ecx, 0xa */
  ECX = (0xau);
  /* 121a56c4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a56c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a56c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a56cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a56cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a56d2 jmp 0x121a568f */
  goto L_121a568f;
L_121a56d4:;
  /* 121a56d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a56d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a56d9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a56dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a56df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121a56e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a56e4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a56e6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a56e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a56ec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121a56ee jmp 0x121a56f9 */
  goto L_121a56f9;
L_121a56f0:;
  /* 121a56f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a56f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121a56f9:;
  /* 121a56f9 mov esp, ebp */
  ESP = (EBP);
  /* 121a56fb pop ebp */
  EBP = (pop32());
  /* 121a56fc ret  */
  ESPCHK(0x121a5650u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x121a5700 (172 bytes, 65 insns) */
void f_121a5700(void) {
  FTRACE(0x121a5700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a5700 push ebp */
  push32((uint32_t)(EBP));
  /* 121a5701 mov ebp, esp */
  EBP = (ESP);
  /* 121a5703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5706 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5709 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a570b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a570e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5711 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5714 jbe 0x121a575b */
  if ((C.cf||C.zf)) goto L_121a575b;
L_121a5716:;
  /* 121a5716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5719 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a571a mov ecx, 0xa */
  ECX = (0xau);
  /* 121a571f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a5721 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5727 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121a5729 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a572c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a572f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a5732 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5735 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5737 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a573a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a573d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a573f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5742 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a5743 mov ecx, 0xa */
  ECX = (0xau);
  /* 121a5748 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a574a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a574d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5751 jle 0x121a575b */
  if ((C.zf||C.sf!=C.of)) goto L_121a575b;
  /* 121a5753 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5756 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5759 ja 0x121a5716 */
  if ((!C.cf&&!C.zf)) goto L_121a5716;
L_121a575b:;
  /* 121a575b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a575e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5760 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a5763 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5769 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121a576b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a576e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5771 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a5774:;
  /* 121a5774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5777 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a5779 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 121a577c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a577f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a5782 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a5784 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a5786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5789 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a578c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a578f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a5792 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a5795 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121a5797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a579a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a579d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a57a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a57a3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a57a6 jb 0x121a5774 */
  if (C.cf) goto L_121a5774;
  /* 121a57a8 mov esp, ebp */
  ESP = (EBP);
  /* 121a57aa pop ebp */
  EBP = (pop32());
  /* 121a57ab ret  */
  ESPCHK(0x121a5700u, _esp0);
  ESP += 4; return;
}

/* FUN_100157b0 @ 0x121a57b0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_121a57b0(void) {
  FTRACE(0x121a57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a57b1 mov ebp, esp */
  EBP = (ESP);
  /* 121a57b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_121a57b6:;
  /* 121a57b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a57b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a57bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a57be je 0x121a5c2c */
  if (C.zf) goto L_121a5c2c;
  /* 121a57c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a57c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a57ca je 0x121a5c2c */
  if (C.zf) goto L_121a5c2c;
  /* 121a57d0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a57d4 mov dword ptr [0x121c3a78], 0 */
  w32((uint32_t)(0x121c3a78), (0x0u));
  /* 121a57de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a57e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a57e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a57eb jmp 0x121a57f6 */
  goto L_121a57f6;
L_121a57ed:;
  /* 121a57ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a57f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a57f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_121a57f6:;
  /* 121a57f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a57f9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a57fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a57ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a5802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5805 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5808 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a580b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a580d jne 0x121a5811 */
  if (!C.zf) goto L_121a5811;
  /* 121a580f jmp 0x121a57ed */
  goto L_121a57ed;
L_121a5811:;
  /* 121a5811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5814 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5817 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a581a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a581d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a5820 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a5823 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a5826 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5829 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a582c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5830 ja 0x121a5b80 */
  if ((!C.cf&&!C.zf)) goto L_121a5b80;
  /* 121a5836 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a5839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a583b mov al, byte ptr [ecx + 0x121a5c5c] */
  AL = (r8((uint32_t)(ECX + 0x121a5c5c)));
  /* 121a5841 jmp dword ptr [eax*4 + 0x121a5c30] */
  switch (EAX) {
    case 0: goto L_121a5a9f;
    case 1: goto L_121a5983;
    case 2: goto L_121a590e;
    case 3: goto L_121a5848;
    case 4: goto L_121a5886;
    case 5: goto L_121a58e7;
    case 6: goto L_121a5935;
    case 7: goto L_121a595c;
    case 8: goto L_121a59ca;
    case 9: goto L_121a58c4;
    case 10: goto L_121a5b80;
    default: x86_unimpl("switch@0x121a5841 out of table"); return;
  }
L_121a5848:;
  /* 121a5848 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a584b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121a584e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a5851 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5854 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121a5857 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a585b ja 0x121a5881 */
  if ((!C.cf&&!C.zf)) goto L_121a5881;
  /* 121a585d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a5860 jmp dword ptr [ecx*4 + 0x121a5caf] */
  switch (ECX) {
    case 0: goto L_121a5867;
    case 1: goto L_121a5871;
    case 2: goto L_121a5877;
    case 3: goto L_121a587d;
    case 4: goto L_121a58a5;
    case 5: goto L_121a58af;
    case 6: goto L_121a58b5;
    case 7: goto L_121a58bb;
    default: x86_unimpl("switch@0x121a5860 out of table"); return;
  }
L_121a5867:;
  /* 121a5867 mov dword ptr [0x121c3a78], 1 */
  w32((uint32_t)(0x121c3a78), (0x1u));
L_121a5871:;
  /* 121a5871 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 121a5875 jmp 0x121a5881 */
  goto L_121a5881;
L_121a5877:;
  /* 121a5877 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 121a587b jmp 0x121a5881 */
  goto L_121a5881;
L_121a587d:;
  /* 121a587d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_121a5881:;
  /* 121a5881 jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a5886:;
  /* 121a5886 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5889 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 121a588c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a588f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5892 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121a5895 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5899 ja 0x121a58bf */
  if ((!C.cf&&!C.zf)) goto L_121a58bf;
  /* 121a589b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a589e jmp dword ptr [ecx*4 + 0x121a5cbf] */
  switch (ECX) {
    case 0: goto L_121a58a5;
    case 1: goto L_121a58af;
    case 2: goto L_121a58b5;
    case 3: goto L_121a58bb;
    default: x86_unimpl("switch@0x121a589e out of table"); return;
  }
L_121a58a5:;
  /* 121a58a5 mov dword ptr [0x121c3a78], 1 */
  w32((uint32_t)(0x121c3a78), (0x1u));
L_121a58af:;
  /* 121a58af mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 121a58b3 jmp 0x121a58bf */
  goto L_121a58bf;
L_121a58b5:;
  /* 121a58b5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 121a58b9 jmp 0x121a58bf */
  goto L_121a58bf;
L_121a58bb:;
  /* 121a58bb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_121a58bf:;
  /* 121a58bf jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a58c4:;
  /* 121a58c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a58c7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121a58ca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a58ce je 0x121a58d8 */
  if (C.zf) goto L_121a58d8;
  /* 121a58d0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a58d4 je 0x121a58de */
  if (C.zf) goto L_121a58de;
  /* 121a58d6 jmp 0x121a58e2 */
  goto L_121a58e2;
L_121a58d8:;
  /* 121a58d8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 121a58dc jmp 0x121a58e2 */
  goto L_121a58e2;
L_121a58de:;
  /* 121a58de mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_121a58e2:;
  /* 121a58e2 jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a58e7:;
  /* 121a58e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a58ea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121a58ed cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a58f1 je 0x121a58fb */
  if (C.zf) goto L_121a58fb;
  /* 121a58f3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a58f7 je 0x121a5905 */
  if (C.zf) goto L_121a5905;
  /* 121a58f9 jmp 0x121a5909 */
  goto L_121a5909;
L_121a58fb:;
  /* 121a58fb mov dword ptr [0x121c3a78], 1 */
  w32((uint32_t)(0x121c3a78), (0x1u));
L_121a5905:;
  /* 121a5905 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_121a5909:;
  /* 121a5909 jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a590e:;
  /* 121a590e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5911 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 121a5914 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5918 je 0x121a5922 */
  if (C.zf) goto L_121a5922;
  /* 121a591a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a591e je 0x121a592c */
  if (C.zf) goto L_121a592c;
  /* 121a5920 jmp 0x121a5930 */
  goto L_121a5930;
L_121a5922:;
  /* 121a5922 mov dword ptr [0x121c3a78], 1 */
  w32((uint32_t)(0x121c3a78), (0x1u));
L_121a592c:;
  /* 121a592c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_121a5930:;
  /* 121a5930 jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a5935:;
  /* 121a5935 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5938 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 121a593b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a593f je 0x121a5949 */
  if (C.zf) goto L_121a5949;
  /* 121a5941 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5945 je 0x121a5953 */
  if (C.zf) goto L_121a5953;
  /* 121a5947 jmp 0x121a5957 */
  goto L_121a5957;
L_121a5949:;
  /* 121a5949 mov dword ptr [0x121c3a78], 1 */
  w32((uint32_t)(0x121c3a78), (0x1u));
L_121a5953:;
  /* 121a5953 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_121a5957:;
  /* 121a5957 jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a595c:;
  /* 121a595c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a595f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121a5962 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5966 je 0x121a5970 */
  if (C.zf) goto L_121a5970;
  /* 121a5968 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a596c je 0x121a597a */
  if (C.zf) goto L_121a597a;
  /* 121a596e jmp 0x121a597e */
  goto L_121a597e;
L_121a5970:;
  /* 121a5970 mov dword ptr [0x121c3a78], 1 */
  w32((uint32_t)(0x121c3a78), (0x1u));
L_121a597a:;
  /* 121a597a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_121a597e:;
  /* 121a597e jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a5983:;
  /* 121a5983 push 0x121bf944 */
  push32((uint32_t)(0x121bf944u));
  /* 121a5988 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a598b push ecx */
  push32((uint32_t)(ECX));
  /* 121a598c call 0x121a61e0 */
  push32(0x121a5991u); f_121a61e0();
  /* 121a5991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a5996 jne 0x121a59a3 */
  if (!C.zf) goto L_121a59a3;
  /* 121a5998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a599b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a599e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a59a1 jmp 0x121a59c1 */
  goto L_121a59c1;
L_121a59a3:;
  /* 121a59a3 push 0x121bf940 */
  push32((uint32_t)(0x121bf940u));
  /* 121a59a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a59ab push eax */
  push32((uint32_t)(EAX));
  /* 121a59ac call 0x121a61e0 */
  push32(0x121a59b1u); f_121a61e0();
  /* 121a59b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a59b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a59b6 jne 0x121a59c1 */
  if (!C.zf) goto L_121a59c1;
  /* 121a59b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a59bb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a59be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a59c1:;
  /* 121a59c1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 121a59c5 jmp 0x121a5b80 */
  goto L_121a5b80;
L_121a59ca:;
  /* 121a59ca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a59cd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a59d1 jg 0x121a59e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a59e1;
  /* 121a59d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a59d6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 121a59dc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121a59df jmp 0x121a59ed */
  goto L_121a59ed;
L_121a59e1:;
  /* 121a59e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a59e4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 121a59ea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121a59ed:;
  /* 121a59ed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a59f1 jle 0x121a5a94 */
  if ((C.zf||C.sf!=C.of)) goto L_121a5a94;
  /* 121a59f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a59fa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a59fd jbe 0x121a5a94 */
  if ((C.cf||C.zf)) goto L_121a5a94;
  /* 121a5a03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a5a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a5a08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a5a0a mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a5a10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a5a12 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a5a16 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121a5a1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a5a1e je 0x121a5a57 */
  if (C.zf) goto L_121a5a57;
  /* 121a5a20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5a23 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5a26 jbe 0x121a5a57 */
  if ((C.cf||C.zf)) goto L_121a5a57;
  /* 121a5a28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5a2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5a2d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a5a30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a5a32 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121a5a34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5a37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5a39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5a3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5a3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a5a41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a5a44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5a47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121a5a4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5a4d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5a4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5a52 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5a55 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121a5a57:;
  /* 121a5a57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5a5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5a5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a5a5f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a5a61 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a5a63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5a66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5a68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5a6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5a6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a5a70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a5a73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5a76 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121a5a79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5a7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5a7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5a81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5a84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a5a86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5a89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5a8c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121a5a8f jmp 0x121a59ed */
  goto L_121a59ed;
L_121a5a94:;
  /* 121a5a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5a97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a5a9a jmp 0x121a57b6 */
  goto L_121a57b6;
L_121a5a9f:;
  /* 121a5a9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5aa2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a5aa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a5aa7 je 0x121a5b72 */
  if (C.zf) goto L_121a5b72;
  /* 121a5aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5ab0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5ab3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121a5ab6:;
  /* 121a5ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5ab9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a5abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a5abe je 0x121a5b70 */
  if (C.zf) goto L_121a5b70;
  /* 121a5ac4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5ac7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5aca je 0x121a5b70 */
  if (C.zf) goto L_121a5b70;
  /* 121a5ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5ad3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a5ad6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5ad9 jne 0x121a5ae9 */
  if (!C.zf) goto L_121a5ae9;
  /* 121a5adb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5ade add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5ae1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121a5ae4 jmp 0x121a5b70 */
  goto L_121a5b70;
L_121a5ae9:;
  /* 121a5ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5aec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a5aee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a5af0 mov edx, dword ptr [0x121c1c98] */
  EDX = (r32((uint32_t)(0x121c1c98)));
  /* 121a5af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a5af8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 121a5afc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 121a5b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a5b03 je 0x121a5b3c */
  if (C.zf) goto L_121a5b3c;
  /* 121a5b05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5b08 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5b0b jbe 0x121a5b3c */
  if ((C.cf||C.zf)) goto L_121a5b3c;
  /* 121a5b0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5b12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5b15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a5b17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121a5b19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5b1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5b21 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121a5b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5b29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5b2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a5b2f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5b32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5b34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5b37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5b3a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121a5b3c:;
  /* 121a5b3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5b41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5b44 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a5b46 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121a5b48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5b4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5b50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b53 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a5b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5b58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5b5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121a5b5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5b61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5b63 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5b66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5b69 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121a5b6b jmp 0x121a5ab6 */
  goto L_121a5ab6;
L_121a5b70:;
  /* 121a5b70 jmp 0x121a5b7b */
  goto L_121a5b7b;
L_121a5b72:;
  /* 121a5b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5b75 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5b78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121a5b7b:;
  /* 121a5b7b jmp 0x121a57b6 */
  goto L_121a57b6;
L_121a5b80:;
  /* 121a5b80 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a5b84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a5b86 je 0x121a5bac */
  if (C.zf) goto L_121a5bac;
  /* 121a5b88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a5b8b push edx */
  push32((uint32_t)(EDX));
  /* 121a5b8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5b8f push eax */
  push32((uint32_t)(EAX));
  /* 121a5b90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5b94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5b97 push edx */
  push32((uint32_t)(EDX));
  /* 121a5b98 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 121a5b9b push eax */
  push32((uint32_t)(EAX));
  /* 121a5b9c call 0x121a4fe0 */
  push32(0x121a5ba1u); f_121a4fe0();
  /* 121a5ba1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5ba4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a5ba7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121a5baa jmp 0x121a5c27 */
  goto L_121a5c27;
L_121a5bac:;
  /* 121a5bac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5baf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a5bb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a5bb3 mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a5bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a5bbb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a5bbf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121a5bc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a5bc7 je 0x121a5bf8 */
  if (C.zf) goto L_121a5bf8;
  /* 121a5bc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5bcc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5bd1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a5bd3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a5bd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5bd8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5bda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5bdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5be0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a5be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5be8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121a5beb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5bee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5bf0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5bf3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5bf6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_121a5bf8:;
  /* 121a5bf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5bfb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a5bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5c00 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a5c02 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121a5c04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5c07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5c09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5c0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5c0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121a5c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a5c14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5c17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a5c1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5c1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a5c1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5c22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5c25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121a5c27:;
  /* 121a5c27 jmp 0x121a57b6 */
  goto L_121a57b6;
L_121a5c2c:;
  /* 121a5c2c mov esp, ebp */
  ESP = (EBP);
  /* 121a5c2e pop ebp */
  EBP = (pop32());
  /* 121a5c2f ret  */
  ESPCHK(0x121a57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cd0 @ 0x121a5cd0 (650 bytes, 178 insns) */
void f_121a5cd0(void) {
  FTRACE(0x121a5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 121a5cd3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a5cd9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5cdd jne 0x121a5e39 */
  if (!C.zf) goto L_121a5e39;
  /* 121a5ce3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5ce6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 121a5cec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 121a5cf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a5cf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a5cfc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 121a5d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5d08 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 121a5d0e push edx */
  push32((uint32_t)(EDX));
  /* 121a5d0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5d12 push eax */
  push32((uint32_t)(EAX));
  /* 121a5d13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5d16 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5d17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5d1a push edx */
  push32((uint32_t)(EDX));
  /* 121a5d1b call 0x121a70f0 */
  push32(0x121a5d20u); f_121a70f0();
  /* 121a5d20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5d23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a5d26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5d2a jne 0x121a5dbf */
  if (!C.zf) goto L_121a5dbf;
  /* 121a5d30 call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a5d36u);
  /* 121a5d36 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5d39 je 0x121a5d40 */
  if (C.zf) goto L_121a5d40;
  /* 121a5d3b jmp 0x121a5e1d */
  goto L_121a5e1d;
L_121a5d40:;
  /* 121a5d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5d46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5d49 push eax */
  push32((uint32_t)(EAX));
  /* 121a5d4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5d4d push ecx */
  push32((uint32_t)(ECX));
  /* 121a5d4e call 0x121a70f0 */
  push32(0x121a5d53u); f_121a70f0();
  /* 121a5d53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5d56 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 121a5d5c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5d63 jne 0x121a5d6a */
  if (!C.zf) goto L_121a5d6a;
  /* 121a5d65 jmp 0x121a5e1d */
  goto L_121a5e1d;
L_121a5d6a:;
  /* 121a5d6a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 121a5d6c push 0x121bf94c */
  push32((uint32_t)(0x121bf94cu));
  /* 121a5d71 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5d73 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 121a5d79 push edx */
  push32((uint32_t)(EDX));
  /* 121a5d7a call 0x12197b10 */
  push32(0x121a5d7fu); f_12197b10();
  /* 121a5d7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5d82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a5d85 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5d89 jne 0x121a5d90 */
  if (!C.zf) goto L_121a5d90;
  /* 121a5d8b jmp 0x121a5e1d */
  goto L_121a5e1d;
L_121a5d90:;
  /* 121a5d90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a5d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5d99 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 121a5d9f push eax */
  push32((uint32_t)(EAX));
  /* 121a5da0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5da3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5da4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5da7 push edx */
  push32((uint32_t)(EDX));
  /* 121a5da8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5dab push eax */
  push32((uint32_t)(EAX));
  /* 121a5dac call 0x121a70f0 */
  push32(0x121a5db1u); f_121a70f0();
  /* 121a5db1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5db4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a5db7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5dbb jne 0x121a5dbf */
  if (!C.zf) goto L_121a5dbf;
  /* 121a5dbd jmp 0x121a5e1d */
  goto L_121a5e1d;
L_121a5dbf:;
  /* 121a5dbf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 121a5dc1 push 0x121bf94c */
  push32((uint32_t)(0x121bf94cu));
  /* 121a5dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5dc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a5dcb push ecx */
  push32((uint32_t)(ECX));
  /* 121a5dcc call 0x12197b10 */
  push32(0x121a5dd1u); f_12197b10();
  /* 121a5dd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5dd4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 121a5dda mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121a5ddc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 121a5de2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5de5 jne 0x121a5de9 */
  if (!C.zf) goto L_121a5de9;
  /* 121a5de7 jmp 0x121a5e1d */
  goto L_121a5e1d;
L_121a5de9:;
  /* 121a5de9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a5dec push ecx */
  push32((uint32_t)(ECX));
  /* 121a5ded mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5df0 push edx */
  push32((uint32_t)(EDX));
  /* 121a5df1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 121a5df7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a5df9 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5dfa call 0x1219b330 */
  push32(0x121a5dffu); f_1219b330();
  /* 121a5dff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5e02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5e06 je 0x121a5e16 */
  if (C.zf) goto L_121a5e16;
  /* 121a5e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5e0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5e0d push edx */
  push32((uint32_t)(EDX));
  /* 121a5e0e call 0x121985a0 */
  push32(0x121a5e13u); f_121985a0();
  /* 121a5e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a5e16:;
  /* 121a5e16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a5e18 jmp 0x121a5f56 */
  goto L_121a5f56;
L_121a5e1d:;
  /* 121a5e1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5e21 je 0x121a5e31 */
  if (C.zf) goto L_121a5e31;
  /* 121a5e23 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a5e25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a5e28 push eax */
  push32((uint32_t)(EAX));
  /* 121a5e29 call 0x121985a0 */
  push32(0x121a5e2eu); f_121985a0();
  /* 121a5e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a5e31:;
  /* 121a5e31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a5e34 jmp 0x121a5f56 */
  goto L_121a5f56;
L_121a5e39:;
  /* 121a5e39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5e3d jne 0x121a5f53 */
  if (!C.zf) goto L_121a5f53;
  /* 121a5e43 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 121a5e4d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5e50 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 121a5e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5e58 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121a5e5e push edx */
  push32((uint32_t)(EDX));
  /* 121a5e5f push 0x121c3990 */
  push32((uint32_t)(0x121c3990u));
  /* 121a5e64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5e67 push eax */
  push32((uint32_t)(EAX));
  /* 121a5e68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a5e6b push ecx */
  push32((uint32_t)(ECX));
  /* 121a5e6c call 0x121a6f50 */
  push32(0x121a5e71u); f_121a6f50();
  /* 121a5e71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a5e76 jne 0x121a5e80 */
  if (!C.zf) goto L_121a5e80;
  /* 121a5e78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a5e7b jmp 0x121a5f56 */
  goto L_121a5f56;
L_121a5e80:;
  /* 121a5e80 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a5e86 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121a5e89 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 121a5e93 jmp 0x121a5ea4 */
  goto L_121a5ea4;
L_121a5e95:;
  /* 121a5e95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a5e9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5e9e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_121a5ea4:;
  /* 121a5ea4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5eab jge 0x121a5f4f */
  if ((C.sf==C.of)) goto L_121a5f4f;
  /* 121a5eb1 cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5eb8 jle 0x121a5eeb */
  if ((C.zf||C.sf!=C.of)) goto L_121a5eeb;
  /* 121a5eba push 4 */
  push32((uint32_t)(0x4u));
  /* 121a5ebc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a5ec2 mov dl, byte ptr [ecx*2 + 0x121c3990] */
  DL = (r8((uint32_t)(ECX*2 + 0x121c3990)));
  /* 121a5ec9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 121a5ecf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 121a5ed5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a5eda push eax */
  push32((uint32_t)(EAX));
  /* 121a5edb call 0x1219db20 */
  push32(0x121a5ee0u); f_1219db20();
  /* 121a5ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5ee3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 121a5ee9 jmp 0x121a5f1e */
  goto L_121a5f1e;
L_121a5eeb:;
  /* 121a5eeb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a5ef1 mov dl, byte ptr [ecx*2 + 0x121c3990] */
  DL = (r8((uint32_t)(ECX*2 + 0x121c3990)));
  /* 121a5ef8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 121a5efe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 121a5f04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a5f09 mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a5f0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a5f11 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a5f15 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121a5f18 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_121a5f1e:;
  /* 121a5f1e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5f25 je 0x121a5f48 */
  if (C.zf) goto L_121a5f48;
  /* 121a5f27 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a5f2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a5f30 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a5f33 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 121a5f3a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 121a5f3e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a5f44 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a5f46 jmp 0x121a5f4a */
  goto L_121a5f4a;
L_121a5f48:;
  /* 121a5f48 jmp 0x121a5f4f */
  goto L_121a5f4f;
L_121a5f4a:;
  /* 121a5f4a jmp 0x121a5e95 */
  goto L_121a5e95;
L_121a5f4f:;
  /* 121a5f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a5f51 jmp 0x121a5f56 */
  goto L_121a5f56;
L_121a5f53:;
  /* 121a5f53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121a5f56:;
  /* 121a5f56 mov esp, ebp */
  ESP = (EBP);
  /* 121a5f58 pop ebp */
  EBP = (pop32());
  /* 121a5f59 ret  */
  ESPCHK(0x121a5cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f60 @ 0x121a5f60 (10 bytes, 5 insns) */
void f_121a5f60(void) {
  FTRACE(0x121a5f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a5f60 push ebp */
  push32((uint32_t)(EBP));
  /* 121a5f61 mov ebp, esp */
  EBP = (ESP);
  /* 121a5f63 mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a5f68 pop ebp */
  EBP = (pop32());
  /* 121a5f69 ret  */
  ESPCHK(0x121a5f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f70 @ 0x121a5f70 (575 bytes, 196 insns) */
void f_121a5f70(void) {
  FTRACE(0x121a5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 121a5f71 mov ebp, esp */
  EBP = (ESP);
  /* 121a5f73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a5f75 push 0x121bf958 */
  push32((uint32_t)(0x121bf958u));
  /* 121a5f7a push 0x121a0c18 */
  push32((uint32_t)(0x121a0c18u));
  /* 121a5f7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121a5f85 push eax */
  push32((uint32_t)(EAX));
  /* 121a5f86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121a5f8d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a5f90 push ebx */
  push32((uint32_t)(EBX));
  /* 121a5f91 push esi */
  push32((uint32_t)(ESI));
  /* 121a5f92 push edi */
  push32((uint32_t)(EDI));
  /* 121a5f93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a5f96 cmp dword ptr [0x121c399c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c399c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5f9d jne 0x121a5fee */
  if (!C.zf) goto L_121a5fee;
  /* 121a5f9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 121a5fa2 push eax */
  push32((uint32_t)(EAX));
  /* 121a5fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a5fa5 push 0x121bf08c */
  push32((uint32_t)(0x121bf08cu));
  /* 121a5faa push 1 */
  push32((uint32_t)(0x1u));
  /* 121a5fac call dword ptr [0x121c62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d8))), 0x121a5fb2u);
  /* 121a5fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a5fb4 je 0x121a5fc2 */
  if (C.zf) goto L_121a5fc2;
  /* 121a5fb6 mov dword ptr [0x121c399c], 1 */
  w32((uint32_t)(0x121c399c), (0x1u));
  /* 121a5fc0 jmp 0x121a5fee */
  goto L_121a5fee;
L_121a5fc2:;
  /* 121a5fc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 121a5fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a5fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a5fc8 push 0x121bf088 */
  push32((uint32_t)(0x121bf088u));
  /* 121a5fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 121a5fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 121a5fd1 call dword ptr [0x121c62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e8))), 0x121a5fd7u);
  /* 121a5fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a5fd9 je 0x121a5fe7 */
  if (C.zf) goto L_121a5fe7;
  /* 121a5fdb mov dword ptr [0x121c399c], 2 */
  w32((uint32_t)(0x121c399c), (0x2u));
  /* 121a5fe5 jmp 0x121a5fee */
  goto L_121a5fee;
L_121a5fe7:;
  /* 121a5fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a5fe9 jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a5fee:;
  /* 121a5fee cmp dword ptr [0x121c399c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c399c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a5ff5 jne 0x121a6012 */
  if (!C.zf) goto L_121a6012;
  /* 121a5ff7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a5ffa push edx */
  push32((uint32_t)(EDX));
  /* 121a5ffb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a5ffe push eax */
  push32((uint32_t)(EAX));
  /* 121a5fff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a6002 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6006 push edx */
  push32((uint32_t)(EDX));
  /* 121a6007 call dword ptr [0x121c62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d8))), 0x121a600du);
  /* 121a600d jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a6012:;
  /* 121a6012 cmp dword ptr [0x121c399c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c399c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6019 jne 0x121a61c7 */
  if (!C.zf) goto L_121a61c7;
  /* 121a601f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6023 jne 0x121a602d */
  if (!C.zf) goto L_121a602d;
  /* 121a6025 mov eax, dword ptr [0x121c3910] */
  EAX = (r32((uint32_t)(0x121c3910)));
  /* 121a602a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_121a602d:;
  /* 121a602d push 0 */
  push32((uint32_t)(0x0u));
  /* 121a602f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6031 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6033 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6035 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6038 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a603c push edx */
  push32((uint32_t)(EDX));
  /* 121a603d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a6042 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a6045 push eax */
  push32((uint32_t)(EAX));
  /* 121a6046 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a604cu);
  /* 121a604c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121a604f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6053 jne 0x121a605c */
  if (!C.zf) goto L_121a605c;
  /* 121a6055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6057 jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a605c:;
  /* 121a605c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a6063 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a6066 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6069 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a606b call 0x1219acb0 */
  push32(0x121a6070u); f_1219acb0();
  /* 121a6070 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 121a6073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a6076 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a6079 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121a607c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a607f push edx */
  push32((uint32_t)(EDX));
  /* 121a6080 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6082 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a6085 push eax */
  push32((uint32_t)(EAX));
  /* 121a6086 call 0x1219b880 */
  push32(0x121a608bu); f_1219b880();
  /* 121a608b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a608e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a6095 jmp 0x121a60ae */
  goto L_121a60ae;
  /* 121a6097 mov eax, 1 */
  EAX = (0x1u);
  /* 121a609c ret  */
  ESPCHK(0x121a5f70u, _esp0);
  ESP += 4; return;
  /* 121a609d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a60a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 121a60a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a60ae:;
  /* 121a60ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a60b2 jne 0x121a60bb */
  if (!C.zf) goto L_121a60bb;
  /* 121a60b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a60b6 jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a60bb:;
  /* 121a60bb push 0 */
  push32((uint32_t)(0x0u));
  /* 121a60bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121a60bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a60c2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a60c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a60c6 push edx */
  push32((uint32_t)(EDX));
  /* 121a60c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a60ca push eax */
  push32((uint32_t)(EAX));
  /* 121a60cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a60ce push ecx */
  push32((uint32_t)(ECX));
  /* 121a60cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a60d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a60d7 push edx */
  push32((uint32_t)(EDX));
  /* 121a60d8 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a60deu);
  /* 121a60de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a60e0 jne 0x121a60e9 */
  if (!C.zf) goto L_121a60e9;
  /* 121a60e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a60e4 jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a60e9:;
  /* 121a60e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a60f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a60f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 121a60f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a60fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a60fc call 0x1219acb0 */
  push32(0x121a6101u); f_1219acb0();
  /* 121a6101 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 121a6104 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a6107 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 121a610a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121a610d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a6114 jmp 0x121a612d */
  goto L_121a612d;
  /* 121a6116 mov eax, 1 */
  EAX = (0x1u);
  /* 121a611b ret  */
  ESPCHK(0x121a5f70u, _esp0);
  ESP += 4; return;
  /* 121a611c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a611f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121a6126 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a612d:;
  /* 121a612d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6131 jne 0x121a613a */
  if (!C.zf) goto L_121a613a;
  /* 121a6133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6135 jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a613a:;
  /* 121a613a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a613e jne 0x121a6149 */
  if (!C.zf) goto L_121a6149;
  /* 121a6140 mov edx, dword ptr [0x121c3900] */
  EDX = (r32((uint32_t)(0x121c3900)));
  /* 121a6146 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_121a6149:;
  /* 121a6149 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a614c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a614f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 121a6155 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6158 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a615b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 121a6162 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a6165 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6166 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a6169 push edx */
  push32((uint32_t)(EDX));
  /* 121a616a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a616d push eax */
  push32((uint32_t)(EAX));
  /* 121a616e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6171 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6172 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a6175 push edx */
  push32((uint32_t)(EDX));
  /* 121a6176 call dword ptr [0x121c62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e8))), 0x121a617cu);
  /* 121a617c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121a617f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6182 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a6185 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6187 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 121a618c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6192 je 0x121a61a8 */
  if (C.zf) goto L_121a61a8;
  /* 121a6194 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6197 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a619a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a619c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a61a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a61a6 je 0x121a61ac */
  if (C.zf) goto L_121a61ac;
L_121a61a8:;
  /* 121a61a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a61aa jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a61ac:;
  /* 121a61ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a61af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a61b1 push eax */
  push32((uint32_t)(EAX));
  /* 121a61b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a61b5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a61b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a61b9 push edx */
  push32((uint32_t)(EDX));
  /* 121a61ba call 0x1219fa00 */
  push32(0x121a61bfu); f_1219fa00();
  /* 121a61bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a61c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a61c5 jmp 0x121a61c9 */
  goto L_121a61c9;
L_121a61c7:;
  /* 121a61c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a61c9:;
  /* 121a61c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 121a61cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a61cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121a61d6 pop edi */
  EDI = (pop32());
  /* 121a61d7 pop esi */
  ESI = (pop32());
  /* 121a61d8 pop ebx */
  EBX = (pop32());
  /* 121a61d9 mov esp, ebp */
  ESP = (EBP);
  /* 121a61db pop ebp */
  EBP = (pop32());
  /* 121a61dc ret  */
  ESPCHK(0x121a5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x121a61e0 (208 bytes, 85 insns) */
void f_121a61e0(void) {
  FTRACE(0x121a61e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a61e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a61e1 mov ebp, esp */
  EBP = (ESP);
  /* 121a61e3 push edi */
  push32((uint32_t)(EDI));
  /* 121a61e4 push esi */
  push32((uint32_t)(ESI));
  /* 121a61e5 push ebx */
  push32((uint32_t)(EBX));
  /* 121a61e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121a61e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 121a61ec lea eax, [0x121c38f8] */
  EAX = ((uint32_t)(0x121c38f8));
  /* 121a61f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a61f6 jne 0x121a6233 */
  if (!C.zf) goto L_121a6233;
  /* 121a61f8 mov al, 0xff */
  AL = (0xffu);
  /* 121a61fa mov edi, edi */
  EDI = (EDI);
L_121a61fc:;
  /* 121a61fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a61fe je 0x121a622e */
  if (C.zf) goto L_121a622e;
  /* 121a6200 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121a6202 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121a6203 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 121a6205 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121a6206 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a6208 je 0x121a61fc */
  if (C.zf) goto L_121a61fc;
  /* 121a620a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121a620c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a620e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121a6210 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121a6213 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121a6215 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121a6217 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 121a6219 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121a621b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a621d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121a621f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121a6222 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121a6224 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121a6226 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a6228 je 0x121a61fc */
  if (C.zf) goto L_121a61fc;
  /* 121a622a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121a622c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_121a622e:;
  /* 121a622e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 121a6231 jmp 0x121a62ab */
  goto L_121a62ab;
L_121a6233:;
  /* 121a6233 lock inc dword ptr [0x121c3a8c] */
  x86_unimpl("lock inc @ 0x121a6233");
  /* 121a623a cmp dword ptr [0x121c3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6241 jg 0x121a6247 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a6247;
  /* 121a6243 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6245 jmp 0x121a625c */
  goto L_121a625c;
L_121a6247:;
  /* 121a6247 lock dec dword ptr [0x121c3a8c] */
  x86_unimpl("lock dec @ 0x121a6247");
  /* 121a624e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a6250 call 0x1219b510 */
  push32(0x121a6255u); f_1219b510();
  /* 121a6255 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_121a625c:;
  /* 121a625c mov eax, 0xff */
  EAX = (0xffu);
  /* 121a6261 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121a6263 nop  */
  /* nop */
L_121a6264:;
  /* 121a6264 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a6266 je 0x121a628f */
  if (C.zf) goto L_121a628f;
  /* 121a6268 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121a626a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121a626b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121a626d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121a626e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a6270 je 0x121a6264 */
  if (C.zf) goto L_121a6264;
  /* 121a6272 push eax */
  push32((uint32_t)(EAX));
  /* 121a6273 push ebx */
  push32((uint32_t)(EBX));
  /* 121a6274 call 0x121a7350 */
  push32(0x121a6279u); f_121a7350();
  /* 121a6279 mov ebx, eax */
  EBX = (EAX);
  /* 121a627b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a627e call 0x121a7350 */
  push32(0x121a6283u); f_121a7350();
  /* 121a6283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6286 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a6288 je 0x121a6264 */
  if (C.zf) goto L_121a6264;
  /* 121a628a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a628c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121a628f:;
  /* 121a628f mov ebx, eax */
  EBX = (EAX);
  /* 121a6291 pop eax */
  EAX = (pop32());
  /* 121a6292 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6294 jne 0x121a629f */
  if (!C.zf) goto L_121a629f;
  /* 121a6296 lock dec dword ptr [0x121c3a8c] */
  x86_unimpl("lock dec @ 0x121a6296");
  /* 121a629d jmp 0x121a62a9 */
  goto L_121a62a9;
L_121a629f:;
  /* 121a629f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a62a1 call 0x1219b5b0 */
  push32(0x121a62a6u); f_1219b5b0();
  /* 121a62a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a62a9:;
  /* 121a62a9 mov eax, ebx */
  EAX = (EBX);
L_121a62ab:;
  /* 121a62ab pop ebx */
  EBX = (pop32());
  /* 121a62ac pop esi */
  ESI = (pop32());
  /* 121a62ad pop edi */
  EDI = (pop32());
  /* 121a62ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121a62af ret  */
  ESPCHK(0x121a61e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100162b0 @ 0x121a62b0 (257 bytes, 103 insns) */
void f_121a62b0(void) {
  FTRACE(0x121a62b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a62b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a62b1 mov ebp, esp */
  EBP = (ESP);
  /* 121a62b3 push edi */
  push32((uint32_t)(EDI));
  /* 121a62b4 push esi */
  push32((uint32_t)(ESI));
  /* 121a62b5 push ebx */
  push32((uint32_t)(EBX));
  /* 121a62b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a62b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a62bb je 0x121a63aa */
  if (C.zf) goto L_121a63aa;
  /* 121a62c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 121a62c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 121a62c7 lea eax, [0x121c38f8] */
  EAX = ((uint32_t)(0x121c38f8));
  /* 121a62cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a62d1 jne 0x121a6321 */
  if (!C.zf) goto L_121a6321;
  /* 121a62d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 121a62d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 121a62d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 121a62d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121a62dc:;
  /* 121a62dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 121a62de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121a62e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 121a62e2 je 0x121a6305 */
  if (C.zf) goto L_121a6305;
  /* 121a62e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a62e6 je 0x121a6305 */
  if (C.zf) goto L_121a6305;
  /* 121a62e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121a62e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121a62ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a62ec jb 0x121a62f4 */
  if (C.cf) goto L_121a62f4;
  /* 121a62ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a62f0 ja 0x121a62f4 */
  if ((!C.cf&&!C.zf)) goto L_121a62f4;
  /* 121a62f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_121a62f4:;
  /* 121a62f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a62f6 jb 0x121a62fe */
  if (C.cf) goto L_121a62fe;
  /* 121a62f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a62fa ja 0x121a62fe */
  if ((!C.cf&&!C.zf)) goto L_121a62fe;
  /* 121a62fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_121a62fe:;
  /* 121a62fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a6300 jne 0x121a630f */
  if (!C.zf) goto L_121a630f;
  /* 121a6302 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121a6303 jne 0x121a62dc */
  if (!C.zf) goto L_121a62dc;
L_121a6305:;
  /* 121a6305 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6307 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a6309 je 0x121a63aa */
  if (C.zf) goto L_121a63aa;
L_121a630f:;
  /* 121a630f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 121a6314 jb 0x121a63aa */
  if (C.cf) goto L_121a63aa;
  /* 121a631a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a631c jmp 0x121a63aa */
  goto L_121a63aa;
L_121a6321:;
  /* 121a6321 lock inc dword ptr [0x121c3a8c] */
  x86_unimpl("lock inc @ 0x121a6321");
  /* 121a6328 cmp dword ptr [0x121c3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a632f jg 0x121a6335 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a6335;
  /* 121a6331 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6333 jmp 0x121a634e */
  goto L_121a634e;
L_121a6335:;
  /* 121a6335 lock dec dword ptr [0x121c3a8c] */
  x86_unimpl("lock dec @ 0x121a6335");
  /* 121a633c mov ebx, ecx */
  EBX = (ECX);
  /* 121a633e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a6340 call 0x1219b510 */
  push32(0x121a6345u); f_1219b510();
  /* 121a6345 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 121a634c mov ecx, ebx */
  ECX = (EBX);
L_121a634e:;
  /* 121a634e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6350 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121a6352 mov edi, edi */
  EDI = (EDI);
L_121a6354:;
  /* 121a6354 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121a6356 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6358 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121a635a je 0x121a637f */
  if (C.zf) goto L_121a637f;
  /* 121a635c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121a635e je 0x121a637f */
  if (C.zf) goto L_121a637f;
  /* 121a6360 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121a6361 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121a6362 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6363 push eax */
  push32((uint32_t)(EAX));
  /* 121a6364 push ebx */
  push32((uint32_t)(EBX));
  /* 121a6365 call 0x121a7350 */
  push32(0x121a636au); f_121a7350();
  /* 121a636a mov ebx, eax */
  EBX = (EAX);
  /* 121a636c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a636f call 0x121a7350 */
  push32(0x121a6374u); f_121a7350();
  /* 121a6374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6377 pop ecx */
  ECX = (pop32());
  /* 121a6378 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a637a jne 0x121a6385 */
  if (!C.zf) goto L_121a6385;
  /* 121a637c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121a637d jne 0x121a6354 */
  if (!C.zf) goto L_121a6354;
L_121a637f:;
  /* 121a637f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6381 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6383 je 0x121a638e */
  if (C.zf) goto L_121a638e;
L_121a6385:;
  /* 121a6385 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 121a638a jb 0x121a638e */
  if (C.cf) goto L_121a638e;
  /* 121a638c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_121a638e:;
  /* 121a638e pop eax */
  EAX = (pop32());
  /* 121a638f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6391 jne 0x121a639c */
  if (!C.zf) goto L_121a639c;
  /* 121a6393 lock dec dword ptr [0x121c3a8c] */
  x86_unimpl("lock dec @ 0x121a6393");
  /* 121a639a jmp 0x121a63aa */
  goto L_121a63aa;
L_121a639c:;
  /* 121a639c mov ebx, ecx */
  EBX = (ECX);
  /* 121a639e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a63a0 call 0x1219b5b0 */
  push32(0x121a63a5u); f_1219b5b0();
  /* 121a63a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a63a8 mov ecx, ebx */
  ECX = (EBX);
L_121a63aa:;
  /* 121a63aa mov eax, ecx */
  EAX = (ECX);
  /* 121a63ac pop ebx */
  EBX = (pop32());
  /* 121a63ad pop esi */
  ESI = (pop32());
  /* 121a63ae pop edi */
  EDI = (pop32());
  /* 121a63af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121a63b0 ret  */
  ESPCHK(0x121a62b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163c0 @ 0x121a63c0 (255 bytes, 88 insns) */
void f_121a63c0(void) {
  FTRACE(0x121a63c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a63c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a63c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a63c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_121a63c6:;
  /* 121a63c6 cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a63cd jle 0x121a63e6 */
  if ((C.zf||C.sf!=C.of)) goto L_121a63e6;
  /* 121a63cf push 8 */
  push32((uint32_t)(0x8u));
  /* 121a63d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a63d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a63d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a63d8 push ecx */
  push32((uint32_t)(ECX));
  /* 121a63d9 call 0x1219db20 */
  push32(0x121a63deu); f_1219db20();
  /* 121a63de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a63e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121a63e4 jmp 0x121a63ff */
  goto L_121a63ff;
L_121a63e6:;
  /* 121a63e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a63e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a63eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a63ed mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a63f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a63f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a63f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 121a63fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a63ff:;
  /* 121a63ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6403 je 0x121a6410 */
  if (C.zf) goto L_121a6410;
  /* 121a6405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6408 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a640b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a640e jmp 0x121a63c6 */
  goto L_121a63c6;
L_121a6410:;
  /* 121a6410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6413 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6415 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a6417 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a641a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a641d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6420 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a6423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6426 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a6429 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a642d je 0x121a6435 */
  if (C.zf) goto L_121a6435;
  /* 121a642f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6433 jne 0x121a6448 */
  if (!C.zf) goto L_121a6448;
L_121a6435:;
  /* 121a6435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a643a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a643c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a643f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6442 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6445 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121a6448:;
  /* 121a6448 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121a644f:;
  /* 121a644f cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6456 jle 0x121a646b */
  if ((C.zf||C.sf!=C.of)) goto L_121a646b;
  /* 121a6458 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a645a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a645d push edx */
  push32((uint32_t)(EDX));
  /* 121a645e call 0x1219db20 */
  push32(0x121a6463u); f_1219db20();
  /* 121a6463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6466 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a6469 jmp 0x121a6480 */
  goto L_121a6480;
L_121a646b:;
  /* 121a646b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a646e mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a6474 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6476 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a647a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121a647d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_121a6480:;
  /* 121a6480 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6484 je 0x121a64ab */
  if (C.zf) goto L_121a64ab;
  /* 121a6486 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6489 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a648c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a648f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 121a6493 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a6496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6499 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a649b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a649d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a64a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a64a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a64a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121a64a9 jmp 0x121a644f */
  goto L_121a644f;
L_121a64ab:;
  /* 121a64ab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a64af jne 0x121a64b8 */
  if (!C.zf) goto L_121a64b8;
  /* 121a64b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a64b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a64b6 jmp 0x121a64bb */
  goto L_121a64bb;
L_121a64b8:;
  /* 121a64b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121a64bb:;
  /* 121a64bb mov esp, ebp */
  ESP = (EBP);
  /* 121a64bd pop ebp */
  EBP = (pop32());
  /* 121a64be ret  */
  ESPCHK(0x121a63c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100164c0 @ 0x121a64c0 (17 bytes, 8 insns) */
void f_121a64c0(void) {
  FTRACE(0x121a64c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a64c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a64c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a64c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a64c6 push eax */
  push32((uint32_t)(EAX));
  /* 121a64c7 call 0x121a63c0 */
  push32(0x121a64ccu); f_121a63c0();
  /* 121a64cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a64cf pop ebp */
  EBP = (pop32());
  /* 121a64d0 ret  */
  ESPCHK(0x121a64c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100164e0 @ 0x121a64e0 (297 bytes, 106 insns) */
void f_121a64e0(void) {
  FTRACE(0x121a64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a64e1 mov ebp, esp */
  EBP = (ESP);
  /* 121a64e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a64e6 push esi */
  push32((uint32_t)(ESI));
L_121a64e7:;
  /* 121a64e7 cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a64ee jle 0x121a6507 */
  if ((C.zf||C.sf!=C.of)) goto L_121a6507;
  /* 121a64f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 121a64f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a64f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a64f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a64f9 push ecx */
  push32((uint32_t)(ECX));
  /* 121a64fa call 0x1219db20 */
  push32(0x121a64ffu); f_1219db20();
  /* 121a64ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6502 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a6505 jmp 0x121a6520 */
  goto L_121a6520;
L_121a6507:;
  /* 121a6507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a650a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a650c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a650e mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a6514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6516 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a651a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 121a651d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_121a6520:;
  /* 121a6520 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6524 je 0x121a6531 */
  if (C.zf) goto L_121a6531;
  /* 121a6526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a652c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a652f jmp 0x121a64e7 */
  goto L_121a64e7;
L_121a6531:;
  /* 121a6531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6534 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a6538 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a653b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a653e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6541 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a6544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6547 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121a654a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a654e je 0x121a6556 */
  if (C.zf) goto L_121a6556;
  /* 121a6550 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6554 jne 0x121a6569 */
  if (!C.zf) goto L_121a6569;
L_121a6556:;
  /* 121a6556 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a655b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a655d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a6560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6563 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6566 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121a6569:;
  /* 121a6569 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a6570 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121a6577:;
  /* 121a6577 cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a657e jle 0x121a6593 */
  if ((C.zf||C.sf!=C.of)) goto L_121a6593;
  /* 121a6580 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a6582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6585 push edx */
  push32((uint32_t)(EDX));
  /* 121a6586 call 0x1219db20 */
  push32(0x121a658bu); f_1219db20();
  /* 121a658b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a658e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121a6591 jmp 0x121a65a8 */
  goto L_121a65a8;
L_121a6593:;
  /* 121a6593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6596 mov ecx, dword ptr [0x121c1c98] */
  ECX = (r32((uint32_t)(0x121c1c98)));
  /* 121a659c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a659e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121a65a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121a65a5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_121a65a8:;
  /* 121a65a8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a65ac je 0x121a65e9 */
  if (C.zf) goto L_121a65e9;
  /* 121a65ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121a65b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 121a65b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a65b5 push eax */
  push32((uint32_t)(EAX));
  /* 121a65b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a65b9 push ecx */
  push32((uint32_t)(ECX));
  /* 121a65ba call 0x121a7480 */
  push32(0x121a65bfu); f_121a7480();
  /* 121a65bf mov ecx, eax */
  ECX = (EAX);
  /* 121a65c1 mov esi, edx */
  ESI = (EDX);
  /* 121a65c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a65c6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a65c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a65ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a65cc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121a65ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a65d1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 121a65d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a65d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a65d9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a65db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a65de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a65e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a65e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121a65e7 jmp 0x121a6577 */
  goto L_121a6577;
L_121a65e9:;
  /* 121a65e9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a65ed jne 0x121a65fe */
  if (!C.zf) goto L_121a65fe;
  /* 121a65ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a65f2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a65f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a65f7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a65fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a65fc jmp 0x121a6604 */
  goto L_121a6604;
L_121a65fe:;
  /* 121a65fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6601 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_121a6604:;
  /* 121a6604 pop esi */
  ESI = (pop32());
  /* 121a6605 mov esp, ebp */
  ESP = (EBP);
  /* 121a6607 pop ebp */
  EBP = (pop32());
  /* 121a6608 ret  */
  ESPCHK(0x121a64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016610 @ 0x121a6610 (61 bytes, 18 insns) */
void f_121a6610(void) {
  FTRACE(0x121a6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6610 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6611 mov ebp, esp */
  EBP = (ESP);
  /* 121a6613 cmp dword ptr [0x121c3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a661a jne 0x121a664b */
  if (!C.zf) goto L_121a664b;
  /* 121a661c push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a661e call 0x1219b510 */
  push32(0x121a6623u); f_1219b510();
  /* 121a6623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6626 cmp dword ptr [0x121c3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a662d jne 0x121a6641 */
  if (!C.zf) goto L_121a6641;
  /* 121a662f call 0x121a6670 */
  push32(0x121a6634u); f_121a6670();
  /* 121a6634 mov eax, dword ptr [0x121c3a58] */
  EAX = (r32((uint32_t)(0x121c3a58)));
  /* 121a6639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a663c mov dword ptr [0x121c3a58], eax */
  w32((uint32_t)(0x121c3a58), (EAX));
L_121a6641:;
  /* 121a6641 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a6643 call 0x1219b5b0 */
  push32(0x121a6648u); f_1219b5b0();
  /* 121a6648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a664b:;
  /* 121a664b pop ebp */
  EBP = (pop32());
  /* 121a664c ret  */
  ESPCHK(0x121a6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10016650 @ 0x121a6650 (30 bytes, 11 insns) */
void f_121a6650(void) {
  FTRACE(0x121a6650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6650 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6651 mov ebp, esp */
  EBP = (ESP);
  /* 121a6653 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a6655 call 0x1219b510 */
  push32(0x121a665au); f_1219b510();
  /* 121a665a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a665d call 0x121a6670 */
  push32(0x121a6662u); f_121a6670();
  /* 121a6662 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a6664 call 0x1219b5b0 */
  push32(0x121a6669u); f_1219b5b0();
  /* 121a6669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a666c pop ebp */
  EBP = (pop32());
  /* 121a666d ret  */
  ESPCHK(0x121a6650u, _esp0);
  ESP += 4; return;
}

/* FUN_10016670 @ 0x121a6670 (939 bytes, 266 insns) */
void f_121a6670(void) {
  FTRACE(0x121a6670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6670 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6671 mov ebp, esp */
  EBP = (ESP);
  /* 121a6673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6676 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a667d push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a667f call 0x1219b510 */
  push32(0x121a6684u); f_1219b510();
  /* 121a6684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6687 mov dword ptr [0x121c39a0], 0 */
  w32((uint32_t)(0x121c39a0), (0x0u));
  /* 121a6691 mov dword ptr [0x121c2e38], 0xffffffff */
  w32((uint32_t)(0x121c2e38), (0xffffffffu));
  /* 121a669b mov eax, dword ptr [0x121c2e38] */
  EAX = (r32((uint32_t)(0x121c2e38)));
  /* 121a66a0 mov dword ptr [0x121c2e28], eax */
  w32((uint32_t)(0x121c2e28), (EAX));
  /* 121a66a5 push 0x121bf9b8 */
  push32((uint32_t)(0x121bf9b8u));
  /* 121a66aa call 0x121a74f0 */
  push32(0x121a66afu); f_121a74f0();
  /* 121a66af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a66b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a66b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a66b9 jne 0x121a67f3 */
  if (!C.zf) goto L_121a67f3;
  /* 121a66bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a66c1 call 0x1219b5b0 */
  push32(0x121a66c6u); f_1219b5b0();
  /* 121a66c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a66c9 push 0x121c39a8 */
  push32((uint32_t)(0x121c39a8u));
  /* 121a66ce call dword ptr [0x121c629c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c629c))), 0x121a66d4u);
  /* 121a66d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a66d7 je 0x121a67ee */
  if (C.zf) goto L_121a67ee;
  /* 121a66dd mov dword ptr [0x121c39a0], 1 */
  w32((uint32_t)(0x121c39a0), (0x1u));
  /* 121a66e7 mov ecx, dword ptr [0x121c39a8] */
  ECX = (r32((uint32_t)(0x121c39a8)));
  /* 121a66ed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a66f0 mov dword ptr [0x121c2d90], ecx */
  w32((uint32_t)(0x121c2d90), (ECX));
  /* 121a66f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a66f8 mov dx, word ptr [0x121c39ee] */
  DX = (r16((uint32_t)(0x121c39ee)));
  /* 121a66ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a6701 je 0x121a6719 */
  if (C.zf) goto L_121a6719;
  /* 121a6703 mov eax, dword ptr [0x121c39fc] */
  EAX = (r32((uint32_t)(0x121c39fc)));
  /* 121a6708 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a670b mov ecx, dword ptr [0x121c2d90] */
  ECX = (r32((uint32_t)(0x121c2d90)));
  /* 121a6711 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6713 mov dword ptr [0x121c2d90], ecx */
  w32((uint32_t)(0x121c2d90), (ECX));
L_121a6719:;
  /* 121a6719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a671b mov dx, word ptr [0x121c3a42] */
  DX = (r16((uint32_t)(0x121c3a42)));
  /* 121a6722 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a6724 je 0x121a674e */
  if (C.zf) goto L_121a674e;
  /* 121a6726 cmp dword ptr [0x121c3a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a672d je 0x121a674e */
  if (C.zf) goto L_121a674e;
  /* 121a672f mov dword ptr [0x121c2d94], 1 */
  w32((uint32_t)(0x121c2d94), (0x1u));
  /* 121a6739 mov eax, dword ptr [0x121c3a50] */
  EAX = (r32((uint32_t)(0x121c3a50)));
  /* 121a673e sub eax, dword ptr [0x121c39fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c39fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6744 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6747 mov dword ptr [0x121c2d98], eax */
  w32((uint32_t)(0x121c2d98), (EAX));
  /* 121a674c jmp 0x121a6762 */
  goto L_121a6762;
L_121a674e:;
  /* 121a674e mov dword ptr [0x121c2d94], 0 */
  w32((uint32_t)(0x121c2d94), (0x0u));
  /* 121a6758 mov dword ptr [0x121c2d98], 0 */
  w32((uint32_t)(0x121c2d98), (0x0u));
L_121a6762:;
  /* 121a6762 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121a6765 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6766 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6768 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121a676a mov edx, dword ptr [0x121c2e1c] */
  EDX = (r32((uint32_t)(0x121c2e1c)));
  /* 121a6770 push edx */
  push32((uint32_t)(EDX));
  /* 121a6771 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a6773 push 0x121c39ac */
  push32((uint32_t)(0x121c39acu));
  /* 121a6778 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a677d mov eax, dword ptr [0x121c3910] */
  EAX = (r32((uint32_t)(0x121c3910)));
  /* 121a6782 push eax */
  push32((uint32_t)(EAX));
  /* 121a6783 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a6789u);
  /* 121a6789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a678b je 0x121a679f */
  if (C.zf) goto L_121a679f;
  /* 121a678d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6791 jne 0x121a679f */
  if (!C.zf) goto L_121a679f;
  /* 121a6793 mov ecx, dword ptr [0x121c2e1c] */
  ECX = (r32((uint32_t)(0x121c2e1c)));
  /* 121a6799 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 121a679d jmp 0x121a67a8 */
  goto L_121a67a8;
L_121a679f:;
  /* 121a679f mov edx, dword ptr [0x121c2e1c] */
  EDX = (r32((uint32_t)(0x121c2e1c)));
  /* 121a67a5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_121a67a8:;
  /* 121a67a8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121a67ab push eax */
  push32((uint32_t)(EAX));
  /* 121a67ac push 0 */
  push32((uint32_t)(0x0u));
  /* 121a67ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121a67b0 mov ecx, dword ptr [0x121c2e20] */
  ECX = (r32((uint32_t)(0x121c2e20)));
  /* 121a67b6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a67b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a67b9 push 0x121c3a00 */
  push32((uint32_t)(0x121c3a00u));
  /* 121a67be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a67c3 mov edx, dword ptr [0x121c3910] */
  EDX = (r32((uint32_t)(0x121c3910)));
  /* 121a67c9 push edx */
  push32((uint32_t)(EDX));
  /* 121a67ca call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a67d0u);
  /* 121a67d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a67d2 je 0x121a67e5 */
  if (C.zf) goto L_121a67e5;
  /* 121a67d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a67d8 jne 0x121a67e5 */
  if (!C.zf) goto L_121a67e5;
  /* 121a67da mov eax, dword ptr [0x121c2e20] */
  EAX = (r32((uint32_t)(0x121c2e20)));
  /* 121a67df mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 121a67e3 jmp 0x121a67ee */
  goto L_121a67ee;
L_121a67e5:;
  /* 121a67e5 mov ecx, dword ptr [0x121c2e20] */
  ECX = (r32((uint32_t)(0x121c2e20)));
  /* 121a67eb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_121a67ee:;
  /* 121a67ee jmp 0x121a6a17 */
  goto L_121a6a17;
L_121a67f3:;
  /* 121a67f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a67f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a67f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a67fb je 0x121a681d */
  if (C.zf) goto L_121a681d;
  /* 121a67fd cmp dword ptr [0x121c3a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6804 je 0x121a682c */
  if (C.zf) goto L_121a682c;
  /* 121a6806 mov ecx, dword ptr [0x121c3a54] */
  ECX = (r32((uint32_t)(0x121c3a54)));
  /* 121a680c push ecx */
  push32((uint32_t)(ECX));
  /* 121a680d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6810 push edx */
  push32((uint32_t)(EDX));
  /* 121a6811 call 0x121a37a0 */
  push32(0x121a6816u); f_121a37a0();
  /* 121a6816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a681b jne 0x121a682c */
  if (!C.zf) goto L_121a682c;
L_121a681d:;
  /* 121a681d push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a681f call 0x1219b5b0 */
  push32(0x121a6824u); f_1219b5b0();
  /* 121a6824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6827 jmp 0x121a6a17 */
  goto L_121a6a17;
L_121a682c:;
  /* 121a682c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a682e mov eax, dword ptr [0x121c3a54] */
  EAX = (r32((uint32_t)(0x121c3a54)));
  /* 121a6833 push eax */
  push32((uint32_t)(EAX));
  /* 121a6834 call 0x121985a0 */
  push32(0x121a6839u); f_121985a0();
  /* 121a6839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a683c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 121a6841 push 0x121bf9b0 */
  push32((uint32_t)(0x121bf9b0u));
  /* 121a6846 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a6848 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a684b push ecx */
  push32((uint32_t)(ECX));
  /* 121a684c call 0x1219a940 */
  push32(0x121a6851u); f_1219a940();
  /* 121a6851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6854 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6857 push eax */
  push32((uint32_t)(EAX));
  /* 121a6858 call 0x12197b10 */
  push32(0x121a685du); f_12197b10();
  /* 121a685d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6860 mov dword ptr [0x121c3a54], eax */
  w32((uint32_t)(0x121c3a54), (EAX));
  /* 121a6865 cmp dword ptr [0x121c3a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a686c jne 0x121a687d */
  if (!C.zf) goto L_121a687d;
  /* 121a686e push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a6870 call 0x1219b5b0 */
  push32(0x121a6875u); f_1219b5b0();
  /* 121a6875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6878 jmp 0x121a6a17 */
  goto L_121a6a17;
L_121a687d:;
  /* 121a687d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6880 push edx */
  push32((uint32_t)(EDX));
  /* 121a6881 mov eax, dword ptr [0x121c3a54] */
  EAX = (r32((uint32_t)(0x121c3a54)));
  /* 121a6886 push eax */
  push32((uint32_t)(EAX));
  /* 121a6887 call 0x1219aac0 */
  push32(0x121a688cu); f_1219aac0();
  /* 121a688c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a688f push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a6891 call 0x1219b5b0 */
  push32(0x121a6896u); f_1219b5b0();
  /* 121a6896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6899 push 3 */
  push32((uint32_t)(0x3u));
  /* 121a689b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a689e push ecx */
  push32((uint32_t)(ECX));
  /* 121a689f mov edx, dword ptr [0x121c2e1c] */
  EDX = (r32((uint32_t)(0x121c2e1c)));
  /* 121a68a5 push edx */
  push32((uint32_t)(EDX));
  /* 121a68a6 call 0x1219b330 */
  push32(0x121a68abu); f_1219b330();
  /* 121a68ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a68ae mov eax, dword ptr [0x121c2e1c] */
  EAX = (r32((uint32_t)(0x121c2e1c)));
  /* 121a68b3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 121a68b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a68ba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a68bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a68c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a68c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a68c6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a68c9 jne 0x121a68dd */
  if (!C.zf) goto L_121a68dd;
  /* 121a68cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a68ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a68d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a68d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a68d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a68da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121a68dd:;
  /* 121a68dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a68e0 push eax */
  push32((uint32_t)(EAX));
  /* 121a68e1 call 0x121a63c0 */
  push32(0x121a68e6u); f_121a63c0();
  /* 121a68e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a68e9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a68ef mov dword ptr [0x121c2d90], eax */
  w32((uint32_t)(0x121c2d90), (EAX));
L_121a68f4:;
  /* 121a68f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a68f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a68fa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a68fd je 0x121a6915 */
  if (C.zf) goto L_121a6915;
  /* 121a68ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6902 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a6905 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6908 jl 0x121a6920 */
  if ((C.sf!=C.of)) goto L_121a6920;
  /* 121a690a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a690d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a6910 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6913 jg 0x121a6920 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a6920;
L_121a6915:;
  /* 121a6915 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6918 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a691b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a691e jmp 0x121a68f4 */
  goto L_121a68f4;
L_121a6920:;
  /* 121a6920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6923 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a6926 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6929 jne 0x121a69c5 */
  if (!C.zf) goto L_121a69c5;
  /* 121a692f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6932 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6935 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a6938 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a693b push edx */
  push32((uint32_t)(EDX));
  /* 121a693c call 0x121a63c0 */
  push32(0x121a6941u); f_121a63c0();
  /* 121a6941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6944 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6947 mov ecx, dword ptr [0x121c2d90] */
  ECX = (r32((uint32_t)(0x121c2d90)));
  /* 121a694d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a694f mov dword ptr [0x121c2d90], ecx */
  w32((uint32_t)(0x121c2d90), (ECX));
L_121a6955:;
  /* 121a6955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6958 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a695b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a695e jl 0x121a6976 */
  if ((C.sf!=C.of)) goto L_121a6976;
  /* 121a6960 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6963 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a6966 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6969 jg 0x121a6976 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a6976;
  /* 121a696b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a696e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6971 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a6974 jmp 0x121a6955 */
  goto L_121a6955;
L_121a6976:;
  /* 121a6976 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6979 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a697c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a697f jne 0x121a69c5 */
  if (!C.zf) goto L_121a69c5;
  /* 121a6981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6987 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a698a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a698d push ecx */
  push32((uint32_t)(ECX));
  /* 121a698e call 0x121a63c0 */
  push32(0x121a6993u); f_121a63c0();
  /* 121a6993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6996 mov edx, dword ptr [0x121c2d90] */
  EDX = (r32((uint32_t)(0x121c2d90)));
  /* 121a699c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a699e mov dword ptr [0x121c2d90], edx */
  w32((uint32_t)(0x121c2d90), (EDX));
L_121a69a4:;
  /* 121a69a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a69a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a69aa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a69ad jl 0x121a69c5 */
  if ((C.sf!=C.of)) goto L_121a69c5;
  /* 121a69af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a69b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a69b5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a69b8 jg 0x121a69c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a69c5;
  /* 121a69ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a69bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a69c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a69c3 jmp 0x121a69a4 */
  goto L_121a69a4;
L_121a69c5:;
  /* 121a69c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a69c9 je 0x121a69d9 */
  if (C.zf) goto L_121a69d9;
  /* 121a69cb mov edx, dword ptr [0x121c2d90] */
  EDX = (r32((uint32_t)(0x121c2d90)));
  /* 121a69d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a69d3 mov dword ptr [0x121c2d90], edx */
  w32((uint32_t)(0x121c2d90), (EDX));
L_121a69d9:;
  /* 121a69d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a69dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a69df mov dword ptr [0x121c2d94], ecx */
  w32((uint32_t)(0x121c2d94), (ECX));
  /* 121a69e5 cmp dword ptr [0x121c2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a69ec je 0x121a6a0e */
  if (C.zf) goto L_121a6a0e;
  /* 121a69ee push 3 */
  push32((uint32_t)(0x3u));
  /* 121a69f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a69f3 push edx */
  push32((uint32_t)(EDX));
  /* 121a69f4 mov eax, dword ptr [0x121c2e20] */
  EAX = (r32((uint32_t)(0x121c2e20)));
  /* 121a69f9 push eax */
  push32((uint32_t)(EAX));
  /* 121a69fa call 0x1219b330 */
  push32(0x121a69ffu); f_1219b330();
  /* 121a69ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6a02 mov ecx, dword ptr [0x121c2e20] */
  ECX = (r32((uint32_t)(0x121c2e20)));
  /* 121a6a08 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 121a6a0c jmp 0x121a6a17 */
  goto L_121a6a17;
L_121a6a0e:;
  /* 121a6a0e mov edx, dword ptr [0x121c2e20] */
  EDX = (r32((uint32_t)(0x121c2e20)));
  /* 121a6a14 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_121a6a17:;
  /* 121a6a17 mov esp, ebp */
  ESP = (EBP);
  /* 121a6a19 pop ebp */
  EBP = (pop32());
  /* 121a6a1a ret  */
  ESPCHK(0x121a6670u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a20 @ 0x121a6a20 (46 bytes, 18 insns) */
void f_121a6a20(void) {
  FTRACE(0x121a6a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6a20 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6a21 mov ebp, esp */
  EBP = (ESP);
  /* 121a6a23 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6a24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a6a26 call 0x1219b510 */
  push32(0x121a6a2bu); f_1219b510();
  /* 121a6a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6a31 push eax */
  push32((uint32_t)(EAX));
  /* 121a6a32 call 0x121a6a50 */
  push32(0x121a6a37u); f_121a6a50();
  /* 121a6a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6a3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a6a3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a6a3f call 0x1219b5b0 */
  push32(0x121a6a44u); f_1219b5b0();
  /* 121a6a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6a47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6a4a mov esp, ebp */
  ESP = (EBP);
  /* 121a6a4c pop ebp */
  EBP = (pop32());
  /* 121a6a4d ret  */
  ESPCHK(0x121a6a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a50 @ 0x121a6a50 (762 bytes, 246 insns) */
void f_121a6a50(void) {
  FTRACE(0x121a6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6a51 mov ebp, esp */
  EBP = (ESP);
  /* 121a6a53 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6a54 cmp dword ptr [0x121c2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6a5b jne 0x121a6a64 */
  if (!C.zf) goto L_121a6a64;
  /* 121a6a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6a5f jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6a64:;
  /* 121a6a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6a67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121a6a6a cmp ecx, dword ptr [0x121c2e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c2e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6a70 jne 0x121a6a84 */
  if (!C.zf) goto L_121a6a84;
  /* 121a6a72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6a75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121a6a78 cmp eax, dword ptr [0x121c2e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c2e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6a7e je 0x121a6c4b */
  if (C.zf) goto L_121a6c4b;
L_121a6a84:;
  /* 121a6a84 cmp dword ptr [0x121c39a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c39a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6a8b je 0x121a6c05 */
  if (C.zf) goto L_121a6c05;
  /* 121a6a91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6a93 mov cx, word ptr [0x121c3a40] */
  CX = (r16((uint32_t)(0x121c3a40)));
  /* 121a6a9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a6a9c jne 0x121a6af9 */
  if (!C.zf) goto L_121a6af9;
  /* 121a6a9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6aa0 mov dx, word ptr [0x121c3a4e] */
  DX = (r16((uint32_t)(0x121c3a4e)));
  /* 121a6aa7 push edx */
  push32((uint32_t)(EDX));
  /* 121a6aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6aaa mov ax, word ptr [0x121c3a4c] */
  AX = (r16((uint32_t)(0x121c3a4c)));
  /* 121a6ab0 push eax */
  push32((uint32_t)(EAX));
  /* 121a6ab1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6ab3 mov cx, word ptr [0x121c3a4a] */
  CX = (r16((uint32_t)(0x121c3a4a)));
  /* 121a6aba push ecx */
  push32((uint32_t)(ECX));
  /* 121a6abb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6abd mov dx, word ptr [0x121c3a48] */
  DX = (r16((uint32_t)(0x121c3a48)));
  /* 121a6ac4 push edx */
  push32((uint32_t)(EDX));
  /* 121a6ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6ac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6ac9 mov ax, word ptr [0x121c3a44] */
  AX = (r16((uint32_t)(0x121c3a44)));
  /* 121a6acf push eax */
  push32((uint32_t)(EAX));
  /* 121a6ad0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6ad2 mov cx, word ptr [0x121c3a46] */
  CX = (r16((uint32_t)(0x121c3a46)));
  /* 121a6ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6ada xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6adc mov dx, word ptr [0x121c3a42] */
  DX = (r16((uint32_t)(0x121c3a42)));
  /* 121a6ae3 push edx */
  push32((uint32_t)(EDX));
  /* 121a6ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6ae7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121a6aea push ecx */
  push32((uint32_t)(ECX));
  /* 121a6aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6aed push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6aef call 0x121a6d50 */
  push32(0x121a6af4u); f_121a6d50();
  /* 121a6af4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6af7 jmp 0x121a6b4a */
  goto L_121a6b4a;
L_121a6af9:;
  /* 121a6af9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6afb mov dx, word ptr [0x121c3a4e] */
  DX = (r16((uint32_t)(0x121c3a4e)));
  /* 121a6b02 push edx */
  push32((uint32_t)(EDX));
  /* 121a6b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6b05 mov ax, word ptr [0x121c3a4c] */
  AX = (r16((uint32_t)(0x121c3a4c)));
  /* 121a6b0b push eax */
  push32((uint32_t)(EAX));
  /* 121a6b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6b0e mov cx, word ptr [0x121c3a4a] */
  CX = (r16((uint32_t)(0x121c3a4a)));
  /* 121a6b15 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6b16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6b18 mov dx, word ptr [0x121c3a48] */
  DX = (r16((uint32_t)(0x121c3a48)));
  /* 121a6b1f push edx */
  push32((uint32_t)(EDX));
  /* 121a6b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6b22 mov ax, word ptr [0x121c3a46] */
  AX = (r16((uint32_t)(0x121c3a46)));
  /* 121a6b28 push eax */
  push32((uint32_t)(EAX));
  /* 121a6b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6b2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6b2f mov cx, word ptr [0x121c3a42] */
  CX = (r16((uint32_t)(0x121c3a42)));
  /* 121a6b36 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6b3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121a6b3d push eax */
  push32((uint32_t)(EAX));
  /* 121a6b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6b42 call 0x121a6d50 */
  push32(0x121a6b47u); f_121a6d50();
  /* 121a6b47 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a6b4a:;
  /* 121a6b4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6b4c mov cx, word ptr [0x121c39ec] */
  CX = (r16((uint32_t)(0x121c39ec)));
  /* 121a6b53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a6b55 jne 0x121a6bb2 */
  if (!C.zf) goto L_121a6bb2;
  /* 121a6b57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6b59 mov dx, word ptr [0x121c39fa] */
  DX = (r16((uint32_t)(0x121c39fa)));
  /* 121a6b60 push edx */
  push32((uint32_t)(EDX));
  /* 121a6b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6b63 mov ax, word ptr [0x121c39f8] */
  AX = (r16((uint32_t)(0x121c39f8)));
  /* 121a6b69 push eax */
  push32((uint32_t)(EAX));
  /* 121a6b6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6b6c mov cx, word ptr [0x121c39f6] */
  CX = (r16((uint32_t)(0x121c39f6)));
  /* 121a6b73 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6b74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6b76 mov dx, word ptr [0x121c39f4] */
  DX = (r16((uint32_t)(0x121c39f4)));
  /* 121a6b7d push edx */
  push32((uint32_t)(EDX));
  /* 121a6b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6b82 mov ax, word ptr [0x121c39f0] */
  AX = (r16((uint32_t)(0x121c39f0)));
  /* 121a6b88 push eax */
  push32((uint32_t)(EAX));
  /* 121a6b89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6b8b mov cx, word ptr [0x121c39f2] */
  CX = (r16((uint32_t)(0x121c39f2)));
  /* 121a6b92 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6b93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6b95 mov dx, word ptr [0x121c39ee] */
  DX = (r16((uint32_t)(0x121c39ee)));
  /* 121a6b9c push edx */
  push32((uint32_t)(EDX));
  /* 121a6b9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6ba0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121a6ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6ba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6ba8 call 0x121a6d50 */
  push32(0x121a6badu); f_121a6d50();
  /* 121a6bad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6bb0 jmp 0x121a6c03 */
  goto L_121a6c03;
L_121a6bb2:;
  /* 121a6bb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6bb4 mov dx, word ptr [0x121c39fa] */
  DX = (r16((uint32_t)(0x121c39fa)));
  /* 121a6bbb push edx */
  push32((uint32_t)(EDX));
  /* 121a6bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6bbe mov ax, word ptr [0x121c39f8] */
  AX = (r16((uint32_t)(0x121c39f8)));
  /* 121a6bc4 push eax */
  push32((uint32_t)(EAX));
  /* 121a6bc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6bc7 mov cx, word ptr [0x121c39f6] */
  CX = (r16((uint32_t)(0x121c39f6)));
  /* 121a6bce push ecx */
  push32((uint32_t)(ECX));
  /* 121a6bcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a6bd1 mov dx, word ptr [0x121c39f4] */
  DX = (r16((uint32_t)(0x121c39f4)));
  /* 121a6bd8 push edx */
  push32((uint32_t)(EDX));
  /* 121a6bd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6bdb mov ax, word ptr [0x121c39f2] */
  AX = (r16((uint32_t)(0x121c39f2)));
  /* 121a6be1 push eax */
  push32((uint32_t)(EAX));
  /* 121a6be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6be6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a6be8 mov cx, word ptr [0x121c39ee] */
  CX = (r16((uint32_t)(0x121c39ee)));
  /* 121a6bef push ecx */
  push32((uint32_t)(ECX));
  /* 121a6bf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6bf3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121a6bf6 push eax */
  push32((uint32_t)(EAX));
  /* 121a6bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6bfb call 0x121a6d50 */
  push32(0x121a6c00u); f_121a6d50();
  /* 121a6c00 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a6c03:;
  /* 121a6c03 jmp 0x121a6c4b */
  goto L_121a6c4b;
L_121a6c05:;
  /* 121a6c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 121a6c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6c13 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a6c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6c18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121a6c1b push edx */
  push32((uint32_t)(EDX));
  /* 121a6c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6c20 call 0x121a6d50 */
  push32(0x121a6c25u); f_121a6d50();
  /* 121a6c25 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c2e push 2 */
  push32((uint32_t)(0x2u));
  /* 121a6c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c34 push 5 */
  push32((uint32_t)(0x5u));
  /* 121a6c36 push 0xa */
  push32((uint32_t)(0xau));
  /* 121a6c38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6c3b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121a6c3e push ecx */
  push32((uint32_t)(ECX));
  /* 121a6c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6c43 call 0x121a6d50 */
  push32(0x121a6c48u); f_121a6d50();
  /* 121a6c48 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a6c4b:;
  /* 121a6c4b mov edx, dword ptr [0x121c2e2c] */
  EDX = (r32((uint32_t)(0x121c2e2c)));
  /* 121a6c51 cmp edx, dword ptr [0x121c2e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6c57 jge 0x121a6ca4 */
  if ((C.sf==C.of)) goto L_121a6ca4;
  /* 121a6c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6c5c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121a6c5f cmp ecx, dword ptr [0x121c2e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6c65 jl 0x121a6c75 */
  if ((C.sf!=C.of)) goto L_121a6c75;
  /* 121a6c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6c6a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a6c6d cmp eax, dword ptr [0x121c2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6c73 jle 0x121a6c7c */
  if ((C.zf||C.sf!=C.of)) goto L_121a6c7c;
L_121a6c75:;
  /* 121a6c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6c77 jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6c7c:;
  /* 121a6c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6c7f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121a6c82 cmp edx, dword ptr [0x121c2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6c88 jle 0x121a6ca2 */
  if ((C.zf||C.sf!=C.of)) goto L_121a6ca2;
  /* 121a6c8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6c8d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121a6c90 cmp ecx, dword ptr [0x121c2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6c96 jge 0x121a6ca2 */
  if ((C.sf==C.of)) goto L_121a6ca2;
  /* 121a6c98 mov eax, 1 */
  EAX = (0x1u);
  /* 121a6c9d jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6ca2:;
  /* 121a6ca2 jmp 0x121a6ce7 */
  goto L_121a6ce7;
L_121a6ca4:;
  /* 121a6ca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6ca7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a6caa cmp eax, dword ptr [0x121c2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6cb0 jl 0x121a6cc0 */
  if ((C.sf!=C.of)) goto L_121a6cc0;
  /* 121a6cb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6cb5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121a6cb8 cmp edx, dword ptr [0x121c2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6cbe jle 0x121a6cc7 */
  if ((C.zf||C.sf!=C.of)) goto L_121a6cc7;
L_121a6cc0:;
  /* 121a6cc0 mov eax, 1 */
  EAX = (0x1u);
  /* 121a6cc5 jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6cc7:;
  /* 121a6cc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6cca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121a6ccd cmp ecx, dword ptr [0x121c2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6cd3 jle 0x121a6ce7 */
  if ((C.zf||C.sf!=C.of)) goto L_121a6ce7;
  /* 121a6cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6cd8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a6cdb cmp eax, dword ptr [0x121c2e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6ce1 jge 0x121a6ce7 */
  if ((C.sf==C.of)) goto L_121a6ce7;
  /* 121a6ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6ce5 jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6ce7:;
  /* 121a6ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6cea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121a6ced imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6cf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a6cf5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6cf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6cfa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121a6cfd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6d03 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6d05 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6d0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a6d0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6d11 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121a6d14 cmp edx, dword ptr [0x121c2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6d1a jne 0x121a6d32 */
  if (!C.zf) goto L_121a6d32;
  /* 121a6d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6d1f cmp eax, dword ptr [0x121c2e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c2e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6d25 jl 0x121a6d2e */
  if ((C.sf!=C.of)) goto L_121a6d2e;
  /* 121a6d27 mov eax, 1 */
  EAX = (0x1u);
  /* 121a6d2c jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6d2e:;
  /* 121a6d2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6d30 jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6d32:;
  /* 121a6d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6d35 cmp ecx, dword ptr [0x121c2e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c2e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6d3b jge 0x121a6d44 */
  if ((C.sf==C.of)) goto L_121a6d44;
  /* 121a6d3d mov eax, 1 */
  EAX = (0x1u);
  /* 121a6d42 jmp 0x121a6d46 */
  goto L_121a6d46;
L_121a6d44:;
  /* 121a6d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a6d46:;
  /* 121a6d46 mov esp, ebp */
  ESP = (EBP);
  /* 121a6d48 pop ebp */
  EBP = (pop32());
  /* 121a6d49 ret  */
  ESPCHK(0x121a6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d50 @ 0x121a6d50 (504 bytes, 145 insns) */
void f_121a6d50(void) {
  FTRACE(0x121a6d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6d50 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6d51 mov ebp, esp */
  EBP = (ESP);
  /* 121a6d53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6d56 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6d5a jne 0x121a6e2c */
  if (!C.zf) goto L_121a6e2c;
  /* 121a6d60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6d63 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 121a6d66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a6d68 jne 0x121a6d79 */
  if (!C.zf) goto L_121a6d79;
  /* 121a6d6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6d6d mov edx, dword ptr [ecx*4 + 0x121c2e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c2e4c)));
  /* 121a6d74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121a6d77 jmp 0x121a6d86 */
  goto L_121a6d86;
L_121a6d79:;
  /* 121a6d79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6d7c mov ecx, dword ptr [eax*4 + 0x121c2e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c2e80)));
  /* 121a6d83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_121a6d86:;
  /* 121a6d86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a6d89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6d8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a6d8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6d92 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6d95 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6d9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6d9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6da0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6da3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6da6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 121a6da9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 121a6dad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a6dae mov ecx, 7 */
  ECX = (0x7u);
  /* 121a6db3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a6db5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a6db8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a6dbb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6dbe jge 0x121a6dd9 */
  if ((C.sf==C.of)) goto L_121a6dd9;
  /* 121a6dc0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a6dc3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6dc6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a6dc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6dcc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6dcf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6dd2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6dd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a6dd7 jmp 0x121a6ded */
  goto L_121a6ded;
L_121a6dd9:;
  /* 121a6dd9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a6ddc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6ddf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a6de2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6de5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6de8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6dea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a6ded:;
  /* 121a6ded cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6df1 jne 0x121a6e2a */
  if (!C.zf) goto L_121a6e2a;
  /* 121a6df3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6df6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 121a6df9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a6dfb jne 0x121a6e0c */
  if (!C.zf) goto L_121a6e0c;
  /* 121a6dfd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6e00 mov eax, dword ptr [edx*4 + 0x121c2e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c2e50)));
  /* 121a6e07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121a6e0a jmp 0x121a6e19 */
  goto L_121a6e19;
L_121a6e0c:;
  /* 121a6e0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6e0f mov edx, dword ptr [ecx*4 + 0x121c2e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c2e84)));
  /* 121a6e16 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a6e19:;
  /* 121a6e19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6e1c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6e1f jle 0x121a6e2a */
  if ((C.zf||C.sf!=C.of)) goto L_121a6e2a;
  /* 121a6e21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6e24 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6e27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121a6e2a:;
  /* 121a6e2a jmp 0x121a6e61 */
  goto L_121a6e61;
L_121a6e2c:;
  /* 121a6e2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6e2f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121a6e32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a6e34 jne 0x121a6e45 */
  if (!C.zf) goto L_121a6e45;
  /* 121a6e36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6e39 mov ecx, dword ptr [eax*4 + 0x121c2e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c2e4c)));
  /* 121a6e40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a6e43 jmp 0x121a6e52 */
  goto L_121a6e52;
L_121a6e45:;
  /* 121a6e45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6e48 mov eax, dword ptr [edx*4 + 0x121c2e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c2e80)));
  /* 121a6e4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_121a6e52:;
  /* 121a6e52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a6e55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a6e58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6e5b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6e5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121a6e61:;
  /* 121a6e61 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6e65 jne 0x121a6ea1 */
  if (!C.zf) goto L_121a6ea1;
  /* 121a6e67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6e6a mov dword ptr [0x121c2e2c], eax */
  w32((uint32_t)(0x121c2e2c), (EAX));
  /* 121a6e6f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 121a6e72 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6e75 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 121a6e78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6e7a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6e7d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 121a6e80 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6e82 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6e88 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 121a6e8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6e8d mov dword ptr [0x121c2e30], ecx */
  w32((uint32_t)(0x121c2e30), (ECX));
  /* 121a6e93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6e96 mov dword ptr [0x121c2e28], edx */
  w32((uint32_t)(0x121c2e28), (EDX));
  /* 121a6e9c jmp 0x121a6f44 */
  goto L_121a6f44;
L_121a6ea1:;
  /* 121a6ea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a6ea4 mov dword ptr [0x121c2e3c], eax */
  w32((uint32_t)(0x121c2e3c), (EAX));
  /* 121a6ea9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 121a6eac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6eaf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 121a6eb2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6eb4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6eb7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 121a6eba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6ebc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6ec2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 121a6ec5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6ec7 mov dword ptr [0x121c2e40], ecx */
  w32((uint32_t)(0x121c2e40), (ECX));
  /* 121a6ecd mov edx, dword ptr [0x121c2d98] */
  EDX = (r32((uint32_t)(0x121c2d98)));
  /* 121a6ed3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a6ed9 mov eax, dword ptr [0x121c2e40] */
  EAX = (r32((uint32_t)(0x121c2e40)));
  /* 121a6ede add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6ee0 mov dword ptr [0x121c2e40], eax */
  w32((uint32_t)(0x121c2e40), (EAX));
  /* 121a6ee5 cmp dword ptr [0x121c2e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c2e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6eec jge 0x121a6f11 */
  if ((C.sf==C.of)) goto L_121a6f11;
  /* 121a6eee mov ecx, dword ptr [0x121c2e40] */
  ECX = (r32((uint32_t)(0x121c2e40)));
  /* 121a6ef4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6efa mov dword ptr [0x121c2e40], ecx */
  w32((uint32_t)(0x121c2e40), (ECX));
  /* 121a6f00 mov edx, dword ptr [0x121c2e3c] */
  EDX = (r32((uint32_t)(0x121c2e3c)));
  /* 121a6f06 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6f09 mov dword ptr [0x121c2e3c], edx */
  w32((uint32_t)(0x121c2e3c), (EDX));
  /* 121a6f0f jmp 0x121a6f3b */
  goto L_121a6f3b;
L_121a6f11:;
  /* 121a6f11 cmp dword ptr [0x121c2e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x121c2e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6f1b jl 0x121a6f3b */
  if ((C.sf!=C.of)) goto L_121a6f3b;
  /* 121a6f1d mov eax, dword ptr [0x121c2e40] */
  EAX = (r32((uint32_t)(0x121c2e40)));
  /* 121a6f22 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a6f27 mov dword ptr [0x121c2e40], eax */
  w32((uint32_t)(0x121c2e40), (EAX));
  /* 121a6f2c mov ecx, dword ptr [0x121c2e3c] */
  ECX = (r32((uint32_t)(0x121c2e3c)));
  /* 121a6f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6f35 mov dword ptr [0x121c2e3c], ecx */
  w32((uint32_t)(0x121c2e3c), (ECX));
L_121a6f3b:;
  /* 121a6f3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6f3e mov dword ptr [0x121c2e38], edx */
  w32((uint32_t)(0x121c2e38), (EDX));
L_121a6f44:;
  /* 121a6f44 mov esp, ebp */
  ESP = (EBP);
  /* 121a6f46 pop ebp */
  EBP = (pop32());
  /* 121a6f47 ret  */
  ESPCHK(0x121a6d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f50 @ 0x121a6f50 (382 bytes, 135 insns) */
void f_121a6f50(void) {
  FTRACE(0x121a6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a6f50 push ebp */
  push32((uint32_t)(EBP));
  /* 121a6f51 mov ebp, esp */
  EBP = (ESP);
  /* 121a6f53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a6f55 push 0x121bf9c0 */
  push32((uint32_t)(0x121bf9c0u));
  /* 121a6f5a push 0x121a0c18 */
  push32((uint32_t)(0x121a0c18u));
  /* 121a6f5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121a6f65 push eax */
  push32((uint32_t)(EAX));
  /* 121a6f66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121a6f6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a6f70 push ebx */
  push32((uint32_t)(EBX));
  /* 121a6f71 push esi */
  push32((uint32_t)(ESI));
  /* 121a6f72 push edi */
  push32((uint32_t)(EDI));
  /* 121a6f73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a6f76 cmp dword ptr [0x121c3a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6f7d jne 0x121a6fc2 */
  if (!C.zf) goto L_121a6fc2;
  /* 121a6f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6f87 call dword ptr [0x121c6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6298))), 0x121a6f8du);
  /* 121a6f8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a6f8f je 0x121a6f9d */
  if (C.zf) goto L_121a6f9d;
  /* 121a6f91 mov dword ptr [0x121c3a5c], 1 */
  w32((uint32_t)(0x121c3a5c), (0x1u));
  /* 121a6f9b jmp 0x121a6fc2 */
  goto L_121a6fc2;
L_121a6f9d:;
  /* 121a6f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6fa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a6fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a6fa5 call dword ptr [0x121c62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b0))), 0x121a6fabu);
  /* 121a6fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a6fad je 0x121a6fbb */
  if (C.zf) goto L_121a6fbb;
  /* 121a6faf mov dword ptr [0x121c3a5c], 2 */
  w32((uint32_t)(0x121c3a5c), (0x2u));
  /* 121a6fb9 jmp 0x121a6fc2 */
  goto L_121a6fc2;
L_121a6fbb:;
  /* 121a6fbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a6fbd jmp 0x121a70d1 */
  goto L_121a70d1;
L_121a6fc2:;
  /* 121a6fc2 cmp dword ptr [0x121c3a5c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a5c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6fc9 jne 0x121a6fe6 */
  if (!C.zf) goto L_121a6fe6;
  /* 121a6fcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a6fce push eax */
  push32((uint32_t)(EAX));
  /* 121a6fcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a6fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a6fd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a6fd6 push edx */
  push32((uint32_t)(EDX));
  /* 121a6fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a6fda push eax */
  push32((uint32_t)(EAX));
  /* 121a6fdb call dword ptr [0x121c6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6298))), 0x121a6fe1u);
  /* 121a6fe1 jmp 0x121a70d1 */
  goto L_121a70d1;
L_121a6fe6:;
  /* 121a6fe6 cmp dword ptr [0x121c3a5c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a5c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6fed jne 0x121a70cf */
  if (!C.zf) goto L_121a70cf;
  /* 121a6ff3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a6ff7 jne 0x121a7002 */
  if (!C.zf) goto L_121a7002;
  /* 121a6ff9 mov ecx, dword ptr [0x121c3910] */
  ECX = (r32((uint32_t)(0x121c3910)));
  /* 121a6fff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_121a7002:;
  /* 121a7002 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7004 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7009 push edx */
  push32((uint32_t)(EDX));
  /* 121a700a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a700d push eax */
  push32((uint32_t)(EAX));
  /* 121a700e call dword ptr [0x121c62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b0))), 0x121a7014u);
  /* 121a7014 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121a7017 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a701b jne 0x121a7024 */
  if (!C.zf) goto L_121a7024;
  /* 121a701d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a701f jmp 0x121a70d1 */
  goto L_121a70d1;
L_121a7024:;
  /* 121a7024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a702b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a702e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7031 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a7033 call 0x1219acb0 */
  push32(0x121a7038u); f_1219acb0();
  /* 121a7038 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 121a703b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a703e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a7041 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121a7044 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a704b jmp 0x121a7064 */
  goto L_121a7064;
  /* 121a704d mov eax, 1 */
  EAX = (0x1u);
  /* 121a7052 ret  */
  ESPCHK(0x121a6f50u, _esp0);
  ESP += 4; return;
  /* 121a7053 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a7056 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121a705d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a7064:;
  /* 121a7064 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7068 jne 0x121a706e */
  if (!C.zf) goto L_121a706e;
  /* 121a706a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a706c jmp 0x121a70d1 */
  goto L_121a70d1;
L_121a706e:;
  /* 121a706e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a7071 push edx */
  push32((uint32_t)(EDX));
  /* 121a7072 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7075 push eax */
  push32((uint32_t)(EAX));
  /* 121a7076 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7079 push ecx */
  push32((uint32_t)(ECX));
  /* 121a707a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a707d push edx */
  push32((uint32_t)(EDX));
  /* 121a707e call dword ptr [0x121c62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b0))), 0x121a7084u);
  /* 121a7084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7086 jne 0x121a708c */
  if (!C.zf) goto L_121a708c;
  /* 121a7088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a708a jmp 0x121a70d1 */
  goto L_121a70d1;
L_121a708c:;
  /* 121a708c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7090 jne 0x121a70ad */
  if (!C.zf) goto L_121a70ad;
  /* 121a7092 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7094 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7096 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a7098 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a709b push eax */
  push32((uint32_t)(EAX));
  /* 121a709c push 1 */
  push32((uint32_t)(0x1u));
  /* 121a709e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a70a1 push ecx */
  push32((uint32_t)(ECX));
  /* 121a70a2 call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a70a8u);
  /* 121a70a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121a70ab jmp 0x121a70ca */
  goto L_121a70ca;
L_121a70ad:;
  /* 121a70ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a70b0 push edx */
  push32((uint32_t)(EDX));
  /* 121a70b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a70b4 push eax */
  push32((uint32_t)(EAX));
  /* 121a70b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a70b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a70ba push ecx */
  push32((uint32_t)(ECX));
  /* 121a70bb push 1 */
  push32((uint32_t)(0x1u));
  /* 121a70bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a70c0 push edx */
  push32((uint32_t)(EDX));
  /* 121a70c1 call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a70c7u);
  /* 121a70c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121a70ca:;
  /* 121a70ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a70cd jmp 0x121a70d1 */
  goto L_121a70d1;
L_121a70cf:;
  /* 121a70cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a70d1:;
  /* 121a70d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 121a70d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a70d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121a70de pop edi */
  EDI = (pop32());
  /* 121a70df pop esi */
  ESI = (pop32());
  /* 121a70e0 pop ebx */
  EBX = (pop32());
  /* 121a70e1 mov esp, ebp */
  ESP = (EBP);
  /* 121a70e3 pop ebp */
  EBP = (pop32());
  /* 121a70e4 ret  */
  ESPCHK(0x121a6f50u, _esp0);
  ESP += 4; return;
}

/* FUN_100170f0 @ 0x121a70f0 (398 bytes, 140 insns) */
void f_121a70f0(void) {
  FTRACE(0x121a70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a70f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a70f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a70f5 push 0x121bf9d0 */
  push32((uint32_t)(0x121bf9d0u));
  /* 121a70fa push 0x121a0c18 */
  push32((uint32_t)(0x121a0c18u));
  /* 121a70ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121a7105 push eax */
  push32((uint32_t)(EAX));
  /* 121a7106 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121a710d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7110 push ebx */
  push32((uint32_t)(EBX));
  /* 121a7111 push esi */
  push32((uint32_t)(ESI));
  /* 121a7112 push edi */
  push32((uint32_t)(EDI));
  /* 121a7113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a7116 cmp dword ptr [0x121c3a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a711d jne 0x121a7162 */
  if (!C.zf) goto L_121a7162;
  /* 121a711f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7121 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7123 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a7125 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7127 call dword ptr [0x121c6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6298))), 0x121a712du);
  /* 121a712d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a712f je 0x121a713d */
  if (C.zf) goto L_121a713d;
  /* 121a7131 mov dword ptr [0x121c3a60], 1 */
  w32((uint32_t)(0x121c3a60), (0x1u));
  /* 121a713b jmp 0x121a7162 */
  goto L_121a7162;
L_121a713d:;
  /* 121a713d push 0 */
  push32((uint32_t)(0x0u));
  /* 121a713f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7141 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a7143 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7145 call dword ptr [0x121c62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b0))), 0x121a714bu);
  /* 121a714b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a714d je 0x121a715b */
  if (C.zf) goto L_121a715b;
  /* 121a714f mov dword ptr [0x121c3a60], 2 */
  w32((uint32_t)(0x121c3a60), (0x2u));
  /* 121a7159 jmp 0x121a7162 */
  goto L_121a7162;
L_121a715b:;
  /* 121a715b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a715d jmp 0x121a7281 */
  goto L_121a7281;
L_121a7162:;
  /* 121a7162 cmp dword ptr [0x121c3a60], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a60))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7169 jne 0x121a7186 */
  if (!C.zf) goto L_121a7186;
  /* 121a716b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a716e push eax */
  push32((uint32_t)(EAX));
  /* 121a716f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a7172 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7173 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7176 push edx */
  push32((uint32_t)(EDX));
  /* 121a7177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a717a push eax */
  push32((uint32_t)(EAX));
  /* 121a717b call dword ptr [0x121c62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b0))), 0x121a7181u);
  /* 121a7181 jmp 0x121a7281 */
  goto L_121a7281;
L_121a7186:;
  /* 121a7186 cmp dword ptr [0x121c3a60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a718d jne 0x121a727f */
  if (!C.zf) goto L_121a727f;
  /* 121a7193 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7197 jne 0x121a71a2 */
  if (!C.zf) goto L_121a71a2;
  /* 121a7199 mov ecx, dword ptr [0x121c3910] */
  ECX = (r32((uint32_t)(0x121c3910)));
  /* 121a719f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_121a71a2:;
  /* 121a71a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a71a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a71a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a71a9 push edx */
  push32((uint32_t)(EDX));
  /* 121a71aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a71ad push eax */
  push32((uint32_t)(EAX));
  /* 121a71ae call dword ptr [0x121c6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6298))), 0x121a71b4u);
  /* 121a71b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121a71b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a71bb jne 0x121a71c4 */
  if (!C.zf) goto L_121a71c4;
  /* 121a71bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a71bf jmp 0x121a7281 */
  goto L_121a7281;
L_121a71c4:;
  /* 121a71c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a71cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a71ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a71d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a71d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a71d5 call 0x1219acb0 */
  push32(0x121a71dau); f_1219acb0();
  /* 121a71da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 121a71dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a71e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a71e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121a71e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a71ed jmp 0x121a7206 */
  goto L_121a7206;
  /* 121a71ef mov eax, 1 */
  EAX = (0x1u);
  /* 121a71f4 ret  */
  ESPCHK(0x121a70f0u, _esp0);
  ESP += 4; return;
  /* 121a71f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a71f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121a71ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a7206:;
  /* 121a7206 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a720a jne 0x121a7210 */
  if (!C.zf) goto L_121a7210;
  /* 121a720c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a720e jmp 0x121a7281 */
  goto L_121a7281;
L_121a7210:;
  /* 121a7210 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a7213 push edx */
  push32((uint32_t)(EDX));
  /* 121a7214 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7217 push eax */
  push32((uint32_t)(EAX));
  /* 121a7218 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a721b push ecx */
  push32((uint32_t)(ECX));
  /* 121a721c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a721f push edx */
  push32((uint32_t)(EDX));
  /* 121a7220 call dword ptr [0x121c6298] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6298))), 0x121a7226u);
  /* 121a7226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7228 jne 0x121a722e */
  if (!C.zf) goto L_121a722e;
  /* 121a722a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a722c jmp 0x121a7281 */
  goto L_121a7281;
L_121a722e:;
  /* 121a722e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7232 jne 0x121a7256 */
  if (!C.zf) goto L_121a7256;
  /* 121a7234 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7236 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7238 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a723a push 0 */
  push32((uint32_t)(0x0u));
  /* 121a723c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a723e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7241 push eax */
  push32((uint32_t)(EAX));
  /* 121a7242 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a7247 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a724a push ecx */
  push32((uint32_t)(ECX));
  /* 121a724b call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a7251u);
  /* 121a7251 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121a7254 jmp 0x121a727a */
  goto L_121a727a;
L_121a7256:;
  /* 121a7256 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7258 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a725a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a725d push edx */
  push32((uint32_t)(EDX));
  /* 121a725e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a7261 push eax */
  push32((uint32_t)(EAX));
  /* 121a7262 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a7264 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7267 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7268 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a726d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a7270 push edx */
  push32((uint32_t)(EDX));
  /* 121a7271 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a7277u);
  /* 121a7277 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121a727a:;
  /* 121a727a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a727d jmp 0x121a7281 */
  goto L_121a7281;
L_121a727f:;
  /* 121a727f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a7281:;
  /* 121a7281 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 121a7284 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7287 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121a728e pop edi */
  EDI = (pop32());
  /* 121a728f pop esi */
  ESI = (pop32());
  /* 121a7290 pop ebx */
  EBX = (pop32());
  /* 121a7291 mov esp, ebp */
  ESP = (EBP);
  /* 121a7293 pop ebp */
  EBP = (pop32());
  /* 121a7294 ret  */
  ESPCHK(0x121a70f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100172a0 @ 0x121a72a0 (11 bytes, 6 insns) */
void f_121a72a0(void) {
  FTRACE(0x121a72a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a72a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a72a1 mov ebp, esp */
  EBP = (ESP);
  /* 121a72a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a72a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a72a9 pop ebp */
  EBP = (pop32());
  /* 121a72aa ret  */
  ESPCHK(0x121a72a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100172b0 @ 0x121a72b0 (147 bytes, 43 insns) */
void f_121a72b0(void) {
  FTRACE(0x121a72b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a72b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a72b1 mov ebp, esp */
  EBP = (ESP);
  /* 121a72b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a72b4 cmp dword ptr [0x121c3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a72bb jne 0x121a72d7 */
  if (!C.zf) goto L_121a72d7;
  /* 121a72bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a72c1 jl 0x121a72d2 */
  if ((C.sf!=C.of)) goto L_121a72d2;
  /* 121a72c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a72c7 jg 0x121a72d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a72d2;
  /* 121a72c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a72cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a72cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121a72d2:;
  /* 121a72d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a72d5 jmp 0x121a733f */
  goto L_121a733f;
L_121a72d7:;
  /* 121a72d7 push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a72dc call dword ptr [0x121c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6330))), 0x121a72e2u);
  /* 121a72e2 cmp dword ptr [0x121c3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a72e9 je 0x121a7309 */
  if (C.zf) goto L_121a7309;
  /* 121a72eb push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a72f0 call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x121a72f6u);
  /* 121a72f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a72f8 call 0x1219b510 */
  push32(0x121a72fdu); f_1219b510();
  /* 121a72fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7300 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a7307 jmp 0x121a7310 */
  goto L_121a7310;
L_121a7309:;
  /* 121a7309 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121a7310:;
  /* 121a7310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7313 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7314 call 0x121a7350 */
  push32(0x121a7319u); f_121a7350();
  /* 121a7319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a731c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a731f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7323 je 0x121a7331 */
  if (C.zf) goto L_121a7331;
  /* 121a7325 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a7327 call 0x1219b5b0 */
  push32(0x121a732cu); f_1219b5b0();
  /* 121a732c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a732f jmp 0x121a733c */
  goto L_121a733c;
L_121a7331:;
  /* 121a7331 push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a7336 call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x121a733cu);
L_121a733c:;
  /* 121a733c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_121a733f:;
  /* 121a733f mov esp, ebp */
  ESP = (EBP);
  /* 121a7341 pop ebp */
  EBP = (pop32());
  /* 121a7342 ret  */
  ESPCHK(0x121a72b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x121a7350 (299 bytes, 91 insns) */
void f_121a7350(void) {
  FTRACE(0x121a7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7350 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7351 mov ebp, esp */
  EBP = (ESP);
  /* 121a7353 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7356 cmp dword ptr [0x121c3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a735d jne 0x121a737c */
  if (!C.zf) goto L_121a737c;
  /* 121a735f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7363 jl 0x121a7374 */
  if ((C.sf!=C.of)) goto L_121a7374;
  /* 121a7365 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7369 jg 0x121a7374 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a7374;
  /* 121a736b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a736e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7371 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121a7374:;
  /* 121a7374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7377 jmp 0x121a7477 */
  goto L_121a7477;
L_121a737c:;
  /* 121a737c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7383 jge 0x121a73c3 */
  if ((C.sf==C.of)) goto L_121a73c3;
  /* 121a7385 cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a738c jle 0x121a73a1 */
  if ((C.zf||C.sf!=C.of)) goto L_121a73a1;
  /* 121a738e push 1 */
  push32((uint32_t)(0x1u));
  /* 121a7390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7393 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7394 call 0x1219db20 */
  push32(0x121a7399u); f_1219db20();
  /* 121a7399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a739c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121a739f jmp 0x121a73b5 */
  goto L_121a73b5;
L_121a73a1:;
  /* 121a73a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a73a4 mov eax, dword ptr [0x121c1c98] */
  EAX = (r32((uint32_t)(0x121c1c98)));
  /* 121a73a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a73ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 121a73af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a73b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121a73b5:;
  /* 121a73b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a73b9 jne 0x121a73c3 */
  if (!C.zf) goto L_121a73c3;
  /* 121a73bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a73be jmp 0x121a7477 */
  goto L_121a7477;
L_121a73c3:;
  /* 121a73c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a73c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 121a73c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a73cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a73d5 mov eax, dword ptr [0x121c1c98] */
  EAX = (r32((uint32_t)(0x121c1c98)));
  /* 121a73da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a73dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 121a73e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 121a73e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a73e8 je 0x121a740c */
  if (C.zf) goto L_121a740c;
  /* 121a73ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a73ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 121a73f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a73f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 121a73f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 121a73fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 121a73ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 121a7403 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 121a740a jmp 0x121a741d */
  goto L_121a741d;
L_121a740c:;
  /* 121a740c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 121a740f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 121a7412 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 121a7416 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_121a741d:;
  /* 121a741d push 1 */
  push32((uint32_t)(0x1u));
  /* 121a741f push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7421 push 3 */
  push32((uint32_t)(0x3u));
  /* 121a7423 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 121a7426 push edx */
  push32((uint32_t)(EDX));
  /* 121a7427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a742a push eax */
  push32((uint32_t)(EAX));
  /* 121a742b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121a742e push ecx */
  push32((uint32_t)(ECX));
  /* 121a742f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121a7434 mov edx, dword ptr [0x121c3900] */
  EDX = (r32((uint32_t)(0x121c3900)));
  /* 121a743a push edx */
  push32((uint32_t)(EDX));
  /* 121a743b call 0x1219ff00 */
  push32(0x121a7440u); f_1219ff00();
  /* 121a7440 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a7446 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a744a jne 0x121a7451 */
  if (!C.zf) goto L_121a7451;
  /* 121a744c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a744f jmp 0x121a7477 */
  goto L_121a7477;
L_121a7451:;
  /* 121a7451 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7455 jne 0x121a7461 */
  if (!C.zf) goto L_121a7461;
  /* 121a7457 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a745a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a745f jmp 0x121a7477 */
  goto L_121a7477;
L_121a7461:;
  /* 121a7461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7464 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7469 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 121a746c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121a7472 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 121a7475 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_121a7477:;
  /* 121a7477 mov esp, ebp */
  ESP = (EBP);
  /* 121a7479 pop ebp */
  EBP = (pop32());
  /* 121a747a ret  */
  ESPCHK(0x121a7350u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x121a7480 (52 bytes, 19 insns) */
void f_121a7480(void) {
  FTRACE(0x121a7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7480 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121a7484 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 121a7488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a748a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 121a748e jne 0x121a7499 */
  if (!C.zf) goto L_121a7499;
  /* 121a7490 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 121a7494 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121a7496 ret 0x10 */
  ESPCHK(0x121a7480u, _esp0);
  ESP += 20; return;
L_121a7499:;
  /* 121a7499 push ebx */
  push32((uint32_t)(EBX));
  /* 121a749a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121a749c mov ebx, eax */
  EBX = (EAX);
  /* 121a749e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121a74a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121a74a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a74a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121a74ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121a74ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a74b0 pop ebx */
  EBX = (pop32());
  /* 121a74b1 ret 0x10 */
  ESPCHK(0x121a7480u, _esp0);
  ESP += 20; return;
}

/* FUN_100174c0 @ 0x121a74c0 (46 bytes, 18 insns) */
void f_121a74c0(void) {
  FTRACE(0x121a74c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a74c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a74c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a74c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a74c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a74c6 call 0x1219b510 */
  push32(0x121a74cbu); f_1219b510();
  /* 121a74cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a74ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a74d1 push eax */
  push32((uint32_t)(EAX));
  /* 121a74d2 call 0x121a74f0 */
  push32(0x121a74d7u); f_121a74f0();
  /* 121a74d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a74da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a74dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 121a74df call 0x1219b5b0 */
  push32(0x121a74e4u); f_1219b5b0();
  /* 121a74e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a74e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a74ea mov esp, ebp */
  ESP = (EBP);
  /* 121a74ec pop ebp */
  EBP = (pop32());
  /* 121a74ed ret  */
  ESPCHK(0x121a74c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x121a74f0 (198 bytes, 69 insns) */
void f_121a74f0(void) {
  FTRACE(0x121a74f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a74f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a74f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a74f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a74f6 mov eax, dword ptr [0x121c371c] */
  EAX = (r32((uint32_t)(0x121c371c)));
  /* 121a74fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a74fe cmp dword ptr [0x121c5220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c5220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7505 jne 0x121a750e */
  if (!C.zf) goto L_121a750e;
  /* 121a7507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7509 jmp 0x121a75b2 */
  goto L_121a75b2;
L_121a750e:;
  /* 121a750e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7512 jne 0x121a7536 */
  if (!C.zf) goto L_121a7536;
  /* 121a7514 cmp dword ptr [0x121c3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a751b je 0x121a7536 */
  if (C.zf) goto L_121a7536;
  /* 121a751d call 0x121a7610 */
  push32(0x121a7522u); f_121a7610();
  /* 121a7522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7524 je 0x121a752d */
  if (C.zf) goto L_121a752d;
  /* 121a7526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7528 jmp 0x121a75b2 */
  goto L_121a75b2;
L_121a752d:;
  /* 121a752d mov ecx, dword ptr [0x121c371c] */
  ECX = (r32((uint32_t)(0x121c371c)));
  /* 121a7533 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121a7536:;
  /* 121a7536 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a753a je 0x121a75b0 */
  if (C.zf) goto L_121a75b0;
  /* 121a753c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7540 je 0x121a75b0 */
  if (C.zf) goto L_121a75b0;
  /* 121a7542 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7545 push edx */
  push32((uint32_t)(EDX));
  /* 121a7546 call 0x1219a940 */
  push32(0x121a754bu); f_1219a940();
  /* 121a754b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a754e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a7551:;
  /* 121a7551 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7554 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7557 je 0x121a75b0 */
  if (C.zf) goto L_121a75b0;
  /* 121a7559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a755c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a755e push edx */
  push32((uint32_t)(EDX));
  /* 121a755f call 0x1219a940 */
  push32(0x121a7564u); f_1219a940();
  /* 121a7564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7567 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a756a jbe 0x121a75a5 */
  if ((C.cf||C.zf)) goto L_121a75a5;
  /* 121a756c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a756f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a7571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7574 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 121a7578 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a757b jne 0x121a75a5 */
  if (!C.zf) goto L_121a75a5;
  /* 121a757d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7580 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7584 push edx */
  push32((uint32_t)(EDX));
  /* 121a7585 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7588 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a758a push ecx */
  push32((uint32_t)(ECX));
  /* 121a758b call 0x121a75c0 */
  push32(0x121a7590u); f_121a75c0();
  /* 121a7590 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7595 jne 0x121a75a5 */
  if (!C.zf) goto L_121a75a5;
  /* 121a7597 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a759a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a759f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 121a75a3 jmp 0x121a75b2 */
  goto L_121a75b2;
L_121a75a5:;
  /* 121a75a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a75a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a75ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a75ae jmp 0x121a7551 */
  goto L_121a7551;
L_121a75b0:;
  /* 121a75b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a75b2:;
  /* 121a75b2 mov esp, ebp */
  ESP = (EBP);
  /* 121a75b4 pop ebp */
  EBP = (pop32());
  /* 121a75b5 ret  */
  ESPCHK(0x121a74f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x121a75c0 (79 bytes, 32 insns) */
void f_121a75c0(void) {
  FTRACE(0x121a75c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a75c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a75c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a75c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a75c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a75c8 jne 0x121a75ce */
  if (!C.zf) goto L_121a75ce;
  /* 121a75ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a75cc jmp 0x121a760b */
  goto L_121a760b;
L_121a75ce:;
  /* 121a75ce mov eax, dword ptr [0x121c4de4] */
  EAX = (r32((uint32_t)(0x121c4de4)));
  /* 121a75d3 push eax */
  push32((uint32_t)(EAX));
  /* 121a75d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a75d7 push ecx */
  push32((uint32_t)(ECX));
  /* 121a75d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a75db push edx */
  push32((uint32_t)(EDX));
  /* 121a75dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a75df push eax */
  push32((uint32_t)(EAX));
  /* 121a75e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a75e3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a75e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a75e6 mov edx, dword ptr [0x121c5084] */
  EDX = (r32((uint32_t)(0x121c5084)));
  /* 121a75ec push edx */
  push32((uint32_t)(EDX));
  /* 121a75ed call 0x121a76c0 */
  push32(0x121a75f2u); f_121a76c0();
  /* 121a75f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a75f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a75f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a75fc jne 0x121a7605 */
  if (!C.zf) goto L_121a7605;
  /* 121a75fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 121a7603 jmp 0x121a760b */
  goto L_121a760b;
L_121a7605:;
  /* 121a7605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7608 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121a760b:;
  /* 121a760b mov esp, ebp */
  ESP = (EBP);
  /* 121a760d pop ebp */
  EBP = (pop32());
  /* 121a760e ret  */
  ESPCHK(0x121a75c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017610 @ 0x121a7610 (174 bytes, 66 insns) */
void f_121a7610(void) {
  FTRACE(0x121a7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7610 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7611 mov ebp, esp */
  EBP = (ESP);
  /* 121a7613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7616 mov eax, dword ptr [0x121c3724] */
  EAX = (r32((uint32_t)(0x121c3724)));
  /* 121a761b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a761e:;
  /* 121a761e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7621 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7624 je 0x121a76b8 */
  if (C.zf) goto L_121a76b8;
  /* 121a762a push 0 */
  push32((uint32_t)(0x0u));
  /* 121a762c push 0 */
  push32((uint32_t)(0x0u));
  /* 121a762e push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7630 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7632 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a7634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7637 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a7639 push eax */
  push32((uint32_t)(EAX));
  /* 121a763a push 0 */
  push32((uint32_t)(0x0u));
  /* 121a763c push 1 */
  push32((uint32_t)(0x1u));
  /* 121a763e call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a7644u);
  /* 121a7644 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a7647 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a764b jne 0x121a7652 */
  if (!C.zf) goto L_121a7652;
  /* 121a764d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7650 jmp 0x121a76ba */
  goto L_121a76ba;
L_121a7652:;
  /* 121a7652 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121a7654 push 0x121bf9dc */
  push32((uint32_t)(0x121bf9dcu));
  /* 121a7659 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a765b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a765e push ecx */
  push32((uint32_t)(ECX));
  /* 121a765f call 0x12197b10 */
  push32(0x121a7664u); f_12197b10();
  /* 121a7664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7667 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a766a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a766e jne 0x121a7675 */
  if (!C.zf) goto L_121a7675;
  /* 121a7670 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7673 jmp 0x121a76ba */
  goto L_121a76ba;
L_121a7675:;
  /* 121a7675 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7677 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a767c push edx */
  push32((uint32_t)(EDX));
  /* 121a767d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7680 push eax */
  push32((uint32_t)(EAX));
  /* 121a7681 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a7683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7686 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a7688 push edx */
  push32((uint32_t)(EDX));
  /* 121a7689 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a768b push 1 */
  push32((uint32_t)(0x1u));
  /* 121a768d call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a7693u);
  /* 121a7693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7695 jne 0x121a769c */
  if (!C.zf) goto L_121a769c;
  /* 121a7697 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a769a jmp 0x121a76ba */
  goto L_121a76ba;
L_121a769c:;
  /* 121a769c push 0 */
  push32((uint32_t)(0x0u));
  /* 121a769e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a76a1 push eax */
  push32((uint32_t)(EAX));
  /* 121a76a2 call 0x121a7b10 */
  push32(0x121a76a7u); f_121a7b10();
  /* 121a76a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a76aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a76ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a76b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a76b3 jmp 0x121a761e */
  goto L_121a761e;
L_121a76b8:;
  /* 121a76b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a76ba:;
  /* 121a76ba mov esp, ebp */
  ESP = (EBP);
  /* 121a76bc pop ebp */
  EBP = (pop32());
  /* 121a76bd ret  */
  ESPCHK(0x121a7610u, _esp0);
  ESP += 4; return;
}

/* FUN_100176c0 @ 0x121a76c0 (970 bytes, 340 insns) */
void f_121a76c0(void) {
  FTRACE(0x121a76c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a76c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a76c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a76c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121a76c5 push 0x121bfa30 */
  push32((uint32_t)(0x121bfa30u));
  /* 121a76ca push 0x121a0c18 */
  push32((uint32_t)(0x121a0c18u));
  /* 121a76cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121a76d5 push eax */
  push32((uint32_t)(EAX));
  /* 121a76d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121a76dd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a76e0 push ebx */
  push32((uint32_t)(EBX));
  /* 121a76e1 push esi */
  push32((uint32_t)(ESI));
  /* 121a76e2 push edi */
  push32((uint32_t)(EDI));
  /* 121a76e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a76e6 cmp dword ptr [0x121c3a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a76ed jne 0x121a7746 */
  if (!C.zf) goto L_121a7746;
  /* 121a76ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121a76f1 push 0x121bf08c */
  push32((uint32_t)(0x121bf08cu));
  /* 121a76f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a76f8 push 0x121bf08c */
  push32((uint32_t)(0x121bf08cu));
  /* 121a76fd push 0 */
  push32((uint32_t)(0x0u));
  /* 121a76ff push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7701 call dword ptr [0x121c6294] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6294))), 0x121a7707u);
  /* 121a7707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7709 je 0x121a7717 */
  if (C.zf) goto L_121a7717;
  /* 121a770b mov dword ptr [0x121c3a64], 1 */
  w32((uint32_t)(0x121c3a64), (0x1u));
  /* 121a7715 jmp 0x121a7746 */
  goto L_121a7746;
L_121a7717:;
  /* 121a7717 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a7719 push 0x121bf088 */
  push32((uint32_t)(0x121bf088u));
  /* 121a771e push 1 */
  push32((uint32_t)(0x1u));
  /* 121a7720 push 0x121bf088 */
  push32((uint32_t)(0x121bf088u));
  /* 121a7725 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7727 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7729 call dword ptr [0x121c62a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62a0))), 0x121a772fu);
  /* 121a772f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7731 je 0x121a773f */
  if (C.zf) goto L_121a773f;
  /* 121a7733 mov dword ptr [0x121c3a64], 2 */
  w32((uint32_t)(0x121c3a64), (0x2u));
  /* 121a773d jmp 0x121a7746 */
  goto L_121a7746;
L_121a773f:;
  /* 121a773f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7741 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7746:;
  /* 121a7746 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a774a jle 0x121a775f */
  if ((C.zf||C.sf!=C.of)) goto L_121a775f;
  /* 121a774c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a774f push eax */
  push32((uint32_t)(EAX));
  /* 121a7750 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a7753 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7754 call 0x121a7ac0 */
  push32(0x121a7759u); f_121a7ac0();
  /* 121a7759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a775c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_121a775f:;
  /* 121a775f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7763 jle 0x121a7778 */
  if ((C.zf||C.sf!=C.of)) goto L_121a7778;
  /* 121a7765 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a7768 push edx */
  push32((uint32_t)(EDX));
  /* 121a7769 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a776c push eax */
  push32((uint32_t)(EAX));
  /* 121a776d call 0x121a7ac0 */
  push32(0x121a7772u); f_121a7ac0();
  /* 121a7772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7775 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_121a7778:;
  /* 121a7778 cmp dword ptr [0x121c3a64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a777f jne 0x121a77a4 */
  if (!C.zf) goto L_121a77a4;
  /* 121a7781 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a7784 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7785 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a7788 push edx */
  push32((uint32_t)(EDX));
  /* 121a7789 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a778c push eax */
  push32((uint32_t)(EAX));
  /* 121a778d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a7790 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7791 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7794 push edx */
  push32((uint32_t)(EDX));
  /* 121a7795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7798 push eax */
  push32((uint32_t)(EAX));
  /* 121a7799 call dword ptr [0x121c62a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62a0))), 0x121a779fu);
  /* 121a779f jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a77a4:;
  /* 121a77a4 cmp dword ptr [0x121c3a64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77ab jne 0x121a7aa2 */
  if (!C.zf) goto L_121a7aa2;
  /* 121a77b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77b5 jne 0x121a77c0 */
  if (!C.zf) goto L_121a77c0;
  /* 121a77b7 mov ecx, dword ptr [0x121c3910] */
  ECX = (r32((uint32_t)(0x121c3910)));
  /* 121a77bd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_121a77c0:;
  /* 121a77c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77c4 je 0x121a77d0 */
  if (C.zf) goto L_121a77d0;
  /* 121a77c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77ca jne 0x121a794c */
  if (!C.zf) goto L_121a794c;
L_121a77d0:;
  /* 121a77d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a77d3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77d6 jne 0x121a77e2 */
  if (!C.zf) goto L_121a77e2;
  /* 121a77d8 mov eax, 2 */
  EAX = (0x2u);
  /* 121a77dd jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a77e2:;
  /* 121a77e2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77e6 jle 0x121a77f2 */
  if ((C.zf||C.sf!=C.of)) goto L_121a77f2;
  /* 121a77e8 mov eax, 1 */
  EAX = (0x1u);
  /* 121a77ed jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a77f2:;
  /* 121a77f2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a77f6 jle 0x121a7802 */
  if ((C.zf||C.sf!=C.of)) goto L_121a7802;
  /* 121a77f8 mov eax, 3 */
  EAX = (0x3u);
  /* 121a77fd jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7802:;
  /* 121a7802 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 121a7805 push eax */
  push32((uint32_t)(EAX));
  /* 121a7806 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a7809 push ecx */
  push32((uint32_t)(ECX));
  /* 121a780a call dword ptr [0x121c62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62ec))), 0x121a7810u);
  /* 121a7810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7812 jne 0x121a781b */
  if (!C.zf) goto L_121a781b;
  /* 121a7814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7816 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a781b:;
  /* 121a781b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a781f jne 0x121a7827 */
  if (!C.zf) goto L_121a7827;
  /* 121a7821 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7825 je 0x121a7854 */
  if (C.zf) goto L_121a7854;
L_121a7827:;
  /* 121a7827 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a782b jne 0x121a7833 */
  if (!C.zf) goto L_121a7833;
  /* 121a782d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7831 je 0x121a7854 */
  if (C.zf) goto L_121a7854;
L_121a7833:;
  /* 121a7833 push 0x121bf9f0 */
  push32((uint32_t)(0x121bf9f0u));
  /* 121a7838 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a783a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 121a783f push 0x121bf9e8 */
  push32((uint32_t)(0x121bf9e8u));
  /* 121a7844 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7846 call 0x12196bd0 */
  push32(0x121a784bu); f_12196bd0();
  /* 121a784b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a784e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7851 jne 0x121a7854 */
  if (!C.zf) goto L_121a7854;
  /* 121a7853 int3  */
  x86_unimpl("int3 @ 0x121a7853");
L_121a7854:;
  /* 121a7854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a7856 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7858 jne 0x121a781b */
  if (!C.zf) goto L_121a781b;
  /* 121a785a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a785e jle 0x121a78d3 */
  if ((C.zf||C.sf!=C.of)) goto L_121a78d3;
  /* 121a7860 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7864 jae 0x121a7870 */
  if (!C.cf) goto L_121a7870;
  /* 121a7866 mov eax, 3 */
  EAX = (0x3u);
  /* 121a786b jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7870:;
  /* 121a7870 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 121a7873 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 121a7876 jmp 0x121a7881 */
  goto L_121a7881;
L_121a7878:;
  /* 121a7878 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a787b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a787e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_121a7881:;
  /* 121a7881 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a7884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7886 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a7888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a788a je 0x121a78c9 */
  if (C.zf) goto L_121a78c9;
  /* 121a788c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a788f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a7891 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121a7894 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7896 je 0x121a78c9 */
  if (C.zf) goto L_121a78c9;
  /* 121a7898 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a789b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a789d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a789f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a78a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a78a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a78a6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a78a8 jl 0x121a78c7 */
  if ((C.sf!=C.of)) goto L_121a78c7;
  /* 121a78aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a78ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a78af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a78b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a78b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a78b6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121a78b9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a78bb jg 0x121a78c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a78c7;
  /* 121a78bd mov eax, 2 */
  EAX = (0x2u);
  /* 121a78c2 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a78c7:;
  /* 121a78c7 jmp 0x121a7878 */
  goto L_121a7878;
L_121a78c9:;
  /* 121a78c9 mov eax, 3 */
  EAX = (0x3u);
  /* 121a78ce jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a78d3:;
  /* 121a78d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a78d7 jle 0x121a794c */
  if ((C.zf||C.sf!=C.of)) goto L_121a794c;
  /* 121a78d9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a78dd jae 0x121a78e9 */
  if (!C.cf) goto L_121a78e9;
  /* 121a78df mov eax, 1 */
  EAX = (0x1u);
  /* 121a78e4 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a78e9:;
  /* 121a78e9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 121a78ec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 121a78ef jmp 0x121a78fa */
  goto L_121a78fa;
L_121a78f1:;
  /* 121a78f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a78f4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a78f7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_121a78fa:;
  /* 121a78fa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a78fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a78ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a7901 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7903 je 0x121a7942 */
  if (C.zf) goto L_121a7942;
  /* 121a7905 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a7908 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a790a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121a790d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a790f je 0x121a7942 */
  if (C.zf) goto L_121a7942;
  /* 121a7911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a7914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7916 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a7918 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a791b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a791d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a791f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7921 jl 0x121a7940 */
  if ((C.sf!=C.of)) goto L_121a7940;
  /* 121a7923 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a7926 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a7928 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a792a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121a792d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a792f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121a7932 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7934 jg 0x121a7940 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a7940;
  /* 121a7936 mov eax, 2 */
  EAX = (0x2u);
  /* 121a793b jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7940:;
  /* 121a7940 jmp 0x121a78f1 */
  goto L_121a78f1;
L_121a7942:;
  /* 121a7942 mov eax, 1 */
  EAX = (0x1u);
  /* 121a7947 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a794c:;
  /* 121a794c push 0 */
  push32((uint32_t)(0x0u));
  /* 121a794e push 0 */
  push32((uint32_t)(0x0u));
  /* 121a7950 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a7953 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7954 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a7957 push edx */
  push32((uint32_t)(EDX));
  /* 121a7958 push 9 */
  push32((uint32_t)(0x9u));
  /* 121a795a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a795d push eax */
  push32((uint32_t)(EAX));
  /* 121a795e call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a7964u);
  /* 121a7964 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121a7967 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a796b jne 0x121a7974 */
  if (!C.zf) goto L_121a7974;
  /* 121a796d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a796f jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7974:;
  /* 121a7974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a797b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a797e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a7980 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7983 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a7985 call 0x1219acb0 */
  push32(0x121a798au); f_1219acb0();
  /* 121a798a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 121a798d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a7990 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 121a7993 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121a7996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a799d jmp 0x121a79b6 */
  goto L_121a79b6;
  /* 121a799f mov eax, 1 */
  EAX = (0x1u);
  /* 121a79a4 ret  */
  ESPCHK(0x121a76c0u, _esp0);
  ESP += 4; return;
  /* 121a79a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a79a8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121a79af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a79b6:;
  /* 121a79b6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a79ba jne 0x121a79c3 */
  if (!C.zf) goto L_121a79c3;
  /* 121a79bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a79be jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a79c3:;
  /* 121a79c3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a79c6 push edx */
  push32((uint32_t)(EDX));
  /* 121a79c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a79ca push eax */
  push32((uint32_t)(EAX));
  /* 121a79cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a79ce push ecx */
  push32((uint32_t)(ECX));
  /* 121a79cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a79d2 push edx */
  push32((uint32_t)(EDX));
  /* 121a79d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a79d5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a79d8 push eax */
  push32((uint32_t)(EAX));
  /* 121a79d9 call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a79dfu);
  /* 121a79df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a79e1 jne 0x121a79ea */
  if (!C.zf) goto L_121a79ea;
  /* 121a79e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a79e5 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a79ea:;
  /* 121a79ea push 0 */
  push32((uint32_t)(0x0u));
  /* 121a79ec push 0 */
  push32((uint32_t)(0x0u));
  /* 121a79ee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a79f1 push ecx */
  push32((uint32_t)(ECX));
  /* 121a79f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a79f5 push edx */
  push32((uint32_t)(EDX));
  /* 121a79f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 121a79f8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a79fb push eax */
  push32((uint32_t)(EAX));
  /* 121a79fc call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a7a02u);
  /* 121a7a02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121a7a05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7a09 jne 0x121a7a12 */
  if (!C.zf) goto L_121a7a12;
  /* 121a7a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7a0d jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7a12:;
  /* 121a7a12 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a7a19 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7a1c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a7a1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7a21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a7a23 call 0x1219acb0 */
  push32(0x121a7a28u); f_1219acb0();
  /* 121a7a28 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 121a7a2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a7a2e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 121a7a31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 121a7a34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a7a3b jmp 0x121a7a54 */
  goto L_121a7a54;
  /* 121a7a3d mov eax, 1 */
  EAX = (0x1u);
  /* 121a7a42 ret  */
  ESPCHK(0x121a76c0u, _esp0);
  ESP += 4; return;
  /* 121a7a43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a7a46 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 121a7a4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a7a54:;
  /* 121a7a54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7a58 jne 0x121a7a5e */
  if (!C.zf) goto L_121a7a5e;
  /* 121a7a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7a5c jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7a5e:;
  /* 121a7a5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7a61 push edx */
  push32((uint32_t)(EDX));
  /* 121a7a62 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a7a65 push eax */
  push32((uint32_t)(EAX));
  /* 121a7a66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a7a69 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7a6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a7a6d push edx */
  push32((uint32_t)(EDX));
  /* 121a7a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 121a7a70 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a7a73 push eax */
  push32((uint32_t)(EAX));
  /* 121a7a74 call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a7a7au);
  /* 121a7a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7a7c jne 0x121a7a82 */
  if (!C.zf) goto L_121a7a82;
  /* 121a7a7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7a80 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7a82:;
  /* 121a7a82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a7a85 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7a86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a7a89 push edx */
  push32((uint32_t)(EDX));
  /* 121a7a8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a7a8d push eax */
  push32((uint32_t)(EAX));
  /* 121a7a8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a7a91 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7a92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7a95 push edx */
  push32((uint32_t)(EDX));
  /* 121a7a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7a99 push eax */
  push32((uint32_t)(EAX));
  /* 121a7a9a call dword ptr [0x121c6294] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6294))), 0x121a7aa0u);
  /* 121a7aa0 jmp 0x121a7aa4 */
  goto L_121a7aa4;
L_121a7aa2:;
  /* 121a7aa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a7aa4:;
  /* 121a7aa4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 121a7aa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7aaa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121a7ab1 pop edi */
  EDI = (pop32());
  /* 121a7ab2 pop esi */
  ESI = (pop32());
  /* 121a7ab3 pop ebx */
  EBX = (pop32());
  /* 121a7ab4 mov esp, ebp */
  ESP = (EBP);
  /* 121a7ab6 pop ebp */
  EBP = (pop32());
  /* 121a7ab7 ret  */
  ESPCHK(0x121a76c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ac0 @ 0x121a7ac0 (80 bytes, 32 insns) */
void f_121a7ac0(void) {
  FTRACE(0x121a7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 121a7ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7ac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7ac9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a7acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7acf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a7ad2:;
  /* 121a7ad2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7ad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7ad8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7adb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a7ade test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7ae0 je 0x121a7af7 */
  if (C.zf) goto L_121a7af7;
  /* 121a7ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7ae5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a7ae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7aea je 0x121a7af7 */
  if (C.zf) goto L_121a7af7;
  /* 121a7aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7aef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7af2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a7af5 jmp 0x121a7ad2 */
  goto L_121a7ad2;
L_121a7af7:;
  /* 121a7af7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7afa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a7afd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7aff jne 0x121a7b09 */
  if (!C.zf) goto L_121a7b09;
  /* 121a7b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7b04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7b07 jmp 0x121a7b0c */
  goto L_121a7b0c;
L_121a7b09:;
  /* 121a7b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_121a7b0c:;
  /* 121a7b0c mov esp, ebp */
  ESP = (EBP);
  /* 121a7b0e pop ebp */
  EBP = (pop32());
  /* 121a7b0f ret  */
  ESPCHK(0x121a7ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b10 @ 0x121a7b10 (736 bytes, 224 insns) */
void f_121a7b10(void) {
  FTRACE(0x121a7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7b11 mov ebp, esp */
  EBP = (ESP);
  /* 121a7b13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7b16 push esi */
  push32((uint32_t)(ESI));
  /* 121a7b17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b1b je 0x121a7b3c */
  if (C.zf) goto L_121a7b3c;
  /* 121a7b1d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121a7b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7b22 push eax */
  push32((uint32_t)(EAX));
  /* 121a7b23 call 0x121a7f60 */
  push32(0x121a7b28u); f_121a7f60();
  /* 121a7b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7b2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121a7b2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b32 je 0x121a7b3c */
  if (C.zf) goto L_121a7b3c;
  /* 121a7b34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7b37 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b3a jne 0x121a7b44 */
  if (!C.zf) goto L_121a7b44;
L_121a7b3c:;
  /* 121a7b3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7b3f jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7b44:;
  /* 121a7b44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a7b47 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121a7b4b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a7b4d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7b4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 121a7b50 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a7b53 mov ecx, dword ptr [0x121c371c] */
  ECX = (r32((uint32_t)(0x121c371c)));
  /* 121a7b59 cmp ecx, dword ptr [0x121c3720] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c3720))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b5f jne 0x121a7b75 */
  if (!C.zf) goto L_121a7b75;
  /* 121a7b61 mov edx, dword ptr [0x121c371c] */
  EDX = (r32((uint32_t)(0x121c371c)));
  /* 121a7b67 push edx */
  push32((uint32_t)(EDX));
  /* 121a7b68 call 0x121a7e70 */
  push32(0x121a7b6du); f_121a7e70();
  /* 121a7b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7b70 mov dword ptr [0x121c371c], eax */
  w32((uint32_t)(0x121c371c), (EAX));
L_121a7b75:;
  /* 121a7b75 cmp dword ptr [0x121c371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b7c jne 0x121a7c35 */
  if (!C.zf) goto L_121a7c35;
  /* 121a7b82 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b86 je 0x121a7ba7 */
  if (C.zf) goto L_121a7ba7;
  /* 121a7b88 cmp dword ptr [0x121c3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7b8f je 0x121a7ba7 */
  if (C.zf) goto L_121a7ba7;
  /* 121a7b91 call 0x121a7610 */
  push32(0x121a7b96u); f_121a7610();
  /* 121a7b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7b98 je 0x121a7ba2 */
  if (C.zf) goto L_121a7ba2;
  /* 121a7b9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7b9d jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7ba2:;
  /* 121a7ba2 jmp 0x121a7c35 */
  goto L_121a7c35;
L_121a7ba7:;
  /* 121a7ba7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7bab je 0x121a7bb4 */
  if (C.zf) goto L_121a7bb4;
  /* 121a7bad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7baf jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7bb4:;
  /* 121a7bb4 cmp dword ptr [0x121c371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7bbb jne 0x121a7bf4 */
  if (!C.zf) goto L_121a7bf4;
  /* 121a7bbd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 121a7bc2 push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7bc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a7bcb call 0x12197b10 */
  push32(0x121a7bd0u); f_12197b10();
  /* 121a7bd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7bd3 mov dword ptr [0x121c371c], eax */
  w32((uint32_t)(0x121c371c), (EAX));
  /* 121a7bd8 cmp dword ptr [0x121c371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7bdf jne 0x121a7be9 */
  if (!C.zf) goto L_121a7be9;
  /* 121a7be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7be4 jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7be9:;
  /* 121a7be9 mov eax, dword ptr [0x121c371c] */
  EAX = (r32((uint32_t)(0x121c371c)));
  /* 121a7bee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121a7bf4:;
  /* 121a7bf4 cmp dword ptr [0x121c3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7bfb jne 0x121a7c35 */
  if (!C.zf) goto L_121a7c35;
  /* 121a7bfd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 121a7c02 push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7c09 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a7c0b call 0x12197b10 */
  push32(0x121a7c10u); f_12197b10();
  /* 121a7c10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7c13 mov dword ptr [0x121c3724], eax */
  w32((uint32_t)(0x121c3724), (EAX));
  /* 121a7c18 cmp dword ptr [0x121c3724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7c1f jne 0x121a7c29 */
  if (!C.zf) goto L_121a7c29;
  /* 121a7c21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7c24 jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7c29:;
  /* 121a7c29 mov ecx, dword ptr [0x121c3724] */
  ECX = (r32((uint32_t)(0x121c3724)));
  /* 121a7c2f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_121a7c35:;
  /* 121a7c35 mov edx, dword ptr [0x121c371c] */
  EDX = (r32((uint32_t)(0x121c371c)));
  /* 121a7c3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121a7c3e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a7c41 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7c44 push eax */
  push32((uint32_t)(EAX));
  /* 121a7c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7c48 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7c49 call 0x121a7df0 */
  push32(0x121a7c4eu); f_121a7df0();
  /* 121a7c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7c51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a7c54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7c58 jl 0x121a7cf1 */
  if ((C.sf!=C.of)) goto L_121a7cf1;
  /* 121a7c5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7c61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7c64 je 0x121a7cf1 */
  if (C.zf) goto L_121a7cf1;
  /* 121a7c6a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7c6e je 0x121a7ce3 */
  if (C.zf) goto L_121a7ce3;
  /* 121a7c70 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7c72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7c75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7c78 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a7c7b push edx */
  push32((uint32_t)(EDX));
  /* 121a7c7c call 0x121985a0 */
  push32(0x121a7c81u); f_121985a0();
  /* 121a7c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7c84 jmp 0x121a7c8f */
  goto L_121a7c8f;
L_121a7c86:;
  /* 121a7c86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7c8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a7c8f:;
  /* 121a7c8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7c92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7c95 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7c99 je 0x121a7cb0 */
  if (C.zf) goto L_121a7cb0;
  /* 121a7c9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7c9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7ca1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7ca4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7ca7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 121a7cab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 121a7cae jmp 0x121a7c86 */
  goto L_121a7c86;
L_121a7cb0:;
  /* 121a7cb0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 121a7cb5 push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7cba push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7cbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7cbf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121a7cc2 push eax */
  push32((uint32_t)(EAX));
  /* 121a7cc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7cc7 call 0x12197fa0 */
  push32(0x121a7cccu); f_12197fa0();
  /* 121a7ccc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7ccf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a7cd2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7cd6 je 0x121a7ce1 */
  if (C.zf) goto L_121a7ce1;
  /* 121a7cd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7cdb mov dword ptr [0x121c371c], edx */
  w32((uint32_t)(0x121c371c), (EDX));
L_121a7ce1:;
  /* 121a7ce1 jmp 0x121a7cef */
  goto L_121a7cef;
L_121a7ce3:;
  /* 121a7ce3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7ce6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7cec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_121a7cef:;
  /* 121a7cef jmp 0x121a7d64 */
  goto L_121a7d64;
L_121a7cf1:;
  /* 121a7cf1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7cf5 jne 0x121a7d5d */
  if (!C.zf) goto L_121a7d5d;
  /* 121a7cf7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7cfb jge 0x121a7d05 */
  if ((C.sf==C.of)) goto L_121a7d05;
  /* 121a7cfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7d00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a7d02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a7d05:;
  /* 121a7d05 push 0xce */
  push32((uint32_t)(0xceu));
  /* 121a7d0a push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7d0f push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7d11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7d14 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 121a7d1b push edx */
  push32((uint32_t)(EDX));
  /* 121a7d1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7d1f push eax */
  push32((uint32_t)(EAX));
  /* 121a7d20 call 0x12197fa0 */
  push32(0x121a7d25u); f_12197fa0();
  /* 121a7d25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7d28 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a7d2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7d2f jne 0x121a7d39 */
  if (!C.zf) goto L_121a7d39;
  /* 121a7d31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7d34 jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7d39:;
  /* 121a7d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7d3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7d42 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 121a7d45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7d48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7d4b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 121a7d53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7d56 mov dword ptr [0x121c371c], eax */
  w32((uint32_t)(0x121c371c), (EAX));
  /* 121a7d5b jmp 0x121a7d64 */
  goto L_121a7d64;
L_121a7d5d:;
  /* 121a7d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7d5f jmp 0x121a7deb */
  goto L_121a7deb;
L_121a7d64:;
  /* 121a7d64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7d68 je 0x121a7de9 */
  if (C.zf) goto L_121a7de9;
  /* 121a7d6a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 121a7d6f push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7d74 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7d79 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7d7a call 0x1219a940 */
  push32(0x121a7d7fu); f_1219a940();
  /* 121a7d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7d82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7d85 push eax */
  push32((uint32_t)(EAX));
  /* 121a7d86 call 0x12197b10 */
  push32(0x121a7d8bu); f_12197b10();
  /* 121a7d8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7d8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121a7d91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7d95 je 0x121a7de9 */
  if (C.zf) goto L_121a7de9;
  /* 121a7d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7d9a push edx */
  push32((uint32_t)(EDX));
  /* 121a7d9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7d9e push eax */
  push32((uint32_t)(EAX));
  /* 121a7d9f call 0x1219aac0 */
  push32(0x121a7da4u); f_1219aac0();
  /* 121a7da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7da7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a7daa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7dad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7db0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7db2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a7db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7db8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121a7dbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7dc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a7dc4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a7dc7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a7dc9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7dcb not edx */
  EDX = (~(EDX));
  /* 121a7dcd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 121a7dd0 push edx */
  push32((uint32_t)(EDX));
  /* 121a7dd1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7dd4 push eax */
  push32((uint32_t)(EAX));
  /* 121a7dd5 call dword ptr [0x121c6290] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6290))), 0x121a7ddbu);
  /* 121a7ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7ddd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7de0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7de1 call 0x121985a0 */
  push32(0x121a7de6u); f_121985a0();
  /* 121a7de6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a7de9:;
  /* 121a7de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a7deb:;
  /* 121a7deb pop esi */
  ESI = (pop32());
  /* 121a7dec mov esp, ebp */
  ESP = (EBP);
  /* 121a7dee pop ebp */
  EBP = (pop32());
  /* 121a7def ret  */
  ESPCHK(0x121a7b10u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x121a7df0 (124 bytes, 47 insns) */
void f_121a7df0(void) {
  FTRACE(0x121a7df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7df0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7df1 mov ebp, esp */
  EBP = (ESP);
  /* 121a7df3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7df4 mov eax, dword ptr [0x121c371c] */
  EAX = (r32((uint32_t)(0x121c371c)));
  /* 121a7df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a7dfc jmp 0x121a7e07 */
  goto L_121a7e07;
L_121a7dfe:;
  /* 121a7dfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e01 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7e04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a7e07:;
  /* 121a7e07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e0a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7e0d je 0x121a7e5a */
  if (C.zf) goto L_121a7e5a;
  /* 121a7e0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7e12 push eax */
  push32((uint32_t)(EAX));
  /* 121a7e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a7e18 push edx */
  push32((uint32_t)(EDX));
  /* 121a7e19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7e1c push eax */
  push32((uint32_t)(EAX));
  /* 121a7e1d call 0x121a75c0 */
  push32(0x121a7e22u); f_121a75c0();
  /* 121a7e22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a7e27 jne 0x121a7e58 */
  if (!C.zf) goto L_121a7e58;
  /* 121a7e29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a7e2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7e31 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 121a7e35 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7e38 je 0x121a7e4a */
  if (C.zf) goto L_121a7e4a;
  /* 121a7e3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e3d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a7e3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7e42 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 121a7e46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7e48 jne 0x121a7e58 */
  if (!C.zf) goto L_121a7e58;
L_121a7e4a:;
  /* 121a7e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e4d sub eax, dword ptr [0x121c371c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c371c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7e53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121a7e56 jmp 0x121a7e68 */
  goto L_121a7e68;
L_121a7e58:;
  /* 121a7e58 jmp 0x121a7dfe */
  goto L_121a7dfe;
L_121a7e5a:;
  /* 121a7e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7e5d sub eax, dword ptr [0x121c371c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c371c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7e63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 121a7e66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_121a7e68:;
  /* 121a7e68 mov esp, ebp */
  ESP = (EBP);
  /* 121a7e6a pop ebp */
  EBP = (pop32());
  /* 121a7e6b ret  */
  ESPCHK(0x121a7df0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x121a7e70 (238 bytes, 80 insns) */
void f_121a7e70(void) {
  FTRACE(0x121a7e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7e70 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7e71 mov ebp, esp */
  EBP = (ESP);
  /* 121a7e73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a7e76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a7e7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7e80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a7e83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7e87 jne 0x121a7e90 */
  if (!C.zf) goto L_121a7e90;
  /* 121a7e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7e8b jmp 0x121a7f5a */
  goto L_121a7f5a;
L_121a7e90:;
  /* 121a7e90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7e93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a7e95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7e98 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7e9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a7e9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7ea0 je 0x121a7ead */
  if (C.zf) goto L_121a7ead;
  /* 121a7ea2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7ea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7ea8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121a7eab jmp 0x121a7e90 */
  goto L_121a7e90;
L_121a7ead:;
  /* 121a7ead push 0x146 */
  push32((uint32_t)(0x146u));
  /* 121a7eb2 push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7eb9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a7ebc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 121a7ec3 push eax */
  push32((uint32_t)(EAX));
  /* 121a7ec4 call 0x12197b10 */
  push32(0x121a7ec9u); f_12197b10();
  /* 121a7ec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7ecc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a7ecf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7ed2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a7ed5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7ed9 jne 0x121a7ee5 */
  if (!C.zf) goto L_121a7ee5;
  /* 121a7edb push 9 */
  push32((uint32_t)(0x9u));
  /* 121a7edd call 0x12196a80 */
  push32(0x121a7ee2u); f_12196a80();
  /* 121a7ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a7ee5:;
  /* 121a7ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7ee8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121a7eeb:;
  /* 121a7eeb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7eee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7ef1 je 0x121a7f4e */
  if (C.zf) goto L_121a7f4e;
  /* 121a7ef3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 121a7ef8 push 0x121bfa48 */
  push32((uint32_t)(0x121bfa48u));
  /* 121a7efd push 2 */
  push32((uint32_t)(0x2u));
  /* 121a7eff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7f02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a7f04 push edx */
  push32((uint32_t)(EDX));
  /* 121a7f05 call 0x1219a940 */
  push32(0x121a7f0au); f_1219a940();
  /* 121a7f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f10 push eax */
  push32((uint32_t)(EAX));
  /* 121a7f11 call 0x12197b10 */
  push32(0x121a7f16u); f_12197b10();
  /* 121a7f16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7f1c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a7f1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7f21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7f24 je 0x121a7f3a */
  if (C.zf) goto L_121a7f3a;
  /* 121a7f26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7f29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a7f2b push ecx */
  push32((uint32_t)(ECX));
  /* 121a7f2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7f2f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a7f31 push eax */
  push32((uint32_t)(EAX));
  /* 121a7f32 call 0x1219aac0 */
  push32(0x121a7f37u); f_1219aac0();
  /* 121a7f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a7f3a:;
  /* 121a7f3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a7f3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a7f43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7f46 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f49 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a7f4c jmp 0x121a7eeb */
  goto L_121a7eeb;
L_121a7f4e:;
  /* 121a7f4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a7f51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a7f57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a7f5a:;
  /* 121a7f5a mov esp, ebp */
  ESP = (EBP);
  /* 121a7f5c pop ebp */
  EBP = (pop32());
  /* 121a7f5d ret  */
  ESPCHK(0x121a7e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f60 @ 0x121a7f60 (237 bytes, 81 insns) */
void f_121a7f60(void) {
  FTRACE(0x121a7f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a7f60 push ebp */
  push32((uint32_t)(EBP));
  /* 121a7f61 mov ebp, esp */
  EBP = (ESP);
  /* 121a7f63 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7f64 cmp dword ptr [0x121c4e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c4e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a7f6b jne 0x121a7f82 */
  if (!C.zf) goto L_121a7f82;
  /* 121a7f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a7f70 push eax */
  push32((uint32_t)(EAX));
  /* 121a7f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7f74 push ecx */
  push32((uint32_t)(ECX));
  /* 121a7f75 call 0x121a8060 */
  push32(0x121a7f7au); f_121a8060();
  /* 121a7f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f7d jmp 0x121a8049 */
  goto L_121a8049;
L_121a7f82:;
  /* 121a7f82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121a7f84 call 0x1219b510 */
  push32(0x121a7f89u); f_1219b510();
  /* 121a7f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f8c jmp 0x121a7f97 */
  goto L_121a7f97;
L_121a7f8e:;
  /* 121a7f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7f91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7f94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121a7f97:;
  /* 121a7f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7f9a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 121a7f9e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 121a7fa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7fa5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a7fab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a7fad je 0x121a802b */
  if (C.zf) goto L_121a802b;
  /* 121a7faf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7fb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a7fb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a7fb9 mov cl, byte ptr [eax + 0x121c4f81] */
  CL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 121a7fbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 121a7fc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a7fc4 je 0x121a8016 */
  if (C.zf) goto L_121a8016;
  /* 121a7fc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7fc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7fcc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121a7fcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7fd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a7fd4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a7fd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a7fd8 jne 0x121a7fe8 */
  if (!C.zf) goto L_121a7fe8;
  /* 121a7fda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121a7fdc call 0x1219b5b0 */
  push32(0x121a7fe1u); f_1219b5b0();
  /* 121a7fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a7fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a7fe6 jmp 0x121a8049 */
  goto L_121a8049;
L_121a7fe8:;
  /* 121a7fe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a7feb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a7ff1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 121a7ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a7ff7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a7ff9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a7ffb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121a7ffd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a8000 jne 0x121a8014 */
  if (!C.zf) goto L_121a8014;
  /* 121a8002 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121a8004 call 0x1219b5b0 */
  push32(0x121a8009u); f_1219b5b0();
  /* 121a8009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a800c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a800f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a8012 jmp 0x121a8049 */
  goto L_121a8049;
L_121a8014:;
  /* 121a8014 jmp 0x121a8026 */
  goto L_121a8026;
L_121a8016:;
  /* 121a8016 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a8019 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a801f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a8022 jne 0x121a8026 */
  if (!C.zf) goto L_121a8026;
  /* 121a8024 jmp 0x121a802b */
  goto L_121a802b;
L_121a8026:;
  /* 121a8026 jmp 0x121a7f8e */
  goto L_121a7f8e;
L_121a802b:;
  /* 121a802b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121a802d call 0x1219b5b0 */
  push32(0x121a8032u); f_1219b5b0();
  /* 121a8032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a8035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a8038 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a803d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a8040 jne 0x121a8047 */
  if (!C.zf) goto L_121a8047;
  /* 121a8042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a8045 jmp 0x121a8049 */
  goto L_121a8049;
L_121a8047:;
  /* 121a8047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a8049:;
  /* 121a8049 mov esp, ebp */
  ESP = (EBP);
  /* 121a804b pop ebp */
  EBP = (pop32());
  /* 121a804c ret  */
  ESPCHK(0x121a7f60u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x121a8060 (193 bytes, 87 insns) */
void f_121a8060(void) {
  FTRACE(0x121a8060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a8060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a8062 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 121a8066 push ebx */
  push32((uint32_t)(EBX));
  /* 121a8067 mov ebx, eax */
  EBX = (EAX);
  /* 121a8069 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 121a806c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 121a8070 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121a8076 je 0x121a808b */
  if (C.zf) goto L_121a808b;
L_121a8078:;
  /* 121a8078 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 121a807a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121a807b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a807d je 0x121a8050 */
  if (C.zf) { jmp_ind(0x121a8050u); return; }
  /* 121a807f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 121a8081 je 0x121a80d4 */
  if (C.zf) goto L_121a80d4;
  /* 121a8083 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121a8089 jne 0x121a8078 */
  if (!C.zf) goto L_121a8078;
L_121a808b:;
  /* 121a808b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 121a808d push edi */
  push32((uint32_t)(EDI));
  /* 121a808e mov eax, ebx */
  EAX = (EBX);
  /* 121a8090 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 121a8093 push esi */
  push32((uint32_t)(ESI));
  /* 121a8094 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_121a8096:;
  /* 121a8096 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 121a8098 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 121a809d mov eax, ecx */
  EAX = (ECX);
  /* 121a809f mov esi, edi */
  ESI = (EDI);
  /* 121a80a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 121a80a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121a80a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 121a80a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121a80aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a80ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 121a80af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 121a80b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a80b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 121a80ba jne 0x121a80d8 */
  if (!C.zf) goto L_121a80d8;
  /* 121a80bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 121a80c1 je 0x121a8096 */
  if (C.zf) goto L_121a8096;
  /* 121a80c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 121a80c8 jne 0x121a80d2 */
  if (!C.zf) goto L_121a80d2;
  /* 121a80ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 121a80d0 jne 0x121a8096 */
  if (!C.zf) goto L_121a8096;
L_121a80d2:;
  /* 121a80d2 pop esi */
  ESI = (pop32());
  /* 121a80d3 pop edi */
  EDI = (pop32());
L_121a80d4:;
  /* 121a80d4 pop ebx */
  EBX = (pop32());
  /* 121a80d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a80d7 ret  */
  ESPCHK(0x121a8060u, _esp0);
  ESP += 4; return;
L_121a80d8:;
  /* 121a80d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 121a80db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a80dd je 0x121a8115 */
  if (C.zf) goto L_121a8115;
  /* 121a80df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121a80e1 je 0x121a80d2 */
  if (C.zf) goto L_121a80d2;
  /* 121a80e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a80e5 je 0x121a810e */
  if (C.zf) goto L_121a810e;
  /* 121a80e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 121a80e9 je 0x121a80d2 */
  if (C.zf) goto L_121a80d2;
  /* 121a80eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121a80ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a80f0 je 0x121a8107 */
  if (C.zf) goto L_121a8107;
  /* 121a80f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121a80f4 je 0x121a80d2 */
  if (C.zf) goto L_121a80d2;
  /* 121a80f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a80f8 je 0x121a8100 */
  if (C.zf) goto L_121a8100;
  /* 121a80fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 121a80fc je 0x121a80d2 */
  if (C.zf) goto L_121a80d2;
  /* 121a80fe jmp 0x121a8096 */
  goto L_121a8096;
L_121a8100:;
  /* 121a8100 pop esi */
  ESI = (pop32());
  /* 121a8101 pop edi */
  EDI = (pop32());
  /* 121a8102 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 121a8105 pop ebx */
  EBX = (pop32());
  /* 121a8106 ret  */
  ESPCHK(0x121a8060u, _esp0);
  ESP += 4; return;
L_121a8107:;
  /* 121a8107 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 121a810a pop esi */
  ESI = (pop32());
  /* 121a810b pop edi */
  EDI = (pop32());
  /* 121a810c pop ebx */
  EBX = (pop32());
  /* 121a810d ret  */
  ESPCHK(0x121a8060u, _esp0);
  ESP += 4; return;
L_121a810e:;
  /* 121a810e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 121a8111 pop esi */
  ESI = (pop32());
  /* 121a8112 pop edi */
  EDI = (pop32());
  /* 121a8113 pop ebx */
  EBX = (pop32());
  /* 121a8114 ret  */
  ESPCHK(0x121a8060u, _esp0);
  ESP += 4; return;
L_121a8115:;
  /* 121a8115 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 121a8118 pop esi */
  ESI = (pop32());
  /* 121a8119 pop edi */
  EDI = (pop32());
  /* 121a811a pop ebx */
  EBX = (pop32());
  /* 121a811b ret  */
  ESPCHK(0x121a8060u, _esp0);
  ESP += 4; return;
  /* 121a811c jmp dword ptr [0x121c630c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x121c630c)))); return;
}

/* RtlUnwind @ 0x121a826c (6 bytes, 1 insns) */
void f_121a826c(void) {
  FTRACE(0x121a826cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a826c jmp dword ptr [0x121c62c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x121c62c8)))); return;
}

